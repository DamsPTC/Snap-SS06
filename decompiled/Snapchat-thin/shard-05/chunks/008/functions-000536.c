/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10417a638; end: 10417a673;  */

undefined8 * FUN_10417a638(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10417a674; end: 10417a70f;  */

int FUN_10417a674(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10417a710; end: 10417a76b;  */

void FUN_10417a710(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 10417a76c; end: 10417a7c7;  */

undefined8 * FUN_10417a76c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10417a7c8; end: 10417a803;  */

undefined8 * FUN_10417a7c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10417a804; end: 10417a8a7;  */

int FUN_10417a804(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10417a8a8; end: 10417a9fb;  */

void FUN_10417a8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = unaff_x20[1];
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  __ss15ContiguousArrayV5countSivg(lVar2,uVar5);
  if (SBORROW8(lVar2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417a9f8);
    (*pcVar1)();
  }
  lVar7 = *unaff_x20;
  lVar3 = lVar7;
  FUN_10417aca0();
  if (lVar2 + -1 < lVar3) {
    uVar4 = 0;
    __ss15ContiguousArrayVMa(0,uVar5);
    __ss15ContiguousArrayV6remove2atxSi_tF(param_1,param_2,uVar4);
    lVar2 = *unaff_x20;
    lVar3 = unaff_x20[1];
    uVar5 = *(undefined8 *)(param_4 + 0x10);
    if (lVar2 == 0) {
      uVar6 = 0;
    }
    else {
      _swift_beginAccess(lVar2 + 0x10,&stack0xffffffffffffffa8,0,0);
      uVar6 = *(ulong *)(lVar2 + 0x18) & 0x3f;
    }
    lVar7 = lVar3;
    __ss15ContiguousArrayV5countSivg(lVar3,uVar5);
    if (lVar7 < 0x10 && uVar6 == 0) {
      _swift_release(lVar2);
      *unaff_x20 = 0;
    }
    else {
      __ss15ContiguousArrayV5countSivg(lVar3,uVar5);
      func_0x00010416d850();
      FUN_10417b0f8();
    }
    return;
  }
  if (lVar7 == 0) {
    uVar4 = 0;
    __ss15ContiguousArrayVMa(0,uVar5);
  }
  else {
    FUN_10417ab64();
    lVar2 = *unaff_x20;
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417a9fc);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_10417b3d8(lVar2 + 0x10,lVar2 + 0x20,param_3);
    _swift_release(lVar2);
    uVar4 = 0;
    __ss15ContiguousArrayVMa(0,uVar5);
  }
  __ss15ContiguousArrayV6remove2atxSi_tF(param_1,param_2,uVar4);
  return;
}



/* Entry: 10417a9fc; end: 10417aa0b;  */

undefined1  [16] FUN_10417a9fc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 10417aa0c; end: 10417aab3;  */

void FUN_10417aa0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    _swift_beginAccess(lVar1 + 0x10,auStack_58,0,0);
    uVar5 = *(ulong *)(lVar1 + 0x18) & 0x3f;
  }
  lVar3 = lVar2;
  __ss15ContiguousArrayV5countSivg(lVar2,uVar4);
  if (lVar3 < 0x10 && uVar5 == 0) {
    _swift_release(lVar1);
    *unaff_x20 = 0;
  }
  else {
    __ss15ContiguousArrayV5countSivg(lVar2,uVar4);
    func_0x00010416d850();
    FUN_10417b0f8();
  }
  return;
}



/* Entry: 10417aab4; end: 10417ab63;  */

long FUN_10417aab4(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    uVar2 = *(ulong *)(param_1 + 0x10) & 0x3f;
    if (4 < uVar2) {
      dVar3 = (double)(1L << uVar2) * 0.75;
      if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ab5c);
        (*pcVar1)();
      }
      if (-9.223372036854778e+18 < dVar3) {
        if (dVar3 < 9.223372036854776e+18) {
          return (long)dVar3;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ab64);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ab60);
      (*pcVar1)();
    }
  }
  return 0xf;
}



/* Entry: 10417ab64; end: 10417ac9f;  */

void FUN_10417ab64(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar3 = *unaff_x20;
  if ((uVar3 != 0) && (_swift_isUniquelyReferenced_native(), (uVar3 & 1) == 0)) {
    uVar3 = *unaff_x20;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ac10);
      (*pcVar2)();
    }
    uVar7 = *(ulong *)(uVar3 + 0x10);
    lVar5 = (uVar7 & 0x3f) << (uVar7 & 0x3f);
    if (SCARRY8(lVar5,0x40)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ac0c);
      (*pcVar2)();
    }
    lVar1 = lVar5 + 0x7e;
    if (0 < lVar5 + 0x40) {
      lVar1 = lVar5 + 0x3f;
    }
    uVar4 = 0;
    FUN_104170c84();
    _swift_allocObject();
    uVar6 = *(undefined8 *)(uVar3 + 0x18);
    *(ulong *)(uVar4 + 0x10) = uVar7;
    *(undefined8 *)(uVar4 + 0x18) = uVar6;
    _memcpy(uVar4 + 0x20,uVar3 + 0x20,(lVar1 >> 6) * 8);
    _swift_release(uVar3);
    *unaff_x20 = uVar4;
  }
  return;
}



/* Entry: 10417aca0; end: 10417ad83;  */

long FUN_10417aca0(long param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    uVar1 = *(uint *)(param_1 + 0x10);
    _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
    if (((*(uint *)(param_1 + 0x18) ^ uVar1) & 0x3f) != 0) {
      _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
      uVar3 = *(ulong *)(param_1 + 0x10) & 0x3f;
      if (4 < uVar3) {
        dVar4 = (double)(1L << uVar3) / 4.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ad7c);
          (*pcVar2)();
        }
        if (dVar4 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ad80);
          (*pcVar2)();
        }
        if (9.223372036854776e+18 <= dVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ad84);
          (*pcVar2)();
        }
        return (long)dVar4;
      }
    }
  }
  return 0;
}



/* Entry: 10417ad84; end: 10417ae13;  */

undefined8
FUN_10417ad84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  uVar1 = 0x113065c60;
  uStack_70 = param_4;
  uStack_68 = param_5;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_1;
  func_0x0001000285a8(0x113065c60,&UNK_10dcdaf20);
  func_0x000102107f98(auStack_48,param_6,auStack_80,param_3,param_4,uVar1,PTR___ss5NeverON_11034ee88
                      ,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  return auStack_48[0];
}



/* Entry: 10417ae14; end: 10417b06f;  */

undefined1  [16]
FUN_10417ae14(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
             long param_6,long param_7,long param_8,undefined8 param_9)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  undefined8 *puVar7;
  int extraout_w12;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar9 = *(long *)(param_8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (extraout_w12 == 1) {
    if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
      param_3 = 0;
      lVar6 = param_2 << 3;
      puVar7 = param_1;
      do {
        uVar10 = *puVar7;
        uVar11 = (ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)((ulong)uVar10 >> 8)) +
                               POPCOUNT((char)((ulong)uVar10 >> 0x10)) +
                               POPCOUNT((char)((ulong)uVar10 >> 0x18)) +
                               POPCOUNT((char)((ulong)uVar10 >> 0x20)) +
                               POPCOUNT((char)((ulong)uVar10 >> 0x28)) +
                               POPCOUNT((char)((ulong)uVar10 >> 0x30)) +
                              POPCOUNT((char)((ulong)uVar10 >> 0x38)));
        bVar2 = SCARRY8(param_3,uVar11);
        param_3 = param_3 + uVar11;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10417b064);
          (*pcVar1)();
        }
        lVar6 = lVar6 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
      goto LAB_10417aeb8;
    }
  }
  else {
LAB_10417aeb8:
    if (param_3 != 0) {
      lVar6 = param_7;
      __ss15ContiguousArrayV5countSivg(param_7,param_8);
      if (param_3 == lVar6) {
        lVar9 = param_6;
        FUN_10417aab4();
        lVar6 = param_7;
        __ss15ContiguousArrayV5countSivg(param_7,param_8);
        if (SBORROW8(lVar9,lVar6)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10417b068);
          (*pcVar1)();
        }
        puVar7 = (undefined8 *)param_6;
        lVar4 = param_7;
        if (lVar9 - lVar6 < param_5) {
          puStack_90 = (undefined8 *)param_6;
          lStack_88 = param_7;
          if (SCARRY8(param_3,param_5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10417b070);
            (*pcVar1)();
          }
          uVar10 = 0;
          FUN_10417b6a8(0,param_8,param_9);
          FUN_1041785f4(param_3 + param_5,uVar10);
          puVar7 = puStack_90;
          lVar4 = lStack_88;
        }
      }
      else {
        lVar6 = param_3 + param_5;
        if (SCARRY8(param_3,param_5)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10417b06c);
          (*pcVar1)();
        }
        lVar4 = 0;
        FUN_104178584(lVar6,0,param_8,param_9);
        if (param_2 < 1) {
          uStack_78 = 0;
        }
        else {
          uStack_78 = *param_1;
        }
        uStack_80 = 0;
        lVar5 = lVar4;
        lStack_98 = lVar6;
        puStack_90 = param_1;
        lStack_88 = param_2;
        lStack_70 = lVar6;
        lStack_68 = lVar4;
        FUN_1041865c4();
        uVar3 = (uint)lVar5;
        puVar7 = (undefined8 *)lStack_98;
        while ((uVar3 & 0xff) != 1) {
          __ss15ContiguousArrayVyxSicig(puVar8);
          uVar10 = 0;
          FUN_10417b6a8(0,param_8,param_9);
          FUN_104176354(puVar8,uVar10);
          lVar6 = param_8;
          (**(code **)(lVar9 + 8))(puVar8);
          uVar3 = (uint)lVar6;
          FUN_1041865c4();
          lVar4 = lStack_68;
          puVar7 = (undefined8 *)lStack_70;
        }
        _swift_release(param_7);
        _swift_release(param_6);
      }
      goto LAB_10417b038;
    }
  }
  lVar4 = 0;
  FUN_104178584(param_5,0,param_8,param_9);
  _swift_release(param_7);
  _swift_release(param_6);
  puVar7 = (undefined8 *)param_5;
LAB_10417b038:
  auVar12._8_8_ = lVar4;
  auVar12._0_8_ = puVar7;
  return auVar12;
}



/* Entry: 10417b070; end: 10417b0f7;  */

ulong FUN_10417b070(long param_1)

{
  ulong uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = 0;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    uVar1 = *(ulong *)(param_1 + 0x10) & 0x3f;
  }
  return uVar1;
}



/* Entry: 10417b0f8; end: 10417b17f;  */

void FUN_10417b0f8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long *unaff_x20;
  
  lVar1 = param_2;
  if (param_2 <= param_1) {
    lVar1 = param_1;
  }
  uVar2 = 0;
  __ss15ContiguousArrayVMa(0,*(undefined8 *)(param_3 + 0x10));
  puVar3 = PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8;
  _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8,uVar2);
  plVar4 = unaff_x20 + 1;
  FUN_104170520(plVar4,lVar1,0,param_2,uVar2,puVar3,*(undefined8 *)(param_3 + 0x18));
  _swift_release(*unaff_x20);
  *unaff_x20 = (long)plVar4;
  return;
}



/* Entry: 10417b180; end: 10417b273;  */

void FUN_10417b180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = 0xb0;
  if (param_4 == 0) {
    uVar2 = 0;
    __sSRMa(0,param_7);
    puVar3 = PTR___sSRyxGSlsMc_11034d8e8;
    _swift_getWitnessTable(PTR___sSRyxGSlsMc_11034d8e8,uVar2);
    __sSlsSQ7ElementRpzrlE10firstIndex2of0C0QzSgAB_tF
              (param_1,param_6,uVar2,puVar3,*(undefined8 *)(param_8 + 8));
    param_1[2] = 0;
  }
  else {
    uVar2 = 0;
    __sSRMa(0,param_7);
    _swift_retain(param_4);
    _swift_getWitnessTable(PTR___sSRyxGSksMc_11034d8e0,uVar2);
    lVar4 = param_4 + 0x10;
    FUN_10416e5dc();
    *param_1 = param_6;
    *(undefined1 *)(param_1 + 1) = uVar1;
    param_1[2] = lVar4;
    _swift_release(param_4);
  }
  return;
}



/* Entry: 10417b274; end: 10417b287;  */

void FUN_10417b274(void)

{
  FUN_10417b684();
  return;
}



/* Entry: 10417b288; end: 10417b3d7;  */

void FUN_10417b288(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_a0 [8];
  ulong *puStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar7 = *(long *)(param_7 + -8);
  lVar5 = param_6;
  lVar4 = param_7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  __ss15ContiguousArrayVyxSicig
            (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar5,param_5,lVar4);
  uVar3 = *param_2;
  __sSH13_rawHashValue4seedS2i_tFTj(uVar3,param_7,param_8);
  lVar5 = 1L << (*param_2 & 0x3f);
  if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10417b3d8);
    (*pcVar2)();
  }
  uVar3 = lVar5 - 1U & uVar3;
  uStack_68 = 0;
  puStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = uVar3;
  func_0x00010416d2e4();
  uStack_80 = uVar3;
  puStack_78 = param_2;
  uStack_70 = param_3;
  (**(code **)(lVar7 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7);
  while( true ) {
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10417b3a8);
      (*pcVar2)();
    }
    uVar6 = -1L << (*puStack_98 & 0x3f);
    uVar3 = (uVar6 ^ uVar3 ^ 0xffffffffffffffff) + ((long)puStack_98[1] >> 6);
    uVar1 = 0;
    if (~uVar6 <= uVar3) {
      uVar1 = ~uVar6;
    }
    if (uVar3 - uVar1 == param_6) break;
    FUN_10416d53c();
    uVar3 = uStack_80;
  }
  *param_1 = uStack_88;
  return;
}



/* Entry: 10417b3d8; end: 10417b5e3;  */

void FUN_10417b3d8(ulong *param_1,undefined8 param_2,ulong param_3,long param_4,ulong *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_58;
  
  uStack_68 = 0;
  uVar3 = param_3;
  puVar8 = param_1;
  uVar6 = param_2;
  puStack_98 = param_1;
  lStack_90 = param_2;
  uStack_88 = param_3;
  func_0x00010416d2e4();
  uStack_80 = uVar3;
  puStack_78 = puVar8;
  uStack_70 = uVar6;
  FUN_10416d53c();
  uVar3 = uStack_80;
  if (uStack_80 != 0) {
    uVar4 = param_3;
    FUN_10416e890(param_3,param_1,param_2);
    uVar11 = param_3;
    do {
      puVar8 = puStack_98;
      uVar9 = -1L << (*puStack_98 & 0x3f);
      uVar5 = (uVar9 ^ uVar3 ^ 0xffffffffffffffff) + ((long)puStack_98[1] >> 6);
      uVar1 = 0;
      if (~uVar9 <= uVar5) {
        uVar1 = ~uVar9;
      }
      uVar5 = uVar5 - uVar1;
      FUN_10417b5e4(uVar5,*param_1,param_4,param_6,param_7);
      uVar9 = uStack_88;
      lVar10 = 1L << (*param_1 & 0x3f);
      uVar1 = lVar10 - 1;
      if (SBORROW8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10417b5dc);
        (*pcVar2)();
      }
      uVar5 = uVar1 & uVar5;
      if ((long)uVar11 < (long)uVar4) {
        if ((long)uVar4 <= (long)uVar5 || (long)uVar5 <= (long)uVar11) {
LAB_10417b468:
          uVar11 = -1L << (*puVar8 & 0x3f);
          uVar3 = (uVar11 ^ uVar3 ^ 0xffffffffffffffff) + ((long)puVar8[1] >> 6);
          lVar10 = 0;
          if (~uVar11 <= uVar3) {
            lVar10 = uVar11 + 1;
          }
          lVar10 = (uVar3 - ((long)param_1[1] >> 6)) + lVar10;
          FUN_10416e53c((uVar1 & lVar10 >> 0x3f) + lVar10 ^ uVar1,param_3,param_1,param_2);
          param_3 = uVar9;
          uVar11 = uVar9;
        }
      }
      else if ((long)uVar4 <= (long)uVar5 && (long)uVar5 <= (long)uVar11) goto LAB_10417b468;
      FUN_10416d53c();
      uVar3 = uStack_80;
    } while (uStack_80 != 0);
  }
  FUN_10416e53c(0,param_3,param_1,param_2);
  uStack_58 = *(undefined8 *)(param_4 + 8);
  if (SCARRY8((long)param_5,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10417b5e0);
    (*pcVar2)();
  }
  if ((long)param_5 <= (long)param_5 + 1) {
    uVar6 = 0;
    puStack_98 = param_5;
    lStack_90 = (long)param_5 + 1;
    __ss15ContiguousArrayVMa(0,param_6);
    puVar7 = PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8;
    _swift_getWitnessTable(PTR___ss15ContiguousArrayVyxGSksMc_11034e6c8,uVar6);
    FUN_10416e96c(&puStack_98,&uStack_58,param_1,param_2,uVar6,puVar7,param_7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10417b5e4);
  (*pcVar2)();
}



/* Entry: 10417b5e4; end: 10417b683;  */

undefined8
FUN_10417b5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  __ss15ContiguousArrayVyxSicig
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSH13_rawHashValue4seedS2i_tFTj(param_2,param_4,param_5);
  (**(code **)(lVar1 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  return param_2;
}



/* Entry: 10417b684; end: 10417b6a7;  */

void FUN_10417b684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10417b180(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Entry: 10417b6a8; end: 10417b6bb;  */

void FUN_10417b6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7f2c14);
  return;
}



/* Entry: 10417b6bc; end: 10417b717;  */

void FUN_10417b6bc(undefined8 *param_1)

{
  _swift_release(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 10417b718; end: 10417b773;  */

undefined8 * FUN_10417b718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10417b774; end: 10417b7af;  */

undefined8 * FUN_10417b774(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 10417b7b0; end: 10417b843;  */

int FUN_10417b7b0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10417b844; end: 10417ba07;  */

void FUN_10417b844(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(param_3 + -8);
  lVar4 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)&pcStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSqMa(0,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  __ss7EncoderP16unkeyedContainers015UnkeyedEncodingC0_pyFTj(auStack_88,uVar3,uVar1);
  lVar2 = param_3;
  FUN_10417bc3c();
  uVar3 = 0;
  uStack_a0 = param_2;
  lStack_98 = lVar2;
  lStack_90 = lVar4;
  func_0x000104181120(0,param_3);
  uStack_a8 = uVar3;
  func_0x00010417bc90(lVar7);
  pcStack_b0 = *(code **)(lVar5 + 0x30);
  lVar2 = lVar7;
  (*pcStack_b0)(lVar7,1,param_3);
  if ((int)lVar2 != 1) {
    pcVar8 = *(code **)(lVar5 + 0x20);
    do {
      (*pcVar8)(lVar6,lVar7,param_3);
      uVar1 = uStack_68;
      uVar3 = uStack_70;
      func_0x0001000c6518(auStack_88,uStack_70);
      __ss24UnkeyedEncodingContainerP6encodeyyqd__KSERd__lFTj(lVar6,param_3,param_4,uVar3,uVar1);
      (**(code **)(lVar5 + 8))(lVar6,param_3);
      if (unaff_x21 != 0) break;
      func_0x00010417bc90(lVar7,uStack_a8);
      lVar2 = lVar7;
      (*pcStack_b0)(lVar7,1,param_3);
    } while ((int)lVar2 != 1);
  }
  _swift_release(uStack_a0);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 10417ba08; end: 10417ba2b;  */

void FUN_10417ba08(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_10417b844(param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + -8));
  return;
}



/* Entry: 10417ba2c; end: 10417bc0b;  */

/* WARNING: Removing unreachable block (ram,0x00010417bbf8) */

long FUN_10417ba2c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_2 + -8);
  lVar3 = param_2;
  uStack_90 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_88 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10417bda0();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  __ss7DecoderP16unkeyedContainers015UnkeyedDecodingC0_pyKFTj(auStack_88,uVar1,uVar6);
  uVar6 = uStack_68;
  uVar5 = uStack_70;
  uVar1 = uStack_90;
  if (unaff_x21 == 0) {
    func_0x0001000a8868(auStack_88,uStack_70);
    __ss24UnkeyedDecodingContainerP5countSiSgvgTj(uVar5);
    if (((uint)uVar6 & 0xff) != 1) {
      uVar6 = 0;
      func_0x000104184750(0,param_2);
      FUN_10417bda4(uVar5,uVar6);
    }
    while( true ) {
      uVar6 = uStack_68;
      uVar5 = uStack_70;
      func_0x0001000a8868(auStack_88,uStack_70);
      __ss24UnkeyedDecodingContainerP7isAtEndSbvgTj(uVar5,uVar6);
      uVar6 = uStack_68;
      uVar2 = uStack_70;
      if ((uVar5 & 1) != 0) break;
      func_0x0001000c6518(auStack_88,uStack_70);
      __ss24UnkeyedDecodingContainerP6decodeyqd__qd__mKSeRd__lFTj
                (puVar8,param_2,param_2,uVar1,uVar2,uVar6);
      uVar6 = 0;
      func_0x000104184750(0,param_2);
      FUN_10417be64(puVar8,uVar6);
      (**(code **)(lVar7 + 8))(puVar8,param_2);
    }
    func_0x0001000834e4(auStack_88);
    func_0x0001000834e4(param_1);
  }
  else {
    _swift_release(lVar3);
    func_0x0001000834e4(param_1);
    lVar3 = lVar4;
  }
  return lVar3;
}



/* Entry: 10417bc0c; end: 10417bc3b;  */

void FUN_10417bc0c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  FUN_10417ba2c(param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10417bc3c; end: 10417bd9f;  */

undefined8 FUN_10417bc3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _swift_retain();
  FUN_10417fbbc();
  _swift_release(param_1);
  return uVar1;
}



/* Entry: 10417bda0; end: 10417bda3;  */

void FUN_10417bda0(void)

{
  if (lRam0000000113066078 != -1) {
    _swift_once(0x113066078,FUN_1041849c0);
  }
  _swift_retain(uRam0000000113813170);
                    /* WARNING: Could not recover jumptable at 0x00010bdb9680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss20ManagedBufferPointerV06unsafeB6ObjectAByxq_GyXl_tcfC_11034e950)();
  return;
}



/* Entry: 10417bda4; end: 10417be63;  */

void FUN_10417bda4(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = 0;
  __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar3);
  __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
  FUN_1040f6364(&lStack_48,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,uVar3,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if ((lStack_48 < param_1) || ((uVar1 & 1) == 0)) {
    uVar2 = 0;
    func_0x000104182454(0,uVar3);
    FUN_10418215c(param_1,1,uVar2);
  }
  return;
}



/* Entry: 10417be64; end: 10417bfe7;  */

void FUN_10417be64(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  long alStack_b0 [2];
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined1 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  FUN_1040f6364(alStack_b0,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,uVar5,
                PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90)
  ;
  lVar1 = alStack_b0[0] + 1;
  if (!SCARRY8(alStack_b0[0],1)) {
    uVar3 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar5);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    FUN_1040f6364(alStack_b0,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,uVar5,
                  PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if ((alStack_b0[0] < lVar1) || ((uVar3 & 1) == 0)) {
      uVar4 = 0;
      func_0x000104182454(0,uVar5);
      FUN_10418215c(lVar1,0,uVar4);
    }
    uVar6 = *unaff_x20;
    pcStack_98 = FUN_10417fcd0;
    puStack_90 = auStack_80;
    uVar4 = 0x112d393f0;
    uStack_a0 = uVar5;
    uStack_70 = uVar5;
    uStack_68 = param_1;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(FUN_10417fd00,alStack_b0,uVar6,&UNK_11074b8b8,uVar5,uVar4,PTR___sytN_11034f1b0 + 8
                  ,PTR___ss5ErrorWS_11034ee10,auStack_b8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10417bfe8);
  (*pcVar2)();
}



/* Entry: 10417bfe8; end: 10417c08b;  */

void FUN_10417bfe8(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_4;
  FUN_1041824d8(param_4,param_2,param_3,param_6);
  lVar2 = lVar1;
  if (param_4 != param_2[1]) {
    lVar2 = param_2[2];
    FUN_104183798(lVar2,param_2[1],param_2,param_3,param_6);
    if (lVar2 <= lVar1) {
      lVar2 = *param_2;
    }
  }
  *param_1 = param_5;
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  _swift_retain(param_5);
  return;
}



/* Entry: 10417c08c; end: 10417c13f;  */

undefined1 FUN_10417c08c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 uStack_31;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  pcStack_78 = FUN_10417fde8;
  puStack_70 = auStack_60;
  uStack_80 = uVar3;
  uStack_50 = uVar3;
  _swift_retain(uVar2);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(&uStack_31,FUN_10417fe50,auStack_90,uVar2,&UNK_11074b8b8,uVar3,uVar1,
                PTR___sSbN_11034dd40,PTR___ss5ErrorWS_11034ee10,auStack_98);
  _swift_release(uVar2);
  return uStack_31;
}



/* Entry: 10417c140; end: 10417c143;  */

void FUN_10417c140(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  code *pcStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = unaff_x20[1];
  if (lStack_38 == unaff_x20[2]) {
    uVar1 = param_2;
    FUN_10417c08c();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010417bd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x38))(param_1,1,1);
      return;
    }
    lStack_38 = unaff_x20[1];
  }
  unaff_x20[1] = lStack_38 + 1;
  uVar3 = *unaff_x20;
  lVar4 = *(long *)(param_2 + 0x10);
  puStack_58 = auStack_50;
  pcStack_60 = FUN_10417fc70;
  uVar2 = 0x112d393f0;
  lStack_70 = lVar4;
  lStack_68 = lVar4;
  lStack_40 = lVar4;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(param_1,FUN_10417fcac,auStack_80,uVar3,&UNK_11074b8b8,lVar4,uVar2,lVar4,
                PTR___ss5ErrorWS_11034ee10,auStack_88);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,0,1,lVar4);
  return;
}



/* Entry: 10417c144; end: 10417c1eb;  */

void FUN_10417c144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_28 [8];
  
  uStack_78 = 0x104181378;
  puStack_70 = auStack_60;
  uVar1 = 0x112d393f0;
  uStack_80 = param_4;
  uStack_50 = param_4;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(0x104181394,auStack_90,param_3,&UNK_11074b8b8,param_4,uVar1,PTR___sytN_11034f1b0 + 8
                ,PTR___ss5ErrorWS_11034ee10,auStack_28);
  return;
}



/* Entry: 10417c1ec; end: 10417c3a7;  */

void FUN_10417c1ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char cStack_68;
  long lStack_58;
  
  FUN_1041824f4(&uStack_88,param_1,param_2,param_5);
  lStack_58 = lStack_80;
  uVar2 = 0;
  __sSrMa(0,param_5);
  uVar5 = 0x113065ee8;
  func_0x0001000285a8(0x113065ee8,&UNK_10dcdb358);
  puVar3 = PTR___sSryxGSMsMc_11034e1a0;
  _swift_getWitnessTable(PTR___sSryxGSMsMc_11034e1a0,uVar2);
  puVar4 = puVar3;
  func_0x0001041812a8();
  __sSMsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
            (&uStack_a8,&lStack_58,uVar2,uVar5,puVar3,puVar4);
  uStack_b8 = uStack_88;
  lStack_b0 = lStack_80;
  uVar5 = 0;
  __sSRMa(0,param_5);
  puVar3 = PTR___sSRyxGSlsMc_11034d8e8;
  _swift_getWitnessTable(PTR___sSRyxGSlsMc_11034d8e8,uVar5);
  FUN_10417f834(&uStack_b8,uStack_a8,lStack_a0,uStack_98,uStack_90,param_5,uVar5,puVar3);
  if (SCARRY8(*param_4,lStack_80)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417c39c);
    (*pcVar1)();
  }
  *param_4 = *param_4 + lStack_80;
  if (cStack_68 != '\x01') {
    lVar6 = lStack_80 + lStack_70;
    if (SCARRY8(lStack_80,lStack_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417c3a0);
      (*pcVar1)();
    }
    if (lVar6 < lStack_80) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417c3a4);
      (*pcVar1)();
    }
    uVar2 = *param_3;
    uVar7 = param_3[1];
    __sSrys5SliceVySryxGGSnySiGcig(lStack_80,lVar6,uVar2,uVar7,param_5);
    uStack_a8 = uStack_78;
    lStack_a0 = lStack_70;
    FUN_10417f834(&uStack_a8,lStack_80,lVar6,uVar2,uVar7,param_5,uVar5,puVar3);
    if (SCARRY8(*param_4,lStack_70)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417c3a8);
      (*pcVar1)();
    }
    *param_4 = *param_4 + lStack_70;
  }
  return;
}



/* Entry: 10417c3a8; end: 10417c4e7;  */

void FUN_10417c3a8(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long unaff_x21;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(param_5 + -8);
  uVar1 = param_1;
  uVar2 = param_4;
  uStack_88 = param_6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  __ss15ContiguousArrayV22_allocateUninitializedyAByxG_SpyxGtSiFZ();
  uStack_70 = 0;
  uVar3 = param_1;
  uStack_68 = uVar2;
  uStack_58 = uVar1;
  __sSr5start5countSryxGSpyxGSg_SitcfC(uVar2,param_1,param_4);
  uStack_80 = uVar2;
  uStack_78 = uVar3;
  (*param_2)(&uStack_80,&uStack_70,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 == 0) {
    FUN_10417f7f4(&uStack_70,param_1,&uStack_80,&uStack_68,&uStack_58,param_4,param_5,uStack_88);
  }
  else {
    (**(code **)(lVar4 + 0x20))
              (param_7,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5);
    FUN_10417f7f4(&uStack_70,param_1,&uStack_80,&uStack_68,&uStack_58,param_4,param_5,uStack_88);
    _swift_release(uStack_58);
  }
  return;
}



/* Entry: 10417c4e8; end: 10417c74b;  */

void FUN_10417c4e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  char cStack_70;
  long lStack_58;
  
  FUN_1041824f4(auStack_90,param_2,param_3,param_7);
  lVar7 = param_5;
  if (lStack_88 <= param_5) {
    lVar7 = lStack_88;
  }
  uVar3 = 0;
  uStack_a0 = param_4;
  lStack_98 = param_5;
  lStack_58 = lVar7;
  __sSrMa(0,param_7);
  uVar6 = 0x113065ee8;
  func_0x0001000285a8(0x113065ee8,&UNK_10dcdb358);
  puVar4 = PTR___sSryxGSMsMc_11034e1a0;
  _swift_getWitnessTable(PTR___sSryxGSMsMc_11034e1a0,uVar3);
  puVar5 = puVar4;
  func_0x0001041812a8();
  __sSMsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
            (&uStack_c0,&lStack_58,uVar3,uVar6,puVar4,puVar5);
  uVar6 = 0;
  __sSRMa(0,param_7);
  puVar4 = PTR___sSRyxGSlsMc_11034d8e8;
  _swift_getWitnessTable(PTR___sSRyxGSlsMc_11034d8e8,uVar6);
  __sSlsE6prefixy11SubSequenceQzSiF(&uStack_e0,lVar7,uVar6,puVar4);
  uVar3 = 0;
  __ss5SliceVMa(0,uVar6,puVar4);
  puVar5 = PTR___ss5SliceVyxGSlsMc_11034eee0;
  _swift_getWitnessTable(PTR___ss5SliceVyxGSlsMc_11034eee0,uVar3);
  FUN_10417f834(&uStack_e0,uStack_c0,uStack_b8,uStack_b0,uStack_a8,param_7,uVar3,puVar5);
  lVar9 = lVar7;
  if ((lStack_88 < param_5) && (cStack_70 != '\x01')) {
    if (SBORROW8(param_5,lVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10417c744);
      (*pcVar2)();
    }
    lVar1 = param_5 - lVar7;
    if (lStack_78 <= param_5 - lVar7) {
      lVar1 = lStack_78;
    }
    lVar9 = lVar7 + lVar1;
    if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10417c748);
      (*pcVar2)();
    }
    if (lVar9 < lVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10417c74c);
      (*pcVar2)();
    }
    lVar8 = lVar9;
    __sSrys5SliceVySryxGGSnySiGcig(lVar7,lVar9,param_4,param_5,param_7);
    uStack_e0 = uStack_80;
    lStack_d8 = lStack_78;
    __sSlsE6prefixy11SubSequenceQzSiF(&uStack_c0,lVar1,uVar6,puVar4);
    FUN_10417f834(&uStack_c0,lVar7,lVar8,param_4,param_5,param_7,uVar3,puVar5);
  }
  uVar6 = param_6;
  _swift_retain();
  lVar7 = lVar9;
  FUN_10417fd2c();
  _swift_release(param_6);
  *param_1 = uVar6;
  param_1[1] = lVar7;
  param_1[2] = param_7;
  param_1[3] = lVar9;
  return;
}



/* Entry: 10417c74c; end: 10417c817;  */

void FUN_10417c74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  uVar1 = 0;
  uStack_90 = param_5;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_2;
  uStack_48 = param_3;
  __sSqMa(0,param_6);
  pcStack_80 = FUN_10417fff4;
  puStack_78 = auStack_70;
  uVar2 = 0x112d393f0;
  uStack_88 = uVar1;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(param_1,0x104180010,auStack_a0,param_4,&UNK_11074b8b8,param_5,uVar2,uVar1,
                PTR___ss5ErrorWS_11034ee10,auStack_38);
  return;
}



/* Entry: 10417c818; end: 10417c8bf;  */

void FUN_10417c818(undefined8 param_1,long *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  lVar1 = param_2[1] + param_2[2];
  if (*param_2 < lVar1) {
    uVar3 = 1;
  }
  else {
    if (lVar1 < param_2[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10417c8c0);
      (*pcVar2)();
    }
    FUN_104182598();
    (*param_4)(param_1);
    if (unaff_x21 != 0) {
      return;
    }
    uVar3 = 0;
  }
  (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,uVar3,1,param_7);
  return;
}



/* Entry: 10417c8c0; end: 10417c917;  */

void FUN_10417c8c0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = uVar3;
  FUN_10417bc3c();
  _swift_release(uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_4;
  return;
}



/* Entry: 10417c918; end: 10417c94b;  */

void FUN_10417c918(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcdb118;
  _swift_getWitnessTable(&UNK_10dcdb118,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb833c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE19underestimatedCountSivg_11034dff0)(param_1,puVar1);
  return;
}



/* Entry: 10417c94c; end: 10417c953;  */

undefined8 FUN_10417c94c(void)

{
  return 2;
}



/* Entry: 10417c954; end: 10417c98b;  */

undefined8 FUN_10417c954(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_10417fe78(uVar2,*(undefined8 *)(param_1 + 0x10));
  _swift_release(uVar2);
  return uVar1;
}



/* Entry: 10417c98c; end: 10417c9f3;  */

undefined8 FUN_10417c98c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  uVar1 = uVar3;
  FUN_10417ff1c();
  _swift_release(uVar3);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return uVar2;
}



/* Entry: 10417c9f4; end: 10417ca13;  */

void FUN_10417c9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *unaff_x20;
  
  FUN_10417c74c(param_1,param_2,*unaff_x20,*(undefined8 *)(param_4 + 0x10),param_3);
  return;
}



/* Entry: 10417ca14; end: 10417ccff;  */

void FUN_10417ca14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [8];
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417cb10);
    (*pcVar1)();
  }
  FUN_1040f6364(alStack_a0,FUN_1040f6358,0,param_3,&UNK_11074b8b8,param_4,PTR___ss5NeverON_11034ee88
                ,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if (param_2 < alStack_a0[0]) {
    puStack_78 = auStack_70;
    pcStack_80 = FUN_104180084;
    uVar2 = 0x112d393f0;
    uStack_90 = param_4;
    uStack_88 = param_4;
    uStack_60 = param_4;
    lStack_58 = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(param_1,FUN_10418148c,alStack_a0,param_3,&UNK_11074b8b8,param_4,uVar2,param_4,
                  PTR___ss5ErrorWS_11034ee10,auStack_a8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417cb14);
  (*pcVar1)();
}



/* Entry: 10417cd00; end: 10417cd8b;  */

void FUN_10417cd00(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  
  FUN_1041824d8(param_4,param_2,param_3);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,&UNK_11074b8f8,param_5,0,0);
  iVar1 = *(int *)(lVar2 + 0x30);
  *param_1 = param_4;
  __sSp4movexyF((long)param_1 + (long)iVar1,
                param_3 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_4,param_5);
  return;
}



/* Entry: 10417cd8c; end: 10417ce2f;  */

void FUN_10417cd8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = 0x104180254;
  puStack_70 = auStack_60;
  uVar1 = 0x112d393f0;
  uStack_80 = uVar3;
  uStack_50 = uVar3;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(0x1041814a0,auStack_90,uVar2,&UNK_11074b8b8,uVar3,uVar1,PTR___sytN_11034f1b0 + 8,
                PTR___ss5ErrorWS_11034ee10,auStack_98);
  return;
}



/* Entry: 10417ce30; end: 10417ceb7;  */

void FUN_10417ce30(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x12;
  
  lVar1 = param_5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_5 + -8) + 0x40));
  lVar2 = *(long *)(extraout_x12 + 0x48);
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,lVar1);
  func_0x0001041825b8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      param_2 + lVar2 * param_3,param_5);
  return;
}



/* Entry: 10417ceb8; end: 10417cf9b;  */

long FUN_10417ceb8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long alStack_60 [4];
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417cf98);
    (*pcVar1)();
  }
  FUN_1040f6364(alStack_60,FUN_1040f6358,0,param_3,&UNK_11074b8b8,param_4,PTR___ss5NeverON_11034ee88
                ,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if (param_2 <= alStack_60[0]) {
    uVar2 = 0;
    lStack_78 = param_1;
    lStack_70 = param_2;
    uStack_68 = param_3;
    func_0x000104184750(0,param_4);
    _swift_retain(param_3);
    puVar3 = &UNK_10dcdb118;
    _swift_getWitnessTable(&UNK_10dcdb118,uVar2);
    __ss5SliceV4base6boundsAByxGx_Sny5IndexQzGtcfC(alStack_60,&uStack_68,&lStack_78,uVar2,puVar3);
    return alStack_60[0];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417cf9c);
  (*pcVar1)();
}



/* Entry: 10417cf9c; end: 10417cfd3;  */

void FUN_10417cf9c(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,1)) {
    *param_1 = *param_2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417cfb4);
  (*pcVar1)();
}



/* Entry: 10417cfd4; end: 10417d02f;  */

void FUN_10417cfd4(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1040f6364(FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,*(undefined8 *)(param_1 + 0x10),
                PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90)
  ;
  return;
}



/* Entry: 10417d030; end: 10417d0a7;  */

code * FUN_10417d030(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0x8dd6);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_10417d0d4();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_10417d0a8;
}



/* Entry: 10417d0a8; end: 10417d0d3;  */

void FUN_10417d0a8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 10417d0d4; end: 10417d15b;  */

undefined1  [16] FUN_10417d0d4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_4 + -8);
  *param_1 = param_4;
  param_1[1] = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar1,0xc81d);
  }
  param_1[2] = lVar1;
  FUN_10417ca14(lVar1,param_2,param_3,param_4);
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = FUN_10417d15c;
  return auVar2;
}



/* Entry: 10417d15c; end: 10417d1c7;  */

void FUN_10417d15c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  (**(code **)(param_1[1] + 8))(uVar1,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar1);
  return;
}



/* Entry: 10417d1c8; end: 10417d243;  */

void FUN_10417d1c8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 *unaff_x20;
  long lStack_38;
  
  FUN_1040f6364(&lStack_38,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,*(undefined8 *)(param_2 + 0x10)
                ,PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90
               );
  if (-1 < lStack_38) {
    *param_1 = 0;
    param_1[1] = lStack_38;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d244);
  (*pcVar1)();
}



/* Entry: 10417d244; end: 10417d247;  */

void FUN_10417d244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSlsE7isEmptySbvg_11034e020)();
  return;
}



/* Entry: 10417d248; end: 10417d2ab;  */

undefined8 FUN_10417d248(long param_1)

{
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  FUN_1040f6364(&uStack_28,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,*(undefined8 *)(param_1 + 0x10)
                ,PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90
               );
  return uStack_28;
}



/* Entry: 10417d2ac; end: 10417d2f3;  */

void FUN_10417d2ac(void)

{
  FUN_1041807ac();
  return;
}



/* Entry: 10417d2f4; end: 10417d327;  */

void FUN_10417d2f4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR___sSlTL_11034dfe8;
  uVar3 = 0;
  func_0x000107c614b8(0,param_4,param_3,PTR___sSlTL_11034dfe8,PTR___s5IndexSlTl_11034d620);
  func_0x000107c614b4(param_4,param_3,uVar3,puVar1,PTR___sSl5IndexSl_SLTn_11034dfa0);
  uVar4 = param_2;
  func_0x000107c5fa90(param_2,param_1,uVar3,param_4);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f0);
    (*pcVar2)();
  }
  lVar5 = 0;
  func_0x000107c5ff1c(0,uVar3,param_4);
  uVar4 = param_1 + *(int *)(lVar5 + 0x24);
  func_0x000107c5fa90(uVar4,param_2 + (long)*(int *)(lVar5 + 0x24),uVar3,param_4);
  if ((uVar4 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010943f4);
  (*pcVar2)();
}



/* Entry: 10417d328; end: 10417d4af;  */

void FUN_10417d328(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  code *pcStack_88;
  long *plStack_80;
  long alStack_70 [2];
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d4a8);
    (*pcVar1)();
  }
  uVar5 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_70,FUN_1040f6358,0,uVar5,&UNK_11074b8b8,uVar3,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if ((-1 < param_2) && (param_1 < alStack_70[0])) {
    FUN_1040f6364(alStack_70,FUN_1040f6358,0,uVar5,&UNK_11074b8b8,uVar3,PTR___ss5NeverON_11034ee88,
                  PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if (param_2 < alStack_70[0]) {
      uVar2 = 0;
      __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar3);
      __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
      if ((uVar2 & 1) == 0) {
        func_0x000104182454(0,uVar3);
        FUN_104181fc8();
      }
      uVar4 = *unaff_x20;
      pcStack_88 = FUN_104180774;
      plStack_80 = alStack_70;
      uVar5 = 0x112d393f0;
      uStack_90 = uVar3;
      uStack_60 = uVar3;
      lStack_58 = param_1;
      lStack_50 = param_2;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      FUN_1040fee4c(0x1041814b4,auStack_a0,uVar4,&UNK_11074b8b8,uVar3,uVar5,PTR___sytN_11034f1b0 + 8
                    ,PTR___ss5ErrorWS_11034ee10,auStack_a8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d4b0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d4ac);
  (*pcVar1)();
}



/* Entry: 10417d4b0; end: 10417d547;  */

void FUN_10417d4b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_1041824d8(param_3,param_1,param_2,param_5);
  FUN_1041824d8(param_4,param_1,param_2,param_5);
  uVar1 = *param_1;
  __sSr5start5countSryxGSpyxGSg_SitcfC(param_2,uVar1,param_5);
  __sSr6swapAtyySi_SitF(param_3,param_4,param_2,uVar1,param_5);
  return;
}



/* Entry: 10417d548; end: 10417d653;  */

void FUN_10417d548(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [8];
  
  uVar5 = *(undefined8 *)(param_4 + 0x10);
  uVar1 = 0;
  __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar5);
  __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
  if ((uVar1 & 1) == 0) {
    func_0x000104182454(0,uVar5);
    FUN_104181fc8();
  }
  uVar4 = *unaff_x20;
  uVar2 = 0;
  uStack_a0 = uVar5;
  uStack_70 = uVar5;
  uStack_68 = param_5;
  uStack_60 = param_2;
  uStack_58 = param_3;
  __sSqMa(0,param_5);
  uStack_90 = 0x104180790;
  puStack_88 = auStack_80;
  uVar3 = 0x112d393f0;
  uStack_98 = uVar2;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  FUN_1040fee4c(param_1,FUN_104181440,auStack_b0,uVar4,&UNK_11074b8b8,uVar5,uVar3,uVar2,
                PTR___ss5ErrorWS_11034ee10,auStack_48);
  return;
}



/* Entry: 10417d654; end: 10417d79b;  */

void FUN_10417d654(undefined8 param_1,long *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2[2];
  lVar3 = param_2[1] + lVar2;
  if (*param_2 < lVar3) {
    (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,1,1,param_7);
  }
  else {
    if (lVar3 < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d790);
      (*pcVar1)();
    }
    FUN_104182598();
    __sSr8mutatingSryxGSRyxG_tcfC();
    lStack_60 = lVar2;
    lStack_58 = lVar3;
    (*param_4)(param_1,&lStack_60);
    if (unaff_x21 == 0) {
      (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,0,1,param_7);
      if (lStack_60 == 0) {
        if (lVar2 != 0) goto LAB_10417d798;
      }
      else {
        if (lVar2 == 0) {
LAB_10417d798:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d79c);
          (*pcVar1)();
        }
        if (lStack_60 != lVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d748);
          (*pcVar1)();
        }
      }
      if (lStack_58 != lVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d794);
        (*pcVar1)();
      }
    }
    else {
      if (lStack_60 == 0) {
        if (lVar2 != 0) goto LAB_10417d794;
      }
      else {
        if (lVar2 == 0) {
LAB_10417d794:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d798);
          (*pcVar1)();
        }
        if (lStack_60 != lVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d710);
          (*pcVar1)();
        }
      }
      if (lStack_58 != lVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d75c);
        (*pcVar1)();
      }
    }
  }
  return;
}



/* Entry: 10417d79c; end: 10417d7af;  */

void FUN_10417d79c(void)

{
  FUN_10417d548();
  return;
}



/* Entry: 10417d7b0; end: 10417d7bb;  */

void FUN_10417d7b0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  FUN_1041800e4(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x00010417f6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Entry: 10417d7bc; end: 10417d8d7;  */

undefined1  [16] FUN_10417d7bc(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_11034f288;
  plVar3 = (long *)0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x30,0x6152);
  }
  *param_1 = (long)plVar3;
  plVar3[2] = (long)unaff_x20;
  lVar5 = *(long *)(param_3 + 0x10);
  plVar3[3] = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  plVar3[4] = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(lVar4,0x6152);
  }
  plVar3[5] = lVar4;
  lVar6 = *param_2;
  if (-1 < lVar6) {
    FUN_1040f6364(plVar3,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,lVar5,PTR___ss5NeverON_11034ee88,
                  PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if (lVar6 < *plVar3) {
      lVar5 = lVar4;
      func_0x00010417cb14(lVar4,lVar6,param_3);
      plVar3[1] = lVar5;
      auVar7._8_8_ = lVar4;
      auVar7._0_8_ = FUN_10417d8d8;
      return auVar7;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10417d8d8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10417d8d4);
  (*pcVar2)();
}



/* Entry: 10417d8d8; end: 10417d92f;  */

void FUN_10417d8d8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(lVar4 + 0x20);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  func_0x00010417cc5c(*(undefined8 *)(lVar4 + 0x10),lVar4 + 8,uVar2,uVar3);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _free(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar4);
  return;
}



/* Entry: 10417d930; end: 10417d96b;  */

void FUN_10417d930(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1[2];
  FUN_104180674(*param_1,param_1[1],uVar1,*param_2,param_2[1],param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10417d96c; end: 10417d9f3;  */

undefined1  [16] FUN_10417d96c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auVar5 [16];
  
  puVar1 = (undefined8 *)0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x38a1);
  }
  *param_1 = (long)puVar1;
  puVar1[3] = unaff_x20;
  puVar1[4] = param_3;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  puVar1[5] = uVar2;
  puVar1[6] = uVar3;
  uVar4 = *unaff_x20;
  FUN_10417ceb8();
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = FUN_10417d9f4;
  return auVar5;
}



/* Entry: 10417d9f4; end: 10417da97;  */

void FUN_10417d9f4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[5];
  uVar4 = param_1[6];
  uVar5 = param_1[4];
  uVar6 = param_1[2];
  if ((param_2 & 1) == 0) {
    FUN_104180674(uVar1,uVar3,uVar6,uVar2,uVar4,uVar5);
  }
  else {
    _swift_retain(uVar6);
    FUN_104180674(uVar1,uVar3,uVar6,uVar2,uVar4,uVar5);
    _swift_release(uVar6);
    uVar6 = param_1[2];
  }
  _swift_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 10417da98; end: 10417db07;  */

void FUN_10417da98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dcdb0b8;
  _swift_getWitnessTable(&UNK_10dcdb0b8,param_4);
  __sSMsSKRzrlE9partition2by5IndexSlQzSb7ElementSTQzKXE_tKF
            (param_1,param_2,param_3,param_4,puVar1,param_5);
  return;
}



/* Entry: 10417db08; end: 10417db13;  */

void FUN_10417db08(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  code *pcStack_88;
  long *plStack_80;
  long alStack_70 [2];
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if (lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d4a8);
    (*pcVar1)();
  }
  uVar7 = *unaff_x20;
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_70,FUN_1040f6358,0,uVar7,&UNK_11074b8b8,uVar5,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if ((-1 < lVar4) && (lVar3 < alStack_70[0])) {
    FUN_1040f6364(alStack_70,FUN_1040f6358,0,uVar7,&UNK_11074b8b8,uVar5,PTR___ss5NeverON_11034ee88,
                  PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if (lVar4 < alStack_70[0]) {
      uVar2 = 0;
      __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar5);
      __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
      if ((uVar2 & 1) == 0) {
        func_0x000104182454(0,uVar5);
        FUN_104181fc8();
      }
      uVar6 = *unaff_x20;
      pcStack_88 = FUN_104180774;
      plStack_80 = alStack_70;
      uVar7 = 0x112d393f0;
      uStack_90 = uVar5;
      uStack_60 = uVar5;
      lStack_58 = lVar3;
      lStack_50 = lVar4;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      FUN_1040fee4c(0x1041814b4,auStack_a0,uVar6,&UNK_11074b8b8,uVar5,uVar7,PTR___sytN_11034f1b0 + 8
                    ,PTR___ss5ErrorWS_11034ee10,auStack_a8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d4b0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417d4ac);
  (*pcVar1)();
}



/* Entry: 10417db14; end: 10417db53;  */

void FUN_10417db14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10417d79c(param_1,param_2,param_4,param_3);
  return;
}



/* Entry: 10417db54; end: 10417df17;  */

void FUN_10417db54(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,long param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x13;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long lStack_110;
  long lStack_108;
  code *pcStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  
  puVar7 = PTR___sSlTL_11034dfe8;
  lVar2 = 0xff;
  lStack_110 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,in_stack_00000020,in_stack_00000018,PTR___sSlTL_11034dfe8,
             PTR___s5IndexSlTl_11034d620);
  lVar3 = in_stack_00000020;
  _swift_getAssociatedConformanceWitness
            (in_stack_00000020,in_stack_00000018,lVar2,puVar7,PTR___sSl5IndexSl_SLTn_11034dfa0);
  lVar4 = 0;
  __ss16PartialRangeFromVMa(0,lVar2,lVar3);
  lStack_d8 = *(long *)(lVar4 + -8);
  lStack_d0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar4 = 0;
  lStack_e0 = (long)&lStack_110 - extraout_x8;
  _swift_getAssociatedTypeWitness
            (0,in_stack_00000020,in_stack_00000018,puVar7,PTR___s11SubSequenceSlTl_11034d5d8);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = ((long)&lStack_110 - extraout_x8) - extraout_x8_00;
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar11 - extraout_x8_01;
  lVar5 = 0;
  __ss16PartialRangeUpToVMa(0,lVar2,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar9 - extraout_x8_02;
  if (extraout_x12 < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417df0c);
    (*pcVar1)();
  }
  uStack_e8 = *(undefined8 *)(lVar3 + 8);
  uVar6 = param_7;
  lStack_c0 = extraout_x13;
  __sSQ2eeoiySbx_xtFZTj(param_7,param_7,lVar2);
  if ((uVar6 & 1) != 0) {
    pcStack_100 = *(code **)(lVar10 + 0x10);
    uStack_f0 = param_7;
    lStack_c8 = lVar12;
    (*pcStack_100)(lVar9,param_7,lVar2);
    lStack_f8 = lVar3;
    __ss16PartialRangeUpToVyAByxGxcfC(lVar13,lVar9,lVar2,lVar3);
    puVar7 = PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790;
    _swift_getWitnessTable(PTR___ss16PartialRangeUpToVyxGSXsMc_11034e790,lVar5);
    __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
              (lVar11,lVar13,in_stack_00000018,lVar5,in_stack_00000020,puVar7);
    lVar3 = in_stack_00000020;
    _swift_getAssociatedConformanceWitness
              (in_stack_00000020,in_stack_00000018,lVar4,PTR___sSlTL_11034dfe8,
               PTR___sSl11SubSequenceSl_SlTn_11034df90);
    lStack_108 = lVar3;
    FUN_1041825d0(param_3,extraout_x12,lVar11,param_1,param_2,in_stack_00000010,lVar4);
    (**(code **)(lStack_c8 + 8))(lVar11,lVar4);
    (**(code **)(lStack_c0 + 8))(lVar13,lVar5);
    uVar6 = uStack_f0;
    if (param_8 < 0) {
      if (lStack_110 < extraout_x12) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10417df18);
        (*pcVar1)();
      }
      FUN_104182708(extraout_x12,lStack_110,param_1,param_2,in_stack_00000010);
    }
    else if (param_8 != 0) {
      uVar8 = uStack_f0;
      __sSQ2eeoiySbx_xtFZTj(uStack_f0,uStack_f0,lVar2,uStack_e8);
      if ((uVar8 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10417df14);
        (*pcVar1)();
      }
      (*pcStack_100)(lVar9,uVar6,lVar2);
      lVar3 = lStack_e0;
      __ss16PartialRangeFromVyAByxGxcfC(lStack_e0,lVar9,lVar2,lStack_f8);
      lVar2 = lStack_d0;
      puVar7 = PTR___ss16PartialRangeFromVyxGSXsMc_11034e770;
      _swift_getWitnessTable(PTR___ss16PartialRangeFromVyxGSXsMc_11034e770,lStack_d0);
      __sSlsEy11SubSequenceQzqd__cSXRd__5BoundQyd__5IndexRtzluig
                (lVar11,lVar3,in_stack_00000018,lVar2,in_stack_00000020,puVar7);
      FUN_104182840(lVar11,param_8,extraout_x12,param_1,param_2,in_stack_00000010,lVar4,lStack_108);
      (**(code **)(lStack_d8 + 8))(lVar3,lVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417df10);
  (*pcVar1)();
}



/* Entry: 10417df18; end: 10417e4a3;  */

void FUN_10417df18(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  code *pcVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 auStack_170 [2];
  undefined1 auStack_160 [8];
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long alStack_e0 [2];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_a8 [8];
  char acStack_a0 [16];
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  
  lVar16 = *(long *)(param_2 + 0x10);
  lVar5 = 0;
  __sSqMa(0,lVar16);
  lStack_150 = *(long *)(lVar5 + -8);
  lStack_148 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_160 + -extraout_x8;
  lVar12 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar18 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  lStack_158 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar18 - extraout_x8_01;
  lStack_d0 = lVar16;
  lStack_c8 = param_3;
  uStack_c0 = param_4;
  __sST32withContiguousStorageIfAvailableyqd__Sgqd__SRy7ElementQzGKXEKlFTj
            (acStack_a0,FUN_1041809c0,alStack_e0,PTR___sytN_11034f1b0 + 8,param_3,param_4);
  if (acStack_a0[0] == '\x01') {
    lVar6 = param_3;
    __sST19underestimatedCountSivgTj(param_3,param_4);
    FUN_1040f6364(alStack_e0,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,lVar16,
                  PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar1 = alStack_e0[0] + lVar6;
    if (SCARRY8(alStack_e0[0],lVar6)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10417e4a4);
      (*pcVar14)();
    }
    uVar7 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,lVar16);
    uVar8 = uVar7;
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    FUN_1040f6364(alStack_e0,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,lVar16,
                  PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if ((alStack_e0[0] < lVar1) || ((uVar8 & 1) == 0)) {
      uVar9 = 0;
      func_0x000104182454(0,lVar16);
      FUN_10418215c(lVar1,0,uVar9);
    }
    uVar15 = *unaff_x20;
    plStack_78 = alStack_e0;
    plStack_80 = (long *)0x1041809ec;
    uVar9 = 0x112d393f0;
    lStack_d0 = lVar16;
    lStack_c8 = param_3;
    uStack_c0 = param_4;
    lStack_90 = lVar16;
    lStack_88 = lVar5;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    *(undefined1 **)(lVar13 + -0x10) = auStack_a8;
    FUN_1040fee4c(lVar13,0x104181454,acStack_a0,uVar15,&UNK_11074b8b8,lVar16,uVar9,lVar5,
                  PTR___ss5ErrorWS_11034ee10);
    uVar10 = param_4;
    _swift_getAssociatedConformanceWitness
              (param_4,param_3,lVar5,PTR___sSTTL_11034db40,PTR___sST8IteratorST_StTn_11034db38);
    __sSt4next7ElementQzSgyFTj(puVar17,lVar5);
    pcVar14 = *(code **)(lVar12 + 0x30);
    puVar11 = puVar17;
    (*pcVar14)(puVar17,1,lVar16);
    puVar2 = PTR___sSiN_11034deb0;
    if ((int)puVar11 != 1) {
      pcStack_138 = *(code **)(lVar12 + 0x20);
      puStack_140 = puVar17;
      do {
        puVar4 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
        puVar3 = PTR___ss5NeverON_11034ee88;
        (*pcStack_138)(lVar18,puVar17,lVar16);
        FUN_1040f6364(alStack_e0,FUN_1040f6358,0,uVar15,&UNK_11074b8b8,lVar16,puVar3,puVar2,puVar4);
        lVar1 = alStack_e0[0] + 1;
        if (SCARRY8(alStack_e0[0],1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10417e4a0);
          (*pcVar14)();
        }
        uVar8 = uVar7;
        __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
        FUN_1040f6364(alStack_e0,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,lVar16,puVar3,puVar2,puVar4
                     );
        if ((alStack_e0[0] < lVar1) || ((uVar8 & 1) == 0)) {
          uVar15 = 0;
          func_0x000104182454(0,lVar16);
          FUN_10418215c(lVar1,0,uVar15);
        }
        uVar15 = *unaff_x20;
        lStack_88 = 0x104180a08;
        plStack_80 = alStack_e0;
        lStack_d0 = lVar16;
        lStack_c8 = param_3;
        uStack_c0 = param_4;
        lStack_90 = lVar16;
        *(undefined1 **)(lVar13 + -0x10) = auStack_a8;
        FUN_1040fee4c(0x1041814c8,acStack_a0,uVar15,&UNK_11074b8b8,lVar16,uVar9,
                      PTR___sytN_11034f1b0 + 8,PTR___ss5ErrorWS_11034ee10);
        (**(code **)(lVar12 + 8))(lVar18,lVar16);
        puVar17 = puStack_140;
        __sSt4next7ElementQzSgyFTj(puStack_140,lVar5,uVar10);
        puVar11 = puVar17;
        (*pcVar14)(puVar17,1,lVar16);
      } while ((int)puVar11 != 1);
    }
    (**(code **)(lStack_150 + 8))(puVar17,lStack_148);
    (**(code **)(lStack_158 + 8))(lVar13,lVar5);
  }
  return;
}



/* Entry: 10417e4a4; end: 10417e58b;  */

void FUN_10417e4a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  FUN_104182b54(auStack_88);
  (**(code **)(lVar3 + 0x10))
            (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_6);
  uVar2 = 0;
  func_0x000104185930(0,param_5);
  FUN_104184d54(param_1,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2,param_6,
                param_7);
  if (!SCARRY8(*(long *)(param_2 + 8),param_1)) {
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417e58c);
  (*pcVar1)();
}



/* Entry: 10417e58c; end: 10417e68b;  */

void FUN_10417e58c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  
  func_0x000104182938(param_3,param_1,param_2,param_5);
  FUN_104182b54(auStack_78,param_1,param_2,param_5);
  uVar3 = 0;
  func_0x000104185930(0,param_5);
  puVar1 = PTR___sSTTL_11034db40;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,PTR___sSTTL_11034db40,PTR___s8IteratorSTTl_11034d648);
  _swift_getAssociatedConformanceWitness
            (param_7,param_6,uVar4,puVar1,PTR___sST8IteratorST_StTn_11034db38);
  func_0x0001041850f0(param_4,uVar3,uVar4,param_7);
  if (!SCARRY8(*(long *)(param_1 + 8),param_4)) {
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10417e68c);
  (*pcVar2)();
}



/* Entry: 10417e68c; end: 10417e86f;  */

void FUN_10417e68c(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_58 [8];
  
  uVar4 = *param_3;
  _swift_retain(uVar4);
  FUN_1040f6364(alStack_a0,FUN_1040f6358,0,uVar4,&UNK_11074b8b8,param_4,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  _swift_release(uVar4);
  lVar1 = alStack_a0[0] + param_2;
  if (!SCARRY8(alStack_a0[0],param_2)) {
    uVar3 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,param_4);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    FUN_1040f6364(alStack_a0,0x104181fbc,0,*param_3,&UNK_11074b8b8,param_4,
                  PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                  PTR___ss5NeverOs5ErrorsWP_11034ee90);
    if ((alStack_a0[0] < lVar1) || ((uVar3 & 1) == 0)) {
      uVar4 = 0;
      func_0x000104182454(0,param_4);
      FUN_10418215c(lVar1,0,uVar4);
    }
    uVar5 = *param_3;
    plStack_b0 = alStack_a0;
    uStack_c0 = param_4;
    uStack_b8 = param_7;
    uStack_90 = param_4;
    uStack_88 = param_5;
    uStack_80 = param_6;
    uStack_78 = param_1;
    lStack_70 = param_2;
    _swift_retain(uVar5);
    uVar4 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(param_8,auStack_d0,uVar5,&UNK_11074b8b8,param_4,uVar4,PTR___sytN_11034f1b0 + 8,
                  PTR___ss5ErrorWS_11034ee10,auStack_58);
    _swift_release(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10417e870);
  (*pcVar2)();
}



/* Entry: 10417e870; end: 10417ea63;  */

void FUN_10417e870(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long alStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ea5c);
    (*pcVar2)();
  }
  uVar5 = *unaff_x20;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_90,FUN_1040f6358,0,uVar5,&UNK_11074b8b8,uVar4,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if (param_2 <= alStack_90[0]) {
    FUN_1040f6364(alStack_90,FUN_1040f6358,0,uVar5,&UNK_11074b8b8,uVar4,PTR___ss5NeverON_11034ee88,
                  PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    lVar1 = alStack_90[0] + 1;
    if (!SCARRY8(alStack_90[0],1)) {
      uVar3 = 0;
      __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar4);
      __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
      FUN_1040f6364(alStack_90,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,uVar4,
                    PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,
                    PTR___ss5NeverOs5ErrorsWP_11034ee90);
      if ((alStack_90[0] < lVar1) || ((uVar3 & 1) == 0)) {
        uVar5 = 0;
        func_0x000104182454(0,uVar4);
        FUN_10418215c(lVar1,0,uVar5);
      }
      uVar6 = *unaff_x20;
      uStack_a8 = 0x104180a28;
      plStack_a0 = alStack_90;
      uStack_b0 = uVar4;
      uStack_80 = uVar4;
      lStack_78 = param_2;
      uStack_70 = param_1;
      _swift_retain(uVar6);
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      FUN_1040fee4c(0x1041814dc,auStack_c0,uVar6,&UNK_11074b8b8,uVar4,uVar5,PTR___sytN_11034f1b0 + 8
                    ,PTR___ss5ErrorWS_11034ee10,auStack_c8);
      _swift_release(uVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ea64);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10417ea60);
  (*pcVar2)();
}



/* Entry: 10417ea64; end: 10417ebd7;  */

void FUN_10417ea64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  long alStack_88 [5];
  
  lVar4 = *(long *)(param_6 + -8);
  lVar2 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  if (lVar2 == 0) {
    func_0x000104182c8c(param_4,param_1,param_2,param_6);
  }
  else {
    uVar3 = *param_5;
    _swift_retain(uVar3);
    FUN_1040f6364(alStack_88,FUN_1040f6358,0,uVar3,&UNK_11074b8b8,param_6,PTR___ss5NeverON_11034ee88
                  ,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
    _swift_release(uVar3);
    if (param_3 == alStack_88[0]) {
      func_0x000104182938(param_4,param_1,param_2,param_6);
    }
    else {
      FUN_104182d58(alStack_88,1,param_3,param_1,param_2,param_6);
      if (alStack_88[0] == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ebd8);
        (*pcVar1)();
      }
      (**(code **)(lVar4 + 0x10))
                (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_6);
      func_0x0001041825b8(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),alStack_88[0],
                          param_6);
    }
  }
  return;
}



/* Entry: 10417ebd8; end: 10417ec9b;  */

void FUN_10417ebd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = param_7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_7 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3,lVar1);
  FUN_104182840(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,
                param_5,param_1,param_2,param_6,param_7,param_8);
  return;
}



/* Entry: 10417ec9c; end: 10417eddb;  */

void FUN_10417ec9c(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417edd8);
    (*pcVar1)();
  }
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_a0,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,uVar4,
                PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90)
  ;
  if (param_2 < alStack_a0[0]) {
    uVar2 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar4);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    if ((uVar2 & 1) == 0) {
      func_0x000104182454(0,uVar4);
      FUN_104181fc8();
    }
    uVar5 = *unaff_x20;
    puStack_78 = auStack_70;
    pcStack_80 = FUN_104180c60;
    uStack_90 = uVar4;
    uStack_88 = uVar4;
    uStack_60 = uVar4;
    _swift_retain(uVar5);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(param_1,0x104180c7c,alStack_a0,uVar5,&UNK_11074b8b8,uVar4,uVar3,uVar4,
                  PTR___ss5ErrorWS_11034ee10,auStack_a8);
    _swift_release(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417eddc);
  (*pcVar1)();
}



/* Entry: 10417eddc; end: 10417ee57;  */

void FUN_10417eddc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  
  FUN_10417ca14(param_4,*param_3,param_5);
  if (SCARRY8(param_4,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ee54);
    (*pcVar1)();
  }
  if (param_4 <= param_4 + 1) {
    FUN_104182708(param_4,param_4 + 1,param_1,param_2,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ee58);
  (*pcVar1)();
}



/* Entry: 10417ee58; end: 10417ef8f;  */

void FUN_10417ee58(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  code *pcStack_88;
  long *plStack_80;
  long alStack_70 [2];
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ef8c);
    (*pcVar1)();
  }
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_70,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,uVar4,
                PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90)
  ;
  if (param_2 <= alStack_70[0]) {
    uVar2 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar4);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    if ((uVar2 & 1) == 0) {
      func_0x000104182454(0,uVar4);
      FUN_104181fc8();
    }
    uVar5 = *unaff_x20;
    pcStack_88 = FUN_104180ca0;
    plStack_80 = alStack_70;
    uVar3 = 0x112d393f0;
    uStack_90 = uVar4;
    uStack_60 = uVar4;
    lStack_58 = param_1;
    lStack_50 = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(0x1041814f0,auStack_a0,uVar5,&UNK_11074b8b8,uVar4,uVar3,PTR___sytN_11034f1b0 + 8,
                  PTR___ss5ErrorWS_11034ee10,auStack_a8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417ef90);
  (*pcVar1)();
}



/* Entry: 10417ef90; end: 10417f4fb;  */

void FUN_10417ef90(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined8 auStack_80 [2];
  long lStack_70;
  long lStack_68;
  code *pcStack_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  auStack_80[0] = *unaff_x20;
  puVar2 = &UNK_10dcdb118;
  _swift_getWitnessTable(&UNK_10dcdb118,param_2);
  uVar3 = param_2;
  __sSlsE7isEmptySbvg(param_2,puVar2);
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    uVar3 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,lVar6);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    if ((uVar3 & 1) == 0) {
      func_0x000104182454(0,lVar6);
      FUN_104181fc8();
    }
    uVar5 = *unaff_x20;
    puStack_58 = auStack_50;
    pcStack_60 = FUN_104180cd4;
    uVar4 = 0x112d393f0;
    lStack_70 = lVar6;
    lStack_68 = lVar6;
    lStack_40 = lVar6;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(param_1,0x104181504,auStack_80,uVar5,&UNK_11074b8b8,lVar6,uVar4,lVar6,
                  PTR___ss5ErrorWS_11034ee10,auStack_88);
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,0,1,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417f0b8);
  (*pcVar1)();
}



/* Entry: 10417f4fc; end: 10417f523;  */

void FUN_10417f4fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_10417bda0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10417f524; end: 10417f577;  */

void FUN_10417f524(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_104180270(*param_1,param_1[1],param_2,param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010417f574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Entry: 10417f578; end: 10417f57b;  */

void FUN_10417f578(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lStack_48;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = 0;
  __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar3);
  __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
  FUN_1040f6364(&lStack_48,0x104181fbc,0,*unaff_x20,&UNK_11074b8b8,uVar3,PTR___ss5NeverON_11034ee88,
                PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  if ((lStack_48 < param_1) || ((uVar1 & 1) == 0)) {
    uVar2 = 0;
    func_0x000104182454(0,uVar3);
    FUN_10418215c(param_1,1,uVar2);
  }
  return;
}



/* Entry: 10417f57c; end: 10417f6af;  */

void FUN_10417f57c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x10);
  uVar1 = param_2;
  FUN_104180884(param_2,param_3,lVar2);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10417f6b0; end: 10417f6bb;  */

void FUN_10417f6b0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  FUN_10417e870(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x00010417f6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Entry: 10417f6bc; end: 10417f74b;  */

void FUN_10417f6bc(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x00010417f6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Entry: 10417f74c; end: 10417f767;  */

void FUN_10417f74c(undefined8 param_1,long *param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  lVar4 = *param_2;
  if (lVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10417edd8);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_1040f6364(alStack_a0,FUN_1040f6358,0,*unaff_x20,&UNK_11074b8b8,uVar5,
                PTR___ss5NeverON_11034ee88,PTR___sSiN_11034deb0,PTR___ss5NeverOs5ErrorsWP_11034ee90)
  ;
  if (lVar4 < alStack_a0[0]) {
    uVar2 = 0;
    __ss20ManagedBufferPointerVMa(0,&UNK_11074b8b8,uVar5);
    __ss20ManagedBufferPointerV17isUniqueReferenceSbyF();
    if ((uVar2 & 1) == 0) {
      func_0x000104182454(0,uVar5);
      FUN_104181fc8();
    }
    uVar6 = *unaff_x20;
    puStack_78 = auStack_70;
    pcStack_80 = FUN_104180c60;
    uStack_90 = uVar5;
    uStack_88 = uVar5;
    uStack_60 = uVar5;
    _swift_retain(uVar6);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    FUN_1040fee4c(param_1,0x104180c7c,alStack_a0,uVar6,&UNK_11074b8b8,uVar5,uVar3,uVar5,
                  PTR___ss5ErrorWS_11034ee10,auStack_a8);
    _swift_release(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10417eddc);
  (*pcVar1)();
}



/* Entry: 10417f768; end: 10417f77f;  */

undefined8 FUN_10417f768(void)

{
  func_0x00010417f0b8();
  return 1;
}


