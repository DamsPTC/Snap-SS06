/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e33634; end: 105e33bcb; -[SCSendToViewModelSource _recipientCellViewModelForSnapchatter:storiesSummaryInfo:location:isSelected:row:totalCount:indexKey:isBestFriendsSection:sectionIdentifier:friendmojiPresenter:configuration:addActivityIndicator:enableAvatarBackground:displayReplyCellInRecents:] */

void FUN_105e33634(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10,undefined4 param_11,ulong param_12,
                  undefined8 param_13,ulong param_14,undefined4 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar13;
  
  uVar13 = (undefined4)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_14);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_13;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_13);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfa7d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = param_3;
  func_0x00010901e254(param_3,3);
  uVar3 = 2;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  if ((param_15._2_1_ != '\0') &&
     ((uVar10 = param_12, func_0x00010c0720c0(), (uVar10 & 1) != 0 ||
      (uVar10 = param_12, func_0x00010c0720c0(), (int)uVar10 != 0)))) {
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    func_0x000108f3e0a0(uVar6);
    uVar10 = param_3;
    FUN_105e53ccc(param_3,uVar5,uVar6);
    if ((int)uVar10 != 0) {
      func_0x00010bddc4a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e33b68;
    }
  }
  puVar7 = PTR_PTR_1126c25d0;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235360();
  func_0x00010c0462c0();
  _objc_release(uVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c0720c0();
  _objc_release(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar8);
  if ((int)uVar9 == 0) {
    uVar10 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0720c0();
    if ((uVar11 & 1) == 0) {
      _objc_release(uVar10);
      uVar6 = 0;
    }
    else {
      uVar12 = *(ulong *)(param_1 + 0x60);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar12;
      func_0x00010bf90da0();
      _objc_release(uVar12);
      _objc_release(uVar10);
      uVar6 = 3;
      if ((uVar11 & 1) == 0) {
        uVar6 = 0;
      }
    }
    uVar10 = param_12;
    func_0x00010c0720c0();
    if (((param_10 & 1) == 0) && ((uVar10 & 1) == 0)) {
      puVar1 = (undefined8 *)(param_1 + 0x58);
      param_1 = param_3;
      func_0x000105e55ddc(*puVar1,param_3,uVar3,param_4,param_5,uVar2,param_6,0,0,param_7,param_9,
                          param_8,param_12,6,uVar6,1,(undefined1)param_15);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar10 = param_14;
      func_0x00010c13fde0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c0720c0();
      puVar1 = (undefined8 *)(param_1 + 0x58);
      if ((uVar11 & 1) == 0) {
        param_1 = param_3;
        func_0x000105e55ddc(*puVar1,param_3,uVar3,param_4,param_5,uVar2,param_6,0,param_10,param_7,
                            param_9,param_8,param_12,6,uVar6,1,(undefined1)param_15);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_1 = param_3;
        func_0x000105e5668c(param_3,uVar3,param_4,uVar2,param_6,0,param_10,param_7,param_9,param_8,
                            param_12,CONCAT71(CONCAT61(CONCAT51(CONCAT41(uVar13,(char)uVar4),
                                                                param_15._1_1_),(undefined1)param_15
                                                      ),1),puVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar10);
    }
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x10);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = (undefined8 *)(param_1 + 0x58);
    param_1 = uVar4;
    func_0x000105e55ff8(*puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar10);
  }
  _objc_release(puVar7);
LAB_105e33b68:
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e33bcc; end: 105e33daf; -[SCSendToViewModelSource _cellViewModelForReplySection:snapchatter:bitmojiAvatarViewType:isSelected:row:totalCount:addActivityIndicator:enableAvatarBackground:] */

void FUN_105e33bcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = 1;
    FUN_105e53938();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    _objc_release(uVar5);
    uVar1 = 2;
    FUN_105e53938();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    _objc_release(uVar5);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfed360(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf86580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa7d20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = uVar4;
  FUN_105e53a20(uVar4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x000105e562cc(*(undefined8 *)(param_1 + 0x58),param_4,param_5,uVar5,uVar1,param_6,param_7,
                      uVar2,param_8,param_3,6,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e33db0; end: 105e3404b; -[SCSendToViewModelSource _recipientCellViewModelForSortableSnapchatter:isSelected:row:totalCount:indexKey:sectionIdentifier:friendmojiPresenter:configuration:] */

void FUN_105e33db0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  _objc_retain(param_3);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  func_0x00010c269d40(in_stack_00000000);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = in_stack_00000000;
  func_0x00010bf86580(in_stack_00000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(in_stack_00000000);
  if (in_x6 == 0) {
    in_x6 = param_3;
    func_0x00010c246f60();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0720c0();
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar5 == 0) {
    lVar6 = param_3;
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010901e254();
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c244280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x000105e55ddc(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    func_0x000105e55ff8(*(undefined8 *)(param_1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
  _objc_release(uVar1);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105e3404c; end: 105e3419b; -[SCSendToViewModelSource _recipientCellViewModelForSelectionGroup:isSelected:row:totalCount:indexKey:sectionIdentifier:friendmojiPresenter:addActivityIndicator:longPressMinDuration:enableAvatarBackground:] */

void FUN_105e3404c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010c269d40(param_10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bfceb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_10;
  func_0x00010bfb97a0(param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_10);
  uVar1 = param_4;
  func_0x000105e54ea4(param_1,param_4,uVar2,param_5,0,param_6,param_8,param_7,param_9,0x1b);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e3419c; end: 105e34243; -[SCSendToViewModelSource .cxx_destruct] */

void FUN_105e3419c(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105e34244; end: 105e3434b;  */

void FUN_105e34244(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2bd38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2bd38,
                      &PTR____CFConstantStringClassReference_110e2bd58,0);
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



/* Entry: 105e3434c; end: 105e343fb; -[SCSendToSectionsConfiguration initWithShouldIncludePreview:shouldIncludeInlineShareSheet:shouldIncludeStories:shouldIncludeBest:shouldIncludeLastSnap:shouldIncludeFirstSnap:shouldIncludeFindFriends:shouldIncludeContacts:shouldIncludeEducationPopup:shouldIncludeRecentlyActiveEducation:shouldIncludeFanPass:shouldIncludePromote:] */

void FUN_105e3434c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ed3f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
    *(undefined1 *)((long)puVar1 + 0xc) = param_7;
    *(undefined1 *)((long)puVar1 + 0xd) = param_8;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0xf) = param_9._1_1_;
    *(undefined1 *)((long)puVar1 + 0x10) = param_9._2_1_;
    *(undefined1 *)((long)puVar1 + 0x11) = param_9._3_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 0x13) = param_10._1_1_;
  }
  return;
}



/* Entry: 105e343fc; end: 105e3441f; -[SCSendToSectionsConfiguration copyWithZone:] */

undefined8 FUN_105e343fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e34420; end: 105e344eb; -[SCSendToSectionsConfiguration hash] */

ulong * FUN_105e34420(long param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8);
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),(int)uVar9)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar8 >> 0x30);
  uStack_78 = (ulong)uVar1 & 0xff;
  uStack_70 = uVar8 >> 0x10 & 0xff;
  uStack_68 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_60 = (ulong)uVar5;
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar9 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar1 = (uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar9);
  uVar8 = CONCAT44((int)(uVar9 >> 0x20),uVar1) & 0xffffffffff01ffff;
  uVar8 = CONCAT26((short)(uVar8 >> 0x30),CONCAT24((short)(uVar9 >> 0x20),(int)uVar8)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar8 >> 0x30);
  uStack_58 = (ulong)uVar1 & 0xff;
  uStack_50 = uVar8 >> 0x10 & 0xff;
  uStack_48 = (ulong)CONCAT24(uVar5,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_40 = (ulong)uVar5;
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = (ulong)CONCAT52((int5)(CONCAT16((char)((uint)uVar7 >> 0x18),
                                          (uint6)(byte)((uint)uVar7 >> 0x10) << 0x20) >> 0x10),
                          (ushort)(byte)uVar7) & 0xffffffffffffff01;
  uVar9 = CONCAT44((int)(uVar8 >> 0x20),(uint)CONCAT12((char)((uint)uVar7 >> 8),(short)uVar8)) &
          0xffffffffff01ffff;
  uVar7 = (undefined4)uVar9;
  uVar8 = CONCAT26((short)(uVar9 >> 0x30),CONCAT24((short)(uVar8 >> 0x20),uVar7)) &
          0xff01ff01ffffffff;
  uVar5 = (ushort)(uVar8 >> 0x10);
  uVar6 = (ushort)(uVar8 >> 0x30);
  uStack_38 = (ulong)(CONCAT24(uVar5,uVar7) & 0xffff0000ffff) & 0xffffffff;
  uStack_30 = (ulong)uVar5;
  uStack_28 = (ulong)CONCAT24(uVar6,(uint)(ushort)(uVar8 >> 0x20)) & 0xffffffff;
  uStack_20 = (ulong)uVar6;
  puVar2 = &uStack_78;
  func_0x000100505190(puVar2,0xc);
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
      if (((((ulong)puVar3 & 1) == 0) ||
          (((((char)puVar2[1] != (char)param_3[1] ||
             (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))) ||
            (*(char *)((long)puVar2 + 10) != *(char *)((long)param_3 + 10))) ||
           ((*(char *)((long)puVar2 + 0xb) != *(char *)((long)param_3 + 0xb) ||
            (*(char *)((long)puVar2 + 0xc) != *(char *)((long)param_3 + 0xc))))))) ||
         ((*(char *)((long)puVar2 + 0xd) != *(char *)((long)param_3 + 0xd) ||
          (((*(char *)((long)puVar2 + 0xe) != *(char *)((long)param_3 + 0xe) ||
            (*(char *)((long)puVar2 + 0xf) != *(char *)((long)param_3 + 0xf))) ||
           (((char)puVar2[2] != (char)param_3[2] ||
            ((*(char *)((long)puVar2 + 0x11) != *(char *)((long)param_3 + 0x11) ||
             (*(char *)((long)puVar2 + 0x12) != *(char *)((long)param_3 + 0x12))))))))))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(*(char *)((long)puVar2 + 0x13) == *(char *)((long)param_3 + 0x13))
        ;
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 105e344ec; end: 105e34623; -[SCSendToSectionsConfiguration isEqual:] */

bool FUN_105e344ec(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          ((((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
             (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))) ||
            (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))) ||
           ((*(char *)(param_1 + 0xb) != *(char *)(param_3 + 0xb) ||
            (*(char *)(param_1 + 0xc) != *(char *)(param_3 + 0xc))))))) ||
         ((*(char *)(param_1 + 0xd) != *(char *)(param_3 + 0xd) ||
          (((*(char *)(param_1 + 0xe) != *(char *)(param_3 + 0xe) ||
            (*(char *)(param_1 + 0xf) != *(char *)(param_3 + 0xf))) ||
           ((*(char *)(param_1 + 0x10) != *(char *)(param_3 + 0x10) ||
            ((*(char *)(param_1 + 0x11) != *(char *)(param_3 + 0x11) ||
             (*(char *)(param_1 + 0x12) != *(char *)(param_3 + 0x12))))))))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x13) == *(char *)(param_3 + 0x13);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105e34624; end: 105e3462b; -[SCSendToSectionsConfiguration shouldIncludePreview] */

undefined1 FUN_105e34624(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105e3462c; end: 105e34633; -[SCSendToSectionsConfiguration shouldIncludeInlineShareSheet] */

undefined1 FUN_105e3462c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105e34634; end: 105e3463b; -[SCSendToSectionsConfiguration shouldIncludeStories] */

undefined1 FUN_105e34634(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105e3463c; end: 105e34643; -[SCSendToSectionsConfiguration shouldIncludeBest] */

undefined1 FUN_105e3463c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 105e34644; end: 105e3464b; -[SCSendToSectionsConfiguration shouldIncludeLastSnap] */

undefined1 FUN_105e34644(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 105e3464c; end: 105e34653; -[SCSendToSectionsConfiguration shouldIncludeFirstSnap] */

undefined1 FUN_105e3464c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 105e34654; end: 105e3465b; -[SCSendToSectionsConfiguration shouldIncludeFindFriends] */

undefined1 FUN_105e34654(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 105e3465c; end: 105e34663; -[SCSendToSectionsConfiguration shouldIncludeContacts] */

undefined1 FUN_105e3465c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 105e34664; end: 105e3466b; -[SCSendToSectionsConfiguration shouldIncludeEducationPopup] */

undefined1 FUN_105e34664(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 105e3466c; end: 105e34673; -[SCSendToSectionsConfiguration shouldIncludeRecentlyActiveEducation] */

undefined1 FUN_105e3466c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 105e34674; end: 105e3467b; -[SCSendToSectionsConfiguration shouldIncludeFanPass] */

undefined1 FUN_105e34674(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 105e3467c; end: 105e34683; -[SCSendToSectionsConfiguration shouldIncludePromote] */

undefined1 FUN_105e3467c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 105e34684; end: 105e346ab; -[SCSelectionGroupSectionCreator initWithSectionIdentifiers:selectionGroupSectionDataSource:selectionTracker:actionHandler:imageDownloader:viewModelSource:sendToExperimentConfiguration:streakProvider:] */

void FUN_105e34684(void)

{
  func_0x00010c043440();
  return;
}



/* Entry: 105e346ac; end: 105e3487b; -[SCSelectionGroupSectionCreator initWithSectionIdentifiers:selectionGroupSectionDataSource:selectionTracker:actionHandler:imageDownloader:viewModelSource:sendToExperimentConfiguration:renderingTracker:streakProvider:] */

undefined1 *
FUN_105e346ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ed400;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e3487c; end: 105e34993; -[SCSelectionGroupSectionCreator sectionForDescriptor:] */

void FUN_105e3487c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  iVar5 = (int)*(undefined8 *)(param_1 + 8);
  uVar3 = uVar1;
  func_0x00010c155f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  lVar6 = 0;
  if (iVar5 != 0) {
    func_0x00010be24940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105e34994; end: 105e34b63; -[SCSelectionGroupSectionCreator _groupSectionForSectionDataModel:] */

void FUN_105e34994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c155ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  func_0x00010c161980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c15a6e0(uVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126c5168;
  _objc_alloc(PTR_PTR_1126c5168);
  func_0x00010c0638c0();
  puVar7 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar7,param_2,*(undefined8 *)(param_1 + 0x30));
  puVar8 = PTR_PTR_1126b5260;
  _objc_alloc(PTR_PTR_1126b5260);
  uVar4 = uVar1;
  func_0x00010c06ef40(uVar1);
  uVar3 = uVar1;
  func_0x00010bfcf7e0(uVar1);
  func_0x00010c01edc0(puVar8,param_2,uVar4,uVar3);
  func_0x00010c222a60(puVar7,param_2,puVar8);
  _objc_release(puVar8);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf79c60(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105e34b64; end: 105e34be7; -[SCSelectionGroupSectionCreator .cxx_destruct] */

void FUN_105e34b64(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105e34be8; end: 105e34e47; -[SCSelectionGroupSectionDataProvider initWithhSelectionGroupSectionDataSource:selectionTracker:imageDownloader:viewModelGenerator:sendToExperimentConfiguration:renderingTracker:streakProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105e34be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_4);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096e8d8);
  puStack_68 = PTR_PTR_1126ed408;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithSelectionTracker_selecti_11252c850,param_4,
                      &PTR___NSConcreteGlobalBlock_11096e8d8,param_7);
  _objc_release(param_4);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096e8d8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112737a54;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737a58;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737a5c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737a5c) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737a60);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737a60) =
         &PTR____CFConstantStringClassReference_110e2bf18;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737a64);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737a64) =
         &PTR____CFConstantStringClassReference_110e2bf38;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737a68);
    *(undefined **)((long)puVar1 + (long)_DAT_112737a68) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737a6c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737a70;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737a74);
    *(undefined **)((long)puVar1 + (long)_DAT_112737a74) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737a78);
    *(undefined **)((long)puVar1 + (long)_DAT_112737a78) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737a7c);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737a7c) =
         &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + (long)_DAT_112737a80) = 0;
    lVar5 = (long)_DAT_112737a84;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e34e48; end: 105e34ef3; -[SCSelectionGroupSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e34e48(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b5288;
  puStack_38 = puVar2;
  _objc_opt_class();
  ppuVar12 = &puStack_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  puVar3 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  ppuVar4 = ppuVar12;
  _objc_opt_isKindOfClass(ppuVar12,puVar3);
  ppuVar1 = ppuVar12;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    lVar13 = (long)_DAT_112737a88;
    _objc_retain(ppuVar12);
    uVar5 = *(undefined8 *)(puVar2 + lVar13);
    *(undefined ***)(puVar2 + lVar13) = ppuVar1;
    _objc_release(uVar5);
    _objc_initWeak(auStack_c8,puVar2);
    uVar6 = *(undefined8 *)(puVar2 + _DAT_112737a54);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar12;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar12;
    func_0x00010c11d080(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c15ab20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c15a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c0e0680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010c0e0e80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_105e352ac;
    puStack_e0 = &UNK_11085c6a8;
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(ppuVar12);
    uVar9 = uVar11;
    ppuStack_d8 = ppuVar1;
    func_0x00010c25ff60(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c2606c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar9);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(uVar6);
    uVar11 = *(undefined8 *)(puVar2 + _DAT_112737a6c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar11;
    func_0x00010c2744a0();
    _objc_release(uVar11);
    if ((int)uVar5 != 0) {
      uVar6 = *(undefined8 *)(puVar2 + _DAT_112737a84);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c25c400();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0e0680(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar5;
      func_0x00010c0e0e80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_100,auStack_c8);
      uVar9 = uVar11;
      func_0x00010c25ff60(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2606c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0(uVar9);
      _objc_release(puVar2);
      _objc_release(uVar9);
      _objc_release(uVar11);
      _objc_release(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_100);
    }
    _objc_release(ppuStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar12);
  return;
}



/* Entry: 105e34ef4; end: 105e352ab; -[SCSelectionGroupSectionDataProvider setSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e34ef4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar11 = (long)_DAT_112737a88;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar11);
    *(ulong *)(param_1 + lVar11) = uVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112737a54);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010c15ab20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c15a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c0e0680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105e352ac;
    puStack_90 = &UNK_11085c6a8;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    uVar8 = uVar10;
    uStack_88 = uVar1;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c2606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar8);
    _objc_release(lVar9);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(lVar7);
    _objc_release(uVar4);
    _objc_release(lVar11);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar10 = *(undefined8 *)(param_1 + _DAT_112737a6c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c2744a0();
    _objc_release(uVar10);
    if ((int)uVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112737a84);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c25c400();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_1;
      func_0x00010c0e0680(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c0e0e80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_b0,auStack_78);
      uVar8 = uVar10;
      func_0x00010c25ff60(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2606c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0(uVar8);
      _objc_release(param_1);
      _objc_release(uVar8);
      _objc_release(uVar10);
      _objc_release(lVar11);
      _objc_release(uVar4);
      _objc_release(uVar5);
      _objc_destroyWeak(auStack_b0);
    }
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e352ac; end: 105e3531f;  */

void FUN_105e352ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7440(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e35320; end: 105e35367;  */

void FUN_105e35320(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6bbe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e35368; end: 105e354cb; -[SCSelectionGroupSectionDataProvider configurationBlocksByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e35368(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105e354cc;
  puStack_80 = &UNK_110845ae0;
  puVar6 = auStack_70;
  _objc_copyWeak(auStack_78,puVar6);
  ppuVar1 = &puStack_98;
  _objc_retainBlock();
  uStack_68 = *(undefined8 *)(param_1 + _DAT_112737a60);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  uStack_60 = *(undefined8 *)(param_1 + _DAT_112737a64);
  ppuVar3 = ppuVar1;
  ppuStack_58 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_78);
  puVar5 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde5680();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105e354cc; end: 105e35513;  */

void FUN_105e354cc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e35514; end: 105e357db; -[SCSelectionGroupSectionDataProvider _setSelectionGroups:sectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e35514(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112737a78);
  *(undefined8 *)(param_1 + _DAT_112737a78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar6);
  lVar7 = (long)_DAT_112737a7c;
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = param_4;
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112737a68);
  puVar1 = PTR_PTR_1126b5628;
  _objc_alloc(PTR_PTR_1126b5628);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043280(puVar1);
  func_0x00010c0d9840(uVar6);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c1895e0(param_1);
  uVar6 = param_3;
  func_0x00010bf529e0();
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ec508);
  lVar7 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar7;
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar7;
  func_0x00010bf80e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105e357e4;
  puStack_90 = &UNK_1108ec528;
  lStack_88 = lVar4;
  lStack_80 = lVar5;
  lStack_78 = param_1;
  uStack_70 = param_4;
  uStack_68 = uVar6;
  _objc_retain(param_4);
  _objc_retain(lVar5);
  _objc_retain(lVar4);
  uVar6 = param_3;
  func_0x00010bd86420(param_3,&puStack_a8);
  func_0x00010c181940(param_1);
  _objc_release(uVar6);
  func_0x00010c1895e0(param_1);
  lVar7 = param_1;
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
  _objc_release(lVar7);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112737a70);
  lVar7 = param_1;
  func_0x00010bf4abe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf790c0(uVar6);
  _objc_release(lVar7);
  uVar6 = uVar3;
  func_0x0001084256c4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb8c0(param_1);
  _objc_release(uVar6);
  _objc_release(uStack_70);
  _objc_release(lStack_80);
  _objc_release(lStack_88);
  _objc_release(param_4);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105e357dc; end: 105e357e3;  */

void FUN_105e357dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b3558;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c03d4e0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e357e4; end: 105e358eb;  */

void FUN_105e357e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x000108ef7580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x000108ef7580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bde7440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e358ec; end: 105e35a67; -[SCSelectionGroupSectionDataProvider _containerCellViewModelForSelectionGroup:index:isSelected:isDisabled:count:sectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e358ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,int param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar6 = *(ulong *)(param_1 + _DAT_112737a60);
  _objc_retain(uVar6);
  _objc_retain(param_3);
  func_0x00010c0720c0();
  uVar8 = uVar6;
  if (param_8 != 0) {
    lVar7 = (long)_DAT_112737a6c;
    uVar1 = *(ulong *)(param_1 + lVar7);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c290cc0();
    if (uVar2 <= param_7) {
      uVar3 = *(undefined8 *)(param_1 + lVar7);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c290ca0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((int)uVar4 == 0) goto LAB_105e359d8;
      uVar8 = *(ulong *)(param_1 + _DAT_112737a64);
      _objc_retain(uVar8);
      uVar1 = uVar6;
    }
    _objc_release(uVar1);
  }
LAB_105e359d8:
  puVar5 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  lVar7 = *(long *)(param_1 + _DAT_112737a5c);
  (**(code **)(lVar7 + 0x10))(lVar7,param_3,param_5,param_6,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bffd260(puVar5);
  _objc_release(lVar7);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105e35a68; end: 105e35adf; -[SCSelectionGroupSectionDataProvider _configureRecipientCollectionViewCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e35a68(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e35ae0; end: 105e35bf3; -[SCSelectionGroupSectionDataProvider _onStreaksUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e35ae0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112737a80;
  _os_unfair_lock_lock(param_1 + lVar5);
  lVar6 = (long)_DAT_112737a74;
  uVar3 = *(ulong *)(param_1 + lVar6);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release(param_3);
    }
    else {
      uVar1 = param_3;
      func_0x00010c071d00(param_3,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_105e35bc0;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112737a78;
    lVar6 = *(long *)(param_1 + lVar4);
    func_0x00010bf529e0();
    if (lVar6 != 0) {
      func_0x00010bea7440(param_1,param_2,*(undefined8 *)(param_1 + lVar4),
                          *(undefined8 *)(param_1 + _DAT_112737a7c));
    }
  }
LAB_105e35bc0:
  _os_unfair_lock_unlock(param_1 + lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e35bf4; end: 105e35c03; -[SCSelectionGroupSectionDataProvider sectionDataTrackerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e35bf4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737a68);
}



/* Entry: 105e35c04; end: 105e35c13; -[SCSelectionGroupSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e35c04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737a88);
}



/* Entry: 105e35c14; end: 105e35d03; -[SCSelectionGroupSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e35c14(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737a88,0);
  _objc_storeStrong(param_1 + _DAT_112737a84,0);
  _objc_storeStrong(param_1 + _DAT_112737a7c,0);
  _objc_storeStrong(param_1 + _DAT_112737a78,0);
  _objc_storeStrong(param_1 + _DAT_112737a74,0);
  _objc_storeStrong(param_1 + _DAT_112737a70,0);
  _objc_storeStrong(param_1 + _DAT_112737a6c,0);
  _objc_storeStrong(param_1 + _DAT_112737a68,0);
  _objc_storeStrong(param_1 + _DAT_112737a64,0);
  _objc_storeStrong(param_1 + _DAT_112737a60,0);
  _objc_storeStrong(param_1 + _DAT_112737a5c,0);
  _objc_storeStrong(param_1 + _DAT_112737a58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737a54,0);
  return;
}



/* Entry: 105e35d04; end: 105e35e47; -[SCSelectionRecipientSectionCreator initWithSectionIdentifiers:sectionDataSource:selectionTracker:actionHandler:imageDownloader:viewModelSource:sendToExperimentConfiguration:circumstanceEngine:avatarFactory:] */

undefined8
FUN_105e35d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096e8d8);
  func_0x00010c0433e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      &PTR___NSConcreteGlobalBlock_11096e8d8,0,param_9,param_10,0,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096e8d8);
  return param_1;
}



/* Entry: 105e35e48; end: 105e35f9b; -[SCSelectionRecipientSectionCreator initWithSectionIdentifiers:sectionDataSource:selectionTracker:actionHandler:imageDownloader:viewModelSource:sendToExperimentConfiguration:circumstanceEngine:renderingTracker:avatarFactory:] */

undefined8
FUN_105e35e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096e8d8);
  func_0x00010c0433e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      &PTR___NSConcreteGlobalBlock_11096e8d8,0,param_9,param_10,param_11,param_12);
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
  _objc_release(&PTR___NSConcreteGlobalBlock_11096e8d8);
  return param_1;
}



/* Entry: 105e35f9c; end: 105e360df; -[SCSelectionRecipientSectionCreator initWithSectionIdentifiers:sectionDataSource:selectionTracker:actionHandler:imageDownloader:viewModelSource:selectionStateViewModelGenerator:sendToExperimentConfiguration:circumstanceEngine:avatarFactory:] */

undefined8
FUN_105e35f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096e8d8);
  func_0x00010c0433e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      &PTR___NSConcreteGlobalBlock_11096e8d8,0,param_11,param_12,0,param_13);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096e8d8);
  return param_1;
}



/* Entry: 105e360e0; end: 105e363ab; -[SCSelectionRecipientSectionCreator initWithSectionIdentifiers:sectionDataSource:selectionTracker:actionHandler:imageDownloader:viewModelSource:selectionStateViewModelGenerator:viewMoreProvider:sendToExperimentConfiguration:circumstanceEngine:renderingTracker:avatarFactory:] */

undefined8 *
FUN_105e360e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ed410;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
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



/* Entry: 105e363ac; end: 105e364c3; -[SCSelectionRecipientSectionCreator sectionForDescriptor:] */

void FUN_105e363ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  iVar5 = (int)*(undefined8 *)(param_1 + 8);
  uVar3 = uVar1;
  func_0x00010c155f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  lVar6 = 0;
  if (iVar5 != 0) {
    func_0x00010be870a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105e364c4; end: 105e3673b; -[SCSelectionRecipientSectionCreator _recipientSectionForSectionDataModel:] */

void FUN_105e364c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c155ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5398;
  _objc_alloc();
  func_0x00010c01a160();
  func_0x00010c161980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c15a960(uVar3,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105e3673c;
  puStack_78 = &UNK_1108ec558;
  _objc_retain(param_3);
  ppuVar6 = &puStack_90;
  uStack_70 = param_3;
  uStack_68 = uVar5;
  _objc_retainBlock(ppuVar6);
  puVar7 = PTR_PTR_1126c5170;
  _objc_alloc(PTR_PTR_1126c5170);
  func_0x00010c0638a0();
  puVar8 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar8,param_2,*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x40) == 0) {
    puVar9 = PTR_PTR_1126b5260;
    _objc_alloc(PTR_PTR_1126b5260);
    uVar3 = uVar1;
    func_0x00010c06ef40(uVar1);
    uVar10 = uVar1;
    func_0x00010bfcf7e0(uVar1);
    func_0x00010c01edc0(puVar9,param_2,uVar3,uVar10);
    func_0x00010c222a60(puVar8,param_2,puVar9);
    _objc_release(puVar9);
  }
  else {
    func_0x00010c222a60(puVar8);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79c60(uVar10,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(uStack_70);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105e3673c; end: 105e367c7;  */

undefined8 FUN_105e3673c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c290c80();
    if (lVar3 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      func_0x00010c290c80();
      _objc_release(uVar1);
      if (param_2 < uVar4) {
        return 0;
      }
      return 1;
    }
  }
  _objc_release(uVar1);
  return 0;
}



/* Entry: 105e367c8; end: 105e3686f; -[SCSelectionRecipientSectionCreator .cxx_destruct] */

void FUN_105e367c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105e36870; end: 105e36a7f; -[SCSelectionRecipientSectionDataProvider initWithhSelectionGroupSectionDataSource:selectionTracker:imageDownloader:viewModelGenerator:selectionStateViewModelGenerator:sectionLayoutGenerator:sendToExperimentConfiguration:circumstanceEngine:renderingTracker:avatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105e36870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126ed418;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithSelectionTracker_selecti_11252c850,param_4,param_7,
                      param_9);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112737abc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737ac0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737ac4;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    _objc_release(uVar2);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737ac8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737ac8) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737acc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737acc) = uVar2;
    _objc_release(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737ad0);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737ad0) =
         &PTR____CFConstantStringClassReference_110e2bf18;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737ad4);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737ad4) =
         &PTR____CFConstantStringClassReference_110e2bf58;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737ad8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737adc);
    *(undefined **)((long)puVar1 + (long)_DAT_112737adc) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737ae0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e36a80; end: 105e36b2b; -[SCSelectionRecipientSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e36a80(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b5288;
  puStack_38 = puVar2;
  _objc_opt_class();
  ppuVar11 = &puStack_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  puVar3 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  ppuVar4 = ppuVar11;
  _objc_opt_isKindOfClass(ppuVar11,puVar3);
  ppuVar1 = ppuVar11;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    lVar12 = (long)_DAT_112737ae4;
    _objc_retain(ppuVar11);
    uVar5 = *(undefined8 *)(puVar2 + lVar12);
    *(undefined ***)(puVar2 + lVar12) = ppuVar1;
    _objc_release(uVar5);
    ppuVar4 = ppuVar11;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + _DAT_112737ae8);
    *(undefined ***)(puVar2 + _DAT_112737ae8) = ppuVar4;
    _objc_release(uVar5);
    _objc_initWeak(auStack_b8,puVar2);
    uVar6 = *(undefined8 *)(puVar2 + _DAT_112737abc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar11;
    func_0x00010c155f60(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar11;
    func_0x00010c11d080(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c15ab20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c15a900(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c0e0680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c0e0e80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(ppuVar11);
    uVar10 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(uVar6);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar11);
  return;
}



/* Entry: 105e36b2c; end: 105e36dbb; -[SCSelectionRecipientSectionDataProvider setSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e36b2c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar10 = (long)_DAT_112737ae4;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    *(ulong *)(param_1 + lVar10) = uVar1;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112737ae8);
    *(ulong *)(param_1 + _DAT_112737ae8) = uVar3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112737abc);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c15ab20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c15a900(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c0e0680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar9);
    _objc_release(param_1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(uVar4);
    _objc_release(lVar10);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e36dbc; end: 105e36e2f;  */

void FUN_105e36dbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea7480(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e36e30; end: 105e36f93; -[SCSelectionRecipientSectionDataProvider configurationBlocksByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e36e30(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105e36f94;
  puStack_80 = &UNK_110845ae0;
  puVar6 = auStack_70;
  _objc_copyWeak(auStack_78,puVar6);
  ppuVar1 = &puStack_98;
  _objc_retainBlock();
  uStack_68 = *(undefined8 *)(param_1 + _DAT_112737ad0);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  uStack_60 = *(undefined8 *)(param_1 + _DAT_112737ad4);
  ppuVar3 = ppuVar1;
  ppuStack_58 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_78);
  puVar5 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde5680();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105e36f94; end: 105e36fdb;  */

void FUN_105e36f94(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e36fdc; end: 105e3725f; -[SCSelectionRecipientSectionDataProvider _setSelectionRecipients:sectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e36fdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b5628;
  uVar7 = *(undefined8 *)(param_1 + _DAT_112737adc);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043280(puVar1);
  func_0x00010c0d9840(uVar7);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010c1895e0(param_1);
  uVar7 = param_3;
  func_0x00010bf529e0();
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ec5a8);
  lVar4 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf80e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105e37268;
  puStack_88 = &UNK_1108ec5c8;
  lStack_80 = lVar5;
  lStack_78 = lVar6;
  lStack_70 = param_1;
  uStack_68 = uVar7;
  _objc_retain(lVar6);
  _objc_retain(lVar5);
  uVar7 = param_3;
  func_0x00010bd86420(param_3,&puStack_a0);
  _objc_release(param_3);
  func_0x00010c181940(param_1);
  _objc_release(uVar7);
  func_0x00010c1895e0(param_1);
  lVar4 = param_1;
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
  _objc_release(lVar4);
  uVar7 = *(undefined8 *)(param_1 + _DAT_112737ae0);
  lVar4 = param_1;
  func_0x00010bf4abe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf790c0(uVar7);
  _objc_release(param_4);
  _objc_release(lVar4);
  uVar7 = uVar3;
  func_0x0001084256c4(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb8c0(param_1);
  _objc_release(uVar7);
  _objc_release(lStack_78);
  _objc_release(lStack_80);
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105e37260; end: 105e37267;  */

void FUN_105e37260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e5c0d0;
  uStack_30 = 0x105e5c0e0;
  uStack_28 = 0;
  func_0x00010c0c0060(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e37268; end: 105e3736b;  */

void FUN_105e37268(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_105e5bfb8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  FUN_105e5bfb8(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bde7460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e3736c; end: 105e3749b; -[SCSelectionRecipientSectionDataProvider _containerCellViewModelForSelectionRecipient:index:isSelected:isDisabled:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3736c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  puVar5 = (undefined8 *)(param_1 + _DAT_112737ad0);
  uVar2 = *puVar5;
  _objc_retain(uVar2);
  lVar3 = *(long *)(param_1 + _DAT_112737acc);
  pcVar6 = *(code **)(lVar3 + 0x10);
  _objc_retain(param_3);
  (*pcVar6)(lVar3,param_7);
  if (lVar3 != 0) {
    uVar4 = uVar2;
    if (lVar3 != 1) goto LAB_105e3740c;
    puVar5 = (undefined8 *)(param_1 + _DAT_112737ad4);
  }
  uVar4 = *puVar5;
  _objc_retain(uVar4);
  _objc_release(uVar2);
LAB_105e3740c:
  puVar1 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  lVar3 = *(long *)(param_1 + _DAT_112737ac8);
  (**(code **)(lVar3 + 0x10))(lVar3,param_3,param_5,param_6,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bffd260(puVar1);
  _objc_release(lVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e3749c; end: 105e37527; -[SCSelectionRecipientSectionDataProvider _configureRecipientCollectionViewCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3749c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e37528; end: 105e37537; -[SCSelectionRecipientSectionDataProvider sectionDataTrackerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e37528(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737adc);
}



/* Entry: 105e37538; end: 105e37547; -[SCSelectionRecipientSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e37538(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737ae4);
}



/* Entry: 105e37548; end: 105e37627; -[SCSelectionRecipientSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e37548(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737ae4,0);
  _objc_storeStrong(param_1 + _DAT_112737ae0,0);
  _objc_storeStrong(param_1 + _DAT_112737ae8,0);
  _objc_storeStrong(param_1 + _DAT_112737ad8,0);
  _objc_storeStrong(param_1 + _DAT_112737adc,0);
  _objc_storeStrong(param_1 + _DAT_112737ad4,0);
  _objc_storeStrong(param_1 + _DAT_112737ad0,0);
  _objc_storeStrong(param_1 + _DAT_112737acc,0);
  _objc_storeStrong(param_1 + _DAT_112737ac8,0);
  _objc_storeStrong(param_1 + _DAT_112737ac4,0);
  _objc_storeStrong(param_1 + _DAT_112737ac0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737abc,0);
  return;
}



/* Entry: 105e37628; end: 105e37903; -[SCSelectionSnapchatterSectionCreator initWithSectionIdentifiers:selectionSnapchatterSectionDataSource:snapchattersDataTracker:selectionTracker:snapchatterSectionPreselectionsMap:actionHandler:includeStoryIndicator:includeLocation:imageDownloader:viewModelSource:sendToExperimentConfiguration:circumstanceEngine:renderingTracker:avatarFactory:] */

undefined8 *
FUN_105e37628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126ed420;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[5];
    puVar1[5] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[6];
    puVar1[6] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 0x51) = param_9._1_1_;
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 105e37904; end: 105e37947; -[SCSelectionSnapchatterSectionCreator initWithSectionIdentifiers:selectionSnapchatterSectionDataSource:snapchattersDataTracker:selectionTracker:snapchatterSectionPreselectionsMap:actionHandler:includeStoryIndicator:includeLocation:imageDownloader:viewModelSource:sendToExperimentConfiguration:circumstanceEngine:avatarFactory:] */

void FUN_105e37904(void)

{
  func_0x00010c0434a0();
  return;
}



/* Entry: 105e37948; end: 105e37a5f; -[SCSelectionSnapchatterSectionCreator sectionForDescriptor:] */

void FUN_105e37948(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1700;
  _objc_opt_class(PTR_PTR_1126b1700);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010bf4c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  iVar5 = (int)*(undefined8 *)(param_1 + 8);
  uVar3 = uVar1;
  func_0x00010c155f60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar3);
  lVar6 = 0;
  if (iVar5 != 0) {
    func_0x00010bebd700(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105e37a60; end: 105e37cdb; -[SCSelectionSnapchatterSectionCreator _snapchatterSectionForSectionDataModel:] */

void FUN_105e37a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c155ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b5398;
  _objc_alloc(PTR_PTR_1126b5398);
  func_0x00010c01a160();
  func_0x00010c161980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c244780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar6 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  _objc_opt_respondsToSelector();
  _objc_release(uVar6);
  if ((uVar7 & 1) == 0) {
    ppuVar9 = &PTR___NSConcreteGlobalBlock_1108ec5f8;
  }
  else {
    ppuVar8 = *(undefined ***)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c155f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c1562c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(ppuVar8);
  }
  puVar10 = PTR_PTR_1126c5178;
  _objc_alloc(PTR_PTR_1126c5178);
  func_0x00010c043f00();
  puVar11 = PTR_PTR_1126b1108;
  _objc_alloc(PTR_PTR_1126b1108);
  func_0x00010c04f820();
  func_0x00010c1f9240();
  func_0x00010c161980(puVar11);
  puVar12 = PTR_PTR_1126b5260;
  _objc_alloc(PTR_PTR_1126b5260);
  func_0x00010c06ef40(uVar1);
  func_0x00010bfcf7e0(uVar1);
  func_0x00010c01edc0(puVar12);
  func_0x00010c222a60(puVar11);
  _objc_release(puVar12);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = param_3;
  func_0x00010c155f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf79c60(uVar3);
  _objc_release(uVar4);
  _objc_release(puVar10);
  _objc_release(ppuVar9);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105e37cdc; end: 105e37ce3;  */

undefined8 FUN_105e37cdc(void)

{
  return 0;
}



/* Entry: 105e37ce4; end: 105e37d8b; -[SCSelectionSnapchatterSectionCreator .cxx_destruct] */

void FUN_105e37ce4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 105e37d8c; end: 105e38077; -[SCSelectionSnapchatterSectionDataProvider initWithSelectionSnapchatterSectionDataSource:snapchattersDataTracker:selectionTracker:snapchatterSectionPreselectionsMap:imageDownloader:includeStoriesSummaryInfo:includeLocation:viewModelGenerator:sectionLayoutGenerator:sendToExperimentConfiguration:circumstanceEngine:renderingTracker:avatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105e37d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_13);
  _objc_retain(param_5);
  _objc_retain(&PTR___NSConcreteGlobalBlock_11096e8d8);
  puStack_68 = PTR_PTR_1126ed428;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithSelectionTracker_selecti_11252c850,param_5,
                      &PTR___NSConcreteGlobalBlock_11096e8d8,param_13);
  _objc_release(param_13);
  _objc_release(param_5);
  _objc_release(&PTR___NSConcreteGlobalBlock_11096e8d8);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112737b24;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737b28;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737b2c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737b30;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    _objc_release(uVar2);
    uVar2 = param_11;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737b34);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737b34) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_12;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737b38);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112737b38) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112737b3c) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112737b40) = param_9;
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737b44);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737b44) =
         &PTR____CFConstantStringClassReference_110e2bf78;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737b48);
    *(undefined ***)((long)puVar1 + (long)_DAT_112737b48) =
         &PTR____CFConstantStringClassReference_110e2bf98;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112737b4c);
    *(undefined **)((long)puVar1 + (long)_DAT_112737b4c) = puVar3;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737b50;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_112737b54;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_15;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105e38078; end: 105e38123; -[SCSelectionSnapchatterSectionDataProvider contentCellClassesByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e38078(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126b5288;
  puStack_38 = puVar2;
  _objc_opt_class();
  ppuVar11 = &puStack_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_30 = puVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  puVar3 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  ppuVar4 = ppuVar11;
  _objc_opt_isKindOfClass(ppuVar11,puVar3);
  ppuVar1 = ppuVar11;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  if (ppuVar1 != (undefined **)0x0) {
    lVar12 = (long)_DAT_112737b58;
    _objc_retain(ppuVar11);
    uVar5 = *(undefined8 *)(puVar2 + lVar12);
    *(undefined ***)(puVar2 + lVar12) = ppuVar1;
    _objc_release(uVar5);
    ppuVar4 = ppuVar11;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(puVar2 + _DAT_112737b5c);
    *(undefined ***)(puVar2 + _DAT_112737b5c) = ppuVar4;
    _objc_release(uVar5);
    _objc_initWeak(auStack_b8,puVar2);
    uVar6 = *(undefined8 *)(puVar2 + _DAT_112737b24);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar11;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar11;
    func_0x00010c11d080(ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c15ab20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c15a9e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c0e0680(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010c0e0e80(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(ppuVar11);
    uVar10 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar10);
    _objc_release(puVar2);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(ppuVar7);
    _objc_release(ppuVar4);
    _objc_release(uVar6);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar11);
  return;
}



/* Entry: 105e38124; end: 105e383c7; -[SCSelectionSnapchatterSectionDataProvider setSectionDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e38124(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5240;
  _objc_opt_class(PTR_PTR_1126b5240);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar10 = (long)_DAT_112737b58;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)(param_1 + lVar10);
    *(ulong *)(param_1 + lVar10) = uVar1;
    _objc_release(uVar4);
    uVar3 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_112737b5c);
    *(ulong *)(param_1 + _DAT_112737b5c) = uVar3;
    _objc_release(uVar4);
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112737b24);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c15ab20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c15a9e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c0e0680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c0e0e80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0(uVar9);
    _objc_release(param_1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(uVar4);
    _objc_release(lVar10);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105e383c8; end: 105e3843b;  */

void FUN_105e383c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c155f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea74a0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105e3843c; end: 105e3859f; -[SCSelectionSnapchatterSectionDataProvider configurationBlocksByReuseIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3843c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_70,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105e385a0;
  puStack_80 = &UNK_110845ae0;
  puVar6 = auStack_70;
  _objc_copyWeak(auStack_78,puVar6);
  ppuVar1 = &puStack_98;
  _objc_retainBlock();
  uStack_68 = *(undefined8 *)(param_1 + _DAT_112737b44);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  uStack_60 = *(undefined8 *)(param_1 + _DAT_112737b48);
  ppuVar3 = ppuVar1;
  ppuStack_58 = ppuVar2;
  _objc_retainBlock();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_50 = ppuVar3;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_78);
  puVar5 = auStack_70;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume(puVar5);
  _objc_retain(puVar6);
  puVar5 = puVar5 + 0x20;
  _objc_loadWeakRetained(puVar5);
  func_0x00010bde5680();
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105e385a0; end: 105e385e7;  */

void FUN_105e385a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde5680();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e385e8; end: 105e3861f; -[SCSelectionSnapchatterSectionDataProvider didStartSnapchattersUpdateDataRequest:] */

void FUN_105e385e8(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_105e38620();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModels_112596830);
    return;
  }
  return;
}



/* Entry: 105e38620; end: 105e386eb;  */

undefined1 FUN_105e38620(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bc6c0(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105e386ec; end: 105e38723; -[SCSelectionSnapchatterSectionDataProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105e386ec(undefined8 param_1,undefined8 param_2,int param_3)

{
  FUN_105e38620();
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModels_112596830);
    return;
  }
  return;
}



/* Entry: 105e38724; end: 105e38817; -[SCSelectionSnapchatterSectionDataProvider _setSelectionSnapchatters:sectionIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e38724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737b60);
  *(undefined8 *)(param_1 + _DAT_112737b60) = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112737b4c);
  puVar1 = PTR_PTR_1126b5628;
  _objc_alloc(PTR_PTR_1126b5628);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043280(puVar1);
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  func_0x00010be79bc0(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bee3a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewModels_112596830);
  return;
}



/* Entry: 105e38818; end: 105e38923; -[SCSelectionSnapchatterSectionDataProvider _preselectWithSectionIdentifier:selectionSnapchatters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e38818(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = (long)_DAT_112737b28;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 != 0) {
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4b900();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar3 = *(ulong *)(param_1 + lVar5);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2827c0();
      _objc_release(uVar3);
      uVar3 = param_4;
      func_0x00010bf529e0();
      if (uVar3 <= uVar4) {
        uVar4 = param_4;
        func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108ec638);
        func_0x00010c15ab20(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fb980();
        _objc_release(param_1);
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e38924; end: 105e3896b;  */

void FUN_105e38924(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ef82c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e3896c; end: 105e38b5f; -[SCSelectionSnapchatterSectionDataProvider _updateViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e3896c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x00010c1895e0(param_1,param_2,1);
  lVar7 = (long)_DAT_112737b60;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bf529e0();
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_1108ec678);
  lVar3 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15aa20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c15ab20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf80e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105e38ba8;
  puStack_78 = &UNK_1108ec698;
  lStack_70 = lVar4;
  lStack_68 = lVar5;
  lStack_60 = param_1;
  uStack_58 = uVar1;
  _objc_retain(lVar5);
  _objc_retain(lVar4);
  func_0x00010bd86420(uVar6,&puStack_90);
  func_0x00010c181940(param_1);
  _objc_release(uVar6);
  func_0x00010c1895e0(param_1);
  lVar3 = param_1;
  func_0x00010bf64120(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c155aa0();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112737b54);
  lVar3 = param_1;
  func_0x00010bf4abe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf790c0(uVar1);
  _objc_release(lVar3);
  uVar1 = uVar2;
  func_0x0001084256c4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb8c0(param_1);
  _objc_release(uVar1);
  _objc_release(lStack_68);
  _objc_release(lStack_70);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e38b60; end: 105e38ba7;  */

void FUN_105e38b60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ef8240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e38ba8; end: 105e38cc3;  */

void FUN_105e38ba8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar1;
  func_0x000108ef8240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = uVar1;
  func_0x000108ef8240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bde74a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e38cc4; end: 105e38de7; -[SCSelectionSnapchatterSectionDataProvider _containerCellViewModelForSelectionSnapchatter:index:isSelected:isDisabled:count:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e38cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  _objc_retain(param_3);
  puVar5 = (undefined8 *)(param_1 + _DAT_112737b44);
  uVar3 = *puVar5;
  _objc_retain(uVar3);
  lVar1 = *(long *)(param_1 + _DAT_112737b38);
  (**(code **)(lVar1 + 0x10))(lVar1,param_7);
  if (lVar1 != 0) {
    uVar4 = uVar3;
    if (lVar1 != 1) goto LAB_105e38d60;
    puVar5 = (undefined8 *)(param_1 + _DAT_112737b48);
  }
  uVar4 = *puVar5;
  _objc_retain(uVar4);
  _objc_release(uVar3);
LAB_105e38d60:
  lVar1 = *(long *)(param_1 + _DAT_112737b34);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_5,param_6,param_4,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e38de8; end: 105e38e73; -[SCSelectionSnapchatterSectionDataProvider _configureRecipientCollectionViewCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e38de8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5290;
  _objc_opt_class(PTR_PTR_1126b5290);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c1aa200(uVar1);
  func_0x00010c16d9c0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105e38e74; end: 105e38e83; -[SCSelectionSnapchatterSectionDataProvider sectionDataTrackerObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e38e74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737b4c);
}



/* Entry: 105e38e84; end: 105e38e93; -[SCSelectionSnapchatterSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105e38e84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112737b58);
}



/* Entry: 105e38e94; end: 105e38f93; -[SCSelectionSnapchatterSectionDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e38e94(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112737b58,0);
  _objc_storeStrong(param_1 + _DAT_112737b54,0);
  _objc_storeStrong(param_1 + _DAT_112737b5c,0);
  _objc_storeStrong(param_1 + _DAT_112737b50,0);
  _objc_storeStrong(param_1 + _DAT_112737b60,0);
  _objc_storeStrong(param_1 + _DAT_112737b4c,0);
  _objc_storeStrong(param_1 + _DAT_112737b48,0);
  _objc_storeStrong(param_1 + _DAT_112737b44,0);
  _objc_storeStrong(param_1 + _DAT_112737b38,0);
  _objc_storeStrong(param_1 + _DAT_112737b34,0);
  _objc_storeStrong(param_1 + _DAT_112737b30,0);
  _objc_storeStrong(param_1 + _DAT_112737b2c,0);
  _objc_storeStrong(param_1 + _DAT_112737b28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112737b24,0);
  return;
}



/* Entry: 105e38f94; end: 105e38fa7;  */

void FUN_105e38f94(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 105e38fa8; end: 105e3908f; -[SCSelectionSnapchatter initWithSnapchatter:storySummaryInfo:location:isRecentlyActive:] */

undefined1 *
FUN_105e38fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

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
  puStack_48 = PTR_PTR_1126ed430;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105e39090; end: 105e390b3; -[SCSelectionSnapchatter copyWithZone:] */

undefined8 FUN_105e39090(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105e390b4; end: 105e39137; -[SCSelectionSnapchatter hash] */

undefined8 * FUN_105e390b4(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105e391e0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105e391ec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_105e391ec;
          }
          goto LAB_105e391e0;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105e391ec:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105e39138; end: 105e39207; -[SCSelectionSnapchatter isEqual:] */

long FUN_105e39138(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105e391e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105e391ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105e391ec;
          }
          goto LAB_105e391e0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105e391ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105e39208; end: 105e3920f; -[SCSelectionSnapchatter snapchatter] */

undefined8 FUN_105e39208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105e39210; end: 105e39217; -[SCSelectionSnapchatter storySummaryInfo] */

undefined8 FUN_105e39210(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105e39218; end: 105e3921f; -[SCSelectionSnapchatter location] */

undefined8 FUN_105e39218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105e39220; end: 105e39227; -[SCSelectionSnapchatter isRecentlyActive] */

undefined1 FUN_105e39220(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


