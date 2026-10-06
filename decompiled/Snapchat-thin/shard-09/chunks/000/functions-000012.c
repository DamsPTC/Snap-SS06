/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067faf54; end: 1067fb0af; -[SCActiveUserNGSNavigationRouter setCameraChromeVisible:] */

void FUN_1067faf54(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar1 = *(long *)(param_1 + 0x188);
  func_0x00010c0e00e0(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70f0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010010fab4();
  lVar5 = lVar1;
  if ((int)lVar2 == 0) {
    lVar5 = 0;
  }
  _objc_retain(lVar5);
  lVar3 = lVar1;
  func_0x00010bf38e80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010010fab4();
  lVar2 = lVar3;
  if ((int)lVar4 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar3);
  lVar3 = lVar5;
  func_0x00010bfb4340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar3;
  func_0x00010c0841c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c084de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010c1a7f60(lVar4);
  if (((param_3 & 1) == 0) && (lVar4 != 0)) {
    puVar6 = PTR_PTR_1126ce4d8;
    func_0x00010c071980();
    if ((int)puVar6 != 0) {
      FUN_1067fb0b0(lVar4);
    }
  }
  lVar5 = lVar2;
  func_0x00010bfdf5e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fb0b0; end: 1067fb29b;  */

void FUN_1067fb0b0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfc1c00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar5 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      uVar7 = *(undefined8 *)(uVar8 * 8);
      uVar4 = uVar7;
      func_0x00010c071800();
      if ((int)uVar4 != 0) {
        func_0x00010c195460(uVar7);
        func_0x00010c195460(uVar7);
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    uVar5 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIControl_1126c3e60;
  _objc_opt_class(PTR__OBJC_CLASS___UIControl_1126c3e60);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  if ((uVar5 & 1) != 0) {
    func_0x00010bf2f2c0(param_1);
  }
  uVar2 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar5 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      FUN_1067fb0b0(*(undefined8 *)(uVar8 * 8));
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    uVar5 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_1 + 0x1a0) == 2) {
    uVar4 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c0e00e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b00();
    func_0x00010bf941a0(uVar4);
    uVar5 = *(ulong *)(param_1 + 0x140);
    func_0x0001008cc9ec();
    if ((uVar5 & 1) == 0) {
      func_0x00010c24fc40(*(undefined8 *)(param_1 + 0x1d8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1067fb29c; end: 1067fb313; -[SCActiveUserNGSNavigationRouter activateCamera] */

void FUN_1067fb29c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x1a0) == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c0e00e0(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b00();
    func_0x00010bf941a0(uVar1);
    uVar2 = *(ulong *)(param_1 + 0x140);
    func_0x0001008cc9ec();
    if ((uVar2 & 1) == 0) {
      func_0x00010c24fc40(*(undefined8 *)(param_1 + 0x1d8),param_2,0x1f);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1067fb314; end: 1067fb343; -[SCActiveUserNGSNavigationRouter ensureMainScreenIsPresented] */

void FUN_1067fb314(long param_1)

{
  if ((*(long *)(param_1 + 0x1a0) == -1) && (*(long *)(param_1 + 0x1b0) == -1)) {
                    /* WARNING: Could not recover jumptable at 0x00010be7ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__presentSwipeViewType_fromUserIn_11257d538,2,0,0,0);
    return;
  }
  return;
}



/* Entry: 1067fb344; end: 1067fb37b; -[SCActiveUserNGSNavigationRouter showLaunchScreenAnimated:completion:] */

void FUN_1067fb344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be48760();
                    /* WARNING: Could not recover jumptable at 0x00010be7ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentSwipeViewType_fromUserIn_11257d538,uVar1,0,param_3,0);
  return;
}



/* Entry: 1067fb37c; end: 1067fb383; -[SCActiveUserNGSNavigationRouter _launchSwipeViewType] */

undefined8 FUN_1067fb37c(void)

{
  return 2;
}



/* Entry: 1067fb384; end: 1067fb4b7; -[SCActiveUserNGSNavigationRouter showLaunchScreenAnimated:defaultTabType:completion:] */

void FUN_1067fb384(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  _objc_retain(param_5);
  if (param_4 < 3) {
    if (param_4 == 1) {
      if ((*(long *)(param_1 + 800) != 1) ||
         (uVar1 = param_1, func_0x00010be41880(), (uVar1 & 1) != 0)) {
        func_0x00010c2384a0(*(undefined8 *)(param_1 + 0x428),param_2,0,1,0,param_5,
                            *(undefined8 *)(param_1 + 0x1d8));
        goto LAB_1067fb494;
      }
    }
    else if (param_4 == 2) {
      func_0x00010c237940(*(undefined8 *)(param_1 + 0x430),param_2,param_5);
      goto LAB_1067fb494;
    }
  }
  else if (param_4 != 3) {
    if (param_4 == 4) {
      uVar1 = param_1;
      func_0x00010be41880();
      if ((int)uVar1 != 0) goto LAB_1067fb484;
    }
    else {
      if ((param_4 != 5) || (uVar1 = param_1, func_0x00010be41880(), (int)uVar1 != 0))
      goto LAB_1067fb484;
      if ((*(long *)(param_1 + 800) != 1) && (uVar1 = param_1, func_0x00010be18f00(), uVar1 != 5)) {
        uVar1 = param_1;
        func_0x00010be17dc0();
        if (uVar1 == 5) {
          func_0x00010be62320(param_1,param_2,param_5);
        }
        else {
          func_0x00010be62300(param_1,param_2,param_5);
        }
        goto LAB_1067fb494;
      }
    }
    func_0x00010be62340(param_1,param_2,param_5);
    goto LAB_1067fb494;
  }
LAB_1067fb484:
  func_0x00010c236600(*(undefined8 *)(param_1 + 0x438),param_2,0,param_5);
LAB_1067fb494:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1067fb4b8; end: 1067fb557; -[SCActiveUserNGSNavigationRouter showSpectaclesLensSearchResultWithLensId:] */

void FUN_1067fb4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cb710;
  _objc_opt_class(PTR_PTR_1126cb710);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c158c60(uVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fb558; end: 1067fb62f; -[SCActiveUserNGSNavigationRouter _showCameraAndScrollToMemories:] */

void FUN_1067fb558(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x438);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2366c0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fb630; end: 1067fb6db;  */

void FUN_1067fb630(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x458);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar2);
      func_0x00010c152480(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 1067fb6dc; end: 1067fb6ef;  */

void FUN_1067fb6dc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067fb6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067fb6f0; end: 1067fb7df; -[SCActiveUserNGSNavigationRouter showLocationSharingSettings] */

void FUN_1067fb6f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x418) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126c3158;
  _objc_alloc(PTR_PTR_1126c3158);
  func_0x00010c0583c0();
  lVar2 = param_1 + 0x118;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf21f80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x418);
  *(long *)(param_1 + 0x418) = lVar5;
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c08bd40(*(undefined8 *)(param_1 + 0x418));
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067fb7e0; end: 1067fb9f7; -[SCActiveUserNGSNavigationRouter showConversationWithId:deepLinkURL:sourceType:entryEvent:sourceNotification:pannableCellController:inExistingContext:animated:] */

void FUN_1067fb7e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  byte param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte bStack_6f;
  undefined1 auStack_68 [8];
  
  ppuVar1 = &puStack_d0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_68,param_1);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1067fb9f8;
  puStack_b8 = &UNK_110941180;
  _objc_copyWeak(auStack_90,auStack_68);
  _objc_retain(param_3);
  uStack_b0 = param_3;
  _objc_retain(param_4);
  uStack_a8 = param_4;
  uStack_88 = param_5;
  uStack_80 = param_6;
  _objc_retain(param_8);
  uStack_a0 = param_8;
  _objc_retain(param_7);
  bStack_6f = param_9;
  uStack_98 = param_7;
  uStack_78 = param_2;
  _objc_retainBlock();
  if (((param_9 & 1) == 0) &&
     ((*(long *)(param_1 + 0x1a0) == 2 || (*(long *)(param_1 + 0x1a0) == -1)))) {
    uVar2 = *(undefined8 *)(param_1 + 0x2a0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf7fec0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      func_0x00010c237960(*(undefined8 *)(param_1 + 0x430));
    }
    else {
      func_0x00010bebb580(param_1);
    }
  }
  else {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fb9f8; end: 1067fbd27;  */

void FUN_1067fb9f8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1067fbd28;
    puStack_b8 = &UNK_110941120;
    _objc_copyWeak(auStack_90,param_1 + 0x40);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uStack_b0 = uVar8;
    _objc_retain(uVar9);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uStack_a8 = uVar9;
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = uVar8;
    _objc_retain(uVar9);
    uStack_78 = *(undefined1 *)(param_1 + 0x60);
    ppuVar3 = &puStack_d0;
    uStack_98 = uVar9;
    _objc_retainBlock();
    lVar4 = lVar2 + 0x20;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_retain(lVar6);
    lVar4 = lVar6;
    func_0x00010010fab4(lVar6,PTR_DAT_1126a5650);
    _objc_release(lVar6);
    iVar10 = 0;
    if (lVar6 != 0) {
      iVar10 = (int)lVar4;
    }
    if (iVar10 == 1) {
      _objc_retain(lVar6);
      func_0x00010bf84160(lVar6);
      _objc_release(lVar6);
    }
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1067fbd88;
    puStack_f8 = &UNK_110941150;
    _objc_copyWeak(auStack_e8,param_1 + 0x40);
    uStack_d8 = *(undefined1 *)(param_1 + 0x61);
    uStack_e0 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(ppuVar3);
    ppuVar7 = &puStack_110;
    ppuStack_f0 = ppuVar3;
    _objc_retainBlock();
    lVar4 = lVar2 + 0x20;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    while (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x00010c06d1a0();
      if ((int)lVar4 != 0) {
        lVar4 = lVar5;
        func_0x00010c27a780();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          _objc_retain(ppuVar7);
          func_0x00010bf02c20(lVar4);
          _objc_release(ppuVar7);
          _objc_release(lVar4);
          goto LAB_1067fbc70;
        }
        break;
      }
      lVar4 = lVar5;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = lVar4;
    }
    (*(code *)ppuVar7[2])(ppuVar7);
LAB_1067fbc70:
    _objc_release(lVar5);
    _objc_release(ppuVar7);
    _objc_release(ppuStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_release(lVar6);
    _objc_release(ppuVar3);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 1067fbd28; end: 1067fbd87;  */

void FUN_1067fbd28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9bb40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fbd88; end: 1067fbe83;  */

void FUN_1067fbd88(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        _objc_release(lVar2);
      }
      else {
        uVar4 = lVar1 + 0x20;
        _objc_loadWeakRetained();
        uVar5 = uVar4;
        func_0x00010c10f940();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c06d1a0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        if ((uVar6 & 1) == 0) {
          lVar2 = lVar1 + 0x20;
          _objc_loadWeakRetained(lVar2);
          func_0x00010be03a80(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x30),0,
                              *(undefined8 *)(param_1 + 0x20));
          _objc_release(lVar2);
          goto LAB_1067fbe68;
        }
      }
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
LAB_1067fbe68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fbe84; end: 1067fbe8f;  */

void FUN_1067fbe84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067fbe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1067fbe90; end: 1067fbe97; -[SCActiveUserNGSNavigationRouter showFriendFeedWithDiscoverNotification:] */

void FUN_1067fbe90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c237990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x430),PTR_s_showFriendsFeedWithNotification__11266b888);
  return;
}



/* Entry: 1067fbe98; end: 1067fbebf; -[SCActiveUserNGSNavigationRouter showConversationWithId:deepLinkURL:sourceType:entryEvent:pannableCellController:] */

void FUN_1067fbe98(void)

{
  func_0x00010be9bb40();
  return;
}



/* Entry: 1067fbec0; end: 1067fc1b3; -[SCActiveUserNGSNavigationRouter _scope_showConversationWithId:deepLinkURL:sourceType:entryEvent:pannableCellController:notification:interactivePresentation:animated:] */

void FUN_1067fbec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b41f8;
  _objc_retain(param_8);
  _objc_retain(param_3);
  func_0x00010c13a640(puVar1,param_2,param_4);
  func_0x00010687a758(param_5);
  puVar1 = PTR_PTR_1126b3520;
  _objc_alloc(PTR_PTR_1126b3520);
  func_0x00010bffdd20();
  func_0x00010c1ba7a0();
  _objc_release(param_8);
  puVar2 = PTR_PTR_1126cb610;
  _objc_alloc(PTR_PTR_1126cb610);
  func_0x00010c038820();
  puVar3 = PTR_PTR_1126b3528;
  _objc_alloc(PTR_PTR_1126b3528);
  func_0x00010bff5020();
  _objc_release(param_3);
  lVar4 = param_1 + 0x78;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  if (lVar8 == 0) {
    _objc_release(lVar4);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x228);
    _objc_release();
    _objc_release(lVar4);
    if (lVar8 != 0) {
      func_0x00010bf5e4c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c0d66a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2f360(*(undefined8 *)(param_1 + 0x230));
      func_0x00010c167e40(*(undefined8 *)(param_1 + 0x230),param_2,param_9._1_1_);
      func_0x00010c1d8ee0(*(undefined8 *)(param_1 + 0x230),param_2,param_7);
      func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x230),param_2,lVar5);
      func_0x00010c224700(*(undefined8 *)(param_1 + 0x230),param_2,(undefined1)param_9);
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x228),param_2,puVar3);
      goto LAB_1067fc150;
    }
  }
  func_0x00010bf5e4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b3530;
  _objc_alloc();
  func_0x00010c038f40();
  uVar7 = *(undefined8 *)(param_1 + 0x230);
  *(undefined **)(param_1 + 0x230) = puVar6;
  _objc_release(uVar7);
  func_0x00010c167e40(*(undefined8 *)(param_1 + 0x230),param_2,param_9._1_1_);
  func_0x00010c1d8ee0(*(undefined8 *)(param_1 + 0x230),param_2,param_7);
  func_0x00010c224700(*(undefined8 *)(param_1 + 0x230),param_2,(undefined1)param_9);
  puVar6 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar7 = *(undefined8 *)(param_1 + 0x228);
  *(undefined **)(param_1 + 0x228) = puVar6;
  _objc_release(uVar7);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x228),param_2,puVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf22b20(uVar7,param_2,*(undefined8 *)(param_1 + 0x228),param_1,
                      *(undefined8 *)(param_1 + 0x230));
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar8);
  func_0x00010bf9d620();
  _objc_release(lVar8);
  _objc_release(uVar7);
LAB_1067fc150:
  _objc_release(lVar4);
  _objc_release(lVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x230);
  func_0x00010c068e00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1067fc1b4; end: 1067fc277; -[SCActiveUserNGSNavigationRouter showConversationFromAdWithDeeplinkURL:] */

void FUN_1067fc1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d6e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236cc0(param_1,param_2,puVar3,param_3,0x51,7,0,0,0x101);
  _objc_release(param_3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067fc278; end: 1067fc2bf; -[SCActiveUserNGSNavigationRouter chatScopeDidDismiss:] */

void FUN_1067fc278(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x230);
  func_0x00010c0f3720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f3740(0x3ff0000000000000);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x278),PTR_s_setNeedsCustomStatusBarStyleCont_112650970);
  return;
}



/* Entry: 1067fc2c0; end: 1067fc42f; -[SCActiveUserNGSNavigationRouter showFamilyCenterWithChildId:openPlaceAlerts:] */

void FUN_1067fc2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5e4c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3530;
  _objc_alloc(PTR_PTR_1126b3530);
  func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x00010c038f40(puVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x340);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde6a40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uStack_50 = param_4;
  _objc_copyWeak(auStack_58,auStack_48);
  func_0x00010c08c020(uVar3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fc430; end: 1067fc46b;  */

void FUN_1067fc430(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be47ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1067fc46c; end: 1067fc4c3; -[SCActiveUserNGSNavigationRouter _launchPlaceAlerts] */

void FUN_1067fc46c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce4e0;
  _objc_alloc_init(PTR_PTR_1126ce4e0);
  uVar2 = *(undefined8 *)(param_1 + 0x340);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c080();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067fc4c4; end: 1067fc567; -[SCActiveUserNGSNavigationRouter _constructFamilyCenterLaunchCommandWithChildId:] */

void FUN_1067fc4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b0ea8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b6558;
  _objc_opt_new(PTR_PTR_1126b6558);
  func_0x00010c19ce20();
  _objc_release(param_3);
  func_0x00010c19a1a0(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b6378;
  _objc_opt_new(PTR_PTR_1126b6378);
  func_0x00010c206c40();
  func_0x00010c18a720(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067fc568; end: 1067fc62b; -[SCActiveUserNGSNavigationRouter showMemories:] */

void FUN_1067fc568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010bebb560(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1067fc62c; end: 1067fc677;  */

void FUN_1067fc62c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c152480(*(undefined8 *)(lVar1 + 0x458),param_2,1,*(undefined8 *)(param_1 + 0x28),0,0
                        ,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fc678; end: 1067fc733; -[SCActiveUserNGSNavigationRouter showMemoriesSettingsForBackup] */

void FUN_1067fc678(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c02e4c0(puVar2,param_2,lVar1);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b22b0;
  _objc_alloc(PTR_PTR_1126b22b0);
  func_0x00010c057380();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x2b0),param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067fc734; end: 1067fc75b; -[SCActiveUserNGSNavigationRouter showMemoriesFeaturedTab] */

void FUN_1067fc734(long param_1,undefined8 param_2)

{
  func_0x00010c2384e0(param_1,param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010c152030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x458),PTR_s_scrollGalleryToFeaturedTab_112632228);
  return;
}



/* Entry: 1067fc75c; end: 1067fc783; -[SCActiveUserNGSNavigationRouter showMemoriesScreenshotsTab] */

void FUN_1067fc75c(long param_1,undefined8 param_2)

{
  func_0x00010c2384e0(param_1,param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010c152050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x458),PTR_s_scrollGalleryToScreenshotsTab_112632230);
  return;
}



/* Entry: 1067fc784; end: 1067fc827; -[SCActiveUserNGSNavigationRouter showMemoriesQuickCut] */

void FUN_1067fc784(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010beb83a0(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1067fc828; end: 1067fc85b;  */

void FUN_1067fc828(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0e9640(*(undefined8 *)(param_1 + 0x458));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067fc85c; end: 1067fc90f; -[SCActiveUserNGSNavigationRouter showMemoriesDreamsTabWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:] */

void FUN_1067fc85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2384e0(param_1,param_2,4);
  func_0x00010c152000(*(undefined8 *)(param_1 + 0x458),param_2,param_3,param_4,param_5,param_6,
                      param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fc910; end: 1067fca83; -[SCActiveUserNGSNavigationRouter showMemoriesOperaWithDestinationInfo:notificationId:notificationName:openSource:] */

void FUN_1067fc910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x358);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_60 = param_6;
  func_0x00010bebb560(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fca84; end: 1067fcb03;  */

void FUN_1067fca84(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010bfb0140(PTR_PTR_1126b24e0,param_2,&PTR____CFConstantStringClassReference_110ef8978,
                        &PTR____CFConstantStringClassReference_110ef8ab8,
                        *(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bfb0140(PTR_PTR_1126b24e0,param_2,&PTR____CFConstantStringClassReference_110ef8978,
                        &PTR____CFConstantStringClassReference_110dab0d8,
                        *(undefined8 *)(param_1 + 0x20));
    func_0x00010bfd0ca0(*(undefined8 *)(lVar1 + 0x458),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fcb04; end: 1067fcbc7; -[SCActiveUserNGSNavigationRouter showDataSaverSettings] */

void FUN_1067fcb04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b0ea8;
  _objc_opt_new(PTR_PTR_1126b0ea8);
  puVar2 = PTR_PTR_1126ce4e8;
  _objc_opt_new(PTR_PTR_1126ce4e8);
  func_0x00010c189820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c02e4c0(puVar2,param_2,lVar3);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x340);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067fcbc8; end: 1067fcbcf; -[SCActiveUserNGSNavigationRouter showMemoriesSpectaclesTab] */

void FUN_1067fcbc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showMemoriesSpectaclesTabWithCo_11258c0e8,0)
  ;
  return;
}



/* Entry: 1067fcbd0; end: 1067fcca3; -[SCActiveUserNGSNavigationRouter _showMemoriesSpectaclesTabWithCompletionBlock:] */

void FUN_1067fcbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010beb83a0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fcca4; end: 1067fcd33;  */

void FUN_1067fcca4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x458);
    func_0x00010bfbde40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x160);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1038e0();
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,uVar3,uVar2);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fcd34; end: 1067fcd47; -[SCActiveUserNGSNavigationRouter showSpectaclesManagement] */

void FUN_1067fcd34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showMemoriesSpectaclesTabWithCo_11258c0e8,
             &PTR___NSConcreteGlobalBlock_110941230);
  return;
}



/* Entry: 1067fcd48; end: 1067fcd5b; -[SCActiveUserNGSNavigationRouter showSpectaclesOTAUpdatePage] */

void FUN_1067fcd48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showMemoriesSpectaclesTabWithCo_11258c0e8,
             &PTR___NSConcreteGlobalBlock_110941250);
  return;
}



/* Entry: 1067fcd5c; end: 1067fcd6f; -[SCActiveUserNGSNavigationRouter showSpectaclesSettings] */

void FUN_1067fcd5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showMemoriesSpectaclesTabWithCo_11258c0e8,
             &PTR___NSConcreteGlobalBlock_110941270);
  return;
}



/* Entry: 1067fcd70; end: 1067fcd83; -[SCActiveUserNGSNavigationRouter showSpectaclesContentPage] */

void FUN_1067fcd70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showMemoriesSpectaclesTabWithCo_11258c0e8,
             &PTR___NSConcreteGlobalBlock_110941290);
  return;
}



/* Entry: 1067fcd84; end: 1067fce07; -[SCActiveUserNGSNavigationRouter showSpectaclesPreviewForSnapId:] */

void FUN_1067fcd84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067fce08;
  puStack_30 = &UNK_1109412b0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010beb9d00(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fce08; end: 1067fce17;  */

void FUN_1067fce08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10db30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_presentPreviewForSnapId_fromView_1126210e8,
             *(undefined8 *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 1067fce18; end: 1067fce5f; -[SCActiveUserNGSNavigationRouter memoriesSettingsUIWillDismiss] */

void FUN_1067fce18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x2b0));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067fce60; end: 1067fce73; -[SCActiveUserNGSNavigationRouter startSpectaclesManualProxyFlow] */

void FUN_1067fce60(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb9d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__showMemoriesSpectaclesTabWithCo_11258c0e8,
             &PTR___NSConcreteGlobalBlock_1109412e0);
  return;
}



/* Entry: 1067fce74; end: 1067fce8b; -[SCActiveUserNGSNavigationRouter showMyProfileWithRecentStory:showRecentPublicStoryOnOpen:] */

void FUN_1067fce74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be048d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayMyProfileWithAnimated_no_11255ebd0,1,0,param_3,param_4,0);
  return;
}



/* Entry: 1067fce8c; end: 1067fcf13; -[SCActiveUserNGSNavigationRouter showShareMyProfile] */

void FUN_1067fce8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc130;
  _objc_alloc(PTR_PTR_1126cc130);
  _CACurrentMediaTime();
  func_0x00010c04ac20(puVar1,param_2,&PTR____CFConstantStringClassReference_110f59bb8,0x1a);
  func_0x00010be048a0(param_1,param_2,1,0,puVar1,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067fcf14; end: 1067fcf2b; -[SCActiveUserNGSNavigationRouter showBitmojiIdentityViewInMyProfile] */

void FUN_1067fcf14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be048d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayMyProfileWithAnimated_no_11255ebd0,1,0,0,0,1);
  return;
}



/* Entry: 1067fcf2c; end: 1067fcf5b; -[SCActiveUserNGSNavigationRouter _displayMyProfileWithAnimated:notification:showRecentStoryOnOpen:showRecentPublicStoryOnOpen:showBitmojiIdentityViewOnOpen:] */

void FUN_1067fcf2c(void)

{
  func_0x00010be048a0();
  return;
}



/* Entry: 1067fcf5c; end: 1067fd33b; -[SCActiveUserNGSNavigationRouter _displayMyProfileWithAnimated:notification:openingData:showRecentStoryOnOpen:showRecentPublicStoryOnOpen:showBitmojiIdentityViewOnOpen:profile3DeeplinkPayload:] */

void FUN_1067fcf5c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 in_stack_00000000;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000000);
  if (param_4 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar2 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar18);
    uVar1 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar18 = PTR_PTR_1126ce4f0;
    _objc_alloc();
    uVar2 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c15f540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_4;
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010c0dc200(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_4;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c440();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  lVar14 = param_1 + 0x288;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar14);
  if (lVar15 == 0) {
    func_0x00010bf967a0(param_1);
    if (*(long *)(param_1 + 800) == 1) {
      uVar16 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf668c0(uVar16);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x180);
      func_0x00010c15a180(uVar16);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar17 = PTR_PTR_1126b3550;
    _objc_alloc(PTR_PTR_1126b3550);
    func_0x00010c0097c0();
    func_0x00010c1e3ec0();
    lVar14 = param_1 + 0xd8;
    _objc_loadWeakRetained(lVar14);
    func_0x00010c1815c0(puVar17);
    _objc_release(lVar14);
    lVar14 = param_1 + 0xe0;
    _objc_loadWeakRetained(lVar14);
    func_0x00010c181600(puVar17);
    _objc_release(lVar14);
    param_1 = param_1 + 0x288;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    _objc_release(puVar17);
    _objc_release(uVar16);
  }
  _objc_release(puVar18);
  _objc_release(in_stack_00000000);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067fd33c; end: 1067fd47f; -[SCActiveUserNGSNavigationRouter showFriendProfileWithUserID:launchBehavior:] */

void FUN_1067fd33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x280;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x280;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126b1c10;
  _objc_alloc(PTR_PTR_1126b1c10);
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  puVar4 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c015a00();
  }
  param_1 = param_1 + 0x280;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fd480; end: 1067fd5af; -[SCActiveUserNGSNavigationRouter showPublicProfileManagementForNotification:] */

void FUN_1067fd480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c2a14c0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fd5b0; end: 1067fd5eb;  */

void FUN_1067fd5b0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be37a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067fd5ec; end: 1067fd75b; -[SCActiveUserNGSNavigationRouter _impalaHandlerDataReadyForNotification:] */

void FUN_1067fd5ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf25180();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0b7ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bfd3240(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fd75c; end: 1067fd7df;  */

void FUN_1067fd75c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bf25020(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010beba780(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067fd7e0; end: 1067fd7e7; -[SCActiveUserNGSNavigationRouter showPublicProfileManagementForBusinessProfileId:] */

void FUN_1067fd7e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showPublicProfileManagementForBu_11266bff8,param_3,0);
  return;
}



/* Entry: 1067fd7e8; end: 1067fd8d3; -[SCActiveUserNGSNavigationRouter showMyPublicProfileManagement] */

void FUN_1067fd7e8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x1a0);
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b12d0;
  func_0x00010c24b8e0(PTR_PTR_1126b12d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f320();
  _objc_release(puVar2);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x318);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (((lVar7 == 5) && ((int)uVar3 != 0)) && (lVar6 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c2394f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showProfileManagementWithProfile_11266bf60)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2389d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showMyProfileWithRecentStory_sho_11266bc98,0,0);
  return;
}



/* Entry: 1067fd8d4; end: 1067fda2b; -[SCActiveUserNGSNavigationRouter showPublicProfileManagementForBusinessProfileId:defaultTab:] */

void FUN_1067fd8d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf25180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2a14c0(lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067fda2c; end: 1067fda67;  */

void FUN_1067fda2c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be37a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067fda68; end: 1067fdc37; -[SCActiveUserNGSNavigationRouter showProfileOnboardingWithType:actionContext:] */

void FUN_1067fda68(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = *(long *)(param_1 + 0x2c0);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1067fdc38;
    puStack_80 = &UNK_110941330;
    _objc_copyWeak(auStack_78,auStack_68);
    uStack_70 = param_4 == 6;
    _objc_copyWeak(auStack_a8,auStack_68);
    uStack_a0 = param_4 == 6;
    func_0x00010c0311a0();
    uVar3 = *(undefined8 *)(param_1 + 0x2c8);
    *(undefined **)(param_1 + 0x2c8) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x2c0);
    _objc_retain(uVar3);
    puVar2 = PTR_PTR_1126b1098;
    _objc_alloc(PTR_PTR_1126b1098);
    func_0x00010c058a20();
    func_0x00010bf9d620(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 1067fdc38; end: 1067fde1f;  */

void FUN_1067fdc38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c1c8b80(param_2);
  func_0x00010c1c8c00(param_2);
  if (lVar1 == 0) goto LAB_1067fddf8;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar2);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar3 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 == 0) goto LAB_1067fdd78;
    lVar4 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar4;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_retain(param_2);
    _objc_retain(lVar3);
    func_0x00010c10eda0(lVar3);
    _objc_release(lVar3);
  }
  else {
LAB_1067fdd78:
    lVar3 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    _objc_retain(param_2);
    _objc_retain(lVar3);
    func_0x00010c10eda0(lVar3);
    _objc_release(lVar3);
  }
  _objc_release(param_2);
  _objc_release(lVar3);
LAB_1067fddf8:
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1067fde20; end: 1067fde8f;  */

void FUN_1067fde20(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067fde90; end: 1067fdf67;  */

void FUN_1067fde90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1067fdf4c;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_1067fdf2c;
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar3);
  }
  else {
LAB_1067fdf2c:
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf84b00();
  }
  _objc_release(lVar2);
LAB_1067fdf4c:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067fdf68; end: 1067fdf87;  */

void FUN_1067fdf68(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1067fdf88; end: 1067fe08f; -[SCActiveUserNGSNavigationRouter showPublicProfileWithBusinessProfileId:profileType:sourcePageType:] */

void FUN_1067fdf88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b0f10;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c033440();
  puVar2 = puVar1;
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cc1d0;
  _objc_opt_class(PTR_PTR_1126cc1d0);
  puVar4 = puVar2;
  func_0x00010beecc40(puVar2,param_2,puVar3,&PTR___NSConcreteGlobalBlock_110941390);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010bfe63a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfe9fe0(puVar2,param_2,param_3,0,puVar1,param_1,0,0);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067fe090; end: 1067fe097;  */

void FUN_1067fe090(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfea170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_impalaPublicProfilePresentationH_1125d8220);
  return;
}



/* Entry: 1067fe098; end: 1067fe25b; -[SCActiveUserNGSNavigationRouter showProfileManagementWithDeeplinkAction:] */

void FUN_1067fe098(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  lVar2 = *(long *)(param_1 + 0x318);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x140);
    func_0x000108fab270();
    if (iVar1 == 0) {
      func_0x00010be048c0(param_1);
      _objc_initWeak(auStack_48,param_1);
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010bf25180();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0b7dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = param_3;
      func_0x00010c2a14c0(lVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
    else {
      puVar4 = PTR_PTR_1126ce4f8;
      func_0x00010c116d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be048a0(param_1);
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 1067fe25c; end: 1067fe2af;  */

void FUN_1067fe25c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (lVar1 != 0)) {
    func_0x00010be37a40(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),0,
                        *(undefined4 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fe2b0; end: 1067fe2b7; -[SCActiveUserNGSNavigationRouter showCameraAndPreSelectSpotlight] */

void FUN_1067fe2b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2365f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x438),PTR_s_showCameraAndPreSelectSpotlight_11266b3a0);
  return;
}



/* Entry: 1067fe2b8; end: 1067fe2bf; -[SCActiveUserNGSNavigationRouter showCameraAIModeWithPrompt:] */

void FUN_1067fe2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x438),PTR_s_showCameraAIModeWithPrompt__11266b370);
  return;
}



/* Entry: 1067fe2c0; end: 1067fe3bb; -[SCActiveUserNGSNavigationRouter showNotificationCenterWithBellIconLastSeenTimestamp:bellIconIsBadged:] */

void FUN_1067fe2c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078dc0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    func_0x00010bdea560(param_1);
    lVar4 = *(long *)(param_1 + 0x398);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x318);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = 1;
      func_0x000100c6f294(1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10b020(lVar4,param_2,uVar2,uVar3,param_3,param_4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
    }
  }
  else {
    func_0x00010be7cd00(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fe3bc; end: 1067fe53b; -[SCActiveUserNGSNavigationRouter _showNotificationCenterWithNotification:] */

void FUN_1067fe3bc(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c078dc0();
  _objc_release(uVar1);
  if ((int)uVar8 == 0) {
    func_0x00010bdea560(param_1);
    uVar2 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c08fa60();
    if (uVar3 != 0) {
      lVar6 = *(long *)(param_1 + 0x3b0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c266a40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      if (lVar7 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x398);
        lVar6 = lVar7;
        func_0x00010bf25020(lVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = 1;
        func_0x000100c6f294(1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c235a00(uVar1);
        _objc_release(uVar8);
        _objc_release(lVar6);
      }
      _objc_release(lVar7);
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010be7cd00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fe53c; end: 1067fe5ff; -[SCActiveUserNGSNavigationRouter _presentNotificationCenter] */

void FUN_1067fe53c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_1;
  func_0x00010bf5e4c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126b3530;
      _objc_alloc(PTR_PTR_1126b3530);
      func_0x00010c038f40();
      uVar4 = *(undefined8 *)(param_1 + 0x3a8);
      func_0x00010bf24820();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf22520();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x3a0);
      *(undefined8 *)(param_1 + 0x3a0) = uVar5;
      _objc_release(uVar6);
      _objc_release(uVar4);
      func_0x00010c10ae00(*(undefined8 *)(param_1 + 0x3a0));
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067fe600; end: 1067fe60f; -[SCActiveUserNGSNavigationRouter notificationCenterDidDismiss] */

void FUN_1067fe600(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067fe610; end: 1067fe75f; -[SCActiveUserNGSNavigationRouter _createActivityFeedIfNeeded] */

void FUN_1067fe610(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x398) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x318);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x318);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aafc0();
  }
  else {
    lVar3 = *(long *)(param_1 + 0x3b0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c266a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar1 != 0) {
      lVar3 = param_1;
      func_0x00010bf5e4c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b0f70;
      _objc_alloc();
      uVar6 = *(undefined8 *)(param_1 + 0x3b8);
      lVar5 = lVar1;
      func_0x00010bf25020(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff0f00(puVar4,param_2,uVar6,lVar3,lVar5,0,0);
      uVar6 = *(undefined8 *)(param_1 + 0x398);
      *(undefined **)(param_1 + 0x398) = puVar4;
      _objc_release(uVar6);
      _objc_release(lVar5);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1067fe760; end: 1067fe863; -[SCActiveUserNGSNavigationRouter showAddFriends] */

void FUN_1067fe760(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x1f8) == 0) {
    puVar1 = PTR_PTR_1126ce500;
    _objc_alloc();
    lVar2 = param_1 + 0x468;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + 0x460;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04b960();
    uVar6 = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined **)(param_1 + 0x1f8) = puVar1;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be6cdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__openAddFriendsCardWithPlacement_112578d18,
             *(undefined8 *)(param_1 + 0x360),0,0);
  return;
}



/* Entry: 1067fe864; end: 1067fe86b; -[SCActiveUserNGSNavigationRouter showAddFriendsWithPlacementType:] */

void FUN_1067fe864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_showAddFriendsWithPlacementType__11266b0e8,param_3,0);
  return;
}



/* Entry: 1067fe86c; end: 1067fea57; -[SCActiveUserNGSNavigationRouter showAddFriendsWithPlacementType:friendRequestId:] */

void FUN_1067fe86c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x1f8) == 0) {
    puVar1 = PTR_PTR_1126ce500;
    _objc_alloc();
    lVar2 = param_1 + 0x468;
    _objc_loadWeakRetained(lVar2);
    lVar3 = param_1 + 0x460;
    _objc_loadWeakRetained(lVar3);
    lVar4 = param_1 + 0x90;
    _objc_loadWeakRetained(lVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf668c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04b960();
    uVar6 = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined **)(param_1 + 0x1f8) = puVar1;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  if (param_3 - 0x1aU < 4) {
    _objc_initWeak(auStack_68,param_1);
    _objc_copyWeak(auStack_80,auStack_68);
    uStack_70 = param_3 == 0x47;
    _objc_retain(param_4);
    lStack_78 = param_3;
    func_0x00010bebb560(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010be6cde0(param_1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1067fea58; end: 1067feac7;  */

void FUN_1067fea58(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c08fa60();
      if (lVar2 != 0) {
        func_0x00010c13c5e0(PTR_PTR_1126ce508,param_2,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  else {
    func_0x00010be6cde0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),1,
                        *(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067feac8; end: 1067feba7; -[SCActiveUserNGSNavigationRouter showAllContacts] */

void FUN_1067feac8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x220);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar2,param_2,lVar1,1);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126aeb20;
  _objc_alloc(PTR_PTR_1126aeb20);
  func_0x00010c004720();
  puVar4 = PTR_PTR_1126aeb28;
  _objc_alloc(PTR_PTR_1126aeb28);
  func_0x00010c0581a0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x220),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067feba8; end: 1067febef; -[SCActiveUserNGSNavigationRouter allContactsWorkflowCompleted] */

void FUN_1067feba8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x220);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x220));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067febf0; end: 1067fecdf; -[SCActiveUserNGSNavigationRouter showFindFriendsWithContext:] */

void FUN_1067febf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar3,param_2,lVar1,1);
    _objc_release(lVar1);
    lVar1 = param_1 + 0x218;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf23c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x210),param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067fece0; end: 1067fed27; -[SCActiveUserNGSNavigationRouter findFriendsWorkflowCompleted] */

void FUN_1067fece0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x210);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x210));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067fed28; end: 1067fee67; -[SCActiveUserNGSNavigationRouter _openAddFriendsCardWithPlacementType:isFromNotification:friendRequestId:] */

void FUN_1067fed28(long param_1,undefined8 param_2,long param_3,undefined1 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  if ((param_3 == 0x47) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(param_5);
    uStack_58 = 0x47;
    uStack_50 = param_4;
    func_0x00010bdd15e0(param_1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x1f8);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0e8e60(uVar2);
    _objc_release(param_1);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1067fee68; end: 1067feee7;  */

void FUN_1067fee68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    func_0x00010c13c5e0(PTR_PTR_1126ce508,param_2,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x1f8);
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0e8e60(uVar3,param_2,lVar2,*(undefined1 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),0);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067feee8; end: 1067ff21f; -[SCActiveUserNGSNavigationRouter _autoAcceptLiveActivityFriendRequestWithUserId:completion:] */

void FUN_1067feee8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_3;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126ce508;
  if (lVar5 != 0) {
    lVar5 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar5);
    lVar2 = lVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3900();
    _objc_release(lVar2);
    _objc_release(lVar5);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x00010c13c5e0(PTR_PTR_1126ce508);
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4);
      }
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x200);
      func_0x00010bf4b900();
      if (iVar1 == 0) {
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x200));
        if (param_4 != 0) {
          lVar5 = param_4;
          func_0x00010bf51e00(param_4);
          lVar2 = lVar5;
          _objc_retainBlock();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x208));
          _objc_release(lVar2);
          _objc_release(lVar5);
        }
        _objc_initWeak(auStack_58,param_1);
        puVar3 = PTR_PTR_1126b15c8;
        _objc_alloc(PTR_PTR_1126b15c8);
        func_0x00010c05c0e0();
        puVar4 = PTR_PTR_1126ae5c0;
        func_0x00010befca80(PTR_PTR_1126ae5c0);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + 0x150);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          func_0x00010c13c5e0(PTR_PTR_1126ce508);
          func_0x00010be16f20(param_1);
        }
        else {
          _objc_retain(PTR___dispatch_main_q_11034be20);
          _objc_retain(param_3);
          _objc_copyWeak(auStack_60,auStack_58);
          func_0x00010bef8a80(lVar5);
          _objc_release(PTR___dispatch_main_q_11034be20);
          _objc_destroyWeak(auStack_60);
          _objc_release(param_3);
        }
        _objc_release(lVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_58);
      }
      else if (param_4 == 0) {
        func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x208));
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x208));
      }
      else {
        lVar5 = param_4;
        func_0x00010bf51e00(param_4);
        lVar2 = lVar5;
        _objc_retainBlock();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x208));
        _objc_release(lVar2);
        _objc_release(lVar5);
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067ff220; end: 1067ff297;  */

void FUN_1067ff220(long param_1,ulong param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if ((param_2 & 1) == 0) {
    func_0x00010c13c5e0(PTR_PTR_1126ce508);
  }
  else {
    func_0x00010bf940e0();
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be16f20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ff298; end: 1067ff317; -[SCActiveUserNGSNavigationRouter _finishLiveActivityAutoAcceptWithUserId:] */

void FUN_1067ff298(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x200);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar2,param_2,param_3);
  lVar1 = *(long *)(param_1 + 0x208);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x208),param_2,param_3);
  _objc_release(param_3);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067ff318; end: 1067ff31f; -[SCActiveUserNGSNavigationRouter acceptLiveActivityFriendRequestWithoutOpeningAddFriendsWithUserId:] */

void FUN_1067ff318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd15f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__autoAcceptLiveActivityFriendReq_112551f18,param_3,0);
  return;
}



/* Entry: 1067ff320; end: 1067ff563; -[SCActiveUserNGSNavigationRouter showSearchWithDelegate:source:] */

void FUN_1067ff320(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    if ((param_4 == 1) || ((param_4 == 0 && (*(long *)(param_1 + 0x1a0) == 0)))) {
      puVar5 = PTR_PTR_1126b5f80;
      _objc_alloc(PTR_PTR_1126b5f80);
      lVar1 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar1);
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c038f40(puVar5,param_2,lVar1,puVar6);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x270;
      _objc_loadWeakRetained(lVar1);
      uVar3 = *(undefined8 *)(param_1 + 0x428);
      func_0x00010c0b8e20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf23e80(lVar1,param_2,puVar5,uVar3,param_4 == 1,param_4 == 1,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x268;
    }
    else {
      lVar1 = param_1 + 0x248;
      lVar2 = lVar1;
      _objc_loadWeakRetained();
      lVar4 = lVar2;
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar4 != 0) goto LAB_1067ff548;
      puVar5 = PTR_PTR_1126b5f80;
      _objc_alloc(PTR_PTR_1126b5f80);
      lVar2 = param_1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x00010bf098c0(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x00010c038f40(puVar5,param_2,lVar2,puVar6);
      _objc_release(lVar2);
      param_1 = param_1 + 0x250;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010bf23ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
    }
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf9d620();
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(puVar5);
  }
LAB_1067ff548:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ff564; end: 1067ff613; -[SCActiveUserNGSNavigationRouter dismissSearch] */

void FUN_1067ff564(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + 0x268;
  lVar1 = lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar3 = param_1 + 0x248;
    lVar1 = lVar3;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      return;
    }
  }
  _objc_loadWeakRetained(lVar3);
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1067ff614; end: 1067ff857; -[SCActiveUserNGSNavigationRouter _interactionControllerForPulldownToSearch] */

void FUN_1067ff614(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  uVar1 = *(ulong *)(param_1 + 0x188);
  func_0x00010c0e00e0(uVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70f0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf38e80();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c8d50;
  _objc_opt_class(PTR_PTR_1126c8d50);
  uVar3 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar11);
  uVar4 = uVar2;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar2);
  if (uVar4 == 0) {
    uVar4 = uVar1;
    func_0x00010bf38e80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf38f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    puVar11 = PTR_PTR_1126c8d50;
    _objc_opt_class(PTR_PTR_1126c8d50);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar11);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
  }
  lVar5 = param_1 + 0x298;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0ce100();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c080660();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (((uVar2 == 0) && ((int)lVar9 == 0)) || (uVar4 = uVar2, func_0x00010c0985c0(), (int)uVar4 != 0)
     ) {
    puVar10 = PTR_PTR_1126ce510;
    _objc_alloc(PTR_PTR_1126ce510);
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c039580(puVar10);
    _objc_release(lVar5);
    lVar5 = param_1 + 0x250;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf23ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    param_1 = param_1 + 0x248;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf9d620();
    _objc_release(param_1);
    puVar11 = puVar10;
    func_0x00010c068460(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(puVar10);
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1067ff858; end: 1067ff85b; -[SCActiveUserNGSNavigationRouter searchWorkflowDidEnd] */

void FUN_1067ff858(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissSearch_1125beac8);
  return;
}



/* Entry: 1067ff85c; end: 1067ff9eb; -[SCActiveUserNGSNavigationRouter showCommerceDeepLinkURL:commerceEntryType:] */

void FUN_1067ff85c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0xa0;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar4 = PTR_PTR_1126b0508;
  _objc_alloc(PTR_PTR_1126b0508);
  uVar5 = param_3;
  func_0x00010c257800(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c115e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c039400(puVar4,param_2,lVar3,uVar5,uVar6,param_4,1);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010c18b5e0(puVar4,param_2,param_1);
  param_1 = param_1 + 0xa0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1067ff9ec; end: 1067ffa67; -[SCActiveUserNGSNavigationRouter didDismissShoppingScope] */

void FUN_1067ff9ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0xa0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0xa0;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1067ffa68; end: 1067ffa7f; -[SCActiveUserNGSNavigationRouter routeForProfileOurStoryStoryWithNotification:] */

void FUN_1067ffa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be048d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__displayMyProfileWithAnimated_no_11255ebd0,1,param_3,0,0,0);
  return;
}



/* Entry: 1067ffa80; end: 1067ffb7b; -[SCActiveUserNGSNavigationRouter routeToProfileManagementPageWithNotification:] */

void FUN_1067ffa80(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0dbde0();
  _objc_release(uVar5);
  if (((int)uVar6 == 0) || (uVar2 == 0)) {
    func_0x00010be97a80(param_1);
  }
  else {
    func_0x00010be97920(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


