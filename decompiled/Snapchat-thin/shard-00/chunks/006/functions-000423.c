/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008c0d84; end: 1008c0db3; -[SIGNavigationBarView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1008c0d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  
  func_0x000107c3ec60();
  auVar1._8_8_ = *(undefined8 *)(param_4 + _DAT_1127950c4);
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 1008c0db4; end: 1008c0dc3; -[SIGContainerPresentationView footer:heightWillChangeTo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c0db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19e6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278c77c),PTR_s_setFooterHeight__1126453c8);
  return;
}



/* Entry: 1008c0dc4; end: 1008c0f4b; -[SIGContainerView setFooterHeight:] */

/* WARNING: Possible PIC construction at 0x0001008c0e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c0e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c0e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c0eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c0efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c0f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c0f00) */
/* WARNING: Removing unreachable block (ram,0x0001008c0ebc) */
/* WARNING: Removing unreachable block (ram,0x0001008c0ec0) */
/* WARNING: Removing unreachable block (ram,0x0001008c0ed0) */
/* WARNING: Removing unreachable block (ram,0x0001008c0e78) */
/* WARNING: Removing unreachable block (ram,0x0001008c0e54) */
/* WARNING: Removing unreachable block (ram,0x0001008c0e24) */
/* WARNING: Removing unreachable block (ram,0x0001008c0f28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c0dc4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278c7c0) = param_1;
  param_2 = param_2 + _DAT_11278c7b8;
  func_0x000107c61148(param_2);
  func_0x00010058dcdc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008c0f4c; end: 1008c0fc3;  */

void FUN_1008c0f4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  puVar1 = &UNK_10f72704f;
  FUN_1000ba800(&UNK_10f72704f);
  func_0x000107c5a898(*(undefined8 *)(param_1 + 0x20));
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008c0fc4; end: 1008c0fc7; -[SIGAnimationlessPresentationStyle setupInContext:] */

void FUN_1008c0fc4(void)

{
  return;
}



/* Entry: 1008c0fc8; end: 1008c0fcf; -[SIGAnimationlessPresentationStyle completionCurve] */

undefined8 FUN_1008c0fc8(void)

{
  return 3;
}



/* Entry: 1008c0fd0; end: 1008c11db; -[SCPresentationInteractionControllerImplementation initWithAnimator:style:context:interactionCompletion:completion:] */

undefined8 *
FUN_1008c0fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = &UNK_10f726c19;
  FUN_1000ba800(&UNK_10f726c19);
  puStack_68 = PTR_PTR_112705600;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    func_0x000107c61170(uVar3);
    func_0x000107c61144(auStack_78,puVar2);
    uVar3 = puVar2[1];
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c61174(param_7);
    func_0x000107c3d62c(uVar3);
    lVar4 = puVar2[1];
    func_0x000107c5bcc0();
    if (lVar4 == 0) {
      func_0x000107c4e45c(puVar2[1]);
    }
    func_0x000107c61174(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    func_0x000107c61170(uVar3);
    uVar3 = param_6;
    func_0x000107c40794();
    uVar5 = puVar2[4];
    puVar2[4] = uVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_7);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar2;
}



/* Entry: 1008c11dc; end: 1008c123f;  */

void FUN_1008c11dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000ba800(&UNK_10f727109);
  func_0x000107c5cfe0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008c1240; end: 1008c134f; -[SCPresentationContextImplementation triggerAnimationBlocks:] */

void FUN_1008c1240(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar5 = *(long *)(param_1 + 0x60);
  func_0x000107c61174(lVar5);
  lVar2 = lVar5;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar5);
      }
      param_2 = param_3;
      (**(code **)(*(long *)(lVar6 * 8) + 0x10))(*(long *)(lVar6 * 8),param_3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  func_0x000107c4379c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_performAnimationsWithStyle__11261baf0,param_2);
  return;
}



/* Entry: 1008c1350; end: 1008c137b;  */

void FUN_1008c1350(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4379c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_performAnimationsWithStyle__11261baf0,param_2);
  return;
}



/* Entry: 1008c137c; end: 1008c1383; -[SCPresentationContextImplementation footerAnimationStyle] */

undefined8 FUN_1008c137c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1008c1384; end: 1008c143b; -[SIGFooter performAnimationsWithStyle:] */

/* WARNING: Possible PIC construction at 0x0001008c13d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c1424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c1428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1384(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112794900);
    func_0x000107c4a76c(uVar1);
    func_0x000107c61180();
    func_0x000107c3cb78(param_1,param_2,uVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112794904);
    func_0x000107c4a76c(uVar2);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11279490c);
    func_0x000107c4a76c(uVar1);
    func_0x000107c61180();
    func_0x000107c3c108(param_1,param_2,uVar2,uVar1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c143c; end: 1008c15db; -[SIGFooter _performTransitionAnimationToItemConfig:fromItemConfig:footerAnimationStyle:] */

/* WARNING: Possible PIC construction at 0x0001008c1494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c14f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c15b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c15c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c156c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c15c4) */
/* WARNING: Removing unreachable block (ram,0x0001008c15b4) */
/* WARNING: Removing unreachable block (ram,0x0001008c14f4) */
/* WARNING: Removing unreachable block (ram,0x0001008c1498) */
/* WARNING: Removing unreachable block (ram,0x0001008c1544) */
/* WARNING: Removing unreachable block (ram,0x0001008c14a8) */
/* WARNING: Removing unreachable block (ram,0x0001008c1570) */
/* WARNING: Removing unreachable block (ram,0x0001008c15bc) */
/* WARNING: Removing unreachable block (ram,0x0001008c1574) */
/* WARNING: Removing unreachable block (ram,0x0001008c15ac) */

void FUN_1008c143c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c4a7c4(param_3);
  func_0x000107c61180();
  func_0x000107c4a7c4(param_4);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008c15dc; end: 1008c15e3; -[SIGFooterItemConfig enableDarkModeAlways] */

undefined1 FUN_1008c15dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 1008c15e4; end: 1008c1703; -[SIGNavigationBarView performAnimations:context:enableDarkModeAlways:] */

void FUN_1008c15e4(undefined8 param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_4);
  puVar2 = PTR_PTR_1126ce598;
  func_0x000107c61158(PTR_PTR_1126ce598);
  uVar3 = param_4;
  func_0x000107c6115c(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  if (uVar1 != 0) {
    if (param_3 != 0) {
      func_0x000107c3cb94(param_1);
    }
    uVar3 = param_4;
    func_0x000107c5cf54();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (uVar3 == 0) {
      func_0x000107c526c0((double)param_3,param_1);
    }
    else {
      func_0x000107c61174(param_4);
      func_0x000107c3dcc0(0x3ff0000000000000,0,puVar2);
      func_0x000107c61170(uVar1);
    }
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1008c1704; end: 1008c1927; -[SIGNavigationBarView _updateButtonsWithEnableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1704(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + _DAT_1127950ec);
  func_0x000107c61174(lVar7);
  uVar5 = (uint)&uStack_130;
  lVar1 = lVar7;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar10) {
          func_0x000107c61128(lVar7);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar8 * 8);
        if (param_3 == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = *(byte *)(param_1 + _DAT_1127950dc);
        }
        uVar2 = uVar9;
        func_0x000107c4a764(uVar9);
        func_0x000107c61180();
        uVar3 = uVar2;
        func_0x000107c5de64();
        func_0x000107c61180();
        func_0x000107c544ac();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        func_0x000107c544ac(uVar9);
        uVar2 = uVar9;
        func_0x000107c4a764();
        func_0x000107c61180();
        uVar3 = uVar2;
        func_0x000107c5de64();
        func_0x000107c61180();
        uVar4 = uVar3;
        func_0x000107c61164();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        if ((uVar4 & 1) != 0) {
          uVar2 = uVar9;
          func_0x000107c4a764(uVar9);
          func_0x000107c61180();
          uVar3 = uVar2;
          func_0x000107c5de64();
          func_0x000107c61180();
          if (((*(byte *)(param_1 + _DAT_1127950f8) & 1) == 0) && (((bVar6 ^ 1) & 1) == 0)) {
            FUN_10052bb84();
          }
          func_0x000107c55248(uVar3);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar2);
        }
        func_0x000107c5d67c(uVar9);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      uVar5 = (uint)&uStack_130;
      lVar1 = lVar7;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  if (*(byte *)(lVar7 + _DAT_11279503c) == uVar5) {
    return;
  }
  *(char *)(lVar7 + _DAT_11279503c) = (char)uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010c1fae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1008c1928; end: 1008c195f; -[SIGNavigationBarButtonImageView setEnableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1928(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11279503c) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11279503c) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1fae10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSelected_overrideTintColor__11265c5a8,
             *(undefined1 *)(param_1 + _DAT_112795038),*(undefined8 *)(param_1 + _DAT_112795040));
  return;
}



/* Entry: 1008c1960; end: 1008c1a13; -[SIGNavigationBarButton setEnableDarkModeAlways:] */

/* WARNING: Possible PIC construction at 0x0001008c19d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c19dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1960(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + _DAT_112794ffc) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112794ffc) = (char)param_3;
  uVar2 = 0xffffffff8000006b;
  if (param_3 == 0) {
    uVar2 = 0x6b;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar2);
  func_0x000107c61180();
  func_0x000107c52b50(*(undefined8 *)(param_1 + _DAT_112794fe0),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008c1a14; end: 1008c1a2f; -[SIGNavigationBarButtonImageView setIgnoreThemeColors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1a14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11279505c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010be940f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetTintColor_1125829d8);
  return;
}



/* Entry: 1008c1a30; end: 1008c1a33; -[SIGAnimationlessPresentationStyle performAnimationsInContext:] */

void FUN_1008c1a30(void)

{
  return;
}



/* Entry: 1008c1a34; end: 1008c1ac7; -[SCPresentationInteractionControllerImplementation completeTransition:animated:] */

/* WARNING: Possible PIC construction at 0x0001008c1a98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c1a9c) */
/* WARNING: Removing unreachable block (ram,0x0001000e2a84) */

void FUN_1008c1a34(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  
  FUN_1000ba800(&UNK_10f726ce4);
  if ((param_4 & 1) == 0) {
    func_0x000107c3ad70(param_1,param_2,param_3);
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x000107c57ee4(*(undefined8 *)(param_1 + 8),param_2,1);
    }
    func_0x000107c5ba5c(*(undefined8 *)(param_1 + 8));
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c1ac8; end: 1008c1b5b; -[SCPresentationInteractionControllerImplementation _animatorFinishAnimation:] */

void FUN_1008c1ac8(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_1000ba800(&UNK_10f726d29);
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c5bcc0();
  if (lVar2 == 0) {
    func_0x000107c4e45c(*(undefined8 *)(param_1 + 8));
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c5bcc0();
  if (lVar2 == 1) {
    func_0x000107c5be08(*(undefined8 *)(param_1 + 8),param_2,0);
  }
  func_0x000107c43590(*(undefined8 *)(param_1 + 8),param_2,param_3 ^ 1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008c1b5c; end: 1008c1c13;  */

/* WARNING: Possible PIC construction at 0x0001008c1bd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c1bdc) */
/* WARNING: Removing unreachable block (ram,0x0001000e2a84) */

void FUN_1008c1b5c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_1000ba800(&UNK_10f72712c);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c5cfe8();
    func_0x000107c3b0c0(lVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2 == 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1008c1c14; end: 1008c1cab; -[SCPresentationContextImplementation triggerCompletionBlocks:complete:] */

/* WARNING: Possible PIC construction at 0x0001008c1c90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c1c94) */

void FUN_1008c1c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1008c1cac;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c4e5fc(puVar1,param_2,&puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_40);
  return;
}



/* Entry: 1008c1cac; end: 1008c1daf;  */

/* WARNING: Possible PIC construction at 0x0001008c1d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c1d7c) */
/* WARNING: Removing unreachable block (ram,0x0001008c1dac) */
/* WARNING: Removing unreachable block (ram,0x0001008c1dd8) */
/* WARNING: Removing unreachable block (ram,0x0001008c1de8) */
/* WARNING: Removing unreachable block (ram,0x0001008c1d94) */

void FUN_1008c1cac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x000107c61174(lVar3);
  lVar2 = lVar3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar3);
      }
      (**(code **)(*(long *)(lVar4 * 8) + 0x10))
                (*(long *)(lVar4 * 8),*(undefined8 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x30));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = lVar3;
    func_0x000107c4080c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1008c1db0; end: 1008c1dfb;  */

void FUN_1008c1db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 != 0) {
    func_0x000107c3b5d8(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1008c1dfc; end: 1008c1f03; -[SIGContainerPresentationView _endModalPresentation:completed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1dfc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = (long)_DAT_11278c780;
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_70 = uVar1;
  uStack_68 = uVar3;
  uStack_60 = uVar7;
  uStack_58 = uVar8;
  uStack_50 = uVar2;
  uStack_48 = uVar6;
  func_0x000107c5a03c(*(undefined8 *)(param_1 + lVar4),param_2,&uStack_70);
  lVar5 = (long)_DAT_11278c77c;
  uStack_70 = uVar1;
  uStack_68 = uVar3;
  uStack_60 = uVar7;
  uStack_58 = uVar8;
  uStack_50 = uVar2;
  uStack_48 = uVar6;
  func_0x000107c5a03c(*(undefined8 *)(param_1 + lVar5),param_2,&uStack_70);
  if ((param_4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c61174(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x000107c61174(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c550d8(*(undefined8 *)(param_1 + lVar4),param_2,1);
  func_0x000107c4ee80(*(undefined8 *)(param_1 + lVar4),param_2,0);
  func_0x000107c3ec8c(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11278c794));
  if (*(long *)(param_1 + _DAT_11278c788) != 0) {
    func_0x000107c3ec8c(param_1);
  }
  return;
}



/* Entry: 1008c1f04; end: 1008c1f0b;  */

void FUN_1008c1f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf959b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endTransitionComplete__1125c3010);
  return;
}



/* Entry: 1008c1f0c; end: 1008c204f; -[SIGFooter endTransitionComplete:] */

/* WARNING: Possible PIC construction at 0x0001008c1f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c1fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c1fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c1fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c1fd4) */
/* WARNING: Removing unreachable block (ram,0x0001008c1fb8) */
/* WARNING: Removing unreachable block (ram,0x0001008c1f80) */
/* WARNING: Removing unreachable block (ram,0x0001008c1f94) */
/* WARNING: Removing unreachable block (ram,0x0001008c1ff0) */
/* WARNING: Removing unreachable block (ram,0x0001008c2004) */
/* WARNING: Removing unreachable block (ram,0x0001008c2010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c1f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112794904);
  func_0x000107c4a76c(uVar1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11279490c);
  func_0x000107c4a76c(uVar2);
  func_0x000107c61180();
  func_0x000107c3b5e0(param_1,param_2,uVar1,uVar2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1008c2050; end: 1008c22cf; -[SIGFooter _endTransitionToItemConfig:fromItemConfig:complete:] */

/* WARNING: Possible PIC construction at 0x0001008c20ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c21e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c22a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c22b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c22b8) */
/* WARNING: Removing unreachable block (ram,0x0001008c22a8) */
/* WARNING: Removing unreachable block (ram,0x0001008c2258) */
/* WARNING: Removing unreachable block (ram,0x0001008c2268) */
/* WARNING: Removing unreachable block (ram,0x0001008c221c) */
/* WARNING: Removing unreachable block (ram,0x0001008c22b0) */
/* WARNING: Removing unreachable block (ram,0x0001008c222c) */
/* WARNING: Removing unreachable block (ram,0x0001008c21e8) */
/* WARNING: Removing unreachable block (ram,0x0001008c2114) */
/* WARNING: Removing unreachable block (ram,0x0001008c20b0) */
/* WARNING: Removing unreachable block (ram,0x0001008c216c) */
/* WARNING: Removing unreachable block (ram,0x0001008c20c0) */
/* WARNING: Removing unreachable block (ram,0x0001008c2198) */
/* WARNING: Removing unreachable block (ram,0x0001008c21f0) */
/* WARNING: Removing unreachable block (ram,0x0001008c21fc) */
/* WARNING: Removing unreachable block (ram,0x0001008c219c) */
/* WARNING: Removing unreachable block (ram,0x0001008c21b4) */
/* WARNING: Removing unreachable block (ram,0x0001008c21e0) */

void FUN_1008c2050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c4a7c4(param_3);
  func_0x000107c61180();
  func_0x000107c4a7c4(param_4);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008c22d0; end: 1008c2517; -[SIGNavigationBarView endTransition:transitionIn:complete:context:enableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1008c22d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             uint param_6,uint param_7,ulong param_8)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_8);
  if (param_6 == param_7) {
    uVar9 = 0x3ff0000000000000;
    func_0x000107c526c0(0x3ff0000000000000,param_3);
    puVar2 = PTR_PTR_1126ce598;
    func_0x000107c61174(param_8);
    func_0x000107c61158(puVar2);
    uVar3 = param_8;
    func_0x000107c6115c(param_8,puVar2);
    uVar4 = param_8;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    func_0x000107c61174(uVar4);
    func_0x000107c61170(param_8);
    if (uVar4 == 0) goto LAB_1008c24cc;
    uVar4 = param_8;
    func_0x000107c51c70(param_8);
    func_0x000107c61180();
    func_0x000107c3cb8c(param_3);
    func_0x000107c61170(uVar4);
    func_0x000107c3cb94(param_3);
    if ((param_6 & 1) == 0) {
      func_0x000107c3c428(param_3);
    }
    func_0x000107c61170(param_8);
  }
  else {
    func_0x000107c413a0(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c3c42c(param_3);
    func_0x000107c4ff34(param_3);
  }
  uVar9 = 0;
  lVar7 = *(long *)(param_3 + _DAT_1127950f4);
  func_0x000107c61174(lVar7);
  lVar5 = lVar7;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar7);
      }
      uVar9 = *(undefined8 *)(param_3 + _DAT_1127950d4);
      func_0x000107c5378c(uVar9,*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = lVar7;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar7);
  func_0x000107c550d8(*(undefined8 *)(param_3 + _DAT_1127950f0));
LAB_1008c24cc:
  func_0x000107c61170(param_8);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = uVar9;
    return auVar10;
  }
  func_0x000107c60e78();
  auVar11._0_8_ = *(double *)(param_5 + _DAT_112794fdc) * 50.0;
  auVar11._8_8_ = *(double *)(param_5 + _DAT_112794fdc) * 48.0;
  return auVar11;
}



/* Entry: 1008c2518; end: 1008c253f; -[SIGNavigationBarButton intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1008c2518(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(double *)(param_1 + _DAT_112794fdc) * 50.0;
  auVar1._8_8_ = *(double *)(param_1 + _DAT_112794fdc) * 48.0;
  return auVar1;
}



/* Entry: 1008c2540; end: 1008c25af; -[SIGFooter layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c2540(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b4b8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(*(undefined8 *)(param_1 + _DAT_1127948f0));
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(*(undefined8 *)(param_1 + _DAT_1127948f4));
  return;
}



/* Entry: 1008c25b0; end: 1008c274b; -[SIGNavigationBarView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c25b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar9 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar4 = *(long *)(param_3 + _DAT_1127950ec);
  func_0x000107c61174(lVar4);
  lVar1 = lVar4;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          func_0x000107c61128(lVar4);
        }
        uVar5 = *(undefined8 *)(lStack_138 + lVar7 * 8);
        uVar2 = uVar5;
        func_0x000107c4a3b4();
        if ((int)uVar2 != 0) {
          func_0x000107c3afa0(param_3);
          puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c4a764(uVar5);
          func_0x000107c61180();
          func_0x000107c44e8c();
          func_0x000107c5af88(puVar3);
          func_0x000107c61180();
          lVar8 = (long)_DAT_1127950f0;
          func_0x000107c59e10(*(undefined8 *)(param_3 + lVar8));
          func_0x000107c61170(puVar3);
          func_0x000107c61170(uVar5);
          func_0x000107c532b4(dVar9,param_2,*(undefined8 *)(param_3 + lVar8));
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  lVar1 = lVar4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  pcStack_148 = FUN_1008c274c;
  puStack_168 = PTR_PTR_11270b628;
  lStack_170 = lVar1;
  lStack_160 = lVar4;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&lStack_170,PTR_s_layoutSubviews_112600e60);
  func_0x000107c438d4(lVar1);
  func_0x000107c609c8();
  dVar10 = 0.0;
  if (0.0 <= dVar9) {
    dVar10 = dVar9;
  }
  *(double *)(lVar1 + _DAT_112794fec) = dVar10;
  return;
}



/* Entry: 1008c274c; end: 1008c27af; -[SIGNavigationBarButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c274c(double param_1,long param_2)

{
  double dVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b628;
  lStack_30 = param_2;
  func_0x000107c61154(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x000107c438d4(param_2);
  func_0x000107c609c8();
  dVar1 = 0.0;
  if (0.0 <= param_1) {
    dVar1 = param_1;
  }
  *(double *)(param_2 + _DAT_112794fec) = dVar1;
  return;
}



/* Entry: 1008c27b0; end: 1008c2857; -[SIGNavigationBarButtonImageView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c27b0(long param_1)

{
  char cVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_11270b630;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_layoutSubviews_112600e60);
  cVar1 = *(char *)(param_1 + _DAT_112795044);
  if (cVar1 == '\x01') {
    lVar2 = param_1;
    func_0x000107c3b7cc(param_1);
    func_0x000107c61180();
  }
  else {
    lVar2 = 0;
  }
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c562f4();
  func_0x000107c61170(param_1);
  if (cVar1 != '\0') {
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1008c2858; end: 1008c2927; -[SIGFooter _updateBackgroundColorAndDropShadowOnTransitionToItemConfig:] */

/* WARNING: Possible PIC construction at 0x0001008c288c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c2890) */
/* WARNING: Removing unreachable block (ram,0x0001008c2894) */
/* WARNING: Removing unreachable block (ram,0x0001008c28a0) */
/* WARNING: Removing unreachable block (ram,0x0001008c28ec) */
/* WARNING: Removing unreachable block (ram,0x0001008c28c4) */
/* WARNING: Removing unreachable block (ram,0x0001008c28f4) */
/* WARNING: Removing unreachable block (ram,0x0001008c28d4) */
/* WARNING: Removing unreachable block (ram,0x0001008c28e4) */
/* WARNING: Removing unreachable block (ram,0x0001008c28e8) */
/* WARNING: Removing unreachable block (ram,0x0001008c28f8) */
/* WARNING: Removing unreachable block (ram,0x0001008c2908) */

void FUN_1008c2858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3e5a0(param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008c2928; end: 1008c292f; -[SIGFooterItemConfig backgroundColor] */

undefined8 FUN_1008c2928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1008c2930; end: 1008c2937; -[SIGFooterItemConfig topBorderColor] */

undefined8 FUN_1008c2930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1008c2938; end: 1008c2a5f; -[SIGNavigationBarView setTooltipPresenter:] */

/* WARNING: Possible PIC construction at 0x0001008c2a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c2a94) */
/* WARNING: Removing unreachable block (ram,0x0001008c2a7c) */
/* WARNING: Removing unreachable block (ram,0x0001008c2aac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c2938(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + _DAT_11279510c,param_3);
  lVar4 = *(long *)(param_1 + _DAT_1127950ec);
  func_0x000107c61174(lVar4);
  lVar2 = lVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar4);
      }
      func_0x000107c59ebc(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 0x48,0);
  return;
}



/* Entry: 1008c2a60; end: 1008c2abf; -[SIGFooterItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008c2a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c2a94) */
/* WARNING: Removing unreachable block (ram,0x0001008c2a7c) */
/* WARNING: Removing unreachable block (ram,0x0001008c2aac) */

void FUN_1008c2a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 1008c2ac0; end: 1008c2b7f; -[SIGFooterItem removeObserver:] */

/* WARNING: Possible PIC construction at 0x0001008c2af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c2af8) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b20) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b28) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b30) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b34) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b60) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b48) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b5c) */
/* WARNING: Removing unreachable block (ram,0x0001008c2b6c) */
/* WARNING: Removing unreachable block (ram,0x0001008c2afc) */

void FUN_1008c2ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4a76c(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008c2b80; end: 1008c2bff; -[SIGFooterItemConfig removeObserver:] */

void FUN_1008c2b80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x000107c40808(), lVar1 != 0)) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(param_1 + 8);
      func_0x000107c4eaf0(lVar1,param_2,uVar3);
      if (lVar1 == param_3) {
        func_0x000107c4ffc4(*(undefined8 *)(param_1 + 8),param_2,uVar3);
        break;
      }
      uVar3 = uVar3 + 1;
      uVar2 = *(ulong *)(param_1 + 8);
      func_0x000107c40808();
    } while (uVar3 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c2c00; end: 1008c2d83; -[SIGFooterItem addObserver:] */

/* WARNING: Possible PIC construction at 0x0001008c2c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c2d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c2c4c) */
/* WARNING: Removing unreachable block (ram,0x0001008c2d48) */
/* WARNING: Removing unreachable block (ram,0x0001008c2d70) */
/* WARNING: Removing unreachable block (ram,0x0001008c2d4c) */

void FUN_1008c2c00(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    *(undefined **)(param_1 + 0x20) = puVar1;
  }
  else {
    func_0x000107c3d7f8();
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItem_itemConfigDidChange__1125caa98);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437b8(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItem_hiddenDidChange__1125caa90);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437b4(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItem_alphaDidChange__1125caa80);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437ac(*(undefined8 *)(param_1 + 0x30),param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItem_overridenBackgroundCo_1125caaa8);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437c0(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItem_overrideTintColorDidC_1125caaa0);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437bc(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItem_dimUnselectedIconsDid_1125caa88);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437b0(param_3);
    }
    func_0x000107c4a76c(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008c2d84; end: 1008c2d8b; -[SIGFooter footerItem:itemConfigDidChange:] */

void FUN_1008c2d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee4a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateWithNewFooterItemConfig__112596c38,param_4);
  return;
}



/* Entry: 1008c2d8c; end: 1008c3023; -[SIGFooter _updateWithNewFooterItemConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c2d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  lVar6 = (long)_DAT_1127948e0;
  if (*(char *)(param_1 + lVar6) == '\x01') {
    lVar8 = (long)_DAT_1127948fc;
    if (*(long *)(param_1 + lVar8) != 0) {
      func_0x000107c5be08(*(long *)(param_1 + lVar8),param_2,0);
      func_0x000107c43590(*(undefined8 *)(param_1 + lVar8),param_2,0);
      uVar2 = *(undefined8 *)(param_1 + lVar8);
      *(undefined8 *)(param_1 + lVar8) = 0;
      func_0x000107c61170(uVar2);
    }
  }
  *(undefined1 *)(param_1 + lVar6) = 1;
  uVar7 = *(undefined8 *)(param_1 + _DAT_1127948f8);
  func_0x000107c61174(uVar7);
  uVar2 = uVar7;
  func_0x000107c4a7c4(uVar7);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4e1d8();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c4a7c4(param_3);
  func_0x000107c61180();
  func_0x000107c57164();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c3aeec(param_1,param_2,param_3,uVar7);
  uVar2 = param_3;
  func_0x000107c400f0();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((int)uVar2 == 0) {
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_10b84f278;
    puStack_f0 = &UNK_110848ba8;
    lStack_e8 = param_1;
    uStack_e0 = param_3;
    uStack_d8 = uVar7;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(param_3);
    func_0x000107c4e5fc(puVar1,param_2,&puStack_108);
    func_0x000107c61170(uStack_d8);
    uVar2 = uStack_e0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    func_0x000107c610f4();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x1008c31f8;
    puStack_80 = &UNK_110848ba8;
    lStack_78 = param_1;
    func_0x000107c61174(param_3);
    uStack_70 = param_3;
    func_0x000107c61174(uVar7);
    uStack_68 = uVar7;
    func_0x000107c4670c(0x3fd999999999999a,puVar5,param_2,0,&puStack_98);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127948fc);
    *(undefined **)(param_1 + _DAT_1127948fc) = puVar5;
    func_0x000107c61170(uVar2);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    puStack_c0 = &UNK_100c6da8c;
    puStack_b8 = &UNK_110906090;
    lStack_b0 = param_1;
    uStack_a8 = param_3;
    uStack_a0 = uVar7;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(param_3);
    func_0x000107c61174(puVar5);
    func_0x000107c3d62c(puVar5,param_2,&puStack_d0);
    func_0x000107c5ba5c(puVar5);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uStack_68);
    uVar2 = uStack_70;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008c3024; end: 1008c3033; -[SIGNavigationBarView overrideTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008c3024(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127950fc);
}



/* Entry: 1008c3034; end: 1008c3167; -[SIGNavigationBarView setOverrideTintColor:] */

/* WARNING: Possible PIC construction at 0x0001008c308c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c31b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c312c) */
/* WARNING: Removing unreachable block (ram,0x0001008c3164) */
/* WARNING: Removing unreachable block (ram,0x0001008c31a0) */
/* WARNING: Removing unreachable block (ram,0x0001008c314c) */
/* WARNING: Removing unreachable block (ram,0x0001008c3090) */
/* WARNING: Removing unreachable block (ram,0x0001008c30c4) */
/* WARNING: Removing unreachable block (ram,0x0001008c30d0) */
/* WARNING: Removing unreachable block (ram,0x0001008c30d4) */
/* WARNING: Removing unreachable block (ram,0x0001008c30e4) */
/* WARNING: Removing unreachable block (ram,0x0001008c30ec) */
/* WARNING: Removing unreachable block (ram,0x0001008c3108) */
/* WARNING: Removing unreachable block (ram,0x0001008c3124) */
/* WARNING: Removing unreachable block (ram,0x0001008c31b8) */
/* WARNING: Removing unreachable block (ram,0x0001008c31cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127950fc);
  *(undefined8 *)(param_1 + _DAT_1127950fc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c3168; end: 1008c31df; -[SIGNavigationBarButton setOverrideTintColor:] */

/* WARNING: Possible PIC construction at 0x0001008c31b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c31b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3168(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar3 = (long)_DAT_112795000;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x000107c49cec(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x000107c40794();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    param_3 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c31e0; end: 1008c31ef; -[SIGNavigationBarView beginInternalTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c31e0(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112795118) = 0;
  return;
}



/* Entry: 1008c31f0; end: 1008c320b; -[SIGFooterItemConfig configTransitionAnimatable] */

undefined1 FUN_1008c31f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1008c320c; end: 1008c346f; -[SIGNavigationBarView performInternalTransitionAnimations:footerAnimationStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c320c(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_5);
  puVar4 = PTR_PTR_1126ce598;
  func_0x000107c61158(PTR_PTR_1126ce598);
  uVar5 = param_5;
  func_0x000107c6115c(param_5,puVar4);
  uVar1 = param_5;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  if (uVar1 != 0) {
    lVar8 = (long)_DAT_1127950f0;
    func_0x000107c3f74c(*(undefined8 *)(param_3 + lVar8));
    dVar12 = 0.0;
    lVar9 = *(long *)(param_3 + _DAT_1127950ec);
    dVar14 = param_2;
    func_0x000107c61174(lVar9);
    lVar6 = lVar9;
    func_0x000107c4080c();
    lVar2 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          func_0x000107c61128(lVar9);
        }
        uVar10 = *(ulong *)(lVar11 * 8);
        func_0x000107c4a764();
        func_0x000107c61180();
        uVar5 = param_5;
        func_0x000107c51c70();
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar10);
        if (uVar10 == uVar5) {
          func_0x000107c3afa0(param_3);
          param_1 = dVar12;
          param_2 = dVar14;
        }
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar9;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar9);
    func_0x000107c3f74c(*(undefined8 *)(param_3 + lVar8));
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    bVar3 = false;
    if ((dVar12 == param_1) && (bVar3 = false, !NAN(dVar14) && !NAN(param_2))) {
      bVar3 = dVar14 == param_2;
    }
    if (!bVar3) {
      func_0x000107c61174(param_5);
      func_0x000107c3dcc0(0x3ff0000000000000,0,puVar4);
      func_0x000107c61170(uVar1);
    }
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
  dVar12 = 0.95;
  if (*(char *)(param_5 + 0x40) == '\0') {
    dVar12 = 0.050000000000000044;
  }
  func_0x000107c3d724(0,dVar12,PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  dVar12 = 0.95;
  if (*(char *)(param_5 + 0x40) == '\0') {
    dVar12 = 0.050000000000000044;
  }
  uVar13 = *(undefined8 *)(param_5 + 0x28);
  func_0x000107c61174(*(undefined8 *)(param_5 + 0x28));
  func_0x000107c3d724(dVar12,1.0 - dVar12,puVar4);
  func_0x000107c61170(uVar13);
  return;
}



/* Entry: 1008c3470; end: 1008c3587;  */

void FUN_1008c3470(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  dVar5 = 0.95;
  if (*(char *)(param_1 + 0x40) == '\0') {
    dVar5 = 0.050000000000000044;
  }
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008c3588;
  puStack_70 = &UNK_110858dc0;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c3d724(0,dVar5,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_88);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  cStack_90 = *(char *)(param_1 + 0x40);
  dVar5 = 0.95;
  if (cStack_90 == '\0') {
    dVar5 = 0.050000000000000044;
  }
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1008c35f4;
  puStack_b8 = &UNK_110914f68;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(*(undefined8 *)(param_1 + 0x28));
  uStack_98 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar3;
  uStack_a8 = uVar4;
  func_0x000107c3d724(dVar5,1.0 - dVar5,puVar2,param_2,&puStack_d0);
  func_0x000107c61170(uStack_a8);
  return;
}



/* Entry: 1008c3588; end: 1008c35f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3588(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = (long)_DAT_1127950f0;
  func_0x000107c3f74c(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar1));
  dVar4 = *(double *)(param_2 + 0x28);
  dVar2 = param_1;
  func_0x000107c3f74c(*(undefined8 *)(*(long *)(param_2 + 0x20) + lVar1));
  dVar3 = 10.0;
  if (dVar4 <= dVar2) {
    dVar3 = -10.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1 + dVar3,*(undefined8 *)(param_2 + 0x30),
             *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar1),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 1008c35f4; end: 1008c36db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c35f4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return;
  }
  lVar3 = (long)_DAT_1127950f0;
  dVar4 = 0.0;
  func_0x000107c526c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x000107c550d8(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c51c70(uVar1);
  func_0x000107c61180();
  func_0x000107c44e8c();
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59e10(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  dVar6 = *(double *)(param_1 + 0x30);
  func_0x000107c3f74c(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  dVar5 = -14.0;
  if (dVar6 <= dVar4) {
    dVar5 = 14.0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar6 + dVar5,*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 1008c36dc; end: 1008c3703; -[SIGFooter footerItem:hiddenDidChange:] */

void FUN_1008c36dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c550d8(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c069fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  return;
}



/* Entry: 1008c3704; end: 1008c377f; -[SIGFooter invalidateIntrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3704(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b4b8;
  lStack_30 = param_3;
  func_0x000107c61154(&lStack_30,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
  func_0x000107c56a14(param_3);
  lVar1 = param_3 + _DAT_112794910;
  func_0x000107c61148(lVar1);
  func_0x000107c498ec(param_3);
  func_0x000107c43798(param_2,lVar1);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1008c3780; end: 1008c3787; -[SIGFooterItem hidden] */

undefined1 FUN_1008c3780(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1008c3788; end: 1008c378b; -[SIGFooter footerItem:alphaDidChange:] */

void FUN_1008c3788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1008c378c; end: 1008c3847; -[SIGFooter footerItem:overridenBackgroundColorDidChange:] */

/* WARNING: Possible PIC construction at 0x0001008c37fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c3800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c378c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar3 = (long)_DAT_112794918;
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x000107c3ab24();
  uVar2 = param_4;
  func_0x000107c61178(param_4);
  func_0x000107c3ab24();
  func_0x000107c608b0(uVar1,uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x000107c61174(param_4);
    param_3 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_4;
  }
  else {
    func_0x000107c61170(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c3848; end: 1008c390f; -[SIGFooter footerItem:overrideTintColorDidChange:] */

/* WARNING: Possible PIC construction at 0x0001008c38ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c38ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c38b0) */
/* WARNING: Removing unreachable block (ram,0x0001008c38bc) */
/* WARNING: Removing unreachable block (ram,0x0001008c38f0) */
/* WARNING: Removing unreachable block (ram,0x0001008c38f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127948ec);
  func_0x000107c4a76c(uVar1);
  func_0x000107c61180();
  func_0x000107c4a7c4();
  func_0x000107c61180();
  func_0x000107c61164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c3910; end: 1008c39db; -[SIGFooter footerItem:dimUnselectedIconsDidChange:] */

/* WARNING: Possible PIC construction at 0x0001008c396c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c39ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c3970) */
/* WARNING: Removing unreachable block (ram,0x0001008c39c8) */
/* WARNING: Removing unreachable block (ram,0x0001008c397c) */
/* WARNING: Removing unreachable block (ram,0x0001008c39b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3910(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127948ec);
  func_0x000107c4a76c(uVar1);
  func_0x000107c61180();
  func_0x000107c4a7c4();
  func_0x000107c61180();
  func_0x000107c61164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c39dc; end: 1008c3b13; -[SIGNavigationBarView setDimUnselectedIcons:] */

/* WARNING: Possible PIC construction at 0x0001008c3ad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c3adc) */
/* WARNING: Removing unreachable block (ram,0x0001008c3b10) */
/* WARNING: Removing unreachable block (ram,0x0001008c3b38) */
/* WARNING: Removing unreachable block (ram,0x0001008c3af4) */
/* WARNING: Removing unreachable block (ram,0x0001008c3b5c) */
/* WARNING: Removing unreachable block (ram,0x0001008c3b60) */
/* WARNING: Removing unreachable block (ram,0x0001008c3b7c) */
/* WARNING: Removing unreachable block (ram,0x0001008c3b8c) */
/* WARNING: Removing unreachable block (ram,0x0001008c3ba0) */
/* WARNING: Removing unreachable block (ram,0x0001008c3bb0) */
/* WARNING: Removing unreachable block (ram,0x0001008c3bc4) */
/* WARNING: Removing unreachable block (ram,0x0001008c3bd0) */
/* WARNING: Removing unreachable block (ram,0x0001008c3be4) */
/* WARNING: Removing unreachable block (ram,0x0001008c3bf0) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c04) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c10) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c24) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c30) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c44) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c50) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c64) */
/* WARNING: Removing unreachable block (ram,0x0001008c3c70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c39dc(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(char *)(param_1 + _DAT_112795100) = (char)param_3;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar3 = *(long *)(param_1 + _DAT_1127950ec);
  func_0x000107c61174(lVar3);
  lVar1 = lVar3;
  func_0x000107c4080c(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    uVar7 = 0x3fe4ccccc0000000;
    if (param_3 == 0) {
      uVar7 = 0x3ff0000000000000;
    }
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          func_0x000107c61128(lVar3);
        }
        uVar4 = *(ulong *)(lStack_118 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x000107c4a3b4();
        if ((uVar2 & 1) == 0) {
          func_0x000107c526c0(uVar7,uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x000107c4080c(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1008c3b14; end: 1008c3c7f; -[SIGFooterItemConfig addObserver:] */

/* WARNING: Possible PIC construction at 0x0001008c3b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c3b5c) */

void FUN_1008c3b14(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    param_3 = *(ulong *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
  }
  else {
    func_0x000107c3d7f8();
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItemConfig_showContentBehi_1125caac0);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437c8(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_footerItemConfig_showBorderAroun_1125caab8);
    if ((uVar2 & 1) != 0) {
      func_0x000107c437c4(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_backgroundColorDidChangeForFoote_1125a2908);
    if ((uVar2 & 1) != 0) {
      func_0x000107c3e5a4(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_enableDarkModeAlwaysDidChangeFor_1125c1948);
    if ((uVar2 & 1) != 0) {
      func_0x000107c425b0(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_topBorderColorDidChangeForFooter_11267aab8);
    if ((uVar2 & 1) != 0) {
      func_0x000107c5cbec(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_hideBadgesDidChangeForFooterItem_1125d6040);
    if ((uVar2 & 1) != 0) {
      func_0x000107c44e00(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_hideLabelsDidChangeForFooterItem_1125d6230);
    if ((uVar2 & 1) != 0) {
      func_0x000107c44e18(param_3);
    }
    uVar2 = param_3;
    func_0x000107c61164(param_3,PTR_s_swipeUpActionDidChangeForFooterI_112676e60);
    if ((uVar2 & 1) != 0) {
      func_0x000107c5c4f4(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c3c80; end: 1008c3d27; -[SIGFooter backgroundColorDidChangeForFooterItemConfig:] */

/* WARNING: Possible PIC construction at 0x0001008c3cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c3cf8) */
/* WARNING: Removing unreachable block (ram,0x0001008c3d04) */
/* WARNING: Removing unreachable block (ram,0x0001008c3d10) */

void FUN_1008c3c80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c3e5a0(param_1);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  func_0x000107c3e5a0(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c61178();
  func_0x000107c3ab24();
  func_0x000107c608b0(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c3d28; end: 1008c3e23; -[SIGFooter enableDarkModeAlwaysDidChangeForFooterItemConfig:] */

/* WARNING: Possible PIC construction at 0x0001008c3db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3e00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c3db8) */
/* WARNING: Removing unreachable block (ram,0x0001008c3dc4) */
/* WARNING: Removing unreachable block (ram,0x0001008c3e04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  lVar3 = (long)_DAT_11279491c;
  bVar1 = *(byte *)(param_1 + lVar3);
  uVar2 = param_3;
  func_0x000107c425ac();
  if ((uint)bVar1 != (uint)uVar2) {
    func_0x000107c425ac();
    *(char *)(param_1 + lVar3) = (char)param_3;
    param_3 = *(undefined8 *)(param_1 + _DAT_1127948ec);
    func_0x000107c4a76c(param_3);
    func_0x000107c61180();
    func_0x000107c4a7c4();
    func_0x000107c61180();
    func_0x000107c61164();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c3e24; end: 1008c3e27; -[SIGNavigationBarView setEnableDarkModeAlways:] */

void FUN_1008c3e24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed46d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateButtonsWithEnableDarkMode_112592b58);
  return;
}



/* Entry: 1008c3e28; end: 1008c3fd3; -[SIGFooter topBorderColorDidChangeForFooterItemConfig:] */

/* WARNING: Possible PIC construction at 0x0001008c3ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c3fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c3f98) */
/* WARNING: Removing unreachable block (ram,0x0001008c3f60) */
/* WARNING: Removing unreachable block (ram,0x0001008c3fa4) */
/* WARNING: Removing unreachable block (ram,0x0001008c3f78) */
/* WARNING: Removing unreachable block (ram,0x0001008c3f18) */
/* WARNING: Removing unreachable block (ram,0x0001008c3ed8) */
/* WARNING: Removing unreachable block (ram,0x0001008c3fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3e28(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + _DAT_112794920) == 0) {
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(*(long *)(param_1 + _DAT_112794920));
  }
  func_0x000107c5cbe8();
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008c3fd4; end: 1008c40a7; -[SIGFooter hideBadgesDidChangeForFooterItemConfig:] */

/* WARNING: Possible PIC construction at 0x0001008c4038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c403c) */
/* WARNING: Removing unreachable block (ram,0x0001008c4048) */
/* WARNING: Removing unreachable block (ram,0x0001008c4088) */
/* WARNING: Removing unreachable block (ram,0x0001008c4090) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c3fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127948ec);
  func_0x000107c4a76c(uVar1);
  func_0x000107c61180();
  func_0x000107c4a7c4();
  func_0x000107c61180();
  func_0x000107c61164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c40a8; end: 1008c40af; -[SIGFooterItemConfig hideBadges] */

undefined1 FUN_1008c40a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* Entry: 1008c40b0; end: 1008c4207; -[SIGNavigationBarView setHideBadges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1008c40b0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar4 = *(ulong *)(param_1 + _DAT_1127950ec);
  func_0x000107c61174(uVar4);
  uVar1 = uVar4;
  func_0x000107c4080c(uVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (uVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      uVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          func_0x000107c61128(uVar4);
        }
        uVar5 = *(undefined8 *)(lStack_128 + uVar7 * 8);
        uVar2 = uVar5;
        func_0x000107c4a764();
        func_0x000107c61180();
        uVar3 = uVar2;
        func_0x000107c44df8();
        func_0x000107c61170(uVar2);
        if (param_3 != (int)uVar3) {
          func_0x000107c4a764(uVar5);
          func_0x000107c61180();
          func_0x000107c550f8();
          func_0x000107c61170(uVar5);
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
      uVar1 = uVar4;
      func_0x000107c4080c(uVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar1 != 0);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  func_0x000107c60e78();
  return (ulong)*(byte *)(uVar4 + 0x11);
}



/* Entry: 1008c4208; end: 1008c420f; -[SIGNavigationBarButtonItem hideBadgeView] */

undefined1 FUN_1008c4208(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1008c4210; end: 1008c42e3; -[SIGFooter hideLabelsDidChangeForFooterItemConfig:] */

/* WARNING: Possible PIC construction at 0x0001008c4274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c42c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c4278) */
/* WARNING: Removing unreachable block (ram,0x0001008c4284) */
/* WARNING: Removing unreachable block (ram,0x0001008c42c4) */
/* WARNING: Removing unreachable block (ram,0x0001008c42cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4210(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127948ec);
  func_0x000107c4a76c(uVar1);
  func_0x000107c61180();
  func_0x000107c4a7c4();
  func_0x000107c61180();
  func_0x000107c61164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c42e4; end: 1008c42eb; -[SIGFooterItemConfig hideLabels] */

undefined1 FUN_1008c42e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}



/* Entry: 1008c42ec; end: 1008c4443; -[SIGNavigationBarView setHideLabels:] */

/* WARNING: Possible PIC construction at 0x0001008c43a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c43d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c44a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c44ac) */
/* WARNING: Removing unreachable block (ram,0x0001008c4514) */
/* WARNING: Removing unreachable block (ram,0x0001008c44b8) */
/* WARNING: Removing unreachable block (ram,0x0001008c4408) */
/* WARNING: Removing unreachable block (ram,0x0001008c4440) */
/* WARNING: Removing unreachable block (ram,0x0001008c4420) */
/* WARNING: Removing unreachable block (ram,0x0001008c43ac) */
/* WARNING: Removing unreachable block (ram,0x0001008c43d8) */
/* WARNING: Removing unreachable block (ram,0x0001008c43e4) */
/* WARNING: Removing unreachable block (ram,0x0001008c43b4) */
/* WARNING: Removing unreachable block (ram,0x0001008c4504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c42ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + _DAT_1127950ec);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    if (*plStack_120 != *plStack_120) {
      func_0x000107c61128(lVar2);
    }
    lVar2 = *plStack_128;
    func_0x000107c4a764(lVar2);
    func_0x000107c61180();
    func_0x000107c44e10();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1008c4444; end: 1008c452b; -[SIGFooter swipeUpActionDidChangeForFooterItemConfig:] */

/* WARNING: Possible PIC construction at 0x0001008c44a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4500: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c44ac) */
/* WARNING: Removing unreachable block (ram,0x0001008c4514) */
/* WARNING: Removing unreachable block (ram,0x0001008c44b8) */
/* WARNING: Removing unreachable block (ram,0x0001008c4504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4444(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127948ec);
  func_0x000107c4a76c(uVar1);
  func_0x000107c61180();
  func_0x000107c4a7c4();
  func_0x000107c61180();
  func_0x000107c61164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c452c; end: 1008c4533; -[SIGFooterItemConfig swipeUpAction] */

undefined8 FUN_1008c452c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1008c4534; end: 1008c456b; -[SIGNavigationBarView setSwipeUpAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61184();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795104);
  *(undefined8 *)(param_1 + _DAT_112795104) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008c456c; end: 1008c457b;  */

void FUN_1008c456c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf439b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeInContext_didComplete__1125ae810,param_2,
             param_3);
  return;
}



/* Entry: 1008c457c; end: 1008c457f; -[SIGAnimationlessPresentationStyle completeInContext:didComplete:] */

void FUN_1008c457c(void)

{
  return;
}



/* Entry: 1008c4580; end: 1008c4937; -[SCContainerViewController _completePresentationFinished:interactive:] */

/* WARNING: Possible PIC construction at 0x0001008c4800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c489c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c48b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c48ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c46e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c475c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c4760) */
/* WARNING: Removing unreachable block (ram,0x0001008c46e8) */
/* WARNING: Removing unreachable block (ram,0x0001008c46ec) */
/* WARNING: Removing unreachable block (ram,0x0001008c46f4) */
/* WARNING: Removing unreachable block (ram,0x0001008c473c) */
/* WARNING: Removing unreachable block (ram,0x0001008c4718) */
/* WARNING: Removing unreachable block (ram,0x0001008c48f0) */
/* WARNING: Removing unreachable block (ram,0x0001000e2a84) */
/* WARNING: Removing unreachable block (ram,0x0001008c48b8) */
/* WARNING: Removing unreachable block (ram,0x0001008c487c) */
/* WARNING: Removing unreachable block (ram,0x0001008c4804) */
/* WARNING: Removing unreachable block (ram,0x0001008c4808) */
/* WARNING: Removing unreachable block (ram,0x0001008c4810) */
/* WARNING: Removing unreachable block (ram,0x0001008c4858) */
/* WARNING: Removing unreachable block (ram,0x0001008c4834) */
/* WARNING: Removing unreachable block (ram,0x0001008c4784) */
/* WARNING: Removing unreachable block (ram,0x0001008c48a0) */
/* WARNING: Removing unreachable block (ram,0x0001008c4790) */
/* WARNING: Removing unreachable block (ram,0x0001008c4898) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4580(long param_1,undefined8 param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = 0xf726efe;
  FUN_1000ba800();
  if ((param_3 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + _DAT_11278c734);
    FUN_10087a3a4();
    lVar6 = param_1;
    func_0x000107c3c45c();
    uVar2 = (uint)bVar1 | uVar2 ^ 1;
    if (((uint)lVar6 & uVar2) == 1) {
      uVar4 = *(ulong *)(param_1 + _DAT_11278c710);
      func_0x000107c447b0();
    }
    else {
      uVar4 = (ulong)(((uint)lVar6 ^ 1) & uVar2);
    }
    if ((uVar4 & 1) == 0) {
      lVar6 = (long)_DAT_11278c73c;
    }
    else {
      func_0x000107c3e748(*(undefined8 *)(param_1 + _DAT_11278c740),param_2,0,1);
      lVar6 = (long)_DAT_11278c73c;
      func_0x000107c3e748(*(undefined8 *)(param_1 + lVar6),param_2,1,1);
    }
    func_0x000107c41c30(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
    if ((int)uVar4 != 0) {
      func_0x000107c427e0(*(undefined8 *)(param_1 + lVar6));
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278c740);
    func_0x000107c5dee4(uVar3);
    func_0x000107c61180();
    func_0x000107c4ff34();
  }
  else {
    lVar5 = (long)_DAT_11278c740;
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c41c30(uVar3,param_2,param_1);
    uVar2 = (uint)uVar3;
    bVar1 = *(byte *)(param_1 + _DAT_11278c734);
    FUN_10087a3a4();
    lVar6 = param_1;
    func_0x000107c3c45c();
    uVar2 = (uint)bVar1 | uVar2 ^ 1;
    if (((uint)lVar6 & uVar2) == 1) {
      uVar2 = (uint)*(undefined8 *)(param_1 + _DAT_11278c710);
      func_0x000107c447b0();
    }
    else {
      uVar2 = ((uint)lVar6 ^ 1) & uVar2;
    }
    if (uVar2 != 0) {
      func_0x000107c427e0(*(undefined8 *)(param_1 + lVar5));
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278c73c);
    func_0x000107c5dee4(uVar3);
    func_0x000107c61180();
    func_0x000107c4ff34();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1008c4938; end: 1008c49b3; -[SCSwipeViewContainerViewController didMoveToParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b04);
  func_0x000107c61174(param_3);
  func_0x000107c41c34(uVar1);
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_didMoveToParentViewController__1125bb948,param_3);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008c49b4; end: 1008c49cb; -[SCViewControllerLifecycleChecker didMoveToParentViewController:parent:] */

void FUN_1008c49b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(bool *)(param_1 + 0x16) = param_4 != 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1008c49cc; end: 1008c4a1f; -[SCSwipeViewContainerViewController endAppearanceTransition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c49cc(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c427e4(*(undefined8 *)(param_1 + _DAT_112776b04),param_2,param_1);
  puStack_28 = PTR_PTR_1126fce80;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 1008c4a20; end: 1008c4a27; -[SCViewControllerLifecycleChecker endAppearanceTransition:] */

void FUN_1008c4a20(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}



/* Entry: 1008c4a28; end: 1008c4aab; -[SCSwipeViewContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4a28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c5dea0(*(undefined8 *)(param_1 + _DAT_112776b04),param_2,param_1,param_3);
  puStack_38 = PTR_PTR_1126fce80;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  func_0x000107c54d30(param_1);
  func_0x000107c5de9c(*(undefined8 *)(param_1 + _DAT_112776b08));
  return;
}



/* Entry: 1008c4aac; end: 1008c4adb; -[SCViewControllerLifecycleChecker viewDidAppear:animated:] */

void FUN_1008c4aac(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  return;
}



/* Entry: 1008c4adc; end: 1008c4af7; -[SCSwipeViewContainerViewController setFullyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4adc(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_112776ad8) != param_3) {
    *(char *)(param_1 + _DAT_112776ad8) = (char)param_3;
  }
  return;
}



/* Entry: 1008c4af8; end: 1008c4b23; -[SCPageLoadTrace viewDidAppear] */

void FUN_1008c4af8(long param_1,undefined8 param_2)

{
  func_0x000107c42880(param_1,param_2,*(undefined8 *)(param_1 + 0x18),5);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1008c4b24; end: 1008c4ba3; -[SCMainCameraScreenRootViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4b24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f06c8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127433dc);
  puVar1 = PTR_PTR_1126bd5f8;
  func_0x000107c5dea8(PTR_PTR_1126bd5f8);
  func_0x000107c61180();
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1008c4ba4; end: 1008c4c27; +[SCViewControllerLifecycleEvent viewDidAppearWithAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4ba4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113082590) = 2;
  *(undefined1 *)(lVar1 + _DAT_113082598) = 2;
  *(undefined1 *)(lVar1 + _DAT_1130825a0) = param_3;
  *(undefined1 *)(lVar1 + _DAT_1130825a8) = 2;
  *(undefined1 *)(lVar1 + _DAT_1130825b0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008c4c28; end: 1008c4c2f;  */

void FUN_1008c4c28(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010087ba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 1008c4c30; end: 1008c4c5f;  */

void FUN_1008c4c30(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3ad48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008c4c60; end: 1008c4d0f; -[SCMainCameraPresentationWorkflow _adjustHeaderContentSizeWhenHidden:] */

/* WARNING: Possible PIC construction at 0x0001008c4ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c4ca8) */
/* WARNING: Removing unreachable block (ram,0x0001008c4cfc) */
/* WARNING: Removing unreachable block (ram,0x0001008c4cb8) */
/* WARNING: Removing unreachable block (ram,0x0001008c4ce4) */

void FUN_1008c4c60(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000107c61148(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3d9bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008c4d10; end: 1008c4d17; -[SIGHeaderItem adjustsContentSizeWhenHidden] */

undefined1 FUN_1008c4d10(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1008c4d18; end: 1008c4d77; -[SCCameraViewController viewIsAppearing:] */

void FUN_1008c4d18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8378;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_viewIsAppearing__112536cd8);
  uVar1 = param_1;
  func_0x000107c3cdf8();
  if ((int)uVar1 == 0) {
    func_0x000107c3cba8(param_1);
  }
  else {
    func_0x000107c3ca40(param_1);
  }
  return;
}



/* Entry: 1008c4d78; end: 1008c4d9b; -[SCCameraViewController _viewportOrientationFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1008c4d78(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_1127624dc) != 0) {
    puVar1 = PTR_PTR_1126d4000;
                    /* WARNING: Could not recover jumptable at 0x00010c29f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126d4000,PTR_s_viewportOrientationFixEnabledWit_1126857b8);
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 1008c4d9c; end: 1008c4e57; +[SCCameraCaptureOrientationFixExperiment viewportOrientationFixEnabledWithAppStartExperimentReader:] */

undefined8 FUN_1008c4d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x112feb238,auStack_48,0,0);
  if (cRam0000000112feb238 == '\0') {
    uVar1 = 0;
  }
  else if (cRam0000000112feb238 == '\x01') {
    uVar1 = 1;
  }
  else {
    func_0x000107c615f0(param_3);
    uVar2 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f19e4a0);
    uVar1 = param_3;
    func_0x000107c3ebd4(param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c61170(uVar2);
  }
  return uVar1;
}



/* Entry: 1008c4e58; end: 1008c4f2b; -[SCCameraViewController _updateCameraHardwareOrientationIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001008c4eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008c4f08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008c4eb8) */
/* WARNING: Removing unreachable block (ram,0x0001008c4ec4) */
/* WARNING: Removing unreachable block (ram,0x0001008c4f0c) */
/* WARNING: Removing unreachable block (ram,0x0001008c4f14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4e58(long param_1)

{
  if (*(char *)(param_1 + _DAT_112762560) == '\x01') {
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c5e3f8();
    func_0x000107c61180();
    func_0x000107c5e400();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1008c4f2c; end: 1008c4f87; -[SCMainCameraViewController viewDidAppear:] */

void FUN_1008c4f2c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8338;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x000107c5deb0(param_1);
  func_0x000107c5dec0(param_1);
  func_0x000107c5dea4(0,param_1);
  return;
}


