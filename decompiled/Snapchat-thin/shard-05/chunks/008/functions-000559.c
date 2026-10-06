/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104217798; end: 1042177d7;  */

void FUN_104217798(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_104217a8c(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 1042177d8; end: 1042177eb;  */

void FUN_1042177d8(void)

{
  FUN_1042175c8();
  return;
}



/* Entry: 1042177ec; end: 104217887;  */

bool FUN_1042177ec(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = param_1[2];
    if (((uVar1 == param_2[2] && param_1[3] == param_2[3]) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar1,param_1[3],param_2[2],param_2[3],0), (uVar1 & 1) != 0)) &&
       (param_1[4] == param_2[4])) {
      return param_1[5] == param_2[5];
    }
  }
  return false;
}



/* Entry: 104217888; end: 1042178c7;  */

void FUN_104217888(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce45f0;
  _swift_getWitnessTable(&UNK_10dce45f0,&UNK_110753788);
  puRam00000001130699b8 = puVar1;
  return;
}



/* Entry: 1042178c8; end: 104217a8b;  */

undefined4 FUN_1042178c8(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0x6e656d6563616c70 && param_2 == -0x11ff9b90af91b68c) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e656d6563616c70,0xee00646f506e4974,param_1,param_2,0), (uVar2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar1 = 0;
  }
  else {
    uVar2 = 0x6f50726550736461;
    if (((param_1 == 0x6f50726550736461) && (param_2 == -0x16ffffffffffff9c)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6f50726550736461,0xe900000000000064,param_1,param_2,0), (uVar2 & 1) != 0)) {
      _swift_bridgeObjectRelease(param_2);
      uVar1 = 1;
    }
    else {
      uVar2 = 0;
      if (((param_1 == 0x6449646f70) && (param_2 == -0x1b00000000000000)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6449646f70,0xe500000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 2;
      }
      else {
        if ((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef0e0fdd0)) {
          uVar2 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000010,0x800000010f1f0230,param_1,param_2,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000011;
            if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0e0fdb0)) {
              _swift_bridgeObjectRelease(0x800000010f1f0250);
              return 4;
            }
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000011,0x800000010f1f0250,param_1,param_2,0);
            _swift_bridgeObjectRelease(param_2);
            if ((uVar2 & 1) != 0) {
              return 4;
            }
            return 5;
          }
        }
        _swift_bridgeObjectRelease(param_2);
        uVar1 = 3;
      }
    }
  }
  return uVar1;
}



/* Entry: 104217a8c; end: 104217c83;  */

/* WARNING: Removing unreachable block (ram,0x000104217bfc) */
/* WARNING: Removing unreachable block (ram,0x000104217c50) */
/* WARNING: Removing unreachable block (ram,0x000104217b98) */

void FUN_104217a8c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x1130699d8;
  func_0x0001000285a8(0x1130699d8,&UNK_10dce4640);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_104217888();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&puStack_80 - extraout_x8,&UNK_110753788,&UNK_110753788,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2um_xtKF(puVar5,lVar3);
    uStack_52 = 1;
    puVar6 = &uStack_52;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2um_xtKF(puVar6,lVar3);
    uStack_53 = 2;
    puVar7 = &uStack_53;
    lVar4 = lVar3;
    puStack_68 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uStack_54 = 3;
    puVar6 = &uStack_54;
    puStack_70 = puVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2um_xtKF(puVar6,lVar3);
    uStack_55 = 4;
    puVar7 = &uStack_55;
    puStack_78 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2um_xtKF(puVar7,lVar3);
    puStack_80 = puVar7;
    (**(code **)(lVar8 + 8))((long)&puStack_80 - extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = puStack_68;
    param_1[2] = puStack_70;
    param_1[3] = lVar4;
    param_1[4] = puStack_78;
    param_1[5] = puStack_80;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 104217c84; end: 104217caf;  */

long FUN_104217c84(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104217cb0; end: 104217cb7;  */

void FUN_104217cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 104217cb8; end: 104217cf3;  */

undefined8 * FUN_104217cb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104217cf4; end: 104217d5f;  */

undefined8 * FUN_104217cf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 104217d60; end: 104217da3;  */

undefined8 * FUN_104217d60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 104217da4; end: 104217faf;  */

int FUN_104217da4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104217fb0; end: 104217fef;  */

void FUN_104217fb0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce45c8;
  _swift_getWitnessTable(&UNK_10dce45c8,&UNK_110753788);
  puRam00000001130699c0 = puVar1;
  return;
}



/* Entry: 104217ff0; end: 104217ff3;  */

void FUN_104217ff0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4560;
  _swift_getWitnessTable(&UNK_10dce4560,&UNK_110753788);
  puRam00000001130699c8 = puVar1;
  return;
}



/* Entry: 104217ff4; end: 104218033;  */

void FUN_104217ff4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4560;
  _swift_getWitnessTable(&UNK_10dce4560,&UNK_110753788);
  puRam00000001130699c8 = puVar1;
  return;
}



/* Entry: 104218034; end: 104218037;  */

void FUN_104218034(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4538;
  _swift_getWitnessTable(&UNK_10dce4538,&UNK_110753788);
  puRam00000001130699d0 = puVar1;
  return;
}



/* Entry: 104218038; end: 104218077;  */

void FUN_104218038(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4538;
  _swift_getWitnessTable(&UNK_10dce4538,&UNK_110753788);
  puRam00000001130699d0 = puVar1;
  return;
}



/* Entry: 104218078; end: 104218093;  */

undefined8 FUN_104218078(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar1 = *param_1;
  dVar3 = (double)param_1[1];
  lVar2 = *param_2;
  dVar4 = (double)param_2[1];
  lVar5 = param_2[2];
  lVar6 = param_1[2];
  lVar8 = *(long *)(lVar1 + 0x10);
  if (lVar8 == *(long *)(lVar2 + 0x10)) {
    if (lVar8 != 0 && lVar1 != lVar2) {
      plVar9 = (long *)(lVar2 + 0x28);
      plVar10 = (long *)(lVar1 + 0x28);
      do {
        uVar7 = plVar10[-1];
        if ((uVar7 != plVar9[-1] || *plVar10 != *plVar9) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar7 & 1) == 0)) {
          return 0;
        }
        plVar9 = plVar9 + 2;
        plVar10 = plVar10 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((char)lVar6 == '\x01') {
      if ((char)lVar5 == '\x01') {
        return 1;
      }
    }
    else if (((char)lVar5 != '\x01') && (dVar3 == dVar4)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104218094; end: 10421816f;  */

undefined8
FUN_104218094(long param_1,double param_2,char param_3,long param_4,double param_5,char param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_4 + 0x10)) {
    if (lVar2 != 0 && param_1 != param_4) {
      plVar3 = (long *)(param_4 + 0x28);
      plVar4 = (long *)(param_1 + 0x28);
      do {
        uVar1 = plVar4[-1];
        if ((uVar1 != plVar3[-1] || *plVar4 != *plVar3) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) == 0)) {
          return 0;
        }
        plVar3 = plVar3 + 2;
        plVar4 = plVar4 + 2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 == '\x01') {
      if (param_6 == '\x01') {
        return 1;
      }
    }
    else if ((param_6 != '\x01') && (param_2 == param_5)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104218170; end: 104218177;  */

void FUN_104218170(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 104218178; end: 1042181cb;  */

undefined8 * FUN_104218178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 1042181cc; end: 10421820f;  */

undefined8 * FUN_1042181cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 104218210; end: 1042182af;  */

int FUN_104218210(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042182b0; end: 104218313;  */

undefined8 FUN_1042182b0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (*param_1 == *param_2) {
    lVar2 = param_2[2];
    if (param_1[2] == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if ((lVar2 != 0) &&
            ((uVar1 = param_1[1], uVar1 == param_2[1] && param_1[2] == lVar2 ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar1 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104218314; end: 10421831b;  */

void FUN_104218314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 10421831c; end: 10421839b;  */

undefined8 * FUN_10421831c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 10421839c; end: 104218463;  */

int FUN_10421839c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104218464; end: 1042184ab;  */

uint FUN_104218464(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1042184ac(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042184ac; end: 10421860b;  */

undefined8 FUN_1042184ac(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0) {
      return 0;
    }
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 != *(ulong *)(param_2 + 8) || lVar2 != lVar1) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar3,lVar2,*(ulong *)(param_2 + 8),lVar1,0), (uVar3 & 1) == 0)) {
      return 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return 1;
    }
  }
  else if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    if ((uVar3 == *(ulong *)(param_2 + 0x18)) && (lVar2 == lVar1)) {
      return 1;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar3,lVar2,*(ulong *)(param_2 + 0x18),lVar1,0);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10421860c; end: 10421867f;  */

undefined1 * FUN_10421860c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104218680; end: 1042186cb;  */

undefined1 * FUN_104218680(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1042186cc; end: 104218793;  */

int FUN_1042186cc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104218794; end: 1042187fb;  */

uint FUN_104218794(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined1 uStack_90;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_90 = *(undefined1 *)(param_1 + 0xc);
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = *(undefined1 *)(param_2 + 0xc);
  FUN_1042187fc(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1042187fc; end: 104218a13;  */

undefined1 FUN_1042187fc(double *param_1,double *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_a8 [104];
  
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 1) != '\x01') && (bVar1 = false, !NAN(*param_1) && !NAN(*param_2))) {
      bVar1 = *param_1 == *param_2;
    }
    if (!bVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_2 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if ((*(char *)(param_2 + 3) != '\x01') && (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2])))
    {
      bVar1 = param_1[2] == param_2[2];
    }
    if (!bVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    if (*(char *)(param_2 + 5) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 5) == '\x01') {
      return 0;
    }
    if (param_1[4] != param_2[4]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    if (*(char *)(param_2 + 7) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 7) == '\x01') {
      return 0;
    }
    if (param_1[6] != param_2[6]) {
      return 0;
    }
  }
  dVar3 = param_1[8];
  dVar2 = param_2[8];
  if (dVar3 == 0.0) {
    if (dVar2 != 0.0) {
      return 0;
    }
    func_0x0001018a3350(param_2,auStack_a8);
  }
  else {
    if (dVar2 == 0.0) {
      func_0x0001018a3350(param_2,auStack_a8);
      return 0;
    }
    func_0x000100ea57c8(0);
    func_0x0001018a3350(param_2,auStack_a8);
    func_0x0001018a3350(param_1,auStack_a8);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(dVar3,dVar2);
    func_0x00010180cee4(param_2);
    func_0x00010180cee4(param_1);
    if (((ulong)dVar3 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    if (*(char *)(param_2 + 10) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 10) == '\x01') {
      return 0;
    }
    if (param_1[9] != param_2[9]) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (*(char *)(param_2 + 0xc) == '\x01') {
      return 1;
    }
  }
  else if ((*(char *)(param_2 + 0xc) != '\x01') && (param_1[0xb] == param_2[0xb])) {
    return 1;
  }
  return 0;
}



/* Entry: 104218a14; end: 104218a3f;  */

long FUN_104218a14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104218a40; end: 104218a47;  */

void FUN_104218a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 104218a48; end: 104218acb;  */

undefined8 * FUN_104218a48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = param_2[0xb];
  _objc_retain();
  return param_1;
}



/* Entry: 104218acc; end: 104218b6f;  */

undefined8 * FUN_104218acc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 104218b70; end: 104218c03;  */

undefined8 * FUN_104218b70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = param_2[6];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _objc_release(uVar1);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



/* Entry: 104218c04; end: 104218ccf;  */

int FUN_104218c04(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x61) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104218cd0; end: 104218d5f;  */

undefined8 FUN_104218cd0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104218d60; end: 10421948b;  */

void FUN_104218d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined4 param_24,
                  undefined4 param_25,undefined8 param_26,undefined8 *param_27,undefined8 *param_28,
                  undefined8 *param_29,undefined8 param_30,undefined8 param_31,undefined1 param_32,
                  undefined4 param_33,undefined8 param_34,undefined8 param_35,undefined1 param_36,
                  undefined4 param_37,undefined8 param_38,undefined1 param_39,undefined4 param_40,
                  undefined8 *param_41,undefined1 param_42,undefined4 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined1 param_50,undefined4 param_51,undefined8 param_52,
                  undefined1 param_53,undefined4 param_54,undefined8 param_55,undefined1 param_56,
                  undefined4 param_57,undefined8 param_58,undefined8 param_59,undefined8 *param_60,
                  undefined8 param_61,undefined8 param_62,undefined1 param_63,undefined4 param_64,
                  undefined8 param_65,undefined8 *param_66,undefined8 *param_67,undefined8 param_68,
                  undefined8 param_69,undefined1 param_70,undefined4 param_71,undefined8 param_72,
                  undefined8 param_73,undefined1 param_74,undefined4 param_75,undefined8 param_76,
                  undefined8 param_77,undefined1 param_78,undefined4 param_79,undefined8 param_80,
                  undefined8 param_81,undefined8 param_82,undefined8 param_83)

{
  undefined8 extraout_x8;
  undefined1 auStack_1948 [1448];
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined1 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined1 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined4 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined1 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined1 uStack_1178;
  undefined7 uStack_1177;
  undefined1 uStack_1170;
  undefined8 uStack_116f;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined2 uStack_10f8;
  undefined6 uStack_10f6;
  undefined2 uStack_10f0;
  undefined8 uStack_10ee;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined1 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined1 uStack_10b8;
  undefined8 uStack_10b0;
  undefined1 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined1 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined1 uStack_1038;
  undefined8 uStack_1030;
  undefined1 uStack_1028;
  undefined8 uStack_1020;
  undefined1 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined2 uStack_ee0;
  undefined1 uStack_ede;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined2 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined1 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined1 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined1 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined1 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c77;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_bf6;
  undefined1 auStack_be8 [1448];
  undefined1 auStack_640 [1456];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000101895cec(&uStack_df8);
  uStack_12b8 = uStack_d90;
  uStack_12c0 = uStack_d98;
  uStack_12a8 = uStack_d80;
  uStack_12b0 = uStack_d88;
  uStack_12a0 = uStack_d78;
  uStack_12f8 = uStack_dd0;
  uStack_1300 = uStack_dd8;
  uStack_12e8 = uStack_dc0;
  uStack_12f0 = uStack_dc8;
  uStack_12d8 = uStack_db0;
  uStack_12e0 = uStack_db8;
  uStack_12c8 = uStack_da0;
  uStack_12d0 = uStack_da8;
  uStack_1318 = uStack_df0;
  uStack_1320 = uStack_df8;
  uStack_1308 = uStack_de0;
  uStack_1310 = uStack_de8;
  func_0x000101895d08(&uStack_d70);
  uStack_1200 = uStack_d08;
  uStack_1208 = uStack_d10;
  uStack_11f0 = uStack_cf8;
  uStack_11f8 = uStack_d00;
  uStack_1240 = uStack_d48;
  uStack_1248 = uStack_d50;
  uStack_1230 = uStack_d38;
  uStack_1238 = uStack_d40;
  uStack_1220 = uStack_d28;
  uStack_1228 = uStack_d30;
  uStack_1210 = uStack_d18;
  uStack_1218 = uStack_d20;
  uStack_11e8 = uStack_cf0;
  uStack_1260 = uStack_d68;
  uStack_1268 = uStack_d70;
  uStack_1250 = uStack_d58;
  uStack_1258 = uStack_d60;
  func_0x0001018797b4(&uStack_ce8);
  uStack_116f = uStack_c77;
  uStack_1198 = uStack_ca0;
  uStack_11a0 = uStack_ca8;
  uStack_1188 = uStack_c90;
  uStack_1190 = uStack_c98;
  uStack_1180 = uStack_c88;
  uStack_11d8 = uStack_ce0;
  uStack_11e0 = uStack_ce8;
  uStack_11c8 = uStack_cd0;
  uStack_11d0 = uStack_cd8;
  uStack_11b8 = uStack_cc0;
  uStack_11c0 = uStack_cc8;
  uStack_11a8 = uStack_cb0;
  uStack_11b0 = uStack_cb8;
  func_0x000101895d28(&uStack_c68);
  uStack_10ee = uStack_bf6;
  uStack_1118 = uStack_c20;
  uStack_1120 = uStack_c28;
  uStack_1108 = uStack_c10;
  uStack_1110 = uStack_c18;
  uStack_1100 = uStack_c08;
  uStack_1158 = uStack_c60;
  uStack_1160 = uStack_c68;
  uStack_1148 = uStack_c50;
  uStack_1150 = uStack_c58;
  uStack_1138 = uStack_c40;
  uStack_1140 = uStack_c48;
  uStack_1128 = uStack_c30;
  uStack_1130 = uStack_c38;
  uStack_1000 = 0;
  uStack_ff0 = 0;
  uStack_ff8 = 0;
  uStack_fe8 = 2;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  uStack_fc8 = 0;
  uStack_fd0 = 0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  uStack_fa8 = 0;
  uStack_fb0 = 0;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  uStack_f68 = 0;
  uStack_f70 = 0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 1;
  uStack_ee0 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  uStack_e90 = 0x100;
  uStack_1330 = param_15;
  uStack_1328 = param_16;
  uStack_13a0 = param_7;
  uStack_1398 = param_8;
  uStack_1390 = param_9;
  uStack_1388 = param_1;
  uStack_1380 = param_10;
  uStack_1378 = param_11;
  uStack_1370 = param_2;
  uStack_1368 = param_3;
  uStack_1360 = param_4;
  uStack_1358 = param_5;
  uStack_1350 = param_12;
  uStack_1348 = param_13;
  uStack_1340 = param_6;
  uStack_1338 = param_14;
  func_0x000104218d18(param_18,&uStack_1320,0x1130699e0,&UNK_10dce4790);
  uStack_1298 = param_19;
  uStack_1280 = param_23;
  uStack_1278 = param_24;
  uStack_1288 = param_22;
  uStack_1290 = param_21;
  uStack_1270 = param_26;
  uStack_1200 = param_27[0xd];
  uStack_1208 = param_27[0xc];
  uStack_11f0 = param_27[0xf];
  uStack_11f8 = param_27[0xe];
  uStack_1240 = param_27[5];
  uStack_1248 = param_27[4];
  uStack_1230 = param_27[7];
  uStack_1238 = param_27[6];
  uStack_1220 = param_27[9];
  uStack_1228 = param_27[8];
  uStack_1210 = param_27[0xb];
  uStack_1218 = param_27[10];
  uStack_1260 = param_27[1];
  uStack_1268 = *param_27;
  uStack_1250 = param_27[3];
  uStack_1258 = param_27[2];
  uStack_11e8 = *(undefined1 *)(param_27 + 0x10);
  uStack_116f = *(undefined8 *)((long)param_28 + 0x71);
  uStack_1170 = (undefined1)((ulong)*(undefined8 *)((long)param_28 + 0x69) >> 0x38);
  uStack_1198 = param_28[9];
  uStack_11a0 = param_28[8];
  uStack_1188 = param_28[0xb];
  uStack_1190 = param_28[10];
  uStack_1180 = param_28[0xc];
  uStack_1178 = (undefined1)param_28[0xd];
  uStack_1177 = (undefined7)((ulong)param_28[0xd] >> 8);
  uStack_11d8 = param_28[1];
  uStack_11e0 = *param_28;
  uStack_11c8 = param_28[3];
  uStack_11d0 = param_28[2];
  uStack_11b8 = param_28[5];
  uStack_11c0 = param_28[4];
  uStack_11a8 = param_28[7];
  uStack_11b0 = param_28[6];
  uStack_1118 = param_29[9];
  uStack_1120 = param_29[8];
  uStack_1108 = param_29[0xb];
  uStack_1110 = param_29[10];
  uStack_1100 = param_29[0xc];
  uStack_10ee = *(undefined8 *)((long)param_29 + 0x72);
  uStack_10f0 = (undefined2)((ulong)*(undefined8 *)((long)param_29 + 0x6a) >> 0x30);
  uStack_1158 = param_29[1];
  uStack_1160 = *param_29;
  uStack_1148 = param_29[3];
  uStack_1150 = param_29[2];
  uStack_1138 = param_29[5];
  uStack_1140 = param_29[4];
  uStack_1128 = param_29[7];
  uStack_1130 = param_29[6];
  uStack_10f8 = (undefined2)param_29[0xd];
  uStack_10f6 = (undefined6)((ulong)param_29[0xd] >> 0x10);
  uStack_10e0 = param_30;
  uStack_10d8 = param_31;
  uStack_10d0 = param_32;
  uStack_10c8 = param_34;
  uStack_10c0 = param_35;
  uStack_10b8 = param_36;
  uStack_10b0 = param_38;
  uStack_10a8 = param_39;
  uStack_1098 = param_41[1];
  uStack_10a0 = *param_41;
  uStack_1088 = param_41[3];
  uStack_1090 = param_41[2];
  uStack_1078 = param_41[5];
  uStack_1080 = param_41[4];
  uStack_1070 = param_42;
  uStack_1060 = param_45;
  uStack_1068 = param_44;
  uStack_1050 = param_47;
  uStack_1058 = param_46;
  uStack_1048 = param_48;
  uStack_1040 = param_49;
  uStack_1038 = param_50;
  uStack_1030 = param_52;
  uStack_1028 = param_53;
  uStack_1020 = param_55;
  uStack_1018 = param_56;
  uStack_1010 = param_58;
  uStack_1008 = param_59;
  uStack_ff8 = param_60[1];
  uStack_1000 = *param_60;
  uStack_fe8 = param_60[3];
  uStack_ff0 = param_60[2];
  uStack_fd8 = param_60[5];
  uStack_fe0 = param_60[4];
  uStack_fc8 = param_60[7];
  uStack_fd0 = param_60[6];
  uStack_fb8 = param_60[9];
  uStack_fc0 = param_60[8];
  uStack_fa8 = param_60[0xb];
  uStack_fb0 = param_60[10];
  func_0x000104218d18(param_61,&uStack_fa0,0x112dcd428,&UNK_10dbce5c0);
  func_0x000104218d18(param_62,&uStack_f50,0x112dcd580,&UNK_10d98ff20);
  uStack_ec8 = param_66[1];
  uStack_ed0 = *param_66;
  uStack_eb8 = param_66[3];
  uStack_ec0 = param_66[2];
  uStack_ea8 = param_66[5];
  uStack_eb0 = param_66[4];
  uStack_e98 = param_66[7];
  uStack_ea0 = param_66[6];
  uStack_ede = param_63;
  uStack_ed8 = param_65;
  uStack_e90 = *(undefined2 *)(param_66 + 8);
  uStack_e80 = param_67[1];
  uStack_e88 = *param_67;
  uStack_e70 = param_67[3];
  uStack_e78 = param_67[2];
  uStack_e68 = param_67[4];
  uStack_e60 = param_68;
  uStack_e58 = param_69;
  uStack_e50 = param_70;
  uStack_e48 = param_72;
  uStack_e40 = param_73;
  uStack_e38 = param_74;
  uStack_e30 = param_76;
  uStack_e28 = param_77;
  uStack_e20 = param_78;
  uStack_e10 = param_81;
  uStack_e18 = param_80;
  uStack_e08 = param_82;
  uStack_e00 = param_83;
  _memcpy(auStack_be8,&uStack_13a0,0x5a8);
  _memcpy(auStack_640,&uStack_13a0,0x5a8);
  func_0x00010178e37c(auStack_be8,auStack_1948);
  func_0x00010178e3b8(auStack_640);
  _memcpy(extraout_x8,auStack_be8,0x5a8);
  return;
}



/* Entry: 10421948c; end: 10421948f;  */

undefined8 FUN_10421948c(ulong *param_1,ulong *param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulong *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uStack_e80;
  ulong uStack_e78;
  ulong uStack_e70;
  ulong uStack_e68;
  ulong uStack_e60;
  ulong uStack_e58;
  ulong uStack_e50;
  ulong uStack_e48;
  ulong uStack_e40;
  ulong uStack_e38;
  ulong uStack_e30;
  ulong uStack_e28;
  ulong uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  ulong uStack_df0;
  ulong uStack_de8;
  ulong uStack_de0;
  ulong uStack_dd8;
  ulong uStack_dd0;
  ulong uStack_dc8;
  ulong uStack_dc0;
  ulong uStack_db8;
  ulong uStack_db0;
  ulong uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  ulong uStack_d78;
  ulong uStack_d70;
  ulong uStack_d60;
  ulong uStack_d58;
  ulong uStack_d50;
  ulong uStack_d48;
  ulong uStack_d40;
  ulong uStack_d38;
  ulong uStack_d30;
  ulong uStack_d28;
  ulong uStack_d20;
  ulong uStack_d18;
  ulong uStack_d10;
  ulong uStack_d08;
  ulong uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 uStack_ce0;
  ulong uStack_cd0;
  ulong uStack_cc8;
  ulong uStack_cc0;
  ulong uStack_cb8;
  ulong uStack_cb0;
  ulong uStack_ca8;
  ulong uStack_ca0;
  ulong uStack_c98;
  ulong uStack_c90;
  ulong uStack_c88;
  ulong uStack_c80;
  ulong uStack_c78;
  ulong uStack_c70;
  undefined1 uStack_c68;
  undefined7 uStack_c67;
  undefined1 uStack_c60;
  undefined7 uStack_c5f;
  undefined1 uStack_c58;
  ulong uStack_c50;
  ulong uStack_c48;
  ulong uStack_c40;
  ulong uStack_c38;
  ulong uStack_c30;
  ulong uStack_c28;
  ulong uStack_c20;
  ulong uStack_c18;
  ulong uStack_c10;
  ulong uStack_c08;
  ulong uStack_c00;
  ulong uStack_bf8;
  ulong uStack_bf0;
  undefined1 uStack_be8;
  undefined1 uStack_be7;
  undefined6 uStack_be6;
  undefined1 uStack_be0;
  undefined1 uStack_bdf;
  undefined7 uStack_bde;
  undefined1 uStack_bd7;
  ulong uStack_bc8;
  ulong uStack_bc0;
  ulong uStack_bb8;
  ulong uStack_bb0;
  ulong uStack_ba8;
  ulong uStack_b50;
  ulong uStack_b48;
  ulong uStack_b40;
  ulong uStack_b38;
  ulong uStack_b30;
  ulong uStack_b28;
  ulong uStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_af0;
  ulong uStack_ae8;
  undefined2 uStack_ae0;
  ulong uStack_ad0;
  ulong uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  ulong uStack_aa8;
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  ulong uStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  ulong uStack_a00;
  undefined2 uStack_9f8;
  undefined6 uStack_9f6;
  undefined2 uStack_9f0;
  undefined8 uStack_9ee;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  undefined1 uStack_958;
  undefined1 uStack_957;
  undefined6 uStack_956;
  undefined1 uStack_950;
  undefined1 uStack_94f;
  undefined6 uStack_94e;
  undefined1 uStack_948;
  undefined1 uStack_947;
  undefined6 uStack_946;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  undefined2 uStack_8e8;
  undefined6 uStack_8e6;
  undefined2 uStack_8e0;
  undefined6 uStack_8de;
  undefined1 uStack_8d8;
  undefined1 uStack_8d7;
  undefined6 uStack_8d6;
  undefined1 uStack_8d0;
  undefined1 uStack_8cf;
  undefined6 uStack_8ce;
  undefined1 uStack_8c8;
  undefined1 uStack_8c7;
  undefined6 uStack_8c6;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  undefined2 uStack_840;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  undefined2 uStack_7c0;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  undefined2 uStack_560;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  byte abStack_3f0 [8];
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  byte bStack_3d0;
  ulong uStack_3c8;
  byte abStack_3c0 [8];
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  byte bStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined8 uStack_31f;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined8 uStack_29f;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar8 = param_1[1];
  uVar7 = param_2[1];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if ((uVar9 != *param_2 || uVar8 != uVar7) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar9,uVar8,*param_2,uVar7,0), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if ((double)param_1[3] != (double)param_2[3]) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  if (param_1[5] != param_2[5]) {
    return 0;
  }
  if ((double)param_1[6] != (double)param_2[6]) {
    return 0;
  }
  if ((double)param_1[7] != (double)param_2[7]) {
    return 0;
  }
  if ((double)param_1[8] != (double)param_2[8]) {
    return 0;
  }
  if ((double)param_1[9] != (double)param_2[9]) {
    return 0;
  }
  uVar7 = param_1[10];
  uVar8 = param_2[10];
  if (uVar7 == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    FUN_10422988c(uVar7,uVar8);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0xb] != param_2[0xb]) {
    return 0;
  }
  if ((double)param_1[0xc] != (double)param_2[0xc]) {
    return 0;
  }
  uVar8 = param_1[0xe];
  uVar7 = param_2[0xe];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    uVar9 = param_1[0xd];
    if (((uVar9 != param_2[0xd]) || (uVar8 != uVar7)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar9,uVar8,param_2[0xd],uVar7,0), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if ((((byte)param_1[0xf] ^ (byte)param_2[0xf]) & 1) != 0) {
    return 0;
  }
  uStack_968 = param_1[0x1b];
  uStack_970 = param_1[0x1a];
  uStack_618 = param_1[0x1d];
  uStack_620 = param_1[0x1c];
  uVar9 = param_1[0x1d];
  uStack_960 = param_1[0x1c];
  uStack_608 = param_1[0x1f];
  uStack_610 = param_1[0x1e];
  uStack_9a8 = param_1[0x13];
  uStack_9b0 = param_1[0x12];
  uStack_658 = param_1[0x15];
  uStack_660 = param_1[0x14];
  uStack_998 = param_1[0x15];
  uStack_9a0 = param_1[0x14];
  uStack_648 = param_1[0x17];
  uStack_650 = param_1[0x16];
  uStack_988 = param_1[0x17];
  uStack_990 = param_1[0x16];
  uStack_638 = param_1[0x19];
  uStack_640 = param_1[0x18];
  uStack_978 = param_1[0x19];
  uStack_980 = param_1[0x18];
  uStack_628 = param_1[0x1b];
  uStack_630 = param_1[0x1a];
  uStack_678 = param_1[0x11];
  uStack_680 = param_1[0x10];
  uStack_668 = param_1[0x13];
  uStack_670 = param_1[0x12];
  uStack_9b8 = param_1[0x11];
  uStack_9c0 = param_1[0x10];
  uStack_6a8 = param_2[0x1d];
  uStack_6b0 = param_2[0x1c];
  uVar11 = param_2[0x1d];
  uVar10 = param_2[0x1c];
  uStack_698 = param_2[0x1f];
  uStack_6a0 = param_2[0x1e];
  uStack_920 = param_2[0x13];
  uStack_928 = param_2[0x12];
  uStack_6e8 = param_2[0x15];
  uStack_6f0 = param_2[0x14];
  uStack_910 = param_2[0x15];
  uStack_918 = param_2[0x14];
  uStack_6d8 = param_2[0x17];
  uStack_6e0 = param_2[0x16];
  uStack_900 = param_2[0x17];
  uStack_908 = param_2[0x16];
  uStack_6c8 = param_2[0x19];
  uStack_6d0 = param_2[0x18];
  uStack_8f0 = param_2[0x19];
  uStack_8f8 = param_2[0x18];
  uStack_6b8 = param_2[0x1b];
  uStack_6c0 = param_2[0x1a];
  uStack_708 = param_2[0x11];
  uStack_710 = param_2[0x10];
  uStack_6f8 = param_2[0x13];
  uStack_700 = param_2[0x12];
  uStack_930 = param_2[0x11];
  uStack_938 = param_2[0x10];
  uVar8 = param_1[0x1f];
  uVar7 = param_1[0x1e];
  uStack_958 = (undefined1)uVar9;
  uStack_957 = (undefined1)(uVar9 >> 8);
  uStack_956 = (undefined6)(uVar9 >> 0x10);
  uStack_948 = (undefined1)uVar8;
  uStack_947 = (undefined1)(uVar8 >> 8);
  uStack_946 = (undefined6)(uVar8 >> 0x10);
  uStack_950 = (undefined1)uVar7;
  uStack_94f = (undefined1)(uVar7 >> 8);
  uStack_94e = (undefined6)(uVar7 >> 0x10);
  uStack_8e0 = (undefined2)param_2[0x1b];
  uStack_8de = (undefined6)(param_2[0x1b] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x1a];
  uStack_8e6 = (undefined6)(param_2[0x1a] >> 0x10);
  uStack_8d0 = (undefined1)uVar11;
  uStack_8cf = (undefined1)(uVar11 >> 8);
  uStack_8ce = (undefined6)(uVar11 >> 0x10);
  uStack_8d8 = (undefined1)uVar10;
  uStack_8d7 = (undefined1)(uVar10 >> 8);
  uStack_8d6 = (undefined6)(uVar10 >> 0x10);
  uStack_8c0 = param_2[0x1f];
  uVar7 = param_2[0x1e];
  uStack_8c8 = (undefined1)uVar7;
  uStack_8c7 = (undefined1)(uVar7 >> 8);
  uStack_8c6 = (undefined6)(uVar7 >> 0x10);
  uStack_600 = param_1[0x20];
  uStack_690 = param_2[0x20];
  uStack_940 = param_1[0x20];
  uStack_8b8 = param_2[0x20];
  iVar2 = (int)&uStack_9c0;
  func_0x0001034bba7c();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_938;
    func_0x0001034bba7c();
    if (iVar2 != 1) goto LAB_10421ba0c;
    uStack_a68 = CONCAT62(uStack_956,CONCAT11(uStack_957,uStack_958));
    uStack_a58 = CONCAT62(uStack_946,CONCAT11(uStack_947,uStack_948));
    uStack_a60 = CONCAT62(uStack_94e,CONCAT11(uStack_94f,uStack_950));
    uStack_a70 = uStack_960;
    uStack_a50 = uStack_940;
    uStack_aa8 = uStack_998;
    uStack_ab0 = uStack_9a0;
    uStack_a98 = uStack_988;
    uStack_aa0 = uStack_990;
    uStack_a78 = uStack_968;
    uStack_a80 = uStack_970;
    uStack_a88 = uStack_978;
    uStack_a90 = uStack_980;
    uStack_ab8 = uStack_9a8;
    uStack_ac0 = uStack_9b0;
    uStack_ac8 = uStack_9b8;
    uStack_ad0 = uStack_9c0;
    FUN_104218cd0(&uStack_680,&uStack_100,0x1130699e0,&UNK_10dce4790);
    FUN_104218cd0(&uStack_710,&uStack_100,0x1130699e0,&UNK_10dce4790);
    func_0x00010421e7f8(&uStack_ad0,0x1130699e0,&UNK_10dce4790);
  }
  else {
    uStack_a68 = CONCAT62(uStack_956,CONCAT11(uStack_957,uStack_958));
    uStack_a58 = CONCAT62(uStack_946,CONCAT11(uStack_947,uStack_948));
    uStack_a60 = CONCAT62(uStack_94e,CONCAT11(uStack_94f,uStack_950));
    uStack_a70 = uStack_960;
    uStack_a50 = uStack_940;
    uStack_aa8 = uStack_998;
    uStack_ab0 = uStack_9a0;
    uStack_a98 = uStack_988;
    uStack_aa0 = uStack_990;
    uStack_a78 = uStack_968;
    uStack_a80 = uStack_970;
    uStack_a88 = uStack_978;
    uStack_a90 = uStack_980;
    uStack_ab8 = uStack_9a8;
    uStack_ac0 = uStack_9b0;
    uStack_ac8 = uStack_9b8;
    uStack_ad0 = uStack_9c0;
    iVar2 = (int)&uStack_938;
    func_0x0001034bba7c();
    if (iVar2 == 1) {
LAB_10421ba0c:
      _memcpy(&uStack_ad0,&uStack_9c0,0x110);
      FUN_104218cd0(&uStack_680,&uStack_100,0x1130699e0,&UNK_10dce4790);
      FUN_104218cd0(&uStack_710,&uStack_100,0x1130699e0,&UNK_10dce4790);
      uVar5 = 0x113069a08;
      puVar6 = &UNK_10dce47f8;
      goto LAB_10421ba64;
    }
    uStack_d98 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_da0 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_d88 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_d90 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_d80 = CONCAT62(uStack_8c6,CONCAT11(uStack_8c7,uStack_8c8));
    uStack_d78 = uStack_8c0;
    uStack_d70 = uStack_8b8;
    uStack_dc8 = uStack_910;
    uStack_dd0 = uStack_918;
    uStack_db8 = uStack_900;
    uStack_dc0 = uStack_908;
    uStack_da8 = uStack_8f0;
    uStack_db0 = uStack_8f8;
    uStack_de8 = uStack_930;
    uStack_df0 = uStack_938;
    uStack_dd8 = uStack_920;
    uStack_de0 = uStack_928;
    uStack_a8 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_b0 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_98 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_a0 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_90 = CONCAT62(uStack_8c6,CONCAT11(uStack_8c7,uStack_8c8));
    uStack_88 = uStack_8c0;
    uStack_80 = uStack_8b8;
    uStack_d8 = uStack_910;
    uStack_e0 = uStack_918;
    uStack_c8 = uStack_900;
    uStack_d0 = uStack_908;
    uStack_b8 = uStack_8f0;
    uStack_c0 = uStack_8f8;
    uStack_f8 = uStack_930;
    uStack_100 = uStack_938;
    uStack_e8 = uStack_920;
    uStack_f0 = uStack_928;
    uStack_128 = uStack_a68;
    uStack_130 = uStack_a70;
    uStack_118 = uStack_a58;
    uStack_120 = uStack_a60;
    uStack_110 = uStack_a50;
    uStack_168 = uStack_aa8;
    uStack_170 = uStack_ab0;
    uStack_158 = uStack_a98;
    uStack_160 = uStack_aa0;
    uStack_138 = uStack_a78;
    uStack_140 = uStack_a80;
    uStack_148 = uStack_a88;
    uStack_150 = uStack_a90;
    uStack_178 = uStack_ab8;
    uStack_180 = uStack_ac0;
    uStack_188 = uStack_ac8;
    uStack_190 = uStack_ad0;
    FUN_104218cd0(&uStack_680,&uStack_e80,0x1130699e0,&UNK_10dce4790);
    FUN_104218cd0(&uStack_710,&uStack_e80,0x1130699e0,&UNK_10dce4790);
    puVar3 = &uStack_190;
    FUN_104220970(puVar3,&uStack_100);
    func_0x00010421e7f8(&uStack_df0,0x1130699e0,&UNK_10dce4790);
    func_0x00010421e7f8(&uStack_9c0,0x1130699e0,&UNK_10dce4790);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x21] ^ (byte)param_2[0x21]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_2[0x22] & 0xff0000000000;
  if ((param_1[0x22] & 0xff0000000000) == 0x30000000000) {
    if (uVar7 != 0x30000000000) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0x30000000000) {
      return 0;
    }
    uVar7 = param_1[0x22] & 0xffffffffffff;
    func_0x00010420fba0(uVar7,param_1[0x23],param_1[0x24] & 0xffffffff000000ff,(int)param_1[0x25],
                        param_2[0x22] & 0xffffffffffff,param_2[0x23],
                        param_2[0x24] & 0xffffffff000000ff,(int)param_2[0x25]);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if ((int)param_1[0x26] != (int)param_2[0x26]) {
    return 0;
  }
  uVar7 = param_1[0x34];
  uStack_960 = param_1[0x33];
  uVar9 = param_1[0x36];
  uVar8 = param_1[0x35];
  uStack_958 = (undefined1)uVar7;
  uStack_957 = (undefined1)(uVar7 >> 8);
  uStack_956 = (undefined6)(uVar7 >> 0x10);
  uStack_948 = (undefined1)uVar9;
  uStack_947 = (undefined1)(uVar9 >> 8);
  uStack_946 = (undefined6)(uVar9 >> 0x10);
  uStack_950 = (undefined1)uVar8;
  uStack_94f = (undefined1)(uVar8 >> 8);
  uStack_94e = (undefined6)(uVar8 >> 0x10);
  uStack_998 = param_1[0x2c];
  uStack_9a0 = param_1[0x2b];
  uStack_988 = param_1[0x2e];
  uStack_990 = param_1[0x2d];
  uStack_978 = param_1[0x30];
  uStack_980 = param_1[0x2f];
  uStack_968 = param_1[0x32];
  uStack_970 = param_1[0x31];
  uStack_9b8 = param_1[0x28];
  uStack_9c0 = param_1[0x27];
  uStack_9a8 = param_1[0x2a];
  uStack_9b0 = param_1[0x29];
  uStack_8f0 = param_2[0x30];
  uStack_8f8 = param_2[0x2f];
  uStack_8e0 = (undefined2)param_2[0x32];
  uStack_8de = (undefined6)(param_2[0x32] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x31];
  uStack_8e6 = (undefined6)(param_2[0x31] >> 0x10);
  uVar8 = param_2[0x34];
  uVar7 = param_2[0x33];
  uStack_8c0 = param_2[0x36];
  uVar9 = param_2[0x35];
  uStack_8d0 = (undefined1)uVar8;
  uStack_8cf = (undefined1)(uVar8 >> 8);
  uStack_8ce = (undefined6)(uVar8 >> 0x10);
  uStack_8d8 = (undefined1)uVar7;
  uStack_8d7 = (undefined1)(uVar7 >> 8);
  uStack_8d6 = (undefined6)(uVar7 >> 0x10);
  uStack_8c8 = (undefined1)uVar9;
  uStack_8c7 = (undefined1)(uVar9 >> 8);
  uStack_8c6 = (undefined6)(uVar9 >> 0x10);
  uStack_930 = param_2[0x28];
  uStack_938 = param_2[0x27];
  uStack_920 = param_2[0x2a];
  uStack_928 = param_2[0x29];
  uStack_910 = param_2[0x2c];
  uStack_918 = param_2[0x2b];
  uStack_900 = param_2[0x2e];
  uStack_908 = param_2[0x2d];
  uStack_940 = CONCAT71(uStack_940._1_7_,(char)param_1[0x37]);
  uStack_8b8 = CONCAT71(uStack_8b8._1_7_,(char)param_2[0x37]);
  iVar2 = (int)&uStack_9c0;
  func_0x00010187bbec();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_938;
    func_0x00010187bbec();
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    uStack_cf8 = CONCAT62(uStack_956,CONCAT11(uStack_957,uStack_958));
    uStack_ce8 = CONCAT62(uStack_946,CONCAT11(uStack_947,uStack_948));
    uStack_cf0 = CONCAT62(uStack_94e,CONCAT11(uStack_94f,uStack_950));
    uStack_d00 = uStack_960;
    uStack_ce0 = (undefined1)uStack_940;
    uStack_d38 = uStack_998;
    uStack_d40 = uStack_9a0;
    uStack_d28 = uStack_988;
    uStack_d30 = uStack_990;
    uStack_d18 = uStack_978;
    uStack_d20 = uStack_980;
    uStack_d08 = uStack_968;
    uStack_d10 = uStack_970;
    uStack_d58 = uStack_9b8;
    uStack_d60 = uStack_9c0;
    uStack_d48 = uStack_9a8;
    uStack_d50 = uStack_9b0;
    iVar2 = (int)&uStack_938;
    func_0x00010187bbec();
    if (iVar2 == 1) {
      return 0;
    }
    uStack_d98 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_da0 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_da8 = uStack_8f0;
    uStack_db0 = uStack_8f8;
    uStack_d88 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_d90 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_d80 = CONCAT62(uStack_8c6,CONCAT11(uStack_8c7,uStack_8c8));
    uStack_d78 = uStack_8c0;
    uStack_de8 = uStack_930;
    uStack_df0 = uStack_938;
    uStack_dd8 = uStack_920;
    uStack_de0 = uStack_928;
    uStack_dc8 = uStack_910;
    uStack_dd0 = uStack_918;
    uStack_db8 = uStack_900;
    uStack_dc0 = uStack_908;
    uStack_e58 = uStack_d38;
    uStack_e60 = uStack_d40;
    uStack_e48 = uStack_d28;
    uStack_e50 = uStack_d30;
    uStack_e78 = uStack_d58;
    uStack_e80 = uStack_d60;
    uStack_e68 = uStack_d48;
    uStack_e70 = uStack_d50;
    uStack_e18 = uStack_cf8;
    uStack_e20 = uStack_d00;
    uStack_e08 = uStack_ce8;
    uStack_e10 = uStack_cf0;
    uStack_e38 = uStack_d18;
    uStack_e40 = uStack_d20;
    uStack_e28 = uStack_d08;
    uStack_e30 = uStack_d10;
    puVar3 = &uStack_e80;
    FUN_104214e60(puVar3,&uStack_df0);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_978 = param_1[0x41];
  uStack_980 = param_1[0x40];
  uStack_968 = param_1[0x43];
  uStack_970 = param_1[0x42];
  uStack_960 = param_1[0x44];
  uStack_938 = param_2[0x39];
  uStack_940 = param_2[0x38];
  uStack_928 = param_2[0x3b];
  uStack_930 = param_2[0x3a];
  uStack_958 = (undefined1)param_1[0x45];
  uStack_9b8 = param_1[0x39];
  uStack_9c0 = param_1[0x38];
  uStack_9a8 = param_1[0x3b];
  uStack_9b0 = param_1[0x3a];
  uStack_998 = param_1[0x3d];
  uStack_9a0 = param_1[0x3c];
  uStack_988 = param_1[0x3f];
  uStack_990 = param_1[0x3e];
  uVar19 = *(undefined8 *)((long)param_1 + 0x231);
  uVar5 = *(undefined8 *)((long)param_1 + 0x229);
  uStack_94f = (undefined1)uVar19;
  uStack_94e = (undefined6)((ulong)uVar19 >> 8);
  uStack_948 = (undefined1)((ulong)uVar19 >> 0x38);
  uStack_957 = (undefined1)uVar5;
  uStack_956 = (undefined6)((ulong)uVar5 >> 8);
  uStack_950 = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_918 = param_2[0x3d];
  uStack_920 = param_2[0x3c];
  uStack_908 = param_2[0x3f];
  uStack_910 = param_2[0x3e];
  uStack_8f8 = param_2[0x41];
  uStack_900 = param_2[0x40];
  uStack_8f0 = param_2[0x42];
  uVar5 = *(undefined8 *)((long)param_2 + 0x231);
  uStack_8cf = (undefined1)uVar5;
  uStack_8ce = (undefined6)((ulong)uVar5 >> 8);
  uStack_8c8 = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_8d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x229) >> 0x38);
  uVar7 = param_2[0x45];
  uStack_8d8 = (undefined1)uVar7;
  uStack_8d7 = (undefined1)(uVar7 >> 8);
  uStack_8d6 = (undefined6)(uVar7 >> 0x10);
  uStack_8e0 = (undefined2)param_2[0x44];
  uStack_8de = (undefined6)(param_2[0x44] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x43];
  uStack_8e6 = (undefined6)(param_2[0x43] >> 0x10);
  iVar2 = (int)&uStack_9c0;
  func_0x0001018793b8();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_940;
    func_0x0001018793b8();
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    uStack_c88 = uStack_978;
    uStack_c90 = uStack_980;
    uStack_c78 = uStack_968;
    uStack_c80 = uStack_970;
    uStack_c68 = uStack_958;
    uStack_c70 = uStack_960;
    uStack_c5f = CONCAT61(uStack_94e,uStack_94f);
    uStack_c67 = CONCAT61(uStack_956,uStack_957);
    uStack_c58 = uStack_948;
    uStack_c60 = uStack_950;
    uStack_cc8 = uStack_9b8;
    uStack_cd0 = uStack_9c0;
    uStack_cb8 = uStack_9a8;
    uStack_cc0 = uStack_9b0;
    uStack_ca8 = uStack_998;
    uStack_cb0 = uStack_9a0;
    uStack_c98 = uStack_988;
    uStack_ca0 = uStack_990;
    iVar2 = (int)&uStack_940;
    func_0x0001018793b8();
    if (iVar2 == 1) {
      return 0;
    }
    uStack_1b8 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_1c8 = uStack_8f8;
    uStack_1d0 = uStack_900;
    uStack_1c0 = uStack_8f0;
    uStack_1a8 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_1b0 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_1a0 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_208 = uStack_938;
    uStack_210 = uStack_940;
    uStack_1f8 = uStack_928;
    uStack_200 = uStack_930;
    uStack_1e8 = uStack_918;
    uStack_1f0 = uStack_920;
    uStack_1d8 = uStack_908;
    uStack_1e0 = uStack_910;
    uStack_258 = uStack_c98;
    uStack_260 = uStack_ca0;
    uStack_268 = uStack_ca8;
    uStack_270 = uStack_cb0;
    uStack_278 = uStack_cb8;
    uStack_280 = uStack_cc0;
    uStack_288 = uStack_cc8;
    uStack_290 = uStack_cd0;
    uStack_228 = CONCAT71(uStack_c67,uStack_c68);
    uStack_220 = CONCAT71(uStack_c5f,uStack_c60);
    uStack_230 = uStack_c70;
    uStack_238 = uStack_c78;
    uStack_240 = uStack_c80;
    uStack_248 = uStack_c88;
    uStack_250 = uStack_c90;
    puVar3 = &uStack_290;
    func_0x000104707dc0(puVar3,&uStack_210);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_978 = param_1[0x51];
  uStack_980 = param_1[0x50];
  uStack_968 = param_1[0x53];
  uStack_970 = param_1[0x52];
  uStack_960 = param_1[0x54];
  uStack_938 = param_2[0x49];
  uStack_940 = param_2[0x48];
  uStack_928 = param_2[0x4b];
  uStack_930 = param_2[0x4a];
  uStack_958 = (undefined1)param_1[0x55];
  uStack_957 = (undefined1)(param_1[0x55] >> 8);
  uStack_9b8 = param_1[0x49];
  uStack_9c0 = param_1[0x48];
  uStack_9a8 = param_1[0x4b];
  uStack_9b0 = param_1[0x4a];
  uStack_998 = param_1[0x4d];
  uStack_9a0 = param_1[0x4c];
  uStack_988 = param_1[0x4f];
  uStack_990 = param_1[0x4e];
  uVar19 = *(undefined8 *)((long)param_1 + 0x2b2);
  uVar5 = *(undefined8 *)((long)param_1 + 0x2aa);
  uStack_94e = (undefined6)uVar19;
  uStack_948 = (undefined1)((ulong)uVar19 >> 0x30);
  uStack_947 = (undefined1)((ulong)uVar19 >> 0x38);
  uStack_956 = (undefined6)uVar5;
  uStack_950 = (undefined1)((ulong)uVar5 >> 0x30);
  uStack_94f = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_918 = param_2[0x4d];
  uStack_920 = param_2[0x4c];
  uStack_908 = param_2[0x4f];
  uStack_910 = param_2[0x4e];
  uStack_8f8 = param_2[0x51];
  uStack_900 = param_2[0x50];
  uStack_8f0 = param_2[0x52];
  uVar5 = *(undefined8 *)((long)param_2 + 0x2b2);
  uStack_8ce = (undefined6)uVar5;
  uStack_8c8 = (undefined1)((ulong)uVar5 >> 0x30);
  uStack_8c7 = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_8d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x2aa) >> 0x30);
  uStack_8cf = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x2aa) >> 0x38);
  uVar7 = param_2[0x55];
  uStack_8d8 = (undefined1)uVar7;
  uStack_8d7 = (undefined1)(uVar7 >> 8);
  uStack_8d6 = (undefined6)(uVar7 >> 0x10);
  uStack_8e0 = (undefined2)param_2[0x54];
  uStack_8de = (undefined6)(param_2[0x54] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x53];
  uStack_8e6 = (undefined6)(param_2[0x53] >> 0x10);
  iVar2 = (int)&uStack_9c0;
  func_0x0001034bbc64();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_940;
    func_0x0001034bbc64();
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    uStack_c08 = uStack_978;
    uStack_c10 = uStack_980;
    uStack_bf8 = uStack_968;
    uStack_c00 = uStack_970;
    uStack_be8 = uStack_958;
    uStack_be7 = uStack_957;
    uStack_bf0 = uStack_960;
    uStack_bde = CONCAT16(uStack_948,uStack_94e);
    uStack_bd7 = uStack_947;
    uStack_be6 = uStack_956;
    uStack_be0 = uStack_950;
    uStack_bdf = uStack_94f;
    uStack_c48 = uStack_9b8;
    uStack_c50 = uStack_9c0;
    uStack_c38 = uStack_9a8;
    uStack_c40 = uStack_9b0;
    uStack_c28 = uStack_998;
    uStack_c30 = uStack_9a0;
    uStack_c18 = uStack_988;
    uStack_c20 = uStack_990;
    iVar2 = (int)&uStack_940;
    func_0x0001034bbc64();
    if (iVar2 == 1) {
      return 0;
    }
    uStack_2b8 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_2c8 = uStack_8f8;
    uStack_2d0 = uStack_900;
    uStack_2c0 = uStack_8f0;
    uStack_2b0 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_2a8 = uStack_8d8;
    uStack_29f = CONCAT17(uStack_8c8,CONCAT61(uStack_8ce,uStack_8cf));
    uStack_2a7 = CONCAT61(uStack_8d6,uStack_8d7);
    uStack_2a0 = uStack_8d0;
    uStack_308 = uStack_938;
    uStack_310 = uStack_940;
    uStack_2f8 = uStack_928;
    uStack_300 = uStack_930;
    uStack_2e8 = uStack_918;
    uStack_2f0 = uStack_920;
    uStack_2d8 = uStack_908;
    uStack_2e0 = uStack_910;
    uStack_358 = uStack_c18;
    uStack_360 = uStack_c20;
    uStack_368 = uStack_c28;
    uStack_370 = uStack_c30;
    uStack_378 = uStack_c38;
    uStack_380 = uStack_c40;
    uStack_388 = uStack_c48;
    uStack_390 = uStack_c50;
    uStack_31f = CONCAT71(uStack_bde,uStack_bdf);
    uStack_320 = uStack_be0;
    uStack_328 = uStack_be8;
    uStack_327 = (undefined7)(CONCAT62(uStack_be6,CONCAT11(uStack_be7,uStack_be8)) >> 8);
    uStack_330 = uStack_bf0;
    uStack_338 = uStack_bf8;
    uStack_340 = uStack_c00;
    uStack_348 = uStack_c08;
    uStack_350 = uStack_c10;
    puVar3 = &uStack_390;
    FUN_10421198c(puVar3,&uStack_310);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x58];
  uVar7 = param_2[0x58];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_104229ca4();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x59] != param_2[0x59]) {
    return 0;
  }
  if ((((byte)param_1[0x5a] ^ (byte)param_2[0x5a]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x2d1) ^ *(byte *)((long)param_2 + 0x2d1)) & 1) != 0) {
    return 0;
  }
  if (param_1[0x5b] != param_2[0x5b]) {
    return 0;
  }
  if (param_1[0x5c] != param_2[0x5c]) {
    return 0;
  }
  if ((((byte)param_1[0x5d] ^ (byte)param_2[0x5d]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[0x5e];
  if (uVar7 == 0) {
    if (param_2[0x5e] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[0x5e] == 0) {
      return 0;
    }
    FUN_10422988c();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x5f] ^ (byte)param_2[0x5f]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x2f9) ^ *(byte *)((long)param_2 + 0x2f9)) & 1) != 0) {
    return 0;
  }
  uVar15 = param_1[0x60];
  uVar17 = param_1[0x61];
  uVar7 = param_1[0x62];
  uVar11 = param_1[99];
  uVar9 = param_1[100];
  uVar8 = param_1[0x65];
  uVar12 = param_2[0x60];
  uVar10 = param_2[0x61];
  uVar14 = param_2[0x62];
  uVar16 = param_2[99];
  uVar13 = param_2[100];
  uVar18 = param_2[0x65];
  if (uVar11 == 1) {
    if (uVar16 != 1) {
LAB_10421c168:
      func_0x00010421e7c4(uVar12,uVar10,uVar14,uVar16,uVar13,uVar18);
      func_0x00010421e7c4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
      func_0x00010189c8a4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
      func_0x00010189c8a4(uVar12,uVar10,uVar14,uVar16,uVar13,uVar18);
      return 0;
    }
  }
  else {
    if (uVar16 == 1) goto LAB_10421c168;
    abStack_3c0[0] = (byte)uVar12 & 1;
    bStack_3a0 = (byte)uVar13 & 1;
    abStack_3f0[0] = (byte)uVar15 & 1;
    bStack_3d0 = (byte)uVar9 & 1;
    pbVar4 = abStack_3f0;
    uStack_3e8 = uVar17;
    uStack_3e0 = uVar7;
    uStack_3d8 = uVar11;
    uStack_3c8 = uVar8;
    uStack_3b8 = uVar10;
    uStack_3b0 = uVar14;
    uStack_3a8 = uVar16;
    uStack_398 = uVar18;
    FUN_10420ef80(pbVar4,abStack_3c0);
    func_0x00010421e7c4(uVar12,uVar10,uVar14,uVar16,uVar13,uVar18);
    func_0x00010421e7c4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
    _swift_bridgeObjectRelease(uVar16);
    _swift_bridgeObjectRelease(uVar18);
    func_0x00010189c8a4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
    if (((ulong)pbVar4 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x66] ^ (byte)param_2[0x66]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[0x67];
  if (uVar7 == 0) {
    if (param_2[0x67] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[0x67] == 0) {
      return 0;
    }
    FUN_10422988c();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if ((int)param_1[0x68] != (int)param_2[0x68]) {
    return 0;
  }
  uVar8 = param_1[0x69];
  uVar7 = param_2[0x69];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_104229d78();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x6a];
  uVar7 = param_2[0x6a];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000104229e64();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x6b];
  uVar7 = param_2[0x6b];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000104229f0c();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[0x6d] == '\x01') {
    if ((char)param_2[0x6d] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x6d] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x6c] != (double)param_2[0x6c]) {
      return 0;
    }
  }
  if ((char)param_1[0x6f] == '\x01') {
    if ((char)param_2[0x6f] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x6f] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x6e] != (double)param_2[0x6e]) {
      return 0;
    }
  }
  if ((char)param_1[0x71] == '\x01') {
    if ((char)param_2[0x71] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x71] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x70] != (double)param_2[0x70]) {
      return 0;
    }
  }
  uVar8 = param_1[0x72];
  uVar7 = param_2[0x72];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000104229fc8();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x73];
  uVar7 = param_2[0x73];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000101731444();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = param_2[0x77] & 0xff;
  if ((param_1[0x77] & 0xff) == 2) {
    if (uVar7 != 2) {
      return 0;
    }
  }
  else {
    if (uVar7 == 2) {
      return 0;
    }
    uStack_448 = param_2[0x75];
    uStack_450 = param_2[0x74];
    uStack_440 = param_2[0x76];
    uStack_428 = param_2[0x79];
    uStack_430 = param_2[0x78];
    uStack_418 = param_2[0x7b];
    uStack_420 = param_2[0x7a];
    uStack_408 = param_2[0x7d];
    uStack_410 = param_2[0x7c];
    uStack_3f8 = param_2[0x7f];
    uStack_400 = param_2[0x7e];
    uStack_4a8 = param_1[0x75];
    uStack_4b0 = param_1[0x74];
    uStack_4a0 = param_1[0x76];
    uStack_488 = param_1[0x79];
    uStack_490 = param_1[0x78];
    uStack_478 = param_1[0x7b];
    uStack_480 = param_1[0x7a];
    uStack_468 = param_1[0x7d];
    uStack_470 = param_1[0x7c];
    uStack_458 = param_1[0x7f];
    uStack_460 = param_1[0x7e];
    puVar3 = &uStack_4b0;
    uStack_498 = param_1[0x77];
    uStack_438 = param_2[0x77];
    FUN_104228dec(puVar3,&uStack_450);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_748 = param_1[0x83];
  uStack_750 = param_1[0x82];
  uStack_738 = param_1[0x85];
  uStack_740 = param_1[0x84];
  uStack_728 = param_1[0x87];
  uStack_730 = param_1[0x86];
  uStack_718 = param_1[0x89];
  uStack_720 = param_1[0x88];
  uStack_758 = param_1[0x81];
  uStack_760 = param_1[0x80];
  uStack_798 = param_2[0x83];
  uStack_7a0 = param_2[0x82];
  uStack_788 = param_2[0x85];
  uStack_790 = param_2[0x84];
  uStack_778 = param_2[0x87];
  uStack_780 = param_2[0x86];
  uStack_768 = param_2[0x89];
  uStack_770 = param_2[0x88];
  uStack_7a8 = param_2[0x81];
  uStack_7b0 = param_2[0x80];
  uStack_9a8 = param_1[0x83];
  uStack_9b0 = param_1[0x82];
  uStack_998 = param_1[0x85];
  uStack_9a0 = param_1[0x84];
  uStack_988 = param_1[0x87];
  uStack_990 = param_1[0x86];
  uStack_978 = param_1[0x89];
  uStack_980 = param_1[0x88];
  uStack_9b8 = param_1[0x81];
  uStack_9c0 = param_1[0x80];
  uVar7 = param_2[0x83];
  uStack_960 = param_2[0x82];
  uVar9 = param_2[0x85];
  uVar8 = param_2[0x84];
  uStack_958 = (undefined1)uVar7;
  uStack_957 = (undefined1)(uVar7 >> 8);
  uStack_956 = (undefined6)(uVar7 >> 0x10);
  uStack_948 = (undefined1)uVar9;
  uStack_947 = (undefined1)(uVar9 >> 8);
  uStack_946 = (undefined6)(uVar9 >> 0x10);
  uStack_950 = (undefined1)uVar8;
  uStack_94f = (undefined1)(uVar8 >> 8);
  uStack_94e = (undefined6)(uVar8 >> 0x10);
  uStack_a48 = param_2[0x87];
  uStack_940 = param_2[0x86];
  uStack_a38 = param_2[0x89];
  uStack_a40 = param_2[0x88];
  uStack_968 = param_2[0x81];
  uStack_970 = param_2[0x80];
  uStack_938 = uStack_a48;
  uStack_930 = uStack_a40;
  uStack_928 = uStack_a38;
  if (uStack_978 == 0) {
    if (uStack_a38 != 0) goto LAB_10421c728;
    uStack_aa8 = param_1[0x85];
    uStack_ab0 = param_1[0x84];
    uStack_a98 = param_1[0x87];
    uStack_aa0 = param_1[0x86];
    uStack_a88 = param_1[0x89];
    uStack_a90 = param_1[0x88];
    uStack_ac8 = param_1[0x81];
    uStack_ad0 = param_1[0x80];
    uStack_ab8 = param_1[0x83];
    uStack_ac0 = param_1[0x82];
    FUN_104218cd0(&uStack_760,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    FUN_104218cd0(&uStack_7b0,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    func_0x00010421e7f8(&uStack_ad0,0x112dcd428,&UNK_10dbce5c0);
  }
  else {
    if (uStack_a38 == 0) {
LAB_10421c728:
      uStack_ad0 = uStack_9c0;
      uStack_ac8 = uStack_9b8;
      uStack_ac0 = uStack_9b0;
      uStack_ab8 = uStack_9a8;
      uStack_ab0 = uStack_9a0;
      uStack_aa8 = uStack_998;
      uStack_aa0 = uStack_990;
      uStack_a98 = uStack_988;
      uStack_a90 = uStack_980;
      uStack_a88 = uStack_978;
      uStack_a80 = uStack_970;
      uStack_a78 = uStack_968;
      uStack_a70 = uStack_960;
      uStack_a68 = uVar7;
      uStack_a60 = uVar8;
      uStack_a58 = uVar9;
      uStack_a50 = uStack_940;
      FUN_104218cd0(&uStack_760,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
      FUN_104218cd0(&uStack_7b0,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
      uVar5 = 0x113069a10;
      puVar6 = &UNK_10dce4800;
      goto LAB_10421ba64;
    }
    uStack_aa8 = param_2[0x85];
    uStack_ab0 = param_2[0x84];
    uStack_a98 = param_2[0x87];
    uStack_aa0 = param_2[0x86];
    uStack_a88 = param_2[0x89];
    uStack_a90 = param_2[0x88];
    uStack_ac8 = param_2[0x81];
    uStack_ad0 = param_2[0x80];
    uStack_ab8 = param_2[0x83];
    uStack_ac0 = param_2[0x82];
    uStack_548 = param_1[0x81];
    uStack_550 = param_1[0x80];
    uStack_538 = param_1[0x83];
    uStack_540 = param_1[0x82];
    uStack_528 = param_1[0x85];
    uStack_530 = param_1[0x84];
    uStack_518 = param_1[0x87];
    uStack_520 = param_1[0x86];
    uStack_508 = param_1[0x89];
    uStack_510 = param_1[0x88];
    puVar3 = &uStack_550;
    uStack_500 = uStack_ad0;
    uStack_4f8 = uStack_ac8;
    uStack_4f0 = uStack_ac0;
    uStack_4e8 = uStack_ab8;
    uStack_4e0 = uStack_ab0;
    uStack_4d8 = uStack_aa8;
    uStack_4d0 = uStack_aa0;
    uStack_4c8 = uStack_a98;
    uStack_4c0 = uStack_a90;
    uStack_4b8 = uStack_a88;
    FUN_104210b6c(puVar3,&uStack_500);
    FUN_104218cd0(&uStack_760,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    FUN_104218cd0(&uStack_7b0,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    func_0x00010421e7f8(&uStack_ad0,0x112dcd428,&UNK_10dbce5c0);
    func_0x00010421e7f8(&uStack_9c0,0x112dcd428,&UNK_10dbce5c0);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_7e8 = param_1[0x93];
  uStack_7f0 = param_1[0x92];
  uStack_7d8 = param_1[0x95];
  uStack_7e0 = param_1[0x94];
  uStack_7c8 = param_1[0x97];
  uStack_7d0 = param_1[0x96];
  uStack_7c0 = (undefined2)param_1[0x98];
  uStack_828 = param_1[0x8b];
  uStack_830 = param_1[0x8a];
  uStack_818 = param_1[0x8d];
  uStack_820 = param_1[0x8c];
  uStack_808 = param_1[0x8f];
  uStack_810 = param_1[0x8e];
  uStack_7f8 = param_1[0x91];
  uStack_800 = param_1[0x90];
  uStack_8a8 = param_2[0x8b];
  uStack_8b0 = param_2[0x8a];
  uStack_898 = param_2[0x8d];
  uStack_8a0 = param_2[0x8c];
  uStack_888 = param_2[0x8f];
  uStack_890 = param_2[0x8e];
  uStack_878 = param_2[0x91];
  uStack_880 = param_2[0x90];
  uStack_868 = param_2[0x93];
  uStack_870 = param_2[0x92];
  uStack_858 = param_2[0x95];
  uStack_860 = param_2[0x94];
  uStack_848 = param_2[0x97];
  uStack_850 = param_2[0x96];
  uStack_840 = (undefined2)param_2[0x98];
  uStack_978 = param_1[0x93];
  uStack_980 = param_1[0x92];
  uStack_968 = param_1[0x95];
  uStack_970 = param_1[0x94];
  uStack_a68 = param_1[0x97];
  uStack_960 = param_1[0x96];
  uStack_958 = (undefined1)uStack_a68;
  uStack_957 = (undefined1)(uStack_a68 >> 8);
  uStack_956 = (undefined6)(uStack_a68 >> 0x10);
  uVar1 = (undefined2)param_1[0x98];
  uStack_950 = (undefined1)uVar1;
  uStack_94f = (undefined1)((ushort)uVar1 >> 8);
  uStack_9b8 = param_1[0x8b];
  uStack_9c0 = param_1[0x8a];
  uStack_9a8 = param_1[0x8d];
  uStack_9b0 = param_1[0x8c];
  uStack_998 = param_1[0x8f];
  uStack_9a0 = param_1[0x8e];
  uStack_988 = param_1[0x91];
  uStack_990 = param_1[0x90];
  uStack_940 = param_2[0x8b];
  uVar7 = param_2[0x8a];
  uStack_a40 = param_2[0x8d];
  uStack_a48 = param_2[0x8c];
  uStack_a30 = param_2[0x8f];
  uStack_a38 = param_2[0x8e];
  uStack_a20 = param_2[0x91];
  uStack_a28 = param_2[0x90];
  uStack_948 = (undefined1)uVar7;
  uStack_947 = (undefined1)(uVar7 >> 8);
  uStack_946 = (undefined6)(uVar7 >> 0x10);
  uStack_a10 = param_2[0x93];
  uStack_a18 = param_2[0x92];
  uStack_a00 = param_2[0x95];
  uStack_a08 = param_2[0x94];
  uVar8 = param_2[0x96];
  uStack_8d8 = (undefined1)(short)param_2[0x98];
  uStack_8d7 = (undefined1)((ushort)(short)param_2[0x98] >> 8);
  uStack_8e0 = (undefined2)param_2[0x97];
  uStack_8de = (undefined6)(param_2[0x97] >> 0x10);
  uStack_8e8 = (undefined2)uVar8;
  uStack_8e6 = (undefined6)(uVar8 >> 0x10);
  uStack_938 = uStack_a48;
  uStack_930 = uStack_a40;
  uStack_928 = uStack_a38;
  uStack_920 = uStack_a30;
  uStack_918 = uStack_a28;
  uStack_910 = uStack_a20;
  uStack_908 = uStack_a18;
  uStack_900 = uStack_a10;
  uStack_8f8 = uStack_a08;
  uStack_8f0 = uStack_a00;
  if (uStack_960 == 1) {
    if (uVar8 != 1) {
LAB_10421c9d0:
      uStack_9ee = CONCAT17(uStack_8d7,CONCAT16(uStack_8d8,uStack_8de));
      uStack_9f6 = uStack_8e6;
      uStack_9f0 = uStack_8e0;
      uStack_a60 = CONCAT62(uStack_94e,uVar1);
      uStack_ad0 = uStack_9c0;
      uStack_ac8 = uStack_9b8;
      uStack_ac0 = uStack_9b0;
      uStack_ab8 = uStack_9a8;
      uStack_ab0 = uStack_9a0;
      uStack_aa8 = uStack_998;
      uStack_aa0 = uStack_990;
      uStack_a98 = uStack_988;
      uStack_a90 = uStack_980;
      uStack_a88 = uStack_978;
      uStack_a80 = uStack_970;
      uStack_a78 = uStack_968;
      uStack_a70 = uStack_960;
      uStack_a58 = uVar7;
      uStack_a50 = uStack_940;
      uStack_9f8 = uStack_8e8;
      FUN_104218cd0(&uStack_830,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
      FUN_104218cd0(&uStack_8b0,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
      uVar5 = 0x113069a18;
      puVar6 = &UNK_10dce4808;
LAB_10421ba64:
      func_0x00010421e7f8(&uStack_ad0,uVar5,puVar6);
      return 0;
    }
    uStack_a88 = param_1[0x93];
    uStack_a90 = param_1[0x92];
    uStack_a78 = param_1[0x95];
    uStack_a80 = param_1[0x94];
    uStack_a68 = param_1[0x97];
    uStack_a70 = param_1[0x96];
    uStack_a60 = CONCAT62(uStack_a60._2_6_,(short)param_1[0x98]);
    uStack_ac8 = param_1[0x8b];
    uStack_ad0 = param_1[0x8a];
    uStack_ab8 = param_1[0x8d];
    uStack_ac0 = param_1[0x8c];
    uStack_aa8 = param_1[0x8f];
    uStack_ab0 = param_1[0x8e];
    uStack_a98 = param_1[0x91];
    uStack_aa0 = param_1[0x90];
    FUN_104218cd0(&uStack_830,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
    FUN_104218cd0(&uStack_8b0,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
    func_0x00010421e7f8(&uStack_ad0,0x112dcd580,&UNK_10d98ff20);
  }
  else {
    if (uVar8 == 1) goto LAB_10421c9d0;
    uStack_b08 = param_2[0x93];
    uStack_b10 = param_2[0x92];
    uStack_af8 = param_2[0x95];
    uStack_b00 = param_2[0x94];
    uStack_ae8 = param_2[0x97];
    uStack_af0 = param_2[0x96];
    uStack_ae0 = (undefined2)param_2[0x98];
    uStack_b48 = param_2[0x8b];
    uStack_b50 = param_2[0x8a];
    uStack_b38 = param_2[0x8d];
    uStack_b40 = param_2[0x8c];
    uStack_b28 = param_2[0x8f];
    uStack_b30 = param_2[0x8e];
    uStack_b18 = param_2[0x91];
    uStack_b20 = param_2[0x90];
    uStack_a60 = CONCAT62(uStack_a60._2_6_,uStack_ae0);
    uStack_588 = param_1[0x93];
    uStack_590 = param_1[0x92];
    uStack_578 = param_1[0x95];
    uStack_580 = param_1[0x94];
    uStack_568 = param_1[0x97];
    uStack_570 = param_1[0x96];
    uStack_560 = (undefined2)param_1[0x98];
    uStack_5c8 = param_1[0x8b];
    uStack_5d0 = param_1[0x8a];
    uStack_5b8 = param_1[0x8d];
    uStack_5c0 = param_1[0x8c];
    uStack_5a8 = param_1[0x8f];
    uStack_5b0 = param_1[0x8e];
    uStack_598 = param_1[0x91];
    uStack_5a0 = param_1[0x90];
    puVar3 = &uStack_5d0;
    uStack_ad0 = uStack_b50;
    uStack_ac8 = uStack_b48;
    uStack_ac0 = uStack_b40;
    uStack_ab8 = uStack_b38;
    uStack_ab0 = uStack_b30;
    uStack_aa8 = uStack_b28;
    uStack_aa0 = uStack_b20;
    uStack_a98 = uStack_b18;
    uStack_a90 = uStack_b10;
    uStack_a88 = uStack_b08;
    uStack_a80 = uStack_b00;
    uStack_a78 = uStack_af8;
    uStack_a70 = uStack_af0;
    uStack_a68 = uStack_ae8;
    FUN_104216618(puVar3,&uStack_ad0);
    FUN_104218cd0(&uStack_830,&uStack_bc8,0x112dcd580,&UNK_10d98ff20);
    FUN_104218cd0(&uStack_8b0,&uStack_bc8,0x112dcd580,&UNK_10d98ff20);
    func_0x00010421e7f8(&uStack_b50,0x112dcd580,&UNK_10d98ff20);
    func_0x00010421e7f8(&uStack_9c0,0x112dcd580,&UNK_10d98ff20);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  if (((*(byte *)((long)param_1 + 0x4c2) ^ *(byte *)((long)param_2 + 0x4c2)) & 1) != 0) {
    return 0;
  }
  uVar8 = param_1[0x99];
  uVar7 = param_2[0x99];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_10422a0c4();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x511) == '\x01') {
    if (*(char *)((long)param_2 + 0x511) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x511) == '\x01') {
      return 0;
    }
    uStack_b28 = param_1[0x9f];
    uStack_b30 = param_1[0x9e];
    uStack_b18 = param_1[0xa1];
    uStack_b20 = param_1[0xa0];
    uStack_b10 = CONCAT71(uStack_b10._1_7_,(char)param_1[0xa2]);
    uStack_b48 = param_1[0x9b];
    uStack_b50 = param_1[0x9a];
    uStack_b38 = param_1[0x9d];
    uStack_b40 = param_1[0x9c];
    uStack_998 = param_2[0x9f];
    uStack_9a0 = param_2[0x9e];
    uStack_988 = param_2[0xa1];
    uStack_990 = param_2[0xa0];
    uStack_980 = CONCAT71(uStack_980._1_7_,(char)param_2[0xa2]);
    uStack_9b8 = param_2[0x9b];
    uStack_9c0 = param_2[0x9a];
    uStack_9a8 = param_2[0x9d];
    uStack_9b0 = param_2[0x9c];
    puVar3 = &uStack_b50;
    func_0x000104712168(puVar3,&uStack_9c0);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar9 = param_1[0xa3];
  uVar11 = param_1[0xa4];
  uVar10 = param_1[0xa5];
  uVar8 = param_1[0xa6];
  uVar7 = param_1[0xa7];
  uVar16 = param_2[0xa3];
  uVar12 = param_2[0xa4];
  uVar13 = param_2[0xa5];
  uVar15 = param_2[0xa6];
  uVar14 = param_2[0xa7];
  if (uVar11 == 0) {
    if (uVar12 != 0) goto LAB_10421cd2c;
  }
  else {
    if (uVar12 == 0) {
LAB_10421cd2c:
      func_0x00010421e838(uVar16,uVar12,uVar13,uVar15,uVar14);
      func_0x00010421e838(uVar9,uVar11,uVar10,uVar8,uVar7);
      func_0x000101895b9c(uVar9,uVar11,uVar10,uVar8,uVar7);
      func_0x000101895b9c(uVar16,uVar12,uVar13,uVar15,uVar14);
      return 0;
    }
    uStack_bc8 = uVar16;
    uStack_bc0 = uVar12;
    uStack_bb8 = uVar13;
    uStack_bb0 = uVar15;
    uStack_ba8 = uVar14;
    uStack_5f8 = uVar9;
    uStack_5f0 = uVar11;
    uStack_5e8 = uVar10;
    uStack_5e0 = uVar8;
    uStack_5d8 = uVar7;
    func_0x00010421e838(uVar16,uVar12,uVar13,uVar15,uVar14);
    func_0x00010421e838(uVar9,uVar11,uVar10,uVar8,uVar7);
    puVar3 = &uStack_5f8;
    FUN_10421b5d4(puVar3,&uStack_bc8);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar12);
    func_0x000101895b9c(uVar9,uVar11,uVar10,uVar8,uVar7);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[0xaa] == '\x01') {
    if ((char)param_2[0xaa] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xaa] == '\x01') {
      return 0;
    }
    if (param_1[0xa8] != param_2[0xa8]) {
      return 0;
    }
    if (param_1[0xa9] != param_2[0xa9]) {
      return 0;
    }
  }
  uVar7 = param_1[0xab];
  uVar8 = param_2[0xab];
  if (uVar7 == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    FUN_104218094(uVar7,param_1[0xac],(char)param_1[0xad],uVar8,param_2[0xac],(char)param_2[0xad]);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = param_1[0xae];
  uVar8 = param_2[0xae];
  if (uVar7 == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    FUN_104215b0c(uVar7,param_1[0xaf],(char)param_1[0xb0],uVar8,param_2[0xaf],(char)param_2[0xb0]);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb1];
  uVar7 = param_2[0xb1];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(uVar7);
    _objc_retain();
    uVar9 = uVar8;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb2];
  uVar7 = param_2[0xb2];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(uVar7);
    _objc_retain();
    uVar9 = uVar8;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb3];
  uVar7 = param_2[0xb3];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(uVar7);
    _objc_retain();
    uVar9 = uVar8;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb4];
  uVar7 = param_2[0xb4];
  if (uVar8 == 0) {
    if (uVar7 == 0) {
      return 1;
    }
  }
  else if (uVar7 != 0) {
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x0001038a4f38();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104219490; end: 1042194e3;  */

uint FUN_104219490(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_b70 [1448];
  undefined1 auStack_5c8 [1448];
  
  uVar1 = 0;
  _memcpy(auStack_b70,param_1,0x5a8);
  _memcpy(auStack_5c8,param_2,0x5a8);
  FUN_10421b650(auStack_b70,auStack_5c8);
  return uVar1 & 1;
}



/* Entry: 1042194e4; end: 104219aef;  */

void FUN_1042194e4(void)

{
  undefined1 *puVar1;
  undefined1 auStack_1928 [1448];
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined1 uStack_1318;
  undefined7 uStack_1317;
  undefined1 uStack_1310;
  undefined8 uStack_130f;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined1 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined4 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined1 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_114f;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10ce;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined2 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined1 uStack_1098;
  undefined8 uStack_1090;
  undefined2 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined1 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined1 uStack_1018;
  undefined8 uStack_1010;
  undefined1 uStack_1008;
  undefined8 uStack_1000;
  undefined1 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined2 uStack_ec0;
  undefined1 uStack_ebe;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined1 uStack_e80;
  undefined7 uStack_e7f;
  undefined1 uStack_e78;
  undefined7 uStack_e77;
  undefined1 uStack_e70;
  undefined1 uStack_e6f;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined1 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined1 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined1 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined1 auStack_dd0 [1448];
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined1 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6a7;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_626;
  undefined1 auStack_618 [1464];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000101895cec(&uStack_828);
  func_0x000101895d08(&uStack_7a0);
  func_0x0001018797b4(&uStack_718);
  func_0x000101895d28(&uStack_698);
  uStack_1298 = uStack_7c0;
  uStack_12a0 = uStack_7c8;
  uStack_1288 = uStack_7b0;
  uStack_1290 = uStack_7b8;
  uStack_1280 = uStack_7a8;
  uStack_12d8 = uStack_800;
  uStack_12e0 = uStack_808;
  uStack_12c8 = uStack_7f0;
  uStack_12d0 = uStack_7f8;
  uStack_12b8 = uStack_7e0;
  uStack_12c0 = uStack_7e8;
  uStack_12a8 = uStack_7d0;
  uStack_12b0 = uStack_7d8;
  uStack_12f8 = uStack_820;
  uStack_1300 = uStack_828;
  uStack_12e8 = uStack_810;
  uStack_12f0 = uStack_818;
  uStack_11e0 = uStack_738;
  uStack_11e8 = uStack_740;
  uStack_11d0 = uStack_728;
  uStack_11d8 = uStack_730;
  uStack_1220 = uStack_778;
  uStack_1228 = uStack_780;
  uStack_1210 = uStack_768;
  uStack_1218 = uStack_770;
  uStack_1200 = uStack_758;
  uStack_1208 = uStack_760;
  uStack_11f0 = uStack_748;
  uStack_11f8 = uStack_750;
  uStack_1240 = uStack_798;
  uStack_1248 = uStack_7a0;
  uStack_1230 = uStack_788;
  uStack_1238 = uStack_790;
  uStack_11c8 = uStack_720;
  uStack_114f = uStack_6a7;
  uStack_1178 = uStack_6d0;
  uStack_1180 = uStack_6d8;
  uStack_1168 = uStack_6c0;
  uStack_1170 = uStack_6c8;
  uStack_1160 = uStack_6b8;
  uStack_11b8 = uStack_710;
  uStack_11c0 = uStack_718;
  uStack_11a8 = uStack_700;
  uStack_11b0 = uStack_708;
  uStack_1198 = uStack_6f0;
  uStack_11a0 = uStack_6f8;
  uStack_1188 = uStack_6e0;
  uStack_1190 = uStack_6e8;
  uStack_10ce = uStack_626;
  uStack_1118 = uStack_670;
  uStack_1120 = uStack_678;
  uStack_1108 = uStack_660;
  uStack_1110 = uStack_668;
  uStack_1138 = uStack_690;
  uStack_1140 = uStack_698;
  uStack_1128 = uStack_680;
  uStack_1130 = uStack_688;
  uStack_10e8 = uStack_640;
  uStack_10f0 = uStack_648;
  uStack_10e0 = uStack_638;
  uStack_10f8 = uStack_650;
  uStack_1100 = uStack_658;
  uStack_fd0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  uStack_fc8 = 2;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f68 = 0;
  uStack_f70 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  uStack_fa8 = 0;
  uStack_fb0 = 0;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 1;
  uStack_ec0 = 0;
  uStack_e70 = 0;
  uStack_e78 = 0;
  uStack_e77 = 0;
  uStack_e80 = 0;
  uStack_e7f = 0;
  uStack_e88 = 0;
  uStack_e90 = 0;
  uStack_e98 = 0;
  uStack_ea0 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  uStack_e6f = 1;
  uStack_130f = 0;
  uStack_1310 = 0;
  uStack_1328 = 0;
  uStack_1330 = 0;
  uStack_1318 = 0;
  uStack_1317 = 0;
  uStack_1320 = 0;
  uStack_1348 = 0;
  uStack_1350 = 0;
  uStack_1338 = 0;
  uStack_1340 = 0;
  uStack_1368 = 0;
  uStack_1370 = 0;
  uStack_1358 = 0;
  uStack_1360 = 0;
  uStack_1378 = 0;
  uStack_1380 = 0;
  func_0x00010421e7f8(&uStack_1300,0x1130699e0,&UNK_10dce4790);
  uStack_1298 = uStack_7c0;
  uStack_12a0 = uStack_7c8;
  uStack_1288 = uStack_7b0;
  uStack_1290 = uStack_7b8;
  uStack_1280 = uStack_7a8;
  uStack_12d8 = uStack_800;
  uStack_12e0 = uStack_808;
  uStack_12c8 = uStack_7f0;
  uStack_12d0 = uStack_7f8;
  uStack_12b8 = uStack_7e0;
  uStack_12c0 = uStack_7e8;
  uStack_12a8 = uStack_7d0;
  uStack_12b0 = uStack_7d8;
  uStack_12f8 = uStack_820;
  uStack_1300 = uStack_828;
  uStack_12e8 = uStack_810;
  uStack_12f0 = uStack_818;
  uStack_1278 = 0;
  uStack_1270 = 0x30000000000;
  uStack_1260 = 0;
  uStack_1268 = 0;
  uStack_1258 = 0;
  uStack_1250 = 3;
  uStack_11e0 = uStack_738;
  uStack_11e8 = uStack_740;
  uStack_11d0 = uStack_728;
  uStack_11d8 = uStack_730;
  uStack_1220 = uStack_778;
  uStack_1228 = uStack_780;
  uStack_1210 = uStack_768;
  uStack_1218 = uStack_770;
  uStack_1200 = uStack_758;
  uStack_1208 = uStack_760;
  uStack_11f0 = uStack_748;
  uStack_11f8 = uStack_750;
  uStack_1240 = uStack_798;
  uStack_1248 = uStack_7a0;
  uStack_1230 = uStack_788;
  uStack_1238 = uStack_790;
  uStack_11c8 = uStack_720;
  uStack_114f = uStack_6a7;
  uStack_1178 = uStack_6d0;
  uStack_1180 = uStack_6d8;
  uStack_1168 = uStack_6c0;
  uStack_1170 = uStack_6c8;
  uStack_1160 = uStack_6b8;
  uStack_11b8 = uStack_710;
  uStack_11c0 = uStack_718;
  uStack_11a8 = uStack_700;
  uStack_11b0 = uStack_708;
  uStack_1198 = uStack_6f0;
  uStack_11a0 = uStack_6f8;
  uStack_1188 = uStack_6e0;
  uStack_1190 = uStack_6e8;
  uStack_10ce = uStack_626;
  uStack_1118 = uStack_670;
  uStack_1120 = uStack_678;
  uStack_1108 = uStack_660;
  uStack_1110 = uStack_668;
  uStack_1138 = uStack_690;
  uStack_1140 = uStack_698;
  uStack_1128 = uStack_680;
  uStack_1130 = uStack_688;
  uStack_10e8 = uStack_640;
  uStack_10f0 = uStack_648;
  uStack_10e0 = uStack_638;
  uStack_10f8 = uStack_650;
  uStack_1100 = uStack_658;
  uStack_1090 = 0;
  uStack_1088 = 0;
  uStack_10b0 = 0;
  uStack_10b8 = 0;
  uStack_10c0 = 0;
  uStack_10a0 = 0;
  uStack_10a8 = 0;
  uStack_1098 = 0;
  uStack_1070 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  uStack_1068 = 1;
  uStack_1050 = 0;
  uStack_1058 = 0;
  uStack_1060 = 0;
  uStack_1030 = 0;
  uStack_1038 = 0;
  uStack_1020 = 0;
  uStack_1028 = 0;
  uStack_1040 = 0;
  uStack_1048 = 0;
  uStack_1018 = 1;
  uStack_1010 = 0;
  uStack_1008 = 1;
  uStack_1000 = 0;
  uStack_ff8 = 1;
  uStack_fd0 = 0;
  uStack_fe8 = 0;
  uStack_ff0 = 0;
  uStack_fd8 = 0;
  uStack_fe0 = 0;
  uStack_fc8 = 2;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  uStack_fb8 = 0;
  uStack_fc0 = 0;
  uStack_fa8 = 0;
  uStack_fb0 = 0;
  func_0x00010421e7f8(&uStack_f80,0x112dcd428,&UNK_10dbce5c0);
  uStack_f78 = 0;
  uStack_f80 = 0;
  uStack_f68 = 0;
  uStack_f70 = 0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  func_0x00010421e7f8(&uStack_f30,0x112dcd580,&UNK_10d98ff20);
  uStack_f28 = 0;
  uStack_f30 = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 1;
  uStack_ec0 = 0;
  uStack_ebe = 0;
  uStack_eb0 = 0;
  uStack_eb8 = 0;
  uStack_ea0 = 0;
  uStack_ea8 = 0;
  uStack_e90 = 0;
  uStack_e98 = 0;
  uStack_e80 = 0;
  uStack_e88 = 0;
  uStack_e77 = 0;
  uStack_e70 = 0;
  uStack_e7f = 0;
  uStack_e78 = 0;
  uStack_e6f = 1;
  uStack_e60 = 0;
  uStack_e68 = 0;
  uStack_e50 = 0;
  uStack_e58 = 0;
  uStack_e40 = 0;
  uStack_e48 = 0;
  uStack_e38 = 0;
  uStack_e30 = 1;
  uStack_e20 = 0;
  uStack_e28 = 0;
  uStack_e18 = 0;
  uStack_e08 = 0;
  uStack_e10 = 0;
  uStack_e00 = 0;
  uStack_df0 = 0;
  uStack_df8 = 0;
  uStack_de0 = 0;
  uStack_de8 = 0;
  _memcpy(auStack_dd0,&uStack_1380,0x5a8);
  _memcpy(auStack_618,&uStack_1380,0x5a8);
  func_0x00010178e37c(auStack_dd0,auStack_1928);
  func_0x00010178e3b8(auStack_618);
  FUN_10429fef4(0);
  _objc_allocWithZone();
  puVar1 = auStack_dd0;
  FUN_10429d574();
  func_0x00010178e3b8(auStack_dd0);
  puRam0000000113813340 = puVar1;
  return;
}



/* Entry: 104219af0; end: 104219b2f; +[SCAdSnapCommonTrackInfo identity] */

void FUN_104219af0(void)

{
  if (lRam00000001130699e8 != -1) {
    _swift_once(0x1130699e8,FUN_1042194e4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113813340);
  return;
}



/* Entry: 104219b30; end: 104219bf3; -[SCAdSnapCommonTrackInfo withSwipeCount:] */

void FUN_104219b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1138 [1448];
  undefined1 auStack_b90 [88];
  undefined8 uStack_b38;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10429e778(auStack_b90);
  uStack_b38 = param_3;
  _memcpy(auStack_5e8,auStack_b90,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5e8,auStack_1138);
  puVar2 = auStack_5e8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5e8);
  _objc_release(param_1);
  func_0x00010178e3b8(auStack_b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104219bf4; end: 104219cb7; -[SCAdSnapCommonTrackInfo withLongformMaxViewedDurationInMillis:] */

void FUN_104219bf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1138 [1448];
  undefined1 auStack_b90 [96];
  undefined8 uStack_b30;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_10429e778(auStack_b90);
  uStack_b30 = param_1;
  _memcpy(auStack_5e8,auStack_b90,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5e8,auStack_1138);
  puVar2 = auStack_5e8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5e8);
  _objc_release(param_2);
  func_0x00010178e3b8(auStack_b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104219cb8; end: 104219d7b; -[SCAdSnapCommonTrackInfo withTopsnapViewTimeInMillisV2:] */

void FUN_104219cb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1138 [1448];
  undefined1 auStack_b90 [48];
  undefined8 uStack_b60;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_10429e778(auStack_b90);
  uStack_b60 = param_1;
  _memcpy(auStack_5e8,auStack_b90,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5e8,auStack_1138);
  puVar2 = auStack_5e8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5e8);
  _objc_release(param_2);
  func_0x00010178e3b8(auStack_b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104219d7c; end: 104219e3f; -[SCAdSnapCommonTrackInfo withReturnToAppTimeMsInMillis:] */

void FUN_104219d7c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1138 [1448];
  undefined1 auStack_b90 [56];
  undefined8 uStack_b58;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_10429e778(auStack_b90);
  uStack_b58 = param_1;
  _memcpy(auStack_5e8,auStack_b90,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5e8,auStack_1138);
  puVar2 = auStack_5e8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5e8);
  _objc_release(param_2);
  func_0x00010178e3b8(auStack_b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104219e40; end: 104219f0f;  */

undefined1 * FUN_104219e40(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_1128 [1448];
  undefined1 auStack_b80 [312];
  undefined1 auStack_a48 [1136];
  undefined1 auStack_5d8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_b80);
  if (param_1 == 0) {
    func_0x000101895d08(auStack_a48);
  }
  else {
    FUN_10428da08(auStack_a48,param_1);
    func_0x00010187bc08(auStack_a48);
  }
  _memcpy(auStack_5d8,auStack_b80,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5d8,auStack_1128);
  puVar1 = auStack_5d8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5d8);
  func_0x00010178e3b8(auStack_b80);
  return puVar1;
}



/* Entry: 104219f10; end: 10421a043; -[SCAdSnapCommonTrackInfo withAdLifecycleTimestamps:] */

void FUN_104219f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104219e40(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421a044; end: 10421a0a3; -[SCAdSnapCommonTrackInfo withDetailedGestureParameters:] */

void FUN_10421a044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000104219f70(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421a0a4; end: 10421a167; -[SCAdSnapCommonTrackInfo withAdSkippableType:] */

void FUN_10421a0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1138 [1448];
  undefined1 auStack_b90 [304];
  undefined8 uStack_a60;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10429e778(auStack_b90);
  uStack_a60 = param_3;
  _memcpy(auStack_5e8,auStack_b90,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5e8,auStack_1138);
  puVar2 = auStack_5e8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5e8);
  _objc_release(param_1);
  func_0x00010178e3b8(auStack_b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10421a168; end: 10421a27f; -[SCAdSnapCommonTrackInfo withTopSnapImpressionInfos:] */

void FUN_10421a168(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_16d8 [1448];
  undefined1 auStack_1130 [920];
  long lStack_d98;
  undefined1 auStack_b88 [920];
  undefined8 uStack_7f0;
  undefined8 uStack_5e0;
  undefined1 auStack_5d8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_3,PTR___s10Foundation4DataVN_110350ae0);
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_10429e778(auStack_b88);
  uStack_5e0 = uStack_7f0;
  func_0x00010421e7f8(&uStack_5e0,0x112ee42a8,&UNK_10db0f340);
  _memcpy(auStack_1130,auStack_b88,0x5a8);
  lStack_d98 = param_3;
  _memcpy(auStack_5d8,auStack_1130,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5d8,auStack_16d8);
  puVar2 = auStack_5d8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5d8);
  _objc_release(param_1);
  func_0x00010178e3b8(auStack_1130);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10421a280; end: 10421a3db;  */

undefined1 * FUN_10421a280(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined1 auStack_1198 [1448];
  undefined1 auStack_bf0 [1024];
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_bf0);
  if (param_1 == 0) {
    uStack_7a8 = 0;
    uStack_11b8 = 0;
    uStack_11c0 = 0;
    uStack_11a8 = 0;
    uStack_11b0 = 0;
    uStack_11d8 = 0;
    uStack_11e0 = 0;
    uStack_11c8 = 0;
    uStack_11d0 = 0;
    uStack_7b0 = 0;
  }
  else {
    _objc_retain(param_1);
    FUN_1042837a8(&uStack_648);
    uStack_11b8 = uStack_630;
    uStack_11c0 = uStack_638;
    uStack_11a8 = uStack_640;
    uStack_11b0 = uStack_648;
    uStack_11d8 = uStack_610;
    uStack_11e0 = uStack_618;
    uStack_11c8 = uStack_620;
    uStack_11d0 = uStack_628;
    _objc_release(param_1);
    uStack_7b0 = uStack_608;
    uStack_7a8 = uStack_600;
  }
  func_0x00010421e7f8(&uStack_7f0,0x112dcd428,&UNK_10dbce5c0);
  uStack_7d8 = uStack_11b8;
  uStack_7e0 = uStack_11c0;
  uStack_7e8 = uStack_11a8;
  uStack_7f0 = uStack_11b0;
  uStack_7b8 = uStack_11d8;
  uStack_7c0 = uStack_11e0;
  uStack_7c8 = uStack_11c8;
  uStack_7d0 = uStack_11d0;
  _memcpy(auStack_5f8,auStack_bf0,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5f8,auStack_1198);
  puVar1 = auStack_5f8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5f8);
  func_0x00010178e3b8(auStack_bf0);
  return puVar1;
}



/* Entry: 10421a3dc; end: 10421a43b; -[SCAdSnapCommonTrackInfo withEndCardInteractionInfo:] */

void FUN_10421a3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10421a280(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421a43c; end: 10421a5a7;  */

undefined1 * FUN_10421a43c(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined1 auStack_11c0 [1448];
  undefined1 auStack_c18 [1104];
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined2 uStack_758;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined2 uStack_600;
  undefined1 auStack_5f8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_c18);
  if (param_1 == 0) {
    uStack_758 = 0;
    uStack_11d8 = 0;
    uStack_11e0 = 0;
    uStack_11c8 = 0;
    uStack_11d0 = 0;
    uStack_768 = 1;
    uStack_11f8 = 0;
    uStack_1200 = 0;
    uStack_11e8 = 0;
    uStack_11f0 = 0;
    uStack_1218 = 0;
    uStack_1220 = 0;
    uStack_1208 = 0;
    uStack_1210 = 0;
    uStack_760 = 0;
  }
  else {
    _objc_retain(param_1);
    FUN_104292854(&uStack_670);
    uStack_11d8 = uStack_658;
    uStack_11e0 = uStack_660;
    uStack_11c8 = uStack_668;
    uStack_11d0 = uStack_670;
    uStack_11f8 = uStack_638;
    uStack_1200 = uStack_640;
    uStack_11e8 = uStack_648;
    uStack_11f0 = uStack_650;
    uStack_1218 = uStack_618;
    uStack_1220 = uStack_620;
    uStack_1208 = uStack_628;
    uStack_1210 = uStack_630;
    _objc_release(param_1);
    uStack_760 = uStack_608;
    uStack_768 = uStack_610;
    uStack_758 = uStack_600;
  }
  func_0x00010421e7f8(&uStack_7c8,0x112dcd580,&UNK_10d98ff20);
  uStack_7c0 = uStack_11c8;
  uStack_7c8 = uStack_11d0;
  uStack_7b0 = uStack_11d8;
  uStack_7b8 = uStack_11e0;
  uStack_7a0 = uStack_11e8;
  uStack_7a8 = uStack_11f0;
  uStack_790 = uStack_11f8;
  uStack_798 = uStack_1200;
  uStack_780 = uStack_1208;
  uStack_788 = uStack_1210;
  uStack_770 = uStack_1218;
  uStack_778 = uStack_1220;
  _memcpy(auStack_5f8,auStack_c18,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5f8,auStack_11c0);
  puVar1 = auStack_5f8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5f8);
  func_0x00010178e3b8(auStack_c18);
  return puVar1;
}



/* Entry: 10421a5a8; end: 10421a607; -[SCAdSnapCommonTrackInfo withPlayableImpressionInfo:] */

void FUN_10421a5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10421a43c(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421a608; end: 10421a733; -[SCAdSnapCommonTrackInfo withExitEvent:] */

void FUN_10421a608(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_16f8 [1448];
  undefined1 auStack_1150 [104];
  long lStack_10e8;
  undefined8 uStack_10e0;
  undefined1 auStack_ba8 [104];
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_10429e778(auStack_ba8);
  uStack_5f8 = uStack_b38;
  uStack_600 = uStack_b40;
  func_0x00010421e7f8(&uStack_600,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_1150,auStack_ba8,0x5a8);
  lStack_10e8 = param_3;
  uStack_10e0 = param_2;
  _memcpy(auStack_5e8,auStack_1150,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5e8,auStack_16f8);
  puVar2 = auStack_5e8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5e8);
  _objc_release(param_1);
  func_0x00010178e3b8(auStack_1150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10421a734; end: 10421a9fb;  */

undefined ** FUN_10421a734(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined **ppuVar4;
  undefined8 unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_1740 [1448];
  undefined1 auStack_1198 [856];
  undefined *puStack_e40;
  undefined1 auStack_bf0 [856];
  undefined8 uStack_898;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined *apuStack_608 [181];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_bf0);
  uStack_610 = uStack_898;
  _memcpy(auStack_1198,auStack_bf0,0x5a8);
  if (param_1 == 0) {
    func_0x00010421e7f8(&uStack_610,0x1130699f0,&UNK_10dce4798);
    puStack_e40 = (undefined *)0x0;
  }
  else {
    if (param_1 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_1;
      if (-1 < (long)param_1) {
        uVar5 = param_1 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 == 0) {
      func_0x00010421e7f8(&uStack_610,0x1130699f0,&UNK_10dce4798);
      puStack_e40 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      apuStack_608[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001018ace0c(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10421a9fc);
        (*pcVar3)();
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        puVar7 = (undefined8 *)(param_1 + 0x20);
        do {
          puVar2 = apuStack_608[0];
          _objc_retain(*puVar7);
          func_0x00010482fe58(&uStack_648);
          uVar6 = *(ulong *)(puVar2 + 0x10);
          apuStack_608[0] = puVar2;
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar6) {
            func_0x0001018ace0c(1 < *(ulong *)(puVar2 + 0x18),uVar6 + 1,1);
          }
          *(ulong *)(apuStack_608[0] + 0x10) = uVar6 + 1;
          *(undefined8 *)(apuStack_608[0] + uVar6 * 0x38 + 0x50) = uStack_618;
          *(undefined8 *)(apuStack_608[0] + uVar6 * 0x38 + 0x38) = uStack_630;
          *(undefined8 *)(apuStack_608[0] + uVar6 * 0x38 + 0x30) = uStack_638;
          *(undefined8 *)(apuStack_608[0] + uVar6 * 0x38 + 0x48) = uStack_620;
          *(undefined8 *)(apuStack_608[0] + uVar6 * 0x38 + 0x40) = uStack_628;
          *(undefined8 *)(apuStack_608[0] + uVar6 * 0x38 + 0x28) = uStack_640;
          *(undefined8 *)(apuStack_608[0] + uVar6 * 0x38 + 0x20) = uStack_648;
          uVar5 = uVar5 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar5 != 0);
      }
      else {
        uVar6 = 0;
        do {
          puVar2 = apuStack_608[0];
          func_0x0001042085f0(uVar6,param_1);
          func_0x00010482fe58(&uStack_648);
          uVar1 = *(ulong *)(puVar2 + 0x10);
          apuStack_608[0] = puVar2;
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
            func_0x0001018ace0c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
          }
          uVar6 = uVar6 + 1;
          *(ulong *)(apuStack_608[0] + 0x10) = uVar1 + 1;
          *(undefined8 *)(apuStack_608[0] + uVar1 * 0x38 + 0x50) = uStack_618;
          *(undefined8 *)(apuStack_608[0] + uVar1 * 0x38 + 0x38) = uStack_630;
          *(undefined8 *)(apuStack_608[0] + uVar1 * 0x38 + 0x30) = uStack_638;
          *(undefined8 *)(apuStack_608[0] + uVar1 * 0x38 + 0x48) = uStack_620;
          *(undefined8 *)(apuStack_608[0] + uVar1 * 0x38 + 0x40) = uStack_628;
          *(undefined8 *)(apuStack_608[0] + uVar1 * 0x38 + 0x28) = uStack_640;
          *(undefined8 *)(apuStack_608[0] + uVar1 * 0x38 + 0x20) = uStack_648;
        } while (uVar5 != uVar6);
      }
      puVar2 = apuStack_608[0];
      func_0x00010421e7f8(&uStack_610,0x1130699f0,&UNK_10dce4798);
      puStack_e40 = puVar2;
    }
  }
  _memcpy(apuStack_608,auStack_1198,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(apuStack_608,auStack_1740);
  ppuVar4 = apuStack_608;
  FUN_10429d574(ppuVar4);
  func_0x00010178e3b8(apuStack_608);
  func_0x00010178e3b8(auStack_1198);
  return ppuVar4;
}



/* Entry: 10421a9fc; end: 10421ab4f; -[SCAdSnapCommonTrackInfo withTooltipImpressionsArray:] */

void FUN_10421a9fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000104830004(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  }
  _objc_retain(param_1);
  lVar2 = param_3;
  FUN_10421a734(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10421ab50; end: 10421abaf; -[SCAdSnapCommonTrackInfo withCaptionCtaImpression:] */

void FUN_10421ab50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010421aa6c(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421abb0; end: 10421ad37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10421abb0(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1718 [1448];
  undefined1 auStack_1170 [1304];
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined1 auStack_bc8 [1304];
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_bc8);
  uStack_618 = uStack_6a8;
  uStack_620 = uStack_6b0;
  uStack_608 = uStack_698;
  uStack_610 = uStack_6a0;
  uStack_600 = uStack_690;
  func_0x00010421e7f8(&uStack_620,0x112f73218,&UNK_10dbce600);
  _memcpy(auStack_1170,auStack_bc8,0x5a8);
  if (param_1 == 0) {
    uVar5 = 0;
    uVar3 = 0;
    uVar6 = 0;
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_113090c18);
    uVar3 = ((undefined8 *)(param_1 + _DAT_113090c18))[1];
    uVar6 = *(undefined8 *)(param_1 + _DAT_113090c20);
    uVar4 = ((undefined8 *)(param_1 + _DAT_113090c20))[1];
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090c28);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
  }
  uStack_c58 = uVar5;
  uStack_c50 = uVar3;
  uStack_c48 = uVar6;
  uStack_c40 = uVar4;
  uStack_c38 = uVar2;
  _memcpy(auStack_5f8,auStack_1170,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5f8,auStack_1718);
  puVar1 = auStack_5f8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5f8);
  func_0x00010178e3b8(auStack_1170);
  return puVar1;
}



/* Entry: 10421ad38; end: 10421ad97; -[SCAdSnapCommonTrackInfo withPromoCodeImpression:] */

void FUN_10421ad38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10421abb0(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421ad98; end: 10421af4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10421ad98(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_1728 [1448];
  undefined1 auStack_1180 [768];
  ulong uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  ulong uStack_e60;
  undefined8 uStack_e58;
  undefined1 auStack_bd8 [768];
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 auStack_5f8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_bd8);
  uStack_628 = uStack_8d0;
  uStack_630 = uStack_8d8;
  uStack_618 = uStack_8c0;
  uStack_620 = uStack_8c8;
  uStack_608 = uStack_8b0;
  uStack_610 = uStack_8b8;
  func_0x00010421e7f8(&uStack_630,0x112dcda98,&UNK_10d990140);
  _memcpy(auStack_1180,auStack_bd8,0x5a8);
  if (param_1 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar3 = 1;
    uVar2 = 0;
  }
  else {
    uVar4 = (ulong)*(byte *)(param_1 + _DAT_11306a478);
    uVar5 = *(undefined8 *)(param_1 + _DAT_11306a480);
    uVar6 = (ulong)*(byte *)(param_1 + _DAT_11306a490);
    uVar7 = *(undefined8 *)(param_1 + _DAT_11306a488);
    uVar3 = ((undefined8 *)(param_1 + _DAT_11306a488))[1];
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306a498);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
  }
  uStack_e80 = uVar4;
  uStack_e78 = uVar5;
  uStack_e70 = uVar7;
  uStack_e68 = uVar3;
  uStack_e60 = uVar6;
  uStack_e58 = uVar2;
  _memcpy(auStack_5f8,auStack_1180,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5f8,auStack_1728);
  puVar1 = auStack_5f8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5f8);
  func_0x00010178e3b8(auStack_1180);
  return puVar1;
}



/* Entry: 10421af4c; end: 10421afab; -[SCAdSnapCommonTrackInfo withArShoppingExperienceTrack:] */

void FUN_10421af4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10421ad98(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421afac; end: 10421b06f; -[SCAdSnapCommonTrackInfo withSnapIndex:] */

void FUN_10421afac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1138 [1448];
  undefined1 auStack_b90 [16];
  undefined8 uStack_b80;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_10429e778(auStack_b90);
  uStack_b80 = param_3;
  _memcpy(auStack_5e8,auStack_b90,0x5a8);
  _objc_allocWithZone(uVar1);
  func_0x00010178e37c(auStack_5e8,auStack_1138);
  puVar2 = auStack_5e8;
  FUN_10429d574(puVar2);
  func_0x00010178e3b8(auStack_5e8);
  _objc_release(param_1);
  func_0x00010178e3b8(auStack_b90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10421b070; end: 10421b15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10421b070(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_1128 [1448];
  undefined1 auStack_b80 [1344];
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined1 uStack_630;
  undefined1 auStack_5d8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_b80);
  uStack_630 = param_1 == 0;
  if ((bool)uStack_630) {
    uStack_640 = 0;
    uStack_638 = 0;
  }
  else {
    uStack_640 = *(undefined8 *)(param_1 + _DAT_11306b758);
    uStack_638 = *(undefined8 *)(param_1 + _DAT_11306b760);
  }
  _memcpy(auStack_5d8,auStack_b80,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5d8,auStack_1128);
  puVar1 = auStack_5d8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5d8);
  func_0x00010178e3b8(auStack_b80);
  return puVar1;
}



/* Entry: 10421b160; end: 10421b1bf; -[SCAdSnapCommonTrackInfo withWakeUpUiTrackInfo:] */

void FUN_10421b160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10421b070(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421b1c0; end: 10421b373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10421b1c0(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_1708 [1448];
  undefined1 auStack_1160 [1368];
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined1 uStack_bf8;
  undefined1 auStack_bb8 [1368];
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined1 uStack_650;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined1 uStack_600;
  undefined1 auStack_5f8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_bb8);
  uStack_608 = uStack_658;
  uStack_610 = uStack_660;
  uStack_600 = uStack_650;
  _memcpy(auStack_1160,auStack_bb8,0x5a8);
  if (param_1 == 0) {
    func_0x00010421e7f8(&uStack_610,0x1130699f8,&UNK_10dce47a0);
    uVar2 = 0;
    uStack_bf8 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306acd8);
    lVar3 = *(long *)(param_1 + _DAT_11306ace0);
    _swift_bridgeObjectRetain(uVar2);
    if (lVar3 != 0) {
      uVar4 = uStack_660;
      func_0x00010bf885a0(lVar3);
      func_0x00010421e7f8(&uStack_610,0x1130699f8,&UNK_10dce47a0);
      uStack_bf8 = 0;
      goto LAB_10421b2f0;
    }
    func_0x00010421e7f8(&uStack_610,0x1130699f8,&UNK_10dce47a0);
    uStack_bf8 = 1;
  }
  uVar4 = 0;
LAB_10421b2f0:
  uStack_c08 = uVar2;
  uStack_c00 = uVar4;
  _memcpy(auStack_5f8,auStack_1160,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5f8,auStack_1708);
  puVar1 = auStack_5f8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5f8);
  func_0x00010178e3b8(auStack_1160);
  return puVar1;
}



/* Entry: 10421b374; end: 10421b3d3; -[SCAdSnapCommonTrackInfo withPollStickerTrackInfo:] */

void FUN_10421b374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10421b1c0(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421b3d4; end: 10421b573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10421b3d4(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_16f8 [1448];
  undefined1 auStack_1150 [1392];
  undefined8 uStack_be0;
  long lStack_bd8;
  undefined1 uStack_bd0;
  undefined1 auStack_ba8 [1392];
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined1 uStack_5f0;
  undefined1 auStack_5e8 [1448];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _swift_getObjectType();
  _objc_retain();
  FUN_10429e778(auStack_ba8);
  uStack_5f8 = uStack_630;
  uStack_600 = uStack_638;
  uStack_5f0 = uStack_628;
  _memcpy(auStack_1150,auStack_ba8,0x5a8);
  if (param_1 == 0) {
    func_0x00010421e7f8(&uStack_600,0x113069a00,&UNK_10dce47a8);
    uVar2 = 0;
    lVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ab08);
    lVar3 = *(long *)(param_1 + _DAT_11306ab10);
    _swift_bridgeObjectRetain(uVar2);
    if (lVar3 == 0) {
      func_0x00010421e7f8(&uStack_600,0x113069a00,&UNK_10dce47a8);
      uStack_bd0 = 1;
      goto LAB_10421b4f4;
    }
    func_0x00010c067fc0();
    func_0x00010421e7f8(&uStack_600,0x113069a00,&UNK_10dce47a8);
  }
  uStack_bd0 = 0;
LAB_10421b4f4:
  uStack_be0 = uVar2;
  lStack_bd8 = lVar3;
  _memcpy(auStack_5e8,auStack_1150,0x5a8);
  _objc_allocWithZone(unaff_x20);
  func_0x00010178e37c(auStack_5e8,auStack_16f8);
  puVar1 = auStack_5e8;
  FUN_10429d574(puVar1);
  func_0x00010178e3b8(auStack_5e8);
  func_0x00010178e3b8(auStack_1150);
  return puVar1;
}



/* Entry: 10421b574; end: 10421b5d3; -[SCAdSnapCommonTrackInfo withLiveReviewTrackInfo:] */

void FUN_10421b574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10421b3d4(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10421b5d4; end: 10421b64f;  */

bool FUN_10421b5d4(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)) &&
     ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar2 & 1) != 0)))) {
    bVar1 = (int)param_1[4] == (int)param_2[4];
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10421b650; end: 10421cfb3;  */

undefined8 FUN_10421b650(ulong *param_1,ulong *param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulong *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uStack_e80;
  ulong uStack_e78;
  ulong uStack_e70;
  ulong uStack_e68;
  ulong uStack_e60;
  ulong uStack_e58;
  ulong uStack_e50;
  ulong uStack_e48;
  ulong uStack_e40;
  ulong uStack_e38;
  ulong uStack_e30;
  ulong uStack_e28;
  ulong uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  ulong uStack_df0;
  ulong uStack_de8;
  ulong uStack_de0;
  ulong uStack_dd8;
  ulong uStack_dd0;
  ulong uStack_dc8;
  ulong uStack_dc0;
  ulong uStack_db8;
  ulong uStack_db0;
  ulong uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  ulong uStack_d78;
  ulong uStack_d70;
  ulong uStack_d60;
  ulong uStack_d58;
  ulong uStack_d50;
  ulong uStack_d48;
  ulong uStack_d40;
  ulong uStack_d38;
  ulong uStack_d30;
  ulong uStack_d28;
  ulong uStack_d20;
  ulong uStack_d18;
  ulong uStack_d10;
  ulong uStack_d08;
  ulong uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 uStack_ce0;
  ulong uStack_cd0;
  ulong uStack_cc8;
  ulong uStack_cc0;
  ulong uStack_cb8;
  ulong uStack_cb0;
  ulong uStack_ca8;
  ulong uStack_ca0;
  ulong uStack_c98;
  ulong uStack_c90;
  ulong uStack_c88;
  ulong uStack_c80;
  ulong uStack_c78;
  ulong uStack_c70;
  undefined1 uStack_c68;
  undefined7 uStack_c67;
  undefined1 uStack_c60;
  undefined7 uStack_c5f;
  undefined1 uStack_c58;
  ulong uStack_c50;
  ulong uStack_c48;
  ulong uStack_c40;
  ulong uStack_c38;
  ulong uStack_c30;
  ulong uStack_c28;
  ulong uStack_c20;
  ulong uStack_c18;
  ulong uStack_c10;
  ulong uStack_c08;
  ulong uStack_c00;
  ulong uStack_bf8;
  ulong uStack_bf0;
  undefined1 uStack_be8;
  undefined1 uStack_be7;
  undefined6 uStack_be6;
  undefined1 uStack_be0;
  undefined1 uStack_bdf;
  undefined7 uStack_bde;
  undefined1 uStack_bd7;
  ulong uStack_bc8;
  ulong uStack_bc0;
  ulong uStack_bb8;
  ulong uStack_bb0;
  ulong uStack_ba8;
  ulong uStack_b50;
  ulong uStack_b48;
  ulong uStack_b40;
  ulong uStack_b38;
  ulong uStack_b30;
  ulong uStack_b28;
  ulong uStack_b20;
  ulong uStack_b18;
  ulong uStack_b10;
  ulong uStack_b08;
  ulong uStack_b00;
  ulong uStack_af8;
  ulong uStack_af0;
  ulong uStack_ae8;
  undefined2 uStack_ae0;
  ulong uStack_ad0;
  ulong uStack_ac8;
  ulong uStack_ac0;
  ulong uStack_ab8;
  ulong uStack_ab0;
  ulong uStack_aa8;
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  ulong uStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  ulong uStack_a00;
  undefined2 uStack_9f8;
  undefined6 uStack_9f6;
  undefined2 uStack_9f0;
  undefined8 uStack_9ee;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  undefined1 uStack_958;
  undefined1 uStack_957;
  undefined6 uStack_956;
  undefined1 uStack_950;
  undefined1 uStack_94f;
  undefined6 uStack_94e;
  undefined1 uStack_948;
  undefined1 uStack_947;
  undefined6 uStack_946;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  undefined2 uStack_8e8;
  undefined6 uStack_8e6;
  undefined2 uStack_8e0;
  undefined6 uStack_8de;
  undefined1 uStack_8d8;
  undefined1 uStack_8d7;
  undefined6 uStack_8d6;
  undefined1 uStack_8d0;
  undefined1 uStack_8cf;
  undefined6 uStack_8ce;
  undefined1 uStack_8c8;
  undefined1 uStack_8c7;
  undefined6 uStack_8c6;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  undefined2 uStack_840;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  undefined2 uStack_7c0;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  undefined2 uStack_560;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  byte abStack_3f0 [8];
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  byte bStack_3d0;
  ulong uStack_3c8;
  byte abStack_3c0 [8];
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  byte bStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined8 uStack_31f;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined8 uStack_29f;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar8 = param_1[1];
  uVar7 = param_2[1];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if ((uVar9 != *param_2 || uVar8 != uVar7) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar9,uVar8,*param_2,uVar7,0), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if ((double)param_1[3] != (double)param_2[3]) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  if (param_1[5] != param_2[5]) {
    return 0;
  }
  if ((double)param_1[6] != (double)param_2[6]) {
    return 0;
  }
  if ((double)param_1[7] != (double)param_2[7]) {
    return 0;
  }
  if ((double)param_1[8] != (double)param_2[8]) {
    return 0;
  }
  if ((double)param_1[9] != (double)param_2[9]) {
    return 0;
  }
  uVar7 = param_1[10];
  uVar8 = param_2[10];
  if (uVar7 == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    FUN_10422988c(uVar7,uVar8);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0xb] != param_2[0xb]) {
    return 0;
  }
  if ((double)param_1[0xc] != (double)param_2[0xc]) {
    return 0;
  }
  uVar8 = param_1[0xe];
  uVar7 = param_2[0xe];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    uVar9 = param_1[0xd];
    if (((uVar9 != param_2[0xd]) || (uVar8 != uVar7)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar9,uVar8,param_2[0xd],uVar7,0), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if ((((byte)param_1[0xf] ^ (byte)param_2[0xf]) & 1) != 0) {
    return 0;
  }
  uStack_968 = param_1[0x1b];
  uStack_970 = param_1[0x1a];
  uStack_618 = param_1[0x1d];
  uStack_620 = param_1[0x1c];
  uVar9 = param_1[0x1d];
  uStack_960 = param_1[0x1c];
  uStack_608 = param_1[0x1f];
  uStack_610 = param_1[0x1e];
  uStack_9a8 = param_1[0x13];
  uStack_9b0 = param_1[0x12];
  uStack_658 = param_1[0x15];
  uStack_660 = param_1[0x14];
  uStack_998 = param_1[0x15];
  uStack_9a0 = param_1[0x14];
  uStack_648 = param_1[0x17];
  uStack_650 = param_1[0x16];
  uStack_988 = param_1[0x17];
  uStack_990 = param_1[0x16];
  uStack_638 = param_1[0x19];
  uStack_640 = param_1[0x18];
  uStack_978 = param_1[0x19];
  uStack_980 = param_1[0x18];
  uStack_628 = param_1[0x1b];
  uStack_630 = param_1[0x1a];
  uStack_678 = param_1[0x11];
  uStack_680 = param_1[0x10];
  uStack_668 = param_1[0x13];
  uStack_670 = param_1[0x12];
  uStack_9b8 = param_1[0x11];
  uStack_9c0 = param_1[0x10];
  uStack_6a8 = param_2[0x1d];
  uStack_6b0 = param_2[0x1c];
  uVar11 = param_2[0x1d];
  uVar10 = param_2[0x1c];
  uStack_698 = param_2[0x1f];
  uStack_6a0 = param_2[0x1e];
  uStack_920 = param_2[0x13];
  uStack_928 = param_2[0x12];
  uStack_6e8 = param_2[0x15];
  uStack_6f0 = param_2[0x14];
  uStack_910 = param_2[0x15];
  uStack_918 = param_2[0x14];
  uStack_6d8 = param_2[0x17];
  uStack_6e0 = param_2[0x16];
  uStack_900 = param_2[0x17];
  uStack_908 = param_2[0x16];
  uStack_6c8 = param_2[0x19];
  uStack_6d0 = param_2[0x18];
  uStack_8f0 = param_2[0x19];
  uStack_8f8 = param_2[0x18];
  uStack_6b8 = param_2[0x1b];
  uStack_6c0 = param_2[0x1a];
  uStack_708 = param_2[0x11];
  uStack_710 = param_2[0x10];
  uStack_6f8 = param_2[0x13];
  uStack_700 = param_2[0x12];
  uStack_930 = param_2[0x11];
  uStack_938 = param_2[0x10];
  uVar8 = param_1[0x1f];
  uVar7 = param_1[0x1e];
  uStack_958 = (undefined1)uVar9;
  uStack_957 = (undefined1)(uVar9 >> 8);
  uStack_956 = (undefined6)(uVar9 >> 0x10);
  uStack_948 = (undefined1)uVar8;
  uStack_947 = (undefined1)(uVar8 >> 8);
  uStack_946 = (undefined6)(uVar8 >> 0x10);
  uStack_950 = (undefined1)uVar7;
  uStack_94f = (undefined1)(uVar7 >> 8);
  uStack_94e = (undefined6)(uVar7 >> 0x10);
  uStack_8e0 = (undefined2)param_2[0x1b];
  uStack_8de = (undefined6)(param_2[0x1b] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x1a];
  uStack_8e6 = (undefined6)(param_2[0x1a] >> 0x10);
  uStack_8d0 = (undefined1)uVar11;
  uStack_8cf = (undefined1)(uVar11 >> 8);
  uStack_8ce = (undefined6)(uVar11 >> 0x10);
  uStack_8d8 = (undefined1)uVar10;
  uStack_8d7 = (undefined1)(uVar10 >> 8);
  uStack_8d6 = (undefined6)(uVar10 >> 0x10);
  uStack_8c0 = param_2[0x1f];
  uVar7 = param_2[0x1e];
  uStack_8c8 = (undefined1)uVar7;
  uStack_8c7 = (undefined1)(uVar7 >> 8);
  uStack_8c6 = (undefined6)(uVar7 >> 0x10);
  uStack_600 = param_1[0x20];
  uStack_690 = param_2[0x20];
  uStack_940 = param_1[0x20];
  uStack_8b8 = param_2[0x20];
  iVar2 = (int)&uStack_9c0;
  func_0x0001034bba7c();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_938;
    func_0x0001034bba7c();
    if (iVar2 != 1) goto LAB_10421ba0c;
    uStack_a68 = CONCAT62(uStack_956,CONCAT11(uStack_957,uStack_958));
    uStack_a58 = CONCAT62(uStack_946,CONCAT11(uStack_947,uStack_948));
    uStack_a60 = CONCAT62(uStack_94e,CONCAT11(uStack_94f,uStack_950));
    uStack_a70 = uStack_960;
    uStack_a50 = uStack_940;
    uStack_aa8 = uStack_998;
    uStack_ab0 = uStack_9a0;
    uStack_a98 = uStack_988;
    uStack_aa0 = uStack_990;
    uStack_a78 = uStack_968;
    uStack_a80 = uStack_970;
    uStack_a88 = uStack_978;
    uStack_a90 = uStack_980;
    uStack_ab8 = uStack_9a8;
    uStack_ac0 = uStack_9b0;
    uStack_ac8 = uStack_9b8;
    uStack_ad0 = uStack_9c0;
    FUN_104218cd0(&uStack_680,&uStack_100,0x1130699e0,&UNK_10dce4790);
    FUN_104218cd0(&uStack_710,&uStack_100,0x1130699e0,&UNK_10dce4790);
    func_0x00010421e7f8(&uStack_ad0,0x1130699e0,&UNK_10dce4790);
  }
  else {
    uStack_a68 = CONCAT62(uStack_956,CONCAT11(uStack_957,uStack_958));
    uStack_a58 = CONCAT62(uStack_946,CONCAT11(uStack_947,uStack_948));
    uStack_a60 = CONCAT62(uStack_94e,CONCAT11(uStack_94f,uStack_950));
    uStack_a70 = uStack_960;
    uStack_a50 = uStack_940;
    uStack_aa8 = uStack_998;
    uStack_ab0 = uStack_9a0;
    uStack_a98 = uStack_988;
    uStack_aa0 = uStack_990;
    uStack_a78 = uStack_968;
    uStack_a80 = uStack_970;
    uStack_a88 = uStack_978;
    uStack_a90 = uStack_980;
    uStack_ab8 = uStack_9a8;
    uStack_ac0 = uStack_9b0;
    uStack_ac8 = uStack_9b8;
    uStack_ad0 = uStack_9c0;
    iVar2 = (int)&uStack_938;
    func_0x0001034bba7c();
    if (iVar2 == 1) {
LAB_10421ba0c:
      _memcpy(&uStack_ad0,&uStack_9c0,0x110);
      FUN_104218cd0(&uStack_680,&uStack_100,0x1130699e0,&UNK_10dce4790);
      FUN_104218cd0(&uStack_710,&uStack_100,0x1130699e0,&UNK_10dce4790);
      uVar5 = 0x113069a08;
      puVar6 = &UNK_10dce47f8;
      goto LAB_10421ba64;
    }
    uStack_d98 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_da0 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_d88 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_d90 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_d80 = CONCAT62(uStack_8c6,CONCAT11(uStack_8c7,uStack_8c8));
    uStack_d78 = uStack_8c0;
    uStack_d70 = uStack_8b8;
    uStack_dc8 = uStack_910;
    uStack_dd0 = uStack_918;
    uStack_db8 = uStack_900;
    uStack_dc0 = uStack_908;
    uStack_da8 = uStack_8f0;
    uStack_db0 = uStack_8f8;
    uStack_de8 = uStack_930;
    uStack_df0 = uStack_938;
    uStack_dd8 = uStack_920;
    uStack_de0 = uStack_928;
    uStack_a8 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_b0 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_98 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_a0 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_90 = CONCAT62(uStack_8c6,CONCAT11(uStack_8c7,uStack_8c8));
    uStack_88 = uStack_8c0;
    uStack_80 = uStack_8b8;
    uStack_d8 = uStack_910;
    uStack_e0 = uStack_918;
    uStack_c8 = uStack_900;
    uStack_d0 = uStack_908;
    uStack_b8 = uStack_8f0;
    uStack_c0 = uStack_8f8;
    uStack_f8 = uStack_930;
    uStack_100 = uStack_938;
    uStack_e8 = uStack_920;
    uStack_f0 = uStack_928;
    uStack_128 = uStack_a68;
    uStack_130 = uStack_a70;
    uStack_118 = uStack_a58;
    uStack_120 = uStack_a60;
    uStack_110 = uStack_a50;
    uStack_168 = uStack_aa8;
    uStack_170 = uStack_ab0;
    uStack_158 = uStack_a98;
    uStack_160 = uStack_aa0;
    uStack_138 = uStack_a78;
    uStack_140 = uStack_a80;
    uStack_148 = uStack_a88;
    uStack_150 = uStack_a90;
    uStack_178 = uStack_ab8;
    uStack_180 = uStack_ac0;
    uStack_188 = uStack_ac8;
    uStack_190 = uStack_ad0;
    FUN_104218cd0(&uStack_680,&uStack_e80,0x1130699e0,&UNK_10dce4790);
    FUN_104218cd0(&uStack_710,&uStack_e80,0x1130699e0,&UNK_10dce4790);
    puVar3 = &uStack_190;
    FUN_104220970(puVar3,&uStack_100);
    func_0x00010421e7f8(&uStack_df0,0x1130699e0,&UNK_10dce4790);
    func_0x00010421e7f8(&uStack_9c0,0x1130699e0,&UNK_10dce4790);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x21] ^ (byte)param_2[0x21]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_2[0x22] & 0xff0000000000;
  if ((param_1[0x22] & 0xff0000000000) == 0x30000000000) {
    if (uVar7 != 0x30000000000) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0x30000000000) {
      return 0;
    }
    uVar7 = param_1[0x22] & 0xffffffffffff;
    func_0x00010420fba0(uVar7,param_1[0x23],param_1[0x24] & 0xffffffff000000ff,(int)param_1[0x25],
                        param_2[0x22] & 0xffffffffffff,param_2[0x23],
                        param_2[0x24] & 0xffffffff000000ff,(int)param_2[0x25]);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if ((int)param_1[0x26] != (int)param_2[0x26]) {
    return 0;
  }
  uVar7 = param_1[0x34];
  uStack_960 = param_1[0x33];
  uVar9 = param_1[0x36];
  uVar8 = param_1[0x35];
  uStack_958 = (undefined1)uVar7;
  uStack_957 = (undefined1)(uVar7 >> 8);
  uStack_956 = (undefined6)(uVar7 >> 0x10);
  uStack_948 = (undefined1)uVar9;
  uStack_947 = (undefined1)(uVar9 >> 8);
  uStack_946 = (undefined6)(uVar9 >> 0x10);
  uStack_950 = (undefined1)uVar8;
  uStack_94f = (undefined1)(uVar8 >> 8);
  uStack_94e = (undefined6)(uVar8 >> 0x10);
  uStack_998 = param_1[0x2c];
  uStack_9a0 = param_1[0x2b];
  uStack_988 = param_1[0x2e];
  uStack_990 = param_1[0x2d];
  uStack_978 = param_1[0x30];
  uStack_980 = param_1[0x2f];
  uStack_968 = param_1[0x32];
  uStack_970 = param_1[0x31];
  uStack_9b8 = param_1[0x28];
  uStack_9c0 = param_1[0x27];
  uStack_9a8 = param_1[0x2a];
  uStack_9b0 = param_1[0x29];
  uStack_8f0 = param_2[0x30];
  uStack_8f8 = param_2[0x2f];
  uStack_8e0 = (undefined2)param_2[0x32];
  uStack_8de = (undefined6)(param_2[0x32] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x31];
  uStack_8e6 = (undefined6)(param_2[0x31] >> 0x10);
  uVar8 = param_2[0x34];
  uVar7 = param_2[0x33];
  uStack_8c0 = param_2[0x36];
  uVar9 = param_2[0x35];
  uStack_8d0 = (undefined1)uVar8;
  uStack_8cf = (undefined1)(uVar8 >> 8);
  uStack_8ce = (undefined6)(uVar8 >> 0x10);
  uStack_8d8 = (undefined1)uVar7;
  uStack_8d7 = (undefined1)(uVar7 >> 8);
  uStack_8d6 = (undefined6)(uVar7 >> 0x10);
  uStack_8c8 = (undefined1)uVar9;
  uStack_8c7 = (undefined1)(uVar9 >> 8);
  uStack_8c6 = (undefined6)(uVar9 >> 0x10);
  uStack_930 = param_2[0x28];
  uStack_938 = param_2[0x27];
  uStack_920 = param_2[0x2a];
  uStack_928 = param_2[0x29];
  uStack_910 = param_2[0x2c];
  uStack_918 = param_2[0x2b];
  uStack_900 = param_2[0x2e];
  uStack_908 = param_2[0x2d];
  uStack_940 = CONCAT71(uStack_940._1_7_,(char)param_1[0x37]);
  uStack_8b8 = CONCAT71(uStack_8b8._1_7_,(char)param_2[0x37]);
  iVar2 = (int)&uStack_9c0;
  func_0x00010187bbec();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_938;
    func_0x00010187bbec();
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    uStack_cf8 = CONCAT62(uStack_956,CONCAT11(uStack_957,uStack_958));
    uStack_ce8 = CONCAT62(uStack_946,CONCAT11(uStack_947,uStack_948));
    uStack_cf0 = CONCAT62(uStack_94e,CONCAT11(uStack_94f,uStack_950));
    uStack_d00 = uStack_960;
    uStack_ce0 = (undefined1)uStack_940;
    uStack_d38 = uStack_998;
    uStack_d40 = uStack_9a0;
    uStack_d28 = uStack_988;
    uStack_d30 = uStack_990;
    uStack_d18 = uStack_978;
    uStack_d20 = uStack_980;
    uStack_d08 = uStack_968;
    uStack_d10 = uStack_970;
    uStack_d58 = uStack_9b8;
    uStack_d60 = uStack_9c0;
    uStack_d48 = uStack_9a8;
    uStack_d50 = uStack_9b0;
    iVar2 = (int)&uStack_938;
    func_0x00010187bbec();
    if (iVar2 == 1) {
      return 0;
    }
    uStack_d98 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_da0 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_da8 = uStack_8f0;
    uStack_db0 = uStack_8f8;
    uStack_d88 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_d90 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_d80 = CONCAT62(uStack_8c6,CONCAT11(uStack_8c7,uStack_8c8));
    uStack_d78 = uStack_8c0;
    uStack_de8 = uStack_930;
    uStack_df0 = uStack_938;
    uStack_dd8 = uStack_920;
    uStack_de0 = uStack_928;
    uStack_dc8 = uStack_910;
    uStack_dd0 = uStack_918;
    uStack_db8 = uStack_900;
    uStack_dc0 = uStack_908;
    uStack_e58 = uStack_d38;
    uStack_e60 = uStack_d40;
    uStack_e48 = uStack_d28;
    uStack_e50 = uStack_d30;
    uStack_e78 = uStack_d58;
    uStack_e80 = uStack_d60;
    uStack_e68 = uStack_d48;
    uStack_e70 = uStack_d50;
    uStack_e18 = uStack_cf8;
    uStack_e20 = uStack_d00;
    uStack_e08 = uStack_ce8;
    uStack_e10 = uStack_cf0;
    uStack_e38 = uStack_d18;
    uStack_e40 = uStack_d20;
    uStack_e28 = uStack_d08;
    uStack_e30 = uStack_d10;
    puVar3 = &uStack_e80;
    FUN_104214e60(puVar3,&uStack_df0);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_978 = param_1[0x41];
  uStack_980 = param_1[0x40];
  uStack_968 = param_1[0x43];
  uStack_970 = param_1[0x42];
  uStack_960 = param_1[0x44];
  uStack_938 = param_2[0x39];
  uStack_940 = param_2[0x38];
  uStack_928 = param_2[0x3b];
  uStack_930 = param_2[0x3a];
  uStack_958 = (undefined1)param_1[0x45];
  uStack_9b8 = param_1[0x39];
  uStack_9c0 = param_1[0x38];
  uStack_9a8 = param_1[0x3b];
  uStack_9b0 = param_1[0x3a];
  uStack_998 = param_1[0x3d];
  uStack_9a0 = param_1[0x3c];
  uStack_988 = param_1[0x3f];
  uStack_990 = param_1[0x3e];
  uVar19 = *(undefined8 *)((long)param_1 + 0x231);
  uVar5 = *(undefined8 *)((long)param_1 + 0x229);
  uStack_94f = (undefined1)uVar19;
  uStack_94e = (undefined6)((ulong)uVar19 >> 8);
  uStack_948 = (undefined1)((ulong)uVar19 >> 0x38);
  uStack_957 = (undefined1)uVar5;
  uStack_956 = (undefined6)((ulong)uVar5 >> 8);
  uStack_950 = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_918 = param_2[0x3d];
  uStack_920 = param_2[0x3c];
  uStack_908 = param_2[0x3f];
  uStack_910 = param_2[0x3e];
  uStack_8f8 = param_2[0x41];
  uStack_900 = param_2[0x40];
  uStack_8f0 = param_2[0x42];
  uVar5 = *(undefined8 *)((long)param_2 + 0x231);
  uStack_8cf = (undefined1)uVar5;
  uStack_8ce = (undefined6)((ulong)uVar5 >> 8);
  uStack_8c8 = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_8d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x229) >> 0x38);
  uVar7 = param_2[0x45];
  uStack_8d8 = (undefined1)uVar7;
  uStack_8d7 = (undefined1)(uVar7 >> 8);
  uStack_8d6 = (undefined6)(uVar7 >> 0x10);
  uStack_8e0 = (undefined2)param_2[0x44];
  uStack_8de = (undefined6)(param_2[0x44] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x43];
  uStack_8e6 = (undefined6)(param_2[0x43] >> 0x10);
  iVar2 = (int)&uStack_9c0;
  func_0x0001018793b8();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_940;
    func_0x0001018793b8();
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    uStack_c88 = uStack_978;
    uStack_c90 = uStack_980;
    uStack_c78 = uStack_968;
    uStack_c80 = uStack_970;
    uStack_c68 = uStack_958;
    uStack_c70 = uStack_960;
    uStack_c5f = CONCAT61(uStack_94e,uStack_94f);
    uStack_c67 = CONCAT61(uStack_956,uStack_957);
    uStack_c58 = uStack_948;
    uStack_c60 = uStack_950;
    uStack_cc8 = uStack_9b8;
    uStack_cd0 = uStack_9c0;
    uStack_cb8 = uStack_9a8;
    uStack_cc0 = uStack_9b0;
    uStack_ca8 = uStack_998;
    uStack_cb0 = uStack_9a0;
    uStack_c98 = uStack_988;
    uStack_ca0 = uStack_990;
    iVar2 = (int)&uStack_940;
    func_0x0001018793b8();
    if (iVar2 == 1) {
      return 0;
    }
    uStack_1b8 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_1c8 = uStack_8f8;
    uStack_1d0 = uStack_900;
    uStack_1c0 = uStack_8f0;
    uStack_1a8 = CONCAT62(uStack_8d6,CONCAT11(uStack_8d7,uStack_8d8));
    uStack_1b0 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_1a0 = CONCAT62(uStack_8ce,CONCAT11(uStack_8cf,uStack_8d0));
    uStack_208 = uStack_938;
    uStack_210 = uStack_940;
    uStack_1f8 = uStack_928;
    uStack_200 = uStack_930;
    uStack_1e8 = uStack_918;
    uStack_1f0 = uStack_920;
    uStack_1d8 = uStack_908;
    uStack_1e0 = uStack_910;
    uStack_258 = uStack_c98;
    uStack_260 = uStack_ca0;
    uStack_268 = uStack_ca8;
    uStack_270 = uStack_cb0;
    uStack_278 = uStack_cb8;
    uStack_280 = uStack_cc0;
    uStack_288 = uStack_cc8;
    uStack_290 = uStack_cd0;
    uStack_228 = CONCAT71(uStack_c67,uStack_c68);
    uStack_220 = CONCAT71(uStack_c5f,uStack_c60);
    uStack_230 = uStack_c70;
    uStack_238 = uStack_c78;
    uStack_240 = uStack_c80;
    uStack_248 = uStack_c88;
    uStack_250 = uStack_c90;
    puVar3 = &uStack_290;
    func_0x000104707dc0(puVar3,&uStack_210);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_978 = param_1[0x51];
  uStack_980 = param_1[0x50];
  uStack_968 = param_1[0x53];
  uStack_970 = param_1[0x52];
  uStack_960 = param_1[0x54];
  uStack_938 = param_2[0x49];
  uStack_940 = param_2[0x48];
  uStack_928 = param_2[0x4b];
  uStack_930 = param_2[0x4a];
  uStack_958 = (undefined1)param_1[0x55];
  uStack_957 = (undefined1)(param_1[0x55] >> 8);
  uStack_9b8 = param_1[0x49];
  uStack_9c0 = param_1[0x48];
  uStack_9a8 = param_1[0x4b];
  uStack_9b0 = param_1[0x4a];
  uStack_998 = param_1[0x4d];
  uStack_9a0 = param_1[0x4c];
  uStack_988 = param_1[0x4f];
  uStack_990 = param_1[0x4e];
  uVar19 = *(undefined8 *)((long)param_1 + 0x2b2);
  uVar5 = *(undefined8 *)((long)param_1 + 0x2aa);
  uStack_94e = (undefined6)uVar19;
  uStack_948 = (undefined1)((ulong)uVar19 >> 0x30);
  uStack_947 = (undefined1)((ulong)uVar19 >> 0x38);
  uStack_956 = (undefined6)uVar5;
  uStack_950 = (undefined1)((ulong)uVar5 >> 0x30);
  uStack_94f = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_918 = param_2[0x4d];
  uStack_920 = param_2[0x4c];
  uStack_908 = param_2[0x4f];
  uStack_910 = param_2[0x4e];
  uStack_8f8 = param_2[0x51];
  uStack_900 = param_2[0x50];
  uStack_8f0 = param_2[0x52];
  uVar5 = *(undefined8 *)((long)param_2 + 0x2b2);
  uStack_8ce = (undefined6)uVar5;
  uStack_8c8 = (undefined1)((ulong)uVar5 >> 0x30);
  uStack_8c7 = (undefined1)((ulong)uVar5 >> 0x38);
  uStack_8d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x2aa) >> 0x30);
  uStack_8cf = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x2aa) >> 0x38);
  uVar7 = param_2[0x55];
  uStack_8d8 = (undefined1)uVar7;
  uStack_8d7 = (undefined1)(uVar7 >> 8);
  uStack_8d6 = (undefined6)(uVar7 >> 0x10);
  uStack_8e0 = (undefined2)param_2[0x54];
  uStack_8de = (undefined6)(param_2[0x54] >> 0x10);
  uStack_8e8 = (undefined2)param_2[0x53];
  uStack_8e6 = (undefined6)(param_2[0x53] >> 0x10);
  iVar2 = (int)&uStack_9c0;
  func_0x0001034bbc64();
  if (iVar2 == 1) {
    iVar2 = (int)&uStack_940;
    func_0x0001034bbc64();
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    uStack_c08 = uStack_978;
    uStack_c10 = uStack_980;
    uStack_bf8 = uStack_968;
    uStack_c00 = uStack_970;
    uStack_be8 = uStack_958;
    uStack_be7 = uStack_957;
    uStack_bf0 = uStack_960;
    uStack_bde = CONCAT16(uStack_948,uStack_94e);
    uStack_bd7 = uStack_947;
    uStack_be6 = uStack_956;
    uStack_be0 = uStack_950;
    uStack_bdf = uStack_94f;
    uStack_c48 = uStack_9b8;
    uStack_c50 = uStack_9c0;
    uStack_c38 = uStack_9a8;
    uStack_c40 = uStack_9b0;
    uStack_c28 = uStack_998;
    uStack_c30 = uStack_9a0;
    uStack_c18 = uStack_988;
    uStack_c20 = uStack_990;
    iVar2 = (int)&uStack_940;
    func_0x0001034bbc64();
    if (iVar2 == 1) {
      return 0;
    }
    uStack_2b8 = CONCAT62(uStack_8e6,uStack_8e8);
    uStack_2c8 = uStack_8f8;
    uStack_2d0 = uStack_900;
    uStack_2c0 = uStack_8f0;
    uStack_2b0 = CONCAT62(uStack_8de,uStack_8e0);
    uStack_2a8 = uStack_8d8;
    uStack_29f = CONCAT17(uStack_8c8,CONCAT61(uStack_8ce,uStack_8cf));
    uStack_2a7 = CONCAT61(uStack_8d6,uStack_8d7);
    uStack_2a0 = uStack_8d0;
    uStack_308 = uStack_938;
    uStack_310 = uStack_940;
    uStack_2f8 = uStack_928;
    uStack_300 = uStack_930;
    uStack_2e8 = uStack_918;
    uStack_2f0 = uStack_920;
    uStack_2d8 = uStack_908;
    uStack_2e0 = uStack_910;
    uStack_358 = uStack_c18;
    uStack_360 = uStack_c20;
    uStack_368 = uStack_c28;
    uStack_370 = uStack_c30;
    uStack_378 = uStack_c38;
    uStack_380 = uStack_c40;
    uStack_388 = uStack_c48;
    uStack_390 = uStack_c50;
    uStack_31f = CONCAT71(uStack_bde,uStack_bdf);
    uStack_320 = uStack_be0;
    uStack_328 = uStack_be8;
    uStack_327 = (undefined7)(CONCAT62(uStack_be6,CONCAT11(uStack_be7,uStack_be8)) >> 8);
    uStack_330 = uStack_bf0;
    uStack_338 = uStack_bf8;
    uStack_340 = uStack_c00;
    uStack_348 = uStack_c08;
    uStack_350 = uStack_c10;
    puVar3 = &uStack_390;
    FUN_10421198c(puVar3,&uStack_310);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x58];
  uVar7 = param_2[0x58];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_104229ca4();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if (param_1[0x59] != param_2[0x59]) {
    return 0;
  }
  if ((((byte)param_1[0x5a] ^ (byte)param_2[0x5a]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x2d1) ^ *(byte *)((long)param_2 + 0x2d1)) & 1) != 0) {
    return 0;
  }
  if (param_1[0x5b] != param_2[0x5b]) {
    return 0;
  }
  if (param_1[0x5c] != param_2[0x5c]) {
    return 0;
  }
  if ((((byte)param_1[0x5d] ^ (byte)param_2[0x5d]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[0x5e];
  if (uVar7 == 0) {
    if (param_2[0x5e] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[0x5e] == 0) {
      return 0;
    }
    FUN_10422988c();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x5f] ^ (byte)param_2[0x5f]) & 1) != 0) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x2f9) ^ *(byte *)((long)param_2 + 0x2f9)) & 1) != 0) {
    return 0;
  }
  uVar15 = param_1[0x60];
  uVar17 = param_1[0x61];
  uVar7 = param_1[0x62];
  uVar11 = param_1[99];
  uVar9 = param_1[100];
  uVar8 = param_1[0x65];
  uVar12 = param_2[0x60];
  uVar10 = param_2[0x61];
  uVar14 = param_2[0x62];
  uVar16 = param_2[99];
  uVar13 = param_2[100];
  uVar18 = param_2[0x65];
  if (uVar11 == 1) {
    if (uVar16 != 1) {
LAB_10421c168:
      func_0x00010421e7c4(uVar12,uVar10,uVar14,uVar16,uVar13,uVar18);
      func_0x00010421e7c4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
      func_0x00010189c8a4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
      func_0x00010189c8a4(uVar12,uVar10,uVar14,uVar16,uVar13,uVar18);
      return 0;
    }
  }
  else {
    if (uVar16 == 1) goto LAB_10421c168;
    abStack_3c0[0] = (byte)uVar12 & 1;
    bStack_3a0 = (byte)uVar13 & 1;
    abStack_3f0[0] = (byte)uVar15 & 1;
    bStack_3d0 = (byte)uVar9 & 1;
    pbVar4 = abStack_3f0;
    uStack_3e8 = uVar17;
    uStack_3e0 = uVar7;
    uStack_3d8 = uVar11;
    uStack_3c8 = uVar8;
    uStack_3b8 = uVar10;
    uStack_3b0 = uVar14;
    uStack_3a8 = uVar16;
    uStack_398 = uVar18;
    FUN_10420ef80(pbVar4,abStack_3c0);
    func_0x00010421e7c4(uVar12,uVar10,uVar14,uVar16,uVar13,uVar18);
    func_0x00010421e7c4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
    _swift_bridgeObjectRelease(uVar16);
    _swift_bridgeObjectRelease(uVar18);
    func_0x00010189c8a4(uVar15,uVar17,uVar7,uVar11,uVar9,uVar8);
    if (((ulong)pbVar4 & 1) == 0) {
      return 0;
    }
  }
  if ((((byte)param_1[0x66] ^ (byte)param_2[0x66]) & 1) != 0) {
    return 0;
  }
  uVar7 = param_1[0x67];
  if (uVar7 == 0) {
    if (param_2[0x67] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[0x67] == 0) {
      return 0;
    }
    FUN_10422988c();
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  if ((int)param_1[0x68] != (int)param_2[0x68]) {
    return 0;
  }
  uVar8 = param_1[0x69];
  uVar7 = param_2[0x69];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_104229d78();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x6a];
  uVar7 = param_2[0x6a];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000104229e64();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x6b];
  uVar7 = param_2[0x6b];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000104229f0c();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[0x6d] == '\x01') {
    if ((char)param_2[0x6d] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x6d] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x6c] != (double)param_2[0x6c]) {
      return 0;
    }
  }
  if ((char)param_1[0x6f] == '\x01') {
    if ((char)param_2[0x6f] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x6f] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x6e] != (double)param_2[0x6e]) {
      return 0;
    }
  }
  if ((char)param_1[0x71] == '\x01') {
    if ((char)param_2[0x71] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0x71] == '\x01') {
      return 0;
    }
    if ((double)param_1[0x70] != (double)param_2[0x70]) {
      return 0;
    }
  }
  uVar8 = param_1[0x72];
  uVar7 = param_2[0x72];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000104229fc8();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0x73];
  uVar7 = param_2[0x73];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x000101731444();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = param_2[0x77] & 0xff;
  if ((param_1[0x77] & 0xff) == 2) {
    if (uVar7 != 2) {
      return 0;
    }
  }
  else {
    if (uVar7 == 2) {
      return 0;
    }
    uStack_448 = param_2[0x75];
    uStack_450 = param_2[0x74];
    uStack_440 = param_2[0x76];
    uStack_428 = param_2[0x79];
    uStack_430 = param_2[0x78];
    uStack_418 = param_2[0x7b];
    uStack_420 = param_2[0x7a];
    uStack_408 = param_2[0x7d];
    uStack_410 = param_2[0x7c];
    uStack_3f8 = param_2[0x7f];
    uStack_400 = param_2[0x7e];
    uStack_4a8 = param_1[0x75];
    uStack_4b0 = param_1[0x74];
    uStack_4a0 = param_1[0x76];
    uStack_488 = param_1[0x79];
    uStack_490 = param_1[0x78];
    uStack_478 = param_1[0x7b];
    uStack_480 = param_1[0x7a];
    uStack_468 = param_1[0x7d];
    uStack_470 = param_1[0x7c];
    uStack_458 = param_1[0x7f];
    uStack_460 = param_1[0x7e];
    puVar3 = &uStack_4b0;
    uStack_498 = param_1[0x77];
    uStack_438 = param_2[0x77];
    FUN_104228dec(puVar3,&uStack_450);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_748 = param_1[0x83];
  uStack_750 = param_1[0x82];
  uStack_738 = param_1[0x85];
  uStack_740 = param_1[0x84];
  uStack_728 = param_1[0x87];
  uStack_730 = param_1[0x86];
  uStack_718 = param_1[0x89];
  uStack_720 = param_1[0x88];
  uStack_758 = param_1[0x81];
  uStack_760 = param_1[0x80];
  uStack_798 = param_2[0x83];
  uStack_7a0 = param_2[0x82];
  uStack_788 = param_2[0x85];
  uStack_790 = param_2[0x84];
  uStack_778 = param_2[0x87];
  uStack_780 = param_2[0x86];
  uStack_768 = param_2[0x89];
  uStack_770 = param_2[0x88];
  uStack_7a8 = param_2[0x81];
  uStack_7b0 = param_2[0x80];
  uStack_9a8 = param_1[0x83];
  uStack_9b0 = param_1[0x82];
  uStack_998 = param_1[0x85];
  uStack_9a0 = param_1[0x84];
  uStack_988 = param_1[0x87];
  uStack_990 = param_1[0x86];
  uStack_978 = param_1[0x89];
  uStack_980 = param_1[0x88];
  uStack_9b8 = param_1[0x81];
  uStack_9c0 = param_1[0x80];
  uVar7 = param_2[0x83];
  uStack_960 = param_2[0x82];
  uVar9 = param_2[0x85];
  uVar8 = param_2[0x84];
  uStack_958 = (undefined1)uVar7;
  uStack_957 = (undefined1)(uVar7 >> 8);
  uStack_956 = (undefined6)(uVar7 >> 0x10);
  uStack_948 = (undefined1)uVar9;
  uStack_947 = (undefined1)(uVar9 >> 8);
  uStack_946 = (undefined6)(uVar9 >> 0x10);
  uStack_950 = (undefined1)uVar8;
  uStack_94f = (undefined1)(uVar8 >> 8);
  uStack_94e = (undefined6)(uVar8 >> 0x10);
  uStack_a48 = param_2[0x87];
  uStack_940 = param_2[0x86];
  uStack_a38 = param_2[0x89];
  uStack_a40 = param_2[0x88];
  uStack_968 = param_2[0x81];
  uStack_970 = param_2[0x80];
  uStack_938 = uStack_a48;
  uStack_930 = uStack_a40;
  uStack_928 = uStack_a38;
  if (uStack_978 == 0) {
    if (uStack_a38 != 0) goto LAB_10421c728;
    uStack_aa8 = param_1[0x85];
    uStack_ab0 = param_1[0x84];
    uStack_a98 = param_1[0x87];
    uStack_aa0 = param_1[0x86];
    uStack_a88 = param_1[0x89];
    uStack_a90 = param_1[0x88];
    uStack_ac8 = param_1[0x81];
    uStack_ad0 = param_1[0x80];
    uStack_ab8 = param_1[0x83];
    uStack_ac0 = param_1[0x82];
    FUN_104218cd0(&uStack_760,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    FUN_104218cd0(&uStack_7b0,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    func_0x00010421e7f8(&uStack_ad0,0x112dcd428,&UNK_10dbce5c0);
  }
  else {
    if (uStack_a38 == 0) {
LAB_10421c728:
      uStack_ad0 = uStack_9c0;
      uStack_ac8 = uStack_9b8;
      uStack_ac0 = uStack_9b0;
      uStack_ab8 = uStack_9a8;
      uStack_ab0 = uStack_9a0;
      uStack_aa8 = uStack_998;
      uStack_aa0 = uStack_990;
      uStack_a98 = uStack_988;
      uStack_a90 = uStack_980;
      uStack_a88 = uStack_978;
      uStack_a80 = uStack_970;
      uStack_a78 = uStack_968;
      uStack_a70 = uStack_960;
      uStack_a68 = uVar7;
      uStack_a60 = uVar8;
      uStack_a58 = uVar9;
      uStack_a50 = uStack_940;
      FUN_104218cd0(&uStack_760,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
      FUN_104218cd0(&uStack_7b0,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
      uVar5 = 0x113069a10;
      puVar6 = &UNK_10dce4800;
      goto LAB_10421ba64;
    }
    uStack_aa8 = param_2[0x85];
    uStack_ab0 = param_2[0x84];
    uStack_a98 = param_2[0x87];
    uStack_aa0 = param_2[0x86];
    uStack_a88 = param_2[0x89];
    uStack_a90 = param_2[0x88];
    uStack_ac8 = param_2[0x81];
    uStack_ad0 = param_2[0x80];
    uStack_ab8 = param_2[0x83];
    uStack_ac0 = param_2[0x82];
    uStack_548 = param_1[0x81];
    uStack_550 = param_1[0x80];
    uStack_538 = param_1[0x83];
    uStack_540 = param_1[0x82];
    uStack_528 = param_1[0x85];
    uStack_530 = param_1[0x84];
    uStack_518 = param_1[0x87];
    uStack_520 = param_1[0x86];
    uStack_508 = param_1[0x89];
    uStack_510 = param_1[0x88];
    puVar3 = &uStack_550;
    uStack_500 = uStack_ad0;
    uStack_4f8 = uStack_ac8;
    uStack_4f0 = uStack_ac0;
    uStack_4e8 = uStack_ab8;
    uStack_4e0 = uStack_ab0;
    uStack_4d8 = uStack_aa8;
    uStack_4d0 = uStack_aa0;
    uStack_4c8 = uStack_a98;
    uStack_4c0 = uStack_a90;
    uStack_4b8 = uStack_a88;
    FUN_104210b6c(puVar3,&uStack_500);
    FUN_104218cd0(&uStack_760,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    FUN_104218cd0(&uStack_7b0,&uStack_5d0,0x112dcd428,&UNK_10dbce5c0);
    func_0x00010421e7f8(&uStack_ad0,0x112dcd428,&UNK_10dbce5c0);
    func_0x00010421e7f8(&uStack_9c0,0x112dcd428,&UNK_10dbce5c0);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uStack_7e8 = param_1[0x93];
  uStack_7f0 = param_1[0x92];
  uStack_7d8 = param_1[0x95];
  uStack_7e0 = param_1[0x94];
  uStack_7c8 = param_1[0x97];
  uStack_7d0 = param_1[0x96];
  uStack_7c0 = (undefined2)param_1[0x98];
  uStack_828 = param_1[0x8b];
  uStack_830 = param_1[0x8a];
  uStack_818 = param_1[0x8d];
  uStack_820 = param_1[0x8c];
  uStack_808 = param_1[0x8f];
  uStack_810 = param_1[0x8e];
  uStack_7f8 = param_1[0x91];
  uStack_800 = param_1[0x90];
  uStack_8a8 = param_2[0x8b];
  uStack_8b0 = param_2[0x8a];
  uStack_898 = param_2[0x8d];
  uStack_8a0 = param_2[0x8c];
  uStack_888 = param_2[0x8f];
  uStack_890 = param_2[0x8e];
  uStack_878 = param_2[0x91];
  uStack_880 = param_2[0x90];
  uStack_868 = param_2[0x93];
  uStack_870 = param_2[0x92];
  uStack_858 = param_2[0x95];
  uStack_860 = param_2[0x94];
  uStack_848 = param_2[0x97];
  uStack_850 = param_2[0x96];
  uStack_840 = (undefined2)param_2[0x98];
  uStack_978 = param_1[0x93];
  uStack_980 = param_1[0x92];
  uStack_968 = param_1[0x95];
  uStack_970 = param_1[0x94];
  uStack_a68 = param_1[0x97];
  uStack_960 = param_1[0x96];
  uStack_958 = (undefined1)uStack_a68;
  uStack_957 = (undefined1)(uStack_a68 >> 8);
  uStack_956 = (undefined6)(uStack_a68 >> 0x10);
  uVar1 = (undefined2)param_1[0x98];
  uStack_950 = (undefined1)uVar1;
  uStack_94f = (undefined1)((ushort)uVar1 >> 8);
  uStack_9b8 = param_1[0x8b];
  uStack_9c0 = param_1[0x8a];
  uStack_9a8 = param_1[0x8d];
  uStack_9b0 = param_1[0x8c];
  uStack_998 = param_1[0x8f];
  uStack_9a0 = param_1[0x8e];
  uStack_988 = param_1[0x91];
  uStack_990 = param_1[0x90];
  uStack_940 = param_2[0x8b];
  uVar7 = param_2[0x8a];
  uStack_a40 = param_2[0x8d];
  uStack_a48 = param_2[0x8c];
  uStack_a30 = param_2[0x8f];
  uStack_a38 = param_2[0x8e];
  uStack_a20 = param_2[0x91];
  uStack_a28 = param_2[0x90];
  uStack_948 = (undefined1)uVar7;
  uStack_947 = (undefined1)(uVar7 >> 8);
  uStack_946 = (undefined6)(uVar7 >> 0x10);
  uStack_a10 = param_2[0x93];
  uStack_a18 = param_2[0x92];
  uStack_a00 = param_2[0x95];
  uStack_a08 = param_2[0x94];
  uVar8 = param_2[0x96];
  uStack_8d8 = (undefined1)(short)param_2[0x98];
  uStack_8d7 = (undefined1)((ushort)(short)param_2[0x98] >> 8);
  uStack_8e0 = (undefined2)param_2[0x97];
  uStack_8de = (undefined6)(param_2[0x97] >> 0x10);
  uStack_8e8 = (undefined2)uVar8;
  uStack_8e6 = (undefined6)(uVar8 >> 0x10);
  uStack_938 = uStack_a48;
  uStack_930 = uStack_a40;
  uStack_928 = uStack_a38;
  uStack_920 = uStack_a30;
  uStack_918 = uStack_a28;
  uStack_910 = uStack_a20;
  uStack_908 = uStack_a18;
  uStack_900 = uStack_a10;
  uStack_8f8 = uStack_a08;
  uStack_8f0 = uStack_a00;
  if (uStack_960 == 1) {
    if (uVar8 != 1) {
LAB_10421c9d0:
      uStack_9ee = CONCAT17(uStack_8d7,CONCAT16(uStack_8d8,uStack_8de));
      uStack_9f6 = uStack_8e6;
      uStack_9f0 = uStack_8e0;
      uStack_a60 = CONCAT62(uStack_94e,uVar1);
      uStack_ad0 = uStack_9c0;
      uStack_ac8 = uStack_9b8;
      uStack_ac0 = uStack_9b0;
      uStack_ab8 = uStack_9a8;
      uStack_ab0 = uStack_9a0;
      uStack_aa8 = uStack_998;
      uStack_aa0 = uStack_990;
      uStack_a98 = uStack_988;
      uStack_a90 = uStack_980;
      uStack_a88 = uStack_978;
      uStack_a80 = uStack_970;
      uStack_a78 = uStack_968;
      uStack_a70 = uStack_960;
      uStack_a58 = uVar7;
      uStack_a50 = uStack_940;
      uStack_9f8 = uStack_8e8;
      FUN_104218cd0(&uStack_830,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
      FUN_104218cd0(&uStack_8b0,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
      uVar5 = 0x113069a18;
      puVar6 = &UNK_10dce4808;
LAB_10421ba64:
      func_0x00010421e7f8(&uStack_ad0,uVar5,puVar6);
      return 0;
    }
    uStack_a88 = param_1[0x93];
    uStack_a90 = param_1[0x92];
    uStack_a78 = param_1[0x95];
    uStack_a80 = param_1[0x94];
    uStack_a68 = param_1[0x97];
    uStack_a70 = param_1[0x96];
    uStack_a60 = CONCAT62(uStack_a60._2_6_,(short)param_1[0x98]);
    uStack_ac8 = param_1[0x8b];
    uStack_ad0 = param_1[0x8a];
    uStack_ab8 = param_1[0x8d];
    uStack_ac0 = param_1[0x8c];
    uStack_aa8 = param_1[0x8f];
    uStack_ab0 = param_1[0x8e];
    uStack_a98 = param_1[0x91];
    uStack_aa0 = param_1[0x90];
    FUN_104218cd0(&uStack_830,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
    FUN_104218cd0(&uStack_8b0,&uStack_5d0,0x112dcd580,&UNK_10d98ff20);
    func_0x00010421e7f8(&uStack_ad0,0x112dcd580,&UNK_10d98ff20);
  }
  else {
    if (uVar8 == 1) goto LAB_10421c9d0;
    uStack_b08 = param_2[0x93];
    uStack_b10 = param_2[0x92];
    uStack_af8 = param_2[0x95];
    uStack_b00 = param_2[0x94];
    uStack_ae8 = param_2[0x97];
    uStack_af0 = param_2[0x96];
    uStack_ae0 = (undefined2)param_2[0x98];
    uStack_b48 = param_2[0x8b];
    uStack_b50 = param_2[0x8a];
    uStack_b38 = param_2[0x8d];
    uStack_b40 = param_2[0x8c];
    uStack_b28 = param_2[0x8f];
    uStack_b30 = param_2[0x8e];
    uStack_b18 = param_2[0x91];
    uStack_b20 = param_2[0x90];
    uStack_a60 = CONCAT62(uStack_a60._2_6_,uStack_ae0);
    uStack_588 = param_1[0x93];
    uStack_590 = param_1[0x92];
    uStack_578 = param_1[0x95];
    uStack_580 = param_1[0x94];
    uStack_568 = param_1[0x97];
    uStack_570 = param_1[0x96];
    uStack_560 = (undefined2)param_1[0x98];
    uStack_5c8 = param_1[0x8b];
    uStack_5d0 = param_1[0x8a];
    uStack_5b8 = param_1[0x8d];
    uStack_5c0 = param_1[0x8c];
    uStack_5a8 = param_1[0x8f];
    uStack_5b0 = param_1[0x8e];
    uStack_598 = param_1[0x91];
    uStack_5a0 = param_1[0x90];
    puVar3 = &uStack_5d0;
    uStack_ad0 = uStack_b50;
    uStack_ac8 = uStack_b48;
    uStack_ac0 = uStack_b40;
    uStack_ab8 = uStack_b38;
    uStack_ab0 = uStack_b30;
    uStack_aa8 = uStack_b28;
    uStack_aa0 = uStack_b20;
    uStack_a98 = uStack_b18;
    uStack_a90 = uStack_b10;
    uStack_a88 = uStack_b08;
    uStack_a80 = uStack_b00;
    uStack_a78 = uStack_af8;
    uStack_a70 = uStack_af0;
    uStack_a68 = uStack_ae8;
    FUN_104216618(puVar3,&uStack_ad0);
    FUN_104218cd0(&uStack_830,&uStack_bc8,0x112dcd580,&UNK_10d98ff20);
    FUN_104218cd0(&uStack_8b0,&uStack_bc8,0x112dcd580,&UNK_10d98ff20);
    func_0x00010421e7f8(&uStack_b50,0x112dcd580,&UNK_10d98ff20);
    func_0x00010421e7f8(&uStack_9c0,0x112dcd580,&UNK_10d98ff20);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  if (((*(byte *)((long)param_1 + 0x4c2) ^ *(byte *)((long)param_2 + 0x4c2)) & 1) != 0) {
    return 0;
  }
  uVar8 = param_1[0x99];
  uVar7 = param_2[0x99];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_10422a0c4();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x511) == '\x01') {
    if (*(char *)((long)param_2 + 0x511) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)((long)param_2 + 0x511) == '\x01') {
      return 0;
    }
    uStack_b28 = param_1[0x9f];
    uStack_b30 = param_1[0x9e];
    uStack_b18 = param_1[0xa1];
    uStack_b20 = param_1[0xa0];
    uStack_b10 = CONCAT71(uStack_b10._1_7_,(char)param_1[0xa2]);
    uStack_b48 = param_1[0x9b];
    uStack_b50 = param_1[0x9a];
    uStack_b38 = param_1[0x9d];
    uStack_b40 = param_1[0x9c];
    uStack_998 = param_2[0x9f];
    uStack_9a0 = param_2[0x9e];
    uStack_988 = param_2[0xa1];
    uStack_990 = param_2[0xa0];
    uStack_980 = CONCAT71(uStack_980._1_7_,(char)param_2[0xa2]);
    uStack_9b8 = param_2[0x9b];
    uStack_9c0 = param_2[0x9a];
    uStack_9a8 = param_2[0x9d];
    uStack_9b0 = param_2[0x9c];
    puVar3 = &uStack_b50;
    func_0x000104712168(puVar3,&uStack_9c0);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar9 = param_1[0xa3];
  uVar11 = param_1[0xa4];
  uVar10 = param_1[0xa5];
  uVar8 = param_1[0xa6];
  uVar7 = param_1[0xa7];
  uVar16 = param_2[0xa3];
  uVar12 = param_2[0xa4];
  uVar13 = param_2[0xa5];
  uVar15 = param_2[0xa6];
  uVar14 = param_2[0xa7];
  if (uVar11 == 0) {
    if (uVar12 != 0) goto LAB_10421cd2c;
  }
  else {
    if (uVar12 == 0) {
LAB_10421cd2c:
      func_0x00010421e838(uVar16,uVar12,uVar13,uVar15,uVar14);
      func_0x00010421e838(uVar9,uVar11,uVar10,uVar8,uVar7);
      func_0x000101895b9c(uVar9,uVar11,uVar10,uVar8,uVar7);
      func_0x000101895b9c(uVar16,uVar12,uVar13,uVar15,uVar14);
      return 0;
    }
    uStack_bc8 = uVar16;
    uStack_bc0 = uVar12;
    uStack_bb8 = uVar13;
    uStack_bb0 = uVar15;
    uStack_ba8 = uVar14;
    uStack_5f8 = uVar9;
    uStack_5f0 = uVar11;
    uStack_5e8 = uVar10;
    uStack_5e0 = uVar8;
    uStack_5d8 = uVar7;
    func_0x00010421e838(uVar16,uVar12,uVar13,uVar15,uVar14);
    func_0x00010421e838(uVar9,uVar11,uVar10,uVar8,uVar7);
    puVar3 = &uStack_5f8;
    FUN_10421b5d4(puVar3,&uStack_bc8);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar12);
    func_0x000101895b9c(uVar9,uVar11,uVar10,uVar8,uVar7);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[0xaa] == '\x01') {
    if ((char)param_2[0xaa] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xaa] == '\x01') {
      return 0;
    }
    if (param_1[0xa8] != param_2[0xa8]) {
      return 0;
    }
    if (param_1[0xa9] != param_2[0xa9]) {
      return 0;
    }
  }
  uVar7 = param_1[0xab];
  uVar8 = param_2[0xab];
  if (uVar7 == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    FUN_104218094(uVar7,param_1[0xac],(char)param_1[0xad],uVar8,param_2[0xac],(char)param_2[0xad]);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  uVar7 = param_1[0xae];
  uVar8 = param_2[0xae];
  if (uVar7 == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    FUN_104215b0c(uVar7,param_1[0xaf],(char)param_1[0xb0],uVar8,param_2[0xaf],(char)param_2[0xb0]);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb1];
  uVar7 = param_2[0xb1];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(uVar7);
    _objc_retain();
    uVar9 = uVar8;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb2];
  uVar7 = param_2[0xb2];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(uVar7);
    _objc_retain();
    uVar9 = uVar8;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb3];
  uVar7 = param_2[0xb3];
  if (uVar8 == 0) {
    if (uVar7 != 0) {
      return 0;
    }
  }
  else {
    if (uVar7 == 0) {
      return 0;
    }
    func_0x0001002ed07c(0);
    _objc_retain(uVar7);
    _objc_retain();
    uVar9 = uVar8;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar8);
    _objc_release(uVar7);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar8 = param_1[0xb4];
  uVar7 = param_2[0xb4];
  if (uVar8 == 0) {
    if (uVar7 == 0) {
      return 1;
    }
  }
  else if (uVar7 != 0) {
    _swift_bridgeObjectRetain(uVar7);
    uVar9 = uVar8;
    _swift_bridgeObjectRetain();
    func_0x0001038a4f38();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar7);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10421cfb4; end: 10421d0e7;  */

long FUN_10421cfb4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10421d0e8; end: 10421d64b;  */

undefined8 * FUN_10421d0e8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  uVar4 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar4;
  param_1[4] = uVar2;
  uVar3 = param_2[6];
  uVar4 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  param_1[9] = uVar4;
  param_1[8] = uVar2;
  uVar2 = param_2[10];
  param_1[10] = uVar2;
  uVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar3;
  uVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar3;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  lVar1 = param_2[0x11];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  if (lVar1 == 0) {
    uVar3 = param_2[0x1c];
    uVar4 = param_2[0x1f];
    uVar2 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar3;
    param_1[0x1f] = uVar4;
    param_1[0x1e] = uVar2;
    param_1[0x20] = param_2[0x20];
    uVar3 = param_2[0x14];
    uVar4 = param_2[0x17];
    uVar2 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar3;
    param_1[0x17] = uVar4;
    param_1[0x16] = uVar2;
    uVar4 = param_2[0x18];
    uVar2 = param_2[0x1b];
    uVar3 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar4;
    param_1[0x1b] = uVar2;
    param_1[0x1a] = uVar3;
    uVar4 = param_2[0x10];
    uVar2 = param_2[0x13];
    uVar3 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x13] = uVar2;
    param_1[0x12] = uVar3;
  }
  else {
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = lVar1;
    uVar3 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar2 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar3;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar2;
    uVar3 = param_2[0x16];
    uVar4 = param_2[0x19];
    uVar2 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar2;
    param_1[0x1a] = param_2[0x1a];
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    uVar3 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar3;
    uVar3 = param_2[0x1f];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = uVar3;
    uVar2 = param_2[0x20];
    param_1[0x20] = uVar2;
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
  }
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  uVar3 = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x11c);
  *(undefined8 *)((long)param_1 + 0x124) = *(undefined8 *)((long)param_2 + 0x124);
  *(undefined8 *)((long)param_1 + 0x11c) = uVar3;
  param_1[0x26] = param_2[0x26];
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
  uVar3 = param_2[0x33];
  uVar4 = param_2[0x36];
  uVar2 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x33] = uVar3;
  param_1[0x36] = uVar4;
  param_1[0x35] = uVar2;
  uVar3 = param_2[0x2b];
  uVar4 = param_2[0x2e];
  uVar2 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar3;
  param_1[0x2e] = uVar4;
  param_1[0x2d] = uVar2;
  uVar4 = param_2[0x2f];
  uVar2 = param_2[0x32];
  uVar3 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x2f] = uVar4;
  param_1[0x32] = uVar2;
  param_1[0x31] = uVar3;
  uVar4 = param_2[0x27];
  uVar2 = param_2[0x2a];
  uVar3 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar4;
  param_1[0x2a] = uVar2;
  param_1[0x29] = uVar3;
  uVar3 = param_2[0x40];
  uVar4 = param_2[0x43];
  uVar2 = param_2[0x42];
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = uVar3;
  param_1[0x43] = uVar4;
  param_1[0x42] = uVar2;
  uVar3 = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x44] = uVar3;
  uVar3 = *(undefined8 *)((long)param_2 + 0x229);
  *(undefined8 *)((long)param_1 + 0x231) = *(undefined8 *)((long)param_2 + 0x231);
  *(undefined8 *)((long)param_1 + 0x229) = uVar3;
  uVar3 = param_2[0x38];
  uVar4 = param_2[0x3b];
  uVar2 = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar4;
  param_1[0x3a] = uVar2;
  uVar3 = param_2[0x3c];
  uVar4 = param_2[0x3f];
  uVar2 = param_2[0x3e];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3c] = uVar3;
  param_1[0x3f] = uVar4;
  param_1[0x3e] = uVar2;
  uVar2 = param_2[0x49];
  uVar3 = param_2[0x48];
  uVar5 = param_2[0x4b];
  uVar4 = param_2[0x4a];
  uVar6 = param_2[0x4c];
  uVar8 = param_2[0x4f];
  uVar7 = param_2[0x4e];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4c] = uVar6;
  param_1[0x4f] = uVar8;
  param_1[0x4e] = uVar7;
  param_1[0x49] = uVar2;
  param_1[0x48] = uVar3;
  param_1[0x4b] = uVar5;
  param_1[0x4a] = uVar4;
  uVar2 = param_2[0x51];
  uVar3 = param_2[0x50];
  uVar5 = param_2[0x53];
  uVar4 = param_2[0x52];
  uVar7 = param_2[0x55];
  uVar6 = param_2[0x54];
  uVar8 = *(undefined8 *)((long)param_2 + 0x2aa);
  *(undefined8 *)((long)param_1 + 0x2b2) = *(undefined8 *)((long)param_2 + 0x2b2);
  *(undefined8 *)((long)param_1 + 0x2aa) = uVar8;
  param_1[0x53] = uVar5;
  param_1[0x52] = uVar4;
  param_1[0x55] = uVar7;
  param_1[0x54] = uVar6;
  param_1[0x51] = uVar2;
  param_1[0x50] = uVar3;
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x2d1) = *(undefined1 *)((long)param_2 + 0x2d1);
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = param_2[0x5c];
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  uVar3 = param_2[0x5e];
  param_1[0x5e] = uVar3;
  *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5f);
  *(undefined1 *)((long)param_1 + 0x2f9) = *(undefined1 *)((long)param_2 + 0x2f9);
  lVar1 = param_2[99];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  if (lVar1 == 1) {
    uVar3 = param_2[0x60];
    uVar4 = param_2[99];
    uVar2 = param_2[0x62];
    param_1[0x61] = param_2[0x61];
    param_1[0x60] = uVar3;
    param_1[99] = uVar4;
    param_1[0x62] = uVar2;
    uVar3 = param_2[100];
    param_1[0x65] = param_2[0x65];
    param_1[100] = uVar3;
  }
  else {
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
    param_1[0x61] = param_2[0x61];
    param_1[0x62] = param_2[0x62];
    param_1[99] = lVar1;
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    uVar3 = param_2[0x65];
    param_1[0x65] = uVar3;
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar3);
  }
  *(undefined1 *)(param_1 + 0x66) = *(undefined1 *)(param_2 + 0x66);
  param_1[0x67] = param_2[0x67];
  param_1[0x68] = param_2[0x68];
  uVar5 = param_2[0x69];
  param_1[0x69] = uVar5;
  uVar4 = param_2[0x6a];
  param_1[0x6a] = uVar4;
  uVar2 = param_2[0x6b];
  param_1[0x6b] = uVar2;
  param_1[0x6c] = param_2[0x6c];
  *(undefined1 *)(param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
  uVar3 = param_2[0x6e];
  *(undefined1 *)(param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
  param_1[0x6e] = uVar3;
  param_1[0x70] = param_2[0x70];
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x71);
  uVar3 = param_2[0x72];
  param_1[0x72] = uVar3;
  uVar6 = param_2[0x73];
  param_1[0x73] = uVar6;
  uVar7 = param_2[0x78];
  uVar9 = param_2[0x7b];
  uVar8 = param_2[0x7a];
  param_1[0x79] = param_2[0x79];
  param_1[0x78] = uVar7;
  param_1[0x7b] = uVar9;
  param_1[0x7a] = uVar8;
  uVar7 = param_2[0x7c];
  uVar9 = param_2[0x7f];
  uVar8 = param_2[0x7e];
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7c] = uVar7;
  param_1[0x7f] = uVar9;
  param_1[0x7e] = uVar8;
  uVar7 = param_2[0x74];
  uVar9 = param_2[0x77];
  uVar8 = param_2[0x76];
  param_1[0x75] = param_2[0x75];
  param_1[0x74] = uVar7;
  param_1[0x77] = uVar9;
  param_1[0x76] = uVar8;
  param_1[0x80] = param_2[0x80];
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  param_1[0x81] = param_2[0x81];
  param_1[0x83] = param_2[0x83];
  uVar7 = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x84] = uVar7;
  uVar7 = param_2[0x86];
  param_1[0x87] = param_2[0x87];
  param_1[0x86] = uVar7;
  param_1[0x88] = param_2[0x88];
  uVar7 = param_2[0x89];
  param_1[0x89] = uVar7;
  lVar1 = param_2[0x96];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  if (lVar1 == 1) {
    uVar3 = param_2[0x92];
    uVar4 = param_2[0x95];
    uVar2 = param_2[0x94];
    param_1[0x93] = param_2[0x93];
    param_1[0x92] = uVar3;
    param_1[0x95] = uVar4;
    param_1[0x94] = uVar2;
    uVar3 = param_2[0x96];
    param_1[0x97] = param_2[0x97];
    param_1[0x96] = uVar3;
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
    uVar3 = param_2[0x8a];
    uVar4 = param_2[0x8d];
    uVar2 = param_2[0x8c];
    param_1[0x8b] = param_2[0x8b];
    param_1[0x8a] = uVar3;
    param_1[0x8d] = uVar4;
    param_1[0x8c] = uVar2;
    uVar3 = param_2[0x8e];
    uVar4 = param_2[0x91];
    uVar2 = param_2[0x90];
    param_1[0x8f] = param_2[0x8f];
    param_1[0x8e] = uVar3;
    param_1[0x91] = uVar4;
    param_1[0x90] = uVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
    param_1[0x8b] = param_2[0x8b];
    *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
    param_1[0x8d] = param_2[0x8d];
    *(undefined1 *)(param_1 + 0x8e) = *(undefined1 *)(param_2 + 0x8e);
    param_1[0x8f] = param_2[0x8f];
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
    param_1[0x91] = param_2[0x91];
    param_1[0x93] = param_2[0x93];
    *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
    param_1[0x95] = param_2[0x95];
    param_1[0x96] = lVar1;
    param_1[0x97] = param_2[0x97];
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
    _swift_bridgeObjectRetain(lVar1);
  }
  *(undefined1 *)((long)param_1 + 0x4c2) = *(undefined1 *)((long)param_2 + 0x4c2);
  param_1[0x99] = param_2[0x99];
  uVar3 = param_2[0x9c];
  param_1[0x9d] = param_2[0x9d];
  param_1[0x9c] = uVar3;
  uVar3 = param_2[0x9e];
  param_1[0x9f] = param_2[0x9f];
  param_1[0x9e] = uVar3;
  uVar3 = param_2[0xa0];
  param_1[0xa1] = param_2[0xa1];
  param_1[0xa0] = uVar3;
  *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(param_2 + 0xa2);
  uVar3 = param_2[0x9a];
  param_1[0x9b] = param_2[0x9b];
  param_1[0x9a] = uVar3;
  lVar1 = param_2[0xa4];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar3 = param_2[0xa3];
    uVar4 = param_2[0xa6];
    uVar2 = param_2[0xa5];
    param_1[0xa4] = param_2[0xa4];
    param_1[0xa3] = uVar3;
    param_1[0xa6] = uVar4;
    param_1[0xa5] = uVar2;
    param_1[0xa7] = param_2[0xa7];
  }
  else {
    param_1[0xa3] = param_2[0xa3];
    param_1[0xa4] = lVar1;
    param_1[0xa5] = param_2[0xa5];
    uVar3 = param_2[0xa6];
    param_1[0xa6] = uVar3;
    param_1[0xa7] = param_2[0xa7];
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar3);
  }
  uVar3 = param_2[0xa8];
  param_1[0xa9] = param_2[0xa9];
  param_1[0xa8] = uVar3;
  *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  param_1[0xab] = param_2[0xab];
  param_1[0xac] = param_2[0xac];
  *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)(param_2 + 0xad);
  uVar2 = param_2[0xae];
  param_1[0xae] = uVar2;
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  param_1[0xaf] = param_2[0xaf];
  uVar4 = param_2[0xb1];
  param_1[0xb1] = uVar4;
  uVar5 = param_2[0xb2];
  param_1[0xb2] = uVar5;
  uVar6 = param_2[0xb3];
  param_1[0xb3] = uVar6;
  uVar3 = param_2[0xb4];
  param_1[0xb4] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10421d64c; end: 10421dfcf;  */

undefined8 * FUN_10421d64c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  uVar3 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  lVar4 = param_1[0x11];
  if (lVar4 == 0) {
    if (param_2[0x11] == 0) {
      uVar3 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar3;
      uVar5 = param_2[0x13];
      uVar3 = param_2[0x12];
      uVar7 = param_2[0x15];
      uVar6 = param_2[0x14];
      uVar8 = param_2[0x16];
      uVar10 = param_2[0x19];
      uVar9 = param_2[0x18];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar8;
      param_1[0x19] = uVar10;
      param_1[0x18] = uVar9;
      param_1[0x13] = uVar5;
      param_1[0x12] = uVar3;
      param_1[0x15] = uVar7;
      param_1[0x14] = uVar6;
      uVar5 = param_2[0x1b];
      uVar3 = param_2[0x1a];
      uVar7 = param_2[0x1d];
      uVar6 = param_2[0x1c];
      uVar9 = param_2[0x1f];
      uVar8 = param_2[0x1e];
      param_1[0x20] = param_2[0x20];
      param_1[0x1d] = uVar7;
      param_1[0x1c] = uVar6;
      param_1[0x1f] = uVar9;
      param_1[0x1e] = uVar8;
      param_1[0x1b] = uVar5;
      param_1[0x1a] = uVar3;
    }
    else {
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = param_2[0x1e];
      uVar3 = param_2[0x1f];
      param_1[0x1f] = uVar3;
      uVar5 = param_2[0x20];
      param_1[0x20] = uVar5;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar5);
    }
  }
  else if (param_2[0x11] == 0) {
    func_0x0001018657d8(param_1 + 0x10);
    uVar3 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    uVar3 = param_2[0x16];
    uVar6 = param_2[0x19];
    uVar5 = param_2[0x18];
    uVar10 = param_2[0x13];
    uVar9 = param_2[0x12];
    uVar8 = param_2[0x15];
    uVar7 = param_2[0x14];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x19] = uVar6;
    param_1[0x18] = uVar5;
    param_1[0x13] = uVar10;
    param_1[0x12] = uVar9;
    param_1[0x15] = uVar8;
    param_1[0x14] = uVar7;
    uVar7 = param_2[0x1d];
    uVar6 = param_2[0x1c];
    uVar5 = param_2[0x1f];
    uVar3 = param_2[0x1e];
    uVar9 = param_2[0x1b];
    uVar8 = param_2[0x1a];
    param_1[0x20] = param_2[0x20];
    param_1[0x1d] = uVar7;
    param_1[0x1c] = uVar6;
    param_1[0x1f] = uVar5;
    param_1[0x1e] = uVar3;
    param_1[0x1b] = uVar9;
    param_1[0x1a] = uVar8;
  }
  else {
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    uVar3 = param_1[0x1f];
    param_1[0x1f] = param_2[0x1f];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = param_1[0x20];
    param_1[0x20] = param_2[0x20];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  uVar5 = param_2[0x23];
  uVar3 = param_2[0x22];
  uVar6 = *(undefined8 *)((long)param_2 + 0x11c);
  *(undefined8 *)((long)param_1 + 0x124) = *(undefined8 *)((long)param_2 + 0x124);
  *(undefined8 *)((long)param_1 + 0x11c) = uVar6;
  param_1[0x23] = uVar5;
  param_1[0x22] = uVar3;
  param_1[0x26] = param_2[0x26];
  uVar3 = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar3;
  uVar5 = param_2[0x2a];
  uVar3 = param_2[0x29];
  uVar7 = param_2[0x2c];
  uVar6 = param_2[0x2b];
  uVar8 = param_2[0x2d];
  uVar10 = param_2[0x30];
  uVar9 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2d] = uVar8;
  param_1[0x30] = uVar10;
  param_1[0x2f] = uVar9;
  param_1[0x2a] = uVar5;
  param_1[0x29] = uVar3;
  param_1[0x2c] = uVar7;
  param_1[0x2b] = uVar6;
  uVar5 = param_2[0x32];
  uVar3 = param_2[0x31];
  uVar7 = param_2[0x34];
  uVar6 = param_2[0x33];
  uVar9 = param_2[0x36];
  uVar8 = param_2[0x35];
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
  param_1[0x34] = uVar7;
  param_1[0x33] = uVar6;
  param_1[0x36] = uVar9;
  param_1[0x35] = uVar8;
  param_1[0x32] = uVar5;
  param_1[0x31] = uVar3;
  uVar5 = param_2[0x39];
  uVar3 = param_2[0x38];
  uVar7 = param_2[0x3b];
  uVar6 = param_2[0x3a];
  uVar8 = param_2[0x3c];
  uVar10 = param_2[0x3f];
  uVar9 = param_2[0x3e];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3c] = uVar8;
  param_1[0x3f] = uVar10;
  param_1[0x3e] = uVar9;
  param_1[0x39] = uVar5;
  param_1[0x38] = uVar3;
  param_1[0x3b] = uVar7;
  param_1[0x3a] = uVar6;
  uVar5 = param_2[0x41];
  uVar3 = param_2[0x40];
  uVar7 = param_2[0x43];
  uVar6 = param_2[0x42];
  uVar9 = param_2[0x45];
  uVar8 = param_2[0x44];
  uVar10 = *(undefined8 *)((long)param_2 + 0x229);
  *(undefined8 *)((long)param_1 + 0x231) = *(undefined8 *)((long)param_2 + 0x231);
  *(undefined8 *)((long)param_1 + 0x229) = uVar10;
  param_1[0x43] = uVar7;
  param_1[0x42] = uVar6;
  param_1[0x45] = uVar9;
  param_1[0x44] = uVar8;
  param_1[0x41] = uVar5;
  param_1[0x40] = uVar3;
  uVar8 = param_2[0x53];
  uVar7 = param_2[0x52];
  uVar5 = param_2[0x55];
  uVar3 = param_2[0x54];
  uVar6 = *(undefined8 *)((long)param_2 + 0x2aa);
  uVar10 = param_2[0x51];
  uVar9 = param_2[0x50];
  *(undefined8 *)((long)param_1 + 0x2b2) = *(undefined8 *)((long)param_2 + 0x2b2);
  *(undefined8 *)((long)param_1 + 0x2aa) = uVar6;
  param_1[0x53] = uVar8;
  param_1[0x52] = uVar7;
  param_1[0x55] = uVar5;
  param_1[0x54] = uVar3;
  param_1[0x51] = uVar10;
  param_1[0x50] = uVar9;
  uVar5 = param_2[0x49];
  uVar3 = param_2[0x48];
  uVar7 = param_2[0x4b];
  uVar6 = param_2[0x4a];
  uVar8 = param_2[0x4c];
  uVar10 = param_2[0x4f];
  uVar9 = param_2[0x4e];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4c] = uVar8;
  param_1[0x4f] = uVar10;
  param_1[0x4e] = uVar9;
  param_1[0x49] = uVar5;
  param_1[0x48] = uVar3;
  param_1[0x4b] = uVar7;
  param_1[0x4a] = uVar6;
  uVar3 = param_1[0x58];
  param_1[0x58] = param_2[0x58];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x59] = param_2[0x59];
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x2d1) = *(undefined1 *)((long)param_2 + 0x2d1);
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = param_2[0x5c];
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  uVar3 = param_1[0x5e];
  param_1[0x5e] = param_2[0x5e];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5f);
  *(undefined1 *)((long)param_1 + 0x2f9) = *(undefined1 *)((long)param_2 + 0x2f9);
  puVar1 = param_2 + 0x60;
  lVar4 = param_1[99];
  if (lVar4 == 1) {
    if (param_2[99] == 1) {
      uVar5 = param_2[0x61];
      uVar3 = *puVar1;
      uVar6 = param_2[0x62];
      uVar8 = param_2[0x65];
      uVar7 = param_2[100];
      param_1[99] = param_2[99];
      param_1[0x62] = uVar6;
      param_1[0x65] = uVar8;
      param_1[100] = uVar7;
      param_1[0x61] = uVar5;
      param_1[0x60] = uVar3;
    }
    else {
      *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
      param_1[0x61] = param_2[0x61];
      param_1[0x62] = param_2[0x62];
      param_1[99] = param_2[99];
      *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
      uVar3 = param_2[0x65];
      param_1[0x65] = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
  }
  else if (param_2[99] == 1) {
    func_0x00010186580c(param_1 + 0x60);
    uVar7 = param_2[99];
    uVar6 = param_2[0x62];
    uVar5 = param_2[0x65];
    uVar3 = param_2[100];
    uVar8 = *puVar1;
    param_1[0x61] = param_2[0x61];
    param_1[0x60] = uVar8;
    param_1[99] = uVar7;
    param_1[0x62] = uVar6;
    param_1[0x65] = uVar5;
    param_1[100] = uVar3;
  }
  else {
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)puVar1;
    param_1[0x61] = param_2[0x61];
    param_1[0x62] = param_2[0x62];
    param_1[99] = param_2[99];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    uVar3 = param_1[0x65];
    param_1[0x65] = param_2[0x65];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  *(undefined1 *)(param_1 + 0x66) = *(undefined1 *)(param_2 + 0x66);
  uVar3 = param_1[0x67];
  param_1[0x67] = param_2[0x67];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x68] = param_2[0x68];
  uVar3 = param_1[0x69];
  param_1[0x69] = param_2[0x69];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[0x6a];
  param_1[0x6a] = param_2[0x6a];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[0x6b];
  param_1[0x6b] = param_2[0x6b];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0x6c];
  *(undefined1 *)(param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
  param_1[0x6c] = uVar3;
  uVar3 = param_2[0x6e];
  *(undefined1 *)(param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
  param_1[0x6e] = uVar3;
  uVar3 = param_2[0x70];
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x71);
  param_1[0x70] = uVar3;
  uVar3 = param_1[0x72];
  param_1[0x72] = param_2[0x72];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[0x73];
  param_1[0x73] = param_2[0x73];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0x74];
  uVar6 = param_2[0x77];
  uVar5 = param_2[0x76];
  param_1[0x75] = param_2[0x75];
  param_1[0x74] = uVar3;
  param_1[0x77] = uVar6;
  param_1[0x76] = uVar5;
  uVar5 = param_2[0x79];
  uVar3 = param_2[0x78];
  uVar7 = param_2[0x7b];
  uVar6 = param_2[0x7a];
  uVar8 = param_2[0x7c];
  uVar10 = param_2[0x7f];
  uVar9 = param_2[0x7e];
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7c] = uVar8;
  param_1[0x7f] = uVar10;
  param_1[0x7e] = uVar9;
  param_1[0x79] = uVar5;
  param_1[0x78] = uVar3;
  param_1[0x7b] = uVar7;
  param_1[0x7a] = uVar6;
  param_1[0x80] = param_2[0x80];
  uVar3 = param_2[0x81];
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  param_1[0x81] = uVar3;
  param_1[0x83] = param_2[0x83];
  param_1[0x84] = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x86] = param_2[0x86];
  param_1[0x87] = param_2[0x87];
  param_1[0x88] = param_2[0x88];
  uVar3 = param_1[0x89];
  param_1[0x89] = param_2[0x89];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  puVar1 = param_1 + 0x8a;
  puVar2 = param_2 + 0x8a;
  lVar4 = param_1[0x96];
  if (lVar4 == 1) {
    if (param_2[0x96] == 1) {
      uVar5 = param_2[0x8b];
      uVar3 = *puVar2;
      uVar7 = param_2[0x8d];
      uVar6 = param_2[0x8c];
      uVar8 = param_2[0x8e];
      uVar10 = param_2[0x91];
      uVar9 = param_2[0x90];
      param_1[0x8f] = param_2[0x8f];
      param_1[0x8e] = uVar8;
      param_1[0x91] = uVar10;
      param_1[0x90] = uVar9;
      param_1[0x8b] = uVar5;
      *puVar1 = uVar3;
      param_1[0x8d] = uVar7;
      param_1[0x8c] = uVar6;
      uVar5 = param_2[0x93];
      uVar3 = param_2[0x92];
      uVar7 = param_2[0x95];
      uVar6 = param_2[0x94];
      uVar9 = param_2[0x97];
      uVar8 = param_2[0x96];
      *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
      param_1[0x95] = uVar7;
      param_1[0x94] = uVar6;
      param_1[0x97] = uVar9;
      param_1[0x96] = uVar8;
      param_1[0x93] = uVar5;
      param_1[0x92] = uVar3;
    }
    else {
      *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
      uVar3 = param_2[0x8b];
      *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
      param_1[0x8b] = uVar3;
      uVar3 = param_2[0x8d];
      *(undefined1 *)(param_1 + 0x8e) = *(undefined1 *)(param_2 + 0x8e);
      param_1[0x8d] = uVar3;
      uVar3 = param_2[0x8f];
      *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
      param_1[0x8f] = uVar3;
      uVar3 = param_2[0x91];
      *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
      param_1[0x91] = uVar3;
      uVar3 = param_2[0x93];
      *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
      param_1[0x93] = uVar3;
      param_1[0x95] = param_2[0x95];
      param_1[0x96] = param_2[0x96];
      uVar3 = param_2[0x97];
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
      param_1[0x97] = uVar3;
      *(undefined1 *)((long)param_1 + 0x4c1) = *(undefined1 *)((long)param_2 + 0x4c1);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[0x96] == 1) {
    func_0x000101865840(puVar1);
    uVar3 = param_2[0x8e];
    uVar6 = param_2[0x91];
    uVar5 = param_2[0x90];
    uVar10 = param_2[0x8b];
    uVar9 = *puVar2;
    uVar8 = param_2[0x8d];
    uVar7 = param_2[0x8c];
    param_1[0x8f] = param_2[0x8f];
    param_1[0x8e] = uVar3;
    param_1[0x91] = uVar6;
    param_1[0x90] = uVar5;
    param_1[0x8b] = uVar10;
    *puVar1 = uVar9;
    param_1[0x8d] = uVar8;
    param_1[0x8c] = uVar7;
    uVar7 = param_2[0x95];
    uVar6 = param_2[0x94];
    uVar5 = param_2[0x97];
    uVar3 = param_2[0x96];
    uVar9 = param_2[0x93];
    uVar8 = param_2[0x92];
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
    param_1[0x95] = uVar7;
    param_1[0x94] = uVar6;
    param_1[0x97] = uVar5;
    param_1[0x96] = uVar3;
    param_1[0x93] = uVar9;
    param_1[0x92] = uVar8;
  }
  else {
    *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)puVar2;
    uVar3 = param_2[0x8b];
    *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
    param_1[0x8b] = uVar3;
    uVar3 = param_2[0x8d];
    *(undefined1 *)(param_1 + 0x8e) = *(undefined1 *)(param_2 + 0x8e);
    param_1[0x8d] = uVar3;
    uVar3 = param_2[0x8f];
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    param_1[0x8f] = uVar3;
    uVar3 = param_2[0x91];
    *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
    param_1[0x91] = uVar3;
    uVar3 = param_2[0x93];
    *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
    param_1[0x93] = uVar3;
    param_1[0x95] = param_2[0x95];
    param_1[0x96] = param_2[0x96];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    uVar3 = param_2[0x97];
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
    param_1[0x97] = uVar3;
    *(undefined1 *)((long)param_1 + 0x4c1) = *(undefined1 *)((long)param_2 + 0x4c1);
  }
  *(undefined1 *)((long)param_1 + 0x4c2) = *(undefined1 *)((long)param_2 + 0x4c2);
  uVar3 = param_1[0x99];
  param_1[0x99] = param_2[0x99];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0x9a];
  param_1[0x9b] = param_2[0x9b];
  param_1[0x9a] = uVar3;
  uVar5 = param_2[0x9d];
  uVar3 = param_2[0x9c];
  uVar7 = param_2[0x9f];
  uVar6 = param_2[0x9e];
  uVar9 = param_2[0xa1];
  uVar8 = param_2[0xa0];
  *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(param_2 + 0xa2);
  param_1[0xa1] = uVar9;
  param_1[0xa0] = uVar8;
  param_1[0x9f] = uVar7;
  param_1[0x9e] = uVar6;
  param_1[0x9d] = uVar5;
  param_1[0x9c] = uVar3;
  puVar1 = param_1 + 0xa3;
  lVar4 = param_1[0xa4];
  if (lVar4 == 0) {
    if (param_2[0xa4] == 0) {
      uVar5 = param_2[0xa4];
      uVar3 = param_2[0xa3];
      uVar7 = param_2[0xa6];
      uVar6 = param_2[0xa5];
      param_1[0xa7] = param_2[0xa7];
      param_1[0xa4] = uVar5;
      *puVar1 = uVar3;
      param_1[0xa6] = uVar7;
      param_1[0xa5] = uVar6;
    }
    else {
      param_1[0xa3] = param_2[0xa3];
      param_1[0xa4] = param_2[0xa4];
      param_1[0xa5] = param_2[0xa5];
      uVar3 = param_2[0xa6];
      param_1[0xa6] = uVar3;
      param_1[0xa7] = param_2[0xa7];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
  }
  else if (param_2[0xa4] == 0) {
    func_0x000101865874(puVar1);
    uVar3 = param_2[0xa7];
    uVar7 = param_2[0xa3];
    uVar6 = param_2[0xa6];
    uVar5 = param_2[0xa5];
    param_1[0xa4] = param_2[0xa4];
    *puVar1 = uVar7;
    param_1[0xa6] = uVar6;
    param_1[0xa5] = uVar5;
    param_1[0xa7] = uVar3;
  }
  else {
    param_1[0xa3] = param_2[0xa3];
    param_1[0xa4] = param_2[0xa4];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar4);
    param_1[0xa5] = param_2[0xa5];
    uVar3 = param_1[0xa6];
    param_1[0xa6] = param_2[0xa6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    param_1[0xa7] = param_2[0xa7];
  }
  uVar5 = param_2[0xa9];
  uVar3 = param_2[0xa8];
  *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  param_1[0xa9] = uVar5;
  param_1[0xa8] = uVar3;
  uVar3 = param_1[0xab];
  param_1[0xab] = param_2[0xab];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0xac];
  *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)(param_2 + 0xad);
  param_1[0xac] = uVar3;
  uVar3 = param_1[0xae];
  param_1[0xae] = param_2[0xae];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_2[0xaf];
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  param_1[0xaf] = uVar3;
  uVar3 = param_1[0xb1];
  param_1[0xb1] = param_2[0xb1];
  _objc_retain();
  _objc_release(uVar3);
  uVar3 = param_1[0xb2];
  param_1[0xb2] = param_2[0xb2];
  _objc_retain();
  _objc_release(uVar3);
  uVar3 = param_1[0xb3];
  param_1[0xb3] = param_2[0xb3];
  _objc_retain();
  _objc_release(uVar3);
  uVar3 = param_1[0xb4];
  param_1[0xb4] = param_2[0xb4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 10421dfd0; end: 10421dfd7;  */

void FUN_10421dfd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x5a8);
  return;
}



/* Entry: 10421dfd8; end: 10421e597;  */

undefined8 * FUN_10421dfd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  uVar2 = param_2[0xe];
  uVar1 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  if (param_1[0x11] == 0) {
LAB_10421e0d0:
    uVar2 = param_2[0x1c];
    uVar4 = param_2[0x1f];
    uVar1 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1f] = uVar4;
    param_1[0x1e] = uVar1;
    param_1[0x20] = param_2[0x20];
    uVar2 = param_2[0x14];
    uVar4 = param_2[0x17];
    uVar1 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x17] = uVar4;
    param_1[0x16] = uVar1;
    uVar4 = param_2[0x18];
    uVar1 = param_2[0x1b];
    uVar2 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar4;
    param_1[0x1b] = uVar1;
    param_1[0x1a] = uVar2;
    uVar4 = param_2[0x10];
    uVar1 = param_2[0x13];
    uVar2 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x13] = uVar1;
    param_1[0x12] = uVar2;
  }
  else {
    lVar3 = param_2[0x11];
    if (lVar3 == 0) {
      func_0x0001018657d8(param_1 + 0x10);
      goto LAB_10421e0d0;
    }
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = lVar3;
    _swift_bridgeObjectRelease();
    uVar2 = param_2[0x12];
    uVar4 = param_2[0x15];
    uVar1 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x15] = uVar4;
    param_1[0x14] = uVar1;
    uVar2 = param_2[0x16];
    uVar4 = param_2[0x19];
    uVar1 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x19] = uVar4;
    param_1[0x18] = uVar1;
    param_1[0x1a] = param_2[0x1a];
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
    uVar2 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    uVar2 = param_2[0x1f];
    uVar1 = param_1[0x1f];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = uVar2;
    _swift_bridgeObjectRelease(uVar1);
    uVar2 = param_1[0x20];
    param_1[0x20] = param_2[0x20];
    _swift_bridgeObjectRelease(uVar2);
  }
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  uVar2 = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x22] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x11c);
  *(undefined8 *)((long)param_1 + 0x124) = *(undefined8 *)((long)param_2 + 0x124);
  *(undefined8 *)((long)param_1 + 0x11c) = uVar2;
  param_1[0x26] = param_2[0x26];
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
  uVar2 = param_2[0x33];
  uVar4 = param_2[0x36];
  uVar1 = param_2[0x35];
  param_1[0x34] = param_2[0x34];
  param_1[0x33] = uVar2;
  param_1[0x36] = uVar4;
  param_1[0x35] = uVar1;
  uVar2 = param_2[0x2b];
  uVar4 = param_2[0x2e];
  uVar1 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar2;
  param_1[0x2e] = uVar4;
  param_1[0x2d] = uVar1;
  uVar4 = param_2[0x2f];
  uVar1 = param_2[0x32];
  uVar2 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x2f] = uVar4;
  param_1[0x32] = uVar1;
  param_1[0x31] = uVar2;
  uVar4 = param_2[0x27];
  uVar1 = param_2[0x2a];
  uVar2 = param_2[0x29];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar4;
  param_1[0x2a] = uVar1;
  param_1[0x29] = uVar2;
  uVar2 = param_2[0x40];
  uVar4 = param_2[0x43];
  uVar1 = param_2[0x42];
  param_1[0x41] = param_2[0x41];
  param_1[0x40] = uVar2;
  param_1[0x43] = uVar4;
  param_1[0x42] = uVar1;
  uVar2 = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x44] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x229);
  *(undefined8 *)((long)param_1 + 0x231) = *(undefined8 *)((long)param_2 + 0x231);
  *(undefined8 *)((long)param_1 + 0x229) = uVar2;
  uVar2 = param_2[0x38];
  uVar4 = param_2[0x3b];
  uVar1 = param_2[0x3a];
  param_1[0x39] = param_2[0x39];
  param_1[0x38] = uVar2;
  param_1[0x3b] = uVar4;
  param_1[0x3a] = uVar1;
  uVar2 = param_2[0x3c];
  uVar4 = param_2[0x3f];
  uVar1 = param_2[0x3e];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3c] = uVar2;
  param_1[0x3f] = uVar4;
  param_1[0x3e] = uVar1;
  uVar1 = param_2[0x49];
  uVar2 = param_2[0x48];
  uVar5 = param_2[0x4b];
  uVar4 = param_2[0x4a];
  uVar6 = param_2[0x4c];
  uVar8 = param_2[0x4f];
  uVar7 = param_2[0x4e];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4c] = uVar6;
  param_1[0x4f] = uVar8;
  param_1[0x4e] = uVar7;
  param_1[0x49] = uVar1;
  param_1[0x48] = uVar2;
  param_1[0x4b] = uVar5;
  param_1[0x4a] = uVar4;
  uVar1 = param_2[0x51];
  uVar2 = param_2[0x50];
  uVar5 = param_2[0x53];
  uVar4 = param_2[0x52];
  uVar7 = param_2[0x55];
  uVar6 = param_2[0x54];
  uVar8 = *(undefined8 *)((long)param_2 + 0x2aa);
  *(undefined8 *)((long)param_1 + 0x2b2) = *(undefined8 *)((long)param_2 + 0x2b2);
  *(undefined8 *)((long)param_1 + 0x2aa) = uVar8;
  param_1[0x53] = uVar5;
  param_1[0x52] = uVar4;
  param_1[0x55] = uVar7;
  param_1[0x54] = uVar6;
  param_1[0x51] = uVar1;
  param_1[0x50] = uVar2;
  uVar2 = param_1[0x58];
  param_1[0x58] = param_2[0x58];
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x59] = param_2[0x59];
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  *(undefined1 *)((long)param_1 + 0x2d1) = *(undefined1 *)((long)param_2 + 0x2d1);
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = param_2[0x5c];
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  uVar2 = param_1[0x5e];
  param_1[0x5e] = param_2[0x5e];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5f);
  *(undefined1 *)((long)param_1 + 0x2f9) = *(undefined1 *)((long)param_2 + 0x2f9);
  if (param_1[99] == 1) {
LAB_10421e234:
    uVar2 = param_2[0x60];
    uVar4 = param_2[99];
    uVar1 = param_2[0x62];
    param_1[0x61] = param_2[0x61];
    param_1[0x60] = uVar2;
    param_1[99] = uVar4;
    param_1[0x62] = uVar1;
    uVar2 = param_2[100];
    param_1[0x65] = param_2[0x65];
    param_1[100] = uVar2;
  }
  else {
    lVar3 = param_2[99];
    if (lVar3 == 1) {
      func_0x00010186580c(param_1 + 0x60);
      goto LAB_10421e234;
    }
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
    param_1[0x61] = param_2[0x61];
    param_1[0x62] = param_2[0x62];
    param_1[99] = lVar3;
    _swift_bridgeObjectRelease();
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
    uVar2 = param_1[0x65];
    param_1[0x65] = param_2[0x65];
    _swift_bridgeObjectRelease(uVar2);
  }
  *(undefined1 *)(param_1 + 0x66) = *(undefined1 *)(param_2 + 0x66);
  uVar2 = param_1[0x67];
  param_1[0x67] = param_2[0x67];
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x68] = param_2[0x68];
  uVar2 = param_1[0x69];
  param_1[0x69] = param_2[0x69];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x6a];
  param_1[0x6a] = param_2[0x6a];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x6b];
  param_1[0x6b] = param_2[0x6b];
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x6c] = param_2[0x6c];
  *(undefined1 *)(param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
  param_1[0x6e] = param_2[0x6e];
  *(undefined1 *)(param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
  param_1[0x70] = param_2[0x70];
  *(undefined1 *)(param_1 + 0x71) = *(undefined1 *)(param_2 + 0x71);
  uVar2 = param_1[0x72];
  param_1[0x72] = param_2[0x72];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x73];
  param_1[0x73] = param_2[0x73];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0x78];
  uVar4 = param_2[0x7b];
  uVar1 = param_2[0x7a];
  param_1[0x79] = param_2[0x79];
  param_1[0x78] = uVar2;
  param_1[0x7b] = uVar4;
  param_1[0x7a] = uVar1;
  uVar2 = param_2[0x7c];
  uVar4 = param_2[0x7f];
  uVar1 = param_2[0x7e];
  param_1[0x7d] = param_2[0x7d];
  param_1[0x7c] = uVar2;
  param_1[0x7f] = uVar4;
  param_1[0x7e] = uVar1;
  uVar2 = param_2[0x74];
  uVar4 = param_2[0x77];
  uVar1 = param_2[0x76];
  param_1[0x75] = param_2[0x75];
  param_1[0x74] = uVar2;
  param_1[0x77] = uVar4;
  param_1[0x76] = uVar1;
  param_1[0x80] = param_2[0x80];
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  param_1[0x81] = param_2[0x81];
  param_1[0x83] = param_2[0x83];
  uVar2 = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x84] = uVar2;
  uVar2 = param_2[0x86];
  param_1[0x87] = param_2[0x87];
  param_1[0x86] = uVar2;
  param_1[0x88] = param_2[0x88];
  uVar2 = param_1[0x89];
  param_1[0x89] = param_2[0x89];
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[0x96] == 1) {
LAB_10421e3a8:
    uVar2 = param_2[0x92];
    uVar4 = param_2[0x95];
    uVar1 = param_2[0x94];
    param_1[0x93] = param_2[0x93];
    param_1[0x92] = uVar2;
    param_1[0x95] = uVar4;
    param_1[0x94] = uVar1;
    uVar2 = param_2[0x96];
    param_1[0x97] = param_2[0x97];
    param_1[0x96] = uVar2;
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
    uVar2 = param_2[0x8a];
    uVar4 = param_2[0x8d];
    uVar1 = param_2[0x8c];
    param_1[0x8b] = param_2[0x8b];
    param_1[0x8a] = uVar2;
    param_1[0x8d] = uVar4;
    param_1[0x8c] = uVar1;
    uVar2 = param_2[0x8e];
    uVar4 = param_2[0x91];
    uVar1 = param_2[0x90];
    param_1[0x8f] = param_2[0x8f];
    param_1[0x8e] = uVar2;
    param_1[0x91] = uVar4;
    param_1[0x90] = uVar1;
  }
  else {
    lVar3 = param_2[0x96];
    if (lVar3 == 1) {
      func_0x000101865840(param_1 + 0x8a);
      goto LAB_10421e3a8;
    }
    *(undefined1 *)(param_1 + 0x8a) = *(undefined1 *)(param_2 + 0x8a);
    param_1[0x8b] = param_2[0x8b];
    *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_2 + 0x8c);
    param_1[0x8d] = param_2[0x8d];
    *(undefined1 *)(param_1 + 0x8e) = *(undefined1 *)(param_2 + 0x8e);
    param_1[0x8f] = param_2[0x8f];
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
    *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
    param_1[0x91] = param_2[0x91];
    param_1[0x93] = param_2[0x93];
    *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
    param_1[0x95] = param_2[0x95];
    param_1[0x96] = lVar3;
    _swift_bridgeObjectRelease();
    param_1[0x97] = param_2[0x97];
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0x98);
  }
  *(undefined1 *)((long)param_1 + 0x4c2) = *(undefined1 *)((long)param_2 + 0x4c2);
  uVar2 = param_1[0x99];
  param_1[0x99] = param_2[0x99];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0x9c];
  param_1[0x9d] = param_2[0x9d];
  param_1[0x9c] = uVar2;
  uVar2 = param_2[0x9e];
  param_1[0x9f] = param_2[0x9f];
  param_1[0x9e] = uVar2;
  uVar2 = param_2[0xa0];
  param_1[0xa1] = param_2[0xa1];
  param_1[0xa0] = uVar2;
  *(undefined2 *)(param_1 + 0xa2) = *(undefined2 *)(param_2 + 0xa2);
  uVar2 = param_2[0x9a];
  param_1[0x9b] = param_2[0x9b];
  param_1[0x9a] = uVar2;
  if (param_1[0xa4] != 0) {
    lVar3 = param_2[0xa4];
    if (lVar3 != 0) {
      param_1[0xa3] = param_2[0xa3];
      param_1[0xa4] = lVar3;
      _swift_bridgeObjectRelease();
      param_1[0xa5] = param_2[0xa5];
      uVar2 = param_1[0xa6];
      param_1[0xa6] = param_2[0xa6];
      _swift_bridgeObjectRelease(uVar2);
      param_1[0xa7] = param_2[0xa7];
      goto LAB_10421e4f0;
    }
    func_0x000101865874(param_1 + 0xa3);
  }
  uVar2 = param_2[0xa3];
  uVar4 = param_2[0xa6];
  uVar1 = param_2[0xa5];
  param_1[0xa4] = param_2[0xa4];
  param_1[0xa3] = uVar2;
  param_1[0xa6] = uVar4;
  param_1[0xa5] = uVar1;
  param_1[0xa7] = param_2[0xa7];
LAB_10421e4f0:
  uVar2 = param_2[0xa8];
  param_1[0xa9] = param_2[0xa9];
  param_1[0xa8] = uVar2;
  *(undefined1 *)(param_1 + 0xaa) = *(undefined1 *)(param_2 + 0xaa);
  uVar2 = param_1[0xab];
  param_1[0xab] = param_2[0xab];
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xac] = param_2[0xac];
  *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)(param_2 + 0xad);
  uVar2 = param_1[0xae];
  param_1[0xae] = param_2[0xae];
  _swift_bridgeObjectRelease(uVar2);
  param_1[0xaf] = param_2[0xaf];
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  uVar2 = param_1[0xb1];
  param_1[0xb1] = param_2[0xb1];
  _objc_release(uVar2);
  uVar2 = param_1[0xb2];
  param_1[0xb2] = param_2[0xb2];
  _objc_release(uVar2);
  uVar2 = param_1[0xb3];
  param_1[0xb3] = param_2[0xb3];
  _objc_release(uVar2);
  uVar2 = param_1[0xb4];
  param_1[0xb4] = param_2[0xb4];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 10421e598; end: 10421e7c3;  */

int FUN_10421e598(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x16a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10421e7c4; end: 10421e907;  */

void FUN_10421e7c4(void)

{
  long in_x3;
  undefined8 in_x5;
  
  if (in_x3 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x3);
  return;
}



/* Entry: 10421e908; end: 10421ea3f;  */

void FUN_10421e908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13)

{
  undefined8 extraout_x8;
  undefined1 auStack_10a0 [840];
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined1 auStack_d40 [769];
  undefined1 uStack_a3f;
  undefined1 uStack_a3e;
  undefined1 uStack_a3d;
  undefined1 uStack_a3c;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined1 uStack_a20;
  undefined8 uStack_a18;
  undefined1 auStack_a10 [776];
  undefined1 auStack_708 [840];
  undefined1 auStack_3c0 [848];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x00010178e4b4(auStack_a10);
  _memcpy(auStack_d40,auStack_a10,0x301);
  uStack_d58 = param_3;
  uStack_d50 = param_4;
  uStack_d48 = param_1;
  func_0x00010421e8b8(param_5,auStack_d40);
  uStack_a30 = param_11;
  uStack_a28 = param_12;
  uStack_a20 = param_13;
  uStack_a3f = param_6;
  uStack_a3e = param_7;
  uStack_a3d = param_8;
  uStack_a3c = param_9;
  uStack_a38 = param_10;
  uStack_a18 = param_2;
  _memcpy(auStack_708,&uStack_d58,0x348);
  _memcpy(auStack_3c0,&uStack_d58,0x348);
  func_0x00010178e544(auStack_708,auStack_10a0);
  func_0x00010178e510(auStack_3c0);
  _memcpy(extraout_x8,auStack_708,0x348);
  return;
}



/* Entry: 10421ea40; end: 10421ea93;  */

uint FUN_10421ea40(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_6b0 [840];
  undefined1 auStack_368 [840];
  
  uVar1 = 0;
  _memcpy(auStack_6b0,param_1,0x348);
  _memcpy(auStack_368,param_2,0x348);
  FUN_10421ea94(auStack_6b0,auStack_368);
  return uVar1 & 1;
}



/* Entry: 10421ea94; end: 10421ee37;  */

bool FUN_10421ea94(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_1ea0 [776];
  undefined1 auStack_1b98 [776];
  undefined1 auStack_1890 [776];
  undefined1 auStack_1588 [1552];
  undefined1 auStack_f78 [776];
  undefined1 auStack_c70 [776];
  undefined1 auStack_968 [776];
  undefined1 auStack_660 [776];
  undefined1 auStack_358 [760];
  long lStack_60;
  
  if (((*param_1 != *param_2) ||
      (lStack_60 = *(long *)(param_2 + 2), *(long *)(param_1 + 2) != lStack_60)) ||
     (*(double *)(param_1 + 4) != *(double *)(param_2 + 4))) {
    return false;
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  _memcpy(auStack_660,param_1 + 6,0x301);
  _memcpy(auStack_968,param_2 + 6,0x301);
  _memcpy(auStack_f78,param_1 + 6,0x301);
  _memcpy(auStack_c70,param_2 + 6,0x301);
  iVar1 = (int)auStack_f78;
  func_0x00010178e1e4();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_c70;
    func_0x00010178e1e4();
    if (iVar1 != 1) {
LAB_10421ebfc:
      _memcpy(auStack_1588,auStack_f78,0x609);
      func_0x00010421e868(auStack_660,auStack_358);
      func_0x00010421e868(auStack_968,auStack_358);
      FUN_10422086c(auStack_1588,0x112dcbc98,&UNK_10d98e370);
      return false;
    }
    _memcpy(auStack_1588,auStack_f78,0x301);
    func_0x00010421e868(auStack_660,auStack_358);
    func_0x00010421e868(auStack_968,auStack_358);
    FUN_10422086c(auStack_1588,0x112dcbc48,&UNK_10d98e2c0);
  }
  else {
    _memcpy(auStack_1890,auStack_f78,0x301);
    iVar1 = (int)auStack_c70;
    func_0x00010178e1e4();
    if (iVar1 == 1) goto LAB_10421ebfc;
    _memcpy(auStack_1b98,auStack_c70,0x301);
    _memcpy(auStack_1588,auStack_c70,0x301);
    _memcpy(auStack_358,auStack_1890,0x301);
    func_0x00010421e868(auStack_660,auStack_1ea0);
    func_0x00010421e868(auStack_968,auStack_1ea0);
    puVar2 = auStack_358;
    FUN_10425d20c(puVar2,auStack_1588);
    FUN_10422086c(auStack_1b98,0x112dcbc48,&UNK_10d98e2c0);
    FUN_10422086c(auStack_f78,0x112dcbc48,&UNK_10d98e2c0);
    if (((ulong)puVar2 & 1) == 0) {
      return false;
    }
  }
  if (((*(byte *)((long)param_1 + 0x319) ^ *(byte *)((long)param_2 + 0x319)) & 1) != 0) {
    return false;
  }
  if (((*(byte *)((long)param_1 + 0x31a) ^ *(byte *)((long)param_2 + 0x31a)) & 1) != 0) {
    return false;
  }
  if (((*(byte *)((long)param_1 + 0x31b) ^ *(byte *)((long)param_2 + 0x31b)) & 1) != 0) {
    return false;
  }
  if (((*(byte *)(param_1 + 199) ^ *(byte *)(param_2 + 199)) & 1) == 0) {
    lVar5 = *(long *)(param_2 + 0xca);
    if (*(long *)(param_1 + 0xca) == 0) {
      if (lVar5 != 0) {
        return false;
      }
    }
    else {
      if (lVar5 == 0) {
        return false;
      }
      uVar3 = *(ulong *)(param_1 + 200);
      if (((uVar3 != *(ulong *)(param_2 + 200)) || (*(long *)(param_1 + 0xca) != lVar5)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar3 & 1) == 0)) {
        return false;
      }
    }
    uVar3 = *(ulong *)(param_1 + 0xcc);
    lVar5 = *(long *)(param_2 + 0xcc);
    if (uVar3 == 0) {
      if (lVar5 != 0) {
        return false;
      }
    }
    else {
      if (lVar5 == 0) {
        return false;
      }
      FUN_1042208ac(0);
      _objc_retain(lVar5);
      _objc_retain();
      uVar4 = uVar3;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
      _objc_release(uVar3);
      _objc_release(lVar5);
      if ((uVar4 & 1) == 0) {
        return false;
      }
    }
    if ((((*(byte *)(param_1 + 0xce) ^ *(byte *)(param_2 + 0xce)) & 1) == 0) &&
       (((*(byte *)((long)param_1 + 0x339) ^ *(byte *)((long)param_2 + 0x339)) & 1) == 0)) {
      return *(double *)(param_1 + 0xd0) == *(double *)(param_2 + 0xd0);
    }
    return false;
  }
  return false;
}



/* Entry: 10421ee38; end: 10421ef47;  */

long FUN_10421ee38(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10421ef48; end: 104220157;  */

undefined8 * FUN_10421ef48(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  lVar1 = param_2[9];
  if (lVar1 == 1) {
    _memcpy(param_1 + 3,param_2 + 3,0x301);
  }
  else {
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
    param_1[4] = param_2[4];
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    param_1[10] = param_2[10];
    *(undefined1 *)((long)param_1 + 0x59) = *(undefined1 *)((long)param_2 + 0x59);
    uVar3 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar3;
    *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
    param_1[0xf] = param_2[0xf];
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
    param_1[0x11] = param_2[0x11];
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
    uVar2 = param_2[0x13];
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
    param_1[0x13] = uVar2;
    *(undefined1 *)((long)param_1 + 0xa1) = *(undefined1 *)((long)param_2 + 0xa1);
    lVar1 = param_2[0x20];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    if (lVar1 == 1) {
      _memcpy(param_1 + 0x15,param_2 + 0x15,0x101);
    }
    else {
      param_1[0x15] = param_2[0x15];
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
      param_1[0x17] = param_2[0x17];
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
      param_1[0x19] = param_2[0x19];
      *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
      param_1[0x1b] = param_2[0x1b];
      uVar3 = param_2[0x1d];
      *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
      param_1[0x1d] = uVar3;
      *(undefined1 *)((long)param_1 + 0xf1) = *(undefined1 *)((long)param_2 + 0xf1);
      param_1[0x1f] = param_2[0x1f];
      param_1[0x20] = lVar1;
      uVar3 = param_2[0x22];
      param_1[0x21] = param_2[0x21];
      param_1[0x22] = uVar3;
      param_1[0x23] = param_2[0x23];
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
      *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
      param_1[0x25] = param_2[0x25];
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
      param_1[0x27] = param_2[0x27];
      *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
      param_1[0x29] = param_2[0x29];
      *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
      param_1[0x2b] = param_2[0x2b];
      uVar2 = param_2[0x2e];
      param_1[0x2d] = param_2[0x2d];
      param_1[0x2e] = uVar2;
      uVar4 = param_2[0x2f];
      *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
      param_1[0x2f] = uVar4;
      uVar4 = param_2[0x31];
      *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
      param_1[0x31] = uVar4;
      uVar4 = param_2[0x34];
      param_1[0x33] = param_2[0x33];
      param_1[0x34] = uVar4;
      *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar4);
    }
    *(undefined1 *)((long)param_1 + 0x1a9) = *(undefined1 *)((long)param_2 + 0x1a9);
    uVar3 = param_2[0x37];
    param_1[0x36] = param_2[0x36];
    param_1[0x37] = uVar3;
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
    if (param_2[0x39] == 1) {
      uVar3 = param_2[0x39];
      param_1[0x3a] = param_2[0x3a];
      param_1[0x39] = uVar3;
      param_1[0x3b] = param_2[0x3b];
    }
    else {
      uVar3 = param_2[0x3a];
      uVar2 = param_2[0x3b];
      param_1[0x39] = param_2[0x39];
      param_1[0x3a] = uVar3;
      param_1[0x3b] = uVar2;
      _objc_retain();
      _objc_retain(uVar3);
      _objc_retain(uVar2);
    }
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
    param_1[0x3d] = param_2[0x3d];
    *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
    param_1[0x3f] = param_2[0x3f];
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    lVar1 = param_2[0x42];
    if (lVar1 == 1) {
      uVar3 = param_2[0x41];
      uVar4 = param_2[0x44];
      uVar2 = param_2[0x43];
      param_1[0x42] = param_2[0x42];
      param_1[0x41] = uVar3;
      param_1[0x44] = uVar4;
      param_1[0x43] = uVar2;
      uVar3 = param_2[0x45];
      param_1[0x46] = param_2[0x46];
      param_1[0x45] = uVar3;
    }
    else {
      *(undefined2 *)(param_1 + 0x41) = *(undefined2 *)(param_2 + 0x41);
      param_1[0x42] = lVar1;
      uVar3 = param_2[0x43];
      param_1[0x43] = uVar3;
      uVar2 = param_2[0x44];
      param_1[0x44] = uVar2;
      *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x45);
      uVar4 = param_2[0x46];
      param_1[0x46] = uVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar4);
    }
    param_1[0x47] = param_2[0x47];
    *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    param_1[0x49] = param_2[0x49];
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_2 + 0x4a);
    if (param_2[0x4b] == 0) {
      uVar3 = param_2[0x4b];
      param_1[0x4c] = param_2[0x4c];
      param_1[0x4b] = uVar3;
      param_1[0x4d] = param_2[0x4d];
    }
    else {
      param_1[0x4b] = param_2[0x4b];
      uVar3 = param_2[0x4c];
      param_1[0x4c] = uVar3;
      uVar2 = param_2[0x4d];
      param_1[0x4d] = uVar2;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar2);
    }
    param_1[0x4e] = param_2[0x4e];
    param_1[0x4f] = param_2[0x4f];
    uVar3 = param_2[0x50];
    param_1[0x50] = uVar3;
    *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
    *(undefined2 *)((long)param_1 + 0x289) = *(undefined2 *)((long)param_2 + 0x289);
    param_1[0x52] = param_2[0x52];
    *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
    uVar2 = param_2[0x54];
    param_1[0x55] = param_2[0x55];
    param_1[0x54] = uVar2;
    param_1[0x56] = param_2[0x56];
    *(undefined2 *)(param_1 + 0x57) = *(undefined2 *)(param_2 + 0x57);
    param_1[0x58] = param_2[0x58];
    *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(param_2 + 0x59);
    param_1[0x5a] = param_2[0x5a];
    *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
    param_1[0x5c] = param_2[0x5c];
    *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
    *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5f);
    param_1[0x5e] = param_2[0x5e];
    param_1[0x60] = param_2[0x60];
    uVar2 = param_2[0x61];
    param_1[0x61] = uVar2;
    *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 99);
    param_1[0x62] = param_2[0x62];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
  }
  *(undefined4 *)((long)param_1 + 0x319) = *(undefined4 *)((long)param_2 + 0x319);
  param_1[100] = param_2[100];
  param_1[0x65] = param_2[0x65];
  uVar3 = param_2[0x66];
  param_1[0x66] = uVar3;
  *(undefined2 *)(param_1 + 0x67) = *(undefined2 *)(param_2 + 0x67);
  param_1[0x68] = param_2[0x68];
  _swift_bridgeObjectRetain();
  _objc_retain(uVar3);
  return param_1;
}



/* Entry: 104220158; end: 10422015f;  */

void FUN_104220158(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x348);
  return;
}



/* Entry: 104220160; end: 1042206cf;  */

undefined8 * FUN_104220160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  if (param_1[9] != 1) {
    lVar3 = param_2[9];
    if (lVar3 != 1) {
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
      *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
      param_1[4] = param_2[4];
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
      param_1[6] = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[8] = param_2[8];
      param_1[9] = lVar3;
      _swift_bridgeObjectRelease();
      param_1[10] = param_2[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      *(undefined1 *)((long)param_1 + 0x59) = *(undefined1 *)((long)param_2 + 0x59);
      uVar1 = param_1[0xd];
      uVar2 = param_2[0xd];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
      *(undefined1 *)((long)param_1 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
      param_1[0xf] = param_2[0xf];
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
      param_1[0x11] = param_2[0x11];
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
      param_1[0x13] = param_2[0x13];
      *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
      *(undefined1 *)((long)param_1 + 0xa1) = *(undefined1 *)((long)param_2 + 0xa1);
      if (param_1[0x20] == 1) {
LAB_104220288:
        _memcpy(param_1 + 0x15,param_2 + 0x15,0x101);
      }
      else {
        lVar3 = param_2[0x20];
        if (lVar3 == 1) {
          func_0x0001017e2180(param_1 + 0x15);
          goto LAB_104220288;
        }
        param_1[0x15] = param_2[0x15];
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
        param_1[0x17] = param_2[0x17];
        *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
        param_1[0x19] = param_2[0x19];
        *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
        *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
        param_1[0x1b] = param_2[0x1b];
        uVar2 = param_2[0x1d];
        *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
        param_1[0x1d] = uVar2;
        *(undefined1 *)((long)param_1 + 0xf1) = *(undefined1 *)((long)param_2 + 0xf1);
        param_1[0x1f] = param_2[0x1f];
        param_1[0x20] = lVar3;
        _swift_bridgeObjectRelease();
        uVar2 = param_2[0x22];
        uVar1 = param_1[0x22];
        param_1[0x21] = param_2[0x21];
        param_1[0x22] = uVar2;
        _swift_bridgeObjectRelease(uVar1);
        param_1[0x23] = param_2[0x23];
        *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
        param_1[0x25] = param_2[0x25];
        *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
        param_1[0x27] = param_2[0x27];
        *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
        *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
        param_1[0x29] = param_2[0x29];
        uVar2 = param_2[0x2b];
        *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
        param_1[0x2b] = uVar2;
        uVar2 = param_2[0x2e];
        uVar1 = param_1[0x2e];
        param_1[0x2d] = param_2[0x2d];
        param_1[0x2e] = uVar2;
        _swift_bridgeObjectRelease(uVar1);
        param_1[0x2f] = param_2[0x2f];
        *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
        param_1[0x31] = param_2[0x31];
        *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
        uVar2 = param_2[0x34];
        uVar1 = param_1[0x34];
        param_1[0x33] = param_2[0x33];
        param_1[0x34] = uVar2;
        _swift_bridgeObjectRelease(uVar1);
        *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
      }
      *(undefined1 *)((long)param_1 + 0x1a9) = *(undefined1 *)((long)param_2 + 0x1a9);
      uVar2 = param_2[0x37];
      param_1[0x36] = param_2[0x36];
      param_1[0x37] = uVar2;
      *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
      if (param_1[0x39] == 1) {
LAB_1042203e8:
        lVar3 = param_2[0x39];
        param_1[0x3a] = param_2[0x3a];
        param_1[0x39] = lVar3;
        param_1[0x3b] = param_2[0x3b];
      }
      else {
        lVar3 = param_2[0x39];
        if (lVar3 == 1) {
          func_0x0001017e21b4(param_1 + 0x39);
          goto LAB_1042203e8;
        }
        param_1[0x39] = lVar3;
        _objc_release();
        uVar2 = param_1[0x3a];
        param_1[0x3a] = param_2[0x3a];
        _objc_release(uVar2);
        uVar2 = param_1[0x3b];
        param_1[0x3b] = param_2[0x3b];
        _objc_release(uVar2);
      }
      *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
      param_1[0x3d] = param_2[0x3d];
      *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
      param_1[0x3f] = param_2[0x3f];
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
      if (param_1[0x42] == 1) {
LAB_104220474:
        uVar2 = param_2[0x41];
        uVar4 = param_2[0x44];
        uVar1 = param_2[0x43];
        param_1[0x42] = param_2[0x42];
        param_1[0x41] = uVar2;
        param_1[0x44] = uVar4;
        param_1[0x43] = uVar1;
        uVar2 = param_2[0x45];
        param_1[0x46] = param_2[0x46];
        param_1[0x45] = uVar2;
      }
      else {
        lVar3 = param_2[0x42];
        if (lVar3 == 1) {
          func_0x0001017e21e8(param_1 + 0x41);
          goto LAB_104220474;
        }
        *(undefined2 *)(param_1 + 0x41) = *(undefined2 *)(param_2 + 0x41);
        param_1[0x42] = lVar3;
        _swift_bridgeObjectRelease();
        uVar2 = param_1[0x43];
        param_1[0x43] = param_2[0x43];
        _swift_bridgeObjectRelease(uVar2);
        uVar2 = param_1[0x44];
        param_1[0x44] = param_2[0x44];
        _swift_bridgeObjectRelease(uVar2);
        *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
        *(undefined2 *)((long)param_1 + 0x229) = *(undefined2 *)((long)param_2 + 0x229);
        *(undefined1 *)((long)param_1 + 0x22b) = *(undefined1 *)((long)param_2 + 0x22b);
        uVar2 = param_1[0x46];
        param_1[0x46] = param_2[0x46];
        _swift_bridgeObjectRelease(uVar2);
      }
      param_1[0x47] = param_2[0x47];
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
      param_1[0x49] = param_2[0x49];
      *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_2 + 0x4a);
      *(undefined1 *)((long)param_1 + 0x251) = *(undefined1 *)((long)param_2 + 0x251);
      if (param_1[0x4b] == 0) {
LAB_10422055c:
        lVar3 = param_2[0x4b];
        param_1[0x4c] = param_2[0x4c];
        param_1[0x4b] = lVar3;
        param_1[0x4d] = param_2[0x4d];
      }
      else {
        lVar3 = param_2[0x4b];
        if (lVar3 == 0) {
          func_0x0001017e221c(param_1 + 0x4b);
          goto LAB_10422055c;
        }
        param_1[0x4b] = lVar3;
        _swift_bridgeObjectRelease();
        uVar2 = param_1[0x4c];
        param_1[0x4c] = param_2[0x4c];
        _swift_bridgeObjectRelease(uVar2);
        uVar2 = param_1[0x4d];
        param_1[0x4d] = param_2[0x4d];
        _swift_bridgeObjectRelease(uVar2);
      }
      uVar2 = param_1[0x4e];
      param_1[0x4e] = param_2[0x4e];
      _swift_bridgeObjectRelease(uVar2);
      param_1[0x4f] = param_2[0x4f];
      uVar2 = param_1[0x50];
      param_1[0x50] = param_2[0x50];
      _swift_bridgeObjectRelease(uVar2);
      *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
      *(undefined1 *)((long)param_1 + 0x289) = *(undefined1 *)((long)param_2 + 0x289);
      *(undefined1 *)((long)param_1 + 0x28a) = *(undefined1 *)((long)param_2 + 0x28a);
      param_1[0x52] = param_2[0x52];
      *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
      uVar2 = param_2[0x54];
      param_1[0x55] = param_2[0x55];
      param_1[0x54] = uVar2;
      param_1[0x56] = param_2[0x56];
      *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)(param_2 + 0x57);
      *(undefined1 *)((long)param_1 + 0x2b9) = *(undefined1 *)((long)param_2 + 0x2b9);
      param_1[0x58] = param_2[0x58];
      *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
      *(undefined1 *)((long)param_1 + 0x2c9) = *(undefined1 *)((long)param_2 + 0x2c9);
      *(undefined1 *)((long)param_1 + 0x2ca) = *(undefined1 *)((long)param_2 + 0x2ca);
      *(undefined1 *)((long)param_1 + 0x2cb) = *(undefined1 *)((long)param_2 + 0x2cb);
      param_1[0x5a] = param_2[0x5a];
      *(undefined1 *)(param_1 + 0x5b) = *(undefined1 *)(param_2 + 0x5b);
      param_1[0x5c] = param_2[0x5c];
      *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
      uVar2 = param_2[0x5e];
      *(undefined1 *)(param_1 + 0x5f) = *(undefined1 *)(param_2 + 0x5f);
      param_1[0x5e] = uVar2;
      param_1[0x60] = param_2[0x60];
      uVar2 = param_1[0x61];
      param_1[0x61] = param_2[0x61];
      _swift_bridgeObjectRelease(uVar2);
      param_1[0x62] = param_2[0x62];
      *(undefined1 *)(param_1 + 99) = *(undefined1 *)(param_2 + 99);
      goto LAB_10422065c;
    }
    func_0x00010178e244(param_1 + 3);
  }
  _memcpy(param_1 + 3,param_2 + 3,0x301);
LAB_10422065c:
  *(undefined1 *)((long)param_1 + 0x319) = *(undefined1 *)((long)param_2 + 0x319);
  *(undefined1 *)((long)param_1 + 0x31a) = *(undefined1 *)((long)param_2 + 0x31a);
  *(undefined1 *)((long)param_1 + 0x31b) = *(undefined1 *)((long)param_2 + 0x31b);
  *(undefined1 *)((long)param_1 + 0x31c) = *(undefined1 *)((long)param_2 + 0x31c);
  param_1[100] = param_2[100];
  uVar2 = param_1[0x65];
  param_1[0x65] = param_2[0x65];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[0x66];
  param_1[0x66] = param_2[0x66];
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x67) = *(undefined1 *)(param_2 + 0x67);
  *(undefined1 *)((long)param_1 + 0x339) = *(undefined1 *)((long)param_2 + 0x339);
  param_1[0x68] = param_2[0x68];
  return param_1;
}



/* Entry: 1042206d0; end: 10422086b;  */

int FUN_1042206d0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xd2] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xca);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10422086c; end: 1042208ab;  */

undefined8 FUN_10422086c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042208ac; end: 1042208ef;  */

void FUN_1042208ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d2628;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000113069a20 = puVar1;
  return;
}



/* Entry: 1042208f0; end: 10422096f;  */

uint FUN_1042208f0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_104220970(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 104220970; end: 104220b07;  */

undefined8 FUN_104220970(ulong *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar2 = *param_1;
  if ((((((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) != 0)) && ((int)param_1[2] == (int)param_2[2])) &&
       ((param_1[3] == param_2[3] && ((double)param_1[4] == (double)param_2[4])))) &&
      ((((double)param_1[5] == (double)param_2[5] &&
        (((double)param_1[6] == (double)param_2[6] && ((double)param_1[7] == (double)param_2[7]))))
       && ((double)param_1[8] == (double)param_2[8])))) &&
     (((((double)param_1[9] == (double)param_2[9] && (param_1[10] == param_2[10])) &&
       ((((byte)param_1[0xb] ^ (byte)param_2[0xb]) & 1) == 0)) &&
      (((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])) &&
       (param_1[0xe] == param_2[0xe])))))) {
    uVar2 = param_1[0xf];
    func_0x0001020f35dc(uVar2,param_2[0xf]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[0x10];
      uVar3 = param_2[0x10];
      lVar4 = *(long *)(uVar2 + 0x10);
      if (lVar4 == *(long *)(uVar3 + 0x10)) {
        if ((lVar4 != 0) && (uVar2 != uVar3)) {
          plVar5 = (long *)(uVar3 + 0x28);
          plVar6 = (long *)(uVar2 + 0x28);
          do {
            uVar2 = plVar6[-1];
            if ((uVar2 != plVar5[-1] || *plVar6 != *plVar5) &&
               (func_0x000107c605b8(), (uVar2 & 1) == 0)) goto code_r0x00010142d02c;
            plVar5 = plVar5 + 2;
            plVar6 = plVar6 + 2;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
        uVar1 = 1;
      }
      else {
code_r0x00010142d02c:
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 104220b08; end: 104220c67;  */

undefined8 * FUN_104220b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  uVar2 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  uVar1 = param_2[0x10];
  param_1[0x10] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Entry: 104220c68; end: 104220ce3;  */

undefined8 * FUN_104220c68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  uVar3 = param_2[5];
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[5] = uVar3;
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRelease(param_1[0xf]);
  uVar2 = param_1[0x10];
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 104220ce4; end: 104220dbb;  */

int FUN_104220ce4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104220dbc; end: 104220e4b;  */

undefined8 FUN_104220dbc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104220e4c; end: 104220e6b;  */

void FUN_104220e4c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}


