/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047ab848; end: 1047ab8a7;  */

int FUN_1047ab848(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1047ab8a8; end: 1047abad7;  */

void FUN_1047ab8a8(undefined8 param_1)

{
  char cVar1;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[3];
    if (lVar2 == 0) goto LAB_1047ab9d8;
LAB_1047ab8f0:
    uVar4 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[4];
    if (lVar2 != 0) goto LAB_1047ab914;
LAB_1047ab9e8:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[6];
    if (lVar2 == 0) goto LAB_1047ab9f8;
LAB_1047ab968:
    uVar4 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[8];
    if (lVar2 != 0) goto LAB_1047ab98c;
LAB_1047aba08:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[9];
    if (lVar2 == 0) goto LAB_1047aba18;
LAB_1047ab9b0:
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104707910(param_1,lVar2);
  }
  else {
    uVar4 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[3];
    if (lVar2 != 0) goto LAB_1047ab8f0;
LAB_1047ab9d8:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[4];
    if (lVar2 == 0) goto LAB_1047ab9e8;
LAB_1047ab914:
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar5 = *puVar6;
        _swift_bridgeObjectRetain(uVar5);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
        _swift_bridgeObjectRelease(uVar5);
        puVar6 = puVar6 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar2 = unaff_x20[6];
    if (lVar2 != 0) goto LAB_1047ab968;
LAB_1047ab9f8:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[8];
    if (lVar2 == 0) goto LAB_1047aba08;
LAB_1047ab98c:
    uVar4 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[9];
    if (lVar2 != 0) goto LAB_1047ab9b0;
LAB_1047aba18:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar2 = unaff_x20[0xb];
  if (lVar2 == 1) {
LAB_1047aba60:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[0xd];
  }
  else {
    uVar4 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar2 == 0) goto LAB_1047aba60;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[0xd];
  }
  if (lVar2 != 0) {
    uVar4 = unaff_x20[0xe];
    cVar1 = *(char *)(unaff_x20 + 0xf);
    uVar5 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar2);
    if (cVar1 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar4);
      goto LAB_1047abab8;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1047abab8:
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x79) & 1);
  return;
}



/* Entry: 1047abad8; end: 1047abb13;  */

void FUN_1047abad8(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047ab8a8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047abb14; end: 1047abb17;  */

void FUN_1047abb14(undefined8 param_1)

{
  char cVar1;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[3];
    if (lVar2 == 0) goto LAB_1047ab9d8;
LAB_1047ab8f0:
    uVar4 = unaff_x20[2];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[4];
    if (lVar2 != 0) goto LAB_1047ab914;
LAB_1047ab9e8:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[6];
    if (lVar2 == 0) goto LAB_1047ab9f8;
LAB_1047ab968:
    uVar4 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[8];
    if (lVar2 != 0) goto LAB_1047ab98c;
LAB_1047aba08:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[9];
    if (lVar2 == 0) goto LAB_1047aba18;
LAB_1047ab9b0:
    __ss6HasherV8_combineyys5UInt8VF(1);
    func_0x000104707910(param_1,lVar2);
  }
  else {
    uVar4 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[3];
    if (lVar2 != 0) goto LAB_1047ab8f0;
LAB_1047ab9d8:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[4];
    if (lVar2 == 0) goto LAB_1047ab9e8;
LAB_1047ab914:
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar2 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar2 + 0x28);
      do {
        uVar4 = puVar6[-1];
        uVar5 = *puVar6;
        _swift_bridgeObjectRetain(uVar5);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
        _swift_bridgeObjectRelease(uVar5);
        puVar6 = puVar6 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar2 = unaff_x20[6];
    if (lVar2 != 0) goto LAB_1047ab968;
LAB_1047ab9f8:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[8];
    if (lVar2 == 0) goto LAB_1047aba08;
LAB_1047ab98c:
    uVar4 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[9];
    if (lVar2 != 0) goto LAB_1047ab9b0;
LAB_1047aba18:
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  lVar2 = unaff_x20[0xb];
  if (lVar2 == 1) {
LAB_1047aba60:
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar2 = unaff_x20[0xd];
  }
  else {
    uVar4 = unaff_x20[10];
    __ss6HasherV8_combineyys5UInt8VF(1);
    if (lVar2 == 0) goto LAB_1047aba60;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar2);
    lVar2 = unaff_x20[0xd];
  }
  if (lVar2 != 0) {
    uVar4 = unaff_x20[0xe];
    cVar1 = *(char *)(unaff_x20 + 0xf);
    uVar5 = unaff_x20[0xc];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,lVar2);
    if (cVar1 != '\x01') {
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar4);
      goto LAB_1047abab8;
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
LAB_1047abab8:
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)((long)unaff_x20 + 0x79) & 1);
  return;
}



/* Entry: 1047abb18; end: 1047abb4f;  */

void FUN_1047abb18(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047ab8a8(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047abb50; end: 1047abbcf;  */

uint FUN_1047abb50(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined8 uStack_ae;
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
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_c0 = param_1[0xc];
  uStack_b8 = (undefined2)param_1[0xd];
  uStack_ae = *(undefined8 *)((long)param_1 + 0x72);
  uStack_b6 = (undefined6)*(undefined8 *)((long)param_1 + 0x6a);
  uStack_b0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x6a) >> 0x30);
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_2e = *(undefined8 *)((long)param_2 + 0x72);
  uStack_30 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x6a) >> 0x30);
  uStack_38 = (undefined2)param_2[0xd];
  uStack_36 = (undefined6)((ulong)param_2[0xd] >> 0x10);
  FUN_1047abbd0(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1047abbd0; end: 1047abe87;  */

byte FUN_1047abbd0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar4 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar4 == 0) goto LAB_1047abc24;
  }
  else if ((uVar4 != 0) &&
          ((uVar1 = *param_1, uVar1 == *param_2 && param_1[1] == uVar4 ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) != 0)))) {
LAB_1047abc24:
    uVar4 = param_2[3];
    if (param_1[3] == 0) {
      if (uVar4 == 0) goto LAB_1047abc60;
    }
    else if ((uVar4 != 0) &&
            (((uVar1 = param_1[2], uVar1 == param_2[2] && (param_1[3] == uVar4)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar1 & 1) != 0)))) {
LAB_1047abc60:
      uVar4 = param_1[4];
      uVar1 = param_2[4];
      if (uVar4 == 0) {
        if (uVar1 == 0) goto LAB_1047abcd0;
      }
      else if ((uVar1 != 0) && (lVar6 = *(long *)(uVar4 + 0x10), lVar6 == *(long *)(uVar1 + 0x10)))
      {
        if ((lVar6 != 0) && (uVar4 != uVar1)) {
          plVar8 = (long *)(uVar1 + 0x28);
          plVar10 = (long *)(uVar4 + 0x28);
          do {
            uVar4 = plVar10[-1];
            if ((uVar4 != plVar8[-1] || *plVar10 != *plVar8) &&
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (), (uVar4 & 1) == 0)) goto LAB_1047abe44;
            plVar8 = plVar8 + 2;
            plVar10 = plVar10 + 2;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
LAB_1047abcd0:
        uVar4 = param_2[6];
        if (param_1[6] == 0) {
          if (uVar4 == 0) goto LAB_1047abd0c;
        }
        else if ((uVar4 != 0) &&
                (((uVar1 = param_1[5], uVar1 == param_2[5] && (param_1[6] == uVar4)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar1 & 1) != 0)))) {
LAB_1047abd0c:
          uVar4 = param_2[8];
          if (param_1[8] == 0) {
            if (uVar4 == 0) goto LAB_1047abd48;
          }
          else if ((uVar4 != 0) &&
                  (((uVar1 = param_1[7], uVar1 == param_2[7] && (param_1[8] == uVar4)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (), (uVar1 & 1) != 0)))) {
LAB_1047abd48:
            uVar1 = param_1[9];
            uVar4 = param_2[9];
            if (uVar1 == 0) {
              if (uVar4 == 0) {
LAB_1047abd90:
                uVar4 = param_1[0xb];
                uVar1 = param_2[0xb];
                if (uVar4 == 1) {
                  if (uVar1 == 1) goto LAB_1047abda8;
                }
                else if (uVar1 != 1) {
                  if (uVar4 == 0) {
                    if (uVar1 == 0) goto LAB_1047abda8;
                  }
                  else if ((uVar1 != 0) &&
                          (((uVar3 = param_1[10], uVar3 == param_2[10] && (uVar4 == uVar1)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (), (uVar3 & 1) != 0)))) {
LAB_1047abda8:
                    uVar4 = param_2[0xd];
                    if (param_1[0xd] == 0) {
                      if (uVar4 == 0) goto LAB_1047abe74;
                    }
                    else if (uVar4 != 0) {
                      uVar2 = param_1[0xc];
                      uVar7 = param_1[0xe];
                      uVar1 = param_1[0xf];
                      uVar9 = param_2[0xe];
                      uVar3 = param_2[0xf];
                      if (((uVar2 == param_2[0xc]) && (param_1[0xd] == uVar4)) ||
                         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (), (uVar2 & 1) != 0)) {
                        if ((char)uVar1 == '\x01') {
                          if ((char)uVar3 != '\x01') goto LAB_1047abe44;
                        }
                        else {
                          bVar5 = 0;
                          if (((char)uVar3 == '\x01') || (uVar7 != uVar9)) goto LAB_1047abe48;
                        }
LAB_1047abe74:
                        bVar5 = *(byte *)((long)param_1 + 0x79) ^ *(byte *)((long)param_2 + 0x79) ^
                                1;
                        goto LAB_1047abe48;
                      }
                    }
                  }
                }
              }
            }
            else if (uVar4 != 0) {
              _swift_bridgeObjectRetain(uVar4);
              uVar3 = uVar1;
              _swift_bridgeObjectRetain();
              FUN_10470dd84();
              _swift_bridgeObjectRelease(uVar1);
              _swift_bridgeObjectRelease(uVar4);
              if ((uVar3 & 1) != 0) goto LAB_1047abd90;
            }
          }
        }
      }
    }
  }
LAB_1047abe44:
  bVar5 = 0;
LAB_1047abe48:
  return bVar5 & 1;
}



/* Entry: 1047abe88; end: 1047abe8b;  */

void FUN_1047abe88(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34b80;
  _swift_getWitnessTable(&UNK_10dd34b80,&UNK_1107a1178);
  puRam000000011308ed28 = puVar1;
  return;
}



/* Entry: 1047abe8c; end: 1047abecb;  */

void FUN_1047abe8c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34b80;
  _swift_getWitnessTable(&UNK_10dd34b80,&UNK_1107a1178);
  puRam000000011308ed28 = puVar1;
  return;
}



/* Entry: 1047abecc; end: 1047abf57;  */

long FUN_1047abecc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047abf58; end: 1047ac02b;  */

undefined8 * FUN_1047abf58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar6 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar6;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  lVar5 = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  if (lVar5 == 1) {
    uVar6 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar6;
  }
  else {
    param_1[10] = param_2[10];
    param_1[0xb] = lVar5;
    _swift_bridgeObjectRetain(lVar5);
  }
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  param_1[0xe] = param_2[0xe];
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1047ac02c; end: 1047ac1a7;  */

undefined8 * FUN_1047ac02c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = param_1[0xb];
  if (lVar2 == 1) {
    if (param_2[0xb] != 1) {
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      _swift_bridgeObjectRetain();
      goto LAB_1047ac15c;
    }
  }
  else {
    if (param_2[0xb] != 1) {
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar2);
      goto LAB_1047ac15c;
    }
    func_0x0001017b6608(param_1 + 10);
  }
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
LAB_1047ac15c:
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0xe] = uVar1;
  *(undefined1 *)((long)param_1 + 0x79) = *(undefined1 *)((long)param_2 + 0x79);
  return param_1;
}



/* Entry: 1047ac1a8; end: 1047ac28b;  */

undefined8 * FUN_1047ac1a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRelease(uVar2);
  if (param_1[0xb] != 1) {
    lVar3 = param_2[0xb];
    if (lVar3 != 1) {
      param_1[10] = param_2[10];
      param_1[0xb] = lVar3;
      _swift_bridgeObjectRelease();
      goto LAB_1047ac254;
    }
    func_0x0001017b6608(param_1 + 10);
  }
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
LAB_1047ac254:
  uVar2 = param_2[0xd];
  uVar1 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)((long)param_1 + 0x79) = *(undefined1 *)((long)param_2 + 0x79);
  return param_1;
}



/* Entry: 1047ac28c; end: 1047ac36b;  */

int FUN_1047ac28c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x7a) != '\0')) {
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



/* Entry: 1047ac36c; end: 1047ac4bf;  */

void FUN_1047ac36c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,uVar4);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,uVar5);
  __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar3,uVar6);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ac4c0; end: 1047ac503;  */

uint FUN_1047ac4c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_1047ac504(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047ac504; end: 1047ac59b;  */

ulong FUN_1047ac504(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if ((uVar1 != param_2[4]) || (param_1[5] != param_2[5])) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return uVar1;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1047ac59c; end: 1047ac59f;  */

void FUN_1047ac59c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34c10;
  _swift_getWitnessTable(&UNK_10dd34c10,&UNK_1107a1250);
  puRam000000011308ed30 = puVar1;
  return;
}



/* Entry: 1047ac5a0; end: 1047ac5df;  */

void FUN_1047ac5a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34c10;
  _swift_getWitnessTable(&UNK_10dd34c10,&UNK_1107a1250);
  puRam000000011308ed30 = puVar1;
  return;
}



/* Entry: 1047ac5e0; end: 1047ac63b;  */

long FUN_1047ac5e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047ac63c; end: 1047ac71b;  */

undefined8 * FUN_1047ac63c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1047ac71c; end: 1047ac76f;  */

undefined8 * FUN_1047ac71c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1047ac770; end: 1047ac853;  */

int FUN_1047ac770(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047ac854; end: 1047ac893;  */

void FUN_1047ac854(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34c60;
  _swift_getWitnessTable(&UNK_10dd34c60,&UNK_1107a12b8);
  puRam000000011308ed38 = puVar1;
  return;
}



/* Entry: 1047ac894; end: 1047ac93f;  */

void FUN_1047ac894(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ac940; end: 1047ac99b;  */

void FUN_1047ac940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1047aca88();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1047ac99c; end: 1047ac9e7;  */

void FUN_1047ac99c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1047aca88();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1047ac9e8; end: 1047aca77;  */

undefined1  [16] FUN_1047ac9e8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe800000000000000;
    uVar2 = 0x64656c6261736964;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe700000000000000;
    uVar2 = 0x6c6c6950617463;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1047aca78);
      (*pcVar1)();
    }
    uVar3 = 0xe800000000000000;
    uVar2 = 0x647261436f666e69;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1047aca78; end: 1047aca87;  */

undefined1  [16] FUN_1047aca78(void)

{
  return ZEXT816(0x1107a12b8);
}



/* Entry: 1047aca88; end: 1047acac7;  */

void FUN_1047aca88(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34c88;
  _swift_getWitnessTable(&UNK_10dd34c88,&UNK_1107a12b8);
  puRam000000011308ed40 = puVar1;
  return;
}



/* Entry: 1047acac8; end: 1047acb07;  */

bool FUN_1047acac8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1047acb08; end: 1047acb47;  */

void FUN_1047acb08(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34db0;
  _swift_getWitnessTable(&UNK_10dd34db0,&UNK_1107a1360);
  puRam000000011308ed48 = puVar1;
  return;
}



/* Entry: 1047acb48; end: 1047acbf3;  */

void FUN_1047acb48(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047acbf4; end: 1047acc4f;  */

void FUN_1047acbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1047accac();
  __sSYsSeRzSi8RawValueSYRtzrlE4fromxs7Decoder_p_tKcfC(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1047acc50; end: 1047acc9b;  */

void FUN_1047acc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1047accac();
  __sSYsSERzSi8RawValueSYRtzrlE6encode2toys7Encoder_p_tKF(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1047acc9c; end: 1047accab;  */

undefined1  [16] FUN_1047acc9c(void)

{
  return ZEXT816(0x1107a1360);
}



/* Entry: 1047accac; end: 1047acceb;  */

void FUN_1047accac(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34dd8;
  _swift_getWitnessTable(&UNK_10dd34dd8,&UNK_1107a1360);
  puRam000000011308ed50 = puVar1;
  return;
}



/* Entry: 1047accec; end: 1047acd9b;  */

void FUN_1047accec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_88 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  if (param_2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,param_1,param_2);
  }
  if (param_4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,param_3,param_4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047acd9c; end: 1047acda7;  */

void FUN_1047acd9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  lVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_88,0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar1,lVar3);
  }
  if (lVar4 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_88,uVar2,lVar4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047acda8; end: 1047aceef;  */

void FUN_1047acda8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,lVar1);
  }
  if (lVar3 != 0) {
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,uVar2,lVar3);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 1047acef0; end: 1047acf0b;  */

undefined8 FUN_1047acef0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *param_2) || (uVar2 != uVar4)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar6,uVar2,*param_2,uVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if ((uVar5 != 0) &&
          (((uVar7 == uVar1 && (uVar3 == uVar5)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar7,uVar3,uVar1,uVar5,0), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1047acf0c; end: 1047acfc3;  */

undefined8
FUN_1047acf0c(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1047acfc4; end: 1047acfc7;  */

void FUN_1047acfc4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34f10;
  _swift_getWitnessTable(&UNK_10dd34f10,&UNK_1107a1450);
  puRam000000011308ed58 = puVar1;
  return;
}



/* Entry: 1047acfc8; end: 1047ad007;  */

void FUN_1047acfc8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34f10;
  _swift_getWitnessTable(&UNK_10dd34f10,&UNK_1107a1450);
  puRam000000011308ed58 = puVar1;
  return;
}



/* Entry: 1047ad008; end: 1047ad097;  */

long FUN_1047ad008(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047ad098; end: 1047ad103;  */

undefined8 * FUN_1047ad098(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 1047ad104; end: 1047ad147;  */

undefined8 * FUN_1047ad104(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 1047ad148; end: 1047ad207;  */

int FUN_1047ad148(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
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



/* Entry: 1047ad208; end: 1047ad27b;  */

void FUN_1047ad208(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,unaff_x20[2],unaff_x20[3]);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,unaff_x20[4],unaff_x20[5]);
  dVar1 = 0.0;
  if ((double)unaff_x20[6] != 0.0) {
    dVar1 = (double)unaff_x20[6];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ad27c; end: 1047ad27f;  */

void FUN_1047ad27c(void)

{
  undefined8 *unaff_x20;
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,unaff_x20[2],unaff_x20[3]);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,unaff_x20[4],unaff_x20[5]);
  dVar1 = 0.0;
  if ((double)unaff_x20[6] != 0.0) {
    dVar1 = (double)unaff_x20[6];
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ad280; end: 1047ad2ff;  */

void FUN_1047ad280(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  double dVar5;
  double dVar6;
  
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar4 = unaff_x20[5];
  dVar6 = (double)unaff_x20[6];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar3);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar2,uVar4);
  dVar5 = 0.0;
  if (dVar6 != 0.0) {
    dVar5 = dVar6;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar5);
  return;
}



/* Entry: 1047ad300; end: 1047ad3a7;  */

void FUN_1047ad300(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar3 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  dVar8 = (double)unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar1,uVar4);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar2,uVar5);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar3,uVar6);
  dVar7 = 0.0;
  if (dVar8 != 0.0) {
    dVar7 = dVar8;
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar7);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ad3a8; end: 1047ad3ff;  */

uint FUN_1047ad3a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1047ad400(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1047ad400; end: 1047ad49f;  */

bool FUN_1047ad400(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_1[4];
    if (((uVar1 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) {
      return (double)param_1[6] == (double)param_2[6];
    }
  }
  return false;
}



/* Entry: 1047ad4a0; end: 1047ad4a3;  */

void FUN_1047ad4a0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34fa0;
  _swift_getWitnessTable(&UNK_10dd34fa0,&UNK_1107a1508);
  puRam000000011308ed60 = puVar1;
  return;
}



/* Entry: 1047ad4a4; end: 1047ad4e3;  */

void FUN_1047ad4a4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd34fa0;
  _swift_getWitnessTable(&UNK_10dd34fa0,&UNK_1107a1508);
  puRam000000011308ed60 = puVar1;
  return;
}



/* Entry: 1047ad4e4; end: 1047ad53f;  */

long FUN_1047ad4e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047ad540; end: 1047ad62f;  */

undefined8 * FUN_1047ad540(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1047ad630; end: 1047ad68b;  */

undefined8 * FUN_1047ad630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 1047ad68c; end: 1047ad72f;  */

int FUN_1047ad68c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047ad730; end: 1047ad89b;  */

void FUN_1047ad730(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  cVar3 = *(char *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  if (cVar3 == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ad89c; end: 1047ad8bf;  */

undefined8 FUN_1047ad89c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = *param_1;
  uVar4 = param_1[2];
  uVar5 = param_2[2];
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  if (((uVar3 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,param_1[1],*param_2,param_2[1],0), (uVar3 & 1) == 0)) {
    return 0;
  }
  if ((char)uVar2 == '\x01') {
    if ((char)uVar1 == '\x01') {
      return 1;
    }
  }
  else if (((char)uVar1 != '\x01') && (uVar4 == uVar5)) {
    return 1;
  }
  return 0;
}



/* Entry: 1047ad8c0; end: 1047ad957;  */

undefined8
FUN_1047ad8c0(ulong param_1,long param_2,long param_3,char param_4,ulong param_5,long param_6,
             long param_7,char param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == '\x01') {
    if (param_8 == '\x01') {
      return 1;
    }
  }
  else if ((param_8 != '\x01') && (param_3 == param_7)) {
    return 1;
  }
  return 0;
}



/* Entry: 1047ad958; end: 1047ad95b;  */

void FUN_1047ad958(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35030;
  _swift_getWitnessTable(&UNK_10dd35030,&UNK_1107a15c8);
  puRam000000011308ed68 = puVar1;
  return;
}



/* Entry: 1047ad95c; end: 1047ad99b;  */

void FUN_1047ad95c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35030;
  _swift_getWitnessTable(&UNK_10dd35030,&UNK_1107a15c8);
  puRam000000011308ed68 = puVar1;
  return;
}



/* Entry: 1047ad99c; end: 1047ad9c7;  */

long FUN_1047ad99c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047ad9c8; end: 1047ad9cf;  */

void FUN_1047ad9c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1047ad9d0; end: 1047ada0b;  */

undefined8 * FUN_1047ad9d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1047ada0c; end: 1047ada67;  */

undefined8 * FUN_1047ada0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 1047ada68; end: 1047adaab;  */

undefined8 * FUN_1047ada68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1047adaac; end: 1047adb47;  */

int FUN_1047adaac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047adb48; end: 1047adc2f;  */

void FUN_1047adb48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *unaff_x20;
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar5 = puVar5 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar3 = unaff_x20[2];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[4];
  }
  else {
    lVar4 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar4,lVar3);
    lVar3 = unaff_x20[4];
  }
  if (lVar3 != 0) {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,lVar4,lVar3);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 1047adc30; end: 1047adc6b;  */

void FUN_1047adc30(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_1047adb48(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047adc6c; end: 1047adc6f;  */

void FUN_1047adc6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *unaff_x20;
  lVar3 = *(long *)(lVar4 + 0x10);
  __ss6HasherV8_combineyySuF(lVar3);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar5 = puVar5 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar3 = unaff_x20[2];
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar3 = unaff_x20[4];
  }
  else {
    lVar4 = unaff_x20[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar4,lVar3);
    lVar3 = unaff_x20[4];
  }
  if (lVar3 != 0) {
    lVar4 = unaff_x20[3];
    __ss6HasherV8_combineyys5UInt8VF(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,lVar4,lVar3);
    return;
  }
  __ss6HasherV8_combineyys5UInt8VF(0);
  return;
}



/* Entry: 1047adc70; end: 1047adca7;  */

void FUN_1047adc70(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_1047adb48(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047adca8; end: 1047adcef;  */

uint FUN_1047adca8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1047adcf0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047adcf0; end: 1047ade03;  */

undefined8 FUN_1047adcf0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 == *(long *)(lVar3 + 0x10)) {
    if (lVar4 != 0 && lVar2 != lVar3) {
      plVar5 = (long *)(lVar3 + 0x28);
      plVar6 = (long *)(lVar2 + 0x28);
      do {
        uVar1 = plVar6[-1];
        if ((uVar1 != plVar5[-1] || *plVar6 != *plVar5) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) == 0)) {
          return 0;
        }
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    lVar4 = param_2[2];
    if (param_1[2] == 0) {
      if (lVar4 != 0) {
        return 0;
      }
    }
    else {
      if (lVar4 == 0) {
        return 0;
      }
      uVar1 = param_1[1];
      if (((uVar1 != param_2[1]) || (param_1[2] != lVar4)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar1 & 1) == 0)) {
        return 0;
      }
    }
    lVar4 = param_2[4];
    if (param_1[4] == 0) {
      if (lVar4 == 0) {
        return 1;
      }
    }
    else if ((lVar4 != 0) &&
            (((uVar1 = param_1[3], uVar1 == param_2[3] && (param_1[4] == lVar4)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar1 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1047ade04; end: 1047ade07;  */

void FUN_1047ade04(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd350c0;
  _swift_getWitnessTable(&UNK_10dd350c0,&UNK_1107a1680);
  puRam000000011308ed70 = puVar1;
  return;
}



/* Entry: 1047ade08; end: 1047ade47;  */

void FUN_1047ade08(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd350c0;
  _swift_getWitnessTable(&UNK_10dd350c0,&UNK_1107a1680);
  puRam000000011308ed70 = puVar1;
  return;
}



/* Entry: 1047ade48; end: 1047adea3;  */

long FUN_1047ade48(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047adea4; end: 1047adf7b;  */

undefined8 * FUN_1047adea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 1047adf7c; end: 1047adfcf;  */

undefined8 * FUN_1047adf7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
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
  return param_1;
}



/* Entry: 1047adfd0; end: 1047ae06f;  */

int FUN_1047adfd0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047ae070; end: 1047ae197;  */

void FUN_1047ae070(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_40 = unaff_x20[4];
  uVar1 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_a8,0);
  FUN_1047adb48(auStack_a8);
  __sSS4hash4intoys6HasherVz_tF(auStack_a8,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ae198; end: 1047ae1ef;  */

uint FUN_1047ae198(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1047ae1f0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1047ae1f0; end: 1047ae36b;  */

long FUN_1047ae1f0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  lVar10 = *param_1;
  lVar11 = *param_2;
  lVar12 = *(long *)(lVar10 + 0x10);
  if (lVar12 == *(long *)(lVar11 + 0x10)) {
    uVar7 = param_1[1];
    lVar3 = param_1[2];
    uVar9 = param_1[3];
    lVar4 = param_1[4];
    uVar1 = param_2[1];
    lVar5 = param_2[2];
    uVar2 = param_2[3];
    lVar6 = param_2[4];
    if (lVar12 != 0 && lVar10 != lVar11) {
      plVar14 = (long *)(lVar11 + 0x28);
      plVar13 = (long *)(lVar10 + 0x28);
      do {
        uVar8 = plVar13[-1];
        if ((uVar8 != plVar14[-1] || *plVar13 != *plVar14) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar8 & 1) == 0)) {
          return 0;
        }
        plVar14 = plVar14 + 2;
        plVar13 = plVar13 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    if (lVar3 == 0) {
      if (lVar5 != 0) {
        return 0;
      }
    }
    else {
      if (lVar5 == 0) {
        return 0;
      }
      if (((uVar7 != uVar1) || (lVar3 != lVar5)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar7,lVar3,uVar1,lVar5,0), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
    if (lVar4 == 0) {
      if (lVar6 == 0) goto LAB_1047ae300;
    }
    else if ((lVar6 != 0) &&
            (((uVar9 == uVar2 && (lVar4 == lVar6)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar9 & 1) != 0)))) {
LAB_1047ae300:
      lVar12 = param_1[5];
      if ((lVar12 == param_2[5]) && (param_1[6] == param_2[6])) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return lVar12;
    }
  }
  return 0;
}



/* Entry: 1047ae36c; end: 1047ae36f;  */

void FUN_1047ae36c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35160;
  _swift_getWitnessTable(&UNK_10dd35160,&UNK_1107a1740);
  puRam000000011308ed78 = puVar1;
  return;
}



/* Entry: 1047ae370; end: 1047ae3af;  */

void FUN_1047ae370(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd35160;
  _swift_getWitnessTable(&UNK_10dd35160,&UNK_1107a1740);
  puRam000000011308ed78 = puVar1;
  return;
}



/* Entry: 1047ae3b0; end: 1047ae413;  */

long FUN_1047ae3b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1047ae414; end: 1047ae51b;  */

undefined8 * FUN_1047ae414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 1047ae51c; end: 1047ae57f;  */

undefined8 * FUN_1047ae51c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
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
  return param_1;
}



/* Entry: 1047ae580; end: 1047ae623;  */

int FUN_1047ae580(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1047ae624; end: 1047ae737;  */

void FUN_1047ae624(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __ss6HasherV8_combineyySuF(uVar1);
  FUN_1046db9b8(auStack_78,uVar2);
  __ss6HasherV8_combineyys5UInt8VF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1047ae738; end: 1047ae78b;  */

byte FUN_1047ae738(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  
  if (*param_1 == *param_2) {
    bVar2 = *(byte *)(param_1 + 4);
    bVar3 = *(byte *)(param_2 + 4);
    uVar4 = *(ulong *)(param_1 + 2);
    FUN_10470aff4(uVar4,*(undefined8 *)(param_2 + 2));
    bVar1 = 0;
    if ((uVar4 & 1) != 0) {
      bVar1 = bVar2 ^ bVar3 ^ 1;
    }
    return bVar1;
  }
  return 0;
}



/* Entry: 1047ae78c; end: 1047ae78f;  */

void FUN_1047ae78c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd351f0;
  _swift_getWitnessTable(&UNK_10dd351f0,&UNK_1107a17f8);
  puRam000000011308ed80 = puVar1;
  return;
}



/* Entry: 1047ae790; end: 1047ae7cf;  */

void FUN_1047ae790(void)

{
  undefined *puVar1;
  
  if (puRam000000011308ed80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd351f0;
  _swift_getWitnessTable(&UNK_10dd351f0,&UNK_1107a17f8);
  puRam000000011308ed80 = puVar1;
  return;
}



/* Entry: 1047ae7d0; end: 1047ae7d7;  */

void FUN_1047ae7d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1047ae7d8; end: 1047ae80b;  */

undefined8 * FUN_1047ae7d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1047ae80c; end: 1047ae85f;  */

undefined8 * FUN_1047ae80c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1047ae860; end: 1047ae89b;  */

undefined8 * FUN_1047ae860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}


