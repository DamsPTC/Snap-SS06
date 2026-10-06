/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8148b4; end: 10b8148d7; -[SCListUpdateModel copyWithZone:] */

undefined8 FUN_10b8148b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b8148d8; end: 10b814963; -[SCListUpdateModel hash] */

undefined8 * FUN_10b8148d8(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b814a14:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b814a20;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b814a20;
            }
            goto LAB_10b814a14;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b814a20:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b814964; end: 10b814a3b; -[SCListUpdateModel isEqual:] */

long FUN_10b814964(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b814a14:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b814a20;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b814a20;
            }
            goto LAB_10b814a14;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b814a20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b814a3c; end: 10b814a43; -[SCListUpdateModel insertIndexSet] */

undefined8 FUN_10b814a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b814a44; end: 10b814a4b; -[SCListUpdateModel deleteIndexSet] */

undefined8 FUN_10b814a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b814a4c; end: 10b814a53; -[SCListUpdateModel updateIndices] */

undefined8 FUN_10b814a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b814a54; end: 10b814a5b; -[SCListUpdateModel unchangedIndices] */

undefined8 FUN_10b814a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b814a5c; end: 10b814aa3; -[SCListUpdateModel .cxx_destruct] */

void FUN_10b814a5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b814aa4; end: 10b814b13; -[SCDeckBaseViewController viewWillAppear:] */

void FUN_10b814aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf66a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7960();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_11270b2d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewWillAppear__1126853f0,param_3);
  return;
}



/* Entry: 10b814b14; end: 10b814b83; -[SCDeckBaseViewController viewDidAppear:] */

void FUN_10b814b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf66a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e78c0();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_11270b2d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 10b814b84; end: 10b814beb; -[SCDeckBaseViewController viewWillDisappear:] */

void FUN_10b814b84(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b2d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf66a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e79a0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b814bec; end: 10b814c53; -[SCDeckBaseViewController viewDidDisappear:] */

void FUN_10b814bec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b2d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010bf66a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7900();
  _objc_release(param_1);
  return;
}



/* Entry: 10b814c54; end: 10b814c73; -[SCDeckBaseViewController deckUIKitLifecycleObservingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b814c54(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11279427c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b814c74; end: 10b814c87; -[SCDeckBaseViewController setDeckUIKitLifecycleObservingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b814c74(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11279427c,param_3);
  return;
}



/* Entry: 10b814c88; end: 10b814c97; -[SCDeckBaseViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b814c88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11279427c);
  return;
}



/* Entry: 10b814c98; end: 10b814cbb; -[SCTabBarContainerConfig copyWithZone:] */

undefined8 FUN_10b814c98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b814cbc; end: 10b814d77; -[SCTabBarContainerConfig hash] */

ulong * FUN_10b814cbc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_60 = (ulong)uVar1;
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  uVar9 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar5;
  func_0x00010bfde980();
  uStack_30 = uVar4;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == (ulong *)param_3) {
LAB_10b814e74:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    puVar10 = (undefined1 *)0x0;
    if ((puVar6 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b814e80;
    puVar10 = (undefined1 *)puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if ((((ulong)puVar7 & 1) != 0) &&
       (((*(int *)((long)puVar6 + 0xc) == *(int *)(param_3 + 0xc) &&
         (*(char *)((long)puVar6 + 8) == param_3[8])) &&
        (*(long *)((long)puVar6 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar12 = ABS(*(double *)((long)puVar6 + 0x18) - *(double *)(param_3 + 0x18));
      dVar11 = ABS(*(double *)((long)puVar6 + 0x18) + *(double *)(param_3 + 0x18)) *
               2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar11))) {
        bVar3 = dVar12 < dVar11;
      }
      if (((bVar3) &&
          ((lVar8 = *(long *)((long)puVar6 + 0x20), lVar8 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
         ((lVar8 = *(long *)((long)puVar6 + 0x28), lVar8 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
        puVar10 = *(undefined1 **)((long)puVar6 + 0x30);
        if (puVar10 != *(undefined1 **)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b814e80;
        }
        goto LAB_10b814e74;
      }
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_10b814e80:
  _objc_release(param_3);
  return (ulong *)puVar10;
}



/* Entry: 10b814d78; end: 10b814e9b; -[SCTabBarContainerConfig isEqual:] */

long FUN_10b814d78(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b814e74:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b814e80;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != *(long *)(param_3 + 0x30)) {
          func_0x00010c071ae0();
          goto LAB_10b814e80;
        }
        goto LAB_10b814e74;
      }
    }
    lVar4 = 0;
  }
LAB_10b814e80:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b814e9c; end: 10b814ea3; -[SCTabBarContainerConfig page] */

undefined4 FUN_10b814e9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b814ea4; end: 10b814eab; -[SCTabBarContainerConfig viewControllers] */

undefined8 FUN_10b814ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b814eac; end: 10b815073; +[SCTabBarContainerConfigBuilder tabBarContainerConfigFromExistingTabBarContainerConfig:] */

void FUN_10b814eac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126ce4b0;
  _objc_retain(param_3);
  func_0x00010c267540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f0be0(param_3);
  puVar3 = puVar1;
  func_0x00010c2b52c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfc1a00(param_3);
  puVar4 = puVar3;
  func_0x00010c2aede0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf15b20(param_3);
  puVar5 = puVar4;
  func_0x00010c2a91e0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5d80(param_3);
  puVar6 = puVar5;
  func_0x00010c2b44c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf398e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2aa700(puVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c29c580(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2bc860(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bf643e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar11 = puVar9;
  func_0x00010c2abcc0(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10b815074; end: 10b81507b; -[SCTabBarContainerConfigBuilder withPage:] */

void FUN_10b815074(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b81507c; end: 10b8150b3; -[SCTabBarContainerConfigBuilder withViewControllers:] */

long FUN_10b81507c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b8150b4; end: 10b8150eb; -[SCTabBarContainerConfigBuilder withDataSource:] */

long FUN_10b8150b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b8150ec; end: 10b81510f; -[SCDeckAppearance copyWithZone:] */

undefined8 FUN_10b8150ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b815110; end: 10b815117; -[SCDeckAppearance hash] */

undefined1 FUN_10b815110(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b815118; end: 10b81519f; -[SCDeckAppearance isEqual:] */

bool FUN_10b815118(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(char *)(param_1 + 8) == *(char *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b8151a0; end: 10b8151a7; -[SCDeckAppearance animated] */

undefined1 FUN_10b8151a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b8151a8; end: 10b815273; -[SCModalContainerConfig initWithPage:presentationDirection:dataSource:disableSwipeGestureDismissal:disableHandlingTranitionAnimation:modalPresentationStyle:forceUseSCPresentation:customPresentationType:horizontalDismissBehavior:] */

undefined1 *
FUN_10b8151a8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_11270b2e8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0xc) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
    *(undefined8 *)((long)puVar1 + 0x30) = param_12;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b815274; end: 10b815297; -[SCModalContainerConfig copyWithZone:] */

undefined8 FUN_10b815274(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b815298; end: 10b815343; -[SCModalContainerConfig hash] */

ulong * FUN_10b815298(long param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = -uVar2;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  uStack_70 = (ulong)uVar1;
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lStack_68 = -lVar6;
  if (-1 < lVar6) {
    lStack_68 = lVar6;
  }
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  lVar6 = *(long *)(param_1 + 0x20);
  lStack_48 = -lVar6;
  if (-1 < lVar6) {
    lStack_48 = lVar6;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 10);
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_60 = uVar3;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 != (ulong *)param_3) {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b815438;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((((ulong)puVar5 & 1) == 0) ||
         ((((*(int *)((long)puVar4 + 0xc) != *(int *)(param_3 + 0xc) ||
            (*(long *)((long)puVar4 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(char *)((long)puVar4 + 8) != param_3[8])) ||
          ((*(char *)((long)puVar4 + 9) != param_3[9] ||
           (*(long *)((long)puVar4 + 0x20) != *(long *)(param_3 + 0x20))))))) ||
        (*(char *)((long)puVar4 + 10) != param_3[10])) ||
       ((*(long *)((long)puVar4 + 0x28) != *(long *)(param_3 + 0x28) ||
        (*(long *)((long)puVar4 + 0x30) != *(long *)(param_3 + 0x30))))) {
      puVar7 = (undefined1 *)0x0;
      goto LAB_10b815438;
    }
    puVar7 = *(undefined1 **)((long)puVar4 + 0x18);
    if (puVar7 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b815438;
    }
  }
  puVar7 = (undefined1 *)0x1;
LAB_10b815438:
  _objc_release(param_3);
  return (ulong *)puVar7;
}



/* Entry: 10b815344; end: 10b815453; -[SCModalContainerConfig isEqual:] */

long FUN_10b815344(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b815438;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) == 0) ||
         ((((*(int *)(param_1 + 0xc) != *(int *)(param_3 + 0xc) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
          ((*(char *)(param_1 + 9) != *(char *)(param_3 + 9) ||
           (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))))) ||
        (*(char *)(param_1 + 10) != *(char *)(param_3 + 10))) ||
       ((*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28) ||
        (*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30))))) {
      lVar3 = 0;
      goto LAB_10b815438;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b815438;
    }
  }
  lVar3 = 1;
LAB_10b815438:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b815454; end: 10b81545b; -[SCModalContainerConfig page] */

undefined4 FUN_10b815454(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b81545c; end: 10b815463; -[SCModalContainerConfig presentationDirection] */

undefined8 FUN_10b81545c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b815464; end: 10b81546b; -[SCModalContainerConfig dataSource] */

undefined8 FUN_10b815464(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b81546c; end: 10b815473; -[SCModalContainerConfig disableSwipeGestureDismissal] */

undefined1 FUN_10b81546c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b815474; end: 10b81547b; -[SCModalContainerConfig disableHandlingTranitionAnimation] */

undefined1 FUN_10b815474(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b81547c; end: 10b815483; -[SCModalContainerConfig modalPresentationStyle] */

undefined8 FUN_10b81547c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b815484; end: 10b81548b; -[SCModalContainerConfig forceUseSCPresentation] */

undefined1 FUN_10b815484(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b81548c; end: 10b815493; -[SCModalContainerConfig customPresentationType] */

undefined8 FUN_10b81548c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b815494; end: 10b81549b; -[SCModalContainerConfig horizontalDismissBehavior] */

undefined8 FUN_10b815494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b81549c; end: 10b8154a7; -[SCModalContainerConfig .cxx_destruct] */

void FUN_10b81549c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b8154a8; end: 10b8154c3; +[SCModalContainerConfigBuilder modalContainerConfig] */

void FUN_10b8154a8(void)

{
  _objc_alloc_init(PTR_PTR_1126b0320);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8154c4; end: 10b8156bf; +[SCModalContainerConfigBuilder modalContainerConfigFromExistingModalContainerConfig:] */

void FUN_10b8154c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  puVar1 = PTR_PTR_1126b0320;
  _objc_retain(param_3);
  func_0x00010c0cf9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f0be0(param_3);
  puVar3 = puVar1;
  func_0x00010c2b52c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c10f3c0(param_3);
  puVar4 = puVar3;
  func_0x00010c2b5c20(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf643e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2abcc0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf809a0(param_3);
  puVar7 = puVar5;
  func_0x00010c2ac5a0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf800a0(param_3);
  puVar8 = puVar7;
  func_0x00010c2ac500(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0cfbe0(param_3);
  puVar9 = puVar8;
  func_0x00010c2b40a0(puVar8,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfb51e0(param_3);
  puVar10 = puVar9;
  func_0x00010c2ae4a0(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf61a60(param_3);
  puVar11 = puVar10;
  func_0x00010c2abaa0(puVar10,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bfe41a0(param_3);
  _objc_release(param_3);
  puVar12 = puVar11;
  func_0x00010c2af820(puVar11,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10b8156c0; end: 10b815717; -[SCModalContainerConfigBuilder build] */

void FUN_10b8156c0(void)

{
  _objc_alloc(PTR_PTR_1126e1620);
  func_0x00010c032de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b815718; end: 10b81571f; -[SCModalContainerConfigBuilder withPage:] */

void FUN_10b815718(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b815720; end: 10b815727; -[SCModalContainerConfigBuilder withPresentationDirection:] */

void FUN_10b815720(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b815728; end: 10b81575f; -[SCModalContainerConfigBuilder withDataSource:] */

long FUN_10b815728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b815760; end: 10b815767; -[SCModalContainerConfigBuilder withDisableSwipeGestureDismissal:] */

void FUN_10b815760(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b815768; end: 10b81576f; -[SCModalContainerConfigBuilder withDisableHandlingTranitionAnimation:] */

void FUN_10b815768(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 10b815770; end: 10b815777; -[SCModalContainerConfigBuilder withModalPresentationStyle:] */

void FUN_10b815770(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b815778; end: 10b81577f; -[SCModalContainerConfigBuilder withForceUseSCPresentation:] */

void FUN_10b815778(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10b815780; end: 10b815787; -[SCModalContainerConfigBuilder withCustomPresentationType:] */

void FUN_10b815780(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b815788; end: 10b81578f; -[SCModalContainerConfigBuilder withHorizontalDismissBehavior:] */

void FUN_10b815788(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10b815790; end: 10b81579b; -[SCModalContainerConfigBuilder .cxx_destruct] */

void FUN_10b815790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b81579c; end: 10b8157eb; -[SCNavigationContainerConfig initWithEmitInitialTransition:enableBidirectionalDismissalGestures:] */

void FUN_10b81579c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b2f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10b8157ec; end: 10b81580f; -[SCNavigationContainerConfig copyWithZone:] */

undefined8 FUN_10b8157ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b815810; end: 10b81586b; -[SCNavigationContainerConfig hash] */

ulong * FUN_10b815810(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10b81586c; end: 10b815903; -[SCNavigationContainerConfig isEqual:] */

bool FUN_10b81586c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b815904; end: 10b81590b; -[SCNavigationContainerConfig emitInitialTransition] */

undefined1 FUN_10b815904(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b81590c; end: 10b815913; -[SCNavigationContainerConfig enableBidirectionalDismissalGestures] */

undefined1 FUN_10b81590c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b815914; end: 10b81592f; +[SCNavigationContainerConfigBuilder navigationContainerConfig] */

void FUN_10b815914(void)

{
  _objc_alloc_init(PTR_PTR_1126b0ad8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b815930; end: 10b8159d7; +[SCNavigationContainerConfigBuilder navigationContainerConfigFromExistingNavigationContainerConfig:] */

void FUN_10b815930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b0ad8;
  _objc_retain(param_3);
  func_0x00010c0d6620(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8dec0(param_3);
  puVar3 = puVar1;
  func_0x00010c2acd40(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf8f6e0(param_3);
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c2ace80(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b8159d8; end: 10b815a0b; -[SCNavigationContainerConfigBuilder build] */

void FUN_10b8159d8(void)

{
  _objc_alloc(PTR_PTR_1126e1628);
  func_0x00010c00f520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b815a0c; end: 10b815a13; -[SCNavigationContainerConfigBuilder withEmitInitialTransition:] */

void FUN_10b815a0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b815a14; end: 10b815a1b; -[SCNavigationContainerConfigBuilder withEnableBidirectionalDismissalGestures:] */

void FUN_10b815a14(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b815a1c; end: 10b815a63; -[SCOperaDeckContainerConfig initWithPage:] */

void FUN_10b815a1c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270b2f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b815a64; end: 10b815a87; -[SCOperaDeckContainerConfig copyWithZone:] */

undefined8 FUN_10b815a64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b815a88; end: 10b815a97; -[SCOperaDeckContainerConfig hash] */

int FUN_10b815a88(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = -iVar2;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Entry: 10b815a98; end: 10b815b1f; -[SCOperaDeckContainerConfig isEqual:] */

bool FUN_10b815a98(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(int *)(param_1 + 8) == *(int *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b815b20; end: 10b815b27; -[SCOperaDeckContainerConfig page] */

undefined4 FUN_10b815b20(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b815b28; end: 10b815b43; +[SCOperaDeckContainerConfigBuilder operaDeckContainerConfig] */

void FUN_10b815b28(void)

{
  _objc_alloc_init(PTR_PTR_1126c9938);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b815b44; end: 10b815bc3; +[SCOperaDeckContainerConfigBuilder operaDeckContainerConfigFromExistingOperaDeckContainerConfig:] */

void FUN_10b815b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c9938;
  _objc_retain(param_3);
  func_0x00010c0ea2e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f0be0(param_3);
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c2b52c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b815bc4; end: 10b815bf3; -[SCOperaDeckContainerConfigBuilder build] */

void FUN_10b815bc4(void)

{
  _objc_alloc(PTR_PTR_1126e1630);
  func_0x00010c032da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b815bf4; end: 10b815bfb; -[SCOperaDeckContainerConfigBuilder withPage:] */

void FUN_10b815bf4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b815bfc; end: 10b815cf7; -[SCStackContainerPresentationStyle initWithDefaultPresentationStyle:defaultDismissalStyle:appearanceStyle:disappearanceStyle:] */

undefined1 *
FUN_10b815bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270b300;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b815cf8; end: 10b815d1b; -[SCStackContainerPresentationStyle copyWithZone:] */

undefined8 FUN_10b815cf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b815d1c; end: 10b815da7; -[SCStackContainerPresentationStyle hash] */

undefined8 * FUN_10b815d1c(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10b815e58:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b815e64;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_10b815e64;
            }
            goto LAB_10b815e58;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b815e64:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b815da8; end: 10b815e7f; -[SCStackContainerPresentationStyle isEqual:] */

long FUN_10b815da8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b815e58:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b815e64;
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
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_10b815e64;
            }
            goto LAB_10b815e58;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b815e64:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b815e80; end: 10b815e87; -[SCStackContainerPresentationStyle defaultPresentationStyle] */

undefined8 FUN_10b815e80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b815e88; end: 10b815e8f; -[SCStackContainerPresentationStyle defaultDismissalStyle] */

undefined8 FUN_10b815e88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b815e90; end: 10b815e97; -[SCStackContainerPresentationStyle appearanceStyle] */

undefined8 FUN_10b815e90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b815e98; end: 10b815e9f; -[SCStackContainerPresentationStyle disappearanceStyle] */

undefined8 FUN_10b815e98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b815ea0; end: 10b815ee7; -[SCStackContainerPresentationStyle .cxx_destruct] */

void FUN_10b815ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b815ee8; end: 10b815f03; +[SCStackContainerPresentationStyleBuilder stackContainerPresentationStyle] */

void FUN_10b815ee8(void)

{
  _objc_alloc_init(PTR_PTR_1126e1638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b815f04; end: 10b81605f; +[SCStackContainerPresentationStyleBuilder stackContainerPresentationStyleFromExistingStackContainerPresentationStyle:] */

void FUN_10b815f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126e1638;
  _objc_retain(param_3);
  func_0x00010c24d160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf69f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac180(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf69380(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac140(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf06920(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2a8620(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf80f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2ac600(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b816060; end: 10b816093; -[SCStackContainerPresentationStyleBuilder build] */

void FUN_10b816060(void)

{
  _objc_alloc(PTR_PTR_1126df668);
  func_0x00010c00a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b816094; end: 10b8160cb; -[SCStackContainerPresentationStyleBuilder withDefaultPresentationStyle:] */

long FUN_10b816094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b8160cc; end: 10b816103; -[SCStackContainerPresentationStyleBuilder withDefaultDismissalStyle:] */

long FUN_10b8160cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b816104; end: 10b81613b; -[SCStackContainerPresentationStyleBuilder withAppearanceStyle:] */

long FUN_10b816104(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b81613c; end: 10b816173; -[SCStackContainerPresentationStyleBuilder withDisappearanceStyle:] */

long FUN_10b81613c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10b816174; end: 10b8161bb; -[SCStackContainerPresentationStyleBuilder .cxx_destruct] */

void FUN_10b816174(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8161bc; end: 10b8161c3; -[SCComposerServices asyncValdiRuntime] */

undefined8 FUN_10b8161bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b8161c4; end: 10b8161f3; -[SCComposerServices .cxx_destruct] */

void FUN_10b8161c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b8161f4; end: 10b81620b; -[SCUserScopedValdiRuntimeServices .cxx_destruct] */

void FUN_10b8161f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b81620c; end: 10b816217; -[SIGNotificationServices .cxx_destruct] */

void FUN_10b81620c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b816218; end: 10b816263;  */

undefined8 FUN_10b816218(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b816264; end: 10b81635b;  */

double FUN_10b816264(double param_1)

{
  double dVar1;
  
  dVar1 = param_1;
  FUN_10b816218();
  FUN_10b816218();
  FUN_10b816218();
  FUN_10b816218();
  return (double)(long)(param_1 * dVar1) / dVar1;
}



/* Entry: 10b81635c; end: 10b816427;  */

double FUN_10b81635c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_3;
  _CGRectGetMinX(param_3,param_4,param_5,param_6);
  dVar2 = param_3;
  _CGRectGetWidth(param_3,param_4,param_5,param_6);
  _CGRectGetMinY(param_3,param_4,param_5,param_6);
  _CGRectGetHeight(param_3,param_4,param_5,param_6);
  return dVar1 + (dVar2 - param_1) * 0.5;
}



/* Entry: 10b816428; end: 10b81642f;  */

long FUN_10b816428(double param_1)

{
  return (long)param_1;
}


