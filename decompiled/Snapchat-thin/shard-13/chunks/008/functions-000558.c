/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10adb9088; end: 10adb914b; -[LSATouch description] */

void FUN_10adb9088(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  _NSStringFromCGPoint(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar2,param_2,&PTR____CFConstantStringClassReference_110f2e618);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10adb914c; end: 10adb9153; -[LSATouch identifier] */

undefined8 FUN_10adb914c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10adb9154; end: 10adb915b; -[LSATouch normalizedLocationInView] */

undefined1  [16] FUN_10adb9154(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 10adb915c; end: 10adb9163; -[LSATouch phase] */

undefined8 FUN_10adb915c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10adb9164; end: 10adb942f; -[LSATouchProcessingComponent shouldBlockTouchesWithNormalizedTouchPoints:touchTypeMask:] */

undefined8 * FUN_10adb9164(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  double dVar13;
  float fVar15;
  double extraout_d1;
  undefined1 auVar14 [16];
  float fVar16;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *aplStack_110 [2];
  long *plStack_100;
  long *plStack_f8;
  undefined8 auStack_e8 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar9 = param_4;
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c277240();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x00010bf52380(&plStack_100,param_1);
    aplStack_110[0] = (long *)0x0;
    if (plStack_f8 == (long *)0x0) {
      uStack_158 = 0x3f8000003f800000;
      uStack_160 = 0;
    }
    else {
      plVar4 = plStack_f8;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar4 == (long *)0x0) {
        plVar5 = (long *)0x0;
      }
      else {
        aplStack_110[0] = plStack_100;
        plVar5 = plStack_100;
      }
      if (plStack_f8 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uStack_158 = 0x3f8000003f800000;
      uStack_160 = 0;
      if ((plVar5 != (long *)0x0) &&
         (plVar5 = *(long **)(*(long *)(*plVar5 + 0x180) + 0x90), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x18))(&plStack_100,plVar5,2);
        auVar14 = NEON_fmov(0x3f800000,4);
        uStack_160 = CONCAT44(((float)((ulong)plStack_100 >> 0x20) + auVar14._4_4_) * 0.5,
                              (SUB84(plStack_100,0) + auVar14._0_4_) * 0.5);
        uStack_158 = CONCAT44(((float)((ulong)plStack_f8 >> 0x20) + auVar14._12_4_) * 0.5,
                              (SUB84(plStack_f8,0) + auVar14._8_4_) * 0.5);
      }
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar4 + 1;
        do {
          lVar10 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(param_3);
    puVar8 = &uStack_150;
    puVar9 = auStack_e8;
    puVar11 = param_3;
    func_0x00010bf52a60();
    if (puVar11 != (undefined8 *)0x0) {
      lVar10 = *plStack_140;
      fVar15 = (float)((ulong)uStack_160 >> 0x20);
      fVar16 = (float)((ulong)uStack_158 >> 0x20);
      dVar13 = (double)(ulong)(uint)fVar16;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_140 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010bdc1060(*(undefined8 *)(lStack_148 + (long)puVar12 * 8));
          dVar13 = (double)((float)uStack_160 +
                           ((float)uStack_158 - (float)uStack_160) * (float)dVar13);
          uVar6 = uVar3;
          puVar8 = param_4;
          func_0x00010c22dd80(dVar13,(double)(fVar15 + (fVar16 - fVar15) * (float)extraout_d1));
          if ((uVar6 & 1) == 0) {
            puVar11 = (undefined8 *)0x1;
            goto LAB_10adb937c;
          }
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar11 != puVar12);
        puVar8 = &uStack_150;
        puVar9 = auStack_e8;
        puVar11 = param_3;
        func_0x00010bf52a60();
      } while (puVar11 != (undefined8 *)0x0);
    }
    puVar11 = (undefined8 *)0x0;
LAB_10adb937c:
    _objc_release(param_3);
  }
  _objc_release(uVar3);
  puVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar11;
  }
  ___stack_chk_fail();
  FUN_10ad8b754(aplStack_110);
  _objc_release(uVar3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  puVar11 = puVar8;
  func_0x00010bf529e0();
  if (puVar11 != (undefined8 *)0x0) {
    func_0x00010c0f98a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    func_0x00010c0f91a0(puVar12);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  return puVar8;
}



/* Entry: 10adb9430; end: 10adb95b3; -[LSATouchProcessingComponent processTouchSet:completion:] */

void FUN_10adb9430(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = param_1;
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10adb95b4;
    puStack_68 = &UNK_110883780;
    uStack_60 = param_1;
    _objc_retain(param_3);
    puStack_a8 = puVar1;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10adb99e0;
    puStack_90 = &UNK_110c72a10;
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    func_0x00010c0f91a0(uVar3,param_2,puVar4,&puStack_80,&puStack_a8);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(uStack_88);
    _objc_release(lStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb95b4; end: 10adb99df;  */

void FUN_10adb95b4(undefined8 ****param_1)

{
  long **pplVar1;
  char cVar2;
  undefined8 ****ppppuVar3;
  bool bVar4;
  long **pplVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 ***pppuVar8;
  undefined8 uVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  long *plVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  undefined8 ***pppuVar16;
  undefined8 ****ppppuVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long *plStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 ***pppuStack_190;
  undefined8 ***pppuStack_188;
  long lStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  long *plStack_160;
  long **pplStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  long **pplStack_108;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar6 = (long **)0x0;
  if (param_1[4] == (undefined8 ***)0x0) goto LAB_10adb9910;
  func_0x00010bf52380(&plStack_110);
  plStack_160 = (long *)0x0;
  pplVar6 = pplStack_108;
  if (pplStack_108 == (long **)0x0) goto LAB_10adb9910;
  pplVar5 = pplStack_108;
  __ZNSt3__119__shared_weak_count4lockEv();
  if (pplVar5 == (long **)0x0) {
    plVar12 = (long *)0x0;
  }
  else {
    plStack_160 = plStack_110;
    plVar12 = plStack_110;
  }
  pplVar6 = pplStack_108;
  pplStack_158 = pplVar5;
  if (pplStack_108 != (long **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plVar12 != (long *)0x0) {
    lStack_170 = 0;
    lStack_168 = 0;
    plVar7 = *(long **)(*(long *)(*plVar12 + 0x180) + 0x90);
    plStack_178 = &lStack_170;
    if (plVar7 == (long *)0x0) {
LAB_10adb9890:
      plStack_1a8 = &lStack_1a0;
      lStack_1a0 = lStack_170;
      lStack_198 = lStack_168;
    }
    else {
      pppuVar11 = (undefined8 ***)0x2;
      (**(code **)(*plVar7 + 0x18))(&plStack_110);
      pplVar6 = pplStack_108;
      plVar12 = plStack_110;
      pppuVar13 = param_1[5];
      _objc_retain(pppuVar13);
      pppuStack_188 = (undefined8 ****)0x0;
      lStack_180 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      pppuStack_190 = &pppuStack_188;
      _objc_retain(pppuVar13);
      pppuVar8 = pppuVar13;
      func_0x00010bf52a60();
      if (pppuVar8 != (undefined8 ***)0x0) {
        lVar15 = *plStack_140;
        do {
          pppuVar16 = (undefined8 ***)0x0;
          do {
            if (*plStack_140 != lVar15) {
              _objc_enumerationMutation(pppuVar13);
            }
            uVar9 = *(undefined8 *)(lStack_148 + (long)pppuVar16 * 8);
            FUN_10adb9e84();
            ppppuVar3 = (undefined8 ****)pppuStack_188;
            ppppuVar14 = &pppuStack_188;
            ppppuVar17 = &pppuStack_188;
            if ((undefined8 ****)pppuStack_188 != (undefined8 ****)0x0) {
              do {
                while (ppppuVar17 = ppppuVar3, (uint)uVar9 < *(uint *)((long)ppppuVar17 + 0x1c)) {
                  ppppuVar3 = (undefined8 ****)*ppppuVar17;
                  ppppuVar14 = ppppuVar17;
                  if ((undefined8 ****)*ppppuVar17 == (undefined8 ****)0x0) goto LAB_10adb9740;
                }
                if ((uint)uVar9 <= *(uint *)((long)ppppuVar17 + 0x1c)) goto LAB_10adb9788;
                ppppuVar3 = (undefined8 ****)ppppuVar17[1];
              } while ((undefined8 ****)ppppuVar17[1] != (undefined8 ****)0x0);
              ppppuVar14 = ppppuVar17 + 1;
            }
LAB_10adb9740:
            pppuVar10 = (undefined8 ***)0x30;
            __Znwm();
            *(undefined8 *)((long)pppuVar10 + 0x1c) = uVar9;
            *(undefined8 ****)((long)pppuVar10 + 0x24) = pppuVar11;
            *pppuVar10 = (undefined8 **)0x0;
            pppuVar10[1] = (undefined8 **)0x0;
            pppuVar10[2] = ppppuVar17;
            *ppppuVar14 = pppuVar10;
            pppuVar11 = pppuVar10;
            if ((undefined8 ****)*pppuStack_190 != (undefined8 ****)0x0) {
              pppuVar11 = *ppppuVar14;
              pppuStack_190 = (undefined8 ***)*pppuStack_190;
            }
            func_0x000107c27d40(pppuStack_188);
            lStack_180 = lStack_180 + 1;
LAB_10adb9788:
            pppuVar16 = (undefined8 ***)((long)pppuVar16 + 1);
          } while (pppuVar16 != pppuVar8);
          pppuVar8 = pppuVar13;
          func_0x00010bf52a60();
        } while (pppuVar8 != (undefined8 ***)0x0);
      }
      _objc_release(pppuVar13);
      _objc_release(pppuVar13);
      param_1 = (undefined8 ****)pppuStack_190;
      if ((undefined8 ****)pppuStack_190 != &pppuStack_188) {
        uVar9 = NEON_fmov(0x3f800000,4);
        fVar18 = (float)((ulong)uVar9 >> 0x20);
        fVar19 = (SUB84(plVar12,0) + (float)uVar9) * 0.5;
        fVar20 = ((float)((ulong)plVar12 >> 0x20) + fVar18) * 0.5;
        do {
          plStack_110 = *(long **)((long)param_1 + 0x1c);
          pplStack_108 = (long **)CONCAT44(fVar20 + (((float)((ulong)pplVar6 >> 0x20) + fVar18) *
                                                     0.5 - fVar20) *
                                                    (float)((ulong)*(undefined8 *)
                                                                    ((long)param_1 + 0x24) >> 0x20),
                                           fVar19 + ((SUB84(pplVar6,0) + (float)uVar9) * 0.5 -
                                                    fVar19) * (float)*(undefined8 *)
                                                                      ((long)param_1 + 0x24));
          FUN_10ad48ecc(&plStack_178,&plStack_110,&plStack_110);
          ppppuVar3 = (undefined8 ****)param_1[1];
          ppppuVar14 = param_1;
          if ((undefined8 ****)param_1[1] == (undefined8 ****)0x0) {
            do {
              param_1 = (undefined8 ****)ppppuVar14[2];
              bVar4 = (undefined8 ****)*param_1 != ppppuVar14;
              ppppuVar14 = param_1;
            } while (bVar4);
          }
          else {
            do {
              param_1 = ppppuVar3;
              ppppuVar3 = (undefined8 ****)*param_1;
            } while ((undefined8 ****)*param_1 != (undefined8 ****)0x0);
          }
        } while (param_1 != &pppuStack_188);
      }
      FUN_10a1ce910(&pppuStack_190,pppuStack_188);
      plStack_1a8 = plStack_178;
      lStack_1a0 = lStack_170;
      lStack_198 = lStack_168;
      plVar12 = plStack_160;
      if (lStack_168 == 0) goto LAB_10adb9890;
      *(long **)(lStack_170 + 0x10) = &lStack_1a0;
      lStack_170 = 0;
      lStack_168 = 0;
      plStack_178 = &lStack_170;
    }
    FUN_10adbc354(&plStack_110,&plStack_1a8);
    FUN_10ad48158(*(long *)(*plVar12 + 0x180) + 0x158,&plStack_110);
    FUN_10a1ce910(&plStack_110,pplStack_108);
    FUN_10a1ce910(&plStack_1a8,lStack_1a0);
    pplVar6 = &plStack_178;
    FUN_10a1ce910(pplVar6,lStack_170);
    pplVar5 = pplStack_158;
  }
  if (pplVar5 != (long **)0x0) {
    pplVar1 = pplVar5 + 1;
    do {
      plVar12 = *pplVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pplVar1,0x10);
      if (bVar4) {
        *pplVar1 = (long *)((long)plVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plVar12 == (long *)0x0) {
      (*(code *)(*pplVar5)[2])(pplVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pplVar6 = pplVar5;
    }
  }
LAB_10adb9910:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_release(param_1);
    FUN_10a1ce910(&pppuStack_190,pppuStack_188);
    _objc_release(param_1);
    lVar15 = lStack_170;
    FUN_10a1ce910(&plStack_178,lStack_170);
    FUN_10ad8b754(&plStack_160);
    __Unwind_Resume();
    _objc_retain(lVar15);
    plVar12 = pplVar6[4];
    if (plVar12 != (long *)0x0) {
      (*(code *)plVar12[2])(plVar12,lVar15);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar15);
    return;
  }
  return;
}



/* Entry: 10adb99e0; end: 10adb9a33;  */

void FUN_10adb99e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adb9a34; end: 10adb9bcf; -[LSATouchProcessingComponent processTouchArray:completion:] */

void FUN_10adb9a34(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f91a0(param_1);
    _objc_release(puVar2);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adb9bd0; end: 10adb9e83;  */

undefined1  [16] FUN_10adb9bd0(double param_1,double param_2,long *param_3,double param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long **pplVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_188 [8];
  double dStack_180;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long **applStack_130 [2];
  long **pplStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_88;
  double dStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)0x0;
  if (param_3[4] != 0) {
    func_0x00010bf52380(&pplStack_120);
    applStack_130[0] = (long **)0x0;
    plVar6 = plStack_118;
    if (plStack_118 != (long *)0x0) {
      plVar5 = plStack_118;
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar5 == (long *)0x0) {
        pplVar11 = (long **)0x0;
      }
      else {
        applStack_130[0] = pplStack_120;
        pplVar11 = pplStack_120;
      }
      plVar6 = plStack_118;
      if (plStack_118 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (pplVar11 != (long **)0x0) {
        param_1 = 0.0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        lStack_168 = 0;
        uStack_170 = 0;
        uStack_158 = 0;
        plStack_160 = (long *)0x0;
        param_3 = (long *)param_3[5];
        _objc_retain(param_3);
        plVar6 = param_3;
        func_0x00010bf52a60();
        if (plVar6 != (long *)0x0) {
          lVar12 = *plStack_160;
          uVar16 = NEON_fmov(0x3f800000,4);
          do {
            plVar13 = (long *)0x0;
            do {
              if (*plStack_160 != lVar12) {
                _objc_enumerationMutation(param_3);
              }
              uVar7 = *(undefined8 *)(lStack_168 + (long)plVar13 * 8);
              FUN_10adb9e84();
              plVar8 = *(long **)((*pplVar11)[0x30] + 0x90);
              param_1 = param_4;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x18))(&pplStack_120,plVar8,2);
                fVar17 = (float)((ulong)uVar16 >> 0x20);
                fVar14 = (SUB84(pplStack_120,0) + (float)uVar16) * 0.5;
                fVar15 = ((float)((ulong)pplStack_120 >> 0x20) + fVar17) * 0.5;
                param_2 = (double)CONCAT44(fVar15,fVar14);
                param_1 = (double)CONCAT44(fVar15 + (((float)((ulong)plStack_118 >> 0x20) + fVar17)
                                                     * 0.5 - fVar15) *
                                                    (float)((ulong)param_4 >> 0x20),
                                           fVar14 + ((SUB84(plStack_118,0) + (float)uVar16) * 0.5 -
                                                    fVar14) * SUB84(param_4,0));
              }
              plStack_118 = (long *)0x0;
              uStack_110 = 0;
              pplStack_120 = &plStack_118;
              uStack_88 = uVar7;
              dStack_80 = param_1;
              func_0x00010a1d666c(&pplStack_120,&plStack_118,&uStack_88,&uStack_88);
              FUN_10adbc354(auStack_188,&pplStack_120);
              FUN_10a1ce910(&pplStack_120,plStack_118);
              FUN_10ad48158((*pplVar11)[0x30] + 0x158,auStack_188);
              param_4 = dStack_180;
              FUN_10a1ce910(auStack_188);
              plVar13 = (long *)((long)plVar13 + 1);
            } while (plVar6 != plVar13);
            plVar6 = param_3;
            func_0x00010bf52a60();
          } while (plVar6 != (long *)0x0);
        }
        plVar6 = param_3;
        _objc_release();
      }
      if (plVar5 != (long *)0x0) {
        plVar13 = plVar5 + 1;
        do {
          lVar12 = *plVar13;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar6 = plVar5;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    auVar18._8_8_ = param_4;
    auVar18._0_8_ = plVar6;
    return auVar18;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  FUN_10ad8b754(applStack_130);
  __Unwind_Resume();
  _objc_retain();
  plVar5 = plVar6;
  func_0x00010bfe5ec0(plVar6);
  plVar13 = plVar6;
  func_0x00010c0fa9c0();
  uVar10 = 0;
  plVar8 = (long *)&UNK_10e513fc8;
  while( true ) {
    for (; plVar9 = (long *)(&UNK_10e513f78 + uVar10 * 0x10), *plVar9 < (long)plVar13;
        uVar10 = uVar10 * 2 + 2) {
      plVar9 = plVar8;
      if (1 < uVar10) goto LAB_10adb9f10;
    }
    if (1 < uVar10) break;
    uVar10 = uVar10 << 1 | 1;
    plVar8 = plVar9;
  }
LAB_10adb9f10:
  if ((plVar9 != (long *)&UNK_10e513fc8) &&
     (*plVar9 <= (long)plVar13 && plVar9 != (long *)&UNK_10e513fc8)) {
    uVar1 = *(uint *)(plVar9 + 1);
    func_0x00010c0db5e0(plVar6);
    func_0x00010c0db5e0(plVar6);
    _objc_release(plVar6);
    auVar19._12_4_ = (float)param_2;
    auVar19._8_4_ = (float)param_1;
    auVar19._0_8_ = (ulong)plVar5 & 0xffffffff | (ulong)uVar1 << 0x20;
    return auVar19;
  }
  func_0x0001093fd0ac(&UNK_10f61d92d);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10adb9f8c);
  (*pcVar4)();
}



/* Entry: 10adb9e84; end: 10adb9fab;  */

undefined1  [16] FUN_10adb9e84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  
  uVar11 = (undefined4)((ulong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  uVar9 = (undefined4)((ulong)param_1 >> 0x20);
  uVar8 = (undefined4)param_1;
  _objc_retain();
  uVar3 = param_3;
  func_0x00010bfe5ec0(param_3);
  uVar4 = param_3;
  func_0x00010c0fa9c0();
  uVar7 = 0;
  plVar5 = (long *)&UNK_10e513fc8;
  while( true ) {
    for (; plVar6 = (long *)(&UNK_10e513f78 + uVar7 * 0x10), *plVar6 < (long)uVar4;
        uVar7 = uVar7 * 2 + 2) {
      plVar6 = plVar5;
      if (1 < uVar7) goto LAB_10adb9f10;
    }
    if (1 < uVar7) break;
    uVar7 = uVar7 << 1 | 1;
    plVar5 = plVar6;
  }
LAB_10adb9f10:
  if ((plVar6 != (long *)&UNK_10e513fc8) &&
     (*plVar6 <= (long)uVar4 && plVar6 != (long *)&UNK_10e513fc8)) {
    uVar1 = *(uint *)(plVar6 + 1);
    func_0x00010c0db5e0(param_3);
    func_0x00010c0db5e0(param_3);
    _objc_release(param_3);
    auVar12._12_4_ = (float)(double)CONCAT44(uVar11,uVar10);
    auVar12._8_4_ = (float)(double)CONCAT44(uVar9,uVar8);
    auVar12._0_8_ = uVar3 & 0xffffffff | (ulong)uVar1 << 0x20;
    return auVar12;
  }
  func_0x0001093fd0ac(&UNK_10f61d92d);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10adb9f8c);
  (*pcVar2)();
}



/* Entry: 10adb9fac; end: 10adb9fff;  */

void FUN_10adb9fac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adba000; end: 10adba367; -[LSATouchProcessingComponent processPinchGestureWithGestureRecognizer:completion:] */

void FUN_10adba000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  char cStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined4 auStack_a0 [4];
  long lStack_90;
  long lStack_88;
  char cStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_158 = 0;
  dVar2 = 2.54788697744885e-312;
  uStack_148 = 0x7812000000;
  pcStack_140 = FUN_10adba368;
  pcStack_138 = FUN_10adba424;
  uStack_130 = 0;
  puStack_150 = &uStack_158;
  _objc_retain(param_3);
  FUN_10adbc498(auStack_a0,param_3);
  if (cStack_78 == '\x01') {
    func_0x00010c14e120(param_3);
    ppuStack_e0 = &PTR_FUN_110bad578;
    uStack_d8 = 8;
    uStack_d0 = auStack_a0[0];
    uStack_cc = (undefined4)auStack_a0._4_8_;
    uStack_c8 = SUB84(auStack_a0._4_8_,4);
    lStack_b8 = 0;
    uStack_b0 = 0;
    lStack_c0 = 0;
    FUN_10adbc400(&lStack_c0,lStack_90,lStack_88,lStack_88 - lStack_90 >> 3);
    fStack_a8 = (float)dVar2;
    ppuStack_e0 = &PTR_DAT_110badc70;
    ppuStack_128 = &PTR_FUN_110bad578;
    uStack_118 = CONCAT44(uStack_cc,uStack_d0);
    uStack_120 = uStack_d8;
    uStack_110 = uStack_c8;
    lStack_100 = 0;
    uStack_f8 = 0;
    lStack_108 = 0;
    FUN_10adbc400(&lStack_108,lStack_c0,lStack_b8,lStack_b8 - lStack_c0 >> 3);
    ppuStack_128 = &PTR_DAT_110badc70;
    fStack_f0 = fStack_a8;
    cStack_e8 = '\x01';
    ppuStack_e0 = &PTR_FUN_110bad578;
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    if (lStack_90 != 0) {
      __ZdlPv(lStack_90);
    }
  }
  else {
    ppuStack_128 = (undefined **)((ulong)ppuStack_128 & 0xffffffffffffff00);
    cStack_e8 = '\0';
  }
  _objc_release(param_3);
  if (*(char *)(puStack_150 + 0xe) == '\x01') {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c0f91a0(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  __Block_object_dispose(&uStack_158,8);
  if (cStack_e8 == '\x01') {
    ppuStack_128 = &PTR_FUN_110bad578;
    if (lStack_108 != 0) {
      lStack_100 = lStack_108;
      __ZdlPv();
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adba368; end: 10adba423;  */

void FUN_10adba368(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_10adbc400();
    *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110badc70;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



/* Entry: 10adba424; end: 10adba467;  */

void FUN_10adba424(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x58) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10adba468; end: 10adba4b3;  */

void FUN_10adba468(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 10adba4b4; end: 10adba507;  */

void FUN_10adba4b4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adba508; end: 10adba957; -[LSATouchProcessingComponent processPanGestureWithGestureRecognizer:completion:] */

void FUN_10adba508(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  char cStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined4 auStack_a0 [4];
  long lStack_90;
  long lStack_88;
  char cStack_78;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  uStack_198 = 0;
  uStack_188 = 0x8012000000;
  pcStack_180 = FUN_10adba958;
  pcStack_178 = FUN_10adbaa1c;
  uStack_170 = 0;
  puStack_190 = &uStack_198;
  _objc_retain(param_7);
  FUN_10adbc498(auStack_a0,param_7);
  if (cStack_78 == '\x01') {
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar2 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    param_3 = 1.0 / param_3;
    param_4 = 1.0 / param_4;
    _CGAffineTransformMakeScale(&dStack_d0);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_7);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c0df520();
    ppuStack_118 = &PTR_FUN_110bad578;
    uStack_110 = 0x10;
    uStack_108 = auStack_a0[0];
    uStack_104 = (undefined4)auStack_a0._4_8_;
    uStack_100 = SUB84(auStack_a0._4_8_,4);
    lStack_f0 = 0;
    uStack_e8 = 0;
    lStack_f8 = 0;
    FUN_10adbc400(&lStack_f8,lStack_90,lStack_88,lStack_88 - lStack_90 >> 3);
    ppuStack_118 = &PTR_DAT_110badd00;
    uStack_e0 = CONCAT44((float)(dStack_a8 + dStack_b8 * param_4 + dStack_c8 * param_3),
                         (float)(dStack_b0 + dStack_c0 * param_4 + dStack_d0 * param_3));
    uStack_d8 = (undefined4)uVar1;
    ppuStack_168 = &PTR_FUN_110bad578;
    uStack_158 = CONCAT44(uStack_104,uStack_108);
    uStack_160 = uStack_110;
    uStack_150 = uStack_100;
    lStack_140 = 0;
    uStack_138 = 0;
    lStack_148 = 0;
    FUN_10adbc400(&lStack_148,lStack_f8,lStack_f0,lStack_f0 - lStack_f8 >> 3);
    ppuStack_168 = &PTR_DAT_110badd00;
    uStack_130 = uStack_e0;
    uStack_128 = uStack_d8;
    cStack_120 = '\x01';
    ppuStack_118 = &PTR_FUN_110bad578;
    if (lStack_f8 != 0) {
      lStack_f0 = lStack_f8;
      __ZdlPv();
    }
    if (lStack_90 != 0) {
      __ZdlPv(lStack_90);
    }
  }
  else {
    ppuStack_168 = (undefined **)((ulong)ppuStack_168 & 0xffffffffffffff00);
    cStack_120 = '\0';
  }
  _objc_release(param_7);
  if (*(char *)(puStack_190 + 0xf) == '\x01') {
    func_0x00010c0f98a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    func_0x00010c0f91a0(param_5);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(param_8);
  }
  __Block_object_dispose(&uStack_198,8);
  if (cStack_120 == '\x01') {
    ppuStack_168 = &PTR_FUN_110bad578;
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return;
}



/* Entry: 10adba958; end: 10adbaa1b;  */

void FUN_10adba958(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_10adbc400();
    *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110badd00;
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}



/* Entry: 10adbaa1c; end: 10adbaa5f;  */

void FUN_10adbaa1c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x58) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10adbaa60; end: 10adbaab3;  */

void FUN_10adbaa60(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adbaab4; end: 10adbae13; -[LSATouchProcessingComponent processRotationGestureWithGestureRecognizer:completion:] */

void FUN_10adbaab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  char cStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  float fStack_a8;
  undefined4 auStack_a0 [4];
  long lStack_90;
  long lStack_88;
  char cStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_158 = 0;
  dVar2 = 2.54788697744885e-312;
  uStack_148 = 0x7812000000;
  pcStack_140 = FUN_10adbae14;
  pcStack_138 = FUN_10adbaed0;
  uStack_130 = 0;
  puStack_150 = &uStack_158;
  _objc_retain(param_3);
  FUN_10adbc498(auStack_a0,param_3);
  if (cStack_78 == '\x01') {
    func_0x00010c141a80(param_3);
    ppuStack_e0 = &PTR_FUN_110bad578;
    uStack_d8 = 0x40;
    uStack_d0 = auStack_a0[0];
    uStack_cc = (undefined4)auStack_a0._4_8_;
    uStack_c8 = SUB84(auStack_a0._4_8_,4);
    lStack_b8 = 0;
    uStack_b0 = 0;
    lStack_c0 = 0;
    FUN_10adbc400(&lStack_c0,lStack_90,lStack_88,lStack_88 - lStack_90 >> 3);
    fStack_a8 = (float)dVar2;
    ppuStack_e0 = &PTR_DAT_110badcb8;
    ppuStack_128 = &PTR_FUN_110bad578;
    uStack_118 = CONCAT44(uStack_cc,uStack_d0);
    uStack_120 = uStack_d8;
    uStack_110 = uStack_c8;
    lStack_100 = 0;
    uStack_f8 = 0;
    lStack_108 = 0;
    FUN_10adbc400(&lStack_108,lStack_c0,lStack_b8,lStack_b8 - lStack_c0 >> 3);
    ppuStack_128 = &PTR_DAT_110badcb8;
    fStack_f0 = fStack_a8;
    cStack_e8 = '\x01';
    ppuStack_e0 = &PTR_FUN_110bad578;
    if (lStack_c0 != 0) {
      lStack_b8 = lStack_c0;
      __ZdlPv();
    }
    if (lStack_90 != 0) {
      __ZdlPv(lStack_90);
    }
  }
  else {
    ppuStack_128 = (undefined **)((ulong)ppuStack_128 & 0xffffffffffffff00);
    cStack_e8 = '\0';
  }
  _objc_release(param_3);
  if (*(char *)(puStack_150 + 0xe) == '\x01') {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c0f91a0(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  __Block_object_dispose(&uStack_158,8);
  if (cStack_e8 == '\x01') {
    ppuStack_128 = &PTR_FUN_110bad578;
    if (lStack_108 != 0) {
      lStack_100 = lStack_108;
      __ZdlPv();
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adbae14; end: 10adbaecf;  */

void FUN_10adbae14(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_10adbc400();
    *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110badcb8;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



/* Entry: 10adbaed0; end: 10adbaf13;  */

void FUN_10adbaed0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x58) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10adbaf14; end: 10adbaf67;  */

void FUN_10adbaf14(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adbaf68; end: 10adbb27b; -[LSATouchProcessingComponent processTapGestureWithGestureRecognizer:completion:] */

void FUN_10adbaf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  char cStack_58;
  
  _objc_retain(param_4);
  uStack_128 = 0;
  uStack_118 = 0x7012000000;
  pcStack_110 = FUN_10adbb27c;
  pcStack_108 = FUN_10adbb32c;
  uStack_100 = 0;
  puStack_120 = &uStack_128;
  _objc_retain(param_3);
  FUN_10adbc498(auStack_80,param_3);
  _objc_release(param_3);
  if (cStack_58 == '\x01') {
    ppuStack_b8 = &PTR_FUN_110bad578;
    uStack_b0 = 2;
    uStack_a8 = 4;
    uStack_a4 = (undefined4)auStack_80._4_8_;
    uStack_a0 = SUB84(auStack_80._4_8_,4);
    lStack_90 = 0;
    uStack_88 = 0;
    lStack_98 = 0;
    FUN_10adbc400(&lStack_98,lStack_70,lStack_68,lStack_68 - lStack_70 >> 3);
    ppuStack_b8 = &PTR_DAT_110badb98;
    ppuStack_f8 = &PTR_FUN_110bad578;
    uStack_e8 = CONCAT44(uStack_a4,uStack_a8);
    uStack_f0 = uStack_b0;
    uStack_e0 = uStack_a0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    lStack_d8 = 0;
    FUN_10adbc400(&lStack_d8,lStack_98,lStack_90,lStack_90 - lStack_98 >> 3);
    ppuStack_f8 = &PTR_DAT_110badb98;
    cStack_c0 = '\x01';
    ppuStack_b8 = &PTR_FUN_110bad578;
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
    if (lStack_70 != 0) {
      __ZdlPv(lStack_70);
    }
  }
  else {
    ppuStack_f8 = (undefined **)((ulong)ppuStack_f8 & 0xffffffffffffff00);
    cStack_c0 = '\0';
  }
  if (*(char *)(puStack_120 + 0xd) == '\x01') {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c0f91a0(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  __Block_object_dispose(&uStack_128,8);
  if (cStack_c0 == '\x01') {
    ppuStack_f8 = &PTR_FUN_110bad578;
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      __ZdlPv();
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10adbb27c; end: 10adbb32b;  */

void FUN_10adbb27c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_10adbc400((undefined8 *)(param_1 + 0x50),*(long *)(param_2 + 0x50),*(long *)(param_2 + 0x58)
                  ,*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3);
    *(undefined ***)(param_1 + 0x30) = &PTR_DAT_110badb98;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}



/* Entry: 10adbb32c; end: 10adbb36f;  */

void FUN_10adbb32c(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x58) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10adbb370; end: 10adbb3c3;  */

void FUN_10adbb370(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adbb3c4; end: 10adbb6d7; -[LSATouchProcessingComponent processDoubleTapGestureWithGestureRecognizer:completion:] */

void FUN_10adbb3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  char cStack_58;
  
  _objc_retain(param_4);
  uStack_128 = 0;
  uStack_118 = 0x7012000000;
  pcStack_110 = FUN_10adbb6d8;
  pcStack_108 = FUN_10adbb788;
  uStack_100 = 0;
  puStack_120 = &uStack_128;
  _objc_retain(param_3);
  FUN_10adbc498(auStack_80,param_3);
  _objc_release(param_3);
  if (cStack_58 == '\x01') {
    ppuStack_b8 = &PTR_FUN_110bad578;
    uStack_b0 = 4;
    uStack_a8 = 4;
    uStack_a4 = (undefined4)auStack_80._4_8_;
    uStack_a0 = SUB84(auStack_80._4_8_,4);
    lStack_90 = 0;
    uStack_88 = 0;
    lStack_98 = 0;
    FUN_10adbc400(&lStack_98,lStack_70,lStack_68,lStack_68 - lStack_70 >> 3);
    ppuStack_b8 = &PTR_FUN_110badbe0;
    ppuStack_f8 = &PTR_FUN_110bad578;
    uStack_e8 = CONCAT44(uStack_a4,uStack_a8);
    uStack_f0 = uStack_b0;
    uStack_e0 = uStack_a0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    lStack_d8 = 0;
    FUN_10adbc400(&lStack_d8,lStack_98,lStack_90,lStack_90 - lStack_98 >> 3);
    ppuStack_f8 = &PTR_FUN_110badbe0;
    cStack_c0 = '\x01';
    ppuStack_b8 = &PTR_FUN_110bad578;
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
    if (lStack_70 != 0) {
      __ZdlPv(lStack_70);
    }
  }
  else {
    ppuStack_f8 = (undefined **)((ulong)ppuStack_f8 & 0xffffffffffffff00);
    cStack_c0 = '\0';
  }
  if (*(char *)(puStack_120 + 0xd) == '\x01') {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c0f91a0(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  __Block_object_dispose(&uStack_128,8);
  if (cStack_c0 == '\x01') {
    ppuStack_f8 = &PTR_FUN_110bad578;
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      __ZdlPv();
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10adbb6d8; end: 10adbb787;  */

void FUN_10adbb6d8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_10adbc400((undefined8 *)(param_1 + 0x50),*(long *)(param_2 + 0x50),*(long *)(param_2 + 0x58)
                  ,*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3);
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110badbe0;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}



/* Entry: 10adbb788; end: 10adbb7cb;  */

void FUN_10adbb788(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x58) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10adbb7cc; end: 10adbb81f;  */

void FUN_10adbb7cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adbb820; end: 10adbbb33; -[LSATouchProcessingComponent processLongPressGestureWithGestureRecognizer:completion:] */

void FUN_10adbb820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [4];
  long lStack_70;
  long lStack_68;
  char cStack_58;
  
  _objc_retain(param_4);
  uStack_128 = 0;
  uStack_118 = 0x7012000000;
  pcStack_110 = FUN_10adbbb34;
  pcStack_108 = FUN_10adbbbe4;
  uStack_100 = 0;
  puStack_120 = &uStack_128;
  _objc_retain(param_3);
  FUN_10adbc498(auStack_80,param_3);
  _objc_release(param_3);
  if (cStack_58 == '\x01') {
    ppuStack_b8 = &PTR_FUN_110bad578;
    uStack_b0 = 0x80;
    uStack_a8 = auStack_80[0];
    uStack_a4 = (undefined4)auStack_80._4_8_;
    uStack_a0 = SUB84(auStack_80._4_8_,4);
    lStack_90 = 0;
    uStack_88 = 0;
    lStack_98 = 0;
    FUN_10adbc400(&lStack_98,lStack_70,lStack_68,lStack_68 - lStack_70 >> 3);
    ppuStack_b8 = &PTR_FUN_110badc28;
    ppuStack_f8 = &PTR_FUN_110bad578;
    uStack_e8 = CONCAT44(uStack_a4,uStack_a8);
    uStack_f0 = uStack_b0;
    uStack_e0 = uStack_a0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    lStack_d8 = 0;
    FUN_10adbc400(&lStack_d8,lStack_98,lStack_90,lStack_90 - lStack_98 >> 3);
    ppuStack_f8 = &PTR_FUN_110badc28;
    cStack_c0 = '\x01';
    ppuStack_b8 = &PTR_FUN_110bad578;
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
    if (lStack_70 != 0) {
      __ZdlPv(lStack_70);
    }
  }
  else {
    ppuStack_f8 = (undefined **)((ulong)ppuStack_f8 & 0xffffffffffffff00);
    cStack_c0 = '\0';
  }
  if (*(char *)(puStack_120 + 0xd) == '\x01') {
    func_0x00010c0f98a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126db570;
    func_0x00010c277380(PTR_PTR_1126db570);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c0f91a0(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  __Block_object_dispose(&uStack_128,8);
  if (cStack_c0 == '\x01') {
    ppuStack_f8 = &PTR_FUN_110bad578;
    if (lStack_d8 != 0) {
      lStack_d0 = lStack_d8;
      __ZdlPv();
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10adbbb34; end: 10adbbbe3;  */

void FUN_10adbbb34(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_10adbc400((undefined8 *)(param_1 + 0x50),*(long *)(param_2 + 0x50),*(long *)(param_2 + 0x58)
                  ,*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50) >> 3);
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110badc28;
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}



/* Entry: 10adbbbe4; end: 10adbbc27;  */

void FUN_10adbbbe4(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined ***)(param_1 + 0x30) = &PTR_FUN_110bad578;
    lVar1 = *(long *)(param_1 + 0x50);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x58) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10adbbc28; end: 10adbbc7b;  */

void FUN_10adbbc28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10adbbc7c; end: 10adbbdf3; -[LSATouchProcessingComponent _processGestureEvent:] */

void FUN_10adbbc7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  long *plStack_58;
  long *plStack_50;
  
  func_0x00010bf52380(&plStack_58);
  if (plStack_50 != (long *)0x0) {
    plVar4 = plStack_50;
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar8 = plStack_58;
    if (plVar4 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    if (plStack_50 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar8 != (long *)0x0) {
      plVar5 = *(long **)(*(long *)(*plVar8 + 0x180) + 0x90);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(&plStack_58,plVar5,2);
        uVar11 = NEON_fmov(0x3f800000,4);
        fVar13 = (float)((ulong)uVar11 >> 0x20);
        fVar9 = (SUB84(plStack_58,0) + (float)uVar11) * 0.5;
        fVar10 = ((float)((ulong)plStack_58 >> 0x20) + fVar13) * 0.5;
        puVar1 = *(undefined8 **)(param_3 + 0x28);
        fVar12 = (SUB84(plStack_50,0) + (float)uVar11) * 0.5 - fVar9;
        fVar13 = ((float)((ulong)plStack_50 >> 0x20) + fVar13) * 0.5 - fVar10;
        for (puVar6 = *(undefined8 **)(param_3 + 0x20); puVar6 != puVar1; puVar6 = puVar6 + 1) {
          *puVar6 = CONCAT44(fVar10 + fVar13 * (float)((ulong)*puVar6 >> 0x20),
                             fVar9 + fVar12 * (float)*puVar6);
        }
        *(ulong *)(param_3 + 0x14) =
             CONCAT44(fVar10 + fVar13 * (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20),
                      fVar9 + fVar12 * (float)*(undefined8 *)(param_3 + 0x14));
        lVar7 = param_3;
        ___dynamic_cast(param_3,&PTR_DAT_110bad598,&PTR_DAT_110badd20,0);
        if (lVar7 != 0) {
          *(ulong *)(lVar7 + 0x38) =
               CONCAT44(fVar13 * (float)((ulong)*(undefined8 *)(lVar7 + 0x38) >> 0x20),
                        fVar12 * (float)*(undefined8 *)(lVar7 + 0x38));
        }
      }
      FUN_10ad4825c(*(long *)(*plVar8 + 0x180) + 0x158,param_3);
    }
    if (plVar4 != (long *)0x0) {
      plVar8 = plVar4 + 1;
      do {
        lVar7 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10adbbdf4; end: 10adbbdf7; -[LSATouchProcessingComponent componentWillProcessFrame:] */

void FUN_10adbbdf4(void)

{
  return;
}



/* Entry: 10adbbdf8; end: 10adbc0e3; -[LSATouchProcessingComponent componentDidProcessFrame:] */

void FUN_10adbbdf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lStack_a0;
  long lStack_98;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long *plStack_50;
  char cStack_41;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010bf5f1c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52380(&plStack_88,param_1);
  _objc_retain(lVar4);
  plStack_68 = (long *)0x0;
  plStack_60 = (long *)0x0;
  if (plStack_80 != (long *)0x0) {
    plVar5 = plStack_80;
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_60 = plVar5;
    if (plVar5 != (long *)0x0) {
      plStack_68 = plStack_88;
      lVar8 = 0;
      if (plStack_88 != (long *)0x0) {
        plStack_78 = plStack_88;
        plVar1 = plVar5 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          if (*(long *)(*(long *)(*plStack_88 + 0x180) + 0xb8) == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(*(long *)(*(long *)(*plStack_88 + 0x180) + 0xa8) + 0x28);
          }
        }
        else {
          lVar8 = lVar4;
          _objc_retainAutorelease(lVar4);
          func_0x00010bdc3520();
          func_0x000107c31940(&lStack_58,lVar8);
          lVar8 = *plStack_88 + 0x178;
          FUN_10ad3f994(lVar8,&lStack_58);
          if (cStack_41 < '\0') {
            __ZdlPv(lStack_58);
          }
        }
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      goto LAB_10adbbf20;
    }
  }
  lVar8 = 0;
LAB_10adbbf20:
  plVar5 = plStack_60;
  if (plStack_60 != (long *)0x0) {
    plVar1 = plStack_60 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_60 + 0x10))(plStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  _objc_release(lVar4);
  if (plStack_80 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (lVar8 != 0) {
    lVar7 = *(long *)(*(long *)(lVar8 + 0xf8) + 0x1f0);
    plVar5 = *(long **)(*(long *)(lVar8 + 0xf8) + 0x1f8);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_58 = lVar7;
    plStack_50 = plVar5;
    if (lVar7 != 0) {
      puVar6 = PTR_PTR_1126de1a8;
      _objc_alloc(PTR_PTR_1126de1a8);
      FUN_10ad490bc(&lStack_a0,lVar7);
      func_0x00010c054a00(puVar6);
      if (lStack_a0 != 0) {
        lStack_98 = lStack_a0;
        __ZdlPv();
      }
      func_0x00010c218ce0(param_1);
      _objc_release(puVar6);
    }
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 10adbc0e4; end: 10adbc16f; -[LSATouchProcessingComponent component:willSetLens:] */

void FUN_10adbc0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c218ce0(param_1,param_2,0);
  uVar1 = param_4;
  func_0x00010c094540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187520(param_1,param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10adbc170; end: 10adbc173; -[LSATouchProcessingComponent component:didSetLens:] */

void FUN_10adbc170(void)

{
  return;
}



/* Entry: 10adbc174; end: 10adbc2af; -[LSATouchProcessingComponent setCoreManager:announcer:configuration:] */

void FUN_10adbc174(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puStack_48 = PTR_PTR_112701440;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setCoreManager_announcer_configu_11263ea88,&uStack_40,param_4
                      ,param_5);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  func_0x00010bf04760(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10adbc2b0; end: 10adbc2db; -[LSATouchProcessingComponent clearResources] */

void FUN_10adbc2b0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c218ce0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c187530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCurrentLensId__11263f768,0);
  return;
}



/* Entry: 10adbc2dc; end: 10adbc2eb; -[LSATouchProcessingComponent touchHandlingDescriptorForCurrentFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adbc2dc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112784528,1);
  return;
}



/* Entry: 10adbc2ec; end: 10adbc2f7; -[LSATouchProcessingComponent setTouchHandlingDescriptorForCurrentFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adbc2ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10adbc2f8; end: 10adbc307; -[LSATouchProcessingComponent currentLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10adbc2f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278452c);
}



/* Entry: 10adbc308; end: 10adbc313; -[LSATouchProcessingComponent setCurrentLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adbc308(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10adbc314; end: 10adbc353; -[LSATouchProcessingComponent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10adbc314(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278452c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112784528,0);
  return;
}



/* Entry: 10adbc354; end: 10adbc3ff;  */

undefined8 * FUN_10adbc354(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = param_1 + 1;
  *puVar3 = 0;
  param_1[2] = 0;
  *param_1 = puVar3;
  plVar4 = (long *)*param_2;
  while (plVar4 != param_2 + 1) {
    func_0x00010a1d666c(param_1,puVar3,(long)plVar4 + 0x1c,(long)plVar4 + 0x1c);
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return param_1;
}



/* Entry: 10adbc400; end: 10adbc497;  */

void FUN_10adbc400(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long *plVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3d != 0) {
      func_0x0001096b5670();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10adbc47c);
      (*pcVar1)();
    }
    plVar2 = param_1;
    func_0x0001096b5684();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_4);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(plVar2,param_2,param_3);
    }
    param_1[1] = (long)plVar2 + param_3;
  }
  return;
}



/* Entry: 10adbc498; end: 10adbc7f3;  */

void FUN_10adbc498(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 *param_5,ulong param_6)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  int iStack_98;
  float fStack_94;
  float fStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  
  _objc_retain(param_6);
  if (param_6 != 0) {
    uVar3 = param_6;
    func_0x00010c252440();
    uVar7 = 0;
    plVar4 = (long *)&UNK_10e514030;
    while( true ) {
      for (; plVar5 = (long *)(&UNK_10e513fd0 + uVar7 * 0x10), *plVar5 < (long)uVar3;
          uVar7 = uVar7 * 2 + 2) {
        plVar5 = plVar4;
        if (1 < uVar7) goto LAB_10adbc530;
      }
      if (2 < uVar7) break;
      uVar7 = uVar7 << 1 | 1;
      plVar4 = plVar5;
    }
LAB_10adbc530:
    if ((plVar5 == (long *)&UNK_10e514030) ||
       ((long)uVar3 < *plVar5 || plVar5 == (long *)&UNK_10e514030)) {
      func_0x0001093fd0ac(&UNK_10f61d92d);
LAB_10adbc77c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10adbc780);
      (*pcVar2)();
    }
    if ((int)plVar5[1] != -1) {
      fStack_94 = 0.0;
      fStack_90 = 0.0;
      plStack_80 = (long *)0x0;
      plStack_78 = (long *)0x0;
      lStack_88 = 0;
      uVar7 = param_6;
      iStack_98 = (int)plVar5[1];
      func_0x00010c29bf00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      uVar3 = param_6;
      func_0x00010c29bf00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      param_3 = 1.0 / param_3;
      param_4 = 1.0 / param_4;
      _CGAffineTransformMakeScale(&dStack_d0);
      _objc_release(uVar3);
      _objc_release(uVar7);
      uVar7 = param_6;
      func_0x00010c29bf00(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_6);
      _objc_release(uVar7);
      dVar13 = dStack_c0 * param_4 + dStack_d0 * param_3;
      fStack_94 = (float)(dStack_b0 + dVar13);
      fStack_90 = (float)(dStack_a8 + dStack_b8 * param_4 + dStack_c8 * param_3);
      dVar12 = (double)CONCAT44(fStack_90,fStack_94);
      for (uVar7 = 0; uVar3 = param_6, func_0x00010c0df520(), uVar7 < uVar3; uVar7 = uVar7 + 1) {
        uVar3 = param_6;
        func_0x00010c29bf00(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09f140(param_6);
        _objc_release(uVar3);
        dVar14 = dStack_b8 * dVar13;
        dVar11 = dStack_c8 * dVar12;
        dVar13 = dStack_c0 * dVar13 + dStack_d0 * dVar12;
        dVar12 = dStack_b0 + dVar13;
        lVar9 = CONCAT44((float)(dStack_a8 + dVar14 + dVar11),(float)dVar12);
        if (plStack_80 < plStack_78) {
          plVar10 = plStack_80 + 1;
          *plStack_80 = lVar9;
        }
        else {
          lVar8 = (long)plStack_80 - lStack_88;
          uVar3 = (lVar8 >> 3) + 1;
          if (uVar3 >> 0x3d != 0) {
            func_0x0001096b5670();
            goto LAB_10adbc77c;
          }
          uVar6 = (long)plStack_78 - lStack_88 >> 2;
          if (uVar6 <= uVar3) {
            uVar6 = uVar3;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)plStack_78 - lStack_88)) {
            uVar6 = 0x1fffffffffffffff;
          }
          plVar4 = &lStack_88;
          func_0x0001096b5684();
          plVar5 = (long *)((long)plVar4 + lVar8);
          plVar10 = plVar5 + 1;
          *plVar5 = lVar9;
          lVar9 = (long)plVar5 - ((long)plStack_80 - lStack_88);
          _memcpy(lVar9);
          bVar1 = lStack_88 != 0;
          lStack_88 = lVar9;
          plStack_78 = plVar4 + uVar6;
          if (bVar1) {
            plStack_80 = plVar10;
            __ZdlPv();
          }
        }
        plStack_80 = plVar10;
      }
      *param_5 = CONCAT44(fStack_94,iStack_98);
      *(float *)(param_5 + 1) = fStack_90;
      param_5[3] = plStack_80;
      param_5[2] = lStack_88;
      param_5[4] = plStack_78;
      *(undefined1 *)(param_5 + 5) = 1;
      goto LAB_10adbc73c;
    }
  }
  *(undefined1 *)param_5 = 0;
  *(undefined1 *)(param_5 + 5) = 0;
LAB_10adbc73c:
  _objc_release(param_6);
  return;
}



/* Entry: 10adbc7f4; end: 10adbc84b;  */

long FUN_10adbc7f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adbc84c; end: 10adbc963;  */

void FUN_10adbc84c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,ulong param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  func_0x00010bf20c00(param_7);
  param_3 = 1.0 / param_3;
  func_0x00010bf20c00(param_7);
  param_4 = 1.0 / param_4;
  _CGAffineTransformMakeScale(&dStack_80,param_3,param_4);
  uVar4 = param_5;
  func_0x00010c0df520();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      func_0x00010c09f140(param_5,param_6,uVar4,param_7);
      dVar5 = dStack_78 * param_3;
      param_3 = dStack_60 + dStack_70 * param_4 + dStack_80 * param_3;
      param_4 = dStack_58 + dStack_68 * param_4 + dVar5;
      puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297180(param_3,PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar1,param_6,puVar2);
      _objc_release(puVar2);
      uVar4 = uVar4 + 1;
      uVar3 = param_5;
      func_0x00010c0df520();
    } while (uVar4 < uVar3);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10adbc964; end: 10adbca53; -[LSAARFrameDepthDataProvider getDepthsFromFrame:depthParameters:arFrame:] */

void FUN_10adbc964(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_6);
  lVar1 = param_6;
  func_0x00010c14fa00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6dd80();
  _objc_release(lVar1);
  lVar1 = param_6;
  func_0x00010c14fa00(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf45dc0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x00010be1e900(param_1,param_2,param_3,param_4,param_5,param_6,lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10adbca54; end: 10adbcaab; -[LSAARFrameDepthDataProvider dealloc] */

void FUN_10adbca54(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_112701448;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10adbcaac; end: 10adbcde3; -[LSAARFrameDepthDataProvider _getDepthsFromFrame:depthParameters:arFrame:fromDepthMap:fromConfidenceMap:] */

void FUN_10adbcaac(long *param_1,undefined *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  long in_x4;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_af8 [664];
  undefined1 auStack_860 [664];
  undefined1 uStack_5c8;
  undefined8 uStack_5c0;
  long *plStack_5b8;
  undefined1 auStack_5b0 [664];
  undefined1 auStack_318 [664];
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(in_x4);
  if (in_x4 == 0) {
    *param_1 = 0;
  }
  else {
    puVar8 = param_2;
    func_0x00010bdfada0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      func_0x00010be3d4c0(param_1,param_2);
      if (*param_1 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar8 = PTR_PTR_1126de080;
        _objc_alloc(PTR_PTR_1126de080);
        lVar5 = 0;
        lVar9 = *param_1;
        puVar6 = auStack_af8;
        bVar7 = false;
        do {
          FUN_10a4feab8(puVar6,lVar9 + lVar5 * 0x298);
          lVar5 = 1;
          bVar4 = !bVar7;
          puVar6 = auStack_860;
          bVar7 = true;
        } while (bVar4);
        uStack_5c8 = *(undefined1 *)(lVar9 + 0x530);
        uStack_5c0 = *(undefined8 *)(lVar9 + 0x538);
        plStack_5b8 = *(long **)(lVar9 + 0x540);
        if (plStack_5b8 != (long *)0x0) {
          plVar1 = plStack_5b8 + 1;
          do {
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        func_0x00010c00b940(puVar8);
        plVar1 = plStack_5b8;
        if (plStack_5b8 != (long *)0x0) {
          plVar2 = plStack_5b8 + 1;
          do {
            lVar5 = *plVar2;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_5b8 + 0x10))(plStack_5b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        puVar6 = auStack_860;
        lVar5 = -0x530;
        do {
          FUN_10a4feea0(puVar6);
          puVar6 = puVar6 + -0x298;
          lVar5 = lVar5 + 0x298;
        } while (lVar5 != 0);
        func_0x00010bea6d60(param_2);
      }
    }
    else {
      func_0x00010bf6dec0(auStack_5b0,puVar8);
      lVar5 = 0x548;
      __Znwm();
      lVar9 = 0;
      puVar6 = auStack_5b0;
      bVar7 = false;
      do {
        FUN_10acecb84(lVar5 + lVar9 * 0x298,puVar6);
        lVar9 = 1;
        bVar4 = !bVar7;
        puVar6 = auStack_318;
        bVar7 = true;
      } while (bVar4);
      *(undefined1 *)(lVar5 + 0x530) = uStack_80;
      *(undefined8 *)(lVar5 + 0x538) = uStack_78;
      *(undefined8 *)(lVar5 + 0x540) = uStack_70;
      uStack_70 = 0;
      uStack_78 = 0;
      *param_1 = lVar5;
      lVar5 = 0x298;
      do {
        FUN_10a4feea0(auStack_5b0 + lVar5);
        lVar5 = lVar5 + -0x298;
      } while (lVar5 != -0x298);
    }
    _objc_release(puVar8);
  }
  _objc_release(in_x4);
  return;
}



/* Entry: 10adbcde4; end: 10adbd213; -[LSAARFrameDepthDataProvider _internalProvideDepthTrackingData:depthParameters:arFrame:fromDepthMap:fromConfidenceMap:] */

void FUN_10adbcde4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined *unaff_x26;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_7;
  puVar4 = param_4;
  puVar8 = param_5;
  _CVPixelBufferGetPixelFormatType();
  if ((int)puVar3 != 0x66646570) {
    param_4 = puVar4;
    param_5 = puVar8;
    param_8 = param_6;
    if ((bRam000000011330a9e8 & 1) != 0) {
      param_4 = &UNK_10f6adae4;
      param_5 = (undefined8 *)&UNK_10f6adba1;
      puVar3 = (undefined *)0x0;
      param_8 = 0xa9;
      func_0x00010ae06f08(0,1,&UNK_10f6adae4,&UNK_10f6adba1,0xa9,&UNK_10f6adc1a);
    }
    *param_1 = 0;
    goto LAB_10adbd13c;
  }
  puVar3 = param_7;
  _CVPixelBufferGetPixelFormatType();
  _CVPixelBufferGetBytesPerRow(param_7);
  _CVPixelBufferGetWidth(param_7);
  _CVPixelBufferGetHeight(param_7);
  iVar9 = (int)puVar3;
  if (iVar9 < 0x66646973) {
    if (iVar9 != 0x4c303038) {
      iVar1 = 0x66646570;
      goto LAB_10adbcf10;
    }
LAB_10adbcf18:
    _CVPixelBufferLockBaseAddress(param_7,1);
    ppuStack_a8 = &PTR____CFConstantStringClassReference_110f2e638;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_a0 = &PTR____CFConstantStringClassReference_110f2e658;
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_88 = puVar3;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f2e678;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_80 = puVar4;
    func_0x00010c0df820();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f2e698;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_78 = puVar5;
    func_0x00010c0df860();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _CVPixelBufferGetBaseAddress(param_7);
    func_0x00010bf64a40();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = *(undefined8 *)PTR__kCGImageAuxiliaryDataInfoData_110349c70;
    uStack_c0 = *(undefined8 *)PTR__kCGImageAuxiliaryDataInfoDataDescription_110349c78;
    param_6 = 2;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b8 = puVar3;
    puStack_b0 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = 0;
    puVar8 = &uStack_d0;
    unaff_x26 = PTR__OBJC_CLASS___AVDepthData_1126de1b0;
    puVar4 = puVar5;
    func_0x00010bf6dca0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uStack_d0;
    _objc_retain(uStack_d0);
    _CVPixelBufferUnlockBaseAddress(param_7,1);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar7);
    if (unaff_x26 == (undefined *)0x0) goto LAB_10adbd0f4;
    func_0x00010bf22460(param_1,unaff_x26);
  }
  else {
    if ((iVar9 == 0x66646973) || (iVar9 == 0x68646570)) goto LAB_10adbcf18;
    iVar1 = 0x68646973;
LAB_10adbcf10:
    if (iVar9 == iVar1) goto LAB_10adbcf18;
LAB_10adbd0f4:
    param_8 = param_6;
    param_5 = puVar8;
    param_4 = puVar4;
    if ((bRam000000011330a9e8 & 1) != 0) {
      param_4 = &UNK_10f6adae4;
      param_5 = (undefined8 *)&UNK_10f6adba1;
      param_8 = 0xae;
      func_0x00010ae06f08(0,1,&UNK_10f6adae4,&UNK_10f6adba1,0xae,&UNK_10f6adc4f);
    }
    unaff_x26 = (undefined *)0x0;
    *param_1 = 0;
  }
  puVar3 = unaff_x26;
  _objc_release(unaff_x26);
LAB_10adbd13c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x26);
  __Unwind_Resume(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_8,param_4,param_5,1);
  return;
}



/* Entry: 10adbd214; end: 10adbd227; -[LSAARFrameDepthDataProvider _setRetainedContainerWithSelector:containter:arFrame:] */

void FUN_10adbd214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_5,param_3,param_4,1);
  return;
}



/* Entry: 10adbd228; end: 10adbd24f; -[LSAARFrameDepthDataProvider _depthContainerForFrame:] */

void FUN_10adbd228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_getAssociatedObject(param_3,PTR_s__depthContainerForFrame__11255c508);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10adbd250; end: 10adbd3cf; -[LSAARFrameDepthDataProvider .cxx_destruct] */

void FUN_10adbd250(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10adbd3d0; end: 10adbd637;  */

undefined8 ** FUN_10adbd3d0(byte *param_1,long param_2,undefined4 *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 *unaff_x22;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *apuStack_130 [7];
  long lStack_f8;
  undefined8 *puStack_f0;
  byte *pbStack_e8;
  long lStack_e0;
  undefined8 **ppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  byte *pbStack_98;
  long lStack_68;
  
  pppuVar6 = &ppuStack_c0;
  pppuVar7 = &ppuStack_c0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((**(int **)(param_1 + 0x10) == 1) || ((*(byte *)(param_4 + 5) & 1) != 0)) {
    if ((*param_1 & 1) == 0) {
      pbVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      pbVar2 = pbVar1;
      func_0x00010bf18d00();
      *param_1 = (byte)pbVar2;
      _objc_release(pbVar1);
    }
    pbVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    pbVar2 = pbVar1;
    _objc_opt_respondsToSelector();
    _objc_release(pbVar1);
    if (((ulong)pbVar2 & 1) != 0) {
      pbVar1 = param_1 + 8;
      _objc_loadWeakRetained(pbVar1);
      func_0x00010c28b460();
      _objc_release(pbVar1);
    }
    ppuStack_c0 = (undefined8 **)0x0;
    ppuStack_b8 = (undefined8 **)0x0;
    uStack_b0 = 0;
    uStack_a8 = (code *)CONCAT44(uStack_a8._4_4_,0x20000000);
    unaff_x22 = &uStack_a8;
    func_0x0001098af048(&ppuStack_c0,0,&uStack_a8,(long)&uStack_a8 + 4,1);
    uStack_a8 = FUN_10adbd8c8;
    ppuStack_a0 = &PTR_FUN_110c74518;
    param_2 = param_2 + 0x18;
    puVar5 = &uStack_a8;
    pbStack_98 = param_1;
    FUN_10adbd638();
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    ppuStack_d8 = ppuStack_c0;
    pppuVar6 = pppuVar7;
    if (ppuStack_c0 == (undefined8 **)0x0) goto LAB_10adbd58c;
    ppuStack_b8 = ppuStack_c0;
  }
  else {
    ppuStack_c0 = (undefined8 **)0x0;
    ppuStack_b8 = (undefined8 **)0x0;
    uStack_b0 = 0;
    uStack_a8 = FUN_10adbd7a8;
    param_1 = (byte *)&uStack_a8;
    ppuStack_a0 = &PTR_FUN_110c74500;
    param_2 = param_2 + 0x18;
    puVar5 = &uStack_a8;
    FUN_10adbd638();
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
    ppuStack_d8 = ppuStack_c0;
    pppuVar7 = pppuVar6;
    if (ppuStack_c0 == (undefined8 **)0x0) goto LAB_10adbd58c;
  }
  ppuVar3 = ppuStack_c0;
  __ZdlPv();
  ppuStack_d8 = ppuVar3;
  pppuVar6 = pppuVar7;
LAB_10adbd58c:
  *param_3 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuStack_d8;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  ppuVar3 = ppuStack_d8;
  __Unwind_Resume(ppuStack_d8);
  pcStack_c8 = FUN_10adbd638;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_138 = *puVar5;
  puStack_f0 = unaff_x22;
  pbStack_e8 = param_1;
  lStack_e0 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  (**(code **)(puVar5[1] + 0x10))(apuStack_130);
  lStack_148 = (long)pppuVar6[1];
  lStack_150 = (long)*pppuVar6;
  lStack_140 = (long)pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  func_0x0001098aeecc(ppuVar3,&uStack_138,&UNK_110c744e0,&lStack_150);
  if (lStack_150 != 0) {
    lStack_148 = lStack_150;
    __ZdlPv();
  }
  ppuVar4 = apuStack_130;
  (*(code *)*apuStack_130[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
    ___stack_chk_fail();
    if (lStack_150 != 0) {
      lStack_148 = lStack_150;
      __ZdlPv();
    }
    (*(code *)*apuStack_130[0])(apuStack_130);
    __Unwind_Resume();
    *ppuVar4 = (undefined8 *)0x0;
    return ppuVar4;
  }
  return ppuVar3;
}



/* Entry: 10adbd638; end: 10adbd733;  */

undefined8 ** FUN_10adbd638(undefined8 **param_1,undefined8 *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *param_2;
  (**(code **)(param_2[1] + 0x10))(apuStack_70);
  lStack_88 = param_3[1];
  lStack_90 = *param_3;
  lStack_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001098aeecc(param_1,&uStack_78,&UNK_110c744e0,&lStack_90);
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  ppuVar1 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  (*(code *)*apuStack_70[0])(apuStack_70);
  __Unwind_Resume();
  *ppuVar1 = (undefined8 *)0x0;
  return ppuVar1;
}



/* Entry: 10adbd734; end: 10adbd743;  */

void FUN_10adbd734(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10adbd744; end: 10adbd7a7;  */

undefined8 FUN_10adbd744(undefined8 param_1)

{
  func_0x00010adbd76c(param_1,0);
  return param_1;
}



/* Entry: 10adbd7a8; end: 10adbd8ab;  */

void FUN_10adbd7a8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010adbd7dc(&uStack_20,param_3);
  func_0x00010adbd76c();
  return;
}



/* Entry: 10adbd8ac; end: 10adbd8c7;  */

void FUN_10adbd8ac(void)

{
  return;
}



/* Entry: 10adbd8c8; end: 10adbd9a7;  */

void FUN_10adbd8c8(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar1 = &lStack_50;
  plVar3 = &lStack_40;
  lStack_50 = param_1;
  uStack_48 = param_2;
  lStack_40 = param_1;
  uStack_38 = param_2;
  func_0x0001098b9090(plVar3,*param_4);
  if (*plVar3 == 0) {
    return;
  }
  func_0x00010adbd7dc(&lStack_50,param_3);
  lVar4 = *(long *)(param_6 + 0x10);
  lVar2 = lVar4 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != 0) {
    lVar4 = lVar4 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar4;
    func_0x00010c08af00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar2 != 0) {
      plVar3 = (long *)0x8;
      __Znwm();
      *plVar3 = lVar2;
      goto LAB_10adbd96c;
    }
  }
  plVar3 = (long *)0x0;
LAB_10adbd96c:
  func_0x00010adbd76c(plVar1,plVar3);
  return;
}



/* Entry: 10adbd9a8; end: 10adbd9c3;  */

void FUN_10adbd9a8(void)

{
  return;
}



/* Entry: 10adbd9c4; end: 10adbdb73;  */

void FUN_10adbd9c4(long param_1,long param_2,undefined4 *param_3,undefined1 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  code **ppcVar6;
  long *plVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lStack_110;
  code **ppcStack_108;
  long lStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 uStack_a9;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = (code *)CONCAT26(pcStack_88._6_2_,0x10000000000);
  plVar12 = &lStack_a8;
  uStack_a9 = param_4;
  lStack_a8 = param_2;
  func_0x0001098ac018(plVar12,&UNK_10e514038,0x1b,&pcStack_88,0,1);
  pcStack_88 = (code *)0xffffffff;
  ppuStack_80 = (undefined **)(ulong)(uint)ppuStack_80;
  uStack_78 = uStack_78 & 0xffffffffffffff00;
  plVar1 = &lStack_a8;
  lVar9 = 1;
  func_0x0001098ac018(plVar1,&UNK_10e4a670f,0x2b,&pcStack_88,0);
  if (*(long *)(param_1 + 8) == 0) {
    puVar2 = PTR_PTR_1126de1b8;
    _objc_alloc_init();
    uVar10 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar10);
  }
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  pcStack_88 = (code *)CONCAT44((int)plVar1,(int)plVar12);
  pppuVar8 = &ppuStack_80;
  func_0x0001098af048(&lStack_a0,0,&pcStack_88,pppuVar8,2);
  pcStack_88 = FUN_10adbdb74;
  ppuStack_80 = &PTR_FUN_110c74530;
  puStack_70 = &uStack_a9;
  param_2 = param_2 + 0x18;
  ppcVar6 = &pcStack_88;
  plVar7 = &lStack_a0;
  uStack_78 = param_1;
  FUN_10a4fe9a0(param_2,ppcVar6,plVar7);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  lVar11 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  *param_3 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  lVar5 = lVar11;
  __Unwind_Resume();
  plVar4 = &lStack_110;
  pcStack_b8 = FUN_10adbdb74;
  plVar3 = &lStack_100;
  lStack_110 = lVar5;
  ppcStack_108 = ppcVar6;
  lStack_100 = lVar5;
  ppcStack_f8 = ppcVar6;
  ppcStack_f0 = &pcStack_88;
  plStack_e8 = plVar1;
  plStack_e0 = plVar12;
  lStack_d8 = param_1;
  lStack_d0 = param_2;
  lStack_c8 = lVar11;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x00010adbd7dc(plVar3,*(undefined4 *)pppuVar8);
  plVar12 = &lStack_100;
  lStack_100 = lVar5;
  ppcStack_f8 = ppcVar6;
  func_0x00010a2894c0(plVar12,*(undefined4 *)((long)pppuVar8 + 4));
  if (*plVar3 == 0 || *plVar12 == 0) {
    return;
  }
  FUN_10a4ff0c0(&lStack_110,(ulong)plVar7 & 0xffffffff);
  lVar11 = *plVar12;
  plVar12 = *(long **)(lVar9 + 0x10);
  lVar9 = *(long *)*plVar3;
  _objc_retain(lVar9);
  if (**(int **)(lVar11 + 8) == 1) {
    if (plVar12[1] == 0) {
      lStack_100 = 0;
    }
    else {
      func_0x00010bfc4b00(&lStack_100);
    }
    goto LAB_10adbdca4;
  }
  lVar11 = lVar9;
  func_0x00010bf316c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar11 == 0) {
LAB_10adbdc74:
    lVar5 = *plVar12;
  }
  else {
    lVar5 = *plVar12;
    if (lVar5 != lVar11) {
      func_0x00010bf3aca0();
      _objc_retain(lVar11);
      lVar5 = *plVar12;
      *plVar12 = lVar11;
      _objc_release(lVar5);
      goto LAB_10adbdc74;
    }
  }
  if (lVar5 == 0) {
    lStack_100 = 0;
  }
  else {
    func_0x00010bfc4ae0(&lStack_100);
  }
  _objc_release(lVar11);
LAB_10adbdca4:
  _objc_release(lVar9);
  lVar9 = lStack_100;
  lStack_100 = 0;
  lVar11 = *plVar4;
  *plVar4 = lVar9;
  if (lVar11 != 0) {
    func_0x00010adbd388(plVar4);
    lVar9 = lStack_100;
    lStack_100 = 0;
    if (lVar9 != 0) {
      func_0x00010adbd388(&lStack_100);
    }
  }
  return;
}



/* Entry: 10adbdb74; end: 10adbdd1b;  */

void FUN_10adbdb74(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  plVar2 = &lStack_60;
  plVar1 = &lStack_50;
  lStack_60 = param_1;
  uStack_58 = param_2;
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010adbd7dc(plVar1,*param_4);
  plVar6 = &lStack_50;
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010a2894c0(plVar6,param_4[1]);
  if (*plVar1 == 0 || *plVar6 == 0) {
    return;
  }
  FUN_10a4ff0c0(&lStack_60,param_3);
  lVar5 = *plVar6;
  plVar6 = *(long **)(param_6 + 0x10);
  lVar4 = *(long *)*plVar1;
  _objc_retain(lVar4);
  if (**(int **)(lVar5 + 8) == 1) {
    if (plVar6[1] == 0) {
      lStack_50 = 0;
    }
    else {
      func_0x00010bfc4b00(&lStack_50);
    }
    goto LAB_10adbdca4;
  }
  lVar5 = lVar4;
  func_0x00010bf316c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
LAB_10adbdc74:
    lVar3 = *plVar6;
  }
  else {
    lVar3 = *plVar6;
    if (lVar3 != lVar5) {
      func_0x00010bf3aca0();
      _objc_retain(lVar5);
      lVar3 = *plVar6;
      *plVar6 = lVar5;
      _objc_release(lVar3);
      goto LAB_10adbdc74;
    }
  }
  if (lVar3 == 0) {
    lStack_50 = 0;
  }
  else {
    func_0x00010bfc4ae0(&lStack_50);
  }
  _objc_release(lVar5);
LAB_10adbdca4:
  _objc_release(lVar4);
  lVar4 = lStack_50;
  lStack_50 = 0;
  lVar5 = *plVar2;
  *plVar2 = lVar4;
  if (lVar5 != 0) {
    func_0x00010adbd388(plVar2);
    lVar4 = lStack_50;
    lStack_50 = 0;
    if (lVar4 != 0) {
      func_0x00010adbd388(&lStack_50);
    }
  }
  return;
}



/* Entry: 10adbdd1c; end: 10adbdd37;  */

void FUN_10adbdd1c(void)

{
  return;
}



/* Entry: 10adbdd38; end: 10adbde9f;  */

void FUN_10adbdd38(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5,long param_6,undefined4 *param_7,ushort *param_8)

{
  uint *puVar1;
  ushort uVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  long lStack_190;
  undefined8 *puStack_188;
  undefined4 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  uint auStack_140 [18];
  undefined4 *puStack_f8;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  int *piStack_78;
  ulong uStack_70;
  long lStack_48;
  double dVar17;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = (code *)((ulong)uStack_88 & 0xffff000000000000);
  plVar3 = &lStack_a8;
  lVar8 = 1;
  lStack_a8 = param_6;
  func_0x0001098ac018(plVar3,&UNK_10e514038,0x1b,&uStack_88,0);
  if (*(char *)((long)param_8 + 1) == '\x01') {
    *param_5 = *param_5 + 1;
  }
  uVar2 = *param_8;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = (code *)CONCAT44(uStack_88._4_4_,(int)plVar3);
  puVar14 = (undefined4 *)((long)&uStack_88 + 4);
  func_0x0001098af048(&lStack_a0,0,&uStack_88,puVar14,1);
  uStack_88 = FUN_10adbdea0;
  ppuStack_80 = &PTR_FUN_110c74548;
  param_6 = param_6 + 0x18;
  puVar7 = &uStack_88;
  plVar3 = &lStack_a0;
  piStack_78 = param_5;
  uStack_70 = (ulong)uVar2;
  FUN_10a4f520c(param_6,puVar7,plVar3);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  lVar13 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  *param_7 = (int)param_6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar5 = &lStack_190;
  auStack_140[0] = (uint)lVar13;
  auStack_140[1] = (uint)((ulong)lVar13 >> 0x20);
  auStack_140[2] = (uint)puVar7;
  auStack_140[3] = (uint)((ulong)puVar7 >> 0x20);
  puVar4 = auStack_140;
  lStack_190 = lVar13;
  puStack_188 = puVar7;
  func_0x00010adbd7dc(puVar4,*puVar14);
  if (*(long *)puVar4 != 0) {
    func_0x00010a4efc70(&lStack_190,(ulong)plVar3 & 0xffffffff);
    puVar14 = *(undefined4 **)(lVar8 + 0x10);
    lVar13 = **(long **)puVar4;
    _objc_retain(lVar13);
    if (*(char *)(lVar8 + 0x18) == '\x01') {
      lVar8 = lVar13;
      func_0x00010c0b5bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar8;
      func_0x00010bf529e0();
      if (lVar6 == 0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        lVar6 = lVar8;
        func_0x00010bfb1920(lVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27a460();
        uVar10 = 0;
        uStack_178 = in_register_00005008;
        puStack_180 = param_1;
        uStack_168 = in_register_00005028;
        uStack_170 = param_2;
        uStack_158 = in_register_00005048;
        uStack_160 = param_3;
        uStack_148 = in_register_00005068;
        uStack_150 = param_4;
        auStack_140[2] = 0;
        auStack_140[3] = 0;
        auStack_140[0] = 0x3f800000;
        auStack_140[1] = 0;
        auStack_140[6] = 0;
        auStack_140[7] = 0;
        auStack_140[4] = 0;
        auStack_140[5] = 0x3f800000;
        auStack_140[10] = 0x3f800000;
        auStack_140[0xb] = 0;
        auStack_140[8] = 0;
        auStack_140[9] = 0;
        auStack_140[0xe] = 0;
        auStack_140[0xf] = 0x3f800000;
        auStack_140[0xc] = 0;
        auStack_140[0xd] = 0;
        do {
          lVar11 = 0;
          lVar12 = 0;
          do {
            uVar16 = *(uint *)((long)&puStack_180 + (uVar10 & 3) * 4 + lVar11);
            dVar17 = (double)(ulong)uVar16;
            iVar9 = (int)uVar10;
            puVar4 = auStack_140 + lVar12 * 4 + 3;
            if (iVar9 != 3) {
              puVar4 = (uint *)((long)auStack_140 + lVar11);
            }
            puVar1 = auStack_140 + lVar12 * 4 + 2;
            if (iVar9 != 2) {
              puVar1 = puVar4;
            }
            puVar4 = auStack_140 + lVar12 * 4 + 1;
            if (iVar9 != 1) {
              puVar4 = puVar1;
            }
            *puVar4 = uVar16;
            lVar12 = lVar12 + 1;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0x40);
          uVar10 = (ulong)(iVar9 + 1U);
        } while (iVar9 + 1U != 4);
        func_0x00010c064100(lVar6);
        if (lVar13 == 0) {
          puVar15 = (undefined4 *)0x0;
        }
        else {
          func_0x00010bfc4c80(&puStack_f8,(float)dVar17,lVar13);
          puVar15 = puStack_f8;
        }
        _objc_release(lVar6);
      }
      _objc_release(lVar8);
    }
    else {
      auStack_140[0] = 0x3f800000;
      auStack_140[3] = 0;
      auStack_140[4] = 0;
      auStack_140[1] = 0;
      auStack_140[2] = 0;
      auStack_140[5] = 0x3f800000;
      auStack_140[6] = 0;
      auStack_140[7] = 0;
      auStack_140[8] = 0;
      auStack_140[9] = 0;
      auStack_140[10] = 0x3f800000;
      auStack_140[0xd] = 0;
      auStack_140[0xe] = 0;
      auStack_140[0xb] = 0;
      auStack_140[0xc] = 0;
      auStack_140[0xf] = 0x3f800000;
      if (lVar13 == 0) {
        puVar15 = (undefined4 *)0x0;
      }
      else {
        func_0x00010bfc4c80(&puStack_180,0x3f800000,lVar13);
        puVar15 = puStack_180;
      }
    }
    if (puVar15 != (undefined4 *)0x0) {
      puVar15[0x32] = *puVar14;
      *puVar15 = 2;
    }
    _objc_release(lVar13);
    lVar8 = *plVar5;
    *plVar5 = (long)puVar15;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10adbdea0; end: 10adbe0e7;  */

void FUN_10adbdea0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined4 param_7,undefined4 *param_8,
                  undefined8 param_9,long param_10)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint auStack_90 [18];
  undefined4 *puStack_48;
  double dVar14;
  
  plVar3 = &lStack_e0;
  auStack_90[0] = (uint)param_5;
  auStack_90[1] = (uint)((ulong)param_5 >> 0x20);
  auStack_90[2] = (uint)param_6;
  auStack_90[3] = (uint)((ulong)param_6 >> 0x20);
  puVar2 = auStack_90;
  lStack_e0 = param_5;
  uStack_d8 = param_6;
  func_0x00010adbd7dc(puVar2,*param_8);
  if (*(long *)puVar2 != 0) {
    func_0x00010a4efc70(&lStack_e0,param_7);
    puVar11 = *(undefined4 **)(param_10 + 0x10);
    lVar10 = **(long **)puVar2;
    _objc_retain(lVar10);
    if (*(char *)(param_10 + 0x18) == '\x01') {
      lVar4 = lVar10;
      func_0x00010c0b5bc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      if (lVar5 == 0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        lVar5 = lVar4;
        func_0x00010bfb1920(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c27a460();
        uVar7 = 0;
        uStack_c8 = in_register_00005008;
        puStack_d0 = param_1;
        uStack_b8 = in_register_00005028;
        uStack_c0 = param_2;
        uStack_a8 = in_register_00005048;
        uStack_b0 = param_3;
        uStack_98 = in_register_00005068;
        uStack_a0 = param_4;
        auStack_90[2] = 0;
        auStack_90[3] = 0;
        auStack_90[0] = 0x3f800000;
        auStack_90[1] = 0;
        auStack_90[6] = 0;
        auStack_90[7] = 0;
        auStack_90[4] = 0;
        auStack_90[5] = 0x3f800000;
        auStack_90[10] = 0x3f800000;
        auStack_90[0xb] = 0;
        auStack_90[8] = 0;
        auStack_90[9] = 0;
        auStack_90[0xe] = 0;
        auStack_90[0xf] = 0x3f800000;
        auStack_90[0xc] = 0;
        auStack_90[0xd] = 0;
        do {
          lVar8 = 0;
          lVar9 = 0;
          do {
            uVar13 = *(uint *)((long)&puStack_d0 + (uVar7 & 3) * 4 + lVar8);
            dVar14 = (double)(ulong)uVar13;
            iVar6 = (int)uVar7;
            puVar2 = auStack_90 + lVar9 * 4 + 3;
            if (iVar6 != 3) {
              puVar2 = (uint *)((long)auStack_90 + lVar8);
            }
            puVar1 = auStack_90 + lVar9 * 4 + 2;
            if (iVar6 != 2) {
              puVar1 = puVar2;
            }
            puVar2 = auStack_90 + lVar9 * 4 + 1;
            if (iVar6 != 1) {
              puVar2 = puVar1;
            }
            *puVar2 = uVar13;
            lVar9 = lVar9 + 1;
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != 0x40);
          uVar7 = (ulong)(iVar6 + 1U);
        } while (iVar6 + 1U != 4);
        func_0x00010c064100(lVar5);
        if (lVar10 == 0) {
          puVar12 = (undefined4 *)0x0;
        }
        else {
          func_0x00010bfc4c80(&puStack_48,(float)dVar14,lVar10);
          puVar12 = puStack_48;
        }
        _objc_release(lVar5);
      }
      _objc_release(lVar4);
    }
    else {
      auStack_90[0] = 0x3f800000;
      auStack_90[3] = 0;
      auStack_90[4] = 0;
      auStack_90[1] = 0;
      auStack_90[2] = 0;
      auStack_90[5] = 0x3f800000;
      auStack_90[6] = 0;
      auStack_90[7] = 0;
      auStack_90[8] = 0;
      auStack_90[9] = 0;
      auStack_90[10] = 0x3f800000;
      auStack_90[0xd] = 0;
      auStack_90[0xe] = 0;
      auStack_90[0xb] = 0;
      auStack_90[0xc] = 0;
      auStack_90[0xf] = 0x3f800000;
      if (lVar10 == 0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        func_0x00010bfc4c80(&puStack_d0,0x3f800000,lVar10);
        puVar12 = puStack_d0;
      }
    }
    if (puVar12 != (undefined4 *)0x0) {
      puVar12[0x32] = *puVar11;
      *puVar12 = 2;
    }
    _objc_release(lVar10);
    lVar10 = *plVar3;
    *plVar3 = (long)puVar12;
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10adbe0e8; end: 10adbe103;  */

void FUN_10adbe0e8(void)

{
  return;
}



/* Entry: 10adbe104; end: 10adbe25f;  */

void FUN_10adbe104(long *param_1,undefined8 *param_2,undefined4 *param_3,byte *param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x22;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = param_2;
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x40000000;
  }
  else {
    uStack_78._4_4_ = CONCAT22(uStack_78._6_2_,(ushort)*param_4);
    uStack_78._0_4_ = 0x1000000;
    ppuVar1 = &puStack_98;
    func_0x0001098ac018(ppuVar1,&UNK_10e514038,0x1b,&uStack_78,0,1);
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    uStack_80 = 0;
    uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)ppuVar1);
    func_0x0001098af048(&plStack_90,0,&uStack_78,(long)&uStack_78 + 4,1);
    unaff_x22 = &uStack_78;
    uStack_78 = FUN_10adbe378;
    ppuStack_70 = &PTR_FUN_110c74560;
    puVar2 = param_2 + 3;
    param_2 = &uStack_78;
    plStack_68 = param_1;
    FUN_10a4fcca4(puVar2,param_2,&plStack_90);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    param_1 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plStack_88 = plStack_90;
      __ZdlPv();
    }
  }
  *param_3 = (int)puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x22 + 1);
  if (plStack_90 != (long *)0x0) {
    plStack_88 = plStack_90;
    __ZdlPv();
  }
  __Unwind_Resume(param_1);
  if (param_2 != (undefined8 *)0x0) {
    pcStack_a8 = FUN_10adbe260;
    puStack_c8 = param_2 + 4;
    puStack_c0 = puVar2;
    plStack_b8 = param_1;
    puStack_b0 = &stack0xfffffffffffffff0;
    FUN_10adbe2b0(&puStack_c8);
    puStack_c8 = param_2 + 1;
    FUN_10adbe2b0(&puStack_c8);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10adbe260; end: 10adbe2af;  */

void FUN_10adbe260(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2 + 0x20;
    FUN_10adbe2b0(&lStack_28);
    lStack_28 = param_2 + 8;
    FUN_10adbe2b0(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10adbe2b0; end: 10adbe31f;  */

void FUN_10adbe2b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10adbe320();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10adbe320; end: 10adbe377;  */

long FUN_10adbe320(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adbe378; end: 10adbe45b;  */

void FUN_10adbe378(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar2 = &lStack_50;
  plVar1 = &lStack_40;
  lStack_50 = param_1;
  uStack_48 = param_2;
  lStack_40 = param_1;
  uStack_38 = param_2;
  func_0x00010adbd7dc(plVar1,*param_4);
  if (*plVar1 != 0) {
    FUN_10a4fcdbc(&lStack_50,param_3);
    lVar5 = **(long **)(param_6 + 0x10);
    uVar4 = *(undefined8 *)*plVar1;
    _objc_retain(uVar4);
    if (lVar5 == 0) {
      lStack_40 = 0;
    }
    else {
      func_0x00010bfc77e0(&lStack_40,lVar5);
    }
    _objc_release(uVar4);
    lVar5 = lStack_40;
    lStack_40 = 0;
    lVar3 = *plVar2;
    *plVar2 = lVar5;
    if (lVar3 != 0) {
      FUN_10adbe260(plVar2);
      lVar5 = lStack_40;
      lStack_40 = 0;
      if (lVar5 != 0) {
        FUN_10adbe260(&lStack_40);
      }
    }
  }
  return;
}



/* Entry: 10adbe45c; end: 10adbe477;  */

void FUN_10adbe45c(void)

{
  return;
}



/* Entry: 10adbe478; end: 10adbe507; -[LSAARKitMeshesConverter init] */

undefined1 * FUN_10adbe478(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701450;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0x100000001;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10adbe508; end: 10adbe697; -[LSAARKitMeshesConverter getMeshByIDFromArKitFrame:frame:] */

void FUN_10adbe508(long param_1,long param_2,int param_3,ulong param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar11 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c0b5ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    lVar16 = *plStack_120;
    do {
      uVar19 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_4);
        }
        puVar13 = *(undefined1 **)(lStack_128 + uVar19 * 8);
        lVar8 = *(long *)(param_1 + 0x10);
        puVar11 = (undefined8 *)puVar13;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar8 != 0) && (lVar17 = lVar8, func_0x00010c282760(), (int)lVar17 == param_3)) {
          _objc_retain(puVar13);
          _objc_release(lVar8);
          goto LAB_10adbe618;
        }
        _objc_release(lVar8);
        uVar19 = uVar19 + 1;
      } while (uVar7 != uVar19);
      uVar7 = param_4;
      puVar11 = &uStack_130;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  puVar13 = (undefined1 *)0x0;
LAB_10adbe618:
  uVar7 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  __Unwind_Resume();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar11);
  if (puVar11 != (undefined8 *)0x0) {
    _objc_retain(uVar7);
    lVar8 = *(long *)(uVar7 + 0x18);
    lVar17 = *(long *)(uVar7 + 0x20);
    _objc_retain(uVar7);
    if (lVar8 == lVar17) {
LAB_10adbe72c:
      param_2 = lVar8;
      lVar15 = lVar8;
      if (lVar8 != lVar17) {
        while (lVar15 = lVar15 + 0x10, param_2 = lVar8, lVar15 != lVar17) {
          uVar19 = uVar7;
          FUN_10adbfa10(uVar7,puVar11,lVar15);
          if ((uVar19 & 1) == 0) {
            FUN_10adbfc98(lVar8,lVar15);
            lVar8 = lVar8 + 0x10;
          }
        }
      }
    }
    else {
      do {
        uVar19 = uVar7;
        FUN_10adbfa10(uVar7,puVar11,lVar8);
        if ((uVar19 & 1) != 0) goto LAB_10adbe72c;
        lVar8 = lVar8 + 0x10;
        param_2 = lVar17;
      } while (lVar8 != lVar17);
    }
    _objc_release(uVar7);
    FUN_10adbf984((long *)(uVar7 + 0x18),param_2,*(undefined8 *)(uVar7 + 0x20));
    _objc_release(uVar7);
    puVar9 = (undefined1 *)puVar11;
    func_0x00010c0b5ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar9;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (puVar13 != (undefined1 *)0x0) {
      puVar20 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(puVar9);
        }
        lVar17 = *(long *)(uVar7 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar17 == 0) {
          func_0x00010bef9fe0(uVar7);
        }
        _objc_release(lVar17);
        puVar20 = puVar20 + 1;
      } while (puVar13 != puVar20);
      puVar13 = puVar9;
      func_0x00010bf52a60();
    }
    _objc_release(puVar9);
  }
  piVar10 = (int *)0x38;
  __Znwm();
  piVar10[0xc] = 0;
  piVar10[0xd] = 0;
  piVar10[6] = 0;
  piVar10[7] = 0;
  piVar10[4] = 0;
  piVar10[5] = 0;
  piVar10[10] = 0;
  piVar10[0xb] = 0;
  piVar10[8] = 0;
  piVar10[9] = 0;
  piVar10[2] = 0;
  piVar10[3] = 0;
  piVar10[0] = 0;
  piVar10[1] = 0;
  *extraout_x8 = piVar10;
  iVar3 = *(int *)(uVar7 + 0xc);
  *(int *)(uVar7 + 0xc) = iVar3 + 1;
  *piVar10 = iVar3;
  if (piVar10 + 2 != (int *)(uVar7 + 0x18)) {
    puVar14 = *(undefined8 **)(uVar7 + 0x18);
    puVar2 = *(undefined8 **)(uVar7 + 0x20);
    lVar8 = (long)puVar2 - (long)puVar14;
    if (lVar8 == 0) {
      piVar10[4] = 0;
      piVar10[5] = 0;
    }
    else {
      puVar18 = (undefined8 *)(lVar8 >> 4);
      FUN_10aa3df38();
      if ((ulong)puVar18 >> 0x3c != 0) goto LAB_10adbe98c;
      puVar12 = (undefined8 *)(*(long *)(piVar10 + 6) - *(long *)(piVar10 + 2) >> 3);
      if (puVar12 <= puVar18) {
        puVar12 = puVar18;
      }
      if (0x7fffffffffffffef < (ulong)(*(long *)(piVar10 + 6) - *(long *)(piVar10 + 2))) {
        puVar12 = (undefined8 *)0xfffffffffffffff;
      }
      if ((ulong)puVar12 >> 0x3c != 0) goto LAB_10adbe98c;
      FUN_10adbfd10();
      *(undefined8 **)(piVar10 + 2) = puVar12;
      *(undefined8 **)(piVar10 + 4) = puVar12;
      *(undefined8 **)(piVar10 + 6) = puVar12 + param_2 * 2;
      do {
        lVar8 = puVar14[1];
        uVar21 = *puVar14;
        puVar12[1] = puVar14[1];
        *puVar12 = uVar21;
        if (lVar8 != 0) {
          plVar1 = (long *)(lVar8 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar14 = puVar14 + 2;
        puVar12 = puVar12 + 2;
      } while (puVar14 != puVar2);
      *(undefined8 **)(piVar10 + 4) = puVar12;
    }
  }
  FUN_10aa3df38(piVar10 + 8);
  uVar21 = *(undefined8 *)(uVar7 + 0x30);
  *(undefined8 *)(piVar10 + 10) = *(undefined8 *)(uVar7 + 0x38);
  *(undefined8 *)(piVar10 + 8) = uVar21;
  *(undefined8 *)(piVar10 + 0xc) = *(undefined8 *)(uVar7 + 0x40);
  *(undefined8 *)(uVar7 + 0x38) = 0;
  *(undefined8 *)(uVar7 + 0x40) = 0;
  *(undefined8 *)(uVar7 + 0x30) = 0;
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
LAB_10adbe98c:
  FUN_10adbfcfc();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10adbe994);
  (*pcVar6)();
}



/* Entry: 10adbe698; end: 10adbea07; -[LSAARKitMeshesConverter getMeshesFromFrame:] */

void FUN_10adbe698(undefined8 *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  if (param_4 != 0) {
    _objc_retain(param_2);
    lVar12 = *(long *)(param_2 + 0x18);
    lVar15 = *(long *)(param_2 + 0x20);
    _objc_retain(param_2);
    if (lVar12 == lVar15) {
LAB_10adbe72c:
      param_3 = lVar12;
      lVar14 = lVar12;
      if (lVar12 != lVar15) {
        while (lVar14 = lVar14 + 0x10, param_3 = lVar12, lVar14 != lVar15) {
          uVar7 = param_2;
          FUN_10adbfa10(param_2,param_4,lVar14);
          if ((uVar7 & 1) == 0) {
            FUN_10adbfc98(lVar12,lVar14);
            lVar12 = lVar12 + 0x10;
          }
        }
      }
    }
    else {
      do {
        uVar7 = param_2;
        FUN_10adbfa10(param_2,param_4,lVar12);
        if ((uVar7 & 1) != 0) goto LAB_10adbe72c;
        lVar12 = lVar12 + 0x10;
        param_3 = lVar15;
      } while (lVar12 != lVar15);
    }
    _objc_release(param_2);
    FUN_10adbf984((long *)(param_2 + 0x18),param_3,*(undefined8 *)(param_2 + 0x20));
    _objc_release(param_2);
    lVar14 = param_4;
    func_0x00010c0b5ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar14;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar12 != 0) {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar14);
        }
        lVar8 = *(long *)(param_2 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
          func_0x00010bef9fe0(param_2);
        }
        _objc_release(lVar8);
        lVar17 = lVar17 + 1;
      } while (lVar12 != lVar17);
      lVar12 = lVar14;
      func_0x00010bf52a60();
    }
    _objc_release(lVar14);
  }
  piVar9 = (int *)0x38;
  __Znwm();
  piVar9[0xc] = 0;
  piVar9[0xd] = 0;
  piVar9[6] = 0;
  piVar9[7] = 0;
  piVar9[4] = 0;
  piVar9[5] = 0;
  piVar9[10] = 0;
  piVar9[0xb] = 0;
  piVar9[8] = 0;
  piVar9[9] = 0;
  piVar9[2] = 0;
  piVar9[3] = 0;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *param_1 = piVar9;
  iVar3 = *(int *)(param_2 + 0xc);
  *(int *)(param_2 + 0xc) = iVar3 + 1;
  *piVar9 = iVar3;
  if (piVar9 + 2 != (int *)(param_2 + 0x18)) {
    puVar13 = *(undefined8 **)(param_2 + 0x18);
    puVar2 = *(undefined8 **)(param_2 + 0x20);
    lVar12 = (long)puVar2 - (long)puVar13;
    if (lVar12 == 0) {
      piVar9[4] = 0;
      piVar9[5] = 0;
    }
    else {
      puVar16 = (undefined8 *)(lVar12 >> 4);
      FUN_10aa3df38();
      if ((ulong)puVar16 >> 0x3c != 0) goto LAB_10adbe98c;
      puVar11 = (undefined8 *)(*(long *)(piVar9 + 6) - *(long *)(piVar9 + 2) >> 3);
      if (puVar11 <= puVar16) {
        puVar11 = puVar16;
      }
      if (0x7fffffffffffffef < (ulong)(*(long *)(piVar9 + 6) - *(long *)(piVar9 + 2))) {
        puVar11 = (undefined8 *)0xfffffffffffffff;
      }
      if ((ulong)puVar11 >> 0x3c != 0) goto LAB_10adbe98c;
      FUN_10adbfd10();
      *(undefined8 **)(piVar9 + 2) = puVar11;
      *(undefined8 **)(piVar9 + 4) = puVar11;
      *(undefined8 **)(piVar9 + 6) = puVar11 + param_3 * 2;
      do {
        lVar12 = puVar13[1];
        uVar18 = *puVar13;
        puVar11[1] = puVar13[1];
        *puVar11 = uVar18;
        if (lVar12 != 0) {
          plVar1 = (long *)(lVar12 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar13 = puVar13 + 2;
        puVar11 = puVar11 + 2;
      } while (puVar13 != puVar2);
      *(undefined8 **)(piVar9 + 4) = puVar11;
    }
  }
  FUN_10aa3df38(piVar9 + 8);
  uVar18 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(piVar9 + 10) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(piVar9 + 8) = uVar18;
  *(undefined8 *)(piVar9 + 0xc) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_10adbe98c:
  FUN_10adbfcfc();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10adbe994);
  (*pcVar6)();
}



/* Entry: 10adbea08; end: 10adbecef; -[LSAARKitMeshesConverter updateARAnchors:] */

void FUN_10adbea08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,int **param_6,ulong param_7)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  int *piVar18;
  undefined8 uVar19;
  undefined **unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  undefined8 uVar20;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  int aiStack_218 [14];
  int *piStack_1e0;
  ulong uStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long *plStack_180;
  ulong uStack_178;
  int *piStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_178 = param_7;
  _objc_retain(param_7);
  plStack_180 = (long *)(param_5 + 0x30);
  lVar17 = *plStack_180;
  lVar6 = *(long *)(param_5 + 0x38);
  while (uVar15 = uStack_178, lVar6 != lVar17) {
    lVar6 = lVar6 + -0x10;
    FUN_10adbe320();
  }
  *(long *)(param_5 + 0x38) = lVar17;
  uVar19 = 0;
  uVar20 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  _objc_retain(uStack_178);
  uVar8 = 0;
  uVar7 = uVar15;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    unaff_x25 = *plStack_150;
    unaff_x26 = &PTR_PTR_1126de000;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_150 != unaff_x25) {
          _objc_enumerationMutation(uStack_178);
        }
        unaff_x23 = *(ulong *)(lStack_158 + unaff_x27 * 8);
        param_6 = (int **)PTR__OBJC_CLASS___ARMeshAnchor_1126de1c0;
        _objc_opt_class();
        uVar8 = unaff_x23;
        _objc_opt_isKindOfClass();
        if ((uVar8 & 1) != 0) {
          unaff_x22 = *(long *)(param_5 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x22 != 0) {
            lVar6 = unaff_x22;
            func_0x00010c282760();
            for (puVar13 = *(undefined8 **)(param_5 + 0x18);
                puVar13 != *(undefined8 **)(param_5 + 0x20); puVar13 = puVar13 + 2) {
              piStack_170 = (int *)*puVar13;
              if (*piStack_170 == (int)lVar6) {
                lStack_168 = puVar13[1];
                if (lStack_168 != 0) {
                  plVar1 = (long *)(lStack_168 + 8);
                  do {
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar4) {
                      *plVar1 = *plVar1 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                goto LAB_10adbeb64;
              }
            }
            piStack_170 = (int *)0x0;
            lStack_168 = 0;
LAB_10adbeb64:
            lVar6 = lStack_168;
            unaff_x28 = piStack_170;
            param_6 = &piStack_170;
            FUN_10adbecf0(unaff_x23,param_6,0);
            puVar13 = *(undefined8 **)(param_5 + 0x38);
            if (puVar13 < *(undefined8 **)(param_5 + 0x40)) {
              *puVar13 = unaff_x28;
              puVar13[1] = lVar6;
              unaff_x24 = puVar13 + 2;
            }
            else {
              lVar17 = (long)puVar13 - *plStack_180;
              uVar8 = (lVar17 >> 4) + 1;
              if (uVar8 >> 0x3c != 0) {
                FUN_10adbfcfc();
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10adbec98);
                (*pcVar5)();
              }
              uVar14 = (long)*(undefined8 **)(param_5 + 0x40) - *plStack_180;
              uVar15 = (long)uVar14 >> 3;
              if (uVar15 <= uVar8) {
                uVar15 = uVar8;
              }
              if (0x7fffffffffffffef < uVar14) {
                uVar15 = 0xfffffffffffffff;
              }
              plStack_f8 = plStack_180;
              FUN_10adbfd10();
              puVar13 = (undefined8 *)(uVar15 + lVar17);
              uVar15 = uVar15 + (long)param_6 * 0x10;
              *puVar13 = unaff_x28;
              puVar13[1] = lVar6;
              unaff_x24 = puVar13 + 2;
              param_6 = *(int ***)(param_5 + 0x30);
              unaff_x23 = (long)puVar13 - (*(long *)(param_5 + 0x38) - (long)param_6);
              _memcpy(unaff_x23);
              uStack_118 = *(undefined8 *)(param_5 + 0x30);
              *(ulong *)(param_5 + 0x30) = unaff_x23;
              *(undefined8 **)(param_5 + 0x38) = unaff_x24;
              uStack_100 = *(undefined8 *)(param_5 + 0x40);
              *(ulong *)(param_5 + 0x40) = uVar15;
              uStack_110 = uStack_118;
              uStack_108 = uStack_118;
              FUN_10acf96a4(&uStack_118);
            }
            *(undefined8 **)(param_5 + 0x38) = unaff_x24;
          }
          _objc_release(unaff_x22);
        }
        unaff_x27 = unaff_x27 + 1;
      } while (unaff_x27 != uVar7);
      uVar8 = 0;
      uVar7 = uStack_178;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uStack_178);
  uVar7 = uStack_178;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uStack_178);
  _objc_release(uStack_178);
  uVar14 = uVar7;
  __Unwind_Resume();
  pcStack_188 = FUN_10adbecf0;
  piStack_1e0 = unaff_x28;
  uStack_1d8 = unaff_x27;
  ppuStack_1d0 = unaff_x26;
  lStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  uStack_1b8 = unaff_x23;
  lStack_1b0 = unaff_x22;
  uStack_1a8 = 0;
  uStack_1a0 = uVar7;
  uStack_198 = uVar15;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain();
  func_0x00010c27a460(uVar14);
  uVar15 = 0;
  uStack_258 = uVar20;
  uStack_260 = uVar19;
  uStack_248 = in_register_00005028;
  uStack_250 = param_2;
  uStack_238 = in_register_00005048;
  uStack_240 = param_3;
  uStack_228 = in_register_00005068;
  uStack_230 = param_4;
  aiStack_218[0] = 0;
  aiStack_218[1] = 0;
  uStack_220 = 0x3f800000;
  aiStack_218[4] = 0;
  aiStack_218[5] = 0;
  aiStack_218[2] = 0;
  aiStack_218[3] = 0x3f800000;
  aiStack_218[8] = 0x3f800000;
  aiStack_218[9] = 0;
  aiStack_218[6] = 0;
  aiStack_218[7] = 0;
  aiStack_218[0xc] = 0;
  aiStack_218[0xd] = 0x3f800000;
  aiStack_218[10] = 0;
  aiStack_218[0xb] = 0;
  do {
    lVar17 = 0;
    lVar6 = 0;
    do {
      iVar12 = (int)uVar15;
      piVar18 = aiStack_218 + lVar6 * 4 + 1;
      if (iVar12 != 3) {
        piVar18 = (int *)((long)&uStack_220 + lVar17);
      }
      piVar2 = aiStack_218 + lVar6 * 4;
      if (iVar12 != 2) {
        piVar2 = piVar18;
      }
      piVar18 = (int *)((long)&uStack_220 + lVar6 * 0x10 + 4);
      if (iVar12 != 1) {
        piVar18 = piVar2;
      }
      *piVar18 = *(int *)((long)&uStack_260 + (uVar15 & 3) * 4 + lVar17);
      lVar6 = lVar6 + 1;
      lVar17 = lVar17 + 0x10;
    } while (lVar17 != 0x40);
    uVar15 = (ulong)(iVar12 + 1U);
  } while (iVar12 + 1U != 4);
  FUN_10adbfd44(&uStack_220,*param_6 + 1,*param_6 + 4);
  (*param_6)[8] = 0x42c80000;
  uVar15 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar15;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar7;
  func_0x00010bfeca60();
  uVar9 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf529e0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar15);
  if ((uVar8 & 1) == 0) {
    uVar15 = uVar14;
    func_0x00010bfc1860(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar15;
    func_0x00010c299120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar8);
    _objc_release(uVar15);
  }
  piVar18 = *param_6;
  uVar15 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010c299120();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf529e0();
  func_0x0001096b5198(piVar18 + 10,uVar7);
  _objc_release(uVar8);
  _objc_release(uVar15);
  uVar19 = *(undefined8 *)(*param_6 + 10);
  uVar15 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010c299120();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf21c40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  _memcpy(uVar19,uVar9,*(long *)(*param_6 + 0xc) - *(long *)(*param_6 + 10));
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar15);
  piVar18 = *param_6;
  func_0x00010a008f4c(&uStack_220,*(long *)(piVar18 + 10),
                      (*(long *)(piVar18 + 0xc) - *(long *)(piVar18 + 10) >> 2) *
                      -0x5555555555555555);
  *(undefined8 *)(piVar18 + 0x28) = uStack_220;
  piVar18[0x2a] = aiStack_218[0];
  piVar18 = *param_6;
  *(ulong *)(piVar18 + 0x2b) = CONCAT44(aiStack_218[2],aiStack_218[1]);
  piVar18[0x2d] = aiStack_218[3];
  piVar18 = *param_6;
  uVar15 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010c0db7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf529e0();
  func_0x0001096b5198(piVar18 + 0x16,uVar7);
  _objc_release(uVar8);
  _objc_release(uVar15);
  uVar19 = *(undefined8 *)(*param_6 + 0x16);
  uVar15 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010c0db7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf21c40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  _memcpy(uVar19,uVar9,*(long *)(*param_6 + 0x18) - *(long *)(*param_6 + 0x16));
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar15);
  uVar15 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf25f60();
  _objc_release(uVar8);
  _objc_release(uVar15);
  func_0x0001074287b0(*param_6 + 0x10,uVar11 * uVar16);
  uVar19 = *(undefined8 *)(*param_6 + 0x10);
  uVar15 = uVar14;
  func_0x00010bfc1860(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar8;
  func_0x00010bf21c40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  _memcpy(uVar19,uVar9,(*(long *)(*param_6 + 0x12) - *(long *)(*param_6 + 0x10) >> 2) * uVar7);
  _objc_release(uVar16);
  _objc_release(uVar8);
  _objc_release(uVar15);
  piVar18 = *param_6;
  uVar15 = uVar14;
  func_0x00010bfc1860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf39d00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf529e0();
  uVar16 = *(long *)(piVar18 + 0x24) - *(long *)(piVar18 + 0x22);
  if (uVar7 < uVar16 || uVar7 - uVar16 == 0) {
    if (uVar7 < uVar16) {
      *(ulong *)(piVar18 + 0x24) = *(long *)(piVar18 + 0x22) + uVar7;
    }
  }
  else {
    FUN_10acfbb48(piVar18 + 0x22,uVar7 - uVar16);
  }
  _objc_release(uVar8);
  _objc_release(uVar15);
  uVar15 = uVar14;
  func_0x00010bfc1860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010bf39d00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bf529e0();
  _objc_release(uVar8);
  _objc_release(uVar15);
  if (uVar7 != 0) {
    uVar19 = *(undefined8 *)(*param_6 + 0x22);
    uVar15 = uVar14;
    func_0x00010bfc1860(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar15;
    func_0x00010bf39d00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bf21c40();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar7;
    _objc_retainAutorelease();
    func_0x00010bf4df40();
    _memcpy(uVar19,uVar16,*(long *)(*param_6 + 0x24) - *(long *)(*param_6 + 0x22));
    _objc_release(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar15);
  }
  _objc_release(uVar14);
  return;
}



/* Entry: 10adbecf0; end: 10adbf35f;  */

void FUN_10adbecf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long *param_6,ulong param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 in_register_00005068;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [4];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  func_0x00010c27a460(param_5);
  uVar8 = 0;
  uStack_d8 = in_register_00005008;
  uStack_e0 = param_1;
  uStack_c8 = in_register_00005028;
  uStack_d0 = param_2;
  uStack_b8 = in_register_00005048;
  uStack_c0 = param_3;
  uStack_a8 = in_register_00005068;
  uStack_b0 = param_4;
  auStack_98[0] = 0;
  auStack_98[1] = 0;
  uStack_a0 = 0x3f800000;
  uStack_88 = 0;
  auStack_98[2] = 0;
  auStack_98[3] = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_80 = 0;
  uStack_68 = 0x3f80000000000000;
  uStack_70 = 0;
  do {
    lVar10 = 0;
    lVar11 = 0;
    do {
      iVar7 = (int)uVar8;
      puVar2 = auStack_98 + lVar11 * 4 + 1;
      if (iVar7 != 3) {
        puVar2 = (undefined4 *)((long)&uStack_a0 + lVar10);
      }
      puVar1 = auStack_98 + lVar11 * 4;
      if (iVar7 != 2) {
        puVar1 = puVar2;
      }
      puVar2 = (undefined4 *)((long)&uStack_a0 + lVar11 * 0x10 + 4);
      if (iVar7 != 1) {
        puVar2 = puVar1;
      }
      *puVar2 = *(undefined4 *)((long)&uStack_e0 + (uVar8 & 3) * 4 + lVar10);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x40);
    uVar8 = (ulong)(iVar7 + 1U);
  } while (iVar7 + 1U != 4);
  FUN_10adbfd44(&uStack_a0,*param_6 + 4,*param_6 + 0x10);
  *(undefined4 *)(*param_6 + 0x20) = 0x42c80000;
  uVar8 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfeca60();
  uVar9 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  if ((param_7 & 1) == 0) {
    uVar8 = param_5;
    func_0x00010bfc1860(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c299120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar8);
  }
  lVar11 = *param_6;
  uVar8 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c299120();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf529e0();
  func_0x0001096b5198(lVar11 + 0x28,uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar12 = *(undefined8 *)(*param_6 + 0x28);
  uVar8 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c299120();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf21c40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  _memcpy(uVar12,uVar5,*(long *)(*param_6 + 0x30) - *(long *)(*param_6 + 0x28));
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  lVar11 = *param_6;
  func_0x00010a008f4c(&uStack_a0,*(long *)(lVar11 + 0x28),
                      (*(long *)(lVar11 + 0x30) - *(long *)(lVar11 + 0x28) >> 2) *
                      -0x5555555555555555);
  *(undefined8 *)(lVar11 + 0xa0) = uStack_a0;
  *(undefined4 *)(lVar11 + 0xa8) = auStack_98[0];
  lVar11 = *param_6;
  *(ulong *)(lVar11 + 0xac) = CONCAT44(auStack_98[2],auStack_98[1]);
  *(undefined4 *)(lVar11 + 0xb4) = auStack_98[3];
  lVar11 = *param_6;
  uVar8 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0db7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf529e0();
  func_0x0001096b5198(lVar11 + 0x58,uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar12 = *(undefined8 *)(*param_6 + 0x58);
  uVar8 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010c0db7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf21c40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  _memcpy(uVar12,uVar5,*(long *)(*param_6 + 0x60) - *(long *)(*param_6 + 0x58));
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar3;
  func_0x00010bf25f60();
  _objc_release(uVar3);
  _objc_release(uVar8);
  func_0x0001074287b0(*param_6 + 0x40,uVar6 * uVar4);
  uVar12 = *(undefined8 *)(*param_6 + 0x40);
  uVar8 = param_5;
  func_0x00010bfc1860(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf9f3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf21c40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  _objc_retainAutorelease();
  func_0x00010bf4df40();
  _memcpy(uVar12,uVar5,(*(long *)(*param_6 + 0x48) - *(long *)(*param_6 + 0x40) >> 2) * uVar9);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  lVar11 = *param_6;
  uVar8 = param_5;
  func_0x00010bfc1860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf39d00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  uVar9 = *(long *)(lVar11 + 0x90) - *(long *)(lVar11 + 0x88);
  if (uVar4 < uVar9 || uVar4 - uVar9 == 0) {
    if (uVar4 < uVar9) {
      *(ulong *)(lVar11 + 0x90) = *(long *)(lVar11 + 0x88) + uVar4;
    }
  }
  else {
    FUN_10acfbb48(lVar11 + 0x88,uVar4 - uVar9);
  }
  _objc_release(uVar3);
  _objc_release(uVar8);
  uVar8 = param_5;
  func_0x00010bfc1860();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf39d00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar8);
  if (uVar4 != 0) {
    uVar12 = *(undefined8 *)(*param_6 + 0x88);
    uVar8 = param_5;
    func_0x00010bfc1860(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010bf39d00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21c40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    _objc_retainAutorelease();
    func_0x00010bf4df40();
    _memcpy(uVar12,uVar9,*(long *)(*param_6 + 0x90) - *(long *)(*param_6 + 0x88));
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar8);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 10adbf360; end: 10adbf4bb; -[LSAARKitMeshesConverter addARAnchors:] */

void FUN_10adbf360(undefined8 param_1,undefined **param_2,long param_3)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong unaff_x22;
  undefined **unaff_x23;
  long *plVar19;
  undefined **unaff_x24;
  long *plVar20;
  long unaff_x25;
  undefined **unaff_x26;
  undefined1 *puVar21;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  long lStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined1 *puStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_190;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar18 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar15 = param_3;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    unaff_x23 = (undefined **)*puStack_110;
    unaff_x24 = &PTR_PTR_1126de000;
    do {
      unaff_x25 = 0;
      do {
        if ((undefined **)*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x22 = *(ulong *)(lStack_118 + unaff_x25 * 8);
        param_2 = (undefined **)PTR__OBJC_CLASS___ARMeshAnchor_1126de1c0;
        _objc_opt_class();
        uVar9 = unaff_x22;
        _objc_opt_isKindOfClass();
        if ((uVar9 & 1) != 0) {
          func_0x00010bef9fe0(param_1);
        }
        unaff_x25 = unaff_x25 + 1;
      } while (lVar15 != unaff_x25);
      lVar15 = param_3;
      puVar18 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release(param_3);
  lVar15 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_128 = FUN_10adbf4bc;
  lStack_190 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar18);
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  plStack_240 = (long *)0x0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  _objc_retain(puVar18);
  puVar14 = &uStack_250;
  puVar10 = (undefined1 *)puVar18;
  puStack_258 = (undefined1 *)puVar18;
  func_0x00010bf52a60();
  if (puVar10 != (undefined1 *)0x0) {
    unaff_x25 = *plStack_240;
    unaff_x26 = &PTR_PTR_1126de000;
    do {
      puVar21 = (undefined1 *)0x0;
      do {
        if (*plStack_240 != unaff_x25) {
          _objc_enumerationMutation(puStack_258);
        }
        unaff_x23 = *(undefined ***)(lStack_248 + (long)puVar21 * 8);
        param_2 = (undefined **)PTR__OBJC_CLASS___ARMeshAnchor_1126de1c0;
        _objc_opt_class();
        ppuVar11 = unaff_x23;
        _objc_opt_isKindOfClass();
        if (((ulong)ppuVar11 & 1) != 0) {
          unaff_x22 = *(ulong *)(lVar15 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x22 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(lVar15 + 0x10));
            ppuVar2 = *(undefined ***)(lVar15 + 0x20);
            ppuVar11 = *(undefined ***)(lVar15 + 0x18);
            unaff_x23 = ppuVar11;
            for (; ppuVar11 != ppuVar2; ppuVar11 = ppuVar11 + 2) {
              uVar3 = *(uint *)*ppuVar11;
              unaff_x24 = (undefined **)(ulong)uVar3;
              uVar9 = unaff_x22;
              func_0x00010c282760();
              if (uVar3 == (uint)uVar9) {
                unaff_x23 = ppuVar11;
                ppuVar7 = ppuVar11;
                if (ppuVar11 != ppuVar2) {
                  while (unaff_x24 = ppuVar7 + 2, unaff_x23 = ppuVar11, unaff_x24 != ppuVar2) {
                    uVar3 = *(uint *)*unaff_x24;
                    puVar18 = (undefined8 *)(ulong)uVar3;
                    uVar9 = unaff_x22;
                    func_0x00010c282760();
                    ppuVar7 = unaff_x24;
                    if (uVar3 != (uint)uVar9) {
                      FUN_10adbfc98(ppuVar11,unaff_x24);
                      ppuVar11 = ppuVar11 + 2;
                    }
                  }
                }
                break;
              }
              unaff_x23 = ppuVar2;
            }
            param_2 = unaff_x23;
            FUN_10adbf984(lVar15 + 0x18,unaff_x23,*(undefined8 *)(lVar15 + 0x20));
          }
          _objc_release(unaff_x22);
        }
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar10);
      puVar14 = &uStack_250;
      puVar10 = puStack_258;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined1 *)0x0);
  }
  _objc_release(puStack_258);
  puVar10 = puStack_258;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_190) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_258);
  _objc_release(puStack_258);
  puVar21 = puVar10;
  __Unwind_Resume();
  pcStack_268 = FUN_10adbf6f4;
  ppuStack_2b0 = unaff_x26;
  lStack_2a8 = unaff_x25;
  ppuStack_2a0 = unaff_x24;
  ppuStack_298 = unaff_x23;
  uStack_290 = unaff_x22;
  uStack_288 = 0;
  puStack_280 = puVar10;
  puStack_278 = (undefined1 *)puVar18;
  ppuStack_270 = &puStack_130;
  _objc_retain(puVar14);
  plVar12 = (long *)0xd0;
  __Znwm();
  plVar19 = plVar12 + 1;
  *plVar19 = 0;
  plVar12[2] = 0;
  *plVar12 = (long)&PTR_FUN_110c6dd08;
  plVar20 = plVar12 + 3;
  plVar12[4] = 0;
  *plVar20 = 0;
  plVar12[6] = 0;
  plVar12[5] = 0;
  plVar12[7] = 0;
  *(undefined4 *)((long)plVar12 + 0x34) = 0x3f800000;
  plVar12[9] = 0;
  plVar12[8] = 0;
  plVar12[0xb] = 0;
  plVar12[10] = 0;
  plVar12[0xd] = 0;
  plVar12[0xc] = 0;
  plVar12[0xf] = 0;
  plVar12[0xe] = 0;
  plVar12[0x11] = 0;
  plVar12[0x10] = 0;
  plVar12[0x13] = 0;
  plVar12[0x12] = 0;
  plVar12[0x15] = 0;
  plVar12[0x14] = 0;
  plVar12[0x17] = 0;
  plVar12[0x16] = 0;
  plVar12[0x19] = 0;
  plVar12[0x18] = 0;
  iVar4 = *(int *)(puVar21 + 8);
  *(int *)(puVar21 + 8) = iVar4 + 1;
  *(int *)plVar20 = iVar4;
  puVar18 = *(undefined8 **)(puVar21 + 0x20);
  plStack_2e8 = plVar20;
  plStack_2e0 = plVar12;
  if (puVar18 < *(undefined8 **)(puVar21 + 0x28)) {
    *puVar18 = plVar20;
    puVar18[1] = plVar12;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = *plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar18 = puVar18 + 2;
  }
  else {
    plStack_2b8 = (long *)(puVar21 + 0x18);
    lVar15 = (long)puVar18 - *plStack_2b8;
    uVar9 = (lVar15 >> 4) + 1;
    if (uVar9 >> 0x3c != 0) {
      FUN_10adbfcfc();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10adbf8e8);
      (*pcVar8)();
    }
    uVar16 = (long)*(undefined8 **)(puVar21 + 0x28) - *plStack_2b8;
    uVar17 = (long)uVar16 >> 3;
    if (uVar17 <= uVar9) {
      uVar17 = uVar9;
    }
    if (0x7fffffffffffffef < uVar16) {
      uVar17 = 0xfffffffffffffff;
    }
    FUN_10adbfd10();
    puVar1 = (undefined8 *)(uVar17 + lVar15);
    *puVar1 = plVar20;
    puVar1[1] = plVar12;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar6) {
        *plVar19 = *plVar19 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar18 = puVar1 + 2;
    lVar15 = (long)puVar1 - (*(long *)(puVar21 + 0x20) - *(long *)(puVar21 + 0x18));
    _memcpy(lVar15);
    uStack_2d8 = *(undefined8 *)(puVar21 + 0x18);
    *(long *)(puVar21 + 0x18) = lVar15;
    *(undefined8 **)(puVar21 + 0x20) = puVar18;
    uStack_2c0 = *(undefined8 *)(puVar21 + 0x28);
    *(ulong *)(puVar21 + 0x28) = uVar17 + (long)param_2 * 0x10;
    uStack_2d0 = uStack_2d8;
    uStack_2c8 = uStack_2d8;
    FUN_10acf96a4(&uStack_2d8);
  }
  *(undefined8 **)(puVar21 + 0x20) = puVar18;
  FUN_10adbecf0(puVar14,&plStack_2e8,1);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(puVar21 + 0x10));
  _objc_release(puVar13);
  do {
    lVar15 = *plVar19;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar6) {
      *plVar19 = lVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar15 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
  _objc_release(puVar14);
  return;
}



/* Entry: 10adbf4bc; end: 10adbf6f3; -[LSAARKitMeshesConverter removeARAnchors:] */

void FUN_10adbf4bc(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *plVar14;
  undefined8 *unaff_x24;
  long *plVar15;
  long unaff_x25;
  undefined8 *puVar16;
  undefined **unaff_x26;
  ulong uVar17;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  ulong uStack_138;
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
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar8 = &uStack_130;
  uVar7 = param_3;
  uStack_138 = param_3;
  func_0x00010bf52a60();
  if (uVar7 != 0) {
    unaff_x25 = *plStack_120;
    unaff_x26 = &PTR_PTR_1126de000;
    do {
      uVar17 = 0;
      do {
        if (*plStack_120 != unaff_x25) {
          _objc_enumerationMutation(uStack_138);
        }
        unaff_x23 = *(undefined8 **)(lStack_128 + uVar17 * 8);
        param_2 = (undefined8 *)PTR__OBJC_CLASS___ARMeshAnchor_1126de1c0;
        _objc_opt_class();
        puVar8 = unaff_x23;
        _objc_opt_isKindOfClass();
        if (((ulong)puVar8 & 1) != 0) {
          unaff_x22 = *(long *)(param_1 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x22 != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
            puVar16 = *(undefined8 **)(param_1 + 0x20);
            puVar8 = *(undefined8 **)(param_1 + 0x18);
            unaff_x23 = puVar8;
            for (; puVar8 != puVar16; puVar8 = puVar8 + 2) {
              uVar2 = *(uint *)*puVar8;
              unaff_x24 = (undefined8 *)(ulong)uVar2;
              lVar11 = unaff_x22;
              func_0x00010c282760();
              if (uVar2 == (uint)lVar11) {
                unaff_x23 = puVar8;
                puVar1 = puVar8;
                if (puVar8 != puVar16) {
                  while (unaff_x24 = puVar1 + 2, unaff_x23 = puVar8, unaff_x24 != puVar16) {
                    uVar2 = *(uint *)*unaff_x24;
                    param_3 = (ulong)uVar2;
                    lVar11 = unaff_x22;
                    func_0x00010c282760();
                    puVar1 = unaff_x24;
                    if (uVar2 != (uint)lVar11) {
                      FUN_10adbfc98(puVar8,unaff_x24);
                      puVar8 = puVar8 + 2;
                    }
                  }
                }
                break;
              }
              unaff_x23 = puVar16;
            }
            param_2 = unaff_x23;
            FUN_10adbf984(param_1 + 0x18,unaff_x23,*(undefined8 *)(param_1 + 0x20));
          }
          _objc_release(unaff_x22);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar7);
      puVar8 = &uStack_130;
      uVar7 = uStack_138;
      func_0x00010bf52a60();
    } while (uVar7 != 0);
  }
  _objc_release(uStack_138);
  uVar7 = uStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uStack_138);
  _objc_release(uStack_138);
  uVar17 = uVar7;
  __Unwind_Resume();
  pcStack_148 = FUN_10adbf6f4;
  ppuStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  lStack_170 = unaff_x22;
  uStack_168 = 0;
  uStack_160 = uVar7;
  uStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  plVar9 = (long *)0xd0;
  __Znwm();
  plVar14 = plVar9 + 1;
  *plVar14 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110c6dd08;
  plVar15 = plVar9 + 3;
  plVar9[4] = 0;
  *plVar15 = 0;
  plVar9[6] = 0;
  plVar9[5] = 0;
  plVar9[7] = 0;
  *(undefined4 *)((long)plVar9 + 0x34) = 0x3f800000;
  plVar9[9] = 0;
  plVar9[8] = 0;
  plVar9[0xb] = 0;
  plVar9[10] = 0;
  plVar9[0xd] = 0;
  plVar9[0xc] = 0;
  plVar9[0xf] = 0;
  plVar9[0xe] = 0;
  plVar9[0x11] = 0;
  plVar9[0x10] = 0;
  plVar9[0x13] = 0;
  plVar9[0x12] = 0;
  plVar9[0x15] = 0;
  plVar9[0x14] = 0;
  plVar9[0x17] = 0;
  plVar9[0x16] = 0;
  plVar9[0x19] = 0;
  plVar9[0x18] = 0;
  iVar3 = *(int *)(uVar17 + 8);
  *(int *)(uVar17 + 8) = iVar3 + 1;
  *(int *)plVar15 = iVar3;
  puVar16 = *(undefined8 **)(uVar17 + 0x20);
  plStack_1c8 = plVar15;
  plStack_1c0 = plVar9;
  if (puVar16 < *(undefined8 **)(uVar17 + 0x28)) {
    *puVar16 = plVar15;
    puVar16[1] = plVar9;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar16 = puVar16 + 2;
  }
  else {
    plStack_198 = (long *)(uVar17 + 0x18);
    lVar11 = (long)puVar16 - *plStack_198;
    uVar7 = (lVar11 >> 4) + 1;
    if (uVar7 >> 0x3c != 0) {
      FUN_10adbfcfc();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10adbf8e8);
      (*pcVar6)();
    }
    uVar12 = (long)*(undefined8 **)(uVar17 + 0x28) - *plStack_198;
    uVar13 = (long)uVar12 >> 3;
    if (uVar13 <= uVar7) {
      uVar13 = uVar7;
    }
    if (0x7fffffffffffffef < uVar12) {
      uVar13 = 0xfffffffffffffff;
    }
    FUN_10adbfd10();
    puVar1 = (undefined8 *)(uVar13 + lVar11);
    *puVar1 = plVar15;
    puVar1[1] = plVar9;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar16 = puVar1 + 2;
    lVar11 = (long)puVar1 - (*(long *)(uVar17 + 0x20) - *(long *)(uVar17 + 0x18));
    _memcpy(lVar11);
    uStack_1b8 = *(undefined8 *)(uVar17 + 0x18);
    *(long *)(uVar17 + 0x18) = lVar11;
    *(undefined8 **)(uVar17 + 0x20) = puVar16;
    uStack_1a0 = *(undefined8 *)(uVar17 + 0x28);
    *(ulong *)(uVar17 + 0x28) = uVar13 + (long)param_2 * 0x10;
    uStack_1b0 = uStack_1b8;
    uStack_1a8 = uStack_1b8;
    FUN_10acf96a4(&uStack_1b8);
  }
  *(undefined8 **)(uVar17 + 0x20) = puVar16;
  FUN_10adbecf0(puVar8,&plStack_1c8,1);
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(uVar17 + 0x10));
  _objc_release(puVar10);
  do {
    lVar11 = *plVar14;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *plVar14 = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 10adbf6f4; end: 10adbf91b; -[LSAARKitMeshesConverter addNewMesh:] */

void FUN_10adbf6f4(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  plVar7 = (long *)0xd0;
  __Znwm();
  plVar12 = plVar7 + 1;
  *plVar12 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110c6dd08;
  plVar13 = plVar7 + 3;
  plVar7[4] = 0;
  *plVar13 = 0;
  plVar7[6] = 0;
  plVar7[5] = 0;
  plVar7[7] = 0;
  *(undefined4 *)((long)plVar7 + 0x34) = 0x3f800000;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = 0;
  plVar7[0x14] = 0;
  plVar7[0x17] = 0;
  plVar7[0x16] = 0;
  plVar7[0x19] = 0;
  plVar7[0x18] = 0;
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  *(int *)plVar13 = iVar3;
  puVar14 = *(undefined8 **)(param_1 + 0x20);
  plStack_88 = plVar13;
  plStack_80 = plVar7;
  if (puVar14 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar14 = plVar13;
    puVar14[1] = plVar7;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar14 = puVar14 + 2;
  }
  else {
    plStack_58 = (long *)(param_1 + 0x18);
    lVar9 = (long)puVar14 - *plStack_58;
    uVar1 = (lVar9 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10adbfcfc();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10adbf8e8);
      (*pcVar6)();
    }
    uVar10 = (long)*(undefined8 **)(param_1 + 0x28) - *plStack_58;
    uVar11 = (long)uVar10 >> 3;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar11 = 0xfffffffffffffff;
    }
    FUN_10adbfd10();
    puVar2 = (undefined8 *)(uVar11 + lVar9);
    *puVar2 = plVar13;
    puVar2[1] = plVar7;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *plVar12 = *plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar14 = puVar2 + 2;
    lVar9 = (long)puVar2 - (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18));
    _memcpy(lVar9);
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar9;
    *(undefined8 **)(param_1 + 0x20) = puVar14;
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = uVar11 + param_2 * 0x10;
    uStack_70 = uStack_78;
    uStack_68 = uStack_78;
    FUN_10acf96a4(&uStack_78);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar14;
  FUN_10adbecf0(param_3,&plStack_88,1);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar8);
  do {
    lVar9 = *plVar12;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10adbf91c; end: 10adbf96b; -[LSAARKitMeshesConverter .cxx_destruct] */

void FUN_10adbf91c(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x30;
  FUN_10adbe2b0(&lStack_28);
  lStack_28 = param_1 + 0x18;
  FUN_10adbe2b0(&lStack_28);
  _objc_storeStrong(param_1 + 0x10,0);
  return;
}



/* Entry: 10adbf96c; end: 10adbf983; -[LSAARKitMeshesConverter .cxx_construct] */

void FUN_10adbf96c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 10adbf984; end: 10adbfa0f;  */

long FUN_10adbf984(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != param_2) {
    lVar1 = *(long *)(param_1 + 8);
    lVar2 = param_2;
    if (param_3 != lVar1) {
      do {
        FUN_10adbfc98(lVar2,param_3);
        param_3 = param_3 + 0x10;
        lVar2 = lVar2 + 0x10;
      } while (param_3 != lVar1);
      lVar1 = *(long *)(param_1 + 8);
    }
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      FUN_10adbe320(lVar1);
    }
    *(long *)(param_1 + 8) = lVar2;
  }
  return param_2;
}



/* Entry: 10adbfa10; end: 10adbfc97;  */

undefined8 * FUN_10adbfa10(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long unaff_x23;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_1;
  func_0x00010bfc77c0(param_1,param_2,*(undefined4 *)*param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 == 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x30);
    puVar13 = *(undefined8 **)(param_1 + 0x38);
    param_2 = puVar8;
    if (puVar8 != puVar13) {
      do {
        if (*(int *)*puVar8 == *(int *)*param_3) {
          param_2 = puVar8;
          if ((puVar8 != puVar13) && (puVar14 = puVar8 + 2, puVar14 != puVar13)) {
            do {
              if (*(int *)*puVar14 != *(int *)*param_3) {
                FUN_10adbfc98(puVar8,puVar14);
                puVar8 = puVar8 + 2;
              }
              puVar14 = puVar14 + 2;
            } while (puVar14 != puVar13);
            puVar13 = *(undefined8 **)(param_1 + 0x38);
            param_2 = puVar8;
          }
          break;
        }
        puVar8 = puVar8 + 2;
        param_2 = puVar13;
      } while (puVar8 != puVar13);
    }
    FUN_10adbf984((undefined8 *)(param_1 + 0x30),param_2,puVar13);
    lVar12 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar12);
    lVar6 = lVar12;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar12);
        }
        unaff_x23 = *(long *)(lVar15 * 8);
        _objc_retain(unaff_x23);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar7;
        func_0x00010c282760();
        iVar2 = *(int *)*param_3;
        _objc_release(uVar7);
        if ((int)uVar16 == iVar2) {
          _objc_release(lVar12);
          if (unaff_x23 != 0) {
            func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10));
          }
          goto LAB_10adbfbfc;
        }
        _objc_release(unaff_x23);
        lVar15 = lVar15 + 1;
      } while (lVar6 != lVar15);
      lVar6 = lVar12;
      func_0x00010bf52a60();
    }
    _objc_release(lVar12);
    unaff_x23 = 0;
LAB_10adbfbfc:
    _objc_release(unaff_x23);
  }
  puVar8 = (undefined8 *)(ulong)(lVar10 == 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  __Unwind_Resume();
  uVar7 = param_2[1];
  uVar16 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar11 = (long *)puVar8[1];
  puVar8[1] = uVar7;
  *puVar8 = uVar16;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  return puVar8;
}



/* Entry: 10adbfc98; end: 10adbfcfb;  */

undefined8 * FUN_10adbfc98(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10adbfcfc; end: 10adbfd0f;  */

void FUN_10adbfcfc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 (*pauVar3) [12];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pauVar3 = (undefined1 (*) [12])&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)pauVar3 >> 0x3c != 0) {
    func_0x000104c4f740();
    fVar4 = *(float *)(pauVar3[4] + 8);
    *param_2 = CONCAT44((float)((ulong)*(undefined8 *)pauVar3[4] >> 0x20) * 100.0,
                        (float)*(undefined8 *)pauVar3[4] * 100.0);
    *(float *)(param_2 + 1) = fVar4 * 100.0;
    fVar18 = (float)*(undefined8 *)(*pauVar3 + 8);
    fVar5 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
    fVar4 = (float)*(undefined8 *)*pauVar3;
    fVar17 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
    fVar12 = (float)*(undefined8 *)pauVar3[2];
    fVar10 = (float)((ulong)*(undefined8 *)pauVar3[2] >> 0x20);
    uVar8 = *(undefined8 *)*(undefined1 (*) [12])(pauVar3[1] + 4);
    fVar6 = (float)uVar8;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    auVar11._0_4_ = fVar6 * fVar6;
    auVar11._4_4_ = fVar9 * fVar9;
    auVar11._8_4_ = fVar12 * fVar12;
    auVar11._12_4_ = fVar10 * fVar10;
    auVar15._0_4_ = fVar4 * fVar4;
    auVar15._4_4_ = fVar17 * fVar17;
    auVar15._8_4_ = fVar18 * fVar18;
    auVar15._12_4_ = fVar5 * fVar5;
    auVar16 = NEON_ext(auVar15,auVar15,0xc,1);
    auVar16 = NEON_ext(auVar11,auVar16,0xc,1);
    fVar9 = SQRT(auVar11._0_4_ + auVar11._4_4_ + auVar11._8_4_ + auVar16._0_4_);
    fVar12 = SQRT(auVar15._0_4_ + auVar15._4_4_ + auVar15._8_4_ + auVar16._4_4_);
    fVar13 = (float)*(undefined8 *)(pauVar3[2] + 8);
    fVar7 = (float)((ulong)*(undefined8 *)(pauVar3[2] + 8) >> 0x20);
    fVar10 = (float)*(undefined8 *)(pauVar3[3] + 4);
    fVar17 = (float)((ulong)*(undefined8 *)(pauVar3[3] + 4) >> 0x20);
    fVar19 = SQRT(fVar13 * fVar13 + fVar7 * fVar7 + fVar10 * fVar10 + fVar17 * fVar17);
    fVar4 = fVar4 / fVar12;
    fVar5 = *(float *)(*pauVar3 + 4) / fVar12;
    fVar6 = fVar6 / fVar9;
    fVar20 = *(float *)(pauVar3[1] + 8) / fVar9;
    fVar9 = SUB124(*(undefined1 (*) [12])(pauVar3[1] + 4),8) / fVar9;
    fVar12 = SUB124(*pauVar3,8) / fVar12;
    uVar8 = NEON_rev64(CONCAT44(fVar7 / fVar19,fVar13 / fVar19),4);
    fVar10 = fVar10 / fVar19;
    fVar14 = (fVar4 - fVar20) - fVar10;
    fVar17 = (fVar20 - fVar4) - fVar10;
    fVar18 = (fVar10 - fVar4) - fVar20;
    fVar10 = fVar4 + fVar20 + fVar10;
    fVar4 = fVar14;
    if (fVar14 <= fVar10) {
      fVar4 = fVar10;
    }
    bVar1 = 2;
    if (fVar17 <= fVar4) {
      fVar17 = fVar4;
      bVar1 = fVar10 < fVar14;
    }
    bVar2 = 3;
    if (fVar18 <= fVar17) {
      fVar18 = fVar17;
      bVar2 = bVar1;
    }
    fVar4 = SQRT(fVar18 + 1.0) * 0.5;
    fVar10 = 0.25 / fVar4;
    fVar17 = (float)uVar8;
    fVar18 = (float)((ulong)uVar8 >> 0x20);
    if (bVar2 < 2) {
      uVar8 = NEON_ext(CONCAT44(fVar12 + fVar18,fVar9 + fVar17),
                       CONCAT44(fVar12 - fVar18,fVar9 - fVar17),4,1);
      fVar14 = fVar4;
      fVar20 = fVar5 - fVar6;
      if (bVar2 != 0) {
        fVar14 = (float)((ulong)uVar8 >> 0x20) * fVar10;
        fVar20 = (float)uVar8;
      }
      fVar20 = fVar20 * fVar10;
      fVar7 = (fVar9 - fVar7 / fVar19) * fVar10;
      fVar17 = fVar13 / fVar19 - fVar12;
      if (bVar2 != 0) {
        fVar7 = fVar4;
        fVar17 = fVar5 + fVar6;
      }
      fVar4 = fVar17 * fVar10;
    }
    else {
      fVar20 = (fVar17 + fVar9) * fVar10;
      fVar14 = fVar18 - fVar12;
      if (bVar2 != 2) {
        fVar20 = fVar4;
        fVar14 = fVar5 - fVar6;
      }
      fVar14 = fVar14 * fVar10;
      fVar7 = (fVar5 + fVar6) * fVar10;
      if (bVar2 != 2) {
        fVar4 = (fVar9 + fVar17) * fVar10;
        fVar7 = (fVar12 + fVar18) * fVar10;
      }
    }
    uVar8 = NEON_rev64(CONCAT44(fVar7,fVar4),4);
    *param_3 = uVar8;
    param_3[1] = CONCAT44(fVar14,fVar20);
    return;
  }
  __Znwm((long)pauVar3 << 4);
  return;
}



/* Entry: 10adbfd10; end: 10adbfd43;  */

void FUN_10adbfd10(undefined1 (*param_1) [12],undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((ulong)param_1 >> 0x3c != 0) {
    func_0x000104c4f740();
    fVar3 = *(float *)(param_1[4] + 8);
    *param_2 = CONCAT44((float)((ulong)*(undefined8 *)param_1[4] >> 0x20) * 100.0,
                        (float)*(undefined8 *)param_1[4] * 100.0);
    *(float *)(param_2 + 1) = fVar3 * 100.0;
    fVar17 = (float)*(undefined8 *)(*param_1 + 8);
    fVar4 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
    fVar3 = (float)*(undefined8 *)*param_1;
    fVar16 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
    fVar11 = (float)*(undefined8 *)param_1[2];
    fVar9 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
    uVar7 = *(undefined8 *)*(undefined1 (*) [12])(param_1[1] + 4);
    fVar5 = (float)uVar7;
    fVar8 = (float)((ulong)uVar7 >> 0x20);
    auVar10._0_4_ = fVar5 * fVar5;
    auVar10._4_4_ = fVar8 * fVar8;
    auVar10._8_4_ = fVar11 * fVar11;
    auVar10._12_4_ = fVar9 * fVar9;
    auVar14._0_4_ = fVar3 * fVar3;
    auVar14._4_4_ = fVar16 * fVar16;
    auVar14._8_4_ = fVar17 * fVar17;
    auVar14._12_4_ = fVar4 * fVar4;
    auVar15 = NEON_ext(auVar14,auVar14,0xc,1);
    auVar15 = NEON_ext(auVar10,auVar15,0xc,1);
    fVar8 = SQRT(auVar10._0_4_ + auVar10._4_4_ + auVar10._8_4_ + auVar15._0_4_);
    fVar11 = SQRT(auVar14._0_4_ + auVar14._4_4_ + auVar14._8_4_ + auVar15._4_4_);
    fVar12 = (float)*(undefined8 *)(param_1[2] + 8);
    fVar6 = (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_1[3] + 4);
    fVar16 = (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
    fVar18 = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar9 * fVar9 + fVar16 * fVar16);
    fVar3 = fVar3 / fVar11;
    fVar4 = *(float *)(*param_1 + 4) / fVar11;
    fVar5 = fVar5 / fVar8;
    fVar19 = *(float *)(param_1[1] + 8) / fVar8;
    fVar8 = SUB124(*(undefined1 (*) [12])(param_1[1] + 4),8) / fVar8;
    fVar11 = SUB124(*param_1,8) / fVar11;
    uVar7 = NEON_rev64(CONCAT44(fVar6 / fVar18,fVar12 / fVar18),4);
    fVar9 = fVar9 / fVar18;
    fVar13 = (fVar3 - fVar19) - fVar9;
    fVar16 = (fVar19 - fVar3) - fVar9;
    fVar17 = (fVar9 - fVar3) - fVar19;
    fVar9 = fVar3 + fVar19 + fVar9;
    fVar3 = fVar13;
    if (fVar13 <= fVar9) {
      fVar3 = fVar9;
    }
    bVar1 = 2;
    if (fVar16 <= fVar3) {
      fVar16 = fVar3;
      bVar1 = fVar9 < fVar13;
    }
    bVar2 = 3;
    if (fVar17 <= fVar16) {
      fVar17 = fVar16;
      bVar2 = bVar1;
    }
    fVar3 = SQRT(fVar17 + 1.0) * 0.5;
    fVar9 = 0.25 / fVar3;
    fVar16 = (float)uVar7;
    fVar17 = (float)((ulong)uVar7 >> 0x20);
    if (bVar2 < 2) {
      uVar7 = NEON_ext(CONCAT44(fVar11 + fVar17,fVar8 + fVar16),
                       CONCAT44(fVar11 - fVar17,fVar8 - fVar16),4,1);
      fVar13 = fVar3;
      fVar19 = fVar4 - fVar5;
      if (bVar2 != 0) {
        fVar13 = (float)((ulong)uVar7 >> 0x20) * fVar9;
        fVar19 = (float)uVar7;
      }
      fVar19 = fVar19 * fVar9;
      fVar6 = (fVar8 - fVar6 / fVar18) * fVar9;
      fVar16 = fVar12 / fVar18 - fVar11;
      if (bVar2 != 0) {
        fVar6 = fVar3;
        fVar16 = fVar4 + fVar5;
      }
      fVar3 = fVar16 * fVar9;
    }
    else {
      fVar19 = (fVar16 + fVar8) * fVar9;
      fVar13 = fVar17 - fVar11;
      if (bVar2 != 2) {
        fVar19 = fVar3;
        fVar13 = fVar4 - fVar5;
      }
      fVar13 = fVar13 * fVar9;
      fVar6 = (fVar4 + fVar5) * fVar9;
      if (bVar2 != 2) {
        fVar3 = (fVar8 + fVar16) * fVar9;
        fVar6 = (fVar11 + fVar17) * fVar9;
      }
    }
    uVar7 = NEON_rev64(CONCAT44(fVar6,fVar3),4);
    *param_3 = uVar7;
    param_3[1] = CONCAT44(fVar13,fVar19);
    return;
  }
  __Znwm((long)param_1 << 4);
  return;
}



/* Entry: 10adbfd44; end: 10adbfeef;  */

void FUN_10adbfd44(undefined1 (*param_1) [12],undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar3 = *(float *)(param_1[4] + 8);
  *param_2 = CONCAT44((float)((ulong)*(undefined8 *)param_1[4] >> 0x20) * 100.0,
                      (float)*(undefined8 *)param_1[4] * 100.0);
  *(float *)(param_2 + 1) = fVar3 * 100.0;
  fVar17 = (float)*(undefined8 *)(*param_1 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
  fVar3 = (float)*(undefined8 *)*param_1;
  fVar16 = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
  fVar11 = (float)*(undefined8 *)param_1[2];
  fVar9 = (float)((ulong)*(undefined8 *)param_1[2] >> 0x20);
  uVar7 = *(undefined8 *)*(undefined1 (*) [12])(param_1[1] + 4);
  fVar5 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  auVar10._0_4_ = fVar5 * fVar5;
  auVar10._4_4_ = fVar8 * fVar8;
  auVar10._8_4_ = fVar11 * fVar11;
  auVar10._12_4_ = fVar9 * fVar9;
  auVar14._0_4_ = fVar3 * fVar3;
  auVar14._4_4_ = fVar16 * fVar16;
  auVar14._8_4_ = fVar17 * fVar17;
  auVar14._12_4_ = fVar4 * fVar4;
  auVar15 = NEON_ext(auVar14,auVar14,0xc,1);
  auVar15 = NEON_ext(auVar10,auVar15,0xc,1);
  fVar8 = SQRT(auVar10._0_4_ + auVar10._4_4_ + auVar10._8_4_ + auVar15._0_4_);
  fVar11 = SQRT(auVar14._0_4_ + auVar14._4_4_ + auVar14._8_4_ + auVar15._4_4_);
  fVar12 = (float)*(undefined8 *)(param_1[2] + 8);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1[2] + 8) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_1[3] + 4);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1[3] + 4) >> 0x20);
  fVar18 = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar9 * fVar9 + fVar16 * fVar16);
  fVar3 = fVar3 / fVar11;
  fVar4 = *(float *)(*param_1 + 4) / fVar11;
  fVar5 = fVar5 / fVar8;
  fVar19 = *(float *)(param_1[1] + 8) / fVar8;
  fVar8 = SUB124(*(undefined1 (*) [12])(param_1[1] + 4),8) / fVar8;
  fVar11 = SUB124(*param_1,8) / fVar11;
  uVar7 = NEON_rev64(CONCAT44(fVar6 / fVar18,fVar12 / fVar18),4);
  fVar9 = fVar9 / fVar18;
  fVar13 = (fVar3 - fVar19) - fVar9;
  fVar16 = (fVar19 - fVar3) - fVar9;
  fVar17 = (fVar9 - fVar3) - fVar19;
  fVar9 = fVar3 + fVar19 + fVar9;
  fVar3 = fVar13;
  if (fVar13 <= fVar9) {
    fVar3 = fVar9;
  }
  bVar1 = 2;
  if (fVar16 <= fVar3) {
    fVar16 = fVar3;
    bVar1 = fVar9 < fVar13;
  }
  bVar2 = 3;
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
    bVar2 = bVar1;
  }
  fVar3 = SQRT(fVar17 + 1.0) * 0.5;
  fVar9 = 0.25 / fVar3;
  fVar16 = (float)uVar7;
  fVar17 = (float)((ulong)uVar7 >> 0x20);
  if (bVar2 < 2) {
    uVar7 = NEON_ext(CONCAT44(fVar11 + fVar17,fVar8 + fVar16),
                     CONCAT44(fVar11 - fVar17,fVar8 - fVar16),4,1);
    fVar13 = fVar3;
    fVar19 = fVar4 - fVar5;
    if (bVar2 != 0) {
      fVar13 = (float)((ulong)uVar7 >> 0x20) * fVar9;
      fVar19 = (float)uVar7;
    }
    fVar19 = fVar19 * fVar9;
    fVar6 = (fVar8 - fVar6 / fVar18) * fVar9;
    fVar16 = fVar12 / fVar18 - fVar11;
    if (bVar2 != 0) {
      fVar6 = fVar3;
      fVar16 = fVar4 + fVar5;
    }
    fVar3 = fVar16 * fVar9;
  }
  else {
    fVar19 = (fVar16 + fVar8) * fVar9;
    fVar13 = fVar17 - fVar11;
    if (bVar2 != 2) {
      fVar19 = fVar3;
      fVar13 = fVar4 - fVar5;
    }
    fVar13 = fVar13 * fVar9;
    fVar6 = (fVar4 + fVar5) * fVar9;
    if (bVar2 != 2) {
      fVar3 = (fVar8 + fVar16) * fVar9;
      fVar6 = (fVar11 + fVar17) * fVar9;
    }
  }
  uVar7 = NEON_rev64(CONCAT44(fVar6,fVar3),4);
  *param_3 = uVar7;
  param_3[1] = CONCAT44(fVar13,fVar19);
  return;
}



/* Entry: 10adbfef0; end: 10adc004f;  */

void FUN_10adbfef0(long *param_1,undefined8 *param_2,undefined4 *param_3,uint3 *param_4)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x22;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 *puStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = param_2;
  if (*param_1 == 0) {
    puVar2 = (undefined8 *)0x40000000;
  }
  else {
    uStack_78._4_4_ = (uint)((ulong)uStack_78 >> 0x20) & 0xffff0000;
    ppuVar1 = &puStack_98;
    uStack_78._0_4_ = (uint)*param_4;
    func_0x0001098ac018(ppuVar1,&UNK_10e514038,0x1b,&uStack_78,0,1);
    plStack_90 = (long *)0x0;
    plStack_88 = (long *)0x0;
    uStack_80 = 0;
    uStack_78 = (code *)CONCAT44(uStack_78._4_4_,(int)ppuVar1);
    func_0x0001098af048(&plStack_90,0,&uStack_78,(long)&uStack_78 + 4,1);
    unaff_x22 = &uStack_78;
    uStack_78 = FUN_10adc0168;
    ppuStack_70 = &PTR_FUN_110c74578;
    puVar2 = param_2 + 3;
    param_2 = &uStack_78;
    plStack_68 = param_1;
    FUN_10a4fbee8(puVar2,param_2,&plStack_90);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    param_1 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plStack_88 = plStack_90;
      __ZdlPv();
    }
  }
  *param_3 = (int)puVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x22 + 1);
  if (plStack_90 != (long *)0x0) {
    plStack_88 = plStack_90;
    __ZdlPv();
  }
  __Unwind_Resume(param_1);
  if (param_2 != (undefined8 *)0x0) {
    pcStack_a8 = FUN_10adc0050;
    puStack_c8 = param_2 + 4;
    puStack_c0 = puVar2;
    plStack_b8 = param_1;
    puStack_b0 = &stack0xfffffffffffffff0;
    FUN_10adc00a0(&puStack_c8);
    puStack_c8 = param_2 + 1;
    FUN_10adc00a0(&puStack_c8);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10adc0050; end: 10adc009f;  */

void FUN_10adc0050(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2 + 0x20;
    FUN_10adc00a0(&lStack_28);
    lStack_28 = param_2 + 8;
    FUN_10adc00a0(&lStack_28);
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10adc00a0; end: 10adc010f;  */

void FUN_10adc00a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10adc0110();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}


