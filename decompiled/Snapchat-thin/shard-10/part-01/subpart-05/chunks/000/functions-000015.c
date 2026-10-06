/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10790f7f4; end: 10790f9e7;  */

undefined8 FUN_10790f7f4(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar5;
  ulong unaff_x20;
  undefined8 uStack_60;
  
  func_0x000107913588();
  func_0x000107906fdc();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  uVar3 = 1;
  if ((bool)in_ZR) {
LAB_10790f8c0:
    func_0x000107915a78();
    if ((bool)uVar3) {
LAB_10790f928:
      func_0x000107914d34(uStack_60);
      if ((((bool)in_CY) && (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) &&
         (func_0x000107914200(), (bool)in_CY)) {
        func_0x0001079137b0();
        func_0x00010790fa58();
        if ((param_1 & 1) != 0) {
LAB_10790f960:
          func_0x0001079141f0();
          iVar4 = (int)param_1;
          if (((bool)in_CY) && (bVar2 = 0x62 < unaff_x20, unaff_x20 < 100)) {
            func_0x000107914280();
            iVar4 = (int)param_1;
            if (!bVar2) goto LAB_10790f968;
            func_0x0001079137c8();
            func_0x00010790fa58();
            if ((param_1 & 1) == 0) goto LAB_10790f998;
          }
          else {
LAB_10790f968:
            func_0x0001079142f0();
            func_0x00010790f9e8();
            if (iVar4 == 0) goto LAB_10790f998;
          }
          uVar5 = 1;
          goto LAB_10790f99c;
        }
      }
      else {
        func_0x0001079145ec();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) goto LAB_10790f960;
      }
    }
    else {
      func_0x000107914d40();
      if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
          (in_CY = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), (bool)in_CY)) {
        func_0x00010791682c();
        func_0x000107913840();
        func_0x00010790fa58();
        if ((int)param_1 != 0) {
          func_0x000107913828();
          func_0x00010790fa58();
          if ((param_1 & 1) != 0) goto LAB_10790f928;
        }
      }
      else {
        func_0x0001079145fc();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) {
          func_0x0001079142e0();
          func_0x00010790f9e8();
          if ((int)param_1 != 0) goto LAB_10790f928;
        }
      }
    }
  }
  else {
    uVar3 = extraout_x9 - extraout_x8 == 0x80;
    uVar1 = 0;
    if ((ulong)(extraout_x9 - extraout_x8) < 0x80) {
LAB_10790f830:
      func_0x0001079142a0();
      func_0x00010790f9e8();
      if ((int)param_1 != 0) {
LAB_10790f864:
        func_0x000107914220();
        in_CY = 0;
        if ((bool)uVar1) {
          func_0x0001079142c0();
          in_CY = 0;
          if ((bool)uVar1) {
            in_CY = 0x62 < unaff_x20;
            uVar3 = unaff_x20 == 99;
            if ((unaff_x20 < 100) && (func_0x000107914e9c(), (bool)in_CY)) {
              func_0x00010791683c();
              func_0x000107913810();
              func_0x00010790fa58();
              if ((int)param_1 != 0) {
                func_0x0001079137f8();
                func_0x00010790fa58();
                if ((param_1 & 1) != 0) goto LAB_10790f8c0;
              }
              goto LAB_10790f998;
            }
          }
        }
        func_0x000107914290();
        func_0x00010790f9e8();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x00010790f9e8();
          if ((int)param_1 != 0) goto LAB_10790f8c0;
        }
      }
    }
    else {
      uVar1 = 0x62 < unaff_x20;
      uVar3 = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar1)) goto LAB_10790f830;
      func_0x000107914d1c();
      func_0x000107913668();
      func_0x00010790fa58();
      if ((param_1 & 1) != 0) goto LAB_10790f864;
    }
  }
LAB_10790f998:
  uVar5 = 0;
LAB_10790f99c:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar5;
}



/* Entry: 1079104b0; end: 107910503;  */

void FUN_1079104b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x18) = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x50) = 0x100000000;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    lVar2 = lVar2 + 0x48;
    *(undefined4 *)(lVar1 + 0x60) = 0;
  } while (lVar2 != 0x90);
  return;
}



/* Entry: 1079108f4; end: 107910977;  */

void FUN_1079108f4(void)

{
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001079164a8();
  while (func_0x000107914570(), (bool)in_CY) {
    func_0x000107915cc4();
    func_0x000107914e7c();
  }
  if (extraout_x8 == 1) {
    lVar1 = 0xb;
  }
  else {
    if (extraout_x8 != 2) goto LAB_107910944;
    lVar1 = 0x17;
  }
  unaff_x19[4] = lVar1;
LAB_107910944:
  while (unaff_x20 != unaff_x21) {
    func_0x0001079163e8();
  }
  lVar1 = unaff_x19[1];
  lVar2 = unaff_x19[2];
  while (lVar2 != lVar1) {
    func_0x000107915c58();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107911030; end: 10791109f;  */

undefined8 FUN_107911030(long *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *param_1;
  bVar1 = lVar4 == param_1[1];
  if ((!bVar1) && (func_0x0001079174bc(), !bVar1)) {
    func_0x00010791589c();
    lVar3 = extraout_x8;
    for (; uVar2 = lVar4 == lVar3, !(bool)uVar2; lVar4 = lVar4 + 8) {
      while (func_0x000107916f18(), !(bool)uVar2) {
        func_0x00010791415c();
        func_0x000107910a2c();
        if (((ulong)param_1 & 1) == 0) {
          return 0;
        }
      }
      lVar3 = *(long *)(unaff_x21 + 8);
    }
  }
  return 1;
}



/* Entry: 10791148c; end: 1079114b3;  */

void FUN_10791148c(void)

{
  func_0x000107914c78();
  func_0x000107918664();
  func_0x0001079114b4();
  func_0x000107918788();
  return;
}



/* Entry: 107911728; end: 1079117ff;  */

double FUN_107911728(int *param_1,int *param_2)

{
  int *piVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (0x1f < (ulong)((long)param_2 - (long)param_1)) {
    while (piVar1 = param_1 + 2, piVar1 != param_2) {
      dVar2 = dVar2 + ((double)param_1[1] - (double)param_1[3]) *
                      ((double)*param_1 + (double)*piVar1);
      param_1 = piVar1;
    }
    dVar2 = dVar2 * 0.5;
  }
  return dVar2;
}



/* Entry: 107911ba8; end: 107911c9f;  */

void FUN_107911ba8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x000107914a04();
  if ((!(bool)in_CY || (bool)in_ZR) && (func_0x0001079147b4(), (bool)in_CY)) {
    func_0x000107907378();
    func_0x0001079135a4();
    func_0x000107913c30(auStack_50,auStack_60);
    func_0x000107911b44();
    func_0x000107915c1c();
    if (!(bool)in_ZR) {
      func_0x000107916e80(0x7fffffff7fffffff);
      func_0x000107917318();
      func_0x000107914dd4();
      func_0x000107911d5c();
      func_0x000107917318();
      func_0x000107915314();
      func_0x000107911d88();
      func_0x000107917318();
      func_0x000107915314();
      func_0x000107911d88();
    }
    func_0x000107914dd4(auStack_50,auStack_78);
    func_0x000107911d5c();
    func_0x000107914dd4(auStack_60,auStack_90);
    func_0x000107911d5c();
    func_0x0001079122ac(auStack_a8);
    func_0x000107917270();
    func_0x000107916d60();
    return;
  }
  func_0x000107914da4();
  func_0x000107915d78();
  if (!(bool)in_ZR) {
    func_0x000107914c78();
    lVar1 = extraout_x8;
    while (unaff_x21 != lVar1) {
      func_0x000107915d6c();
      lVar1 = extraout_x8_00;
      while (unaff_x21 = unaff_x22, unaff_x23 != lVar1) {
        func_0x00010791460c();
        func_0x000107911918();
        lVar1 = *(long *)(unaff_x20 + 8);
      }
    }
  }
  return;
}



/* Entry: 107912038; end: 10791205f;  */

undefined1  [16] FUN_107912038(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x000107917c60(0x7fffffff7fffffff,param_1,param_1);
  return auStack_20;
}



/* Entry: 1079125b8; end: 107912677;  */

ulong * FUN_1079125b8(ulong *param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  long extraout_x8;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = param_1;
  func_0x0001079112fc();
  uVar5 = param_2;
  func_0x00010791732c();
  while( true ) {
    uVar1 = uVar5 <= param_2;
    uVar2 = param_2 == uVar5;
    if ((bool)uVar2) break;
    func_0x000107903640(param_2);
    func_0x000107918254();
    if ((bool)uVar2) {
      puVar3 = puVar3 + 1;
      param_2 = *puVar3;
    }
  }
  param_1[5] = 0;
  uVar5 = param_1[1];
  while (func_0x000107914570(), (bool)uVar1) {
    func_0x000107915cc4();
    func_0x000107914e7c();
  }
  if (extraout_x8 == 1) {
    uVar4 = 0x55;
  }
  else {
    if (extraout_x8 != 2) goto LAB_10791264c;
    uVar4 = 0xaa;
  }
  param_1[4] = uVar4;
LAB_10791264c:
  while (uVar5 != param_2) {
    func_0x0001079163e8();
  }
  func_0x00010791136c(param_1,param_1[1]);
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107912b50; end: 107912b8f;  */

void FUN_107912b50(void)

{
  ulong unaff_x20;
  
  func_0x000107914d64();
  while( true ) {
    if (unaff_x20 < 0x80) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    unaff_x20 = unaff_x20 >> 7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc_110346318)();
  return;
}



/* Entry: 107912e38; end: 107912e4b;  */

void FUN_107912e38(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (long)*(char *)(param_1 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm_110346308
  )(param_1,lVar1 + param_2);
  return;
}



/* Entry: 107912f84; end: 10791316b;  */

undefined1  [16] FUN_107912f84(long *param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x23;
  undefined1 auVar11 [16];
  long *in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  func_0x0001004d761c();
  uVar10 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar5 * uVar9;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_10791302c;
          uVar5 = plVar7[1];
          if (uVar5 != uVar10) break;
          if (plVar7[2] == uVar10) {
            uVar3 = 0;
            goto LAB_107913150;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar5 = uVar5 & uVar4;
        }
        else if (uVar9 <= uVar5) {
          uVar2 = 0;
          if (uVar9 != 0) {
            uVar2 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar2 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10791302c:
  lVar8 = *param_3;
  plVar1 = param_1 + 2;
  plVar7 = param_1;
  func_0x000107917234();
  in_stack_00000018 = 1;
  *plVar7 = 0;
  plVar7[1] = uVar10;
  plVar7[2] = lVar8;
  in_stack_00000008 = plVar7;
  in_stack_00000010 = plVar1;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    func_0x0001079157f0(uVar9 << 1);
    func_0x00010787b6c0(param_1);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x23 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x23 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  plVar7 = in_stack_00000008;
  lVar8 = *param_1;
  plVar6 = *(long **)(lVar8 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    *in_stack_00000008 = *plVar1;
    *plVar1 = (long)in_stack_00000008;
    *(long **)(lVar8 + unaff_x23 * 8) = plVar1;
    if (*in_stack_00000008 != 0) {
      uVar10 = *(ulong *)(*in_stack_00000008 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      *(long **)(lVar8 + uVar10 * 8) = in_stack_00000008;
    }
  }
  else {
    *in_stack_00000008 = *plVar6;
    *plVar6 = (long)in_stack_00000008;
  }
  in_stack_00000008 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010787b894(&stack0x00000008);
  uVar3 = 1;
LAB_107913150:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar7;
  return auVar11;
}



/* Entry: 107913258; end: 107913273;  */

void FUN_107913258(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107913274(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107917ffc; end: 107918927;  */

void FUN_107917ffc(void)

{
  return;
}



/* Entry: 107918b9c; end: 107918bdb;  */

void FUN_107918b9c(void)

{
  func_0x000107918df0();
  return;
}



/* Entry: 107918fb4; end: 107918fb7;  */

void FUN_107918fb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ea3a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107919134; end: 10791913f;  */

long FUN_107919134(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea368;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 107919578; end: 10791957f; -[SCNSnapMapsSdkCMAnimationOptions motionType] */

undefined8 FUN_107919578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079195f4; end: 10791974b;  */

void FUN_1079195f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2bf0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001000ff4bc();
  uVar3 = param_2;
  uVar5 = param_3;
  func_0x00010bf17900(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000ff4bc();
  uVar4 = param_2;
  uVar6 = uVar5;
  func_0x00010c0fc7c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000ff4bc();
  func_0x00010c08c300(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_80);
  func_0x000107919834(param_1,uVar2,param_3 & 0xff,uVar3,uVar5 & 0xff,uVar4,uVar6 & 0xff,auStack_80)
  ;
  func_0x0001001148fc(auStack_80);
  _objc_release(param_2);
  func_0x00010791988c();
  func_0x00010791987c();
  _objc_release(uVar1);
  func_0x000107919884();
  return;
}



/* Entry: 1079199f0; end: 107919a2b; -[SCNSnapMapsSdkCMCameraOptions .cxx_destruct] */

void FUN_1079199f0(long param_1)

{
  func_0x000107919a2c(param_1 + 0x20);
  func_0x000107919a2c(param_1 + 0x18);
  func_0x000107919a2c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107919ce0; end: 107919ce7; -[SCNSnapMapsSdkCMCameraViewport edgeInsets] */

undefined8 FUN_107919ce0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107919f0c; end: 107919f17;  */

long FUN_107919f0c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ea490;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10791a1a0; end: 10791a233;  */

void FUN_10791a1a0(undefined1 *param_1,long param_2)

{
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x70] = 0;
  }
  else {
    func_0x000107919140(auStack_a0,param_2);
    _memcpy(param_1,auStack_a0,0x59);
    *(undefined8 *)(param_1 + 0x68) = uStack_38;
    *(undefined8 *)(param_1 + 0x60) = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    param_1[0x70] = 1;
    func_0x0001072835ec(&uStack_40);
  }
  func_0x00010791af9c();
  return;
}



/* Entry: 10791a714; end: 10791a7a3; -[SCNSnapMapsSdkCameraManager pitchBy:animationOptions:] */

void FUN_10791a714(undefined8 param_1)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_b8 [120];
  
  func_0x00010791af3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791af90();
  (**(code **)(*plVar1 + 0x50))(param_1,plVar1,auStack_b8);
  func_0x00010791afa4();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791ab6c; end: 10791abeb; -[SCNSnapMapsSdkCameraManager setManualPitch:] */

void FUN_10791ab6c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long *plVar2;
  
  func_0x00010791af3c();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  uVar1 = param_3;
  func_0x0001000ff4bc(param_3);
  (**(code **)(*plVar2 + 0x90))(plVar2,uVar1,param_2 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10791ae48; end: 10791aebb;  */

void FUN_10791ae48(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109ea560;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010791b008();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_10791aebc);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791b0c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791b254; end: 10791b25f; -[SCNSnapMapsSdkCofPrefetchDescriptor .cxx_destruct] */

void FUN_10791b254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10791b4d8; end: 10791b53f;  */

void FUN_10791b4d8(void)

{
  func_0x00010791b9e8();
  func_0x00010791ba34();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791bab8();
  func_0x00010bfcade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba14();
  func_0x00010791ba70();
  func_0x00010791ba44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10791b850; end: 10791b8b7;  */

void FUN_10791b850(void)

{
  func_0x00010791b9e8();
  func_0x00010791ba34();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791bab8();
  func_0x00010bfc3000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba14();
  func_0x00010791ba7c();
  func_0x00010791ba44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10791bc7c; end: 10791bc7f;  */

void FUN_10791bc7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ea7d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791bdec; end: 10791bea3;  */

void FUN_10791bdec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ea8b8;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791bea4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010791c1d4(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10791c1c4; end: 10791c1d3;  */

void FUN_10791c1c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ea8f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791c3f0; end: 10791c42f;  */

void FUN_10791c3f0(void)

{
  func_0x00010791c600();
  return;
}



/* Entry: 10791c6d8; end: 10791c7cf;  */

void FUN_10791c6d8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eab58;
  puVar4[3] = &PTR_DAT_1109eabd0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010791ca3c();
  puVar4[3] = &PTR_DAT_1109eaba8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10791ca10(&uStack_50);
  return;
}



/* Entry: 10791ca10; end: 10791ca3b;  */

long FUN_10791ca10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791cb88; end: 10791cb8f; -[SCNSnapMapsSdkEdgeInsetsDouble right] */

undefined8 FUN_10791cb88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10791ce50; end: 10791cf1b;  */

void FUN_10791ce50(void)

{
  func_0x00010791cfe4();
  func_0x00010791cff4();
  func_0x00010bf4ea00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10791d0fc; end: 10791d103; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters height] */

undefined8 FUN_10791d0fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10791d13c; end: 10791d1c7;  */

void FUN_10791d13c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar2 = param_2;
  func_0x00010c08fa60(param_2);
  func_0x0001072d786c(param_1);
  func_0x00010006369c(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10791d9b8; end: 10791d9bf; -[SCNSnapMapsSdkFeatureDescriptor layerId] */

undefined8 FUN_10791d9b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10791d9f8; end: 10791da4b; -[SCNSnapMapsSdkFeatureDescriptor .cxx_destruct] */

void FUN_10791d9f8(long param_1)

{
  func_0x00010791da4c(param_1 + 0x40);
  func_0x00010791da4c(param_1 + 0x38);
  func_0x00010791da4c(param_1 + 0x30);
  func_0x00010791da4c(param_1 + 0x28);
  func_0x00010791da4c(param_1 + 0x20);
  func_0x00010791da4c(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10791dd84; end: 10791ddbf; -[SCNSnapMapsSdkFontDescriptor .cxx_destruct] */

void FUN_10791dd84(long param_1)

{
  func_0x00010791ddc0(param_1 + 0x20);
  func_0x00010791ddc0(param_1 + 0x18);
  func_0x00010791ddc0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10791dfe4; end: 10791e08b;  */

void FUN_10791dfe4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x00010791e668();
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x00010bfc5b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar1 == 0) {
    *(undefined1 *)unaff_x21 = 0;
    *(undefined1 *)(unaff_x21 + 3) = 0;
  }
  else {
    func_0x00010791e17c(&uStack_50,lVar1);
    unaff_x21[1] = uStack_48;
    *unaff_x21 = uStack_50;
    unaff_x21[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(unaff_x21 + 3) = 1;
    func_0x0001072af598(&uStack_50);
  }
  func_0x00010791e634();
  func_0x00010791e634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10791e5b4; end: 10791e5fb;  */

long * FUN_10791e5b4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x58;
    func_0x0001072af620();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10791e738; end: 10791e73f; -[SCNSnapMapsSdkGestureInfo tappedY] */

undefined4 FUN_10791e738(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10791e91c; end: 10791e95b;  */

void FUN_10791e91c(void)

{
  func_0x00010791ebcc();
  return;
}



/* Entry: 10791ec78; end: 10791ec7f; -[SCNSnapMapsSdkInitialViewportInfo zoom] */

undefined4 FUN_10791ec78(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10791ee6c; end: 10791eeab;  */

void FUN_10791ee6c(void)

{
  func_0x00010791eff0();
  return;
}



/* Entry: 10791f1a8; end: 10791f1ab;  */

void FUN_10791f1a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eb180;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791f3f4; end: 10791f41f;  */

long FUN_10791f3f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791f70c; end: 10791f75f; -[SCNSnapMapsSdkInputManager .cxx_destruct] */

void FUN_10791f70c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb210;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010791f888((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10791fb64; end: 10791fbbb; -[SCNSnapMapsSdkInspector disable] */

void FUN_10791fb64(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10791fe68; end: 10791fecb;  */

void FUN_10791fe68(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792015c; end: 1079201b3;  */

void FUN_10792015c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107920280();
  func_0x00010c0e30c0(*(undefined8 *)(unaff_x19 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 107920404; end: 1079204c3; -[SCNSnapMapsSdkLatLngBoundsDouble initWithSw:ne:] */

undefined1 *
FUN_107920404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8dd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1079205ec; end: 1079205f3; -[SCNSnapMapsSdkLatLngDouble lng] */

undefined8 FUN_1079205ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1079208dc; end: 107920967; -[SCNSnapMapsSdkMapSdk getInspector] */

void FUN_1079208dc(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_30);
  func_0x00010791fcc0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072ac7b8(auStack_30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107920ea8; end: 10792120b; -[SCNSnapMapsSdkMapSdk initialize2:authContextProviders:publicUserInfoProvider:dateTimeFormatter:contentObjectResolver:bitmojiFetcher:memoriesFetcher:fontProvider:crashLoggingProvider:cofProvider:resourceRequester:] */

void FUN_107920ea8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long *plVar1;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [40];
  undefined1 auStack_120 [192];
  
  func_0x000107921fd0();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107920ca8(auStack_120,param_3);
  func_0x000107920d30(auStack_148,param_4);
  func_0x0001079284f0(auStack_158,param_5);
  func_0x00010791c620(auStack_168,param_6);
  FUN_10791bdec(auStack_178,param_7);
  func_0x00010792c428(auStack_188,param_8);
  func_0x000107926978(auStack_198,param_9);
  func_0x000107920e30(auStack_1a8,param_10);
  func_0x000107920e6c(auStack_1b8,param_11);
  func_0x00010792120c(auStack_1c8,param_12);
  func_0x000107921248(auStack_1d8,param_13);
  (**(code **)(*plVar1 + 0x28))
            (plVar1,auStack_120,auStack_148,auStack_158,auStack_168,auStack_178,auStack_188,
             auStack_198,auStack_1a8,auStack_1b8,auStack_1c8,auStack_1d8);
  func_0x0001072aca24(auStack_1d8);
  func_0x0001072ab65c(auStack_1c8);
  func_0x0001072adad8(auStack_1b8);
  func_0x0001072a8dec(auStack_1a8);
  func_0x0001072ac994(auStack_198);
  func_0x0001072adb8c(auStack_188);
  func_0x00010726ee4c(auStack_178);
  func_0x0001072ac94c(auStack_168);
  func_0x00010726ee28(auStack_158);
  func_0x0001072aa7e4(auStack_148);
  FUN_10793c9d8(auStack_120);
  _objc_release(param_13);
  func_0x000107921fa0();
  _objc_release(param_11);
  _objc_release(param_10);
  func_0x000107922084();
  func_0x00010792208c();
  func_0x000107922094();
  func_0x00010792209c();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107921548; end: 1079215d3; -[SCNSnapMapsSdkMapSdk prefetchStyles:] */

void FUN_107921548(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107921f90();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_107928f8c(auStack_40);
  func_0x0001079220f4(*(undefined8 *)(*plVar1 + 0x58));
  func_0x00010734d858(auStack_40);
  func_0x000107921fa0();
  return;
}



/* Entry: 1079218e8; end: 10792197f;  */

void FUN_1079218e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  func_0x000107921fd0();
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x0001000fbca4(auStack_48,param_2);
  func_0x00010792217c();
  func_0x00010792dbf8();
  func_0x000107921980(lVar1 + 0x30,auStack_48,auStack_58);
  func_0x000104bff3c8(auStack_58);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107921fa0();
  return;
}



/* Entry: 107921d20; end: 107921d53;  */

void FUN_107921d20(void)

{
  func_0x000107921d38();
  return;
}



/* Entry: 10792234c; end: 1079223e3; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder initializationParams:] */

void FUN_10792234c(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_e8 [184];
  
  FUN_107922b38();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107920ca8(auStack_e8);
  func_0x000107922be4(*(undefined8 *)(*plVar1 + 0x18));
  FUN_10793c9d8(auStack_e8);
  func_0x000107922b84();
  return;
}



/* Entry: 1079227e4; end: 107922867; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder crashLoggingProvider:] */

void FUN_1079227e4(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  FUN_107922b38();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107922bd0();
  func_0x000107920e6c();
  func_0x000107922b58(*(undefined8 *)(*plVar1 + 0x58));
  func_0x0001072adad8(auStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 107922b38; end: 107922c1b;  */

void FUN_107922b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 107922f58; end: 107922fe7;  */

long FUN_107922f58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb420;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107923038();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 107923280; end: 107923303;  */

void FUN_107923280(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x0001079268c4();
  *param_1 = &PTR_FUN_1109ed870;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2f) = 0;
  func_0x000107926914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1079237c0; end: 10792380b; -[SCNSnapMapsSdkMapSdkSession removeParticleEffect:] */

void FUN_1079237c0(void)

{
  long extraout_x8;
  
  func_0x000107926690();
  (**(code **)(extraout_x8 + 0x58))();
  return;
}



/* Entry: 107923d84; end: 107923e23; -[SCNSnapMapsSdkMapSdkSession removeFeature:featureId:] */

void FUN_107923d84(undefined8 param_1)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079265ec();
  func_0x0001079267b4();
  func_0x000107926614(*(undefined8 *)(*plVar1 + 0x90),param_1,auStack_48);
  func_0x000107926754();
  func_0x0001079266e8();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 107924388; end: 107924403; -[SCNSnapMapsSdkMapSdkSession getViewportLogger] */

void FUN_107924388(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079266cc();
  func_0x00010792675c();
  func_0x00010792a270(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x000107926310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079247c8; end: 107924b0f; -[SCNSnapMapsSdkMapSdkSession toScreenLocations:] */

void FUN_1079247c8(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  long unaff_x20;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [16];
  long lStack_108;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  func_0x00010792673c();
  uStack_70 = extraout_x8;
  func_0x000107926640();
  plVar9 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926780();
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  lStack_1b8 = 0;
  func_0x000107926884();
  puVar5 = (undefined1 *)0x0;
  if (param_1 != 0) {
    if (0x666666666666666 < param_1) goto LAB_107924a48;
    func_0x0001079264b0(auStack_f0,param_1,0,&uStack_1a8);
    func_0x0001079263b0(&lStack_1b8,auStack_f0);
    puVar5 = auStack_f0;
    FUN_107926508();
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  func_0x000107926780();
  func_0x0001079265c4();
  if (puVar5 != (undefined1 *)0x0) {
    lVar12 = *plStack_150;
    do {
      puVar13 = (undefined1 *)0x0;
      do {
        if (*plStack_150 != lVar12) {
          func_0x00010792687c();
        }
        uVar11 = *(undefined8 *)(lStack_158 + (long)puVar13 * 8);
        func_0x00010792683c();
        func_0x0001079246a4(auStack_188,uVar11);
        if (uStack_1b0 < uStack_1a8) {
          func_0x0001079264fc(uStack_1b0,auStack_188);
          uVar10 = uStack_1b0 + 0x28;
        }
        else {
          lVar1 = (long)(uStack_1b0 - lStack_1b8) / 0x28;
          uVar10 = lVar1 + 1;
          if (0x666666666666666 < uVar10) {
            func_0x0001072bba48();
            goto LAB_107924ae8;
          }
          uVar2 = (long)(uStack_1a8 - lStack_1b8) / 0x28;
          uVar8 = uVar2 * 2;
          if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
            uVar8 = uVar10;
          }
          if (0x333333333333332 < uVar2) {
            uVar8 = 0x666666666666666;
          }
          func_0x0001079264b0(auStack_118,uVar8,lVar1,&uStack_1a8);
          func_0x0001079264fc(lStack_108,auStack_188);
          lStack_108 = lStack_108 + 0x28;
          func_0x0001079263b0(&lStack_1b8,auStack_118);
          uVar10 = uStack_1b0;
          FUN_107926508(auStack_118);
        }
        puVar6 = auStack_188;
        uStack_1b0 = uVar10;
        func_0x000107931394();
        func_0x000107926734();
        puVar13 = puVar13 + 1;
      } while (puVar13 < puVar5);
      func_0x0001079265c4();
      puVar5 = puVar6;
    } while (puVar6 != (undefined1 *)0x0);
  }
  func_0x000107926620();
  func_0x000107926620();
  (**(code **)(*plVar9 + 0xf8))(&lStack_1a0,plVar9,&lStack_1b8);
  func_0x0001072bbc14(&lStack_1b8);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (; uVar4 = lStack_1a0 == lStack_198, !(bool)uVar4; lStack_1a0 = lStack_1a0 + 0x20) {
    func_0x000107924724(lStack_1a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar7);
    func_0x0001079266a0();
  }
  func_0x00010bf51e00(puVar7);
  func_0x000107926734();
  func_0x0001072bbb8c(&lStack_1a0);
  func_0x000107926620();
  func_0x0001079266b8(uStack_70);
  if ((bool)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
LAB_107924a48:
  func_0x0001072bba48();
LAB_107924ae8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107924aec);
  (*pcVar3)();
}



/* Entry: 107925084; end: 10792510f; -[SCNSnapMapsSdkMapSdkSession resetViewport:] */

void FUN_107925084(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107926564();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791ec90(auStack_40);
  func_0x000107926700(*(undefined8 *)(*plVar1 + 0x130));
  func_0x0001072bbe1c(auStack_40);
  func_0x000107926620();
  return;
}



/* Entry: 1079254d8; end: 107925527; -[SCNSnapMapsSdkMapSdkSession requestRender:] */

void FUN_1079254d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  func_0x0001079266cc(param_1,param_3);
  (**(code **)(extraout_x8 + 0x170))();
  return;
}



/* Entry: 107925ba0; end: 107925c2b; -[SCNSnapMapsSdkMapSdkSession getStyleMetadata] */

void FUN_107925ba0(void)

{
  undefined1 *puVar1;
  undefined1 auStack_98 [120];
  
  func_0x0001079266cc();
  func_0x000107926854();
  puVar1 = auStack_98;
  func_0x000107928dd4(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001072bb92c(auStack_98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107926194; end: 107926207;  */

void FUN_107926194(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eb500;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x0001079267cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_107926208);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x0001000df524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107926508; end: 10792654f;  */

long * FUN_107926508(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x28;
    func_0x000107931394();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107926b94; end: 107926cbb;  */

void FUN_107926b94(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2[1];
  for (lVar6 = *param_2; lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
    lVar4 = lVar6;
    FUN_107928910(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(lVar4);
  }
  func_0x00010bf51e00(puVar3);
  func_0x000107926dbc();
  func_0x000107926f68(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa8840(uVar5);
  func_0x000107926dbc();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 107926f0c; end: 107926f67; -[SCNSnapMapsSdkMemoriesFetcherCallback onError] */

void FUN_107926f0c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 107927198; end: 107927217; -[SCNSnapMapsSdkParticleEffectImageLoaderObserver initWithCpp:] */

undefined1 * FUN_107927198(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8e00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x000107307740(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 107927554; end: 10792755f;  */

long FUN_107927554(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb6b0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1079277a0; end: 10792781b; -[SCNSnapMapsSdkPlaceManager setVisiblePlaces:] */

void FUN_1079277a0(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x000107927b14();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107927b9c();
  func_0x000107927b34(*(undefined8 *)(*plVar1 + 0x18));
  func_0x000107927b58();
  func_0x000107927b40();
  return;
}



/* Entry: 107927aa4; end: 107927b13;  */

void FUN_107927aa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d56c8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107927b24();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000107926338(&uStack_30);
  return;
}



/* Entry: 107928040; end: 10792809b; -[SCNSnapMapsSdkPublicUserInfoCallback onError] */

void FUN_107928040(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 107928358; end: 1079283d3;  */

long * FUN_107928358(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x38e38e38e38e38e < param_2) {
      func_0x000104bd35f4();
      plVar2 = param_1;
      func_0x00010793bd48();
      if (plVar2 != param_2) {
        uVar3 = param_1[1];
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
        }
        uVar5 = param_2[1];
        if ((uVar5 & 1) != 0) {
          uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        if (uVar3 == uVar5) {
          FUN_10793c25c(param_1,param_2);
        }
        else {
          func_0x00010793c22c(param_1,param_2);
        }
      }
      return param_1;
    }
    lVar1 = (long)param_2 * 0x48;
    __Znwm();
  }
  lVar4 = lVar1 + param_3 * 0x48;
  *param_1 = lVar1;
  param_1[1] = lVar4;
  param_1[2] = lVar4;
  param_1[3] = lVar1 + (long)param_2 * 0x48;
  return param_1;
}



/* Entry: 1079286b8; end: 1079286c3;  */

long FUN_1079286b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eb7f8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010792887c();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 107928910; end: 107928943;  */

void FUN_107928910(undefined8 *param_1)

{
  _objc_alloc(PTR_PTR_1126d56d8);
  func_0x00010c0541a0(*param_1,param_1[1],param_1[2],param_1[3]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107928b60; end: 107928b8b;  */

void FUN_107928b60(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107928c24();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107928dc4; end: 107928dcb; -[SCNSnapMapsSdkSize width] */

undefined8 FUN_107928dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107928f8c; end: 107929043;  */

void FUN_107928f8c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eb930;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_107929044);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010792928c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10792927c; end: 10792928b;  */

void FUN_10792927c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb970;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1079294b8; end: 1079294bf; -[SCNSnapMapsSdkStyleRevision buildId] */

undefined8 FUN_1079294b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1079295ac; end: 107929637;  */

void FUN_1079295ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_6;
  func_0x00010bf8b160();
  uVar2 = param_6;
  func_0x00010bf8bfc0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001079296ec();
  *param_1 = uVar1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107929884; end: 10792988b; -[SCNSnapMapsSdkUnitBezierDouble p1] */

undefined8 FUN_107929884(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107929b78; end: 107929bbb; -[SCNSnapMapsSdkUserMetadataManager .cxx_construct] */

undefined8 * FUN_107929b78(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107929ca8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 107929ec0; end: 107929ecb;  */

long FUN_107929ec0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109eba68;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010792a0e4();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10792a164; end: 10792a26f; -[SCNSnapMapsSdkViewportLogger getBasemapFeaturesInViewport:groups:] */

void FUN_10792a164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010792a448(auStack_40,param_3);
  func_0x0001000fbed0(auStack_58,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40,auStack_58);
  func_0x0001000e30f4(auStack_58);
  func_0x0001072f3624(auStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10792a500; end: 10792a5ff;  */

void FUN_10792a500(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ebbe0;
  puVar4[3] = &PTR_DAT_1109ebc58;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109ebc30;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10792a77c(&uStack_50);
  return;
}



/* Entry: 10792a77c; end: 10792a7a7;  */

long FUN_10792a77c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10792a98c; end: 10792aa7f;  */

void FUN_10792a98c(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c121ea0();
  func_0x00010c0cb140(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_58);
  func_0x00010c13f320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010792aa80();
  uVar1 = uStack_48;
  *param_1 = (int)uVar2;
  *(undefined8 *)(param_1 + 4) = uStack_50;
  *(undefined8 *)(param_1 + 2) = uStack_58;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(ulong *)(param_1 + 10) = param_3 & 0xff;
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  func_0x00010792aaf4();
  func_0x00010792aaec();
  return;
}



/* Entry: 10792ac28; end: 10792b07b;  */

void FUN_10792ac28(undefined8 param_1,long param_2,ulong param_3)

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
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_168 [40];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c087060();
  lVar2 = param_2;
  func_0x00010c09d180();
  lVar3 = param_2;
  func_0x00010c28fc60();
  lVar4 = param_2;
  func_0x00010c113c80();
  lVar5 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_b0);
  lVar6 = param_2;
  func_0x00010bf26920();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_d0);
  lVar7 = param_2;
  func_0x00010c26eb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar7 == 0) {
    uStack_100 = uStack_100 & 0xffffffffffffff00;
    uStack_d8 = 0;
  }
  else {
    func_0x00010792c1e0(&uStack_98,lVar7);
    uStack_f0 = uStack_88;
    uStack_f8 = uStack_90;
    uStack_100 = uStack_98;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_d8 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  }
  _objc_release(lVar7);
  lVar8 = param_2;
  func_0x00010c113aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010792aa80();
  lVar10 = param_2;
  uVar20 = param_3;
  func_0x00010c113a80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010792aa80();
  lVar12 = param_2;
  uVar21 = uVar20;
  func_0x00010c113a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_120);
  lVar13 = param_2;
  func_0x00010c113a40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x000100685674();
  lVar15 = param_2;
  func_0x00010c0ce6e0();
  lVar16 = param_2;
  func_0x00010c2572a0();
  lVar17 = param_2;
  func_0x00010bf26580();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100114864(auStack_140);
  lVar18 = param_2;
  func_0x00010bfe4c80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar18 != 0) {
    _objc_retain(lVar18);
    func_0x00010c067fc0();
    func_0x00010792b07c();
  }
  lVar18 = param_2;
  func_0x00010c134ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100685674();
  lVar19 = param_2;
  func_0x00010c1356a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100626d7c(auStack_168);
  func_0x0001072d6ddc(param_1,lVar1,lVar2,lVar3,lVar4,auStack_b0,auStack_d0,&uStack_100,lVar9,
                      param_3 & 0xff,lVar11,uVar20 & 0xff,auStack_120,lVar14,uVar21,lVar15,
                      (int)lVar16);
  func_0x00010028ad98(auStack_168);
  _objc_release(lVar19);
  _objc_release(lVar18);
  func_0x00010792b07c();
  func_0x0001001148fc(auStack_140);
  _objc_release(lVar17);
  _objc_release(lVar13);
  func_0x0001001148fc(auStack_120);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar8);
  func_0x0001072d59f8(&uStack_100);
  _objc_release(lVar7);
  func_0x0001001148fc(auStack_d0);
  _objc_release(lVar6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  _objc_release(lVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 10792b394; end: 10792b39b; -[SCNMapSdkResourceRequesterResource cacheKeyOverride] */

undefined8 FUN_10792b394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


