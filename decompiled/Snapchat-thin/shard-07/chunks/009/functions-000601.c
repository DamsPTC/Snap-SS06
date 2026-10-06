/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b26fd4; end: 105b2703b; -[SCCustomStoryMembersListCellBadgeViewModel initWithShowOwnerBadge:showInviterBadge:showBlockedBadge:showModeratorBadge:] */

void FUN_105b26fd4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ebea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
  }
  return;
}



/* Entry: 105b2703c; end: 105b2705f; -[SCCustomStoryMembersListCellBadgeViewModel copyWithZone:] */

undefined8 FUN_105b2703c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105b27060; end: 105b270db; -[SCCustomStoryMembersListCellBadgeViewModel hash] */

ulong * FUN_105b27060(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  ulong uVar8;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar6 >> 0x18),
                                          (uint6)(byte)((uint)uVar6 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar6) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar6 >> 8),(short)uVar7);
  uVar8 = CONCAT44((int)(uVar7 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar7 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar7 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar7 >> 0x30);
  uStack_38 = (ulong)uVar1 & 0xff;
  uStack_30 = uVar7 >> 0x10 & 0xff;
  uStack_28 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar7 >> 0x20)) & 0xffffffff;
  uStack_20 = (ulong)uVar5;
  puVar2 = &uStack_38;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) ||
         ((((char)puVar2[1] != (char)param_3[1] ||
           (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
          (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0xb) == *(char *)((long)param_3 + 0xb));
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105b270dc; end: 105b27193; -[SCCustomStoryMembersListCellBadgeViewModel isEqual:] */

bool FUN_105b270dc(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
          (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105b27194; end: 105b2719b; -[SCCustomStoryMembersListCellBadgeViewModel showOwnerBadge] */

undefined1 FUN_105b27194(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105b2719c; end: 105b271a3; -[SCCustomStoryMembersListCellBadgeViewModel showInviterBadge] */

undefined1 FUN_105b2719c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105b271a4; end: 105b271ab; -[SCCustomStoryMembersListCellBadgeViewModel showBlockedBadge] */

undefined1 FUN_105b271a4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105b271ac; end: 105b271b3; -[SCCustomStoryMembersListCellBadgeViewModel showModeratorBadge] */

undefined1 FUN_105b271ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 105b271b4; end: 105b2725f; -[SCCustomStoryMembersListCellActionDataModel initWithSnapchatter:storyContext:] */

undefined1 *
FUN_105b271b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebeb0;
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



/* Entry: 105b27260; end: 105b27283; -[SCCustomStoryMembersListCellActionDataModel copyWithZone:] */

undefined8 FUN_105b27260(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105b27284; end: 105b272f7; -[SCCustomStoryMembersListCellActionDataModel hash] */

undefined8 * FUN_105b27284(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105b27378:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105b27384;
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
          goto LAB_105b27384;
        }
        goto LAB_105b27378;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105b27384:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105b272f8; end: 105b2739f; -[SCCustomStoryMembersListCellActionDataModel isEqual:] */

long FUN_105b272f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105b27378:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105b27384;
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
          goto LAB_105b27384;
        }
        goto LAB_105b27378;
      }
    }
    lVar3 = 0;
  }
LAB_105b27384:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105b273a0; end: 105b273a7; -[SCCustomStoryMembersListCellActionDataModel snapchatter] */

undefined8 FUN_105b273a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b273a8; end: 105b273af; -[SCCustomStoryMembersListCellActionDataModel storyContext] */

undefined8 FUN_105b273a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b273b0; end: 105b273df; -[SCCustomStoryMembersListCellActionDataModel .cxx_destruct] */

void FUN_105b273b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b273e0; end: 105b27577; -[SCSelectionDescriptionSectionExtension initWithSectionIdentifier:descriptionText:sendToExperimentConfiguration:] */

undefined8 *
FUN_105b273e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ebeb8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126c26a8;
    _objc_alloc();
    func_0x00010bfef480();
    uVar4 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b2808;
    _objc_alloc();
    func_0x00010c0537c0();
    uVar4 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126b2810;
    _objc_opt_new();
    uVar4 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b27578; end: 105b275a7;  */

void FUN_105b27578(void)

{
  _objc_alloc(PTR_PTR_1126c26a0);
  func_0x00010c00b9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b275a8; end: 105b275af; -[SCSelectionDescriptionSectionExtension sectionIdentifiers] */

undefined8 FUN_105b275a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b275b0; end: 105b275b7; -[SCSelectionDescriptionSectionExtension sectionCreator] */

undefined8 FUN_105b275b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b275b8; end: 105b275bf; -[SCSelectionDescriptionSectionExtension sectionDescriptor] */

undefined8 FUN_105b275b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b275c0; end: 105b275c7; -[SCSelectionDescriptionSectionExtension sectionIndexer] */

undefined8 FUN_105b275c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b275c8; end: 105b2760f; -[SCSelectionDescriptionSectionExtension .cxx_destruct] */

void FUN_105b275c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b27610; end: 105b276e7; -[SCSelectionDescriptionSectionCreatorImpl initSectionIdentifier:sectionDataSource:] */

undefined1 *
FUN_105b27610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ebec0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c26b0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043380();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b276e8; end: 105b276ef; -[SCSelectionDescriptionSectionCreatorImpl sectionForDescriptor:] */

void FUN_105b276e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionForDescriptor__112633158);
  return;
}



/* Entry: 105b276f0; end: 105b276fb; -[SCSelectionDescriptionSectionCreatorImpl .cxx_destruct] */

void FUN_105b276f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b276fc; end: 105b2776f; -[SCSelectionDescriptionSectionDataSourceImpl initWithDescriptionText:] */

undefined1 * FUN_105b276fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebec8;
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



/* Entry: 105b27770; end: 105b27797; -[SCSelectionDescriptionSectionDataSourceImpl selectionDescriptionForSectionIdentifier:] */

void FUN_105b27770(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b27798; end: 105b277a3; -[SCSelectionDescriptionSectionDataSourceImpl .cxx_destruct] */

void FUN_105b27798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b277a4; end: 105b27847; -[SCSelectionDescriptionSectionCreator initWithSectionIdentifiers:dataSource:] */

undefined1 *
FUN_105b277a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebed0;
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



/* Entry: 105b27848; end: 105b278f3; -[SCSelectionDescriptionSectionCreator sectionForDescriptor:] */

void FUN_105b27848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    param_1 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfb020(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b278f4; end: 105b2797f; -[SCSelectionDescriptionSectionCreator _descriptionSectionForIdentifier:] */

void FUN_105b278f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c15a5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c26b8;
  _objc_alloc(PTR_PTR_1126c26b8);
  func_0x00010c00b9e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105b27980; end: 105b279af; -[SCSelectionDescriptionSectionCreator .cxx_destruct] */

void FUN_105b27980(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b279b0; end: 105b27a2b; -[SCSelectionDescriptionSection initWithDescriptionText:] */

undefined1 * FUN_105b279b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ebed8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b27a2c; end: 105b27aaf; -[SCSelectionDescriptionSection reuseCellClassesByIdentifiers] */

undefined * FUN_105b27a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110e1eab8;
  puVar1 = PTR_PTR_1126c26c0;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 105b27ab0; end: 105b27ab7; -[SCSelectionDescriptionSection sectionHeaderModel] */

undefined8 FUN_105b27ab0(void)

{
  return 0;
}



/* Entry: 105b27ab8; end: 105b27abf; -[SCSelectionDescriptionSection numberOfCellsInSection] */

undefined8 FUN_105b27ab8(void)

{
  return 1;
}



/* Entry: 105b27ac0; end: 105b27b73; -[SCSelectionDescriptionSection cellForItemAtIndexInSection:] */

void FUN_105b27ac0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c26c0;
  _objc_retain(uVar2);
  _objc_opt_class(puVar3);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010c2226c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105b27b74; end: 105b27b8f; -[SCSelectionDescriptionSection sizeForItemAtIndexInSection:withWidth:] */

void FUN_105b27b74(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x7fefffffffffffff,PTR_PTR_1126c26c0,
             PTR_s_sizeWithViewModel_constrainedToS_11266cfe0,*(undefined8 *)(param_2 + 8));
  return;
}



/* Entry: 105b27b90; end: 105b27b97; -[SCSelectionDescriptionSection sectionUpdateModel] */

undefined8 FUN_105b27b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b27b98; end: 105b27b9f; -[SCSelectionDescriptionSection setSectionUpdateModel:] */

void FUN_105b27b98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105b27ba0; end: 105b27bb7; -[SCSelectionDescriptionSection delegate] */

void FUN_105b27ba0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b27bb8; end: 105b27bc3; -[SCSelectionDescriptionSection setDelegate:] */

void FUN_105b27bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105b27bc4; end: 105b27bcb; -[SCSelectionDescriptionSection dataLoadingStatus] */

undefined8 FUN_105b27bc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b27bcc; end: 105b27bd3; -[SCSelectionDescriptionSection setDataLoadingStatus:] */

void FUN_105b27bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105b27bd4; end: 105b27c0b; -[SCSelectionDescriptionSection .cxx_destruct] */

void FUN_105b27bd4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b27c0c; end: 105b27d9f; -[SCSelectionDescriptionSectionCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105b27c0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ebee0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar6 = (long)_DAT_11272fffc;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar5);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar6));
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c213040(uVar4);
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b27da0; end: 105b27e4f; -[SCSelectionDescriptionSectionCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b27da0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar5 = (long)_DAT_112730000;
  uVar3 = *(ulong *)(param_1 + lVar5);
  func_0x00010c0720c0();
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(ulong *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar4);
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11272fffc));
    func_0x00010bed5ac0(param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b27e50; end: 105b27f63; +[SCSelectionDescriptionSectionCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_105b27e50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb3e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dd20(param_1 + -36.0 + -60.0,param_2,uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010b2bd954(param_2);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 105b27f64; end: 105b28223; -[SCSelectionDescriptionSectionCollectionViewCell _updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_105b27f64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar17 = (long)_DAT_112730004;
  if (*(long *)(param_1 + lVar17) != 0) {
    func_0x00010bf65be0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  }
  lVar19 = (long)_DAT_11272fffc;
  uVar1 = *(undefined8 *)(param_1 + lVar19);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf493c0(0x4042000000000000,uVar1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar19);
  uStack_88 = uVar4;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf493c0(0xc04e000000000000,uVar5,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar19);
  uStack_80 = uVar8;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0(uVar9,param_2,lVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar19);
  uStack_78 = uVar12;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar19;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar13;
  func_0x00010bf493a0(uVar13,param_2,lVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar16;
  _objc_release(uVar18);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar19);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  puVar16 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010beef8c0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,param_2,
                      *(undefined8 *)(param_1 + lVar17));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar16;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar16 + _DAT_112730008);
}



/* Entry: 105b28224; end: 105b28233; -[SCSelectionDescriptionSectionCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105b28224(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112730008);
}



/* Entry: 105b28234; end: 105b28293; -[SCSelectionDescriptionSectionCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b28234(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112730008,0);
  _objc_storeStrong(param_1 + _DAT_112730000,0);
  _objc_storeStrong(param_1 + _DAT_112730004,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fffc,0);
  return;
}



/* Entry: 105b28294; end: 105b285ab; -[SCSelectionGroupSectionExtension initWithActionHandler:imageDownloader:performer:sectionIdentifierMapping:selectionTracker:selectionGroupObservableRepository:friendmojiPresenter:messagingExperimentService:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:streakProvider:] */

undefined8 *
FUN_105b28294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  puStack_70 = PTR_PTR_1126ebee8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_8);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar5 = param_6;
    func_0x00010bf002e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c26d0;
    _objc_alloc();
    func_0x00010bff04c0();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c26d8;
    _objc_alloc();
    func_0x00010c043320();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c26e0;
    _objc_alloc();
    func_0x00010c043300();
    uVar5 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(param_5);
  }
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b285ac; end: 105b285df;  */

void FUN_105b285ac(void)

{
  _objc_alloc(PTR_PTR_1126c26c8);
  func_0x00010c034fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b285e0; end: 105b285e7; -[SCSelectionGroupSectionExtension sectionIdentifiers] */

undefined8 FUN_105b285e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b285e8; end: 105b285ef; -[SCSelectionGroupSectionExtension sectionCreator] */

undefined8 FUN_105b285e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b285f0; end: 105b285f7; -[SCSelectionGroupSectionExtension sectionDescriptor] */

undefined8 FUN_105b285f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b285f8; end: 105b285ff; -[SCSelectionGroupSectionExtension sectionIndexer] */

undefined8 FUN_105b285f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b28600; end: 105b28647; -[SCSelectionGroupSectionExtension .cxx_destruct] */

void FUN_105b28600(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b28648; end: 105b288d7; -[SCSelectionGroupSectionCreatorImpl initWithActionHandler:imageDownloader:sectionDataSource:sectionIdentifierMapping:selectionTracker:friendmojiPresenter:messagingExperimentService:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:streakProvider:] */

undefined8 *
FUN_105b28648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_70 = PTR_PTR_1126ebef0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_8);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c26f0;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar4 = param_6;
    func_0x00010bf002e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043460();
    uVar6 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_13);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_6);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b288d8; end: 105b2890f;  */

void FUN_105b288d8(void)

{
  _objc_alloc(PTR_PTR_1126c26e8);
  func_0x00010c0432a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b28910; end: 105b28917; -[SCSelectionGroupSectionCreatorImpl sectionForDescriptor:] */

void FUN_105b28910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionForDescriptor__112633158);
  return;
}



/* Entry: 105b28918; end: 105b28923; -[SCSelectionGroupSectionCreatorImpl .cxx_destruct] */

void FUN_105b28918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b28924; end: 105b28aff; -[SCSelectionGroupSectionDataSourceImpl initWithPerformer:sectionIdentifierMapping:selectionGroupObservableRepository:] */

undefined8 *
FUN_105b28924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126ebef8;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_105b28b00;
    puStack_98 = &UNK_110854530;
    _objc_copyWeak(auStack_90,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b8,auStack_88);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b28b00; end: 105b28b77;  */

void FUN_105b28b00(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be86e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105b28b78; end: 105b28c1f; -[SCSelectionGroupSectionDataSourceImpl selectionGroupObservableForSectionIdentifier:query:selectionTracker:] */

void FUN_105b28b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  func_0x00010be9e220(param_1,param_2,uVar1 & 0xffffffff,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b28c20; end: 105b28cc3; -[SCSelectionGroupSectionDataSourceImpl _selectionGroupObservableForSectionType:query:selectionTracker:] */

void FUN_105b28c20(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 2) {
    func_0x00010be9dec0(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = param_1;
  }
  else {
    if (param_3 == 1) {
      unaff_x21 = *(long *)(param_1 + 0x20);
    }
    else {
      if (param_3 != 0) goto LAB_105b28c9c;
      unaff_x21 = *(long *)(param_1 + 0x18);
    }
    func_0x00010c269d40(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105b28c9c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 105b28cc4; end: 105b28d2b; -[SCSelectionGroupSectionDataSourceImpl _recentGroupObservable] */

void FUN_105b28cc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1225a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b28d2c; end: 105b28d8b; -[SCSelectionGroupSectionDataSourceImpl _newGroupObservable] */

undefined8 FUN_105b28d2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d8fc0();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105b28d8c; end: 105b28e3b; -[SCSelectionGroupSectionDataSourceImpl _selectedGroupObservableWithSelectionTracker:] */

void FUN_105b28d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c0ecca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108425d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c15a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b28e3c; end: 105b28e83; -[SCSelectionGroupSectionDataSourceImpl .cxx_destruct] */

void FUN_105b28e3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b28e84; end: 105b28f27; -[SCSelectionGroupSectionDescriptor initWithSectionIdentifierMapping:sendToExperimentConfiguration:] */

undefined1 *
FUN_105b28e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf00;
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



/* Entry: 105b28f28; end: 105b290bf; -[SCSelectionGroupSectionDescriptor sectionDescriptorForIdentifier:query:] */

void FUN_105b28f28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 unaff_x24;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c282760();
  uVar2 = uVar5;
  _objc_release(uVar5);
  iVar6 = (int)uVar1;
  if (iVar6 == 2) {
    func_0x000105b298b4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
  }
  else if (iVar6 == 1) {
    func_0x000105b2989c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
  }
  else if (iVar6 == 0) {
    FUN_105b29884();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
  }
  uVar1 = uVar5;
  func_0x000106c9d38c(uVar5,0,1);
  _objc_retainAutoreleasedReturnValue();
  if (iVar6 == 2) {
    unaff_x24 = uVar1;
    func_0x000106c9c838();
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((iVar6 == 1) || (iVar6 == 0)) {
    unaff_x24 = uVar1;
    func_0x000106c9c808();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = param_4;
  func_0x00010c11da20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000106c9c378(param_3,uVar2,uVar1,unaff_x24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(unaff_x24);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105b290c0; end: 105b290ef; -[SCSelectionGroupSectionDescriptor .cxx_destruct] */

void FUN_105b290c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b290f0; end: 105b29193; -[SCSelectionGroupIndexableSectionRepository initWithSectionIdentifier:sectionDataSource:] */

undefined1 *
FUN_105b290f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf08;
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



/* Entry: 105b29194; end: 105b29213; -[SCSelectionGroupIndexableSectionRepository recipientNumberObservable] */

void FUN_105b29194(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15a660();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b29214; end: 105b29243;  */

void FUN_105b29214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105b29244; end: 105b29273; -[SCSelectionGroupIndexableSectionRepository .cxx_destruct] */

void FUN_105b29244(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b29274; end: 105b29317; -[SCSelectionGroupSectionIndexer initWithSectionIdentifierMapping:sectionDataSource:] */

undefined1 *
FUN_105b29274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ebf10;
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



/* Entry: 105b29318; end: 105b2939b; -[SCSelectionGroupSectionIndexer indexingItemForSectionIdentifier:] */

void FUN_105b29318(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0e00e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c282760();
  _objc_release(uVar2);
  func_0x00010be39000(param_1,param_2,param_3,uVar1 & 0xffffffff);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105b2939c; end: 105b29413; -[SCSelectionGroupSectionIndexer _indexingItemForSectionIdentifier:sectionType:] */

void FUN_105b2939c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c25c8;
  if (param_4 == 0) {
    func_0x00010be38fe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfed3c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110f8a478,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    puVar1 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b29414; end: 105b2946f; -[SCSelectionGroupSectionIndexer _indexableSectionRepositoryForSectionIdentifier:] */

void FUN_105b29414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c26f8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c043260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b29470; end: 105b2949f; -[SCSelectionGroupSectionIndexer .cxx_destruct] */

void FUN_105b29470(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b294a0; end: 105b295bb; -[SCSelectionGroupSectionViewModelSourceImpl initWithSectionIdentifierMapping:friendmojiPresenter:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:] */

undefined1 *
FUN_105b294a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_48 = PTR_PTR_1126ebf18;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    func_0x000108faa718(param_6);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105b295bc; end: 105b29703; -[SCSelectionGroupSectionViewModelSourceImpl selectionGroupViewModelGeneratorForSectionIdentifier:] */

void FUN_105b295bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c282760();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    ppuVar3 = &PTR_PTR_110d62020;
  }
  else {
    if ((int)uVar4 != 1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_105b29648;
    }
    ppuVar3 = &PTR_PTR_110d62010;
  }
  ppuVar3 = (undefined **)*ppuVar3;
  _objc_retain(ppuVar3);
LAB_105b29648:
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b29704;
  puStack_70 = &UNK_1108d5bd0;
  uStack_48 = 1;
  uStack_68 = uVar4;
  ppuStack_60 = ppuVar3;
  uStack_58 = param_3;
  uStack_50 = uVar5;
  _objc_retain(param_3);
  _objc_retain(ppuVar3);
  _objc_retain(uVar4);
  ppuVar2 = &puStack_88;
  _objc_retainBlock(ppuVar2);
  _objc_release(uStack_58);
  _objc_release(ppuStack_60);
  _objc_release(uStack_68);
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105b29704; end: 105b2983b;  */

void FUN_105b29704(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfb97a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c07be00();
  uVar3 = param_2;
  func_0x000105e54ea4(uVar5,param_2,uVar2,param_3,param_4,param_5,uVar1,param_6,uVar4,0x1b);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105b2983c; end: 105b29883; -[SCSelectionGroupSectionViewModelSourceImpl .cxx_destruct] */

void FUN_105b2983c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b29884; end: 105b298cb;  */

void FUN_105b29884(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1ead8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e1ead8,
                      &PTR____CFConstantStringClassReference_110e1eaf8,0);
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



/* Entry: 105b298cc; end: 105b29bf3; -[SCSelectionRecipientSectionExtension initWithActionHandler:friendmojiPresenter:imageDownloader:performer:sectionIdentifierMapping:selectionRecipientObservableRepository:selectionTracker:messagingExperimentService:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:includeSelectableContacts:avatarFactory:] */

undefined8 *
FUN_105b298cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126ebf20;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_8);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar5 = param_7;
    func_0x00010bf002e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2708;
    _objc_alloc();
    func_0x00010bff03e0();
    uVar5 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2710;
    _objc_alloc();
    func_0x00010c043320();
    uVar5 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c2718;
    _objc_alloc();
    func_0x00010c043300();
    uVar5 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_6);
  }
  _objc_release(param_16);
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
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b29bf4; end: 105b29c2b;  */

void FUN_105b29bf4(void)

{
  _objc_alloc(PTR_PTR_1126c2700);
  func_0x00010c034fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b29c2c; end: 105b29c33; -[SCSelectionRecipientSectionExtension sectionIdentifiers] */

undefined8 FUN_105b29c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105b29c34; end: 105b29c3b; -[SCSelectionRecipientSectionExtension sectionCreator] */

undefined8 FUN_105b29c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105b29c3c; end: 105b29c43; -[SCSelectionRecipientSectionExtension sectionDescriptor] */

undefined8 FUN_105b29c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105b29c44; end: 105b29c4b; -[SCSelectionRecipientSectionExtension sectionIndexer] */

undefined8 FUN_105b29c44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105b29c4c; end: 105b29c93; -[SCSelectionRecipientSectionExtension .cxx_destruct] */

void FUN_105b29c4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b29c94; end: 105b29f5f; -[SCSelectionRecipientSectionCreatorImpl initWithActionHandler:friendmojiPresenter:imageDownloader:sectionIdentifierMapping:sectionDataSource:selectionTracker:messagingExperimentService:circumstanceEngine:sendToExperimentConfiguration:sendToUIConfiguration:includeSelectableContacts:avatarFactory:] */

undefined8 *
FUN_105b29c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126ebf28;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    _objc_retain(param_4);
    _objc_retain(param_9);
    _objc_retain(param_10);
    _objc_retain(param_11);
    _objc_retain(param_12);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c2728;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar4 = param_6;
    func_0x00010bf002e0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043400();
    uVar6 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_10);
    _objc_release(param_9);
    _objc_release(param_4);
    _objc_release(param_6);
  }
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b29f60; end: 105b29fa7;  */

void FUN_105b29f60(void)

{
  _objc_alloc(PTR_PTR_1126c2720);
  func_0x00010c0432c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105b29fa8; end: 105b29faf; -[SCSelectionRecipientSectionCreatorImpl sectionForDescriptor:] */

void FUN_105b29fa8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_sectionForDescriptor__112633158);
  return;
}



/* Entry: 105b29fb0; end: 105b29fdf; -[SCSelectionRecipientSectionCreatorImpl .cxx_destruct] */

void FUN_105b29fb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b29fe0; end: 105b2a33f; -[SCSelectionRecipientSectionDataSourceImpl initWithPerformer:sectionIdentifierMapping:selectionRecipientObservableRepository:includeSelectableContacts:] */

undefined8 *
FUN_105b29fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_80 = PTR_PTR_1126ebf30;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 4) = param_6;
    uVar5 = puVar1[1];
    _objc_retain(uVar5);
    puVar3 = PTR_PTR_1126c2730;
    _objc_alloc();
    func_0x00010c03cd60();
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(uVar5);
    _objc_retain(puVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(uVar5);
    _objc_retain(puVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(uVar5);
    _objc_retain(puVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(puVar3);
    _objc_retain(uVar5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(uVar5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b2a340; end: 105b2a59b;  */

void FUN_105b2a340(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1225c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


