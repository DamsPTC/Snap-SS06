/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e83af0; end: 104e83b03; -[SCAllContactsSnapchatterViewMoreButton setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e83af0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112715230,param_3);
  return;
}



/* Entry: 104e83b04; end: 104e83b5f; -[SCAllContactsSnapchatterViewMoreButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e83b04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715230);
  _objc_storeStrong(param_1 + _DAT_11271522c,0);
  _objc_storeStrong(param_1 + _DAT_112715228,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715224,0);
  return;
}



/* Entry: 104e83b60; end: 104e83b6b; +[SCAllContactsSnapchatterViewMoreProvider viewMoreCellClass] */

void FUN_104e83b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126b1758);
  return;
}



/* Entry: 104e83b6c; end: 104e83b87; +[SCAllContactsSnapchatterViewMoreProvider viewMoreCellReuseIdentifier] */

void FUN_104e83b6c(void)

{
  _objc_opt_class(PTR_PTR_1126b1758);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 104e83b88; end: 104e83d57; -[SCAllContactsSnapchatterViewMoreProvider viewModelForNumberOfItemsCollapsed:numberOfItemsTotal:] */

undefined * FUN_104e83b88(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8398;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db8398,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x402a000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b1748;
  _objc_alloc(PTR_PTR_1126b1748);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x000107cf426c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053ae0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 104e83d58; end: 104e83d5f; -[SCAllContactsSnapchatterViewMoreProvider shouldRoundLastCellInList] */

undefined8 FUN_104e83d58(void)

{
  return 0;
}



/* Entry: 104e83d60; end: 104e83d77; -[SCAllContactsSnapchatterViewMoreProvider viewMoreProviderDelegate] */

void FUN_104e83d60(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e83d78; end: 104e83d83; -[SCAllContactsSnapchatterViewMoreProvider setViewMoreProviderDelegate:] */

void FUN_104e83d78(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 104e83d84; end: 104e83eab; -[SCAllContactsSnapchatterViewMoreProvider .cxx_destruct] */

void FUN_104e83d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104e83eac; end: 104e83fb7; -[SCAllContactsViewMoreViewModel initWithTitleText:backgroundColor:backgroundHighlightedColor:shadowViewModel:] */

undefined1 *
FUN_104e83eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e49d0;
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e83fb8; end: 104e83fdb; -[SCAllContactsViewMoreViewModel copyWithZone:] */

undefined8 FUN_104e83fb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e83fdc; end: 104e84067; -[SCAllContactsViewMoreViewModel hash] */

undefined8 * FUN_104e83fdc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104e84118:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104e84124;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071c60(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_104e84124;
            }
            goto LAB_104e84118;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104e84124:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104e84068; end: 104e8413f; -[SCAllContactsViewMoreViewModel isEqual:] */

long FUN_104e84068(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104e84118:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e84124;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071c60(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_104e84124;
            }
            goto LAB_104e84118;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104e84124:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104e84140; end: 104e84147; -[SCAllContactsViewMoreViewModel titleText] */

undefined8 FUN_104e84140(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e84148; end: 104e8414f; -[SCAllContactsViewMoreViewModel backgroundColor] */

undefined8 FUN_104e84148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e84150; end: 104e84157; -[SCAllContactsViewMoreViewModel backgroundHighlightedColor] */

undefined8 FUN_104e84150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104e84158; end: 104e8415f; -[SCAllContactsViewMoreViewModel shadowViewModel] */

undefined8 FUN_104e84158(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104e84160; end: 104e841a7; -[SCAllContactsViewMoreViewModel .cxx_destruct] */

void FUN_104e84160(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e841a8; end: 104e84213; +[SCAllContactsSectionEvent didFailFetchingContactsWithError:] */

void FUN_104e841a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1760;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e84214; end: 104e8426b; +[SCAllContactsSectionEvent didFetchContactsWithNumberOfContacts:] */

void FUN_104e84214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1760;
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



/* Entry: 104e8426c; end: 104e842b3; +[SCAllContactsSectionEvent isSyncingWithContactSource] */

void FUN_104e8426c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1760;
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



/* Entry: 104e842b4; end: 104e842ff; +[SCAllContactsSectionEvent willFetchContacts] */

void FUN_104e842b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1760;
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



/* Entry: 104e84300; end: 104e84323; -[SCAllContactsSectionEvent copyWithZone:] */

undefined8 FUN_104e84300(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104e84324; end: 104e8438f; -[SCAllContactsSectionEvent hash] */

void FUN_104e84324(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126e49d8;
  puStack_60 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e84390; end: 104e843d3; -[SCAllContactsSectionEvent internalInit] */

void FUN_104e84390(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e49d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e843d4; end: 104e84483; -[SCAllContactsSectionEvent isEqual:] */

long FUN_104e843d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104e84468;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_104e84468;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_104e84468;
    }
  }
  lVar3 = 1;
LAB_104e84468:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104e84484; end: 104e8456f; -[SCAllContactsSectionEvent matchIsSyncingWithContactSource:willFetchContacts:didFetchContacts:didFailFetchingContacts:] */

void FUN_104e84484(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_104e84540;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_104e84540;
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    (*pcVar3)(lVar2);
  }
  else {
    if (lVar2 == 2) {
      if (param_5 == 0) goto LAB_104e84540;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_5 + 0x10);
      lVar2 = param_5;
    }
    else {
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_104e84540;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
    }
    (*pcVar3)(lVar2,uVar1);
  }
LAB_104e84540:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e84570; end: 104e8457b; -[SCAllContactsSectionEvent .cxx_destruct] */

void FUN_104e84570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 104e8457c; end: 104e8461f; -[SCChangeLanguageInSettingsActionRecorder initWithPreferences:userTrackedLogger:] */

undefined1 *
FUN_104e8457c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e49e0;
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



/* Entry: 104e84620; end: 104e84627; -[SCChangeLanguageInSettingsActionRecorder localeInLastAppSession] */

void FUN_104e84620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_localeBeforeGoToSettings_112605290);
  return;
}



/* Entry: 104e84628; end: 104e8467b; -[SCChangeLanguageInSettingsActionRecorder userTapGoToSettingsCTAWithCurrentLocale:] */

void FUN_104e84628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1bf400(uVar1,param_2,param_3);
  func_0x00010be54060(param_1,param_2,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e8467c; end: 104e846cf; -[SCChangeLanguageInSettingsActionRecorder userCancelChangeLanguageWithCurrentLocale:] */

void FUN_104e8467c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1bf400(uVar1,param_2,0);
  func_0x00010be54060(param_1,param_2,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e846d0; end: 104e8473f; -[SCChangeLanguageInSettingsActionRecorder languageDidFoundInBundle:] */

void FUN_104e846d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c09e260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf400(*(undefined8 *)(param_1 + 8),param_2,0);
  func_0x00010be55100(0,param_1,param_2,lVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e84740; end: 104e84763; -[SCChangeLanguageInSettingsActionRecorder languageDownloadDidBeginWithNewLocale:] */

void FUN_104e84740(undefined8 param_1,long param_2)

{
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 104e84764; end: 104e847e7; -[SCChangeLanguageInSettingsActionRecorder languageDownloadDidCompleteWithNewLocale:] */

void FUN_104e84764(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  dVar2 = *(double *)(param_2 + 0x18);
  lVar1 = param_2;
  func_0x00010c09e260(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf400(*(undefined8 *)(param_2 + 8),param_3,0);
  func_0x00010be55100(param_1 - dVar2,param_2,param_3,lVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e847e8; end: 104e848ef; -[SCChangeLanguageInSettingsActionRecorder _logGoToSettingsActionWithCurrentLocale:success:] */

void FUN_104e847e8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dab0d8;
  _objc_retain(param_4);
  func_0x00010c0df6e0(puVar1,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0xd;
  uVar5 = param_4;
  func_0x00010be5a520(param_2);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110db8558;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110db8578;
  uStack_c8 = uVar5;
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  func_0x00010c0df720((double)(long)(param_1 * 100.0) / 100.0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_c0 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_c8,&ppuStack_d8,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar4 = puVar3;
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  puVar7 = puVar4;
  func_0x00010be5a520(puVar1,param_3,0xe,uVar6,puVar4);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126b1768;
  _objc_retain(puVar7);
  _objc_retain(uVar5);
  _objc_opt_new(puVar1);
  func_0x00010c1fe360();
  func_0x00010c1fe3a0(puVar1,param_3,uVar5);
  _objc_release(uVar5);
  func_0x00010c1fe380(puVar1,param_3,puVar7);
  _objc_release(puVar7);
  uVar5 = *(undefined8 *)(puVar2 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e848f0; end: 104e84a33; -[SCChangeLanguageInSettingsActionRecorder _logLanguageSwitchCompletedActionWithOldLocale:newLocale:downloadLatency:] */

void FUN_104e848f0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110db8558;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110db8578;
  uStack_68 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0df720((double)(long)(param_1 * 100.0) / 100.0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_68,&ppuStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = puVar2;
  func_0x00010c085d00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  puVar5 = puVar3;
  func_0x00010be5a520(param_2,param_3,0xe,param_4,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b1768;
  _objc_retain(puVar5);
  _objc_retain(uVar4);
  _objc_opt_new(puVar2);
  func_0x00010c1fe360();
  func_0x00010c1fe3a0(puVar2,param_3,uVar4);
  _objc_release(uVar4);
  func_0x00010c1fe380(puVar2,param_3,puVar5);
  _objc_release(puVar5);
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104e84a34; end: 104e84ae7; -[SCChangeLanguageInSettingsActionRecorder _logUserProfileUpdateEventWithFieldName:oldValue:newValue:] */

void FUN_104e84a34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1768;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1fe360();
  func_0x00010c1fe3a0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1fe380(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e84ae8; end: 104e84b17; -[SCChangeLanguageInSettingsActionRecorder .cxx_destruct] */

void FUN_104e84ae8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e84b18; end: 104e84bfb; -[SCChangeLanguageInSettingsActionRecordingServiceProvider provide] */

void FUN_104e84b18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1770;
  _objc_alloc(PTR_PTR_1126b1770);
  func_0x00010bff0980();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e84bfc; end: 104e84c3b;  */

void FUN_104e84bfc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e84c3c; end: 104e84d0f; -[SCChangeLanguageInSettingsActionRecordingServiceProvider _createActionRecorder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e84c3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b1778;
  _objc_alloc(PTR_PTR_1126b1778);
  lVar2 = param_1 + _DAT_112715260;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112715264;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038320(puVar1,param_2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e84d10; end: 104e84d47; -[SCChangeLanguageInSettingsActionRecordingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e84d10(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715264);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715260);
  return;
}



/* Entry: 104e84d48; end: 104e84dab; -[SCPreferences localeBeforeGoToSettings] */

void FUN_104e84d48(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110db8598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e84dac; end: 104e84db7; -[SCPreferences setLocaleBeforeGoToSettings:] */

void FUN_104e84dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110db8598);
  return;
}



/* Entry: 104e84db8; end: 104e84de3; +[SCGrapheneChangeusernameMetric changeUsernamePageView] */

void FUN_104e84db8(void)

{
  _objc_alloc(PTR_PTR_1126b1780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e84de4; end: 104e84e0f; +[SCGrapheneChangeusernameMetric changeUsernameFlowEvent] */

void FUN_104e84de4(void)

{
  _objc_alloc(PTR_PTR_1126b1780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e84e10; end: 104e84e3b; +[SCGrapheneChangeusernameMetric changeUsernameResponse] */

void FUN_104e84e10(void)

{
  _objc_alloc(PTR_PTR_1126b1780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e84e3c; end: 104e84edb; -[SCGrapheneChangeusernameMetric description] */

void FUN_104e84e3c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db85b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110db85b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e49e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104e84edc; end: 104e85033; -[SCGrapheneRegistry changeusernameGraphene] */

void FUN_104e84edc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e84f64;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136b90e8 != -1) {
    func_0x00010002a2fc(0x1136b90e8,&puStack_48);
  }
  uVar1 = uRam00000001136b90e0;
  _objc_retain(uRam00000001136b90e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104e85034; end: 104e85047;  */

void FUN_104e85034(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110db8638,0,0);
  return;
}



/* Entry: 104e85048; end: 104e8521f; -[SCContactPermissionRequestBusinessLogic initWithDelegate:contactPermissionInfoProvider:contactPermissionManager:circumstanceEngine:contactPermissionRequestLogger:applicationLifecycleEvents:requestSource:isExplicitUserLevelPermissionDialogNeeded:isConfirmSkipDialogNeeded:isGoToSystemSettingsDialogNeeded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e85048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126e49f0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112715268,param_3);
    lVar4 = (long)_DAT_11271526c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112715270;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112715274;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112715278;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11271527c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112715280) = param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112715284) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112715288) = param_10._1_1_;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271528c) = param_10._2_1_;
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112715290);
    *(undefined **)((long)puVar1 + (long)_DAT_112715290) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e85220; end: 104e8534f; -[SCContactPermissionRequestBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85220(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e49f0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_begin_1125a3840);
  func_0x00010bf4a0a0(*(undefined8 *)(param_1 + _DAT_112715278));
  func_0x00010be04b20(param_1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271527c);
  func_0x00010c2a6420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104e85350; end: 104e8537b;  */

void FUN_104e85350(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e8537c; end: 104e853c3; -[SCContactPermissionRequestBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8537c(void)

{
  _objc_alloc(PTR_PTR_1126b1788);
  func_0x00010c046060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e853c4; end: 104e854df; -[SCContactPermissionRequestBusinessLogic handleAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e853c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  *(undefined1 *)(param_1 + _DAT_112715298) = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e854e0;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104e854e8;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104e85504;
  puStack_80 = &UNK_110842e18;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104e85520;
  puStack_a8 = &UNK_110842e18;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104e855b4;
  puStack_d0 = &UNK_110842e18;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_104e85630;
  puStack_f8 = &UNK_110842e18;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  uStack_128 = 0x104e85688;
  puStack_120 = &UNK_110842e18;
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  uStack_150 = 0x104e856dc;
  puStack_148 = &UNK_110842e18;
  lStack_140 = param_1;
  lStack_118 = param_1;
  lStack_f0 = param_1;
  lStack_c8 = param_1;
  lStack_a0 = param_1;
  lStack_78 = param_1;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010c0bfa20(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8,
                      &puStack_110,&puStack_138,&puStack_160);
  return;
}



/* Entry: 104e854e0; end: 104e8551f;  */

void FUN_104e854e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be90c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__requestContactPermissionIfNeede_112581ca8);
  return;
}



/* Entry: 104e85520; end: 104e855b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85520(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + _DAT_112715288) == '\x01') {
    *(undefined1 *)(lVar1 + _DAT_112715298) = 1;
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
  }
  else {
    lVar1 = lVar1 + _DAT_112715268;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf49fe0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf4a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112715278),
             PTR_s_contactPermissionRequestViewConf_1125b01b8);
  return;
}



/* Entry: 104e855b4; end: 104e8562f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e855b4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_112715268;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf49fe0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf4a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112715278),
             PTR_s_contactPermissionRequestViewConf_1125b01c8);
  return;
}



/* Entry: 104e85630; end: 104e8572f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85630(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  func_0x00010be90c20(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf4a070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112715278),
             PTR_s_contactPermissionRequestViewConf_1125b01c0);
  return;
}



/* Entry: 104e85730; end: 104e8591b; -[SCContactPermissionRequestBusinessLogic _requestContactPermissionIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85730(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar5 = (long)_DAT_112715270;
  uVar1 = *(undefined8 *)(param_1 + lVar5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c06f300();
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010bf4a140(*(undefined8 *)(param_1 + _DAT_112715278));
    lVar2 = *(long *)(param_1 + _DAT_11271526c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf4a260();
    _objc_release(lVar2);
    if (lVar3 < 2) {
      if (lVar3 == 0) {
        _objc_initWeak(auStack_38,param_1);
        uVar4 = *(undefined8 *)(param_1 + lVar5);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x00010c134860(uVar4);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
      else if (lVar3 == 1) goto LAB_104e857f8;
    }
    else {
      if (lVar3 == 2) {
LAB_104e857f8:
        if (*(char *)(param_1 + _DAT_112715284) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010be91bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__requestUserLevelAccessWithDialo_112582090);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010be91bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__requestUserLevelContactPermissi_112582098,1);
        return;
      }
      if (lVar3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__bothDeviceLevelAndUserLevelCont_112552e98);
        return;
      }
      if (lVar3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be91b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,PTR_s__requestToEnableDeniedDeviceLeve_112582060);
        return;
      }
    }
  }
  return;
}



/* Entry: 104e8591c; end: 104e8594f;  */

void FUN_104e8591c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e85950; end: 104e85993; -[SCContactPermissionRequestBusinessLogic _requestUserLevelAccessWithDialog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85950(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112715294) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e85994; end: 104e85a47; -[SCContactPermissionRequestBusinessLogic _requestToEnableDeniedDeviceLevelAccessIfPossible] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85994(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_11271528c) == '\x01') {
    lVar2 = (long)_DAT_11271529c;
    *(undefined1 *)(param_1 + lVar2) = 1;
    lVar1 = param_1;
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + lVar2) = 0;
    return;
  }
  func_0x00010bf4a100(*(undefined8 *)(param_1 + _DAT_112715278),param_2,1);
  param_1 = param_1 + _DAT_112715268;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf49fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e85a48; end: 104e85a57; -[SCContactPermissionRequestBusinessLogic _appWillEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4a0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112715278),
             PTR_s_contactPermissionRequestViewInte_1125b01e0);
  return;
}



/* Entry: 104e85a58; end: 104e85b3f; -[SCContactPermissionRequestBusinessLogic _requestUserLevelContactPermissionCompletedWithPermissionGranted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85a58(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271526c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bb20();
  _objc_release(uVar1);
  if (param_3 == 0) {
    func_0x00010bf4a100(*(undefined8 *)(param_1 + _DAT_112715278));
  }
  else {
    func_0x00010bf4a120();
  }
  lVar2 = *(long *)(param_1 + lVar3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4a260();
  _objc_release(lVar2);
  if (lVar3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010be91b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestToEnableDeniedDeviceLeve_112582060)
    ;
    return;
  }
  param_1 = param_1 + _DAT_112715268;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf49fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e85b40; end: 104e85c53; -[SCContactPermissionRequestBusinessLogic _requestDeviceLevelContactPermissionCompletedWithPermissionStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85b40(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271526c;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28bb20();
  _objc_release(uVar1);
  if ((param_3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18bc60();
    _objc_release(uVar1);
    _objc_release(puVar2);
    lVar3 = (long)_DAT_112715278;
    func_0x00010bf4a100(*(undefined8 *)(param_1 + lVar3),param_2,1);
    func_0x00010bf4a100(*(undefined8 *)(param_1 + lVar3),param_2,0);
  }
  else {
    lVar3 = (long)_DAT_112715278;
    func_0x00010bf4a120(*(undefined8 *)(param_1 + lVar3),param_2,1);
    func_0x00010bf4a120(*(undefined8 *)(param_1 + lVar3),param_2,0);
  }
  param_1 = param_1 + _DAT_112715268;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf49fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e85c54; end: 104e85ca3; -[SCContactPermissionRequestBusinessLogic _bothDeviceLevelAndUserLevelContactPermissionWereAlreadyGranted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85c54(long param_1,undefined8 param_2)

{
  func_0x00010bf4a120(*(undefined8 *)(param_1 + _DAT_112715278),param_2,0);
  param_1 = param_1 + _DAT_112715268;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf49fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e85ca4; end: 104e85d2b; -[SCContactPermissionRequestBusinessLogic _displayOSPromptOnBeginningWhenNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85ca4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112715270);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4a00();
  _objc_release();
  if ((((uVar2 & 1) == 0) && (*(long *)(param_1 + _DAT_112715280) == 1)) &&
     (func_0x000106bfd904(), uVar1 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010be90c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestContactPermissionIfNeede_112581ca8)
    ;
    return;
  }
  return;
}



/* Entry: 104e85d2c; end: 104e85db7; -[SCContactPermissionRequestBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85d2c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715290,0);
  _objc_storeStrong(param_1 + _DAT_11271527c,0);
  _objc_storeStrong(param_1 + _DAT_112715278,0);
  _objc_storeStrong(param_1 + _DAT_112715274,0);
  _objc_storeStrong(param_1 + _DAT_112715270,0);
  _objc_storeStrong(param_1 + _DAT_11271526c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112715268);
  return;
}



/* Entry: 104e85db8; end: 104e861f3; -[SCContactPermissionRequestEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e85db8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126b1790;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127152a0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_1127152a4;
  _objc_loadWeakRetained(lVar14);
  lVar4 = lVar14;
  func_0x00010bf49f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018520();
  _objc_release(lVar4);
  _objc_release(lVar14);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_initWeak(auStack_80,param_1);
  lVar16 = (long)_DAT_1127152a8;
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b1798;
  _objc_alloc();
  lVar14 = (long)_DAT_1127152ac;
  lVar2 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar8 = lVar14;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_1127152b0;
  _objc_loadWeakRetained(lVar3);
  lVar15 = lVar3;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e861f4;
  puStack_90 = &UNK_110855ed0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b0,auStack_80);
  lVar4 = param_1 + lVar16;
  _objc_loadWeakRetained();
  func_0x00010c136720();
  lVar9 = param_1 + _DAT_1127152b4;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0566c0();
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(lVar2);
  puVar11 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar12 = PTR_PTR_1126b17a0;
  _objc_alloc();
  lVar2 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf4a160();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar14);
  lVar9 = lVar14;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0724a0();
  lVar3 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar3);
  lVar7 = lVar3;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22f780();
  lVar16 = param_1 + lVar16;
  _objc_loadWeakRetained(lVar16);
  lVar8 = lVar16;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22f860();
  func_0x00010c040720();
  lVar15 = (long)_DAT_1127152b8;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar12;
  _objc_release(uVar13);
  _objc_release(lVar8);
  _objc_release(lVar16);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar15));
  _objc_release(puVar11);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e861f4; end: 104e862d7;  */

void FUN_104e861f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e862d8; end: 104e8638f; -[SCContactPermissionRequestEntryPoint _generateContactPermissionRequestViewControllerWithScreen:styleHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e862d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b17a8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_1127152b4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0424e0(puVar1,param_2,param_3,param_4,lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e86390; end: 104e86447; -[SCContactPermissionRequestEntryPoint _generateContactPermissionRequestDialogPresenterWithScreen:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e86390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b17b0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  param_1 = param_1 + _DAT_1127152b4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042520(puVar1,param_2,param_3,param_4,lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e86448; end: 104e864cb; -[SCContactPermissionRequestEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e86448(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127152b4);
  _objc_destroyWeak(param_1 + _DAT_1127152a4);
  _objc_destroyWeak(param_1 + _DAT_1127152a0);
  _objc_destroyWeak(param_1 + _DAT_1127152ac);
  _objc_destroyWeak(param_1 + _DAT_1127152a8);
  _objc_destroyWeak(param_1 + _DAT_1127152bc);
  _objc_destroyWeak(param_1 + _DAT_1127152b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127152b8,0);
  return;
}



/* Entry: 104e864cc; end: 104e8653f; -[SCFindFriendsPermissionUpsellTrayDismissLogger initWithUserTrackedLogger:] */

undefined1 * FUN_104e864cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e49f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e86540; end: 104e8661f; -[SCFindFriendsPermissionUpsellTrayDismissLogger logFindFriendsPermissionUpsellTrayDismissWithDismissSource:source:addFriendsPageSessionId:durationMillis:learnMoreClickCount:] */

void FUN_104e86540(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1608;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c18f720();
  func_0x00010c206c40(puVar1,param_2,param_4);
  _objc_release(param_4);
  if (param_5 != 0) {
    func_0x00010c165320(puVar1,param_2,param_5);
  }
  func_0x00010c192e40(puVar1,param_2,param_6);
  func_0x00010c1ba060(puVar1,param_2,param_7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104e86620; end: 104e8662b; -[SCFindFriendsPermissionUpsellTrayDismissLogger .cxx_destruct] */

void FUN_104e86620(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e8662c; end: 104e86b2f; -[SCPostRegContactPermissionRequestEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e8662c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126b17b8;
  _objc_alloc();
  lVar16 = param_1 + _DAT_1127152c4;
  _objc_loadWeakRetained(lVar16);
  lVar13 = lVar16;
  func_0x00010c23c580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_1127152c8;
  _objc_loadWeakRetained(lVar2);
  lVar17 = lVar2;
  func_0x00010c104ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0467c0();
  _objc_release(lVar17);
  _objc_release(lVar2);
  _objc_release(lVar13);
  _objc_release(lVar16);
  _objc_initWeak(auStack_68,param_1);
  puVar3 = PTR_PTR_1126b1798;
  _objc_alloc();
  lVar10 = (long)_DAT_1127152cc;
  lVar16 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar4 = lVar16;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = (long)_DAT_1127152d0;
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar2);
  lVar11 = lVar2;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar13);
  lVar15 = lVar13;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_1127152d4;
  _objc_loadWeakRetained(lVar17);
  lVar5 = lVar17;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  lVar14 = param_1 + _DAT_1127152d8;
  _objc_loadWeakRetained();
  lVar6 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0566c0();
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar16);
  puVar7 = PTR_PTR_1126aeb48;
  _objc_alloc(PTR_PTR_1126aeb48);
  func_0x00010c0404c0();
  lVar16 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar16);
  lVar2 = lVar16;
  func_0x00010bf4a160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  lVar16 = (long)_DAT_1127152dc;
  puVar8 = (undefined *)(param_1 + lVar16);
  _objc_loadWeakRetained();
  if (puVar8 != (undefined *)0x0) {
    lVar17 = (long)_DAT_1127152e0;
    lVar13 = param_1 + lVar17;
    _objc_loadWeakRetained();
    lVar14 = lVar2;
    if (lVar13 != 0) {
      lVar11 = (long)_DAT_1127152e4;
      lVar4 = param_1 + lVar11;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar15 = (long)_DAT_1127152e8;
        lVar14 = param_1 + lVar15;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        _objc_release(lVar13);
        _objc_release(puVar8);
        if (lVar14 == 0) goto LAB_104e86a20;
        puVar8 = PTR_PTR_1126b17c0;
        _objc_alloc(PTR_PTR_1126b17c0);
        lVar15 = param_1 + lVar15;
        _objc_loadWeakRetained(lVar15);
        lVar13 = lVar15;
        func_0x00010c293fc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c05f0c0(puVar8);
        _objc_release(lVar13);
        _objc_release(lVar15);
        puVar9 = PTR_PTR_1126b17c8;
        _objc_alloc();
        lVar17 = param_1 + lVar17;
        _objc_loadWeakRetained(lVar17);
        lVar16 = param_1 + lVar16;
        _objc_loadWeakRetained(lVar16);
        lVar11 = param_1 + lVar11;
        _objc_loadWeakRetained(lVar11);
        func_0x00010c03d0e0();
        lVar13 = (long)_DAT_1127152ec;
        uVar12 = *(undefined8 *)(param_1 + lVar13);
        *(undefined **)(param_1 + lVar13) = puVar9;
        _objc_release(uVar12);
        _objc_release(lVar11);
        _objc_release(lVar16);
        _objc_release(lVar17);
        lVar14 = *(long *)(param_1 + lVar13);
        _objc_retain(lVar14);
        lVar13 = lVar2;
      }
      _objc_release(lVar13);
    }
    _objc_release(puVar8);
    lVar2 = lVar14;
  }
LAB_104e86a20:
  puVar8 = PTR_PTR_1126b17a0;
  _objc_alloc();
  lVar10 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar10);
  lVar16 = lVar10;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22f860();
  func_0x00010c040720();
  lVar13 = (long)_DAT_1127152f0;
  uVar12 = *(undefined8 *)(param_1 + lVar13);
  *(undefined **)(param_1 + lVar13) = puVar8;
  _objc_release(uVar12);
  _objc_release(lVar16);
  _objc_release(lVar10);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar13));
  _objc_release(lVar2);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e86b30; end: 104e86bab;  */

void FUN_104e86b30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1ae20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e86bac; end: 104e86c4f; -[SCPostRegContactPermissionRequestEntryPoint _generateContactPermissionRequestViewControllerWithScreen:styleHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e86bac(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  func_0x000106bfd904();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b17d0;
    _objc_alloc(PTR_PTR_1126b17d0);
    func_0x00010c042500();
  }
  else {
    puVar2 = param_1;
    func_0x00010be1b280(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1e1580(*(undefined8 *)(param_1 + _DAT_1127152ec),param_2,puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e86c50; end: 104e86e8f; -[SCPostRegContactPermissionRequestEntryPoint _generateIOS18ContactPermissionRequestViewControllerWithScreen:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e86c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar9 = (long)_DAT_1127152f4;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b17d8;
  func_0x00010bf4a9a0(PTR_PTR_1126b17d8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104e86e90;
  puStack_80 = &UNK_110855f30;
  puStack_78 = puVar1;
  func_0x00010c13e600(lVar4,param_2,puVar5,&puStack_98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ae560;
  _objc_opt_new();
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b17d8;
  func_0x00010c102e60(PTR_PTR_1126b17d8);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar7;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x104e86f30;
  puStack_a8 = &UNK_110855f30;
  puStack_a0 = puVar5;
  func_0x00010c13e600(lVar3,param_2,puVar6,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar7 = PTR_PTR_1126b17e0;
  _objc_alloc(PTR_PTR_1126b17e0);
  puVar6 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042380(puVar7,param_2,param_3,puVar6,puVar8);
  _objc_release(param_3);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104e86e90; end: 104e86fcf;  */

void FUN_104e86e90(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010b7f5374(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e86fd0; end: 104e8709f; -[SCPostRegContactPermissionRequestEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e86fd0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127152e4);
  _objc_destroyWeak(param_1 + _DAT_1127152e0);
  _objc_destroyWeak(param_1 + _DAT_1127152dc);
  _objc_destroyWeak(param_1 + _DAT_1127152f4);
  _objc_destroyWeak(param_1 + _DAT_1127152e8);
  _objc_destroyWeak(param_1 + _DAT_1127152c8);
  _objc_destroyWeak(param_1 + _DAT_1127152d8);
  _objc_destroyWeak(param_1 + _DAT_1127152c4);
  _objc_destroyWeak(param_1 + _DAT_1127152d0);
  _objc_destroyWeak(param_1 + _DAT_1127152cc);
  _objc_destroyWeak(param_1 + _DAT_1127152f8);
  _objc_destroyWeak(param_1 + _DAT_1127152d4);
  _objc_storeStrong(param_1 + _DAT_1127152ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127152f0,0);
  return;
}



/* Entry: 104e870a0; end: 104e87337;  */

void FUN_104e870a0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126aed70;
  uVar12 = param_1;
  _objc_retain(param_1);
  func_0x000105c65e54();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000105c65d7c();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  puVar3 = PTR_PTR_1126b17e8;
  _objc_alloc();
  func_0x00010c028a40();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar5 = puVar4;
  func_0x000105c65d64();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c0fdaa0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c0fdb60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c28fa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c460(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c211b40(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar12);
  func_0x00010bf84b00(lVar10);
  _objc_release(uVar12);
  return;
}



/* Entry: 104e87338; end: 104e873af;  */

void FUN_104e87338(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e873b0; end: 104e873bf;  */

void FUN_104e873b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e873bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 104e873c0; end: 104e87437;  */

void FUN_104e873c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf84b00(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e87438; end: 104e87447;  */

void FUN_104e87438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e87444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104e87448; end: 104e874eb; -[SCPostRegContactPermissionRequestDefaultLogger initWithSignupTransitionLogger:postRegistrationLogger:] */

undefined1 *
FUN_104e87448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4a00;
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



/* Entry: 104e874ec; end: 104e87593; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewDidAppear] */

void FUN_104e874ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0abca0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e87594; end: 104e875cb; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewConfirmationPromptDisplayed] */

void FUN_104e87594(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e875cc; end: 104e87613; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewConfirmationPromptSkipContactSync] */

void FUN_104e875cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e87614; end: 104e8765b; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewConfirmationPromptFindFriends] */

void FUN_104e87614(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adbc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e8765c; end: 104e876cf; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewPermissionGrantedWithIsDeviceLevel:] */

void FUN_104e8765c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adba0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e876d0; end: 104e87743; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewPermissionDeniedWithIsDeviceLevel:] */

void FUN_104e876d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0adb80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e87744; end: 104e8777f; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewInterrupted] */

void FUN_104e87744(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ada60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e87780; end: 104e87783; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewGoToSettings] */

void FUN_104e87780(void)

{
  return;
}



/* Entry: 104e87784; end: 104e87787; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewCancelGoToSettings] */

void FUN_104e87784(void)

{
  return;
}



/* Entry: 104e87788; end: 104e8778b; -[SCPostRegContactPermissionRequestDefaultLogger contactPermissionRequestViewTapContinueButton] */

void FUN_104e87788(void)

{
  return;
}


