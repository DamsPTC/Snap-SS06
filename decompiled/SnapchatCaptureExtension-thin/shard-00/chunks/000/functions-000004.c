/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100023724; end: 10002381f;  */

void FUN_100023724(void)

{
  func_0x000100023754();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100023820; end: 10002385f;  */

void FUN_100023820(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x00010003d420();
    _objc_release_x19();
  }
  return;
}



/* Entry: 100023860; end: 100023a4f;  */

undefined8 FUN_100023860(ulong param_1,undefined8 param_2,char param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined8 uStack_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_3 == '\x01') {
      uVar3 = param_4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_4) {
        uVar3 = param_4;
      }
      __ss10__CocoaSetV7element2atyXlAB5IndexV_tF(param_1,param_2,uVar3);
      uVar2 = 0;
      uStack_60 = param_1;
      func_0x000100023774(0);
      _swift_dynamicCast(&uStack_58,&uStack_60,PTR___syXlN_100050c38 + 8,uVar2,7);
      return uStack_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100023a50);
    (*pcVar1)();
  }
  if (param_3 == '\x01') {
    uVar2 = 0;
    func_0x000100023774(0);
    uVar3 = param_1;
    __ss10__CocoaSetV5IndexV3ages5Int32Vvg(param_1,param_2);
    if ((int)uVar3 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100023a44);
      (*pcVar1)();
    }
    __ss10__CocoaSetV5IndexV7elementyXlvg(param_1,param_2);
    uStack_60 = param_1;
    _swift_dynamicCast(&uStack_58,&uStack_60,PTR___syXlN_100050c38 + 8,uVar2,7);
    uVar3 = *(ulong *)(param_4 + 0x28);
    __sSo8NSObjectC10ObjectiveCE13_rawHashValue4seedS2i_tF();
    uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    param_1 = uVar3 & (uVar5 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_4 + 0x38 + (param_1 >> 6) * 8) >> (param_1 & 0x3f) & 1) != 0) {
      do {
        _objc_retain_x8(*(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8));
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = uVar3;
        _objc_release_x23();
        if ((uVar3 & 1) != 0) {
          _objc_release_x8(uStack_58);
          goto LAB_100023a1c;
        }
        param_1 = param_1 + 1 & ~uVar5;
        uVar3 = uVar4;
      } while ((*(ulong *)(param_4 + 0x38 + (param_1 >> 6) * 8) >> (param_1 & 0x3f) & 1) != 0);
    }
    _objc_release_x8(uStack_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000239e0);
    (*pcVar1)();
  }
  if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100023a48);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x38) >> (param_1 & 0x3f) & 1) == 0
     ) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100023a4c);
    (*pcVar1)();
  }
  if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100023a14);
    (*pcVar1)();
  }
LAB_100023a1c:
  uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)(uVar2);
  return uVar2;
}



/* Entry: 100023a50; end: 100023a7b;  */

void FUN_100023a50(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100050d50)(uVar1);
  return;
}



/* Entry: 100023a7c; end: 100023ab7; -[_TtC28SnapchatCaptureExtension_lib22LockedCameraViewShadow init] */

void FUN_100023a7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100023ae8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10005b548);
  return;
}



/* Entry: 100023ab8; end: 100023b07;  */

void FUN_100023ab8(void)

{
  func_0x000100023ae8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100023b08; end: 100023c8f;  */

void FUN_100023b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_80 [48];
  
  FUN_100023c90();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  dVar1 = 1.0;
  func_0x00010003d520(0x3ff0000000000000);
  _objc_release_x21();
  func_0x00010003bb60();
  _CGRectGetMinX();
  dVar2 = dVar1;
  func_0x00010003bb60(param_2);
  _CGRectGetMidX();
  dVar1 = dVar1 + dVar2;
  func_0x00010003bb60();
  _CGRectGetMinY();
  dVar3 = dVar2;
  func_0x00010003bb60(param_2);
  _CGRectGetMidY();
  func_0x00010003cd00(dVar1,dVar2 + dVar3,param_2);
  func_0x00010003cc20(param_2,param_3,0x24);
  func_0x00010003b8e0();
  _objc_release_x19();
  FUN_100023c90(param_1);
  _CGAffineTransformMakeScale(auStack_80,0xbff0000000000000,0x3ff0000000000000);
  func_0x00010003d420(unaff_x20,param_3,auStack_80);
  func_0x00010003c640(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  dVar1 = 1.0;
  func_0x00010003d520(0x3ff0000000000000);
  _objc_release_x21();
  func_0x00010003bb60();
  _CGRectGetMaxX();
  dVar2 = dVar1;
  func_0x00010003bb60(unaff_x20);
  _CGRectGetMidX();
  dVar1 = dVar1 - dVar2;
  func_0x00010003bb60();
  _CGRectGetMinY();
  dVar3 = dVar2;
  func_0x00010003bb60(unaff_x20);
  _CGRectGetMidY();
  func_0x00010003cd00(dVar1,dVar2 + dVar3,unaff_x20);
  func_0x00010003cc20(unaff_x20,param_3,0x21);
  func_0x00010003b8e0();
  _objc_release_x19();
  return;
}



/* Entry: 100023c90; end: 100023e07;  */

undefined * FUN_100023c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIView_1000504b8);
  func_0x00010003c340(0,0,param_1,param_1);
  puVar2 = PTR__OBJC_CLASS___CAShapeLayer_100050630;
  _objc_allocWithZone(PTR__OBJC_CLASS___CAShapeLayer_100050630);
  func_0x00010003c1e0();
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_100050418;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIBezierPath_100050418);
  func_0x00010003c1e0();
  func_0x00010003c740(0,param_1);
  func_0x00010003b7a0(param_1,param_1,param_1,0x400921fb54442d18,0x4012d97c7f3321d2,puVar3,param_3,1
                     );
  func_0x00010003b860(0,0,puVar3);
  func_0x00010003b860(0,param_1,puVar3);
  func_0x00010003bc60(puVar3);
  func_0x00010003b6a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  func_0x00010003d100(puVar2,param_3,puVar3);
  _objc_release_x22();
  func_0x00010003ce60(puVar2,param_3,*(undefined8 *)PTR__kCAFillRuleEvenOdd_100050648);
  puVar3 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  func_0x00010003ce20(puVar2,param_3,puVar3);
  _objc_release_x22();
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b8c0();
  _objc_release_x20();
  _objc_release_x21();
  return puVar1;
}



/* Entry: 100023e08; end: 100023e43;  */

void FUN_100023e08(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_allocWithZone();
  func_0x00010003c3c0(0x3fbeb851eb851eb8,0x3fbeb851eb851eb8,0x3fbeb851eb851eb8,0x3ff0000000000000);
  puRam0000000100060488 = puVar1;
  return;
}



/* Entry: 100023e44; end: 1000240b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100023e44(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_1000603b8;
  lVar3 = *(long *)(unaff_x20 + _DAT_1000603b8);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = 0;
    FUN_10001edb0();
    _objc_allocWithZone();
    _objc_retain_x22();
    FUN_10001d9ec(0x3fe0000000000000);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x20();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 1000240b8; end: 100024313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000240b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone(PTR__OBJC_CLASS___UIView_1000504b8);
  func_0x00010003c340(0,0,0,0);
  func_0x00010003d440();
  if (lRam0000000100060480 != -1) {
    _swift_once(0x100060480,FUN_100023e08);
  }
  func_0x00010003cc60(puVar2);
  func_0x000100023ff0();
  func_0x00010003b8e0(puVar2);
  _objc_release_x21();
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar4 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 9;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  lVar1 = _DAT_100060430;
  uVar5 = *(undefined8 *)(param_1 + _DAT_100060430);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  _objc_release_x23();
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  uVar5 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar5);
  _swift_release(lVar4);
  func_0x00010003b700(puVar3);
  _objc_release_x20();
  return puVar2;
}



/* Entry: 100024314; end: 100024343; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController initWithNibName:bundle:] */

undefined8 FUN_100024314(undefined8 param_1)

{
  FUN_100026bc8();
  _objc_retain_x19();
  return param_1;
}



/* Entry: 100024344; end: 100024373; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController initWithCoder:] */

undefined8 FUN_100024344(undefined8 param_1)

{
  func_0x000100026d04();
  _objc_retain_x19();
  return param_1;
}



/* Entry: 100024374; end: 10002450f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100024374(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_c0;
  puVar4 = &UNK_100052288;
  puVar3 = puVar4;
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  puVar5 = PTR__OBJC_CLASS___AVCaptureEventInteraction_1000509c0;
  _objc_allocWithZone();
  puVar1 = PTR___NSConcreteStackBlock_100050768;
  pcStack_70 = FUN_1000266e8;
  puStack_90 = PTR___NSConcreteStackBlock_100050768;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1000261a8;
  puStack_78 = &UNK_100052480;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar3;
  __Block_copy(ppuVar6);
  uStack_a0 = 0x100026710;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_1000261a8;
  puStack_a8 = &UNK_1000524a8;
  puStack_98 = puVar4;
  __Block_copy(&puStack_c0);
  _swift_retain(puVar3);
  _swift_retain(puVar4);
  func_0x00010003c3a0();
  __Block_release(ppuVar7);
  __Block_release(ppuVar6);
  _swift_release(puStack_98);
  puVar1 = puStack_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  _swift_release(puVar1);
  lVar8 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    func_0x00010003b820();
    _objc_release_x19();
    *(undefined **)(unaff_x20 + _DAT_1000603e8) = puVar5;
    _objc_release_x9();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100024510);
  (*pcVar2)();
}



/* Entry: 100024510; end: 100024573; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController viewDidLoad] */

void FUN_100024510(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = 0;
  FUN_100025478();
  puVar1 = PTR_s_viewDidLoad_10005b0c8;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain_x19();
  _objc_msgSendSuper2(&uStack_40,puVar1);
  FUN_100024640();
  func_0x000100024cc0();
  FUN_100024374();
  _objc_release_x20();
  return;
}



/* Entry: 100024574; end: 10002463f; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100024574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_5;
  _objc_retain_x20();
  func_0x000100023f40();
  func_0x00010003bb60();
  _objc_release_x20();
  func_0x00010003cf00(param_1,param_2,param_3,param_4);
  _objc_release_x21();
  _objc_retain_x8(*(undefined8 *)(param_5 + _DAT_100060428));
  FUN_100023b08(0x4034000000000000);
  _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(lVar1);
  return;
}



/* Entry: 100024640; end: 100024d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100024640(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  func_0x000100023f40();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003b8c0(param_1);
  _objc_release_x21();
  lVar2 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = _DAT_100060428;
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024ca4);
    (*pcVar1)();
  }
  func_0x00010003b8e0();
  _objc_release_x20();
  func_0x000100023e44();
  *(undefined ***)(lVar2 + _DAT_1000600e0 + 8) = &PTR_DAT_100052258;
  _swift_unknownObjectWeakAssign();
  _objc_release_x20();
  lVar2 = _DAT_1000603b8;
  lVar3 = *(long *)(unaff_x20 + lVar7);
  func_0x00010003b8e0();
  func_0x000100023ecc();
  *(undefined ***)(lVar3 + _DAT_100060170 + 8) = &PTR_DAT_100052240;
  _swift_unknownObjectWeakAssign();
  _objc_release_x20();
  _objc_retain_x8(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_1000603d8) + _DAT_10005ffd8));
  _objc_retain_x21();
  FUN_10001c6c0();
  _objc_release_x20();
  _objc_release_x21();
  lVar3 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024ca8);
    (*pcVar1)();
  }
  func_0x000100024058();
  func_0x00010003b8e0(lVar3);
  _objc_release_x21();
  _objc_release_x20();
  lVar3 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 0x19;
  *(undefined8 *)(lVar3 + 0x10) = 0xc;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024cac);
    (*pcVar1)();
  }
  func_0x00010003cb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003d720(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x22();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024cb0);
    (*pcVar1)();
  }
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x23();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024cb4);
    (*pcVar1)();
  }
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x23();
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d8c0(*(undefined8 *)(unaff_x20 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd60(0x3ffc71c71c71c71c);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x22();
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(*(undefined8 *)(unaff_x20 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x22();
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(*(undefined8 *)(unaff_x20 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x22();
  *(undefined8 *)(lVar3 + 0x48) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(*(undefined8 *)(unaff_x20 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x22();
  *(undefined8 *)(lVar3 + 0x50) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(*(undefined8 *)(unaff_x20 + lVar7));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x22();
  *(undefined8 *)(lVar3 + 0x58) = uVar4;
  lVar2 = _DAT_100060438;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_100060438);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024cb8);
    (*pcVar1)();
  }
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x23();
  *(undefined8 *)(lVar3 + 0x60) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100024cbc);
    (*pcVar1)();
  }
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x23();
  *(undefined8 *)(lVar3 + 0x68) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
    _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
    func_0x00010003cae0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    _objc_release_x24();
    *(undefined8 *)(lVar3 + 0x70) = uVar4;
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x00010003d720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bb40(*(undefined8 *)(unaff_x20 + lVar7));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    _objc_release_x19();
    *(undefined8 *)(lVar3 + 0x78) = uVar4;
    uVar4 = 0;
    FUN_100011794(0);
    lVar7 = lVar3;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar4);
    _swift_release(lVar3);
    func_0x00010003b700(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(lVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100024cc0);
  (*pcVar1)();
}



/* Entry: 100024d50; end: 100024f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100024d50(void)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  double dVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_1000603f0;
  ppuVar4 = &puStack_70;
  func_0x00010003c4c0(*(undefined8 *)(unaff_x20 + _DAT_1000603f0));
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_release_x8(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSTimer_100050810;
  _objc_opt_self();
  func_0x00010003cb40(0x404e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  _objc_release_x8(uVar5);
  FUN_1000261f8();
  func_0x000100023ecc();
  *(undefined1 *)(unaff_x20 + _DAT_100060178) = 1;
  pcVar3 = "didStartRecording()";
  func_0x00010003a450();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = &UNK_1000523c8;
  _swift_allocObject(&UNK_1000523c8,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,unaff_x20);
  uStack_50 = 0x1000266a4;
  puStack_70 = PTR___NSConcreteStackBlock_100050768;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000272d0;
  puStack_58 = &UNK_1000523e0;
  puStack_48 = puVar2;
  __Block_copy(&puStack_70);
  _swift_release(puStack_48);
  func_0x00010003c840(0x3fc999999999999a,pcVar3);
  __Block_release(ppuVar4);
  _objc_release_x19();
  _swift_unknownObjectRelease();
  func_0x000100023e44();
  FUN_10001e0e4();
  func_0x00010001d8b4();
  func_0x00010003cf40();
  _objc_release_x20();
  dVar6 = *(double *)(pcVar3 + _DAT_100060100);
  _objc_retain_x8(*(undefined8 *)(pcVar3 + _DAT_1000600f0));
  FUN_10001d384();
  FUN_10001d230(dVar6 + 0.3);
  FUN_10001cd74(dVar6 + 0.3);
  _objc_release_x19();
  _objc_release_x20();
  return;
}



/* Entry: 100024f2c; end: 100024fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100024f2c(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_1000603f0;
  func_0x00010003c4c0(*(undefined8 *)(unaff_x20 + _DAT_1000603f0));
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_release_x8(uVar8);
  if ((param_1 & 1) == 0) {
    func_0x00010001ad0c();
  }
  else {
    func_0x00010001ae48();
    FUN_100026518();
  }
  func_0x000100023ecc();
  FUN_1000201e0();
  _objc_release_x20();
  func_0x000100023e44();
  FUN_10001dfc0(1);
  _objc_release_x20();
  ppuVar5 = &puStack_80;
  ppuVar7 = &puStack_80;
  func_0x000100023e44();
  FUN_10001dd04(0x3fc999999999999a,0,1);
  _objc_release_x20();
  puVar2 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
  puVar6 = &UNK_100052288;
  puVar3 = puVar6;
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,unaff_x20);
  puVar4 = &UNK_1000522b0;
  _swift_allocObject(&UNK_1000522b0,0x19,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  puVar4[0x18] = 0;
  puVar3 = PTR___NSConcreteStackBlock_100050768;
  pcStack_60 = FUN_100025a90;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_68 = &UNK_1000522c8;
  puStack_58 = puVar4;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,unaff_x20);
  puVar4 = &UNK_100052300;
  _swift_allocObject(&UNK_100052300,0x19,7);
  *(undefined **)(puVar4 + 0x10) = puVar6;
  puVar4[0x18] = 0;
  pcStack_60 = (code *)0x100025ab8;
  puStack_80 = puVar3;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10002a4a4;
  puStack_68 = &UNK_100052318;
  puStack_58 = puVar4;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  func_0x00010003b960(0x3fc999999999999a,puVar2);
  __Block_release(ppuVar7);
  __Block_release(ppuVar5);
  return;
}



/* Entry: 100024fc8; end: 10002503f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100024fc8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = _DAT_1000603f0;
  func_0x00010003c4c0(*(undefined8 *)(unaff_x20 + _DAT_1000603f0));
  uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_release_x8(uVar8);
  func_0x00010001ad0c();
  func_0x000100023ecc();
  FUN_1000201e0();
  _objc_release_x20();
  func_0x000100023e44();
  FUN_10001dfc0(1);
  _objc_release_x20();
  ppuVar5 = &puStack_80;
  ppuVar7 = &puStack_80;
  func_0x000100023e44();
  FUN_10001dd04(0x3fc999999999999a,0,1);
  _objc_release_x20();
  puVar2 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
  puVar6 = &UNK_100052288;
  puVar3 = puVar6;
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,unaff_x20);
  puVar4 = &UNK_1000522b0;
  _swift_allocObject(&UNK_1000522b0,0x19,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  puVar4[0x18] = 0;
  puVar3 = PTR___NSConcreteStackBlock_100050768;
  pcStack_60 = FUN_100025a90;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_68 = &UNK_1000522c8;
  puStack_58 = puVar4;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,unaff_x20);
  puVar4 = &UNK_100052300;
  _swift_allocObject(&UNK_100052300,0x19,7);
  *(undefined **)(puVar4 + 0x10) = puVar6;
  puVar4[0x18] = 0;
  pcStack_60 = (code *)0x100025ab8;
  puStack_80 = puVar3;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10002a4a4;
  puStack_68 = &UNK_100052318;
  puStack_58 = puVar4;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  func_0x00010003b960(0x3fc999999999999a,puVar2);
  __Block_release(ppuVar7);
  __Block_release(ppuVar5);
  return;
}



/* Entry: 100025040; end: 100025073; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController maxVideoRecordingTimerFired] */

void FUN_100025040(undefined8 param_1)

{
  _objc_retain();
  FUN_100024fc8();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 100025074; end: 100025213;  */

void FUN_100025074(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  FUN_100023e44();
  FUN_10001dd04(0x3fc999999999999a,param_1,1);
  _objc_release_x20();
  puVar1 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_opt_self(PTR__OBJC_CLASS___UIView_1000504b8);
  puVar5 = &UNK_100052288;
  puVar2 = puVar5;
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10);
  puVar3 = &UNK_1000522b0;
  _swift_allocObject(&UNK_1000522b0,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = (char)param_1;
  puVar2 = PTR___NSConcreteStackBlock_100050768;
  pcStack_60 = FUN_100025a90;
  puStack_80 = PTR___NSConcreteStackBlock_100050768;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1000272d0;
  puStack_68 = &UNK_1000522c8;
  puStack_58 = puVar3;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar3 = &UNK_100052300;
  _swift_allocObject(&UNK_100052300,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar5;
  puVar3[0x18] = (char)param_1;
  pcStack_60 = (code *)0x100025ab8;
  puStack_80 = puVar2;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10002a4a4;
  puStack_68 = &UNK_100052318;
  puStack_58 = puVar3;
  __Block_copy(&puStack_80);
  _swift_release(puStack_58);
  func_0x00010003b960(0x3fc999999999999a,puVar1);
  __Block_release(ppuVar6);
  __Block_release(ppuVar4);
  return;
}



/* Entry: 100025214; end: 1000252f7;  */

void FUN_100025214(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    func_0x000100023ff0();
    uVar1 = 0;
    if ((param_2 & 1) == 0) {
      uVar1 = 0x3ff0000000000000;
    }
    func_0x00010003cbe0(uVar1);
    _objc_release_x20();
    _objc_release_x21();
  }
  return;
}



/* Entry: 1000252f8; end: 100025333; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController cameraTimerLongPressTimeForUIHidingTimerFired] */

void FUN_1000252f8(undefined8 param_1)

{
  _objc_retain();
  FUN_100025074(1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 100025334; end: 100025367;  */

void FUN_100025334(void)

{
  FUN_100025478();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10005b018);
  return;
}



/* Entry: 100025368; end: 10002546f; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100025368(long param_1)

{
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603b8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603c0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603c8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603d0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603d8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603e0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603e8));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_1000603f0));
  func_0x0001000267d8(param_1 + _DAT_1000603f8);
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060400));
  func_0x0001000267d8(param_1 + _DAT_100060408);
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060410));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060428));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_100060430));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_100060438));
  return;
}



/* Entry: 100025470; end: 100025477;  */

void FUN_100025470(void)

{
  if (lRam0000000100060468 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_100044060);
  return;
}



/* Entry: 100025478; end: 1000254af;  */

void FUN_100025478(undefined8 param_1)

{
  if (lRam0000000100060468 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100044060);
  return;
}



/* Entry: 1000254b0; end: 1000255a7;  */

void FUN_1000254b0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_a8 = &UNK_100041530;
  puStack_a0 = &UNK_100041530;
  puStack_98 = PTR___sBOWV_1000509f0 + 0x40;
  puStack_80 = &UNK_100041530;
  puStack_78 = &UNK_100041530;
  puStack_70 = &UNK_100041530;
  lVar1 = 0x13f;
  puStack_90 = puStack_98;
  puStack_88 = puStack_98;
  func_0x000100025554();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_100041530;
    puStack_50 = &UNK_100041530;
    puStack_48 = &UNK_100041548;
    puStack_40 = &UNK_100041548;
    puStack_38 = &UNK_100041530;
    puStack_30 = &UNK_100041530;
    puStack_28 = &UNK_100041530;
    lStack_58 = lStack_68;
    _swift_updateClassMetadata2(param_1,0x100,0x11,&puStack_a8,param_1 + 0x50);
  }
  return;
}



/* Entry: 1000255a8; end: 1000257e7;  */

void FUN_1000255a8(long param_1,long param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + *param_3) & 1) == 0) {
      lVar1 = param_1;
      func_0x00010003c8a0();
      if (lVar1 == 0) {
        *(undefined1 *)(param_2 + *param_4) = 1;
        func_0x000100025660();
      }
      else {
        lVar1 = param_1;
        func_0x00010003c8a0();
        if ((lVar1 == 1) || (func_0x00010003c8a0(), param_1 == 2)) {
          *(undefined1 *)(param_2 + *param_4) = 0;
          FUN_1000257e8();
        }
      }
    }
    _objc_release_x20();
  }
  return;
}



/* Entry: 1000257e8; end: 100025a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000257e8(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar5;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar2 = _DAT_100060400;
  func_0x00010003c4c0(*(undefined8 *)(unaff_x20 + _DAT_100060400));
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _objc_release_x8(uVar5);
  lVar2 = _DAT_100060410;
  if (*(long *)(unaff_x20 + _DAT_100060410) == 0) {
    FUN_100026518();
  }
  else {
    __s10Foundation4DateVACycfC(lVar7 - extraout_x12);
    lVar1 = _DAT_100060408;
    _swift_beginAccess(unaff_x20 + _DAT_100060408,auStack_78,0,0);
    func_0x000100026788(unaff_x20 + lVar1,puVar6);
    pcVar9 = *(code **)(lVar8 + 0x30);
    puVar4 = puVar6;
    (*pcVar9)(puVar6,1,lVar3);
    if ((int)puVar4 == 1) {
      __s10Foundation4DateVACycfC(lVar7);
      puVar4 = puVar6;
      (*pcVar9)(puVar6,1,lVar3);
      if ((int)puVar4 != 1) {
        func_0x0001000267d8(puVar6);
      }
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar3);
    }
    __s10Foundation4DateV17timeIntervalSinceySdACF(lVar7);
    pcVar9 = *(code **)(lVar8 + 8);
    (*pcVar9)(lVar7,lVar3);
    (*pcVar9)(lVar7 - extraout_x12,lVar3);
    FUN_100024f2c(param_1 < 0.5);
  }
  func_0x00010003c4c0(*(undefined8 *)(unaff_x20 + lVar2));
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _objc_release_x8(uVar5);
  func_0x000100023ecc();
  func_0x00010003d460();
  _objc_release_x20();
  if (*(long *)(unaff_x20 + _DAT_1000603e8) != 0) {
    func_0x00010003ce00();
  }
  return;
}



/* Entry: 100025a10; end: 100025a6b; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraViewController hardwareInteractionTimerFired] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100025a10(long param_1)

{
  if (((*(byte *)(param_1 + _DAT_100060418) & 1) == 0) &&
     (*(char *)(param_1 + _DAT_100060420) != '\x01')) {
    return;
  }
  _objc_retain();
  FUN_100024d50();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 100025a6c; end: 100025a8f;  */

void FUN_100025a6c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100025a90; end: 100025ac3;  */

void FUN_100025a90(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    func_0x000100023ff0();
    uVar3 = 0;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0x3ff0000000000000;
    }
    func_0x00010003cbe0(uVar3);
    _objc_release_x20();
    _objc_release_x21();
  }
  return;
}



/* Entry: 100025ac4; end: 100025bf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100025ac4(void)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar2 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_100060400;
  puVar4 = auStack_50 + -extraout_x8;
  func_0x00010003c4c0(*(undefined8 *)(unaff_x20 + _DAT_100060400));
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _objc_release_x8(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSTimer_100050810;
  _objc_opt_self();
  func_0x00010003cb40(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar1;
  _objc_release_x8(uVar3);
  func_0x00010003ce00(*(undefined8 *)(unaff_x20 + _DAT_1000603e8));
  __s10Foundation4DateVACycfC(puVar4);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar4,0,1,lVar2);
  lVar2 = _DAT_1000603f8;
  _swift_beginAccess(unaff_x20 + _DAT_1000603f8,auStack_48,0x21,0);
  FUN_100026738(puVar4,unaff_x20 + lVar2);
  _swift_endAccess(auStack_48);
  FUN_100024d50();
  return;
}



/* Entry: 100025bf8; end: 100025dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100025bf8(double param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (*(code *)PTR____chkstk_darwin_100050770)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100050770)();
  lVar1 = _DAT_100060400;
  func_0x00010003c4c0(*(undefined8 *)(unaff_x20 + _DAT_100060400));
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _objc_release_x8(uVar4);
  if (*(long *)(unaff_x20 + _DAT_1000603e8) != 0) {
    func_0x00010003ce00();
  }
  __s10Foundation4DateVACycfC(lVar6 - extraout_x12);
  lVar1 = _DAT_1000603f8;
  _swift_beginAccess(unaff_x20 + _DAT_1000603f8,auStack_78,0,0);
  func_0x000100026788(unaff_x20 + lVar1,puVar5);
  pcVar8 = *(code **)(lVar7 + 0x30);
  puVar3 = puVar5;
  (*pcVar8)(puVar5,1,lVar2);
  if ((int)puVar3 == 1) {
    __s10Foundation4DateVACycfC(lVar6);
    puVar3 = puVar5;
    (*pcVar8)(puVar5,1,lVar2);
    if ((int)puVar3 != 1) {
      func_0x0001000267d8(puVar5);
    }
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar2);
  }
  __s10Foundation4DateV17timeIntervalSinceySdACF(lVar6);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(lVar6,lVar2);
  (*pcVar8)(lVar6 - extraout_x12,lVar2);
  FUN_100024f2c(param_1 < 0.5);
  return;
}



/* Entry: 100025dcc; end: 1000261a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100025dcc(long param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar7 = *(long *)(param_1 + _DAT_1000603c8);
    func_0x00010001a5a8();
    lVar1 = _DAT_10005ff48;
    uVar6 = *(undefined8 *)(lVar7 + _DAT_10005ff48);
    _swift_retain(uVar6);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_release(uVar6);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_10005ff50);
    uVar6 = *(undefined8 *)(lVar7 + lVar1);
    _objc_retain_x24();
    _swift_retain(uVar6);
    __s11SwiftSCLock4LockC6unlockyyF();
    _swift_release(uVar6);
    pcVar2 = "reset(_:)";
    func_0x00010003a450("reset(_:)");
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_100052530;
    _swift_allocObject(&UNK_100052530,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10,param_1);
    puVar4 = &UNK_1000525a8;
    _swift_allocObject(&UNK_1000525a8,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar8;
    uStack_78 = 0x100026f08;
    puStack_98 = PTR___NSConcreteStackBlock_100050768;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_1000272d0;
    puStack_80 = &UNK_1000525c0;
    ppuVar5 = &puStack_98;
    puStack_70 = puVar4;
    __Block_copy(ppuVar5);
    puVar3 = puStack_70;
    _objc_retain_x22();
    _swift_release(puVar3);
    func_0x00010003c820(pcVar2);
    __Block_release(ppuVar5);
    _objc_release_x21();
    _objc_release_x22();
    _swift_unknownObjectRelease(pcVar2);
    uVar8 = 0;
    FUN_100028634(0);
    _objc_allocWithZone();
    uVar6 = uVar8;
    _objc_retain_x25();
    _objc_retain_x19();
    FUN_100026820(param_2,0,uVar6,uVar8);
    func_0x00010003c940(uVar6);
    _objc_release_x21();
    _objc_release_x19();
  }
  return;
}



/* Entry: 1000261a8; end: 1000261f7;  */

void FUN_1000261a8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain();
  _objc_retain_x19();
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(uVar3);
  return;
}



/* Entry: 1000261f8; end: 100026517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000261f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar2 = param_1;
  func_0x00010001a6e8();
  lVar1 = _DAT_10005ff48;
  uVar5 = *(undefined8 *)(param_2 + _DAT_10005ff48);
  _swift_retain(uVar5);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + _DAT_10005ff50);
  puVar6 = *(undefined1 **)(param_2 + lVar1);
  _objc_retain_x24();
  _swift_retain(puVar6);
  __s11SwiftSCLock4LockC6unlockyyF();
  _swift_release(puVar6);
  if (*(char *)(lVar2 + _DAT_10005fc10) == '\x01') {
    uVar7 = *(undefined8 *)(lVar2 + _DAT_10005fc18);
    puVar3 = &UNK_100052418;
    _swift_allocObject(&UNK_100052418,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    *(long *)(puVar3 + 0x18) = lVar2;
    pcStack_60 = FUN_1000266d8;
    puStack_80 = PTR___NSConcreteStackBlock_100050768;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1000272d0;
    puStack_68 = &UNK_100052430;
    puStack_58 = puVar3;
    __Block_copy(&puStack_80);
    puVar3 = puStack_58;
    _objc_retain_x23();
    _objc_retain_x22();
    _swift_release(puVar3);
    func_0x00010003c820(uVar7);
    _objc_release_x23();
    __Block_release(ppuVar4);
    puVar6 = (undefined1 *)ppuVar4;
  }
  else {
    _objc_release_x23();
  }
  _objc_release_x22();
  FUN_10001a58c();
  func_0x000100026380(*(long *)(param_2 + _DAT_10005ff40) == 2,param_1,puVar6);
  _objc_release_x20();
  return;
}



/* Entry: 100026518; end: 100026673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026518(undefined8 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar7 = &puStack_70;
  puVar3 = param_1;
  FUN_10001a58c();
  puVar4 = puVar3;
  func_0x00010001a6e8();
  uVar2 = *(undefined1 *)((long)puVar4 + _DAT_10005fc10);
  _objc_release();
  FUN_100032230();
  pcVar9 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar4) + 0xd8);
  _objc_retain_x8();
  (*pcVar9)(1);
  _objc_release_x20();
  lVar1 = (long)puVar3 + _DAT_10005fa60;
  *(undefined ***)(lVar1 + 8) = &PTR_DAT_100052230;
  _swift_unknownObjectWeakAssign(lVar1,param_1);
  uVar8 = *(undefined8 *)((long)puVar3 + _DAT_10005fa88);
  puVar5 = &UNK_100052350;
  _swift_allocObject(&UNK_100052350,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,puVar3);
  puVar6 = &UNK_100052378;
  _swift_allocObject(&UNK_100052378,0x19,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  puVar6[0x18] = uVar2;
  pcStack_50 = FUN_100026698;
  puStack_70 = PTR___NSConcreteStackBlock_100050768;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000272d0;
  puStack_58 = &UNK_100052390;
  puStack_48 = puVar6;
  __Block_copy(&puStack_70);
  _swift_release(puStack_48);
  func_0x00010003c820(uVar8);
  __Block_release(ppuVar7);
  _objc_release_x19();
  return;
}



/* Entry: 100026674; end: 100026697;  */

void FUN_100026674(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100026698; end: 1000266ab;  */

void FUN_100026698(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___AVCapturePhotoSettings_100050710;
    _objc_allocWithZone(PTR__OBJC_CLASS___AVCapturePhotoSettings_100050710);
    func_0x00010003c1e0();
    func_0x00010003d120();
    func_0x00010003ce80(puVar1);
    FUN_100013dbc();
    func_0x00010003bbe0();
    _objc_release_x20();
    _objc_release_x21();
    _objc_release_x19();
  }
  return;
}



/* Entry: 1000266ac; end: 1000266d7;  */

void FUN_1000266ac(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 1000266d8; end: 1000266e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000266d8(void)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar2 + _DAT_10005fe08);
    _objc_retain();
    if (lVar6 == 1) {
      func_0x000100018a6c(1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_1000508c0)(lVar2);
      return;
    }
    pcVar3 = "didStartRecording(withDevice:)";
    func_0x00010003a450("didStartRecording(withDevice:)");
    _objc_retainAutoreleasedReturnValue();
    puVar4 = &UNK_1000515e8;
    _swift_allocObject(&UNK_1000515e8,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10,uVar1);
    pcStack_40 = FUN_100015428;
    puStack_60 = PTR___NSConcreteStackBlock_100050768;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1000272d0;
    puStack_48 = &UNK_100051600;
    ppuVar5 = &puStack_60;
    puStack_38 = puVar4;
    __Block_copy(ppuVar5);
    _swift_release(puStack_38);
    func_0x00010003c820(pcVar3);
    _objc_release(lVar2);
    __Block_release(ppuVar5);
    _swift_unknownObjectRelease(pcVar3);
  }
  return;
}



/* Entry: 1000266e8; end: 100026737;  */

void FUN_1000266e8(void)

{
  FUN_1000255a8();
  return;
}



/* Entry: 100026738; end: 10002681f;  */

undefined8 FUN_100026738(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100060490;
  FUN_100011744(0x100060490,&UNK_100041d70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100026820; end: 10002690b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100026820(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar4 = &lStack_40;
  *(undefined8 *)(param_4 + _DAT_1000604e8) = 0;
  *(undefined8 *)(param_4 + _DAT_1000604f0) = 0;
  lVar2 = param_4 + _DAT_1000604f8;
  *(undefined8 *)(lVar2 + 8) = 0;
  _swift_unknownObjectWeakInit(lVar2,0);
  puVar1 = (undefined8 *)(param_4 + _DAT_1000604e0);
  *puVar1 = param_1;
  *(char *)(puVar1 + 1) = (char)param_2;
  *(undefined ***)(lVar2 + 8) = &PTR_DAT_100052210;
  _swift_unknownObjectWeakAssign();
  func_0x000100026e64(param_1,param_2);
  uVar3 = 0;
  FUN_100028634();
  lStack_40 = param_4;
  uStack_38 = uVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_initWithNibName_bundle__10005b0e0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d040();
  _objc_release_x21();
  func_0x000100026e68(param_1,param_2);
  _objc_release_x22();
  return (undefined1 *)plVar4;
}



/* Entry: 10002690c; end: 100026a47;  */

void FUN_10002690c(undefined8 *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar1 = param_1;
  FUN_10002e6c4();
  pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar1) + 0xf8);
  _objc_retain_x8();
  (*pcVar6)(2,0);
  _objc_release_x20();
  pcVar2 = "didCaptureVideo(asset:isFrontFacing:error:)";
  func_0x00010003a450("didCaptureVideo(asset:isFrontFacing:error:)");
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_100052288;
  _swift_allocObject(&UNK_100052288,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &UNK_1000524e0;
  _swift_allocObject(&UNK_1000524e0,0x21,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 **)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = param_2;
  uStack_50 = 0x100026e48;
  puStack_70 = PTR___NSConcreteStackBlock_100050768;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000272d0;
  puStack_58 = &UNK_1000524f8;
  puStack_48 = puVar4;
  __Block_copy(&puStack_70);
  puVar3 = puStack_48;
  _objc_retain_x19();
  _swift_release(puVar3);
  func_0x00010003c820(pcVar2);
  __Block_release(ppuVar5);
  _swift_unknownObjectRelease(pcVar2);
  return;
}



/* Entry: 100026a48; end: 100026bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026a48(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  *(undefined8 *)(unaff_x20 + _DAT_1000603b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603f0) = 0;
  lVar2 = _DAT_1000603f8;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  pcVar3 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar2,1,1,lVar1);
  *(undefined8 *)(unaff_x20 + _DAT_100060400) = 0;
  lVar2 = unaff_x20 + _DAT_100060408;
  (*pcVar3)(lVar2,1,1,lVar1);
  *(undefined8 *)(unaff_x20 + _DAT_100060410) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_100060418) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_100060420) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060428) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060430) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060438) = 0;
  FUN_10001c17c();
  *(long *)(unaff_x20 + _DAT_1000603c8) = lVar2;
  func_0x00010001a19c();
  *(long *)(unaff_x20 + _DAT_1000603d0) = lVar2;
  FUN_10001c44c();
  *(long *)(unaff_x20 + _DAT_1000603d8) = lVar2;
  FUN_100025478();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__10005b0e0,0,0);
  return;
}



/* Entry: 100026bc8; end: 100026e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100026bc8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  *(undefined8 *)(unaff_x20 + _DAT_1000603b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603e0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1000603f0) = 0;
  lVar1 = _DAT_1000603f8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar3)(unaff_x20 + lVar1,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_100060400) = 0;
  (*pcVar3)(unaff_x20 + _DAT_100060408,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_100060410) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_100060418) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_100060420) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060428) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060430) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100060438) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004c580,
             "SnapchatCaptureExtension_lib/LockedCameraViewController.swift",0x3d,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100026d04);
  (*pcVar3)();
}



/* Entry: 100026e40; end: 100026e6b;  */

void FUN_100026e40(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100026e6c; end: 100026ea3;  */

void FUN_100026e6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100026ea4; end: 100026f0f;  */

void FUN_100026ea4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100026f10; end: 100026f53;  */

undefined8 * FUN_100026f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _objc_retain_x8();
  _objc_retain_x20();
  _objc_retain_x21();
  return param_1;
}



/* Entry: 100026f54; end: 100026f83;  */

void FUN_100026f54(undefined8 *param_1)

{
  _objc_release_x8(*param_1);
  _objc_release_x8(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1[2]);
  return;
}



/* Entry: 100026f84; end: 100026feb;  */

undefined8 * FUN_100026f84(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _objc_retain_x8();
  _objc_release_x21();
  param_1[1] = param_2[1];
  _objc_retain_x8();
  _objc_release_x21();
  param_1[2] = param_2[2];
  _objc_retain_x8();
  _objc_release_x19();
  return param_1;
}



/* Entry: 100026fec; end: 100026fff;  */

void FUN_100026fec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100027000; end: 10002704b;  */

undefined8 * FUN_100027000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release_x8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release_x8(uVar1);
  param_1[2] = param_2[2];
  _objc_release_x9();
  return param_1;
}



/* Entry: 10002704c; end: 1000270e7;  */

int FUN_10002704c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1000270e8; end: 100027127;  */

void FUN_1000270e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100041648;
  _swift_getWitnessTable(&UNK_100041648,&UNK_100052678);
  puRam0000000100060498 = puVar1;
  return;
}



/* Entry: 100027128; end: 10002719b;  */

undefined8 FUN_100027128(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_100025478(0);
  _objc_allocWithZone();
  _objc_retain_x19();
  uVar2 = uVar1;
  _objc_retain_x21();
  uVar3 = uVar2;
  _objc_retain_x22();
  FUN_100026a48(uVar1,uVar2,uVar3);
  _objc_release_x19();
  _objc_release_x21();
  _objc_release_x22();
  return uVar1;
}



/* Entry: 10002719c; end: 1000271bf;  */

void FUN_10002719c(void)

{
  return;
}



/* Entry: 1000271c0; end: 10002725f;  */

void FUN_1000271c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100027288();
                    /* WARNING: Could not recover jumptable at 0x00010003ac24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI29UIViewControllerRepresentablePAAE9_makeView4view6inputsAA01_G7OutputsVAA11_GraphValueVyxG_AA01_G6InputsVtFZ_100050380
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 100027260; end: 100027263;  */

void FUN_100027260(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1000503a8)();
  return;
}



/* Entry: 100027264; end: 100027287;  */

void FUN_100027264(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_100027288();
  __s7SwiftUI29UIViewControllerRepresentablePAAE4bodys5NeverOvg(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100027288);
  (*pcVar1)();
}



/* Entry: 100027288; end: 1000272c7;  */

void FUN_100027288(void)

{
  undefined *puVar1;
  
  if (puRam00000001000604a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000415d8;
  _swift_getWitnessTable(&UNK_1000415d8,&UNK_100052678);
  puRam00000001000604a0 = puVar1;
  return;
}



/* Entry: 1000272c8; end: 1000272cf;  */

undefined8 * FUN_1000272c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _objc_retain_x8();
  _objc_retain_x20();
  _objc_retain_x21();
  return param_1;
}



/* Entry: 1000272d0; end: 1000272fb;  */

void FUN_1000272d0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(uVar2);
  return;
}



/* Entry: 1000272fc; end: 1000274ab;  */

void FUN_1000272fc(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long extraout_x8;
  long lVar7;
  code *pcVar8;
  undefined8 *apuStack_70 [2];
  
  puVar2 = (undefined8 *)0x0;
  __s10Foundation3URLVMa();
  lVar7 = puVar2[-1];
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = (ulong *)((long)apuStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_retain_x21();
  apuStack_70[1] = puVar3;
  _objc_retain_x22();
  apuStack_70[0] = puVar3;
  _objc_retain_x20();
  puVar4 = puVar3;
  FUN_100032230();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar8 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar4) + 0xc0);
  _objc_retain_x8();
  (*pcVar8)();
  _objc_release_x20();
  FUN_10002e6c4();
  puVar5 = param_2;
  _objc_retain_x8(*param_2);
  __s19LockedCameraCapture0abC7SessionC17sessionContentURL10Foundation0G0Vvg(puVar6);
  (**(code **)((*(ulong *)puVar1 & *puVar5) + 0xf0))(puVar6);
  _objc_release_x28();
  pcVar8 = *(code **)(lVar7 + 8);
  puVar5 = puVar6;
  (*pcVar8)(puVar6,puVar2);
  FUN_100033a54();
  _objc_retain_x8(*puVar5);
  __s19LockedCameraCapture0abC7SessionC17sessionContentURL10Foundation0G0Vvg(puVar6);
  (**(code **)((*(ulong *)puVar1 & *puVar5) + 0xe8))(puVar6);
  _objc_release_x28();
  (*pcVar8)(puVar6,puVar2);
  pcVar8 = *(code **)((*(ulong *)puVar1 & *(ulong *)*param_2) + 0x110);
  _objc_retain_x8();
  (*pcVar8)();
  _objc_release_x20();
  __s7SwiftUI15SafeAreaRegionsV3allACvgZ();
  puVar5 = puVar6;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  *param_1 = (long)apuStack_70[1];
  param_1[1] = (long)apuStack_70[0];
  param_1[2] = (long)puVar3;
  param_1[3] = (long)puVar6;
  *(char *)(param_1 + 4) = (char)puVar5;
  return;
}



/* Entry: 1000274ac; end: 100027543;  */

void FUN_1000274ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  puVar1 = &UNK_100052810;
  _swift_allocObject(&UNK_100052810,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  _objc_retain_x21();
  _objc_retain_x22();
  _objc_retain_x23();
  uVar2 = 0x1000604c0;
  FUN_100011744(0x1000604c0,&UNK_100041740);
  uVar3 = uVar2;
  FUN_100027b6c();
                    /* WARNING: Could not recover jumptable at 0x00010003abb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s19LockedCameraCapture0abC7UISceneV7contentACyxGxAA0abC7SessionCc_tcfC_100050538)
            (param_1,FUN_100027b60,puVar1,uVar2,uVar3);
  return;
}



/* Entry: 100027544; end: 10002757b;  */

void FUN_100027544(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100027aec();
                    /* WARNING: Could not recover jumptable at 0x00010003abc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s19LockedCameraCapture0abC9ExtensionPAAE13configuration0D3Kit03AppD18SceneConfigurationVvg_100050550
  )(param_1,param_2,uVar1);
  return;
}



/* Entry: 10002757c; end: 1000275a3;  */

void FUN_10002757c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10002786c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 1000275a4; end: 1000275b7;  */

void FUN_1000275a4(void)

{
  __s19ExtensionFoundation03AppA0PAAE14extensionPointAA0caE0Vvg();
  return;
}



/* Entry: 1000275b8; end: 10002760f;  */

/* WARNING: Removing unreachable block (ram,0x000100027604) */

undefined8 FUN_1000275b8(undefined8 param_1)

{
  FUN_100027610();
  __s19ExtensionFoundation03AppA0P0A3KitAD0cA18SceneConfigurationV0F0RtzrlE4mainyyKFZ
            (&UNK_100052790,param_1);
  return 0;
}



/* Entry: 100027610; end: 10002764f;  */

void FUN_100027610(void)

{
  undefined *puVar1;
  
  if (puRam00000001000604a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000416f4;
  _swift_getWitnessTable(&UNK_1000416f4,&UNK_100052790);
  puRam00000001000604a8 = puVar1;
  return;
}



/* Entry: 100027650; end: 100027693;  */

undefined8 * FUN_100027650(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _objc_retain_x8();
  _objc_retain_x20();
  _objc_retain_x21();
  return param_1;
}



/* Entry: 100027694; end: 1000276c3;  */

void FUN_100027694(undefined8 *param_1)

{
  _objc_release_x8(*param_1);
  _objc_release_x8(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1[2]);
  return;
}



/* Entry: 1000276c4; end: 10002772b;  */

undefined8 * FUN_1000276c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _objc_retain_x8();
  _objc_release_x21();
  param_1[1] = param_2[1];
  _objc_retain_x8();
  _objc_release_x21();
  param_1[2] = param_2[2];
  _objc_retain_x8();
  _objc_release_x19();
  return param_1;
}



/* Entry: 10002772c; end: 100027777;  */

undefined8 * FUN_10002772c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_release_x8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _objc_release_x8(uVar1);
  param_1[2] = param_2[2];
  _objc_release_x9();
  return param_1;
}



/* Entry: 100027778; end: 100027827;  */

int FUN_100027778(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100027828; end: 10002786b;  */

void FUN_100027828(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000604b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s12ExtensionKit03AppA18SceneConfigurationVMa(0xff);
  puVar2 = PTR___s12ExtensionKit03AppA18SceneConfigurationV0A10Foundation0caE0AAMc_1000509d0;
  _swift_getWitnessTable
            (PTR___s12ExtensionKit03AppA18SceneConfigurationV0A10Foundation0caE0AAMc_1000509d0,uVar1
            );
  puRam00000001000604b0 = puVar2;
  return;
}



/* Entry: 10002786c; end: 100027aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10002786c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = (undefined8 *)0x0;
  __s10Foundation4DateVMa();
  lVar14 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVACycfC(lVar12);
  FUN_10002e6c4();
  pcVar13 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0x108);
  _objc_retain_x8();
  (*pcVar13)(lVar12);
  _objc_release_x20();
  lVar3 = 0;
  FUN_10001c26c();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_10005ffa8) = 0;
  *(undefined8 *)(lVar4 + _DAT_10005ffa0) = 1;
  plVar5 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_10005b548);
  _objc_retainAutoreleasedReturnValue();
  plVar6 = plVar5;
  FUN_10001c17c();
  plVar7 = plVar6;
  func_0x00010001a3fc();
  puVar8 = &UNK_1000527c0;
  _swift_allocObject(&UNK_1000527c0,0x18,7);
  _swift_unknownObjectWeakInit(puVar8 + 0x10,plVar6);
  pcStack_80 = FUN_100027ac8;
  puStack_a0 = PTR___NSConcreteStackBlock_100050768;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1000272d0;
  puStack_88 = &UNK_1000527d8;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar8;
  __Block_copy(ppuVar9);
  _swift_release(puStack_78);
  func_0x00010003c820(plVar7);
  __Block_release(ppuVar9);
  _objc_release_x20();
  _objc_release_x23();
  uVar10 = 0;
  FUN_10001c53c();
  _objc_allocWithZone();
  func_0x00010003c1e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10001c44c();
  uVar11 = uVar10;
  _objc_release_x20();
  _objc_retain_x8(*(undefined8 *)((long)plVar5 + _DAT_10005ffa8));
  _objc_release_x22();
  lVar3 = 0;
  FUN_10001a2f8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined8 *)(lVar4 + _DAT_10005fee0) = 0;
  *(undefined8 *)(lVar4 + _DAT_10005fee8) = uVar10;
  *(undefined8 *)(lVar4 + _DAT_10005fef0) = uVar11;
  lStack_b0 = lVar4;
  lStack_a8 = lVar3;
  _objc_msgSendSuper2(&lStack_b0,PTR_s_init_10005b548);
  (**(code **)(lVar14 + 8))(lVar12,puVar1);
  return plVar5;
}



/* Entry: 100027aa4; end: 100027ac7;  */

void FUN_100027aa4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100027ac8; end: 100027aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100027ac8(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  uVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar2 != 0) {
    _objc_retain_x8(*(undefined8 *)(uVar2 + _DAT_10005ff30));
    uVar3 = uVar2;
    _objc_release_x20();
    __s11SwiftSCLock4LockC4lockyyF();
    lVar1 = _DAT_10005fe40;
    _objc_retain_x8(*(undefined8 *)(uVar2 + _DAT_10005fe40));
    __s11SwiftSCLock4LockC6unlockyyF();
    func_0x00010003c5c0();
    uVar4 = uVar3;
    _objc_release_x21();
    if ((uVar3 & 1) == 0) {
      __s11SwiftSCLock4LockC4lockyyF();
      _objc_retain_x8(*(undefined8 *)(uVar2 + lVar1));
      __s11SwiftSCLock4LockC6unlockyyF();
      func_0x00010003d660(uVar4);
      _objc_release_x21();
    }
    _objc_release_x19();
  }
  return;
}



/* Entry: 100027aec; end: 100027b5f;  */

void FUN_100027aec(void)

{
  undefined *puVar1;
  
  if (puRam00000001000604b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_1000416b4;
  _swift_getWitnessTable(&UNK_1000416b4,&UNK_100052790);
  puRam00000001000604b8 = puVar1;
  return;
}



/* Entry: 100027b60; end: 100027b6b;  */

void FUN_100027b60(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined8 *apuStack_70 [2];
  
  puVar2 = (undefined8 *)0x0;
  __s10Foundation3URLVMa
            (0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20));
  lVar7 = puVar2[-1];
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_100050770)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = (ulong *)((long)apuStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_retain_x21();
  apuStack_70[1] = puVar3;
  _objc_retain_x22();
  apuStack_70[0] = puVar3;
  _objc_retain_x20();
  puVar4 = puVar3;
  FUN_100032230();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar8 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar4) + 0xc0);
  _objc_retain_x8();
  (*pcVar8)();
  _objc_release_x20();
  FUN_10002e6c4();
  puVar5 = param_2;
  _objc_retain_x8(*param_2);
  __s19LockedCameraCapture0abC7SessionC17sessionContentURL10Foundation0G0Vvg(puVar6);
  (**(code **)((*(ulong *)puVar1 & *puVar5) + 0xf0))(puVar6);
  _objc_release_x28();
  pcVar8 = *(code **)(lVar7 + 8);
  puVar5 = puVar6;
  (*pcVar8)(puVar6,puVar2);
  FUN_100033a54();
  _objc_retain_x8(*puVar5);
  __s19LockedCameraCapture0abC7SessionC17sessionContentURL10Foundation0G0Vvg(puVar6);
  (**(code **)((*(ulong *)puVar1 & *puVar5) + 0xe8))(puVar6);
  _objc_release_x28();
  (*pcVar8)(puVar6,puVar2);
  pcVar8 = *(code **)((*(ulong *)puVar1 & *(ulong *)*param_2) + 0x110);
  _objc_retain_x8();
  (*pcVar8)();
  _objc_release_x20();
  __s7SwiftUI15SafeAreaRegionsV3allACvgZ();
  puVar5 = puVar6;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  *param_1 = (long)apuStack_70[1];
  param_1[1] = (long)apuStack_70[0];
  param_1[2] = (long)puVar3;
  param_1[3] = (long)puVar6;
  *(char *)(param_1 + 4) = (char)puVar5;
  return;
}



/* Entry: 100027b6c; end: 100027c37;  */

void FUN_100027b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000604c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000604c0;
  func_0x000100027be4(0x1000604c0,&UNK_100041740);
  uVar2 = uVar1;
  FUN_1000270e8();
  puStack_28 = PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVAA12ViewModifierAAWP_100050390;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100050340;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_100050340,uVar1,
             &uStack_30);
  puRam00000001000604c8 = puVar3;
  return;
}



/* Entry: 100027c38; end: 100027c3b;  */

void FUN_100027c38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000604d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000604d8;
  func_0x000100027be4(0x1000604d8,&UNK_100041748);
  puVar2 = PTR___s19LockedCameraCapture0abC7UISceneVyxGAA0abC14ExtensionSceneAAMc_100050548;
  _swift_getWitnessTable
            (PTR___s19LockedCameraCapture0abC7UISceneVyxGAA0abC14ExtensionSceneAAMc_100050548,uVar1)
  ;
  puRam00000001000604d0 = puVar2;
  return;
}



/* Entry: 100027c3c; end: 100027c8b;  */

void FUN_100027c3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000604d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000604d8;
  func_0x000100027be4(0x1000604d8,&UNK_100041748);
  puVar2 = PTR___s19LockedCameraCapture0abC7UISceneVyxGAA0abC14ExtensionSceneAAMc_100050548;
  _swift_getWitnessTable
            (PTR___s19LockedCameraCapture0abC7UISceneVyxGAA0abC14ExtensionSceneAAMc_100050548,uVar1)
  ;
  puRam00000001000604d0 = puVar2;
  return;
}



/* Entry: 100027c8c; end: 100027c93;  */

undefined8 * FUN_100027c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _objc_retain_x8();
  _objc_retain_x20();
  _objc_retain_x21();
  return param_1;
}



/* Entry: 100027c94; end: 100027d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_100027c94(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar2 = _DAT_1000604e8;
  uVar5 = *(ulong *)(unaff_x20 + _DAT_1000604e8);
  uVar4 = uVar5;
  if (uVar5 == 0) {
    bVar1 = *(byte *)(unaff_x20 + _DAT_1000604e0 + 8);
    uVar3 = 0;
    FUN_10002d594(0);
    _objc_allocWithZone();
    uVar4 = (ulong)(bVar1 >> 7);
    FUN_10002b8d8(uVar4,uVar3);
    *(ulong *)(unaff_x20 + lVar2) = uVar4;
    _objc_retain();
    _objc_release_x20();
    uVar5 = 0;
  }
  _objc_retain_x8(uVar5);
  return uVar4;
}



/* Entry: 100027d1c; end: 100027da3; -[_TtC28SnapchatCaptureExtension_lib33CaptureExtensionPreviewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100027d1c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_1000604e8) = 0;
  *(undefined8 *)(param_1 + _DAT_1000604f0) = 0;
  param_1 = param_1 + _DAT_1000604f8;
  *(undefined8 *)(param_1 + 8) = 0;
  _swift_unknownObjectWeakInit(param_1,0);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/CaptureExtensionPreviewController.swift",0x44,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100027da4);
  (*pcVar1)();
}



/* Entry: 100027da4; end: 1000280d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100027da4(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  
  puVar4 = &stack0xffffffffffffffb0;
  FUN_100028634();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_10005b0c8);
  FUN_100027c94();
  *(undefined ***)(puVar4 + _DAT_1000606a0 + 8) = &PTR_DAT_100052918;
  _swift_unknownObjectWeakAssign();
  _objc_release_x19();
  lVar2 = _DAT_1000604e8;
  func_0x00010003d440(*(undefined8 *)(unaff_x20 + _DAT_1000604e8));
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_1000604e0);
  cVar1 = *(char *)((undefined8 *)(unaff_x20 + _DAT_1000604e0) + 1);
  if (cVar1 < '\0') {
    _objc_retain_x19();
    FUN_100028200();
    func_0x000100026e68(uVar7,(long)cVar1);
  }
  else {
    lVar8 = *(long *)(*(long *)(unaff_x20 + lVar2) + _DAT_100060710);
    puVar5 = PTR__OBJC_CLASS___UIImageView_100050448;
    _objc_opt_self(PTR__OBJC_CLASS___UIImageView_100050448);
    _swift_dynamicCastObjCClass(lVar8,puVar5);
    if (lVar8 != 0) {
      func_0x00010003cf60();
    }
  }
  lVar8 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000280c8);
    (*pcVar3)();
  }
  func_0x00010003b8e0();
  _objc_release_x19();
  lVar8 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x18) = 9;
  *(undefined8 *)(lVar8 + 0x10) = 4;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000280cc);
    (*pcVar3)();
  }
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  _objc_release_x23();
  *(undefined8 *)(lVar8 + 0x20) = uVar7;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = unaff_x20;
  func_0x00010003d880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    func_0x00010003bb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x21();
    _objc_release_x23();
    *(undefined8 *)(lVar8 + 0x28) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x00010003cae0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = unaff_x20;
    func_0x00010003d880();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000280d4);
      (*pcVar3)();
    }
    func_0x00010003cae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x22();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x21();
    _objc_release_x23();
    *(undefined8 *)(lVar8 + 0x30) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x00010003c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003d880();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x20 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
      _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
      func_0x00010003c660(unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release_x20();
      func_0x00010003bd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release_x21();
      _objc_release_x23();
      *(undefined8 *)(lVar8 + 0x38) = uVar7;
      uVar7 = 0;
      FUN_100011794(0);
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar8,uVar7);
      _swift_release(lVar8);
      func_0x00010003b700(puVar5);
      _objc_release_x20();
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000280d8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000280d0);
  (*pcVar3)();
}



/* Entry: 1000280d8; end: 10002810b; -[_TtC28SnapchatCaptureExtension_lib33CaptureExtensionPreviewController viewDidLoad] */

void FUN_1000280d8(undefined8 param_1)

{
  _objc_retain();
  FUN_100027da4();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 10002810c; end: 1000281bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002810c(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  FUN_100028634();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_viewDidDisappear__10005b0e8,param_1 & 1);
  lVar1 = _DAT_100060568;
  if (((*(char *)(unaff_x20 + _DAT_1000604e0 + 8) < '\0') &&
      (lVar3 = *(long *)(unaff_x20 + _DAT_1000604f0), lVar3 != 0)) &&
     ((*(byte *)(lVar3 + _DAT_100060580) & 1) != 0)) {
    uVar2 = *(undefined8 *)(lVar3 + _DAT_100060568);
    _objc_retain_x21();
    func_0x00010003c800(uVar2);
    func_0x00010003caa0(*(undefined8 *)(lVar3 + lVar1));
    FUN_100029718();
    _objc_release_x20();
  }
  return;
}



/* Entry: 1000281c0; end: 1000281ff; -[_TtC28SnapchatCaptureExtension_lib33CaptureExtensionPreviewController viewDidDisappear:] */

void FUN_1000281c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_10002810c(param_3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 100028200; end: 10002837f;  */

void FUN_100028200(undefined8 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_90;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar1 = 0;
  FUN_100035728();
  FUN_10003529c();
  _objc_opt_self(PTR__OBJC_CLASS___NSProcessInfo_100050310);
  func_0x00010003c980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c7c0(&puStack_90);
  _objc_release_x23();
  if ((((puStack_90 == (undefined *)0x12) && (lStack_88 == 0)) && ((param_2 & uVar1 & 1) != 0)) &&
     (pcStack_80 == (code *)0x0)) {
    uVar6 = 0x3fb999999999999a;
  }
  else {
    uVar6 = 0;
  }
  pcVar2 = "prepareVideo(asset:isFrontFacing:)";
  func_0x00010003a450("prepareVideo(asset:isFrontFacing:)");
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &UNK_100052938;
  _swift_allocObject(&UNK_100052938,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &UNK_100052960;
  _swift_allocObject(&UNK_100052960,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcStack_70 = FUN_10002887c;
  puStack_90 = PTR___NSConcreteStackBlock_100050768;
  lStack_88 = 0x42000000;
  pcStack_80 = FUN_1000272d0;
  puStack_78 = &UNK_100052978;
  puStack_68 = puVar4;
  __Block_copy(&puStack_90);
  puVar3 = puStack_68;
  _objc_retain_x19();
  _swift_release(puVar3);
  func_0x00010003c840(uVar6,pcVar2);
  __Block_release(ppuVar5);
  _swift_unknownObjectRelease(pcVar2);
  return;
}



/* Entry: 100028380; end: 1000284b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100028380(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = 0;
    FUN_100029b9c();
    _objc_allocWithZone();
    func_0x00010003c1e0();
    lVar3 = _DAT_1000604f0;
    *(long *)(param_1 + _DAT_1000604f0) = lVar1;
    _objc_retain();
    lVar2 = lVar1;
    _objc_release_x22();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + _DAT_100060588) = 2;
      _objc_release_x20();
    }
    if (*(long *)(param_1 + lVar3) != 0) {
      _objc_retain_x8();
      FUN_100027c94();
      _objc_retain_x8(*(undefined8 *)(lVar2 + _DAT_100060710));
      _objc_release_x20();
      FUN_100029230(param_2,lVar2);
      _objc_release_x22();
      _objc_release_x23();
    }
    FUN_100027c94();
    lVar3 = *(long *)(param_1 + lVar3);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_100060568);
      _objc_retain_x21();
    }
    FUN_10002ca48(uVar4);
    _objc_release_x19();
    _objc_release_x20();
    _objc_release_x21();
  }
  return;
}



/* Entry: 1000284b4; end: 100028577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000284b4(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  code *pcVar3;
  
  cVar1 = *(char *)(unaff_x20 + _DAT_1000604e0 + 8);
  FUN_100033a54();
  lVar2 = 200;
  if (0x7fffffff < (uint)(int)cVar1) {
    lVar2 = 0xd0;
  }
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + lVar2);
  _objc_retain_x8();
  (*pcVar3)();
  _objc_release_x20();
  lVar2 = unaff_x20 + _DAT_1000604f8;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_1000603e8) != 0) {
      _objc_retain_x8();
      func_0x00010003ce00();
      _objc_release_x20();
    }
    _swift_unknownObjectRelease();
  }
                    /* WARNING: Could not recover jumptable at 0x00010003bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)();
  return;
}



/* Entry: 100028578; end: 1000285d3; -[_TtC28SnapchatCaptureExtension_lib33CaptureExtensionPreviewController initWithNibName:bundle:] */

void FUN_100028578(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.CaptureExtensionPreviewController",0x3e,
             "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000285a4);
  (*pcVar1)();
}


