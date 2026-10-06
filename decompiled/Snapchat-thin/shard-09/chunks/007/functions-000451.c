/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106feb564; end: 106feb5b7; -[SCOnboardingTooltip needsToBeCompleted] */

void FUN_106feb564(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_3);
  _objc_exception_throw();
  puVar3 = puVar2 + 8;
  _objc_loadWeakRetained();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(puVar3);
    _objc_release(puVar4);
    iVar1 = (int)*(undefined8 *)(puVar2 + 0x30);
    func_0x00010c13b660();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (iVar1 != 0) {
      func_0x00010c15b1c0(puVar3);
      func_0x00010c292b00(puVar4);
      func_0x00010becf9e0(puVar2);
    }
    func_0x00010c107020(*(undefined8 *)(puVar2 + 0x30));
    dVar8 = 1.79769313486232e+308;
    if (param_1 != 1.79769313486232e+308) {
      puVar4 = puVar2;
      func_0x00010c273d60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      param_1 = 1.60807493534087e-314;
      func_0x00010c0bc060();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = puVar2;
      func_0x00010c273d60(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(puVar4);
    }
    puVar4 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    dVar7 = param_1;
    dVar9 = dVar8;
    _objc_release(puVar4);
    func_0x00010becf9a0(puVar2);
    puVar4 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(dVar7 / param_1,dVar9 / dVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf9c0(puVar2);
    func_0x00010c21a1e0(puVar4);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a180(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27bb80(*(undefined8 *)(puVar2 + 0x30));
    func_0x00010c21a1c0(puVar4);
    _objc_release(puVar4);
    puVar4 = puVar2;
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010c0bc060(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010c273d60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106feb5b8; end: 106feb907; -[SCOnboardingTooltip positionAtPoint:trianglePosition:] */

void FUN_106feb5b8(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lVar2 = param_3 + 8;
  dVar8 = param_1;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(lVar2,param_4,lVar3);
    _objc_release(lVar3);
    iVar1 = (int)*(undefined8 *)(param_3 + 0x30);
    func_0x00010c13b660();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    lVar3 = param_5;
    if (iVar1 != 0) {
      lVar3 = lVar2;
      func_0x00010c15b1c0(lVar2);
      func_0x00010c292b00(puVar4,param_4,lVar3);
      lVar3 = param_3;
      func_0x00010becf9e0(param_3,param_4,param_5,puVar4 == (undefined *)0x1);
    }
    func_0x00010c107020(*(undefined8 *)(param_3 + 0x30));
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    dVar10 = 1.79769313486232e+308;
    if (dVar8 != 1.79769313486232e+308) {
      lVar5 = param_3;
      func_0x00010c273d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = puVar4;
      dVar8 = 1.60807493534087e-314;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106feb908;
      puStack_90 = &UNK_1108471b0;
      lStack_88 = param_3;
      func_0x00010c0bc060();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      lVar5 = param_3;
      func_0x00010c273d60(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08cdc0();
      _objc_release(lVar5);
    }
    lVar5 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0699c0();
    dVar9 = dVar8;
    dVar11 = dVar10;
    _objc_release(lVar5);
    func_0x00010becf9a0(param_3,param_4,lVar3);
    lVar5 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167d20(dVar9 / dVar8,dVar11 / dVar10);
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf9c0(param_3,param_4,lVar3);
    func_0x00010c21a1e0(lVar5,param_4,lVar3);
    _objc_release(lVar5);
    lVar3 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf13d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21a180(lVar3,param_4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c27bb80(uVar7);
    func_0x00010c21a1c0(lVar3,param_4,uVar7);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar4;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_106feb9a4;
    puStack_c8 = &UNK_11084fbb8;
    _objc_retain(lVar2);
    lStack_c0 = lVar2;
    dStack_b8 = (param_1 - dVar9) - dVar8 * (0.5 - dVar9 / dVar8);
    dStack_b0 = (param_2 - dVar11) - dVar10 * (0.5 - dVar11 / dVar10);
    func_0x00010c0bc060(lVar3,param_4,&puStack_e0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c273d60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(param_3);
    _objc_release(lStack_c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106feb908; end: 106feb9a3;  */

void FUN_106feb908(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c107020(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106feb9a4; end: 106febb2b;  */

void FUN_106feb9a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x28));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(param_1 + 0x30));
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106febb2c; end: 106febb4b; -[SCOnboardingTooltip _trianglePositionRespectingInterfaceLayoutDirection:isRTL:] */

ulong FUN_106febb2c(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  if ((param_4 != 0) && (param_3 < 10)) {
    param_3 = *(ulong *)(&UNK_10de1e4c8 + param_3 * 8);
  }
  return param_3;
}



/* Entry: 106febb4c; end: 106febb67; -[SCOnboardingTooltip _triangleOffsetForTrianglePosition:] */

undefined8 FUN_106febb4c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 < 6) {
    uVar1 = *(undefined8 *)(&UNK_10de1e518 + param_3 * 8);
  }
  return uVar1;
}



/* Entry: 106febb68; end: 106febcdb; -[SCOnboardingTooltip _playShowAnimation] */

void FUN_106febb68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126c4230;
  func_0x00010bf04100(PTR_PTR_1126c4230,param_2,&PTR____CFConstantStringClassReference_110ee42b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(0x3fe0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c193240(0x408f400000000000,puVar1);
  func_0x00010c193200(0x4042000000000000,puVar1);
  uVar3 = param_1;
  func_0x00010c273d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a40();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c273d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106febcdc;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x00010bf03400(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 106febcdc; end: 106febd13;  */

void FUN_106febcdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c273d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106febd14; end: 106febe83; -[SCOnboardingTooltip _playHideAnimation] */

void FUN_106febd14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_PTR_1126c4230;
  func_0x00010bf04100(PTR_PTR_1126c4230,param_2,&PTR____CFConstantStringClassReference_110ee42b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(0x3fe0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216920(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c193240(0x408f400000000000,puVar1);
  func_0x00010c193200(0x4042000000000000,puVar1);
  uVar3 = param_1;
  func_0x00010c273d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a40();
  _objc_release(uVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106febe84;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x106febebc;
  puStack_68 = &UNK_110841f20;
  uStack_60 = param_1;
  uStack_38 = param_1;
  func_0x00010bf03420(0x3fc3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_58,
                      &puStack_80);
  _objc_release(puVar1);
  return;
}



/* Entry: 106febe84; end: 106febeef;  */

void FUN_106febe84(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c273d60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106febef0; end: 106fec033; -[SCOnboardingTooltip _triangleFrameForTrianglePosition:] */

double FUN_106febef0(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = param_2;
  func_0x00010c273d60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0();
  dVar3 = param_1;
  _objc_release(uVar2);
  func_0x00010becf9c0(param_2,param_3,param_4);
  if (param_4 < 4) {
    if (param_4 < 2) {
      if (param_4 == 0) {
        return dVar3;
      }
      if (param_4 != 1) {
        return 0.0;
      }
      param_1 = param_1 * 0.5;
    }
    else if (param_4 != 2) {
      bVar1 = param_4 == 3;
      goto LAB_106febf9c;
    }
    dVar3 = param_1 + dVar3;
  }
  else {
    if (6 < param_4) {
      if (param_4 == 7) {
        return -8.0;
      }
      if (param_4 != 8) {
        return 0.0;
      }
      return param_1 + 8.0;
    }
    if (param_4 == 4) {
      return param_1 * 0.5 + dVar3;
    }
    bVar1 = param_4 == 5;
    dVar3 = param_1 + dVar3;
LAB_106febf9c:
    if (!bVar1) {
      dVar3 = 0.0;
    }
  }
  return dVar3;
}



/* Entry: 106fec034; end: 106fec293; -[SCOnboardingTooltip _updateTooltip:] */

void FUN_106fec034(double param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010bf13d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_3 + 0x10),param_4,lVar1);
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010bf13d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a180(*(undefined8 *)(param_3 + 0x10),param_4,lVar1);
  _objc_release(lVar1);
  func_0x00010c22a040(param_5);
  uVar4 = (ulong)(uint)(float)param_1;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(uVar4);
  _objc_release(uVar2);
  func_0x00010c22a0e0(param_5);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(uVar4);
  _objc_release(uVar2);
  func_0x00010c229fe0(param_5);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(uVar4,param_2);
  _objc_release(uVar2);
  lVar1 = param_5;
  func_0x00010beecec0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0(*(undefined8 *)(param_3 + 0x10),param_4,lVar1);
  _objc_release(lVar1);
  lVar3 = *(long *)(param_3 + 0x10);
  func_0x00010beecec0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  func_0x00010c1af000(*(undefined8 *)(param_3 + 0x10),param_4,lVar1 != 0);
  _objc_release(lVar3);
  lVar1 = param_5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = param_5;
  if (lVar1 == 0) {
    func_0x00010bf0e540(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)(param_3 + 0x10),param_4,lVar3);
  }
  else {
    lVar1 = param_5;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_3 + 0x10),param_4,lVar1);
    _objc_release(lVar1);
    lVar1 = param_5;
    func_0x00010bfb3a80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2133e0(*(undefined8 *)(param_3 + 0x10),param_4,lVar1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c26b700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(uVar2,param_4,lVar3);
  }
  _objc_release(lVar3);
  lVar1 = param_5;
  func_0x00010c0def20(param_5);
  func_0x00010c2135c0(*(undefined8 *)(param_3 + 0x10),param_4,lVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  lVar1 = param_5;
  func_0x00010c26b7a0(param_5);
  func_0x00010c213040(uVar2,param_4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106fec294; end: 106fec297; -[SCOnboardingTooltip _tap:] */

void FUN_106fec294(void)

{
  return;
}



/* Entry: 106fec298; end: 106fec29f; -[SCOnboardingTooltip duration] */

undefined8 FUN_106fec298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fec2a0; end: 106fec2a7; -[SCOnboardingTooltip setDuration:] */

void FUN_106fec2a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 106fec2a8; end: 106fec2bf; -[SCOnboardingTooltip view] */

void FUN_106fec2a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fec2c0; end: 106fec2c7; -[SCOnboardingTooltip isShowing] */

undefined1 FUN_106fec2c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106fec2c8; end: 106fec2cf; -[SCOnboardingTooltip activated] */

undefined1 FUN_106fec2c8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 106fec2d0; end: 106fec2d7; -[SCOnboardingTooltip setActivated:] */

void FUN_106fec2d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 106fec2d8; end: 106fec2df; -[SCOnboardingTooltip appearance] */

undefined8 FUN_106fec2d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fec2e0; end: 106fec323; -[SCOnboardingTooltip .cxx_destruct] */

void FUN_106fec2e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106fec324; end: 106fec3bb; -[SCOnboardingTooltipAppearance initWithText:] */

undefined8 FUN_106fec324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  func_0x00010c2a4b20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41580(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xa4ff);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0516e0(param_1,param_2,param_3,puVar1,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106fec3bc; end: 106fec473; -[SCOnboardingTooltipAppearance initWithText:textColor:backgroundColor:] */

undefined8
FUN_106fec3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf6d680(0x4028000000000000,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051700(0x3fb999999999999a,param_1,param_2,param_3,param_4,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 106fec474; end: 106fec483; -[SCOnboardingTooltipAppearance initWithText:textColor:backgroundColor:font:shadowOpacity:] */

void FUN_106fec474(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c051730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,0x4018000000000000,0,0xc008000000000000,param_2,
             PTR_s_initWithText_textColor_backgroun_1125f1fd0);
  return;
}



/* Entry: 106fec484; end: 106fec5bf; -[SCOnboardingTooltipAppearance initWithText:textColor:backgroundColor:font:shadowOpacity:shadowRadius:shadowOffset:] */

undefined1 *
FUN_106fec484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f8360;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = param_2;
    *(undefined8 *)((long)puVar1 + 0x68) = param_3;
    *(undefined8 *)((long)puVar1 + 0x70) = param_4;
    *(undefined2 *)((long)puVar1 + 8) = 1;
    *(undefined8 *)((long)puVar1 + 0x58) = 1;
    *(undefined8 *)((long)puVar1 + 0x50) = 1;
    *(undefined8 *)((long)puVar1 + 0x60) = 0x7fefffffffffffff;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 106fec5c0; end: 106fec6a3; -[SCOnboardingTooltipAppearance initWithAttributedString:backgroundColor:shadowOpacity:] */

undefined1 *
FUN_106fec5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f8360;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    *(undefined8 *)((long)puVar1 + 0x40) = 0x4018000000000000;
    *(undefined8 *)((long)puVar1 + 0x70) = 0xc008000000000000;
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    *(undefined2 *)((long)puVar1 + 8) = 1;
    *(undefined8 *)((long)puVar1 + 0x58) = 1;
    *(undefined8 *)((long)puVar1 + 0x50) = 1;
    *(undefined8 *)((long)puVar1 + 0x60) = 0x7fefffffffffffff;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106fec6a4; end: 106fec6ab; -[SCOnboardingTooltipAppearance text] */

undefined8 FUN_106fec6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fec6ac; end: 106fec6b3; -[SCOnboardingTooltipAppearance attributedText] */

undefined8 FUN_106fec6ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fec6b4; end: 106fec6bb; -[SCOnboardingTooltipAppearance textColor] */

undefined8 FUN_106fec6b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fec6bc; end: 106fec6c3; -[SCOnboardingTooltipAppearance backgroundColor] */

undefined8 FUN_106fec6bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fec6c4; end: 106fec6cb; -[SCOnboardingTooltipAppearance font] */

undefined8 FUN_106fec6c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fec6cc; end: 106fec6d3; -[SCOnboardingTooltipAppearance shadowOpacity] */

undefined8 FUN_106fec6cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fec6d4; end: 106fec6db; -[SCOnboardingTooltipAppearance shadowRadius] */

undefined8 FUN_106fec6d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106fec6dc; end: 106fec6e3; -[SCOnboardingTooltipAppearance shadowOffset] */

undefined1  [16] FUN_106fec6dc(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x68);
}



/* Entry: 106fec6e4; end: 106fec6eb; -[SCOnboardingTooltipAppearance respectsRTLLayout] */

undefined1 FUN_106fec6e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106fec6ec; end: 106fec6f3; -[SCOnboardingTooltipAppearance setRespectsRTLLayout:] */

void FUN_106fec6ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106fec6f4; end: 106fec6fb; -[SCOnboardingTooltipAppearance accessibilityIdentifier] */

undefined8 FUN_106fec6f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106fec6fc; end: 106fec703; -[SCOnboardingTooltipAppearance setAccessibilityIdentifier:] */

void FUN_106fec6fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fec704; end: 106fec70b; -[SCOnboardingTooltipAppearance triangleHidden] */

undefined1 FUN_106fec704(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106fec70c; end: 106fec713; -[SCOnboardingTooltipAppearance setTriangleHidden:] */

void FUN_106fec70c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 106fec714; end: 106fec71b; -[SCOnboardingTooltipAppearance numberOfLines] */

undefined8 FUN_106fec714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106fec71c; end: 106fec723; -[SCOnboardingTooltipAppearance setNumberOfLines:] */

void FUN_106fec71c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106fec724; end: 106fec72b; -[SCOnboardingTooltipAppearance textAlignment] */

undefined8 FUN_106fec724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106fec72c; end: 106fec733; -[SCOnboardingTooltipAppearance setTextAlignment:] */

void FUN_106fec72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 106fec734; end: 106fec73b; -[SCOnboardingTooltipAppearance preferredWidth] */

undefined8 FUN_106fec734(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106fec73c; end: 106fec743; -[SCOnboardingTooltipAppearance setPreferredWidth:] */

void FUN_106fec73c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 106fec744; end: 106fec7a3; -[SCOnboardingTooltipAppearance .cxx_destruct] */

void FUN_106fec744(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106fec7a4; end: 106fec7a7; -[SCOnboardingTooltipManager setupTooltips:] */

void FUN_106fec7a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2172b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTooltips__1126636d0);
  return;
}



/* Entry: 106fec7a8; end: 106fec81f; -[SCOnboardingTooltipManager addTooltip:] */

void FUN_106fec7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c274100(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2172a0(param_1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fec820; end: 106fec89b; -[SCOnboardingTooltipManager showTooltip] */

void FUN_106fec820(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 8);
  _objc_retain(lVar3);
  lVar1 = param_2;
  func_0x00010bfc8000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(long *)(param_2 + 8) = lVar1;
  _objc_release(uVar2);
  if ((*(long *)(param_2 + 8) != 0 && lVar3 != *(long *)(param_2 + 8)) &&
     (func_0x00010bf8b160(lVar3), param_1 == 0.0)) {
    func_0x00010bfe1560(lVar3);
  }
  func_0x00010c235840(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106fec89c; end: 106fec8ab; -[SCOnboardingTooltipManager hideTooltip] */

void FUN_106fec89c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_1 + 8),PTR_s_hide_1125d5f18);
    return;
  }
  return;
}



/* Entry: 106fec8ac; end: 106fec90b; -[SCOnboardingTooltipManager markTooltipCompleted:] */

void FUN_106fec8ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010c0bb360(param_3);
  lVar1 = *(long *)(param_1 + 8);
  _objc_release(param_3);
  if (param_3 != lVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideTooltip_1125d64c8);
  return;
}



/* Entry: 106fec90c; end: 106feca17; -[SCOnboardingTooltipManager getNextAvailableTooltip] */

ulong FUN_106fec90c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(ulong *)(lStack_108 + lVar6 * 8);
        uVar2 = uVar4;
        func_0x00010c0d74a0();
        if ((uVar2 & 1) != 0) {
          _objc_retain(uVar4);
          goto LAB_106fec9d8;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
  uVar4 = 0;
LAB_106fec9d8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar3 + 8);
}



/* Entry: 106feca18; end: 106feca1f; -[SCOnboardingTooltipManager currentTooltip] */

undefined8 FUN_106feca18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106feca20; end: 106feca27; -[SCOnboardingTooltipManager tooltips] */

undefined8 FUN_106feca20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106feca28; end: 106feca57; -[SCOnboardingTooltipManager setTooltips:] */

void FUN_106feca28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106feca58; end: 106feca87; -[SCOnboardingTooltipManager .cxx_destruct] */

void FUN_106feca58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106feca88; end: 106feca8b; -[SCCameraViewController addUIAutomationOnlyUsedHelpers] */

void FUN_106feca88(void)

{
  return;
}



/* Entry: 106feca8c; end: 106feca8f; -[SCCameraViewController addPermissionHandlerNoOpButton] */

void FUN_106feca8c(void)

{
  return;
}



/* Entry: 106feca90; end: 106fecb73; -[SCCameraAdaptiveLayoutHandler initWithCameraView:containingView:isLandscapeEnabled:cameraViewLayoutGuide:] */

undefined1 *
FUN_106feca90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8370;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x29) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    func_0x00010beabac0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fecb74; end: 106feccdb; -[SCCameraAdaptiveLayoutHandler viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_106fecb74(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  if ((((*(char *)(param_3 + 0x29) == '\x01') &&
       (lVar1 = param_3, func_0x00010be44d00(), (int)lVar1 == 0)) && (0.0 < param_1)) &&
     (0.0 < param_2)) {
    func_0x00010bea4ee0(param_3);
    func_0x00010bed5ae0(param_1,param_2,param_3);
    if (param_5 == 0) {
      func_0x00010bee2920(param_3);
      func_0x00010bea4ee0(param_3);
    }
    else {
      _objc_initWeak(auStack_48,param_3);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_106feccdc;
      puStack_58 = &UNK_110988410;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_copyWeak(auStack_78,auStack_48);
      func_0x00010bf02c20(param_5);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106feccdc; end: 106fecd37;  */

void FUN_106feccdc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fecd38; end: 106fecd3f; -[SCCameraAdaptiveLayoutHandler _currentInterfaceOrientation] */

undefined * FUN_106fecd38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar2 = *(undefined **)(param_1 + 0x20);
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar10 = puVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010c2a72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (puVar3 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar10;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar5 = puVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar10 = (undefined *)0x0;
    puVar9 = puVar4;
    if (puVar5 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar4);
          }
          puVar10 = *(undefined **)((long)puVar11 * 8);
          puVar6 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
          _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
          puVar7 = puVar10;
          _objc_opt_isKindOfClass(puVar10,puVar6);
          if (((ulong)puVar7 & 1) != 0) {
            puVar6 = puVar10;
            func_0x00010bef0360();
            if (puVar6 == (undefined *)0x0) {
              func_0x00010c0690e0(puVar10);
              _objc_release(puVar4);
              goto code_r0x00010b816cf0;
            }
            if (puVar9 == (undefined *)0x0) {
              _objc_retain(puVar10);
              puVar9 = puVar10;
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        puVar5 = puVar4;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
      _objc_release(puVar4);
      if (puVar9 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        goto code_r0x00010b816cf8;
      }
      puVar10 = puVar9;
      func_0x00010c0690e0(puVar9);
    }
code_r0x00010b816cf0:
    _objc_release(puVar9);
  }
  else {
    puVar10 = puVar3;
    func_0x00010c0690e0(puVar3);
  }
code_r0x00010b816cf8:
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar10);
    return puVar10;
  }
  return puVar10;
}



/* Entry: 106fecd40; end: 106fecd73; -[SCCameraAdaptiveLayoutHandler _deactivateAllConstraints] */

/* WARNING: Possible PIC construction at 0x000106fecd5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106fecd60) */

void FUN_106fecd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf65bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_deactivateConstraints__1125b70a0,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 106fecd74; end: 106fecd7b; -[SCCameraAdaptiveLayoutHandler _isTransitioning] */

undefined1 FUN_106fecd74(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 106fecd7c; end: 106fecd83; -[SCCameraAdaptiveLayoutHandler _setIsTransitioning:] */

void FUN_106fecd7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106fecd84; end: 106fed913; -[SCCameraAdaptiveLayoutHandler _setupConstraints] */

/* WARNING: Possible PIC construction at 0x000106fecf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106fed1b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106fed8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106fecf84) */
/* WARNING: Removing unreachable block (ram,0x000106fed1bc) */
/* WARNING: Removing unreachable block (ram,0x000106fed8a8) */
/* WARNING: Removing unreachable block (ram,0x000106fed578) */
/* WARNING: Removing unreachable block (ram,0x000106fed8b8) */
/* WARNING: Removing unreachable block (ram,0x000106fed910) */
/* WARNING: Removing unreachable block (ram,0x000106fed93c) */
/* WARNING: Removing unreachable block (ram,0x000106fed940) */
/* WARNING: Removing unreachable block (ram,0x000106fed948) */
/* WARNING: Removing unreachable block (ram,0x000106fed8f0) */

void FUN_106fecd84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  func_0x00010c219b60(uVar4);
  _objc_opt_new();
  func_0x00010bef9680(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c149040(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_activateConstraints__1125997d8,puVar2);
  return;
}



/* Entry: 106fed914; end: 106fed95f; -[SCCameraAdaptiveLayoutHandler _updateConstraints:] */

void FUN_106fed914(double param_1,double param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bdf8200();
  lVar1 = 0x10;
  if (param_1 <= param_2) {
    lVar1 = 8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,PTR_s_activateConstraints__1125997d8,
             *(undefined8 *)(param_3 + lVar1));
  return;
}



/* Entry: 106fed960; end: 106fed9db; -[SCCameraAdaptiveLayoutHandler _updateTransformForCameraView] */

void FUN_106fed960(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x00010bdf6b60();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  }
  else {
    func_0x000109046b78(&uStack_50,0,lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  func_0x00010c219960(uVar2);
  return;
}



/* Entry: 106fed9dc; end: 106feda2f; -[SCCameraAdaptiveLayoutHandler .cxx_destruct] */

void FUN_106fed9dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106feda30; end: 106feda47; -[SCCameraViewController shouldBeSilentlyPresentedAndPauseOpera] */

uint FUN_106feda30(uint param_1)

{
  func_0x00010c075580();
  return param_1 ^ 1;
}



/* Entry: 106feda48; end: 106feda4b; -[SCCameraViewController presentingViewControllerForMusicFeature:] */

void FUN_106feda48(void)

{
  return;
}



/* Entry: 106feda4c; end: 106feda53; -[SCCameraViewController musicFeature:setVolumeButtonHandlingEnabled:] */

void FUN_106feda4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c224250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setVolumeButtonHandlingEnabled__112666ab8,param_4);
  return;
}



/* Entry: 106feda54; end: 106feda5f; -[SCCameraViewController musicFeatureDidPresentMusicPicker:style:] */

void FUN_106feda54(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopCameraForModalPresentation_11258e548);
  return;
}



/* Entry: 106feda60; end: 106feda6b; -[SCCameraViewController musicFeatureDidDismissMusicPicker:style:] */

void FUN_106feda60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebf9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startCameraForModalDismissal_11258d818);
  return;
}



/* Entry: 106feda6c; end: 106fedb5b; -[SCCameraViewController musicFeatureDidPresentMusicEditor:] */

void FUN_106feda6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06b680();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c0e5420(param_1,param_2,1);
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214120();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106fedb5c; end: 106fedc4b; -[SCCameraViewController musicFeatureDidDismissMusicEditor:] */

void FUN_106fedb5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c06b680();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c0e5420(param_1,param_2,0);
    func_0x00010bf29620(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214120();
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106fedc4c; end: 106fedd83; -[SCCameraViewController musicFeature:didUpdateSelection:] */

void FUN_106fedc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ca160();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf7f1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b720();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c270700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5400();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fedd84; end: 106fedd87; -[SCCameraViewController scanDelegate] */

void FUN_106fedd84(void)

{
  return;
}



/* Entry: 106fedd88; end: 106feddf3; -[SCCameraViewController setAllCameraUIVisible:animated:] */

void FUN_106fedd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c1767a0();
  func_0x00010c1773c0(param_1,param_2,param_3,param_4);
  func_0x00010bf2a1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166ca0(0x3fd3333333333333);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106feddf4; end: 106feded3; -[SCCameraViewController setCameraHeaderVisible:animated:] */

void FUN_106feddf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_1126a5648;
  _objc_retain();
  uVar2 = param_1;
  func_0x00010010fab4(param_1,puVar1);
  uVar3 = param_1;
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  uVar2 = uVar3;
  func_0x00010bfdf5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar2);
  func_0x00010bf29620(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010bf2b3c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166ea0();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106feded4; end: 106fedf4b; -[SCCameraViewController setCameraToolbarVisible:animated:] */

void FUN_106feded4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2b3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166ea0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fedf4c; end: 106fedf4f; -[SCCameraViewController shakeToReportDelegate] */

void FUN_106fedf4c(void)

{
  return;
}



/* Entry: 106fedf50; end: 106fee04b; -[SCCameraViewController defaultProjectNameV2] */

void FUN_106fedf50(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010bf29b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef0a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf29620();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c15b000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c071800();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x00010c076400();
  puVar6 = PTR_PTR_1126aedf8;
  if (((int)param_1 == 0) || (uVar2 == 0 && (uVar5 & 1) == 0)) {
    func_0x00010bf28e60(PTR_PTR_1126aedf8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106fee04c; end: 106fee0cb; -[SCCameraViewController defaultSubProjectName] */

void FUN_106fee04c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  
  lVar1 = param_1;
  func_0x00010bf29b80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef0a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c076400();
  ppuVar3 = (undefined **)0x0;
  if (((int)param_1 != 0) && (lVar2 != 0)) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110dcb5d8;
    _objc_retain(&PTR____CFConstantStringClassReference_110dcb5d8);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106fee0cc; end: 106fee20f; -[SCCameraViewController jiraMetaInfo] */

void FUN_106fee0cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010bf29980();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf299a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf660a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e96a38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c076400();
  if ((int)lVar1 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x00010bf29b80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bef0a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(param_1);
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
    if (lVar1 != 0) {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e96a58);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106fee210; end: 106fee2d3;  */

undefined8
FUN_106fee210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
  uVar3 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uVar1 = param_1;
  _CGRectGetWidth();
  _CGRectGetMaxY(param_1,param_2,param_3,param_4);
  if (param_6 != 0) {
    _CGRectInset(uVar2,uVar3,uVar1,param_1,0,param_5 * -0.5);
    _CGRectOffset();
  }
  return uVar2;
}



/* Entry: 106fee2d4; end: 106fee2db; -[SCCameraViewControllerInternalState searchEventAnnouncerCreator] */

undefined8 FUN_106fee2d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fee2dc; end: 106fee2e3; -[SCCameraViewControllerInternalState tabBarGradientView] */

undefined8 FUN_106fee2dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fee2e4; end: 106fee313; -[SCCameraViewControllerInternalState setTabBarGradientView:] */

void FUN_106fee2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee314; end: 106fee31b; -[SCCameraViewControllerInternalState navBarGradientView] */

undefined8 FUN_106fee314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fee31c; end: 106fee34b; -[SCCameraViewControllerInternalState setNavBarGradientView:] */

void FUN_106fee31c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee34c; end: 106fee353; -[SCCameraViewControllerInternalState cameraTopBlurView] */

undefined8 FUN_106fee34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106fee354; end: 106fee383; -[SCCameraViewControllerInternalState setCameraTopBlurView:] */

void FUN_106fee354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee384; end: 106fee38b; -[SCCameraViewControllerInternalState cameraBottomBlurView] */

undefined8 FUN_106fee384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106fee38c; end: 106fee3bb; -[SCCameraViewControllerInternalState setCameraBottomBlurView:] */

void FUN_106fee38c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee3bc; end: 106fee3eb; -[SCCameraViewControllerInternalState setVolumeButtonHandler:] */

void FUN_106fee3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fee3ec; end: 106fee3f3; -[SCCameraViewControllerInternalState duringLongPress] */

undefined1 FUN_106fee3ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106fee3f4; end: 106fee3fb; -[SCCameraViewControllerInternalState setDuringLongPress:] */

void FUN_106fee3f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106fee3fc; end: 106fee403; -[SCCameraViewControllerInternalState setOverlayItemsYOffset:] */

void FUN_106fee3fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}


