/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10724d728; end: 10724d933;  */

float * FUN_10724d728(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                     float *param_5)

{
  undefined1 in_ZR;
  float *pfVar1;
  undefined8 uVar2;
  float *pfVar3;
  long unaff_x20;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [24];
  
  func_0x00010777fd44(param_5);
  FUN_10724d934(auStack_98);
  func_0x0001078b9f68(auStack_98);
  FUN_10724e79c();
  pfVar3 = (float *)0x0;
  if (unaff_x20 == 0) goto LAB_10724d8d4;
  pfVar3 = param_5;
  func_0x00010777fd54();
  dVar4 = (double)SUB84(param_1,0);
  func_0x00010724e8c8();
  func_0x00010bffa280();
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)0x0;
  }
  else {
    pfVar1 = param_5;
    func_0x00010777fd4c();
    if ((int)pfVar1 != 0) {
      pfVar1 = pfVar3;
      func_0x00010bfe9720(pfVar3,param_4,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pfVar3);
      pfVar3 = pfVar1;
    }
    pfVar1 = param_5;
    func_0x00010777fd6c();
    if (((uint)pfVar1[4] & 1) != 0) {
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      func_0x00010c23d0a0(pfVar3);
      func_0x00010c23d0a0(pfVar3);
      func_0x00010777fd5c(param_5);
      func_0x00010724e8f0();
      if ((bool)in_ZR) {
        func_0x00010777fd64(param_5);
        func_0x00010724e8f0();
        if (!(bool)in_ZR) goto LAB_10724d830;
        uVar2 = 0;
      }
      else {
LAB_10724d830:
        uVar2 = 1;
      }
      func_0x00010c13a160((double)fVar8 / dVar4,(double)fVar7 / dVar4,
                          param_2 - (double)fVar6 / dVar4,param_1 - (double)fVar5 / dVar4,pfVar3,
                          param_4,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010724e7a8();
    }
    func_0x00010777fd5c(param_5);
    func_0x00010724e8f0();
    if ((bool)in_ZR) {
      func_0x00010777fd64(param_5);
      func_0x00010724e8f0();
      if ((bool)in_ZR) goto LAB_10724d8c0;
    }
    func_0x00010bf2f980(pfVar3);
    func_0x00010c13a160(pfVar3,param_4,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010724e7a8();
  }
LAB_10724d8c0:
  _CGImageRelease();
  _objc_retain(pfVar3);
LAB_10724d8d4:
  func_0x00010724e7a8();
  return pfVar3;
}



/* Entry: 10724d934; end: 10724d97f;  */

void FUN_10724d934(long param_1,uint *param_2)

{
  FUN_10724e0f8(param_1,*(undefined8 *)param_2);
  if (((ulong)*param_2 * (ulong)param_2[1] & 0x3fffffffffffffff) != 0) {
    _memmove(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 2));
  }
  *(short *)(param_1 + 0x10) = (short)param_2[4];
  return;
}



/* Entry: 10724d980; end: 10724da23;  */

undefined1 * FUN_10724d980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  FUN_10724d934(auStack_58,param_3);
  puVar1 = auStack_58;
  func_0x0001078b9f68(puVar1);
  FUN_10724e79c();
  puVar2 = (undefined1 *)0x0;
  if (unaff_x20 != 0) {
    func_0x00010724e8c8();
    func_0x00010bffa280();
    _CGImageRelease();
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  func_0x00010724e7a8();
  return puVar2;
}



/* Entry: 10724da24; end: 10724dd7b;  */

void FUN_10724da24(undefined8 *param_1,double param_2,double param_3,double param_4,double param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long extraout_x8;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long lStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_188 [28];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined1 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [56];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  lVar2 = param_6;
  func_0x00010c13a3c0();
  if (lVar2 == 1) {
    func_0x00010724e7b8();
    func_0x00010724e7c0();
    func_0x00010724e820();
    func_0x00010724e7b8();
    func_0x00010724e7c0();
    func_0x00010724e828();
    FUN_10724de5c(&uStack_140,auStack_c0);
    func_0x00010724e7b8();
    func_0x00010724e7c0();
    func_0x00010724e820();
    func_0x00010724e7b8();
    func_0x00010724e7c0();
    func_0x00010724e828();
    FUN_10724de5c(&uStack_158,auStack_c0);
  }
  fStack_16c = (float)((uint)fStack_16c & 0xffffff00);
  uStack_15c = 0;
  func_0x00010724e7b8();
  if ((((param_3 != 0.0) || (param_2 != 0.0)) || (param_5 != 0.0)) || (param_4 != 0.0)) {
    func_0x00010724e7b8();
    dVar13 = param_3;
    func_0x00010724e7c0();
    dVar8 = param_2;
    func_0x00010724e7b8();
    dVar9 = dVar8;
    func_0x00010724e7c0();
    dVar10 = dVar9;
    func_0x00010724e820();
    dVar11 = dVar10;
    func_0x00010724e7b8();
    func_0x00010724e7c0();
    dVar12 = dVar11;
    func_0x00010724e820();
    func_0x00010724e7b8();
    func_0x00010724e7c0();
    fStack_16c = (float)(param_3 * param_2);
    fStack_168 = (float)(dVar8 * dVar9);
    fStack_164 = (float)((dVar10 - param_5) * dVar11);
    fStack_160 = (float)((dVar13 - param_4) * dVar12);
    param_2 = (double)(ulong)(uint)fStack_160;
    uStack_15c = 1;
  }
  lVar2 = param_6;
  func_0x00010c130820();
  _objc_retainAutorelease(param_8);
  func_0x00010bdc3520(param_8);
  func_0x000100060964(auStack_f8,param_8);
  func_0x00010c0cd020(auStack_188,param_6);
  func_0x00010724e7c0();
  uVar3 = 0x10;
  __Znwm();
  func_0x000104c318bc(auStack_c0,auStack_f8);
  func_0x00010724e660(auStack_110,&uStack_140);
  func_0x00010724e660(auStack_128,&uStack_158);
  func_0x00010777fcb8((float)param_2,uVar3,auStack_c0,auStack_188,lVar2 == 2,auStack_110,auStack_128
                      ,&fStack_16c);
  *param_1 = uVar3;
  FUN_10724e0ac(auStack_128);
  FUN_10724e0ac(auStack_110);
  func_0x000104c2f714(auStack_c0);
  func_0x00010724e5f4(auStack_188);
  func_0x000104c2f714(auStack_f8);
  FUN_10724e0ac(&uStack_158);
  FUN_10724e0ac();
  func_0x00010724e7a8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    FUN_10724e0ac(&uStack_158);
    puVar4 = &uStack_140;
    FUN_10724e0ac(puVar4);
    func_0x00010724e7a8();
    func_0x00010724e844();
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    puVar5 = puVar4;
    _CGImageGetWidth();
    puVar6 = puVar4;
    _CGImageGetHeight(puVar4);
    lVar2 = extraout_x8;
    FUN_10724e0f8(extraout_x8,(ulong)puVar5 & 0xffffffff | (long)puVar6 << 0x20);
    _CGColorSpaceCreateDeviceRGB();
    if (lVar2 == 0) {
      func_0x0001078ba978();
      func_0x0001078baa08();
      func_0x0001078ba964();
      ___cxa_throw(lVar2);
    }
    else {
      lVar7 = *(long *)(extraout_x8 + 8);
      _CGBitmapContextCreate(lVar7,puVar5,puVar6,8,(long)puVar5 << 2,lVar2,1);
      lStack_1e0 = lVar7;
      if (lVar7 != 0) {
        _CGContextSetBlendMode(lVar7,0x11);
        _CGContextDrawImage(0,0,(double)puVar5,(double)puVar6,lVar7,puVar4);
        *(undefined1 *)(extraout_x8 + 0x10) = 0;
        func_0x0001078ba1c8(&lStack_1e0);
        func_0x0001078ba030(auStack_1d8);
        return;
      }
      func_0x0001078ba978();
      func_0x0001078ba9dc();
      func_0x0001078ba964();
      ___cxa_throw(lVar7);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1078ba180);
    (*pcVar1)();
  }
  return;
}



/* Entry: 10724dd7c; end: 10724dda3;  */

void FUN_10724dd7c(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  _objc_retainAutorelease();
  func_0x00010bdc1020();
  uVar2 = param_2;
  _CGImageGetWidth();
  uVar3 = param_2;
  _CGImageGetHeight(param_2);
  lVar4 = param_1;
  FUN_10724e0f8(param_1,uVar2 & 0xffffffff | uVar3 << 0x20);
  _CGColorSpaceCreateDeviceRGB();
  lStack_48 = lVar4;
  if (lVar4 == 0) {
    func_0x0001078ba978();
    func_0x0001078baa08();
    func_0x0001078ba964();
    ___cxa_throw(lVar4);
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    _CGBitmapContextCreate(lVar5,uVar2,uVar3,8,uVar2 << 2,lVar4,1);
    lStack_50 = lVar5;
    if (lVar5 != 0) {
      _CGContextSetBlendMode(lVar5,0x11);
      _CGContextDrawImage(0,0,(double)uVar2,(double)uVar3,lVar5,param_2);
      *(undefined1 *)(param_1 + 0x10) = 0;
      func_0x0001078ba1c8(&lStack_50);
      func_0x0001078ba030(&lStack_48);
      return;
    }
    func_0x0001078ba978();
    func_0x0001078ba9dc();
    func_0x0001078ba964();
    ___cxa_throw(lVar5);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078ba180);
  (*pcVar1)();
}



/* Entry: 10724dda4; end: 10724de5b;  */

void FUN_10724dda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0ccfc0(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar1,param_2,param_3,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724e884();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110ea4bf8,
                        &PTR____CFConstantStringClassReference_110ea4c18);
  }
  func_0x00010724e7a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10724de5c; end: 10724de9f;  */

undefined8 * FUN_10724de5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_10724dea0();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10724dea0; end: 10724df4f;  */

long FUN_10724dea0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_10724df50(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_10724e01c();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_10724df90(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_10724e05c(&plStack_58);
  return lVar3;
}



/* Entry: 10724df50; end: 10724df8f;  */

undefined8 * FUN_10724df50(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar2;
  }
  FUN_10724e008();
  puVar3 = (undefined8 *)(param_2[1] - (param_1[1] - *param_1));
  puVar2 = puVar3;
  _memcpy(puVar3);
  param_2[1] = puVar3;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return puVar2;
}



/* Entry: 10724df90; end: 10724e007;  */

void FUN_10724df90(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10724e008; end: 10724e01b;  */

void FUN_10724e008(void)

{
  func_0x000104bd47e8(&UNK_10f40618a);
  FUN_10724e040();
  return;
}



/* Entry: 10724e01c; end: 10724e03f;  */

void FUN_10724e01c(void)

{
  FUN_10724e040();
  return;
}



/* Entry: 10724e040; end: 10724e05b;  */

long * FUN_10724e040(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10724e088();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10724e05c; end: 10724e087;  */

long * FUN_10724e05c(long *param_1)

{
  FUN_10724e088();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10724e088; end: 10724e0ab;  */

void FUN_10724e088(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10724e0ac; end: 10724e0df;  */

undefined8 FUN_10724e0ac(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10724e0e0(&uStack_28);
  return param_1;
}



/* Entry: 10724e0e0; end: 10724e0f7;  */

void FUN_10724e0e0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10724e0f8; end: 10724e177;  */

ulong * FUN_10724e0f8(ulong *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int *extraout_x8;
  
  *param_1 = param_2;
  FUN_10724e178(param_1 + 1,param_2,(param_2 & 0xffffffff) * 4 * (param_2 >> 0x20));
  *(undefined2 *)(param_1 + 2) = 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113823db0 = lRam0000000113823db0 + (*param_1 & 0xffffffff) * 4 * (*param_1 >> 0x20)
      ;
    }
  } while (cVar1 != '\0');
  func_0x00010724e7c8();
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = *extraout_x8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return param_1;
}



/* Entry: 10724e178; end: 10724e2c7;  */

void FUN_10724e178(undefined8 param_1,undefined8 param_2)

{
  FUN_10724e2fc(param_2);
  return;
}



/* Entry: 10724e2c8; end: 10724e2f7;  */

uint FUN_10724e2c8(ulong param_1,byte *param_2)

{
  uint uVar1;
  
  FUN_10724e330();
  uVar1 = (uint)*param_2;
  if ((param_1 & 0x100) != 0) {
    uVar1 = (uint)param_1;
  }
  return uVar1 & 0xff;
}



/* Entry: 10724e2f8; end: 10724e2fb;  */

void FUN_10724e2f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10724e2fc; end: 10724e32f;  */

void FUN_10724e2fc(undefined8 *param_1,undefined8 param_2)

{
  __Znam();
  _bzero();
  *param_1 = param_2;
  return;
}



/* Entry: 10724e330; end: 10724e38b;  */

uint FUN_10724e330(void)

{
  bool bVar1;
  uint uVar2;
  long alStack_30 [2];
  
  FUN_10724e38c(alStack_30);
  bVar1 = alStack_30[0] == 0;
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    func_0x00010724e3c8();
    uVar2 = (uint)alStack_30[0];
  }
  FUN_10724e558(alStack_30);
  return uVar2 | (uint)!bVar1 << 8;
}



/* Entry: 10724e38c; end: 10724e403;  */

void FUN_10724e38c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10724e404; end: 10724e49b;  */

void FUN_10724e404(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  __ZNSt3__119__shared_mutex_base15try_lock_sharedEv();
  if ((uVar1 & 1) == 0) {
    __ZNSt3__119__shared_mutex_base11lock_sharedEv(param_1);
  }
  return;
}



/* Entry: 10724e49c; end: 10724e4cf;  */

undefined8 * FUN_10724e49c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_10724e4d0(*param_1);
  }
  return param_1;
}



/* Entry: 10724e4d0; end: 10724e557;  */

void FUN_10724e4d0(void)

{
  __ZNSt3__119__shared_mutex_base13unlock_sharedEv();
  return;
}



/* Entry: 10724e558; end: 10724e57f;  */

long FUN_10724e558(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10724e580; end: 10724e5b7;  */

void FUN_10724e580(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_1109952e0;
  return;
}



/* Entry: 10724e5b8; end: 10724e5db;  */

undefined8 FUN_10724e5b8(undefined8 param_1)

{
  FUN_10724e5dc(param_1,0);
  return param_1;
}



/* Entry: 10724e5dc; end: 10724e5f3;  */

void FUN_10724e5dc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 10724e5f4; end: 10724e697;  */

uint * FUN_10724e5f4(uint *param_1)

{
  char cVar1;
  bool bVar2;
  int *extraout_x8;
  
  if (((ulong)*param_1 * (ulong)param_1[1] & 0x3fffffffffffffff) != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 = lRam0000000113823db0 + (ulong)param_1[1] * (ulong)*param_1 * -4;
      }
    } while (cVar1 != '\0');
    func_0x00010724e7c8();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = *extraout_x8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10724e5b8(param_1 + 2);
  return param_1;
}



/* Entry: 10724e698; end: 10724e717;  */

void FUN_10724e698(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10724e718(param_1,param_4);
    FUN_10724e750(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_10724e770(&uStack_40);
  return;
}



/* Entry: 10724e718; end: 10724e74f;  */

void FUN_10724e718(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_10724e01c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2);
    return;
  }
  FUN_10724e008();
  puVar2 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10724e750; end: 10724e76f;  */

void FUN_10724e750(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10724e770; end: 10724e79b;  */

long FUN_10724e770(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10724e0e0(param_1);
  }
  return param_1;
}



/* Entry: 10724e79c; end: 10724e8fb;  */

undefined4 * FUN_10724e79c(void)

{
  char cVar1;
  bool bVar2;
  int *extraout_x8;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if (((ulong)in_stack_00000008 * (ulong)in_stack_0000000c & 0x3fffffffffffffff) != 0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113823db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113823db0 =
             lRam0000000113823db0 + (ulong)in_stack_0000000c * (ulong)in_stack_00000008 * -4;
      }
    } while (cVar1 != '\0');
    func_0x00010724e7c8();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = *extraout_x8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10724e5b8(&stack0x00000010);
  return &stack0x00000008;
}



/* Entry: 10724e8fc; end: 10724e983;  */

void FUN_10724e8fc(undefined8 param_1,int param_2)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain();
  uStack_38 = param_1;
  if (param_2 == 0) {
    FUN_10724e9c4(auStack_40,&uStack_38);
    func_0x00010724f244();
    FUN_10724f174();
  }
  else {
    FUN_10724e984(auStack_40,&uStack_38);
    func_0x00010724f244();
    FUN_10724f11c();
  }
  _objc_release(uStack_38);
  return;
}



/* Entry: 10724e984; end: 10724e9c3;  */

void FUN_10724e984(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x98;
  __Znwm();
  FUN_10724f2dc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10724e9c4; end: 10724ea03;  */

void FUN_10724e9c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd0;
  __Znwm();
  FUN_10724fe60();
  *param_1 = uVar1;
  return;
}



/* Entry: 10724ea04; end: 10724ea2f;  */

undefined8 * FUN_10724ea04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110995308;
  _objc_initWeak(param_1 + 1);
  return param_1;
}



/* Entry: 10724ea30; end: 10724ea5b;  */

void FUN_10724ea30(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010c130280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724ea5c; end: 10724ea8f;  */

void FUN_10724ea5c(undefined8 param_1)

{
  func_0x00010724f1e8();
  func_0x00010bf2bd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724ea90; end: 10724eabb;  */

void FUN_10724ea90(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010bf29a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724eabc; end: 10724eaef;  */

void FUN_10724eabc(undefined8 param_1)

{
  func_0x00010724f1e8();
  func_0x00010bf29520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724eaf0; end: 10724eb1b;  */

void FUN_10724eaf0(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010c0ba9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724eb1c; end: 10724eb47;  */

void FUN_10724eb1c(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010c0ba760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724eb48; end: 10724eda3;  */

void FUN_10724eb48(undefined8 param_1,int param_2,long param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  
  func_0x00010724f258();
  func_0x00010c0ccfc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 2) {
    func_0x00010724f26c();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_2 == 1) {
    func_0x00010724f26c();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_2 == 0) {
    func_0x00010724f26c();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010724f26c();
    func_0x00010c09e800();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010724f204();
  uVar1 = *(char *)(param_3 + 0x17) == '\0';
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724f204();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010724f20c();
  func_0x00010c0ba740();
  _objc_release(puVar3);
  func_0x00010724f204();
  _objc_release();
  func_0x00010724f1d8();
  func_0x00010724f278(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  func_0x00010724f1e0();
  func_0x00010724f1f4();
  func_0x00010c0baa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10724eda4; end: 10724edcf;  */

void FUN_10724eda4(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010c0baa20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724edd0; end: 10724ee07;  */

void FUN_10724edd0(undefined8 param_1,undefined4 *param_2)

{
  func_0x00010724f1e8(*param_2);
  func_0x00010c0ba7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724ee08; end: 10724ee33;  */

void FUN_10724ee08(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010c0baa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724ee34; end: 10724ee67;  */

void FUN_10724ee34(undefined8 param_1)

{
  func_0x00010724f1e8();
  func_0x00010c0ba820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724ee68; end: 10724ee93;  */

void FUN_10724ee68(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010c0ba7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724ee94; end: 10724ef83;  */

void FUN_10724ee94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_88 [23];
  char cStack_71;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x00010724f258();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_38 = extraout_x8;
  func_0x0001077b5514(auStack_70,param_2);
  FUN_10724ef84(auStack_88,auStack_70);
  uVar2 = cStack_71 == '\0';
  func_0x00010c25da80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  puVar3 = auStack_70;
  func_0x000104c2f714(puVar3);
  func_0x00010724f20c();
  func_0x00010c247700();
  func_0x00010724f214();
  func_0x00010724f1d8();
  func_0x00010724f278(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  func_0x00010724f1d8();
  func_0x00010724f1e0();
  func_0x00010724f078();
  return;
}



/* Entry: 10724ef84; end: 10724efa3;  */

void FUN_10724ef84(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x00010724f078(param_1,&uStack_11);
  return;
}



/* Entry: 10724efa4; end: 10724efcf;  */

void FUN_10724efa4(undefined8 param_1)

{
  func_0x00010724f1f4();
  func_0x00010c0ba6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10724efd0; end: 10724f04f;  */

undefined * FUN_10724efd0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,plVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010724f20c();
  func_0x00010c2325a0();
  func_0x00010724f214();
  func_0x00010724f1d8();
  return puVar2;
}



/* Entry: 10724f050; end: 10724f11b;  */

void FUN_10724f050(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10724f054);
  (*pcVar1)();
}



/* Entry: 10724f11c; end: 10724f13f;  */

undefined8 FUN_10724f11c(undefined8 param_1)

{
  FUN_10724f140(param_1,0);
  return param_1;
}



/* Entry: 10724f140; end: 10724f157;  */

void FUN_10724f140(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10724f3e4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10724f158; end: 10724f173;  */

void FUN_10724f158(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10724f3e4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724f174; end: 10724f197;  */

undefined8 FUN_10724f174(undefined8 param_1)

{
  FUN_10724f198(param_1,0);
  return param_1;
}



/* Entry: 10724f198; end: 10724f1af;  */

void FUN_10724f198(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107250094(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10724f1b0; end: 10724f1cb;  */

void FUN_10724f1b0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107250094(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724f1cc; end: 10724f28b;  */

void FUN_10724f1cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10724f28c; end: 10724f2d3; -[MGLMapViewImplDelegate initWithImpl:] */

void FUN_10724f28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8d40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10724f2d4; end: 10724f2db; -[MGLMapViewImplDelegate glkView:drawInRect:] */

void FUN_10724f2d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010724f1f4(uVar1);
  func_0x00010c130280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10724f2dc; end: 10724f393;  */

undefined8 * FUN_10724f2dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  FUN_10724ea04();
  puVar2[2] = &PTR_DAT_110995578;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[6] = 0x32aaaba7;
  puVar2[5] = 0;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xe] = 0;
  puVar2[0xd] = 0;
  puVar2[0x10] = 0;
  puVar2[0xf] = 0;
  *puVar2 = &PTR_FUN_110995438;
  FUN_10724f394(&uStack_38);
  uVar1 = uStack_38;
  uStack_38 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = uVar1;
  func_0x00010724fc50(&uStack_38);
  *param_1 = &PTR_FUN_110995438;
  param_1[2] = &PTR_DAT_110995578;
  return param_1;
}



/* Entry: 10724f394; end: 10724f3e3;  */

void FUN_10724f394(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x38;
  __Znwm();
  FUN_10724fadc();
  *param_1 = uVar1;
  return;
}



/* Entry: 10724f3e4; end: 10724f477;  */

long FUN_10724f3e4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x90) + 0x20) != 0) {
    puVar2 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
    func_0x00010bf5e500();
    iVar1 = (int)puVar2;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    func_0x00010724fcb0();
    if (iVar1 != 0) {
      func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8,param_2,0);
    }
  }
  FUN_10724faa8((long *)(param_1 + 0x90));
  func_0x0001078b49f4(param_1 + 0x10);
  _objc_destroyWeak(param_1 + 8);
  return param_1;
}



/* Entry: 10724f478; end: 10724f483;  */

long FUN_10724f478(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x90) + 0x20) != 0) {
    puVar2 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
    func_0x00010bf5e500();
    iVar1 = (int)puVar2;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    func_0x00010724fcb0();
    if (iVar1 != 0) {
      func_0x00010c187140(PTR__OBJC_CLASS___EAGLContext_1126d34e8,param_2,0);
    }
  }
  FUN_10724faa8((long *)(param_1 + 0x90));
  func_0x0001078b49f4(param_1 + 0x10);
  _objc_destroyWeak(param_1 + 8);
  return param_1;
}



/* Entry: 10724f484; end: 10724f497;  */

void FUN_10724f484(void)

{
  FUN_10724f3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724f498; end: 10724f49f;  */

void FUN_10724f498(long param_1)

{
  FUN_10724f3e4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724f4a0; end: 10724f4f7;  */

void FUN_10724f4a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010c1d4c20(*(undefined8 *)(lVar2 + 0x18),param_2,param_2);
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10724f4f8; end: 10724f57b;  */

void FUN_10724f4f8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___CAEAGLLayer_1126d55b0;
  _objc_opt_class(PTR__OBJC_CLASS___CAEAGLLayer_1126d55b0);
  _objc_opt_isKindOfClass(uVar1,puVar2);
  func_0x00010724fcd0();
  func_0x00010724fca8();
  func_0x00010c1e15a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10724f57c; end: 10724f587;  */

void FUN_10724f57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 10724f588; end: 10724f76b;  */

void FUN_10724f588(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x90);
  if (*(long *)(lVar4 + 0x18) != 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x20) == 0) {
    puVar1 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
    _objc_alloc();
    func_0x00010bfefb80();
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined **)(lVar4 + 0x20) = puVar1;
    _objc_release(uVar3);
  }
  puVar1 = PTR__OBJC_CLASS___GLKView_1126d55b8;
  _objc_alloc();
  func_0x00010724fce0();
  func_0x00010bf20c00();
  func_0x00010c0141e0();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined **)(lVar4 + 0x18) = puVar1;
  _objc_release(uVar3);
  func_0x00010724fca8();
  func_0x00010c18b5e0(*(undefined8 *)(lVar4 + 0x18));
  func_0x00010c16d4a0(*(undefined8 *)(lVar4 + 0x18));
  FUN_10724f76c();
  func_0x00010c1826c0(*(undefined8 *)(lVar4 + 0x18));
  func_0x00010c182220(*(undefined8 *)(lVar4 + 0x18));
  func_0x00010c191820(*(undefined8 *)(lVar4 + 0x18));
  func_0x00010c1917c0(*(undefined8 *)(lVar4 + 0x18));
  func_0x00010724fce0();
  func_0x00010c079180();
  func_0x00010c1d4c20(*(undefined8 *)(lVar4 + 0x18));
  func_0x00010724fca8();
  func_0x00010724fce0();
  func_0x00010c079180();
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4c20();
  func_0x00010724fcb0();
  func_0x00010724fca8();
  func_0x00010c195200(*(undefined8 *)(lVar4 + 0x18));
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___CAEAGLLayer_1126d55b0;
  _objc_opt_class(PTR__OBJC_CLASS___CAEAGLLayer_1126d55b0);
  _objc_opt_isKindOfClass(uVar3,puVar1);
  func_0x00010724fcd0();
  func_0x00010724fca8();
  func_0x00010c1e15a0(uVar2);
  func_0x00010724fcb0();
  func_0x00010724fce0();
  func_0x00010c066fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10724f76c; end: 10724f7bf;  */

undefined8 FUN_10724f76c(undefined8 param_1)

{
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5c20();
  func_0x00010724fcb8();
  return param_1;
}



/* Entry: 10724f7c0; end: 10724f7eb;  */

void FUN_10724f7c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10724f7ec; end: 10724f7f7;  */

void FUN_10724f7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6bb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18),PTR_s_deleteDrawable_1125b8880);
  return;
}



/* Entry: 10724f7f8; end: 10724f8cf;  */

void FUN_10724f7f8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam00000001136ca178 & 1) == 0) {
      iVar1 = 0x136ca178;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110ea4d38;
        _CFBundleGetBundleWithIdentifier();
        ppuRam00000001136ca170 = ppuVar3;
        ___cxa_guard_release(0x1136ca178);
      }
    }
    ppuVar3 = ppuRam00000001136ca170;
    if (ppuRam00000001136ca170 != (undefined **)0x0) break;
    unaff_x19 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    unaff_x20 = unaff_x19;
    ___cxa_throw(unaff_x19,PTR___ZTISt13runtime_error_110346a40,
                 PTR___ZNSt13runtime_errorD1Ev_1103461d8);
    ___cxa_guard_abort(0x1136ca178);
    unaff_x30 = FUN_10724f8d0;
    func_0x00010724fce8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdba214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFBundleGetFunctionPointerForName_11034a518)(ppuVar3,puVar2);
  return;
}



/* Entry: 10724f8d0; end: 10724f933;  */

void FUN_10724f8d0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if ((bRam00000001136ca178 & 1) == 0) {
      iVar1 = 0x136ca178;
      ___cxa_guard_acquire();
      if (iVar1 != 0) {
        ppuVar3 = &PTR____CFConstantStringClassReference_110ea4d38;
        _CFBundleGetBundleWithIdentifier();
        ppuRam00000001136ca170 = ppuVar3;
        ___cxa_guard_release(0x1136ca178);
      }
    }
    ppuVar3 = ppuRam00000001136ca170;
    if (ppuRam00000001136ca170 != (undefined **)0x0) break;
    unaff_x19 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    unaff_x20 = unaff_x19;
    ___cxa_throw(unaff_x19,PTR___ZTISt13runtime_error_110346a40,
                 PTR___ZNSt13runtime_errorD1Ev_1103461d8);
    ___cxa_guard_abort(0x1136ca178);
    unaff_x30 = FUN_10724f8d0;
    func_0x00010724fce8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdba214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFBundleGetFunctionPointerForName_11034a518)(ppuVar3,puVar2);
  return;
}



/* Entry: 10724f934; end: 10724f9a3;  */

void FUN_10724f934(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x0001078b4934(param_1 + 0x10,0xffffffff);
  func_0x00010724f970(uVar1);
  func_0x00010724fcf0();
  func_0x0001078b495c();
  return;
}



/* Entry: 10724f9a4; end: 10724f9b7;  */

void FUN_10724f9a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x0001078b4934(param_1,0xffffffff);
  func_0x00010724f970(uVar1);
  func_0x00010724fcf0();
  func_0x0001078b495c();
  return;
}



/* Entry: 10724f9b8; end: 10724fa47;  */

void FUN_10724f9b8(double param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  
  FUN_10724f76c();
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf20c00();
  _objc_loadWeakRetained(param_5 + 8);
  func_0x00010bf20c00();
  *(ulong *)(param_5 + 0x88) = CONCAT44((int)(param_1 * param_4),(int)(param_1 * param_3));
  func_0x00010724fcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10724fa48; end: 10724fa73;  */

void FUN_10724fa48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10724fa74; end: 10724faa7;  */

long FUN_10724fa74(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 10724faa8; end: 10724fadb;  */

long * FUN_10724faa8(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10724fadc; end: 10724fba3;  */

undefined8 * FUN_10724fadc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  *param_1 = &PTR_FUN_110995658;
  param_1[1] = param_2;
  puVar2 = PTR_PTR_1126d55c0;
  _objc_alloc();
  func_0x00010c01d300();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = puVar2;
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  uVar1 = SUB81(puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0793e0();
  FUN_10724fca8();
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[6] = 0;
  return param_1;
}



/* Entry: 10724fba4; end: 10724fba7;  */

long FUN_10724fba4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10724fba8; end: 10724fbbb;  */

void FUN_10724fba8(void)

{
  FUN_10724fc1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724fbbc; end: 10724fbbf;  */

undefined8 FUN_10724fbbc(void)

{
  return 1;
}



/* Entry: 10724fbc0; end: 10724fc17;  */

void FUN_10724fbc0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar2 + 0x90);
  uVar1 = lVar2 + 0x10;
  func_0x0001078b49a0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf1a220(*(undefined8 *)(lVar4 + 0x18));
    uVar3 = *(undefined8 *)(lVar2 + 0x90);
    func_0x0001078b4934(lVar2 + 0x10,0xffffffff);
    func_0x00010724f970(uVar3);
    func_0x00010724fcf0();
    func_0x0001078b495c();
  }
  else {
    func_0x00010724f970(lVar4);
    func_0x00010724fcf0();
    func_0x0001078b49c0();
  }
  return;
}



/* Entry: 10724fc18; end: 10724fc1b;  */

void FUN_10724fc18(void)

{
  return;
}



/* Entry: 10724fc1c; end: 10724fc73;  */

long FUN_10724fc1c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x18));
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 10724fc74; end: 10724fc8b;  */

void FUN_10724fc74(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10724fc1c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10724fc8c; end: 10724fca7;  */

void FUN_10724fc8c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10724fc1c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10724fca8; end: 10724fd1b;  */

void FUN_10724fca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10724fd1c; end: 10724fd63; -[MGLMetalMapViewImplDelegate initWithImpl:] */

void FUN_10724fd1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8d48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10724fd64; end: 10724fe57; -[MGLMetalMapViewImplDelegate mtkView:drawableSizeWillChange:] */

void FUN_10724fd64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5b68;
  func_0x00010c22b860();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0b3b60();
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126c5b68;
    func_0x00010c22b860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b3b60();
    FUN_107250b14();
    func_0x000107250b24();
    if ((long)puVar1 < 4) {
      return;
    }
    puVar1 = PTR_PTR_1126c5b68;
    func_0x00010c22b860(PTR_PTR_1126c5b68);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107250b70();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


