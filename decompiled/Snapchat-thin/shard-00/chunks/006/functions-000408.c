/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100874f34; end: 10087516f; -[SCTabBarContainer presentViewControllerAtIndex:animated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100874f34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c61174(param_5);
  lVar5 = (long)_DAT_11278c5b0;
  lVar4 = (long)_DAT_11278c5c0;
  if ((*(long *)(param_1 + lVar5) != -1) && (*(long *)(param_1 + lVar4) == 0)) {
    func_0x000107c41670(*(undefined8 *)(param_1 + _DAT_11278c5bc));
  }
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + _DAT_11278c5bc);
    func_0x000107c5de80(lVar3,param_2,param_3);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4d9a4(lVar2,param_2,param_3);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c45378();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  lVar2 = *(long *)(param_1 + lVar5);
  if (*(long *)(param_1 + lVar5) == -1) {
    *(long *)(param_1 + lVar5) = param_3;
    lVar2 = param_3;
  }
  lVar5 = param_1;
  func_0x000107c4f064(param_1,param_2,lVar2,param_3,param_4,0);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar4 = *(long *)(param_1 + lVar4);
  if (lVar4 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    puStack_90 = &UNK_10b09796c;
    puStack_88 = &UNK_1109414c0;
    lStack_80 = param_1;
    func_0x000107c61174(lVar3);
    lStack_78 = lVar3;
    lStack_68 = param_3;
    func_0x000107c61174(param_5);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    puStack_d8 = &UNK_10b097980;
    puStack_d0 = &UNK_110875f70;
    lStack_c8 = param_1;
    uStack_70 = param_5;
    func_0x000107c61174(lVar3);
    lStack_c0 = lVar3;
    func_0x000107c61174(lVar5);
    lStack_b8 = lVar5;
    lStack_a8 = param_3;
    func_0x000107c61174(param_5);
    uStack_b0 = param_5;
    func_0x000107c3d0c4(param_1,param_2,lVar3,param_4,&puStack_a0,&puStack_e8);
    func_0x000107c61170(uStack_b0);
    func_0x000107c61170(lStack_b8);
    func_0x000107c61170(lStack_c0);
    func_0x000107c61170(uStack_70);
    lVar4 = lStack_78;
  }
  else {
    func_0x000107c4d9a4(lVar4,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c3d040(param_1,param_2,lVar4,param_5,lVar5);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 100875170; end: 1008751af; -[SIGTabBarItemContainer inflateViewController] */

/* WARNING: Possible PIC construction at 0x000100875180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100875184) */
/* WARNING: Removing unreachable block (ram,0x000100875198) */
/* WARNING: Removing unreachable block (ram,0x0001008751a0) */

void FUN_100875170(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_visibleViewController_112685a88);
  return;
}



/* Entry: 1008751b0; end: 1008751b7; -[SCDeckContainerBase visibleViewController] */

undefined8 FUN_1008751b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1008751b8; end: 100875263; -[SIGTabBarItemContainer loadVisibleViewController] */

/* WARNING: Possible PIC construction at 0x0001008751fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100875228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100875200) */
/* WARNING: Removing unreachable block (ram,0x00010087522c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008751b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278c5dc);
  func_0x000107c45378(uVar1);
  func_0x000107c61180();
  func_0x000107c5a5ec(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100875264; end: 100875283;  */

void FUN_100875264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&UNK_10f725eda,param_3,1);
  return;
}



/* Entry: 100875284; end: 1008753a3; -[SCTabBarContainer presentationStyleForTransitionFromIndex:toIndex:animated:interactive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100875284(long param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5,
                  undefined4 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  if ((param_5 & 1) == 0) {
    FUN_1008753a4();
    func_0x000107c61180();
    goto LAB_10087538c;
  }
  lVar4 = (long)_DAT_11278c5c0;
  uVar7 = *(ulong *)(param_1 + _DAT_11278c5c4);
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 != 0) {
    func_0x000107c4d9a4(lVar2,param_2,param_3);
    func_0x000107c61180();
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x000107c4d9a4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3decc();
    lVar5 = lVar2;
    func_0x000107c3decc();
    if (lVar5 < lVar4) {
      puVar6 = PTR_PTR_1126df658;
      func_0x000107c5b10c(PTR_PTR_1126df658);
LAB_100875354:
      uVar7 = (ulong)puVar6 | uVar7;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c3decc();
      lVar5 = lVar2;
      func_0x000107c3decc();
      if (lVar4 < lVar5) {
        puVar6 = PTR_PTR_1126df658;
        func_0x000107c5b110(PTR_PTR_1126df658);
        goto LAB_100875354;
      }
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  uVar1 = 8;
  if (param_4 <= param_3) {
    uVar1 = 2;
  }
  func_0x000107c2bd58(uVar1,uVar7,param_6);
  func_0x000107c61180();
LAB_10087538c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008753a4; end: 1008753f7;  */

void FUN_1008753a4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f3fb8 != -1) {
    FUN_10002a2fc(0x1137f3fb8,&PTR___NSConcreteGlobalBlock_110cb74b8);
  }
  uVar1 = uRam00000001137f3fb0;
  func_0x000107c61174(uRam00000001137f3fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008753f8; end: 100875423;  */

void FUN_1008753f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126df780;
  func_0x000107c610fc();
  uVar1 = puRam00000001137f3fb0;
  puRam00000001137f3fb0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100875424; end: 1008754cb; -[SCDeckContainerBase activateChild:withCompletion:style:] */

/* WARNING: Possible PIC construction at 0x0001008754a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008754b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008754a4) */
/* WARNING: Removing unreachable block (ram,0x0001008754b4) */

void FUN_100875424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c42378(param_5);
  func_0x000107c4140c(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c61180();
  func_0x000107c4e574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1008754cc; end: 1008754d3; -[SIGAnimationlessPresentationStyle duration] */

undefined8 FUN_1008754cc(void)

{
  return 0;
}



/* Entry: 1008754d4; end: 1008754db; -[SCDeckContainersSharedService deckContainerTransitioner] */

undefined8 FUN_1008754d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008754dc; end: 1008755a7; -[SCDeckContainerTransitioner performCustomChildTransitionWithContainer:presenter:style:animated:completion:] */

/* WARNING: Possible PIC construction at 0x00010087555c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100875580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100875560) */
/* WARNING: Removing unreachable block (ram,0x000100875584) */

void FUN_1008754dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df6c0;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c46320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1008755a8; end: 1008756b7; -[SCTransitionProperties initWithCustomChildTransitionPropertiesWithContainer:presenter:animated:style:completion:] */

undefined1 *
FUN_1008755a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1127055c0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 1;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008756b8; end: 10087576b; -[SCDeckContainerTransitioner _performTransitionWithProperties:container:completion:] */

/* WARNING: Possible PIC construction at 0x00010087574c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100875750) */

void FUN_1008756b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  else {
    func_0x000107c3d798(*(undefined8 *)(param_1 + 8));
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c40808();
    if (lVar1 == 1) {
      func_0x000107c3c8e4(param_1);
    }
    else {
      func_0x000107c3be60(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10087576c; end: 10087593b; -[SCDeckContainerTransitioner _startQueuedTransition] */

void FUN_10087576c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c43638();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4109c();
  uVar3 = uVar1;
  func_0x000107c41404(uVar1);
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x000107c4f07c(uVar1);
  func_0x000107c61180();
  if ((int)uVar2 == 0) {
    uVar2 = uVar3;
    FUN_100875b88(uVar3,uVar4,*(undefined8 *)(param_1 + 0x18),0);
    func_0x000107c61180();
    func_0x000107c3dcdc(uVar1);
    func_0x000107c61174(uVar1);
    func_0x000107c4e534(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5c224(uVar1);
    func_0x000107c61180();
    uVar5 = uVar3;
    FUN_10087595c(uVar3,uVar4,uVar2,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c61180();
    func_0x000107c3dcdc(uVar1);
    func_0x000107c61174(uVar1);
    func_0x000107c4e534(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10087593c; end: 100875943; -[SCTransitionProperties customChildTransitioner] */

undefined1 FUN_10087593c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100875944; end: 10087594b; -[SCTransitionProperties deckContainer] */

undefined8 FUN_100875944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10087594c; end: 100875953; -[SCTransitionProperties presenter] */

undefined8 FUN_10087594c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100875954; end: 10087595b; -[SCTransitionProperties style] */

undefined8 FUN_100875954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10087595c; end: 100875b37;  */

void FUN_10087595c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = param_1;
  func_0x000107c4e354();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c49ee8();
  func_0x000107c61170(puVar1);
  puVar1 = param_1;
  func_0x000107c4e354();
  func_0x000107c61180();
  puVar3 = param_1;
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c53400();
    func_0x000107c61170(puVar1);
    FUN_100875b88(param_1,param_2,param_4,0);
    func_0x000107c61180();
  }
  else {
    puVar2 = puVar1;
    func_0x000107c4acbc();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    if (puVar2 == param_1) {
      puVar3 = PTR_PTR_1126df6a0;
      func_0x000107c610f4(PTR_PTR_1126df6a0);
      func_0x000107c46054();
    }
    else {
      puVar1 = param_1;
      func_0x000107c49ee8();
      if ((int)puVar1 == 0) {
        puVar3 = PTR_PTR_1126df6a8;
        func_0x000107c610f4(PTR_PTR_1126df6a8);
        puVar1 = param_1;
        func_0x000107c4e354(param_1);
        func_0x000107c61180();
        puVar4 = param_1;
        func_0x000107c4e354();
        func_0x000107c61180();
        func_0x000107c46aa0(puVar3);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar1);
      }
      else {
        FUN_100875b88(param_1,param_2,param_4,0);
        func_0x000107c61180();
      }
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100875b38; end: 100875b4f; -[SCDeckContainerBase parentContainer] */

void FUN_100875b38(long param_1)

{
  func_0x000107c61148(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100875b50; end: 100875b57; -[SCDeckContainerBase isInActiveBranch] */

undefined1 FUN_100875b50(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a);
}



/* Entry: 100875b58; end: 100875b87; -[SCDeckContainerBase setChildContainer:] */

void FUN_100875b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100875b88; end: 100875f3f;  */

void FUN_100875b88(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c499a8();
  if ((int)uVar1 != 0) {
    puVar6 = PTR_PTR_1126df6a0;
    func_0x000107c610f4(PTR_PTR_1126df6a0);
    func_0x000107c46054();
    goto LAB_100875efc;
  }
  uVar1 = param_1;
  func_0x000107c49ee8();
  uVar4 = param_1;
  if ((int)uVar1 == 0) {
    func_0x000107c5c3a0();
    func_0x000107c61180();
    uVar1 = uVar4;
    func_0x000107c4e354();
    func_0x000107c61180();
    if ((uVar1 != 0) && (uVar8 = uVar1, func_0x000107c49ee8(), (uVar8 & 1) != 0)) {
      uVar8 = uVar1;
      func_0x000107c4acbc(uVar1);
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126df6a8;
      func_0x000107c610f4(PTR_PTR_1126df6a8);
      uVar5 = uVar4;
      func_0x000107c3dedc();
      func_0x000107c61180();
      func_0x000107c46aa0(puVar6);
      func_0x000107c61170(uVar5);
      goto LAB_100875ee8;
    }
    puVar6 = PTR_PTR_1126df6b0;
    func_0x000107c610f4(PTR_PTR_1126df6b0);
    func_0x000107c45400();
  }
  else {
    func_0x000107c4acbc();
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c420d0();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    func_0x000107c61174(uVar4);
    uVar8 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar5 = uVar8;
        func_0x000107c4e354();
        func_0x000107c61180();
        func_0x000107c61170();
        uVar3 = uVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar8;
        func_0x000107c4e354(uVar8);
        func_0x000107c61180();
        func_0x000107c3d798(puVar2);
        func_0x000107c61170(uVar5);
        func_0x000107c4e354();
        func_0x000107c61180();
        func_0x000107c61170(uVar8);
        uVar8 = uVar3;
      } while (uVar3 != 0);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61174(uVar1);
    uVar5 = uVar1;
    if (uVar1 == 0) {
      uVar8 = 0;
    }
    else {
      do {
        puVar6 = puVar2;
        func_0x000107c40404();
        uVar8 = uVar5;
        if ((int)puVar6 != 0) {
          func_0x000107c61174(uVar5);
          break;
        }
        func_0x000107c4e354();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar5 = uVar8;
      } while (uVar8 != 0);
    }
    func_0x000107c61174(uVar8);
    uVar5 = uVar1;
    func_0x000107c4e354(uVar1);
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126df6a8;
    func_0x000107c610f4(PTR_PTR_1126df6a8);
    if (param_4 == 0) {
      uVar3 = param_1;
      func_0x000107c3f9c8();
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c41f4c();
      func_0x000107c61180();
      func_0x000107c46aa0(puVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar3);
    }
    else {
      func_0x000107c46aa0(puVar6);
    }
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar2);
LAB_100875ee8:
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
LAB_100875efc:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100875f40; end: 100875f47; -[SCDeckContainerBase isActive] */

undefined1 FUN_100875f40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 100875f48; end: 100875ffb; -[SCDeckContainerBase subtreeRoot] */

void FUN_100875f48(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c4e354();
  func_0x000107c61180();
  while (uVar1 != 0) {
    uVar2 = param_1;
    func_0x000107c4e354();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49ee8();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar3 & 1) != 0) break;
    uVar2 = param_1;
    func_0x000107c4e354();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c4e354();
    func_0x000107c61180();
    param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100875ffc; end: 1008760af; -[SCDeckContainerBase leaf] */

void FUN_100875ffc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3f9c8();
  func_0x000107c61180();
  while (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c3f9c8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c49ee8();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    if ((int)lVar3 == 0) break;
    lVar2 = param_1;
    func_0x000107c3f9c8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar1 = lVar2;
    func_0x000107c3f9c8();
    func_0x000107c61180();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1008760b0; end: 1008760b7; -[SCDeckContainerBase childContainer] */

undefined8 FUN_1008760b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1008760b8; end: 1008760bf; -[SCDeckContainerBase appearanceStyle] */

undefined8 FUN_1008760b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1008760c0; end: 100876277; -[SCDeckContainerBranchChangeTransition initWithFrom:fromLeavingHierarchy:to:toEnteringHierarchy:byParenting:to:cleaningUpUntil:presenter:style:transitionEventAnnouncer:] */

undefined8 *
FUN_1008760c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1127055a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 3) = param_4;
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 5) = param_6;
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[1];
    puVar1[1] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100876278; end: 10087627f; -[SCTransitionProperties animated] */

undefined1 FUN_100876278(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100876280; end: 100876377; -[SCDeckContainerBranchChangeTransition performAnimated:withCompletion:] */

void FUN_100876280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  func_0x000107c61174(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c5e38c(uVar1,param_2,uVar1,uVar2,param_3,0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1008764f4;
  puStack_80 = &UNK_110855c70;
  uStack_58 = (undefined1)param_3;
  lStack_78 = param_1;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  uStack_60 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c4edec(uVar3,param_2,uVar3,uVar4,&puStack_98);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100876378; end: 100876403; -[SCRootContainer willPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:] */

/* WARNING: Possible PIC construction at 0x0001008763e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008763e4) */

void FUN_100876378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c4168c(param_1);
  func_0x000107c61180();
  func_0x000107c508dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100876404; end: 100876423; -[SCRootContainer delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100876404(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_11278c53c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100876424; end: 100876427; -[SCActiveUserNGSNavigationRouter rootContainer:willPerformBranchChangeTransitionFromContainer:toContainer:animated:interactive:] */

void FUN_100876424(void)

{
  return;
}



/* Entry: 100876428; end: 1008764e7; -[SCRootContainer prepareForNoninteractiveBranchChangeTransitionFromContainer:toContainer:readyBlock:] */

/* WARNING: Possible PIC construction at 0x000100876478: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008764ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008764cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008764b0) */
/* WARNING: Removing unreachable block (ram,0x00010087647c) */
/* WARNING: Removing unreachable block (ram,0x0001008764b4) */
/* WARNING: Removing unreachable block (ram,0x0001008764c0) */
/* WARNING: Removing unreachable block (ram,0x000100876480) */
/* WARNING: Removing unreachable block (ram,0x0001008764d0) */

void FUN_100876428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c4168c(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008764e8; end: 1008764f3; -[SCActiveUserNGSNavigationRouter rootContainer:prepareForNoninteractiveBranchChangeTransitionFromContainer:toContainer:readyBlock:] */

void FUN_1008764e8(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x0001008764f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x10))(in_x5);
  return;
}



/* Entry: 1008764f4; end: 100876583;  */

void FUN_1008764f4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1008edd60;
  puStack_58 = &UNK_1109fdc98;
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = uVar1;
  func_0x000107c61174(uVar3);
  uStack_40 = uVar3;
  func_0x000107c3c0d0(uVar2,param_2,uVar1,&puStack_70);
  func_0x000107c61170(uStack_40);
  return;
}



/* Entry: 100876584; end: 10087670f; -[SCDeckContainerBranchChangeTransition _performAnimated:withCompletion:] */

void FUN_100876584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  ulong uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126df5c0;
  func_0x000107c610f4();
  func_0x000107c45690();
  func_0x000107c3e840(param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1008ecb54;
  puStack_70 = &UNK_110866910;
  lStack_68 = param_1;
  func_0x000107c61174(puVar1);
  ppuVar2 = &puStack_88;
  puStack_60 = puVar1;
  uStack_58 = param_4;
  func_0x000107c61184();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x000107c5dff4();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 == 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    func_0x000107c61164(uVar4,PTR_s_loadVisibleViewController_112604c18);
    if ((uVar4 & 1) != 0) {
      func_0x000107c4b7a4(*(undefined8 *)(param_1 + 0x20));
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x000107c5dff4();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar3 != 0) goto LAB_100876640;
    }
    (*(code *)ppuVar2[2])(ppuVar2,0);
  }
  else {
LAB_100876640:
    func_0x000107c61174(ppuVar2);
    func_0x000107c3b534(param_1);
    func_0x000107c61170(ppuVar2);
  }
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(puStack_60);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(ppuVar2);
  return;
}



/* Entry: 100876710; end: 100876757; -[SCDeckAppearance initWithAnimated:] */

void FUN_100876710(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b2e0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100876758; end: 10087689f; -[SCDeckContainerBranchChangeTransition beginWithAppearance:interactionType:] */

/* WARNING: Possible PIC construction at 0x00010087686c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087687c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100876870) */

void FUN_100876758(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) != lVar1) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x000107c41b84(lVar1,param_2,param_3);
      lVar1 = *(long *)(param_1 + 0x20);
    }
    func_0x000107c5e320(lVar1,param_2,param_3);
    func_0x000107c5e34c(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    lVar1 = param_1;
    func_0x000107c3b60c(param_1,param_2,*(undefined1 *)(param_1 + 0x18),
                        *(undefined1 *)(param_1 + 0x28));
    puVar6 = PTR_PTR_1126df5d0;
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = PTR_PTR_1126df5d8;
    func_0x000107c610f4(PTR_PTR_1126df5d8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4e230(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4e230(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4e25c(uVar5);
    func_0x000107c61180();
    func_0x000107c480a4(puVar2,param_2,uVar3,uVar4,lVar1,param_3,param_4,uVar5);
    func_0x000107c5e3dc(puVar6,param_2,puVar2);
    func_0x000107c61180();
    func_0x000107c4d664(uVar7,param_2,puVar6);
    param_3 = puVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008768a0; end: 100876917; -[SCDeckContainerBase didEnterHierarchyWithAppearance:] */

/* WARNING: Possible PIC construction at 0x0001008768ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008768f0) */

void FUN_1008768a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x1a) & 1) != 0) {
    return;
  }
  func_0x000107c61174(param_3);
  func_0x000107c4e354(param_1);
  func_0x000107c61180();
  func_0x000107c41b84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100876918; end: 10087699b; -[SCDeckContainerLifecyleEventEmitter emitDidEnterHierarchyWithAppearance:] */

void FUN_100876918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_100876ae0;
  puStack_38 = &UNK_110cb66f0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3c0dc(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10087699c; end: 100876adf; -[SCDeckContainerLifecyleEventEmitter _performBlockOnObservers:] */

/* WARNING: Possible PIC construction at 0x000100876a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100876aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100876b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100876aa8) */
/* WARNING: Removing unreachable block (ram,0x000100876adc) */
/* WARNING: Removing unreachable block (ram,0x000100876ac0) */
/* WARNING: Removing unreachable block (ram,0x000100876a88) */
/* WARNING: Removing unreachable block (ram,0x000100876a8c) */
/* WARNING: Removing unreachable block (ram,0x000100876b28) */

void FUN_10087699c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c3db80();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
    lVar2 = param_3;
  }
  else {
    do {
      lVar4 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar2);
        }
        if (*(long *)(lVar4 * 8) != 0) {
          (**(code **)(param_3 + 0x10))(param_3);
        }
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
      lVar3 = lVar2;
      func_0x000107c4080c();
    } while (lVar3 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100876ae0; end: 100876b3b;  */

/* WARNING: Possible PIC construction at 0x000100876b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100876b28) */

void FUN_100876ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x18);
  func_0x000107c4dd68(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100876b3c; end: 100876b3f; -[SCDeckContainerBase onUIDidEnterHierarchy:appearance:] */

void FUN_100876b3c(void)

{
  return;
}



/* Entry: 100876b40; end: 100876b8b; -[SIGTabBarItemContainer onUIDidEnterHierarchy:appearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100876b40(long param_1)

{
  param_1 = param_1 + _DAT_11278c5d4;
  func_0x000107c61148(param_1);
  func_0x000107c3c5a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100876b8c; end: 100876ba7; -[SCTabBarContainer _setSelectedIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100876b8c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11278c5b0) != param_3) {
    *(long *)(param_1 + _DAT_11278c5b0) = param_3;
  }
  return;
}



/* Entry: 100876ba8; end: 100876bab; -[SCActiveUserNGSNavigationRouter onUIDidEnterHierarchy:appearance:] */

void FUN_100876ba8(void)

{
  return;
}



/* Entry: 100876bac; end: 100876bc3; -[SCDeckContainerBlockObserver onUIDidEnterHierarchy:appearance:] */

void FUN_100876bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100876bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 100876bc4; end: 100876bf3;  */

void FUN_100876bc4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c5a56c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100876bf4; end: 100876c23; -[SCDeckContainerDataSource setViewControllerReleasable:] */

void FUN_100876bf4(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x41) != param_3) {
    *(char *)(param_1 + 0x41) = (char)param_3;
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x38),PTR_s_invalidate_1125f8150);
      return;
    }
    if (*(char *)(param_1 + 0x40) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bf6ad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_deflateViewController_1125b84f8);
      return;
    }
  }
  return;
}



/* Entry: 100876c24; end: 100876c2b; -[SCDeckContainerBase willAppearWithAppearance:] */

void FUN_100876c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_emitWillAppearWithAppearance__1125c1220);
  return;
}



/* Entry: 100876c2c; end: 100876caf; -[SCDeckContainerLifecyleEventEmitter emitWillAppearWithAppearance:] */

void FUN_100876c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_100876cb0;
  puStack_38 = &UNK_110cb66f0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3c0dc(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100876cb0; end: 100876d0b;  */

/* WARNING: Possible PIC construction at 0x000100876cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100876cf8) */

void FUN_100876cb0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x18);
  func_0x000107c4dd6c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100876d0c; end: 100876d0f; -[SCDeckContainerBase onUIWillAppear:appearance:] */

void FUN_100876d0c(void)

{
  return;
}



/* Entry: 100876d10; end: 100876d13; -[SCActiveUserNGSNavigationRouter onUIWillAppear:appearance:] */

void FUN_100876d10(void)

{
  return;
}



/* Entry: 100876d14; end: 100876d2b; -[SCDeckContainerBlockObserver onUIWillAppear:appearance:] */

void FUN_100876d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100876d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 100876d2c; end: 100876d33; -[SCDeckContainerBase willDisappearWithAppearance:] */

void FUN_100876d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_emitWillDisappearWithAppearance__1125c1228);
  return;
}



/* Entry: 100876d34; end: 100876db7; -[SCDeckContainerLifecyleEventEmitter emitWillDisappearWithAppearance:] */

void FUN_100876d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_100876db8;
  puStack_38 = &UNK_110cb66f0;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3c0dc(param_1,param_2,&puStack_50);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100876db8; end: 100876e13;  */

/* WARNING: Possible PIC construction at 0x000100876dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100876e00) */

void FUN_100876db8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c61148(lVar1 + 0x18);
  func_0x000107c4dd70(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100876e14; end: 100876e17; -[SCDeckContainerBase onUIWillDisappear:appearance:] */

void FUN_100876e14(void)

{
  return;
}



/* Entry: 100876e18; end: 100876e2f; -[SCDeckContainerBranchChangeTransition _eventTypeWithFromLeavingHierarchy:toEnteringHierarchy:] */

undefined8 FUN_100876e18(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = 2;
  }
  if (param_3 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 100876e30; end: 100876e37; -[SCDeckContainerBase page] */

undefined4 FUN_100876e30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 100876e38; end: 100876e3f; -[SCDeckContainerBase pageInstanceId] */

undefined8 FUN_100876e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100876e40; end: 100876f07; -[SCDeckTransitionEventData initWithPrevPage:newPage:eventType:appearance:interactionType:pageInstanceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100876e40(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined4 *)(param_1 + _DAT_11307d730) = param_3;
  *(undefined4 *)(param_1 + _DAT_11307d738) = param_4;
  *(undefined8 *)(param_1 + _DAT_11307d740) = param_5;
  *(undefined8 *)(param_1 + _DAT_11307d748) = param_6;
  *(undefined8 *)(param_1 + _DAT_11307d750) = param_7;
  *(undefined8 *)(param_1 + _DAT_11307d758) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61154(&lStack_60,puVar1);
  return;
}



/* Entry: 100876f08; end: 10087703b; +[SCDeckTransitionEvent willTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100876f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11307d788) = 0;
  *(undefined8 *)(lVar2 + _DAT_11307d790) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11307d798) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10087703c; end: 10087705f;  */

undefined8 FUN_10087703c(int param_1)

{
  if (param_1 - 1U < 0x17) {
    return *(undefined8 *)(&UNK_10dcd4900 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 100877060; end: 1008770ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100877060(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  if (*(int *)(param_1 + _DAT_11307d750) == 2) {
    puVar2 = *(undefined1 **)(unaff_x20 + 0x10);
    uVar1 = (ulong)*(uint *)(param_1 + _DAT_11307d738);
    FUN_10087703c();
    if (uVar1 != 0) {
      *puVar2 = 1;
    }
  }
  return;
}



/* Entry: 100877100; end: 100877143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100877100(long param_1)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = *(int *)(param_1 + _DAT_11307d738) - 1;
  if (uVar1 < 0x17) {
    **(undefined8 **)(unaff_x20 + 0x10) = *(undefined8 *)(&UNK_10dcd4900 + (ulong)uVar1 * 8);
    return;
  }
  **(undefined8 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 100877144; end: 10087716b;  */

void FUN_100877144(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c6106c();
  *param_1 = uVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 10087716c; end: 100877173;  */

void FUN_10087716c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar2);
    FUN_10006c804();
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_70,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar2);
    FUN_100877280(uVar4,uVar1);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_88,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(lVar2);
    FUN_100070bfc();
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 100877174; end: 10087727f;  */

void FUN_100877174(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar2);
    FUN_10006c804();
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar2);
    FUN_100877280(uVar4,uVar1);
    func_0x000107c61574(uVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(param_2);
    FUN_100070bfc();
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 100877280; end: 1008774df;  */

/* WARNING: Possible PIC construction at 0x000100877350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008773fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087740c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010087741c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008774b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100877494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008774b4) */
/* WARNING: Removing unreachable block (ram,0x000100877410) */
/* WARNING: Removing unreachable block (ram,0x000100877400) */
/* WARNING: Removing unreachable block (ram,0x000100877354) */
/* WARNING: Removing unreachable block (ram,0x000100877498) */
/* WARNING: Removing unreachable block (ram,0x0001008774bc) */

void FUN_100877280(void)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar10 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(lVar10 + 0x10);
  if (lVar8 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar9 = (undefined8 *)(lVar10 + 0x30);
    bVar2 = *(byte *)(unaff_x20 + 0x20);
    uVar11 = (ulong)bVar2;
    do {
      cVar3 = *(char *)(puVar9 + -2);
      if (bVar2 == 0) {
        if (cVar3 == '\x01') goto LAB_1008772f0;
      }
      else if (bVar2 == 1) {
        if (cVar3 == '\x02') {
LAB_1008772f0:
          pcVar1 = (code *)puVar9[-1];
          uVar6 = *puVar9;
          func_0x000107c61434(lVar10);
          func_0x000107c6157c(uVar6);
          (*pcVar1)();
          cVar3 = *(char *)(unaff_x20 + 0x20);
          *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
          *(undefined8 *)(unaff_x20 + 0x18) = uVar7;
          *(char *)(unaff_x20 + 0x20) = (char)uVar11;
          if ((1 < ((uint)uVar11 & 0xff)) || (cVar3 == '\x01')) {
LAB_10087734c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar10);
            return;
          }
          lVar8 = unaff_x20 + 0x40;
          func_0x000107c61618();
          if ((uVar11 & 0xff) == 0) {
            if (lVar8 == 0) goto LAB_10087734c;
            uVar11 = lVar8 + 0x40;
            func_0x000107c61618();
            if (uVar11 == 0) goto code_r0x000107c61574;
            uVar5 = uVar11;
            func_0x0001002a6ed0();
            if ((uVar5 & 1) != 0) {
              uStack_78 = 0x2000000000000000;
              uStack_80 = 0;
              uStack_70 = 0;
              uStack_90 = uVar4;
              uStack_88 = uVar7;
              FUN_1002a6760(&uStack_90);
              func_0x000107c615e8(uVar11);
              func_0x000107c615e8(lVar8);
              goto code_r0x000107c61574;
            }
          }
          else {
            if (lVar8 == 0) goto LAB_10087734c;
            uVar11 = lVar8 + 0x40;
            func_0x000107c61618();
            if (uVar11 == 0) goto code_r0x000107c61574;
            uVar5 = uVar11;
            func_0x0001002a6ed0();
            if ((uVar5 & 1) != 0) {
              uStack_80 = uVar4;
              FUN_100075034(&UNK_1040b6600,&uStack_90,PTR___sytN_11034f1b0 + 8);
              func_0x0001000c74f0(&uStack_90);
              uVar6 = uStack_90;
              func_0x0001040b5900(uStack_90);
              goto code_r0x000107c61574;
            }
          }
          func_0x000107c615e8(uVar11);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_release_11034f4c0)(uVar6);
          return;
        }
      }
      else if (cVar3 == '\0') goto LAB_1008772f0;
      puVar9 = puVar9 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 1008774e0; end: 1008774e7;  */

undefined8 FUN_1008774e0(void)

{
  undefined8 in_x3;
  
  if (lRam000000011305feb8 != -1) {
    func_0x000107c61568(0x11305feb8,FUN_100877594);
  }
  func_0x000100877840(in_x3,uRam0000000113813108);
  return in_x3;
}



/* Entry: 1008774e8; end: 100877553;  */

undefined8 FUN_1008774e8(void)

{
  undefined8 in_x3;
  
  if (lRam000000011305feb8 != -1) {
    func_0x000107c61568(0x11305feb8,FUN_100877594);
  }
  func_0x000100877840(in_x3,uRam0000000113813108);
  return in_x3;
}



/* Entry: 100877554; end: 100877593;  */

void FUN_100877554(void)

{
  undefined *puVar1;
  
  if (puRam000000011305fec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3dce0;
  func_0x000107c61520(&UNK_10dd3dce0,&UNK_1107adcb8);
  puRam000000011305fec0 = puVar1;
  return;
}



/* Entry: 100877594; end: 10087761b;  */

void FUN_100877594(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  FUN_100877554();
  uVar1 = 4;
  func_0x000107c5fe14(4,&UNK_1107adcb8,param_1);
  uStack_28 = uVar1;
  FUN_100877620(auStack_30,0x1f);
  FUN_100877620(auStack_30,0x67);
  FUN_100877620(auStack_30,0x13c);
  FUN_100877620(auStack_30,0x4c);
  uRam0000000113813108 = uStack_28;
  return;
}



/* Entry: 10087761c; end: 10087761f;  */

void FUN_10087761c(void)

{
  undefined *puVar1;
  
  if (puRam000000011305f550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3dcb8;
  func_0x000107c61520(&UNK_10dd3dcb8,&UNK_1107adcb8);
  puRam000000011305f550 = puVar1;
  return;
}



/* Entry: 100877620; end: 10087770f;  */

undefined8 FUN_100877620(ulong *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long alStack_88 [9];
  
  lVar5 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar5 + 0x28));
  uVar4 = param_2;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar4 = uVar4 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
    do {
      uVar3 = *(ulong *)(*(long *)(lVar5 + 0x30) + uVar4 * 8);
      if ((int)uVar3 == (int)param_2) {
        uVar1 = 0;
        goto LAB_1008776f4;
      }
      uVar4 = uVar4 + 1 & ~uVar2;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  alStack_88[0] = *unaff_x20;
  FUN_100877710(param_2,uVar4,lVar5);
  *unaff_x20 = alStack_88[0];
  uVar1 = 1;
  uVar3 = param_2;
LAB_1008776f4:
  *param_1 = uVar3;
  return uVar1;
}



/* Entry: 100877710; end: 1008778fb;  */

void FUN_100877710(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_78 [72];
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      func_0x0001040b6828();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      func_0x0001040b6618(uVar3 + 1);
    }
    else {
      func_0x0001040b6968();
    }
    lVar4 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar4 + 0x28));
    param_2 = param_1;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((int)*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == (int)param_1) {
          func_0x000107c60620(&UNK_1107adcb8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100877840);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100877830);
  (*pcVar1)();
}



/* Entry: 1008778fc; end: 100877923;  */

undefined1  [16] FUN_1008778fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  
  if ((ulong)param_3[3] >> 0x3d == 1) {
    auVar1._0_8_ = *param_3;
    auVar1._8_8_ = 1;
    return auVar1;
  }
  return ZEXT816(0);
}



/* Entry: 100877924; end: 1008779e3;  */

void FUN_100877924(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar4 = *param_1;
  puVar1 = auStack_48;
  func_0x000107c61428(lVar4 + 0x70,puVar1,0x21,0);
  *(undefined8 *)(lVar4 + 0x70) = param_2;
  *(undefined1 *)(lVar4 + 0x78) = 0;
  lVar3 = *(long *)(lVar4 + 0x98);
  if (*(long *)(lVar3 + 0x10) != 0) {
    FUN_100086b70(0x3e);
    if (((ulong)puVar1 & 1) != 0) goto LAB_1008779c4;
    lVar3 = *(long *)(lVar4 + 0x98);
  }
  func_0x000107c61558(lVar3);
  uVar2 = *(undefined8 *)(lVar4 + 0x98);
  FUN_1002a72b8(param_3,0x3e,lVar3,0x11305f7c8,&UNK_10dcd4bb0,FUN_100086eb8);
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
LAB_1008779c4:
  func_0x000107c614a8(auStack_48);
  return;
}



/* Entry: 1008779e4; end: 1008779fb;  */

void FUN_1008779e4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100877924(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1008779fc; end: 100877beb;  */

void FUN_1008779fc(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x70,auStack_68,0,0);
  lVar1 = 0;
  if (*(char *)(param_1 + 0x78) != '\x01') {
    lVar1 = *(long *)(param_1 + 0x70);
  }
  func_0x000107c5981c(*(undefined8 *)(unaff_x20 + 0x78));
  uVar3 = *(ulong *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c614f0();
  uVar4 = uVar3;
  (**(code **)(lVar2 + 0x28))();
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar4 = uVar3;
  (**(code **)(lVar2 + 8))(uVar3,lVar2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar8 = *(ulong *)(unaff_x20 + 0x38);
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010effc510);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar5);
  uVar4 = uVar3;
  (**(code **)(lVar2 + 0x10))(uVar3,lVar2);
  if (lVar1 < 0x67) {
    if ((lVar1 == 0x1f) || (lVar1 == 0x4c)) goto LAB_100877b0c;
  }
  else if ((lVar1 == 0x67) || ((lVar1 == 0x13c || (lVar1 == 0x93)))) {
LAB_100877b0c:
    (**(code **)(lVar2 + 0x18))((uint)uVar8 ^ 1,uVar3,lVar2);
    if ((uVar8 & 1) == 0) {
      return;
    }
    goto LAB_100877b24;
  }
  (**(code **)(lVar2 + 0x18))((uint)uVar4 & 1,uVar3,lVar2);
  if ((uVar4 & 1) != 0) {
    return;
  }
LAB_100877b24:
  puVar6 = &UNK_110743780;
  func_0x000107c613fc(&UNK_110743780,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puStack_78 = &UNK_1040b5d6c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_1000f6b44;
  puStack_80 = &UNK_110743798;
  ppuVar7 = &puStack_98;
  puStack_70 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_70);
  func_0x000100c749e0(0x40a00000,
                      "GhostToSignaler.featureStartupDestinationChanged.deferScopeGraphLaunch",
                      ppuVar7);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 100877bec; end: 100877ce7; -[_TtC34AppStartupViolationMonitorProvider26AppStartupViolationMonitor setStartupDestinationPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100877bec(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + _DAT_11307cde0);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((long)uVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100877ce8);
      (*pcVar1)();
    }
    func_0x000107c61174(param_1);
    uVar4 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar2 + uVar4 * 8 + 0x20);
        func_0x000107c615f0(uVar5);
      }
      else {
        uVar5 = uVar4;
        func_0x0001044745d4(uVar4,uVar2);
      }
      uVar4 = uVar4 + 1;
      func_0x000107c5981c(uVar5);
      func_0x000107c615e8(uVar5);
    } while (uVar3 != uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 100877ce8; end: 100877d17; -[_TtC36ScopeGraphAppStartupViolationMonitor41ProxyScopeGraphAppStartupViolationMonitor setStartupDestinationPage:] */

void FUN_100877ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_100877d18(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100877d18; end: 100877e4b;  */

/* WARNING: Possible PIC construction at 0x000100877df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100877e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100877e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100877e0c) */
/* WARNING: Removing unreachable block (ram,0x000100877df8) */
/* WARNING: Removing unreachable block (ram,0x000100877e1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100877d18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &UNK_1103b6860;
  func_0x000107c613fc(&UNK_1103b6860,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7f3f0);
  if (lVar3 != 0) {
    puVar2 = &UNK_1103b6888;
    func_0x000107c613fc(&UNK_1103b6888,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = 0x100878018;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    *(long *)(puVar2 + 0x20) = lVar3;
    uStack_50 = 0x100878014;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1000f6b44;
    puStack_58 = &UNK_1103b68a0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61580(lVar3,2);
    func_0x000107c6157c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 100877e4c; end: 100877e4f;  */

void FUN_100877e4c(long param_1,long param_2)

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



/* Entry: 100877e50; end: 100877e53; -[_TtC34AppStartupViolationMonitorProvider33COFAppStartupViolationMonitorImpl setStartupDestinationPage:] */

void FUN_100877e50(void)

{
  return;
}



/* Entry: 100877e54; end: 100877ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100877e54(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9dcc8;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcc8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 100877ed4; end: 100877f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100877ed4(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d9dcc0;
  func_0x000107c61428(unaff_x20 + _DAT_112d9dcc0,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 100877f20; end: 100877f73;  */

void FUN_100877f20(undefined8 *param_1)

{
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0x100;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x000100876f7c(FUN_100877f74,auStack_40,FUN_1008eda04,auStack_60);
  return;
}



/* Entry: 100877f74; end: 100877fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100877f74(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  if (((*(int *)(param_1 + _DAT_11307d750) == 2) &&
      (uVar1 = *(int *)(param_1 + _DAT_11307d738) - 1, uVar1 < 0x17)) &&
     ((0x60bc61U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    *puVar2 = *(undefined8 *)(&UNK_10dcd5658 + (ulong)uVar1 * 8);
    *(undefined2 *)(puVar2 + 1) = 0;
  }
  return;
}



/* Entry: 100877fd8; end: 100877fff;  */

uint FUN_100877fd8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c5fab8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 100878000; end: 10087802f;  */

bool FUN_100878000(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100878030; end: 1008780db;  */

void FUN_100878030(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c7ec(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1008780dc; end: 100878127; -[SCDeckTransitionEvent matchWillTransition:didTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008780dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11307d788) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_11307d798) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100878108);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_11307d790) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100878128);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000100878120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 100878128; end: 10087816f;  */

/* WARNING: Possible PIC construction at 0x00010087815c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100878160) */

void FUN_100878128(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100878170; end: 1008781e7; -[SCPageLoadMetricManagerImpl _onDeckWillTransitionWithData:] */

/* WARNING: Possible PIC construction at 0x0001008781cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008781d0) */

void FUN_100878170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x000107c4d640(param_3);
  func_0x0001008781f8();
  func_0x000107c441b4(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c5d95c(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


