/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f8fac4; end: 108f8fb97; +[SCSendToEvent selectListWithListId:name:isContextual:subtext:] */

void FUN_108f8fac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0xb;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  puVar2[0x70] = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_6;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fb98; end: 108f8fc3f; +[SCSendToEvent selectSponsorWithBusinessId:displayName:status:] */

void FUN_108f8fb98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x12;
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  *(undefined4 *)(puVar2 + 0x90) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fc40; end: 108f8fc9b; +[SCSendToEvent sendToTrayDidChangeExpansionWithIsExpanded:] */

void FUN_108f8fc40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x19;
  puVar2[0xa8] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fc9c; end: 108f8fd33; +[SCSendToEvent sendWithSelectedItems:previewText:] */

void FUN_108f8fc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fd34; end: 108f8fd9f; +[SCSendToEvent setScheduleWithScheduleDate:] */

void FUN_108f8fd34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x17;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fda0; end: 108f8fe47; +[SCSendToEvent startNewGroupWithSelectedItems:openGroupEdit:source:] */

void FUN_108f8fda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x50] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fe48; end: 108f8fe93; +[SCSendToEvent tapCancelButton] */

void FUN_108f8fe48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8fe94; end: 108f8feff; +[SCSendToEvent tapConfirmationBarWithSelectedItems:] */

void FUN_108f8fe94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8ff00; end: 108f8ff83; +[SCSendToEvent tapExternalShareDestinationWithDestination:isSelected:isQueued:] */

void FUN_108f8ff00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x1a;
  uVar3 = *(undefined8 *)(puVar2 + 0xb0);
  *(undefined8 *)(puVar2 + 0xb0) = param_3;
  _objc_release(uVar3);
  puVar2[0xb8] = param_4;
  puVar2[0xb9] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8ff84; end: 108f8ffcf; +[SCSendToEvent tapFloatingShareButton] */

void FUN_108f8ff84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x15;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f8ffd0; end: 108f9001b; +[SCSendToEvent tapMoreButton] */

void FUN_108f8ffd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0x11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f9001c; end: 108f90073; +[SCSendToEvent viewDidLoadWithSectionExtensionsLoaded:] */

void FUN_108f9001c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f90074; end: 108f900bf; +[SCSendToEvent viewWillDisappear] */

void FUN_108f90074(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b50d0;
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



/* Entry: 108f900c0; end: 108f900e3; -[SCSendToEvent copyWithZone:] */

undefined8 FUN_108f900c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f900e4; end: 108f9021f; -[SCSendToEvent hash] */

void FUN_108f900e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = *(undefined8 *)(param_1 + 8);
  uStack_e0 = (ulong)*(byte *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_d0 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_c8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uStack_a0 = (ulong)*(byte *)(param_1 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uStack_80 = (ulong)*(byte *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  lStack_60 = (long)*(int *)(param_1 + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb8);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xb9);
  puVar3 = &uStack_e8;
  uStack_40 = uVar1;
  func_0x000107c3191c(puVar3,0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_118 = PTR_PTR_1126ff938;
  puStack_120 = puVar3;
  _objc_msgSendSuper2(&puStack_120,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f90220; end: 108f90263; -[SCSendToEvent internalInit] */

void FUN_108f90220(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff938;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f90264; end: 108f904d3; -[SCSendToEvent isEqual:] */

long FUN_108f90264(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f904ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f904b8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          ((*(char *)(param_1 + 0x50) == *(char *)(param_3 + 0x50) &&
           (*(char *)(param_1 + 0x70) == *(char *)(param_3 + 0x70))))))) &&
        (*(int *)(param_1 + 0x90) == *(int *)(param_3 + 0x90))) &&
       (((*(char *)(param_1 + 0xa8) == *(char *)(param_3 + 0xa8) &&
         (*(char *)(param_1 + 0xb8) == *(char *)(param_3 + 0xb8))) &&
        (*(char *)(param_1 + 0xb9) == *(char *)(param_3 + 0xb9))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x78);
                        if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x80);
                          if ((lVar3 == *(long *)(param_3 + 0x80)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x88);
                            if ((lVar3 == *(long *)(param_3 + 0x88)) ||
                               (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                              lVar3 = *(long *)(param_1 + 0x98);
                              if ((lVar3 == *(long *)(param_3 + 0x98)) ||
                                 (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                lVar3 = *(long *)(param_1 + 0xa0);
                                if ((lVar3 == *(long *)(param_3 + 0xa0)) ||
                                   (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                                  lVar3 = *(long *)(param_1 + 0xb0);
                                  if (lVar3 != *(long *)(param_3 + 0xb0)) {
                                    func_0x00010c071ae0();
                                    goto LAB_108f904b8;
                                  }
                                  goto LAB_108f904ac;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f904b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f904d4; end: 108f909c7; -[SCSendToEvent matchViewDidLoad:viewWillDisappear:allSectionsDidCompleteInitialRender:dismiss:send:search:tapConfirmationBar:startNewGroup:createdNewGroup:presentTopicSearch:dismissTopicSearch:selectList:clearListSelection:presentSearch:dismissSearch:clearSearchTextField:tapCancelButton:tapMoreButton:selectSponsor:clearSponsorSelection:selectContactRecipient:tapFloatingShareButton:actionSheetAvailabilityDidChange:setSchedule:expandSendToTray:sendToTrayDidChangeExpansion:tapExternalShareDestination:] */

void FUN_108f904d4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16,
                  long param_17,long param_18,long param_19,long param_20,long param_21,
                  long param_22,long param_23,long param_24,long param_25,long param_26,
                  long param_27,long param_28,long param_29)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) goto LAB_108f908b4;
    uVar1 = *(undefined1 *)(param_1 + 0x10);
    pcVar5 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
    goto code_r0x000108f90744;
  case 1:
    lVar2 = param_4;
    break;
  case 2:
    lVar2 = param_5;
    break;
  case 3:
    if (param_6 == 0) goto LAB_108f908b4;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_6;
    goto code_r0x000108f9078c;
  case 4:
    if (param_7 == 0) goto LAB_108f908b4;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = param_7;
code_r0x000108f9078c:
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3,uVar4);
    goto LAB_108f908b4;
  case 5:
    if (param_8 == 0) goto LAB_108f908b4;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = param_8;
    goto code_r0x000108f908ac;
  case 6:
    if (param_9 == 0) goto LAB_108f908b4;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    pcVar5 = *(code **)(param_9 + 0x10);
    lVar2 = param_9;
    goto code_r0x000108f908b0;
  case 7:
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))
                (param_10,*(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58));
    }
    goto LAB_108f908b4;
  case 8:
    if (param_11 == 0) goto LAB_108f908b4;
    pcVar5 = *(code **)(param_11 + 0x10);
    lVar2 = param_11;
    goto code_r0x000108f90894;
  case 9:
    if (param_12 == 0) goto LAB_108f908b4;
    pcVar5 = *(code **)(param_12 + 0x10);
    lVar2 = param_12;
    goto code_r0x000108f90894;
  case 10:
    if (param_13 == 0) goto LAB_108f908b4;
    pcVar5 = *(code **)(param_13 + 0x10);
    lVar2 = param_13;
    goto code_r0x000108f90894;
  case 0xb:
    if (param_14 != 0) {
      (**(code **)(param_14 + 0x10))
                (param_14,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                 *(undefined1 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
    }
    goto LAB_108f908b4;
  case 0xc:
    lVar2 = param_15;
    break;
  case 0xd:
    if (param_16 == 0) goto LAB_108f908b4;
    pcVar5 = *(code **)(param_16 + 0x10);
    lVar2 = param_16;
    goto code_r0x000108f90894;
  case 0xe:
    lVar2 = param_17;
    break;
  case 0xf:
    lVar2 = param_18;
    break;
  case 0x10:
    lVar2 = param_19;
    break;
  case 0x11:
    lVar2 = param_20;
    break;
  case 0x12:
    if (param_21 != 0) {
      (**(code **)(param_21 + 0x10))
                (param_21,*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                 *(undefined4 *)(param_1 + 0x90));
    }
    goto LAB_108f908b4;
  case 0x13:
    lVar2 = param_22;
    break;
  case 0x14:
    lVar2 = param_23;
    break;
  case 0x15:
    lVar2 = param_24;
    break;
  case 0x16:
    if (param_25 == 0) goto LAB_108f908b4;
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    lVar2 = param_25;
    goto code_r0x000108f908ac;
  case 0x17:
    if (param_26 == 0) goto LAB_108f908b4;
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    lVar2 = param_26;
code_r0x000108f908ac:
    pcVar5 = *(code **)(lVar2 + 0x10);
code_r0x000108f908b0:
    (*pcVar5)(lVar2,uVar3);
    goto LAB_108f908b4;
  case 0x18:
    if (param_27 == 0) goto LAB_108f908b4;
    pcVar5 = *(code **)(param_27 + 0x10);
    lVar2 = param_27;
    goto code_r0x000108f90894;
  case 0x19:
    if (param_28 == 0) goto LAB_108f908b4;
    uVar1 = *(undefined1 *)(param_1 + 0xa8);
    pcVar5 = *(code **)(param_28 + 0x10);
    lVar2 = param_28;
code_r0x000108f90744:
    (*pcVar5)(lVar2,uVar1);
    goto LAB_108f908b4;
  case 0x1a:
    if (param_29 != 0) {
      (**(code **)(param_29 + 0x10))
                (param_29,*(undefined8 *)(param_1 + 0xb0),*(undefined1 *)(param_1 + 0xb8),
                 *(undefined1 *)(param_1 + 0xb9));
    }
  default:
    goto LAB_108f908b4;
  }
  if (lVar2 != 0) {
    pcVar5 = *(code **)(lVar2 + 0x10);
code_r0x000108f90894:
    (*pcVar5)(lVar2);
  }
LAB_108f908b4:
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f909c8; end: 108f90a93; -[SCSendToEvent .cxx_destruct] */

void FUN_108f909c8(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108f90a94; end: 108f90b57; -[SCSnapSponsorInfo initWithCoder:] */

undefined1 * FUN_108f90a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff940;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f90b58; end: 108f90c0b; -[SCSnapSponsorInfo initWithProfileId:displayName:sponsorStatus:] */

undefined1 *
FUN_108f90b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f90c0c; end: 108f90c2f; -[SCSnapSponsorInfo copyWithZone:] */

undefined8 FUN_108f90c0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f90c30; end: 108f90ca3; -[SCSnapSponsorInfo encodeWithCoder:] */

void FUN_108f90c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ebcff8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f12f38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f90ca4; end: 108f90d1b; -[SCSnapSponsorInfo hash] */

undefined8 * FUN_108f90ca4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lStack_30 = (long)*(int *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f90dac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f90db8;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)((long)puVar3 + 8) == *(int *)(param_3 + 8))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f90db8;
        }
        goto LAB_108f90dac;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f90db8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f90d1c; end: 108f90dd3; -[SCSnapSponsorInfo isEqual:] */

long FUN_108f90d1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f90dac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f90db8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108f90db8;
        }
        goto LAB_108f90dac;
      }
    }
    lVar3 = 0;
  }
LAB_108f90db8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f90dd4; end: 108f90ddb; -[SCSnapSponsorInfo profileId] */

undefined8 FUN_108f90dd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f90ddc; end: 108f90de3; -[SCSnapSponsorInfo displayName] */

undefined8 FUN_108f90ddc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f90de4; end: 108f90deb; -[SCSnapSponsorInfo sponsorStatus] */

undefined4 FUN_108f90de4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 108f90dec; end: 108f90e1b; -[SCSnapSponsorInfo .cxx_destruct] */

void FUN_108f90dec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f90e1c; end: 108f90faf; -[SCStandardExternalContentShareScope initWithUIContainer:textConfiguration:mediaConfiguration:sharingMetadata:phoneNumber:shareSource:sessionId:delegate:] */

undefined1 *
FUN_108f90e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ff948;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f90fb0; end: 108f90fe3;  */

void FUN_108f90fb0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f90fe4; end: 108f91163; -[SCStandardExternalContentShareScope initWithUIContainer:textConfigurationFuture:mediaConfiguration:sharingMetadata:phoneNumber:shareSource:sessionId:delegate:] */

undefined1 *
FUN_108f90fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ff948;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_10);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f91164; end: 108f9135f; -[SCStandardExternalContentShareScope initWithViewContainer:uiContainer:textConfiguration:mediaConfiguration:sharingMetadata:phoneNumber:shareSource:sessionId:delegate:shareSheetBottomPaddingSpace:dismissDisabledRects:] */

undefined8 *
FUN_108f91164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_78 = PTR_PTR_1126ff948;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    puVar1[7] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 9,param_12);
    puVar1[10] = param_1;
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 108f91360; end: 108f91393;  */

void FUN_108f91360(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f91394; end: 108f9139b; -[SCStandardExternalContentShareScope uiContainer] */

undefined8 FUN_108f91394(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f9139c; end: 108f913a3; -[SCStandardExternalContentShareScope viewContainer] */

undefined8 FUN_108f9139c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f913a4; end: 108f913ab; -[SCStandardExternalContentShareScope textConfiguration] */

undefined8 FUN_108f913a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f913ac; end: 108f913b3; -[SCStandardExternalContentShareScope mediaConfiguration] */

undefined8 FUN_108f913ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f913b4; end: 108f913bb; -[SCStandardExternalContentShareScope sharingMetadata] */

undefined8 FUN_108f913b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f913bc; end: 108f913c3; -[SCStandardExternalContentShareScope phoneNumber] */

undefined8 FUN_108f913bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f913c4; end: 108f913cb; -[SCStandardExternalContentShareScope shareSource] */

undefined8 FUN_108f913c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f913cc; end: 108f913d3; -[SCStandardExternalContentShareScope sessionId] */

undefined8 FUN_108f913cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f913d4; end: 108f913eb; -[SCStandardExternalContentShareScope delegate] */

void FUN_108f913d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f913ec; end: 108f913f3; -[SCStandardExternalContentShareScope shareSheetBottomPaddingSpace] */

undefined8 FUN_108f913ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 108f913f4; end: 108f913fb; -[SCStandardExternalContentShareScope dismissDisabledRects] */

undefined8 FUN_108f913f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108f913fc; end: 108f9147b; -[SCStandardExternalContentShareScope .cxx_destruct] */

void FUN_108f913fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 108f9147c; end: 108f91503; -[SCCollectionViewSectionVisibilityData initWithIndexPath:resultShowingReason:] */

undefined1 *
FUN_108f9147c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ff950;
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



/* Entry: 108f91504; end: 108f91527; -[SCCollectionViewSectionVisibilityData copyWithZone:] */

undefined8 FUN_108f91504(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f91528; end: 108f9159b; -[SCCollectionViewSectionVisibilityData hash] */

undefined8 * FUN_108f91528(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f91620;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108f91620;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108f91620;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108f91620:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 108f9159c; end: 108f9163b; -[SCCollectionViewSectionVisibilityData isEqual:] */

long FUN_108f9159c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f91620;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108f91620;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f91620;
    }
  }
  lVar3 = 1;
LAB_108f91620:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f9163c; end: 108f91643; -[SCCollectionViewSectionVisibilityData indexPath] */

undefined8 FUN_108f9163c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f91644; end: 108f9164b; -[SCCollectionViewSectionVisibilityData resultShowingReason] */

undefined8 FUN_108f91644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f9164c; end: 108f91657; -[SCCollectionViewSectionVisibilityData .cxx_destruct] */

void FUN_108f9164c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f91658; end: 108f916cb; -[SCCollectionViewSectionVisibilityDataCollection initWithExtraDataRows:] */

undefined1 * FUN_108f91658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ff958;
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



/* Entry: 108f916cc; end: 108f916ef; -[SCCollectionViewSectionVisibilityDataCollection copyWithZone:] */

undefined8 FUN_108f916cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f916f0; end: 108f916f7; -[SCCollectionViewSectionVisibilityDataCollection hash] */

void FUN_108f916f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108f916f8; end: 108f91787; -[SCCollectionViewSectionVisibilityDataCollection isEqual:] */

long FUN_108f916f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f9176c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_108f9176c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108f9176c;
    }
  }
  lVar3 = 1;
LAB_108f9176c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f91788; end: 108f9178f; -[SCCollectionViewSectionVisibilityDataCollection extraDataRows] */

undefined8 FUN_108f91788(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f91790; end: 108f9179b; -[SCCollectionViewSectionVisibilityDataCollection .cxx_destruct] */

void FUN_108f91790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f9179c; end: 108f91917; -[SCCollectionViewSectionRenderingListenerAnnouncer description] */

void FUN_108f9179c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_108f91918(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f91918; end: 108f91977;  */

void FUN_108f91918(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 108f91978; end: 108f91c23; -[SCCollectionViewSectionRenderingListenerAnnouncer addListener:] */

undefined8 FUN_108f91978(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110acfa90;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_108f91c24(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_108f91d64(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_108f91b2c:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_108f91b4c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_108f91c24(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_108f91c24(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_108f91d64(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_108f91b2c;
    }
  }
  uVar9 = 1;
LAB_108f91b4c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 108f91c24; end: 108f91d63;  */

void FUN_108f91c24(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_108f92178();
LAB_108f91d60:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_108f91d60;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 108f91d64; end: 108f91dab;  */

void FUN_108f91d64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 108f91dac; end: 108f91fdb; -[SCCollectionViewSectionRenderingListenerAnnouncer removeListener:] */

void FUN_108f91dac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_108f91f60;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108f91e14;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_108f91d64(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108f91f60;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_108f91e14:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110acfa90;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_108f91c24(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_108f91d64(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_108f91f60;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_108f91f60:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f91fdc; end: 108f9212f; -[SCCollectionViewSectionRenderingListenerAnnouncer sectionsDidRenderWithViewModelsMapping:dataReadyTimestampMapping:renderTimestampMapping:visibleCellsNumberMapping:] */

void FUN_108f91fdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_108f91918(&plStack_60,param_1 + 0x48);
  if (plStack_60 != (long *)0x0) {
    lVar2 = plStack_60[1];
    for (lVar6 = *plStack_60; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c156b80();
      _objc_release(lVar5);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f92130; end: 108f92157; -[SCCollectionViewSectionRenderingListenerAnnouncer .cxx_destruct] */

void FUN_108f92130(long param_1)

{
  FUN_108f9218c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108f92158; end: 108f92177; -[SCCollectionViewSectionRenderingListenerAnnouncer .cxx_construct] */

void FUN_108f92158(long param_1)

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



/* Entry: 108f92178; end: 108f9218b;  */

undefined * FUN_108f92178(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 108f9218c; end: 108f921e3;  */

long FUN_108f9218c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 108f921e4; end: 108f921f3;  */

void FUN_108f921e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110acfa90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108f921f4; end: 108f92213;  */

void FUN_108f921f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110acfa90;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108f92214; end: 108f9227b;  */

void FUN_108f92214(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108f9227c; end: 108f9227f;  */

void FUN_108f9227c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108f92280; end: 108f9240b;  */

void FUN_108f92280(undefined8 param_1)

{
  switch(param_1) {
  case 1:
    func_0x000108f92588();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
  case 0x10:
    func_0x000108f925a0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    func_0x000108f925b8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x000108f92600();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
  case 0x11:
    func_0x000108f925d0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x000108f925e8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
  case 0x12:
    func_0x000108f92618();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x000108f92630();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x000108f92648();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x000108f92660();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x000108f92678();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
  case 0xd:
  case 0x13:
    func_0x000108f92690();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xe:
    func_0x000108f926a8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xf:
  case 0x19:
    func_0x000108f926d8();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x14:
    func_0x000108f926f0();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x15:
    func_0x000108f92708();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x16:
    func_0x000108f92720();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x17:
    func_0x000108f92738();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x18:
    func_0x000108f92750();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x1a:
    func_0x000108f92768();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x1b:
    func_0x000108f926c0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f9240c; end: 108f92587;  */

void FUN_108f9240c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e18c18;
  switch(param_1) {
  case 1:
    break;
  case 2:
  case 3:
  case 0x10:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61a78;
    break;
  case 4:
    ppuVar1 = &PTR____CFConstantStringClassReference_110f12f78;
    break;
  case 5:
  case 0x11:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61ab8;
    break;
  case 6:
    ppuVar1 = &PTR____CFConstantStringClassReference_110f12f98;
    break;
  case 7:
  case 8:
  case 0x12:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61a98;
    break;
  case 9:
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbc778;
    break;
  case 10:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e99c58;
    break;
  case 0xb:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61a58;
    break;
  case 0xc:
  case 0xd:
  case 0x13:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61ad8;
    break;
  case 0xe:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61a18;
    break;
  case 0xf:
  case 0x19:
    ppuVar1 = &PTR____CFConstantStringClassReference_110f12fb8;
    break;
  case 0x14:
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbfb58;
    break;
  case 0x15:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61af8;
    break;
  case 0x16:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61b18;
    break;
  case 0x17:
    ppuVar1 = &PTR____CFConstantStringClassReference_110f12fd8;
    break;
  case 0x18:
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c23bc20(0x4038000000000000,0x4038000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
                        param_2,0x26);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_108f92570;
  case 0x1a:
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbddd8;
    break;
  case 0x1b:
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61a38;
    break;
  default:
    puVar2 = (undefined *)0x0;
    goto LAB_108f92570;
  }
  func_0x00010c25ce40(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110f12ff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
LAB_108f92570:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f92588; end: 108f9277f;  */

void FUN_108f92588(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f13018;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f13018,
                      &PTR____CFConstantStringClassReference_110f13038,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108f92780; end: 108f928ab;  */

void FUN_108f92780(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    ppuVar5 = (undefined **)PTR_PTR_1126aed98;
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010c25d700(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5dc0(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
      ppuVar6 = ppuVar5;
      if (param_2 == 0) {
        func_0x00010c260c00(ppuVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        _objc_retain();
      }
      _objc_release(ppuVar5);
      goto LAB_108f9288c;
    }
  }
  ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_108f9288c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 108f928ac; end: 108f9293b;  */

void FUN_108f928ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010bdc3100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c12b720(puVar2,param_2,0x26,1);
  uVar3 = param_1;
  func_0x00010c25cda0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108f9293c; end: 108f92953;  */

void FUN_108f9293c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f92954; end: 108f930fb;  */

/* WARNING: Possible PIC construction at 0x000108f929dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f92a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f92acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108f92b38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108f92a4c) */

void FUN_108f92954(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf2cf00();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((int)puVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf2cf00();
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)puVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf2cf00();
      _objc_release(puVar2);
      _objc_release(puVar1);
      if ((int)puVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf2cf00();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if ((int)puVar3 == 0) {
          puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
          func_0x00010c22b720();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
          func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010bf2cf00();
          _objc_release(puVar2);
          _objc_release(puVar1);
          if ((int)puVar3 == 0) {
            return;
          }
          uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
          ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1350;
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
          ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1338;
        }
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1320;
      }
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
      ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d12f0;
    }
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d12d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_addObject__11259c1f0,ppuVar5);
  return;
}



/* Entry: 108f930fc; end: 108f93587;  */

void FUN_108f930fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_108f9293c;
  uStack_50 = 0x108f9294c;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126dcc40;
  puStack_48 = puVar1;
  _objc_alloc_init(PTR_PTR_1126dcc40);
  puVar1 = PTR_PTR_1126ae740;
  _objc_alloc_init(PTR_PTR_1126ae740);
  func_0x00010c1fec00(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c22a9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126af7d0;
  _objc_alloc_init(PTR_PTR_1126af7d0);
  puVar3 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = param_1;
  func_0x00010c1195e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126dcc40;
  _objc_alloc(PTR_PTR_1126dcc40);
  uVar5 = uVar4;
  func_0x00010c296d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008360(puVar1);
  _objc_release(uVar5);
  puVar2 = puVar1;
  func_0x00010c22a9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf980c0();
  uVar5 = puStack_68[5];
  _objc_retain(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108f93588; end: 108f935c3;  */

void FUN_108f93588(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 - 1;
  if ((uVar1 < 0x17) && ((0x787fffU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
               PTR_s_addObject__11259c1f0,(&PTR_PTR_110acfb50)[uVar1]);
    return;
  }
  return;
}



/* Entry: 108f935c4; end: 108f936d7;  */

uint FUN_108f935c4(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  uVar1 = param_1;
  if (((param_2 < 0x1a) && ((1L << (param_2 & 0x3f) & 0x3fbff6bU) != 0)) &&
     (uVar3 = param_3, func_0x000108faa364(), (int)uVar3 == 0)) {
    uVar3 = param_3;
    func_0x000108faa350();
    if ((int)uVar3 != 0) {
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_108f93668;
    }
    uVar3 = 0;
  }
  else {
    func_0x00010c0c45e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c08d600();
    _objc_retainAutoreleasedReturnValue();
LAB_108f93668:
    _objc_release(uVar1);
    if (uVar3 != 0) {
      uVar1 = uVar3;
      func_0x00010bf529e0();
      uVar2 = param_3;
      FUN_108faa490();
      if (uVar1 <= uVar2) {
        uVar1 = param_1;
        func_0x00010c106740(param_1);
        uVar4 = (uint)uVar1 ^ 1;
        goto LAB_108f936ac;
      }
    }
  }
  uVar4 = 0;
LAB_108f936ac:
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 108f936d8; end: 108f936e7;  */

void FUN_108f936d8(undefined **param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined **unaff_x19;
  ulong unaff_x20;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long lVar16;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  ppuVar14 = (undefined **)0x0;
  uVar15 = 1;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    *(undefined ***)(puVar1 + -0x60) = unaff_x28;
    *(long *)(puVar1 + -0x58) = unaff_x27;
    *(undefined ***)(puVar1 + -0x50) = unaff_x26;
    *(undefined ***)(puVar1 + -0x48) = unaff_x25;
    *(undefined ***)(puVar1 + -0x40) = unaff_x24;
    *(ulong *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined ***)(puVar1 + -0x28) = unaff_x21;
    *(ulong *)(puVar1 + -0x20) = unaff_x20;
    *(undefined ***)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(int *)(puVar1 + -0x14c) = (int)uVar15;
    *(int *)(puVar1 + -0x15c) = (int)param_3;
    *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar13 = ppuVar14;
    uVar11 = param_4;
    _objc_retain(param_2);
    _objc_retain(param_4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined **)0x0) {
      func_0x00010befa160(puVar3);
    }
    *(undefined **)(puVar1 + -0x148) = puVar3;
    *(undefined8 *)(puVar1 + -0x140) = param_4;
    if (param_2 == 0) {
LAB_108f93878:
      iVar2 = 0;
      uVar10 = param_4;
    }
    else {
      func_0x00010bfb4ac0(param_2);
      lVar16 = param_2;
      func_0x00010bfb4ac0();
      if (lVar16 != 2) {
        func_0x00010befa160(puVar3);
      }
      func_0x00010befa160(puVar3);
      lVar16 = param_2;
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 == 0) {
LAB_108f93814:
        func_0x00010befa160(puVar3);
      }
      else {
        lVar4 = param_2;
        func_0x00010c0c45e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08d600();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf529e0();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar16);
        puVar3 = *(undefined **)(puVar1 + -0x148);
        param_4 = *(undefined8 *)(puVar1 + -0x140);
        if (lVar6 == 1) goto LAB_108f93814;
      }
      if (((((undefined **)0x19 < ppuVar14) || ((1L << ((ulong)ppuVar14 & 0x3f) & 0x3fbff6bU) == 0))
          && (lVar16 = param_2, FUN_108f935c4(param_2,ppuVar14,param_4), (int)lVar16 != 0)) &&
         (uVar10 = param_4, func_0x000108faa810(), (int)uVar10 != 0)) {
        func_0x00010befa120(puVar3);
      }
      lVar16 = param_2;
      func_0x00010c0c6c20();
      if (lVar16 == 1) {
        func_0x00010befa160(puVar3);
      }
      if (param_1 == (undefined **)0x0) goto LAB_108f93878;
      lVar16 = param_2;
      func_0x00010c106740();
      iVar2 = (int)lVar16;
      uVar10 = param_4;
    }
    if ((param_2 == 0 && param_1 != (undefined **)0x0) || (param_4 = uVar11, iVar2 != 0)) {
      func_0x00010befa120(puVar3);
      param_4 = uVar11;
    }
    _objc_retain(uVar10);
    *(long *)(puVar1 + -0x158) = param_2;
    if (*(int *)(puVar1 + -0x14c) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar3);
      func_0x00010befa120(puVar3);
      uVar11 = uVar10;
      func_0x000108faa7e8();
      *(undefined **)(puVar1 + -0x138) = puVar3;
      if ((int)uVar11 == 0) {
        *(undefined8 *)(puVar1 + -0x108) = 0;
        *(undefined8 *)(puVar1 + -0x110) = 0;
        *(undefined8 *)(puVar1 + -0xf8) = 0;
        *(undefined8 *)(puVar1 + -0x100) = 0;
        *(undefined8 *)(puVar1 + -0x128) = 0;
        *(undefined8 *)(puVar1 + -0x130) = 0;
        *(undefined8 *)(puVar1 + -0x118) = 0;
        *(undefined8 *)(puVar1 + -0x120) = 0;
        ppuVar7 = &PTR__OBJC_CLASS___NSConstantArray_111183650;
        ppuVar13 = (undefined **)(puVar1 + -0xf0);
        uVar15 = 0x10;
        func_0x00010bf52a60();
        ppuVar14 = (undefined **)0x0;
        if (ppuVar7 != (undefined **)0x0) {
          unaff_x27 = **(long **)(puVar1 + -0x120);
          param_1 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          unaff_x26 = &PTR____CFConstantStringClassReference_110ddd938;
          do {
            unaff_x28 = (undefined **)0x0;
            do {
              if (**(long **)(puVar1 + -0x120) != unaff_x27) {
                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183650);
              }
              uVar11 = *(undefined8 *)(*(long *)(puVar1 + -0x128) + (long)unaff_x28 * 8);
              puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
              func_0x00010c22b720();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
              uVar15 = uVar11;
              func_0x00010c0e00e0(uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc3460(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010bf2cf00();
              _objc_release(puVar3);
              _objc_release(uVar15);
              _objc_release(puVar8);
              if ((int)puVar9 != 0) {
                func_0x00010c0e00e0(uVar11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(*(undefined8 *)(puVar1 + -0x138));
                _objc_release(uVar11);
              }
              unaff_x28 = (undefined **)((long)unaff_x28 + 1);
            } while (ppuVar7 != unaff_x28);
            ppuVar13 = (undefined **)(puVar1 + -0xf0);
            ppuVar7 = &PTR__OBJC_CLASS___NSConstantArray_111183650;
            uVar15 = 0x10;
            func_0x00010bf52a60();
            ppuVar14 = (undefined **)0x0;
          } while (ppuVar7 != (undefined **)0x0);
        }
      }
      else {
        func_0x00010befa160(puVar3);
        func_0x000108faa7fc();
        if ((int)uVar10 != 0) {
          func_0x00010befa120(*(undefined8 *)(puVar1 + -0x138));
        }
      }
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar11 = *(undefined8 *)(puVar1 + -0x138);
      func_0x00010bf529e0();
      *(undefined8 *)(puVar1 + -0x170) = uVar11;
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar11 = *(undefined8 *)(puVar1 + -0x138);
      func_0x00010bf51e00(uVar11);
      _objc_release(*(undefined8 *)(puVar1 + -0x138));
      unaff_x24 = param_1;
      unaff_x25 = ppuVar14;
    }
    else {
      _objc_retain(uVar10);
      *(undefined8 *)(puVar1 + -0xf0) = 0;
      *(undefined1 **)(puVar1 + -0xe8) = puVar1 + -0xf0;
      *(undefined8 *)(puVar1 + -0xe0) = 0x3032000000;
      *(code **)(puVar1 + -0xd8) = FUN_108f9293c;
      *(undefined8 *)(puVar1 + -0xd0) = 0x108f9294c;
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)(puVar1 + -200) = puVar3;
      func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
      iVar2 = (int)*(undefined8 *)(puVar1 + -0x140);
      func_0x000108faa7e8();
      if (iVar2 == 0) {
        uVar11 = 0;
        _dispatch_semaphore_create();
        *(undefined **)(puVar1 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(puVar1 + -0x128) = 0xc2000000;
        *(undefined8 *)(puVar1 + -0x120) = 0x108f92bcc;
        *(undefined **)(puVar1 + -0x118) = &UNK_11084b9d0;
        *(undefined1 **)(puVar1 + -0x108) = puVar1 + -0xf0;
        _objc_retain();
        *(undefined8 *)(puVar1 + -0x110) = uVar11;
        func_0x000107c312cc("APPSTORE",puVar1 + -0x130);
        uVar10 = 0;
        _dispatch_time(0,2000000000);
        _dispatch_semaphore_wait(uVar11,uVar10);
        _objc_release(*(undefined8 *)(puVar1 + -0x110));
        _objc_release(uVar11);
      }
      else {
        func_0x00010befa160(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
        iVar2 = (int)*(undefined8 *)(puVar1 + -0x140);
        func_0x000108faa7fc();
        if (iVar2 != 0) {
          func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
        }
      }
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar11 = *(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28);
      func_0x00010bf529e0();
      *(undefined8 *)(puVar1 + -0x170) = uVar11;
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar11 = *(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28);
      func_0x00010bf51e00(uVar11);
      __Block_object_dispose(puVar1 + -0xf0,8);
      _objc_release(*(undefined8 *)(puVar1 + -200));
      _objc_release(*(undefined8 *)(puVar1 + -0x140));
      unaff_x24 = param_1;
      unaff_x25 = ppuVar14;
    }
    ppuVar14 = ppuVar13;
    _objc_release(*(undefined8 *)(puVar1 + -0x140));
    unaff_x23 = *(ulong *)(puVar1 + -0x148);
    func_0x00010c069840(unaff_x23);
    _objc_release(uVar11);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar12 = unaff_x23;
    func_0x00010bf529e0();
    *(ulong *)(puVar1 + -0x170) = uVar12;
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x21 = *(undefined ***)(puVar1 + -0x158);
    if (*(int *)(puVar1 + -0x15c) != 0) {
      uVar11 = *(undefined8 *)(puVar1 + -0x140);
      _objc_retain(uVar11);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)(puVar1 + -0x138) = puVar3;
      if (*(int *)(puVar1 + -0x14c) == 0) {
        func_0x00010befa120();
        func_0x00010befa120(puVar3);
        uVar10 = uVar11;
        func_0x000108faa7e8();
        if ((int)uVar10 == 0) {
          *(undefined8 *)(puVar1 + -0x108) = 0;
          *(undefined8 *)(puVar1 + -0x110) = 0;
          *(undefined8 *)(puVar1 + -0xf8) = 0;
          *(undefined8 *)(puVar1 + -0x100) = 0;
          *(undefined8 *)(puVar1 + -0x128) = 0;
          *(undefined8 *)(puVar1 + -0x130) = 0;
          *(undefined8 *)(puVar1 + -0x118) = 0;
          *(undefined8 *)(puVar1 + -0x120) = 0;
          ppuVar13 = &PTR__OBJC_CLASS___NSConstantArray_111183530;
          ppuVar14 = (undefined **)(puVar1 + -0xf0);
          uVar15 = 0x10;
          func_0x00010bf52a60();
          if (ppuVar13 != (undefined **)0x0) {
            lVar16 = **(long **)(puVar1 + -0x120);
            unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
            unaff_x24 = &PTR____CFConstantStringClassReference_110ddd938;
            do {
              unaff_x25 = (undefined **)0x0;
              do {
                if (**(long **)(puVar1 + -0x120) != lVar16) {
                  _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183530);
                }
                unaff_x27 = *(long *)(*(long *)(puVar1 + -0x128) + (long)unaff_x25 * 8);
                unaff_x28 = (undefined **)PTR__OBJC_CLASS___UIApplication_1126ae590;
                func_0x00010c22b720();
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
                lVar4 = unaff_x27;
                func_0x00010c0e00e0(unaff_x27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bdc3460(puVar3);
                _objc_retainAutoreleasedReturnValue();
                ppuVar14 = unaff_x28;
                func_0x00010bf2cf00();
                _objc_release(puVar3);
                _objc_release(lVar4);
                _objc_release(unaff_x28);
                if ((int)ppuVar14 != 0) {
                  lVar4 = unaff_x27;
                  func_0x00010c0e00e0(unaff_x27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(*(undefined8 *)(puVar1 + -0x138));
                  _objc_release(lVar4);
                }
                unaff_x25 = (undefined **)((long)unaff_x25 + 1);
              } while (ppuVar13 != unaff_x25);
              ppuVar14 = (undefined **)(puVar1 + -0xf0);
              ppuVar13 = &PTR__OBJC_CLASS___NSConstantArray_111183530;
              uVar15 = 0x10;
              func_0x00010bf52a60();
            } while (ppuVar13 != (undefined **)0x0);
          }
        }
        else {
          func_0x00010befa160(puVar3);
          func_0x000108faa7fc();
          if ((int)uVar11 != 0) {
            func_0x00010befa120(*(undefined8 *)(puVar1 + -0x138));
          }
        }
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar11 = *(undefined8 *)(puVar1 + -0x138);
        func_0x00010bf529e0();
        *(undefined8 *)(puVar1 + -0x170) = uVar11;
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar11 = *(undefined8 *)(puVar1 + -0x138);
        func_0x00010bf51e00(uVar11);
      }
      else {
        _objc_retain(uVar11);
        *(undefined8 *)(puVar1 + -0xf0) = 0;
        *(undefined1 **)(puVar1 + -0xe8) = puVar1 + -0xf0;
        *(undefined8 *)(puVar1 + -0xe0) = 0x3032000000;
        *(code **)(puVar1 + -0xd8) = FUN_108f9293c;
        *(undefined8 *)(puVar1 + -0xd0) = 0x108f9294c;
        puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(puVar1 + -200) = puVar3;
        func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
        func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
        iVar2 = (int)*(undefined8 *)(puVar1 + -0x140);
        func_0x000108faa7e8();
        if (iVar2 == 0) {
          *(undefined **)(puVar1 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)(puVar1 + -0x128) = 0xc2000000;
          *(code **)(puVar1 + -0x120) = FUN_108f92954;
          *(undefined **)(puVar1 + -0x118) = &UNK_110847658;
          *(undefined1 **)(puVar1 + -0x110) = puVar1 + -0xf0;
          func_0x00010bcbe2c4("APPSTORE",puVar1 + -0x130);
        }
        else {
          func_0x00010befa160(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
          iVar2 = (int)*(undefined8 *)(puVar1 + -0x140);
          func_0x000108faa7fc();
          if (iVar2 != 0) {
            func_0x00010befa120(*(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28));
          }
        }
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar11 = *(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28);
        func_0x00010bf529e0();
        *(undefined8 *)(puVar1 + -0x170) = uVar11;
        func_0x00010c14de00(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar11 = *(undefined8 *)(*(long *)(puVar1 + -0xe8) + 0x28);
        func_0x00010bf51e00(uVar11);
        __Block_object_dispose(puVar1 + -0xf0,8);
        _objc_release(*(undefined8 *)(puVar1 + -200));
        _objc_release(*(undefined8 *)(puVar1 + -0x140));
      }
      _objc_release(*(undefined8 *)(puVar1 + -0x138));
      _objc_release(*(undefined8 *)(puVar1 + -0x140));
      unaff_x23 = *(ulong *)(puVar1 + -0x148);
      func_0x00010c069840(unaff_x23);
      _objc_release(uVar11);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar12 = unaff_x23;
      func_0x00010bf529e0();
      *(ulong *)(puVar1 + -0x170) = uVar12;
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      unaff_x21 = *(undefined ***)(puVar1 + -0x158);
    }
    uVar12 = unaff_x23;
    func_0x00010bf4b900();
    unaff_x22 = *(undefined8 *)(puVar1 + -0x140);
    if (((uVar12 & 1) == 0) && (uVar11 = unaff_x22, FUN_108faa33c(), (int)uVar11 != 0)) {
      func_0x00010befa160(unaff_x23);
    }
    uVar12 = unaff_x23;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = uVar12;
    func_0x000107c31908();
    _objc_release(uVar12);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    param_3 = unaff_x20;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    unaff_x19 = unaff_x21;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
      return;
    }
    ___stack_chk_fail();
    param_2 = 8;
    __Block_object_dispose(puVar1 + -0xf0);
    unaff_x30 = FUN_108f9423c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    puVar1 = puVar1 + -0x170;
  } while( true );
}



/* Entry: 108f936e8; end: 108f9423b;  */

void FUN_108f936e8(undefined **param_1,long param_2,ulong param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **unaff_x19;
  ulong unaff_x20;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x23;
  long lVar13;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(int *)((long)register0x00000008 + -0x14c) = (int)param_5;
    *(int *)((long)register0x00000008 + -0x15c) = (int)param_3;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = param_4;
    uVar10 = param_6;
    _objc_retain(param_2);
    _objc_retain(param_6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined **)0x0) {
      func_0x00010befa160(puVar2);
    }
    *(undefined **)((long)register0x00000008 + -0x148) = puVar2;
    *(undefined8 *)((long)register0x00000008 + -0x140) = param_6;
    if (param_2 == 0) {
LAB_108f93878:
      iVar1 = 0;
      uVar9 = param_6;
    }
    else {
      func_0x00010bfb4ac0(param_2);
      lVar13 = param_2;
      func_0x00010bfb4ac0();
      if (lVar13 != 2) {
        func_0x00010befa160(puVar2);
      }
      func_0x00010befa160(puVar2);
      lVar13 = param_2;
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar13 == 0) {
LAB_108f93814:
        func_0x00010befa160(puVar2);
      }
      else {
        lVar3 = param_2;
        func_0x00010c0c45e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08d600();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar13);
        puVar2 = *(undefined **)((long)register0x00000008 + -0x148);
        param_6 = *(undefined8 *)((long)register0x00000008 + -0x140);
        if (lVar5 == 1) goto LAB_108f93814;
      }
      if (((((undefined **)0x19 < param_4) || ((1L << ((ulong)param_4 & 0x3f) & 0x3fbff6bU) == 0))
          && (lVar13 = param_2, FUN_108f935c4(param_2,param_4,param_6), (int)lVar13 != 0)) &&
         (uVar9 = param_6, func_0x000108faa810(), (int)uVar9 != 0)) {
        func_0x00010befa120(puVar2);
      }
      lVar13 = param_2;
      func_0x00010c0c6c20();
      if (lVar13 == 1) {
        func_0x00010befa160(puVar2);
      }
      if (param_1 == (undefined **)0x0) goto LAB_108f93878;
      lVar13 = param_2;
      func_0x00010c106740();
      iVar1 = (int)lVar13;
      uVar9 = param_6;
    }
    if ((param_2 == 0 && param_1 != (undefined **)0x0) || (param_6 = uVar10, iVar1 != 0)) {
      func_0x00010befa120(puVar2);
      param_6 = uVar10;
    }
    _objc_retain(uVar9);
    *(long *)((long)register0x00000008 + -0x158) = param_2;
    if (*(int *)((long)register0x00000008 + -0x14c) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      uVar10 = uVar9;
      func_0x000108faa7e8();
      *(undefined **)((long)register0x00000008 + -0x138) = puVar2;
      if ((int)uVar10 == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111183650;
        ppuVar12 = (undefined **)((long)register0x00000008 + -0xf0);
        param_5 = 0x10;
        func_0x00010bf52a60();
        param_4 = (undefined **)0x0;
        if (ppuVar6 != (undefined **)0x0) {
          unaff_x27 = **(long **)((long)register0x00000008 + -0x120);
          param_1 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          unaff_x26 = &PTR____CFConstantStringClassReference_110ddd938;
          do {
            unaff_x28 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x120) != unaff_x27) {
                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183650);
              }
              uVar9 = *(undefined8 *)
                       (*(long *)((long)register0x00000008 + -0x128) + (long)unaff_x28 * 8);
              puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
              func_0x00010c22b720();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
              uVar10 = uVar9;
              func_0x00010c0e00e0(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc3460(puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010bf2cf00();
              _objc_release(puVar2);
              _objc_release(uVar10);
              _objc_release(puVar7);
              if ((int)puVar8 != 0) {
                func_0x00010c0e00e0(uVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(*(undefined8 *)((long)register0x00000008 + -0x138));
                _objc_release(uVar9);
              }
              unaff_x28 = (undefined **)((long)unaff_x28 + 1);
            } while (ppuVar6 != unaff_x28);
            ppuVar12 = (undefined **)((long)register0x00000008 + -0xf0);
            ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111183650;
            param_5 = 0x10;
            func_0x00010bf52a60();
            param_4 = (undefined **)0x0;
          } while (ppuVar6 != (undefined **)0x0);
        }
      }
      else {
        func_0x00010befa160(puVar2);
        func_0x000108faa7fc();
        if ((int)uVar9 != 0) {
          func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x138));
        }
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
      func_0x00010bf529e0();
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
      func_0x00010bf51e00(uVar10);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x138));
      unaff_x24 = param_1;
      unaff_x25 = param_4;
    }
    else {
      _objc_retain(uVar9);
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0xe8) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3032000000;
      *(code **)((long)register0x00000008 + -0xd8) = FUN_108f9293c;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x108f9294c;
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -200) = puVar2;
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
      func_0x000108faa7e8();
      if (iVar1 == 0) {
        uVar10 = 0;
        _dispatch_semaphore_create();
        *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc2000000;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0x108f92bcc;
        *(undefined **)((long)register0x00000008 + -0x118) = &UNK_11084b9d0;
        *(undefined1 **)((long)register0x00000008 + -0x108) =
             (undefined1 *)((long)register0x00000008 + -0xf0);
        _objc_retain();
        *(undefined8 *)((long)register0x00000008 + -0x110) = uVar10;
        func_0x000107c312cc("APPSTORE",(undefined1 *)((long)register0x00000008 + -0x130));
        uVar9 = 0;
        _dispatch_time(0,2000000000);
        _dispatch_semaphore_wait(uVar10,uVar9);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x110));
        _objc_release(uVar10);
      }
      else {
        func_0x00010befa160(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
        func_0x000108faa7fc();
        if (iVar1 != 0) {
          func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        }
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
      func_0x00010bf529e0();
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
      func_0x00010bf51e00(uVar10);
      __Block_object_dispose((undefined1 *)((long)register0x00000008 + -0xf0),8);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -200));
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
      unaff_x24 = param_1;
      unaff_x25 = param_4;
    }
    param_4 = ppuVar12;
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
    unaff_x23 = *(ulong *)((long)register0x00000008 + -0x148);
    func_0x00010c069840(unaff_x23);
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar11 = unaff_x23;
    func_0x00010bf529e0();
    *(ulong *)((long)register0x00000008 + -0x170) = uVar11;
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x158);
    if (*(int *)((long)register0x00000008 + -0x15c) != 0) {
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x140);
      _objc_retain(uVar10);
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x138) = puVar2;
      if (*(int *)((long)register0x00000008 + -0x14c) == 0) {
        func_0x00010befa120();
        func_0x00010befa120(puVar2);
        uVar9 = uVar10;
        func_0x000108faa7e8();
        if ((int)uVar9 == 0) {
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
          ppuVar12 = &PTR__OBJC_CLASS___NSConstantArray_111183530;
          param_4 = (undefined **)((long)register0x00000008 + -0xf0);
          param_5 = 0x10;
          func_0x00010bf52a60();
          if (ppuVar12 != (undefined **)0x0) {
            lVar13 = **(long **)((long)register0x00000008 + -0x120);
            unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
            unaff_x24 = &PTR____CFConstantStringClassReference_110ddd938;
            do {
              unaff_x25 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x120) != lVar13) {
                  _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183530);
                }
                unaff_x27 = *(long *)(*(long *)((long)register0x00000008 + -0x128) +
                                     (long)unaff_x25 * 8);
                unaff_x28 = (undefined **)PTR__OBJC_CLASS___UIApplication_1126ae590;
                func_0x00010c22b720();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
                lVar3 = unaff_x27;
                func_0x00010c0e00e0(unaff_x27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bdc3460(puVar2);
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = unaff_x28;
                func_0x00010bf2cf00();
                _objc_release(puVar2);
                _objc_release(lVar3);
                _objc_release(unaff_x28);
                if ((int)ppuVar6 != 0) {
                  lVar3 = unaff_x27;
                  func_0x00010c0e00e0(unaff_x27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(*(undefined8 *)((long)register0x00000008 + -0x138));
                  _objc_release(lVar3);
                }
                unaff_x25 = (undefined **)((long)unaff_x25 + 1);
              } while (ppuVar12 != unaff_x25);
              param_4 = (undefined **)((long)register0x00000008 + -0xf0);
              ppuVar12 = &PTR__OBJC_CLASS___NSConstantArray_111183530;
              param_5 = 0x10;
              func_0x00010bf52a60();
            } while (ppuVar12 != (undefined **)0x0);
          }
        }
        else {
          func_0x00010befa160(puVar2);
          func_0x000108faa7fc();
          if ((int)uVar10 != 0) {
            func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x138));
          }
        }
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
        func_0x00010bf529e0();
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
        func_0x00010bf51e00(uVar10);
      }
      else {
        _objc_retain(uVar10);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined1 **)((long)register0x00000008 + -0xe8) =
             (undefined1 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3032000000;
        *(code **)((long)register0x00000008 + -0xd8) = FUN_108f9293c;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x108f9294c;
        puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -200) = puVar2;
        func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
        func_0x000108faa7e8();
        if (iVar1 == 0) {
          *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc2000000;
          *(code **)((long)register0x00000008 + -0x120) = FUN_108f92954;
          *(undefined **)((long)register0x00000008 + -0x118) = &UNK_110847658;
          *(undefined1 **)((long)register0x00000008 + -0x110) =
               (undefined1 *)((long)register0x00000008 + -0xf0);
          func_0x00010bcbe2c4("APPSTORE",(undefined1 *)((long)register0x00000008 + -0x130));
        }
        else {
          func_0x00010befa160(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
          iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
          func_0x000108faa7fc();
          if (iVar1 != 0) {
            func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28))
            ;
          }
        }
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
        func_0x00010bf529e0();
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
        func_0x00010bf51e00(uVar10);
        __Block_object_dispose((undefined1 *)((long)register0x00000008 + -0xf0),8);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -200));
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
      }
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x138));
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
      unaff_x23 = *(ulong *)((long)register0x00000008 + -0x148);
      func_0x00010c069840(unaff_x23);
      _objc_release(uVar10);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar11 = unaff_x23;
      func_0x00010bf529e0();
      *(ulong *)((long)register0x00000008 + -0x170) = uVar11;
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x158);
    }
    uVar11 = unaff_x23;
    func_0x00010bf4b900();
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x140);
    if (((uVar11 & 1) == 0) && (uVar10 = unaff_x22, FUN_108faa33c(), (int)uVar10 != 0)) {
      func_0x00010befa160(unaff_x23);
    }
    uVar11 = unaff_x23;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = uVar11;
    func_0x000107c31908();
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    param_3 = unaff_x20;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    unaff_x19 = unaff_x21;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
      return;
    }
    ___stack_chk_fail();
    param_2 = 8;
    __Block_object_dispose((undefined1 *)((long)register0x00000008 + -0xf0));
    unaff_x30 = FUN_108f9423c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
  } while( true );
}



/* Entry: 108f9423c; end: 108f9423f;  */

void FUN_108f9423c(undefined **param_1,long param_2,ulong param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  undefined **unaff_x19;
  ulong unaff_x20;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  long lVar13;
  ulong unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined ***)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined ***)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(int *)((long)register0x00000008 + -0x14c) = (int)param_5;
    *(int *)((long)register0x00000008 + -0x15c) = (int)param_3;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar12 = param_4;
    uVar10 = param_6;
    _objc_retain(param_2);
    _objc_retain(param_6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined **)0x0) {
      func_0x00010befa160(puVar2);
    }
    *(undefined **)((long)register0x00000008 + -0x148) = puVar2;
    *(undefined8 *)((long)register0x00000008 + -0x140) = param_6;
    if (param_2 == 0) {
LAB_108f93878:
      iVar1 = 0;
      uVar9 = param_6;
    }
    else {
      func_0x00010bfb4ac0(param_2);
      lVar13 = param_2;
      func_0x00010bfb4ac0();
      if (lVar13 != 2) {
        func_0x00010befa160(puVar2);
      }
      func_0x00010befa160(puVar2);
      lVar13 = param_2;
      func_0x00010c0c45e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar13 == 0) {
LAB_108f93814:
        func_0x00010befa160(puVar2);
      }
      else {
        lVar3 = param_2;
        func_0x00010c0c45e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08d600();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar13);
        puVar2 = *(undefined **)((long)register0x00000008 + -0x148);
        param_6 = *(undefined8 *)((long)register0x00000008 + -0x140);
        if (lVar5 == 1) goto LAB_108f93814;
      }
      if (((((undefined **)0x19 < param_4) || ((1L << ((ulong)param_4 & 0x3f) & 0x3fbff6bU) == 0))
          && (lVar13 = param_2, FUN_108f935c4(param_2,param_4,param_6), (int)lVar13 != 0)) &&
         (uVar9 = param_6, func_0x000108faa810(), (int)uVar9 != 0)) {
        func_0x00010befa120(puVar2);
      }
      lVar13 = param_2;
      func_0x00010c0c6c20();
      if (lVar13 == 1) {
        func_0x00010befa160(puVar2);
      }
      if (param_1 == (undefined **)0x0) goto LAB_108f93878;
      lVar13 = param_2;
      func_0x00010c106740();
      iVar1 = (int)lVar13;
      uVar9 = param_6;
    }
    if ((param_2 == 0 && param_1 != (undefined **)0x0) || (param_6 = uVar10, iVar1 != 0)) {
      func_0x00010befa120(puVar2);
      param_6 = uVar10;
    }
    _objc_retain(uVar9);
    *(long *)((long)register0x00000008 + -0x158) = param_2;
    if (*(int *)((long)register0x00000008 + -0x14c) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      func_0x00010befa120(puVar2);
      uVar10 = uVar9;
      func_0x000108faa7e8();
      *(undefined **)((long)register0x00000008 + -0x138) = puVar2;
      if ((int)uVar10 == 0) {
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111183650;
        ppuVar12 = (undefined **)((long)register0x00000008 + -0xf0);
        param_5 = 0x10;
        func_0x00010bf52a60();
        param_4 = (undefined **)0x0;
        if (ppuVar6 != (undefined **)0x0) {
          unaff_x27 = **(long **)((long)register0x00000008 + -0x120);
          param_1 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          unaff_x26 = &PTR____CFConstantStringClassReference_110ddd938;
          do {
            unaff_x28 = (undefined **)0x0;
            do {
              if (**(long **)((long)register0x00000008 + -0x120) != unaff_x27) {
                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183650);
              }
              uVar9 = *(undefined8 *)
                       (*(long *)((long)register0x00000008 + -0x128) + (long)unaff_x28 * 8);
              puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
              func_0x00010c22b720();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
              uVar10 = uVar9;
              func_0x00010c0e00e0(uVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc3460(puVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010bf2cf00();
              _objc_release(puVar2);
              _objc_release(uVar10);
              _objc_release(puVar7);
              if ((int)puVar8 != 0) {
                func_0x00010c0e00e0(uVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa160(*(undefined8 *)((long)register0x00000008 + -0x138));
                _objc_release(uVar9);
              }
              unaff_x28 = (undefined **)((long)unaff_x28 + 1);
            } while (ppuVar6 != unaff_x28);
            ppuVar12 = (undefined **)((long)register0x00000008 + -0xf0);
            ppuVar6 = &PTR__OBJC_CLASS___NSConstantArray_111183650;
            param_5 = 0x10;
            func_0x00010bf52a60();
            param_4 = (undefined **)0x0;
          } while (ppuVar6 != (undefined **)0x0);
        }
      }
      else {
        func_0x00010befa160(puVar2);
        func_0x000108faa7fc();
        if ((int)uVar9 != 0) {
          func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x138));
        }
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
      func_0x00010bf529e0();
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
      func_0x00010bf51e00(uVar10);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x138));
      unaff_x24 = param_1;
      unaff_x25 = param_4;
    }
    else {
      _objc_retain(uVar9);
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined1 **)((long)register0x00000008 + -0xe8) =
           (undefined1 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3032000000;
      *(code **)((long)register0x00000008 + -0xd8) = FUN_108f9293c;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x108f9294c;
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -200) = puVar2;
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
      iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
      func_0x000108faa7e8();
      if (iVar1 == 0) {
        uVar10 = 0;
        _dispatch_semaphore_create();
        *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc2000000;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0x108f92bcc;
        *(undefined **)((long)register0x00000008 + -0x118) = &UNK_11084b9d0;
        *(undefined1 **)((long)register0x00000008 + -0x108) =
             (undefined1 *)((long)register0x00000008 + -0xf0);
        _objc_retain();
        *(undefined8 *)((long)register0x00000008 + -0x110) = uVar10;
        func_0x000107c312cc("APPSTORE",(undefined1 *)((long)register0x00000008 + -0x130));
        uVar9 = 0;
        _dispatch_time(0,2000000000);
        _dispatch_semaphore_wait(uVar10,uVar9);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x110));
        _objc_release(uVar10);
      }
      else {
        func_0x00010befa160(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
        func_0x000108faa7fc();
        if (iVar1 != 0) {
          func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        }
      }
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
      func_0x00010bf529e0();
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
      func_0x00010bf51e00(uVar10);
      __Block_object_dispose((undefined1 *)((long)register0x00000008 + -0xf0),8);
      _objc_release(*(undefined8 *)((long)register0x00000008 + -200));
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
      unaff_x24 = param_1;
      unaff_x25 = param_4;
    }
    param_4 = ppuVar12;
    _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
    unaff_x23 = *(ulong *)((long)register0x00000008 + -0x148);
    func_0x00010c069840(unaff_x23);
    _objc_release(uVar10);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar11 = unaff_x23;
    func_0x00010bf529e0();
    *(ulong *)((long)register0x00000008 + -0x170) = uVar11;
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x158);
    if (*(int *)((long)register0x00000008 + -0x15c) != 0) {
      uVar10 = *(undefined8 *)((long)register0x00000008 + -0x140);
      _objc_retain(uVar10);
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)register0x00000008 + -0x138) = puVar2;
      if (*(int *)((long)register0x00000008 + -0x14c) == 0) {
        func_0x00010befa120();
        func_0x00010befa120(puVar2);
        uVar9 = uVar10;
        func_0x000108faa7e8();
        if ((int)uVar9 == 0) {
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
          ppuVar12 = &PTR__OBJC_CLASS___NSConstantArray_111183530;
          param_4 = (undefined **)((long)register0x00000008 + -0xf0);
          param_5 = 0x10;
          func_0x00010bf52a60();
          if (ppuVar12 != (undefined **)0x0) {
            lVar13 = **(long **)((long)register0x00000008 + -0x120);
            unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
            unaff_x24 = &PTR____CFConstantStringClassReference_110ddd938;
            do {
              unaff_x25 = (undefined **)0x0;
              do {
                if (**(long **)((long)register0x00000008 + -0x120) != lVar13) {
                  _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_111183530);
                }
                unaff_x27 = *(long *)(*(long *)((long)register0x00000008 + -0x128) +
                                     (long)unaff_x25 * 8);
                unaff_x28 = (undefined **)PTR__OBJC_CLASS___UIApplication_1126ae590;
                func_0x00010c22b720();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
                lVar3 = unaff_x27;
                func_0x00010c0e00e0(unaff_x27);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bdc3460(puVar2);
                _objc_retainAutoreleasedReturnValue();
                ppuVar6 = unaff_x28;
                func_0x00010bf2cf00();
                _objc_release(puVar2);
                _objc_release(lVar3);
                _objc_release(unaff_x28);
                if ((int)ppuVar6 != 0) {
                  lVar3 = unaff_x27;
                  func_0x00010c0e00e0(unaff_x27);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa160(*(undefined8 *)((long)register0x00000008 + -0x138));
                  _objc_release(lVar3);
                }
                unaff_x25 = (undefined **)((long)unaff_x25 + 1);
              } while (ppuVar12 != unaff_x25);
              param_4 = (undefined **)((long)register0x00000008 + -0xf0);
              ppuVar12 = &PTR__OBJC_CLASS___NSConstantArray_111183530;
              param_5 = 0x10;
              func_0x00010bf52a60();
            } while (ppuVar12 != (undefined **)0x0);
          }
        }
        else {
          func_0x00010befa160(puVar2);
          func_0x000108faa7fc();
          if ((int)uVar10 != 0) {
            func_0x00010befa120(*(undefined8 *)((long)register0x00000008 + -0x138));
          }
        }
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
        func_0x00010bf529e0();
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar10 = *(undefined8 *)((long)register0x00000008 + -0x138);
        func_0x00010bf51e00(uVar10);
      }
      else {
        _objc_retain(uVar10);
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined1 **)((long)register0x00000008 + -0xe8) =
             (undefined1 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3032000000;
        *(code **)((long)register0x00000008 + -0xd8) = FUN_108f9293c;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x108f9294c;
        puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)((long)register0x00000008 + -200) = puVar2;
        func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
        iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
        func_0x000108faa7e8();
        if (iVar1 == 0) {
          *(undefined **)((long)register0x00000008 + -0x130) = PTR___NSConcreteStackBlock_11034bd00;
          *(undefined8 *)((long)register0x00000008 + -0x128) = 0xc2000000;
          *(code **)((long)register0x00000008 + -0x120) = FUN_108f92954;
          *(undefined **)((long)register0x00000008 + -0x118) = &UNK_110847658;
          *(undefined1 **)((long)register0x00000008 + -0x110) =
               (undefined1 *)((long)register0x00000008 + -0xf0);
          func_0x00010bcbe2c4("APPSTORE",(undefined1 *)((long)register0x00000008 + -0x130));
        }
        else {
          func_0x00010befa160(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28));
          iVar1 = (int)*(undefined8 *)((long)register0x00000008 + -0x140);
          func_0x000108faa7fc();
          if (iVar1 != 0) {
            func_0x00010befa120(*(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28))
            ;
          }
        }
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
        func_0x00010bf529e0();
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar10;
        func_0x00010c14de00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar10 = *(undefined8 *)(*(long *)((long)register0x00000008 + -0xe8) + 0x28);
        func_0x00010bf51e00(uVar10);
        __Block_object_dispose((undefined1 *)((long)register0x00000008 + -0xf0),8);
        _objc_release(*(undefined8 *)((long)register0x00000008 + -200));
        _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
      }
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x138));
      _objc_release(*(undefined8 *)((long)register0x00000008 + -0x140));
      unaff_x23 = *(ulong *)((long)register0x00000008 + -0x148);
      func_0x00010c069840(unaff_x23);
      _objc_release(uVar10);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar11 = unaff_x23;
      func_0x00010bf529e0();
      *(ulong *)((long)register0x00000008 + -0x170) = uVar11;
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      unaff_x21 = *(undefined ***)((long)register0x00000008 + -0x158);
    }
    uVar11 = unaff_x23;
    func_0x00010bf4b900();
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x140);
    if (((uVar11 & 1) == 0) && (uVar10 = unaff_x22, FUN_108faa33c(), (int)uVar10 != 0)) {
      func_0x00010befa160(unaff_x23);
    }
    uVar11 = unaff_x23;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = uVar11;
    func_0x000107c31908();
    _objc_release(uVar11);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    param_3 = unaff_x20;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    unaff_x19 = unaff_x21;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
      return;
    }
    ___stack_chk_fail();
    param_2 = 8;
    __Block_object_dispose((undefined1 *)((long)register0x00000008 + -0xf0));
    unaff_x30 = FUN_108f9423c;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
  } while( true );
}



/* Entry: 108f94240; end: 108f94367;  */

void FUN_108f94240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_108f928ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f133d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f94368; end: 108f9437b;  */

void FUN_108f94368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110f13378);
  return;
}



/* Entry: 108f9437c; end: 108f943ef;  */

void FUN_108f9437c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f13358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f943f0; end: 108f9454f;  */

void FUN_108f943f0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_1;
    FUN_108f928ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_2;
    FUN_108f92780(param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    FUN_108f928ac();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108f94550; end: 108f94917;  */

void FUN_108f94550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  FUN_108f928ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110f133b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f94918; end: 108f949a3;  */

void FUN_108f94918(ulong param_1)

{
  undefined8 unaff_x19;
  
  if (param_1 < 0x1c) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_110acfc08)[param_1];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 108f949a4; end: 108f94c23;  */

void FUN_108f949a4(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c030a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f94c24; end: 108f94ca3;  */

long FUN_108f94c24(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  _objc_retain();
  FUN_108f949a4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c067ec0(lVar2);
    lVar3 = (long)(int)lVar3;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 108f94ca4; end: 108f94dcb;  */

void FUN_108f94ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bf64920(param_1,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bdc1900();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar2);
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (((ulong)puVar3 & 1) != 0) {
      FUN_108f949a4();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf43280(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
  }
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f94dcc; end: 108f94dff;  */

void FUN_108f94dcc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 108f94e00; end: 108f95093;  */

undefined8 FUN_108f94e00(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110df62b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110df62b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 2;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f13658;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13658,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xb;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dba418;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dba418,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 1;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dbf098;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbf098,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaad8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f13678;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13678,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ee18d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ee18d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f13698;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13698,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f136b8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f136b8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f136d8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f136d8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f136f8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f136f8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110dea458;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea458,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xc;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f13718;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13718,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xd;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f13738;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13738,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xe;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f13758;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f13758,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xf;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ec7b18;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ec7b18
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x10;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f13778;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f13778,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x11;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f13798;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f13798,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x12;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f137b8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f137b8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x13;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f137d8;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f137d8,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x14;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110f137f8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f137f8,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x15;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f13838;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110f13838,
                                                  param_2,param_1);
                                            uVar2 = 0x19;
                                            if (ppuVar1 != (undefined **)0x0) {
                                              uVar2 = 0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f95094; end: 108f95117;  */

undefined ** FUN_108f95094(long param_1)

{
  if (param_1 - 1U < 0x14) {
    return (undefined **)(&PTR_PTR_110acfeb0)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dea818;
}



/* Entry: 108f95118; end: 108f9516b;  */

double FUN_108f95118(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return param_1 * 1000.0;
}


