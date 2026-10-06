/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105673e10; end: 105674213; +[SCPercMLFastDNNModelFactory _modelWithIdentifier:modelStream:modelParams:options:backend:error:output:] */

void FUN_105673e10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long *param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_71;
  long lStack_68;
  
  lVar1 = param_3;
  _objc_retain();
  func_0x000109cd2af4();
  if (((uint)param_7 & (*(uint *)(lVar1 + 0x40) ^ 0xffffffff)) == 0) {
    func_0x000109cda4bc(param_9,param_6);
    puVar8 = PTR_PTR_1126b7f60;
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uint)param_7 == 1) {
      func_0x000109cdaf68(param_9,param_4,1,param_5);
    }
    else {
      lVar2 = param_3;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bfb27c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      FUN_1058ff2c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf13ae0(param_3);
      lVar5 = lVar4;
      func_0x00010bf979e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c298be0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      lStack_68 = 0;
      func_0x00010bfccf20();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lStack_68;
      _objc_retain(lStack_68);
      _objc_release(puVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar1 != 0) {
        if (param_8 != (long *)0x0) {
          _objc_retainAutorelease(lVar1);
          *param_8 = lVar1;
        }
        _objc_release(puVar8);
        _objc_release(lVar1);
        goto LAB_1056740dc;
      }
      puVar7 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bf260e0();
      func_0x00010002b838(&uStack_a0,puVar7);
      func_0x000109cdb770(&uStack_88,param_4,param_9 + 0x80,param_7,&uStack_a0);
      if (uStack_90 < 0) {
        __ZdlPv(uStack_a0);
      }
      if (cStack_71 < '\0') {
        func_0x000100033dac(&uStack_a0,uStack_88,uStack_80);
      }
      else {
        uStack_98 = uStack_80;
        uStack_a0 = uStack_88;
        uStack_90._7_1_ = cStack_71;
      }
      func_0x000109cdae78(param_9,&uStack_a0,param_7,param_5);
      if (uStack_90._7_1_ < '\0') {
        __ZdlPv(uStack_a0);
      }
      if (cStack_71 < '\0') {
        __ZdlPv(uStack_88);
      }
      _objc_release(puVar8);
    }
    if (param_9 + 0x80 != param_5) {
      FUN_105674ca4();
      FUN_105674ca4(param_9 + 0x98,*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x20),
                    (*(long *)(param_5 + 0x20) - *(long *)(param_5 + 0x18) >> 3) *
                    0x2e8ba2e8ba2e8ba3);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (param_9 + 0xb0,param_5 + 0x30);
  }
  else if (param_8 != (long *)0x0) {
    func_0x000105673080();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_8 = lVar1;
  }
LAB_1056740dc:
  _objc_release(param_3);
  return;
}



/* Entry: 105674214; end: 10567439b; +[SCPercMLFastDNNModelFactory _populateOptions:fromModel:] */

void FUN_105674214(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  lVar1 = param_5;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_5;
    func_0x00010c0ec860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf90c00();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      *(undefined1 *)(param_4 + 0x1c) = 1;
      lVar1 = param_5;
      func_0x00010c0ec860(param_5);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf356c0();
      _objc_retainAutoreleasedReturnValue();
      param_1 = 0xc0000000;
      func_0x00010bf980c0();
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    lVar1 = param_5;
    func_0x00010c0ec860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf918c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      *(undefined1 *)(param_4 + 0x1d) = 1;
      lVar1 = param_5;
      func_0x00010c0ec860(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      *(undefined4 *)(param_4 + 0x18) = param_1;
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10567439c; end: 1056743c3;  */

void FUN_10567439c(undefined4 param_1,long param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  FUN_1056743c4(*(undefined8 *)(param_2 + 0x20),&uStack_14);
  return;
}



/* Entry: 1056743c4; end: 105674483;  */

/* WARNING: Removing unreachable block (ram,0x000105674694) */

ulong * FUN_1056743c4(long *param_1,undefined4 *param_2,ulong *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined4 *puVar18;
  long lVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  undefined4 uVar22;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined5 uStack_1a4;
  undefined3 uStack_19f;
  ulong uStack_198;
  ulong uStack_190;
  byte bStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined7 uStack_168;
  char cStack_161;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_a0;
  
  puVar2 = (ulong *)(param_1 + 2);
  puVar18 = (undefined4 *)param_1[1];
  if (puVar18 < (undefined4 *)*puVar2) {
    puVar20 = puVar18 + 1;
    *puVar18 = *param_2;
  }
  else {
    lVar19 = (long)puVar18 - *param_1;
    uVar1 = (lVar19 >> 2) + 1;
    if (uVar1 >> 0x3e != 0) {
      func_0x000104c443dc();
      lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain(param_3);
      lStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      plStack_150 = (long *)0x0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      puVar2 = param_3;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 != (ulong *)0x0) {
        lVar19 = *plStack_150;
        do {
          puVar21 = (ulong *)0x0;
          do {
            if (*plStack_150 != lVar19) {
              _objc_enumerationMutation(puVar2);
            }
            uVar16 = *(undefined8 *)(lStack_158 + (long)puVar21 * 8);
            puVar4 = param_3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease(uVar16);
            func_0x00010bf260e0(uVar16);
            func_0x00010002b838(&uStack_178,uVar16);
            puVar5 = puVar4;
            func_0x00010c22a600();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c2a1240();
            puVar7 = puVar4;
            func_0x00010c22a600();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bfcfd20();
            puVar9 = puVar4;
            func_0x00010c22a600();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar9;
            func_0x00010bf26080();
            puVar11 = puVar4;
            func_0x00010c22a600();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar11;
            func_0x00010c0d4f00();
            _objc_release(puVar11);
            _objc_release(puVar9);
            _objc_release(puVar7);
            _objc_release(puVar5);
            if (cStack_161 < '\0') {
              func_0x000100033dac(&uStack_1d0,uStack_178,uStack_170);
            }
            else {
              uStack_1c8 = uStack_170;
              uStack_1d0 = uStack_178;
              lStack_1c0 = CONCAT17(cStack_161,uStack_168);
            }
            uStack_1b8 = SUB84(puVar6,0);
            uStack_1b4 = SUB84(puVar8,0);
            uVar22 = SUB84(puVar10,0);
            uStack_1ac = SUB84(puVar12,0);
            uStack_1a8 = 1;
            uStack_1a4 = 0;
            uStack_19f = 0;
            uStack_198 = uStack_198 & 0xffffffffffffff00;
            bStack_180 = 0;
            puVar13 = (undefined8 *)param_4[1];
            uStack_1b0 = uVar22;
            if (puVar13 < (undefined8 *)param_4[2]) {
              puVar13[2] = lStack_1c0;
              puVar13[1] = uStack_1c8;
              *puVar13 = uStack_1d0;
              uStack_1c8 = 0;
              lStack_1c0 = 0;
              uStack_1d0 = 0;
              uStack_1b0._1_3_ = (undefined3)((ulong)puVar10 >> 8);
              puVar13[4] = CONCAT44(uStack_1ac,uVar22);
              puVar13[3] = CONCAT44(uStack_1b4,uStack_1b8);
              *(undefined8 *)((long)puVar13 + 0x29) = 0;
              *(ulong *)((long)puVar13 + 0x21) = CONCAT17(1,CONCAT43(uStack_1ac,uStack_1b0._1_3_));
              *(undefined1 *)(puVar13 + 7) = 0;
              *(undefined1 *)(puVar13 + 10) = 0;
              puVar13 = puVar13 + 0xb;
            }
            else {
              puVar13 = param_4;
              FUN_10567529c(param_4,&uStack_1d0);
            }
            param_4[1] = puVar13;
            if (((bStack_180 & 1) != 0) && (uStack_198 != 0)) {
              uStack_190 = uStack_198;
              __ZdlPv();
            }
            if (lStack_1c0 < 0) {
              __ZdlPv(uStack_1d0);
            }
            if (cStack_161 < '\0') {
              __ZdlPv(uStack_178);
            }
            _objc_release(puVar4);
            puVar21 = (ulong *)((long)puVar21 + 1);
          } while (puVar3 != puVar21);
          puVar3 = puVar2;
          func_0x00010bf52a60();
        } while (puVar3 != (ulong *)0x0);
      }
      _objc_release(puVar2);
      puVar3 = param_3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
        ___stack_chk_fail();
        _objc_release(puVar2);
        _objc_release(param_3);
        __Unwind_Resume();
        if (((char)puVar3[10] == '\x01') && (puVar3[7] != 0)) {
          puVar3[8] = puVar3[7];
          __ZdlPv();
        }
        if (*(char *)((long)puVar3 + 0x17) < '\0') {
          __ZdlPv(*puVar3);
        }
        return puVar3;
      }
      return puVar3;
    }
    uVar14 = (long)*puVar2 - *param_1;
    uVar15 = (long)uVar14 >> 1;
    if (uVar15 <= uVar1) {
      uVar15 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar14) {
      uVar15 = 0x3fffffffffffffff;
    }
    func_0x0001050929e0();
    puVar18 = (undefined4 *)((long)puVar2 + lVar19);
    lVar19 = (long)puVar2 + uVar15 * 4;
    lVar17 = (long)puVar18 - (param_1[1] - *param_1);
    puVar20 = puVar18 + 1;
    *puVar18 = *param_2;
    _memcpy(lVar17);
    puVar2 = (ulong *)*param_1;
    *param_1 = lVar17;
    param_1[1] = (long)puVar20;
    param_1[2] = lVar19;
    if (puVar2 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar20;
  return puVar2;
}



/* Entry: 105674484; end: 10567483f; +[SCPercMLFastDNNModelFactory _modelInputOutputsFromNamedTensorDefinitions:output:] */

/* WARNING: Removing unreachable block (ram,0x000105674694) */

undefined8 *
FUN_105674484(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined5 uStack_174;
  undefined3 uStack_16f;
  ulong uStack_168;
  ulong uStack_160;
  byte bStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined7 uStack_138;
  char cStack_131;
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
  puVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar14 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar1);
        }
        uVar13 = *(undefined8 *)(lStack_128 + (long)puVar14 * 8);
        puVar3 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease(uVar13);
        func_0x00010bf260e0(uVar13);
        func_0x00010002b838(&uStack_148,uVar13);
        puVar4 = puVar3;
        func_0x00010c22a600();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c2a1240();
        puVar6 = puVar3;
        func_0x00010c22a600();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfcfd20();
        puVar8 = puVar3;
        func_0x00010c22a600();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf26080();
        puVar10 = puVar3;
        func_0x00010c22a600();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c0d4f00();
        _objc_release(puVar10);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar4);
        if (cStack_131 < '\0') {
          func_0x000100033dac(&uStack_1a0,uStack_148,uStack_140);
        }
        else {
          uStack_198 = uStack_140;
          uStack_1a0 = uStack_148;
          lStack_190 = CONCAT17(cStack_131,uStack_138);
        }
        uStack_188 = SUB84(puVar5,0);
        uStack_184 = SUB84(puVar7,0);
        uVar15 = SUB84(puVar9,0);
        uStack_17c = SUB84(puVar11,0);
        uStack_178 = 1;
        uStack_174 = 0;
        uStack_16f = 0;
        uStack_168 = uStack_168 & 0xffffffffffffff00;
        bStack_150 = 0;
        puVar4 = (undefined8 *)param_4[1];
        uStack_180 = uVar15;
        if (puVar4 < (undefined8 *)param_4[2]) {
          puVar4[2] = lStack_190;
          puVar4[1] = uStack_198;
          *puVar4 = uStack_1a0;
          uStack_198 = 0;
          lStack_190 = 0;
          uStack_1a0 = 0;
          uStack_180._1_3_ = (undefined3)((ulong)puVar9 >> 8);
          puVar4[4] = CONCAT44(uStack_17c,uVar15);
          puVar4[3] = CONCAT44(uStack_184,uStack_188);
          *(undefined8 *)((long)puVar4 + 0x29) = 0;
          *(ulong *)((long)puVar4 + 0x21) = CONCAT17(1,CONCAT43(uStack_17c,uStack_180._1_3_));
          *(undefined1 *)(puVar4 + 7) = 0;
          *(undefined1 *)(puVar4 + 10) = 0;
          puVar4 = puVar4 + 0xb;
        }
        else {
          puVar4 = param_4;
          FUN_10567529c(param_4,&uStack_1a0);
        }
        param_4[1] = puVar4;
        if (((bStack_150 & 1) != 0) && (uStack_168 != 0)) {
          uStack_160 = uStack_168;
          __ZdlPv();
        }
        if (lStack_190 < 0) {
          __ZdlPv(uStack_1a0);
        }
        if (cStack_131 < '\0') {
          __ZdlPv(uStack_148);
        }
        _objc_release(puVar3);
        puVar14 = (undefined8 *)((long)puVar14 + 1);
      } while (puVar2 != puVar14);
      puVar2 = puVar1;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(param_3);
    __Unwind_Resume();
    if ((*(char *)(puVar2 + 10) == '\x01') && (puVar2[7] != 0)) {
      puVar2[8] = puVar2[7];
      __ZdlPv();
    }
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      __ZdlPv(*puVar2);
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 105674840; end: 10567488b;  */

undefined8 * FUN_105674840(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 10) == '\x01') && (param_1[7] != 0)) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10567488c; end: 1056748e7; +[SCPercMLFastDNNModelFactory _fastDNNBackendFromBackend:] */

ulong FUN_10567488c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((uint)param_3 < 0x21) {
    if ((1L << (param_3 & 0x3f) & 0x10114U) != 0) {
      return param_3;
    }
    if ((1L << (param_3 & 0x3f) & 0x100000001U) != 0) {
      return 0;
    }
  }
  if ((uint)param_3 == 0xfbadbeef) {
    return 0;
  }
  return 1;
}



/* Entry: 1056748e8; end: 105674957;  */

void FUN_1056748e8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar4 != lVar2) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_105674958(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 105674958; end: 1056749a7;  */

void FUN_105674958(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 10) == '\x01') && (param_1[7] != 0)) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1056749a8; end: 105674a3f;  */

void FUN_1056749a8(undefined8 *param_1)

{
  param_1[-2] = &PTR_SUB_1108a5a38;
  param_1[0xe] = &PTR_FUN_1108a5a88;
  *param_1 = &PTR_FUN_1108a5a60;
  param_1[1] = &PTR_DAT_11088d7b0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  param_1[1] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(param_1 + 2);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(param_1 + -2,&PTR_PTR_1108a5aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev_110346920)(param_1 + 0xe);
  return;
}



/* Entry: 105674a40; end: 105674b67;  */

void FUN_105674a40(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_SUB_1108a5a38;
  puVar1[0x10] = &PTR_FUN_1108a5a88;
  puVar1[2] = &PTR_FUN_1108a5a60;
  puVar1[3] = &PTR_DAT_11088d7b0;
  if (*(char *)((long)puVar1 + 0x6f) < '\0') {
    __ZdlPv(puVar1[0xb]);
  }
  puVar1[3] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(puVar1 + 4);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(puVar1,&PTR_PTR_1108a5aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev_110346920)(puVar1 + 0x10);
  return;
}



/* Entry: 105674b68; end: 105674c07;  */

void FUN_105674b68(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_SUB_1108a5a38;
  param_1[0xe] = &PTR_FUN_1108a5a88;
  *param_1 = &PTR_FUN_1108a5a60;
  param_1[1] = &PTR_DAT_11088d7b0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  param_1[1] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(param_1 + 2);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(puVar1,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(param_1 + 0xe);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 105674c08; end: 105674ca3;  */

void FUN_105674c08(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_SUB_1108a5a38;
  puVar1[0x10] = &PTR_FUN_1108a5a88;
  puVar1[2] = &PTR_FUN_1108a5a60;
  puVar1[3] = &PTR_DAT_11088d7b0;
  if (*(char *)((long)puVar1 + 0x6f) < '\0') {
    __ZdlPv(puVar1[0xb]);
  }
  puVar1[3] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
  __ZNSt3__16localeD1Ev(puVar1 + 4);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(puVar1,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(puVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 105674ca4; end: 105674e17;  */

void FUN_105674ca4(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_4 <= (long *)((param_1[2] - *param_1 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
    lVar4 = param_1[1] - *param_1;
    if (param_4 <= (long *)((lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3)) {
      FUN_10567500c(param_2,param_3);
      lVar4 = param_1[1];
      while (lVar4 != param_2) {
        lVar4 = lVar4 + -0x58;
        FUN_105674958(lVar4);
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10567500c(param_2,param_2 + lVar4);
    param_2 = param_2 + lVar4;
    FUN_105674e7c(param_2,param_3,param_1[1]);
LAB_105674db8:
    param_1[1] = param_2;
    return;
  }
  plVar2 = param_1;
  lVar4 = param_2;
  FUN_105674e18();
  if (param_4 < (long *)0x2e8ba2e8ba2e8bb) {
    lVar1 = param_1[2] - *param_1 >> 3;
    plVar2 = (long *)(lVar1 * 0x5d1745d1745d1746);
    if (plVar2 < param_4 || (long)plVar2 - (long)param_4 == 0) {
      plVar2 = param_4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar1 * 0x2e8ba2e8ba2e8ba3)) {
      plVar2 = (long *)0x2e8ba2e8ba2e8ba;
    }
    if (plVar2 < (long *)0x2e8ba2e8ba2e8bb) {
      FUN_105675254();
      *param_1 = (long)plVar2;
      param_1[1] = (long)plVar2;
      param_1[2] = (long)(plVar2 + lVar4 * 0xb);
      FUN_105674e7c(param_2,param_3,plVar2);
      goto LAB_105674db8;
    }
  }
  FUN_105675240();
  param_1[1] = (long)param_4;
  __Unwind_Resume();
  lVar4 = *plVar2;
  if (lVar4 != 0) {
    lVar3 = plVar2[1];
    lVar1 = lVar4;
    if (lVar4 != lVar3) {
      do {
        lVar3 = lVar3 + -0x58;
        FUN_105674958(lVar3);
      } while (lVar3 != lVar4);
      lVar1 = *plVar2;
    }
    plVar2[1] = lVar4;
    __ZdlPv(lVar1);
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
  }
  return;
}



/* Entry: 105674e18; end: 105674e7b;  */

void FUN_105674e18(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_105674958(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 105674e7c; end: 105674f6b;  */

long FUN_105674e7c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar5);
      puVar2 = (undefined8 *)(param_3 + lVar5);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        func_0x000100033dac(puVar2,*puVar1,puVar1[1]);
      }
      else {
        uVar7 = puVar1[1];
        uVar6 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar7;
        *puVar2 = uVar6;
      }
      lVar3 = param_3 + lVar5;
      lVar4 = param_1 + lVar5;
      uVar7 = *(undefined8 *)(lVar4 + 0x20);
      uVar6 = *(undefined8 *)(lVar4 + 0x18);
      uVar8 = *(undefined8 *)(lVar4 + 0x21);
      *(undefined8 *)(lVar3 + 0x29) = *(undefined8 *)(lVar4 + 0x29);
      *(undefined8 *)(lVar3 + 0x21) = uVar8;
      *(undefined8 *)(lVar3 + 0x20) = uVar7;
      *(undefined8 *)(lVar3 + 0x18) = uVar6;
      FUN_105674f6c(lVar3 + 0x38,lVar4 + 0x38);
      lVar5 = lVar5 + 0x58;
    } while (param_1 + lVar5 != param_2);
    param_3 = param_3 + lVar5;
  }
  return param_3;
}



/* Entry: 105674f6c; end: 105674fbf;  */

undefined1 * FUN_105674f6c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_105674fc0();
  return param_1;
}



/* Entry: 105674fc0; end: 10567500b;  */

void FUN_105674fc0(undefined8 *param_1,long *param_2)

{
  if ((char)param_2[3] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x00010069997c(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10567500c; end: 10567507b;  */

long FUN_10567500c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x58) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_3,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x29);
    uVar1 = *(undefined8 *)(param_1 + 0x21);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    *(undefined8 *)(param_3 + 0x29) = uVar2;
    *(undefined8 *)(param_3 + 0x21) = uVar1;
    FUN_10567507c(param_3 + 0x38,param_1 + 0x38);
    param_3 = param_3 + 0x58;
  }
  return param_3;
}



/* Entry: 10567507c; end: 105675117;  */

undefined1  [16] FUN_10567507c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  cVar2 = *(char *)(param_1 + 3);
  puVar11 = param_1;
  if (cVar2 == *(char *)(param_2 + 3)) {
    puVar3 = param_2;
    if ((param_1 != param_2) && (cVar2 != '\0')) {
      puVar11 = (undefined8 *)*param_2;
      lVar5 = param_2[1];
      puVar7 = (undefined8 *)(lVar5 - (long)puVar11 >> 2);
      uVar8 = param_1[2];
      puVar12 = (undefined8 *)*param_1;
      puVar3 = param_1;
      if ((undefined8 *)((long)(uVar8 - (long)puVar12) >> 2) < puVar7) {
        puVar13 = puVar11;
        if (puVar12 != (undefined8 *)0x0) {
          param_1[1] = puVar12;
          __ZdlPv(puVar12);
          uVar8 = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        if ((ulong)puVar7 >> 0x3e != 0) {
          FUN_10507a6b8();
          plVar4 = (long *)&DAT_10f62a4d8;
          func_0x000104bd47e8();
          if (plVar4 < (long *)0x2e8ba2e8ba2e8bb) {
            lVar5 = (long)plVar4 * 0x58;
            __Znwm(lVar5);
            auVar19._8_8_ = plVar4;
            auVar19._0_8_ = lVar5;
            return auVar19;
          }
          func_0x000104bd35f4();
          lVar5 = plVar4[1] - *plVar4;
          uVar8 = (lVar5 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
          if (uVar8 < 0x2e8ba2e8ba2e8bb) {
            plStack_c8 = plVar4 + 2;
            lVar9 = *plStack_c8 - *plVar4 >> 3;
            uVar10 = lVar9 * 0x5d1745d1745d1746;
            if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
              uVar10 = uVar8;
            }
            if (0x1745d1745d1745c < (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
              uVar10 = 0x2e8ba2e8ba2e8ba;
            }
            if (uVar10 == 0) {
              uVar10 = 0;
              puVar11 = (undefined8 *)0x0;
              puVar3 = puVar13;
            }
            else {
              puVar11 = puVar13;
              FUN_105675254();
              puVar3 = puVar11;
            }
            puVar12 = (undefined8 *)(uVar10 + lVar5);
            uVar15 = puVar13[1];
            uVar14 = *puVar13;
            puVar12[2] = puVar13[2];
            puVar12[1] = uVar15;
            *puVar12 = uVar14;
            puVar13[1] = 0;
            puVar13[2] = 0;
            *puVar13 = 0;
            uVar15 = puVar13[4];
            uVar14 = puVar13[3];
            uVar16 = *(undefined8 *)((long)puVar13 + 0x21);
            *(undefined8 *)((long)puVar12 + 0x29) = *(undefined8 *)((long)puVar13 + 0x29);
            *(undefined8 *)((long)puVar12 + 0x21) = uVar16;
            puVar12[4] = uVar15;
            puVar12[3] = uVar14;
            *(undefined1 *)(puVar12 + 7) = 0;
            *(undefined1 *)(puVar12 + 10) = 0;
            if (*(char *)(puVar13 + 10) == '\x01') {
              puVar12[7] = 0;
              puVar12[8] = 0;
              puVar12[9] = 0;
              uVar14 = puVar13[7];
              puVar12[8] = puVar13[8];
              puVar12[7] = uVar14;
              puVar12[9] = puVar13[9];
              puVar13[7] = 0;
              puVar13[8] = 0;
              puVar13[9] = 0;
              *(undefined1 *)(puVar12 + 10) = 1;
            }
            puVar7 = (undefined8 *)*plVar4;
            puVar13 = (undefined8 *)plVar4[1];
            lVar5 = (long)puVar12 + ((long)puVar7 - (long)puVar13);
            if (puVar13 != puVar7) {
              lVar9 = 0;
              do {
                puVar6 = (undefined8 *)((long)puVar7 + lVar9);
                puVar1 = (undefined8 *)(lVar5 + lVar9);
                uVar15 = puVar6[1];
                uVar14 = *puVar6;
                puVar1[2] = puVar6[2];
                puVar1[1] = uVar15;
                *puVar1 = uVar14;
                puVar6[1] = 0;
                puVar6[2] = 0;
                *puVar6 = 0;
                uVar15 = puVar6[4];
                uVar14 = puVar6[3];
                uVar16 = *(undefined8 *)((long)puVar6 + 0x21);
                *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)puVar6 + 0x29);
                *(undefined8 *)((long)puVar1 + 0x21) = uVar16;
                puVar1[4] = uVar15;
                puVar1[3] = uVar14;
                *(undefined1 *)(puVar1 + 7) = 0;
                *(undefined1 *)(puVar1 + 10) = 0;
                if (*(char *)(puVar6 + 10) == '\x01') {
                  puVar1[7] = 0;
                  puVar1[8] = 0;
                  puVar1[9] = 0;
                  uVar14 = puVar6[7];
                  puVar1[8] = puVar6[8];
                  puVar1[7] = uVar14;
                  puVar1[9] = puVar6[9];
                  puVar6[7] = 0;
                  puVar6[8] = 0;
                  puVar6[9] = 0;
                  *(undefined1 *)(puVar1 + 10) = 1;
                }
                lVar9 = lVar9 + 0x58;
              } while (puVar6 + 0xb != puVar13);
              do {
                FUN_105674958(puVar7);
                puVar7 = puVar7 + 0xb;
              } while (puVar7 != puVar13);
              puVar7 = (undefined8 *)*plVar4;
            }
            *plVar4 = lVar5;
            plVar4[1] = (long)(puVar12 + 0xb);
            lStack_d0 = plVar4[2];
            plVar4[2] = uVar10 + (long)puVar11 * 0x58;
            puStack_e8 = puVar7;
            puStack_e0 = puVar7;
            puStack_d8 = puVar7;
            FUN_1056754bc(&puStack_e8);
            auVar20._8_8_ = puVar3;
            auVar20._0_8_ = puVar12 + 0xb;
            return auVar20;
          }
          FUN_105675240();
          lVar5 = plVar4[1];
          lVar9 = plVar4[2];
          while (lVar5 != lVar9) {
            plVar4[2] = lVar9 + -0x58;
            FUN_105674958();
            lVar9 = plVar4[2];
          }
          if (*plVar4 != 0) {
            __ZdlPv();
          }
          auVar21._8_8_ = puVar13;
          auVar21._0_8_ = plVar4;
          return auVar21;
        }
        puVar6 = (undefined8 *)((long)uVar8 >> 1);
        if ((undefined8 *)((long)uVar8 >> 1) <= puVar7) {
          puVar6 = puVar7;
        }
        if (0x7ffffffffffffffb < uVar8) {
          puVar6 = (undefined8 *)0x3fffffffffffffff;
        }
        func_0x000100291c58(param_1,puVar6);
        puVar12 = (undefined8 *)param_1[1];
        lVar5 = lVar5 - (long)puVar11;
        if (lVar5 != 0) {
          puVar3 = puVar12;
          _memmove(puVar12,puVar11,lVar5);
          puVar6 = puVar11;
        }
        lVar5 = (long)puVar12 + lVar5;
      }
      else {
        puVar13 = (undefined8 *)param_1[1];
        if ((undefined8 *)((long)puVar13 - (long)puVar12 >> 2) < puVar7) {
          puVar7 = (undefined8 *)((long)puVar11 + ((long)puVar13 - (long)puVar12));
          if (puVar13 != puVar12) {
            _memmove(puVar12,puVar11);
            puVar13 = (undefined8 *)param_1[1];
            puVar3 = puVar12;
          }
          lVar5 = lVar5 - (long)puVar7;
          puVar6 = puVar11;
          if (lVar5 != 0) {
            puVar3 = puVar13;
            _memmove(puVar13,puVar7,lVar5);
            puVar6 = puVar7;
          }
          lVar5 = (long)puVar13 + lVar5;
        }
        else {
          lVar5 = lVar5 - (long)puVar11;
          puVar6 = puVar11;
          if (lVar5 != 0) {
            puVar3 = puVar12;
            _memmove(puVar12,puVar11,lVar5);
            puVar6 = puVar11;
          }
          lVar5 = (long)puVar12 + lVar5;
        }
      }
      param_1[1] = lVar5;
      auVar18._8_8_ = puVar6;
      auVar18._0_8_ = puVar3;
      return auVar18;
    }
  }
  else if (cVar2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar3 = (undefined8 *)*param_2;
    func_0x00010069997c(param_1,puVar3,param_2[1],param_2[1] - (long)puVar3 >> 2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else {
    puVar11 = (undefined8 *)*param_1;
    if (puVar11 != (undefined8 *)0x0) {
      param_1[1] = puVar11;
      __ZdlPv();
    }
    *(undefined1 *)(param_1 + 3) = 0;
    puVar3 = param_2;
  }
  auVar17._8_8_ = puVar3;
  auVar17._0_8_ = puVar11;
  return auVar17;
}



/* Entry: 105675118; end: 10567523f;  */

undefined1  [16]
FUN_105675118(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long *plStack_c8;
  
  uVar7 = param_1[2];
  puVar12 = (undefined8 *)*param_1;
  puVar10 = param_1;
  if ((undefined8 *)((long)(uVar7 - (long)puVar12) >> 2) < param_4) {
    puVar11 = param_2;
    if (puVar12 != (undefined8 *)0x0) {
      param_1[1] = puVar12;
      __ZdlPv(puVar12);
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((ulong)param_4 >> 0x3e != 0) {
      FUN_10507a6b8();
      plVar3 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      if (plVar3 < (long *)0x2e8ba2e8ba2e8bb) {
        lVar4 = (long)plVar3 * 0x58;
        __Znwm(lVar4);
        auVar17._8_8_ = plVar3;
        auVar17._0_8_ = lVar4;
        return auVar17;
      }
      func_0x000104bd35f4();
      lVar4 = plVar3[1] - *plVar3;
      uVar7 = (lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
      if (uVar7 < 0x2e8ba2e8ba2e8bb) {
        plStack_c8 = plVar3 + 2;
        lVar8 = *plStack_c8 - *plVar3 >> 3;
        uVar9 = lVar8 * 0x5d1745d1745d1746;
        if (uVar9 < uVar7 || uVar9 - uVar7 == 0) {
          uVar9 = uVar7;
        }
        if (0x1745d1745d1745c < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
          uVar9 = 0x2e8ba2e8ba2e8ba;
        }
        if (uVar9 == 0) {
          uVar9 = 0;
          puVar10 = (undefined8 *)0x0;
          puVar12 = puVar11;
        }
        else {
          puVar10 = puVar11;
          FUN_105675254();
          puVar12 = puVar10;
        }
        puVar5 = (undefined8 *)(uVar9 + lVar4);
        uVar14 = puVar11[1];
        uVar13 = *puVar11;
        puVar5[2] = puVar11[2];
        puVar5[1] = uVar14;
        *puVar5 = uVar13;
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        uVar14 = puVar11[4];
        uVar13 = puVar11[3];
        uVar15 = *(undefined8 *)((long)puVar11 + 0x21);
        *(undefined8 *)((long)puVar5 + 0x29) = *(undefined8 *)((long)puVar11 + 0x29);
        *(undefined8 *)((long)puVar5 + 0x21) = uVar15;
        puVar5[4] = uVar14;
        puVar5[3] = uVar13;
        *(undefined1 *)(puVar5 + 7) = 0;
        *(undefined1 *)(puVar5 + 10) = 0;
        if (*(char *)(puVar11 + 10) == '\x01') {
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          uVar13 = puVar11[7];
          puVar5[8] = puVar11[8];
          puVar5[7] = uVar13;
          puVar5[9] = puVar11[9];
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
          *(undefined1 *)(puVar5 + 10) = 1;
        }
        puVar11 = (undefined8 *)*plVar3;
        puVar6 = (undefined8 *)plVar3[1];
        lVar4 = (long)puVar5 + ((long)puVar11 - (long)puVar6);
        if (puVar6 != puVar11) {
          lVar8 = 0;
          do {
            puVar1 = (undefined8 *)((long)puVar11 + lVar8);
            puVar2 = (undefined8 *)(lVar4 + lVar8);
            uVar14 = puVar1[1];
            uVar13 = *puVar1;
            puVar2[2] = puVar1[2];
            puVar2[1] = uVar14;
            *puVar2 = uVar13;
            puVar1[1] = 0;
            puVar1[2] = 0;
            *puVar1 = 0;
            uVar14 = puVar1[4];
            uVar13 = puVar1[3];
            uVar15 = *(undefined8 *)((long)puVar1 + 0x21);
            *(undefined8 *)((long)puVar2 + 0x29) = *(undefined8 *)((long)puVar1 + 0x29);
            *(undefined8 *)((long)puVar2 + 0x21) = uVar15;
            puVar2[4] = uVar14;
            puVar2[3] = uVar13;
            *(undefined1 *)(puVar2 + 7) = 0;
            *(undefined1 *)(puVar2 + 10) = 0;
            if (*(char *)(puVar1 + 10) == '\x01') {
              puVar2[7] = 0;
              puVar2[8] = 0;
              puVar2[9] = 0;
              uVar13 = puVar1[7];
              puVar2[8] = puVar1[8];
              puVar2[7] = uVar13;
              puVar2[9] = puVar1[9];
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[9] = 0;
              *(undefined1 *)(puVar2 + 10) = 1;
            }
            lVar8 = lVar8 + 0x58;
          } while (puVar1 + 0xb != puVar6);
          do {
            FUN_105674958(puVar11);
            puVar11 = puVar11 + 0xb;
          } while (puVar11 != puVar6);
          puVar11 = (undefined8 *)*plVar3;
        }
        *plVar3 = lVar4;
        plVar3[1] = (long)(puVar5 + 0xb);
        lStack_d0 = plVar3[2];
        plVar3[2] = uVar9 + (long)puVar10 * 0x58;
        puStack_e8 = puVar11;
        puStack_e0 = puVar11;
        puStack_d8 = puVar11;
        FUN_1056754bc(&puStack_e8);
        auVar18._8_8_ = puVar12;
        auVar18._0_8_ = puVar5 + 0xb;
        return auVar18;
      }
      FUN_105675240();
      lVar4 = plVar3[1];
      lVar8 = plVar3[2];
      while (lVar4 != lVar8) {
        plVar3[2] = lVar8 + -0x58;
        FUN_105674958();
        lVar8 = plVar3[2];
      }
      if (*plVar3 != 0) {
        __ZdlPv();
      }
      auVar19._8_8_ = puVar11;
      auVar19._0_8_ = plVar3;
      return auVar19;
    }
    puVar5 = (undefined8 *)((long)uVar7 >> 1);
    if ((undefined8 *)((long)uVar7 >> 1) <= param_4) {
      puVar5 = param_4;
    }
    if (0x7ffffffffffffffb < uVar7) {
      puVar5 = (undefined8 *)0x3fffffffffffffff;
    }
    func_0x000100291c58(param_1,puVar5);
    puVar12 = (undefined8 *)param_1[1];
    param_3 = param_3 - (long)param_2;
    if (param_3 != 0) {
      puVar10 = puVar12;
      _memmove(puVar12,param_2,param_3);
      puVar5 = param_2;
    }
    param_3 = (long)puVar12 + param_3;
  }
  else {
    puVar11 = (undefined8 *)param_1[1];
    if ((undefined8 *)((long)puVar11 - (long)puVar12 >> 2) < param_4) {
      puVar6 = (undefined8 *)((long)param_2 + ((long)puVar11 - (long)puVar12));
      if (puVar11 != puVar12) {
        _memmove(puVar12,param_2);
        puVar11 = (undefined8 *)param_1[1];
        puVar10 = puVar12;
      }
      param_3 = param_3 - (long)puVar6;
      puVar5 = param_2;
      if (param_3 != 0) {
        puVar10 = puVar11;
        _memmove(puVar11,puVar6,param_3);
        puVar5 = puVar6;
      }
      param_3 = (long)puVar11 + param_3;
    }
    else {
      param_3 = param_3 - (long)param_2;
      puVar5 = param_2;
      if (param_3 != 0) {
        puVar10 = puVar12;
        _memmove(puVar12,param_2,param_3);
        puVar5 = param_2;
      }
      param_3 = (long)puVar12 + param_3;
    }
  }
  param_1[1] = param_3;
  auVar16._8_8_ = puVar5;
  auVar16._0_8_ = puVar10;
  return auVar16;
}



/* Entry: 105675240; end: 105675253;  */

undefined1  [16] FUN_105675240(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long *plStack_88;
  
  plVar5 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (plVar5 < (long *)0x2e8ba2e8ba2e8bb) {
    lVar6 = (long)plVar5 * 0x58;
    __Znwm(lVar6);
    auVar16._8_8_ = plVar5;
    auVar16._0_8_ = lVar6;
    return auVar16;
  }
  func_0x000104bd35f4();
  lVar6 = plVar5[1] - *plVar5;
  uVar9 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar9 < 0x2e8ba2e8ba2e8bb) {
    plStack_88 = plVar5 + 2;
    lVar8 = *plStack_88 - *plVar5 >> 3;
    uVar10 = lVar8 * 0x5d1745d1745d1746;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x1745d1745d1745c < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
      uVar10 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar10 == 0) {
      uVar10 = 0;
      puVar11 = (undefined8 *)0x0;
      puVar7 = param_2;
    }
    else {
      puVar11 = param_2;
      FUN_105675254();
      puVar7 = puVar11;
    }
    puVar1 = (undefined8 *)(uVar10 + lVar6);
    uVar14 = param_2[1];
    uVar13 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar14;
    *puVar1 = uVar13;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar14 = param_2[4];
    uVar13 = param_2[3];
    uVar15 = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)puVar1 + 0x21) = uVar15;
    puVar1[4] = uVar14;
    puVar1[3] = uVar13;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    if (*(char *)(param_2 + 10) == '\x01') {
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      uVar13 = param_2[7];
      puVar1[8] = param_2[8];
      puVar1[7] = uVar13;
      puVar1[9] = param_2[9];
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      *(undefined1 *)(puVar1 + 10) = 1;
    }
    puVar12 = (undefined8 *)*plVar5;
    puVar4 = (undefined8 *)plVar5[1];
    lVar6 = (long)puVar1 + ((long)puVar12 - (long)puVar4);
    if (puVar4 != puVar12) {
      lVar8 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar12 + lVar8);
        puVar3 = (undefined8 *)(lVar6 + lVar8);
        uVar14 = puVar2[1];
        uVar13 = *puVar2;
        puVar3[2] = puVar2[2];
        puVar3[1] = uVar14;
        *puVar3 = uVar13;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar14 = puVar2[4];
        uVar13 = puVar2[3];
        uVar15 = *(undefined8 *)((long)puVar2 + 0x21);
        *(undefined8 *)((long)puVar3 + 0x29) = *(undefined8 *)((long)puVar2 + 0x29);
        *(undefined8 *)((long)puVar3 + 0x21) = uVar15;
        puVar3[4] = uVar14;
        puVar3[3] = uVar13;
        *(undefined1 *)(puVar3 + 7) = 0;
        *(undefined1 *)(puVar3 + 10) = 0;
        if (*(char *)(puVar2 + 10) == '\x01') {
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          uVar13 = puVar2[7];
          puVar3[8] = puVar2[8];
          puVar3[7] = uVar13;
          puVar3[9] = puVar2[9];
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          *(undefined1 *)(puVar3 + 10) = 1;
        }
        lVar8 = lVar8 + 0x58;
      } while (puVar2 + 0xb != puVar4);
      do {
        FUN_105674958(puVar12);
        puVar12 = puVar12 + 0xb;
      } while (puVar12 != puVar4);
      puVar12 = (undefined8 *)*plVar5;
    }
    *plVar5 = lVar6;
    plVar5[1] = (long)(puVar1 + 0xb);
    lStack_90 = plVar5[2];
    plVar5[2] = uVar10 + (long)puVar11 * 0x58;
    puStack_a8 = puVar12;
    puStack_a0 = puVar12;
    puStack_98 = puVar12;
    FUN_1056754bc(&puStack_a8);
    auVar17._8_8_ = puVar7;
    auVar17._0_8_ = puVar1 + 0xb;
    return auVar17;
  }
  FUN_105675240();
  lVar6 = plVar5[1];
  lVar8 = plVar5[2];
  while (lVar6 != lVar8) {
    plVar5[2] = lVar8 + -0x58;
    FUN_105674958();
    lVar8 = plVar5[2];
  }
  if (*plVar5 != 0) {
    __ZdlPv();
  }
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = plVar5;
  return auVar18;
}



/* Entry: 105675254; end: 10567529b;  */

undefined1  [16] FUN_105675254(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long *plStack_78;
  
  if (param_1 < (long *)0x2e8ba2e8ba2e8bb) {
    lVar5 = (long)param_1 * 0x58;
    __Znwm(lVar5);
    auVar15._8_8_ = param_1;
    auVar15._0_8_ = lVar5;
    return auVar15;
  }
  func_0x000104bd35f4();
  lVar5 = param_1[1] - *param_1;
  uVar8 = (lVar5 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar8 < 0x2e8ba2e8ba2e8bb) {
    plStack_78 = param_1 + 2;
    lVar7 = *plStack_78 - *param_1 >> 3;
    uVar9 = lVar7 * 0x5d1745d1745d1746;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar9 == 0) {
      uVar9 = 0;
      puVar10 = (undefined8 *)0x0;
      puVar6 = param_2;
    }
    else {
      puVar10 = param_2;
      FUN_105675254();
      puVar6 = puVar10;
    }
    puVar1 = (undefined8 *)(uVar9 + lVar5);
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar13;
    *puVar1 = uVar12;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar13 = param_2[4];
    uVar12 = param_2[3];
    uVar14 = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)puVar1 + 0x21) = uVar14;
    puVar1[4] = uVar13;
    puVar1[3] = uVar12;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    if (*(char *)(param_2 + 10) == '\x01') {
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      uVar12 = param_2[7];
      puVar1[8] = param_2[8];
      puVar1[7] = uVar12;
      puVar1[9] = param_2[9];
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      *(undefined1 *)(puVar1 + 10) = 1;
    }
    puVar11 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    lVar5 = (long)puVar1 + ((long)puVar11 - (long)puVar4);
    if (puVar4 != puVar11) {
      lVar7 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar11 + lVar7);
        puVar3 = (undefined8 *)(lVar5 + lVar7);
        uVar13 = puVar2[1];
        uVar12 = *puVar2;
        puVar3[2] = puVar2[2];
        puVar3[1] = uVar13;
        *puVar3 = uVar12;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar13 = puVar2[4];
        uVar12 = puVar2[3];
        uVar14 = *(undefined8 *)((long)puVar2 + 0x21);
        *(undefined8 *)((long)puVar3 + 0x29) = *(undefined8 *)((long)puVar2 + 0x29);
        *(undefined8 *)((long)puVar3 + 0x21) = uVar14;
        puVar3[4] = uVar13;
        puVar3[3] = uVar12;
        *(undefined1 *)(puVar3 + 7) = 0;
        *(undefined1 *)(puVar3 + 10) = 0;
        if (*(char *)(puVar2 + 10) == '\x01') {
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          uVar12 = puVar2[7];
          puVar3[8] = puVar2[8];
          puVar3[7] = uVar12;
          puVar3[9] = puVar2[9];
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          *(undefined1 *)(puVar3 + 10) = 1;
        }
        lVar7 = lVar7 + 0x58;
      } while (puVar2 + 0xb != puVar4);
      do {
        FUN_105674958(puVar11);
        puVar11 = puVar11 + 0xb;
      } while (puVar11 != puVar4);
      puVar11 = (undefined8 *)*param_1;
    }
    *param_1 = lVar5;
    param_1[1] = (long)(puVar1 + 0xb);
    lStack_80 = param_1[2];
    param_1[2] = uVar9 + (long)puVar10 * 0x58;
    puStack_98 = puVar11;
    puStack_90 = puVar11;
    puStack_88 = puVar11;
    FUN_1056754bc(&puStack_98);
    auVar16._8_8_ = puVar6;
    auVar16._0_8_ = puVar1 + 0xb;
    return auVar16;
  }
  FUN_105675240();
  lVar5 = param_1[1];
  lVar7 = param_1[2];
  while (lVar5 != lVar7) {
    param_1[2] = lVar7 + -0x58;
    FUN_105674958();
    lVar7 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = param_1;
  return auVar17;
}



/* Entry: 10567529c; end: 1056754bb;  */

long * FUN_10567529c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar10 = param_1[1] - *param_1;
  uVar6 = (lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar6 < 0x2e8ba2e8ba2e8bb) {
    plStack_58 = param_1 + 2;
    lVar5 = *plStack_58 - *param_1 >> 3;
    uVar7 = lVar5 * 0x5d1745d1745d1746;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x1745d1745d1745c < (ulong)(lVar5 * 0x2e8ba2e8ba2e8ba3)) {
      uVar7 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar7 == 0) {
      uVar7 = 0;
      puVar8 = (undefined8 *)0x0;
    }
    else {
      puVar8 = param_2;
      FUN_105675254();
    }
    puVar1 = (undefined8 *)(uVar7 + lVar10);
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar12;
    *puVar1 = uVar11;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar12 = param_2[4];
    uVar11 = param_2[3];
    uVar13 = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
    *(undefined8 *)((long)puVar1 + 0x21) = uVar13;
    puVar1[4] = uVar12;
    puVar1[3] = uVar11;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    if (*(char *)(param_2 + 10) == '\x01') {
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      uVar11 = param_2[7];
      puVar1[8] = param_2[8];
      puVar1[7] = uVar11;
      puVar1[9] = param_2[9];
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      *(undefined1 *)(puVar1 + 10) = 1;
    }
    puVar9 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    lVar10 = (long)puVar1 + ((long)puVar9 - (long)puVar4);
    if (puVar4 != puVar9) {
      lVar5 = 0;
      do {
        puVar2 = (undefined8 *)((long)puVar9 + lVar5);
        puVar3 = (undefined8 *)(lVar10 + lVar5);
        uVar12 = puVar2[1];
        uVar11 = *puVar2;
        puVar3[2] = puVar2[2];
        puVar3[1] = uVar12;
        *puVar3 = uVar11;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar12 = puVar2[4];
        uVar11 = puVar2[3];
        uVar13 = *(undefined8 *)((long)puVar2 + 0x21);
        *(undefined8 *)((long)puVar3 + 0x29) = *(undefined8 *)((long)puVar2 + 0x29);
        *(undefined8 *)((long)puVar3 + 0x21) = uVar13;
        puVar3[4] = uVar12;
        puVar3[3] = uVar11;
        *(undefined1 *)(puVar3 + 7) = 0;
        *(undefined1 *)(puVar3 + 10) = 0;
        if (*(char *)(puVar2 + 10) == '\x01') {
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          uVar11 = puVar2[7];
          puVar3[8] = puVar2[8];
          puVar3[7] = uVar11;
          puVar3[9] = puVar2[9];
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[9] = 0;
          *(undefined1 *)(puVar3 + 10) = 1;
        }
        lVar5 = lVar5 + 0x58;
      } while (puVar2 + 0xb != puVar4);
      do {
        FUN_105674958(puVar9);
        puVar9 = puVar9 + 0xb;
      } while (puVar9 != puVar4);
      puVar9 = (undefined8 *)*param_1;
    }
    *param_1 = lVar10;
    param_1[1] = (long)(puVar1 + 0xb);
    lStack_60 = param_1[2];
    param_1[2] = uVar7 + (long)puVar8 * 0x58;
    puStack_78 = puVar9;
    puStack_70 = puVar9;
    puStack_68 = puVar9;
    FUN_1056754bc(&puStack_78);
    return puVar1 + 0xb;
  }
  FUN_105675240();
  lVar10 = param_1[1];
  lVar5 = param_1[2];
  while (lVar10 != lVar5) {
    param_1[2] = lVar5 + -0x58;
    FUN_105674958();
    lVar5 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1056754bc; end: 105675507;  */

long * FUN_1056754bc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar1 != lVar2) {
    param_1[2] = lVar2 + -0x58;
    FUN_105674958();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105675508; end: 10567562f; -[SCPercMLFastDNNTensor initWithTensor:] */

undefined1 * FUN_105675508(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e98a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)(param_3 + 0x10);
    uVar4 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)((long)puVar1 + 0x20) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar6;
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    FUN_1056759f4((undefined1 *)((long)puVar1 + 0x28),param_3 + 0x20);
    func_0x000105675ac8((undefined1 *)((long)puVar1 + 0x38),param_3 + 0x30);
    if ((*(byte *)((long)puVar1 + 0x50) & 1) == 0) {
      uVar3 = *(int *)((long)puVar1 + 0x18) * *(int *)((long)puVar1 + 0x1c) *
              *(int *)((long)puVar1 + 0x14) * *(int *)((long)puVar1 + 0x10);
    }
    else {
      uVar3 = 1;
      for (piVar5 = *(int **)((long)puVar1 + 0x38); piVar5 != *(int **)((long)puVar1 + 0x40);
          piVar5 = piVar5 + 1) {
        uVar3 = *piVar5 * uVar3;
      }
    }
    *(ulong *)((long)puVar1 + 0x68) = (ulong)uVar3;
    puVar2 = (undefined1 *)((long)puVar1 + 8);
    FUN_1056730f0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined1 **)((long)puVar1 + 0x70) = puVar2;
    _objc_release(uVar4);
    puVar2 = (undefined1 *)((long)puVar1 + 8);
    FUN_1056734f4();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined1 **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar4);
    puVar2 = (undefined1 *)((long)puVar1 + 8);
    FUN_105673654();
    *(undefined1 **)((long)puVar1 + 0x78) = puVar2;
    *(undefined8 *)((long)puVar1 + 0x80) = *(undefined8 *)((long)puVar1 + 0x28);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105675630; end: 105675667; -[SCPercMLFastDNNTensor objectAtIndexedSubscript:] */

void FUN_105675630(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < *(ulong *)(param_1 + 0x68)) {
    FUN_105673678(*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105675668; end: 10567585f; -[SCPercMLFastDNNTensor objectForKeyedSubscript:] */

void FUN_105675668(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x70);
  func_0x00010bf529e0();
  uVar8 = param_3;
  func_0x00010bf529e0();
  if (uVar1 == uVar8) {
    uVar8 = 0;
    do {
      uVar1 = *(ulong *)(param_1 + 0x70);
      func_0x00010bf529e0();
      if (uVar1 <= uVar8) {
        lVar9 = 0;
        for (uVar8 = 0; uVar1 = param_3, func_0x00010bf529e0(), uVar8 < uVar1; uVar8 = uVar8 + 1) {
          uVar1 = param_3;
          func_0x00010c0dfd40(param_3,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar1;
          func_0x00010c2827c0();
          lVar6 = *(long *)(param_1 + 0x58);
          func_0x00010c0dfd40(lVar6,param_2,uVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c2827c0();
          lVar9 = lVar9 + lVar7 * uVar5;
          _objc_release(lVar6);
          _objc_release(uVar1);
        }
        func_0x00010c0dfd40(param_1,param_2,lVar9);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1056757d0;
      }
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      uVar5 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar5;
      func_0x00010c2827c0();
      uVar3 = *(ulong *)(param_1 + 0x70);
      func_0x00010c0dfd40(uVar3,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2827c0();
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(uVar1);
      uVar8 = uVar8 + 1;
    } while (uVar2 < uVar4);
  }
  param_1 = 0;
LAB_1056757d0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105675860; end: 105675963; -[SCPercMLFastDNNTensor countByEnumeratingWithState:objects:count:] */

long FUN_105675860(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*param_3 == 0) {
    param_3[2] = *(ulong *)(param_1 + 0x80);
  }
  param_3[1] = param_4;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  lVar5 = 0;
  if (param_5 != 0) {
    do {
      lVar3 = lVar5;
      if (*(ulong *)(param_1 + 0x68) <= *param_3) break;
      *param_3 = *param_3 + 1;
      lVar3 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,lVar3);
      lVar1 = lVar5 + 1;
      *(long *)(param_4 + lVar5 * 8) = lVar3;
      _objc_release(lVar3);
      lVar3 = param_5;
      lVar5 = lVar1;
    } while (param_5 != lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar2;
  _objc_release(uVar4);
  return lVar3;
}



/* Entry: 105675964; end: 10567596b; -[SCPercMLFastDNNTensor count] */

undefined8 FUN_105675964(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10567596c; end: 105675973; -[SCPercMLFastDNNTensor shape] */

undefined8 FUN_10567596c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105675974; end: 10567597b; -[SCPercMLFastDNNTensor dataType] */

undefined8 FUN_105675974(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10567597c; end: 105675983; -[SCPercMLFastDNNTensor dataPtr] */

undefined8 FUN_10567597c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105675984; end: 1056759c7; -[SCPercMLFastDNNTensor .cxx_destruct] */

undefined8 * FUN_105675984(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  *(undefined8 *)(param_1 + 8) = &PTR_FUN_1108a5c28;
  if ((*(char *)(param_1 + 0x50) == '\x01') && (*(long *)(param_1 + 0x38) != 0)) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  func_0x000105675a70(param_1 + 0x28);
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 1056759c8; end: 1056759f3; -[SCPercMLFastDNNTensor .cxx_construct] */

void FUN_1056759c8(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_1108a5c28;
  *(undefined8 *)(param_1 + 0x20) = 0x100000001;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1056759f4; end: 105675b63;  */

undefined8 * FUN_1056759f4(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 105675b64; end: 105675c8b;  */

undefined8 * FUN_105675b64(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar4 = param_1[2];
  puVar5 = (undefined8 *)*param_1;
  puVar3 = param_1;
  if ((ulong)((long)(uVar4 - (long)puVar5) >> 2) < param_4) {
    puVar6 = param_1;
    if (puVar5 != (undefined8 *)0x0) {
      param_1[1] = puVar5;
      __ZdlPv();
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar6 = puVar5;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_105536fa8();
      *puVar6 = &PTR_FUN_1108a5c28;
      if ((*(char *)(puVar6 + 9) == '\x01') && (puVar6[6] != 0)) {
        puVar6[7] = puVar6[6];
        __ZdlPv();
      }
      func_0x000105675a70(puVar6 + 4);
      return puVar6;
    }
    uVar2 = (long)uVar4 >> 1;
    if ((ulong)((long)uVar4 >> 1) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar2 = 0x3fffffffffffffff;
    }
    FUN_105536f6c(param_1,uVar2);
    puVar5 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar3 = puVar5;
      _memmove(puVar5,param_2,param_3);
    }
    param_3 = (long)puVar5 + param_3;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar6 - (long)puVar5 >> 2) < param_4) {
      lVar1 = param_2 + ((long)puVar6 - (long)puVar5);
      if (puVar6 != puVar5) {
        _memmove(puVar5,param_2);
        puVar6 = (undefined8 *)param_1[1];
        puVar3 = puVar5;
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        puVar3 = puVar6;
        _memmove(puVar6,lVar1,param_3);
      }
      param_3 = (long)puVar6 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        puVar3 = puVar5;
        _memmove(puVar5,param_2,param_3);
      }
      param_3 = (long)puVar5 + param_3;
    }
  }
  param_1[1] = param_3;
  return puVar3;
}



/* Entry: 105675c8c; end: 105675c8f;  */

undefined8 * FUN_105675c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a5c28;
  if ((*(char *)(param_1 + 9) == '\x01') && (param_1[6] != 0)) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  func_0x000105675a70(param_1 + 4);
  return param_1;
}



/* Entry: 105675c90; end: 105675ce3;  */

undefined8 * FUN_105675c90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a5c28;
  if ((*(char *)(param_1 + 9) == '\x01') && (param_1[6] != 0)) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  func_0x000105675a70(param_1 + 4);
  return param_1;
}



/* Entry: 105675ce4; end: 105675cf7;  */

void FUN_105675ce4(void)

{
  FUN_105675c90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105675cf8; end: 105676053; -[SCPercMLFastDNNImageClassificationModel initWithModelKey:modelId:deliverableModel:logger:error:] */

/* WARNING: Removing unreachable block (ram,0x000105675ec0) */
/* WARNING: Removing unreachable block (ram,0x000105675ec4) */
/* WARNING: Removing unreachable block (ram,0x000105675ed0) */

undefined8 *
FUN_105675cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = PTR_PTR_1126e98a8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126bcaa8;
    _objc_alloc();
    uVar5 = param_5;
    func_0x00010bfa0d60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c700();
    _objc_retain(0);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_release(uVar5);
    puVar4 = puVar1;
    func_0x00010be46c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar5 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar5);
    puVar4 = puVar1;
    func_0x00010becba00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar5 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar5);
    puVar4 = puVar1;
    func_0x00010becd600();
    _objc_retain(0);
    puVar1[2] = puVar4;
    puVar4 = puVar1;
    func_0x00010be9bba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    uVar5 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar5);
    uVar5 = puVar1[1];
    func_0x00010c0cff80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[7];
    puVar1[7] = uVar5;
    _objc_release(uVar3);
    uVar5 = puVar1[1];
    func_0x00010c0cff20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[8];
    puVar1[8] = uVar5;
    _objc_release(uVar3);
    uVar5 = puVar1[1];
    func_0x00010bf08ce0();
    puVar1[0xc] = uVar5;
    uVar5 = puVar1[1];
    func_0x00010bfe91a0();
    puVar1[10] = uVar5;
    uVar5 = puVar1[1];
    func_0x00010bfe7e00();
    puVar1[0xb] = uVar5;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = puVar1[5];
    puVar1[5] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar6);
  }
  _objc_retain(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 105676054; end: 10567605b; -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:completionQueue:completion:] */

void FUN_105676054(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c106570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_predictScoresWithBatchImages_com_11261f378);
  return;
}



/* Entry: 10567605c; end: 1056761ff; -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:completionQueue:completion:imageProcessingConfig:] */

void FUN_10567605c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105676200; end: 10567624b;  */

void FUN_105676200(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10567624c; end: 1056763cb; -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_10567624c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c106540(param_1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056763cc; end: 10567647b;  */

void FUN_1056763cc(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010bdd2d80(param_1);
  }
  else {
    func_0x00010be0b7c0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10567647c; end: 1056765fb; -[SCPercMLFastDNNImageClassificationModel predictAccumulatedClassificationsWithBatchImages:completionQueue:completion:] */

void FUN_10567647c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c106540(param_1);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056765fc; end: 1056766ab;  */

void FUN_1056765fc(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010bdc4080(param_1);
  }
  else {
    func_0x00010be0b8a0(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056766ac; end: 1056766cb; -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:] */

void FUN_1056766ac(void)

{
  func_0x00010c106580();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056766cc; end: 1056768fb; -[SCPercMLFastDNNImageClassificationModel predictScoresWithBatchImages:imageProcessingConfig:] */

void FUN_1056766cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1056768fc;
    uStack_60 = 0x10567690c;
    uStack_58 = 0;
    _objc_initWeak(auStack_88,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_copyWeak(auStack_90,auStack_88);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    _objc_retain(param_4);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _dispatch_group_wait(uVar1,0xffffffffffffffff);
    uVar3 = puStack_78[5];
    _objc_retain(uVar3);
    _objc_release(param_4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056768fc; end: 105676913;  */

void FUN_1056768fc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105676914; end: 1056769df;  */

void FUN_105676914(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1056769e0;
  puStack_58 = &UNK_1108a5ca8;
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uStack_50 = uVar4;
  func_0x00010be76ce0(lVar3,param_2,uVar1,uVar2,&puStack_70,*(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar3);
  _objc_release(uStack_50);
  return;
}



/* Entry: 1056769e0; end: 105676aa3;  */

void FUN_1056769e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10568c5fc(param_3);
    func_0x00010bf993e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105676aa4; end: 105676b47;  */

void FUN_105676aa4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 105676b48; end: 105676b67; -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchImages:] */

void FUN_105676b48(void)

{
  func_0x00010c1064a0();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105676b68; end: 105676e53; -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchImages:imageProcessingConfig:] */

void FUN_105676b68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c106580();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1056768fc;
    uStack_80 = 0x10567690c;
    uStack_78 = 0;
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105676e54;
    puStack_d0 = &UNK_1108a5d08;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_105676e64;
    puStack_f8 = &UNK_1108a5d38;
    lVar2 = lVar1;
    puStack_b8 = puStack_c8;
    puStack_98 = puStack_f0;
    func_0x00010c0bf0a0();
    if (puStack_b8[3] == 0) {
      _dispatch_group_create();
      _dispatch_group_enter();
      puStack_138 = &uStack_140;
      uStack_140 = 0;
      uStack_130 = 0x3032000000;
      pcStack_128 = FUN_1056768fc;
      uStack_120 = 0x10567690c;
      uStack_118 = 0;
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar2);
      func_0x00010bdd2d80(param_1);
      _objc_release(uVar3);
      _dispatch_group_wait(lVar2,0xffffffffffffffff);
      puVar4 = (undefined *)puStack_138[5];
      _objc_retain(puVar4);
      _objc_release(lVar2);
      __Block_object_dispose(&uStack_140,8);
      _objc_release(uStack_118);
      _objc_release(lVar2);
    }
    else {
      puVar4 = PTR_PTR_1126ae750;
      func_0x00010bf993e0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_c0,8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105676e54; end: 105676e63;  */

void FUN_105676e54(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105676e64; end: 105676e9b;  */

void FUN_105676e64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105676e9c; end: 105676f5f;  */

void FUN_105676e9c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10568c5fc(param_3);
    func_0x00010bf993e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105676f60; end: 105676fc7; -[SCPercMLFastDNNImageClassificationModel predictClassificationsWithBatchPixelBuffers:imageProcessingConfig:] */

void FUN_105676f60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae750;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x00010c2468a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105676fc8; end: 105677293; -[SCPercMLFastDNNImageClassificationModel predictAccumulatedClassificationsWithBatchImages:] */

void FUN_105676fc8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c106520();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x3032000000;
    pcStack_88 = FUN_1056768fc;
    uStack_80 = 0x10567690c;
    uStack_78 = 0;
    puStack_c8 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b0 = 0x2020000000;
    uStack_a8 = 0;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_105677294;
    puStack_d0 = &UNK_1108a5d08;
    puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_1056772a4;
    puStack_f8 = &UNK_1108a5d38;
    lVar2 = lVar1;
    puStack_b8 = puStack_c8;
    puStack_98 = puStack_f0;
    func_0x00010c0bf0a0();
    if (puStack_b8[3] == 0) {
      _dispatch_group_create();
      _dispatch_group_enter();
      puStack_138 = &uStack_140;
      uStack_140 = 0;
      uStack_130 = 0x3032000000;
      pcStack_128 = FUN_1056768fc;
      uStack_120 = 0x10567690c;
      uStack_118 = 0;
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar2);
      func_0x00010bdc4080(param_1);
      _objc_release(uVar3);
      _dispatch_group_wait(lVar2,0xffffffffffffffff);
      puVar4 = (undefined *)puStack_138[5];
      _objc_retain(puVar4);
      _objc_release(lVar2);
      __Block_object_dispose(&uStack_140,8);
      _objc_release(uStack_118);
      _objc_release(lVar2);
    }
    else {
      puVar4 = PTR_PTR_1126ae750;
      func_0x00010bf993e0(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_c0,8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uStack_78);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105677294; end: 1056772a3;  */

void FUN_105677294(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1056772a4; end: 1056772db;  */

void FUN_1056772a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1056772dc; end: 10567739f;  */

void FUN_1056772dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae750;
  if (param_3 == 0) {
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10568c5fc(param_3);
    func_0x00010bf993e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056773a0; end: 1056773ab; -[SCPercMLFastDNNImageClassificationModel setLoggingDisabled:] */

void FUN_1056773a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1c0670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setLoggingDisabled__11264dbc0);
  return;
}



/* Entry: 1056773ac; end: 1056773b3; -[SCPercMLFastDNNImageClassificationModel supportPixelBufferFastInference] */

undefined8 FUN_1056773ac(void)

{
  return 0;
}



/* Entry: 1056773b4; end: 1056773b7; -[SCPercMLFastDNNImageClassificationModel cancelInference] */

void FUN_1056773b4(void)

{
  return;
}



/* Entry: 1056773b8; end: 10567767f; -[SCPercMLFastDNNImageClassificationModel _predictScoresWithBatchImages:completionQueue:completion:imageProcessingConfig:] */

/* WARNING: Removing unreachable block (ram,0x000105677560) */

void FUN_1056773b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar11 = *plStack_130;
    do {
      lVar8 = 0;
      do {
        if (*plStack_130 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        ppuStack_190 = &PTR_FUN_1108a5c28;
        uStack_188 = 0;
        uStack_180 = 0;
        uStack_178 = 0x100000001;
        uStack_148 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        uStack_160 = 0;
        func_0x00010c1065a0(*(undefined8 *)(param_1 + 8));
        _objc_retain(0);
        lVar3 = param_1;
        func_0x00010be76d20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar3);
        FUN_105675c90(&ppuStack_190);
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = param_3;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(param_3);
  lVar11 = param_5;
  func_0x00010be0b800(param_1);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume(lVar6);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if ((*(byte *)(lVar11 + 0x48) & 1) != 0) {
    for (lVar6 = *(long *)(lVar11 + 0x30); lVar6 != *(long *)(lVar11 + 0x38); lVar6 = lVar6 + 4) {
    }
  }
  func_0x00010bffc4a0();
  uVar9 = 0;
  uVar10 = *(undefined8 *)(lVar11 + 0x20);
  uVar1 = *(uint *)(lVar11 + 0x18);
  while( true ) {
    if ((*(byte *)(lVar11 + 0x48) & 1) == 0) {
      uVar5 = (ulong)(uint)(*(int *)(lVar11 + 0x10) * *(int *)(lVar11 + 0x14) *
                            *(int *)(lVar11 + 0xc) * *(int *)(lVar11 + 8));
    }
    else {
      uVar5 = 1;
      for (piVar7 = *(int **)(lVar11 + 0x30); piVar7 != *(int **)(lVar11 + 0x38);
          piVar7 = piVar7 + 1) {
        uVar5 = (ulong)(uint)(*piVar7 * (int)uVar5);
      }
    }
    if (uVar5 <= uVar9) break;
    uVar5 = (ulong)uVar1;
    FUN_105673678((ulong)uVar1,uVar10,uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar5);
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105677680; end: 1056777e7; -[SCPercMLFastDNNImageClassificationModel _predictionToScores:] */

void FUN_105677680(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if ((*(byte *)(param_3 + 0x48) & 1) != 0) {
    for (lVar5 = *(long *)(param_3 + 0x30); lVar5 != *(long *)(param_3 + 0x38); lVar5 = lVar5 + 4) {
    }
  }
  func_0x00010bffc4a0();
  uVar7 = 0;
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uVar1 = *(uint *)(param_3 + 0x18);
  while( true ) {
    if ((*(byte *)(param_3 + 0x48) & 1) == 0) {
      uVar4 = (ulong)(uint)(*(int *)(param_3 + 0x10) * *(int *)(param_3 + 0x14) *
                            *(int *)(param_3 + 0xc) * *(int *)(param_3 + 8));
    }
    else {
      uVar4 = 1;
      for (piVar6 = *(int **)(param_3 + 0x30); piVar6 != *(int **)(param_3 + 0x38);
          piVar6 = piVar6 + 1) {
        uVar4 = (ulong)(uint)(*piVar6 * (int)uVar4);
      }
    }
    if (uVar4 <= uVar7) break;
    uVar4 = (ulong)uVar1;
    FUN_105673678((ulong)uVar1,uVar8,uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar3);
    _objc_release(uVar4);
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056777e8; end: 105677ea3; -[SCPercMLFastDNNImageClassificationModel _postprocessScores:] */

undefined * FUN_1056777e8(long param_1,undefined **param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_378;
  undefined8 uStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1 = param_3;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = puVar2;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_105677ea4;
    puStack_218 = &UNK_1108a5d98;
    _objc_retain(param_3);
    puVar2 = puVar1;
    puStack_210 = param_3;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    puVar8 = *(undefined **)(param_1 + 0x10);
    puVar6 = puVar2;
    func_0x00010bf529e0();
    if (puVar6 <= puVar8) {
      func_0x00010bf529e0(puVar2);
    }
    puVar6 = puVar2;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    _objc_retain();
    puVar8 = puVar6;
    func_0x00010bf52a60();
    if (puVar8 != (undefined *)0x0) {
      lVar9 = *plStack_260;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar9) {
            _objc_enumerationMutation(puVar6);
          }
          puVar3 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar3);
          puVar11 = puVar11 + 1;
        } while (puVar8 != puVar11);
        puVar8 = puVar6;
        func_0x00010bf52a60();
      } while (puVar8 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    _objc_release(param_3);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puStack_210);
  }
  lVar9 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  puVar2 = puVar1;
  if (lVar9 != 0) {
    puVar6 = puVar1;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_298 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_290 = 0xc2000000;
    pcStack_288 = FUN_105677f6c;
    puStack_280 = &UNK_1108a5d98;
    _objc_retain(puVar1);
    puVar8 = puVar6;
    puStack_278 = puVar1;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c0d3c80();
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    plStack_2d0 = (long *)0x0;
    _objc_retain(puVar8);
    puVar6 = puVar8;
    func_0x00010bf52a60();
    if (puVar6 != (undefined *)0x0) {
      lVar9 = *plStack_2d0;
      do {
        param_3 = (undefined *)0x0;
        do {
          if (*plStack_2d0 != lVar9) {
            _objc_enumerationMutation(puVar8);
          }
          puVar11 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            lVar4 = *(long *)(param_1 + 0x18);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 != 0) {
              uStack_2e8 = 0;
              uStack_2f0 = 0;
              uStack_308 = 0;
              plStack_310 = (long *)0x0;
              uStack_2f8 = 0;
              uStack_300 = 0;
              uStack_318 = 0;
              uStack_320 = 0;
              _objc_retain(lVar4);
              lVar5 = lVar4;
              func_0x00010bf52a60();
              if (lVar5 != 0) {
                lVar10 = *plStack_310;
                do {
                  lVar12 = 0;
                  do {
                    if (*plStack_310 != lVar10) {
                      _objc_enumerationMutation(lVar4);
                    }
                    puVar3 = puVar2;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    if (puVar3 != (undefined *)0x0) {
                      func_0x00010bf433a0();
                    }
                    func_0x00010c1d0640(puVar2);
                    _objc_release(puVar3);
                    lVar12 = lVar12 + 1;
                  } while (lVar5 != lVar12);
                  lVar5 = lVar4;
                  func_0x00010bf52a60();
                } while (lVar5 != 0);
              }
              _objc_release(lVar4);
            }
            _objc_release(lVar4);
          }
          _objc_release(puVar11);
          param_3 = param_3 + 1;
        } while (param_3 != puVar6);
        puVar6 = puVar8;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined *)0x0);
    }
    _objc_release(puVar8);
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(puStack_278);
  }
  lVar9 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  puVar1 = (undefined *)0x0;
  puVar6 = puVar2;
  if (lVar9 != 0) {
    param_3 = puVar2;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_348 = 0xc2000000;
    pcStack_340 = FUN_105678034;
    puStack_338 = &UNK_1108a5dc8;
    lStack_330 = param_1;
    _objc_retain(puVar2);
    puStack_378 = puVar1;
    uStack_370 = 0xc2000000;
    pcStack_368 = FUN_105678110;
    puStack_360 = &UNK_1108a5df8;
    puStack_328 = puVar2;
    _objc_retain(puVar2);
    param_2 = &puStack_350;
    puVar6 = param_3;
    puStack_358 = puVar2;
    func_0x00010050471c(param_3,param_2,&puStack_378);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(puStack_358);
    puVar1 = puStack_328;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    _objc_release(puStack_358);
    _objc_release(puStack_328);
    _objc_release(param_3);
    _objc_release(puVar6);
    __Unwind_Resume();
    _objc_retain(param_2);
    puVar6 = *(undefined **)(puVar1 + 0x20);
    func_0x00010c0e00e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(puVar1 + 0x20);
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf433a0(puVar6);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(param_2);
    return puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 105677ea4; end: 105677f6b;  */

undefined8 FUN_105677ea4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105677f6c; end: 105678033;  */

undefined8 FUN_105677f6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf433a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105678034; end: 10567810f;  */

void FUN_105678034(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf433a0();
    uVar4 = 0;
    if (lVar3 != -1) {
      uVar4 = param_2;
    }
    _objc_retain(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105678110; end: 105678133;  */

void FUN_105678110(long param_1,undefined8 param_2)

{
  func_0x00010c0e00e0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105678134; end: 10567825f; -[SCPercMLFastDNNImageClassificationModel _convertScoresToClassifications:] */

void FUN_105678134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be76a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105678260;
  puStack_40 = &UNK_1108a5e28;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105678288;
  puStack_68 = &UNK_1108a5df8;
  uStack_38 = param_1;
  _objc_retain(uVar1);
  uVar3 = uVar2;
  uStack_60 = uVar1;
  func_0x00010050471c(uVar2,&puStack_58,&puStack_80);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105678260; end: 1056782ab;  */

void FUN_105678260(long param_1,undefined8 param_2)

{
  func_0x00010c0e00e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056782ac; end: 1056786c3; -[SCPercMLFastDNNImageClassificationModel _accumulatedClassificationsFromBatchScores:completionQueue:completion:] */

void FUN_1056782ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  long param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar14;
  long lVar15;
  undefined *unaff_x28;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  code *pcStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  long lStack_388;
  undefined1 **ppuStack_380;
  code *pcStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_240 = param_4;
  _objc_retain(param_4);
  lStack_238 = param_5;
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_230 = param_3;
  _objc_alloc_init();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  lStack_220 = param_3;
  if (param_3 != 0) {
    lStack_228 = *plStack_1a0;
    lStack_220 = param_3;
    uStack_208 = param_1;
    do {
      lStack_218 = 0;
      do {
        if (*plStack_1a0 != lStack_228) {
          _objc_enumerationMutation(lStack_230);
        }
        unaff_x25 = *(undefined **)(lStack_1a8 + lStack_218 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        _objc_retain(unaff_x25);
        puVar13 = unaff_x25;
        func_0x00010bf52a60(unaff_x25,param_2,&uStack_1f0,auStack_170,0x10);
        if (puVar13 != (undefined *)0x0) {
          lStack_200 = *plStack_1e0;
          do {
            unaff_x28 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lStack_200) {
                _objc_enumerationMutation(unaff_x25);
              }
              uVar12 = *(undefined8 *)(lStack_1e8 + (long)unaff_x28 * 8);
              unaff_x23 = puVar2;
              func_0x00010c0e00e0(puVar2,param_2,uVar12);
              _objc_retainAutoreleasedReturnValue();
              if (unaff_x23 == (undefined *)0x0) {
LAB_105678450:
                puVar3 = unaff_x25;
                func_0x00010c0e00e0(unaff_x25,param_2,uVar12);
                _objc_retainAutoreleasedReturnValue();
                param_4 = (undefined8 *)0x0;
                bVar1 = true;
                puStack_1f8 = puVar3;
              }
              else {
                unaff_x24 = unaff_x25;
                func_0x00010c0e00e0(unaff_x25,param_2,uVar12);
                _objc_retainAutoreleasedReturnValue();
                unaff_x26 = puVar2;
                func_0x00010c0e00e0(puVar2,param_2,uVar12);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = unaff_x24;
                func_0x00010bf433a0(unaff_x24,param_2,unaff_x26);
                if (puVar3 != (undefined *)0xffffffffffffffff) goto LAB_105678450;
                puVar3 = puVar2;
                func_0x00010c0e00e0(puVar2,param_2,uVar12);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = false;
                param_4 = (undefined8 *)0x1;
                puStack_210 = puVar3;
              }
              func_0x00010c1d0640(puVar2,param_2,puVar3,uVar12);
              if (bVar1) {
                _objc_release(puStack_1f8);
              }
              param_1 = uStack_208;
              if ((int)param_4 != 0) {
                _objc_release(puStack_210);
              }
              if (unaff_x23 != (undefined *)0x0) {
                _objc_release(unaff_x26);
                _objc_release(unaff_x24);
              }
              _objc_release(unaff_x23);
              unaff_x28 = unaff_x28 + 1;
            } while (puVar13 != unaff_x28);
            puVar13 = unaff_x25;
            func_0x00010bf52a60(unaff_x25,param_2,&uStack_1f0,auStack_170,0x10);
          } while (puVar13 != (undefined *)0x0);
        }
        _objc_release(unaff_x25);
        lStack_218 = lStack_218 + 1;
      } while (lStack_218 != lStack_220);
      lVar4 = lStack_230;
      func_0x00010bf52a60(lStack_230,param_2,&uStack_1b0,auStack_f0,0x10);
      lStack_220 = lVar4;
    } while (lVar4 != 0);
  }
  _objc_release(lStack_230);
  uVar12 = param_1;
  func_0x00010bde93e0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lStack_238;
  puVar10 = puStack_240;
  uVar7 = uVar12;
  func_0x00010be0b8a0(param_1);
  _objc_release(uVar12);
  _objc_release(puVar2);
  _objc_release(lStack_238);
  _objc_release(puStack_240);
  lVar4 = lStack_230;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(uVar12);
  _objc_release(puVar2);
  _objc_release(lStack_238);
  _objc_release(puStack_240);
  _objc_release(lStack_230);
  lVar5 = lVar4;
  __Unwind_Resume(lVar4);
  pcStack_248 = FUN_1056786c4;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2a0 = unaff_x28;
  uStack_298 = param_1;
  puStack_290 = unaff_x26;
  puStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = unaff_x23;
  puStack_270 = puVar2;
  lStack_268 = lVar4;
  puStack_260 = param_4;
  uStack_258 = uVar12;
  puStack_250 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  _objc_retain(puVar10);
  _objc_retain(uVar7);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  lStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  _objc_retain(lVar9);
  lVar4 = lVar9;
  func_0x00010bf52a60(lVar9,param_2,&uStack_370,auStack_328,0x10);
  if (lVar4 != 0) {
    lVar14 = *plStack_360;
    do {
      lVar15 = 0;
      do {
        if (*plStack_360 != lVar14) {
          _objc_enumerationMutation(lVar9);
        }
        lVar6 = lVar5;
        func_0x00010bde93e0(lVar5,param_2,*(undefined8 *)(lStack_368 + lVar15 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,lVar6);
        _objc_release(lVar6);
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      lVar4 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_370,auStack_328,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar9);
  uVar12 = uVar7;
  puVar11 = puVar10;
  func_0x00010be0b7c0(lVar5);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(puVar10);
  lVar4 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(puVar10);
  _objc_release(lVar9);
  __Unwind_Resume(lVar4);
  pcStack_378 = FUN_1056788b8;
  uStack_3b0 = 0;
  lStack_3a8 = lVar4;
  puStack_3a0 = puVar2;
  uStack_398 = uVar7;
  puStack_390 = puVar10;
  lStack_388 = lVar9;
  ppuStack_380 = &puStack_250;
  _objc_retain(uVar12);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar7 = uVar12;
  func_0x00010bf04b80();
  if ((int)uVar7 == 0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar13 = (undefined *)0x0;
    *puVar11 = uVar7;
  }
  else {
    if ((int)uVar7 == 3) {
      uVar7 = uVar12;
      func_0x00010bfe70a0(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c087920();
      _objc_retainAutoreleasedReturnValue();
      puStack_3d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3d0 = 0xc2000000;
      pcStack_3c8 = FUN_105678a24;
      puStack_3c0 = &UNK_1108a5e58;
      _objc_retain(puVar2);
      puStack_3b8 = puVar2;
      func_0x00010bf97ce0(uVar8,param_2,&puStack_3d8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(puStack_3b8);
    }
    _objc_retain(puVar2);
    puVar13 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1056786c4; end: 1056788b7; -[SCPercMLFastDNNImageClassificationModel _batchClassificationsFromBatchScores:completionQueue:completion:] */

void FUN_1056786c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_1;
        func_0x00010bde93e0(param_1,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar3);
        _objc_release(uVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  uVar3 = param_5;
  puVar6 = param_4;
  func_0x00010be0b7c0(param_1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume(lVar2);
  pcStack_138 = FUN_1056788b8;
  uStack_170 = 0;
  lStack_168 = lVar2;
  puStack_160 = puVar1;
  uStack_158 = param_5;
  puStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar4 = uVar3;
  func_0x00010bf04b80();
  if ((int)uVar4 == 0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar7 = (undefined *)0x0;
    *puVar6 = uVar4;
  }
  else {
    if ((int)uVar4 == 3) {
      uVar4 = uVar3;
      func_0x00010bfe70a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c087920();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_105678a24;
      puStack_180 = &UNK_1108a5e58;
      _objc_retain(puVar1);
      puStack_178 = puVar1;
      func_0x00010bf97ce0(uVar5,param_2,&puStack_198);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(puStack_178);
    }
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1056788b8; end: 105678a23; -[SCPercMLFastDNNImageClassificationModel _labelsFromDeliverableModel:error:] */

void FUN_1056788b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf04b80();
  if ((int)uVar2 == 0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar4 = (undefined *)0x0;
    *param_4 = uVar2;
  }
  else {
    if ((int)uVar2 == 3) {
      uVar2 = param_3;
      func_0x00010bfe70a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c087920();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105678a24;
      puStack_50 = &UNK_1108a5e58;
      _objc_retain(puVar1);
      puStack_48 = puVar1;
      func_0x00010bf97ce0(uVar3,param_2,&puStack_68);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(puStack_48);
    }
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105678a24; end: 105678ab7;  */

void FUN_105678a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105678ab8; end: 105678c23; -[SCPercMLFastDNNImageClassificationModel _thresholdsFromDeliverableModel:error:] */

void FUN_105678ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf04b80();
  if ((int)uVar2 == 0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar4 = (undefined *)0x0;
    *param_4 = uVar2;
  }
  else {
    if ((int)uVar2 == 3) {
      uVar2 = param_3;
      func_0x00010bfe70a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c26d560();
      _objc_retainAutoreleasedReturnValue();
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105678c24;
      puStack_50 = &UNK_1108a5e88;
      _objc_retain(puVar1);
      puStack_48 = puVar1;
      func_0x00010bf97c80(uVar3,param_2,&puStack_68);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(puStack_48);
    }
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105678c24; end: 105678cbf;  */

void FUN_105678c24(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105678cc0; end: 105678d73; -[SCPercMLFastDNNImageClassificationModel _topNFromDeliverableModel:error:] */

long FUN_105678cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf04b80();
  if ((int)uVar1 == 0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    unaff_x21 = 0;
    *param_4 = uVar1;
  }
  else if ((int)uVar1 == 3) {
    uVar1 = param_3;
    func_0x00010bfe70a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2747a0();
    unaff_x21 = (long)(int)uVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return unaff_x21;
}



/* Entry: 105678d74; end: 10567909f; -[SCPercMLFastDNNImageClassificationModel _scorePropagationsFromDeliverableModel:error:] */

void FUN_105678d74(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_170;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf04b80();
  if ((int)lVar2 == 0) {
    func_0x000105673064();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    unaff_x20 = (undefined *)0x0;
    *param_4 = lVar2;
  }
  else if ((int)lVar2 == 3) {
    unaff_x20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lVar2 = param_3;
    func_0x00010bfe70a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_170 = lVar2;
    func_0x00010c150ce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lStack_170;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lStack_170);
        }
        uVar7 = *(undefined8 *)(lVar8 * 8);
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc();
        uVar6 = uVar7;
        func_0x00010bf8ad40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bffc4a0();
        _objc_release(uVar6);
        uVar6 = uVar7;
        func_0x00010bf8ad40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        func_0x00010bf980c0(uVar6);
        _objc_release(uVar6);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c24cb60(uVar7);
        func_0x00010c0df760(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(unaff_x20);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lStack_170;
      func_0x00010bf52a60();
    }
    _objc_release(lStack_170);
  }
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
    return;
  }
  ___stack_chk_fail();
  _objc_release(lStack_170);
  _objc_release(unaff_x20);
  _objc_release(param_3);
  __Unwind_Resume();
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1056790a0; end: 1056790fb;  */

void FUN_1056790a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056790fc; end: 1056791d3; -[SCPercMLFastDNNImageClassificationModel _executeBatchScoresCompletion:completionQueue:batchScores:error:] */

void FUN_1056790fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_58 = FUN_1056791d4;
  puStack_50 = &UNK_1108a5ee8;
  uStack_48 = param_5;
  uStack_40 = param_6;
  uStack_38 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1056791d4; end: 1056791e7;  */

void FUN_1056791d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056791e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056791e8; end: 1056792bf; -[SCPercMLFastDNNImageClassificationModel _executeBatchClassificationsCompletion:completionQueue:batchClassifications:error:] */

void FUN_1056791e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_58 = FUN_1056792c0;
  puStack_50 = &UNK_1108a5ee8;
  uStack_48 = param_5;
  uStack_40 = param_6;
  uStack_38 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1056792c0; end: 1056792d3;  */

void FUN_1056792c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056792d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056792d4; end: 1056793ab; -[SCPercMLFastDNNImageClassificationModel _executeClassificationsCompletion:completionQueue:classifications:error:] */

void FUN_1056792d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  pcStack_58 = FUN_1056793ac;
  puStack_50 = &UNK_1108a5ee8;
  uStack_48 = param_5;
  uStack_40 = param_6;
  uStack_38 = param_3;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010007380c(param_4,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1056793ac; end: 1056793bf;  */

void FUN_1056793ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056793bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056793c0; end: 1056793c7; -[SCPercMLFastDNNImageClassificationModel getMetricWithKey:] */

undefined8 FUN_1056793c0(void)

{
  return 0;
}



/* Entry: 1056793c8; end: 1056793cf; -[SCPercMLFastDNNImageClassificationModel getRawMetrics] */

undefined8 FUN_1056793c8(void)

{
  return 0;
}



/* Entry: 1056793d0; end: 1056793d7; -[SCPercMLFastDNNImageClassificationModel getStatMetricMean:] */

undefined8 FUN_1056793d0(void)

{
  return 0;
}



/* Entry: 1056793d8; end: 1056793df; -[SCPercMLFastDNNImageClassificationModel modelKey] */

undefined8 FUN_1056793d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1056793e0; end: 1056793e7; -[SCPercMLFastDNNImageClassificationModel modelId] */

undefined8 FUN_1056793e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1056793e8; end: 1056793ef; -[SCPercMLFastDNNImageClassificationModel labels] */

undefined8 FUN_1056793e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1056793f0; end: 1056793f7; -[SCPercMLFastDNNImageClassificationModel imageWidth] */

undefined8 FUN_1056793f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1056793f8; end: 1056793ff; -[SCPercMLFastDNNImageClassificationModel imageHeight] */

undefined8 FUN_1056793f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105679400; end: 105679407; -[SCPercMLFastDNNImageClassificationModel approximateSizeInBytes] */

undefined8 FUN_105679400(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}


