/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104869cd8; end: 104869cff; -[SCRegistrationMethod initWithCoder:] */

void FUN_104869cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10486992c();
  return;
}



/* Entry: 104869d00; end: 104869d07; +[SCRegistrationMethod defaultMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869d00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093520) = 0;
  *(undefined8 *)(lVar1 + _DAT_113093528) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104869d08; end: 104869d0f; +[SCRegistrationMethod ngo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869d08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093520) = 1;
  *(undefined8 *)(lVar1 + _DAT_113093528) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104869d10; end: 104869d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869d10(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093520) = param_3;
  *(undefined8 *)(lVar1 + _DAT_113093528) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104869d6c; end: 104869dd7; +[SCRegistrationMethod oAuth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113093520) = 2;
  *(undefined8 *)(lVar2 + _DAT_113093528) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104869dd8; end: 104869e27; -[SCRegistrationMethod matchDefaultMethod:ngo:oAuth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869dd8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_113093520) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000104869e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_113093520) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000104869df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (*(long *)(param_1 + _DAT_113093528) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104869e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104869e28);
  (*pcVar1)();
}



/* Entry: 104869e28; end: 104869e5b;  */

void FUN_104869e28(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104869e5c; end: 104869e6b; -[SCRegistrationMethod .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113093528));
  return;
}



/* Entry: 104869e6c; end: 104869ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869e6c(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long alStack_50 [2];
  long alStack_40 [2];
  long alStack_30 [2];
  
  lVar5 = param_1;
  FUN_104869ef8();
  lVar6 = lVar5;
  _objc_allocWithZone();
  uVar7 = 2;
  plVar2 = alStack_30;
  if (param_1 == 0) {
    uVar7 = 0;
    plVar2 = alStack_50;
  }
  uVar1 = 1;
  if (param_1 != 1) {
    uVar1 = uVar7;
  }
  plVar3 = alStack_40;
  lVar4 = 0;
  if (param_1 != 1) {
    plVar3 = plVar2;
    lVar4 = param_1;
  }
  *(undefined1 *)(lVar6 + _DAT_113093520) = uVar1;
  *(long *)(lVar6 + _DAT_113093528) = lVar4;
  *plVar3 = lVar6;
  plVar3[1] = lVar5;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104869ef8; end: 104869f17;  */

void FUN_104869ef8(void)

{
  _objc_opt_self(&PTR_PTR_1129ddfd8);
  return;
}



/* Entry: 104869f18; end: 10486a07f;  */

int FUN_104869f18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104869f94;
        goto LAB_104869f78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104869f78:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_104869f94:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10486a080; end: 10486a127;  */

void FUN_10486a080(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3947c;
  _swift_getWitnessTable(&UNK_10dd3947c,&UNK_1107a5680);
  puRam0000000113093558 = puVar1;
  return;
}



/* Entry: 10486a128; end: 10486a32b;  */

undefined8 FUN_10486a128(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x0001007bbbf8(0);
  uVar1 = *param_1;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar1,*param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2[2];
    if (param_1[2] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[1];
      if (((uVar2 != param_2[1]) || (param_1[2] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[3];
      if (((uVar2 != param_2[3]) || (param_1[4] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[6];
    if (param_1[6] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[5];
      if (((uVar2 != param_2[5]) || (param_1[6] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_1[7];
    func_0x000100e25fcc(uVar1,param_1[8],param_2[7],param_2[8]);
    if ((uVar1 & 1) != 0) {
      uVar5 = param_1[10];
      uVar2 = param_1[9];
      uVar1 = param_2[10];
      uVar4 = param_2[9];
      uStack_60 = uVar4;
      uStack_58 = uVar1;
      uStack_50 = uVar2;
      uStack_48 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (uVar1 >> 0x3c < 0xf) {
          func_0x00010105aabc(&uStack_50,auStack_70);
          func_0x00010105aabc(&uStack_60,auStack_70);
          uVar3 = uVar2;
          func_0x000100e25fcc(uVar2,uVar5,uVar4,uVar1);
          func_0x0001000b44c0(uVar4,uVar1);
          func_0x0001000b44c0(uVar2,uVar5);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
      else if (0xe < uVar1 >> 0x3c) {
        func_0x00010105aabc(&uStack_50,auStack_70);
        func_0x00010105aabc(&uStack_60,auStack_70);
        func_0x0001000b44c0(uVar2,uVar5);
        return 1;
      }
      func_0x00010105aabc(&uStack_50,auStack_70);
      func_0x00010105aabc(&uStack_60,auStack_70);
      func_0x0001000b44c0(uVar2,uVar5);
      func_0x0001000b44c0(uVar4,uVar1);
    }
  }
  return 0;
}



/* Entry: 10486a32c; end: 10486a3bb;  */

long FUN_10486a32c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10486a3bc; end: 10486a477;  */

undefined8 * FUN_10486a3bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar2;
  uVar6 = param_2[8];
  _objc_retain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  func_0x00010006c00c(uVar3,uVar6);
  param_1[7] = uVar3;
  param_1[8] = uVar6;
  uVar5 = param_2[10];
  if (uVar5 >> 0x3c < 0xf) {
    uVar4 = param_2[9];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[9] = uVar4;
    param_1[10] = uVar5;
  }
  else {
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
  }
  return param_1;
}



/* Entry: 10486a478; end: 10486a5ab;  */

undefined8 * FUN_10486a478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar4);
  param_1[1] = param_2[1];
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[3] = param_2[3];
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[7];
  uVar3 = param_2[8];
  func_0x00010006c00c(uVar4,uVar3);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  param_1[7] = uVar4;
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar5 = param_2[10];
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    if (uVar5 >> 0x3c < 0xf) {
      uVar3 = param_2[9];
      func_0x00010006c00c(uVar3,uVar5);
      uVar4 = param_1[9];
      uVar1 = param_1[10];
      param_1[9] = uVar3;
      param_1[10] = uVar5;
      func_0x00010006c090(uVar4,uVar1);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 9);
  }
  else if (uVar5 >> 0x3c < 0xf) {
    uVar4 = param_2[9];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[9] = uVar4;
    param_1[10] = uVar5;
    return param_1;
  }
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  return param_1;
}



/* Entry: 10486a5ac; end: 10486a663;  */

undefined8 * FUN_10486a5ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar3 = param_2[10];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[9];
      param_1[9] = param_2[9];
      param_1[10] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 10486a664; end: 10486a727;  */

int FUN_10486a664(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xb] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10486a728; end: 10486a9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10486a728(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar6 == 0) {
    if (param_4 >> 0x3e == 0) {
      uVar2 = 0;
      func_0x0001007bbbf8(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_3,uVar2);
      return (uint)param_1 & 1;
    }
  }
  else if (uVar6 == 1) {
    if ((param_4 >> 0x3e == 1) &&
       ((*(char *)(*(long *)(param_1 + _DAT_113093608) + _DAT_113093660) == '\x01') !=
        (*(char *)(*(long *)(param_3 + _DAT_113093608) + _DAT_113093660) != '\x01'))) {
      uVar4 = ((ulong *)(param_1 + _DAT_113093610))[1];
      uVar5 = ((ulong *)(param_3 + _DAT_113093610))[1];
      if (uVar4 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        uVar8 = *(ulong *)(param_1 + _DAT_113093610);
        uVar7 = *(ulong *)(param_3 + _DAT_113093610);
        if ((uVar8 != uVar7 || uVar4 != uVar5) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar4,uVar7,uVar5,0), (uVar8 & 1) == 0)) {
          return 0;
        }
      }
      uVar4 = ((ulong *)(param_1 + _DAT_113093618))[1];
      uVar5 = ((ulong *)(param_3 + _DAT_113093618))[1];
      if (uVar4 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        uVar8 = *(ulong *)(param_1 + _DAT_113093618);
        uVar7 = *(ulong *)(param_3 + _DAT_113093618);
        if ((uVar8 != uVar7 || uVar4 != uVar5) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar4,uVar7,uVar5,0), (uVar8 & 1) == 0)) {
          return 0;
        }
      }
      uVar4 = *(ulong *)(param_1 + _DAT_113093628);
      func_0x000100e25fcc(uVar4,((ulong *)(param_1 + _DAT_113093628))[1],
                          *(undefined8 *)(param_3 + _DAT_113093628),
                          ((undefined8 *)(param_3 + _DAT_113093628))[1]);
      if ((uVar4 & 1) != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_113093630);
        uVar4 = ((undefined8 *)(param_1 + _DAT_113093630))[1];
        uVar1 = *(undefined8 *)(param_3 + _DAT_113093630);
        uVar5 = ((undefined8 *)(param_3 + _DAT_113093630))[1];
        if (uVar4 >> 0x3c < 0xf) {
          if (uVar5 >> 0x3c < 0xf) {
            func_0x000100de78a0(uVar2,uVar4);
            func_0x000100de78a0(uVar1,uVar5);
            uVar3 = uVar2;
            func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar5);
            func_0x0001000b44c0(uVar1,uVar5);
            func_0x0001000b44c0(uVar2,uVar4);
            return (uint)uVar3 & 1;
          }
        }
        else if (0xe < uVar5 >> 0x3c) {
          func_0x000100de78a0(uVar2,uVar4);
          func_0x000100de78a0(uVar1,uVar5);
          func_0x0001000b44c0(uVar2,uVar4);
          return 1;
        }
        func_0x000100de78a0(uVar2,uVar4);
        func_0x000100de78a0(uVar1,uVar5);
        func_0x0001000b44c0(uVar2,uVar4);
        func_0x0001000b44c0(uVar1,uVar5);
      }
    }
  }
  else if ((((long)param_4 < -0x4000000000000000) && (param_3 == 0)) &&
          (param_4 == 0x8000000000000000)) {
    return 1;
  }
  return 0;
}



/* Entry: 10486a9ec; end: 10486a9f7;  */

/* WARNING: Possible PIC construction at 0x000100eaf8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100eaf8ec) */

void FUN_10486a9ec(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1[1] >> 0x3e);
  if ((uVar1 != 1) && (uVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 10486a9f8; end: 10486aa3b;  */

undefined8 * FUN_10486a9f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x000100eafae8(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x000100eaf8c8(uVar2,uVar4);
  return param_1;
}



/* Entry: 10486aa3c; end: 10486aa73;  */

undefined8 * FUN_10486aa3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000100eaf8c8(uVar1,uVar2);
  return param_1;
}



/* Entry: 10486aa74; end: 10486ab8b;  */

int FUN_10486aa74(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10486ab8c; end: 10486ac5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10486ab8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar1 = _DAT_113093560;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113093560,0);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_113093568) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113093570) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113093578) = param_4;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_1);
  return puVar2;
}



/* Entry: 10486ac5c; end: 10486ad37; -[OAuthScope initWithDelegate:oAuthType:uiContainer:optedIn1TLStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486ac5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_113093560;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113093560,0);
  _swift_beginAccess(param_1 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_113093568) = param_4;
  *(undefined8 *)(param_1 + _DAT_113093570) = param_5;
  *(undefined8 *)(param_1 + _DAT_113093578) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_78,puVar1);
  return;
}



/* Entry: 10486ad38; end: 10486ad97; -[OAuthScope init] */

void FUN_10486ad38(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("OAuthScope.OAuthScope",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10486ad64);
  (*pcVar1)();
}



/* Entry: 10486ad98; end: 10486adef; -[OAuthScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486ad98(long param_1)

{
  func_0x000100eaf8a4(param_1 + _DAT_113093560);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093568));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113093570));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113093578));
  return;
}



/* Entry: 10486adf0; end: 10486ae0f;  */

void FUN_10486adf0(void)

{
  _objc_opt_self(&PTR_PTR_1129de0a8);
  return;
}



/* Entry: 10486ae10; end: 10486ae13;  */

void FUN_10486ae10(void)

{
  undefined *puVar1;
  
  if (puRam00000001130935a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3963c;
  _swift_getWitnessTable(&UNK_10dd3963c,&UNK_1107a5928);
  puRam00000001130935a8 = puVar1;
  return;
}



/* Entry: 10486ae14; end: 10486ae53;  */

void FUN_10486ae14(void)

{
  undefined *puVar1;
  
  if (puRam00000001130935a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3963c;
  _swift_getWitnessTable(&UNK_10dd3963c,&UNK_1107a5928);
  puRam00000001130935a8 = puVar1;
  return;
}



/* Entry: 10486ae54; end: 10486aeff;  */

void FUN_10486ae54(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10486af00; end: 10486b0a7;  */

void FUN_10486af00(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10486b0a8; end: 10486b0e7;  */

void FUN_10486b0a8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130935b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd396f8;
  _swift_getWitnessTable(&UNK_10dd396f8,&UNK_1107a5a10);
  puRam00000001130935b0 = puVar1;
  return;
}



/* Entry: 10486b0e8; end: 10486b193;  */

void FUN_10486b0e8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10486b194; end: 10486b32f;  */

void FUN_10486b194(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10486b330; end: 10486b3db;  */

void FUN_10486b330(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10486b3dc; end: 10486b413;  */

void FUN_10486b3dc(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10486b414; end: 10486b59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486b414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_50 [8];
  
  uVar5 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar5 == 0) {
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_1130935b8) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_1130935c0) = param_1;
    *(undefined8 *)(unaff_x20 + _DAT_1130935c8) = param_2;
    *(undefined8 *)(unaff_x20 + _DAT_1130935d0) = 0;
    puVar1 = PTR_s_init_1125d9248;
    uVar2 = param_1;
    _objc_retain(param_1);
    uVar3 = param_2;
    _objc_retain(param_2);
    _objc_retain(uVar2);
    _objc_retain(uVar3);
    _objc_msgSendSuper2(auStack_70,puVar1);
    func_0x000100eaf8c8(param_1,param_2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else {
    if (uVar5 == 1) {
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_1130935b8) = 1;
      *(undefined8 *)(unaff_x20 + _DAT_1130935c0) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_1130935c8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_1130935d0) = param_1;
      puVar4 = auStack_60;
    }
    else {
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_1130935b8) = 2;
      *(undefined8 *)(unaff_x20 + _DAT_1130935c0) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_1130935c8) = 0;
      *(undefined8 *)(unaff_x20 + _DAT_1130935d0) = 0;
      puVar4 = auStack_50;
    }
    _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  }
  return;
}



/* Entry: 10486b59c; end: 10486b60b; -[SCOAuthResult description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486b59c(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_1130935b8) == '\0') {
    if (*(long *)(param_1 + _DAT_1130935c0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10486b608);
      (*pcVar1)();
    }
    if (*(long *)(param_1 + _DAT_1130935c8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10486b60c);
      (*pcVar1)();
    }
  }
  else if ((*(char *)(param_1 + _DAT_1130935b8) == '\x01') &&
          (*(long *)(param_1 + _DAT_1130935d0) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10486b5c8);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486b60c; end: 10486b653; -[SCOAuthResult init] */

void FUN_10486b60c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"OAuthScope/OAuthResultWrapper.swift",0x23,2,
             0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10486b654);
  (*pcVar1)();
}



/* Entry: 10486b654; end: 10486b687; -[SCOAuthResult hash] */

undefined8 FUN_10486b654(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10486b688();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10486b688; end: 10486b923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486b688(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_1130935b8));
  lVar1 = *(long *)(unaff_x20 + _DAT_1130935c0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_1130935c8) == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10486bf04();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_1130935d0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10486bf04();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10486b924; end: 10486b9a3; -[SCOAuthResult isEqual:] */

uint FUN_10486b924(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x00010486b794(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10486b9a4; end: 10486b9a7; -[SCOAuthResult copyWithZone:] */

void FUN_10486b9a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486b9a8; end: 10486ba3b; +[SCOAuthResult success::] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486b9a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130935b8) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130935c0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_1130935c8) = param_4;
  *(undefined8 *)(lVar2 + _DAT_1130935d0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486ba3c; end: 10486babf; +[SCOAuthResult redirectToRegistration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486ba3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130935b8) = 1;
  *(undefined8 *)(lVar2 + _DAT_1130935c0) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130935c8) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130935d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486bac0; end: 10486bb27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486bac0(void)

{
  long unaff_x20;
  undefined1 auStack_20 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_1130935b8) = 2;
  *(undefined8 *)(unaff_x20 + _DAT_1130935c0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130935c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130935d0) = 0;
  _objc_msgSendSuper2(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10486bb28; end: 10486bc2f; +[SCOAuthResult failure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486bb28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_1130935b8) = 2;
  *(undefined8 *)(lVar1 + _DAT_1130935c0) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130935c8) = 0;
  *(undefined8 *)(lVar1 + _DAT_1130935d0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486bc30; end: 10486bc93; -[SCOAuthResult matchSuccess:redirectToRegistration:failure:] */

void FUN_10486bc30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x00010486bb9c(FUN_10486bed8,auStack_40,0x10486beec,auStack_60,0x10486befc,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 10486bc94; end: 10486bcc7;  */

void FUN_10486bc94(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10486bcc8; end: 10486bd0f; -[SCOAuthResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486bcc8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130935c0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130935c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130935d0));
  return;
}



/* Entry: 10486bd10; end: 10486bd2f;  */

void FUN_10486bd10(void)

{
  _objc_opt_self(&PTR_PTR_1129de180);
  return;
}



/* Entry: 10486bd30; end: 10486be97;  */

int FUN_10486bd30(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10486bdac;
        goto LAB_10486bd90;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10486bd90:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10486bdac:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10486be98; end: 10486bed7;  */

void FUN_10486be98(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39764;
  _swift_getWitnessTable(&UNK_10dd39764,&UNK_1107a5af8);
  puRam0000000113093600 = puVar1;
  return;
}



/* Entry: 10486bed8; end: 10486bf03;  */

void FUN_10486bed8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010486bee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 10486bf04; end: 10486c0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486bf04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar3 = *(long *)(unaff_x20 + _DAT_113093608);
  __ss6HasherVABycfC(auStack_c0);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(lVar3 + _DAT_113093660));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  if (((undefined8 *)(unaff_x20 + _DAT_113093610))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093610);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113093618))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093618);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113093620))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093620);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113093628);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113093628))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113093630))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093630);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10486c0c4; end: 10486c423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10486c0c4(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  long unaff_x20;
  uint uVar14;
  uint uVar15;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x00010486d534(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_113093608);
      uVar6 = 0;
      FUN_10486de80();
      auStack_80[0] = uVar12;
      lStack_68 = uVar6;
      _objc_retain(uVar12);
      uVar4 = 0;
      FUN_10486d6d0();
      func_0x00010006e7f4(auStack_80);
      lVar9 = ((long *)(unaff_x20 + _DAT_113093610))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_113093610))[1];
      uVar13 = (uint)(lVar9 == 0 && lVar10 == 0);
      if (lVar9 != 0 && lVar10 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113093610);
        if (lVar7 == *(long *)(lStack_88 + _DAT_113093610) && lVar9 == lVar10) {
          uVar13 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar13 = (uint)lVar7;
        }
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_113093618))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_113093618))[1];
      uVar14 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113093618);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_113093618)) && (lVar9 == lVar10)) {
          uVar14 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar14 = (uint)lVar7;
        }
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_113093620))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_113093620))[1];
      uVar15 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_113093620);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_113093620)) && (lVar9 == lVar10)) {
          uVar15 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar15 = (uint)lVar7;
        }
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113093628);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_113093628))[1];
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_113093628);
      uVar8 = ((undefined8 *)(lStack_88 + _DAT_113093628))[1];
      func_0x00010006c00c(uVar12,uVar8);
      func_0x000100e25fcc(uVar6,uVar1,uVar12,uVar8);
      func_0x00010006c090(uVar12,uVar8);
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_113093630);
      uVar2 = ((undefined8 *)(lStack_88 + _DAT_113093630))[1];
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093630);
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_113093630))[1];
      if (uVar3 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar12,uVar2);
        if (0xe < uVar2 >> 0x3c) {
          func_0x000100de78a0(uVar1,uVar3);
          _objc_release(lStack_88);
          goto LAB_10486c364;
        }
        func_0x000100de78a0(uVar12,uVar2);
        func_0x000100de78a0(uVar1,uVar3);
        uVar8 = uVar1;
        func_0x000100e25fcc(uVar1,uVar3,uVar12,uVar2);
        uVar11 = (uint)uVar8;
        func_0x0001000b44c0(uVar12,uVar2);
        _objc_release(lStack_88);
        func_0x0001000b44c0(uVar12,uVar2);
        func_0x0001000b44c0(uVar1,uVar3);
      }
      else {
        func_0x000100de78a0(uVar12,uVar2);
        func_0x000100de78a0(uVar1,uVar3);
        _objc_release(lStack_88);
        if (uVar2 >> 0x3c < 0xf) {
LAB_10486c364:
          func_0x0001000b44c0(uVar1,uVar3);
          func_0x0001000b44c0(uVar12,uVar2);
          uVar11 = 0;
        }
        else {
          func_0x0001000b44c0(uVar1,uVar3);
          uVar11 = 1;
        }
      }
      if ((uVar4 & uVar13 & uVar14 & uVar15 & 1) != 0) {
        uVar11 = (uint)uVar6 & uVar11;
        goto LAB_10486c400;
      }
    }
  }
  uVar11 = 0;
LAB_10486c400:
  return uVar11 & 1;
}



/* Entry: 10486c424; end: 10486c433; -[SCOAuthRegistrationCredential type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093608));
  return;
}



/* Entry: 10486c434; end: 10486c43f; -[SCOAuthRegistrationCredential firstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c434(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113093610))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113093610);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10486c440; end: 10486c44b; -[SCOAuthRegistrationCredential lastName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c440(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113093618))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113093618);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10486c44c; end: 10486c457; -[SCOAuthRegistrationCredential email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c44c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113093620))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113093620);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10486c458; end: 10486c4af;  */

void FUN_10486c458(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10486c4b0; end: 10486c50b; -[SCOAuthRegistrationCredential identityToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c4b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113093628);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113093628))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10486c50c; end: 10486c57f; -[SCOAuthRegistrationCredential nonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c50c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113093630))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113093630);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10486c580; end: 10486c74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093608) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093610);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093618);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093620);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093628);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093630);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10486c750; end: 10486c8eb; -[SCOAuthRegistrationCredential initWithType:firstName:lastName:email:identityToken:nonce:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486c750(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_88 = param_2;
    lStack_80 = param_4;
  }
  if (param_5 == 0) {
    lStack_90 = 0;
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
    lStack_90 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar8 = param_2;
  }
  _objc_retain();
  _objc_retain();
  lVar5 = param_8;
  _objc_retain();
  uVar6 = param_7;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  lVar7 = param_2;
  _objc_release(param_7);
  if (lVar5 == 0) {
    param_8 = 0;
    lVar7 = -0x1000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar5);
  }
  *(undefined8 *)(param_1 + _DAT_113093608) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113093610);
  *plVar1 = lStack_80;
  plVar1[1] = lStack_88;
  plVar1 = (long *)(param_1 + _DAT_113093618);
  *plVar1 = lStack_90;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_113093620);
  *plVar1 = param_6;
  plVar1[1] = lVar8;
  puVar2 = (undefined8 *)(param_1 + _DAT_113093628);
  *puVar2 = uVar6;
  puVar2[1] = param_2;
  plVar1 = (long *)(param_1 + _DAT_113093630);
  *plVar1 = param_8;
  plVar1[1] = lVar7;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10486c8ec; end: 10486ca3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10486c8ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a0 [16];
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
  
  puVar2 = auStack_b0;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093608) = *param_1;
  uStack_48 = param_1[2];
  uStack_50 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093610);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093618);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093620);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_78 = param_1[8];
  uStack_80 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093628);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_88 = param_1[10];
  uStack_90 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093630);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  _objc_retain();
  func_0x00010486d534(&uStack_50,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  func_0x00010486d534(&uStack_60,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  func_0x00010486d534(&uStack_70,auStack_a0,0x112d35ff8,&UNK_10d900cd0);
  func_0x0001006e36f4(&uStack_80,auStack_a0);
  func_0x00010486d534(&uStack_90,auStack_a0,0x112d56fe0,&UNK_10d91dda0);
  _objc_msgSendSuper2(auStack_b0,PTR_s_init_1125d9248);
  func_0x00010486d57c(param_1);
  return puVar2;
}



/* Entry: 10486ca3c; end: 10486ca6f; -[SCOAuthRegistrationCredential hash] */

undefined8 FUN_10486ca3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10486bf04();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10486ca70; end: 10486caef; -[SCOAuthRegistrationCredential isEqual:] */

uint FUN_10486ca70(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10486c0c4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10486caf0; end: 10486caf3; -[SCOAuthRegistrationCredential copyWithZone:] */

void FUN_10486caf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486caf4; end: 10486cd43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486caf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113093610))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093610);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x414e5f5453524946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e5f5453524946,0xea0000000000454d);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113093618))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093618);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4d414e5f5453414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d414e5f5453414c,0xe900000000000045);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113093620))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093620);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093628);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113093628))[1]);
  uVar2 = 0x595449544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x595449544e454449,0xee004e454b4f545f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113093630))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093630);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0x45434e4f4e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45434e4f4e,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10486cd44; end: 10486cd93; -[SCOAuthRegistrationCredential encodeWithCoder:] */

void FUN_10486cd44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10486caf4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10486cd94; end: 10486cdc3;  */

void FUN_10486cd94(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10486cdc4(param_1);
  return;
}



/* Entry: 10486cdc4; end: 10486d3cf;  */

undefined8 FUN_10486cdc4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    uVar4 = 0;
    FUN_10486de80(0);
    puVar2 = PTR___sypN_11034f1a8;
    puVar6 = &uStack_b0;
    _swift_dynamicCast(puVar6,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar4 = uStack_b0;
    if (((ulong)puVar6 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_10486d1dc;
    }
    uVar7 = 0x414e5f5453524946;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e5f5453524946,0xea0000000000454d);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&uStack_80);
      uStack_b8 = 0;
      uVar11 = 0;
    }
    else {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
      uVar11 = uStack_a8;
      uStack_b8 = uStack_b0;
      if ((int)puVar6 == 0) {
        uStack_b8 = 0;
        uVar11 = 0;
      }
    }
    uVar7 = 0x4d414e5f5453414c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d414e5f5453414c,0xe900000000000045);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&uStack_80);
      uStack_c0 = 0;
      uVar12 = 0;
    }
    else {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
      uVar12 = uStack_a8;
      uStack_c0 = uStack_b0;
      if ((int)puVar6 == 0) {
        uStack_c0 = 0;
        uVar12 = 0;
      }
    }
    uVar7 = 0x4c49414d45;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (lVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&uStack_80);
      uVar13 = 0;
      uVar7 = 0;
    }
    else {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___sSSN_11034da80,6);
      uVar13 = uStack_a8;
      uVar7 = uStack_b0;
      if ((int)puVar6 == 0) {
        uVar7 = 0;
        uVar13 = 0;
      }
    }
    uVar8 = 0x595449544e454449;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x595449544e454449,0xee004e454b4f545f);
    lVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (lVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
      _swift_unknownObjectRelease(lVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
      uVar3 = uStack_a8;
      uVar8 = uStack_b0;
      if (((ulong)puVar6 & 1) != 0) {
        uVar9 = 0x45434e4f4e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45434e4f4e,0xe500000000000000);
        lVar5 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        if (lVar5 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
          _swift_unknownObjectRelease(lVar5);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          func_0x00010006e7f4(&uStack_80);
          uVar9 = 0;
          uVar1 = 0xf000000000000000;
        }
        else {
          puVar6 = &uStack_b0;
          _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
          uVar9 = uStack_b0;
          uVar1 = uStack_a8;
          if ((int)puVar6 == 0) {
            uVar9 = 0;
            uVar1 = 0xf000000000000000;
          }
        }
        if (uVar11 == 0) {
          uStack_b8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b8,uVar11);
          _swift_bridgeObjectRelease(uVar11);
        }
        if (uVar12 == 0) {
          uStack_c0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c0,uVar12);
          _swift_bridgeObjectRelease(uVar12);
        }
        if (uVar13 == 0) {
          uVar7 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar13);
          _swift_bridgeObjectRelease(uVar13);
        }
        uVar10 = uVar8;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar8,uVar3);
        if (uVar1 >> 0x3c < 0xf) {
          func_0x00010006c00c(uVar9,uVar1);
          uVar14 = uVar9;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar9,uVar1);
          func_0x0001000b44c0(uVar9,uVar1);
        }
        else {
          uVar14 = 0;
        }
        func_0x00010c055b20();
        _objc_release(uVar4);
        func_0x00010006c090(uVar8,uVar3);
        func_0x0001000b44c0(uVar9,uVar1);
        _objc_release(uStack_b8);
        _objc_release(uStack_c0);
        _objc_release(uVar7);
        _objc_release(uVar10);
        _objc_release(uVar14);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _objc_release(uVar4);
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(uVar11);
      goto LAB_10486d1dc;
    }
    _objc_release(param_1);
    _objc_release(uVar4);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(uVar11);
  }
  func_0x00010006e7f4(&uStack_80);
LAB_10486d1dc:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10486d3d0; end: 10486d3f7; -[SCOAuthRegistrationCredential initWithCoder:] */

void FUN_10486d3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10486cdc4();
  return;
}



/* Entry: 10486d3f8; end: 10486d42b; -[SCOAuthRegistrationCredential description] */

void FUN_10486d3f8(void)

{
  undefined1 auStack_68 [88];
  
  FUN_10486d5b0(auStack_68);
  func_0x00010486d57c(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486d42c; end: 10486d4a7; -[SCOAuthRegistrationCredential init] */

void FUN_10486d42c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OAuthScope/OAuthRegistrationCredentialWrapper.swift",0x33,2,0x71,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10486d474);
  (*pcVar1)();
}



/* Entry: 10486d4a8; end: 10486d5af; -[SCOAuthRegistrationCredential .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010486d514: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010486d518) */
/* WARNING: Removing unreachable block (ram,0x0001000b44c0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44d0) */
/* WARNING: Removing unreachable block (ram,0x0001000b44cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486d4a8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093608));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093610 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093618 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093620 + 8));
  uVar1 = ((undefined8 *)(param_1 + _DAT_113093628))[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_113093628));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10486d5b0; end: 10486d6af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486d5b0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = *(undefined8 *)(param_2 + _DAT_113093608);
  puVar1 = (undefined8 *)(param_2 + _DAT_113093610);
  puVar2 = (undefined8 *)(param_2 + _DAT_113093618);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113093620);
  uVar6 = ((undefined8 *)(param_2 + _DAT_113093620))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_113093628);
  uVar7 = ((undefined8 *)(param_2 + _DAT_113093628))[1];
  uVar5 = *(undefined8 *)(param_2 + _DAT_113093630);
  uVar8 = ((undefined8 *)(param_2 + _DAT_113093630))[1];
  _swift_bridgeObjectRetain(uVar6);
  _objc_retain();
  uVar14 = puVar1[1];
  uVar13 = *puVar1;
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[1];
  _swift_bridgeObjectRetain(puVar1[1]);
  _swift_bridgeObjectRetain(uVar10);
  func_0x00010006c00c(uVar4,uVar7);
  func_0x000100de78a0(uVar5,uVar8);
  *param_1 = uVar9;
  param_1[4] = uVar12;
  param_1[3] = uVar11;
  param_1[2] = uVar14;
  param_1[1] = uVar13;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  param_1[7] = uVar4;
  param_1[8] = uVar7;
  param_1[9] = uVar5;
  param_1[10] = uVar8;
  return;
}



/* Entry: 10486d6b0; end: 10486d6cf;  */

void FUN_10486d6b0(void)

{
  _objc_opt_self(&PTR_PTR_1129de258);
  return;
}



/* Entry: 10486d6d0; end: 10486d76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10486d6d0(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113093660);
      cVar2 = *(char *)(lStack_58 + _DAT_113093660);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 10486d770; end: 10486d81b;  */

void FUN_10486d770(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10486d81c; end: 10486d85b;  */

void FUN_10486d81c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10486d85c; end: 10486d877; -[SCOAuthType description] */

void FUN_10486d85c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486d878; end: 10486d8bf; -[SCOAuthType init] */

void FUN_10486d878(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"OAuthScope/OAuthTypeWrapper.swift",0x21,2,
             0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10486d8c0);
  (*pcVar1)();
}



/* Entry: 10486d8c0; end: 10486d907; -[SCOAuthType hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486d8c0(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_113093660));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10486d908; end: 10486d987; -[SCOAuthType isEqual:] */

uint FUN_10486d908(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10486d6d0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10486d988; end: 10486d98b; -[SCOAuthType copyWithZone:] */

void FUN_10486d988(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486d98c; end: 10486da3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486d98c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = 0xee00454c474f4f47;
  if (*(char *)(unaff_x20 + _DAT_113093660) != '\x01') {
    uVar2 = 0xed0000454c505041;
  }
  uVar1 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar2);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10486da40; end: 10486da8f; -[SCOAuthType encodeWithCoder:] */

void FUN_10486da40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10486d98c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10486da90; end: 10486dabf;  */

void FUN_10486da90(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10486dac0(param_1);
  return;
}



/* Entry: 10486dac0; end: 10486dd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10486dac0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_b0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_10486dcd0;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_10486dcc8:
    _objc_release(param_1);
LAB_10486dcd0:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffbab3afafbf)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed0000454c505041,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113093660) = 0;
    goto LAB_10486dc04;
  }
  if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x11ffbab3b8b0b0b9)) {
    _swift_bridgeObjectRelease(0xee00454c474f4f47);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5f45505954425553,0xee00454c474f4f47,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar6 & 1) == 0) goto LAB_10486dcc8;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113093660) = 1;
  puVar5 = auStack_a0;
LAB_10486dc04:
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 10486dd08; end: 10486dd2f; -[SCOAuthType initWithCoder:] */

void FUN_10486dd08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10486dac0();
  return;
}



/* Entry: 10486dd30; end: 10486dd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486dd30(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113093660) = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10486dd38; end: 10486dd47; +[SCOAuthType apple] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486dd38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093660) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486dd48; end: 10486dd93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486dd48(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113093660) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10486dd94; end: 10486dd9b; +[SCOAuthType google] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486dd94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093660) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486dd9c; end: 10486de2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486dd9c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113093660) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10486de2c; end: 10486de47; -[SCOAuthType matchApple:google:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486de2c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_113093660) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010486de44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 10486de48; end: 10486de7b;  */

void FUN_10486de48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


