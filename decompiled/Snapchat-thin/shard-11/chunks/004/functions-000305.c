/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085d69ac; end: 1085d6a33; -[SCTPresencePill installBottomConstraintEqualTo:] */

void FUN_1085d69ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1085d6a34;
  puStack_30 = &UNK_1108471b0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bbfc0(param_1,param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085d6a34; end: 1085d6a9b;  */

void FUN_1085d6a34(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d6a9c; end: 1085d6bd3; -[SCTPresencePill uninstallBottomConstraint] */

void FUN_1085d6a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *unaff_x20;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar1 = PTR_PTR_1126da528;
  func_0x00010c067aa0(PTR_PTR_1126da528,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar7 = *plStack_110;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(puVar1);
        }
        lVar6 = *(long *)(lStack_118 + (long)puVar8 * 8);
        lVar3 = lVar6;
        func_0x00010bfb1fa0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08c860();
        _objc_release(lVar3);
        if (lVar4 == 4) {
          func_0x00010c2803c0(lVar6);
          unaff_x20 = puVar2;
          goto LAB_1085d6b94;
        }
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
      puVar2 = puVar1;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
      unaff_x20 = puVar2;
    } while (puVar2 != (undefined *)0x0);
  }
LAB_1085d6b94:
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_1085d6bd4;
    puStack_140 = unaff_x20;
    puStack_138 = puVar1;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_1085d6c5c;
    puStack_150 = &UNK_1108471b0;
    puStack_148 = (undefined1 *)puVar5;
    _objc_retain(puVar5);
    func_0x00010c0bbfc0(puVar2,param_2,&puStack_168);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puStack_148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 1085d6bd4; end: 1085d6c5b; -[SCTPresencePill installTopConstraintEqualTo:] */

void FUN_1085d6bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1085d6c5c;
  puStack_30 = &UNK_1108471b0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0bbfc0(param_1,param_2,&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085d6c5c; end: 1085d6cc3;  */

void FUN_1085d6c5c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d6cc4; end: 1085d6dfb; -[SCTPresencePill uninstallTopConstraint] */

void FUN_1085d6cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined *puStack_150;
  undefined *puStack_148;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  puVar3 = PTR_PTR_1126da528;
  func_0x00010c067aa0(PTR_PTR_1126da528,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  do {
    if (puVar4 == (undefined *)0x0) {
LAB_1085d6dbc:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return;
      }
      ___stack_chk_fail();
      ppuVar7 = &puStack_150;
      uVar1 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
      puStack_148 = PTR_PTR_1126fcf90;
      puStack_150 = puVar3;
      _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
      if (ppuVar7 != (undefined **)0x0) {
        *(undefined8 *)((long)ppuVar7 + 8) = uVar1;
        *(undefined8 *)((long)ppuVar7 + 0x10) = param_2;
        *(undefined8 *)((long)ppuVar7 + 0x18) = uVar1;
        *(undefined8 *)((long)ppuVar7 + 0x20) = param_2;
      }
      return;
    }
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar3);
      }
      lVar9 = *(long *)((long)puVar10 * 8);
      lVar5 = lVar9;
      func_0x00010bfb1fa0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08c860();
      _objc_release(lVar5);
      if (lVar6 == 3) {
        func_0x00010c2803c0(lVar9);
        goto LAB_1085d6dbc;
      }
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar10);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1085d6dfc; end: 1085d6e4b; -[SCTPresenceDraggingContext initWithStartLocation:] */

void FUN_1085d6dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fcf90;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
  }
  return;
}



/* Entry: 1085d6e4c; end: 1085d6e67; -[SCTPresenceDraggingContext stretch] */

double FUN_1085d6e4c(long param_1)

{
  return (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 8)) / 90.0;
}



/* Entry: 1085d6e68; end: 1085d6e8f; -[SCTPresenceDraggingContext normalizedStretch] */

double FUN_1085d6e68(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  
  func_0x00010c25cb80();
  dVar1 = (double)NEON_fminnm(param_1,0x3ff0000000000000);
  dVar2 = -1.0;
  if (-1.0 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}



/* Entry: 1085d6e90; end: 1085d6e97; -[SCTPresenceDraggingContext updateLocation:] */

void FUN_1085d6e90(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  return;
}



/* Entry: 1085d6e98; end: 1085d7037; -[SCTPresenceParticipant initWithUsername:userId:displayName:uniqueLabel:presenceColor:bitmojiAvatarId:petImageURL:isAiChatbot:] */

undefined1 *
FUN_1085d6e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

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
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fcf98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_10;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085d7038; end: 1085d7067; -[SCTPresenceParticipant updateUniqueLabel:] */

void FUN_1085d7038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d7068; end: 1085d70b3; -[SCTPresenceParticipant updatePrecenceColor:] */

void FUN_1085d7068(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x30) != param_3) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085d70b4; end: 1085d70c7; -[SCTPresenceParticipant updateSelection:] */

void FUN_1085d70b4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 8) != param_3) {
    *(char *)(param_1 + 8) = (char)param_3;
  }
  return;
}



/* Entry: 1085d70c8; end: 1085d712f; -[SCTPresenceParticipant updateBitmojiFetchState:presenceBitmoji:] */

void FUN_1085d70c8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 0x50) != 2) && ((param_3 != 3 || (*(long *)(param_1 + 0x50) != 0)))) {
    *(long *)(param_1 + 0x50) = param_3;
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_4;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085d7130; end: 1085d7163; -[SCTPresenceParticipant hasBitmoji] */

bool FUN_1085d7130(long param_1)

{
  func_0x00010c10ac20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1085d7164; end: 1085d717f; -[SCTPresenceParticipant isFetchingBitmoji] */

bool FUN_1085d7164(long param_1)

{
  func_0x00010bf1b500();
  return param_1 == 1;
}



/* Entry: 1085d7180; end: 1085d7187; -[SCTPresenceParticipant username] */

undefined8 FUN_1085d7180(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085d7188; end: 1085d718f; -[SCTPresenceParticipant userId] */

undefined8 FUN_1085d7188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1085d7190; end: 1085d7197; -[SCTPresenceParticipant displayName] */

undefined8 FUN_1085d7190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1085d7198; end: 1085d719f; -[SCTPresenceParticipant uniqueLabel] */

undefined8 FUN_1085d7198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1085d71a0; end: 1085d71a7; -[SCTPresenceParticipant presenceColor] */

undefined8 FUN_1085d71a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1085d71a8; end: 1085d71af; -[SCTPresenceParticipant bitmojiAvatarId] */

undefined8 FUN_1085d71a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1085d71b0; end: 1085d71b7; -[SCTPresenceParticipant selected] */

undefined1 FUN_1085d71b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1085d71b8; end: 1085d71bf; -[SCTPresenceParticipant petImageURL] */

undefined8 FUN_1085d71b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1085d71c0; end: 1085d71c7; -[SCTPresenceParticipant typingBubbleOnly] */

undefined1 FUN_1085d71c0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1085d71c8; end: 1085d71cf; -[SCTPresenceParticipant presenceBitmoji] */

undefined8 FUN_1085d71c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1085d71d0; end: 1085d71d7; -[SCTPresenceParticipant bitmojiFetchState] */

undefined8 FUN_1085d71d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1085d71d8; end: 1085d724f; -[SCTPresenceParticipant .cxx_destruct] */

void FUN_1085d71d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1085d7250; end: 1085d726f; -[SCTPresencePill selectionListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d7250(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112777070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085d7270; end: 1085d7283; -[SCTPresencePill setSelectionListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d7270(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112777070,param_3);
  return;
}



/* Entry: 1085d7284; end: 1085d7293; -[SCTPresencePill roundContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085d7284(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777074);
}



/* Entry: 1085d7294; end: 1085d72d3; -[SCTPresencePill setRoundContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d7294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112777074;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d72d4; end: 1085d72e3; -[SCTPresencePill bitmojiView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085d72d4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777078);
}



/* Entry: 1085d72e4; end: 1085d7323; -[SCTPresencePill setBitmojiView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d72e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112777078;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d7324; end: 1085d736f; -[SCTPresencePill .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d7324(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777078,0);
  _objc_storeStrong(param_1 + _DAT_112777074,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112777070);
  return;
}



/* Entry: 1085d7370; end: 1085d7463; -[SCTPresencePillLabel initWithFrame:] */

undefined1 * FUN_1085d7370(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fcfa0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar2);
    func_0x00010c213040(puVar1);
    func_0x00010c16f5a0(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb41a0(0x4024000000000000,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1085d7464; end: 1085d7507; -[SCTPresencePillLabel setTypingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d7464(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277707c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 != param_3) {
    if (lVar1 == 2) {
      func_0x00010bec3600(param_1,param_2,0);
    }
    else if (lVar1 == 1) {
      func_0x00010bec3ac0(param_1,param_2,0);
    }
    *(long *)(param_1 + lVar2) = param_3;
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bec0f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startPausedAnimation_11258dd80);
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bec1e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startTypingAnimation_11258e140);
      return;
    }
  }
  return;
}



/* Entry: 1085d7508; end: 1085d762b; -[SCTPresencePillLabel animateToTypingState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d7508(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11277707c;
  if (*(long *)(param_1 + lVar4) == param_3) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    func_0x00010be3a960(param_1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + _DAT_112777080);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
    if (lVar3 == 0) {
      _objc_opt_class();
      func_0x00010c11f020(puVar1);
    }
    *(long *)(param_1 + lVar4) = param_3;
    (**(code **)(lVar3 + 0x10))(lVar3,param_4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085d762c; end: 1085d7cd7; -[SCTPresencePillLabel _initTransitionTableIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d762c(undefined1 *param_1,undefined1 *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puStack_248;
  undefined8 uStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar31 = (long)_DAT_112777080;
  if (*(long *)(param_1 + lVar31) == 0) {
    _objc_initWeak(auStack_148,param_1);
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_1085d7cd8;
    puStack_158 = &UNK_11084d688;
    _objc_copyWeak(auStack_150,auStack_148);
    ppuVar1 = &puStack_170;
    _objc_retainBlock();
    puStack_198 = puVar7;
    uStack_190 = 0xc2000000;
    uStack_188 = 0x1085d7d2c;
    puStack_180 = &UNK_11084d688;
    _objc_copyWeak(auStack_178,auStack_148);
    ppuVar2 = &puStack_198;
    _objc_retainBlock();
    puStack_1c0 = puVar7;
    uStack_1b8 = 0xc2000000;
    uStack_1b0 = 0x1085d7d90;
    puStack_1a8 = &UNK_11084d688;
    _objc_copyWeak(auStack_1a0,auStack_148);
    ppuVar3 = &puStack_1c0;
    _objc_retainBlock();
    puStack_1e8 = puVar7;
    uStack_1e0 = 0xc2000000;
    uStack_1d8 = 0x1085d7de4;
    puStack_1d0 = &UNK_11084d688;
    param_2 = auStack_148;
    _objc_copyWeak(auStack_1c8);
    ppuVar4 = &puStack_1e8;
    _objc_retainBlock();
    puStack_218 = puVar7;
    uStack_210 = 0xc2000000;
    pcStack_208 = FUN_1085d7e48;
    puStack_200 = &UNK_110a59ee0;
    _objc_retain(ppuVar2);
    ppuStack_1f8 = ppuVar2;
    _objc_retain(ppuVar3);
    ppuVar5 = &puStack_218;
    ppuStack_1f0 = ppuVar3;
    _objc_retainBlock();
    puStack_248 = puVar7;
    uStack_240 = 0xc2000000;
    pcStack_238 = FUN_1085d7efc;
    puStack_230 = &UNK_110a59ee0;
    _objc_retain(ppuVar4);
    ppuStack_228 = ppuVar4;
    _objc_retain(ppuVar1);
    ppuVar6 = &puStack_248;
    ppuStack_220 = ppuVar1;
    _objc_retainBlock();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar1;
    puStack_140 = puVar7;
    _objc_retainBlock();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_e0 = ppuVar8;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar3;
    puStack_138 = puVar9;
    _objc_retainBlock();
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_d8 = ppuVar10;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR___NSConcreteGlobalBlock_110a59f10;
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_130 = puVar11;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = ppuVar2;
    puStack_128 = puVar12;
    _objc_retainBlock();
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_c8 = ppuVar13;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar5;
    puStack_120 = puVar14;
    _objc_retainBlock();
    puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_c0 = ppuVar15;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar17 = ppuVar2;
    puStack_118 = puVar16;
    _objc_retainBlock();
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_b8 = ppuVar17;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar19 = ppuVar4;
    puStack_110 = puVar18;
    _objc_retainBlock();
    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_b0 = ppuVar19;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar21 = ppuVar6;
    puStack_108 = puVar20;
    _objc_retainBlock();
    puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_a8 = ppuVar21;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar23 = ppuVar4;
    puStack_100 = puVar22;
    _objc_retainBlock();
    puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_a0 = ppuVar23;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR___NSConcreteGlobalBlock_110a59f10;
    puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puStack_f8 = puVar24;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar1;
    puStack_f0 = puVar25;
    _objc_retainBlock();
    puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuStack_90 = ppuVar26;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = ppuVar3;
    puStack_e8 = puVar27;
    _objc_retainBlock();
    puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_88 = ppuVar28;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    uVar30 = *(undefined8 *)(param_1 + lVar31);
    *(undefined **)(param_1 + lVar31) = puVar29;
    _objc_release(uVar30);
    _objc_release(ppuVar28);
    _objc_release(puVar27);
    _objc_release(ppuVar26);
    _objc_release(puVar25);
    _objc_release(puVar24);
    _objc_release(ppuVar23);
    _objc_release(puVar22);
    _objc_release(ppuVar21);
    _objc_release(puVar20);
    _objc_release(ppuVar19);
    _objc_release(puVar18);
    _objc_release(ppuVar17);
    _objc_release(puVar16);
    _objc_release(ppuVar15);
    _objc_release(puVar14);
    _objc_release(ppuVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(ppuVar10);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuStack_220);
    _objc_release(ppuStack_228);
    _objc_release(ppuVar5);
    _objc_release(ppuStack_1f0);
    _objc_release(ppuStack_1f8);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_1c8);
    _objc_release(ppuVar3);
    _objc_destroyWeak(auStack_1a0);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_178);
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_150);
    param_1 = auStack_148;
    _objc_destroyWeak();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume(param_1);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1e60();
  if (param_2 != (undefined1 *)0x0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d7cd8; end: 1085d7e47;  */

void FUN_1085d7cd8(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1e60();
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d7e48; end: 1085d7eeb;  */

void FUN_1085d7e48(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085d7eec;
  puStack_48 = &UNK_11088fcb8;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x10);
  uStack_40 = uVar2;
  uStack_38 = param_2;
  _objc_retain(param_2);
  (*pcVar3)(lVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1085d7eec; end: 1085d7efb;  */

void FUN_1085d7eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085d7ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085d7efc; end: 1085d7f9f;  */

void FUN_1085d7efc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1085d7fa0;
  puStack_48 = &UNK_11088fcb8;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x10);
  uStack_40 = uVar2;
  uStack_38 = param_2;
  _objc_retain(param_2);
  (*pcVar3)(lVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1085d7fa0; end: 1085d7fc3;  */

void FUN_1085d7fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085d7fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085d7fc4; end: 1085d818f; -[SCTPresencePillLabel _startTypingAnimation] */

void FUN_1085d7fc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar2);
  puVar3 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
  func_0x00010bf039a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c168400(puVar3);
  _objc_release(puVar4);
  func_0x00010c192d40(0x3fe3333333333333,puVar3);
  uVar8 = 0x7f800000;
  func_0x00010c1eabe0(0x7f800000,puVar3);
  func_0x00010c16d4c0(puVar3);
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar3);
  _objc_release(puVar4);
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bef6c20();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c08c0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010c1d4bc0(0x3f800000,puVar2);
    _objc_release(puVar2);
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
  }
  else {
    func_0x00010c0e8ca0(puVar2);
    uVar9 = uVar8;
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c296f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(uVar8,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar2);
    _objc_release(puVar3);
    func_0x00010c216920(puVar2);
    puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(uVar9,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar3);
    _objc_release(puVar5);
    func_0x00010c216920(puVar3);
    puVar5 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar5);
    _objc_release(puVar6);
    func_0x00010c192d40(0x3fd3333333333333,puVar5);
    puVar6 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar5);
    _objc_release(puVar6);
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    _objc_retain(puVar4);
    func_0x00010c17fb40(puVar1);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar1 = puVar2;
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001085d8508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar4 + 0x20) + 0x10))();
  return;
}



/* Entry: 1085d8190; end: 1085d84ff; -[SCTPresencePillLabel _stopTypingAnimationWithCompletion:] */

void FUN_1085d8190(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(puVar1);
  puVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 == 0) {
    func_0x00010c1d4bc0(0x3f800000,puVar1);
    _objc_release(puVar1);
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
  }
  else {
    func_0x00010c0e8ca0(puVar1);
    uVar6 = param_1;
    _objc_release(puVar1);
    puVar1 = param_2;
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c296f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar2);
    _objc_release(puVar1);
    func_0x00010c216920(puVar2);
    puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df740(uVar6,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar3);
    _objc_release(puVar1);
    func_0x00010c216920(puVar3);
    puVar4 = PTR__OBJC_CLASS___CAAnimationGroup_1126b5710;
    func_0x00010bf039a0(PTR__OBJC_CLASS___CAAnimationGroup_1126b5710);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168400(puVar4);
    _objc_release(puVar1);
    func_0x00010c192d40(0x3fd3333333333333,puVar4);
    puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar4);
    _objc_release(puVar1);
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c08c0e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(param_2);
    puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    _objc_retain(param_4);
    func_0x00010c17fb40(puVar1);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(param_4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    param_2 = puVar2;
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001085d8508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + 0x20) + 0x10))();
  return;
}



/* Entry: 1085d8500; end: 1085d850b;  */

void FUN_1085d8500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085d8508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1085d850c; end: 1085d85ff; -[SCTPresencePillLabel _startPausedAnimation] */

void FUN_1085d850c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110dbf678);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_1111853c0);
  func_0x00010c192d40(0x3fe3333333333333,puVar1);
  func_0x00010c1eabe0(0x7f800000,puVar1);
  func_0x00010c16d4c0(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                      *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085d8600; end: 1085d87f3; -[SCTPresencePillLabel _stopPausedAnimationWithCompletion:] */

void FUN_1085d8600(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b200();
  _objc_release(puVar1);
  if (param_3 == 0) {
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0x3f800000);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
    func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                        &PTR____CFConstantStringClassReference_110dbf678);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar3 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e8ca0();
    func_0x00010c0df740(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1180(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(puVar3);
    func_0x00010c216920(puVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cff40);
    func_0x00010c192d40(0x3fd3333333333333,puVar2);
    puVar1 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
    func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,
                        *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216080(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6c20();
    _objc_release(param_1);
    puVar1 = PTR__OBJC_CLASS___CATransaction_1126b5718;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1085d87f4;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010c17fb40(puVar1,param_2,&puStack_68);
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    _objc_release(lStack_48);
    param_1 = puVar2;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 1085d87f4; end: 1085d87ff;  */

void FUN_1085d87f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001085d87fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1085d8800; end: 1085d880f; -[SCTPresencePillLabel typingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085d8800(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277707c);
}



/* Entry: 1085d8810; end: 1085d8823; -[SCTPresencePillLabel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d8810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777080,0);
  return;
}



/* Entry: 1085d8824; end: 1085d8897; -[SCTPresenceRenderGrapheneLogger initWithGraphene:] */

undefined1 * FUN_1085d8824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fcfa8;
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



/* Entry: 1085d8898; end: 1085d88f3; -[SCTPresenceRenderGrapheneLogger logBitmojiFetchFailed] */

void FUN_1085d8898(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126da530;
  func_0x00010bf1b4a0(PTR_PTR_1126da530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085d88f4; end: 1085d88ff; -[SCTPresenceRenderGrapheneLogger .cxx_destruct] */

void FUN_1085d88f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085d8900; end: 1085d89eb; -[SCTPresenceTypingBubbleView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1085d8900(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fcfb0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c2e90;
    _objc_alloc();
    func_0x00010bf20c00(puVar1);
    func_0x00010c013de0();
    lVar4 = (long)_DAT_112777088;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010be3a940(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 1085d89ec; end: 1085d8a53;  */

void FUN_1085d89ec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d8a54; end: 1085d8ac3; -[SCTPresenceTypingBubbleView setTypingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d8a54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277708c;
  if (*(long *)(param_1 + lVar1) != param_3) {
    if (param_3 == 2) {
      func_0x00010c0f62a0(*(undefined8 *)(param_1 + _DAT_112777088));
    }
    else if (param_3 == 1) {
      func_0x00010c27e2e0();
    }
    else {
      func_0x00010c12aac0();
    }
    *(long *)(param_1 + lVar1) = param_3;
  }
  return;
}



/* Entry: 1085d8ac4; end: 1085d8ac7; -[SCTPresenceTypingBubbleView animateToTypingState:completion:] */

void FUN_1085d8ac4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState_completion__112591658);
  return;
}



/* Entry: 1085d8ac8; end: 1085d8b7f; -[SCTPresenceTypingBubbleView remakeConstraintsAfterAttachingToBitmojiView:upperBodyView:] */

void FUN_1085d8ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1085d8b80;
  puStack_50 = &UNK_11084fc88;
  uStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0bbfe0(param_1,param_2,&puStack_68);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085d8b80; end: 1085d8f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d8b80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0x402c8f5c1a000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777090);
  *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777090) = lVar5;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (**(code **)(lVar4 + 0x10))(0xc037ccccc6000000);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777094);
  *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777094) = lVar5;
  _objc_release(uVar8);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = "d";
  pcVar6 = pcVar7;
  FUN_1085d8f14("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d8f14("d");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = "@";
  pcVar6 = pcVar7;
  FUN_1085d8f14("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1085d8f14("@");
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c113d40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(pcVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085d8f14; end: 1085d929b;  */

void FUN_1085d8f14(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *in_stack_00000000;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x40) && (param_1[1] == 0)) {
    _objc_retain(in_stack_00000000);
    puVar3 = in_stack_00000000;
  }
  else {
    pbVar2 = param_1;
    _strcmp(param_1,"{CGPoint=dd}");
    if ((((int)pbVar2 == 0) || (pbVar2 = param_1, _strcmp(param_1,"{CGSize=dd}"), (int)pbVar2 == 0))
       || (pbVar2 = param_1, _strcmp(param_1,"{UIEdgeInsets=dddd}"), (int)pbVar2 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
      if (bVar1 < 99) {
        if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1085d925c;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_1085d925c;
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1085d925c;
            }
          }
        }
        else if (bVar1 == 0x49) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d925c;
          }
        }
        else if (bVar1 == 0x51) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d925c;
          }
        }
        else {
          if (bVar1 != 0x53) goto LAB_1085d925c;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df8a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d925c;
          }
        }
      }
      else if (bVar1 < 0x69) {
        if (bVar1 == 99) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d925c;
          }
        }
        else if (bVar1 == 100) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d925c;
          }
        }
        else {
          if (bVar1 != 0x66) goto LAB_1085d925c;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740((float)(double)in_stack_00000000,
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1085d925c;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1085d925c;
        }
      }
      else if (bVar1 == 0x71) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1085d925c;
        }
      }
      else {
        if (bVar1 != 0x73) goto LAB_1085d925c;
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1085d925c;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
LAB_1085d925c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085d929c; end: 1085d9347; -[SCTPresenceTypingBubbleView updateConstraintsWithBitmojiState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d929c(long param_1,undefined8 param_2,double *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112777090);
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(*param_3 * 14.279999554157257);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + _DAT_112777094);
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(*param_3 * -23.799999594688416);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085d9348; end: 1085d99d7; -[SCTPresenceTypingBubbleView _initTransitionTable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d9348(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  undefined *puVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  undefined8 uVar33;
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_148,*(undefined8 *)(param_1 + _DAT_112777088));
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1085d99d8;
  puStack_158 = &UNK_11084d688;
  _objc_copyWeak(auStack_150,auStack_148);
  ppuVar1 = &puStack_170;
  _objc_retainBlock();
  puStack_198 = puVar7;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1085d9a50;
  puStack_180 = &UNK_11084d688;
  _objc_copyWeak(auStack_178,auStack_148);
  ppuVar2 = &puStack_198;
  _objc_retainBlock();
  puStack_1c0 = puVar7;
  uStack_1b8 = 0xc2000000;
  uStack_1b0 = 0x1085d9aa4;
  puStack_1a8 = &UNK_11084d688;
  _objc_copyWeak(auStack_1a0,auStack_148);
  ppuVar3 = &puStack_1c0;
  _objc_retainBlock();
  puStack_1e8 = puVar7;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_1085d9af8;
  puStack_1d0 = &UNK_11084d688;
  _objc_copyWeak(auStack_1c8,auStack_148);
  ppuVar4 = &puStack_1e8;
  _objc_retainBlock();
  puStack_210 = puVar7;
  uStack_208 = 0xc2000000;
  uStack_200 = 0x1085d9b70;
  puStack_1f8 = &UNK_11084d688;
  _objc_copyWeak(auStack_1f0,auStack_148);
  ppuVar5 = &puStack_210;
  _objc_retainBlock();
  puStack_238 = puVar7;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_1085d9be8;
  puStack_220 = &UNK_11084d688;
  puVar32 = auStack_148;
  _objc_copyWeak(auStack_218);
  ppuVar6 = &puStack_238;
  _objc_retainBlock();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar1;
  puStack_140 = puVar7;
  _objc_retainBlock();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_e0 = ppuVar8;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar6;
  puStack_138 = puVar9;
  _objc_retainBlock();
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_d8 = ppuVar10;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR___NSConcreteGlobalBlock_110a59f30;
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_130 = puVar11;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar5;
  puStack_128 = puVar12;
  _objc_retainBlock();
  puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_c8 = ppuVar13;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar2;
  puStack_120 = puVar14;
  _objc_retainBlock();
  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_c0 = ppuVar15;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = ppuVar4;
  puStack_118 = puVar16;
  _objc_retainBlock();
  puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_b8 = ppuVar17;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar19 = ppuVar5;
  puStack_110 = puVar18;
  _objc_retainBlock();
  puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_b0 = ppuVar19;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar21 = ppuVar3;
  puStack_108 = puVar20;
  _objc_retainBlock();
  puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_a8 = ppuVar21;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar23 = ppuVar4;
  puStack_100 = puVar22;
  _objc_retainBlock();
  puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_a0 = ppuVar23;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR___NSConcreteGlobalBlock_110a59f30;
  puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_f8 = puVar24;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar26 = ppuVar1;
  puStack_f0 = puVar25;
  _objc_retainBlock();
  puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuStack_90 = ppuVar26;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar28 = ppuVar6;
  puStack_e8 = puVar27;
  _objc_retainBlock();
  puVar29 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  ppuStack_88 = ppuVar28;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = *(undefined8 *)(param_1 + _DAT_112777098);
  *(undefined **)(param_1 + _DAT_112777098) = puVar29;
  _objc_release(uVar33);
  _objc_release(ppuVar28);
  _objc_release(puVar27);
  _objc_release(ppuVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(ppuVar23);
  _objc_release(puVar22);
  _objc_release(ppuVar21);
  _objc_release(puVar20);
  _objc_release(ppuVar19);
  _objc_release(puVar18);
  _objc_release(ppuVar17);
  _objc_release(puVar16);
  _objc_release(ppuVar15);
  _objc_release(puVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(ppuVar10);
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_destroyWeak(auStack_218);
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_1f0);
  _objc_release(ppuVar4);
  _objc_destroyWeak(auStack_1c8);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_1a0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_178);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_150);
  puVar30 = auStack_148;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(puVar32);
  puVar31 = puVar30 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar31 == (undefined1 *)0x0) {
    if (puVar32 != (undefined1 *)0x0) {
      (**(code **)(puVar32 + 0x10))(puVar32);
    }
  }
  else {
    puVar30 = puVar30 + 0x20;
    _objc_loadWeakRetained(puVar30);
    func_0x00010c24dd60();
    _objc_release(puVar30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar32);
  return;
}



/* Entry: 1085d99d8; end: 1085d9a4f;  */

void FUN_1085d99d8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c24dd60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d9a50; end: 1085d9af7;  */

void FUN_1085d9a50(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0f5bc0();
  _objc_release(param_1);
  if (param_2 != 0) {
    (**(code **)(param_2 + 0x10))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d9af8; end: 1085d9be7;  */

void FUN_1085d9af8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c122100();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085d9be8; end: 1085d9cdb;  */

void FUN_1085d9be8(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (param_2 != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
  }
  else {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010c24dd60(lVar1);
    _objc_release(lVar1);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1085d9cdc; end: 1085d9d27;  */

void FUN_1085d9cdc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0f5bc0();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085d9d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1085d9d28; end: 1085d9d3b;  */

void FUN_1085d9d28(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085d9d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2);
    return;
  }
  return;
}



/* Entry: 1085d9d3c; end: 1085d9e53; -[SCTPresenceTypingBubbleView _transitionToState:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d9d3c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  lVar4 = (long)_DAT_11277708c;
  if (*(long *)(param_1 + lVar4) == param_3) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + _DAT_112777098);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
    if (lVar3 == 0) {
      _objc_opt_class();
      func_0x00010c11f020(puVar1);
    }
    *(long *)(param_1 + lVar4) = param_3;
    (**(code **)(lVar3 + 0x10))(lVar3,param_4);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1085d9e54; end: 1085d9e63; -[SCTPresenceTypingBubbleView typingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1085d9e54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277708c);
}



/* Entry: 1085d9e64; end: 1085d9ec3; -[SCTPresenceTypingBubbleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085d9e64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777094,0);
  _objc_storeStrong(param_1 + _DAT_112777090,0);
  _objc_storeStrong(param_1 + _DAT_112777098,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777088,0);
  return;
}



/* Entry: 1085d9ec4; end: 1085da5c7;  */

undefined1 * FUN_1085d9ec4(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *unaff_x27;
  long lVar16;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  long lStack_4e0;
  undefined *puStack_4d8;
  undefined1 **ppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined auStack_3f0 [384];
  long lStack_270;
  undefined **ppuStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSCountedSet_1126ba498;
  _objc_opt_new();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_1);
  puStack_1f8 = param_1;
  func_0x00010bf52a60();
  if (param_1 != (undefined *)0x0) {
    lVar10 = *plStack_1a0;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(puStack_1f8);
        }
        unaff_x24 = PTR_PTR_1126b2c18;
        func_0x00010bfb1120();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b2c18;
        func_0x00010c22d940(PTR_PTR_1126b2c18);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        func_0x00010befa120(puVar2);
        _objc_release(puVar13);
        _objc_release(unaff_x24);
        unaff_x25 = unaff_x25 + 1;
      } while (param_1 != unaff_x25);
      param_1 = puStack_1f8;
      func_0x00010bf52a60();
    } while (param_1 != (undefined *)0x0);
  }
  puVar13 = puStack_1f8;
  _objc_release(puStack_1f8);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puStack_200 = puVar11;
  _objc_retain(puVar13);
  func_0x00010bf52a60();
  if (puVar13 != (undefined *)0x0) {
    lVar10 = *plStack_1e0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar10) {
          _objc_enumerationMutation(puStack_1f8);
        }
        unaff_x24 = *(undefined **)(lStack_1e8 + (long)puVar11 * 8);
        unaff_x25 = PTR_PTR_1126b2c18;
        func_0x00010bfb1120();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = PTR_PTR_1126b2c18;
        func_0x00010c22d940();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = puVar1;
        func_0x00010bf52b00();
        func_0x00010bf52b00();
        func_0x00010befa120(puStack_200);
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        puVar11 = puVar11 + 1;
      } while (puVar13 != puVar11);
      puVar13 = puStack_1f8;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined *)0x0);
  }
  puVar4 = puStack_1f8;
  _objc_release(puStack_1f8);
  puVar11 = puStack_200;
  puVar13 = puStack_200;
  func_0x00010bf51e00();
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuStack_260 = &PTR_PTR_1126b2000;
    puStack_230 = puVar11;
    puStack_218 = puVar4;
    uStack_208 = 0x1085da194;
    lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_258 = unaff_x27;
    puStack_250 = unaff_x26;
    puStack_248 = unaff_x25;
    puStack_240 = unaff_x24;
    puStack_238 = puVar13;
    puStack_228 = puVar2;
    puStack_220 = puVar1;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(param_2);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(puVar3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    lStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    plStack_420 = (long *)0x0;
    uStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    uStack_400 = 0;
    _objc_retain(puVar3);
    puVar2 = puVar3;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar10 = *plStack_420;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_420 != lVar10) {
            _objc_enumerationMutation(puVar3);
          }
          uVar12 = *(undefined8 *)(lStack_428 + (long)puVar13 * 8);
          func_0x00010c2923e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(uVar12);
          puVar13 = puVar13 + 1;
        } while (puVar2 != puVar13);
        puVar2 = puVar3;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    _objc_retain(param_2);
    lVar10 = param_2;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      lVar16 = *plStack_460;
      do {
        lVar14 = 0;
        do {
          if (*plStack_460 != lVar16) {
            _objc_enumerationMutation(param_2);
          }
          uVar12 = *(undefined8 *)(lStack_468 + lVar14 * 8);
          func_0x00010c2923e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          if (puVar13 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(puVar13);
          lVar14 = lVar14 + 1;
        } while (lVar10 != lVar14);
        lVar10 = param_2;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(param_2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puVar2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_498 = 0;
    plStack_4a0 = (long *)0x0;
    uStack_488 = 0;
    uStack_490 = 0;
    uStack_478 = 0;
    uStack_480 = 0;
    _objc_retain(puVar2);
    puVar11 = auStack_3f0;
    puVar13 = puVar2;
    func_0x00010bf52a60();
    if (puVar13 != (undefined *)0x0) {
      lVar10 = *plStack_4a0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_4a0 != lVar10) {
            _objc_enumerationMutation(puVar2);
          }
          uVar12 = *(undefined8 *)(lStack_4a8 + (long)puVar11 * 8);
          func_0x00010bf85d80(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar12);
          puVar11 = puVar11 + 1;
        } while (puVar13 != puVar11);
        puVar11 = auStack_3f0;
        puVar13 = puVar2;
        func_0x00010bf52a60();
      } while (puVar13 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puVar15 = puVar4;
    FUN_1085d9ec4();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar5 = puVar2;
    puStack_4b8 = puVar15;
    func_0x00010bf529e0();
    func_0x00010bf71fe0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar2;
    func_0x00010bf529e0();
    if (puVar15 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        puVar6 = puVar2;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010c075920();
        if ((int)puVar11 == 0) {
          puVar7 = puStack_4b8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar7 = puVar6;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar8 = puVar6;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        puVar11 = puVar8;
        func_0x00010c1d0640(puVar13);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        puVar15 = puVar15 + 1;
        puVar6 = puVar2;
        func_0x00010bf529e0();
      } while (puVar15 < puVar6);
    }
    _objc_release(puStack_4b8);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_2);
    puVar4 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
      ___stack_chk_fail();
      ppuVar9 = &puStack_500;
      pcStack_4c8 = FUN_1085da5c8;
      puStack_4f0 = puVar2;
      puStack_4e8 = puVar1;
      lStack_4e0 = param_2;
      puStack_4d8 = puVar3;
      ppuStack_4d0 = &puStack_210;
      _objc_retain(puVar5);
      _objc_retain(puVar11);
      puStack_4f8 = PTR_PTR_1126fcfb8;
      puStack_500 = puVar4;
      _objc_msgSendSuper2(&puStack_500,PTR_s_init_1125d9248);
      if (ppuVar9 != (undefined **)0x0) {
        _objc_retain(puVar5);
        uVar12 = *(undefined8 *)((long)ppuVar9 + 8);
        *(undefined **)((long)ppuVar9 + 8) = puVar5;
        _objc_release(uVar12);
        _objc_retain(puVar11);
        uVar12 = *(undefined8 *)((long)ppuVar9 + 0x10);
        *(undefined **)((long)ppuVar9 + 0x10) = puVar11;
        _objc_release(uVar12);
      }
      _objc_release(puVar11);
      _objc_release(puVar5);
      return (undefined1 *)ppuVar9;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return puVar13;
}



/* Entry: 1085da5c8; end: 1085da66b; -[SCPresenceSessionImpl initWithPlatformPresenceSession:initialRemoteUserIds:] */

undefined1 *
FUN_1085da5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcfb8;
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



/* Entry: 1085da66c; end: 1085da673; -[SCPresenceSessionImpl chatVisible] */

void FUN_1085da66c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf37a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_chatVisible_1125ab848);
  return;
}



/* Entry: 1085da674; end: 1085da67b; -[SCPresenceSessionImpl chatHidden] */

void FUN_1085da674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf367f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_chatHidden_1125ab3a0);
  return;
}



/* Entry: 1085da67c; end: 1085da683; -[SCPresenceSessionImpl startPeeking] */

void FUN_1085da67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_startPeeking_112671978);
  return;
}



/* Entry: 1085da684; end: 1085da68b; -[SCPresenceSessionImpl chatMediaVisible] */

void FUN_1085da684(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf36dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_chatMediaVisible_1125ab518);
  return;
}



/* Entry: 1085da68c; end: 1085da693; -[SCPresenceSessionImpl extendChatMediaVisible] */

void FUN_1085da68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_extendChatMediaVisible_1125c5028);
  return;
}



/* Entry: 1085da694; end: 1085da69b; -[SCPresenceSessionImpl replyCameraVisible] */

void FUN_1085da694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c131bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_replyCameraVisible_11262a108);
  return;
}



/* Entry: 1085da69c; end: 1085da6a3; -[SCPresenceSessionImpl processTypingActivity:withType:] */

void FUN_1085da69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1155d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_processTypingActivity_typingActi_112622f90);
  return;
}



/* Entry: 1085da6a4; end: 1085da86f; -[SCPresenceSessionImpl getState] */

void FUN_1085da6a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0899e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar6 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    if (lVar3 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar6);
          }
          puVar4 = PTR_PTR_1126da538;
          _objc_alloc(PTR_PTR_1126da538);
          func_0x00010c05b8a0();
          func_0x00010befa120(puVar2,param_2,puVar4);
          _objc_release(puVar4);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar6;
        func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar6);
    puVar4 = PTR_PTR_1126da540;
    _objc_alloc(PTR_PTR_1126da540);
    puVar5 = puVar2;
    func_0x00010bf51e00(puVar2);
    func_0x00010c03e060(puVar4,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1085da870; end: 1085da873; -[SCPresenceSessionImpl updateParticipants:] */

void FUN_1085da870(void)

{
  return;
}



/* Entry: 1085da874; end: 1085da87b; -[SCPresenceSessionImpl dispose] */

void FUN_1085da874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1085da87c; end: 1085da8ab; -[SCPresenceSessionImpl .cxx_destruct] */

void FUN_1085da87c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085da8ac; end: 1085da997; -[SCPresenceVisibilityObserver initWithCurrentPageTracker:applicationLifecycleEvents:configProvider:] */

undefined1 *
FUN_1085da8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fcfc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    func_0x00010bec8000(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085da998; end: 1085da99f; -[SCPresenceVisibilityObserver visibilityEventObservable] */

void FUN_1085da998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1085da9a0; end: 1085dac6f; -[SCPresenceVisibilityObserver _subscribeToPageTracker:appLifecycleEvents:] */

void FUN_1085da9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae820;
  _objc_alloc();
  func_0x00010c060400();
  uVar3 = param_4;
  func_0x00010bf72840(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1085dac70;
  puStack_80 = &UNK_11088b6c8;
  _objc_retain(puVar2);
  uVar4 = uVar3;
  puStack_78 = puVar2;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c2a6a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1085dac80;
  puStack_a8 = &UNK_11088b6c8;
  _objc_retain(puVar2);
  uVar4 = uVar3;
  puStack_a0 = puVar2;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf75dc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x1085dac90;
  puStack_d0 = &UNK_11088b6c8;
  _objc_retain(puVar2);
  uVar4 = uVar3;
  puStack_c8 = puVar2;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_f0,param_1);
  uVar3 = param_3;
  func_0x00010bf5f7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_100,auStack_f0);
  uVar5 = uVar4;
  uStack_f8 = param_2;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puStack_c8);
  _objc_release(puStack_a0);
  _objc_release(puStack_78);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085dac70; end: 1085dac9f;  */

void FUN_1085dac70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 1085daca0; end: 1085dad47;  */

void FUN_1085daca0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    lVar4 = lVar3;
    func_0x00010c0dfd40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    func_0x00010c0c02c0(lVar4);
    _objc_release(lVar4);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1085dad48; end: 1085dae47;  */

void FUN_1085dad48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    func_0x00010c0c02c0(uVar1);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085dae48; end: 1085dae67;  */

void FUN_1085dae48(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleNewPage_isForeground__112568d10,param_2,
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 1085dae68; end: 1085daf3b; -[SCPresenceVisibilityObserver _handleNewPage:isForeground:] */

/* WARNING: Possible PIC construction at 0x0001085daf00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001085daf04) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1085dae68(undefined **param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  if ((param_4 & 1) == 0) {
    puVar1 = param_1[2];
  }
  else {
    ppuVar2 = param_1;
    func_0x00010be3eda0();
    if ((int)ppuVar2 != 0) {
      puVar1 = param_1[2];
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cff70;
      goto code_r0x00010c0d9840;
    }
    ppuVar2 = param_1;
    func_0x00010be3ed60();
    if ((int)ppuVar2 != 0) {
      puVar1 = param_1[2];
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cff88;
      goto code_r0x00010c0d9840;
    }
    ppuVar2 = param_1;
    func_0x00010be0d5a0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 != (undefined **)0x0) {
      puVar1 = param_1[2];
      goto code_r0x00010c0d9840;
    }
    ppuVar2 = param_1;
    func_0x00010be3e9c0();
    puVar1 = param_1[2];
    if ((int)ppuVar2 != 0) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cffa0;
      goto code_r0x00010c0d9840;
    }
  }
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cff58;
code_r0x00010c0d9840:
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_next__112614028,ppuVar2);
  return;
}



/* Entry: 1085daf3c; end: 1085dafa3; -[SCPresenceVisibilityObserver _isCameraPage:] */

undefined * FUN_1085daf3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfda7c0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    func_0x00010bfda7c0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e3ddf8);
  }
  else {
    puVar2 = (undefined *)0x1;
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1085dafa4; end: 1085dafaf; -[SCPresenceVisibilityObserver _isChatPage:] */

bool FUN_1085dafa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0x27;
}



/* Entry: 1085dafb0; end: 1085dafbb; -[SCPresenceVisibilityObserver _isChatMediaPage:] */

bool FUN_1085dafb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0xb7;
}



/* Entry: 1085dafbc; end: 1085db06b; -[SCPresenceVisibilityObserver _isExtendChatMediaPage:] */

bool FUN_1085dafbc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfda7c0();
  if ((((((ulong)puVar3 & 1) == 0) &&
       (puVar3 = puVar2,
       func_0x00010bfda7c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e9c0b8),
       ((ulong)puVar3 & 1) == 0)) &&
      (puVar3 = puVar2,
      func_0x00010c0720c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e30ab8),
      ((ulong)puVar3 & 1) == 0)) &&
     (puVar3 = puVar2,
     func_0x00010bfda7c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110e1cc58),
     ((ulong)puVar3 & 1) == 0)) {
    puVar3 = puVar2;
    func_0x00010c11f440(puVar2,param_2,&PTR____CFConstantStringClassReference_110dfb5f8,1);
    bVar1 = puVar3 != (undefined *)0x7fffffffffffffff;
  }
  else {
    bVar1 = true;
  }
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 1085db06c; end: 1085db0bf; -[SCPresenceVisibilityObserver _extendChatMediaEventForPage:] */

undefined ** FUN_1085db06c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar2 = param_1;
  func_0x00010be40480();
  if ((int)lVar2 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    func_0x00010be0d5c0();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cffb8;
    if (param_1 != 2) {
      ppuVar1 = (undefined **)0x0;
    }
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cff88;
    if (param_1 != 1) {
      ppuVar3 = ppuVar1;
    }
  }
  return ppuVar3;
}


