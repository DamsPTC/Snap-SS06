/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f85fac; end: 103f860a7; -[SCLensCarouselPresenterScope initWithCarouselContainer:layoutProvider:attributionProvider:defaultSelectedLensProvider:hapticsManager:tapHandlerPolicy:externalScrollSource:delegate:] */

undefined8
FUN_103f85fac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  uVar1 = param_7;
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_9);
  _swift_unknownObjectRetain(param_10);
  uVar2 = param_3;
  FUN_103f8618c(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_9);
  _swift_unknownObjectRelease(param_10);
  return uVar2;
}



/* Entry: 103f860a8; end: 103f86103; -[SCLensCarouselPresenterScope init] */

void FUN_103f860a8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPresenter.LensCarouselPresenterScope",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f860d4);
  (*pcVar1)();
}



/* Entry: 103f86104; end: 103f8618b; -[SCLensCarouselPresenterScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f86104(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130370b0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130370b8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130370c0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130370c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130370d0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130370e0));
  param_1 = param_1 + _DAT_1130370a8;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f8618c; end: 103f862ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8618c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = _DAT_1130370a8;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_1130370a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_1130370b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130370b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130370c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_1130370c8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130370d0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_1130370d8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1130370e0) = param_7;
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_8);
  FUN_103f862ac();
  puVar1 = PTR_s_init_1125d9248;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_7);
  _objc_msgSendSuper2(&stack0xffffffffffffff90,puVar1);
  return;
}



/* Entry: 103f862ac; end: 103f862cb;  */

void FUN_103f862ac(void)

{
  _objc_opt_self(&PTR_PTR_11296ed80);
  return;
}



/* Entry: 103f862cc; end: 103f862ef;  */

undefined8 FUN_103f862cc(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 103f862f0; end: 103f86333;  */

void FUN_103f862f0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f86334; end: 103f86353;  */

void FUN_103f86334(void)

{
  FUN_103f86354();
  return;
}



/* Entry: 103f86354; end: 103f8643f;  */

long FUN_103f86354(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  lVar3 = param_1;
  (**(code **)(lVar7 + 0x20))(param_1,uVar1,lVar7);
  lVar7 = param_1;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5ab3c();
    if ((int)lVar4 != 0) {
      lVar4 = param_1;
      if (param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f86440);
        (*pcVar2)();
      }
      do {
        do {
          lVar7 = param_1;
          if (lVar4 == 0) goto LAB_103f86414;
          if (param_1 < lVar4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f8643c);
            (*pcVar2)();
          }
          lVar7 = lVar4 + -1;
          uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
          lVar4 = *(long *)(unaff_x20 + 0x30);
          func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
          lVar5 = lVar7;
          (**(code **)(lVar4 + 0x20))(lVar7,uVar1,lVar4);
          lVar4 = lVar7;
        } while (lVar5 == 0);
        lVar6 = lVar5;
        func_0x000107c5ab3c();
        _swift_unknownObjectRelease(lVar5);
      } while ((int)lVar6 != 0);
    }
LAB_103f86414:
    _swift_unknownObjectRelease(lVar3);
  }
  return lVar7;
}



/* Entry: 103f86440; end: 103f865ab;  */

long FUN_103f86440(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar5 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,lVar4);
  (**(code **)(lVar5 + 8))();
  if (((uint)lVar5 & 0xff) != 1) {
    lVar5 = *(long *)(unaff_x20 + 0x30);
    lVar6 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,lVar5);
    (**(code **)(lVar6 + 0x38))();
    if (lVar6 == 0) {
      if (param_2 != lVar4) {
        return param_2;
      }
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar2 = *(long *)(unaff_x20 + 0x60);
      func_0x0001000a8868(unaff_x20 + 0x40,uVar1);
      lVar7 = lVar6;
      (**(code **)(lVar2 + 0x30))(lVar5,lVar6,uVar1,lVar2);
      _swift_bridgeObjectRelease(lVar6);
      if ((((uint)lVar7 & 0xff) == 1 || lVar4 < lVar5) || param_2 != lVar4) {
        return param_2;
      }
    }
    if (0.04999999999999999 < param_1) {
      lVar5 = lVar4 + 1;
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f865ac);
        (*pcVar3)();
      }
      uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
      lVar4 = *(long *)(unaff_x20 + 0x60);
      func_0x0001000a8868(unaff_x20 + 0x40,uVar1);
      lVar6 = lVar5;
      (**(code **)(lVar4 + 0x20))(lVar5,uVar1,lVar4);
      if (lVar6 != 0) {
        lVar4 = lVar6;
        func_0x000107c5ab3c();
        _swift_unknownObjectRelease(lVar6);
        if ((int)lVar4 == 0) {
          param_2 = lVar5;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 103f865ac; end: 103f865f7;  */

void FUN_103f865ac(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f865f8; end: 103f86617;  */

void FUN_103f865f8(void)

{
  FUN_103f86440();
  return;
}



/* Entry: 103f86618; end: 103f86703;  */

double FUN_103f86618(double param_1,undefined8 param_2,double param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x170);
  lVar1 = *(long *)(unaff_x20 + 0x178);
  func_0x0001000a8868(unaff_x20 + 0x158,lVar3);
  (**(code **)(lVar1 + 8))(lVar3,lVar1);
  if (lVar3 == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = *(double *)(unaff_x20 + 0x18) + *(double *)(unaff_x20 + 0x10);
    func_0x00010bf20c00();
    _objc_release(lVar3);
    dVar5 = ((param_1 + param_3 * 0.5) - dVar5 * 0.5) / dVar5;
    dVar4 = (double)(long)dVar5;
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f866fc);
      (*pcVar2)();
    }
    if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f86700);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f86704);
      (*pcVar2)();
    }
    dVar5 = dVar5 - dVar4;
  }
  return dVar5;
}



/* Entry: 103f86704; end: 103f86853;  */

undefined1  [16] FUN_103f86704(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar3 = *(long *)(unaff_x20 + 0x170);
  lVar2 = *(long *)(unaff_x20 + 0x178);
  dVar4 = param_1;
  func_0x0001000a8868(unaff_x20 + 0x158,lVar3);
  (**(code **)(lVar2 + 8))(lVar3,lVar2);
  dVar6 = 0.0;
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x170);
    lVar2 = *(long *)(unaff_x20 + 0x178);
    func_0x0001000a8868(unaff_x20 + 0x158,uVar1);
    (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
    if (dVar4 <= 0.0) {
      _objc_release(lVar3);
    }
    else {
      dVar4 = *(double *)(unaff_x20 + 0x18);
      dVar6 = dVar4 + *(double *)(unaff_x20 + 0x10);
      func_0x000107c438d4(lVar3);
      _CGRectGetWidth();
      dVar5 = param_1 * dVar6 + dVar6 * 0.5;
      dVar6 = dVar5 - dVar4 * 0.5;
      func_0x00010bf4cdc0(lVar3);
      dVar5 = dVar4 * 0.5 + dVar5;
      dVar4 = dVar5 - dVar6;
      uVar1 = *(undefined8 *)(unaff_x20 + 0x170);
      lVar2 = *(long *)(unaff_x20 + 0x178);
      func_0x0001000a8868(unaff_x20 + 0x158,uVar1);
      (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
      dVar4 = dVar4 / dVar5;
      dVar5 = (double)(long)dVar4;
      uVar1 = *(undefined8 *)(unaff_x20 + 0x170);
      lVar2 = *(long *)(unaff_x20 + 0x178);
      func_0x0001000a8868(unaff_x20 + 0x158,uVar1);
      (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
      _objc_release(lVar3);
      dVar6 = dVar6 + dVar5 * dVar4;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar6;
  return auVar7;
}



/* Entry: 103f86854; end: 103f868a7;  */

void FUN_103f86854(void)

{
  long unaff_x20;
  
  func_0x000100870a64(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x130);
  func_0x0001000834e4(unaff_x20 + 0x158);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f868a8; end: 103f86917;  */

void FUN_103f868a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  lVar2 = *(long *)(lVar3 + 0x148);
  lVar1 = *(long *)(lVar3 + 0x150);
  func_0x0001000a8868(lVar3 + 0x130,lVar2);
  (**(code **)(lVar1 + 0x10))(lVar2,lVar1);
  if (0 < lVar2) {
    FUN_103f86618(param_1);
  }
  return;
}



/* Entry: 103f86918; end: 103f86983;  */

void FUN_103f86918(long param_1)

{
  FUN_103f86704((double)param_1);
  return;
}



/* Entry: 103f86984; end: 103f86aeb;  */

ulong FUN_103f86984(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  
  param_1 = param_1 / (*(double *)(unaff_x20 + 0x18) + *(double *)(unaff_x20 + 0x10));
  dVar8 = (double)(long)param_1;
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f86ae0);
    (*pcVar3)();
  }
  if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f86ae4);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f86ae8);
    (*pcVar3)();
  }
  lVar7 = *(long *)(unaff_x20 + 0x148);
  lVar4 = *(long *)(unaff_x20 + 0x150);
  func_0x0001000a8868(unaff_x20 + 0x130,lVar7);
  (**(code **)(lVar4 + 0x10))(lVar7,lVar4);
  if (!SBORROW8(lVar7,1)) {
    uVar5 = lVar7 - 1U;
    if ((long)dVar8 <= (long)(lVar7 - 1U)) {
      uVar5 = (long)dVar8;
    }
    uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
    dVar8 = param_1 - (double)uVar5;
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x158) + 0x10);
    if (lVar7 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x158) + 0x20;
      uVar6 = uVar5;
      do {
        func_0x000103f86c04(lVar4,auStack_78);
        FUN_103f86c48(auStack_78,auStack_a0);
        lVar2 = lStack_80;
        uVar1 = uStack_88;
        func_0x0001000a8868(auStack_a0,uStack_88);
        uVar5 = uVar6;
        (**(code **)(lVar2 + 8))(dVar8,uVar6,uVar1,lVar2);
        if (uVar5 != uVar6) {
          dVar8 = param_1 - (double)(long)uVar5;
        }
        func_0x0001000834e4(auStack_a0);
        lVar4 = lVar4 + 0x28;
        lVar7 = lVar7 + -1;
        uVar6 = uVar5;
      } while (lVar7 != 0);
    }
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103f86aec);
  (*pcVar3)();
}



/* Entry: 103f86aec; end: 103f86b3f;  */

void FUN_103f86aec(void)

{
  long unaff_x20;
  
  func_0x000100870a64(unaff_x20 + 0x10);
  func_0x0001000834e4(unaff_x20 + 0x130);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f86b40; end: 103f86baf;  */

void FUN_103f86b40(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  lVar2 = *(long *)(lVar3 + 0x148);
  lVar1 = *(long *)(lVar3 + 0x150);
  func_0x0001000a8868(lVar3 + 0x130,lVar2);
  (**(code **)(lVar1 + 0x10))(lVar2,lVar1);
  if (0 < lVar2) {
    FUN_103f86984(param_1);
  }
  return;
}



/* Entry: 103f86bb0; end: 103f86be3;  */

undefined1  [16] FUN_103f86bb0(long param_1)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (*(double *)(*unaff_x20 + 0x18) + *(double *)(*unaff_x20 + 0x10)) * (double)param_1
  ;
  auVar1._8_8_ = 0;
  return auVar1;
}



/* Entry: 103f86be4; end: 103f86c47;  */

void FUN_103f86be4(void)

{
  FUN_103f86984();
  return;
}



/* Entry: 103f86c48; end: 103f86c5f;  */

undefined8 * FUN_103f86c48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 103f86c60; end: 103f86cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f86c60(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113037440;
  lVar2 = *(long *)(unaff_x20 + _DAT_113037440);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_103f86cc4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _objc_retain();
    _objc_release(uVar4);
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  return lVar3;
}



/* Entry: 103f86cc4; end: 103f86f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f86cc4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  puVar3 = PTR__OBJC_CLASS___UICollectionView_1126afd20;
  _objc_allocWithZone(PTR__OBJC_CLASS___UICollectionView_1126afd20);
  func_0x000107c469ac(0,0,0,0);
  _objc_retain();
  uVar4 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1d39d0);
  func_0x000107c520f4(puVar3);
  _objc_release(uVar4);
  func_0x000107c58e6c(puVar3);
  func_0x000107c576c4(puVar3);
  func_0x000107c534b0(puVar3);
  uVar4 = *(undefined8 *)PTR__UIScrollViewDecelerationRateFast_110345da8;
  _objc_retain(puVar3);
  func_0x000107c53e7c(uVar4);
  func_0x000107c59284(puVar3);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c52b50(puVar3);
  _objc_release(puVar5);
  func_0x000107c5a050(puVar3);
  func_0x000107c550d8(puVar3);
  func_0x000107c5472c(puVar3);
  _objc_release(puVar3);
  func_0x000107c53fc0(puVar3);
  _objc_release(puVar3);
  _swift_getObjCClassFromMetadata(*(undefined8 *)(param_1 + _DAT_1130373c8));
  uVar4 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1d39f0);
  func_0x000107c4fbd8(puVar3);
  _objc_release(uVar4);
  func_0x00010bf0ca20(*(undefined8 *)(param_1 + _DAT_1130373c0));
  lVar1 = param_1 + _DAT_1130373d0;
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar4);
  puVar5 = &UNK_110728708;
  _swift_allocObject(&UNK_110728708,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,param_1);
  pcVar6 = *(code **)(lVar2 + 8);
  _swift_retain(puVar5);
  (*pcVar6)(puVar3,0x103f89744,puVar5,uVar4,lVar2);
  _swift_release_n(puVar5,2);
  func_0x000107c53fcc(puVar3);
  lVar1 = _DAT_113037418;
  _swift_beginAccess(param_1 + _DAT_113037418,auStack_78,0,0);
  func_0x000103f8a5e4(param_1 + lVar1,auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  (**(code **)(lStack_80 + 0x28))(puVar3,uStack_88,lStack_80);
  func_0x0001000834e4(auStack_a0);
  return puVar3;
}



/* Entry: 103f86f74; end: 103f86ffb;  */

undefined8 FUN_103f86f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 == 0) {
    param_1 = 0;
  }
  else {
    FUN_103f86ffc(param_1,param_2,param_3);
    _objc_release(param_4);
  }
  return param_1;
}



/* Entry: 103f86ffc; end: 103f871a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103f86ffc(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined *puStack_58;
  
  uVar3 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1d39f0);
  uVar4 = uVar3;
  __s10Foundation9IndexPathV19_bridgeToObjectiveCSo07NSIndexC0CyF();
  func_0x00010bf6e0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  puStack_58 = PTR_DAT_1126a3c38;
  puVar5 = param_1;
  _swift_dynamicCastObjCProtocolConditional(param_1,1,&puStack_58);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(param_1);
    puVar5 = PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8;
    _objc_allocWithZone(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x000107c453e4();
  }
  else {
    func_0x000107c53fcc();
    func_0x000107c5a588(puVar5);
    lVar1 = unaff_x20 + _DAT_1130373d8;
    lVar6 = *(long *)(lVar1 + 0x18);
    lVar7 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar6);
    (**(code **)(lVar7 + 8))();
    lVar1 = 0;
    if (((uint)lVar7 & 0xff) != 1) {
      lVar1 = lVar6;
    }
    if (param_3 == 0) {
      lVar7 = -0x2000000000000000;
    }
    else {
      func_0x000107c4a788(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(param_3);
      param_3 = lVar6;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,lVar7);
    _swift_bridgeObjectRelease();
    __s10Foundation9IndexPathV5UIKitE4itemSivg();
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f871a4);
      (*pcVar2)();
    }
    func_0x000107c520dc(puVar5);
    _objc_release(param_3);
  }
  return puVar5;
}



/* Entry: 103f871a4; end: 103f871c3; -[_TtC21LensCarouselPresenter21LensCarouselPresenter defaultSelectedLensProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f871a4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113037448));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f871c4; end: 103f87283; -[_TtC21LensCarouselPresenter21LensCarouselPresenter setDefaultSelectedLensProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f871c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_113037448);
  *(undefined8 *)(param_1 + _DAT_113037448) = param_3;
  _swift_unknownObjectRetain_n(param_3,2);
  _objc_retain();
  _swift_unknownObjectRelease(uVar3);
  lVar1 = param_1 + _DAT_113037410;
  _swift_beginAccess(lVar1,auStack_58,0x21,0);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar3);
  (**(code **)(lVar2 + 0x28))(param_3,uVar3,lVar2);
  _swift_endAccess(auStack_58);
  _objc_release(param_1);
  return;
}



/* Entry: 103f87284; end: 103f872e3; -[_TtC21LensCarouselPresenter21LensCarouselPresenter init] */

void FUN_103f87284(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensCarouselPresenter.LensCarouselPresenter",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f872b0);
  (*pcVar1)();
}



/* Entry: 103f872e4; end: 103f873eb; -[_TtC21LensCarouselPresenter21LensCarouselPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f872e4(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130373c0));
  func_0x0001000834e4(param_1 + _DAT_1130373d0);
  func_0x0001000834e4(param_1 + _DAT_1130373d8);
  func_0x0001000834e4(param_1 + _DAT_1130373e0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130373e8));
  func_0x0001000834e4(param_1 + _DAT_1130373f0);
  func_0x0001000834e4(param_1 + _DAT_1130373f8);
  func_0x0001000834e4(param_1 + _DAT_113037400);
  func_0x0001000834e4(param_1 + _DAT_113037408);
  func_0x0001000834e4(param_1 + _DAT_113037410);
  func_0x0001000834e4(param_1 + _DAT_113037418);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113037420));
  FUN_103f862cc(param_1 + _DAT_113037430);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113037440));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113037448));
  return;
}



/* Entry: 103f873ec; end: 103f8740b;  */

void FUN_103f873ec(void)

{
  _objc_opt_self(&PTR_PTR_11296ee90);
  return;
}



/* Entry: 103f8740c; end: 103f87417; -[_TtC21LensCarouselPresenter21LensCarouselPresenter collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_103f8740c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar2,param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_103f8a1e8(puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 103f87418; end: 103f87423; -[_TtC21LensCarouselPresenter21LensCarouselPresenter collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_103f87418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar2,param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  (*(code *)0x103f8a298)(puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 103f87424; end: 103f87503;  */

void FUN_103f87424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation9IndexPathVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation9IndexPathV36_unconditionallyBridgeFromObjectiveCyACSo07NSIndexC0CSgFZ
            (puVar2,param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  (*param_6)(puVar2);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 103f87504; end: 103f87667; -[_TtC21LensCarouselPresenter21LensCarouselPresenter scrollViewWillBeginDragging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f87504(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1 + _DAT_113037430;
  _swift_unknownObjectWeakLoadStrong();
  _objc_retain(param_3);
  _objc_retain();
  if (lVar3 != 0) {
    func_0x000107c4aeec(lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  lVar3 = param_1 + _DAT_1130373f8;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar1);
  (**(code **)(lVar2 + 8))(param_3,uVar1,lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f87668; end: 103f876b7; -[_TtC21LensCarouselPresenter21LensCarouselPresenter scrollViewDidScroll:] */

void FUN_103f87668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000103f875b8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f876b8; end: 103f8776f; -[_TtC21LensCarouselPresenter21LensCarouselPresenter scrollViewWillEndDragging:withVelocity:targetContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f876b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_68 = param_6[1];
  uStack_70 = *param_6;
  lVar1 = param_3 + _DAT_1130373f8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x18);
  _objc_retain(param_5);
  _objc_retain(param_3);
  (*pcVar4)(param_5,&uStack_60,&uStack_70,uVar2,lVar3);
  param_6[1] = uStack_68;
  *param_6 = uStack_70;
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103f87770; end: 103f87843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f87770(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_1130373f8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x28))(uVar2,lVar3);
  lVar1 = _DAT_113037410;
  if (*(char *)(unaff_x20 + _DAT_113037438) == '\x01') {
    _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_58,0,0);
    func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    func_0x00010bf4cdc0(param_1);
    (**(code **)(lStack_60 + 0x58))(uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 103f87844; end: 103f87893; -[_TtC21LensCarouselPresenter21LensCarouselPresenter scrollViewDidEndDecelerating:] */

void FUN_103f87844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f87770(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f87894; end: 103f87973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f87894(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = unaff_x20 + _DAT_1130373f8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x20))(param_2,uVar2,lVar3);
  lVar1 = _DAT_113037410;
  if ((*(char *)(unaff_x20 + _DAT_113037438) == '\x01') && ((param_2 & 1) == 0)) {
    _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_58,0,0);
    func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    func_0x00010bf4cdc0(param_1);
    (**(code **)(lStack_60 + 0x58))(uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 103f87974; end: 103f879cb; -[_TtC21LensCarouselPresenter21LensCarouselPresenter scrollViewDidEndDragging:willDecelerate:] */

void FUN_103f87974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f87894(param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f879cc; end: 103f87a33; -[_TtC21LensCarouselPresenter21LensCarouselPresenter scrollViewDidEndScrollingAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f879cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_1130373f8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 0x38);
  _objc_retain(param_1);
  (*pcVar4)(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f87a34; end: 103f87b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f87a34(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  func_0x000107c5def8();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    return;
  }
  lVar6 = unaff_x20 + _DAT_1130373d8;
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  lVar5 = *(long *)(lVar6 + 0x20);
  uVar7 = uVar1;
  func_0x0001000a8868(lVar6);
  lVar3 = param_1;
  func_0x000107c4a788();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(lVar3);
  uVar8 = uVar7;
  (**(code **)(lVar5 + 0x30))(lVar4,uVar7,uVar1,lVar5);
  _swift_bridgeObjectRelease(uVar7);
  if (((uint)uVar8 & 0xff) != 1) {
    lVar5 = *(long *)(lVar6 + 0x18);
    lVar3 = *(long *)(lVar6 + 0x20);
    func_0x0001000a8868(lVar6,lVar5);
    (**(code **)(lVar3 + 8))();
    lVar6 = 0;
    if (((uint)lVar3 & 0xff) != 1) {
      lVar6 = lVar5;
    }
    if (SBORROW8(lVar4,lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f87b90);
      (*pcVar2)();
    }
    lVar6 = unaff_x20 + _DAT_113037430;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar6 != 0) {
      func_0x000107c4aecc();
      _swift_unknownObjectRelease(lVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103f87b90; end: 103f87bfb; -[_TtC21LensCarouselPresenter21LensCarouselPresenter lensCell:didDrawIcon:] */

void FUN_103f87b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_103f87a34(param_3,param_4);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f87bfc; end: 103f87ceb; -[_TtC21LensCarouselPresenter21LensCarouselPresenter activeItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f87bfc(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + _DAT_113037410;
  _swift_beginAccess(param_1,auStack_58,0,0);
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,lVar1);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(auStack_60 + -extraout_x8);
  lVar3 = lVar1;
  (**(code **)(lVar2 + 0x40))(lVar1);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103f87cec; end: 103f87d37; -[_TtC21LensCarouselPresenter21LensCarouselPresenter isInteractionsEnabled] */

undefined8 FUN_103f87cec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f86c60();
  uVar2 = uVar1;
  func_0x000107c4a3a8();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 103f87d38; end: 103f87d7f; -[_TtC21LensCarouselPresenter21LensCarouselPresenter setIsInteractionsEnabled:] */

void FUN_103f87d38(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f86c60();
  func_0x000107c58cd8();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f87d80; end: 103f87dcb; -[_TtC21LensCarouselPresenter21LensCarouselPresenter isCarouselHidden] */

undefined8 FUN_103f87d80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f86c60();
  uVar2 = uVar1;
  func_0x000107c49eac();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 103f87dcc; end: 103f87e13; -[_TtC21LensCarouselPresenter21LensCarouselPresenter setIsCarouselHidden:] */

void FUN_103f87dcc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f86c60();
  func_0x000107c550d8();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f87e14; end: 103f87eff; -[_TtC21LensCarouselPresenter21LensCarouselPresenter selectItemWithItemId:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f87e14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  lVar1 = _DAT_113037410;
  _swift_beginAccess(param_1 + _DAT_113037410,auStack_78,0,0);
  func_0x000103f8a5e4(param_1 + lVar1,auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  pcVar2 = *(code **)(lStack_80 + 0x50);
  _objc_retain(param_1);
  (*pcVar2)(param_3,param_2,4,0,1,param_4,uStack_88,lStack_80);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x0001000834e4(auStack_a0);
  return (uint)param_3 & 1;
}



/* Entry: 103f87f00; end: 103f87fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f87f00(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_113037410;
  if (*(char *)(unaff_x20 + _DAT_113037438) == '\x01') {
    uVar3 = 0;
    _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_68,0,0);
    func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_90);
    func_0x0001000a8868(auStack_90,uStack_78);
    _objc_retain(param_1);
    uVar2 = uStack_78;
    FUN_103f99348();
    (**(code **)(lStack_70 + 0x60))();
    func_0x000103f8a58c(param_1,uVar2,uVar3);
    func_0x0001000834e4(auStack_90);
  }
  return;
}



/* Entry: 103f87fd4; end: 103f8802b; -[_TtC21LensCarouselPresenter21LensCarouselPresenter selectItemWithStrategy:skipDefaultItemSelection:] */

void FUN_103f87fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103f87f00(param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f8802c; end: 103f88133; -[_TtC21LensCarouselPresenter21LensCarouselPresenter selectNextItemAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8802c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  __Block_copy();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1107287f8;
    _swift_allocObject(&UNK_1107287f8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar3 = FUN_103f8a580;
  }
  lVar1 = _DAT_113037410;
  _swift_beginAccess(param_1 + _DAT_113037410,auStack_78,0,0);
  func_0x000103f8a5e4(param_1 + lVar1,auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  pcVar4 = *(code **)(lStack_80 + 0x68);
  _objc_retain(param_1);
  (*pcVar4)(param_3,pcVar3,puVar2,uStack_88,lStack_80);
  _objc_release(param_1);
  func_0x00010058d43c(pcVar3,puVar2);
  func_0x0001000834e4(auStack_a0);
  return;
}



/* Entry: 103f88134; end: 103f88237; -[_TtC21LensCarouselPresenter21LensCarouselPresenter updateItemWithItemId:contentUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88134(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  lVar1 = _DAT_113037410;
  if ((*(char *)(param_1 + _DAT_113037438) == '\x01') && ((param_4 & 1) != 0)) {
    _swift_beginAccess(param_1 + _DAT_113037410,auStack_68,0,0);
    func_0x000103f8a5e4(param_1 + lVar1,auStack_90);
    func_0x0001000a8868(auStack_90,uStack_78);
    pcVar2 = *(code **)(lStack_70 + 0x78);
    _objc_retain(param_1);
    (*pcVar2)(param_3,param_2,uStack_78,lStack_70);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
    func_0x0001000834e4(auStack_90);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103f88238; end: 103f884ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88238(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  if (param_2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    lVar3 = _DAT_113037430;
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar6 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    lVar3 = _DAT_113037430;
  }
  _DAT_113037430 = lVar3;
  if (uVar6 != 0) {
    if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f884ac);
      (*pcVar1)();
    }
    uVar7 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar8 = *(ulong *)(param_2 + uVar7 * 8 + 0x20);
        _swift_unknownObjectRetain(uVar8);
      }
      else {
        uVar8 = uVar7;
        FUN_103f8fdfc(uVar7,param_2);
      }
      lVar2 = unaff_x20 + lVar3;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar2 != 0) {
        func_0x000107c4aedc();
        _swift_unknownObjectRelease(lVar2);
      }
      uVar7 = uVar7 + 1;
      _swift_unknownObjectRelease(uVar8);
    } while (uVar6 != uVar7);
  }
  lVar3 = _DAT_113037410;
  _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_78,0,0);
  func_0x000103f8a5e4(unaff_x20 + lVar3,auStack_a0);
  lVar3 = lStack_80;
  uVar4 = uStack_88;
  func_0x0001000a8868(auStack_a0,uStack_88);
  (**(code **)(lVar3 + 0x70))(uVar4,lVar3);
  func_0x0001000834e4(auStack_a0);
  lVar3 = unaff_x20 + _DAT_113037430;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    uVar4 = 0x113037480;
    func_0x0001000285a8(0x113037480,&UNK_10dcb2570);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar4);
    func_0x000107c4aee0(lVar3);
    _swift_unknownObjectRelease(lVar3);
    _objc_release(param_1);
  }
  lVar2 = _DAT_113037438;
  lVar3 = _DAT_113037400;
  if (*(char *)(unaff_x20 + _DAT_113037438) == '\x01') {
    _swift_beginAccess(unaff_x20 + _DAT_113037400,auStack_b8,0,0);
    func_0x000103f8a5e4(unaff_x20 + lVar3,auStack_a0);
    func_0x0001000a8868(auStack_a0,uStack_88);
    (**(code **)(lStack_80 + 0x20))(uStack_88,lStack_80);
    func_0x0001000834e4(auStack_a0);
    uVar5 = *(undefined1 *)(unaff_x20 + lVar2);
  }
  else {
    uVar5 = 0;
  }
  lVar3 = unaff_x20 + _DAT_113037408;
  _swift_beginAccess(lVar3,auStack_a0,0x21,0);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x0001000c6518(lVar3,uVar4);
  (**(code **)(lVar2 + 0x10))(uVar5,uVar4,lVar2);
  _swift_endAccess(auStack_a0);
  return;
}



/* Entry: 103f884ac; end: 103f88547; -[_TtC21LensCarouselPresenter21LensCarouselPresenter updateWithItems:selectedItemId:requiresAnimation:] */

void FUN_103f884ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x113037480;
  func_0x0001000285a8(0x113037480,&UNK_10dcb2570);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  }
  _objc_retain(param_1);
  FUN_103f8a348(param_3,param_4,uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103f88548; end: 103f88633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f88548(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uVar2 = param_3;
  FUN_103f86c60();
  uVar3 = uVar2;
  func_0x000107c49eac();
  _objc_release(uVar2);
  lVar1 = _DAT_113037418;
  if ((uVar3 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113037440);
      func_0x00010bf20c00(uVar4);
      uVar5 = (uint)uVar4;
      _CGRectContainsPoint();
    }
    else {
      _swift_beginAccess(unaff_x20 + _DAT_113037418,auStack_58,0,0);
      func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_80);
      func_0x0001000a8868(auStack_80,uStack_68);
      (**(code **)(lStack_60 + 0x20))(param_1,param_2,uStack_68,lStack_60);
      uVar5 = (uint)uStack_68;
      func_0x0001000834e4(auStack_80);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}



/* Entry: 103f88634; end: 103f88687; -[_TtC21LensCarouselPresenter21LensCarouselPresenter canHandleTouchAtPoint:matchLensView:] */

uint FUN_103f88634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain();
  FUN_103f88548(param_1,param_2,param_5);
  _objc_release(param_3);
  return (uint)param_5 & 1;
}



/* Entry: 103f88688; end: 103f88767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88688(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_113037438) = 1;
  lVar1 = _DAT_113037400;
  _swift_beginAccess(unaff_x20 + _DAT_113037400,auStack_48,0,0);
  func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_70);
  func_0x0001000a8868(auStack_70,uStack_58);
  (**(code **)(lStack_50 + 0x20))(uStack_58,lStack_50);
  func_0x0001000834e4(auStack_70);
  lVar1 = unaff_x20 + _DAT_113037408;
  _swift_beginAccess(lVar1,auStack_70,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(1,uVar2,lVar3);
  _swift_endAccess(auStack_70);
  return;
}



/* Entry: 103f88768; end: 103f8878f; -[_TtC21LensCarouselPresenter21LensCarouselPresenter willShowCarousel] */

void FUN_103f88768(undefined8 param_1)

{
  _objc_retain();
  FUN_103f88688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f88790; end: 103f888eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88790(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  *(undefined1 *)(unaff_x20 + _DAT_113037438) = 0;
  lVar1 = _DAT_113037410;
  _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_48,0,0);
  func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_70);
  lVar1 = lStack_50;
  uVar2 = uStack_58;
  func_0x0001000a8868(auStack_70,uStack_58);
  (**(code **)(lVar1 + 0x88))(uVar2,lVar1);
  func_0x0001000834e4(auStack_70);
  lVar1 = _DAT_113037400;
  _swift_beginAccess(unaff_x20 + _DAT_113037400,auStack_88,0,0);
  func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_70);
  func_0x0001000a8868(auStack_70,uStack_58);
  (**(code **)(lStack_50 + 0x28))(uStack_58,lStack_50);
  func_0x0001000834e4(auStack_70);
  lVar1 = unaff_x20 + _DAT_113037408;
  _swift_beginAccess(lVar1,auStack_70,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(0,uVar2,lVar3);
  _swift_endAccess(auStack_70);
  lVar1 = unaff_x20 + _DAT_1130373f0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x18))(uVar2,lVar3);
  return;
}



/* Entry: 103f888ec; end: 103f88913; -[_TtC21LensCarouselPresenter21LensCarouselPresenter didHideCarousel] */

void FUN_103f888ec(undefined8 param_1)

{
  _objc_retain();
  FUN_103f88790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f88914; end: 103f88a73;  */

int FUN_103f88914(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f88990;
        goto LAB_103f88974;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f88974:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f88990:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103f88a74; end: 103f88bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88a74(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  FUN_103f86c60();
  uVar1 = param_1;
  func_0x000107c49eac();
  _objc_release(param_1);
  if ((uVar1 & 1) == 0) {
    lVar3 = unaff_x20 + _DAT_1130373d8;
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    lVar4 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar5);
    lVar2 = param_2;
    (**(code **)(lVar4 + 0x20))(param_2,uVar5,lVar4);
    lVar3 = _DAT_113037410;
    if (lVar2 != 0) {
      _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_68,0,0);
      func_0x000103f8a5e4(unaff_x20 + lVar3,auStack_90);
      uVar5 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      lVar3 = lVar2;
      func_0x000107c4a788(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar3);
      (**(code **)(lStack_70 + 0x50))(lVar4,uVar5,1,param_2,0,1,uStack_78,lStack_70);
      _swift_bridgeObjectRelease(uVar5);
      _swift_unknownObjectRelease(lVar2);
      func_0x0001000834e4(auStack_90);
    }
  }
  return;
}



/* Entry: 103f88bac; end: 103f88baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88bac(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  FUN_103f86c60();
  uVar1 = param_1;
  func_0x000107c49eac();
  _objc_release(param_1);
  if ((uVar1 & 1) == 0) {
    lVar3 = unaff_x20 + _DAT_1130373d8;
    uVar5 = *(undefined8 *)(lVar3 + 0x18);
    lVar4 = *(long *)(lVar3 + 0x20);
    func_0x0001000a8868(lVar3,uVar5);
    lVar2 = param_2;
    (**(code **)(lVar4 + 0x20))(param_2,uVar5,lVar4);
    lVar3 = _DAT_113037410;
    if (lVar2 != 0) {
      _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_68,0,0);
      func_0x000103f8a5e4(unaff_x20 + lVar3,auStack_90);
      uVar5 = uStack_78;
      func_0x0001000a8868(auStack_90,uStack_78);
      lVar3 = lVar2;
      func_0x000107c4a788(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar3);
      (**(code **)(lStack_70 + 0x50))(lVar4,uVar5,1,param_2,0,1,uStack_78,lStack_70);
      _swift_bridgeObjectRelease(uVar5);
      _swift_unknownObjectRelease(lVar2);
      func_0x0001000834e4(auStack_90);
    }
  }
  return;
}



/* Entry: 103f88bb0; end: 103f88eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88bb0(double param_1,double param_2,long param_3,ulong param_4,code *param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  if (*(char *)(unaff_x20 + _DAT_113037438) == '\x01') {
    lVar5 = unaff_x20 + _DAT_1130373d8;
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar1);
    lVar5 = param_3;
    (**(code **)(lVar2 + 0x20))(param_3,uVar1,lVar2);
    if (lVar5 != 0) {
      _swift_unknownObjectRelease();
      lVar5 = unaff_x20 + _DAT_1130373e0;
      uVar1 = *(undefined8 *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      func_0x0001000a8868(lVar5,uVar1);
      (**(code **)(lVar2 + 0x10))(param_3,uVar1,lVar2);
      dVar10 = param_1;
      dVar11 = param_2;
      FUN_103f86c60();
      func_0x00010bf4cdc0();
      _objc_release(param_3);
      bVar4 = false;
      if ((dVar10 == param_1) && (bVar4 = false, !NAN(dVar11) && !NAN(param_2))) {
        bVar4 = dVar11 == param_2;
      }
      if (!bVar4) {
        lVar5 = unaff_x20 + _DAT_1130373f8;
        uVar1 = *(undefined8 *)(lVar5 + 0x18);
        lVar2 = *(long *)(lVar5 + 0x20);
        func_0x0001000a8868(lVar5,uVar1);
        (**(code **)(lVar2 + 0x30))(param_1,param_2,uVar1,lVar2);
        if ((param_4 & 1) == 0) {
          func_0x000107c5384c(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_113037440));
          uVar1 = *(undefined8 *)(lVar5 + 0x18);
          lVar2 = *(long *)(lVar5 + 0x20);
          func_0x0001000a8868(lVar5,uVar1);
          (**(code **)(lVar2 + 0x38))(uVar1,lVar2);
        }
        else {
          if (*(char *)(unaff_x20 + _DAT_113037428) == '\x01') {
            puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
            _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
            puVar7 = &UNK_110728730;
            _swift_allocObject(&UNK_110728730,0x28,7);
            *(long *)(puVar7 + 0x10) = unaff_x20;
            *(double *)(puVar7 + 0x18) = param_1;
            *(double *)(puVar7 + 0x20) = param_2;
            puVar3 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_80 = FUN_103f89cc0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_1000f6b44;
            puStack_88 = &UNK_110728748;
            puStack_78 = puVar7;
            __Block_copy(&puStack_a0);
            puVar7 = puStack_78;
            _objc_retain();
            _swift_release(puVar7);
            puVar7 = &UNK_110728780;
            _swift_allocObject(&UNK_110728780,0x28,7);
            *(long *)(puVar7 + 0x10) = unaff_x20;
            *(code **)(puVar7 + 0x18) = param_5;
            *(undefined8 *)(puVar7 + 0x20) = param_6;
            pcStack_80 = (code *)0x103f89d24;
            puStack_a0 = puVar3;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_100288f10;
            puStack_88 = &UNK_110728798;
            puStack_78 = puVar7;
            __Block_copy(&puStack_a0);
            puVar7 = puStack_78;
            _objc_retain(unaff_x20);
            func_0x000100b64c10(param_5,param_6);
            _swift_release(puVar7);
            func_0x00010bf03440(0x3fc999999999999a,0,puVar6);
            __Block_release(ppuVar9);
            __Block_release(ppuVar8);
            return;
          }
          func_0x000107c5384c(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_113037440));
        }
      }
    }
  }
  if (param_5 != (code *)0x0) {
    (*param_5)();
  }
  return;
}



/* Entry: 103f88eb0; end: 103f88f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88eb0(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  param_2 = param_2 + _DAT_1130373f8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  (**(code **)(lVar2 + 0x38))(uVar1,lVar2);
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Entry: 103f88f18; end: 103f89253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f88f18(undefined8 param_1,ulong param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130373d8;
  uVar5 = *(ulong *)(lVar1 + 0x18);
  lVar6 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  (**(code **)(lVar6 + 8))();
  uVar2 = 0;
  if (((uint)lVar6 & 0xff) != 1) {
    uVar2 = uVar5;
  }
  if (param_4 == '\0') {
    lVar6 = unaff_x20 + _DAT_113037430;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar6 == 0) {
      return;
    }
    if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89244);
      (*pcVar4)();
    }
    func_0x000107c4aef4();
  }
  else {
    if (param_4 != '\x01') {
      lVar6 = unaff_x20 + _DAT_1130373f0;
      uVar9 = *(undefined8 *)(lVar6 + 0x18);
      lVar7 = *(long *)(lVar6 + 0x20);
      func_0x0001000a8868(lVar6,uVar9);
      (**(code **)(lVar7 + 0x10))(param_1,param_3,uVar9,lVar7);
      uVar5 = *(ulong *)(lVar1 + 0x18);
      lVar7 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar5);
      (**(code **)(lVar7 + 8))();
      lVar6 = _DAT_113037430;
      uVar2 = 0;
      if (((uint)lVar7 & 0xff) != 1) {
        uVar2 = uVar5;
      }
      lVar7 = unaff_x20 + _DAT_113037430;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89248);
          (*pcVar4)();
        }
        lVar8 = *(long *)(lVar1 + 0x18);
        lVar3 = *(long *)(lVar1 + 0x20);
        func_0x0001000a8868(lVar1,lVar8);
        (**(code **)(lVar3 + 0x10))(lVar8,lVar3);
        if (lVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89250);
          (*pcVar4)();
        }
        func_0x000107c4aec8(lVar7);
        _swift_unknownObjectRelease(lVar7);
      }
      uVar5 = param_2;
      FUN_103f89254(param_2,uVar2);
      lVar6 = unaff_x20 + lVar6;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
        return;
      }
      uVar9 = 0;
      FUN_103f98c30(0);
      uVar10 = uVar5;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar5,uVar9);
      _swift_bridgeObjectRelease(uVar5);
      if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89254);
        (*pcVar4)();
      }
      func_0x000107c4aee4(lVar6);
      _swift_unknownObjectRelease(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar10);
      return;
    }
    uVar5 = *(ulong *)(lVar1 + 0x18);
    lVar6 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar5);
    (**(code **)(lVar6 + 8))();
    uVar2 = 0;
    if (((uint)lVar6 & 0xff) != 1) {
      uVar2 = uVar5;
    }
    lVar6 = unaff_x20 + _DAT_113037430;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar6 == 0) {
      return;
    }
    if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89240);
      (*pcVar4)();
    }
    lVar7 = *(long *)(lVar1 + 0x18);
    lVar8 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar7);
    (**(code **)(lVar8 + 0x10))(lVar7,lVar8);
    if (lVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8924c);
      (*pcVar4)();
    }
    func_0x000107c4aed8(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
  return;
}



/* Entry: 103f89254; end: 103f89543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103f89254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  
  lVar1 = unaff_x20 + _DAT_1130373d8;
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  lVar14 = param_5;
  (**(code **)(lVar4 + 0x20))(param_5,uVar5,lVar4);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar14 != 0) {
    lVar4 = lVar14;
    func_0x000107c4abc0();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(lVar14);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_1130373e8);
    _swift_getObjectType(uVar15);
    uVar5 = uVar15;
    FUN_103f86c60();
    func_0x00010bf20c00();
    _objc_release(uVar5);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    lVar14 = lVar4;
    FUN_103f7cd60(lVar4,uVar15);
    _objc_release(lVar4);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (0 < lVar14) {
      uVar12 = lVar14 - 1U >> 1;
      lVar4 = param_5 - uVar12;
      if (SBORROW8(param_5,uVar12)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f8953c);
        (*pcVar2)();
      }
      if (SCARRY8(param_5,uVar12)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f89540);
        (*pcVar2)();
      }
      if ((long)(param_5 + uVar12) < lVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103f89544);
        (*pcVar2)();
      }
      lVar14 = uVar12 << 1;
      while( true ) {
        uVar5 = *(undefined8 *)(lVar1 + 0x18);
        lVar7 = *(long *)(lVar1 + 0x20);
        func_0x0001000a8868(lVar1,uVar5);
        lVar6 = lVar4;
        (**(code **)(lVar7 + 0x20))(lVar4,uVar5,lVar7);
        if (lVar6 != 0) {
          lVar7 = lVar6;
          func_0x000107c4a788();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          _objc_release(lVar7);
          if (SBORROW8(lVar4,param_6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f89534);
            (*pcVar2)();
          }
          if (SBORROW8(lVar4,param_5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103f89538);
            (*pcVar2)();
          }
          uVar15 = 0;
          FUN_103f98c30(0);
          _objc_allocWithZone();
          func_0x000103f9879c(lVar8,uVar5,lVar4 - param_6,lVar4 - param_5,uVar15);
          _objc_retainAutoreleasedReturnValue();
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
            FUN_103f89858(0,puVar9 + 1,1,puVar11,0x103f89a30,0x103f89bc8);
          }
          uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
          uVar12 = *(ulong *)(uVar13 + 0x10);
          puVar11 = puVar10;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar12) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_103f89858(puVar11,uVar12 + 1,1,puVar10,0x103f89a30,0x103f89bc8);
            uVar13 = (ulong)puVar11 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar13 + 0x10) = uVar12 + 1;
          *(long *)(uVar13 + uVar12 * 8 + 0x20) = lVar8;
          _objc_release(lVar8);
          _swift_unknownObjectRelease(lVar6);
        }
        if (lVar14 == 0) break;
        lVar14 = lVar14 + -1;
        bVar3 = SCARRY8(lVar4,1);
        lVar4 = lVar4 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103f89530);
          (*pcVar2)();
        }
      }
    }
  }
  return puVar11;
}



/* Entry: 103f89544; end: 103f89547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f89544(double param_1,double param_2,long param_3,ulong param_4,code *param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  if (*(char *)(unaff_x20 + _DAT_113037438) == '\x01') {
    lVar5 = unaff_x20 + _DAT_1130373d8;
    uVar1 = *(undefined8 *)(lVar5 + 0x18);
    lVar2 = *(long *)(lVar5 + 0x20);
    func_0x0001000a8868(lVar5,uVar1);
    lVar5 = param_3;
    (**(code **)(lVar2 + 0x20))(param_3,uVar1,lVar2);
    if (lVar5 != 0) {
      _swift_unknownObjectRelease();
      lVar5 = unaff_x20 + _DAT_1130373e0;
      uVar1 = *(undefined8 *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      func_0x0001000a8868(lVar5,uVar1);
      (**(code **)(lVar2 + 0x10))(param_3,uVar1,lVar2);
      dVar10 = param_1;
      dVar11 = param_2;
      FUN_103f86c60();
      func_0x00010bf4cdc0();
      _objc_release(param_3);
      bVar4 = false;
      if ((dVar10 == param_1) && (bVar4 = false, !NAN(dVar11) && !NAN(param_2))) {
        bVar4 = dVar11 == param_2;
      }
      if (!bVar4) {
        lVar5 = unaff_x20 + _DAT_1130373f8;
        uVar1 = *(undefined8 *)(lVar5 + 0x18);
        lVar2 = *(long *)(lVar5 + 0x20);
        func_0x0001000a8868(lVar5,uVar1);
        (**(code **)(lVar2 + 0x30))(param_1,param_2,uVar1,lVar2);
        if ((param_4 & 1) == 0) {
          func_0x000107c5384c(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_113037440));
          uVar1 = *(undefined8 *)(lVar5 + 0x18);
          lVar2 = *(long *)(lVar5 + 0x20);
          func_0x0001000a8868(lVar5,uVar1);
          (**(code **)(lVar2 + 0x38))(uVar1,lVar2);
        }
        else {
          if (*(char *)(unaff_x20 + _DAT_113037428) == '\x01') {
            puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
            _objc_opt_self(PTR__OBJC_CLASS___UIView_1126aec20);
            puVar7 = &UNK_110728730;
            _swift_allocObject(&UNK_110728730,0x28,7);
            *(long *)(puVar7 + 0x10) = unaff_x20;
            *(double *)(puVar7 + 0x18) = param_1;
            *(double *)(puVar7 + 0x20) = param_2;
            puVar3 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_80 = FUN_103f89cc0;
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_1000f6b44;
            puStack_88 = &UNK_110728748;
            puStack_78 = puVar7;
            __Block_copy(&puStack_a0);
            puVar7 = puStack_78;
            _objc_retain();
            _swift_release(puVar7);
            puVar7 = &UNK_110728780;
            _swift_allocObject(&UNK_110728780,0x28,7);
            *(long *)(puVar7 + 0x10) = unaff_x20;
            *(code **)(puVar7 + 0x18) = param_5;
            *(undefined8 *)(puVar7 + 0x20) = param_6;
            pcStack_80 = (code *)0x103f89d24;
            puStack_a0 = puVar3;
            uStack_98 = 0x42000000;
            puStack_90 = &UNK_100288f10;
            puStack_88 = &UNK_110728798;
            puStack_78 = puVar7;
            __Block_copy(&puStack_a0);
            puVar7 = puStack_78;
            _objc_retain(unaff_x20);
            func_0x000100b64c10(param_5,param_6);
            _swift_release(puVar7);
            func_0x00010bf03440(0x3fc999999999999a,0,puVar6);
            __Block_release(ppuVar9);
            __Block_release(ppuVar8);
            return;
          }
          func_0x000107c5384c(param_1,param_2,*(undefined8 *)(unaff_x20 + _DAT_113037440));
        }
      }
    }
  }
  if (param_5 != (code *)0x0) {
    (*param_5)();
  }
  return;
}



/* Entry: 103f89548; end: 103f895a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103f89548(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_113037430;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4aee8();
    _swift_unknownObjectRelease(lVar1);
  }
  return lVar2;
}



/* Entry: 103f895a8; end: 103f895ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f895a8(undefined8 param_1,ulong param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130373d8;
  uVar5 = *(ulong *)(lVar1 + 0x18);
  lVar6 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  (**(code **)(lVar6 + 8))();
  uVar2 = 0;
  if (((uint)lVar6 & 0xff) != 1) {
    uVar2 = uVar5;
  }
  if (param_4 == '\0') {
    lVar6 = unaff_x20 + _DAT_113037430;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar6 == 0) {
      return;
    }
    if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89244);
      (*pcVar4)();
    }
    func_0x000107c4aef4();
  }
  else {
    if (param_4 != '\x01') {
      lVar6 = unaff_x20 + _DAT_1130373f0;
      uVar9 = *(undefined8 *)(lVar6 + 0x18);
      lVar7 = *(long *)(lVar6 + 0x20);
      func_0x0001000a8868(lVar6,uVar9);
      (**(code **)(lVar7 + 0x10))(param_1,param_3,uVar9,lVar7);
      uVar5 = *(ulong *)(lVar1 + 0x18);
      lVar7 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar5);
      (**(code **)(lVar7 + 8))();
      lVar6 = _DAT_113037430;
      uVar2 = 0;
      if (((uint)lVar7 & 0xff) != 1) {
        uVar2 = uVar5;
      }
      lVar7 = unaff_x20 + _DAT_113037430;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar7 != 0) {
        if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89248);
          (*pcVar4)();
        }
        lVar8 = *(long *)(lVar1 + 0x18);
        lVar3 = *(long *)(lVar1 + 0x20);
        func_0x0001000a8868(lVar1,lVar8);
        (**(code **)(lVar3 + 0x10))(lVar8,lVar3);
        if (lVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89250);
          (*pcVar4)();
        }
        func_0x000107c4aec8(lVar7);
        _swift_unknownObjectRelease(lVar7);
      }
      uVar5 = param_2;
      FUN_103f89254(param_2,uVar2);
      lVar6 = unaff_x20 + lVar6;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
        return;
      }
      uVar9 = 0;
      FUN_103f98c30(0);
      uVar10 = uVar5;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar5,uVar9);
      _swift_bridgeObjectRelease(uVar5);
      if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89254);
        (*pcVar4)();
      }
      func_0x000107c4aee4(lVar6);
      _swift_unknownObjectRelease(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar10);
      return;
    }
    uVar5 = *(ulong *)(lVar1 + 0x18);
    lVar6 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar5);
    (**(code **)(lVar6 + 8))();
    uVar2 = 0;
    if (((uint)lVar6 & 0xff) != 1) {
      uVar2 = uVar5;
    }
    lVar6 = unaff_x20 + _DAT_113037430;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar6 == 0) {
      return;
    }
    if ((long)(uVar2 | param_2) < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f89240);
      (*pcVar4)();
    }
    lVar7 = *(long *)(lVar1 + 0x18);
    lVar8 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,lVar7);
    (**(code **)(lVar8 + 0x10))(lVar7,lVar8);
    if (lVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8924c);
      (*pcVar4)();
    }
    func_0x000107c4aed8(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
  return;
}



/* Entry: 103f895ac; end: 103f896d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f895ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130373e0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(param_1,param_2,uVar2,lVar3);
  return;
}



/* Entry: 103f896d8; end: 103f8973f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f896d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113037438) == '\x01') {
    FUN_103f86c60();
    func_0x000107c5384c(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 103f89740; end: 103f8976f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f89740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if (*(char *)(unaff_x20 + _DAT_113037438) == '\x01') {
    FUN_103f86c60();
    func_0x000107c5384c(param_1,param_2);
    _objc_release(param_3);
    lVar1 = _DAT_113037410;
    _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_58,0,0);
    func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x58))(param_1,param_2,uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 103f89770; end: 103f897e7;  */

void FUN_103f89770(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_103f8a5a4(0,param_1,param_2);
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



/* Entry: 103f897e8; end: 103f89843;  */

void FUN_103f897e8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_103f98c30();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x113037478;
  plVar5 = (long *)&UNK_10dcb2560;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103f89844; end: 103f89857;  */

ulong FUN_103f89844(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f89990);
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
  FUN_103f89990(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8998c);
      (*pcVar1)();
    }
    FUN_103f89ab0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103f89858; end: 103f8998f;  */

ulong FUN_103f89858(ulong param_1,ulong param_2,ulong param_3,ulong param_4,code *param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f89990);
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
  (*param_5)(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103f8998c);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103f89990; end: 103f89aaf;  */

undefined * FUN_103f89990(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d54430;
    FUN_103f89770(0x112d54430,&PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8,
                  0x112f24598,&UNK_10dcb2580);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103f89ab0; end: 103f89cbf;  */

long FUN_103f89ab0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103f89bc4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103f89bc8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_103f8a5a4(0,0x112d54430,&PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
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
      FUN_103f8a5a4(0,0x112d54430,&PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103f89bc0);
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



/* Entry: 103f89cc0; end: 103f89d07;  */

void FUN_103f89cc0(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_103f86c60(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c5384c(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f89d08; end: 103f89d2f;  */

void FUN_103f89d08(long param_1,long param_2)

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



/* Entry: 103f89d30; end: 103f8a1e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103f89d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 auStack_180 [24];
  long lStack_168;
  long lStack_160;
  undefined1 auStack_158 [24];
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  long lStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  undefined8 uStack_70;
  
  lStack_78 = in_stack_00000068;
  uStack_70 = in_stack_000000a0;
  func_0x0001000c5db4(auStack_90);
  (**(code **)(*(long *)(in_stack_00000068 + -8) + 0x20))();
  lStack_a0 = in_stack_00000078;
  uStack_98 = in_stack_000000b0;
  func_0x0001000c5db4(auStack_b8);
  (**(code **)(*(long *)(in_stack_00000078 + -8) + 0x20))();
  lStack_c8 = in_stack_00000058;
  uStack_c0 = in_stack_00000090;
  func_0x0001000c5db4(auStack_e0);
  (**(code **)(*(long *)(in_stack_00000058 + -8) + 0x20))();
  lStack_f0 = in_stack_00000060;
  uStack_e8 = in_stack_00000098;
  func_0x0001000c5db4(auStack_108);
  (**(code **)(*(long *)(in_stack_00000060 + -8) + 0x20))();
  lStack_118 = in_stack_00000050;
  uStack_110 = in_stack_00000088;
  func_0x0001000c5db4(auStack_130);
  (**(code **)(*(long *)(in_stack_00000050 + -8) + 0x20))();
  lStack_140 = in_stack_00000070;
  uStack_138 = in_stack_000000a8;
  func_0x0001000c5db4(auStack_158);
  (**(code **)(*(long *)(in_stack_00000070 + -8) + 0x20))();
  lVar6 = in_stack_00000040;
  _objc_allocWithZone();
  lVar2 = _DAT_113037430;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113037430,0);
  *(undefined1 *)(lVar6 + _DAT_113037438) = 0;
  *(undefined8 *)(lVar6 + _DAT_113037440) = 0;
  lVar4 = _DAT_113037448;
  *(undefined8 *)(lVar6 + _DAT_113037448) = 0;
  puVar1 = (undefined8 *)(lVar6 + _DAT_1130373c0);
  *puVar1 = param_1;
  puVar1[1] = in_stack_00000080;
  *(undefined8 *)(lVar6 + _DAT_1130373c8) = param_2;
  func_0x000103f8a5e4(param_3,lVar6 + _DAT_1130373d0);
  func_0x000103f8a5e4(auStack_90,lVar6 + _DAT_1130373d8);
  *(undefined8 *)(lVar6 + lVar4) = param_5;
  func_0x000103f8a5e4(auStack_b8,lVar6 + _DAT_113037408);
  func_0x000103f8a5e4(auStack_e0,lVar6 + _DAT_1130373e0);
  *(undefined8 *)(lVar6 + _DAT_1130373e8) = param_8;
  func_0x000103f8a5e4(auStack_108,lVar6 + _DAT_1130373f0);
  func_0x000103f8a5e4(auStack_130,lVar6 + _DAT_1130373f8);
  func_0x000103f8a5e4(auStack_158,lVar6 + _DAT_113037400);
  func_0x000103f8a5e4(in_stack_00000018,lVar6 + _DAT_113037410);
  func_0x000103f8a5e4(in_stack_00000020,lVar6 + _DAT_113037418);
  *(undefined8 *)(lVar6 + _DAT_113037420) = in_stack_00000028;
  *(undefined1 *)(lVar6 + _DAT_113037428) = in_stack_00000030;
  _swift_unknownObjectWeakAssign(lVar6 + lVar2,in_stack_00000038);
  puVar5 = PTR_s_init_1125d9248;
  lStack_160 = in_stack_00000040;
  lStack_168 = lVar6;
  _swift_unknownObjectRetain(param_1);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(in_stack_00000028);
  plVar7 = &lStack_168;
  _objc_msgSendSuper2(plVar7,puVar5);
  lVar2 = (long)plVar7 + _DAT_113037410;
  _swift_beginAccess(lVar2,auStack_180,0x21,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x0001000c6518(lVar2,uVar3);
  pcVar9 = *(code **)(lVar4 + 0x10);
  plVar8 = plVar7;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  (*pcVar9)(plVar7,&PTR_DAT_1107286c0,uVar3,lVar4);
  _swift_endAccess(auStack_180);
  lVar2 = (long)plVar8 + _DAT_113037418;
  _swift_beginAccess(lVar2,auStack_180,0x21,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x0001000c6518(lVar2,uVar3);
  pcVar9 = *(code **)(lVar4 + 0x10);
  _objc_retain();
  (*pcVar9)(plVar7,&PTR_DAT_1107286e8,uVar3,lVar4);
  _swift_endAccess(auStack_180);
  lVar2 = (long)plVar8 + _DAT_113037400;
  _swift_beginAccess(lVar2,auStack_180,0x21,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x0001000c6518(lVar2,uVar3);
  (**(code **)(lVar4 + 0x10))(plVar7,&PTR_DAT_1107286a8,uVar3,lVar4);
  _swift_endAccess(auStack_180);
  _objc_release(plVar8);
  _swift_unknownObjectRelease(in_stack_00000038);
  func_0x0001000834e4(in_stack_00000020);
  func_0x0001000834e4(in_stack_00000018);
  func_0x0001000834e4(param_3);
  func_0x0001000834e4(auStack_158);
  func_0x0001000834e4(auStack_130);
  func_0x0001000834e4(auStack_108);
  func_0x0001000834e4(auStack_e0);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  return plVar8;
}



/* Entry: 103f8a1e8; end: 103f8a347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8a1e8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_1130373d8;
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,*(undefined8 *)(lVar1 + 0x18));
  __s10Foundation9IndexPathV5UIKitE4itemSivg();
  (**(code **)(lVar2 + 0x20))();
  if (lVar1 != 0) {
    lVar2 = unaff_x20 + _DAT_113037430;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      func_0x000107c4aef0();
      _swift_unknownObjectRelease(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 103f8a348; end: 103f8a55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f8a348(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_113037410;
  if (param_3 != 0) {
    _swift_beginAccess(unaff_x20 + _DAT_113037410,auStack_a8,0,0);
    func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_90);
    lVar1 = lStack_70;
    uVar2 = uStack_78;
    func_0x0001000a8868(auStack_90,uStack_78);
    (**(code **)(lVar1 + 0x80))(param_2,param_3,uVar2,lVar1);
    func_0x0001000834e4(auStack_90);
  }
  lVar1 = _DAT_113037400;
  _swift_beginAccess(unaff_x20 + _DAT_113037400,auStack_68,0,0);
  func_0x000103f8a5e4(unaff_x20 + lVar1,auStack_90);
  func_0x0001000a8868(auStack_90,uStack_78);
  (**(code **)(lStack_70 + 0x28))(uStack_78,lStack_70);
  func_0x0001000834e4(auStack_90);
  lVar1 = unaff_x20 + _DAT_113037408;
  _swift_beginAccess(lVar1,auStack_90,0x21,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000c6518(lVar1,uVar2);
  (**(code **)(lVar3 + 0x10))(0,uVar2,lVar3);
  _swift_endAccess(auStack_90);
  lVar1 = unaff_x20 + _DAT_1130373d8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x18))(param_1,uVar2,lVar3);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_1130373c0))[1];
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + _DAT_1130373c0));
  (**(code **)(lVar1 + 8))();
  FUN_103f86c60();
  _objc_release();
  lVar1 = unaff_x20 + _DAT_1130373d0;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  puVar4 = &UNK_1107287d0;
  _swift_allocObject(&UNK_1107287d0,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  pcVar5 = *(code **)(lVar3 + 0x10);
  _objc_retain();
  (*pcVar5)(param_1,FUN_103f8a560,puVar4,uVar2,lVar3);
  _swift_release(puVar4);
  return;
}



/* Entry: 103f8a560; end: 103f8a57f;  */

void FUN_103f8a560(void)

{
  FUN_103f88238();
  return;
}



/* Entry: 103f8a580; end: 103f8a5a3;  */

void FUN_103f8a580(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103f8a588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 103f8a5a4; end: 103f8a627;  */

void FUN_103f8a5a4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103f8a628; end: 103f8a62f;  */

void FUN_103f8a628(long param_1,long param_2)

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



/* Entry: 103f8a630; end: 103f8a673;  */

void FUN_103f8a630(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8a674; end: 103f8a6bb;  */

void FUN_103f8a674(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  lVar2 = *(long *)(lVar3 + 0x30);
  func_0x0001000a8868(lVar3 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x20))(uVar1,lVar2);
  return;
}



/* Entry: 103f8a6bc; end: 103f8a773;  */

void FUN_103f8a6bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x00010bf4cdc0();
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x18,lVar2);
  (**(code **)(lVar1 + 8))(param_1,param_2,lVar2,lVar1);
  if ((*(char *)(unaff_x20 + 0x48) == '\x01') || (*(long *)(unaff_x20 + 0x40) != lVar2)) {
    *(long *)(unaff_x20 + 0x40) = lVar2;
    *(undefined1 *)(unaff_x20 + 0x48) = 0;
    _swift_beginAccess(unaff_x20 + 0x49,auStack_58,0,0);
    if (*(char *)(unaff_x20 + 0x49) == '\x01') {
      func_0x000107c4e57c(*(undefined8 *)(unaff_x20 + 0x10));
    }
  }
  return;
}



/* Entry: 103f8a774; end: 103f8a7bf;  */

void FUN_103f8a774(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103f8a7c0; end: 103f8a877;  */

undefined1 FUN_103f8a7c0(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x49,auStack_38,0,0);
  return *(undefined1 *)(lVar1 + 0x49);
}



/* Entry: 103f8a878; end: 103f8a87b;  */

void FUN_103f8a878(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103f8a87c; end: 103f8a89b;  */

void FUN_103f8a87c(void)

{
  FUN_103f8a6bc();
  return;
}



/* Entry: 103f8a89c; end: 103f8aa47;  */

void FUN_103f8a89c(undefined8 param_1,double *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x18,uVar3);
  uVar9 = *param_3;
  uVar10 = param_3[1];
  (**(code **)(lVar7 + 8))(uVar9,uVar10,uVar3,lVar7);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar7 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar4);
  (**(code **)(lVar7 + 0x38))();
  if (lVar7 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
    lVar2 = *(long *)(unaff_x20 + 0x88);
    func_0x0001000a8868(unaff_x20 + 0x68,uVar1);
    lVar8 = lVar7;
    (**(code **)(lVar2 + 0x30))(uVar4,lVar7,uVar1,lVar2);
    _swift_bridgeObjectRelease(lVar7);
    if (((uint)lVar8 & 0xff) != 1) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
      lVar7 = *(long *)(unaff_x20 + 0x88);
      func_0x0001000a8868(unaff_x20 + 0x68,uVar1);
      uVar5 = uVar3;
      (**(code **)(lVar7 + 0x20))(uVar3,uVar1,lVar7);
      if (uVar5 != 0) {
        uVar6 = uVar5;
        func_0x000107c4a270();
        if (((uVar6 & 1) != 0) || (ABS(*param_2) < 0.5)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
          return;
        }
        FUN_103f8aa48(uVar9,uVar10,*param_2,param_2[1]);
        _swift_unknownObjectRelease(uVar5);
        if (((uint)uVar3 & 0xff) != 1) {
          *param_3 = param_1;
          param_3[1] = uVar4;
        }
      }
    }
  }
  return;
}



/* Entry: 103f8aa48; end: 103f8ae1f;  */

double FUN_103f8aa48(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                    long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  double dVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  if (param_6 != 0) {
    dVar20 = ABS(param_3);
    bVar5 = false;
    if ((0.5 <= dVar20) && (bVar5 = false, !NAN(dVar20))) {
      bVar5 = dVar20 < 1.5;
    }
    if (bVar5) {
      dVar20 = 1.3;
    }
    else {
      dVar12 = 1.9;
      if (dVar20 < 4.0) {
        dVar12 = 1.0;
      }
      bVar5 = false;
      if ((1.5 <= dVar20) && (bVar5 = false, !NAN(dVar20))) {
        bVar5 = dVar20 < 4.0;
      }
      dVar20 = 1.6;
      if (!bVar5) {
        dVar20 = dVar12;
      }
    }
    dVar23 = *(double *)(unaff_x20 + 0x90) + *(double *)(unaff_x20 + 0x98);
    dVar20 = dVar20 * dVar23;
    dVar22 = param_1 - dVar20;
    dVar20 = param_1 + dVar20;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar13 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,uVar2);
    (**(code **)(lVar13 + 0x10))(param_5,uVar2,lVar13);
    dVar12 = dVar22;
    if (dVar22 < param_1) {
      dVar12 = param_1;
    }
    dVar21 = 0.0;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if (param_1 <= dVar20) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(param_3)) {
        bVar5 = param_3 < 0.0;
        bVar6 = param_3 == 0.0;
        bVar7 = false;
      }
    }
    if (bVar6 || bVar5 != bVar7) {
      dVar20 = param_1;
    }
    if (param_3 <= 0.0) {
      dVar12 = dVar22;
    }
    dVar22 = dVar12;
    if (dVar12 < 0.0) {
      dVar22 = 0.0;
    }
    func_0x00010bf4d5e0(param_4);
    dVar19 = dVar12;
    func_0x000107c438d4(param_4);
    _CGRectGetWidth();
    if (dVar12 - dVar19 <= dVar20) {
      dVar20 = dVar12 - dVar19;
    }
    lVar13 = *(long *)(unaff_x20 + 0x30);
    lVar15 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,lVar13);
    (**(code **)(lVar15 + 8))(dVar22,0,lVar13,lVar15);
    lVar15 = *(long *)(unaff_x20 + 0x30);
    lVar18 = *(long *)(unaff_x20 + 0x38);
    func_0x0001000a8868(unaff_x20 + 0x18,lVar15);
    (**(code **)(lVar18 + 8))(dVar20,0,lVar15,lVar18);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar13 < lVar15) {
      while( true ) {
        if (param_5 != lVar13) {
          uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
          lVar18 = *(long *)(unaff_x20 + 0x88);
          func_0x0001000a8868(unaff_x20 + 0x68,uVar2);
          lVar8 = lVar13;
          (**(code **)(lVar18 + 0x20))(lVar13,uVar2,lVar18);
          if (lVar8 != 0) {
            lVar18 = lVar8;
            func_0x000107c4a270();
            if ((int)lVar18 != 0) {
              puVar9 = puVar11;
              _swift_isUniquelyReferenced_nonNull_native();
              puVar10 = puVar11;
              if (((ulong)puVar9 & 1) == 0) {
                puVar10 = (undefined *)0x0;
                func_0x000101755b54(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
              }
              uVar3 = *(ulong *)(puVar10 + 0x10);
              puVar11 = puVar10;
              if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar3) {
                puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
                func_0x000101755b54(puVar11,uVar3 + 1,1,puVar10);
              }
              *(ulong *)(puVar11 + 0x10) = uVar3 + 1;
              *(long *)(puVar11 + uVar3 * 8 + 0x20) = lVar13;
            }
            _swift_unknownObjectRelease(lVar8);
          }
        }
        if (lVar15 == lVar13) break;
        bVar5 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae04);
          (*pcVar4)();
        }
      }
      lVar13 = *(long *)(puVar11 + 0x10);
      if (lVar13 != 0) {
        lVar18 = -0x8000000000000000;
        lVar15 = 0x20;
        lVar8 = 0x7fffffffffffffff;
        do {
          lVar16 = *(long *)(puVar11 + lVar15);
          lVar17 = param_6 - lVar16;
          if (SBORROW8(param_6,lVar16)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae08);
            (*pcVar4)();
          }
          if ((lVar17 < 0) && (bVar5 = SBORROW8(0,lVar17), lVar17 = -lVar17, bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae0c);
            (*pcVar4)();
          }
          lVar14 = lVar8;
          if (lVar17 <= lVar8) {
            lVar1 = lVar18;
            if (lVar16 <= lVar18) {
              lVar1 = lVar16;
            }
            if (lVar18 <= lVar16) {
              lVar18 = lVar16;
            }
            if (0.0 < param_3) {
              lVar1 = lVar18;
            }
            lVar14 = lVar17;
            lVar18 = lVar16;
            if (lVar17 == lVar8) {
              lVar14 = lVar8;
              lVar18 = lVar1;
            }
          }
          lVar15 = lVar15 + 8;
          lVar13 = lVar13 + -1;
          lVar8 = lVar14;
        } while (lVar13 != 0);
        func_0x000107c438d4(param_4);
        dVar20 = (double)(long)(dVar21 / dVar23);
        if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae10);
          (*pcVar4)();
        }
        if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae14);
          (*pcVar4)();
        }
        if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae18);
          (*pcVar4)();
        }
        lVar13 = param_6 - lVar18;
        if (SBORROW8(param_6,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae1c);
          (*pcVar4)();
        }
        if ((lVar13 < 0) && (bVar5 = SBORROW8(0,lVar13), lVar13 = -lVar13, bVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103f8ae20);
          (*pcVar4)();
        }
        if ((lVar18 != -0x8000000000000000) && (lVar13 <= (long)dVar20)) {
          uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
          lVar13 = *(long *)(unaff_x20 + 0x38);
          func_0x0001000a8868(unaff_x20 + 0x18,uVar2);
          (**(code **)(lVar13 + 0x10))(lVar18,uVar2,lVar13);
          _swift_bridgeObjectRelease(puVar11);
          return dVar20;
        }
      }
      _swift_bridgeObjectRelease(puVar11);
    }
  }
  return 0.0;
}


