/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106051764; end: 1060517ab; -[SCSpectaclesBatteryStatusView traitCollectionDidChange:] */

void FUN_106051764(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ef4a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bed58e0(param_1);
  return;
}



/* Entry: 1060517ac; end: 10605180b; -[SCSpectaclesBatteryStatusView setBatteryLevel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060517ac(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(double *)(param_2 + _DAT_11273daac) != param_1) {
    *(double *)(param_2 + _DAT_11273daac) = param_1;
    lVar1 = param_2;
    func_0x00010be62d00();
    lVar2 = lVar1;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_2 + _DAT_11273daa0),param_3,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10605180c; end: 106051873; -[SCSpectaclesBatteryStatusView setIsLowBattery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605180c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + _DAT_11273dab0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11273dab0) = (char)param_3;
  func_0x00010bee15e0();
  lVar1 = param_1;
  func_0x00010be62d00(param_1);
  lVar2 = lVar1;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + _DAT_11273daa0),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106051874; end: 1060518f7; -[SCSpectaclesBatteryStatusView setIsCharging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106051874(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(byte *)(param_1 + _DAT_11273dab4) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11273dab4) = (char)param_3;
  lVar1 = param_1;
  func_0x00010bdf6a60();
  lVar3 = (long)_DAT_11273daa0;
  func_0x00010c19bc00(*(undefined8 *)(param_1 + lVar3),param_2,lVar1);
  func_0x00010bee15e0(param_1);
  lVar1 = param_1;
  func_0x00010be62d00(param_1);
  lVar2 = lVar1;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c1d9820(*(undefined8 *)(param_1 + lVar3),param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060518f8; end: 106051a4f; -[SCSpectaclesBatteryStatusView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060518f8(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ef4a8;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bfb68e0(param_5);
  if ((0.0 < param_3) && (func_0x00010bfb68e0(param_5), 0.0 < param_4)) {
    func_0x00010bf20c00(param_5);
    lVar3 = (long)_DAT_11273daa0;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
    func_0x00010bf20c00(param_5);
    lVar2 = (long)_DAT_11273da9c;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
    func_0x00010bf20c00(param_5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11273daa4));
    func_0x00010bf20c00(param_5);
    lVar4 = (long)_DAT_11273daa8;
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
    lVar1 = param_5;
    func_0x00010be62d00(param_5);
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar3));
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010be6e8c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar2));
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010be0b6c0(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    func_0x00010c1d9820(*(undefined8 *)(param_5 + lVar4));
    _objc_release(lVar1);
    func_0x00010be26e60(param_5);
  }
  return;
}



/* Entry: 106051a50; end: 106051b3f; -[SCSpectaclesBatteryStatusView _exclamationPath] */

void FUN_106051a50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010be0b700();
  dVar3 = param_1;
  func_0x00010be0b720(param_5);
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,dVar3 * 0.5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010be0b6a0(param_5);
  dVar3 = param_1;
  func_0x00010be0b720(param_5);
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,dVar3 * 0.5,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06f40(puVar1,param_6,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106051b40; end: 106051b8f; -[SCSpectaclesBatteryStatusView _exclamationTopRect] */

double FUN_106051b40(double param_1,undefined8 param_2)

{
  func_0x00010be0b720();
  func_0x00010be0b6e0(param_2);
  return param_1 + 0.0;
}



/* Entry: 106051b90; end: 106051be7; -[SCSpectaclesBatteryStatusView _exclamationBottomRect] */

double FUN_106051b90(double param_1,undefined8 param_2)

{
  func_0x00010be0b6e0();
  _CGRectGetHeight();
  func_0x00010be0b720(param_2);
  func_0x00010be0b6e0(param_2);
  return param_1 + 0.0;
}



/* Entry: 106051be8; end: 106051c57; -[SCSpectaclesBatteryStatusView _exclamationRect] */

double FUN_106051be8(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010bdd2fc0();
  _CGRectGetWidth();
  dVar1 = param_1;
  func_0x00010be0b720(param_2);
  param_1 = param_1 - dVar1;
  dVar1 = param_1 * 0.5;
  func_0x00010be0b720(param_2);
  func_0x00010bdd2fc0(param_2);
  return dVar1 + param_1;
}



/* Entry: 106051c58; end: 106051c77; -[SCSpectaclesBatteryStatusView _exclamationWidth] */

double FUN_106051c58(double param_1)

{
  func_0x00010bdd2fc0();
  _CGRectGetWidth();
  return param_1 * 0.25;
}



/* Entry: 106051c78; end: 106051d27; -[SCSpectaclesBatteryStatusView _capRectWithCapHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106051c78(double param_1,undefined8 param_2,double param_3,long param_4)

{
  long lVar1;
  double unaff_d9;
  
  lVar1 = *(long *)(param_4 + _DAT_11273da98);
  func_0x00010c0ed100();
  if (lVar1 == 1) {
    func_0x00010bfb68e0(param_4);
    unaff_d9 = param_3 - param_1;
    func_0x00010bfb68e0(param_4);
    func_0x00010bfb68e0(param_4);
  }
  else if (lVar1 == 0) {
    func_0x00010bfb68e0(param_4);
    unaff_d9 = param_3 * 0.25;
    func_0x00010bfb68e0(param_4);
  }
  return unaff_d9;
}



/* Entry: 106051d28; end: 106051d57; -[SCSpectaclesBatteryStatusView _capCorner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106051d28(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_11273da98);
  func_0x00010c0ed100();
  uVar1 = 3;
  if (lVar2 != 0) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Entry: 106051d58; end: 106051e2b; -[SCSpectaclesBatteryStatusView _capPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_106051d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar4 = (long)_DAT_11273da98;
  func_0x00010bf2f960(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bddb160(param_5);
  lVar1 = param_5;
  uVar5 = param_1;
  func_0x00010bddb100(param_5);
  func_0x00010bf2f940(*(undefined8 *)(param_5 + lVar4));
  uVar6 = uVar5;
  func_0x00010bf2f940(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf199e0(param_1,param_2,param_3,param_4,uVar5,uVar6,puVar2,param_6,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 106051e2c; end: 106051f03; -[SCSpectaclesBatteryStatusView _capMaskPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_106051e2c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  lVar4 = (long)_DAT_11273da98;
  func_0x00010bf2f940(*(undefined8 *)(param_5 + lVar4));
  param_1 = param_1 + param_1;
  func_0x00010bddb160(param_1,param_5);
  lVar1 = param_5;
  dVar5 = param_1;
  func_0x00010bddb100(param_5);
  func_0x00010bf2f940(*(undefined8 *)(param_5 + lVar4));
  dVar6 = dVar5;
  func_0x00010bf2f940(*(undefined8 *)(param_5 + lVar4));
  func_0x00010bf199e0(param_1,param_2,param_3,param_4,dVar5,dVar6,puVar2,param_6,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 106051f04; end: 106051fb7; -[SCSpectaclesBatteryStatusView _handleCapPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106051f04(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  lVar2 = param_2;
  func_0x00010bddb140();
  lVar3 = (long)_DAT_11273daa4;
  func_0x00010c1d9820(*(undefined8 *)(param_2 + lVar3),param_3,lVar2);
  lVar2 = (long)_DAT_11273da98;
  func_0x00010bf2f960(*(undefined8 *)(param_2 + lVar2));
  dVar4 = param_1;
  func_0x00010bf2f940(*(undefined8 *)(param_2 + lVar2));
  if (param_1 < dVar4 + dVar4) {
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    _objc_alloc_init(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    lVar2 = param_2;
    func_0x00010bddb120(param_2);
    func_0x00010c1d9820(puVar1,param_3,lVar2);
    func_0x00010c1c2c00(*(undefined8 *)(param_2 + lVar3),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 106051fb8; end: 1060520a7; -[SCSpectaclesBatteryStatusView _bodyRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106051fb8(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273da98;
  lVar1 = *(long *)(param_2 + lVar2);
  func_0x00010c0ed100();
  if (lVar1 == 1) {
    func_0x00010bfb68e0(param_2);
    func_0x00010bf2f960(*(undefined8 *)(param_2 + lVar2));
    func_0x00010bf2f9a0(*(undefined8 *)(param_2 + lVar2));
    func_0x00010bfb68e0(param_2);
  }
  else if (lVar1 == 0) {
    func_0x00010bf2f960(*(undefined8 *)(param_2 + lVar2));
    func_0x00010bf2f9a0(*(undefined8 *)(param_2 + lVar2));
    func_0x00010bfb68e0(param_2);
    func_0x00010bfb68e0(param_2);
    func_0x00010bf2f960(*(undefined8 *)(param_2 + lVar2));
    func_0x00010bf2f9a0(*(undefined8 *)(param_2 + lVar2));
  }
  func_0x00010bf1fc80(*(undefined8 *)(param_2 + lVar2));
  return param_1 * 0.5 + 0.0;
}



/* Entry: 1060520a8; end: 106052117; -[SCSpectaclesBatteryStatusView _outlinePath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060520a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bdd5040();
  uVar2 = param_1;
  func_0x00010bf525a0(*(undefined8 *)(param_5 + _DAT_11273da98));
                    /* WARNING: Could not recover jumptable at 0x00010bf19a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,uVar2,puVar1,
             PTR_s_bezierPathWithRoundedRect_corner_1125a4028);
  return;
}



/* Entry: 106052118; end: 10605217f; -[SCSpectaclesBatteryStatusView _batteryLevelFullRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106052118(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = (long)_DAT_11273da98;
  func_0x00010bf17560(*(undefined8 *)(param_2 + lVar1));
  dVar2 = param_1;
  func_0x00010bf1fc80(*(undefined8 *)(param_2 + lVar1));
  dVar2 = dVar2 * 0.5;
  param_1 = param_1 + dVar2;
  func_0x00010bdd5040(param_2);
  return param_1 + dVar2;
}



/* Entry: 106052180; end: 10605234f; -[SCSpectaclesBatteryStatusView _newBatteryLevelPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052180(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  func_0x00010bf17500();
  dVar2 = 0.0;
  if (0.0 <= param_1 / 100.0) {
    dVar2 = param_1 / 100.0;
  }
  dVar3 = (double)NEON_fminnm(dVar2,0x3ff0000000000000);
  dVar3 = 1.0 - dVar3;
  dVar6 = (double)NEON_fminnm(dVar3,0x3fe999999999999a);
  dVar2 = dVar6;
  if (*(char *)(param_5 + _DAT_11273dab4) == '\0') {
    dVar2 = dVar3;
  }
  func_0x00010bdd2fc0(param_5);
  lVar1 = *(long *)(param_5 + _DAT_11273da98);
  func_0x00010c0ed100();
  dVar5 = dVar3;
  if (lVar1 == 1) {
    dVar4 = dVar3;
    _CGRectGetWidth(dVar3,dVar6,param_3,param_4);
    _CGRectGetMinX(dVar3,dVar6,param_3,param_4);
    dVar7 = dVar3;
    _CGRectGetMinY(dVar3,dVar6,param_3,param_4);
    dVar8 = dVar3;
    _CGRectGetWidth(dVar3,dVar6,param_3,param_4);
    dVar8 = dVar8 - dVar2 * dVar4;
    _CGRectGetHeight(dVar3,dVar6,param_3,param_4);
  }
  else {
    if (lVar1 != 0) {
      return;
    }
    dVar4 = dVar3;
    _CGRectGetHeight(dVar3,dVar6,param_3,param_4);
    _CGRectGetMinX(dVar3,dVar6,param_3,param_4);
    dVar7 = dVar3;
    _CGRectGetMinY(dVar3,dVar6,param_3,param_4);
    dVar7 = dVar2 * dVar4 + dVar7;
    dVar8 = dVar3;
    _CGRectGetWidth(dVar3,dVar6,param_3,param_4);
    _CGRectGetHeight(dVar3,dVar6,param_3,param_4);
    dVar3 = dVar3 - dVar2 * dVar4;
  }
  func_0x00010bf199c0(dVar5,dVar7,dVar8,dVar3,PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 106052350; end: 10605240b; -[SCSpectaclesBatteryStatusView _currentFillColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106052350(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + _DAT_11273dab4) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c14c3c0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
LAB_106052384:
    puVar1 = puVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _objc_release(puVar3);
    return puVar1;
  }
  if (*(char *)(param_1 + _DAT_11273dab0) == '\x01') {
    lVar2 = *(long *)(param_1 + _DAT_11273da98);
    func_0x00010c0ed100();
    if (lVar2 == 1) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c14c440(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106052384;
    }
  }
  puVar3 = *(undefined **)(param_1 + _DAT_11273da9c);
                    /* WARNING: Could not recover jumptable at 0x00010c25dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar3,PTR_s_strokeColor_112675118);
  return puVar3;
}



/* Entry: 10605240c; end: 10605249f; -[SCSpectaclesBatteryStatusView _updateSubviewVisibilities] */

/* WARNING: Possible PIC construction at 0x000106052454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106052458) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10605240c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  
  if ((*(byte *)(param_1 + _DAT_11273dab4) & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_11273da98);
    func_0x00010c0ed100();
    if (lVar1 != 1) {
      lVar1 = (long)_DAT_11273dab0;
      func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11273daa0));
      uVar2 = *(undefined8 *)(param_1 + _DAT_11273daa8);
      bVar3 = (*(byte *)(param_1 + lVar1) ^ 1) & 1;
      goto code_r0x00010c1a7f60;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273daa0);
  bVar3 = 0;
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setHidden__1126479f8,bVar3);
  return;
}



/* Entry: 1060524a0; end: 1060524af; -[SCSpectaclesBatteryStatusView batteryLevel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1060524a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273daac);
}



/* Entry: 1060524b0; end: 1060524bf; -[SCSpectaclesBatteryStatusView isLowBattery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060524b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273dab0);
}



/* Entry: 1060524c0; end: 1060524cf; -[SCSpectaclesBatteryStatusView isCharging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1060524c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11273dab4);
}



/* Entry: 1060524d0; end: 10605253f; -[SCSpectaclesBatteryStatusView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060524d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273daa8,0);
  _objc_storeStrong(param_1 + _DAT_11273daa4,0);
  _objc_storeStrong(param_1 + _DAT_11273da9c,0);
  _objc_storeStrong(param_1 + _DAT_11273daa0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273da98,0);
  return;
}



/* Entry: 106052540; end: 1060528cf; -[SCFamilyCenterInvitePromptEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052540(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1060528d0;
  puStack_90 = &UNK_110868578;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7500;
  _objc_alloc();
  lVar15 = (long)_DAT_11273dab8;
  lVar16 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar4 = lVar16;
  func_0x00010c06a940();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar5 = lVar15;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273dabc;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11273dac0;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfa06e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11273dac4;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11273dac8;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01eb00();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11273dacc);
  *(undefined **)(param_1 + _DAT_11273dacc) = puVar3;
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar15);
  _objc_release(lVar4);
  _objc_release(lVar16);
  puVar3 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_alloc();
  func_0x00010c0402e0();
  lVar16 = (long)_DAT_11273dad0;
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar3;
  _objc_release(uVar14);
  func_0x00010c1cb760(*(undefined8 *)(param_1 + lVar16));
  func_0x00010c1c8b80(*(undefined8 *)(param_1 + lVar16));
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11273dad4);
  *(undefined **)(param_1 + _DAT_11273dad4) = puVar3;
  _objc_release(uVar14);
  func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1060528d0; end: 10605294f;  */

void FUN_1060528d0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106052950; end: 1060529bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052950(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11273dab8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1060529bc; end: 106052a53; -[SCFamilyCenterInvitePromptEntryPoint _createAlertPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060529bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11273dad8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106052a54; end: 106052abb; -[SCFamilyCenterInvitePromptEntryPoint _createBlizzardLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052a54(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11273dadc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106052abc; end: 106052b57; -[SCFamilyCenterInvitePromptEntryPoint didDismissTrayWithAccepted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052abc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11273dab8;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83920();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106052b58; end: 106052bf7; -[SCFamilyCenterInvitePromptEntryPoint didOpenSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052b58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aead0;
  _objc_alloc(PTR_PTR_1126aead0);
  func_0x00010c02e4c0();
  lVar2 = param_1 + _DAT_11273dae0;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf22f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11273dae4),param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106052bf8; end: 106052c4f; -[SCFamilyCenterInvitePromptEntryPoint settingsScopeWantsDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052bf8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273dae4);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106052c50; end: 106052ca7; -[SCFamilyCenterInvitePromptEntryPoint settingsScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052c50(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11273dae4;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106052ca8; end: 106052d67; -[SCFamilyCenterInvitePromptEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106052ca8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273dae4,0);
  _objc_destroyWeak(param_1 + _DAT_11273dae0);
  _objc_destroyWeak(param_1 + _DAT_11273dac8);
  _objc_destroyWeak(param_1 + _DAT_11273dadc);
  _objc_destroyWeak(param_1 + _DAT_11273dac0);
  _objc_destroyWeak(param_1 + _DAT_11273dac4);
  _objc_destroyWeak(param_1 + _DAT_11273dabc);
  _objc_destroyWeak(param_1 + _DAT_11273dad8);
  _objc_destroyWeak(param_1 + _DAT_11273dab8);
  _objc_storeStrong(param_1 + _DAT_11273dad4,0);
  _objc_storeStrong(param_1 + _DAT_11273dad0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dacc,0);
  return;
}



/* Entry: 106052d68; end: 106052e0b; -[SCFamilyCenterInvitePromptTrayViewController initWithPromptView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106052d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ef4b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_11273dae8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar3));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106052e0c; end: 1060530ab; -[SCFamilyCenterInvitePromptTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106052e0c(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  double dVar18;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR_PTR_1126ef4b0;
  lStack_98 = param_2;
  _objc_msgSendSuper2(&lStack_98,PTR_s_loadView_112604be0);
  lVar16 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = (long)_DAT_11273dae8;
  func_0x00010befbb60();
  _objc_release(lVar16);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_2 + lVar17);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + lVar17);
  lStack_88 = lVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + lVar17);
  uStack_80 = uVar15;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_2 + lVar17);
  uStack_78 = uVar11;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27a20(param_2);
  uVar13 = uVar12;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar13;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar15);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar16 = (long)_DAT_11273dae8;
  uVar15 = *(undefined8 *)(lVar2 + lVar16);
  func_0x00010c295200(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1560();
  _objc_release(uVar15);
  uVar15 = *(undefined8 *)(lVar2 + lVar16);
  func_0x00010c29bf00(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar18 = 1.79769313486232e+308;
  func_0x00010c23d5a0(uVar15);
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(lVar2);
  return dVar18 + param_1;
}



/* Entry: 1060530ac; end: 10605314f; -[SCFamilyCenterInvitePromptTrayViewController calculateTrayContentHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1060530ac(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_11273dae8;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a1560();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = 1.79769313486232e+308;
  func_0x00010c23d5a0(uVar1);
  func_0x00010c14da20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_release(param_2);
  return dVar3 + param_1;
}



/* Entry: 106053150; end: 106053157; -[SCFamilyCenterInvitePromptTrayViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_106053150(void)

{
  return 1;
}



/* Entry: 106053158; end: 10605316b; -[SCFamilyCenterInvitePromptTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106053158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273dae8,0);
  return;
}



/* Entry: 10605316c; end: 1060533bf; -[SCFamilyCenterInvitePromptViewController initWithInviteSenderSnapchatter:messageId:alertPresenter:userInfoProvider:familyCenterComposerGrpcService:blizzardLogger:valdiRuntimeProvider:delegate:pageLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10605316c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  puStack_68 = PTR_PTR_1126ef4b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    func_0x00010c1c8b80(puVar1);
    lVar3 = (long)_DAT_11273daec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273daf0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273daf4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273daf8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273dafc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273db00;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11273db04;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_11273db08,param_10);
    lVar3 = (long)_DAT_11273db0c;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
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
  return puVar1;
}



/* Entry: 1060533c0; end: 10605354f; -[SCFamilyCenterInvitePromptViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060533c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ef4b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_loadView_112604be0);
  lVar4 = param_1;
  func_0x00010bdf2000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273db10);
  *(long *)(param_1 + _DAT_11273db10) = lVar4;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126c7508;
  _objc_alloc();
  func_0x00010c03b700();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11273db14);
  *(undefined **)(param_1 + _DAT_11273db14) = puVar1;
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b0a08;
  _objc_alloc();
  func_0x00010c055600();
  lVar4 = (long)_DAT_11273db18;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  func_0x00010c219e20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c167420(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219c20(*(undefined8 *)(param_1 + lVar4));
  func_0x00010c219d60(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 106053550; end: 106053563; -[SCFamilyCenterInvitePromptViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106053550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273db18),PTR_s_presentIn__112620b70,param_1);
  return;
}



/* Entry: 106053564; end: 106053577; -[SCFamilyCenterInvitePromptViewController tray:positionDidChange:] */

void FUN_106053564(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be03910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissTrayWithAccepted__11255e7e0,0);
    return;
  }
  return;
}



/* Entry: 106053578; end: 106053597; -[SCFamilyCenterInvitePromptViewController tray:heightForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_106053578(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  if (param_5 == 8) {
                    /* WARNING: Could not recover jumptable at 0x00010bf27a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_2 + _DAT_11273db14),PTR_s_calculateTrayContentHeight_1125a7830)
    ;
    return param_1;
  }
  return 0xbff0000000000000;
}



/* Entry: 106053598; end: 106053863; -[SCFamilyCenterInvitePromptViewController _createPromptView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106053598(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126c7510;
  _objc_alloc(PTR_PTR_1126c7510);
  lVar8 = (long)_DAT_11273daec;
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033cc0(puVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010bf85d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9100(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0b4ca0(*(undefined8 *)(param_1 + _DAT_11273daf0));
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6f00(puVar1);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + lVar8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7060(puVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  puVar3 = PTR_PTR_1126c7518;
  _objc_alloc(PTR_PTR_1126c7518);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273db0c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273daf4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273daf8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + _DAT_11273db00);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033020(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar7 = PTR_PTR_1126c7520;
  _objc_alloc(PTR_PTR_1126c7520);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11273db04);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar7);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106053864; end: 10605391f;  */

void FUN_106053864(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106053920;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106053920; end: 10605395f;  */

void FUN_106053920(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f3c0(uVar2);
  func_0x00010be03900(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106053960; end: 1060539bf; -[SCFamilyCenterInvitePromptViewController _prepareForDismiss] */

void FUN_106053960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060539c0; end: 106053a03; -[SCFamilyCenterInvitePromptViewController _dismissTrayWithAccepted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060539c0(long param_1)

{
  func_0x00010be78440();
  param_1 = param_1 + _DAT_11273db08;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf75340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106053a04; end: 106053adf; -[SCFamilyCenterInvitePromptViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106053a04(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273db08);
  _objc_storeStrong(param_1 + _DAT_11273db14,0);
  _objc_storeStrong(param_1 + _DAT_11273db18,0);
  _objc_storeStrong(param_1 + _DAT_11273db10,0);
  _objc_storeStrong(param_1 + _DAT_11273db0c,0);
  _objc_storeStrong(param_1 + _DAT_11273db04,0);
  _objc_storeStrong(param_1 + _DAT_11273db00,0);
  _objc_storeStrong(param_1 + _DAT_11273dafc,0);
  _objc_storeStrong(param_1 + _DAT_11273daf8,0);
  _objc_storeStrong(param_1 + _DAT_11273daf4,0);
  _objc_storeStrong(param_1 + _DAT_11273daf0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273daec,0);
  return;
}



/* Entry: 106053ae0; end: 106053b0f;  */

void FUN_106053ae0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3a3d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e3a3d8,
                      &PTR____CFConstantStringClassReference_110e3a3f8,0);
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



/* Entry: 106053b10; end: 106053c5b;  */

void FUN_106053b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  func_0x00010c1b6780(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar3 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  func_0x00010c168b40(puVar3,param_2,1);
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bf06200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar4);
  func_0x00010c1b66e0(puVar1,param_2,puVar3);
  func_0x00010c198180(puVar1,param_2,2);
  puVar4 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edbc0();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010c13f280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1edae0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106053c5c; end: 106053d0b;  */

void FUN_106053c5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7528;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c0629c0();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106053d0c; end: 106053dcf;  */

void FUN_106053d0c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain();
  _objc_alloc();
  func_0x00010bfeea60();
  _objc_release(param_1);
  func_0x00010c1ec620(puVar1);
  puVar2 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c7528;
  _objc_opt_class(PTR_PTR_1126c7528);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106053dd0; end: 106053ecb; -[SCInAppWarningAckJobProcessor initWithUploadService:performer:userId:grapheneLogger:] */

undefined1 *
FUN_106053dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ef4c0;
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



/* Entry: 106053ecc; end: 1060540cf; -[SCInAppWarningAckJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106053ecc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  FUN_106053d0c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      _objc_initWeak(auStack_68,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      FUN_1060548c8(lVar1,*(undefined8 *)(param_1 + 0x18));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_1060548a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c11c640(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_6);
      func_0x00010c297260(uVar5);
      _objc_release(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      goto LAB_10605405c;
    }
    func_0x00010c0b1620(*(undefined8 *)(param_1 + 0x20));
  }
  (**(code **)(param_6 + 0x10))(param_6,2,0);
LAB_10605405c:
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 1060540d0; end: 10605414f;  */

void FUN_1060540d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    func_0x00010c0a4ec0(*(undefined8 *)(lVar1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),2,param_3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106054150; end: 106054197; -[SCInAppWarningAckJobProcessor .cxx_destruct] */

void FUN_106054150(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106054198; end: 106054293; -[SCWarningV4SyncJobProcessor initWithUserId:valdiRuntimeProvider:preferences:blizzardLogger:] */

undefined1 *
FUN_106054198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ef4c8;
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



/* Entry: 106054294; end: 106054437; -[SCWarningV4SyncJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106054294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar4);
  lVar1 = param_1;
  func_0x00010be5c580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  func_0x00010bfc69a0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106054438; end: 106054607;  */

void FUN_106054438(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e3a4b8;
    FUN_106054608(&PTR____CFConstantStringClassReference_110e3a4b8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,1,ppuVar2);
  }
  else {
    ppuVar2 = (undefined **)PTR_PTR_1126c7548;
    func_0x00010bfbc0e0(PTR_PTR_1126c7548);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010c266920();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    func_0x00010c0e3040(ppuVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 106054608; end: 106054777;  */

void FUN_106054608(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  code *pcVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110e3a498;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  bVar1 = ppuVar4 == (undefined **)0x0;
  if (bVar1) {
    puVar3 = puVar2 + 0x28;
    _objc_loadWeakRetained(puVar3);
    func_0x00010bf1f3c0(param_2);
    func_0x00010bed9100(puVar3);
    _objc_release(puVar3);
    lVar5 = *(long *)(puVar2 + 0x20);
    pcVar6 = *(code **)(lVar5 + 0x10);
    ppuVar4 = (undefined **)0x0;
  }
  else {
    lVar5 = *(long *)(puVar2 + 0x20);
    pcVar6 = *(code **)(lVar5 + 0x10);
  }
  (*pcVar6)(lVar5,!bVar1,ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106054778; end: 10605481b; -[SCWarningV4SyncJobProcessor _makeTweaks] */

void FUN_106054778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b4f98;
  _objc_opt_new(PTR_PTR_1126b4f98);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8a00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x000106b7ff50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeaa0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x000106b7ff5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bf460(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10605481c; end: 106054857; -[SCWarningV4SyncJobProcessor _updateHasPendingWarnings:] */

void FUN_10605481c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106054eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106054858; end: 10605489f; -[SCWarningV4SyncJobProcessor .cxx_destruct] */

void FUN_106054858(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060548a0; end: 1060548c7;  */

void FUN_1060548a0(void)

{
  _objc_alloc(PTR_PTR_1126b0448);
  func_0x00010c02d480();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060548c8; end: 106054c13;  */

void FUN_1060548c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126b0438;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0d5160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0440;
  puStack_78 = puVar1;
  _objc_alloc();
  func_0x00010c021180();
  puVar3 = PTR_PTR_1126b0440;
  _objc_alloc();
  puVar1 = PTR_PTR_1126b0438;
  uVar4 = param_1;
  func_0x00010c2a21e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021180();
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b8130;
  _objc_alloc(PTR_PTR_1126b8130);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c019140(puVar5);
  _objc_release(puVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar1 = PTR_PTR_1126b8138;
  uVar4 = param_1;
  func_0x00010c2a21e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25dac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126b8138;
  func_0x00010c25dac0(PTR_PTR_1126b8138);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8138;
  func_0x00010c2a2280(param_1);
  func_0x00010c0b50a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8138;
  func_0x00010beedbc0(param_1);
  func_0x00010c0b50a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8138;
  func_0x00010bf5a500(param_1);
  func_0x00010c0b50a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8148;
  _objc_alloc();
  func_0x00010c0896c0(param_1);
  _objc_release(param_1);
  func_0x00010c0202a0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puStack_78;
  _objc_release(puStack_78);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    ppuStack_98 = &PTR_PTR_1126b8000;
    pcStack_88 = FUN_106054c14;
    puStack_b0 = puVar3;
    puStack_a8 = puVar2;
    puStack_a0 = puVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_b8,puVar5);
    puVar2 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126c7550;
    _objc_alloc(PTR_PTR_1126c7550);
    func_0x00010c0629e0();
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106054c14; end: 106054cf7; -[SCInAppWarningServiceProvider provide] */

void FUN_106054c14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c7550;
  _objc_alloc(PTR_PTR_1126c7550);
  func_0x00010c0629e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106054cf8; end: 106054d37;  */

void FUN_106054cf8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106054d38; end: 106054db3; -[SCInAppWarningServiceProvider _createWarningDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106054d38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c7558;
  _objc_alloc(PTR_PTR_1126c7558);
  param_1 = param_1 + _DAT_11273db3c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038020(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106054db4; end: 106054deb; -[SCInAppWarningServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106054db4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273db3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273db40);
  return;
}



/* Entry: 106054dec; end: 106054e5f; -[SCWarningV4DataProvider initWithPreferences:] */

undefined1 * FUN_106054dec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef4d0;
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



/* Entry: 106054e60; end: 106054e9f; -[SCWarningV4DataProvider hasPendingWarnings] */

undefined8 FUN_106054e60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000106054eac();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106054ea0; end: 106054ec7; -[SCWarningV4DataProvider .cxx_destruct] */

void FUN_106054ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106054ec8; end: 106054f9f; -[SCWarningAckJobInput initWithCoder:] */

undefined1 * FUN_106054ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ef4d8;
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
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106054fa0; end: 106055043; -[SCWarningAckJobInput initWithWarningId:warningType:acknowledgedAtTs:createdAtTs:lastModifiedVersion:] */

undefined1 *
FUN_106054fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ef4d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106055044; end: 106055067; -[SCWarningAckJobInput copyWithZone:] */

undefined8 FUN_106055044(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106055068; end: 106055103; -[SCWarningAckJobInput encodeWithCoder:] */

void FUN_106055068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e3a5b8);
  func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110e3a5d8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e3a5f8);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e3a618);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e3a638);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106055104; end: 10605518b; -[SCWarningAckJobInput hash] */

undefined8 * FUN_106055104(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + 8);
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar4 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106055240;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar3 & 1) == 0) ||
        (((*(int *)((long)puVar2 + 8) != *(int *)(param_3 + 8) ||
          (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))) ||
         (*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20))))) ||
       (*(long *)((long)puVar2 + 0x28) != *(long *)(param_3 + 0x28))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_106055240;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106055240;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_106055240:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 10605518c; end: 10605525b; -[SCWarningAckJobInput isEqual:] */

long FUN_10605518c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106055240;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) == 0) ||
        (((*(int *)(param_1 + 8) != *(int *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) ||
       (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))) {
      lVar3 = 0;
      goto LAB_106055240;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106055240;
    }
  }
  lVar3 = 1;
LAB_106055240:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10605525c; end: 106055263; -[SCWarningAckJobInput warningId] */

undefined8 FUN_10605525c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106055264; end: 10605526b; -[SCWarningAckJobInput warningType] */

undefined4 FUN_106055264(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10605526c; end: 106055273; -[SCWarningAckJobInput acknowledgedAtTs] */

undefined8 FUN_10605526c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106055274; end: 10605527b; -[SCWarningAckJobInput createdAtTs] */

undefined8 FUN_106055274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10605527c; end: 106055283; -[SCWarningAckJobInput lastModifiedVersion] */

undefined8 FUN_10605527c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106055284; end: 10605528f; -[SCWarningAckJobInput .cxx_destruct] */

void FUN_106055284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106055290; end: 10605529b; +[SCCRegisterInAppWarningDb modulePath] */

undefined ** FUN_106055290(void)

{
  return &PTR____CFConstantStringClassReference_110e3a658;
}



/* Entry: 10605529c; end: 10605529f; +[SCCRegisterInAppWarningDb asyncStrictMode] */

undefined8 FUN_10605529c(void)

{
  return 0;
}



/* Entry: 1060552a0; end: 1060552cf; -[SCCRegisterInAppWarningDb registerInAppWarningDb] */

void FUN_1060552a0(undefined8 param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010605585c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1060552d0; end: 10605536b; +[SCCRegisterInAppWarningDb invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_1060552d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010605586c();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10605536c;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010605587c();
  func_0x000106055808();
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  func_0x000106055864();
  _objc_release(lStack_30);
  func_0x000106055838();
  func_0x000106055830();
  return;
}



/* Entry: 10605536c; end: 1060553c7;  */

void FUN_10605536c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7560;
  func_0x00010bfbc0e0(PTR_PTR_1126c7560,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010605585c();
  func_0x00010605585c(*(undefined8 *)(param_1 + 0x28));
  func_0x000106055828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060553c8; end: 1060553db; +[SCCRegisterInAppWarningDb valdiMarshallableObjectDescriptor] */

void FUN_1060553c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110909688;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1060553dc; end: 1060553e7; +[SCCWarningManagerFactory modulePath] */

undefined ** FUN_1060553dc(void)

{
  return &PTR____CFConstantStringClassReference_110e3a678;
}



/* Entry: 1060553e8; end: 1060553eb; +[SCCWarningManagerFactory asyncStrictMode] */

undefined8 FUN_1060553e8(void)

{
  return 0;
}



/* Entry: 1060553ec; end: 106055453; -[SCCWarningManagerFactory createManagerWithDeps:] */

void FUN_1060553ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106055838();
  func_0x000106055830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106055454; end: 106055587; +[SCCWarningManagerFactory invokeWithJSRuntimeProvider:deps:completionHandler:] */

void FUN_106055454(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010605586c();
  func_0x000106055808();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106055514;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000106055808();
  func_0x00010605587c();
  func_0x000106055848();
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x000106055864();
  func_0x000106055830();
  func_0x000106055838();
  func_0x000106055828();
  return;
}



/* Entry: 106055588; end: 1060555a3; +[SCCWarningManagerFactory valdiMarshallableObjectDescriptor] */

void FUN_106055588(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109096b8;
  param_1[1] = &PTR_DAT_1109096e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1060555a4; end: 1060555af; +[SCCWarningSyncer modulePath] */

undefined ** FUN_1060555a4(void)

{
  return &PTR____CFConstantStringClassReference_110e3a698;
}



/* Entry: 1060555b0; end: 1060555b3; +[SCCWarningSyncer asyncStrictMode] */

undefined8 FUN_1060555b0(void)

{
  return 0;
}


