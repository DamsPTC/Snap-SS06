/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afda584; end: 10afda5a7; -[SCLensExplorerSectionDataSource copyWithZone:] */

undefined8 FUN_10afda584(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afda5a8; end: 10afda61b; -[SCLensExplorerSectionDataSource hash] */

undefined8 * FUN_10afda5a8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afda69c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afda6a8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10afda6a8;
        }
        goto LAB_10afda69c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afda6a8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afda61c; end: 10afda6c3; -[SCLensExplorerSectionDataSource isEqual:] */

long FUN_10afda61c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afda69c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afda6a8;
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
          goto LAB_10afda6a8;
        }
        goto LAB_10afda69c;
      }
    }
    lVar3 = 0;
  }
LAB_10afda6a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afda6c4; end: 10afda6cb; -[SCLensExplorerSectionDataSource sectionIdentifier] */

undefined8 FUN_10afda6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afda6cc; end: 10afda6d3; -[SCLensExplorerSectionDataSource auxiliarySectionFeedIds] */

undefined8 FUN_10afda6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afda6d4; end: 10afda703; -[SCLensExplorerSectionDataSource .cxx_destruct] */

void FUN_10afda6d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afda704; end: 10afda7eb; -[SCLensExplorerSectionLoggingInfo initWithLoggingIdentifier:sectionOffset:sectionPosition:containerId:] */

undefined1 *
FUN_10afda704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703c50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afda7ec; end: 10afda80f; -[SCLensExplorerSectionLoggingInfo copyWithZone:] */

undefined8 FUN_10afda7ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afda810; end: 10afda893; -[SCLensExplorerSectionLoggingInfo hash] */

undefined8 * FUN_10afda810(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afda93c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afda948;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10afda948;
          }
          goto LAB_10afda93c;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afda948:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afda894; end: 10afda963; -[SCLensExplorerSectionLoggingInfo isEqual:] */

long FUN_10afda894(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afda93c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afda948;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10afda948;
          }
          goto LAB_10afda93c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afda948:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afda964; end: 10afda96b; -[SCLensExplorerSectionLoggingInfo loggingIdentifier] */

undefined8 FUN_10afda964(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afda96c; end: 10afda973; -[SCLensExplorerSectionLoggingInfo sectionOffset] */

undefined8 FUN_10afda96c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afda974; end: 10afda97b; -[SCLensExplorerSectionLoggingInfo sectionPosition] */

undefined8 FUN_10afda974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afda97c; end: 10afda983; -[SCLensExplorerSectionLoggingInfo containerId] */

undefined8 FUN_10afda97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afda984; end: 10afda9bf; -[SCLensExplorerSectionLoggingInfo .cxx_destruct] */

void FUN_10afda984(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afda9c0; end: 10afdaa47; -[SCLensExplorerFeedLensesResponse initWithLenses:contentSource:] */

undefined1 *
FUN_10afda9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112703c58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdaa48; end: 10afdaa6b; -[SCLensExplorerFeedLensesResponse copyWithZone:] */

undefined8 FUN_10afdaa48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdaa6c; end: 10afdaadf; -[SCLensExplorerFeedLensesResponse hash] */

undefined8 * FUN_10afdaa6c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afdab64;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_10afdab64;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_10afdab64;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_10afdab64:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 10afdaae0; end: 10afdab7f; -[SCLensExplorerFeedLensesResponse isEqual:] */

long FUN_10afdaae0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdab64;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_10afdab64;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afdab64;
    }
  }
  lVar3 = 1;
LAB_10afdab64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdab80; end: 10afdab87; -[SCLensExplorerFeedLensesResponse lenses] */

undefined8 FUN_10afdab80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdab88; end: 10afdab8f; -[SCLensExplorerFeedLensesResponse contentSource] */

undefined8 FUN_10afdab88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdab90; end: 10afdab9b; -[SCLensExplorerFeedLensesResponse .cxx_destruct] */

void FUN_10afdab90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdab9c; end: 10afdabb7; +[SCLensExplorerFeedLensesResponseBuilder lensExplorerFeedLensesResponse] */

void FUN_10afdab9c(void)

{
  _objc_alloc_init(PTR_PTR_1126df310);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdabb8; end: 10afdac7b; +[SCLensExplorerFeedLensesResponseBuilder lensExplorerFeedLensesResponseFromExistingLensExplorerFeedLensesResponse:] */

void FUN_10afdabb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126df310;
  _objc_retain(param_3);
  func_0x00010c092e80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c098240(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b2da0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf4d6a0(param_3);
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010c2aaf20(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10afdac7c; end: 10afdacab; -[SCLensExplorerFeedLensesResponseBuilder build] */

void FUN_10afdac7c(void)

{
  _objc_alloc(PTR_PTR_1126ccff0);
  func_0x00010c025d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdacac; end: 10afdace3; -[SCLensExplorerFeedLensesResponseBuilder withLenses:] */

long FUN_10afdacac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdace4; end: 10afdaceb; -[SCLensExplorerFeedLensesResponseBuilder withContentSource:] */

void FUN_10afdace4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10afdacec; end: 10afdacf7; -[SCLensExplorerFeedLensesResponseBuilder .cxx_destruct] */

void FUN_10afdacec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdacf8; end: 10afdad3f; +[SCLensExplorerFeedLensesQueryType all] */

void FUN_10afdacf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8b38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afdad40; end: 10afdad97; +[SCLensExplorerFeedLensesQueryType limitedSubFeedsWithSubFeedItemsLimit:] */

void FUN_10afdad40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8b38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afdad98; end: 10afdade3; +[SCLensExplorerFeedLensesQueryType mainFeedOnly] */

void FUN_10afdad98(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c8b38;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afdade4; end: 10afdae07; -[SCLensExplorerFeedLensesQueryType copyWithZone:] */

undefined8 FUN_10afdade4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdae08; end: 10afdae5f; -[SCLensExplorerFeedLensesQueryType hash] */

void FUN_10afdae08(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_112703c60;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdae60; end: 10afdaea3; -[SCLensExplorerFeedLensesQueryType internalInit] */

void FUN_10afdae60(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703c60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdaea4; end: 10afdaf3b; -[SCLensExplorerFeedLensesQueryType isEqual:] */

bool FUN_10afdaea4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afdaf3c; end: 10afdafe7; -[SCLensExplorerFeedLensesQueryType matchAll:mainFeedOnly:limitedSubFeeds:] */

void FUN_10afdaf3c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x10));
    }
  }
  else {
    if (lVar1 == 1) {
      if (param_4 == 0) goto LAB_10afdafc4;
      pcVar2 = *(code **)(param_4 + 0x10);
      lVar1 = param_4;
    }
    else {
      if ((lVar1 != 0) || (param_3 == 0)) goto LAB_10afdafc4;
      pcVar2 = *(code **)(param_3 + 0x10);
      lVar1 = param_3;
    }
    (*pcVar2)(lVar1);
  }
LAB_10afdafc4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afdafe8; end: 10afdb0bf; -[SCLensExplorerQuery initWithQuerySource:queryUUID:queryParameters:] */

undefined1 *
FUN_10afdafe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703c68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdb0c0; end: 10afdb0e3; -[SCLensExplorerQuery copyWithZone:] */

undefined8 FUN_10afdb0c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdb0e4; end: 10afdb163; -[SCLensExplorerQuery hash] */

undefined8 * FUN_10afdb0e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afdb1fc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afdb208;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afdb208;
          }
          goto LAB_10afdb1fc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afdb208:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afdb164; end: 10afdb223; -[SCLensExplorerQuery isEqual:] */

long FUN_10afdb164(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdb1fc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdb208;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afdb208;
          }
          goto LAB_10afdb1fc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afdb208:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdb224; end: 10afdb22b; -[SCLensExplorerQuery querySource] */

undefined8 FUN_10afdb224(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdb22c; end: 10afdb233; -[SCLensExplorerQuery queryUUID] */

undefined8 FUN_10afdb22c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdb234; end: 10afdb23b; -[SCLensExplorerQuery queryParameters] */

undefined8 FUN_10afdb234(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdb23c; end: 10afdb277; -[SCLensExplorerQuery .cxx_destruct] */

void FUN_10afdb23c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdb278; end: 10afdb35f; -[SCLensExplorerQueryParameters initWithQueryType:sectionIdentifier:context:requestedFeedIds:] */

undefined1 *
FUN_10afdb278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703c70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdb360; end: 10afdb383; -[SCLensExplorerQueryParameters copyWithZone:] */

undefined8 FUN_10afdb360(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdb384; end: 10afdb40f; -[SCLensExplorerQueryParameters hash] */

undefined8 * FUN_10afdb384(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_38 = -lVar5;
  if (-1 < lVar5) {
    lStack_38 = lVar5;
  }
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afdb4b8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afdb4c4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[3] == param_3[3])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10afdb4c4;
          }
          goto LAB_10afdb4b8;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afdb4c4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afdb410; end: 10afdb4df; -[SCLensExplorerQueryParameters isEqual:] */

long FUN_10afdb410(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdb4b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdb4c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10afdb4c4;
          }
          goto LAB_10afdb4b8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afdb4c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdb4e0; end: 10afdb4e7; -[SCLensExplorerQueryParameters queryType] */

undefined8 FUN_10afdb4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdb4e8; end: 10afdb4ef; -[SCLensExplorerQueryParameters sectionIdentifier] */

undefined8 FUN_10afdb4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdb4f0; end: 10afdb4f7; -[SCLensExplorerQueryParameters context] */

undefined8 FUN_10afdb4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdb4f8; end: 10afdb4ff; -[SCLensExplorerQueryParameters requestedFeedIds] */

undefined8 FUN_10afdb4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afdb500; end: 10afdb53b; -[SCLensExplorerQueryParameters .cxx_destruct] */

void FUN_10afdb500(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdb53c; end: 10afdb557; +[SCLensExplorerQueryParametersBuilder lensExplorerQueryParameters] */

void FUN_10afdb53c(void)

{
  _objc_alloc_init(PTR_PTR_1126cd2e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdb558; end: 10afdb697; +[SCLensExplorerQueryParametersBuilder lensExplorerQueryParametersFromExistingLensExplorerQueryParameters:] */

void FUN_10afdb558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126cd2e8;
  _objc_retain(param_3);
  func_0x00010c0934a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11daa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2b6640(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2b7e40(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf4e080(param_3);
  puVar7 = puVar5;
  func_0x00010c2aafa0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c137200(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = puVar7;
  func_0x00010c2b7220(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10afdb698; end: 10afdb6cb; -[SCLensExplorerQueryParametersBuilder build] */

void FUN_10afdb698(void)

{
  _objc_alloc(PTR_PTR_1126cd1e8);
  func_0x00010c03c520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdb6cc; end: 10afdb703; -[SCLensExplorerQueryParametersBuilder withQueryType:] */

long FUN_10afdb6cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdb704; end: 10afdb73b; -[SCLensExplorerQueryParametersBuilder withSectionIdentifier:] */

long FUN_10afdb704(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdb73c; end: 10afdb743; -[SCLensExplorerQueryParametersBuilder withContext:] */

void FUN_10afdb73c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10afdb744; end: 10afdb77b; -[SCLensExplorerQueryParametersBuilder withRequestedFeedIds:] */

long FUN_10afdb744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdb77c; end: 10afdb7b7; -[SCLensExplorerQueryParametersBuilder .cxx_destruct] */

void FUN_10afdb77c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdb7b8; end: 10afdb8cb; -[SCLensExplorerCategoryModel initWithCategoryIdentifier:sections:name:feedActivation:iconUrl:] */

undefined1 *
FUN_10afdb7b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112703c78;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdb8cc; end: 10afdb8ef; -[SCLensExplorerCategoryModel copyWithZone:] */

undefined8 FUN_10afdb8cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdb8f0; end: 10afdb97f; -[SCLensExplorerCategoryModel hash] */

undefined8 * FUN_10afdb8f0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10afdba40:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afdba4c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x20) == *(long *)(param_3 + 0x20)))
    {
      lVar6 = *(long *)((long)puVar4 + 8);
      if ((lVar6 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
        lVar6 = *(long *)((long)puVar4 + 0x10);
        if ((lVar6 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = *(long *)((long)puVar4 + 0x18);
          if ((lVar6 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            puVar7 = *(undefined1 **)((long)puVar4 + 0x28);
            if (puVar7 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10afdba4c;
            }
            goto LAB_10afdba40;
          }
        }
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10afdba4c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10afdb980; end: 10afdba67; -[SCLensExplorerCategoryModel isEqual:] */

long FUN_10afdb980(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdba40:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdba4c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_10afdba4c;
            }
            goto LAB_10afdba40;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afdba4c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdba68; end: 10afdba6f; -[SCLensExplorerCategoryModel categoryIdentifier] */

undefined8 FUN_10afdba68(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdba70; end: 10afdba77; -[SCLensExplorerCategoryModel sections] */

undefined8 FUN_10afdba70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdba78; end: 10afdba7f; -[SCLensExplorerCategoryModel name] */

undefined8 FUN_10afdba78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdba80; end: 10afdba87; -[SCLensExplorerCategoryModel feedActivation] */

undefined8 FUN_10afdba80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afdba88; end: 10afdba8f; -[SCLensExplorerCategoryModel iconUrl] */

undefined8 FUN_10afdba88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afdba90; end: 10afdbad7; -[SCLensExplorerCategoryModel .cxx_destruct] */

void FUN_10afdba90(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdbad8; end: 10afdbb7b; -[SCLensExplorerFeedLensesResult initWithResponseObservable:token:] */

undefined1 *
FUN_10afdbad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703c80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdbb7c; end: 10afdbb9f; -[SCLensExplorerFeedLensesResult copyWithZone:] */

undefined8 FUN_10afdbb7c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdbba0; end: 10afdbba7; -[SCLensExplorerFeedLensesResult responseObservable] */

undefined8 FUN_10afdbba0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdbba8; end: 10afdbbaf; -[SCLensExplorerFeedLensesResult token] */

undefined8 FUN_10afdbba8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdbbb0; end: 10afdbbdf; -[SCLensExplorerFeedLensesResult .cxx_destruct] */

void FUN_10afdbbb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdbbe0; end: 10afdbc27; -[SCLensExplorerQueryMetadata initWithContentSource:] */

void FUN_10afdbbe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703c88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10afdbc28; end: 10afdbc4b; -[SCLensExplorerQueryMetadata copyWithZone:] */

undefined8 FUN_10afdbc28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdbc4c; end: 10afdbc5b; -[SCLensExplorerQueryMetadata hash] */

long FUN_10afdbc4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10afdbc5c; end: 10afdbce3; -[SCLensExplorerQueryMetadata isEqual:] */

bool FUN_10afdbc5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afdbce4; end: 10afdbceb; -[SCLensExplorerQueryMetadata contentSource] */

undefined8 FUN_10afdbce4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdbcec; end: 10afdbd97; -[SCLensExplorerQueryResultModel initWithQuery:metadata:] */

undefined1 *
FUN_10afdbcec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703c90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdbd98; end: 10afdbdbb; -[SCLensExplorerQueryResultModel copyWithZone:] */

undefined8 FUN_10afdbd98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdbdbc; end: 10afdbe2f; -[SCLensExplorerQueryResultModel hash] */

undefined8 * FUN_10afdbdbc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afdbeb0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afdbebc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10afdbebc;
        }
        goto LAB_10afdbeb0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afdbebc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afdbe30; end: 10afdbed7; -[SCLensExplorerQueryResultModel isEqual:] */

long FUN_10afdbe30(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdbeb0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdbebc;
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
          goto LAB_10afdbebc;
        }
        goto LAB_10afdbeb0;
      }
    }
    lVar3 = 0;
  }
LAB_10afdbebc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdbed8; end: 10afdbedf; -[SCLensExplorerQueryResultModel query] */

undefined8 FUN_10afdbed8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdbee0; end: 10afdbee7; -[SCLensExplorerQueryResultModel metadata] */

undefined8 FUN_10afdbee0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdbee8; end: 10afdbf17; -[SCLensExplorerQueryResultModel .cxx_destruct] */

void FUN_10afdbee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdbf18; end: 10afdbf5f; -[SCLensExplorerCategoriesMetadata initWithContentSource:] */

void FUN_10afdbf18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703c98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10afdbf60; end: 10afdbf83; -[SCLensExplorerCategoriesMetadata copyWithZone:] */

undefined8 FUN_10afdbf60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdbf84; end: 10afdbf93; -[SCLensExplorerCategoriesMetadata hash] */

long FUN_10afdbf84(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10afdbf94; end: 10afdc01b; -[SCLensExplorerCategoriesMetadata isEqual:] */

bool FUN_10afdbf94(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afdc01c; end: 10afdc023; -[SCLensExplorerCategoriesMetadata contentSource] */

undefined8 FUN_10afdc01c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdc024; end: 10afdc0cb; -[SCLensExplorerCategoriesResponseModel initWithAggregator:metadata:] */

undefined1 *
FUN_10afdc024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703ca0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdc0cc; end: 10afdc0ef; -[SCLensExplorerCategoriesResponseModel copyWithZone:] */

undefined8 FUN_10afdc0cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdc0f0; end: 10afdc163; -[SCLensExplorerCategoriesResponseModel hash] */

undefined8 * FUN_10afdc0f0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afdc1e4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afdc1f0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10afdc1f0;
        }
        goto LAB_10afdc1e4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afdc1f0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afdc164; end: 10afdc20b; -[SCLensExplorerCategoriesResponseModel isEqual:] */

long FUN_10afdc164(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdc1e4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdc1f0;
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
          goto LAB_10afdc1f0;
        }
        goto LAB_10afdc1e4;
      }
    }
    lVar3 = 0;
  }
LAB_10afdc1f0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdc20c; end: 10afdc213; -[SCLensExplorerCategoriesResponseModel aggregator] */

undefined8 FUN_10afdc20c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdc214; end: 10afdc21b; -[SCLensExplorerCategoriesResponseModel metadata] */

undefined8 FUN_10afdc214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdc21c; end: 10afdc24b; -[SCLensExplorerCategoriesResponseModel .cxx_destruct] */

void FUN_10afdc21c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


