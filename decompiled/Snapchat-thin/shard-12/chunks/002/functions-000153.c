/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108eb5cc8; end: 108eb62c3;  */

void FUN_108eb5cc8(double param_1,double param_2,undefined *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  ulong uVar9;
  undefined *puVar10;
  double dVar11;
  double dVar12;
  long alStack_1b0 [2];
  undefined8 uStack_1a0;
  undefined4 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 *puStack_128;
  undefined8 auStack_120 [2];
  undefined4 uStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  int iStack_64;
  
  _objc_retain();
  iStack_64 = param_4;
  if (param_3 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    func_0x00010c23d0a0(param_3);
    dVar11 = param_1;
    func_0x00010c14e120(param_3);
    dVar12 = dVar11;
    func_0x00010c23d0a0(param_3);
    func_0x00010c14e120(param_3);
    puVar10 = param_3;
    if ((2400.0 < param_1 * dVar11) || (2400.0 < param_2 * dVar12)) {
      _UIImageJPEGRepresentation(0x3fe0000000000000,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lStack_80 = 0;
      lStack_78 = 0;
      uStack_70 = 0;
      uStack_110 = 1;
      func_0x00010568a8b4(&lStack_80,&uStack_110);
      piVar8 = &iStack_64;
      if (iStack_64 < 0x29) {
        piVar8 = (int *)&UNK_10dfa3f84;
      }
      FUN_108eb62c4(&lStack_80,piVar8);
      puVar5 = param_3;
      func_0x00010bfe8380(param_3);
      func_0x00010c23d0a0(param_3);
      func_0x00010b690f98(&uStack_b0,puVar5);
      uStack_110 = 0x42ff0000;
      iStack_104 = 0;
      uStack_100 = 0;
      iStack_10c = 0;
      iStack_108 = 0;
      uVar9 = (ulong)&uStack_110 | 8;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_e4 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      lStack_d8 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puStack_198 = puStack_a8;
      uStack_1a0 = uStack_b0;
      uStack_188 = uStack_98;
      uStack_190 = uStack_a0;
      uStack_178 = uStack_88;
      uStack_180 = uStack_90;
      uStack_d0 = uVar9;
      puStack_c8 = &uStack_c0;
      func_0x00010c271ac0(&uStack_170,PTR__OBJC_CLASS___UIImage_1126aea68);
      if (lStack_d8 != 0) {
        piVar8 = (int *)(lStack_d8 + 0x14);
        do {
          iVar1 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      if (0 < iStack_10c) {
        lVar6 = 0;
        do {
          *(undefined4 *)(uStack_d0 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iStack_10c);
      }
      iStack_108 = (int)puStack_168;
      iStack_104 = (int)((ulong)puStack_168 >> 0x20);
      uStack_110 = (undefined4)uStack_170;
      uStack_f8 = (undefined4)uStack_158;
      uStack_f4 = (undefined4)((ulong)uStack_158 >> 0x20);
      uStack_100 = (undefined4)uStack_160;
      uStack_fc = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_e8 = (undefined4)uStack_148;
      uStack_e4 = (undefined4)((ulong)uStack_148 >> 0x20);
      uStack_f0 = (undefined4)uStack_150;
      uStack_ec = (undefined4)((ulong)uStack_150 >> 0x20);
      lStack_d8 = lStack_138;
      uStack_e0 = (undefined4)uStack_140;
      uStack_dc = (undefined4)((ulong)uStack_140 >> 0x20);
      iStack_10c = uStack_170._4_4_;
      uVar4 = uStack_d0;
      puVar7 = puStack_c8;
      if ((puStack_c8 != &uStack_c0) &&
         (uVar4 = uVar9, puVar7 = &uStack_c0, puStack_c8 != (undefined8 *)0x0)) {
        _free(puStack_c8[-1]);
      }
      puStack_c8 = puVar7;
      uStack_d0 = uVar4;
      if (uStack_170._4_4_ < 3) {
        puVar7 = (undefined8 *)((ulong)&uStack_170 | 4);
        *puStack_c8 = *puStack_128;
        puStack_c8[1] = puStack_128[1];
        uStack_170 = CONCAT44(uStack_170._4_4_,0x42ff0000);
        puVar7[1] = 0;
        *puVar7 = 0;
        puVar7[3] = 0;
        puVar7[2] = 0;
        puVar7[5] = 0;
        puVar7[4] = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        if (puStack_128 != auStack_120) {
          _free(puStack_128[-1]);
        }
      }
      else {
        uStack_d0 = uStack_130;
        puStack_c8 = puStack_128;
      }
      if ((iStack_108 == 0) || (iStack_104 == 0)) {
        _UIImageJPEGRepresentation(0x3fe0000000000000,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uStack_170 = CONCAT44(uStack_170._4_4_,0x1010000);
        puStack_198 = &uStack_110;
        uStack_160 = 0;
        uStack_1a0._0_4_ = 0x2010000;
        uStack_190 = 0;
        puStack_168 = puStack_198;
        FUN_109ac9fc8(&uStack_170,&uStack_1a0,3,0);
        uStack_170 = 0;
        puStack_168 = (undefined4 *)0x0;
        uStack_160 = 0;
        alStack_1b0[0] = 0;
        alStack_1b0[1] = 0;
        puVar7 = (undefined8 *)0xc;
        func_0x000107c2ae8c();
        alStack_1b0[0] = (long)puVar7 + 4;
        alStack_1b0[1] = 4;
        *(undefined1 *)(puVar7 + 1) = 0;
        *puVar7 = 0x67706a2e00000001;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,0x1010000);
        puStack_198 = &uStack_110;
        uStack_190 = 0;
        FUN_109b7fb60(alStack_1b0,&uStack_1a0,&uStack_170,&lStack_80);
        lVar6 = alStack_1b0[0];
        alStack_1b0[0] = 0;
        alStack_1b0[1] = 0;
        if (lVar6 != 0) {
          piVar8 = (int *)(lVar6 + -4);
          do {
            iVar1 = *piVar8;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
              *piVar8 = iVar1 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar1 + -1 == 0) {
            _free(*(undefined8 *)(lVar6 + -0xc));
          }
        }
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc();
        func_0x00010bffa160();
        if (puVar5 == (undefined *)0x0) {
          _UIImageJPEGRepresentation(0x3fe0000000000000,param_3);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(puVar5);
          puVar10 = puVar5;
        }
        _objc_release(puVar5);
        if (uStack_170 != 0) {
          puStack_168 = (undefined4 *)uStack_170;
          __ZdlPv();
        }
      }
      if (lStack_d8 != 0) {
        piVar8 = (int *)(lStack_d8 + 0x14);
        do {
          iVar1 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      if (0 < iStack_10c) {
        lVar6 = 0;
        do {
          *(undefined4 *)(uStack_d0 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iStack_10c);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      if (lStack_80 != 0) {
        lStack_78 = lStack_80;
        __ZdlPv();
      }
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108eb62c4; end: 108eb6383;  */

void FUN_108eb62c4(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  plVar2 = param_3 + 2;
  puVar10 = (undefined4 *)param_3[1];
  if (puVar10 < (undefined4 *)*plVar2) {
    puVar4 = puVar10 + 1;
    *puVar10 = *param_4;
  }
  else {
    lVar11 = (long)puVar10 - *param_3;
    uVar1 = (lVar11 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      func_0x00010507a6b8();
      _objc_retain(param_4);
      _objc_retain(plVar2);
      func_0x00010c2a5040(plVar2);
      func_0x00010bf670e0(param_4);
      fVar12 = (float)param_1;
      func_0x00010bfe0640(plVar2);
      func_0x00010bf67100(param_4);
      fVar13 = (float)param_1;
      plVar3 = plVar2;
      func_0x00010c27a600(plVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(plVar2);
      puVar10 = param_4;
      func_0x00010bf67240(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(plVar3);
      puVar4 = puVar10;
      func_0x00010bfb1920(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c27a460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010c27ada0(puVar5);
      uVar14 = param_1;
      func_0x00010c27ada0(puVar5);
      puVar6 = PTR_PTR_1126ba8a8;
      func_0x00010c14e120(puVar5);
      uVar15 = uVar14;
      func_0x00010c141a80(puVar5);
      func_0x00010c2551c0((double)fVar12,(double)fVar13,param_1,param_2,uVar14,uVar15,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
      return;
    }
    uVar7 = *plVar2 - *param_3;
    uVar8 = (long)uVar7 >> 1;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar8 = 0x3fffffffffffffff;
    }
    func_0x000107c27e04();
    puVar10 = (undefined4 *)((long)plVar2 + lVar11);
    lVar9 = (long)puVar10 - (param_3[1] - *param_3);
    puVar4 = puVar10 + 1;
    *puVar10 = *param_4;
    _memcpy(lVar9);
    lVar11 = *param_3;
    *param_3 = lVar9;
    param_3[1] = (long)puVar4;
    param_3[2] = (long)plVar2 + uVar8 * 4;
    if (lVar11 != 0) {
      __ZdlPv();
    }
  }
  param_3[1] = (long)puVar4;
  return;
}



/* Entry: 108eb6384; end: 108eb64eb;  */

void FUN_108eb6384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2a5040(param_3);
  func_0x00010bf670e0(param_4);
  fVar5 = (float)param_1;
  func_0x00010bfe0640(param_3);
  func_0x00010bf67100(param_4);
  fVar6 = (float)param_1;
  uVar1 = param_3;
  func_0x00010c27a600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_4;
  func_0x00010bf67240(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c27a460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c27ada0(uVar3);
  uVar1 = param_1;
  func_0x00010c27ada0(uVar3);
  puVar4 = PTR_PTR_1126ba8a8;
  func_0x00010c14e120(uVar3);
  uVar7 = uVar1;
  func_0x00010c141a80(uVar3);
  func_0x00010c2551c0((double)fVar5,(double)fVar6,param_1,param_2,uVar1,uVar7,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108eb64ec; end: 108eb677b;  */

undefined * FUN_108eb64ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined *)0x0;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != 0)) {
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar2 = param_1;
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_1;
        func_0x00010c0ff640(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        lVar9 = param_1;
        FUN_108eb6384();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar5 = param_2;
        func_0x00010c269d40(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        func_0x00010bf5cc00(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar5;
        func_0x00010c246580(lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        _objc_release(lVar5);
        func_0x00010befa140(puVar12);
        _objc_release(lVar8);
        _objc_release(lVar6);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    puVar13 = puVar12;
    func_0x00010bf529e0();
    if (puVar13 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar12);
      puVar13 = puVar12;
    }
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_release(puVar12);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  puVar12 = *(undefined **)(param_1 + 0x20);
  _objc_retain(lVar9);
  func_0x00010c269d40(puVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf5cc00(lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  puVar13 = puVar12;
  func_0x00010c06f700(puVar12);
  _objc_release(lVar10);
  _objc_release(puVar12);
  return puVar13;
}



/* Entry: 108eb677c; end: 108eb67ff;  */

undefined8 FUN_108eb677c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c06f700(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 108eb6800; end: 108eb6aab;  */

undefined * FUN_108eb6800(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar13 = (undefined *)0x0;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != 0)) {
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_2);
    lVar3 = param_1;
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        uVar14 = *(undefined8 *)(lVar11 * 8);
        lVar5 = param_1;
        func_0x00010c0ff640();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf5cc00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        FUN_108eb84f4();
        _objc_release(lVar6);
        if ((int)lVar7 == 0) {
          lVar6 = param_2;
          func_0x00010c269d40(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067ec0(uVar14);
          lVar7 = lVar6;
          func_0x00010c255000(lVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          lVar8 = lVar5;
          func_0x00010c118b40(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar8;
          FUN_108eb6384();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          lVar7 = lVar5;
          lVar8 = param_1;
          FUN_108eb88b0(lVar5,param_1,lVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(lVar6);
        func_0x00010befa140(puVar13);
        _objc_release(lVar7);
        _objc_release(lVar5);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(param_2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return puVar13;
  }
  ___stack_chk_fail();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(lVar8);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf5cc00(lVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar12;
  func_0x00010c06f700(uVar12);
  uVar10 = (uint)uVar14;
  _objc_release(lVar9);
  _objc_release(uVar12);
  lVar9 = lVar8;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar8 = lVar9;
  FUN_108eb84f4();
  if (((int)lVar8 == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    _objc_release(lVar9);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x29);
    _objc_release(lVar9);
    uVar10 = bVar1 ^ 1 | uVar10;
  }
  return (undefined *)(ulong)(uVar10 & 1);
}



/* Entry: 108eb6aac; end: 108eb6b87;  */

uint FUN_108eb6aac(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c06f700(uVar5);
  uVar4 = (uint)uVar3;
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar2 = param_2;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  FUN_108eb84f4();
  if (((int)uVar3 == 0) || (*(char *)(param_1 + 0x28) != '\x01')) {
    _objc_release(uVar2);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x29);
    _objc_release(uVar2);
    uVar4 = bVar1 ^ 1 | uVar4;
  }
  return uVar4 & 1;
}



/* Entry: 108eb6b88; end: 108eb6ce3;  */

void FUN_108eb6b88(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  if (param_2 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = param_2;
    func_0x00010c2790e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = param_2;
      func_0x00010c104260(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar4;
      func_0x00010c2be880();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      puVar2 = param_2;
      uVar5 = param_1;
      func_0x00010c104260(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2beba0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      uVar6 = uVar5;
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b13b8;
      func_0x00010c14e4c0(param_2);
      uVar7 = uVar6;
      func_0x00010c141d40(param_2);
      func_0x00010c29ba00(param_1,uVar5,uVar6,uVar7,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = param_2;
      func_0x00010c2790e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      FUN_109173e90();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108eb6ce4; end: 108eb6e4f;  */

void FUN_108eb6ce4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_3);
  lVar5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    _objc_retain(param_3);
    lVar5 = param_1;
    func_0x00010c0ff580();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar2 = param_1;
      func_0x00010c0ff640(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c269d40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf5cc00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf0d680(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108eb6e50; end: 108eb6ed3;  */

undefined8 FUN_108eb6e50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010bf87900(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 108eb6ed4; end: 108eb6ff7;  */

void FUN_108eb6ed4(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  lVar3 = 0;
  if (((param_2 != 0) && (param_1 != 0)) && (param_3 != 0)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108eb6ff8;
    puStack_50 = &UNK_1108a7398;
    _objc_retain(param_2);
    lVar2 = param_1;
    lStack_48 = param_2;
    func_0x00010c0ff580(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x108eb707c;
    puStack_80 = &UNK_110ac9a18;
    _objc_retain(param_1);
    lStack_78 = param_1;
    _objc_retain(param_2);
    lVar3 = lVar2;
    lStack_70 = param_2;
    func_0x000107c31908(lVar2,&puStack_98);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    _objc_release(lVar2);
    _objc_release(lStack_48);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108eb6ff8; end: 108eb7113;  */

undefined8 FUN_108eb6ff8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c06f700(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 108eb7114; end: 108eb71cf;  */

void FUN_108eb7114(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = param_3;
  func_0x00010c279100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126b13b8;
  if (puVar1 == (undefined *)0x0) {
    func_0x00010c128080(param_3);
    uVar3 = param_1;
    func_0x00010c14e120(param_3);
    uVar4 = uVar3;
    func_0x00010c141a80(param_3);
    func_0x00010c29ba00(param_1,param_2,uVar3,uVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_3;
    func_0x00010c279100(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108eb71d0; end: 108eb7203;  */

void FUN_108eb71d0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x00010c0ff5a0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ac9a48);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108eb7204; end: 108eb729f;  */

bool FUN_108eb7204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c27dd80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar4 == 0x16;
}



/* Entry: 108eb72a0; end: 108eb72f3;  */

bool FUN_108eb72a0(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010c0ff5a0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110ac9a48);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf529e0();
    bVar1 = lVar2 != 0;
    _objc_release(param_1);
  }
  return bVar1;
}



/* Entry: 108eb72f4; end: 108eb75b7;  */

void FUN_108eb72f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = param_1;
  _objc_retain();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0ff5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010bfb1920(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0ff640();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010bf67240();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c27a460();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        puVar7 = PTR_PTR_1126b2700;
        _objc_alloc(PTR_PTR_1126b2700);
        func_0x00010c14e120(lVar4);
        uVar12 = uVar11;
        func_0x00010c141a80(lVar4);
        func_0x00010c055500(param_1,param_2,uVar11,uVar12,puVar7);
        puVar8 = PTR_PTR_1126bb2a8;
        _objc_alloc();
        if (lVar6 == 0) {
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
        }
        else {
          func_0x00010c26f000(&uStack_a8,lVar6);
        }
        func_0x00010c052280();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_90 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_3;
        func_0x00010bf931e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_retain(lVar10);
        func_0x00010c288840(param_3);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar10);
        _objc_release(lVar10);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      _objc_release(lVar4);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2199c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108eb75b8; end: 108eb75f3;  */

void FUN_108eb75b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c118b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2199c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108eb75f4; end: 108eb7753;  */

undefined1  [16] FUN_108eb75f4(double param_1,double param_2,ulong param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  
  _objc_retain();
  _objc_retain(param_4);
  dVar10 = *(double *)PTR__CGSizeZero_110347620;
  dVar11 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  uVar2 = param_3;
  func_0x00010bfe8ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  dVar8 = dVar10;
  dVar9 = dVar11;
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bfe8ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a5040();
    dVar8 = (double)(uVar3 & 0xffffffff);
    uVar3 = param_3;
    func_0x00010bfe8ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe0640();
    dVar9 = (double)(uVar4 & 0xffffffff);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  bVar1 = false;
  if ((dVar8 == dVar10) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar11))) {
    bVar1 = dVar9 == dVar11;
  }
  dVar6 = param_1;
  dVar7 = param_2;
  if (bVar1) {
    func_0x00010c23d0a0(param_4);
    puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar6 = param_1;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar7 = 1.0;
    dVar6 = 1.0 / dVar6;
    dVar8 = param_1 * dVar6;
    dVar9 = param_2 * dVar6;
    _objc_release(puVar5);
  }
  if (param_4 != 0) {
    func_0x00010c23d0a0(param_4);
    bVar1 = false;
    if ((dVar6 == dVar10) && (bVar1 = false, !NAN(dVar7) && !NAN(dVar11))) {
      bVar1 = dVar7 == dVar11;
    }
    if (!bVar1) {
      func_0x00010c23d0a0(param_4);
      dVar8 = 0.0;
      dVar9 = 0.0;
      _AVMakeRectWithAspectRatioInsideRect();
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  auVar12._8_8_ = dVar9;
  auVar12._0_8_ = dVar8;
  return auVar12;
}



/* Entry: 108eb7754; end: 108eb7bbb;  */

void FUN_108eb7754(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,long param_7,ulong param_8,undefined8 *param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  double dVar19;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_9;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((param_8 != 0) && (param_9 != (undefined8 *)0x0)) {
    uVar1 = param_8;
    func_0x00010c0ff5a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0.0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    puVar12 = &uStack_1f0;
    uVar2 = uVar1;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar14 = *plStack_1e0;
      do {
        uVar16 = 0;
        do {
          if (*plStack_1e0 != lVar14) {
            _objc_enumerationMutation(uVar1);
          }
          func_0x00010bf6c5a0(param_8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          uVar16 = uVar16 + 1;
        } while (uVar2 != uVar16);
        puVar12 = &uStack_1f0;
        uVar2 = uVar1;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    if (param_7 != 0) {
      lVar14 = param_7;
      func_0x00010c2553e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar14;
      func_0x00010bf529e0();
      _objc_release(lVar14);
      if (lVar13 != 0) {
        param_1 = 0.0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_1f8 = 0;
        uStack_200 = 0;
        lStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        plStack_220 = (long *)0x0;
        lVar14 = param_7;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = &uStack_230;
        lStack_238 = lVar14;
        func_0x00010bf52a60();
        if (lStack_238 != 0) {
          lVar13 = *plStack_220;
          do {
            lVar17 = 0;
            do {
              if (*plStack_220 != lVar13) {
                _objc_enumerationMutation(lVar14);
              }
              uVar18 = *(undefined8 *)(lStack_228 + lVar17 * 8);
              puVar3 = PTR_PTR_1126b13b0;
              func_0x00010c241c40();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010bfc0fa0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar5);
              _objc_release(puVar4);
              puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              puVar5 = puVar6;
              func_0x00010c26b700(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c078c00();
              _objc_release(puVar5);
              puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x00010bfe7300(uVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14d040(puVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar18);
              FUN_108eb75f4(puVar6,puVar5);
              uVar2 = param_8;
              param_4 = param_2;
              func_0x00010c23fe00();
              _objc_retainAutoreleasedReturnValue();
              uVar16 = uVar2;
              func_0x00010bfce320();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar2);
              uVar2 = uVar16;
              func_0x00010c2a5040();
              if ((int)puVar4 == 0) {
                param_2 = param_2 + 10.0 + 41.0;
              }
              uVar7 = uVar16;
              func_0x00010bfe0640();
              param_2 = param_2 / (double)(uVar7 & 0xffffffff);
              param_3 = (double)(uVar2 & 0xffffffff);
              param_1 = param_1 / param_3;
              func_0x00010c253ae0(PTR_PTR_1126c4978);
              param_5 = param_3;
              func_0x00010c254d80(PTR_PTR_1126c4978);
              param_6 = param_5;
              func_0x00010c254d60(PTR_PTR_1126c4978);
              puVar4 = PTR_PTR_1126b13b8;
              func_0x00010c06c000();
              puVar8 = PTR_PTR_1126affe8;
              func_0x00010bfccec0(PTR_PTR_1126affe8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befb960(param_1,param_2,param_3,param_4,param_5,param_6,puVar4);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar8);
              _objc_release(uVar16);
              _objc_release(puVar5);
              _objc_release(puVar6);
              _objc_release(puVar3);
              lVar17 = lVar17 + 1;
            } while (lStack_238 != lVar17);
            puVar12 = &uStack_230;
            lStack_238 = lVar14;
            func_0x00010bf52a60();
          } while (lStack_238 != 0);
        }
        _objc_release(lVar14);
      }
    }
    _objc_release(uVar1);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  dVar19 = param_1;
  _objc_retain(puVar12);
  puVar15 = puVar12;
  func_0x00010bf529e0();
  if (puVar15 < (undefined8 *)0x4) {
    puVar15 = puVar12;
    func_0x00010bfb1920(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar15;
    func_0x00010c27a460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    if (dVar19 != 0.0) {
      puVar10 = puVar12;
      func_0x00010c089820(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c27a460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
    _objc_release(puVar15);
  }
  puVar15 = puVar12;
  func_0x00010bf529e0();
  if (puVar15 < (undefined8 *)0x2) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    _objc_retain(puVar12);
    puVar15 = puVar12;
  }
  puVar4 = PTR_PTR_1126dc5c8;
  _objc_alloc(PTR_PTR_1126dc5c8);
  func_0x00010c04c880(param_1,param_2,param_6,param_3,param_4,param_5);
  _objc_release(puVar15);
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108eb7bbc; end: 108eb7d3f; +[SCSnapDocStickerUtils stickerTransformStateFromTransforms:relativeSize:center:scale:rotation:] */

void FUN_108eb7bbc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  
  dVar6 = param_1;
  _objc_retain(param_9);
  uVar5 = param_9;
  func_0x00010bf529e0();
  if (uVar5 < 4) {
    uVar5 = param_9;
    func_0x00010bfb1920(param_9);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c27a460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    if (dVar6 != 0.0) {
      uVar2 = param_9;
      func_0x00010c089820(param_9);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27a460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  uVar5 = param_9;
  func_0x00010bf529e0();
  if (uVar5 < 2) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_9);
    uVar5 = param_9;
  }
  puVar4 = PTR_PTR_1126dc5c8;
  _objc_alloc(PTR_PTR_1126dc5c8);
  func_0x00010c04c880(param_1,param_2,param_6,param_3,param_4,param_5);
  _objc_release(uVar5);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108eb7d40; end: 108eb7e43; +[SCSnapDocStickerUtils videoTrackingTimeTransformsForStaticStickersWithRelativeCenter:scale:rotation:] */

void FUN_108eb7d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long in_x4;
  undefined8 uVar11;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2700;
  _objc_alloc();
  func_0x00010c055500(param_1,param_2,param_3,param_4);
  puVar2 = PTR_PTR_1126bb2a8;
  _objc_alloc();
  uVar11 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  func_0x00010c052280();
  ppuVar9 = &puStack_60;
  lVar10 = 1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(lVar10);
  _objc_retain(in_x4);
  if ((((ppuVar9 != (undefined **)0x0) &&
       (ppuVar4 = ppuVar9, func_0x00010bf926c0(), (int)ppuVar4 != 0)) && (lVar10 != 0)) &&
     (in_x4 != 0)) {
    lVar5 = in_x4;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    if (lVar6 != 0) {
      lVar5 = in_x4;
      FUN_108eb7114(in_x4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1281e0(in_x4);
      lVar7 = in_x4;
      func_0x00010c06c000(in_x4);
      lVar8 = lVar6;
      func_0x00010b7047b0(uVar11,param_2,lVar6,lVar5,lVar7,ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126c7c38;
      _objc_retain(in_x4);
      _objc_opt_new(puVar1);
      func_0x00010c077fa0(in_x4);
      func_0x00010c178360(puVar1);
      func_0x00010c07c340(in_x4);
      func_0x00010c178340(puVar1);
      func_0x00010c07c340(in_x4);
      _objc_release(in_x4);
      func_0x00010c178380(puVar1);
      func_0x00010c193640(lVar8);
      _objc_release(puVar1);
      ppuVar4 = ppuVar9;
      func_0x00010befa9a0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c21b740(in_x4);
      _objc_release(ppuVar4);
      _objc_release(lVar8);
      _objc_release(lVar5);
    }
    _objc_release(lVar6);
  }
  _objc_release(in_x4);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 108eb7e44; end: 108eb8013; +[SCSnapDocStickerUtils addStickerToSnapDocEditor:segment:stickerView:] */

void FUN_108eb7e44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((((param_5 != 0) && (lVar1 = param_5, func_0x00010bf926c0(), (int)lVar1 != 0)) &&
      (param_6 != 0)) && (param_7 != 0)) {
    lVar1 = param_7;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_7;
      FUN_108eb7114(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1281e0(param_7);
      lVar3 = param_7;
      func_0x00010c06c000(param_7);
      lVar4 = lVar2;
      func_0x00010b7047b0(param_1,param_2,lVar2,lVar1,lVar3,param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126c7c38;
      _objc_retain(param_7);
      _objc_opt_new(puVar5);
      func_0x00010c077fa0(param_7);
      func_0x00010c178360(puVar5);
      func_0x00010c07c340(param_7);
      func_0x00010c178340(puVar5);
      func_0x00010c07c340(param_7);
      _objc_release(param_7);
      func_0x00010c178380(puVar5);
      func_0x00010c193640(lVar4);
      _objc_release(puVar5);
      lVar3 = param_5;
      func_0x00010befa9a0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c21b740(param_7);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(lVar1);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108eb8014; end: 108eb80af; +[SCSnapDocStickerUtils removeStickerFromSnapDocEditor:stickerView:] */

void FUN_108eb8014(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) &&
      (lVar1 = param_3, func_0x00010bf926c0(), puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570,
      param_4 != 0)) && ((int)lVar1 != 0)) {
    lVar1 = param_4;
    func_0x00010c280560(param_4);
    func_0x00010c0df780(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6c5a0(param_3,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eb80b0; end: 108eb8247; +[SCSnapDocStickerUtils updateStickerInSnapDocEditor:stickerView:] */

void FUN_108eb80b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_5 != 0) && (lVar1 = param_5, func_0x00010bf926c0(), param_6 != 0)) &&
     ((int)lVar1 != 0)) {
    lVar1 = param_6;
    FUN_108eb7114(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_6;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c271a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010c1281e0(param_6);
      lVar2 = param_6;
      func_0x00010c06c000(param_6);
      lVar4 = lVar3;
      func_0x00010b7047b0(param_1,param_2,lVar3,lVar1,lVar2,param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c280560(param_6);
      func_0x00010c0df780(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar4);
      func_0x00010c288840(param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(lVar4);
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108eb8248; end: 108eb82ef;  */

void FUN_108eb8248(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c118b40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1e5020(param_2);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5cc00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf51e00();
  func_0x00010c1863a0(param_2);
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108eb82f0; end: 108eb8473; +[SCSnapDocStickerUtils addQuickStickerItemInstance:toSnapDocEditor:relativeSize:relativeCenter:scale:rotation:] */

void FUN_108eb82f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar7 = (undefined *)0x0;
  if ((param_9 != 0) && (param_10 != 0)) {
    lVar1 = param_10;
    func_0x00010c0ff5a0(param_10,param_8,&PTR___NSConcreteGlobalBlock_110ac9a48);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      lVar2 = param_9;
      func_0x00010c0cc0c0(param_9);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfedf20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfc0fa0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c06c000();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      puVar7 = PTR_PTR_1126b13b8;
      puVar6 = PTR_PTR_1126affe8;
      func_0x00010bfccec0(PTR_PTR_1126affe8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befb960(param_1,param_2,param_3,param_4,param_5,param_6,puVar7,param_8,param_9,
                          param_10,lVar5,puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    else {
      puVar7 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_10);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108eb8474; end: 108eb84f3;  */

bool FUN_108eb8474(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba8d8;
  _objc_opt_class(PTR_PTR_1126ba8d8);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  uVar1 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    func_0x00010bfee000(param_1);
    bVar2 = param_1 == 0xf;
  }
  _objc_release(uVar1);
  return bVar2;
}



/* Entry: 108eb84f4; end: 108eb8553;  */

bool FUN_108eb84f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96ee0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return (int)uVar2 == 0x18;
}



/* Entry: 108eb8554; end: 108eb85a3;  */

undefined8 FUN_108eb8554(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96ee0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return 0;
}



/* Entry: 108eb85a4; end: 108eb88af;  */

void FUN_108eb85a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar12;
  func_0x00010bf2aae0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22a600();
  _objc_release(uVar3);
  _objc_release(uVar12);
  uVar1 = (int)uVar4 - 2;
  if (uVar1 < 5) {
    uVar12 = *(undefined8 *)(&UNK_10dfa3f88 + (ulong)uVar1 * 8);
  }
  else {
    uVar12 = 0x5fefc56;
  }
  puVar5 = PTR_PTR_1126ba970;
  _objc_opt_new(PTR_PTR_1126ba970);
  uVar3 = uVar2;
  func_0x00010c0840e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf2aa80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf4db80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aabc0(puVar5,param_4,uVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c21ace0(puVar5,param_4,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126ba8b8;
  _objc_opt_new();
  puVar10 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176d00(puVar9,param_4,puVar10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126ba898;
  _objc_alloc(PTR_PTR_1126ba898);
  func_0x00010c1281e0(param_5);
  uVar4 = param_1;
  uVar8 = param_2;
  func_0x00010bf345e0(param_5);
  uVar6 = uVar4;
  func_0x00010c141a80(param_5);
  uVar7 = uVar6;
  func_0x00010c14e120(param_5);
  uVar12 = param_5;
  func_0x00010c081660();
  func_0x00010c081160();
  uVar3 = param_5;
  func_0x00010c279100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar11 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  _objc_release(param_3);
  func_0x00010c055c20(param_1,param_2,uVar4,uVar8,uVar6,uVar7,puVar10,param_4,6,0x11,0,0,0,uVar2,0,
                      (char)uVar12);
  _objc_release(puVar11);
  _objc_release(uVar3);
  _objc_release(puVar9);
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 108eb88b0; end: 108eb8997;  */

void FUN_108eb88b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96ee0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  if ((int)uVar3 == 0x18) {
    uVar4 = param_1;
    FUN_108eb85a4(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108eb8998; end: 108eb89df; -[SCCameraRollSticker initForStickerPicker] */

undefined8 FUN_108eb8998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba978;
  _objc_opt_new(PTR_PTR_1126ba978);
  func_0x00010c00ffa0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 108eb89e0; end: 108eb8aab; -[SCCameraRollSticker initWithEntity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108eb89e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar4 = (long)_DAT_11277d2bc;
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + _DAT_11277d2c0) = 1;
    uVar1 = param_3;
    FUN_108eb9100();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277d2c4);
    *(undefined8 *)(param_1 + _DAT_11277d2c4) = uVar1;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277d2c8);
    *(undefined **)(param_1 + _DAT_11277d2c8) = puVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108eb8aac; end: 108eb8b4b; -[SCCameraRollSticker isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eb8aac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    puVar2 = PTR_PTR_1126ba980;
    _objc_opt_class(PTR_PTR_1126ba980);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    if (uVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11277d2c4);
      func_0x00010c071ae0(uVar4);
    }
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 108eb8b4c; end: 108eb8b5b; -[SCCameraRollSticker hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277d2c4),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 108eb8b5c; end: 108eb8c97; -[SCCameraRollSticker stickerStateWithRelativeSize:center:rotation:scale:tappableElementBounds:isTracking:isTimed:trackingTrajectory:isFlipped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba898;
  _objc_retain(param_12);
  _objc_retain(param_9);
  _objc_alloc(puVar1);
  lVar2 = param_7;
  func_0x00010c27dd80(param_7);
  lVar3 = param_7;
  func_0x00010bfee0e0(param_7);
  func_0x00010c055c20(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_8,lVar2,lVar3,0,0
                      ,0,*(undefined8 *)(param_7 + _DAT_11277d2c4),param_9,param_10);
  _objc_release(param_12);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eb8c98; end: 108eb8ca3; -[SCCameraRollSticker stickerId] */

void FUN_108eb8c98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 108eb8ca4; end: 108eb8d3b; -[SCCameraRollSticker shortLoggingName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8ca4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d2bc);
  func_0x00010c22a600();
  FUN_108eb9088();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000108ebb9cc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108eb8d3c; end: 108eb8d6b; -[SCCameraRollSticker toCTPItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8d3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d2c8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108eb8d6c; end: 108eb8d9b; -[SCCameraRollSticker toCTItemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8d6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d2c4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108eb8d9c; end: 108eb8dab; -[SCCameraRollSticker supportedFlows] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eb8d9c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d2c0);
}



/* Entry: 108eb8dac; end: 108eb8de3; -[SCCameraRollSticker updateItemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277d2c4);
  *(undefined8 *)(param_1 + _DAT_11277d2c4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108eb8de4; end: 108eb8deb; -[SCCameraRollSticker infoType] */

undefined8 FUN_108eb8de4(void)

{
  return 0x11;
}



/* Entry: 108eb8dec; end: 108eb8dfb; -[SCCameraRollSticker intrinsicSize] */

void FUN_108eb8dec(void)

{
  return;
}



/* Entry: 108eb8dfc; end: 108eb8e4b; -[SCCameraRollSticker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8dfc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d2c8,0);
  _objc_storeStrong(param_1 + _DAT_11277d2c4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d2bc,0);
  return;
}



/* Entry: 108eb8e4c; end: 108eb8e83; -[SCCameraRollStickerEntity init] */

void FUN_108eb8e4c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff080;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithInfoStickerType__1125e5098,0xf);
  return;
}



/* Entry: 108eb8e84; end: 108eb8f4f; -[SCCameraRollStickerEntity initWithImage:imageUrlString:shape:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108eb8e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ff080;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithInfoStickerType__1125e5098,0xf);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11277d2cc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11277d2d0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277d2d4) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eb8f50; end: 108eb8f8f; -[SCCameraRollStickerEntity isValid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108eb8f50(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + _DAT_11277d2cc) != 0) {
    return true;
  }
  lVar1 = *(long *)(param_1 + _DAT_11277d2d0);
  func_0x00010c08fa60(lVar1);
  return lVar1 != 0;
}



/* Entry: 108eb8f90; end: 108eb8f9f; -[SCCameraRollStickerEntity image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eb8f90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d2cc);
}



/* Entry: 108eb8fa0; end: 108eb8faf; -[SCCameraRollStickerEntity imageUrlString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eb8fa0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d2d0);
}



/* Entry: 108eb8fb0; end: 108eb8fbf; -[SCCameraRollStickerEntity shape] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108eb8fb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d2d4);
}



/* Entry: 108eb8fc0; end: 108eb8fff; -[SCCameraRollStickerEntity .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108eb8fc0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d2d0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d2cc,0);
  return;
}



/* Entry: 108eb9000; end: 108eb9087;  */

undefined1 FUN_108eb9000(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  func_0x00010b77506c();
  uVar1 = 5;
  if (param_1 != 0x702dc8b5) {
    uVar1 = param_1 == 0x767fb0d0;
  }
  uVar2 = 3;
  if (param_1 != 0x15044cf2) {
    uVar2 = uVar1;
  }
  uVar1 = 4;
  if (param_1 != 0x138fba41) {
    uVar1 = 0;
  }
  uVar3 = 2;
  if (param_1 != -0x6dc0b2e3) {
    uVar3 = uVar1;
  }
  if (param_1 < 0x15044cf2) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Entry: 108eb9088; end: 108eb90ff;  */

void FUN_108eb9088(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  
  if (param_1 < 6) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_110ac9a70)[param_1];
    _objc_retain(unaff_x19);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eb9100; end: 108eb946b;  */

void FUN_108eb9100(double param_1,double param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126dc5d0;
  _objc_opt_new(PTR_PTR_1126dc5d0);
  lVar3 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c1a7d00(puVar2,param_4,(int)param_2);
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  func_0x00010c2256c0(puVar2,param_4,(int)param_1);
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = param_3;
  func_0x00010bfe9020(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar4,param_4,lVar3);
  _objc_release(lVar3);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR_PTR_1126b0ce8;
    _objc_opt_new(PTR_PTR_1126b0ce8);
    lVar3 = param_3;
    func_0x00010bfe9020(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182a60(puVar4,param_4,lVar3);
    _objc_release(lVar3);
    func_0x00010c1c4360(puVar2,param_4,puVar4);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  func_0x00010c176f40();
  puVar5 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  func_0x00010c196600();
  puVar6 = PTR_PTR_1126dc5d8;
  _objc_opt_new(PTR_PTR_1126dc5d8);
  lVar3 = param_3;
  func_0x00010c22a600();
  iVar1 = (int)(lVar3 - 1U) + 2;
  if (4 < lVar3 - 1U) {
    iVar1 = 1;
  }
  func_0x00010c1fea40(puVar6,param_4,iVar1);
  puVar7 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  func_0x00010c1b5d40();
  puVar8 = puVar7;
  func_0x00010c0cc0c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c176f60();
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108eb946c; end: 108eb94cf;  */

void FUN_108eb946c(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000108eb92ec();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126baa60;
  _objc_alloc(PTR_PTR_1126baa60);
  func_0x00010c01fe20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108eb94d0; end: 108eb95af;  */

void FUN_108eb94d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR_PTR_1126ba968;
    _objc_alloc(PTR_PTR_1126ba968);
    func_0x00010c0201e0();
    lVar3 = *(long *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  (**(code **)(lVar3 + 0x10))(lVar3,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108eb95b0; end: 108eb972b;  */

void FUN_108eb95b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2aa80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd8f20();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    func_0x00010c254be0(PTR_PTR_1126dc5e0);
  }
  else {
    _objc_retain(param_1);
    _objc_retain(param_4);
    _objc_retain(param_1);
    _objc_retain(param_4);
    func_0x00010bfe7b20(param_2);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(param_1);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eb972c; end: 108eb9767; +[SCCameraRollStickerHelpers sizeForShape:] */

undefined1  [16] FUN_108eb972c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = param_3 - 1;
  if (uVar1 < 5) {
    auVar2._0_8_ = *(undefined8 *)(&UNK_10dfa3fb0 + uVar1 * 8);
    auVar2._8_8_ = *(undefined8 *)(&UNK_10dfa3fd8 + uVar1 * 8);
    return auVar2;
  }
  auVar3._8_8_ = 0x4069000000000000;
  auVar3._0_8_ = 0x4062c00000000000;
  return auVar3;
}



/* Entry: 108eb9768; end: 108eb9817; +[SCCameraRollStickerHelpers sizeForShape:imageSize:] */

undefined1  [16]
FUN_108eb9768(double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (5 < param_5) {
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  if ((1L << (param_5 & 0x3f) & 0x36U) != 0) {
    func_0x00010c23d320();
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  if (param_5 == 0) {
    uVar3 = 0x4062c00000000000;
    uVar1 = 0x4069000000000000;
    if (param_1 <= param_2) {
      uVar3 = 0x4069000000000000;
      uVar1 = 0x4062c00000000000;
    }
    auVar5._8_8_ = uVar3;
    auVar5._0_8_ = uVar1;
    return auVar5;
  }
  if (param_1 != param_2) {
    if (param_1 <= param_2) {
      dVar2 = (double)NEON_fminnm(param_2 / param_1,0x4008000000000000);
      auVar9._8_8_ = dVar2 * 150.0;
      auVar9._0_8_ = 0x4062c00000000000;
      return auVar9;
    }
    dVar2 = (double)NEON_fminnm(param_1 / param_2,0x4008000000000000);
    auVar8._0_8_ = dVar2 * 150.0;
    auVar8._8_8_ = 0x4062c00000000000;
    return auVar8;
  }
  auVar6._8_8_ = 0x4066800000000000;
  auVar6._0_8_ = 0x4066800000000000;
  return auVar6;
}



/* Entry: 108eb9818; end: 108eb98ef; +[SCCameraRollStickerHelpers stickerPickerViewFromItemInstance:imageProvider:runtime:completion:] */

void FUN_108eb9818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108eb98f0;
  puStack_50 = &UNK_11091a068;
  uStack_48 = param_5;
  uStack_40 = param_3;
  uStack_38 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfe9980(param_4,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_5);
  return;
}



/* Entry: 108eb98f0; end: 108eb99d3;  */

void FUN_108eb98f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126dc5e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01c9e0();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126dc5f0;
  _objc_alloc(PTR_PTR_1126dc5f0);
  func_0x00010c061d40();
  puVar3 = PTR_PTR_1126dc5f8;
  _objc_alloc(PTR_PTR_1126dc5f8);
  func_0x00010c0614a0();
  lVar5 = *(long *)(param_1 + 0x30);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108eb99d4; end: 108eb9bc7; -[SCCameraRollStickerImageProvider initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:downloader:temporaryFileWriter:fetchLimit:] */

undefined1 *
FUN_108eb99d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126ff088;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    func_0x00010c18ba80(*(undefined8 *)((long)puVar1 + 0x50));
    func_0x00010c1ec960(*(undefined8 *)((long)puVar1 + 0x50));
    func_0x00010c1cc000(*(undefined8 *)((long)puVar1 + 0x50));
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108eb9bc8; end: 108eb9bcb; -[SCCameraRollStickerImageProvider imageFromEntity:completion:] */

void FUN_108eb9bc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be372b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__imageFromEntity_completion__11256b648);
  return;
}



/* Entry: 108eb9bcc; end: 108eb9c33; -[SCCameraRollStickerImageProvider imageFromItemInstance:completion:] */

void FUN_108eb9bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x000108eb92ec(param_3,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be372a0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108eb9c34; end: 108eb9cef; -[SCCameraRollStickerImageProvider stickerImageWithEntity:imageQuality:completion:] */

void FUN_108eb9c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108eb9cf0;
    puStack_48 = &UNK_110ac2480;
    _objc_retain(param_5);
    lStack_38 = param_5;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010be372a0(param_1,param_2,param_3,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108eb9cf0; end: 108eb9e2f;  */

void FUN_108eb9cf0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0xffffffffffffffff);
  }
  else {
    puVar1 = PTR_PTR_1126ba978;
    _objc_alloc(PTR_PTR_1126ba978);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe9020(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22a600(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c01c180(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba968;
    _objc_alloc();
    func_0x00010c00ffa0();
    lVar6 = *(long *)(param_1 + 0x28);
    if (puVar3 == (undefined *)0x0) {
      (**(code **)(lVar6 + 0x10))(lVar6,0,0xffffffffffffffff);
    }
    else {
      puVar4 = puVar3;
      func_0x00010bfe90c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar6 + 0x10))(lVar6,puVar5,param_3);
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108eb9e30; end: 108eba073; -[SCCameraRollStickerImageProvider imagesForStickerPickerWithCompletion:] */

void FUN_108eb9e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = param_3;
  _objc_retainBlock(param_3);
  func_0x00010befa140(uVar7);
  _objc_release(uVar2);
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
    func_0x00010bf10fa0();
    if (puVar3 == (undefined *)0x3) {
      func_0x000108ebac54();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      FUN_108ebacd4();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = puVar4;
      func_0x00010bf529e0();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126b2688;
        _objc_opt_new(PTR_PTR_1126b2688);
        func_0x00010c2b4b40();
        _objc_unsafeClaimAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf21f60(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_58,param_1);
        func_0x00010be73b60(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        func_0x00010bfab780(param_1);
        _objc_release(param_1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_release(puVar6);
        _objc_release(puVar3);
      }
      else {
        func_0x00010be30e00(param_1);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    else {
      func_0x00010be30e00(param_1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108eba074; end: 108eba11b;  */

void FUN_108eba074(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))
                (lVar1,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
    }
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    if (param_2 == 0) {
      func_0x00010be30e00(param_1);
    }
    else {
      func_0x00010be29920(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108eba11c; end: 108eba3df; -[SCCameraRollStickerImageProvider _imageFromEntity:completion:] */

void FUN_108eba11c(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    if ((param_3 == (undefined *)0x0) ||
       (puVar1 = param_3, func_0x00010c082b20(), ((ulong)puVar1 & 1) == 0)) {
      (**(code **)(param_4 + 0x10))(param_4,0,0xffffffffffffffff);
    }
    else {
      puVar1 = param_3;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 == (undefined *)0x0) {
        puVar1 = param_3;
        func_0x00010bfe9020();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bfda7c0();
        _objc_release(puVar1);
        puVar4 = PTR_PTR_1126aebd8;
        puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
        if (((ulong)puVar2 & 1) == 0) {
          puVar4 = param_3;
          func_0x00010bfe9020(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64a80(puVar1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010c14d040();
          _objc_retainAutoreleasedReturnValue();
          puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_68 = 0xc2000000;
          pcStack_60 = FUN_108eba3e0;
          puStack_58 = &UNK_11084aaa8;
          _objc_retain(param_4);
          puStack_50 = puVar4;
          lStack_48 = param_4;
          _objc_retain(puVar4);
          func_0x000107c312d0("APPSTORE",&puStack_70);
          _objc_release(puStack_50);
          _objc_release(lStack_48);
          _objc_release(puVar4);
        }
        else {
          puVar1 = param_3;
          func_0x00010bfe9020(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e320(puVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          uVar3 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_PTR_1126aebf0;
          _objc_alloc(PTR_PTR_1126aebf0);
          _objc_opt_class(param_1);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c011b80(puVar1);
          _objc_retain(param_4);
          func_0x00010bf88c20(uVar3);
          _objc_release(puVar1);
          _objc_release(param_1);
          _objc_release(uVar3);
          _objc_release(param_4);
          puVar1 = puVar4;
        }
      }
      else {
        puVar1 = param_3;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_4 + 0x10))(param_4,puVar1,0xffffffffffffffff);
      }
      _objc_release(puVar1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108eba3e0; end: 108eba3f3;  */

void FUN_108eba3e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108eba3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),2);
  return;
}



/* Entry: 108eba3f4; end: 108eba493;  */

void FUN_108eba3f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_108eba494;
  puStack_38 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = param_2;
  _objc_retain(uVar1);
  uStack_28 = uVar1;
  _objc_retain(param_2);
  func_0x000107c312d0("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_2);
  return;
}



/* Entry: 108eba494; end: 108eba4af;  */

void FUN_108eba494(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108eba4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x20),1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108eba4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,0,0xffffffffffffffff);
  return;
}



/* Entry: 108eba4b0; end: 108eba80b; -[SCCameraRollStickerImageProvider _handleFetchResult:completion:] */

void FUN_108eba4b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_5);
  lVar2 = param_6;
  _objc_retain();
  func_0x000108ebac54();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x000108ebac54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(lVar2);
    FUN_108ebacd4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(lVar2);
  }
  uVar4 = param_5;
  func_0x00010bf529e0();
  if (uVar4 == 0) {
    func_0x00010be30e00(param_3);
  }
  else {
    uVar10 = param_5;
    func_0x00010bf529e0();
    uVar4 = uVar10;
    if (1 < uVar10) {
      uVar4 = 2;
    }
    uVar5 = uVar10;
    _dispatch_group_create();
    func_0x00010c269f80(PTR_PTR_1126dc5f8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar8 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (uVar10 != 0) {
      uVar10 = 0;
      do {
        _dispatch_group_enter(uVar5);
        uVar11 = *(undefined8 *)(param_3 + 0x48);
        uVar9 = param_5;
        func_0x00010c0dfd40(param_5);
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = puVar1;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_108eba80c;
        puStack_b0 = &UNK_110ac9aa0;
        _objc_retain(uVar5);
        uStack_a8 = uVar5;
        _objc_retain(uVar8);
        uStack_a0 = uVar8;
        _objc_retain(puVar7);
        puStack_98 = puVar7;
        _objc_retain(puVar6);
        puStack_90 = puVar6;
        func_0x00010c1357a0(param_1,param_2,uVar11);
        _objc_release(uVar9);
        _objc_release(puStack_90);
        _objc_release(puStack_98);
        _objc_release(uStack_a0);
        _objc_release(uStack_a8);
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    _objc_initWeak(auStack_d0,param_3);
    puStack_110 = puVar1;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_108eba93c;
    puStack_f8 = &UNK_110857fd0;
    _objc_copyWeak(auStack_d8,auStack_d0);
    _objc_retain(param_6);
    puStack_f0 = puVar6;
    puStack_e8 = puVar7;
    lStack_e0 = param_6;
    _objc_retain(puVar7);
    _objc_retain(puVar6);
    func_0x000107c27d98(uVar5,PTR___dispatch_main_q_11034be20,&puStack_110);
    _objc_release(puStack_e8);
    _objc_release(puStack_f0);
    _objc_release(lStack_e0);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(uVar8);
    _objc_release(uVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 108eba80c; end: 108eba93b;  */

void FUN_108eba80c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    lVar1 = param_2;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = lVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
    _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar4);
    _objc_release(0);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108eba93c; end: 108ebaa03;  */

void FUN_108eba93c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  _objc_release();
  if (lVar2 != 0) {
    func_0x000108ebac54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(lVar1);
    FUN_108ebacd4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(lVar1);
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be30e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108eba9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))
              (lVar2,PTR____NSArray0__struct_11034ab48,PTR____NSArray0__struct_11034ab48);
    return;
  }
  return;
}



/* Entry: 108ebaa04; end: 108ebab47; -[SCCameraRollStickerImageProvider _handleStickerPickerImageCompletionsWithImages:imageFilePaths:] */

void FUN_108ebaa04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_3,param_4);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126b2670);
  func_0x00010c035d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ebab48; end: 108ebab7f; -[SCCameraRollStickerImageProvider _photoLibraryFetcher] */

void FUN_108ebab48(void)

{
  _objc_alloc(PTR_PTR_1126b2670);
  func_0x00010c035d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ebab80; end: 108ebab87; -[SCCameraRollStickerImageProvider memoriesMediaHandler] */

undefined8 FUN_108ebab80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108ebab88; end: 108ebabb7; -[SCCameraRollStickerImageProvider setMemoriesMediaHandler:] */

void FUN_108ebab88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebabb8; end: 108ebaca7; -[SCCameraRollStickerImageProvider .cxx_destruct] */

void FUN_108ebabb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ebaca8; end: 108ebacd3;  */

void FUN_108ebaca8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam000000011372eb00;
  puRam000000011372eb00 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebacd4; end: 108ebad27;  */

void FUN_108ebacd4(void)

{
  undefined8 uVar1;
  
  if (lRam000000011372eb08 != -1) {
    func_0x000107c27d9c(0x11372eb08,&PTR___NSConcreteGlobalBlock_110ac9af0);
  }
  uVar1 = uRam000000011372eb10;
  _objc_retain(uRam000000011372eb10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ebad28; end: 108ebad53;  */

void FUN_108ebad28(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam000000011372eb10;
  puRam000000011372eb10 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ebad54; end: 108ebb03f; -[SCCameraRollStickerStickerPickerView initWithView:itemInstance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108ebad54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_90 = PTR_PTR_1126ff090;
  puVar2 = &uStack_98;
  uStack_98 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar16 = (long)_DAT_11277d308;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar16);
    *(undefined8 *)((long)puVar2 + lVar16) = param_4;
    _objc_release(uVar3);
    uVar3 = param_4;
    FUN_108eb946c(param_4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277d30c);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277d30c) = uVar3;
    _objc_release(uVar15);
    func_0x00010c160fc0(puVar2);
    func_0x00010c219b60(param_3);
    func_0x00010befbb60(puVar2);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar3 = param_3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    uStack_88 = uVar15;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    uStack_80 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c274200(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_3;
    uStack_78 = uVar10;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar2;
    func_0x00010bf1ff80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar13;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar1);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(puVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar15);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = (undefined8 *)PTR_PTR_1126dc5e0;
                    /* WARNING: Could not recover jumptable at 0x00010c23d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,PTR_PTR_1126dc5e0,PTR_s_sizeForShape_imageSize__11266cef8,0);
  return puVar2;
}



/* Entry: 108ebb040; end: 108ebb05b; +[SCCameraRollStickerStickerPickerView targetImageSize] */

void FUN_108ebb040(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)PTR__CGSizeZero_110347620,*(undefined8 *)(PTR__CGSizeZero_110347620 + 8)
             ,PTR_PTR_1126dc5e0,PTR_s_sizeForShape_imageSize__11266cef8,0);
  return;
}



/* Entry: 108ebb05c; end: 108ebb05f; -[SCCameraRollStickerStickerPickerView didEndDisplay] */

void FUN_108ebb05c(void)

{
  return;
}



/* Entry: 108ebb060; end: 108ebb063; -[SCCameraRollStickerStickerPickerView willDisplay] */

void FUN_108ebb060(void)

{
  return;
}



/* Entry: 108ebb064; end: 108ebb073; -[SCCameraRollStickerStickerPickerView item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ebb064(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d30c);
}



/* Entry: 108ebb074; end: 108ebb083; -[SCCameraRollStickerStickerPickerView itemInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ebb074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d308);
}



/* Entry: 108ebb084; end: 108ebb093; -[SCCameraRollStickerStickerPickerView loadedFromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108ebb084(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277d304);
}



/* Entry: 108ebb094; end: 108ebb0a3; -[SCCameraRollStickerStickerPickerView setLoadedFromCache:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ebb094(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277d304) = param_3;
  return;
}



/* Entry: 108ebb0a4; end: 108ebb0b3; -[SCCameraRollStickerStickerPickerView imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108ebb0a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277d310);
}



/* Entry: 108ebb0b4; end: 108ebb103; -[SCCameraRollStickerStickerPickerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ebb0b4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277d310,0);
  _objc_storeStrong(param_1 + _DAT_11277d308,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277d30c,0);
  return;
}



/* Entry: 108ebb104; end: 108ebb367; -[SCCameraRollStickerView initWithEntity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108ebb104(double param_1,undefined1 *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 **ppuVar6;
  double dVar7;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_60;
  _objc_retain(param_4);
  if (param_4 == 0) {
    ppuVar6 = (undefined1 **)0x0;
  }
  else {
    lVar1 = param_4;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126dc5e0;
    if (lVar1 == 0) {
      ppuVar6 = (undefined1 **)0x0;
    }
    else {
      func_0x00010c22a600(param_4);
      func_0x00010c23d0a0(lVar1);
      func_0x00010c23d340(puVar4);
      func_0x000107c308a4();
      puStack_58 = PTR_PTR_1126ff098;
      puStack_60 = param_2;
      _objc_msgSendSuper2(&puStack_60,PTR_s_initWithFrame__1125e2948);
      if (ppuVar6 != (undefined1 **)0x0) {
        lVar5 = (long)_DAT_11277d318;
        _objc_retain(param_4);
        uVar2 = *(undefined8 *)((long)ppuVar6 + lVar5);
        *(long *)((long)ppuVar6 + lVar5) = param_4;
        _objc_release(uVar2);
        lVar5 = param_4;
        func_0x00010c22a600();
        if (lVar5 == 2) {
          dVar7 = 0.0;
        }
        else {
          dVar7 = 8.0;
          if (lVar5 == 1) {
            func_0x00010c23d320(PTR_PTR_1126dc5e0);
            dVar7 = param_1 * 0.5;
          }
        }
        puVar3 = (undefined1 *)ppuVar6;
        func_0x00010c08c0e0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1842e0(dVar7);
        _objc_release(puVar3);
        puVar3 = (undefined1 *)ppuVar6;
        func_0x00010c08c0e0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c2d20();
        _objc_release(puVar3);
        puVar3 = (undefined1 *)ppuVar6;
        func_0x00010c08c0e0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c200c80();
        _objc_release(puVar3);
        puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14e120();
        puVar3 = (undefined1 *)ppuVar6;
        func_0x00010c08c0e0(ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e7620(dVar7);
        _objc_release(puVar3);
        _objc_release(puVar4);
        func_0x00010c160fc0(ppuVar6);
        puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
        func_0x00010bf20c00(ppuVar6);
        func_0x00010c013de0(puVar4);
        func_0x00010c1a9f00();
        func_0x00010c182220(puVar4);
        func_0x00010c16d4a0(puVar4);
        func_0x00010befbb60(ppuVar6);
        _objc_release(puVar4);
      }
      _objc_retain(ppuVar6);
      param_2 = (undefined1 *)ppuVar6;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_2);
  return (undefined1 *)ppuVar6;
}



/* Entry: 108ebb368; end: 108ebb3b7; -[SCCameraRollStickerView initWithItemInstance:image:] */

undefined8
FUN_108ebb368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000108eb92ec(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ffa0(param_1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108ebb3b8; end: 108ebb547; -[SCCameraRollStickerView updateEntity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ebb3b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_108ebb528;
  lVar1 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11277d318;
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c071ae0(lVar1,param_2,uVar2);
  if ((int)lVar3 == 0) {
LAB_108ebb4b4:
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010bfe9020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010bfe9020(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c071ae0(lVar3,param_2,uVar4);
    if ((int)lVar5 == 0) {
      _objc_release(uVar4);
      _objc_release(lVar3);
      goto LAB_108ebb4b4;
    }
    lVar5 = param_3;
    func_0x00010c22a600();
    lVar6 = *(long *)(param_1 + lVar7);
    func_0x00010c22a600();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
    if (lVar5 == lVar6) goto LAB_108ebb528;
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  *(long *)(param_1 + lVar7) = param_3;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  FUN_108eb9100();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277d31c);
  *(undefined8 *)(param_1 + _DAT_11277d31c) = uVar2;
  _objc_release(uVar4);
  func_0x00010c0cc2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111e20();
  _objc_release(param_1);
LAB_108ebb528:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ebb548; end: 108ebb5b7; +[SCCameraRollStickerView targetImageSizeWithImageSize:] */

undefined1  [16] FUN_108ebb548(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  func_0x00010c23d340(PTR_PTR_1126dc5e0,param_4,0);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  auVar3._0_8_ = param_1 * dVar2;
  auVar3._8_8_ = param_2 * dVar2;
  return auVar3;
}



/* Entry: 108ebb5b8; end: 108ebb5bf; -[SCCameraRollStickerView shouldRespondToTap:] */

undefined8 FUN_108ebb5b8(void)

{
  return 1;
}


