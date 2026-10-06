/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d31088; end: 108d3109b;  */

void FUN_108d31088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d31098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 108d3109c; end: 108d311df; +[SCStickerTagFuzzySearch processedTextWithText:] */

void FUN_108d3109c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  if (param_3 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c2a4be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_3;
    func_0x00010c25d0a0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar1);
    func_0x00010becb640(param_1,param_2,ppuVar2);
    if ((int)param_1 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
      func_0x00010c11bb40(PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12b740();
      func_0x00010c12b740(puVar1,param_2,&PTR____CFConstantStringClassReference_110dc05f8);
      ppuVar3 = ppuVar2;
      func_0x00010bf44700(ppuVar2,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
      _objc_release(puVar1);
    }
    else {
      _objc_retain(ppuVar2);
      ppuVar5 = ppuVar2;
    }
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 108d311e0; end: 108d3124b; +[SCStickerTagFuzzySearch _textHasPunctuationsOnly:] */

undefined * FUN_108d311e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c11bb40(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c080400();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 108d3124c; end: 108d31293; -[SCStickerTagFuzzySearch .cxx_destruct] */

void FUN_108d3124c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d31294; end: 108d3129b; -[SCStickerSearchServices search] */

undefined8 FUN_108d31294(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108d3129c; end: 108d312a7; -[SCStickerSearchServices .cxx_destruct] */

void FUN_108d3129c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d312a8; end: 108d312f7;  */

void FUN_108d312a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _MKMapPointForCoordinate();
  _MKMapPointForCoordinate(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__MKMetersBetweenMapPoints_110349ae0)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 108d312f8; end: 108d31493;  */

undefined1  [16] FUN_108d312f8(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  dVar4 = (param_2 * 3.141592653589793) / 180.0;
  param_4 = param_4 * 3.141592653589793;
  dVar5 = param_4 / 180.0;
  dVar2 = (param_1 * 3.141592653589793) / 180.0;
  dVar1 = (param_3 * 3.141592653589793) / 180.0;
  ___sincos_stret(dVar1);
  dVar5 = dVar5 - dVar4;
  dVar3 = param_4;
  ___sincos_stret(dVar5);
  dVar6 = param_4 * dVar3;
  param_4 = param_4 * dVar5;
  ___sincos_stret(dVar2);
  dVar2 = dVar2 + dVar1;
  dVar3 = dVar3 + dVar6;
  _atan2(dVar2,SQRT(param_4 * param_4 + dVar3 * dVar3));
  _atan2(param_4,dVar3);
  auVar7._0_8_ = (dVar2 * 180.0) / 3.141592653589793;
  auVar7._8_8_ = ((dVar4 + param_4) * 180.0) / 3.141592653589793;
  return auVar7;
}



/* Entry: 108d31494; end: 108d31517;  */

undefined1  [16] FUN_108d31494(double param_1,double param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  param_1 = param_1 * 0.017453292519943295;
  dVar1 = param_1;
  _tan(param_1);
  _cos(param_1);
  dVar1 = dVar1 + 1.0 / param_1;
  _log(dVar1);
  auVar2._8_8_ = (dVar1 / -3.141592653589793 + 1.0) * 0.5;
  auVar2._0_8_ = (param_2 + 180.0) / 360.0;
  return auVar2;
}



/* Entry: 108d31518; end: 108d31607;  */

void FUN_108d31518(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (param_2 * -2.0 + 1.0) * 3.141592653589793;
  _sinh(dVar1);
  _atan();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CLLocationCoordinate2DMake_110349b58)
            ((dVar1 * 180.0) / 3.141592653589793,param_1 * 360.0 + -180.0);
  return;
}



/* Entry: 108d31608; end: 108d316bf;  */

double FUN_108d31608(double param_1,double param_2,undefined8 param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = 0.0;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  dVar1 = (double)NEON_fminnm(dVar2,0x4039800000000000);
  _exp2(dVar1);
  dVar2 = -85.0511287798066;
  if (-85.0511287798066 <= param_2) {
    dVar2 = param_2;
  }
  dVar2 = (double)NEON_fminnm(dVar2,0x40554345b1a549d7);
  dVar2 = dVar2 * 0.017453292519943295;
  _cos(dVar2);
  dVar3 = 0.2617993877991494;
  _tan(0x3fd0c152382d7365);
  return (param_4 * ((dVar2 * 6.283185307179586 * 6378137.0) / (dVar1 * 512.0)) * 0.5) / dVar3;
}



/* Entry: 108d316c0; end: 108d3176b;  */

void FUN_108d316c0(double param_1,double param_2,double param_3,undefined8 param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = 1.5707963267948966 - (param_2 * 3.141592653589793) / 180.0;
  _sin(dVar1);
  dVar2 = 0.2617993877991494;
  _tan(0x3fd0c152382d7365);
  dVar3 = (param_3 * 3.141592653589793) / 180.0;
  _cos(dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__log2_11034c530)
            (((dVar3 * 6.283185307179586 * 6378137.0) /
             ((dVar2 * (param_1 / dVar1 + param_1 / dVar1)) / param_5)) * 0.001953125);
  return;
}



/* Entry: 108d3176c; end: 108d318db;  */

undefined1  [16]
FUN_108d3176c(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar5 = param_3;
  dVar3 = param_2;
  _CLLocationCoordinate2DMake();
  dVar4 = dVar5;
  FUN_108d312a8();
  FUN_108d312a8(dVar5,dVar3,param_3,param_4);
  dVar3 = 0.0;
  if (0.0 <= param_5) {
    dVar3 = param_5;
  }
  dVar1 = (double)NEON_fminnm(dVar3,0x4039800000000000);
  _exp2();
  dVar3 = -85.0511287798066;
  if (-85.0511287798066 <= param_1) {
    dVar3 = param_1;
  }
  dVar2 = (double)NEON_fminnm(dVar3,0x40554345b1a549d7);
  dVar2 = dVar2 * 0.017453292519943295;
  _cos();
  dVar3 = -85.0511287798066;
  if (-85.0511287798066 <= param_3) {
    dVar3 = param_3;
  }
  dVar3 = (double)NEON_fminnm(dVar3,0x40554345b1a549d7);
  dVar3 = dVar3 * 0.017453292519943295;
  _cos(dVar3);
  dVar3 = (dVar3 * 6.283185307179586 * 6378137.0) / (dVar1 * 512.0);
  dVar5 = dVar5 / dVar3;
  dVar4 = dVar4 / (((dVar2 * 6.283185307179586 * 6378137.0) / (dVar1 * 512.0) + dVar3) * 0.5);
  dVar3 = -dVar4;
  if (param_1 <= param_3) {
    dVar3 = dVar4;
  }
  dVar4 = -dVar5;
  if (param_2 <= param_4) {
    dVar4 = dVar5;
  }
  auVar6._8_8_ = dVar3;
  auVar6._0_8_ = dVar4;
  return auVar6;
}



/* Entry: 108d318dc; end: 108d3190f;  */

double FUN_108d318dc(double param_1,double param_2)

{
  _exp2(param_2);
  return ABS(param_1) / (param_2 * 512.0);
}



/* Entry: 108d31910; end: 108d31a2b;  */

void FUN_108d31910(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7)

{
  double dVar1;
  
  param_1 = param_1 * 0.017453292519943295;
  dVar1 = param_1;
  _tan(param_1);
  _cos(param_1);
  dVar1 = dVar1 + 1.0 / param_1;
  _log(dVar1);
  _exp2(param_3);
  param_3 = param_3 * 512.0;
  dVar1 = ((ABS(param_6) / param_3 +
           ((1.0 - dVar1 / 3.141592653589793) * 0.5 - ABS(param_4) / param_3)) * -2.0 + 1.0) *
          3.141592653589793;
  _sinh(dVar1);
  _atan();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CLLocationCoordinate2DMake_110349b58)
            ((dVar1 * 180.0) / 3.141592653589793,
             (ABS(param_7) / param_3 + ((param_2 + 180.0) / 360.0 - ABS(param_5) / param_3)) * 360.0
             + -180.0);
  return;
}



/* Entry: 108d31a2c; end: 108d31d03;  */

ulong FUN_108d31a2c(undefined8 param_1,double param_2,ulong param_3,ulong param_4,
                   undefined1 *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  ulong uStack_120;
  long lStack_98;
  
  puVar2 = &uStack_180;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  uVar3 = param_3;
  func_0x00010bf529e0();
  if (uVar3 != 0) {
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    dVar7 = 1.60807493534087e-314;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_108d31d04;
    puStack_128 = &UNK_110ac2c20;
    _objc_retain(param_4);
    uVar3 = param_3;
    uStack_120 = param_4;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,uVar1);
    dVar9 = param_2;
    _objc_release(uVar1);
    dVar8 = 0.0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    lStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    _objc_retain(uVar3);
    uVar1 = uVar3;
    func_0x00010bf52a60();
    dVar12 = dVar7;
    dVar10 = param_2;
    dVar16 = param_2;
    if (uVar1 == 0) {
      dVar14 = 0.0;
    }
    else {
      lVar4 = *plStack_170;
      dVar14 = 0.0;
      dVar13 = param_2;
      do {
        uVar6 = 0;
        dVar11 = dVar7;
        dVar15 = dVar16;
        do {
          if (*plStack_170 != lVar4) {
            _objc_enumerationMutation(uVar3);
          }
          (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(lStack_178 + uVar6 * 8));
          dVar7 = dVar8;
          if (dVar8 <= dVar11) {
            dVar7 = dVar11;
          }
          if (dVar8 <= dVar12) {
            dVar12 = dVar8;
          }
          dVar8 = dVar9 - dVar13;
          dVar16 = dVar9;
          dVar11 = dVar8;
          if (dVar8 <= dVar14) {
            dVar16 = dVar15;
            dVar13 = dVar10;
            dVar11 = dVar14;
          }
          dVar14 = dVar11;
          dVar10 = dVar13;
          uVar6 = uVar6 + 1;
          dVar11 = dVar7;
          dVar15 = dVar16;
          dVar13 = dVar9;
        } while (uVar1 != uVar6);
        uVar1 = uVar3;
        puVar2 = &uStack_180;
        func_0x00010bf52a60();
      } while (uVar1 != 0);
    }
    _objc_release(uVar3);
    uVar6 = uVar3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    (**(code **)(param_4 + 0x10))(param_4,uVar6);
    _objc_release(uVar6);
    dVar8 = param_2 - (dVar9 + -360.0);
    dVar7 = param_2;
    param_2 = dVar9;
    if (dVar8 <= dVar14) {
      dVar7 = dVar16;
      param_2 = dVar10;
    }
    dVar10 = dVar7 + -360.0;
    if (dVar7 <= param_2) {
      dVar10 = dVar7;
    }
    _CLLocationCoordinate2DMake(dVar12,dVar10);
    _CLLocationCoordinate2DMake();
    _objc_release(uVar3);
    _objc_release(uStack_120);
    param_5 = (undefined1 *)puVar2;
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    lVar4 = *(long *)(param_3 + 0x20);
    pcVar5 = *(code **)(lVar4 + 0x10);
    _objc_retain(param_5);
    (*pcVar5)(lVar4,uVar1);
    dVar10 = param_2;
    (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),param_5);
    _objc_release(param_5);
    uVar3 = (ulong)(dVar10 < param_2);
    if (param_2 < dVar10) {
      uVar3 = 0xffffffffffffffff;
    }
    return uVar3;
  }
  return param_3;
}



/* Entry: 108d31d04; end: 108d31d87;  */

ulong FUN_108d31d04(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_3 + 0x20);
  pcVar3 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_5);
  (*pcVar3)(lVar2,param_4);
  dVar4 = param_2;
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),param_5);
  _objc_release(param_5);
  uVar1 = (ulong)(dVar4 < param_2);
  if (param_2 < dVar4) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 108d31d88; end: 108d31f57;  */

double FUN_108d31d88(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,double param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double in_stack_00000000;
  
  if (param_4 < param_2) {
    param_2 = param_2 + -360.0;
    _CLLocationCoordinate2DMake();
  }
  param_1 = param_1 * 0.017453292519943295;
  dVar1 = param_1;
  _tan(param_1);
  _cos(param_1);
  dVar1 = dVar1 + 1.0 / param_1;
  _log(dVar1);
  param_3 = param_3 * 0.017453292519943295;
  dVar2 = param_3;
  _tan(param_3);
  _cos(param_3);
  dVar2 = dVar2 + 1.0 / param_3;
  _log(dVar2);
  _exp2();
  in_stack_00000000 = in_stack_00000000 * 512.0;
  dVar1 = (((1.0 - dVar1 / 3.141592653589793) * 0.5 - param_7 / in_stack_00000000) * -2.0 + 1.0) *
          3.141592653589793;
  _sinh(dVar1);
  _atan();
  dVar1 = (dVar1 * 180.0) / 3.141592653589793;
  _CLLocationCoordinate2DMake
            (dVar1,(param_6 / in_stack_00000000 + (param_2 + 180.0) / 360.0) * 360.0 + -180.0);
  dVar2 = ((param_5 / in_stack_00000000 + (1.0 - dVar2 / 3.141592653589793) * 0.5) * -2.0 + 1.0) *
          3.141592653589793;
  _sinh(dVar2);
  _atan();
  _CLLocationCoordinate2DMake
            ((dVar2 * 180.0) / 3.141592653589793,
             ((param_4 + 180.0) / 360.0 - param_8 / in_stack_00000000) * 360.0 + -180.0);
  return dVar1;
}



/* Entry: 108d31f58; end: 108d320cf;  */

undefined8 FUN_108d31f58(double param_1,double param_2,double param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  uVar5 = 0;
  if (0.0 <= param_3) {
    _CLLocationCoordinate2DIsValid();
    dVar4 = 0.0;
    if (param_4 != 0) {
      param_1 = param_1 * 0.017453292519943295;
      dVar6 = param_1 - param_3 / 6378137.0;
      dVar8 = param_1 + param_3 / 6378137.0;
      dVar3 = -90.0;
      if ((dVar6 <= -90.0) || (dVar4 = 90.0, 90.0 <= dVar8)) {
        dVar7 = dVar3;
        if (-90.0 <= dVar6) {
          dVar7 = dVar6;
        }
        dVar8 = (double)NEON_fminnm(dVar8,0x4056800000000000);
        dVar2 = -10313.240312354817;
        dVar1 = 10313.240312354817;
      }
      else {
        dVar4 = (double)_sin();
        dVar3 = (double)_cos(param_1);
        dVar3 = (double)_asin(dVar4 / dVar3);
        dVar4 = param_2 * 0.017453292519943295 - dVar3;
        dVar3 = param_2 * 0.017453292519943295 + dVar3;
        dVar1 = (double)((ulong)(dVar3 + -6.283185307179586) ^
                        ((ulong)(dVar3 + -6.283185307179586) ^ (ulong)dVar3) &
                        ~-(ulong)(180.0 < dVar3)) * 57.29577951308232;
        dVar2 = (double)((ulong)(dVar4 + 6.283185307179586) ^
                        ((ulong)(dVar4 + 6.283185307179586) ^ (ulong)dVar4) &
                        ~-(ulong)(dVar4 < -180.0)) * 57.29577951308232;
        dVar4 = dVar3;
        dVar7 = dVar6;
      }
      uVar5 = _CLLocationCoordinate2DMake(dVar7 * 57.29577951308232,dVar2,dVar3,dVar4);
      _CLLocationCoordinate2DMake(dVar8 * 57.29577951308232,dVar1);
    }
  }
  return uVar5;
}



/* Entry: 108d320d0; end: 108d32163;  */

void FUN_108d320d0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  _objc_retain(param_2);
  func_0x00010c246ba0(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d32164; end: 108d3221b;  */

long FUN_108d32164(double param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_3 + 0x20);
  pcVar2 = *(code **)(lVar1 + 0x10);
  _objc_retain(param_5);
  (*pcVar2)(lVar1,param_4);
  dVar3 = param_1;
  uVar4 = param_2;
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),param_5);
  _objc_release(param_5);
  FUN_108d312a8(param_1,param_2,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  FUN_108d312a8(dVar3,uVar4,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
  lVar1 = -(ulong)(param_1 < dVar3);
  if (dVar3 < param_1) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 108d3221c; end: 108d3233f;  */

void FUN_108d3221c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b4bc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c05ace0();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_retain(param_5);
  func_0x00010bfaa020(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 108d32340; end: 108d3234b;  */

void FUN_108d32340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108d32348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108d3234c; end: 108d3244f; -[SCBitmojiSettingsView initWithResourceDownloader:bitmojiSelfieFetcher:selfieProvider:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d3234c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000108d3319c();
  func_0x000108d3314c();
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fe698;
  uStack_60 = param_1;
  func_0x000108d332a8();
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277b49c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277b4a0;
    func_0x000108d3314c();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277b4a4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277b4a8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  func_0x000108d33164();
  func_0x000108d33154();
  func_0x000108d330e4();
  func_0x000108d3315c();
  return (undefined1 *)puVar1;
}



/* Entry: 108d32450; end: 108d3262b; -[SCBitmojiSettingsView updateBitmojiSettingsViewWithState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + _DAT_11277b4ac) = param_3;
  switch(param_3) {
  case 0:
    func_0x00010c099a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33140();
    func_0x000108d330e4();
    func_0x000108d33258();
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3320c();
    func_0x00010c099a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33294();
    func_0x000108d33154();
    func_0x000108d330e4();
    func_0x000108d33074((long)_DAT_11277b4b0);
    func_0x000108d33074((long)_DAT_11277b4b4);
    lVar1 = (long)_DAT_11277b4b8;
    break;
  case 1:
    func_0x000108d33074((long)_DAT_11277b4bc);
    func_0x00010c280a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33140();
    func_0x000108d330e4();
    func_0x000108d33074((long)_DAT_11277b4b4);
    lVar1 = (long)_DAT_11277b4b8;
    break;
  case 2:
    func_0x000108d33074((long)_DAT_11277b4bc);
    func_0x000108d33074((long)_DAT_11277b4b0);
    func_0x00010c0999e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33140();
    func_0x000108d330e4();
    func_0x000108d33258();
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3320c();
    func_0x00010c0999e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33294();
    func_0x000108d33154();
    func_0x000108d330e4();
    lVar1 = (long)_DAT_11277b4b8;
    break;
  case 3:
    func_0x000108d33074((long)_DAT_11277b4bc);
    func_0x000108d33074((long)_DAT_11277b4b0);
    func_0x000108d33074((long)_DAT_11277b4b4);
    func_0x00010bf8eca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33140();
    func_0x000108d330e4();
    func_0x000108d33258();
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3320c();
    func_0x00010bf8eca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33294();
    func_0x000108d3315c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(&DAT_11277b4b0);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108d3262c; end: 108d327c3; -[SCBitmojiSettingsView linkingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3262c(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar4;
  undefined8 unaff_x22;
  long lVar5;
  undefined8 *unaff_x29;
  undefined8 *in_stack_000000b0;
  
  func_0x000108d332c8();
  in_stack_000000b0 = unaff_x29;
  func_0x000108d3316c();
  lVar5 = (long)_DAT_11277b4bc;
  lVar4 = *(long *)(param_1 + lVar5);
  puVar1 = param_1;
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126dbd20;
    func_0x00010c29bf40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d330b8();
    func_0x000108d33134();
    func_0x000108d33128();
    func_0x000108d330ec();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331c4();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3318c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33248();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331b4();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3317c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33278();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3329c();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331d4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33268();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3320c();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331a4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d330c8();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3309c();
    func_0x000108d331e4();
    func_0x000108d33164();
    func_0x000108d33154();
    func_0x000108d330e4();
    func_0x000108d331fc();
    func_0x000108d331f4();
    func_0x000108d33204();
    func_0x000108d331ec();
    func_0x000108d33230();
    func_0x000108d33228();
    func_0x000108d33220();
    func_0x000108d33218();
    func_0x000108d33240();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  func_0x000108d3314c();
  func_0x000108d33114(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108d332c8();
    in_stack_000000b0 = &stack0x000000b0;
    func_0x000108d3316c();
    lVar5 = (long)_DAT_11277b4b0;
    lVar4 = *(long *)(puVar1 + lVar5);
    puVar2 = puVar1;
    if (lVar4 == 0) {
      _objc_alloc(PTR_PTR_1126dbd28);
      func_0x00010bff82c0();
      func_0x000108d330b8();
      puVar2 = *(undefined **)(puVar1 + lVar5);
      func_0x00010c18b5e0();
      func_0x000108d33134();
      func_0x000108d33128();
      func_0x000108d330ec();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331c4();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3318c();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d33248();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331b4();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3317c();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d33278();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3329c();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331d4();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d33268();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3320c();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331a4();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d330c8();
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3309c();
      func_0x000108d331e4();
      func_0x000108d33164();
      func_0x000108d33154();
      func_0x000108d330e4();
      func_0x000108d331fc();
      func_0x000108d331f4();
      func_0x000108d33204();
      func_0x000108d331ec();
      func_0x000108d33230();
      func_0x000108d33228();
      func_0x000108d33220();
      func_0x000108d33218();
      func_0x000108d33240();
      lVar4 = *(long *)(puVar1 + lVar5);
    }
    func_0x000108d3314c();
    func_0x000108d33114(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108d332c8();
      in_stack_000000b0 = &stack0x000000b0;
      func_0x000108d3316c();
      lVar5 = (long)_DAT_11277b4b4;
      lVar4 = *(long *)(puVar2 + lVar5);
      puVar1 = puVar2;
      if (lVar4 == 0) {
        puVar1 = PTR_PTR_1126dbd30;
        func_0x00010c29bf00();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d330b8();
        func_0x000108d33134();
        func_0x000108d33128();
        func_0x000108d330ec();
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331c4();
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3318c();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d33248();
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331b4();
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3317c();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d33278();
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3329c();
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331d4();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d33268();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3320c();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331a4();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d330c8();
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3309c();
        func_0x000108d331e4();
        func_0x000108d33164();
        func_0x000108d33154();
        func_0x000108d330e4();
        func_0x000108d331fc();
        func_0x000108d331f4();
        func_0x000108d33204();
        func_0x000108d331ec();
        func_0x000108d33230();
        func_0x000108d33228();
        func_0x000108d33220();
        func_0x000108d33218();
        func_0x000108d33240();
        lVar4 = *(long *)(puVar2 + lVar5);
      }
      func_0x000108d3314c();
      func_0x000108d33114(extraout_x8_01);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108d3316c();
        lVar5 = (long)_DAT_11277b4b8;
        lVar4 = *(long *)(puVar1 + lVar5);
        if (lVar4 == 0) {
          _objc_alloc();
          func_0x000108d332a8();
          func_0x00010c013de0();
          func_0x000108d330b8();
          func_0x000108d33134();
          func_0x000108d33128();
          func_0x000108d330ec();
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d331c4();
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d3318c();
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d331b4();
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d3317c();
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d3329c();
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d331d4();
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d3320c();
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d331a4();
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108d3309c();
          func_0x000108d331e4();
          func_0x000108d33164();
          func_0x000108d33154();
          func_0x000108d330e4();
          func_0x000108d331fc();
          func_0x000108d331f4();
          func_0x000108d33204();
          func_0x000108d331ec();
          func_0x000108d33230();
          func_0x000108d33228();
          func_0x000108d33220();
          func_0x000108d33218();
          func_0x000108d33240();
          puVar3 = PTR_PTR_1126afd30;
          _objc_alloc();
          func_0x00010bfffc60();
          func_0x00010c219b60();
          func_0x00010befbb60(*(undefined8 *)(puVar1 + lVar5));
          puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          unaff_x22 = *(undefined8 *)(puVar1 + lVar5);
          func_0x00010bf34860();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf348e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf348e0(*(undefined8 *)(puVar1 + lVar5));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(puVar2);
          func_0x000108d331f4();
          func_0x000108d33204();
          func_0x000108d331ec();
          func_0x000108d331fc();
          func_0x000108d331e4();
          func_0x000108d33164();
          func_0x000108d33154();
          func_0x00010c24dbc0(puVar3);
          func_0x000108d330e4();
          lVar4 = *(long *)(puVar1 + lVar5);
        }
        func_0x000108d3314c();
        func_0x000108d33114(extraout_x8_02);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108d3304c();
          func_0x000108d3314c();
          func_0x000108d33238();
          func_0x000108d33100();
          func_0x00010bf78980();
          func_0x000108d3315c();
          func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(unaff_x22);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108d327c4; end: 108d32963; -[SCBitmojiSettingsView unlinkingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d327c4(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar4;
  undefined8 unaff_x22;
  long lVar5;
  undefined8 *unaff_x29;
  undefined8 *in_stack_000000b0;
  
  func_0x000108d332c8();
  in_stack_000000b0 = unaff_x29;
  func_0x000108d3316c();
  lVar5 = (long)_DAT_11277b4b0;
  lVar4 = *(long *)(param_1 + lVar5);
  puVar1 = param_1;
  if (lVar4 == 0) {
    _objc_alloc(PTR_PTR_1126dbd28);
    func_0x00010bff82c0();
    func_0x000108d330b8();
    puVar1 = *(undefined **)(param_1 + lVar5);
    func_0x00010c18b5e0();
    func_0x000108d33134();
    func_0x000108d33128();
    func_0x000108d330ec();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331c4();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3318c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33248();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331b4();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3317c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33278();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3329c();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331d4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33268();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3320c();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331a4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d330c8();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3309c();
    func_0x000108d331e4();
    func_0x000108d33164();
    func_0x000108d33154();
    func_0x000108d330e4();
    func_0x000108d331fc();
    func_0x000108d331f4();
    func_0x000108d33204();
    func_0x000108d331ec();
    func_0x000108d33230();
    func_0x000108d33228();
    func_0x000108d33220();
    func_0x000108d33218();
    func_0x000108d33240();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  func_0x000108d3314c();
  func_0x000108d33114(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108d332c8();
    in_stack_000000b0 = &stack0x000000b0;
    func_0x000108d3316c();
    lVar5 = (long)_DAT_11277b4b4;
    lVar4 = *(long *)(puVar1 + lVar5);
    puVar2 = puVar1;
    if (lVar4 == 0) {
      puVar2 = PTR_PTR_1126dbd30;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d330b8();
      func_0x000108d33134();
      func_0x000108d33128();
      func_0x000108d330ec();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331c4();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3318c();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d33248();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331b4();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3317c();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d33278();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3329c();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331d4();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d33268();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3320c();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331a4();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d330c8();
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3309c();
      func_0x000108d331e4();
      func_0x000108d33164();
      func_0x000108d33154();
      func_0x000108d330e4();
      func_0x000108d331fc();
      func_0x000108d331f4();
      func_0x000108d33204();
      func_0x000108d331ec();
      func_0x000108d33230();
      func_0x000108d33228();
      func_0x000108d33220();
      func_0x000108d33218();
      func_0x000108d33240();
      lVar4 = *(long *)(puVar1 + lVar5);
    }
    func_0x000108d3314c();
    func_0x000108d33114(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108d3316c();
      lVar5 = (long)_DAT_11277b4b8;
      lVar4 = *(long *)(puVar2 + lVar5);
      if (lVar4 == 0) {
        _objc_alloc();
        func_0x000108d332a8();
        func_0x00010c013de0();
        func_0x000108d330b8();
        func_0x000108d33134();
        func_0x000108d33128();
        func_0x000108d330ec();
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331c4();
        func_0x00010c08de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3318c();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331b4();
        func_0x00010c2793a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3317c();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3329c();
        func_0x00010c274200();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331d4();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3320c();
        func_0x00010bf1ff80();
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d331a4();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108d3309c();
        func_0x000108d331e4();
        func_0x000108d33164();
        func_0x000108d33154();
        func_0x000108d330e4();
        func_0x000108d331fc();
        func_0x000108d331f4();
        func_0x000108d33204();
        func_0x000108d331ec();
        func_0x000108d33230();
        func_0x000108d33228();
        func_0x000108d33220();
        func_0x000108d33218();
        func_0x000108d33240();
        puVar3 = PTR_PTR_1126afd30;
        _objc_alloc();
        func_0x00010bfffc60();
        func_0x00010c219b60();
        func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar5));
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = *(undefined8 *)(puVar2 + lVar5);
        func_0x00010bf34860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf348e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf348e0(*(undefined8 *)(puVar2 + lVar5));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf493a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beef8c0(puVar1);
        func_0x000108d331f4();
        func_0x000108d33204();
        func_0x000108d331ec();
        func_0x000108d331fc();
        func_0x000108d331e4();
        func_0x000108d33164();
        func_0x000108d33154();
        func_0x00010c24dbc0(puVar3);
        func_0x000108d330e4();
        lVar4 = *(long *)(puVar2 + lVar5);
      }
      func_0x000108d3314c();
      func_0x000108d33114(extraout_x8_01);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108d3304c();
        func_0x000108d3314c();
        func_0x000108d33238();
        func_0x000108d33100();
        func_0x00010bf78980();
        func_0x000108d3315c();
        func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(unaff_x22);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108d32964; end: 108d32adf; -[SCBitmojiSettingsView linkingSucceededView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32964(undefined *param_1)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  undefined8 unaff_x22;
  long lVar5;
  
  func_0x000108d332c8();
  func_0x000108d3316c();
  lVar5 = (long)_DAT_11277b4b4;
  lVar4 = *(long *)(param_1 + lVar5);
  puVar2 = param_1;
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126dbd30;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d330b8();
    func_0x000108d33134();
    func_0x000108d33128();
    func_0x000108d330ec();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331c4();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3318c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33248();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331b4();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3317c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33278();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3329c();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331d4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d33268();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3320c();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331a4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d330c8();
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3309c();
    func_0x000108d331e4();
    func_0x000108d33164();
    func_0x000108d33154();
    func_0x000108d330e4();
    func_0x000108d331fc();
    func_0x000108d331f4();
    func_0x000108d33204();
    func_0x000108d331ec();
    func_0x000108d33230();
    func_0x000108d33228();
    func_0x000108d33220();
    func_0x000108d33218();
    func_0x000108d33240();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  func_0x000108d3314c();
  func_0x000108d33114(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108d3316c();
    lVar5 = (long)_DAT_11277b4b8;
    lVar4 = *(long *)(puVar2 + lVar5);
    if (lVar4 == 0) {
      _objc_alloc();
      func_0x000108d332a8();
      func_0x00010c013de0();
      func_0x000108d330b8();
      func_0x000108d33134();
      func_0x000108d33128();
      func_0x000108d330ec();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331c4();
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3318c();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331b4();
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3317c();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3329c();
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331d4();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3320c();
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d331a4();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108d3309c();
      func_0x000108d331e4();
      func_0x000108d33164();
      func_0x000108d33154();
      func_0x000108d330e4();
      func_0x000108d331fc();
      func_0x000108d331f4();
      func_0x000108d33204();
      func_0x000108d331ec();
      func_0x000108d33230();
      func_0x000108d33228();
      func_0x000108d33220();
      func_0x000108d33218();
      func_0x000108d33240();
      puVar3 = PTR_PTR_1126afd30;
      _objc_alloc();
      func_0x00010bfffc60();
      func_0x00010c219b60();
      func_0x00010befbb60(*(undefined8 *)(puVar2 + lVar5));
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = *(undefined8 *)(puVar2 + lVar5);
      func_0x00010bf34860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf348e0(*(undefined8 *)(puVar2 + lVar5));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar1);
      func_0x000108d331f4();
      func_0x000108d33204();
      func_0x000108d331ec();
      func_0x000108d331fc();
      func_0x000108d331e4();
      func_0x000108d33164();
      func_0x000108d33154();
      func_0x00010c24dbc0(puVar3);
      func_0x000108d330e4();
      lVar4 = *(long *)(puVar2 + lVar5);
    }
    func_0x000108d3314c();
    func_0x000108d33114(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108d3304c();
      func_0x000108d3314c();
      func_0x000108d33238();
      func_0x000108d33100();
      func_0x00010bf78980();
      func_0x000108d3315c();
      func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(unaff_x22);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 108d32ae0; end: 108d32dc3; -[SCBitmojiSettingsView emptyLoadingView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32ae0(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 unaff_x22;
  long lVar8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000108d3316c();
  lVar8 = (long)_DAT_11277b4b8;
  lVar7 = *(long *)(param_1 + lVar8);
  uStack_68 = extraout_x8;
  if (lVar7 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x000108d332a8();
    func_0x00010c013de0();
    func_0x000108d330b8();
    func_0x000108d33134();
    func_0x000108d33128();
    func_0x000108d330ec();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331c4();
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3318c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    puStack_88 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331b4();
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3317c();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar8);
    uStack_80 = uVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3329c();
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331d4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    uStack_78 = uVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3320c();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d331a4();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = uVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d3309c();
    func_0x000108d331e4();
    func_0x000108d33164();
    func_0x000108d33154();
    func_0x000108d330e4();
    func_0x000108d331fc();
    func_0x000108d331f4();
    func_0x000108d33204();
    func_0x000108d331ec();
    func_0x000108d33230();
    func_0x000108d33228();
    func_0x000108d33220();
    func_0x000108d33218();
    func_0x000108d33240();
    puVar4 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    func_0x00010c219b60();
    func_0x00010befbb60(*(undefined8 *)(param_1 + lVar8),param_2,puVar4);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(puVar5,param_2,unaff_x22);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    puStack_98 = puVar5;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bf348e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0(puVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_90 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_98,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1,param_2,puVar5);
    func_0x000108d331f4();
    func_0x000108d33204();
    func_0x000108d331ec();
    func_0x000108d331fc();
    func_0x000108d331e4();
    func_0x000108d33164();
    func_0x000108d33154();
    func_0x00010c24dbc0(puVar4);
    func_0x000108d330e4();
    lVar7 = *(long *)(param_1 + lVar8);
  }
  func_0x000108d3314c();
  func_0x000108d33114(uStack_68);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  ___stack_chk_fail();
  func_0x000108d3304c();
  func_0x000108d3314c();
  func_0x000108d33238();
  func_0x000108d33100();
  func_0x00010bf78980();
  func_0x000108d3315c();
  func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x22);
  return;
}



/* Entry: 108d32dc4; end: 108d32dfb; -[SCBitmojiSettingsView didPressLinkButton:view:] */

void FUN_108d32dc4(void)

{
  FUN_108d3304c();
  func_0x000108d3314c();
  func_0x000108d33238();
  func_0x000108d33100();
  func_0x00010bf78980();
  func_0x000108d3315c();
  func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32dfc; end: 108d32e43; -[SCBitmojiSettingsView didPressUnlinkBitmojiForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32dfc(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000108d33288();
  lVar1 = (long)_DAT_11277b4c0;
  func_0x000108d3319c();
  lVar1 = unaff_x20 + lVar1;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf78b80();
  func_0x000108d3315c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d32e44; end: 108d32e7b; -[SCBitmojiSettingsView didPressChangeOutfitCell:view:] */

void FUN_108d32e44(void)

{
  FUN_108d3304c();
  func_0x000108d3314c();
  func_0x000108d33238();
  func_0x000108d33100();
  func_0x00010bf78820();
  func_0x000108d3315c();
  func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32e7c; end: 108d32eb3; -[SCBitmojiSettingsView didPressEditBitmojiCell:view:] */

void FUN_108d32e7c(void)

{
  FUN_108d3304c();
  func_0x000108d3314c();
  func_0x000108d33238();
  func_0x000108d33100();
  func_0x00010bf788e0();
  func_0x000108d3315c();
  func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32eb4; end: 108d32eeb; -[SCBitmojiSettingsView didPressChangeSelfieCell:view:] */

void FUN_108d32eb4(void)

{
  FUN_108d3304c();
  func_0x000108d3314c();
  func_0x000108d33238();
  func_0x000108d33100();
  func_0x00010bf78860();
  func_0x000108d3315c();
  func_0x000108d330e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32eec; end: 108d32f0b; -[SCBitmojiSettingsView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32eec(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277b4c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d32f0c; end: 108d32f1f; -[SCBitmojiSettingsView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b4c0,param_3);
  return;
}



/* Entry: 108d32f20; end: 108d32f4b; -[SCBitmojiSettingsView setLinkingSucceededView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32f20(void)

{
  func_0x000108d33288();
  func_0x000108d3319c();
  func_0x000108d332bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32f4c; end: 108d32f77; -[SCBitmojiSettingsView setUnlinkingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32f4c(void)

{
  func_0x000108d33288();
  func_0x000108d3319c();
  func_0x000108d332bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32f78; end: 108d32fa3; -[SCBitmojiSettingsView setLinkingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32f78(void)

{
  func_0x000108d33288();
  func_0x000108d3319c();
  func_0x000108d332bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32fa4; end: 108d32fcf; -[SCBitmojiSettingsView setEmptyLoadingView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32fa4(void)

{
  func_0x000108d33288();
  func_0x000108d3319c();
  func_0x000108d332bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d32fd0; end: 108d3304b; -[SCBitmojiSettingsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d32fd0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b4b8,0);
  func_0x000108d330ac((long)_DAT_11277b4bc);
  func_0x000108d330ac((long)_DAT_11277b4b0);
  func_0x000108d330ac((long)_DAT_11277b4b4);
  _objc_destroyWeak(param_1 + _DAT_11277b4c0);
  func_0x000108d330ac((long)_DAT_11277b4a8);
  func_0x000108d330ac((long)_DAT_11277b4a4);
  func_0x000108d330ac((long)_DAT_11277b4a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b49c,0);
  return;
}



/* Entry: 108d3304c; end: 108d332f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3304c(void)

{
  undefined8 in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(in_x3);
  return;
}



/* Entry: 108d332f4; end: 108d33353;  */

void FUN_108d332f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x9f);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108d33354; end: 108d3336b;  */

void FUN_108d33354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf415b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70,
             PTR_s_colorWithHexCode_alpha__1125adf10,0x1f8158);
  return;
}



/* Entry: 108d3336c; end: 108d33517; -[SCBitmojiFriendmojiHintViewController initWithTargetView:boundingView:boundingInsets:scopeDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d3336c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long alStack_90 [2];
  
  puVar1 = PTR_PTR_1126b6950;
  plVar2 = alStack_90;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(uVar3,uVar4,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef6118,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d336bc();
  func_0x00010c212f20();
  func_0x000108d336cc();
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d336bc();
  func_0x00010c213180();
  func_0x000108d336cc();
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d336bc();
  func_0x00010c16e440();
  func_0x000108d336cc();
  func_0x00010c0699c0(puVar1);
  func_0x00010c0699c0(puVar1);
  func_0x00010c19f0e0(0,0,uVar3,uVar4,puVar1);
  _objc_storeWeak(param_5 + _DAT_11277b4c4,param_9);
  _objc_release(param_9);
  func_0x000108d336e0();
  alStack_90[0] = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,alStack_90,
                      PTR_s_initWithTooltipBalloon_targetVie_112525f90,puVar1,param_7,param_8);
  _objc_release(param_8);
  func_0x000108d336b4();
  _objc_release(puVar1);
  return (undefined1 *)plVar2;
}



/* Entry: 108d33518; end: 108d33577; -[SCBitmojiFriendmojiHintViewController viewDidLoad] */

void FUN_108d33518(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_30 [2];
  
  uVar1 = param_1;
  func_0x000108d336e0();
  auStack_30[0] = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  func_0x000108d336b4();
  return;
}



/* Entry: 108d33578; end: 108d335c7; -[SCBitmojiFriendmojiHintViewController dismissCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d33578(long param_1)

{
  long lVar1;
  long alStack_30 [2];
  
  lVar1 = param_1;
  func_0x000108d336e0();
  alStack_30[0] = lVar1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dismissCompleted_1125be720);
  _objc_loadWeakRetained(param_1 + _DAT_11277b4c4);
  func_0x00010bf1b6c0();
  func_0x000108d336b4();
  return;
}



/* Entry: 108d335c8; end: 108d336a3; -[SCBitmojiFriendmojiHintViewController showWithCompletion:] */

void FUN_108d335c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uStack_48 = 0xc2000000;
  uStack_40 = 0x108d3365c;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  func_0x000108d336e0();
  puVar1 = PTR_s_showWithCompletion__11266c598;
  auStack_60[0] = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(auStack_60,puVar1,auStack_50);
  _objc_release(uStack_28);
  func_0x000108d336b4();
  return;
}



/* Entry: 108d336a4; end: 108d336eb; -[SCBitmojiFriendmojiHintViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d336a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277b4c4);
  return;
}



/* Entry: 108d336ec; end: 108d33863; -[SCBitmojiTooltipBalloonViewController initWithTooltipBalloon:targetView:boundingView:boundingInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d336ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126fe6a8;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if ((param_8 != 0) && (puVar1 != (undefined8 *)0x0)) {
    lVar3 = param_8;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if ((param_9 == 0) || (lVar3 == 0)) {
      func_0x000108d34114();
    }
    else {
      func_0x00010c262ca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x000108d34114();
      if (param_9 != 0) {
        func_0x00010c1c8b80(puVar1);
        lVar3 = (long)_DAT_11277b4c8;
        func_0x000108d34134();
        uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
        *(undefined8 *)((long)puVar1 + lVar3) = param_7;
        _objc_release(uVar2);
        func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar3));
        _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11277b4cc),param_8);
        func_0x00010c29bf00(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60();
        func_0x000108d34114();
        func_0x00010be3b200(param_1,param_2,param_3,param_4,puVar1);
      }
    }
  }
  func_0x000108d34124();
  func_0x000108d340f0();
  func_0x000108d3413c();
  return (undefined1 *)puVar1;
}



/* Entry: 108d33864; end: 108d33b33; -[SCBitmojiTooltipBalloonViewController _initializeBubblePositionWithTargetView:boundingView:boundingInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d33864(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_7);
  lVar5 = (long)_DAT_11277b4c8;
  dVar9 = param_4;
  func_0x000108d3412c();
  dVar10 = dVar9;
  func_0x000108d3412c();
  dVar11 = dVar10;
  func_0x000108d3412c();
  dVar6 = 0.5;
  dVar12 = param_3 * 0.5;
  uVar4 = param_7;
  func_0x00010c262ca0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf345e0(param_7);
  func_0x00010bf345e0(param_7);
  func_0x000108d34124();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(uVar4,param_6,lVar3);
  dVar7 = dVar6;
  dVar8 = param_2;
  func_0x000108d34124();
  func_0x000108d3411c();
  uVar4 = param_8;
  func_0x00010c262ca0(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0(param_8);
  func_0x000108d340f0();
  lVar3 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(dVar7,uVar4,param_6,lVar3);
  func_0x000108d340f0();
  func_0x000108d34124();
  func_0x000108d3412c();
  dVar7 = dVar6 - dVar12;
  if (10.0 <= dVar7) {
    dVar12 = dVar12 + dVar6;
    func_0x00010c29bf00(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0();
    dVar13 = param_3 + -10.0;
    func_0x000108d340f0();
    dVar7 = 0.0;
    if (dVar13 < dVar12) {
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb68e0();
      dVar7 = (param_3 - dVar12) + -10.0;
      func_0x000108d340f0();
    }
  }
  else {
    dVar7 = 10.0 - dVar7;
  }
  dVar12 = param_2 - param_4 * 0.5;
  bVar1 = dVar10 * 0.25 + dVar12 < param_1 + dVar8;
  bVar2 = dVar12 - dVar11 < 20.0;
  dVar8 = param_4 * 0.5 + dVar10 * 0.25;
  if (!bVar2 && !bVar1) {
    dVar8 = -(param_4 * 0.5) - dVar9 * 0.5;
  }
  uVar4 = 4;
  if (bVar2 || bVar1) {
    uVar4 = 1;
  }
  func_0x00010c17a6a0((long)(dVar6 + dVar7),(long)(param_2 + dVar8),*(undefined8 *)(param_5 + lVar5)
                     );
  _CGAffineTransformMakeTranslation(&uStack_b0,dVar7 * -2.0,-dVar8);
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  uStack_c8 = uStack_98;
  uStack_d0 = uStack_a0;
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar5),param_6,&uStack_e0);
  func_0x00010c21a1e0(-dVar7,*(undefined8 *)(param_5 + lVar5),param_6,uVar4);
  uVar4 = *(undefined8 *)(param_5 + lVar5);
  func_0x00010bf13d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a180(*(undefined8 *)(param_5 + lVar5),param_6,uVar4);
  func_0x000108d340f0();
  return;
}



/* Entry: 108d33b34; end: 108d33b3b; -[SCBitmojiTooltipBalloonViewController viewDidAppear:] */

void FUN_108d33b34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showWithCompletion__11266c598,0);
  return;
}



/* Entry: 108d33b3c; end: 108d33b8f; -[SCBitmojiTooltipBalloonViewController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_108d33b3c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe6a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillTransitionToSize_withTra_112685490);
  func_0x00010bf84ca0(0,param_1);
  return;
}



/* Entry: 108d33b90; end: 108d33cd3; -[SCBitmojiTooltipBalloonViewController showWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d33b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11277b4c8;
  if (*(long *)(param_1 + lVar3) == 0) {
    uVar2 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_90);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  _CGAffineTransformScale(&uStack_60,0x3fb999999999999a,0x3fb999999999999a,&uStack_90);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(uVar2,param_2,&uStack_90);
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_108d33cd4;
  puStack_a0 = &UNK_110842e18;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108d33d28;
  puStack_c8 = &UNK_110842508;
  uStack_c0 = param_3;
  lStack_98 = param_1;
  func_0x000108d34134();
  func_0x00010bf03460(0x3fd3333333333333,0,0x3fe6666666666666,0,puVar1,param_2,0x10000,&puStack_b8,
                      &puStack_e0);
  _objc_release(uStack_c0);
  func_0x000108d3413c();
  return;
}



/* Entry: 108d33cd4; end: 108d33d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d33cd4(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [48];
  
  _CGAffineTransformMakeScale(auStack_50,0x3ff0000000000000,0x3ff0000000000000);
  lVar1 = (long)_DAT_11277b4c8;
  func_0x000108d340f8(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar1));
  return;
}



/* Entry: 108d33d28; end: 108d33d3b;  */

void FUN_108d33d28(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d33d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108d33d3c; end: 108d33d3f; -[SCBitmojiTooltipBalloonViewController dismissCompleted] */

void FUN_108d33d3c(void)

{
  return;
}



/* Entry: 108d33d40; end: 108d33d7b; -[SCBitmojiTooltipBalloonViewController _completeDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d33d40(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277b4c8;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf835f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissCompleted_1125be720);
  return;
}



/* Entry: 108d33d7c; end: 108d33f2f; -[SCBitmojiTooltipBalloonViewController dismissWithAnimated:delay:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d33d7c(double param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  lVar2 = (long)_DAT_11277b4cc;
  lVar3 = param_2 + lVar2;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    lVar2 = param_2 + lVar2;
    _objc_loadWeakRetained();
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      func_0x000108d34114();
      func_0x000108d3411c();
    }
    else {
      lVar3 = *(long *)(param_2 + _DAT_11277b4c8);
      _objc_release();
      func_0x000108d34114();
      func_0x000108d3411c();
      if (lVar3 != 0) {
        _objc_initWeak(auStack_58,param_2);
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_108d33f30;
        puStack_70 = &UNK_110849380;
        _objc_copyWeak(auStack_60,auStack_58);
        func_0x000108d34134();
        ppuVar1 = &puStack_88;
        uStack_68 = param_5;
        _objc_retainBlock();
        if (((param_4 & 1) != 0) || (0.0 < param_1)) {
          uVar4 = 0x3fc3333333333333;
          if (param_4 == 0) {
            uVar4 = 0;
          }
          func_0x00010bf03440(uVar4,param_1,PTR__OBJC_CLASS___UIView_1126aec20);
        }
        else {
          (*(code *)ppuVar1[2])(ppuVar1,1);
        }
        func_0x000108d3411c();
        _objc_release(uStack_68);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
  }
  func_0x000108d3413c();
  return;
}



/* Entry: 108d33f30; end: 108d33f77;  */

void FUN_108d33f30(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
  func_0x00010bde2b40();
  FUN_108d340f0();
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108d33f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108d33f78; end: 108d340b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d33f78(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  
  lVar2 = param_3;
  func_0x000108d34144(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34144(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bf345e0();
  func_0x000108d34144(*(undefined8 *)(param_3 + 0x20));
  func_0x00010bf345e0();
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf512a0(param_1,param_2,lVar2,param_4,uVar1);
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_release(uVar1);
  func_0x000108d34114();
  func_0x000108d3411c();
  func_0x000108d34124();
  func_0x000108d340f0();
  lVar2 = (long)_DAT_11277b4c8;
  func_0x00010bf345e0(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar2));
  func_0x00010bf345e0(*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar2));
  _CGAffineTransformMakeTranslation(auStack_c0,param_1 - dVar3,param_2 - dVar4);
  _CGAffineTransformScale(auStack_90,0x3f50624dd2f1a9fc,0x3f50624dd2f1a9fc,auStack_c0);
  func_0x000108d340f8(*(undefined8 *)(param_3 + 0x20));
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_3 + 0x20) + lVar2));
  return;
}



/* Entry: 108d340b4; end: 108d340ef; -[SCBitmojiTooltipBalloonViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d340b4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b4cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b4c8,0);
  return;
}



/* Entry: 108d340f0; end: 108d3414b;  */

void FUN_108d340f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108d3414c; end: 108d3417b; +[SCBitmojiLinkingSucceededView view] */

void FUN_108d3414c(void)

{
  _objc_alloc(PTR_PTR_1126dbd30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d3417c; end: 108d346c3; -[SCBitmojiLinkingSucceededView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108d3417c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126fe6b0;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    FUN_108d34f2c();
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14c760();
    _CGRectGetHeight();
    func_0x000108d34f48();
    func_0x00010befbb60(puVar1);
    func_0x000108d34fe0();
    func_0x00010c0bbfc0(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar6 = (long)_DAT_11277b4d0;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010befbb60(puVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x000108d35008();
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    FUN_108d34f2c();
    lVar6 = (long)_DAT_11277b4d4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar5);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(puVar2);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x000108d35008();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000108d35010();
    FUN_108d34f2c();
    func_0x00010bfb41a0(0x4035000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fc4();
    func_0x00010c19e480();
    func_0x000108d34f40();
    func_0x00010c165e20(uVar5);
    func_0x00010c1c83a0(0x3fe6666666666666,uVar5);
    func_0x00010c1cfce0(uVar5);
    func_0x00010c1bdb00(uVar5);
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fc4();
    func_0x00010c16e440();
    func_0x000108d34f40();
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fc4();
    func_0x00010c213180();
    func_0x000108d34f40();
    func_0x00010c213040(uVar5);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef6138,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fc4();
    func_0x00010c212f20();
    func_0x000108d34f40();
    func_0x00010befbb60(puVar1);
    func_0x000108d34fe0();
    func_0x000108d35008();
    func_0x00010c0bbfc0(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    FUN_108d34f2c();
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf414e0(0x3fb999999999999a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    func_0x000108d34f58();
    func_0x000108d34f50();
    func_0x00010befbb60(puVar1);
    func_0x000108d34fe0();
    _objc_retain(uVar5);
    puVar4 = puVar3;
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000108d35010();
    FUN_108d34f2c();
    func_0x00010bfb41a0(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fa0();
    func_0x00010c19e480();
    func_0x000108d34f58();
    func_0x00010c165e20(puVar4);
    func_0x00010c1c83a0(0x3fe6666666666666,puVar4);
    func_0x00010c1cfce0(puVar4);
    func_0x00010c1bdb00(puVar4);
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fa0();
    func_0x00010c16e440();
    func_0x000108d34f58();
    func_0x00010c213040(puVar4);
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fa0();
    func_0x00010c213180();
    func_0x000108d34f58();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef6178,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d34fa0();
    func_0x00010c212f20();
    func_0x000108d34f58();
    func_0x00010befbb60(puVar1);
    func_0x000108d34fe0();
    _objc_retain(puVar3);
    func_0x00010c0bbfc0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    func_0x000108d34f50();
    _objc_release(puVar1);
    _objc_release(uVar5);
    func_0x000108d34f40();
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x000108d34f48();
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x000108d34f90();
  }
  return puVar1;
}



/* Entry: 108d346c4; end: 108d347ff;  */

void FUN_108d346c4(void)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108d34f60();
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f80();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fd4();
  (*extraout_x8_00)(0x4044000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  lVar1 = unaff_x20;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f90();
  func_0x00010bf985e0(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df720(*(undefined8 *)(unaff_x19 + 0x28),PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fb0();
  (*extraout_x8_01)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f98();
  func_0x000108d34f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 108d34800; end: 108d348ff;  */

void FUN_108d34800(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d34900; end: 108d34a73;  */

void FUN_108d34900(void)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108d34f60();
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f80();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fd4();
  (*extraout_x8_00)(0x4030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f80();
  (*extraout_x8_01)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fd4();
  (*extraout_x8_02)(0xc030000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f90();
  func_0x00010bf985e0(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fb0();
  (*extraout_x8_03)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(0x4049000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f98();
  func_0x000108d34f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 108d34a74; end: 108d34d0f;  */

void FUN_108d34a74(void)

{
  long lVar1;
  undefined *puVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long unaff_x19;
  long unaff_x20;
  double dVar3;
  
  func_0x000108d34fe8();
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d35028();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  dVar3 = 8.0;
  (**(code **)(lVar1 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34ff8();
  (*extraout_x8_00)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0699c0(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x00010c0df720(dVar3 + 20.0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d35028();
  (*extraout_x8_01)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d8e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))(0xbff0000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfce1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34ff8();
  (*extraout_x8_02)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fd4();
  (*extraout_x8_03)();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  lVar1 = unaff_x19;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34ff8();
  (*extraout_x8_04)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d8c0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f50();
  func_0x000108d34f90();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f98();
  lVar1 = unaff_x19;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
  return;
}



/* Entry: 108d34d10; end: 108d34e7f;  */

void FUN_108d34d10(void)

{
  long lVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108d34f60();
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f80();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fd4();
  (*extraout_x8_00)(0x4038000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f80();
  (*extraout_x8_01)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fd4();
  (*extraout_x8_02)(0xc038000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f58();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f48();
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34f90();
  func_0x00010bf985e0(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  func_0x00010c0bbea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d34fb0();
  (*extraout_x8_03)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(0x4020000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x000108d34f50();
  func_0x000108d34f40();
  func_0x000108d34f98();
  func_0x000108d34f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 108d34e80; end: 108d34eeb; -[SCBitmojiLinkingSucceededView updateAvatarImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d34e80(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277b4d0);
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010c24dbc0(uVar1);
  }
  else {
    func_0x00010c2558c0();
  }
  lVar2 = (long)_DAT_11277b4d4;
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar2));
  func_0x000108d34f90();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 108d34eec; end: 108d34f2b; -[SCBitmojiLinkingSucceededView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d34eec(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277b4d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b4d0,0);
  return;
}



/* Entry: 108d34f2c; end: 108d3503b;  */

void FUN_108d34f2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 108d3503c; end: 108d350bb; +[SCBitmojiLinkingView view:resourceDownloader:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3503c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dbd20;
  _objc_retain(param_5);
  func_0x000108d360cc();
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x000108d36094();
  func_0x00010c014bc0();
  func_0x000108d3608c();
  func_0x000108d36070();
  _objc_storeWeak(puVar1 + _DAT_11277b4d8,param_3);
  func_0x000108d360bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d350bc; end: 108d35163; -[SCBitmojiLinkingView initWithFrame:resourceDownloader:configProvider:] */

undefined1 * FUN_108d350bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  func_0x000108d360cc();
  puStack_58 = PTR_PTR_1126fe6b8;
  uStack_60 = param_1;
  func_0x000108d36124(&uStack_60,PTR_s_initWithFrame__1125e2948);
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000108d36124(puVar1);
    func_0x00010bfef780();
  }
  func_0x000108d36070();
  func_0x000108d3608c();
  return (undefined1 *)puVar1;
}



/* Entry: 108d35164; end: 108d35a33; -[SCBitmojiLinkingView initTeaserWithFrame:resourceDownloader:configProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d35164(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined1 *puStack_308;
  undefined8 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uStack_90 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = param_3;
  _objc_retain(param_3);
  uStack_158 = param_4;
  func_0x000108d36104();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x000108d360a8();
  func_0x000108d36078();
  func_0x00010befbb60(param_1);
  lVar2 = param_1;
  func_0x00010bf1bb60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36078();
  func_0x00010befbb60(puVar1);
  lVar3 = param_1;
  func_0x00010c268680();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36078();
  func_0x00010befbb60(puVar1);
  lVar4 = param_1;
  func_0x00010c0995e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = (long)_DAT_11277b4dc;
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  *(long *)(param_1 + lVar12) = lVar4;
  _objc_release(uVar11);
  func_0x000108d36078(*(undefined8 *)(param_1 + lVar12));
  func_0x00010befbb60(param_1);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar12));
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x000108d360a8();
  func_0x000108d36078();
  func_0x00010c17d4c0(puVar5);
  func_0x00010befbb60(param_1);
  puStack_168 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar6 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_2a0 = puVar6;
  lStack_298 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  puStack_290 = puVar6;
  puStack_110 = puVar6;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_288 = puVar7;
  lStack_280 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puStack_278 = puVar7;
  puStack_108 = puVar7;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  puStack_270 = puVar6;
  lStack_268 = lVar4;
  func_0x00010bf493c0(0x4048000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  puStack_260 = puVar7;
  puStack_100 = puVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36118();
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  puStack_258 = puVar6;
  lStack_250 = lVar4;
  func_0x00010bf493c0(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  puStack_248 = puVar7;
  puStack_f8 = puVar7;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36118();
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  puStack_240 = puVar6;
  lStack_238 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  puStack_230 = puVar7;
  puStack_f0 = puVar7;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36118();
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  puStack_228 = puVar6;
  lStack_220 = lVar4;
  func_0x00010bf493c0(0x4042000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  puStack_218 = puVar7;
  puStack_e8 = puVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36118();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_210 = puVar6;
  lStack_208 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  puStack_200 = puVar6;
  puStack_e0 = puVar6;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f8 = lVar4;
  func_0x00010bf49420(0x4050800000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  lStack_1f0 = lVar4;
  lStack_d8 = lVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = lVar8;
  lStack_1e0 = lVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  lStack_1d8 = lVar8;
  lStack_d0 = lVar8;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar4;
  lStack_1c8 = lVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_2a8 = lVar3;
  lStack_1c0 = lVar4;
  lStack_c8 = lVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_2b0 = lVar2;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_1b8 = lVar3;
  lStack_1b0 = lVar2;
  func_0x00010bf493c0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  lStack_1a8 = lVar3;
  lStack_c0 = lVar3;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a0 = uVar11;
  lStack_198 = lVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + lVar12);
  uStack_190 = uVar11;
  uStack_b8 = uVar11;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b8 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = uVar9;
  puStack_180 = puVar1;
  func_0x00010bf493c0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  uStack_178 = uVar9;
  uStack_b0 = uVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar1;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  puStack_a8 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_160 = puVar5;
  puStack_a0 = puVar1;
  func_0x00010bf1ff80(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36060();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_168);
  _objc_release(puVar1);
  _objc_release(uVar11);
  func_0x000108d36070();
  func_0x000108d3608c();
  func_0x000108d360bc();
  _objc_release(lVar3);
  _objc_release(puVar6);
  func_0x000108d360c4();
  _objc_release(lVar2);
  _objc_release(puStack_170);
  _objc_release(uStack_178);
  _objc_release(puStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(lStack_198);
  _objc_release(uStack_1a0);
  _objc_release(lStack_1a8);
  _objc_release(lStack_1b0);
  _objc_release(lStack_1b8);
  _objc_release(lStack_1c0);
  _objc_release(lStack_1c8);
  _objc_release(lStack_1d0);
  _objc_release(lStack_1d8);
  _objc_release(lStack_1e0);
  _objc_release(lStack_1e8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1f8);
  _objc_release(puStack_200);
  _objc_release(lStack_208);
  _objc_release(puStack_210);
  _objc_release(puStack_218);
  _objc_release(lStack_220);
  _objc_release(puStack_228);
  _objc_release(puStack_230);
  _objc_release(lStack_238);
  _objc_release(puStack_240);
  _objc_release(puStack_248);
  _objc_release(lStack_250);
  _objc_release(puStack_258);
  _objc_release(puStack_260);
  _objc_release(lStack_268);
  _objc_release(puStack_270);
  _objc_release(puStack_278);
  _objc_release(lStack_280);
  _objc_release(puStack_288);
  _objc_release(puStack_290);
  _objc_release(lStack_298);
  _objc_release(puStack_2a0);
  _objc_initWeak(auStack_118,param_1);
  lVar2 = lStack_150;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126aebd8;
  func_0x00010bf1bcc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aebf0;
  _objc_alloc();
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80();
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_108d35a34;
  puStack_130 = &UNK_110865e48;
  puVar10 = auStack_118;
  _objc_copyWeak(auStack_120);
  puVar1 = puStack_160;
  _objc_retain(puStack_160);
  puStack_128 = puVar1;
  func_0x00010bf88c20(lVar2);
  func_0x000108d360c4();
  func_0x000108d360bc();
  func_0x000108d36070();
  func_0x000108d3608c();
  _objc_release(puStack_128);
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_118);
  _objc_release(puStack_160);
  _objc_release(lStack_2a8);
  _objc_release(lStack_2b0);
  _objc_release(puStack_2b8);
  _objc_release(uStack_158);
  lVar2 = lStack_150;
  _objc_release();
  func_0x000108d36138(uStack_90);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_120);
  _objc_destroyWeak(auStack_118);
  lVar3 = lVar2;
  __Unwind_Resume();
  pcStack_2c8 = FUN_108d35a34;
  puStack_2f0 = puVar5;
  lStack_2e8 = param_1;
  puStack_2e0 = puVar6;
  lStack_2d8 = lVar2;
  puStack_2d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_320 = 0xc2000000;
  pcStack_318 = FUN_108d35afc;
  puStack_310 = &UNK_110848218;
  _objc_copyWeak(auStack_2f8,lVar3 + 0x28);
  func_0x000108d36104();
  uVar11 = *(undefined8 *)(lVar3 + 0x20);
  puStack_308 = puVar10;
  func_0x000108d360cc();
  uStack_300 = uVar11;
  func_0x000107c312cc("APPSTORE",&puStack_328);
  _objc_release(uStack_300);
  _objc_release(puStack_308);
  _objc_destroyWeak(auStack_2f8);
  func_0x000108d3608c();
  return;
}



/* Entry: 108d35a34; end: 108d35afb;  */

void FUN_108d35a34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d35afc;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x000108d36104();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = param_2;
  func_0x000108d360cc();
  uStack_40 = uVar1;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  func_0x000108d3608c();
  return;
}



/* Entry: 108d35afc; end: 108d35b2f;  */

void FUN_108d35afc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be37440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d35b30; end: 108d35ddf; -[SCBitmojiLinkingView _imageLoaded:imageContainer:] */

/* WARNING: Possible PIC construction at 0x000108d35bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108d35bb8) */

void FUN_108d35b30(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  if (param_3 == 0) {
    func_0x000108d36138(*(undefined8 *)PTR____stack_chk_guard_11034bdc0);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    puVar1 = *(undefined **)(param_1 + 0x20);
    uVar2 = 0x3ff0000000000000;
  }
  else {
    _objc_retain(param_4);
    func_0x000108d360cc();
    _objc_alloc(puVar1);
    func_0x00010c01bf60();
    func_0x000108d36070();
    func_0x000108d36078(puVar1);
    func_0x00010c182220(puVar1);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,puVar1,PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d35de0; end: 108d35deb;  */

void FUN_108d35de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d35dec; end: 108d35e87; -[SCBitmojiLinkingView bitmojiIntroLabel] */

void FUN_108d35dec(undefined8 param_1)

{
  func_0x000108d360d4();
  func_0x000108d36094();
  func_0x00010c013de0();
  func_0x00010c21ad00();
  func_0x000108d3610c();
  func_0x00010c1c83a0(0x3fe6666666666666,param_1);
  func_0x000108d360ec();
  func_0x000108d360e0();
  func_0x000108d360f8();
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36060();
  func_0x00010c213180();
  func_0x000108d36070();
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef6198,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36060();
  func_0x00010c212f20();
  func_0x000108d36070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d35e88; end: 108d35f07; -[SCBitmojiLinkingView linkButton] */

void FUN_108d35e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25cc0(PTR_PTR_1126aec40,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c20eaa0();
  func_0x000108d397ac();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216260(puVar1,param_2,puVar2,0);
  func_0x000108d360bc();
  func_0x00010befbd60(puVar1,param_2,param_1,PTR_s_linkButtonPressed_11253d220,0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108d35f08; end: 108d35fb3; -[SCBitmojiLinkingView takenToBitmojiAppLabel] */

void FUN_108d35f08(undefined8 param_1,undefined8 param_2)

{
  func_0x000108d360d4();
  func_0x000108d36094();
  func_0x00010c013de0();
  func_0x00010c21ad00();
  func_0x000108d3610c();
  func_0x00010c1c83a0(0x3fe6666666666666,param_1);
  func_0x000108d360ec();
  func_0x000108d360e0();
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36060();
  func_0x00010c16e440();
  func_0x000108d36070();
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36060();
  func_0x00010c213180();
  func_0x000108d36070();
  func_0x000108d360f8();
  func_0x000108d397b8();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d36060();
  func_0x00010c212f20();
  func_0x000108d36070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108d35fb4; end: 108d36003; -[SCBitmojiLinkingView linkButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d35fb4(long param_1)

{
  param_1 = param_1 + _DAT_11277b4d8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf789a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d36004; end: 108d36013; -[SCBitmojiLinkingView setLinkButtonSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d36004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1beb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277b4dc),PTR_s_setLoading__11264d500);
  return;
}



/* Entry: 108d36014; end: 108d3605f; -[SCBitmojiLinkingView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d36014(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b4d8);
  _objc_storeStrong(param_1 + _DAT_11277b4e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b4dc,0);
  return;
}



/* Entry: 108d36060; end: 108d3614b;  */

void FUN_108d36060(void)

{
  return;
}



/* Entry: 108d3614c; end: 108d365c7; -[SCBitmojiUnlinkingFooterView initWithReuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108d3614c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = PTR_PTR_1126fe6c0;
  puVar1 = &uStack_d0;
  uStack_d0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithReuseIdentifier__1125eda10);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    FUN_108d3666c();
    lVar24 = (long)_DAT_11277b4e4;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar24);
    *(undefined **)((long)puVar1 + lVar24) = puVar2;
    _objc_release(uVar22);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar24));
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    FUN_108d3666c();
    lVar23 = (long)_DAT_11277b4e8;
    uVar22 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined **)((long)puVar1 + lVar23) = puVar2;
    _objc_release(uVar22);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d36698();
    func_0x00010c213180();
    func_0x000108d36690();
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef61b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d36698();
    func_0x00010c212f20();
    func_0x000108d36690();
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar23));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef61d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d36698();
    func_0x00010c161020();
    func_0x000108d36690();
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar23));
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)((long)puVar1 + lVar24));
    func_0x00010befbb60(puVar1);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar4;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar22;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar8;
    uVar9 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010bf493c0(0xc02e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar24);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010c2793a0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493c0(0x402e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar14;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar1;
    func_0x00010bf348e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar17;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar23);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010bf34860(puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar20;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar2);
    _objc_release(puVar21);
    func_0x000108d36690();
    _objc_release(puVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar22);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000108d36680();
  func_0x00010bf7d760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return puVar3;
}



/* Entry: 108d365c8; end: 108d365f7; -[SCBitmojiUnlinkingFooterView didTapUnlink] */

void FUN_108d365c8(undefined8 param_1)

{
  func_0x000108d36680();
  func_0x00010bf7d760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d365f8; end: 108d3660b; -[SCBitmojiUnlinkingFooterView delegate] */

void FUN_108d365f8(void)

{
  func_0x000108d36680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d3660c; end: 108d3661f; -[SCBitmojiUnlinkingFooterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d3660c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277b4ec,param_3);
  return;
}



/* Entry: 108d36620; end: 108d3666b; -[SCBitmojiUnlinkingFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d36620(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277b4ec);
  _objc_storeStrong(param_1 + _DAT_11277b4e4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277b4e8,0);
  return;
}



/* Entry: 108d3666c; end: 108d366a7;  */

void FUN_108d3666c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c013df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 108d366a8; end: 108d36edf; -[SCBitmojiUnlinkingView initWithBitmojiSelfieFetcher:selfieProvider:resourceDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d366a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000108d37838();
  func_0x000108d37818();
  func_0x000108d37884();
  puStack_e8 = PTR_PTR_1126fe6c8;
  puVar1 = &uStack_f0;
  uStack_f0 = param_1;
  func_0x000108d377f0(puVar1,PTR_s_initWithFrame__1125e2948);
  _objc_msgSendSuper2();
  if (puVar1 != (undefined8 *)0x0) {
    lVar30 = (long)_DAT_11277b4f0;
    func_0x000108d37818();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar30);
    *(long *)((long)puVar1 + lVar30) = param_3;
    _objc_release(uVar2);
    lVar30 = (long)_DAT_11277b4f4;
    func_0x000108d37818();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined8 *)((long)puVar1 + lVar30) = param_4;
    _objc_release(uVar2);
    lVar31 = (long)_DAT_11277b4f8;
    func_0x000108d37884();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar31);
    *(undefined8 *)((long)puVar1 + lVar31) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277b4fc);
    *(undefined **)((long)puVar1 + (long)_DAT_11277b4fc) = puVar3;
    func_0x000108d37850(uVar2);
    _objc_initWeak(auStack_f8,puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ae00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d378bc();
    _objc_copyWeak(auStack_100,auStack_f8);
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    func_0x000108d377dc();
    func_0x000108d37810();
    func_0x000108d377d4();
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d37868(puVar1);
    func_0x000108d377d4();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x000108d377f0();
    func_0x00010c013de0();
    lVar31 = (long)_DAT_11277b500;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar31);
    *(undefined **)((long)puVar1 + lVar31) = puVar3;
    func_0x000108d37850(uVar2);
    func_0x00010c08c0e0(*(undefined8 *)((long)puVar1 + lVar31));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x405e000000000000);
    func_0x000108d377d4();
    func_0x000108d378a8(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d37868(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x000108d377d4();
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar31));
    func_0x000108d37870();
    puVar3 = PTR_PTR_1126afd30;
    _objc_alloc();
    func_0x00010bfffc60();
    lVar32 = (long)_DAT_11277b504;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar32);
    *(undefined **)((long)puVar1 + lVar32) = puVar3;
    func_0x000108d37850(uVar2);
    func_0x000108d378a8(*(undefined8 *)((long)puVar1 + lVar32));
    func_0x000108d37870();
    puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
    _objc_alloc();
    func_0x000108d377f0();
    func_0x00010c013de0();
    lVar30 = (long)_DAT_11277b508;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar30);
    *(undefined **)((long)puVar1 + lVar30) = puVar3;
    func_0x000108d37850(uVar2);
    func_0x000108d378a8(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d37868(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x000108d377d4();
    func_0x00010c189840(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010c1f7b20(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),
                        *(undefined8 *)((long)puVar1 + lVar30));
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcde0(*(undefined8 *)((long)puVar1 + lVar30));
    func_0x000108d377d4();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar30);
    _objc_opt_class(PTR__OBJC_CLASS___UITableViewCell_1126afcb8);
    func_0x00010c125fe0(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar30);
    _objc_opt_class(PTR_PTR_1126dbd38);
    func_0x00010c126040(uVar2);
    func_0x000108d37870();
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf493c0(0x4045000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010c2a5060();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bf49420(0x406e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar9;
    uVar10 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf49420(0x406e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar11;
    uVar12 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar14;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar32);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar15;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar17;
    uVar18 = *(undefined8 *)((long)puVar1 + lVar32);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar18;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar20;
    uVar21 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar21;
    uVar23 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar23;
    func_0x00010bf493c0(0xc020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar25;
    uVar26 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar1;
    func_0x00010c149040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar26;
    func_0x00010bf493c0(0xc044000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar2;
    uVar28 = *(undefined8 *)((long)puVar1 + lVar30);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar31);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493c0(0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = uVar28;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(puVar29);
    func_0x000108d377dc();
    _objc_release(uVar2);
    func_0x000108d37810();
    func_0x000108d377d4();
    _objc_release(puVar27);
    func_0x000108d37820();
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(puVar24);
    _objc_release(uVar23);
    _objc_release(uVar21);
    _objc_release(puVar22);
    func_0x000108d3788c();
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(puVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    func_0x000108d37804();
    _objc_destroyWeak(auStack_f8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000108d37804();
  _objc_destroyWeak(auStack_f8);
  __Unwind_Resume(param_3);
  puVar1 = (undefined8 *)(param_3 + 0x20);
  _objc_loadWeakRetained(puVar1);
  func_0x00010bedf960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 108d36ee0; end: 108d36f07;  */

void FUN_108d36ee0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d36f08; end: 108d36f0f; -[SCBitmojiUnlinkingView numberOfSectionsInTableView:] */

undefined8 FUN_108d36f08(void)

{
  return 1;
}



/* Entry: 108d36f10; end: 108d36f17; -[SCBitmojiUnlinkingView tableView:numberOfRowsInSection:] */

undefined8 FUN_108d36f10(void)

{
  return 3;
}



/* Entry: 108d36f18; end: 108d37177; -[SCBitmojiUnlinkingView tableView:cellForRowAtIndexPath:] */

void FUN_108d36f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010bf6e060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  func_0x000108d37820();
  func_0x000108d377bc();
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_3);
  func_0x000108d377bc();
  func_0x00010c161260(param_3);
  func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  func_0x000108d37820();
  func_0x000108d377bc();
  func_0x00010c142240();
  func_0x000108d377dc();
  if (param_4 == 2) {
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110df9618,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d378b0();
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d377e4();
    func_0x000108d377bc();
    func_0x000108d377dc();
    func_0x00010c26c280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0();
    func_0x000108d377bc();
  }
  else if (param_4 == 1) {
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef6278,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d378b0();
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d377e4();
    func_0x000108d377bc();
    func_0x000108d377dc();
    func_0x000108d37878(&PTR_PTR_110ac2cf8);
  }
  else {
    if (param_4 != 0) goto LAB_108d37160;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ef6258,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d378b0();
    func_0x00010c26c280();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108d377e4();
    func_0x000108d377bc();
    func_0x000108d377dc();
    func_0x000108d37878(&PTR_PTR_110ac2d00);
  }
  func_0x00010be11b00(param_1);
LAB_108d37160:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108d37178; end: 108d3717b; -[SCBitmojiUnlinkingView tableView:heightForRowAtIndexPath:] */

undefined8 FUN_108d37178(void)

{
  return 0x404c000000000000;
}



/* Entry: 108d3717c; end: 108d37237; -[SCBitmojiUnlinkingView tableView:didSelectRowAtIndexPath:] */

void FUN_108d3717c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000108d37884();
  uVar1 = param_3;
  func_0x00010bf33b80(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e880(param_3,param_2,param_4,1);
  func_0x000108d377dc();
  func_0x00010c142240();
  func_0x000108d377bc();
  if (param_4 == 2) {
    func_0x000108d377c4();
    func_0x000108d37858();
    func_0x00010bf78880();
  }
  else if (param_4 == 1) {
    func_0x000108d377c4();
    func_0x000108d37858();
    func_0x00010bf78900();
  }
  else {
    if (param_4 != 0) goto LAB_108d37224;
    func_0x000108d377c4();
    func_0x000108d37858();
    func_0x00010bf78840();
  }
  func_0x000108d377dc();
LAB_108d37224:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


