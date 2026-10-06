/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f20f78; end: 103f20fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f20f78(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302eb38;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb38,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f27c68;
  return auVar2;
}



/* Entry: 103f20fb8; end: 103f20fc7; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView toolbarMargin] */

undefined8 FUN_103f20fb8(void)

{
  return 0x4024000000000000;
}



/* Entry: 103f20fc8; end: 103f20fd7; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView buttonsTopMargin] */

undefined8 FUN_103f20fc8(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 103f20fd8; end: 103f21017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20fd8(undefined1 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_11302eb40) = param_1;
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302eb08);
  _swift_bridgeObjectRetain(uVar1);
  FUN_103f243ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103f21018; end: 103f21067; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView shouldDisableAllItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f21018(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + _DAT_11302eb40) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302eb08);
  _objc_retain();
  _swift_bridgeObjectRetain(uVar1);
  FUN_103f243ac();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f21068; end: 103f2106b;  */

void FUN_103f21068(void)

{
  return;
}



/* Entry: 103f2106c; end: 103f2106f; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView hideToolLabelForItemType:] */

void FUN_103f2106c(void)

{
  return;
}



/* Entry: 103f21070; end: 103f214bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f21070(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long *plVar12;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lVar6;
  
  puVar2 = &UNK_110722290;
  _swift_allocObject(&UNK_110722290,0x18,7);
  plVar12 = (long *)(puVar2 + 0x10);
  *plVar12 = 0;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_103f26784;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100b61264;
  puStack_78 = &UNK_1107222a8;
  ppuVar3 = &puStack_90;
  puStack_68 = puVar2;
  __Block_copy(ppuVar3);
  puVar4 = puStack_68;
  _swift_retain(puVar2);
  _swift_release(puVar4);
  puVar4 = &UNK_1107222e0;
  _swift_allocObject(&UNK_1107222e0,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  pcStack_70 = (code *)0x103f267d8;
  puStack_90 = puVar8;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100b5fdac;
  puStack_78 = &UNK_1107222f8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  __Block_copy(ppuVar5);
  puVar4 = puStack_68;
  _swift_retain(puVar2);
  _objc_retain();
  _swift_release(puVar4);
  func_0x000107c4c6bc(param_3);
  __Block_release(ppuVar5);
  __Block_release(ppuVar3);
  _swift_beginAccess(plVar12,&puStack_90,0,0);
  lVar11 = *plVar12;
  if (lVar11 == 0) {
    iVar1 = 0;
  }
  else {
    lVar6 = lVar11;
    func_0x000107c4a7bc();
    iVar1 = (int)lVar6;
  }
  lVar6 = _DAT_11302eaf8;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_a8,1,0);
  lVar7 = *(long *)(unaff_x20 + lVar6);
  if (lVar7 == 0) {
    if (lVar11 == 0) goto LAB_103f2149c;
    lVar11 = 0;
  }
  else {
    func_0x000107c4a7bc();
    if ((lVar11 != 0) && (iVar1 == (int)lVar7)) goto LAB_103f2149c;
    lVar11 = *(long *)(unaff_x20 + lVar6);
  }
  lVar7 = *plVar12;
  *(long *)(unaff_x20 + lVar6) = lVar7;
  if ((param_4 & 1) != 0) {
    if (lVar11 != 0) {
      puVar4 = &UNK_110722330;
      _swift_allocObject(&UNK_110722330,0x18,7);
      _swift_unknownObjectWeakInit(puVar4 + 0x10,unaff_x20);
      puVar8 = &UNK_110722358;
      _swift_allocObject(&UNK_110722358,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar4;
      *(undefined **)(puVar8 + 0x18) = puVar2;
      _swift_unknownObjectRetain(lVar7);
      _swift_retain(puVar4);
      _swift_retain(puVar2);
      func_0x000103f21a74(lVar11,FUN_103f26f30,puVar8);
      _swift_release(puVar2);
      _swift_unknownObjectRelease(lVar11);
      _swift_release(puVar4);
      puVar2 = puVar8;
LAB_103f2149c:
      _swift_release(puVar2);
      return;
    }
    if (lVar7 == 0) {
      if (*(long *)(unaff_x20 + _DAT_11302eb48) != 0) {
        func_0x000107c550d8();
      }
      goto LAB_103f2149c;
    }
    _swift_unknownObjectRetain_n(lVar7,2);
    func_0x000103f217e0();
    _swift_release(puVar2);
    lVar11 = lVar7;
    goto LAB_103f21478;
  }
  if (lVar11 == 0) {
    _swift_unknownObjectRetain(lVar7);
    lVar7 = *plVar12;
  }
  else {
    _swift_unknownObjectRetain(lVar7);
    lVar7 = lVar11;
    _swift_unknownObjectRetain(lVar11);
    func_0x000107c5dedc();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c4ff34();
    _objc_release(lVar7);
    FUN_103f26c34(lVar11);
    func_0x000107c58dd8(lVar11);
    lVar7 = _DAT_11302eb10;
    _swift_beginAccess(unaff_x20 + _DAT_11302eb10,auStack_d8,0,0);
    lVar7 = unaff_x20 + lVar7;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar7 != 0) {
      func_0x000107c4f1bc();
      _swift_unknownObjectRelease(lVar7);
    }
    _swift_unknownObjectRelease(lVar11);
    lVar7 = *plVar12;
  }
  if (lVar7 != 0) {
    _swift_unknownObjectRetain(lVar7);
    func_0x000107c58dd8();
    FUN_103f2165c(lVar7);
    lVar9 = lVar7;
    func_0x000107c5dedc(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = _DAT_11302eb10;
    _swift_beginAccess(unaff_x20 + _DAT_11302eb10,auStack_c0,0,0);
    lVar10 = unaff_x20 + lVar10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar10 != 0) {
      func_0x000107c4f1bc();
      _swift_unknownObjectRelease(lVar10);
    }
    func_0x000107c532b4(param_1,param_2,lVar9);
    func_0x00010befbb60(unaff_x20);
    FUN_103f21d44(lVar7);
    FUN_103f22064();
    _swift_unknownObjectRelease(lVar7);
    _objc_release(lVar9);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_11302eb48);
  if (*(long *)(unaff_x20 + lVar6) == 0) {
    if (lVar7 != 0) {
      _objc_retain();
      goto LAB_103f21454;
    }
  }
  else if (lVar7 != 0) {
    _objc_retain();
LAB_103f21454:
    func_0x000107c550d8();
    _swift_release(puVar2);
    _objc_release(lVar7);
    goto LAB_103f21478;
  }
  _swift_release(puVar2);
LAB_103f21478:
  _swift_unknownObjectRelease(lVar11);
  return;
}



/* Entry: 103f214c0; end: 103f21603;  */

void FUN_103f214c0(long param_1,uint param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c49820();
  func_0x000103f26f38();
  if ((param_2 & 0xff) != 1) {
    lVar1 = param_1;
    FUN_103f227fc();
    if (lVar1 == 0) {
      FUN_103f24cbc();
      lVar1 = param_1;
    }
    _swift_beginAccess(param_3 + 0x10,auStack_48,1,0);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(long *)(param_3 + 0x10) = lVar1;
    _swift_unknownObjectRelease(uVar2);
  }
  return;
}



/* Entry: 103f21604; end: 103f2165b; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setSelectedItem:animated:] */

void FUN_103f21604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f21070(param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f2165c; end: 103f217df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f2165c(undefined8 param_1)

{
  double *pdVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  
  uVar4 = param_1;
  func_0x000107c4a7bc();
  lVar2 = _DAT_11302eb08;
  if ((int)uVar4 == 9) {
    uVar7 = *(ulong *)(unaff_x20 + _DAT_11302eb08);
    if (uVar7 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar5 = uVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f217cc);
      (*pcVar3)();
    }
    dVar9 = *(double *)(unaff_x20 + _DAT_11302ec10);
    uVar7 = *(ulong *)(unaff_x20 + lVar2);
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar6 = uVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    lVar2 = _DAT_11302ec08;
    dVar8 = *(double *)(unaff_x20 + _DAT_11302ec08) * (double)(long)uVar6;
    dVar9 = dVar9 * (double)(long)(uVar5 - 1) + 1.0 + dVar8;
    func_0x00010bf20c00();
    _CGRectGetHeight();
    if (dVar9 <= dVar8) {
      dVar8 = dVar9;
    }
    dVar8 = dVar8 + *(double *)(unaff_x20 + lVar2) * -0.5;
    pdVar1 = (double *)(unaff_x20 + _DAT_11302eb58);
    dVar9 = *pdVar1;
    _CGRectGetMidX(dVar9,pdVar1[1],pdVar1[2],pdVar1[3]);
  }
  else {
    pdVar1 = (double *)(unaff_x20 + _DAT_11302eb58);
    dVar9 = *pdVar1;
    _CGRectGetMidX(dVar9,pdVar1[1],pdVar1[2],pdVar1[3]);
    dVar8 = *(double *)(unaff_x20 + _DAT_11302ec00 + 8) * 0.5;
    dVar10 = dVar8 + 1.0;
    func_0x000107c51cc0(param_1);
    dVar8 = dVar8 + dVar10;
  }
  func_0x000107c4a7bc();
  dVar10 = dVar8 + 4.0;
  if ((int)param_1 != 3) {
    dVar10 = dVar8;
  }
  auVar11._8_8_ = dVar10;
  auVar11._0_8_ = dVar9 + -4.0;
  return auVar11;
}



/* Entry: 103f217e0; end: 103f21c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f217e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x000107c58dd8(param_3,param_4,1);
  FUN_103f2165c(param_3);
  uVar2 = param_3;
  func_0x000107c5dedc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c532b4(param_1,param_2);
  func_0x00010befbb60();
  _objc_release(uVar2);
  FUN_103f21d44(param_3);
  FUN_103f267e0(param_3);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar4 = &UNK_1107226a0;
  _swift_allocObject(&UNK_1107226a0,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_103f27b38;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107226b8;
  puStack_68 = puVar4;
  __Block_copy(&puStack_90);
  puVar4 = puStack_68;
  _objc_retain();
  _swift_release(puVar4);
  puVar4 = &UNK_1107226f0;
  _swift_allocObject(&UNK_1107226f0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  pcStack_70 = FUN_103f27b58;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100288f10;
  puStack_78 = &UNK_110722708;
  puStack_68 = puVar4;
  __Block_copy(&puStack_90);
  puVar4 = puStack_68;
  _swift_unknownObjectRetain(param_3);
  _swift_release(puVar4);
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe999999999999a,0,puVar3);
  __Block_release(ppuVar6);
  __Block_release(ppuVar5);
  puVar4 = &UNK_110722740;
  _swift_allocObject(&UNK_110722740,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  pcStack_70 = (code *)0x103f27b68;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110722758;
  puStack_68 = puVar4;
  __Block_copy(&puStack_90);
  puVar4 = puStack_68;
  _objc_retain();
  _swift_release(puVar4);
  func_0x00010bf03460(0x3fc999999999999a,0,0x3feccccccccccccd,0,puVar3);
  __Block_release(ppuVar7);
  lVar8 = _DAT_11302eb10;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb10,&puStack_90,0,0);
  lVar8 = unaff_x20 + lVar8;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 != 0) {
    func_0x000107c4f1bc();
    _swift_unknownObjectRelease(lVar8);
  }
  return;
}



/* Entry: 103f21c88; end: 103f21d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f21c88(ulong param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if ((param_1 & 1) != 0) {
      uVar1 = param_3;
      func_0x000107c4a7bc();
      lVar2 = _DAT_11302eaf8;
      _swift_beginAccess(param_2 + _DAT_11302eaf8,auStack_70,0,0);
      lVar2 = *(long *)(param_2 + lVar2);
      if ((lVar2 == 0) || (func_0x000107c4a7bc(), (int)lVar2 != (int)uVar1)) {
        FUN_103f26c34(param_3);
      }
      (*param_4)();
    }
    _objc_release(param_2);
  }
  return;
}



/* Entry: 103f21d44; end: 103f22063;  */

void FUN_103f21d44(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_1;
  func_0x00010bf1ff20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    uVar3 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar5 = uVar6;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar6,uVar3);
    _objc_release(uVar6);
    if (uVar5 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar6 = uVar5;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f21e30);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
          _objc_retain(uVar4);
        }
        else {
          uVar4 = uVar7;
          func_0x000100f040d0(uVar7,uVar5);
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f21e2c);
          (*pcVar2)();
        }
        func_0x000107c49778();
        _objc_release(uVar4);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar6);
    }
    _swift_bridgeObjectRelease(uVar5);
  }
  uVar6 = param_1;
  func_0x000107c4acd8();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    uVar3 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar5 = uVar6;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar6,uVar3);
    _objc_release(uVar6);
    if (uVar5 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar6 = uVar5;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f21f20);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
          _objc_retain(uVar4);
        }
        else {
          uVar4 = uVar7;
          func_0x000100f040d0(uVar7,uVar5);
        }
        uVar1 = uVar7 + 1;
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f21f1c);
          (*pcVar2)();
        }
        func_0x000107c49778();
        _objc_release(uVar4);
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar6);
    }
    _swift_bridgeObjectRelease(uVar5);
  }
  func_0x000107c5cbe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = param_1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_1,uVar3);
  _objc_release(param_1);
  if (uVar6 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2202c);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar6 + uVar7 * 8 + 0x20);
        _objc_retain(uVar4);
      }
      else {
        uVar4 = uVar7;
        func_0x000100f040d0(uVar7,uVar6);
      }
      uVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f22028);
        (*pcVar2)();
      }
      func_0x000107c49778();
      _objc_release(uVar4);
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 103f22064; end: 103f22353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f22064(double param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  undefined1 auStack_98 [24];
  
  lVar2 = _DAT_11302eaf8;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_98,0,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar9 != 0) {
    uVar4 = uVar9;
    _swift_unknownObjectRetain();
    func_0x00010bf1ff20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      uVar12 = 0;
    }
    else {
      uVar5 = 0;
      FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      uVar12 = uVar4;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
      _objc_release(uVar4);
    }
    FUN_103f22354(uVar12);
    _swift_bridgeObjectRelease(uVar12);
    uVar4 = uVar9;
    func_0x000107c5cbe0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      uVar5 = 0;
      FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      uVar12 = uVar4;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
      _objc_release(uVar4);
      func_0x000103f22554(uVar12);
      _swift_bridgeObjectRelease(uVar12);
    }
    uVar4 = uVar9;
    func_0x000107c5dedc(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c438d4();
    _CGRectGetMinX();
    uVar12 = uVar9;
    func_0x000107c4acd8();
    _objc_retainAutoreleasedReturnValue();
    if (uVar12 == 0) {
      _swift_unknownObjectRelease(uVar9);
      _objc_release(uVar4);
    }
    else {
      uVar5 = 0;
      FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      uVar6 = uVar12;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar12,uVar5);
      _objc_release(uVar12);
      uVar12 = uVar6 & 0xffffffffffffff8;
      if (uVar6 >> 0x3e == 0) {
        uVar10 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        uVar10 = uVar12;
        if (0x7fffffffffffffff < uVar6) {
          uVar10 = uVar6;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar10 != 0) {
        dVar13 = -12.0;
        param_1 = param_1 + -12.0;
        uVar11 = 0;
        do {
          while( true ) {
            if ((uVar6 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103f22300);
                (*pcVar3)();
              }
              uVar7 = *(ulong *)(uVar6 + uVar11 * 8 + 0x20);
              _objc_retain();
            }
            else {
              uVar7 = uVar11;
              func_0x000100f040d0(uVar11,uVar6);
            }
            uVar1 = uVar11 + 1;
            if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103f222fc);
              (*pcVar3)();
            }
            uVar8 = uVar7;
            func_0x000107c49eac();
            if ((uVar8 & 1) == 0) break;
            _objc_release(uVar7);
            uVar11 = uVar11 + 1;
            if (uVar1 == uVar10) goto LAB_103f22314;
          }
          func_0x000107c5a03c(uVar7);
          func_0x00010bf20c00(uVar7);
          _CGRectGetWidth();
          func_0x000107c3f74c(uVar4);
          func_0x000107c532b4(param_1 + dVar13 * -0.5,uVar7);
          dVar13 = 1.0;
          func_0x000107c526c0(uVar7);
          func_0x00010bf20c00(uVar7);
          _CGRectGetWidth();
          _objc_release(uVar7);
          dVar13 = dVar13 + 10.0;
          param_1 = param_1 - dVar13;
          uVar11 = uVar1;
        } while (uVar1 != uVar10);
      }
LAB_103f22314:
      _swift_unknownObjectRelease(uVar9);
      _objc_release(uVar4);
      _swift_bridgeObjectRelease(uVar6);
    }
  }
  return;
}



/* Entry: 103f22354; end: 103f22767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f22354(double param_1,ulong param_2)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [24];
  
  lVar8 = _DAT_11302eaf8;
  if (param_2 != 0) {
    _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_a8,0,0);
    lVar8 = *(long *)(unaff_x20 + lVar8);
    if (lVar8 != 0) {
      lVar3 = lVar8;
      _swift_unknownObjectRetain();
      func_0x000107c5dedc();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c438d4();
      _CGRectGetMaxY();
      if (param_2 >> 0x3e == 0) {
        uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = param_2;
        if (-1 < (long)param_2) {
          uVar6 = param_2 & 0xffffffffffffff8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (uVar6 != 0) {
        if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f22554);
          (*pcVar2)();
        }
        uVar7 = 0;
        param_1 = param_1 + 12.0;
        pdVar1 = (double *)(unaff_x20 + _DAT_11302eb58);
        do {
          if ((param_2 & 0xc000000000000001) == 0) {
            uVar4 = *(ulong *)(param_2 + uVar7 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar4 = uVar7;
            func_0x000100f040d0(uVar7,param_2);
          }
          uVar5 = uVar4;
          func_0x000107c49eac();
          if ((int)uVar5 == 0) {
            func_0x000107c5a03c(uVar4);
            dVar9 = *pdVar1;
            dVar10 = pdVar1[1];
            _CGRectGetMidX(dVar9,dVar10,pdVar1[2],pdVar1[3]);
            dVar11 = dVar9 + -4.0;
            uVar5 = uVar4;
            func_0x000107c4aba4(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf02960();
            _objc_release(uVar5);
            func_0x00010bf20c00(uVar4);
            _CGRectGetHeight();
            func_0x000107c532b4(dVar11,param_1 + dVar10 * dVar9,uVar4);
            dVar9 = 1.0;
            func_0x000107c526c0(uVar4);
            func_0x00010bf20c00(uVar4);
            _CGRectGetHeight();
            _objc_release(uVar4);
            param_1 = param_1 + dVar9 + 10.0;
          }
          else {
            _objc_release(uVar4);
          }
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
      }
      _swift_unknownObjectRelease(lVar8);
      _objc_release(lVar3);
    }
  }
  return;
}



/* Entry: 103f22768; end: 103f227a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f22768(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11302eb50) = param_1;
  func_0x000107c438d4();
  func_0x000107c54b80();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 103f227a8; end: 103f227fb; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView updateMaxHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f227a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11302eb50) = param_1;
  _objc_retain();
  func_0x000107c438d4();
  func_0x000107c54b80(param_2);
  func_0x000107c56a14(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103f227fc; end: 103f22923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103f227fc(int param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_11302eb18;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb18,auStack_68,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar4);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2290c);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar7);
      }
      else {
        uVar7 = uVar6;
        FUN_103f26120(uVar6,uVar4);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f228d0);
        (*pcVar2)();
      }
      uVar8 = uVar6 + 1;
      uVar3 = uVar7;
      func_0x000107c4a7bc();
      if ((int)uVar3 == param_1) {
        _swift_bridgeObjectRelease(uVar4);
        return uVar7;
      }
      _swift_unknownObjectRelease(uVar7);
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar5);
  }
  _swift_bridgeObjectRelease(uVar4);
  return 0;
}



/* Entry: 103f22924; end: 103f2295f; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView itemWithType:] */

void FUN_103f22924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_103f227fc(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f22960; end: 103f22bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f22960(int param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_11302eb18;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb18,auStack_78,1,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar8 != 0) {
    if ((long)uVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f22c00);
      (*pcVar3)();
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar10);
      }
      else {
        uVar10 = uVar9;
        FUN_103f26120(uVar9,uVar7);
      }
      uVar11 = uVar10;
      func_0x000107c4a7bc();
      if ((int)uVar11 == param_1) {
        uVar11 = uVar10;
        func_0x000107c5dedc(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000107c4ff34();
        _swift_unknownObjectRelease(uVar10);
        _objc_release(uVar11);
      }
      else {
        _swift_unknownObjectRelease(uVar10);
      }
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
    _swift_bridgeObjectRelease(uVar7);
  }
  uVar7 = *(ulong *)(unaff_x20 + lVar2);
  uVar8 = uVar7 & 0xffffffffffffff8;
  if (uVar7 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar9 = uVar8;
    if (0x7fffffffffffffff < uVar7) {
      uVar9 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar7);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103f22bcc);
            (*pcVar3)();
          }
          uVar11 = *(ulong *)(uVar7 + uVar10 * 8 + 0x20);
          _swift_unknownObjectRetain(uVar11);
        }
        else {
          uVar11 = uVar10;
          FUN_103f26120(uVar10,uVar7);
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f22bc8);
          (*pcVar3)();
        }
        uVar12 = uVar10 + 1;
        uVar4 = uVar11;
        func_0x000107c4a7bc();
        if ((int)uVar4 == param_1) break;
        puVar5 = puVar1;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar5 & 1) == 0) {
          func_0x000103f256d4(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar10 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
          func_0x000103f256d4(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
        *(ulong *)(puVar1 + uVar10 * 8 + 0x20) = uVar11;
        uVar10 = uVar12;
        if (uVar12 == uVar9) goto LAB_103f22b8c;
      }
      _swift_unknownObjectRelease(uVar11);
      uVar10 = uVar10 + 1;
    } while (uVar12 != uVar9);
  }
LAB_103f22b8c:
  _swift_bridgeObjectRelease(uVar7);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar1;
  _swift_bridgeObjectRelease(uVar6);
  return;
}



/* Entry: 103f22c00; end: 103f22c2f; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView removeItemType:] */

void FUN_103f22c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_103f22960(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f22c30; end: 103f22ccf; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView insertItem:beforeItemType:animated:completion:] */

void FUN_103f22c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  __Block_copy();
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_110722470;
    _swift_allocObject(&UNK_110722470,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    uVar2 = 0x103f27c54;
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103f26f48(param_3,uVar2,puVar1);
  func_0x000100d72700(uVar2,puVar1);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f22cd0; end: 103f22ceb;  */

void FUN_103f22cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_103f26f48(param_1,param_4,param_5);
  return;
}



/* Entry: 103f22cec; end: 103f22d8b; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView insertItem:afterItemType:animated:completion:] */

void FUN_103f22cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  code *pcVar2;
  
  __Block_copy();
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_110722448;
    _swift_allocObject(&UNK_110722448,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    pcVar2 = FUN_103f279f8;
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103f26f48(param_3,pcVar2,puVar1);
  func_0x000100d72700(pcVar2,puVar1);
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f22d8c; end: 103f2304f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f22d8c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  undefined8 uVar14;
  ulong *puVar15;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_11302eaf8;
  ppuVar9 = &puStack_b0;
  ppuVar10 = &puStack_b0;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_78,0,0);
  uVar13 = *(ulong *)(unaff_x20 + lVar2);
  if (uVar13 != 0) {
    uVar12 = uVar13;
    _swift_unknownObjectRetain();
    func_0x000107c5cbe0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar12 == 0) {
      _swift_unknownObjectRelease(uVar13);
    }
    else {
      uVar4 = 0;
      FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      uVar11 = uVar12;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar12,uVar4);
      _objc_release(uVar12);
      puVar5 = &UNK_110722380;
      _swift_allocObject(&UNK_110722380,0x18,7);
      puVar15 = (ulong *)(puVar5 + 0x10);
      *puVar15 = uVar11;
      _objc_retain();
      puVar6 = puVar15;
      FUN_103f27228(puVar15,param_1);
      _objc_release(param_1);
      uVar12 = *puVar15;
      if (uVar12 >> 0x3e == 0) {
        uVar11 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar11 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar11 = uVar12;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if ((long)uVar11 < (long)puVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f23050);
        (*pcVar3)();
      }
      FUN_103f275d0(puVar6);
      uVar14 = *(undefined8 *)(puVar5 + 0x10);
      uVar4 = uVar14;
      _swift_bridgeObjectRetain(uVar14);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
      _swift_bridgeObjectRelease(uVar14);
      func_0x000107c59ec8(uVar13);
      _objc_release(uVar4);
      puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar8 = &UNK_1107223a8;
      _swift_allocObject(&UNK_1107223a8,0x20,7);
      *(long *)(puVar8 + 0x10) = unaff_x20;
      *(undefined **)(puVar8 + 0x18) = puVar5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_90 = FUN_103f27694;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_1000f6b44;
      puStack_98 = &UNK_1107223c0;
      puStack_88 = puVar8;
      __Block_copy(&puStack_b0);
      puVar8 = puStack_88;
      _objc_retain();
      _swift_retain(puVar5);
      _swift_release(puVar8);
      puVar8 = &UNK_1107223f8;
      _swift_allocObject(&UNK_1107223f8,0x18,7);
      *(undefined8 *)(puVar8 + 0x10) = param_1;
      pcStack_90 = (code *)0x103f2769c;
      puStack_b0 = puVar1;
      uStack_a8 = 0x42000000;
      puStack_a0 = &UNK_100288f10;
      puStack_98 = &UNK_110722410;
      puStack_88 = puVar8;
      __Block_copy(&puStack_b0);
      puVar8 = puStack_88;
      _objc_retain(param_1);
      _swift_release(puVar8);
      func_0x00010bf03460(0x3fd3333333333333,0,0x3fe999999999999a,0,puVar7);
      __Block_release(ppuVar10);
      __Block_release(ppuVar9);
      _swift_unknownObjectRelease(uVar13);
      _swift_release(puVar5);
    }
  }
  return;
}



/* Entry: 103f23050; end: 103f230a3;  */

void FUN_103f23050(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  func_0x000103f22554();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Entry: 103f230a4; end: 103f230f3; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView topAccessoryViewsAnimateToNewPositionWithoutView:] */

void FUN_103f230a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f22d8c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f230f4; end: 103f231bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f230f4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_11302eaf8;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_68,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = lVar2;
    _swift_unknownObjectRetain(lVar2);
    func_0x000107c5dedc();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c438d4();
    func_0x000107c4073c();
    _swift_unknownObjectRelease(lVar2);
    _objc_release(lVar1);
  }
  return param_1;
}



/* Entry: 103f231c0; end: 103f232b7; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView trashcanFrameInView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f231c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_11302eaf8;
  _swift_beginAccess(param_2 + _DAT_11302eaf8,auStack_68,0,0);
  lVar2 = *(long *)(param_2 + lVar2);
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_2);
    lVar1 = lVar2;
    _swift_unknownObjectRetain(lVar2);
    func_0x000107c5dedc();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c438d4();
    func_0x000107c4073c(param_2);
    _swift_unknownObjectRelease(lVar2);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_release(param_2);
  }
  return param_1;
}



/* Entry: 103f232b8; end: 103f23343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f232b8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eaf8;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103f23344; end: 103f23347;  */

void FUN_103f23344(void)

{
  return;
}



/* Entry: 103f23348; end: 103f23363; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setToolLabelsVisibility:showDuration:] */

void FUN_103f23348(void)

{
  return;
}



/* Entry: 103f23364; end: 103f2337b; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView toolbarItemsFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f23364(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302eb58);
}



/* Entry: 103f2337c; end: 103f2362b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103f2337c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  *(undefined8 *)(unaff_x20 + _DAT_11302ebd8) = 0x4028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebe0) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebe8) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebf0) = 0x4028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebf8) = 0x4010000000000000;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302ec00);
  puVar2[1] = 0x404a800000000000;
  *puVar2 = 0x4046000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec08) = 0x4044000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec10) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302eb50) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302eb00);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302eb10,0);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_11302eb18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_11302eaf8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302eb20) = 1;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302eb28,0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302eb30);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302eb38);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec18) = 0x3fc999999999999a;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302ebc8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302eb48) = 0;
  *(undefined **)(unaff_x20 + _DAT_11302eb08) = puVar3;
  *(undefined **)(unaff_x20 + _DAT_11302ebb0) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb58);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302eb40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebc0) = param_1;
  *puVar2 = param_2;
  puVar2[1] = param_3;
  _swift_unknownObjectRetain(param_1);
  uVar7 = param_4;
  func_0x000107c4a24c();
  *(char *)(unaff_x20 + _DAT_11302ebb8) = (char)uVar7;
  uVar7 = param_4;
  func_0x000107c4a240();
  *(char *)(unaff_x20 + _DAT_11302ec20) = (char)uVar7;
  FUN_103f26754();
  puVar5 = &stack0xffffffffffffffa0;
  _objc_msgSendSuper2(0,0,0,0,puVar5,PTR_s_initWithFrame__1125e2948);
  lVar4 = _DAT_11302eb28;
  _swift_beginAccess(puVar5 + _DAT_11302eb28,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(puVar5 + lVar4,puVar5);
  _objc_retain();
  puVar6 = puVar5;
  FUN_103f23f48();
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_1);
  uVar7 = *(undefined8 *)(puVar5 + _DAT_11302ebd0);
  *(undefined1 **)(puVar5 + _DAT_11302ebd0) = puVar6;
  _objc_release(puVar5);
  _objc_release(uVar7);
  return puVar5;
}



/* Entry: 103f2362c; end: 103f23adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f2362c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_88 [24];
  
  lVar9 = _DAT_11302eaf8;
  uVar4 = unaff_x20 + _DAT_11302eaf8;
  _swift_beginAccess(uVar4,auStack_88,0,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar9);
  if (uVar8 == 0) {
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302eb58);
    _CGRectContainsPoint(*puVar2,puVar2[1],puVar2[2],puVar2[3],param_1,param_2);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    return 0;
  }
  uVar4 = uVar8;
  _swift_unknownObjectRetain();
  func_0x000107c5dedc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c40720(param_1,param_2);
  uVar10 = uVar4;
  func_0x000107c4eadc();
  if ((int)uVar10 != 0) {
    _swift_unknownObjectRelease(uVar8);
    _objc_release(uVar4);
    return 1;
  }
  uVar10 = uVar8;
  func_0x000107c4acd8();
  _objc_retainAutoreleasedReturnValue();
  if (uVar10 != 0) {
    uVar5 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar6 = uVar10;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar5);
    _objc_release(uVar10);
    if (uVar6 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar10 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar10 != 0) {
      lVar9 = 4;
      do {
        uVar11 = lVar9 - 4;
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103f23800);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(uVar6 + lVar9 * 8);
          _objc_retain();
        }
        else {
          uVar7 = uVar11;
          func_0x000100f040d0(uVar11,uVar6);
        }
        uVar1 = lVar9 - 3;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f237fc);
          (*pcVar3)();
        }
        uVar11 = uVar7;
        func_0x000107c49eac();
        if ((uVar11 & 1) == 0) {
          func_0x000107c40720(param_1,param_2);
          uVar11 = uVar7;
          func_0x000107c4eadc();
          _objc_release(uVar7);
          if ((int)uVar11 != 0) goto LAB_103f23a3c;
        }
        else {
          _objc_release(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (uVar1 != uVar10);
    }
    _swift_bridgeObjectRelease(uVar6);
  }
  uVar10 = uVar8;
  func_0x000107c5cbe0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar10 != 0) {
    uVar5 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar6 = uVar10;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar5);
    _objc_release(uVar10);
    if (uVar6 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar6 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar6) {
        uVar10 = uVar6;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar10 != 0) {
      lVar9 = 4;
      do {
        uVar11 = lVar9 - 4;
        if ((uVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103f23924);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(uVar6 + lVar9 * 8);
          _objc_retain();
        }
        else {
          uVar7 = uVar11;
          func_0x000100f040d0(uVar11,uVar6);
        }
        uVar1 = lVar9 - 3;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f23920);
          (*pcVar3)();
        }
        uVar11 = uVar7;
        func_0x000107c49eac();
        if ((uVar11 & 1) == 0) {
          func_0x000107c40720(param_1,param_2);
          uVar11 = uVar7;
          func_0x000107c4eadc();
          _objc_release(uVar7);
          if ((int)uVar11 != 0) goto LAB_103f23a3c;
        }
        else {
          _objc_release(uVar7);
        }
        lVar9 = lVar9 + 1;
      } while (uVar1 != uVar10);
    }
    _swift_bridgeObjectRelease(uVar6);
  }
  uVar10 = uVar8;
  func_0x00010bf1ff20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar10 == 0) {
    _swift_unknownObjectRelease(uVar8);
    _objc_release(uVar4);
    return 0;
  }
  uVar5 = 0;
  FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar6 = uVar10;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar10,uVar5);
  _objc_release(uVar10);
  if (uVar6 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar10 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar10 == 0) {
    _objc_release(uVar4);
  }
  else {
    lVar9 = 4;
    do {
      uVar11 = lVar9 - 4;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103f23a88);
          (*pcVar3)();
        }
        uVar7 = *(ulong *)(uVar6 + lVar9 * 8);
        _objc_retain();
      }
      else {
        uVar7 = uVar11;
        func_0x000100f040d0(uVar11,uVar6);
      }
      uVar1 = lVar9 - 3;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f23a84);
        (*pcVar3)();
      }
      uVar11 = uVar7;
      func_0x000107c49eac();
      if ((uVar11 & 1) == 0) {
        func_0x000107c40720(param_1,param_2);
        uVar11 = uVar7;
        func_0x000107c4eadc();
        _objc_release(uVar7);
        if ((int)uVar11 != 0) {
LAB_103f23a3c:
          _swift_unknownObjectRelease(uVar8);
          _objc_release(uVar4);
          _swift_bridgeObjectRelease(uVar6);
          return 1;
        }
      }
      else {
        _objc_release(uVar7);
      }
      lVar9 = lVar9 + 1;
    } while (uVar1 != uVar10);
    _objc_release(uVar4);
  }
  _swift_unknownObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar6);
  return 0;
}



/* Entry: 103f23ae0; end: 103f23b57; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView pointInside:withEvent:] */

uint FUN_103f23ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  FUN_103f2362c(param_1,param_2,param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return (uint)param_5 & 1;
}



/* Entry: 103f23b58; end: 103f23d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f23b58(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0x11302ec60;
  func_0x0001000285a8(0x11302ec60,&UNK_10dcabc68);
  _swift_initStackObject();
  *(undefined8 *)(lVar3 + 0x18) = 0x24;
  *(undefined8 *)(lVar3 + 0x10) = 0x12;
  *(undefined8 *)(lVar3 + 0x28) = 0x300000002;
  *(undefined8 *)(lVar3 + 0x20) = 0x100000000;
  *(undefined8 *)(lVar3 + 0x38) = 0x700000027;
  *(undefined8 *)(lVar3 + 0x30) = 0x600000004;
  *(undefined8 *)(lVar3 + 0x48) = 0x80000000c;
  *(undefined8 *)(lVar3 + 0x40) = 0xb0000000a;
  *(undefined8 *)(lVar3 + 0x58) = 0xf0000000e;
  *(undefined8 *)(lVar3 + 0x50) = 0xd00000009;
  *(undefined8 *)(lVar3 + 0x60) = 0x2900000010;
  if (*(char *)(unaff_x20 + _DAT_11302ebb8) == '\x01') {
    uVar1 = 0x11;
    if (*(char *)(unaff_x20 + _DAT_11302ec20) == '\0') {
      uVar1 = 9;
    }
    lVar8 = lVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar8 == 0) || (*(ulong *)(lVar3 + 0x18) < 0x26)) {
      FUN_103f25d28();
      lVar3 = lVar8;
    }
    puVar5 = (undefined *)0x1;
    FUN_103f26064(uVar1,uVar1,1,0x2a);
    lVar8 = *(long *)(lVar3 + 0x10);
    if (lVar8 == 0) {
      _swift_bridgeObjectRelease(lVar3);
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto LAB_103f23d24;
    }
  }
  else {
    lVar8 = 0x12;
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001002ecff4(0,lVar8,0);
  lVar9 = 0x20;
  do {
    puVar5 = (undefined *)(ulong)*(uint *)(lVar3 + lVar9);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x000107c46ecc();
    uVar2 = *(ulong *)(puVar7 + 0x10);
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
      puVar5 = (undefined *)0x1;
      func_0x0001002ecff4(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
    *(undefined **)(puVar7 + uVar2 * 8 + 0x20) = puVar4;
    lVar9 = lVar9 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  _swift_bridgeObjectRelease(lVar3);
LAB_103f23d24:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  FUN_103f276a4();
  return puVar5;
}



/* Entry: 103f23d60; end: 103f23df7; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView initWithCoder:] */

void FUN_103f23d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103f276a4();
  return;
}



/* Entry: 103f23df8; end: 103f23e93; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView showClipLevelTools] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f23df8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x11302eba8;
  func_0x0001000285a8(0x11302eba8,&UNK_10dcabc00);
  _swift_initStaticObject();
  _objc_retain();
  FUN_103f2789c();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302ebb0);
  *(undefined8 *)(param_1 + _DAT_11302ebb0) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302eb08);
  _swift_bridgeObjectRetain(uVar2);
  FUN_103f243ac();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103f23e94; end: 103f23ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f23e94(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302ebb0);
  *(undefined **)(unaff_x20 + _DAT_11302ebb0) = PTR___swiftEmptySetSingleton_11034f1d8;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302eb08);
  _swift_bridgeObjectRetain(uVar1);
  FUN_103f243ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103f23ee4; end: 103f23f47; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView showDefaultTools] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f23ee4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302ebb0);
  *(undefined **)(param_1 + _DAT_11302ebb0) = PTR___swiftEmptySetSingleton_11034f1d8;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302eb08);
  _swift_bridgeObjectRetain(uVar1);
  FUN_103f243ac();
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f23f48; end: 103f24227;  */

undefined * FUN_103f23f48(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong in_x3;
  undefined *puVar7;
  long lVar8;
  
  puVar2 = PTR_PTR_1126adb08;
  _objc_allocWithZone();
  func_0x000107c453e4();
  puVar3 = puVar2;
  FUN_103f23b58();
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar4 = *(undefined **)((undefined *)((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    puVar6 = puVar4;
    if ((undefined *)0x4 < puVar4) {
      puVar6 = (undefined *)0x5;
    }
    if ((long)puVar4 < (long)puVar6) {
LAB_103f24224:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f24228);
      (*pcVar1)();
    }
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if (((ulong)puVar3 & 0x8000000000000000) != 0) {
      puVar4 = puVar3;
    }
    puVar6 = puVar4;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar7 = puVar4;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f241f8);
      (*pcVar1)();
    }
    if ((undefined *)0x4 < puVar6) {
      puVar6 = (undefined *)0x5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)puVar4 < (long)puVar6) goto LAB_103f24224;
  }
  if ((((ulong)puVar3 & 0xc000000000000001) == 0) || (puVar6 == (undefined *)0x0)) {
    _swift_bridgeObjectRetain(puVar3);
  }
  else {
    uVar5 = 0;
    FUN_103f27a74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _swift_bridgeObjectRetain(puVar3);
    __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(0,puVar3,uVar5);
    if ((((puVar6 != (undefined *)0x1) &&
         (__ss12_ArrayBufferV18_typeCheckSlowPathyySiF(1,puVar3,uVar5), puVar6 != (undefined *)0x2))
        && (__ss12_ArrayBufferV18_typeCheckSlowPathyySiF(2,puVar3,uVar5), puVar6 != (undefined *)0x3
           )) && (__ss12_ArrayBufferV18_typeCheckSlowPathyySiF(3,puVar3,uVar5),
                 puVar6 != (undefined *)0x4)) {
      __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(4,puVar3,uVar5);
    }
  }
  _swift_bridgeObjectRelease(puVar3);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar7 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    in_x3 = (long)puVar6 << 1 | 1;
    puVar4 = (undefined *)0x0;
    puVar6 = puVar7 + 0x20;
LAB_103f240c0:
    uVar5 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar3 = puVar7;
    _swift_unknownObjectRetain_n(puVar7,3);
    _swift_dynamicCastClass();
    if (puVar3 == (undefined *)0x0) {
      _swift_unknownObjectRelease(puVar7);
      puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar8 = *(long *)(puVar3 + 0x10);
    _swift_release();
    if (SBORROW8(in_x3 >> 1,(long)puVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f241fc);
      (*pcVar1)();
    }
    if (lVar8 != (in_x3 >> 1) - (long)puVar4) {
      _swift_unknownObjectRelease_n(puVar7,2);
      goto LAB_103f240a4;
    }
    puVar4 = puVar7;
    _swift_dynamicCastClass(puVar7,uVar5);
    _swift_unknownObjectRelease_n(puVar7,2);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar4 != (undefined *)0x0) goto LAB_103f24140;
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if (((ulong)puVar3 & 0x8000000000000000) != 0) {
      puVar4 = puVar3;
    }
    puVar7 = (undefined *)0x0;
    __ss18_CocoaArrayWrapperVys12_SliceBufferVyyXlGSnySiGcig(0,puVar6);
    _swift_bridgeObjectRelease(puVar3);
    if ((in_x3 & 1) != 0) goto LAB_103f240c0;
LAB_103f240a4:
    puVar3 = puVar7;
    FUN_103f26460(puVar7,puVar6,puVar4,in_x3);
  }
  _swift_unknownObjectRelease(puVar7);
  puVar4 = puVar3;
LAB_103f24140:
  uVar5 = 0;
  FUN_103f27a74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar3 = puVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar4,uVar5);
  _swift_release(puVar4);
  func_0x000107c54a60(puVar2);
  _objc_release(puVar3);
  FUN_103f23b58();
  puVar4 = puVar3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(puVar3);
  func_0x000107c5591c(puVar2);
  _objc_release(puVar4);
  return puVar2;
}



/* Entry: 103f24228; end: 103f243ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f24228(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 in_d3;
  
  puVar1 = PTR_PTR_1126adb20;
  _objc_allocWithZone(PTR_PTR_1126adb20);
  uVar2 = 0;
  FUN_103f27a74(0,0x11302ec68,&PTR_PTR_1126adaf8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar2);
  func_0x000107c4700c(puVar1);
  _objc_release(param_1);
  FUN_103f27a74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 0;
  __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(0);
  func_0x000107c53154(puVar1);
  _objc_release(uVar2);
  func_0x000107c5372c(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c59ee4(puVar1);
  _objc_release(puVar3);
  uVar2 = 1;
  __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(1);
  func_0x000107c54168(puVar1);
  _objc_release(uVar2);
  func_0x000107c438d4();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(in_d3);
  func_0x000107c57228(puVar1);
  _objc_release(puVar3);
  uVar4 = (ulong)*(byte *)(unaff_x20 + _DAT_11302ebb8);
  __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(uVar4);
  func_0x000107c55538(puVar1);
  _objc_release(uVar4);
  return puVar1;
}



/* Entry: 103f243ac; end: 103f24c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f243ac(ulong param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong *puVar13;
  double dVar14;
  undefined *puVar15;
  ulong uVar16;
  long unaff_x20;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *apuStack_108 [9];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302eb08);
  *(ulong *)(unaff_x20 + _DAT_11302eb08) = param_1;
  _swift_bridgeObjectRelease(uVar5);
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar17 == 0) {
    _swift_bridgeObjectRetain(param_1);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_108[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_bridgeObjectRetain(param_1);
    FUN_103f256b8(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f24c64);
      (*pcVar4)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar20 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar12 = apuStack_108[0];
        _objc_retain(*puVar20);
        func_0x0001043feba4(&uStack_a8);
        uVar22 = *(ulong *)(puVar12 + 0x10);
        apuStack_108[0] = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar22) {
          FUN_103f256b8(1 < *(ulong *)(puVar12 + 0x18),uVar22 + 1,1);
        }
        *(ulong *)(apuStack_108[0] + 0x10) = uVar22 + 1;
        *(undefined8 *)(apuStack_108[0] + uVar22 * 0x30 + 0x41) = uStack_87;
        *(ulong *)(apuStack_108[0] + uVar22 * 0x30 + 0x39) = CONCAT17(uStack_88,uStack_8f);
        *(undefined8 *)(apuStack_108[0] + uVar22 * 0x30 + 0x28) = uStack_a0;
        *(undefined8 *)(apuStack_108[0] + uVar22 * 0x30 + 0x20) = uStack_a8;
        *(ulong *)(apuStack_108[0] + uVar22 * 0x30 + 0x38) = CONCAT71(uStack_8f,uStack_90);
        *(undefined8 *)(apuStack_108[0] + uVar22 * 0x30 + 0x30) = uStack_98;
        uVar17 = uVar17 - 1;
        puVar12 = apuStack_108[0];
        puVar20 = puVar20 + 1;
      } while (uVar17 != 0);
    }
    else {
      uVar22 = 0;
      do {
        puVar12 = apuStack_108[0];
        func_0x000103f262c4(uVar22,param_1);
        func_0x0001043feba4(&uStack_a8);
        uVar21 = *(ulong *)(puVar12 + 0x10);
        apuStack_108[0] = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
          FUN_103f256b8(1 < *(ulong *)(puVar12 + 0x18),uVar21 + 1,1);
        }
        uVar22 = uVar22 + 1;
        *(ulong *)(apuStack_108[0] + 0x10) = uVar21 + 1;
        *(undefined8 *)(apuStack_108[0] + uVar21 * 0x30 + 0x41) = uStack_87;
        *(ulong *)(apuStack_108[0] + uVar21 * 0x30 + 0x39) = CONCAT17(uStack_88,uStack_8f);
        *(undefined8 *)(apuStack_108[0] + uVar21 * 0x30 + 0x28) = uStack_a0;
        *(undefined8 *)(apuStack_108[0] + uVar21 * 0x30 + 0x20) = uStack_a8;
        *(ulong *)(apuStack_108[0] + uVar21 * 0x30 + 0x38) = CONCAT71(uStack_8f,uStack_90);
        *(undefined8 *)(apuStack_108[0] + uVar21 * 0x30 + 0x30) = uStack_98;
        puVar12 = apuStack_108[0];
      } while (uVar17 != uVar22);
    }
  }
  lVar3 = _DAT_11302ebb0;
  lVar2 = _DAT_11302eb18;
  uVar17 = *(ulong *)(puVar12 + 0x10);
  if (uVar17 == 0) {
    _swift_bridgeObjectRelease(puVar12);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    _swift_beginAccess(unaff_x20 + _DAT_11302eb18,auStack_c0,0,0);
    uVar22 = 0;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(ulong *)(puVar12 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103f24c60);
        (*pcVar4)();
      }
      puVar13 = (ulong *)(puVar12 + uVar22 * 0x30 + 0x20);
      uVar21 = *puVar13;
      puVar15 = (undefined *)puVar13[2];
      dVar14 = (double)puVar13[4];
      bVar1 = (byte)puVar13[5];
      lVar23 = *(long *)(unaff_x20 + lVar3);
      iVar19 = (int)uVar21;
      if (*(long *)(lVar23 + 0x10) == 0) {
        _objc_retain(puVar15);
        if (iVar19 == 6) {
LAB_103f2470c:
          uVar18 = *(ulong *)(unaff_x20 + lVar2);
          uVar24 = uVar18 & 0xffffffffffffff8;
          if (uVar18 >> 0x3e == 0) {
            uVar25 = *(ulong *)(uVar24 + 0x10);
          }
          else {
            uVar25 = uVar24;
            if (0x7fffffffffffffff < uVar18) {
              uVar25 = uVar18;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          _swift_bridgeObjectRetain(uVar18);
          uVar16 = 0;
          do {
            if (uVar25 == uVar16) {
              _swift_bridgeObjectRelease(uVar18);
              _objc_release(puVar15);
              goto LAB_103f245d8;
            }
            if ((uVar18 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar24 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103f24c5c);
                (*pcVar4)();
              }
              uVar26 = *(ulong *)(uVar18 + uVar16 * 8 + 0x20);
              _swift_unknownObjectRetain(uVar26);
            }
            else {
              uVar26 = uVar16;
              func_0x000103f26120(uVar16,uVar18);
            }
            if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103f24c58);
              (*pcVar4)();
            }
            uVar7 = uVar26;
            func_0x000107c4a7bc();
            _swift_unknownObjectRelease(uVar26);
            uVar16 = uVar16 + 1;
          } while ((int)uVar7 != 6);
          _swift_bridgeObjectRelease(uVar18);
        }
LAB_103f247d8:
        switch(uVar21) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          break;
        case 5:
          break;
        case 6:
          break;
        case 7:
          break;
        default:
          goto LAB_103f24b78;
        case 9:
          break;
        case 10:
          break;
        case 0xb:
          break;
        case 0xc:
          break;
        case 0x10:
          break;
        case 0x11:
          break;
        case 0x14:
          break;
        case 0x15:
          break;
        case 0x17:
          break;
        case 0x18:
        }
        puVar6 = PTR_PTR_1126adaf8;
        _objc_allocWithZone();
        func_0x000107c48ecc();
        func_0x000107c55634();
        func_0x000107c556ac(puVar6);
        func_0x000107c55704(puVar6);
        if (puVar15 != (undefined *)0x0) {
          puVar10 = PTR_PTR_1126b27a8;
          _objc_opt_self();
          puVar9 = puVar15;
          _objc_retain(puVar15);
          func_0x000107c45160();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          if (puVar10 != (undefined *)0x0) {
            puVar8 = puVar10;
            func_0x00010b971468();
            _objc_retainAutoreleasedReturnValue();
            func_0x000107c5290c(puVar6);
            _objc_release(puVar9);
            _objc_release(puVar10);
          }
          _objc_release(puVar8);
        }
        if (bVar1 != 0xff) {
          puVar10 = PTR_PTR_1126adb00;
          _objc_allocWithZone(PTR_PTR_1126adb00);
          func_0x000107c453e4();
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (bVar1 < 3) {
            if (bVar1 == 0) {
              _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c46ed0();
              func_0x000107c59e78(puVar10);
              goto code_r0x000103f24ae8;
            }
            if (bVar1 != 1) {
              _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c46ed0();
              func_0x000107c5a550(puVar10);
              goto code_r0x000103f24ae8;
            }
            if ((((ulong)dVar14 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
              puVar9 = (undefined *)0x0;
              FUN_103f27a74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              __sSo8NSNumberC10FoundationE12floatLiteralABSd_tcfC(dVar14 * 1000.0);
              func_0x000107c552c4(puVar10);
              goto code_r0x000103f24ae8;
            }
          }
          else {
            if (bVar1 == 3) {
              FUN_103f27a74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar9 = (undefined *)(ulong)(SUB84(dVar14,0) & 1);
              __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(puVar9);
              func_0x000107c568b8(puVar10);
            }
            else if (bVar1 == 4) {
              _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c46ecc();
              func_0x000107c57588(puVar10);
            }
            else {
              _objc_allocWithZone(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c46ed0();
              func_0x000107c549ec(puVar10);
            }
code_r0x000103f24ae8:
            _objc_release(puVar9);
          }
          func_0x000107c57064(puVar6);
          _objc_release(puVar10);
        }
        _objc_retain();
        puVar10 = puVar11;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
           (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar9 = puVar11;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_103f25ab8(0,puVar9 + 1,1,puVar11);
        }
        uVar18 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar21 = *(ulong *)(uVar18 + 0x10);
        puVar11 = puVar10;
        if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar21) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
          FUN_103f25ab8(puVar11,uVar21 + 1,1,puVar10);
          uVar18 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar18 + 0x10) = uVar21 + 1;
        *(undefined **)(uVar18 + uVar21 * 8 + 0x20) = puVar6;
        _objc_release(puVar6);
LAB_103f24b78:
        _objc_release(puVar15);
      }
      else {
        __ss6HasherV5_seedABSi_tcfC(apuStack_108,*(undefined8 *)(lVar23 + 0x28));
        uVar18 = uVar21;
        __ss6HasherV8_combineyySuF();
        __ss6HasherV9_finalizeSiyF();
        uVar24 = -1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
        uVar18 = uVar18 & (uVar24 ^ 0xffffffffffffffff);
        uVar25 = *(ulong *)(lVar23 + 0x38 + (uVar18 >> 6) * 8);
        puVar6 = puVar15;
        _objc_retain(puVar15);
        _swift_bridgeObjectRetain(lVar23);
        if ((uVar25 >> (uVar18 & 0x3f) & 1) != 0) {
          do {
            if ((int)*(undefined8 *)(*(long *)(lVar23 + 0x30) + uVar18 * 8) == iVar19) {
              _swift_bridgeObjectRelease(lVar23);
              if (iVar19 != 6) goto LAB_103f247d8;
              goto LAB_103f2470c;
            }
            uVar18 = uVar18 + 1 & ~uVar24;
          } while ((*(ulong *)(lVar23 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0);
        }
        _objc_release(puVar6);
        _swift_bridgeObjectRelease(lVar23);
      }
LAB_103f245d8:
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar17);
    _swift_bridgeObjectRelease(puVar12);
  }
  puVar12 = puVar11;
  FUN_103f24228(puVar11);
  if (*(long *)(unaff_x20 + _DAT_11302eb48) == 0) {
    FUN_103f24dd0(puVar12);
  }
  else {
    func_0x000107c5a588();
  }
  _swift_bridgeObjectRelease(puVar11);
  _objc_release(puVar12);
  return;
}



/* Entry: 103f24c64; end: 103f24cbb; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView reloadWithViewModels:] */

void FUN_103f24c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001043ff3a4(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _objc_retain(param_1);
  FUN_103f243ac(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103f24cbc; end: 103f24dcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f24cbc(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_11302eb10;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb10,auStack_58,0,0);
  lVar2 = unaff_x20 + lVar2;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar2;
    func_0x000107c3ee78();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar2);
    func_0x000107c55908(lVar5);
    lVar2 = _DAT_11302eb18;
    _swift_beginAccess(unaff_x20 + _DAT_11302eb18,auStack_70,0x21,0);
    _swift_unknownObjectRetain(lVar5);
    func_0x000103f25a48();
    uVar3 = *(ulong *)(unaff_x20 + lVar2);
    uVar4 = uVar3 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      func_0x000103f25c00(uVar3,uVar1 + 1,1);
      uVar4 = uVar3 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(long *)(uVar4 + uVar1 * 8 + 0x20) = lVar5;
    *(ulong *)(unaff_x20 + lVar2) = uVar3;
    _swift_endAccess(auStack_70);
  }
  return lVar5;
}



/* Entry: 103f24dd0; end: 103f2506f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f24dd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  lVar9 = *(long *)(unaff_x20 + _DAT_11302ebc0);
  if (lVar9 != 0) {
    puVar7 = &UNK_110722330;
    puVar2 = puVar7;
    _swift_allocObject(&UNK_110722330,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    puVar3 = PTR_PTR_1126adb10;
    _objc_allocWithZone(PTR_PTR_1126adb10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_103f27a2c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_103f25598;
    puStack_78 = &UNK_110722528;
    puStack_68 = puVar2;
    __Block_copy(&puStack_90);
    _swift_retain(puVar2);
    _swift_unknownObjectRetain(lVar9);
    func_0x000107c47c38(puVar3);
    __Block_release(ppuVar4);
    puVar5 = puStack_68;
    _swift_release(puVar2);
    _swift_release(puVar5);
    puVar5 = puVar7;
    _swift_allocObject(&UNK_110722330,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    pcStack_70 = (code *)0x103f27a34;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_102bbf884;
    puStack_78 = &UNK_110722550;
    puStack_68 = puVar5;
    __Block_copy(&puStack_90);
    _swift_release(puStack_68);
    func_0x000107c56f50(puVar3);
    __Block_release(ppuVar6);
    _swift_allocObject(&UNK_110722330,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    pcStack_70 = (code *)0x103f27a3c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    pcStack_80 = (code *)&UNK_100f70bd8;
    puStack_78 = &UNK_110722578;
    puStack_68 = puVar7;
    __Block_copy(&puStack_90);
    _swift_release(puStack_68);
    func_0x000107c52eb0(puVar3);
    __Block_release(ppuVar8);
    lVar10 = ((undefined8 *)(unaff_x20 + _DAT_11302ebc8))[1];
    if (lVar10 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11302ebc8);
      _swift_bridgeObjectRetain(lVar10);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,lVar10);
      _swift_bridgeObjectRelease(lVar10);
    }
    func_0x000107c59478(puVar3);
    _objc_release(uVar11);
    puVar7 = PTR_PTR_1126adb18;
    _objc_allocWithZone();
    func_0x000107c49520();
    func_0x000107c5a050();
    func_0x00010befbb60();
    func_0x000107c51734(puVar7);
    _objc_release(puVar3);
    _swift_unknownObjectRelease(lVar9);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11302eb48);
    *(undefined **)(unaff_x20 + _DAT_11302eb48) = puVar7;
    _objc_release(uVar11);
  }
  return;
}



/* Entry: 103f25070; end: 103f2518b;  */

void FUN_103f25070(undefined4 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    pcVar1 = "didTap(type:)";
    func_0x0001000c10c0("didTap(type:)");
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_110722330;
    _swift_allocObject(&UNK_110722330,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10,param_3);
    puVar3 = &UNK_1107225b0;
    _swift_allocObject(&UNK_1107225b0,0x1c,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined4 *)(puVar3 + 0x18) = param_1;
    uStack_58 = 0x103f27a44;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1107225c8;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    __Block_copy(ppuVar4);
    _swift_release(puStack_50);
    func_0x000107c4e524(pcVar1);
    __Block_release(ppuVar4);
    _objc_release(param_3);
    _swift_unknownObjectRelease(pcVar1);
  }
  return;
}



/* Entry: 103f2518c; end: 103f2527f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2518c(double param_1,double param_2,double param_3,long param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  undefined1 auStack_68 [24];
  
  dVar4 = param_1;
  _swift_beginAccess(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 != 0) {
    lVar2 = *(long *)(param_4 + _DAT_11302eb48);
    if (lVar2 != 0) {
      _objc_retain();
      func_0x00010bf20c00();
      _CGRectGetMaxX();
      dVar4 = dVar4 - param_2;
      lVar3 = param_4;
      _objc_retain();
      func_0x000107c4073c(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar2);
      pdVar1 = (double *)(lVar3 + _DAT_11302eb58);
      *pdVar1 = dVar4;
      pdVar1[1] = param_1;
      pdVar1[2] = param_2;
      pdVar1[3] = param_3;
    }
    _objc_release(param_4);
  }
  return;
}



/* Entry: 103f25280; end: 103f252ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f25280(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    *(undefined8 *)(param_3 + _DAT_11302ec08) = param_1;
    *(undefined8 *)(param_3 + _DAT_11302ec10) = param_2;
    _objc_release();
  }
  return;
}



/* Entry: 103f252f0; end: 103f25427;  */

void FUN_103f252f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x000103f27a50();
    lVar1 = param_2;
    FUN_103f227fc();
    if ((lVar1 != 0) || (FUN_103f24cbc(), lVar1 = param_2, param_2 != 0)) {
      lVar2 = lVar1;
      func_0x000107c4a7b8();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lVar3 = lVar1;
        func_0x000107c4a768();
        if (lVar3 != 0) {
          _swift_unknownObjectRetain(lVar2);
          func_0x000107c4e5bc();
          _swift_unknownObjectRelease(lVar1);
          _objc_release(param_1);
          _objc_autorelease(lVar2);
          _swift_unknownObjectRelease();
          return;
        }
        _swift_unknownObjectRelease(lVar1);
        lVar1 = lVar2;
      }
      _swift_unknownObjectRelease(lVar1);
    }
    _objc_release(param_1);
  }
  return;
}



/* Entry: 103f25428; end: 103f25483; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView itemAccessoryViewsHaveChanged:addAccessoryViews:needAnimation:] */

void FUN_103f25428(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000107c56a14();
  if (param_4 != 0) {
    FUN_103f21d44(param_3);
  }
  _swift_unknownObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f25484; end: 103f254b3;  */

void FUN_103f25484(void)

{
  FUN_103f26754();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f254b4; end: 103f25597; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f254b4(long param_1)

{
  FUN_103f279d4(param_1 + _DAT_11302eb10);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302eb18));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302eaf8));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302eb28);
  func_0x000100d72700(*(undefined8 *)(param_1 + _DAT_11302eb30),
                      ((undefined8 *)(param_1 + _DAT_11302eb30))[1]);
  func_0x000100d72700(*(undefined8 *)(param_1 + _DAT_11302eb38),
                      ((undefined8 *)(param_1 + _DAT_11302eb38))[1]);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ebc0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ebc8 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ebd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302eb48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302eb08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302ebb0));
  return;
}



/* Entry: 103f25598; end: 103f255fb;  */

void FUN_103f25598(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_3;
  _objc_retain(param_3);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103f255fc; end: 103f2563f;  */

bool FUN_103f255fc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f25640; end: 103f256b7;  */

void FUN_103f25640(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103f27a74(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103f256b8; end: 103f256ef;  */

void FUN_103f256b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103f256f0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103f256f0; end: 103f25807;  */

undefined * FUN_103f256f0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f25808);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x11302ec78;
    func_0x0001000285a8(0x11302ec78,&UNK_10dcabc78);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x30) * 2;
  }
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110768300);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x30 <= puVar2 + 0x20) {
      _memmove();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar2;
}



/* Entry: 103f25808; end: 103f25937;  */

undefined * FUN_103f25808(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f25938);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000103f2562c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x11302ec50;
    func_0x0001000285a8(0x11302ec50,&UNK_10dcabc58);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103f25938; end: 103f25ab7;  */

undefined * FUN_103f25938(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000103f2562c();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103f25ab8; end: 103f25d27;  */

ulong FUN_103f25ab8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f25c00);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x000103f259b8(uVar2,uVar4,0x11302ec68,&PTR_PTR_1126adaf8,0x11302ec70,&UNK_10dcabc70);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f25bfc);
      (*pcVar1)();
    }
    FUN_103f25e28(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 103f25d28; end: 103f25e27;  */

undefined * FUN_103f25d28(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f25e28);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x11302ec60;
    func_0x0001000285a8(0x11302ec60,&UNK_10dcabc68);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 103f25e28; end: 103f25f3f;  */

long FUN_103f25e28(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f25f3c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f25f40);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103f27a74(0,0x11302ec68,&PTR_PTR_1126adaf8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_103f27a74(0,0x11302ec68,&PTR_PTR_1126adaf8);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f25f38);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103f25f40; end: 103f26063;  */

long FUN_103f25f40(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f26060);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f26064);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x11302ec50;
        func_0x0001000285a8(0x11302ec50,&UNK_10dcabc58);
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x11302ec50;
      func_0x0001000285a8(0x11302ec50,&UNK_10dcabc58);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f2605c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103f26064; end: 103f2611f;  */

void FUN_103f26064(long param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x103f26110);
    (*pcVar6)();
  }
  lVar4 = param_3 - (param_2 - param_1);
  if (SBORROW8(param_3,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x103f26114);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  puVar1 = (undefined4 *)(lVar7 + 0x20 + param_1 * 4);
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103f26118);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined4 *)(lVar7 + 0x20 + param_2 * 4);
    if (puVar2 != puVar3 || puVar3 + lVar5 <= puVar2) {
      _memmove(puVar2,puVar3,lVar5 * 4);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103f2611c);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar4;
  }
  if ((0 < param_3) && (*puVar1 = param_4, param_3 != 1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x103f26120);
    (*pcVar6)();
  }
  return;
}



/* Entry: 103f26120; end: 103f2645f;  */

ulong FUN_103f26120(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f261f8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f261fc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    _swift_dynamicCastObjCProtocolConditional();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd00000000000001a,0x800000010f1cfdd0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f262c4);
  (*pcVar2)();
}



/* Entry: 103f26460; end: 103f2656b;  */

undefined * FUN_103f26460(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f2656c);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112d38c88;
      FUN_103f25640(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(ulong *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f26568);
      (*pcVar3)();
    }
    uVar6 = 0;
    FUN_103f27a74(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _swift_arrayInitWithCopy(puVar4 + 0x20,param_2 + param_3 * 8,lVar2,uVar6);
  }
  return puVar4;
}



/* Entry: 103f2656c; end: 103f26753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2656c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11302ebd8) = 0x4028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebe0) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebe8) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebf0) = 0x4028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebf8) = 0x4010000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302ec00);
  *puVar1 = 0x4046000000000000;
  puVar1[1] = 0x404a800000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec08) = 0x4044000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec10) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302eb50) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb00);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302eb10,0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_11302eb18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_11302eaf8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302eb20) = 1;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302eb28,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec18) = 0x3fc999999999999a;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302ebc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302eb48) = 0;
  *(undefined **)(unaff_x20 + _DAT_11302eb08) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_11302ebb0) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb58);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302eb40) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UnifiedToolbarImpl/UnifiedPreviewVerticalToolbarView.swift",0x3a,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103f26754);
  (*pcVar3)();
}



/* Entry: 103f26754; end: 103f26773;  */

void FUN_103f26754(void)

{
  _objc_opt_self(&PTR_PTR_112966d50);
  return;
}



/* Entry: 103f26774; end: 103f26783;  */

void FUN_103f26774(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 103f26784; end: 103f267bb;  */

void FUN_103f26784(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Entry: 103f267bc; end: 103f267df;  */

void FUN_103f267bc(long param_1,long param_2)

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



/* Entry: 103f267e0; end: 103f26c33;  */

void FUN_103f267e0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_100 [144];
  
  uVar5 = param_3;
  func_0x000107c5dedc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3f74c();
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x000107c4acd8();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    uVar2 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar4 = uVar5;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar2);
    _objc_release(uVar5);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26938);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
          _objc_retain(uVar3);
        }
        else {
          uVar3 = uVar6;
          func_0x000100f040d0(uVar6,uVar4);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26934);
          (*pcVar1)();
        }
        uVar7 = uVar6 + 1;
        func_0x000107c532b4(param_1,param_2);
        _CGAffineTransformMakeScale(auStack_100,0x10000000000000,0x10000000000000);
        func_0x000107c5a03c(uVar3);
        func_0x000107c526c0(0,uVar3);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar5);
    }
    _swift_bridgeObjectRelease(uVar4);
  }
  uVar5 = param_3;
  func_0x00010bf1ff20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    uVar2 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar4 = uVar5;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar2);
    _objc_release(uVar5);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26a94);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
          _objc_retain(uVar3);
        }
        else {
          uVar3 = uVar6;
          func_0x000100f040d0(uVar6,uVar4);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26a90);
          (*pcVar1)();
        }
        uVar8 = uVar6 + 1;
        func_0x000107c532b4(param_1,param_2);
        uVar7 = uVar3;
        func_0x000107c4aba4(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _CATransform3DMakeScale(auStack_100,0x3ff0000000000000,0x10000000000000,0x3ff0000000000000);
        func_0x000107c5a03c(uVar7);
        _objc_release(uVar7);
        func_0x000107c526c0(0,uVar3);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar8 != uVar5);
    }
    _swift_bridgeObjectRelease(uVar4);
  }
  func_0x000107c5cbe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar5 = param_3;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
    _objc_release(param_3);
    if (uVar5 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar4 = uVar5;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar4 != 0) {
      uVar6 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26bf0);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uVar5 + uVar6 * 8 + 0x20);
          _objc_retain(uVar3);
        }
        else {
          uVar3 = uVar6;
          func_0x000100f040d0(uVar6,uVar5);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26bec);
          (*pcVar1)();
        }
        uVar8 = uVar6 + 1;
        func_0x000107c532b4(param_1,param_2);
        uVar7 = uVar3;
        func_0x000107c4aba4(uVar3);
        _objc_retainAutoreleasedReturnValue();
        _CATransform3DMakeScale(auStack_100,0x3ff0000000000000,0x10000000000000,0x3ff0000000000000);
        func_0x000107c5a03c(uVar7);
        _objc_release(uVar7);
        func_0x000107c526c0(0,uVar3);
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar8 != uVar4);
    }
    _swift_bridgeObjectRelease(uVar5);
  }
  return;
}



/* Entry: 103f26c34; end: 103f26f2f;  */

void FUN_103f26c34(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = param_1;
  func_0x00010bf1ff20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    uVar2 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar4 = uVar5;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar2);
    _objc_release(uVar5);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26d14);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
          _objc_retain(uVar3);
        }
        else {
          uVar3 = uVar6;
          func_0x000100f040d0(uVar6,uVar4);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26d10);
          (*pcVar1)();
        }
        uVar7 = uVar6 + 1;
        func_0x000107c4ff34();
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar5);
    }
    _swift_bridgeObjectRelease(uVar4);
  }
  uVar5 = param_1;
  func_0x000107c4acd8();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    uVar2 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    uVar4 = uVar5;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar5,uVar2);
    _objc_release(uVar5);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26dfc);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
          _objc_retain(uVar3);
        }
        else {
          uVar3 = uVar6;
          func_0x000100f040d0(uVar6,uVar4);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26df8);
          (*pcVar1)();
        }
        uVar7 = uVar6 + 1;
        func_0x000107c4ff34();
        _objc_release(uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar5);
    }
    _swift_bridgeObjectRelease(uVar4);
  }
  func_0x000107c5cbe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    return;
  }
  uVar2 = 0;
  FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = param_1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_1,uVar2);
  _objc_release(param_1);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26efc);
          (*pcVar1)();
        }
        uVar3 = *(ulong *)(uVar5 + uVar6 * 8 + 0x20);
        _objc_retain(uVar3);
      }
      else {
        uVar3 = uVar6;
        func_0x000100f040d0(uVar6,uVar5);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f26ee0);
        (*pcVar1)();
      }
      uVar7 = uVar6 + 1;
      func_0x000107c4ff34();
      _objc_release(uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 103f26f30; end: 103f26f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f26f30(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    _swift_beginAccess(lVar4 + 0x10,auStack_60,0,0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      _swift_unknownObjectRetain();
      iVar1 = (int)lVar3;
      func_0x000107c4a7bc();
      lVar3 = _DAT_11302eaf8;
      _swift_beginAccess(lVar2 + _DAT_11302eaf8,auStack_78,0,0);
      lVar3 = *(long *)(lVar2 + lVar3);
      if ((lVar3 != 0) && (func_0x000107c4a7bc(), (int)lVar3 == iVar1)) {
        FUN_103f217e0(lVar4);
      }
      _swift_unknownObjectRelease(lVar4);
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 103f26f48; end: 103f27113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f26f48(undefined8 param_1,code *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_11302eb18;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb18,auStack_78,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar1);
  uVar5 = uVar6 & 0xffffffffffffff8;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    uVar7 = uVar5;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar6);
  uVar8 = 0;
  do {
    if (uVar7 == uVar8) {
      _swift_bridgeObjectRelease(uVar6);
      _swift_beginAccess(unaff_x20 + lVar1,auStack_90,0x21,0);
      func_0x000103f25a48();
      uVar6 = *(ulong *)(unaff_x20 + lVar1);
      uVar7 = uVar6 & 0xffffffffffffff8;
      uVar5 = *(ulong *)(uVar7 + 0x10);
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x000103f25c00(uVar6,uVar5 + 1,1);
        uVar7 = uVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
      *(undefined8 *)(uVar7 + uVar5 * 8 + 0x20) = param_1;
      *(ulong *)(unaff_x20 + lVar1) = uVar6;
      _swift_endAccess(auStack_90);
      _swift_unknownObjectRetain(param_1);
      goto joined_r0x000103f27098;
    }
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f270e0);
        (*pcVar2)();
      }
      uVar9 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
      _swift_unknownObjectRetain(uVar9);
    }
    else {
      uVar9 = uVar8;
      FUN_103f26120(uVar8,uVar6);
    }
    if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f27030);
      (*pcVar2)();
    }
    uVar3 = uVar9;
    func_0x000107c4a7bc();
    uVar4 = param_1;
    func_0x000107c4a7bc();
    _swift_unknownObjectRelease(uVar9);
    uVar8 = uVar8 + 1;
  } while ((int)uVar3 != (int)uVar4);
  _swift_bridgeObjectRelease(uVar6);
joined_r0x000103f27098:
  if (param_2 != (code *)0x0) {
    (*param_2)(1);
  }
  return;
}



/* Entry: 103f27114; end: 103f27227;  */

undefined1  [16] FUN_103f27114(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar6 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar8 = uVar6;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar7 = 0;
  do {
    if (uVar8 == uVar7) {
      uVar7 = 0;
      uVar5 = 1;
LAB_103f271e8:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar7;
      return auVar9;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f27210);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar7 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar3 = uVar7;
      func_0x000100f040d0(uVar7,param_1);
    }
    FUN_103f27a74(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar4 = uVar3;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,param_2);
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar5 = 0;
      goto LAB_103f271e8;
    }
    bVar2 = SCARRY8(uVar7,1);
    uVar7 = uVar7 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f27214);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 103f27228; end: 103f274c3;  */

void FUN_103f27228(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar8 = *param_1;
  uVar4 = uVar8;
  uVar6 = param_2;
  FUN_103f27114();
  if (unaff_x21 == 0) {
    if (((uint)uVar6 & 0xff) == 1) {
      if (uVar8 >> 0x3e != 0) {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar4 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4);
      }
    }
    else {
      uVar9 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f274c4);
        (*pcVar2)();
      }
      while( true ) {
        uVar9 = uVar9 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar5 = uVar8;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (uVar9 == uVar5) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f27488);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2748c);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar8 + uVar9 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar5 = uVar9;
          func_0x000100f040d0(uVar9,uVar8);
        }
        FUN_103f27a74(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        uVar7 = uVar5;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,param_2);
        _objc_release(uVar5);
        if ((uVar7 & 1) == 0) {
          if (uVar4 != uVar9) {
            if ((uVar8 & 0xc000000000000001) == 0) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2749c);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103f274a0);
                (*pcVar2)();
              }
              if (uVar5 <= uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x103f274a4);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
              uVar7 = *(ulong *)(uVar8 + 0x20 + uVar9 * 8);
              _objc_retain();
              _objc_retain();
            }
            else {
              uVar5 = uVar4;
              func_0x000100f040d0(uVar4,uVar8);
              uVar7 = uVar9;
              func_0x000100f040d0(uVar9,uVar8);
            }
            uVar10 = uVar8;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if ((((int)uVar10 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
              func_0x0001023b5a6c();
              uVar11 = (uint)(uVar8 >> 0x3e) & 1;
            }
            else {
              uVar11 = 0;
            }
            uVar10 = uVar8 & 0xffffffffffffff8;
            lVar1 = uVar10 + uVar4 * 8;
            uVar6 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar7;
            _objc_release(uVar6);
            if (((long)uVar8 < 0) || (uVar11 != 0)) {
              func_0x0001023b5a6c();
              uVar10 = uVar8 & 0xffffffffffffff8;
            }
            if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103f2745c);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103f27498);
              (*pcVar2)();
            }
            lVar1 = uVar10 + uVar9 * 8;
            uVar6 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar5;
            _objc_release(uVar6);
            *param_1 = uVar8;
          }
          bVar3 = SCARRY8(uVar4,1);
          uVar4 = uVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f27494);
            (*pcVar2)();
          }
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f27490);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 103f274c4; end: 103f275cf;  */

void FUN_103f274c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103f275ac);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  _swift_arrayDestroy(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103f275b0);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103f275c8);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      _memmove(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x103f275cc);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x103f275d0);
    (*pcVar5)();
  }
  return;
}



/* Entry: 103f275d0; end: 103f27693;  */

/* WARNING: Removing unreachable block (ram,0x000103f275cc) */

void FUN_103f275d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f27670);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f27688);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f2768c);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f27694);
      (*pcVar3)();
    }
    func_0x000100847c78(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f275ac);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    FUN_103f27a74(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    _swift_arrayDestroy(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f275b0);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f275c8);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        _memmove(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f275cc);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103f27690);
  (*pcVar3)();
}



/* Entry: 103f27694; end: 103f276a3;  */

void FUN_103f27694(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  _swift_bridgeObjectRetain(uVar2);
  func_0x000103f22554();
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 103f276a4; end: 103f2789b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f276a4(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11302ebd8) = 0x4028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebe0) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebe8) = 0x4024000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebf0) = 0x4028000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebf8) = 0x4010000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302ec00);
  *puVar1 = 0x4046000000000000;
  puVar1[1] = 0x404a800000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec08) = 0x4044000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec10) = 0x4010000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_11302eb50) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb00);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302eb10,0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_11302eb18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + _DAT_11302eaf8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302eb20) = 1;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11302eb28,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb30);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302ec18) = 0x3fc999999999999a;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302ebc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302ebd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302eb48) = 0;
  *(undefined **)(unaff_x20 + _DAT_11302eb08) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_11302ebb0) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb58);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_11302eb40) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
             "UnifiedToolbarImpl/UnifiedPreviewVerticalToolbarView.swift",0x3a,2,0x246,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103f2789c);
  (*pcVar3)();
}



/* Entry: 103f2789c; end: 103f279d3;  */

undefined * FUN_103f2789c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x11302ec80,&UNK_10dcabc80);
    puVar2 = puVar9;
    __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
    puVar11 = (undefined *)0x0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x20 + (long)puVar11 * 8);
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar3 = uVar10;
      __ss6HasherV8_combineyySuF();
      __ss6HasherV9_finalizeSiyF();
      uVar8 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar3 = uVar3 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar3 >> 6;
      uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar3 & 0x3f);
      lVar4 = *(long *)(puVar2 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar4 + uVar3 * 8) == (int)uVar10) goto LAB_103f27920;
          uVar3 = uVar3 + 1 & ~uVar8;
          uVar5 = uVar3 >> 6;
          uVar6 = *(ulong *)(puVar2 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar3 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar2 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(ulong *)(lVar4 + uVar3 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f279d4);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
LAB_103f27920:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar2;
}



/* Entry: 103f279d4; end: 103f279f7;  */

undefined8 FUN_103f279d4(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f279f8; end: 103f27a0b;  */

void FUN_103f279f8(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103f27a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103f27a0c; end: 103f27a2b;  */

void FUN_103f27a0c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103f27a2c; end: 103f27a73;  */

void FUN_103f27a2c(undefined4 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    pcVar2 = "didTap(type:)";
    func_0x0001000c10c0("didTap(type:)");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_110722330;
    _swift_allocObject(&UNK_110722330,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10,lVar1);
    puVar4 = &UNK_1107225b0;
    _swift_allocObject(&UNK_1107225b0,0x1c,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined4 *)(puVar4 + 0x18) = param_1;
    uStack_58 = 0x103f27a44;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1107225c8;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar4;
    __Block_copy(ppuVar5);
    _swift_release(puStack_50);
    func_0x000107c4e524(pcVar2);
    __Block_release(ppuVar5);
    _objc_release(lVar1);
    _swift_unknownObjectRelease(pcVar2);
  }
  return;
}



/* Entry: 103f27a74; end: 103f27b2b;  */

void FUN_103f27a74(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103f27b2c; end: 103f27b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27b2c(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar3 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x28));
  lVar3 = lVar3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    if ((param_1 & 1) != 0) {
      uVar4 = uVar2;
      func_0x000107c4a7bc();
      lVar5 = _DAT_11302eaf8;
      _swift_beginAccess(lVar3 + _DAT_11302eaf8,auStack_70,0,0);
      lVar5 = *(long *)(lVar3 + lVar5);
      if ((lVar5 == 0) || (func_0x000107c4a7bc(), (int)lVar5 != (int)uVar4)) {
        FUN_103f26c34(uVar2);
      }
      (*pcVar1)();
    }
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 103f27b38; end: 103f27b57;  */

void FUN_103f27b38(void)

{
  FUN_103f22064();
  return;
}



/* Entry: 103f27b58; end: 103f27b9b;  */

void FUN_103f27b58(ulong param_1)

{
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c158b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_selectItemAnimationFinished_112633ce8);
    return;
  }
  return;
}



/* Entry: 103f27b9c; end: 103f27bdf;  */

void FUN_103f27b9c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 103f27be0; end: 103f27c6b;  */

void FUN_103f27be0(long param_1,long param_2)

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



/* Entry: 103f27c6c; end: 103f27c6f; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView currentTrashcanItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27c6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eaf8;
  _swift_beginAccess(param_1 + _DAT_11302eaf8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f27c70; end: 103f27c77; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView selectedItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27c70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eaf8;
  _swift_beginAccess(param_1 + _DAT_11302eaf8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f27c78; end: 103f27cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27c78(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_103f27f3c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11302ec98) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11302eca0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _swift_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103f27cfc; end: 103f27d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27cfc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_103f27f3c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  *(long *)(lVar5 + _DAT_11302ec98) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_11302eca0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  _swift_retain(lVar1);
  _swift_retain(uVar2);
  _objc_msgSendSuper2(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 103f27d04; end: 103f27d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f27d04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ec98) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302eca0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}


