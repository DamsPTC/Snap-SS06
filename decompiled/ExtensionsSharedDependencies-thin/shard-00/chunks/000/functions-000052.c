/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001067b8; end: 00106833;  */

undefined8 * FUN_001067b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  return param_1;
}



/* Entry: 00106834; end: 00106847;  */

void FUN_00106834(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined8 *)((long)param_1 + 0x1e) = *(undefined8 *)((long)param_2 + 0x1e);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 00106848; end: 001068b3;  */

undefined8 * FUN_00106848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x22) = *(undefined1 *)((long)param_2 + 0x22);
  *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined1 *)((long)param_1 + 0x24) = *(undefined1 *)((long)param_2 + 0x24);
  *(undefined1 *)((long)param_1 + 0x25) = *(undefined1 *)((long)param_2 + 0x25);
  return param_1;
}



/* Entry: 001068b4; end: 00106953;  */

int FUN_001068b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x26) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00106954; end: 00106a07;  */

void FUN_00106954(void)

{
  func_0x001063c0();
  return;
}



/* Entry: 00106a08; end: 00106a97;  */

void FUN_00106a08(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  FUN_00109a58();
  lVar1 = unaff_x20[2];
  lVar2 = *unaff_x20;
  if (lVar2 == 0) {
    if (lVar1 == 0) goto LAB_00106a38;
  }
  else if (lVar1 == unaff_x20[1] - lVar2) {
LAB_00106a38:
    uVar3 = 0xd;
    goto LAB_00106a5c;
  }
  if ((*(char *)(lVar2 + lVar1) == '\"') && (FUN_0010a190(), param_2 != 0)) {
    return;
  }
  uVar3 = 5;
LAB_00106a5c:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar3;
  _swift_willThrow();
  return;
}



/* Entry: 00106a98; end: 00106d63;  */

undefined8 FUN_00106a98(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  FUN_00109a58();
  uVar1 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (uVar1 == 0) {
      return 0;
    }
  }
  else if (uVar1 == unaff_x20[1] - lVar3) {
    return 0;
  }
  if (*(char *)(lVar3 + uVar1) != '}') {
    return 0;
  }
  if ((lVar3 == 0) || ((ulong)(unaff_x20[1] - lVar3) <= uVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x106b24);
    (*pcVar2)();
  }
  unaff_x20[2] = uVar1 + 1;
  lVar3 = unaff_x20[0xb] + 1;
  if (SCARRY8(unaff_x20[0xb],1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x106b28);
    (*pcVar2)();
  }
  unaff_x20[0xb] = lVar3;
  if (unaff_x20[4] < lVar3) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
               "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x106b74);
    (*pcVar2)();
  }
  return 1;
}



/* Entry: 00106d64; end: 00106e37;  */

void FUN_00106d64(undefined8 *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong uStack_18;
  
  FUN_00109a58();
  lVar3 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (lVar3 != 0) goto LAB_00106dd0;
  }
  else if (lVar3 != unaff_x20[1] - lVar4) {
LAB_00106dd0:
    bVar2 = *(byte *)(lVar4 + lVar3);
    uVar1 = ((uint)(bVar2 >> 6) | (bVar2 & 0x3f) << 8) + 0x81c1;
    if (((int)(char)bVar2 & 0x80000000U) == 0) {
      uVar1 = bVar2 + 1;
    }
    uStack_18 = (ulong)uVar1 + 0xfefefefefefeff &
                (-1L << ((4 - ((ulong)LZCOUNT(uVar1) >> 3)) * 8 & 0x3f) ^ 0xffffffffffffffffU);
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(&uStack_18);
    return;
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  param_1[1] = 0xd;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 00106e38; end: 0010744f;  */

void FUN_00106e38(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long alStack_f0 [2];
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [8];
  char cStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar4 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = puVar4[-1];
  puStack_e0 = puVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  puVar8 = (undefined8 *)((long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_00109a58();
  puVar12 = (ulong *)(unaff_x20 + 2);
  uVar11 = *puVar12;
  lVar9 = *unaff_x20;
  lVar5 = unaff_x20[1];
  if (lVar9 == 0) {
    if (uVar11 != 0) goto LAB_00106ed0;
LAB_00107030:
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar4,0,0);
    uVar15 = 0xd;
LAB_00107058:
    puVar4[1] = uVar15;
    *puVar4 = 0;
    _swift_willThrow();
  }
  else {
    if (uVar11 == lVar5 - lVar9) goto LAB_00107030;
LAB_00106ed0:
    if (*(char *)(lVar9 + uVar11) != '\"') {
      FUN_000fd2e4();
      lVar14 = 0;
      if (lVar9 != 0) {
        lVar14 = lVar5 - lVar9;
      }
      FUN_00109cd0(lVar9,lVar5,puVar12,lVar14);
      if (unaff_x21 != 0) goto LAB_00106ff0;
      puVar4 = &uStack_c8;
      FUN_000c7044();
      if (((uint)lVar5 & 0xff) != 1) goto LAB_00107064;
LAB_00107410:
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,puVar4,0,0);
      uVar15 = 1;
      goto LAB_00107058;
    }
    alStack_f0[1] = lVar5 - lVar9;
    uVar7 = 0;
    if (lVar9 != 0) {
      uVar7 = alStack_f0[1];
    }
    alStack_f0[0] = lVar14;
    if (uVar7 <= uVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1071fc);
      (*pcVar3)();
    }
    unaff_x20[2] = uVar11 + 1;
    FUN_000fd2e4();
    FUN_00109cd0(lVar9,lVar5,puVar12,uVar7);
    if (unaff_x21 == 0) {
      uVar6 = (uint)lVar5;
      puVar4 = &uStack_c8;
      FUN_000c7044();
      if ((uVar6 & 0xff) != 1) {
        uVar11 = *puVar12;
        if (lVar9 == 0) {
          if (uVar11 != 0) goto LAB_001070a4;
        }
        else if (uVar11 != alStack_f0[1]) {
LAB_001070a4:
          if (*(char *)(lVar9 + uVar11) != '\"') goto LAB_00107410;
          if (uVar7 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x107330);
            (*pcVar3)();
          }
          *puVar12 = uVar11 + 1;
          goto LAB_00107064;
        }
        goto LAB_00107030;
      }
      unaff_x20[2] = uVar11;
      FUN_00106a08();
      if ((puVar4 != (undefined8 *)0x4e614e) || (lVar5 != -0x1d00000000000000)) {
        uVar11 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x4e614e,0xe300000000000000,puVar4,lVar5,0);
        if ((uVar11 & 1) == 0) {
          if ((puVar4 != (undefined8 *)0x666e49) || (lVar5 != -0x1d00000000000000)) {
            uVar11 = 0x666e49;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x666e49,0xe300000000000000,puVar4,lVar5,0);
            if ((uVar11 & 1) == 0) {
              if ((puVar4 != (undefined8 *)0x666e492d) || (lVar5 != -0x1c00000000000000)) {
                uVar11 = 0x666e492d;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x666e492d,0xe400000000000000,puVar4,lVar5,0);
                if ((uVar11 & 1) == 0) {
                  uVar11 = 0x7974696e69666e49;
                  if (((puVar4 == (undefined8 *)0x7974696e69666e49) &&
                      (lVar5 == -0x1800000000000000)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7974696e69666e49,0xe800000000000000,puVar4,lVar5,0),
                     puVar2 = puStack_e0, (uVar11 & 1) != 0)) goto LAB_00107104;
                  uVar11 = 0x74696e69666e492d;
                  if (((puVar4 == (undefined8 *)0x74696e69666e492d) &&
                      (lVar5 == -0x16ffffffffffff87)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x74696e69666e492d,0xe900000000000079,puVar4,lVar5,0),
                     (uVar11 & 1) != 0)) goto LAB_00107158;
                  uStack_c8._0_1_ = SUB81(puVar4,0);
                  uStack_c8._1_1_ = (undefined1)((ulong)puVar4 >> 8);
                  uStack_c8._2_1_ = (undefined1)((ulong)puVar4 >> 0x10);
                  uStack_c8._3_1_ = (undefined1)((ulong)puVar4 >> 0x18);
                  uStack_c8._4_1_ = (undefined1)((ulong)puVar4 >> 0x20);
                  uStack_c8._5_1_ = (undefined1)((ulong)puVar4 >> 0x28);
                  uStack_c8._6_1_ = (undefined1)((ulong)puVar4 >> 0x30);
                  uStack_c8._7_1_ = (undefined1)((ulong)puVar4 >> 0x38);
                  cStack_c0 = (char)lVar5;
                  uStack_bf = (undefined1)((ulong)lVar5 >> 8);
                  uStack_be = (undefined1)((ulong)lVar5 >> 0x10);
                  uStack_bd = (undefined1)((ulong)lVar5 >> 0x18);
                  uStack_bc = (undefined1)((ulong)lVar5 >> 0x20);
                  uStack_bb = (undefined1)((ulong)lVar5 >> 0x28);
                  uStack_ba = (undefined2)((ulong)lVar5 >> 0x30);
                  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar8);
                  FUN_00033a8c();
                  uVar7 = 0;
                  puVar4 = puVar8;
                  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                            (puVar8,0,PTR___sSSN_0099b040,uVar11);
                  (**(code **)(alStack_f0[0] + 8))(puVar8,puVar2);
                  _swift_bridgeObjectRelease();
                  if (0xe < uVar7 >> 0x3c) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x107450);
                    (*pcVar3)();
                  }
                  uVar6 = (uint)(uVar7 >> 0x20);
                  uVar10 = uVar6 >> 0x1e;
                  if (uVar6 >> 0x1e < 2) {
                    if (uVar10 == 0) {
                      uStack_c8._0_1_ = SUB81(puVar4,0);
                      uStack_c8._1_1_ = (undefined1)((ulong)puVar4 >> 8);
                      uStack_c8._2_1_ = (undefined1)((ulong)puVar4 >> 0x10);
                      uStack_c8._3_1_ = (undefined1)((ulong)puVar4 >> 0x18);
                      uStack_c8._4_1_ = (undefined1)((ulong)puVar4 >> 0x20);
                      uStack_c8._5_1_ = (undefined1)((ulong)puVar4 >> 0x28);
                      uStack_c8._6_1_ = (undefined1)((ulong)puVar4 >> 0x30);
                      uStack_c8._7_1_ = (undefined1)((ulong)puVar4 >> 0x38);
                      cStack_c0 = (char)uVar7;
                      uStack_bf = (undefined1)(uVar7 >> 8);
                      uStack_be = (undefined1)(uVar7 >> 0x10);
                      uStack_bd = (undefined1)(uVar7 >> 0x18);
                      uStack_bc = (undefined1)(uVar7 >> 0x20);
                      uStack_bb = (undefined1)(uVar7 >> 0x28);
                      puVar8 = (undefined8 *)((long)&uStack_c8 + (uVar7 >> 0x30 & 0xff));
                      goto LAB_0010739c;
                    }
                    lVar14 = (long)(int)puVar4;
                    lVar13 = ((long)puVar4 >> 0x20) - lVar14;
                    if ((long)puVar4 >> 0x20 < lVar14) goto LAB_00107440;
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    if (lVar5 != 0) {
                      lVar9 = lVar5;
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x10744c);
                        (*pcVar3)();
                      }
                      lVar5 = (lVar14 - lVar9) + lVar5;
                      goto LAB_00107364;
                    }
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar5 = 0;
LAB_001073cc:
                    lVar9 = 0;
LAB_001073d0:
                    FUN_0010a3b8(&uStack_c8,lVar5,lVar9);
                    FUN_00023344(puVar4,uVar7);
                    cStack_d0 = cStack_c0;
                  }
                  else {
                    if (uVar10 == 2) {
                      lVar14 = puVar4[2];
                      lVar1 = puVar4[3];
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      lVar9 = lVar5;
                      if (lVar5 != 0) {
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar14,lVar9)) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x107448);
                          (*pcVar3)();
                        }
                        lVar5 = (lVar14 - lVar9) + lVar5;
                      }
                      lVar13 = lVar1 - lVar14;
                      if (SBORROW8(lVar1,lVar14)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x10732c);
                        (*pcVar3)();
                      }
LAB_00107364:
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      if (lVar5 == 0) goto LAB_001073cc;
                      if (lVar13 <= lVar9) {
                        lVar9 = lVar13;
                      }
                      lVar9 = lVar9 + lVar5;
                      goto LAB_001073d0;
                    }
                    cStack_c0 = '\0';
                    uStack_bf = 0;
                    uStack_be = 0;
                    uStack_bd = 0;
                    uStack_bc = 0;
                    uStack_bb = 0;
                    uStack_c8._0_1_ = 0;
                    uStack_c8._1_1_ = 0;
                    uStack_c8._2_1_ = 0;
                    uStack_c8._3_1_ = 0;
                    uStack_c8._4_1_ = 0;
                    uStack_c8._5_1_ = 0;
                    uStack_c8._6_1_ = 0;
                    uStack_c8._7_1_ = 0;
                    puVar8 = &uStack_c8;
LAB_0010739c:
                    FUN_0010a3b8(auStack_d8,&uStack_c8,puVar8);
                    FUN_00023344(puVar4,uVar7);
                  }
                  if (cStack_d0 == '\x01') goto LAB_00107410;
                  goto LAB_00107064;
                }
              }
LAB_00107158:
              _swift_bridgeObjectRelease(lVar5);
              goto LAB_00107064;
            }
          }
LAB_00107104:
          _swift_bridgeObjectRelease(lVar5);
          goto LAB_00107064;
        }
      }
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
LAB_00106ff0:
      FUN_000c7044(&uStack_c8);
    }
  }
LAB_00107064:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_00107440:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107444);
  (*pcVar3)();
}



/* Entry: 00107450; end: 00107543;  */

uint FUN_00107450(undefined8 *param_1)

{
  uint uVar1;
  uint extraout_w8;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  
  FUN_00109a58();
  lVar2 = unaff_x20[2];
  lVar3 = *unaff_x20;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_0010748c;
LAB_00107480:
    uVar4 = 0xd;
  }
  else {
    if (lVar2 == unaff_x20[1] - lVar3) goto LAB_00107480;
LAB_0010748c:
    if (*(char *)(lVar3 + lVar2) == 't') {
      param_1 = (undefined8 *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if (((ulong)param_1 & 1) != 0) {
        uVar1 = 1;
        goto LAB_00107530;
      }
    }
    else if (*(char *)(lVar3 + lVar2) == 'f') {
      param_1 = (undefined8 *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if (((ulong)param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_00107530;
      }
    }
    uVar4 = 4;
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar4;
  _swift_willThrow();
  uVar1 = extraout_w8;
LAB_00107530:
  return uVar1 & 1;
}



/* Entry: 00107544; end: 00107b5b;  */

void FUN_00107544(void)

{
  double dVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long extraout_x8;
  double dVar11;
  double *unaff_x20;
  long unaff_x21;
  undefined8 *puVar12;
  double *pdVar13;
  long lVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 *apuStack_f0 [2];
  double dStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [4];
  char cStack_cc;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar4 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lStack_d8 = puVar4[-1];
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_d8 + 0x40));
  puVar12 = (undefined8 *)((long)apuStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_00109a58();
  pdVar13 = unaff_x20 + 2;
  dVar15 = *pdVar13;
  dVar6 = *unaff_x20;
  dVar11 = unaff_x20[1];
  if (dVar6 == 0.0) {
    if (dVar15 != 0.0) goto LAB_001075e0;
LAB_0010777c:
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar5,0,0);
    uVar16 = 0xd;
LAB_001077a4:
    puVar5[1] = uVar16;
    *puVar5 = 0;
    _swift_willThrow();
  }
  else {
    if (dVar15 == (double)((long)dVar11 - (long)dVar6)) goto LAB_0010777c;
LAB_001075e0:
    if (*(char *)((long)dVar6 + (long)dVar15) != '\"') {
      FUN_000fd2e4();
      lVar14 = 0;
      if (dVar6 != 0.0) {
        lVar14 = (long)dVar11 - (long)dVar6;
      }
      FUN_00109cd0(dVar6,dVar11,pdVar13,lVar14);
      if (unaff_x21 != 0) goto LAB_00107700;
      puVar5 = &uStack_c8;
      FUN_000c7044();
      if ((SUB84(dVar11,0) & 0xff) != 1 && (uint)ABS((float)dVar6) < 0x7f800000) goto LAB_001077b0;
LAB_0010773c:
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,puVar5,0,0);
      uVar16 = 1;
      goto LAB_001077a4;
    }
    dStack_e0 = (double)((long)dVar11 - (long)dVar6);
    dVar1 = 0.0;
    if (dVar6 != 0.0) {
      dVar1 = dStack_e0;
    }
    apuStack_f0[1] = puVar4;
    if ((ulong)dVar1 <= (ulong)dVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x107948);
      (*pcVar3)();
    }
    unaff_x20[2] = (double)((long)dVar15 + 1);
    FUN_000fd2e4();
    FUN_00109cd0(dVar6,dVar11,pdVar13,dVar1);
    if (unaff_x21 == 0) {
      uVar8 = SUB84(dVar11,0);
      puVar5 = &uStack_c8;
      FUN_000c7044();
      if ((uVar8 & 0xff) != 1) {
        dVar11 = *pdVar13;
        if (dVar6 == 0.0) {
          if (dVar11 != 0.0) goto LAB_001077f0;
        }
        else if (dVar11 != dStack_e0) {
LAB_001077f0:
          if (*(char *)((long)dVar6 + (long)dVar11) != '\"') goto LAB_0010773c;
          if ((ulong)dVar1 <= (ulong)dVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x107a74);
            (*pcVar3)();
          }
          *pdVar13 = (double)((long)dVar11 + 1);
          goto LAB_001077b0;
        }
        goto LAB_0010777c;
      }
      unaff_x20[2] = dVar15;
      FUN_00106a08();
      if ((puVar5 != (undefined8 *)0x4e614e) || (dVar11 != -7.547924849643083e+168)) {
        uVar7 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x4e614e,0xe300000000000000,puVar5,dVar11,0);
        if ((uVar7 & 1) == 0) {
          if ((puVar5 != (undefined8 *)0x666e49) || (dVar11 != -7.547924849643083e+168)) {
            uVar7 = 0x666e49;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x666e49,0xe300000000000000,puVar5,dVar11,0);
            if ((uVar7 & 1) == 0) {
              if ((puVar5 != (undefined8 *)0x666e492d) || (dVar11 != -4.946608029462091e+173)) {
                uVar7 = 0x666e492d;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0x666e492d,0xe400000000000000,puVar5,dVar11,0);
                if ((uVar7 & 1) == 0) {
                  uVar7 = 0x7974696e69666e49;
                  if (((puVar5 == (undefined8 *)0x7974696e69666e49) &&
                      (dVar11 == -9.12488123524439e+192)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x7974696e69666e49,0xe800000000000000,puVar5,dVar11,0),
                     (uVar7 & 1) != 0)) goto LAB_00107854;
                  uVar7 = 0x74696e69666e492d;
                  if (((puVar5 == (undefined8 *)0x74696e69666e492d) &&
                      (dVar11 == -5.980082166329924e+197)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x74696e69666e492d,0xe900000000000079,puVar5,dVar11,0),
                     (uVar7 & 1) != 0)) goto LAB_001078a8;
                  uStack_c8._0_1_ = SUB81(puVar5,0);
                  uStack_c8._1_1_ = (undefined1)((ulong)puVar5 >> 8);
                  uStack_c8._2_1_ = (undefined1)((ulong)puVar5 >> 0x10);
                  uStack_c8._3_1_ = (undefined1)((ulong)puVar5 >> 0x18);
                  uStack_c8._4_1_ = (char)((ulong)puVar5 >> 0x20);
                  uStack_c8._5_1_ = (undefined1)((ulong)puVar5 >> 0x28);
                  uStack_c8._6_1_ = (undefined1)((ulong)puVar5 >> 0x30);
                  uStack_c8._7_1_ = (undefined1)((ulong)puVar5 >> 0x38);
                  uStack_c0 = SUB81(dVar11,0);
                  uStack_bf = (undefined1)((ulong)dVar11 >> 8);
                  uStack_be = (undefined1)((ulong)dVar11 >> 0x10);
                  uStack_bd = (undefined1)((ulong)dVar11 >> 0x18);
                  uStack_bc = (undefined1)((ulong)dVar11 >> 0x20);
                  uStack_bb = (undefined1)((ulong)dVar11 >> 0x28);
                  uStack_ba = (undefined2)((ulong)dVar11 >> 0x30);
                  __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar12);
                  FUN_00033a8c();
                  uVar9 = 0;
                  puVar5 = puVar12;
                  __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                            (puVar12,0,PTR___sSSN_0099b040,uVar7);
                  (**(code **)(lStack_d8 + 8))(puVar12,apuStack_f0[1]);
                  _swift_bridgeObjectRelease();
                  if (0xe < uVar9 >> 0x3c) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x107b5c);
                    (*pcVar3)();
                  }
                  uVar8 = (uint)(uVar9 >> 0x20);
                  uVar10 = uVar8 >> 0x1e;
                  if (uVar8 >> 0x1e < 2) {
                    if (uVar10 != 0) {
                      lVar14 = (long)(int)puVar5;
                      dVar15 = (double)(((long)puVar5 >> 0x20) - lVar14);
                      if ((long)puVar5 >> 0x20 < lVar14) goto LAB_00107b4c;
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      if (dVar11 != 0.0) {
                        dVar6 = dVar11;
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar14,(long)dVar6)) {
                    /* WARNING: Does not return */
                          pcVar3 = (code *)SoftwareBreakpoint(1,0x107b58);
                          (*pcVar3)();
                        }
                        dVar11 = (double)((lVar14 - (long)dVar6) + (long)dVar11);
                        goto LAB_00107aa8;
                      }
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      dVar11 = 0.0;
LAB_00107b08:
                      lVar14 = 0;
                      goto LAB_00107b0c;
                    }
                    uStack_c8._0_1_ = SUB81(puVar5,0);
                    uStack_c8._1_1_ = (undefined1)((ulong)puVar5 >> 8);
                    uStack_c8._2_1_ = (undefined1)((ulong)puVar5 >> 0x10);
                    uStack_c8._3_1_ = (undefined1)((ulong)puVar5 >> 0x18);
                    uStack_c8._4_1_ = (char)((ulong)puVar5 >> 0x20);
                    uStack_c8._5_1_ = (undefined1)((ulong)puVar5 >> 0x28);
                    uStack_c8._6_1_ = (undefined1)((ulong)puVar5 >> 0x30);
                    uStack_c8._7_1_ = (undefined1)((ulong)puVar5 >> 0x38);
                    uStack_c0 = (undefined1)uVar9;
                    uStack_bf = (undefined1)(uVar9 >> 8);
                    uStack_be = (undefined1)(uVar9 >> 0x10);
                    uStack_bd = (undefined1)(uVar9 >> 0x18);
                    uStack_bc = (undefined1)(uVar9 >> 0x20);
                    uStack_bb = (undefined1)(uVar9 >> 0x28);
                    puVar4 = (undefined8 *)((long)&uStack_c8 + (uVar9 >> 0x30 & 0xff));
LAB_00107ad8:
                    FUN_0010a2c4(auStack_d0,&uStack_c8,puVar4);
                    FUN_00023344(puVar5,uVar9);
                  }
                  else {
                    if (uVar10 != 2) {
                      uStack_c0 = 0;
                      uStack_bf = 0;
                      uStack_be = 0;
                      uStack_bd = 0;
                      uStack_bc = 0;
                      uStack_bb = 0;
                      uStack_c8._0_1_ = 0;
                      uStack_c8._1_1_ = 0;
                      uStack_c8._2_1_ = 0;
                      uStack_c8._3_1_ = 0;
                      uStack_c8._4_1_ = '\0';
                      uStack_c8._5_1_ = 0;
                      uStack_c8._6_1_ = 0;
                      uStack_c8._7_1_ = 0;
                      puVar4 = &uStack_c8;
                      goto LAB_00107ad8;
                    }
                    lVar14 = puVar5[2];
                    lVar2 = puVar5[3];
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    dVar6 = dVar11;
                    if (dVar11 != 0.0) {
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar14,(long)dVar6)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x107b54);
                        (*pcVar3)();
                      }
                      dVar11 = (double)((lVar14 - (long)dVar6) + (long)dVar11);
                    }
                    dVar15 = (double)(lVar2 - lVar14);
                    if (SBORROW8(lVar2,lVar14)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x107a70);
                      (*pcVar3)();
                    }
LAB_00107aa8:
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (dVar11 == 0.0) goto LAB_00107b08;
                    if ((long)dVar15 <= (long)dVar6) {
                      dVar6 = dVar15;
                    }
                    lVar14 = (long)dVar6 + (long)dVar11;
LAB_00107b0c:
                    FUN_0010a2c4(&uStack_c8,dVar11,lVar14);
                    FUN_00023344(puVar5,uVar9);
                    cStack_cc = uStack_c8._4_1_;
                  }
                  if (cStack_cc == '\x01') goto LAB_0010773c;
                  goto LAB_001077b0;
                }
              }
LAB_001078a8:
              _swift_bridgeObjectRelease(dVar11);
              goto LAB_001077b0;
            }
          }
LAB_00107854:
          _swift_bridgeObjectRelease(dVar11);
          goto LAB_001077b0;
        }
      }
      _swift_bridgeObjectRelease(dVar11);
    }
    else {
LAB_00107700:
      FUN_000c7044(&uStack_c8);
    }
  }
LAB_001077b0:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_00107b4c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107b50);
  (*pcVar3)();
}



/* Entry: 00107b5c; end: 00107bfb;  */

code * FUN_00107b5c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 *puVar8;
  code *pcVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  long lVar13;
  long extraout_x8;
  code *unaff_x20;
  long unaff_x21;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong auStack_140 [2];
  code *pcStack_118;
  char cStack_110;
  undefined1 auStack_108 [8];
  char cStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined2 uStack_fa;
  long lStack_a8;
  
  lVar13 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = FUN_0010a080;
  FUN_00107bfc(FUN_0010a080);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar13) {
    return pcVar4;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar4 = FUN_00109ac0;
  FUN_00107bfc();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar13) {
    return pcVar4;
  }
  ___stack_chk_fail();
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = puVar5[-1];
  puVar6 = puVar5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  puVar17 = (undefined8 *)((long)auStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_00109a58();
  pcVar15 = unaff_x20 + 0x10;
  uVar16 = *(ulong *)pcVar15;
  pcVar9 = *(code **)unaff_x20;
  lVar13 = *(long *)(unaff_x20 + 8);
  if (pcVar9 == (code *)0x0) {
    if (uVar16 != 0) goto LAB_00107c98;
LAB_00107ea0:
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar6,0,0);
    uVar19 = 0xd;
    pcVar9 = unaff_x20;
LAB_00107ec8:
    puVar6[1] = uVar19;
    *puVar6 = 0;
    _swift_willThrow();
  }
  else {
    if (uVar16 == lVar13 - (long)pcVar9) goto LAB_00107ea0;
LAB_00107c98:
    if (pcVar9[uVar16] != (code)0x22) {
      FUN_000fd2e4();
      lVar14 = 0;
      if (pcVar9 != (code *)0x0) {
        lVar14 = lVar13 - (long)pcVar9;
      }
      (*pcVar4)(pcVar9,lVar13,pcVar15,lVar14);
      if (unaff_x21 != 0) goto LAB_00107e60;
      puVar6 = (undefined8 *)auStack_108;
      FUN_000c7044();
      if (((uint)lVar13 & 0xff) != 1) goto LAB_00107ed4;
LAB_00108080:
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,puVar6,0,0);
      uVar19 = 1;
      goto LAB_00107ec8;
    }
    auStack_140[1] = lVar13 - (long)pcVar9;
    uVar1 = 0;
    if (pcVar9 != (code *)0x0) {
      uVar1 = auStack_140[1];
    }
    if (uVar1 <= uVar16) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1080b0);
      (*pcVar4)();
    }
    *(ulong *)(unaff_x20 + 0x10) = uVar16 + 1;
    FUN_000fd2e4();
    pcVar7 = pcVar9;
    (*pcVar4)(pcVar9,lVar13,pcVar15,uVar1);
    if (unaff_x21 == 0) {
      uVar10 = (uint)lVar13;
      puVar6 = (undefined8 *)auStack_108;
      FUN_000c7044();
      if ((uVar10 & 0xff) != 1) {
        uVar16 = *(ulong *)pcVar15;
        unaff_x20 = pcVar7;
        if (pcVar9 == (code *)0x0) {
          if (uVar16 != 0) goto LAB_00107f18;
        }
        else if (uVar16 != auStack_140[1]) {
LAB_00107f18:
          pcVar4 = pcVar9 + uVar16;
          pcVar9 = pcVar7;
          if (*pcVar4 != (code)0x22) goto LAB_00108080;
          if (uVar1 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1080b4);
            (*pcVar4)();
          }
          *(ulong *)pcVar15 = uVar16 + 1;
          goto LAB_00107ed4;
        }
        goto LAB_00107ea0;
      }
      *(ulong *)(unaff_x20 + 0x10) = uVar16;
      FUN_00106a08();
      auStack_108[0] = SUB81(puVar6,0);
      auStack_108[1] = (undefined1)((ulong)puVar6 >> 8);
      auStack_108[2] = (undefined1)((ulong)puVar6 >> 0x10);
      auStack_108[3] = (undefined1)((ulong)puVar6 >> 0x18);
      auStack_108[4] = (undefined1)((ulong)puVar6 >> 0x20);
      auStack_108[5] = (undefined1)((ulong)puVar6 >> 0x28);
      auStack_108[6] = (undefined1)((ulong)puVar6 >> 0x30);
      auStack_108[7] = (undefined1)((ulong)puVar6 >> 0x38);
      cStack_100 = (char)lVar13;
      uStack_ff = (undefined1)((ulong)lVar13 >> 8);
      uStack_fe = (undefined1)((ulong)lVar13 >> 0x10);
      uStack_fd = (undefined1)((ulong)lVar13 >> 0x18);
      uStack_fc = (undefined1)((ulong)lVar13 >> 0x20);
      uStack_fb = (undefined1)((ulong)lVar13 >> 0x28);
      uStack_fa = (undefined2)((ulong)lVar13 >> 0x30);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar17);
      FUN_00033a8c();
      uVar16 = 0;
      puVar8 = puVar17;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (puVar17,0,PTR___sSSN_0099b040,puVar6);
      (**(code **)(lVar14 + 8))(puVar17,puVar5);
      _swift_bridgeObjectRelease();
      if (0xe < uVar16 >> 0x3c) goto LAB_001080c8;
      uVar10 = (uint)(uVar16 >> 0x20);
      uVar12 = uVar10 >> 0x1e;
      if (uVar10 >> 0x1e < 2) {
        if (uVar12 == 0) {
          auStack_108[0] = SUB81(puVar8,0);
          auStack_108[1] = (undefined1)((ulong)puVar8 >> 8);
          auStack_108[2] = (undefined1)((ulong)puVar8 >> 0x10);
          auStack_108[3] = (undefined1)((ulong)puVar8 >> 0x18);
          auStack_108[4] = (undefined1)((ulong)puVar8 >> 0x20);
          auStack_108[5] = (undefined1)((ulong)puVar8 >> 0x28);
          auStack_108[6] = (undefined1)((ulong)puVar8 >> 0x30);
          auStack_108[7] = (undefined1)((ulong)puVar8 >> 0x38);
          cStack_100 = (char)uVar16;
          uStack_ff = (undefined1)(uVar16 >> 8);
          uStack_fe = (undefined1)(uVar16 >> 0x10);
          uStack_fd = (undefined1)(uVar16 >> 0x18);
          uStack_fc = (undefined1)(uVar16 >> 0x20);
          uStack_fb = (undefined1)(uVar16 >> 0x28);
          puVar11 = auStack_108 + (uVar16 >> 0x30 & 0xff);
          goto LAB_00107ff8;
        }
        lVar18 = (long)(int)puVar8;
        lVar3 = ((long)puVar8 >> 0x20) - lVar18;
        if ((long)puVar8 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1080b8);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar13 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar13 = 0;
        }
        else {
          lVar14 = lVar13;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1080c4);
            (*pcVar4)();
          }
          lVar13 = (lVar18 - lVar14) + lVar13;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar13 != 0) {
            if (lVar3 <= lVar14) {
              lVar14 = lVar3;
            }
            lVar14 = lVar14 + lVar13;
            goto LAB_0010804c;
          }
        }
        lVar14 = 0;
LAB_0010804c:
        FUN_0010a3b8(auStack_108,lVar13,lVar14);
        FUN_00023344(puVar8,uVar16);
        pcStack_118 = (code *)CONCAT17(auStack_108[7],
                                       CONCAT16(auStack_108[6],
                                                CONCAT15(auStack_108[5],
                                                         CONCAT14(auStack_108[4],
                                                                  CONCAT13(auStack_108[3],
                                                                           CONCAT12(auStack_108[2],
                                                                                    CONCAT11(
                                                  auStack_108[1],auStack_108[0])))))));
        cStack_110 = cStack_100;
      }
      else {
        if (uVar12 == 2) {
          lVar3 = puVar8[2];
          lVar18 = puVar8[3];
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          lVar14 = lVar13;
          if (lVar13 != 0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar3,lVar14)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1080c0);
              (*pcVar4)();
            }
            lVar13 = (lVar3 - lVar14) + lVar13;
          }
          lVar2 = lVar18 - lVar3;
          if (SBORROW8(lVar18,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1080bc);
            (*pcVar4)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar13 == 0) {
            lVar14 = 0;
          }
          else {
            if (lVar2 <= lVar14) {
              lVar14 = lVar2;
            }
            lVar14 = lVar14 + lVar13;
          }
          goto LAB_0010804c;
        }
        cStack_100 = '\0';
        uStack_ff = 0;
        uStack_fe = 0;
        uStack_fd = 0;
        uStack_fc = 0;
        uStack_fb = 0;
        auStack_108[0] = (code)0x0;
        auStack_108[1] = 0;
        auStack_108[2] = 0;
        auStack_108[3] = 0;
        auStack_108[4] = 0;
        auStack_108[5] = 0;
        auStack_108[6] = 0;
        auStack_108[7] = 0;
        puVar11 = auStack_108;
LAB_00107ff8:
        FUN_0010a3b8(&pcStack_118,auStack_108,puVar11);
        FUN_00023344(puVar8,uVar16);
      }
      puVar6 = puVar8;
      pcVar9 = pcStack_118;
      if (cStack_110 == '\x01') goto LAB_00108080;
    }
    else {
LAB_00107e60:
      pcVar9 = (code *)auStack_108;
      FUN_000c7044(auStack_108);
    }
  }
LAB_00107ed4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
    return pcVar9;
  }
  ___stack_chk_fail();
LAB_001080c8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1080cc);
  (*pcVar4)();
}



/* Entry: 00107bfc; end: 001080cb;  */

long * FUN_00107bfc(code *param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong auStack_100 [2];
  long *plStack_d8;
  char cStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined2 uStack_ba;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar6 = (undefined8 *)0x0;
  __sSS10FoundationE8EncodingVMa();
  lVar14 = puVar6[-1];
  puVar7 = puVar6;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  puVar17 = (undefined8 *)((long)auStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_00109a58();
  puVar15 = (ulong *)(unaff_x20 + 2);
  uVar16 = *puVar15;
  plVar10 = (long *)*unaff_x20;
  lVar11 = unaff_x20[1];
  if (plVar10 == (long *)0x0) {
    if (uVar16 != 0) goto LAB_00107c98;
LAB_00107ea0:
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar7,0,0);
    uVar19 = 0xd;
    plVar10 = unaff_x20;
LAB_00107ec8:
    puVar7[1] = uVar19;
    *puVar7 = 0;
    _swift_willThrow();
  }
  else {
    if (uVar16 == lVar11 - (long)plVar10) goto LAB_00107ea0;
LAB_00107c98:
    if (*(char *)((long)plVar10 + uVar16) != '\"') {
      FUN_000fd2e4();
      lVar14 = 0;
      if (plVar10 != (long *)0x0) {
        lVar14 = lVar11 - (long)plVar10;
      }
      (*param_1)(plVar10,lVar11,puVar15,lVar14);
      if (unaff_x21 != 0) goto LAB_00107e60;
      puVar7 = &uStack_c8;
      FUN_000c7044();
      if (((uint)lVar11 & 0xff) != 1) goto LAB_00107ed4;
LAB_00108080:
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,puVar7,0,0);
      uVar19 = 1;
      goto LAB_00107ec8;
    }
    auStack_100[1] = lVar11 - (long)plVar10;
    uVar2 = 0;
    if (plVar10 != (long *)0x0) {
      uVar2 = auStack_100[1];
    }
    if (uVar2 <= uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1080b0);
      (*pcVar5)();
    }
    unaff_x20[2] = uVar16 + 1;
    FUN_000fd2e4();
    plVar8 = plVar10;
    (*param_1)(plVar10,lVar11,puVar15,uVar2);
    if (unaff_x21 == 0) {
      uVar12 = (uint)lVar11;
      puVar7 = &uStack_c8;
      FUN_000c7044();
      if ((uVar12 & 0xff) != 1) {
        uVar16 = *puVar15;
        unaff_x20 = plVar8;
        if (plVar10 == (long *)0x0) {
          if (uVar16 != 0) goto LAB_00107f18;
        }
        else if (uVar16 != auStack_100[1]) {
LAB_00107f18:
          pcVar1 = (char *)((long)plVar10 + uVar16);
          plVar10 = plVar8;
          if (*pcVar1 != '\"') goto LAB_00108080;
          if (uVar2 <= uVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1080b4);
            (*pcVar5)();
          }
          *puVar15 = uVar16 + 1;
          goto LAB_00107ed4;
        }
        goto LAB_00107ea0;
      }
      unaff_x20[2] = uVar16;
      FUN_00106a08();
      uStack_c8._0_1_ = SUB81(puVar7,0);
      uStack_c8._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      uStack_c8._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      uStack_c8._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      uStack_c8._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      uStack_c8._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      uStack_c8._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      uStack_c8._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      cStack_c0 = (char)lVar11;
      uStack_bf = (undefined1)((ulong)lVar11 >> 8);
      uStack_be = (undefined1)((ulong)lVar11 >> 0x10);
      uStack_bd = (undefined1)((ulong)lVar11 >> 0x18);
      uStack_bc = (undefined1)((ulong)lVar11 >> 0x20);
      uStack_bb = (undefined1)((ulong)lVar11 >> 0x28);
      uStack_ba = (undefined2)((ulong)lVar11 >> 0x30);
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar17);
      FUN_00033a8c();
      uVar16 = 0;
      puVar9 = puVar17;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (puVar17,0,PTR___sSSN_0099b040,puVar7);
      (**(code **)(lVar14 + 8))(puVar17,puVar6);
      _swift_bridgeObjectRelease();
      if (0xe < uVar16 >> 0x3c) goto LAB_001080c8;
      uVar12 = (uint)(uVar16 >> 0x20);
      uVar13 = uVar12 >> 0x1e;
      if (uVar12 >> 0x1e < 2) {
        if (uVar13 == 0) {
          uStack_c8._0_1_ = SUB81(puVar9,0);
          uStack_c8._1_1_ = (undefined1)((ulong)puVar9 >> 8);
          uStack_c8._2_1_ = (undefined1)((ulong)puVar9 >> 0x10);
          uStack_c8._3_1_ = (undefined1)((ulong)puVar9 >> 0x18);
          uStack_c8._4_1_ = (undefined1)((ulong)puVar9 >> 0x20);
          uStack_c8._5_1_ = (undefined1)((ulong)puVar9 >> 0x28);
          uStack_c8._6_1_ = (undefined1)((ulong)puVar9 >> 0x30);
          uStack_c8._7_1_ = (undefined1)((ulong)puVar9 >> 0x38);
          cStack_c0 = (char)uVar16;
          uStack_bf = (undefined1)(uVar16 >> 8);
          uStack_be = (undefined1)(uVar16 >> 0x10);
          uStack_bd = (undefined1)(uVar16 >> 0x18);
          uStack_bc = (undefined1)(uVar16 >> 0x20);
          uStack_bb = (undefined1)(uVar16 >> 0x28);
          puVar7 = (undefined8 *)((long)&uStack_c8 + (uVar16 >> 0x30 & 0xff));
          goto LAB_00107ff8;
        }
        lVar18 = (long)(int)puVar9;
        lVar4 = ((long)puVar9 >> 0x20) - lVar18;
        if ((long)puVar9 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1080b8);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar11 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar11 = 0;
        }
        else {
          lVar14 = lVar11;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1080c4);
            (*pcVar5)();
          }
          lVar11 = (lVar18 - lVar14) + lVar11;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 != 0) {
            if (lVar4 <= lVar14) {
              lVar14 = lVar4;
            }
            lVar14 = lVar14 + lVar11;
            goto LAB_0010804c;
          }
        }
        lVar14 = 0;
LAB_0010804c:
        FUN_0010a3b8(&uStack_c8,lVar11,lVar14);
        FUN_00023344(puVar9,uVar16);
        plStack_d8 = (long *)CONCAT17(uStack_c8._7_1_,
                                      CONCAT16(uStack_c8._6_1_,
                                               CONCAT15(uStack_c8._5_1_,
                                                        CONCAT14(uStack_c8._4_1_,
                                                                 CONCAT13(uStack_c8._3_1_,
                                                                          CONCAT12(uStack_c8._2_1_,
                                                                                   CONCAT11(
                                                  uStack_c8._1_1_,(undefined1)uStack_c8)))))));
        cStack_d0 = cStack_c0;
      }
      else {
        if (uVar13 == 2) {
          lVar4 = puVar9[2];
          lVar18 = puVar9[3];
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          lVar14 = lVar11;
          if (lVar11 != 0) {
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar4,lVar14)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1080c0);
              (*pcVar5)();
            }
            lVar11 = (lVar4 - lVar14) + lVar11;
          }
          lVar3 = lVar18 - lVar4;
          if (SBORROW8(lVar18,lVar4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1080bc);
            (*pcVar5)();
          }
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar11 == 0) {
            lVar14 = 0;
          }
          else {
            if (lVar3 <= lVar14) {
              lVar14 = lVar3;
            }
            lVar14 = lVar14 + lVar11;
          }
          goto LAB_0010804c;
        }
        cStack_c0 = '\0';
        uStack_bf = 0;
        uStack_be = 0;
        uStack_bd = 0;
        uStack_bc = 0;
        uStack_bb = 0;
        uStack_c8._0_1_ = 0;
        uStack_c8._1_1_ = 0;
        uStack_c8._2_1_ = 0;
        uStack_c8._3_1_ = 0;
        uStack_c8._4_1_ = 0;
        uStack_c8._5_1_ = 0;
        uStack_c8._6_1_ = 0;
        uStack_c8._7_1_ = 0;
        puVar7 = &uStack_c8;
LAB_00107ff8:
        FUN_0010a3b8(&plStack_d8,&uStack_c8,puVar7);
        FUN_00023344(puVar9,uVar16);
      }
      puVar7 = puVar9;
      plVar10 = plStack_d8;
      if (cStack_d0 == '\x01') goto LAB_00108080;
    }
    else {
LAB_00107e60:
      plVar10 = &uStack_c8;
      FUN_000c7044(&uStack_c8);
    }
  }
LAB_00107ed4:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return plVar10;
  }
  ___stack_chk_fail();
LAB_001080c8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1080cc);
  (*pcVar5)();
}



/* Entry: 001080cc; end: 0010821b;  */

uint FUN_001080cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  uint extraout_w8;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  
  FUN_00109a58();
  lVar3 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (lVar3 != 0) goto LAB_0010810c;
LAB_00108100:
    uVar5 = 0xd;
  }
  else {
    if (lVar3 == unaff_x20[1] - lVar4) goto LAB_00108100;
LAB_0010810c:
    if (*(char *)(lVar4 + lVar3) == '\"') {
      FUN_0010a190();
      if (param_2 != (undefined8 *)0x0) {
        uVar1 = 0;
        if (((param_1 == (undefined8 *)0x65736c6166) &&
            (param_2 == (undefined8 *)0xe500000000000000)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x65736c6166,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
          _swift_bridgeObjectRelease(param_2);
          uVar2 = 0;
          goto LAB_00108204;
        }
        if ((param_1 == (undefined8 *)0x65757274) && (param_2 == (undefined8 *)0xe400000000000000))
        {
          _swift_bridgeObjectRelease(0xe400000000000000);
        }
        else {
          uVar1 = 0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x65757274,0xe400000000000000,param_1,param_2,0);
          _swift_bridgeObjectRelease();
          param_1 = param_2;
          if ((uVar1 & 1) == 0) goto LAB_001081d4;
        }
        uVar2 = 1;
        goto LAB_00108204;
      }
LAB_001081d4:
      uVar5 = 4;
    }
    else {
      uVar5 = 0xb;
    }
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar5;
  _swift_willThrow();
  uVar2 = extraout_w8;
LAB_00108204:
  return uVar2 & 1;
}



/* Entry: 0010821c; end: 001082ab;  */

void FUN_0010821c(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  
  FUN_00109a58();
  puVar1 = (undefined8 *)*unaff_x20;
  if (puVar1 == (undefined8 *)0x0) {
    if (unaff_x20[2] != 0) goto LAB_00108258;
  }
  else if (unaff_x20[2] != unaff_x20[1] - (long)puVar1) {
LAB_00108258:
    FUN_001086bc();
    return;
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,puVar1,0,0);
  puVar1[1] = 0xd;
  *puVar1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 001082ac; end: 0010864f;  */

void FUN_001082ac(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  
  puVar1 = (undefined8 *)0x0;
  __sSqMa(0,param_2);
  lVar4 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar12 = puVar3 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = (long)puVar12 - extraout_x12_00;
  lVar5 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar10 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  FUN_00109a58();
  lVar6 = unaff_x20[2];
  lVar8 = *unaff_x20;
  if (lVar8 == 0) {
    if (lVar6 == 0) goto LAB_001083dc;
  }
  else if (lVar6 == unaff_x20[1] - lVar8) {
LAB_001083dc:
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar2,0,0);
    puVar2[1] = 0xd;
    *puVar2 = 0;
    _swift_willThrow();
    return;
  }
  if (*(char *)(lVar8 + lVar6) == '\"') {
    FUN_0010a580();
    if (unaff_x21 != 0) {
      return;
    }
    if ((param_4 & 0xff) != 1) {
      func_0x000e0258(lVar11);
      lVar6 = lVar11;
      (**(code **)(lVar5 + 0x30))(lVar11,1,param_2);
      if ((int)lVar6 != 1) {
        pcVar7 = *(code **)(lVar5 + 0x20);
        (*pcVar7)(lVar9 - extraout_x12_02,lVar11,param_2);
        (*pcVar7)(param_1,lVar9 - extraout_x12_02,param_2);
        goto LAB_00108614;
      }
      (**(code **)(lVar4 + 8))(lVar11,puVar1);
      goto LAB_00108584;
    }
    FUN_00106a08();
    func_0x000dffa0(puVar12);
    puVar3 = puVar12;
    (**(code **)(lVar5 + 0x30))(puVar12,1,param_2);
    if ((int)puVar3 != 1) {
      pcVar7 = *(code **)(lVar5 + 0x20);
      (*pcVar7)(lVar9,puVar12,param_2);
      (*pcVar7)(param_1,lVar9,param_2);
LAB_00108614:
      (**(code **)(lVar5 + 0x38))(param_1,0,1,param_2);
      return;
    }
    pcVar7 = *(code **)(lVar4 + 8);
    puVar3 = puVar12;
  }
  else {
    FUN_00107bfc(FUN_0010a080);
    if (unaff_x21 != 0) {
      return;
    }
    (**(code **)(param_3 + 0x20))(puVar3);
    puVar12 = puVar3;
    (**(code **)(lVar5 + 0x30))(puVar3,1,param_2);
    if ((int)puVar12 != 1) {
      pcVar7 = *(code **)(lVar5 + 0x20);
      (*pcVar7)(lVar10,puVar3,param_2);
      (*pcVar7)(param_1,lVar10,param_2);
      goto LAB_00108614;
    }
    pcVar7 = *(code **)(lVar4 + 8);
  }
  (*pcVar7)(puVar3,puVar1);
LAB_00108584:
  FUN_0010aa6c(param_1);
  return;
}



/* Entry: 00108650; end: 001086bb;  */

ulong FUN_00108650(int param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_1 - 0x30U);
  if (param_1 - 0x30U < 10) {
code_r0x00108660:
    return uVar1;
  }
  uVar1 = 10;
  switch(param_1) {
  case 0x41:
  case 0x61:
    goto code_r0x00108660;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  default:
    return 0x100000000;
  }
}



/* Entry: 001086bc; end: 001088bf;  */

void FUN_001086bc(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  byte bVar9;
  ulong uVar10;
  long unaff_x21;
  long lStack_50;
  long lStack_48;
  
  uVar5 = *param_3;
  if (*(char *)((long)param_1 + uVar5) == '\"') {
    uVar1 = 0;
    if (param_1 != (undefined8 *)0x0) {
      uVar1 = param_2 - (long)param_1;
    }
    if (uVar1 <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1088b8);
      (*pcVar2)();
    }
    uVar5 = uVar5 + 1;
    if (uVar5 != param_4) {
      bVar9 = 0;
      bVar7 = 0;
      lVar6 = 0;
      uVar8 = uVar5;
      do {
        uVar10 = (ulong)*(byte *)((long)param_1 + uVar8);
        if (uVar10 < 0x2f) {
          if (uVar10 == 0x2b) goto LAB_001087d0;
          if (uVar10 == 0x2d) goto LAB_001087c8;
          if (uVar10 == 0x22) {
            *param_3 = uVar8;
            if (!(bool)(bVar9 & bVar7)) {
              lVar4 = lVar6 * 3;
              if (SUB168(SEXT816(lVar6) * SEXT816(3),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1088bc);
                (*pcVar2)();
              }
              lVar6 = lVar4 + 3;
              if (-1 < lVar4) {
                lVar6 = lVar4;
              }
              lVar6 = lVar6 >> 2;
              lVar4 = param_2;
              FUN_000d4dcc();
              *param_3 = uVar5;
              lStack_50 = lVar6;
              lStack_48 = lVar4;
              FUN_0010ad00(&lStack_50,param_1,param_2,param_3);
              if (unaff_x21 != 0) {
                FUN_00023358(lStack_50,lStack_48);
                return;
              }
              if (*param_3 < uVar1) {
                *param_3 = *param_3 + 1;
                return;
              }
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1088c0);
              (*pcVar2)();
            }
            goto LAB_00108708;
          }
        }
        else {
          if (uVar10 != 0x2f) {
            if (uVar10 == 0x5f) {
LAB_001087c8:
              bVar7 = 1;
              goto LAB_001087d4;
            }
            if (uVar10 != 0x5c) goto LAB_001087d4;
            if ((long)uVar1 <= (long)uVar8) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1088b4);
              (*pcVar2)();
            }
            uVar8 = uVar8 + 1;
            if (uVar8 == param_4) break;
            uVar10 = (ulong)*(byte *)((long)param_1 + uVar8);
            if (*(byte *)((long)param_1 + uVar8) != 0x2f) {
              *param_3 = uVar8;
              goto LAB_00108708;
            }
          }
LAB_001087d0:
          bVar9 = 1;
        }
LAB_001087d4:
        if ((-1 < *(long *)(uVar10 * 8 + 0xaef568)) &&
           (bVar3 = SCARRY8(lVar6,1), lVar6 = lVar6 + 1, bVar3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1088b0);
          (*pcVar2)();
        }
        if ((long)uVar1 <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1088ac);
          (*pcVar2)();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != param_4);
    }
    *param_3 = param_4;
  }
LAB_00108708:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  param_1[1] = 5;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 001088c0; end: 00108aeb;  */

void FUN_001088c0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,ulong *param_5)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  uVar5 = 0;
  lVar6 = 0;
  uVar7 = param_4 - param_3;
  uVar8 = *param_5;
  do {
    uVar10 = (ulong)*(byte *)(param_3 + uVar8);
    uVar11 = *(ulong *)(uVar10 * 8 + 0xaef568);
    while ((long)uVar11 < 0) {
      iVar9 = (int)uVar10;
      if (iVar9 != 0x20) {
        if (iVar9 == 0x22) {
          if (lVar6 == 0) {
            return;
          }
          if (lVar6 == 3) {
            *(char *)param_1 = (char)(uVar5 >> 10);
            *(char *)((long)param_1 + 1) = (char)(uVar5 >> 2);
            return;
          }
          if (lVar6 == 2) {
            *(char *)param_1 = (char)(uVar5 >> 4);
            return;
          }
          goto LAB_00108a90;
        }
        if (iVar9 != 0x5c) {
          if (iVar9 != 0x3d) goto LAB_00108a90;
          uVar11 = 0;
          goto LAB_001089d8;
        }
        if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x108aec);
          (*pcVar3)();
        }
        *param_5 = uVar8 + 1;
        pcVar1 = (char *)(param_3 + 1 + uVar8);
        uVar8 = uVar8 + 1;
        uVar11 = uRam0000000000aef6e0;
        if (*pcVar1 != '/') goto LAB_00108a90;
        break;
      }
      if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108ad8);
        (*pcVar3)();
      }
      *param_5 = uVar8 + 1;
      uVar10 = (ulong)*(byte *)(param_3 + 1 + uVar8);
      uVar8 = uVar8 + 1;
      uVar11 = *(ulong *)(uVar10 * 8 + 0xaef568);
    }
    bVar4 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108ae4);
      (*pcVar3)();
    }
    uVar5 = uVar11 | uVar5 << 6;
    if (lVar6 == 4) {
      lVar6 = 0;
      *(char *)param_1 = (char)(uVar5 >> 0x10);
      *(char *)((long)param_1 + 1) = (char)(uVar5 >> 8);
      *(char *)((long)param_1 + 2) = (char)uVar5;
      param_1 = (undefined8 *)((long)param_1 + 3);
      uVar8 = *param_5;
      uVar5 = 0;
    }
    if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108ae8);
      (*pcVar3)();
    }
    uVar8 = uVar8 + 1;
    *param_5 = uVar8;
  } while( true );
  while( true ) {
    if ((param_3 == 0) || (uVar7 <= uVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x108adc);
      (*pcVar3)();
    }
    *param_5 = uVar8 + 1;
    bVar2 = *(byte *)(param_3 + 1 + uVar8);
    uVar10 = (ulong)bVar2;
    uVar8 = uVar8 + 1;
    if (bVar2 == 0x22) break;
LAB_001089d8:
    if ((int)uVar10 != 0x20) {
      if ((int)uVar10 != 0x3d) goto LAB_00108a90;
      bVar4 = SCARRY8(uVar11,1);
      uVar11 = uVar11 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x108ae0);
        (*pcVar3)();
      }
    }
  }
  if (lVar6 != 0) {
    if (lVar6 != 2) {
      if (lVar6 == 3) {
        *(char *)param_1 = (char)(uVar5 >> 10);
        *(char *)((long)param_1 + 1) = (char)(uVar5 >> 2);
        if (uVar11 < 2) {
          return;
        }
      }
      goto LAB_00108a90;
    }
    *(char *)param_1 = (char)(uVar5 >> 4);
    uVar11 = uVar11 & 0xfffffffffffffffd;
  }
  if (uVar11 == 0) {
    return;
  }
LAB_00108a90:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  param_1[1] = 5;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 00108aec; end: 00109a57;  */

undefined1  [16] FUN_00108aec(dword *param_1,ulong param_2)

{
  dword *pdVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  dword *pdVar10;
  undefined8 uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 0xe000000000000000;
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    uStack_70 = 0;
  }
  else {
    uVar16 = param_2 & 0xffffffffffffff;
    pdVar1 = (dword *)((param_2 & 0xfffffffffffffff) + 0x20);
    _swift_bridgeObjectRetain(param_2);
    puVar15 = (undefined1 *)0x0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pdVar10 = pdVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pdVar10 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          uStack_80 = param_1;
          uStack_78 = uVar16;
          pdVar10 = (dword *)&uStack_80;
        }
        pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
        uVar4 = (uint)*pbVar12;
        if ((char)*pbVar12 < '\0') {
          uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
          if (uVar13 < 3) {
            if (uVar13 == 1) goto LAB_00108bb0;
            uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
          }
          else if (uVar13 == 3) {
            uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
          }
          else {
            uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc | (pbVar12[2] & 0x3f) << 6 |
                    pbVar12[3] & 0x3f;
            pdVar10 = &MACH_HEADER.cputype;
          }
        }
        else {
LAB_00108bb0:
          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        lVar9 = (long)puVar15 << 0x10;
        pdVar10 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar9,param_1,param_2);
        uVar4 = (uint)lVar9;
      }
      puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15);
      if (uVar4 != 0x5c) goto LAB_00108b60;
      if ((long)uVar2 <= (long)puVar15) {
LAB_001099f8:
        uVar11 = uStack_68;
        _swift_bridgeObjectRelease(param_2);
LAB_001099cc:
        _swift_bridgeObjectRelease(uVar11);
        uStack_70 = 0;
        uVar11 = 0;
        goto LAB_001099d8;
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          pdVar10 = pdVar1;
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pdVar10 = param_1;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
          }
        }
        else {
          uStack_80 = param_1;
          uStack_78 = uVar16;
          pdVar10 = (dword *)&uStack_80;
        }
        pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
        uVar4 = (uint)*pbVar12;
        if ((char)*pbVar12 < '\0') {
          uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
          if (uVar13 < 3) {
            if (uVar13 == 1) goto LAB_00108c38;
            uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
          }
          else if (uVar13 == 3) {
            uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
          }
          else {
            uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc | (pbVar12[2] & 0x3f) << 6 |
                    pbVar12[3] & 0x3f;
            pdVar10 = &MACH_HEADER.cputype;
          }
        }
        else {
LAB_00108c38:
          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
        }
      }
      else {
        lVar9 = (long)puVar15 * 0x10000;
        pdVar10 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar9,param_1,param_2);
        uVar4 = (uint)lVar9;
      }
      puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15);
      if ((int)uVar4 < 0x66) {
        if (((0x3a < uVar4 - 0x22) ||
            ((1L << ((ulong)(uVar4 - 0x22) & 0x3f) & 0x400000000002001U) == 0)) && (uVar4 != 0x62))
        goto LAB_001099f8;
      }
      else if ((int)uVar4 < 0x72) {
        if ((uVar4 != 0x66) && (uVar4 != 0x6e)) goto LAB_001099f8;
      }
      else if ((uVar4 != 0x72) && (uVar4 != 0x74)) {
        if (uVar4 != 0x75) goto LAB_001099f8;
        if ((long)puVar15 < (long)uVar2) {
          if ((param_2 >> 0x3c & 1) == 0) {
            if ((param_2 >> 0x3d & 1) == 0) {
              pdVar10 = pdVar1;
              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                pdVar10 = param_1;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
              }
            }
            else {
              uStack_80 = param_1;
              uStack_78 = uVar16;
              pdVar10 = (dword *)&uStack_80;
            }
            pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
            uVar4 = (uint)*pbVar12;
            uVar5 = (ulong)uVar4;
            if ((char)*pbVar12 < '\0') {
              uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
              if (uVar13 < 3) {
                if (uVar13 == 1) goto LAB_00108de0;
                uVar5 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
              }
              else if (uVar13 == 3) {
                uVar5 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f)
                ;
                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
              }
              else {
                uVar5 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                pdVar10 = &MACH_HEADER.cputype;
              }
            }
            else {
LAB_00108de0:
              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
            }
          }
          else {
            uVar5 = (long)puVar15 * 0x10000;
            pdVar10 = param_1;
            __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                      (uVar5,param_1,param_2);
          }
          FUN_00108650();
          if (((uVar5 & 0xff00000000) != 0x100000000) &&
             (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15), (long)puVar15 < (long)uVar2))
          {
            if ((param_2 >> 0x3c & 1) == 0) {
              if ((param_2 >> 0x3d & 1) == 0) {
                pdVar10 = pdVar1;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  pdVar10 = param_1;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                }
              }
              else {
                uStack_80 = param_1;
                uStack_78 = uVar16;
                pdVar10 = (dword *)&uStack_80;
              }
              pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
              uVar4 = (uint)*pbVar12;
              uVar6 = (ulong)uVar4;
              if ((char)*pbVar12 < '\0') {
                uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                if (uVar13 < 3) {
                  if (uVar13 == 1) goto LAB_00108e88;
                  uVar6 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                }
                else if (uVar13 == 3) {
                  uVar6 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                 pbVar12[2] & 0x3f);
                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                }
                else {
                  uVar6 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                  (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                  pdVar10 = &MACH_HEADER.cputype;
                }
              }
              else {
LAB_00108e88:
                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
              }
            }
            else {
              uVar6 = (long)puVar15 * 0x10000;
              pdVar10 = param_1;
              __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                        (uVar6,param_1,param_2);
            }
            FUN_00108650();
            if (((uVar6 & 0xff00000000) != 0x100000000) &&
               (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15), (long)puVar15 < (long)uVar2
               )) {
              if ((param_2 >> 0x3c & 1) != 0) {
                uVar7 = (long)puVar15 * 0x10000;
                pdVar10 = param_1;
                __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                          (uVar7,param_1,param_2);
                goto LAB_00108f84;
              }
              if ((param_2 >> 0x3d & 1) == 0) {
                pdVar10 = pdVar1;
                if (((ulong)param_1 >> 0x3c & 1) == 0) {
                  pdVar10 = param_1;
                  __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                }
                pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                uVar4 = (uint)*pbVar12;
                uVar7 = (ulong)uVar4;
                if (-1 < (char)*pbVar12) goto LAB_00108f80;
LAB_00108f6c:
                uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                uVar4 = (uint)uVar7;
                if (uVar13 < 3) {
                  if (uVar13 == 1) goto LAB_00108f80;
                  uVar7 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                }
                else if (uVar13 == 3) {
                  uVar7 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                 pbVar12[2] & 0x3f);
                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                }
                else {
                  uVar7 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                  (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                  pdVar10 = &MACH_HEADER.cputype;
                }
              }
              else {
                uStack_80 = param_1;
                uStack_78 = uVar16;
                pbVar12 = (byte *)((long)&uStack_80 + (long)puVar15);
                uVar4 = (uint)*pbVar12;
                uVar7 = (ulong)uVar4;
                if ((char)*pbVar12 < '\0') goto LAB_00108f6c;
LAB_00108f80:
                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
              }
LAB_00108f84:
              FUN_00108650();
              if (((uVar7 & 0xff00000000) != 0x100000000) &&
                 (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15),
                 (long)puVar15 < (long)uVar2)) {
                if ((param_2 >> 0x3c & 1) != 0) {
                  uVar8 = (long)puVar15 * 0x10000;
                  pdVar10 = param_1;
                  __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                            (uVar8,param_1,param_2);
                  goto LAB_0010906c;
                }
                if ((param_2 >> 0x3d & 1) == 0) {
                  pdVar10 = pdVar1;
                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                    pdVar10 = param_1;
                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                  }
                  pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                  uVar4 = (uint)*pbVar12;
                  uVar8 = (ulong)uVar4;
                  if (-1 < (char)*pbVar12) goto LAB_00109068;
LAB_00109054:
                  uVar13 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                  uVar4 = (uint)uVar8;
                  if (uVar13 < 3) {
                    if (uVar13 == 1) goto LAB_00109068;
                    uVar8 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                    pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                  }
                  else if (uVar13 == 3) {
                    uVar8 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                   pbVar12[2] & 0x3f);
                    pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                  }
                  else {
                    uVar8 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                    (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                    pdVar10 = &MACH_HEADER.cputype;
                  }
                }
                else {
                  uStack_80 = param_1;
                  uStack_78 = uVar16;
                  pbVar12 = (byte *)((long)&uStack_80 + (long)puVar15);
                  uVar4 = (uint)*pbVar12;
                  uVar8 = (ulong)uVar4;
                  if ((char)*pbVar12 < '\0') goto LAB_00109054;
LAB_00109068:
                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                }
LAB_0010906c:
                FUN_00108650();
                if ((uVar8 & 0xff00000000) != 0x100000000) {
                  if ((uVar5 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a28);
                    (*pcVar3)();
                  }
                  uVar4 = (int)uVar5 * 0x10;
                  uVar13 = (uint)uVar6 + uVar4;
                  if (CARRY4((uint)uVar6,uVar4)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a2c);
                    (*pcVar3)();
                  }
                  if (uVar13 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a30);
                    (*pcVar3)();
                  }
                  uVar13 = uVar13 * 0x10;
                  uVar4 = (uint)uVar7 + uVar13;
                  if (CARRY4((uint)uVar7,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a34);
                    (*pcVar3)();
                  }
                  if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a38);
                    (*pcVar3)();
                  }
                  uVar4 = uVar4 * 0x10;
                  uVar13 = (uint)uVar8 + uVar4;
                  if (CARRY4((uint)uVar8,uVar4)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a3c);
                    (*pcVar3)();
                  }
                  puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15);
                  if ((uVar13 >> 0x10 < 0x11) && (uVar13 - 0xe000 < 0xfffff800)) goto LAB_00108b60;
                  if (0xdfff < uVar13) goto LAB_001099c0;
                  if (0x36 < uVar13 >> 10) goto LAB_001099f8;
                  if ((long)puVar15 < (long)uVar2) {
                    if ((param_2 >> 0x3c & 1) == 0) {
                      if ((param_2 >> 0x3d & 1) == 0) {
                        pdVar10 = pdVar1;
                        if (((ulong)param_1 >> 0x3c & 1) == 0) {
                          pdVar10 = param_1;
                          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                        }
                      }
                      else {
                        uStack_80 = param_1;
                        uStack_78 = uVar16;
                        pdVar10 = (dword *)&uStack_80;
                      }
                      pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                      uVar4 = (uint)*pbVar12;
                      if ((char)*pbVar12 < '\0') {
                        uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                        if (uVar14 < 3) {
                          if (uVar14 == 1) goto LAB_00109194;
                          uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
                          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                        }
                        else if (uVar14 == 3) {
                          uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                  pbVar12[2] & 0x3f;
                          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                        }
                        else {
                          uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                  (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f;
                          pdVar10 = &MACH_HEADER.cputype;
                        }
                      }
                      else {
LAB_00109194:
                        pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                      }
                    }
                    else {
                      lVar9 = (long)puVar15 * 0x10000;
                      pdVar10 = param_1;
                      __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                (lVar9,param_1,param_2);
                      uVar4 = (uint)lVar9;
                    }
                    if ((uVar4 == 0x5c) &&
                       (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15),
                       (long)puVar15 < (long)uVar2)) {
                      if ((param_2 >> 0x3c & 1) == 0) {
                        if ((param_2 >> 0x3d & 1) == 0) {
                          pdVar10 = pdVar1;
                          if (((ulong)param_1 >> 0x3c & 1) == 0) {
                            pdVar10 = param_1;
                            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                          }
                        }
                        else {
                          uStack_80 = param_1;
                          uStack_78 = uVar16;
                          pdVar10 = (dword *)&uStack_80;
                        }
                        pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                        uVar4 = (uint)*pbVar12;
                        if ((char)*pbVar12 < '\0') {
                          uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                          if (uVar14 < 3) {
                            if (uVar14 == 1) goto LAB_0010927c;
                            uVar4 = pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6;
                            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                          }
                          else if (uVar14 == 3) {
                            uVar4 = (uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                    pbVar12[2] & 0x3f;
                            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                          }
                          else {
                            uVar4 = (uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                    (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f;
                            pdVar10 = &MACH_HEADER.cputype;
                          }
                        }
                        else {
LAB_0010927c:
                          pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                        }
                      }
                      else {
                        lVar9 = (long)puVar15 * 0x10000;
                        pdVar10 = param_1;
                        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                  (lVar9,param_1,param_2);
                        uVar4 = (uint)lVar9;
                      }
                      if ((uVar4 == 0x75) &&
                         (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15),
                         (long)puVar15 < (long)uVar2)) {
                        if ((param_2 >> 0x3c & 1) != 0) {
                          uVar5 = (long)puVar15 * 0x10000;
                          pdVar10 = param_1;
                          __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                    (uVar5,param_1,param_2);
                          goto LAB_00109304;
                        }
                        if ((param_2 >> 0x3d & 1) == 0) {
                          pdVar10 = pdVar1;
                          if (((ulong)param_1 >> 0x3c & 1) == 0) {
                            pdVar10 = param_1;
                            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                          }
                          pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                          uVar4 = (uint)*pbVar12;
                          uVar5 = (ulong)uVar4;
                          if ((char)*pbVar12 < '\0') {
                            uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                            if (uVar14 < 3) {
                              if (uVar14 == 1) goto LAB_001092bc;
                              uVar5 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                            }
                            else if (uVar14 == 3) {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                             pbVar12[2] & 0x3f);
                              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                            }
                            else {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                              (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                              pdVar10 = &MACH_HEADER.cputype;
                            }
                          }
                          else {
LAB_001092bc:
                            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                          }
                        }
                        else {
                          uStack_80 = param_1;
                          uStack_78 = uVar16;
                          uVar4 = (uint)*(byte *)((long)&uStack_80 + (long)puVar15);
                          uVar5 = (ulong)uVar4;
                          if ((char)*(byte *)((long)&uStack_80 + (long)puVar15) < '\0') {
                            uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                            if (uVar14 < 3) {
                              if (uVar14 == 1) goto LAB_001092fc;
                              uVar5 = (ulong)(*(byte *)((long)&uStack_80 + (long)(puVar15 + 1)) &
                                              0x3f | (uVar4 & 0x1f) << 6);
                              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                            }
                            else if (uVar14 == 3) {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0xc |
                                              (*(byte *)((long)&uStack_80 + (long)(puVar15 + 1)) &
                                              0x3f) << 6 |
                                             *(byte *)((long)&uStack_80 + (long)(puVar15 + 2)) &
                                             0x3f);
                              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                            }
                            else {
                              uVar5 = (ulong)((uVar4 & 0xf) << 0x12 |
                                              (*(byte *)((long)&uStack_80 + (long)(puVar15 + 1)) &
                                              0x3f) << 0xc |
                                              (*(byte *)((long)&uStack_80 + (long)(puVar15 + 2)) &
                                              0x3f) << 6 |
                                             *(byte *)((long)&uStack_80 + (long)(puVar15 + 3)) &
                                             0x3f);
                              pdVar10 = &MACH_HEADER.cputype;
                            }
                          }
                          else {
LAB_001092fc:
                            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                          }
                        }
LAB_00109304:
                        FUN_00108650();
                        if (((uVar5 & 0xff00000000) != 0x100000000) &&
                           (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15),
                           (long)puVar15 < (long)uVar2)) {
                          if ((param_2 >> 0x3c & 1) != 0) {
                            uVar6 = (long)puVar15 * 0x10000;
                            pdVar10 = param_1;
                            __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                      (uVar6,param_1,param_2);
                            goto LAB_00109420;
                          }
                          if ((param_2 >> 0x3d & 1) == 0) {
                            pdVar10 = pdVar1;
                            if (((ulong)param_1 >> 0x3c & 1) == 0) {
                              pdVar10 = param_1;
                              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                            }
                            pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                            uVar4 = (uint)*pbVar12;
                            uVar6 = (ulong)uVar4;
                            if ((char)*pbVar12 < '\0') {
                              uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                              if (uVar14 < 3) {
                                if (uVar14 == 1) goto LAB_00109348;
                                uVar6 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                              }
                              else if (uVar14 == 3) {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                               pbVar12[2] & 0x3f);
                                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                              }
                              else {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                                (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                                pdVar10 = &MACH_HEADER.cputype;
                              }
                            }
                            else {
LAB_00109348:
                              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                            }
                          }
                          else {
                            uStack_80 = param_1;
                            uStack_78 = uVar16;
                            uVar4 = (uint)*(byte *)((long)&uStack_80 + (long)puVar15);
                            uVar6 = (ulong)uVar4;
                            if ((char)*(byte *)((long)&uStack_80 + (long)puVar15) < '\0') {
                              uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                              if (uVar14 < 3) {
                                if (uVar14 == 1) goto LAB_00109418;
                                uVar6 = (ulong)(*(byte *)((long)&uStack_80 + (long)(puVar15 + 1)) &
                                                0x3f | (uVar4 & 0x1f) << 6);
                                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                              }
                              else if (uVar14 == 3) {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0xc |
                                                (*(byte *)((long)&uStack_80 + (long)(puVar15 + 1)) &
                                                0x3f) << 6 |
                                               *(byte *)((long)&uStack_80 + (long)(puVar15 + 2)) &
                                               0x3f);
                                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                              }
                              else {
                                uVar6 = (ulong)((uVar4 & 0xf) << 0x12 |
                                                (*(byte *)((long)&uStack_80 + (long)(puVar15 + 1)) &
                                                0x3f) << 0xc |
                                                (*(byte *)((long)&uStack_80 + (long)(puVar15 + 2)) &
                                                0x3f) << 6 |
                                               *(byte *)((long)&uStack_80 + (long)(puVar15 + 3)) &
                                               0x3f);
                                pdVar10 = &MACH_HEADER.cputype;
                              }
                            }
                            else {
LAB_00109418:
                              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                            }
                          }
LAB_00109420:
                          FUN_00108650();
                          if (((uVar6 & 0xff00000000) != 0x100000000) &&
                             (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15),
                             (long)puVar15 < (long)uVar2)) {
                            if ((param_2 >> 0x3c & 1) != 0) {
                              uVar7 = (long)puVar15 * 0x10000;
                              pdVar10 = param_1;
                              __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                        (uVar7,param_1,param_2);
                              goto LAB_0010957c;
                            }
                            if ((param_2 >> 0x3d & 1) == 0) {
                              pdVar10 = pdVar1;
                              if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                pdVar10 = param_1;
                                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                              }
                              pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                              uVar4 = (uint)*pbVar12;
                              uVar7 = (ulong)uVar4;
                              if (-1 < (char)*pbVar12) goto LAB_00109578;
LAB_00109564:
                              uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                              uVar4 = (uint)uVar7;
                              if (uVar14 < 3) {
                                if (uVar14 == 1) goto LAB_00109578;
                                uVar7 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                              }
                              else if (uVar14 == 3) {
                                uVar7 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6 |
                                               pbVar12[2] & 0x3f);
                                pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                              }
                              else {
                                uVar7 = (ulong)((uVar4 & 0xf) << 0x12 | (pbVar12[1] & 0x3f) << 0xc |
                                                (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                                pdVar10 = &MACH_HEADER.cputype;
                              }
                            }
                            else {
                              uStack_80 = param_1;
                              uStack_78 = uVar16;
                              pbVar12 = (byte *)((long)&uStack_80 + (long)puVar15);
                              uVar4 = (uint)*pbVar12;
                              uVar7 = (ulong)uVar4;
                              if ((char)*pbVar12 < '\0') goto LAB_00109564;
LAB_00109578:
                              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                            }
LAB_0010957c:
                            FUN_00108650();
                            if (((uVar7 & 0xff00000000) != 0x100000000) &&
                               (puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15),
                               (long)puVar15 < (long)uVar2)) {
                              if ((param_2 >> 0x3c & 1) == 0) {
                                if ((param_2 >> 0x3d & 1) == 0) {
                                  pdVar10 = pdVar1;
                                  if (((ulong)param_1 >> 0x3c & 1) == 0) {
                                    pdVar10 = param_1;
                                    __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
                                  }
                                }
                                else {
                                  uStack_80 = param_1;
                                  uStack_78 = uVar16;
                                  pdVar10 = (dword *)&uStack_80;
                                }
                                pbVar12 = (byte *)((long)pdVar10 + (long)puVar15);
                                uVar4 = (uint)*pbVar12;
                                uVar8 = (ulong)uVar4;
                                if ((char)*pbVar12 < '\0') {
                                  uVar14 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
                                  if (uVar14 < 3) {
                                    if (uVar14 == 1) goto LAB_001096d8;
                                    uVar8 = (ulong)(pbVar12[1] & 0x3f | (uVar4 & 0x1f) << 6);
                                    pdVar10 = (dword *)((long)&MACH_HEADER.magic + 2);
                                  }
                                  else if (uVar14 == 3) {
                                    uVar8 = (ulong)((uVar4 & 0xf) << 0xc | (pbVar12[1] & 0x3f) << 6
                                                   | pbVar12[2] & 0x3f);
                                    pdVar10 = (dword *)((long)&MACH_HEADER.magic + 3);
                                  }
                                  else {
                                    uVar8 = (ulong)((uVar4 & 0xf) << 0x12 |
                                                    (pbVar12[1] & 0x3f) << 0xc |
                                                    (pbVar12[2] & 0x3f) << 6 | pbVar12[3] & 0x3f);
                                    pdVar10 = &MACH_HEADER.cputype;
                                  }
                                }
                                else {
LAB_001096d8:
                                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                                }
                              }
                              else {
                                uVar8 = (long)puVar15 * 0x10000;
                                pdVar10 = param_1;
                                __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                                          (uVar8,param_1,param_2);
                              }
                              FUN_00108650();
                              if ((uVar8 & 0xff00000000) != 0x100000000) {
                                if ((uVar5 >> 0x1c & 0xf) != 0) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a40);
                                  (*pcVar3)();
                                }
                                uVar4 = (int)uVar5 * 0x10;
                                uVar14 = (uint)uVar6 + uVar4;
                                if (CARRY4((uint)uVar6,uVar4)) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a44);
                                  (*pcVar3)();
                                }
                                if (uVar14 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a48);
                                  (*pcVar3)();
                                }
                                uVar14 = uVar14 * 0x10;
                                uVar4 = (uint)uVar7 + uVar14;
                                if (CARRY4((uint)uVar7,uVar14)) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a4c);
                                  (*pcVar3)();
                                }
                                if (uVar4 >> 0x1c != 0) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a50);
                                  (*pcVar3)();
                                }
                                uVar4 = uVar4 * 0x10;
                                if (CARRY4((uint)uVar8,uVar4)) {
                    /* WARNING: Does not return */
                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x109a54);
                                  (*pcVar3)();
                                }
                                if ((uint)uVar8 + uVar4 >> 10 == 0x37) {
                                  if (uVar13 < 0xd800) {
                    /* WARNING: Does not return */
                                    pcVar3 = (code *)SoftwareBreakpoint(1,0x109a58);
                                    (*pcVar3)();
                                  }
                                  puVar15 = (undefined1 *)((long)pdVar10 + (long)puVar15);
                                  goto LAB_00108b60;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_001099c0:
        _swift_bridgeObjectRelease(param_2);
        uVar11 = uStack_68;
        goto LAB_001099cc;
      }
LAB_00108b60:
      __sSS17UnicodeScalarViewV6appendyys0A0O0B0VF();
    } while ((long)puVar15 < (long)uVar2);
    _swift_bridgeObjectRelease(param_2);
    uVar11 = uStack_68;
  }
LAB_001099d8:
  auVar17._8_8_ = uVar11;
  auVar17._0_8_ = uStack_70;
  return auVar17;
}



/* Entry: 00109a58; end: 00109abf;  */

void FUN_00109a58(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  uVar3 = unaff_x20[2];
  if (lVar1 == 0) goto LAB_00109a80;
  do {
    if (unaff_x20[1] - lVar1 == uVar3) {
      return;
    }
    while( true ) {
      if (0x20 < *(byte *)(lVar1 + uVar3) ||
          (1L << ((ulong)*(byte *)(lVar1 + uVar3) & 0x3f) & 0x100002600U) == 0) {
        return;
      }
      if ((lVar1 == 0) || ((ulong)(unaff_x20[1] - lVar1) <= uVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109ac0);
        (*pcVar2)();
      }
      uVar3 = uVar3 + 1;
      unaff_x20[2] = uVar3;
      if (lVar1 != 0) break;
LAB_00109a80:
      if (uVar3 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 00109ac0; end: 00109ccf;  */

undefined1  [16] FUN_00109ac0(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  byte bVar1;
  code *pcVar2;
  ulong extraout_x8;
  ulong uVar3;
  ulong uVar4;
  ulong extraout_x8_00;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 unaff_x19;
  long unaff_x21;
  undefined1 auVar8 [16];
  
  uVar5 = *param_3;
  if (uVar5 == param_4) {
    unaff_x19 = 0xd;
  }
  else {
    bVar1 = *(byte *)((long)param_1 + uVar5);
    if (bVar1 == 0x30) {
      if ((param_1 == (undefined8 *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109cd0);
        (*pcVar2)();
      }
      uVar3 = uVar5 + 1;
      *param_3 = uVar3;
      if (uVar3 == param_4) {
LAB_00109b4c:
        uVar3 = 0;
        unaff_x19 = 0;
        goto LAB_00109b0c;
      }
      bVar1 = *(byte *)((long)param_1 + uVar3);
      if (bVar1 - 0x30 < 10) {
        unaff_x19 = 0xc;
      }
      else {
        if (bVar1 < 0x5c) {
          if ((bVar1 != 0x2e) && (bVar1 != 0x45)) goto LAB_00109b4c;
        }
        else {
          if (bVar1 == 0x5c) {
LAB_00109c80:
            uVar3 = 0;
            unaff_x19 = 1;
            goto LAB_00109b0c;
          }
          if (bVar1 != 0x65) goto LAB_00109b4c;
        }
LAB_00109c58:
        *param_3 = uVar5;
        FUN_00109cd0();
        uVar3 = extraout_x8_00;
        if (unaff_x21 != 0) goto LAB_00109b0c;
        if (((uint)param_2 & 0xff) == 1) {
          unaff_x19 = 1;
        }
        else {
          unaff_x19 = 1;
          if (((-1.0 < (double)param_1) && ((double)param_1 < 1.8446744073709552e+19)) &&
             ((double)(long)(double)param_1 == (double)param_1)) {
            unaff_x19 = 0;
            uVar3 = (ulong)(double)param_1;
            goto LAB_00109b0c;
          }
        }
      }
    }
    else {
      if (bVar1 - 0x31 < 9) {
        uVar3 = 0;
        unaff_x19 = 2;
        uVar6 = uVar5;
LAB_00109b7c:
        if (param_4 != uVar6) {
          bVar1 = *(byte *)((long)param_1 + uVar6);
          if (bVar1 - 0x30 < 10) {
            if (0x1999999999999999 < uVar3) goto LAB_00109adc;
            uVar7 = (ulong)(bVar1 - 0x30) & 0xff;
            uVar4 = uVar3 * 10;
            if (CARRY8(uVar7,uVar4)) goto LAB_00109adc;
            if ((param_1 == (undefined8 *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar6)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x109ccc);
              (*pcVar2)();
            }
            uVar6 = uVar6 + 1;
            *param_3 = uVar6;
            uVar3 = uVar4 + uVar7;
            if (CARRY8(uVar4,uVar7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x109bd0);
              (*pcVar2)();
            }
            goto LAB_00109b7c;
          }
          if (bVar1 < 0x5c) {
            if ((bVar1 != 0x2e) && (bVar1 != 0x45)) goto LAB_00109c78;
            goto LAB_00109c58;
          }
          if (bVar1 == 0x5c) goto LAB_00109c80;
          if (bVar1 == 0x65) goto LAB_00109c58;
        }
LAB_00109c78:
        unaff_x19 = 0;
        goto LAB_00109b0c;
      }
      unaff_x19 = 1;
      if (bVar1 == 0x5c) {
        uVar3 = 0;
        goto LAB_00109b0c;
      }
    }
  }
LAB_00109adc:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = unaff_x19;
  _swift_willThrow();
  uVar3 = extraout_x8;
LAB_00109b0c:
  auVar8._8_8_ = unaff_x19;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



/* Entry: 00109cd0; end: 0010a07f;  */

undefined1  [16] FUN_00109cd0(byte *param_1,long param_2,ulong *param_3,ulong param_4,byte *param_5)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  dword *pdVar10;
  undefined1 auVar11 [16];
  
  uVar5 = *param_3;
  pbVar3 = param_1;
  if (uVar5 == param_4) goto LAB_00109cec;
  param_5 = (byte *)0x0;
  pbVar3 = param_1 + uVar5;
  bVar1 = *pbVar3;
  uVar6 = (uint)bVar1;
  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
  if ((bVar1 == 0x5c) || (bVar1 == 0x4e)) goto LAB_00109d20;
  uVar7 = uVar5;
  if (bVar1 == 0x2d) {
    if ((param_1 == (byte *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a05c);
      (*pcVar2)();
    }
    uVar7 = uVar5 + 1;
    *param_3 = uVar7;
    if (uVar7 == param_4) {
      *param_3 = uVar5;
      goto LAB_00109cec;
    }
    uVar6 = (uint)param_1[uVar7];
    if (uVar6 != 0x5c) goto LAB_00109d90;
  }
  else {
LAB_00109d90:
    if (uVar6 != 0x49) {
      if (uVar6 == 0x30) {
        if ((param_1 == (byte *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a060);
          (*pcVar2)();
        }
        uVar7 = uVar7 + 1;
        *param_3 = uVar7;
        if (uVar7 == param_4) {
          param_5 = (byte *)0x0;
          pdVar10 = (dword *)0x0;
          goto LAB_00109d20;
        }
        uVar6 = (uint)param_1[uVar7];
        if (uVar6 == 0x5c) goto LAB_00109e40;
        if (uVar6 - 0x30 < 10) {
          pdVar10 = &MACH_HEADER.filetype;
        }
        else {
LAB_00109e60:
          param_5 = (byte *)0x0;
          if (uVar6 == 0x2e) {
            uVar9 = 0;
            if (param_1 != (byte *)0x0) {
              uVar9 = param_2 - (long)param_1;
            }
            if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a06c);
              (*pcVar2)();
            }
            uVar8 = uVar7 + 1;
            *param_3 = uVar8;
            if (uVar8 == param_4) {
LAB_00109cec:
              pdVar10 = (dword *)((long)&MACH_HEADER.filetype + 1);
            }
            else {
              uVar6 = (uint)param_1[uVar8];
              if (uVar6 - 0x30 < 10) {
                uVar8 = uVar7 + 2;
                do {
                  uVar7 = uVar8 - 1;
                  if (9 < uVar6 - 0x30) goto LAB_00109ef8;
                  if ((long)uVar9 <= (long)uVar7) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a064);
                    (*pcVar2)();
                  }
                  *param_3 = uVar8;
                  if (param_4 == uVar8) {
                    if ((long)param_4 < (long)uVar5) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x109fec);
                      (*pcVar2)();
                    }
                    goto LAB_0010a01c;
                  }
                  param_5 = (byte *)0x0;
                  uVar6 = (uint)param_1[uVar8];
                  uVar8 = uVar8 + 1;
                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                } while (uVar6 != 0x5c);
                goto LAB_00109d20;
              }
              pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
              if (uVar6 == 0x5c) {
                param_5 = (byte *)0x0;
                goto LAB_00109d20;
              }
            }
          }
          else {
LAB_00109ef8:
            param_5 = (byte *)0x0;
            if ((uVar6 | 0x20) == 0x65) {
              uVar9 = 0;
              if (param_1 != (byte *)0x0) {
                uVar9 = param_2 - (long)param_1;
              }
              if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a070);
                (*pcVar2)();
              }
              uVar8 = uVar7 + 1;
              *param_3 = uVar8;
              if (uVar8 == param_4) goto LAB_00109cec;
              bVar1 = param_1[uVar8];
              if (bVar1 == 0x2b) {
LAB_00109f44:
                if ((long)uVar9 <= (long)uVar8) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a07c);
                  (*pcVar2)();
                }
                uVar8 = uVar7 + 2;
                *param_3 = uVar8;
                if (uVar8 == param_4) goto LAB_00109cec;
                bVar1 = param_1[uVar8];
                if (bVar1 == 0x5c) goto LAB_00109e40;
              }
              else {
                if (bVar1 == 0x5c) goto LAB_00109e40;
                if (bVar1 == 0x2d) goto LAB_00109f44;
              }
              uVar6 = (uint)bVar1;
              if (uVar6 - 0x30 < 10) {
                if ((long)uVar9 <= (long)uVar8) {
                  uVar9 = uVar8;
                }
                uVar7 = uVar8;
                do {
                  uVar8 = uVar7 + 1;
                  if (9 < uVar6 - 0x30) goto LAB_00109ff0;
                  if (uVar8 - uVar9 == 1) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a074);
                    (*pcVar2)();
                  }
                  *param_3 = uVar8;
                  if (param_4 == uVar8) {
                    if ((long)param_4 < (long)uVar5) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a080);
                      (*pcVar2)();
                    }
                    goto LAB_0010a01c;
                  }
                  param_5 = (byte *)0x0;
                  uVar6 = (uint)param_1[uVar8];
                  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
                  uVar7 = uVar8;
                } while (uVar6 != 0x5c);
                goto LAB_00109d20;
              }
              goto LAB_00109fc4;
            }
LAB_00109ff0:
            param_4 = uVar7;
            if ((long)uVar7 < (long)uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a078);
              (*pcVar2)();
            }
LAB_0010a01c:
            pdVar10 = (dword *)0x0;
            if (param_1 != (byte *)0x0) {
              pdVar10 = (dword *)(param_1 + param_4);
            }
            param_5 = (byte *)0x0;
            if (param_1 != (byte *)0x0) {
              param_5 = pbVar3;
            }
LAB_0010a028:
            pbVar4 = (byte *)0x0;
            FUN_000dfca8(param_5,pdVar10,1);
            if (((uint)pdVar10 & 0xff) != 1) goto LAB_00109d20;
            pdVar10 = (dword *)((long)&MACH_HEADER.cputype + 2);
            pbVar3 = param_5;
            param_5 = pbVar4;
          }
        }
      }
      else {
        if (uVar6 - 0x31 < 9) {
          do {
            uVar9 = uVar7 + 1;
            if (9 < uVar6 - 0x30) goto LAB_00109e60;
            if ((param_1 == (byte *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a058);
              (*pcVar2)();
            }
            *param_3 = uVar9;
            if (param_4 == uVar9) {
              if ((long)param_4 < (long)uVar5) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10a068);
                (*pcVar2)();
              }
              pdVar10 = (dword *)(param_1 + param_4);
              param_5 = pbVar3;
              goto LAB_0010a028;
            }
            param_5 = (byte *)0x0;
            uVar6 = (uint)param_1[uVar9];
            pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
            uVar7 = uVar9;
          } while (uVar6 != 0x5c);
          goto LAB_00109d20;
        }
LAB_00109fc4:
        param_5 = (byte *)0x0;
        pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
      }
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pbVar3,0,0);
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      *(dword **)(pbVar3 + 8) = pdVar10;
      _swift_willThrow();
      goto LAB_00109d20;
    }
  }
LAB_00109e40:
  param_5 = (byte *)0x0;
  pdVar10 = (dword *)((long)&MACH_HEADER.magic + 1);
LAB_00109d20:
  auVar11._8_8_ = pdVar10;
  auVar11._0_8_ = param_5;
  return auVar11;
}



/* Entry: 0010a080; end: 0010a18f;  */

void FUN_0010a080(undefined8 *param_1,long param_2,ulong *param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  uVar3 = *param_3;
  if (uVar3 == param_4) {
LAB_0010a098:
    uVar4 = 0xd;
  }
  else {
    if (*(char *)((long)param_1 + uVar3) == '-') {
      if ((param_1 == (undefined8 *)0x0) || ((ulong)(param_2 - (long)param_1) <= uVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a190);
        (*pcVar1)();
      }
      uVar3 = uVar3 + 1;
      *param_3 = uVar3;
      if (uVar3 == param_4) goto LAB_0010a098;
      if (*(byte *)((long)param_1 + uVar3) - 0x3a < 0xfffffff6) {
        uVar4 = 1;
        goto LAB_0010a09c;
      }
      FUN_00109ac0();
      if (unaff_x21 != 0) {
        return;
      }
      if (((uint)param_2 & 0xff) == 1) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
      bVar2 = param_1 == (undefined8 *)0x8000000000000000;
      param_1 = (undefined8 *)0x8000000000000000;
      if (bVar2) {
        return;
      }
    }
    else {
      FUN_00109ac0();
      if (unaff_x21 != 0) {
        return;
      }
      if (((uint)param_2 & 0xff) == 1) {
        return;
      }
      if (-1 < (long)param_1) {
        return;
      }
    }
    uVar4 = 2;
  }
LAB_0010a09c:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar4;
  _swift_willThrow();
  return;
}



/* Entry: 0010a190; end: 0010a2c3;  */

void FUN_0010a190(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  ulong uVar10;
  
  lVar4 = *unaff_x20;
  uVar9 = unaff_x20[1] - lVar4;
  uVar3 = 0;
  if (lVar4 != 0) {
    uVar3 = uVar9;
  }
  if (uVar3 <= (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2bc);
    (*pcVar6)();
  }
  bVar5 = 0;
  uVar2 = unaff_x20[2] + 1;
  unaff_x20[2] = uVar2;
  uVar10 = uVar2;
  while ((lVar4 == 0 || (uVar10 != uVar9))) {
    uVar8 = uVar9;
    if (*(char *)(lVar4 + uVar10) == '\\') {
      if ((long)uVar3 <= (long)uVar10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2b8);
        (*pcVar6)();
      }
      uVar10 = uVar10 + 1;
      if (lVar4 == 0) {
        bVar5 = 1;
        uVar8 = 0;
      }
      else {
        if (uVar10 == uVar9) break;
        bVar5 = 1;
      }
    }
    else {
      if (*(char *)(lVar4 + uVar10) == '\"') {
        unaff_x20[2] = uVar10;
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2c4);
          (*pcVar6)();
        }
        lVar7 = uVar10 - uVar2;
        FUN_00122abc(lVar4 + uVar2);
        if ((long)uVar10 < (long)uVar9) {
          unaff_x20[2] = uVar10 + 1;
          if (!(bool)(lVar7 != 0 & bVar5)) {
            return;
          }
          FUN_00108aec();
          _swift_bridgeObjectRelease(lVar7);
          return;
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2c0);
        (*pcVar6)();
      }
      if (lVar4 == 0) {
        uVar8 = 0;
      }
    }
    bVar1 = (long)uVar8 <= (long)uVar10;
    uVar10 = uVar10 + 1;
    if (bVar1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a2b4);
      (*pcVar6)();
    }
  }
  unaff_x20[2] = uVar9;
  return;
}



/* Entry: 0010a2c4; end: 0010a3b7;  */

void FUN_0010a2c4(float *param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x21;
  undefined1 auStack_a8 [96];
  long lStack_48;
  
  if ((param_2 != 0.0) && (lVar1 = param_3 - (long)param_2, lVar1 != 0)) {
    lStack_48 = 0;
    FUN_000fd2e4(param_4,auStack_a8);
    FUN_00109cd0(param_2,param_3,&lStack_48,lVar1);
    if (unaff_x21 != 0) {
      FUN_000c7044(auStack_a8);
      return;
    }
    FUN_000c7044(auStack_a8);
    if (((((uint)param_3 & 0xff) != 1) && (lStack_48 == lVar1)) &&
       ((uint)ABS((float)param_2) < 0x7f800000)) {
      *param_1 = (float)param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0.0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 0010a3b8; end: 0010a49b;  */

void FUN_0010a3b8(long *param_1,long param_2,long param_3,undefined8 param_4,code *param_5)

{
  long lVar1;
  long unaff_x21;
  undefined1 auStack_b0 [96];
  long lStack_48;
  
  if ((param_2 != 0) && (lVar1 = param_3 - param_2, lVar1 != 0)) {
    lStack_48 = 0;
    FUN_000fd2e4(param_4,auStack_b0);
    (*param_5)(param_2,param_3,&lStack_48,lVar1);
    if (unaff_x21 != 0) {
      FUN_000c7044(auStack_b0);
      return;
    }
    FUN_000c7044(auStack_b0);
    if ((((uint)param_3 & 0xff) != 1) && (lStack_48 == lVar1)) {
      *param_1 = param_2;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 0010a49c; end: 0010a57f;  */

undefined8 FUN_0010a49c(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  
  lVar3 = unaff_x20[2];
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  if (lVar5 == 0) {
    lVar5 = lVar3;
    if (lVar4 == 0) {
      if (lVar3 == 0) {
        return 1;
      }
      goto LAB_0010a554;
    }
  }
  else {
    lVar6 = 0x20;
    do {
      lVar1 = lVar3 + lVar6;
      if (lVar4 != 0) {
        lVar1 = ((lVar3 + lVar4) - unaff_x20[1]) + lVar6;
      }
      if ((lVar1 == 0x20) ||
         (*(char *)(lVar3 + lVar4 + lVar6 + -0x20) != *(char *)(param_1 + lVar6)))
      goto LAB_0010a568;
      if ((lVar4 == 0) || ((ulong)(unaff_x20[1] - lVar4) <= (lVar3 + lVar6) - 0x20U)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a580);
        (*pcVar2)();
      }
      unaff_x20[2] = lVar3 + lVar6 + -0x1f;
      lVar6 = lVar6 + 1;
    } while (lVar6 - lVar5 != 0x20);
    lVar5 = lVar3 + lVar6 + -0x20;
  }
  if (lVar5 == unaff_x20[1] - lVar4) {
    return 1;
  }
LAB_0010a554:
  if (0x19 < (*(byte *)(lVar4 + lVar5) & 0xffffffdf) - 0x41) {
    return 1;
  }
LAB_0010a568:
  unaff_x20[2] = lVar3;
  return 0;
}



/* Entry: 0010a580; end: 0010a6ef;  */

void FUN_0010a580(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *unaff_x20;
  
  FUN_00109a58();
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar6 = *unaff_x20;
  if (uVar6 == 0) {
    if (uVar5 == 0) goto LAB_0010a69c;
  }
  else if (uVar5 == uVar2 - uVar6) goto LAB_0010a69c;
  if (*(char *)(uVar6 + uVar5) != '\"') {
    return;
  }
  uVar7 = uVar2 - uVar6;
  uVar1 = 0;
  if (uVar6 != 0) {
    uVar1 = uVar7;
  }
  if (uVar1 <= uVar5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6e8);
    (*pcVar4)();
  }
  lVar8 = 0;
  unaff_x20[2] = uVar5 + 1;
  while( true ) {
    if ((uVar6 != 0) && ((~uVar6 + uVar2) - uVar5 == lVar8)) {
      unaff_x20[2] = uVar7;
      goto LAB_0010a69c;
    }
    cVar3 = *(char *)(uVar6 + uVar5 + 1 + lVar8);
    if (cVar3 == '\"') break;
    if (cVar3 == '\\') goto LAB_0010a690;
    if ((long)uVar1 <= (long)(uVar5 + lVar8 + 1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6e4);
      (*pcVar4)();
    }
    lVar8 = lVar8 + 1;
  }
  uVar1 = uVar5 + lVar8 + 1;
  unaff_x20[2] = uVar1;
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6f0);
    (*pcVar4)();
  }
  if ((~uVar6 + uVar2) - uVar5 != lVar8) {
    if ((long)uVar7 <= (long)uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6ec);
      (*pcVar4)();
    }
    uVar5 = uVar5 + lVar8 + 2;
LAB_0010a690:
    unaff_x20[2] = uVar5;
    return;
  }
LAB_0010a69c:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  param_1[1] = 0xd;
  *param_1 = 0;
  _swift_willThrow();
  return;
}



/* Entry: 0010a6f0; end: 0010a7bb;  */

void FUN_0010a6f0(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x20;
  
  puVar3 = param_1;
  FUN_00109a58();
  uVar1 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (uVar1 == 0) goto LAB_0010a720;
  }
  else if (uVar1 == unaff_x20[1] - lVar4) {
LAB_0010a720:
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar3,0,0);
    puVar3[1] = 0xd;
    *puVar3 = 0;
    goto LAB_0010a7a0;
  }
  if ((uint)*(byte *)(lVar4 + uVar1) == ((uint)param_1 & 0xff)) {
    if ((lVar4 != 0) && (uVar1 < (ulong)(unaff_x20[1] - lVar4))) {
      unaff_x20[2] = uVar1 + 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7bc);
    (*pcVar2)();
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,puVar3,0,0);
  *puVar3 = 0;
  puVar3[1] = 0;
LAB_0010a7a0:
  _swift_willThrow();
  return;
}



/* Entry: 0010a7bc; end: 0010aa6b;  */

void FUN_0010a7bc(char *param_1)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  long *unaff_x20;
  long unaff_x21;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  FUN_00109a58();
  lVar10 = 0;
  pcVar1 = (char *)0xae65a8;
LAB_0010a7f0:
  lVar11 = 0;
  lVar2 = *unaff_x20;
  pbVar9 = (byte *)(unaff_x20[1] - lVar2);
  while( true ) {
    FUN_00109a58();
    pbVar8 = (byte *)unaff_x20[2];
    if (lVar2 == 0) break;
    if (pbVar8 == pbVar9) goto LAB_0010a9e4;
    bVar3 = pbVar8[lVar2];
    if (bVar3 != 0x5b) goto LAB_0010a84c;
    if (pbVar9 <= pbVar8) goto LAB_0010aa68;
    unaff_x20[2] = (long)(pbVar8 + 1);
    bVar6 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa38);
      (*pcVar5)();
    }
  }
  if (pbVar8 != (byte *)0x0) {
    bVar3 = *pbVar8;
    if (bVar3 == 0x5b) {
LAB_0010aa68:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa6c);
      (*pcVar5)();
    }
LAB_0010a84c:
    lVar12 = lVar11;
    if (bVar3 < 0x6e) {
      if (bVar3 == 0x22) {
        FUN_0010aaec();
      }
      else {
        if (bVar3 == 0x5d) {
          if (lVar11 == 0) {
            FUN_000c7004();
            _swift_allocError(&UNK_009ad5a0,param_1,0,0);
            param_1[0] = '\0';
            param_1[1] = '\0';
            param_1[2] = '\0';
            param_1[3] = '\0';
            param_1[4] = '\0';
            param_1[5] = '\0';
            param_1[6] = '\0';
            param_1[7] = '\0';
            *(undefined8 *)(param_1 + 8) = 0;
            goto LAB_0010aa10;
          }
          if (0 < lVar11) {
            do {
              FUN_00109a58();
              pbVar8 = (byte *)unaff_x20[2];
              lVar12 = lVar11;
              if (lVar2 == 0) {
                if (pbVar8 == (byte *)0x0) break;
              }
              else if (pbVar8 == pbVar9) break;
              if (pbVar8[lVar2] != 0x5d) break;
              if ((lVar2 == 0) || (pbVar9 <= pbVar8)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa68);
                (*pcVar5)();
              }
              lVar12 = 0;
              unaff_x20[2] = (long)(pbVar8 + 1);
              lVar4 = lVar11 + -1;
              bVar6 = 0 < lVar11;
              lVar11 = lVar4;
            } while (lVar4 != 0 && bVar6);
          }
          goto joined_r0x0010a9dc;
        }
        if (bVar3 == 0x66) {
          param_1 = pcVar1;
          func_0x000115a8(0xae65a8,&UNK_007cd3b0);
          goto LAB_0010a950;
        }
LAB_0010a8cc:
        FUN_00106e38();
      }
LAB_0010a8d4:
      if (unaff_x21 != 0) {
        return;
      }
joined_r0x0010a9dc:
      if (SCARRY8(lVar10,lVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9e4);
        (*pcVar5)();
      }
      if (lVar10 + lVar12 < 1) {
        return;
      }
      lVar11 = *unaff_x20;
      lVar2 = unaff_x20[1];
      lVar10 = lVar10 + lVar12;
      do {
        FUN_00109a58();
        uVar7 = unaff_x20[2];
        if (lVar11 == 0) {
          if (uVar7 == 0) goto LAB_0010a9bc;
        }
        else if (uVar7 == lVar2 - lVar11) goto LAB_0010a9bc;
        if (*(char *)(lVar11 + uVar7) != ']') goto LAB_0010a9bc;
        if ((lVar11 == 0) || ((ulong)(lVar2 - lVar11) <= uVar7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa3c);
          (*pcVar5)();
        }
        unaff_x20[2] = uVar7 + 1;
        lVar12 = lVar10 + -1;
        bVar6 = lVar10 < 1;
        lVar10 = lVar12;
        if (lVar12 == 0 || bVar6) {
          return;
        }
      } while( true );
    }
    if (bVar3 == 0x6e) {
      param_1 = pcVar1;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    }
    else {
      if (bVar3 != 0x74) {
        if (bVar3 != 0x7b) goto LAB_0010a8cc;
        FUN_0010ac30();
        goto LAB_0010a8d4;
      }
      param_1 = pcVar1;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    }
LAB_0010a950:
    _swift_initStaticObject();
    FUN_0010a49c();
    if (((ulong)param_1 & 1) != 0) goto joined_r0x0010a9dc;
  }
LAB_0010a9e4:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  *(undefined8 *)(param_1 + 8) = 0xd;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
LAB_0010aa10:
  _swift_willThrow();
  return;
LAB_0010a9bc:
  param_1 = segment_command_00000020.segname + 4;
  FUN_0010a6f0();
  if (unaff_x21 != 0) {
    return;
  }
  goto LAB_0010a7f0;
}



/* Entry: 0010aa6c; end: 0010aaeb;  */

void FUN_0010aa6c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    (**(code **)(*(long *)(param_3 + -8) + 0x38))(param_1,1,1,param_3);
  }
  else {
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,param_2,0,0);
    param_2[1] = 9;
    *param_2 = 0;
    _swift_willThrow();
  }
  return;
}



/* Entry: 0010aaec; end: 0010ac2f;  */

void FUN_0010aaec(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  
  uVar6 = unaff_x20[2];
  lVar4 = *unaff_x20;
  if (lVar4 == 0) {
    if (uVar6 != 0) goto LAB_0010ab1c;
  }
  else if (uVar6 != unaff_x20[1] - lVar4) {
LAB_0010ab1c:
    if (*(char *)(lVar4 + uVar6) == '\"') {
      uVar5 = unaff_x20[1] - lVar4;
      uVar2 = 0;
      if (lVar4 != 0) {
        uVar2 = uVar5;
      }
      if (uVar2 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac2c);
        (*pcVar3)();
      }
      uVar6 = uVar6 + 1;
      unaff_x20[2] = uVar6;
LAB_0010ab44:
      do {
        if ((lVar4 != 0) && (uVar6 == uVar5)) {
LAB_0010abc0:
          unaff_x20[2] = uVar5;
          goto LAB_0010abc4;
        }
        if (*(char *)(lVar4 + uVar6) != '\\') {
          if (*(char *)(lVar4 + uVar6) == '\"') {
            unaff_x20[2] = uVar6;
            if ((long)uVar6 < (long)uVar2) {
              unaff_x20[2] = uVar6 + 1;
              return;
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac30);
            (*pcVar3)();
          }
          if ((long)uVar2 <= (long)uVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac20);
            (*pcVar3)();
          }
          uVar6 = uVar6 + 1;
          goto LAB_0010ab44;
        }
        if ((long)uVar2 <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac24);
          (*pcVar3)();
        }
        uVar1 = uVar6 + 1;
        if (lVar4 == 0) {
          if (-1 < (long)uVar1) {
LAB_0010ac24:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac28);
            (*pcVar3)();
          }
        }
        else {
          if (uVar1 == uVar5) goto LAB_0010abc0;
          if ((long)uVar5 <= (long)uVar1) goto LAB_0010ac24;
        }
        uVar6 = uVar6 + 2;
      } while( true );
    }
    uVar7 = 5;
    goto LAB_0010abc8;
  }
LAB_0010abc4:
  uVar7 = 0xd;
LAB_0010abc8:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  *param_1 = 0;
  param_1[1] = uVar7;
  _swift_willThrow();
  return;
}



/* Entry: 0010ac30; end: 0010acff;  */

/* WARNING: Removing unreachable block (ram,0x0010acbc) */

void FUN_0010ac30(void)

{
  long lVar1;
  code *pcVar2;
  char *pcVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x21;
  
  pcVar3 = section_00000068.segname + 3;
  FUN_0010a6f0();
  if (unaff_x21 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x58) + -1;
    if (SBORROW8(*(long *)(unaff_x20 + 0x58),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad00);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x58) = lVar1;
    if (lVar1 < 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar3,0,0);
      *(undefined8 *)(pcVar3 + 8) = 0x13;
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      _swift_willThrow();
    }
    else {
      FUN_00106a98();
      if (((ulong)pcVar3 & 1) == 0) {
        while( true ) {
          FUN_00109a58();
          FUN_0010aaec();
          uVar4 = 0;
          FUN_0010a6f0();
          FUN_0010a7bc();
          FUN_00106a98();
          if ((uVar4 & 1) != 0) break;
          FUN_0010a6f0(0x2c);
        }
      }
    }
  }
  return;
}



/* Entry: 0010ad00; end: 0010afab;  */

void FUN_0010ad00(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  byte abStack_78 [15];
  undefined1 uStack_69;
  long lStack_68;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar15 = *param_2;
  uVar18 = param_2[1];
  uVar12 = (uint)(uVar18 >> 0x20);
  uVar17 = uVar12 >> 0x1e;
  abStack_78[0] = (byte)lVar15;
  uVar3 = (undefined1)((ulong)lVar15 >> 8);
  uVar4 = (undefined1)((ulong)lVar15 >> 0x10);
  uVar5 = (undefined1)((ulong)lVar15 >> 0x18);
  uVar6 = (undefined1)((ulong)lVar15 >> 0x20);
  uVar7 = (undefined1)((ulong)lVar15 >> 0x28);
  uVar8 = (undefined1)((ulong)lVar15 >> 0x30);
  uVar9 = (undefined1)((ulong)lVar15 >> 0x38);
  abStack_78[1] = uVar3;
  abStack_78[2] = uVar4;
  abStack_78[3] = uVar5;
  abStack_78[4] = uVar6;
  abStack_78[5] = uVar7;
  abStack_78[6] = uVar8;
  abStack_78[7] = uVar9;
  if (uVar12 >> 0x1e < 2) {
    if (uVar17 == 0) {
      FUN_00023358(lVar15,uVar18);
      abStack_78[8] = (byte)uVar18;
      abStack_78[9] = (byte)(uVar18 >> 8);
      abStack_78[10] = (byte)(uVar18 >> 0x10);
      abStack_78[0xb] = (byte)(uVar18 >> 0x18);
      abStack_78[0xc] = (byte)(uVar18 >> 0x20);
      abStack_78[0xd] = (byte)(uVar18 >> 0x28);
      abStack_78[0xe] = (byte)(uVar18 >> 0x30);
      FUN_001088c0(param_1,abStack_78,abStack_78 + abStack_78[0xe],param_3,param_4,param_5);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = (ulong)CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8]))))));
    }
    else {
      uVar19 = uVar18 & 0x3fffffffffffffff;
      _swift_retain(uVar19);
      FUN_00023358(lVar15,uVar18);
      abStack_78[8] = (byte)uVar19;
      abStack_78[9] = (byte)(uVar19 >> 8);
      abStack_78[10] = (byte)(uVar19 >> 0x10);
      abStack_78[0xb] = (byte)(uVar19 >> 0x18);
      abStack_78[0xc] = (byte)(uVar19 >> 0x20);
      abStack_78[0xd] = (byte)(uVar19 >> 0x28);
      abStack_78[0xe] = (byte)(uVar19 >> 0x30);
      uStack_69 = (undefined1)(uVar19 >> 0x38);
      param_2[1] = -0x4000000000000000;
      *param_2 = 0;
      FUN_00023358(0,0xc000000000000000);
      FUN_0010afac(param_1,abStack_78,param_3,param_4,param_5);
      lVar15 = CONCAT17(abStack_78[7],
                        CONCAT16(abStack_78[6],
                                 CONCAT15(abStack_78[5],
                                          CONCAT14(abStack_78[4],
                                                   CONCAT13(abStack_78[3],
                                                            CONCAT12(abStack_78[2],
                                                                     CONCAT11(abStack_78[1],
                                                                              abStack_78[0])))))));
      uVar18 = CONCAT17(uStack_69,
                        CONCAT16(abStack_78[0xe],
                                 CONCAT15(abStack_78[0xd],
                                          CONCAT14(abStack_78[0xc],
                                                   CONCAT13(abStack_78[0xb],
                                                            CONCAT12(abStack_78[10],
                                                                     CONCAT11(abStack_78[9],
                                                                              abStack_78[8]))))))) |
               0x4000000000000000;
    }
    *param_2 = lVar15;
    param_2[1] = uVar18;
  }
  else if (uVar17 == 2) {
    uVar19 = uVar18 & 0x3fffffffffffffff;
    _swift_retain(lVar15);
    _swift_retain(uVar19);
    FUN_00023358(lVar15,uVar18);
    abStack_78[8] = (byte)uVar19;
    abStack_78[9] = (byte)(uVar19 >> 8);
    abStack_78[10] = (byte)(uVar19 >> 0x10);
    abStack_78[0xb] = (byte)(uVar19 >> 0x18);
    abStack_78[0xc] = (byte)(uVar19 >> 0x20);
    abStack_78[0xd] = (byte)(uVar19 >> 0x28);
    abStack_78[0xe] = (byte)(uVar19 >> 0x30);
    uStack_69 = (undefined1)(uVar19 >> 0x38);
    param_2[1] = -0x4000000000000000;
    *param_2 = 0;
    lVar15 = 0;
    FUN_00023358(0,0xc000000000000000);
    __s10Foundation4DataV10LargeSliceV21ensureUniqueReferenceyyF();
    lVar13 = CONCAT17(abStack_78[7],
                      CONCAT16(abStack_78[6],
                               CONCAT15(abStack_78[5],
                                        CONCAT14(abStack_78[4],
                                                 CONCAT13(abStack_78[3],
                                                          CONCAT12(abStack_78[2],
                                                                   CONCAT11(abStack_78[1],
                                                                            abStack_78[0])))))));
    uVar18 = CONCAT17(uStack_69,
                      CONCAT16(abStack_78[0xe],
                               CONCAT15(abStack_78[0xd],
                                        CONCAT14(abStack_78[0xc],
                                                 CONCAT13(abStack_78[0xb],
                                                          CONCAT12(abStack_78[10],
                                                                   CONCAT11(abStack_78[9],
                                                                            abStack_78[8])))))));
    lVar1 = *(long *)(lVar13 + 0x10);
    lVar2 = *(long *)(lVar13 + 0x18);
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    if (lVar15 == 0) goto LAB_0010afa8;
    lVar16 = lVar15;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar10 = lVar1 - lVar16;
    if (SBORROW8(lVar1,lVar16)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10afa0);
      (*pcVar14)();
    }
    lVar11 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x10afa4);
      (*pcVar14)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar11 <= lVar16) {
      lVar16 = lVar11;
    }
    lVar15 = lVar15 + lVar10;
    FUN_001088c0(param_1,lVar15,lVar15 + lVar16,param_3,param_4,param_5);
    *param_2 = lVar13;
    param_2[1] = uVar18 | 0x8000000000000000;
  }
  else {
    abStack_78[8] = 0;
    abStack_78[9] = 0;
    abStack_78[10] = 0;
    abStack_78[0xb] = 0;
    abStack_78[0xc] = 0;
    abStack_78[0xd] = 0;
    abStack_78[0] = 0;
    abStack_78[1] = 0;
    abStack_78[2] = 0;
    abStack_78[3] = 0;
    abStack_78[4] = 0;
    abStack_78[5] = 0;
    abStack_78[6] = 0;
    abStack_78[7] = 0;
    FUN_001088c0(abStack_78,abStack_78,param_3,param_4,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_0010afa8:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10afac);
  (*pcVar14)();
}



/* Entry: 0010afac; end: 0010b07f;  */

void FUN_0010afac(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  __s10Foundation4DataV11InlineSliceV21ensureUniqueReferenceyyF();
  lVar7 = (long)*param_2;
  iVar1 = param_2[1];
  if (iVar1 < *param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b078);
    (*pcVar3)();
  }
  lVar6 = *(long *)(param_2 + 2);
  lVar4 = lVar6;
  _swift_retain();
  __s10Foundation13__DataStorageC6_bytesSvSgvg();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    __s10Foundation13__DataStorageC7_offsetSivg();
    lVar2 = lVar7 - lVar5;
    if (!SBORROW8(lVar7,lVar5)) {
      lVar7 = iVar1 - lVar7;
      __s10Foundation13__DataStorageC7_lengthSivg();
      if (lVar7 <= lVar5) {
        lVar5 = lVar7;
      }
      lVar4 = lVar4 + lVar2;
      FUN_001088c0(param_1,lVar4,lVar4 + lVar5,param_3,param_4,param_5);
      _swift_release(lVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b07c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b080);
  (*pcVar3)();
}



/* Entry: 0010b080; end: 0010b0fb;  */

void FUN_0010b080(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (-1 < param_1) {
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    uVar5 = (uint)(*unaff_x20 >> 0x3b) & 1;
    if ((uVar2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar2 = 7;
    if (uVar5 == 0) {
      uVar2 = 0xb;
    }
    uVar4 = 0xf;
    __sSS5index_8offsetBy07limitedC0SS5IndexVSgAE_SiAEtF(0xf,param_1,uVar2 | uVar1 << 0x10);
    if (((uint)param_1 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x00778428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS14removeSubrangeyySnySS5IndexVGF_0099af68)(0xf,uVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10b0fc);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10b0f8);
  (*pcVar3)();
}



/* Entry: 0010b0fc; end: 0010b14f;  */

long FUN_0010b0fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0010b150; end: 0010b24b;  */

undefined8 * FUN_0010b150(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  lVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar3;
  pcVar1 = (code *)**(undefined8 **)(lVar3 + -8);
  _swift_retain();
  (*pcVar1)(param_1 + 6,param_2 + 6,lVar3);
  param_1[0xb] = param_2[0xb];
  return param_1;
}



/* Entry: 0010b24c; end: 0010b2af;  */

undefined8 * FUN_0010b24c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_00011670(param_1 + 6);
  uVar2 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  return param_1;
}



/* Entry: 0010b2b0; end: 0010b35f;  */

int FUN_0010b2b0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0010b360; end: 0010b6e3;  */

/* WARNING: Removing unreachable block (ram,0x0010b5ec) */
/* WARNING: Removing unreachable block (ram,0x0010b5f0) */

void FUN_0010b360(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  long unaff_x21;
  
  puVar3 = param_1;
  puVar7 = param_2;
  puVar8 = param_3;
  FUN_0010a580();
  if (unaff_x21 != 0) {
    return;
  }
  while( true ) {
    if (((uint)puVar8 & 0xff) == 1) {
      FUN_00106a08();
      FUN_0010a6f0(0x3a);
      _swift_bridgeObjectRetain(puVar7);
      puVar4 = puVar3;
      FUN_00047e80(puVar3,puVar7);
      _swift_bridgeObjectRelease(puVar7);
      if (param_1[2] != 0) {
        uVar6 = (long)puVar4 + puVar4[2] + 0x20;
        FUN_000e1dc4();
        if ((uVar6 & 1) != 0) {
          _swift_bridgeObjectRelease(puVar7);
          _swift_release(puVar4);
          return;
        }
      }
      _swift_release(puVar4);
      puVar4 = puVar3;
    }
    else {
      FUN_0010a6f0(0x3a);
      if ((param_1[2] != 0) && (puVar4 = puVar7, FUN_000e1dc4(), ((ulong)puVar4 & 1) != 0)) {
        return;
      }
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10b6e0);
        (*pcVar2)();
      }
      puVar7 = (undefined8 *)((long)puVar7 - (long)puVar3);
      FUN_00122abc();
      puVar4 = puVar3;
      if (puVar7 == (undefined8 *)0x0) {
        FUN_000c7004();
        _swift_allocError(&UNK_009ad5a0,puVar3,0,0);
        puVar3[1] = 6;
        *puVar3 = 0;
        goto LAB_0010b66c;
      }
    }
    puVar3 = puVar7;
    puVar5 = puVar4;
    puVar7 = puVar3;
    func_0x00106b74();
    if ((((uint)puVar5 & 0xff00) != 0x100) && (((uint)puVar5 & 0xff) == 0x5b)) {
      puVar5 = puVar4;
      puVar7 = puVar3;
      FUN_000eacb0();
      if ((((uint)puVar5 & 0xff00) != 0x100) && (((uint)puVar5 & 0xff) == 0x5d)) {
        uVar6 = (ulong)puVar4 & 0xffffffffffff;
        if (((ulong)puVar3 & 0x2000000000000000) != 0) {
          uVar6 = (ulong)puVar3 >> 0x38 & 0xf;
        }
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b6dc);
          (*pcVar2)();
        }
        puVar7 = puVar3;
        func_0x00106bf4(puVar4);
        if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b6e4);
          (*pcVar2)();
        }
        puVar8 = puVar7;
        FUN_0010b080(1);
        _swift_bridgeObjectRelease(puVar7);
        func_0x00106c34();
        _swift_bridgeObjectRelease(puVar8);
        lVar1 = *(long *)(unaff_x20 + 0x50);
        FUN_0001393c(unaff_x20 + 0x30,*(undefined8 *)(unaff_x20 + 0x48));
        puVar5 = param_2;
        puVar7 = param_3;
        puVar8 = puVar4;
        (**(code **)(lVar1 + 0x10))();
        if (((uint)puVar7 & 0xff) != 1) {
          _swift_bridgeObjectRelease(puVar3);
          return;
        }
      }
    }
    if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) break;
    FUN_0010a7bc();
    func_0x00106a98();
    if (((ulong)puVar5 & 1) != 0) {
      _swift_bridgeObjectRelease(puVar3);
      return;
    }
    FUN_0010a6f0(0x2c);
    _swift_bridgeObjectRelease();
    FUN_0010a580();
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,puVar5,0,0);
  *puVar5 = puVar4;
  puVar5[1] = puVar3;
LAB_0010b66c:
  _swift_willThrow();
  return;
}



/* Entry: 0010b6e4; end: 0010b7b7;  */

void FUN_0010b6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9)

{
  long unaff_x21;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  FUN_000c3198(param_1,param_5,param_6,param_7,param_8,param_9);
  FUN_00023358(param_2,param_3);
  _swift_release(param_4);
  FUN_000ea918(param_5);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  return;
}



/* Entry: 0010b7b8; end: 0010b92f;  */

/* WARNING: Removing unreachable block (ram,0x0010b8c0) */

void FUN_0010b7b8(undefined8 param_1,ulong param_2,byte param_3,undefined1 *param_4,
                 undefined8 param_5,long param_6,long param_7)

{
  undefined1 *puVar1;
  long *plVar2;
  long unaff_x21;
  long alStack_a0 [2];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  byte bStack_70;
  
  plVar2 = alStack_a0;
  if (((param_2 & 1) != 0) ||
     (puVar1 = param_4, (**(code **)(param_6 + 0x20))(param_4,param_6), ((ulong)puVar1 & 1) != 0)) {
    alStack_a0[0] = 0;
    (**(code **)(param_6 + 0x48))(alStack_a0,&UNK_009ab410,&PTR_DAT_009ab428,param_4,param_6);
    if (unaff_x21 != 0) {
      return;
    }
    puVar1 = (undefined1 *)plVar2;
    if (alStack_a0[0] < 0x7fffffff) {
      (**(code **)(param_7 + 8))(param_1,0,alStack_a0[0],param_5,param_7);
      bStack_70 = param_3 & 1;
      puStack_90 = param_4;
      uStack_88 = param_5;
      lStack_80 = param_6;
      lStack_78 = param_7;
      (**(code **)(param_7 + 0x28))(FUN_0010bae8,alStack_a0,PTR___sytN_0099b8e0 + 8,param_5,param_7)
      ;
      return;
    }
  }
  FUN_000c6f14();
  _swift_allocError(&UNK_009ab310,puVar1,0,0);
  *puVar1 = 1;
  _swift_willThrow();
  return;
}



/* Entry: 0010b930; end: 0010ba37;  */

void FUN_0010b930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,undefined1 param_6,long param_7,long param_8,long param_9,
                 long param_10)

{
  long unaff_x21;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  (**(code **)(param_9 + 0x10))(param_7,param_9);
  lStack_98 = param_10;
  lStack_b0 = param_7;
  lStack_a8 = param_8;
  lStack_a0 = param_9;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  (**(code **)(param_10 + 0x20))(FUN_0010bc34,auStack_c0,PTR___sytN_0099b8e0 + 8,param_8,param_10);
  FUN_000ea918(param_3);
  (**(code **)(*(long *)(param_8 + -8) + 8))(param_2,param_8);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_7 + -8) + 8))(param_1,param_7);
  }
  return;
}



/* Entry: 0010ba38; end: 0010baa3;  */

void FUN_0010ba38(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long in_stack_00000000;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = in_stack_00000000;
  uStack_70 = in_x5;
  uStack_68 = in_x6;
  uStack_60 = in_x7;
  (**(code **)(in_stack_00000000 + 0x20))
            (param_1,FUN_0010bc34,auStack_80,PTR___sytN_0099b8e0 + 8,in_x6,in_stack_00000000);
  return;
}



/* Entry: 0010baa4; end: 0010bae7;  */

undefined8 FUN_0010baa4(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  (**(code **)(param_2 + 0x48))(&uStack_18,&UNK_009ab410,&PTR_DAT_009ab428,param_1,param_2);
  return uStack_18;
}



/* Entry: 0010bae8; end: 0010bb43;  */

void FUN_0010bae8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    auStack_40[0] = *(undefined1 *)(unaff_x20 + 0x30);
    lStack_38 = param_1;
    lStack_30 = param_1;
    uStack_28 = param_2;
    (**(code **)(*(long *)(unaff_x20 + 0x20) + 0x48))
              (auStack_40,&UNK_009ab868,&PTR_DAT_009ab880,*(undefined8 *)(unaff_x20 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10bb44);
  (*pcVar1)();
}



/* Entry: 0010bb44; end: 0010bc13;  */

void FUN_0010bb44(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined4 param_7,long param_8,long param_9)

{
  long lVar1;
  long unaff_x21;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 + param_2;
  }
  FUN_0010bc6c(param_2,lVar1,param_4,param_5,param_6,param_7,param_8,param_9);
  FUN_000ea918(param_4);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  return;
}



/* Entry: 0010bc14; end: 0010bc33;  */

void FUN_0010bc14(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 + param_1;
  }
  FUN_0010bc6c(param_1,lVar1);
  return;
}



/* Entry: 0010bc34; end: 0010bc6b;  */

void FUN_0010bc34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0010bc6c(*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x38),
               *(undefined1 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
               *(undefined1 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x10),
               *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 0010bc6c; end: 0010bd9b;  */

void FUN_0010bc6c(long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                 byte param_6,undefined1 *param_7,long param_8)

{
  long unaff_x21;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((param_1 != 0) && (param_2 - param_1 != 0)) {
    uStack_d0 = 1;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_98 = 0;
    uStack_90 = 1;
    uStack_68 = 0xf000000000000000;
    uStack_70 = 0;
    uStack_58 = 0xf000000000000000;
    uStack_60 = 0;
    uStack_d8 = 0;
    lStack_f0 = param_1;
    lStack_e8 = param_2 - param_1;
    lStack_e0 = param_1;
    func_0x000d4d64(param_3,&uStack_c0);
    bStack_80 = param_6 & 1;
    uStack_88 = param_5;
    uStack_78 = param_5;
    FUN_000cf428();
    func_0x000d4cac(&lStack_f0);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((param_4 & 1) == 0) &&
     ((**(code **)(param_8 + 0x20))(param_7,param_8), ((ulong)param_7 & 1) == 0)) {
    FUN_000d4ba8();
    _swift_allocError(&UNK_009ab010,param_7,0,0);
    *param_7 = 4;
    _swift_willThrow();
  }
  return;
}



/* Entry: 0010bd9c; end: 0010be83;  */

void FUN_0010bd9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,long param_8,long param_9)

{
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  (**(code **)(param_9 + 0x10))(param_8,param_9);
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_0010ba38(&uStack_70,param_4,param_5,param_6,param_7,param_8,
               PTR___s10Foundation4DataVN_0099c3c0,param_9,&PTR_DAT_009ae8f0);
  FUN_000ea918(param_4);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_8 + -8) + 8))(param_1,param_8);
  }
  FUN_00023358(param_2,param_3);
  return;
}



/* Entry: 0010be84; end: 0010bed3;  */

void FUN_0010be84(void)

{
  FUN_0010bed4();
  return;
}



/* Entry: 0010bed4; end: 0010bfd7;  */

void FUN_0010bed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,undefined1 param_6,long param_7,long param_8,long param_9,
                 undefined8 param_10)

{
  long unaff_x21;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  (**(code **)(param_9 + 0x10))(param_7,param_9);
  uStack_98 = param_10;
  lStack_b0 = param_7;
  lStack_a8 = param_8;
  lStack_a0 = param_9;
  uStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
            (0x10c1ac,auStack_c0,PTR___sytN_0099b8e0 + 8,param_8,param_10);
  FUN_000ea918(param_3);
  (**(code **)(*(long *)(param_8 + -8) + 8))(param_2,param_8);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_7 + -8) + 8))(param_1,param_7);
  }
  return;
}



/* Entry: 0010bfd8; end: 0010c003;  */

void FUN_0010bfd8(void)

{
  FUN_0010c004();
  return;
}



/* Entry: 0010c004; end: 0010c063;  */

void FUN_0010c004(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = in_stack_00000000;
  uStack_70 = in_x5;
  uStack_68 = in_x6;
  uStack_60 = in_x7;
  __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
            (param_1,in_stack_00000008,auStack_80,PTR___sytN_0099b8e0 + 8,in_x6,in_stack_00000000);
  return;
}



/* Entry: 0010c064; end: 0010c077;  */

void FUN_0010c064(void)

{
  FUN_0010c078();
  return;
}



/* Entry: 0010c078; end: 0010c0af;  */

void FUN_0010c078(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0010bc6c(*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x38),
               *(undefined1 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
               *(undefined1 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x10),
               *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 0010c0b0; end: 0010c1bf;  */

void FUN_0010c0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_0010ba38(&uStack_20,param_3,param_4,param_5,param_6,param_7,
               PTR___s10Foundation4DataVN_0099c3c0,param_8,&PTR_DAT_009ae8f0);
  return;
}



/* Entry: 0010c1c0; end: 0010c277;  */

uint FUN_0010c1c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + -8);
  lVar1 = param_3;
  lVar2 = param_4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1,lVar2);
  FUN_0010c27c(param_1,param_2,param_3,param_4);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  return (uint)param_1 & 1;
}



/* Entry: 0010c278; end: 0010c27b;  */

/* WARNING: Removing unreachable block (ram,0x0010c2cc) */
/* WARNING: Removing unreachable block (ram,0x0010c330) */
/* WARNING: Removing unreachable block (ram,0x0010c30c) */
/* WARNING: Removing unreachable block (ram,0x0010c33c) */

undefined8 FUN_0010c278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_0011b788(param_1,param_2,&uStack_50,0,param_3,param_4);
  FUN_0010cc04(&uStack_50,0xae65a0,&UNK_007ce270);
  return 1;
}



/* Entry: 0010c27c; end: 0010c35b;  */

/* WARNING: Removing unreachable block (ram,0x0010c2cc) */
/* WARNING: Removing unreachable block (ram,0x0010c330) */
/* WARNING: Removing unreachable block (ram,0x0010c30c) */
/* WARNING: Removing unreachable block (ram,0x0010c33c) */

undefined8 FUN_0010c27c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_0011b788(param_1,param_2,&uStack_50,0,param_3,param_4);
  FUN_0010cc04(&uStack_50,0xae65a0,&UNK_007ce270);
  return 1;
}



/* Entry: 0010c35c; end: 0010c387;  */

undefined8 FUN_0010c35c(void)

{
  return 0;
}



/* Entry: 0010c388; end: 0010c583;  */

/* WARNING: Removing unreachable block (ram,0x0010c448) */

void FUN_0010c388(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,long param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long unaff_x21;
  ulong *puVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar3 = 0;
  lVar6 = 0;
  lVar8 = param_6;
  FUN_0011e1f0();
  pcVar9 = *(code **)(param_7 + 0x48);
  uVar4 = 0;
  uStack_78 = uVar3;
  lStack_70 = lVar6;
  lStack_68 = lVar8;
  func_0x0011e1e4(0,param_6,param_7);
  (*pcVar9)(&uStack_78,uVar4,&PTR_DAT_009ae640,param_6,param_7);
  lVar8 = lStack_68;
  if (unaff_x21 == 0) {
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 != 0) {
      puVar10 = (ulong *)(param_2 + 0x28);
      do {
        uVar1 = puVar10[-1];
        uVar2 = *puVar10;
        if (*(long *)(lVar8 + 0x10) == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(lVar8);
          uVar5 = uVar1;
          uVar7 = uVar2;
          FUN_000202c0(uVar1);
          if ((uVar7 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar8);
            uStack_98 = 0;
            uStack_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            FUN_000232c8(*(long *)(lVar8 + 0x38) + uVar5 * 0x20,&uStack_a0);
            _swift_bridgeObjectRelease(lVar8);
          }
        }
        FUN_0011b788(uVar1,uVar2,&uStack_a0,param_5 & 1,param_6,param_7);
        FUN_0010cc04(&uStack_a0,0xae65a0,&UNK_007ce270);
        _swift_bridgeObjectRelease(uVar2);
        puVar10 = puVar10 + 2;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    lVar6 = lStack_70;
    _swift_bridgeObjectRelease(lVar8);
  }
  else {
    _swift_bridgeObjectRelease(lStack_70);
    lVar6 = lStack_68;
  }
  _swift_bridgeObjectRelease(lVar6);
  return;
}



/* Entry: 0010c584; end: 0010c6f3;  */

/* WARNING: Removing unreachable block (ram,0x0010c670) */

uint FUN_0010c584(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x12;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  
  lVar5 = *(long *)(param_4 - 8);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(undefined8 *)(lVar5 + 0x40),param_1,param_2,param_2,param_3);
  puVar3 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar3 - extraout_x12;
  uVar1 = param_4;
  FUN_000efb44(param_4,param_1);
  if (((uVar1 & 1) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    (**(code **)(lVar5 + 0x10))(puVar3);
    FUN_0010c6f4(lVar4,puVar3,param_4,param_6);
    FUN_0010c388();
    __sSQ2eeoiySbx_xtFZTj(lVar4);
    (**(code **)(lVar5 + 8))();
    uVar2 = (uint)lVar4 ^ 1;
    (**(code **)(lVar5 + 0x20))();
  }
  return uVar2 & 1;
}



/* Entry: 0010c6f4; end: 0010caa3;  */

void FUN_0010c6f4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  
  lVar3 = 0;
  uStack_f8 = param_1;
  __sSqMa();
  lStack_108 = *(long *)(lVar3 + -8);
  lStack_100 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_108 + 0x40));
  lVar3 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar3 = lVar3 - extraout_x12;
  lVar8 = *(long *)(param_3 + -8);
  lStack_118 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar3 = lVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar10 = lVar3 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar10 - extraout_x12_01;
  (**(code **)(param_4 + 0x10))(lVar9,param_3,param_4);
  pcVar11 = *(code **)(lVar8 + 0x10);
  (*pcVar11)(lVar10,lVar9,param_3);
  uVar4 = 0xaef4a0;
  func_0x000115a8(0xaef4a0,&UNK_007d9aa8);
  puVar5 = &uStack_c0;
  _swift_dynamicCast(puVar5,lVar10,param_3,uVar4,0xe);
  if (((ulong)puVar5 & 1) == 0) {
    lStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    FUN_0010cc04(&uStack_c0,0xaef4a8,&UNK_007d9ab0);
  }
  else {
    FUN_0010cc44(&uStack_c0,auStack_90);
    (*pcVar11)(lVar3,param_2,param_3);
    puVar5 = &uStack_f0;
    _swift_dynamicCast(puVar5,lVar3,param_3,uVar4,0xe);
    if (((ulong)puVar5 & 1) != 0) {
      uStack_120 = param_2;
      FUN_0010cc44(&uStack_f0,&uStack_c0);
      lVar3 = lStack_a0;
      uVar6 = uStack_a8;
      FUN_0001393c(&uStack_c0,uStack_a8);
      (**(code **)(lVar3 + 0x10))(uVar6,lVar3);
      FUN_000115f8(auStack_90,uStack_78);
      (**(code **)(lStack_70 + 0x18))(uVar6,uStack_78,lStack_70);
      FUN_0010cc5c(auStack_90,&uStack_f0);
      lVar3 = lStack_118;
      lVar10 = lStack_118;
      _swift_dynamicCast(lStack_118,&uStack_f0,uVar4,param_3,6);
      (**(code **)(lVar8 + 0x38))(lVar3,(uint)lVar10 ^ 1,1,param_3);
      lVar2 = lStack_100;
      lVar1 = lStack_108;
      lVar10 = lStack_110;
      (**(code **)(lStack_108 + 0x20))(lStack_110,lVar3,lStack_100);
      pcVar7 = *(code **)(lVar8 + 0x30);
      lVar3 = lVar10;
      (*pcVar7)(lVar10,1,param_3);
      if ((int)lVar3 == 1) {
        (*pcVar11)(uStack_f8,lVar9,param_3);
        lVar3 = lVar10;
        (*pcVar7)(lVar10,1,param_3);
        if ((int)lVar3 != 1) {
          (**(code **)(lVar1 + 8))(lVar10,lVar2);
        }
      }
      else {
        (**(code **)(lVar8 + 0x20))(uStack_f8,lVar10,param_3);
      }
      FUN_00011670(&uStack_c0);
      FUN_00011670(auStack_90);
      param_2 = uStack_120;
      goto LAB_0010ca40;
    }
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    FUN_0010cc04(&uStack_f0,0xaef4a8,&UNK_007d9ab0);
    FUN_00011670(auStack_90);
  }
  (*pcVar11)(uStack_f8,lVar9,param_3);
LAB_0010ca40:
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  (**(code **)(param_4 + 0x30))();
  pcVar11 = *(code **)(lVar8 + 8);
  (*pcVar11)(param_2,param_3);
  (*pcVar11)(lVar9,param_3);
  return;
}



/* Entry: 0010caa4; end: 0010cc03;  */

int FUN_0010caa4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0010cb20;
        goto LAB_0010cb04;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0010cb04:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_0010cb20:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0010cc04; end: 0010cc43;  */

undefined8 FUN_0010cc04(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 0010cc44; end: 0010cc5b;  */

undefined8 * FUN_0010cc44(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0010cc5c; end: 0010cc9f;  */

long FUN_0010cc5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 0010cca0; end: 0010cdeb;  */

void FUN_0010cca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,long param_6,long param_7,long param_8,long param_9)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  
  lVar3 = *(long *)(param_6 + -8);
  lVar1 = param_6;
  lVar2 = param_8;
  uStack_c8 = param_1;
  uStack_c0 = param_4;
  uStack_b4 = param_5;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))(puVar4,lVar1,lVar2);
  uStack_80 = uStack_c0;
  uStack_78 = (undefined1)uStack_b4;
  lStack_a0 = param_6;
  lStack_98 = param_7;
  lStack_90 = param_8;
  lStack_88 = param_9;
  uStack_70 = param_3;
  puStack_68 = puVar4;
  (**(code **)(param_9 + 0x20))(FUN_0010da6c,auStack_b0,PTR___sytN_0099b8e0 + 8,param_7,param_9);
  (**(code **)(*(long *)(param_7 + -8) + 8))(param_2,param_7);
  if (unaff_x21 == 0) {
    (**(code **)(lVar3 + 0x10))(uStack_c8,puVar4,param_6);
  }
  FUN_0010daa0(param_3,0xaed1d8,&UNK_007d78b0);
  (**(code **)(lVar3 + 8))(puVar4,param_6);
  return;
}



/* Entry: 0010cdec; end: 0010d057;  */

void FUN_0010cdec(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  ulong uStack_98;
  undefined8 *puStack_90;
  long lStack_70;
  ulong uStack_68;
  
  lVar5 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  puVar7 = &stack0xffffffffffffff30 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar4 = (ulong)param_3 >> 0x38 & 0xf;
  }
  if (uVar4 == 0) {
    _swift_bridgeObjectRelease();
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,param_3,0,0);
    param_3[1] = 0xd;
    *param_3 = 0;
    _swift_willThrow();
  }
  else {
    uStack_98 = param_2;
    puStack_90 = param_3;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
    FUN_00033a8c();
    uVar4 = 0;
    lVar3 = lVar8;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (lVar8,0,PTR___sSSN_0099b040,lVar2);
    (**(code **)(lVar6 + 8))(lVar8,lVar1);
    _swift_bridgeObjectRelease();
    if (uVar4 >> 0x3c < 0xf) {
      lStack_70 = lVar3;
      uStack_68 = uVar4;
      func_0x000c6fb4(param_4,&uStack_98);
      func_0x00023304(lVar3,uVar4);
      FUN_0010cca0(puVar7,&lStack_70,&uStack_98,param_5,param_6 & 1,param_7,
                   PTR___s10Foundation4DataVN_0099c3c0,param_8,&PTR_DAT_009ae8f0);
      FUN_0010daa0(param_4,0xaed1d8,&UNK_007d78b0);
      FUN_00023344(lVar3,uVar4);
      if (unaff_x21 != 0) {
        return;
      }
      (**(code **)(lVar5 + 0x20))(param_1,puVar7,param_7);
      return;
    }
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,param_3,0,0);
    param_3[1] = 0xd;
    *param_3 = 0;
    _swift_willThrow();
  }
  FUN_0010daa0(param_4,0xaed1d8,&UNK_007d78b0);
  return;
}



/* Entry: 0010d058; end: 0010d1ff;  */

undefined1  [16] FUN_0010d058(uint param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  ulong unaff_x21;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  lVar3 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar3);
  uVar1 = 0xaeda28;
  func_0x000115a8(0xaeda28,&UNK_007d78d0);
  puVar2 = &uStack_a0;
  _swift_dynamicCast(puVar2,lVar3,param_2,uVar1,6);
  if ((int)puVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_0010daa0(&uStack_a0,0xaeda30,&UNK_007d78d8);
    uVar1 = 0xae8230;
    func_0x000115a8(0xae8230,&UNK_007d78c0);
    FUN_0010d200(alStack_78,param_1 & 0x1010101,param_2,uVar1,param_3,&PTR_DAT_009ae8c0);
    if (unaff_x21 == 0) {
      unaff_x20 = *(undefined8 *)(alStack_78[0] + 0x10);
      unaff_x21 = alStack_78[0] + 0x20;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,unaff_x20);
      _swift_bridgeObjectRelease(alStack_78[0]);
    }
  }
  else {
    FUN_0010db70(&uStack_a0,alStack_78);
    FUN_0001393c(alStack_78,uStack_60);
    unaff_x21 = (ulong)(param_1 & 0x1010101);
    unaff_x20 = uStack_60;
    (**(code **)(lStack_58 + 8))(unaff_x21,uStack_60,lStack_58);
    FUN_00011670(alStack_78);
  }
  auVar4._8_8_ = unaff_x20;
  auVar4._0_8_ = unaff_x21;
  return auVar4;
}



/* Entry: 0010d200; end: 0010d4e7;  */

void FUN_0010d200(undefined8 param_1,uint param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  code *pcVar7;
  long lVar8;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_ec;
  ulong auStack_e0 [6];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_74;
  
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  lVar8 = (long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar8);
  uVar1 = 0xaeda28;
  func_0x000115a8(0xaeda28,&UNK_007d78d0);
  puVar2 = auStack_e0;
  _swift_dynamicCast(puVar2,lVar8,param_3,uVar1,6);
  if ((int)puVar2 == 0) {
    auStack_e0[4] = 0;
    auStack_e0[1] = 0;
    auStack_e0[0] = 0;
    auStack_e0[3] = 0;
    auStack_e0[2] = 0;
    FUN_0010daa0(auStack_e0,0xaeda30,&UNK_007d78d8);
    FUN_001058fc(auStack_e0 + 5,param_3,param_5,param_2 & 0x1010101);
    if (unaff_x21 == 0) {
      uStack_108 = uStack_90;
      lStack_110 = uStack_98;
      uStack_100 = uStack_88;
      uStack_ec = uStack_74;
      uStack_118 = uStack_a0;
      uStack_120 = uStack_a8;
      uStack_128 = uStack_b0;
      uStack_130 = auStack_e0[5];
      FUN_00105648();
      (**(code **)(param_5 + 0x48))(&uStack_130,&UNK_009ad8b8,&PTR_DAT_009ad8d8,param_3,param_5);
      uVar3 = uStack_130;
      uVar6 = uStack_130;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = uVar3;
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
        FUN_000540b4(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
      }
      uVar3 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_000540b4(uVar6,uVar3 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
      *(undefined1 *)(uVar6 + uVar3 + 0x20) = 0x7d;
      uStack_128 = CONCAT62(uStack_128._2_6_,0x2c);
      pcVar7 = *(code **)(param_6 + 0x10);
      uStack_130 = uVar6;
      auStack_e0[0] = uVar6;
      _swift_bridgeObjectRetain(uVar6);
      uVar1 = 0xae8230;
      func_0x000115a8(0xae8230,&UNK_007d78c0);
      uVar4 = uVar1;
      func_0x0010dae0();
      (*pcVar7)(param_1,auStack_e0,uVar1,uVar4,param_4,param_6);
      func_0x000c7208(&uStack_130);
    }
  }
  else {
    FUN_0010db70(auStack_e0,&uStack_130);
    FUN_0001393c(&uStack_130,uStack_118);
    uVar3 = (ulong)(param_2 & 0x1010101);
    (**(code **)(lStack_110 + 8))(uVar3,uStack_118,lStack_110);
    if (unaff_x21 == 0) {
      pcVar7 = *(code **)(param_6 + 0x10);
      auStack_e0[0] = uVar3;
      func_0x0010db30();
      (*pcVar7)(param_1,auStack_e0,PTR___sSS8UTF8ViewVN_0099b018,uVar3,param_4,param_6);
    }
    FUN_00011670(&uStack_130);
  }
  return;
}



/* Entry: 0010d4e8; end: 0010d58b;  */

void FUN_0010d4e8(undefined8 param_1)

{
  long in_x4;
  long extraout_x8;
  long unaff_x21;
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar2 = *(long *)(in_x4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  lVar1 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0010cdec(lVar1);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,lVar1,in_x4);
  }
  return;
}



/* Entry: 0010d58c; end: 0010d6bf;  */

void FUN_0010d58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar3 = param_5;
  lVar1 = param_6;
  uStack_b0 = param_1;
  uStack_a8 = param_7;
  uStack_a0 = param_8;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  lVar4 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar2 + 0x10))(lVar4,param_2,lVar1);
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_0010cca0(lVar3,lVar4,&uStack_90,param_3,param_4,param_5,param_6,uStack_a8,uStack_a0);
  (**(code **)(lVar2 + 8))(param_2,param_6);
  if (unaff_x21 == 0) {
    (**(code **)(lVar5 + 0x20))(uStack_b0,lVar3,param_5);
  }
  return;
}



/* Entry: 0010d6c0; end: 0010da6b;  */

void FUN_0010d6c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,byte param_4,
                 undefined1 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x21;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *apuStack_180 [2];
  undefined1 auStack_168 [24];
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [24];
  long lStack_128;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined *apuStack_e8 [3];
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((param_1 == (undefined8 *)0x0) || (param_2 == param_1)) {
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,param_1,0,0);
    param_1[1] = 0xd;
    *param_1 = 0;
    _swift_willThrow();
    return;
  }
  lVar1 = 0;
  apuStack_180[1] = param_6;
  func_0x000dfc88();
  _swift_allocObject();
  uVar2 = 0x80;
  _swift_slowAlloc(0x80,0xffffffffffffffff);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = 0x80;
  uStack_108 = 0;
  bStack_f0 = param_4 & 1;
  puStack_118 = param_1;
  puStack_110 = param_2;
  lStack_100 = lVar1;
  uStack_f8 = param_3;
  uStack_c0 = param_3;
  func_0x000c6fb4(param_5,auStack_140);
  if (lStack_128 == 0) {
    ppuStack_c8 = &PTR_DAT_009ae850;
    puStack_d0 = &UNK_009ae878;
    apuStack_e8[0] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  }
  else {
    param_5 = auStack_140;
    FUN_0010db70(param_5,apuStack_e8);
  }
  uStack_a0 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_b0 = param_9;
  uStack_a8 = 0;
  puStack_b8 = param_7;
  func_0x00106c88();
  if (((ulong)param_5 & 1) == 0) {
    puVar4 = apuStack_180[1];
    FUN_000fa79c(apuStack_180[1],param_7,param_9);
    if (unaff_x21 != 0) goto LAB_0010d980;
LAB_0010d8b4:
    uVar6 = (long)puStack_110 - (long)puStack_118;
    if (puStack_118 == (undefined8 *)0x0) goto LAB_0010d8dc;
    while (uVar6 != uStack_108) {
      while( true ) {
        if (0x20 < *(byte *)((long)puStack_118 + uStack_108) ||
            (1L << ((ulong)*(byte *)((long)puStack_118 + uStack_108) & 0x3f) & 0x100002600U) == 0) {
          if (puStack_118 == (undefined8 *)0x0) {
            if (uStack_108 == 0) goto LAB_0010d980;
          }
          else if (uVar6 == uStack_108) goto LAB_0010d980;
          FUN_000c7004();
          _swift_allocError(&UNK_009ad5a0,puVar4,0,0);
          uVar2 = 0x11;
          goto LAB_0010d974;
        }
        if ((puStack_118 == (undefined8 *)0x0) || (uVar6 <= uStack_108)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10da6c);
          (*pcVar7)();
        }
        uStack_108 = uStack_108 + 1;
        if (puStack_118 != (undefined8 *)0x0) break;
LAB_0010d8dc:
        if (uStack_108 == 0) goto LAB_0010d980;
      }
    }
  }
  else {
    puVar3 = param_7;
    _swift_conformsToProtocol(param_7,&DAT_00843adc);
    puVar4 = puVar3;
    if ((puVar3 != (undefined8 *)0x0) && (param_7 != (undefined8 *)0x0)) {
      pcVar7 = (code *)puVar3[3];
      lVar1 = 0;
      __sSqMa(0,param_7);
      lVar9 = *(long *)(lVar1 + -8);
      (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar4 = (undefined8 *)((long)apuStack_180 - extraout_x8);
      (*pcVar7)(puVar4,param_7,puVar3);
      if (unaff_x21 != 0) {
        func_0x000fd320(&puStack_118);
        return;
      }
      lVar8 = param_7[-1];
      puVar5 = puVar4;
      (**(code **)(lVar8 + 0x30))(puVar4,1,param_7);
      if ((int)puVar5 != 1) {
        puStack_150 = param_7;
        puStack_148 = puVar3;
        func_0x00016cc8(auStack_168);
        (**(code **)(lVar8 + 0x20))();
        FUN_0010db70(auStack_168,auStack_140);
        FUN_0010db70(auStack_140,auStack_168);
        puVar4 = apuStack_180[1];
        (**(code **)(lVar8 + 8))(apuStack_180[1],param_7);
        uVar2 = 0xaeda28;
        func_0x000115a8(0xaeda28,&UNK_007d78d0);
        _swift_dynamicCast(puVar4,auStack_168,uVar2,param_7,7);
        goto LAB_0010d8b4;
      }
      (**(code **)(lVar9 + 8))(puVar4,lVar1);
    }
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar4,0,0);
    uVar2 = 10;
LAB_0010d974:
    puVar4[1] = uVar2;
    *puVar4 = 0;
    _swift_willThrow();
  }
LAB_0010d980:
  func_0x000fd320(&puStack_118);
  return;
}



/* Entry: 0010da6c; end: 0010da9f;  */

void FUN_0010da6c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0010d6c0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
               *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
               *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
               *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 0010daa0; end: 0010dadf;  */

undefined8 FUN_0010daa0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 0010dae0; end: 0010db6f;  */

void FUN_0010dae0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000aefdf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae8230;
  FUN_00016c74(0xae8230,&UNK_007d78c0);
  puVar2 = PTR___sSayxGSTsMc_0099b1f0;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_0099b1f0,uVar1);
  puRam0000000000aefdf8 = puVar2;
  return;
}



/* Entry: 0010db70; end: 0010db87;  */

undefined8 * FUN_0010db70(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0010db88; end: 0010dc37;  */

void FUN_0010db88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long extraout_x8;
  long unaff_x21;
  long lVar1;
  long lVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  lVar1 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_0010cca0(lVar1,&uStack_40,&uStack_70);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 0x20))(param_1,lVar1,param_6);
  }
  return;
}



/* Entry: 0010dc38; end: 0010dd4f;  */

void FUN_0010dc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_a8 = *(long *)(param_7 + -8);
  uVar1 = param_2;
  uVar2 = param_3;
  uVar3 = param_4;
  uStack_a0 = param_1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_a8 + 0x40));
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  func_0x000c6fb4(uVar3,auStack_98);
  func_0x00023304(param_2,param_3);
  FUN_0010cca0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),&uStack_70,auStack_98,param_5
               ,param_6,param_7,PTR___s10Foundation4DataVN_0099c3c0,param_8,&PTR_DAT_009ae8f0);
  FUN_000ea918(param_4);
  FUN_00023358(param_2,param_3);
  if (unaff_x21 == 0) {
    (**(code **)(lStack_a8 + 0x20))
              (uStack_a0,auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7);
  }
  return;
}



/* Entry: 0010dd50; end: 0010dd93;  */

void FUN_0010dd50(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_20 [16];
  
  FUN_0010d200(auStack_20,param_1 & 0x1010101,param_2,PTR___s10Foundation4DataVN_0099c3c0,param_3,
               &PTR_DAT_009ae8f0);
  return;
}



/* Entry: 0010dd94; end: 0010de5b;  */

undefined1  [16]
FUN_0010dd94(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined1 auVar2 [16];
  long lStack_48;
  
  uVar1 = 0xae8230;
  func_0x000115a8(0xae8230,&UNK_007d78c0);
  FUN_0010de5c(&lStack_48,param_1,param_2 & 0x1010101,param_3,param_4,uVar1,param_5,param_6,
               &PTR_DAT_009ae8c0);
  if (unaff_x21 == 0) {
    param_6 = *(undefined8 *)(lStack_48 + 0x10);
    unaff_x21 = lStack_48 + 0x20;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x21,param_6);
    _swift_bridgeObjectRelease(lStack_48);
  }
  auVar2._8_8_ = param_6;
  auVar2._0_8_ = unaff_x21;
  return auVar2;
}



/* Entry: 0010de5c; end: 0010e3ef;  */

/* WARNING: Removing unreachable block (ram,0x0010e318) */

void FUN_0010de5c(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5
                 ,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar13;
  code *pcVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auStack_180 [8];
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_cc;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7c;
  
  pcStack_138 = (code *)CONCAT44(pcStack_138._4_4_,param_3);
  lVar12 = *(long *)(param_4 + -8);
  lVar5 = param_4;
  uStack_168 = param_1;
  uStack_160 = param_6;
  lStack_158 = param_9;
  uStack_140 = param_2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  puVar17 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSqMa(0,lVar5);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar17 - extraout_x8_00;
  lStack_148 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_148 + 0x40));
  lVar16 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pcVar14 = *(code **)(param_8 + 8);
  lVar5 = 0;
  lStack_150 = param_5;
  _swift_getAssociatedTypeWitness
            (0,pcVar14,param_5,PTR___sSTTL_0099b0d0,PTR___s8IteratorSTTl_0099ae68);
  lVar4 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar16 - extraout_x8_02;
  FUN_001058fc(&uStack_c0,param_4,param_7,(uint)pcStack_138 & 0x1010101);
  if (unaff_x21 == 0) {
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uStack_e0 = uStack_90;
    uStack_cc = uStack_7c;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uVar6 = uStack_c0;
    lStack_178 = param_7;
    lStack_170 = lVar4;
    pcStack_138 = pcVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = uStack_c0;
    if ((uVar6 & 1) == 0) {
      uVar11 = 0;
      FUN_000540b4(0,*(long *)(uStack_c0 + 0x10) + 1,1,uStack_c0);
    }
    lVar3 = lStack_150;
    lVar4 = lStack_178;
    uVar6 = *(ulong *)(uVar11 + 0x10);
    uVar10 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_000540b4(uVar10,uVar6 + 1,1,uVar11);
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uVar10 + uVar6 + 0x20) = 0x5b;
    uStack_108 = CONCAT62(uStack_108._2_6_,0x100);
    uStack_110 = uVar10;
    (**(code **)(lStack_148 + 0x10))(lVar16,uStack_140,lVar3);
    pcVar14 = pcStack_138;
    __sST12makeIterator0B0QzyFTj(lVar15,lVar3,pcStack_138);
    _swift_getAssociatedConformanceWitness
              (pcVar14,lVar3,lVar5,PTR___sSTTL_0099b0d0,PTR___sST8IteratorST_StTn_0099b0c8);
    __sSt4next7ElementQzSgyFTj(lVar18,lVar5);
    pcVar13 = *(code **)(lVar12 + 0x30);
    lVar16 = lVar18;
    (*pcVar13)(lVar18,1,param_4);
    if ((int)lVar16 != 1) {
      pcStack_138 = *(code **)(lVar12 + 0x20);
      do {
        (*pcStack_138)(puVar17,lVar18,param_4);
        func_0x001057dc(puVar17,&uStack_110,param_4,lVar4);
        (**(code **)(lVar4 + 0x48))(&uStack_110,&UNK_009ad8b8,&PTR_DAT_009ad8d8,param_4,lVar4);
        uVar6 = uStack_110;
        uVar11 = uStack_110;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar9 = uVar6;
        if ((uVar11 & 1) == 0) {
          uVar9 = 0;
          FUN_000540b4(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        }
        uVar6 = *(ulong *)(uVar9 + 0x10);
        uVar10 = uVar9;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar6) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_000540b4(uVar10,uVar6 + 1,1,uVar9);
        }
        *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
        *(undefined1 *)(uVar10 + uVar6 + 0x20) = 0x7d;
        (**(code **)(lVar12 + 8))(puVar17,param_4);
        uStack_108 = CONCAT62(uStack_108._2_6_,0x2c);
        uStack_110 = uVar10;
        __sSt4next7ElementQzSgyFTj(lVar18,lVar5,pcVar14);
        lVar16 = lVar18;
        (*pcVar13)(lVar18,1,param_4);
      } while ((int)lVar16 != 1);
    }
    (**(code **)(lStack_170 + 8))(lVar15,lVar5);
    uVar6 = *(ulong *)(uVar10 + 0x10);
    uStack_118 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
      uStack_118 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_000540b4(uStack_118,uVar6 + 1,1,uVar10);
    }
    lVar5 = lStack_158;
    uVar2 = uStack_160;
    uVar1 = uStack_168;
    *(ulong *)(uStack_118 + 0x10) = uVar6 + 1;
    *(undefined1 *)(uStack_118 + uVar6 + 0x20) = 0x5d;
    uStack_108 = CONCAT62(uStack_108._2_6_,0x2c);
    pcVar14 = *(code **)(lStack_158 + 0x10);
    uStack_110 = uStack_118;
    _swift_bridgeObjectRetain(uStack_118);
    uVar7 = 0xae8230;
    func_0x000115a8(0xae8230,&UNK_007d78c0);
    uVar8 = uVar7;
    FUN_0010dae0();
    (*pcVar14)(uVar1,&uStack_118,uVar7,uVar8,uVar2,lVar5);
    func_0x000c7208(&uStack_110);
  }
  return;
}



/* Entry: 0010e3f0; end: 0010e463;  */

undefined8
FUN_0010e3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *apuStack_48 [3];
  undefined *puStack_30;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_009ae850;
  puStack_30 = &UNK_009ae878;
  apuStack_48[0] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  FUN_0010e464(param_1,param_2,apuStack_48,param_3,param_4,param_5,param_6);
  FUN_00011670(apuStack_48);
  return param_1;
}



/* Entry: 0010e464; end: 0010e5eb;  */

undefined8 **
FUN_0010e464(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,uint param_5,
            undefined8 **param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  undefined8 *apuStack_80 [3];
  ulong uStack_68;
  
  puVar1 = (undefined8 *)0x0;
  apuStack_80[1] = (undefined8 *)param_7;
  __sSS10FoundationE8EncodingVMa();
  lVar7 = puVar1[-1];
  puVar2 = puVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = (undefined8 *)((long)apuStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uVar6 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar6 = param_2 >> 0x38 & 0xf;
  }
  if (uVar6 != 0) {
    apuStack_80[2] = (undefined8 *)param_1;
    uStack_68 = param_2;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar4);
    FUN_00033a8c();
    uVar6 = 0;
    puVar3 = puVar4;
    __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
              (puVar4,0,PTR___sSSN_0099b040,puVar2);
    (**(code **)(lVar7 + 8))(puVar4,puVar1);
    puVar2 = puVar4;
    if (uVar6 >> 0x3c < 0xf) {
      ppuVar5 = apuStack_80 + 2;
      apuStack_80[2] = puVar3;
      uStack_68 = uVar6;
      FUN_0010e5ec(ppuVar5,param_3,param_4,param_5 & 1,param_6,PTR___s10Foundation4DataVN_0099c3c0,
                   apuStack_80[1],&PTR_DAT_009ae8f0);
      FUN_00023344(puVar3,uVar6);
      return ppuVar5;
    }
  }
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,puVar2,0,0);
  puVar2[1] = 0xd;
  *puVar2 = 0;
  _swift_willThrow();
  return param_6;
}



/* Entry: 0010e5ec; end: 0010e677;  */

undefined8
FUN_0010e5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  pcVar2 = *(code **)(param_8 + 0x20);
  uVar1 = 0;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  lStack_68 = param_8;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_2;
  __sSaMa(0,param_5);
  (*pcVar2)(&uStack_38,FUN_0010e944,auStack_90,uVar1,param_6,param_8);
  return uStack_38;
}



/* Entry: 0010e678; end: 0010e6f3;  */

undefined8
FUN_0010e678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *apuStack_48 [3];
  undefined *puStack_30;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_009ae850;
  puStack_30 = &UNK_009ae878;
  apuStack_48[0] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  FUN_0010e5ec(param_1,apuStack_48,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_00011670(apuStack_48);
  return param_1;
}



/* Entry: 0010e6f4; end: 0010e943;  */

void FUN_0010e6f4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,byte param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x21;
  undefined1 auStack_168 [24];
  long lStack_150;
  undefined1 auStack_140 [40];
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined *apuStack_e8 [3];
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  uVar3 = param_7;
  __sS2ayxGycfC();
  uStack_58 = uVar3;
  if ((param_2 != 0) && (param_3 != param_2)) {
    FUN_0010e978(param_6,auStack_140);
    lVar2 = 0;
    func_0x000dfc88();
    _swift_allocObject();
    uVar3 = 0x80;
    _swift_slowAlloc(0x80,0xffffffffffffffff);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    *(undefined8 *)(lVar2 + 0x18) = 0x80;
    uStack_108 = 0;
    bStack_f0 = param_5 & 1;
    lStack_118 = param_2;
    lStack_110 = param_3;
    lStack_100 = lVar2;
    uStack_f8 = param_4;
    uStack_c0 = param_4;
    func_0x000c6fb4(auStack_140,auStack_168);
    if (lStack_150 == 0) {
      ppuStack_c8 = &PTR_DAT_009ae850;
      puStack_d0 = &UNK_009ae878;
      apuStack_e8[0] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
      FUN_000ea918(auStack_140);
      if (lStack_150 != 0) {
        FUN_000ea918(auStack_168);
      }
    }
    else {
      FUN_000ea918(auStack_140);
      FUN_0010e9bc(auStack_168,apuStack_e8);
    }
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    puVar4 = &uStack_58;
    uStack_b8 = param_7;
    uStack_b0 = param_9;
    FUN_000fadb0(puVar4,param_7,param_9);
    if (unaff_x21 != 0) {
LAB_0010e850:
      _swift_bridgeObjectRelease(uStack_58);
      func_0x000fd320(&lStack_118);
      return;
    }
    uVar5 = lStack_110 - lStack_118;
    if (lStack_118 == 0) goto LAB_0010e88c;
    while (uVar5 != uStack_108) {
      while( true ) {
        if (0x20 < *(byte *)(lStack_118 + uStack_108) ||
            (1L << ((ulong)*(byte *)(lStack_118 + uStack_108) & 0x3f) & 0x100002600U) == 0) {
          if (lStack_118 == 0) {
            if (uStack_108 == 0) goto LAB_0010e8d0;
          }
          else if (uVar5 == uStack_108) goto LAB_0010e8d0;
          FUN_000c7004();
          _swift_allocError(&UNK_009ad5a0,puVar4,0,0);
          puVar4[1] = 0x11;
          *puVar4 = 0;
          _swift_willThrow();
          goto LAB_0010e850;
        }
        if ((lStack_118 == 0) || (uVar5 <= uStack_108)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10e944);
          (*pcVar1)();
        }
        uStack_108 = uStack_108 + 1;
        if (lStack_118 != 0) break;
LAB_0010e88c:
        if (uStack_108 == 0) goto LAB_0010e8d0;
      }
    }
LAB_0010e8d0:
    func_0x000fd320(&lStack_118);
  }
  *param_1 = uStack_58;
  return;
}



/* Entry: 0010e944; end: 0010e977;  */

void FUN_0010e944(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_0010e6f4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
               *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
               *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
               *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 0010e978; end: 0010e9bb;  */

long FUN_0010e978(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 0010e9bc; end: 0010e9d3;  */

undefined8 * FUN_0010e9bc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 0010e9d4; end: 0010ea53;  */

undefined8 * FUN_0010e9d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *apuStack_58 [3];
  undefined *puStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuStack_38 = &PTR_DAT_009ae850;
  puStack_40 = &UNK_009ae878;
  apuStack_58[0] = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_0010e5ec(puVar1,apuStack_58);
  FUN_00011670(apuStack_58);
  return puVar1;
}



/* Entry: 0010ea54; end: 0010eae3;  */

void FUN_0010ea54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_0010e5ec(&uStack_20,param_3,param_4,param_5,param_6,PTR___s10Foundation4DataVN_0099c3c0,
               param_7,&PTR_DAT_009ae8f0);
  return;
}



/* Entry: 0010eae4; end: 0010eaf3;  */

/* WARNING: Removing unreachable block (ram,0x0010ec6c) */

undefined1  [16] FUN_0010eae4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [11];
  
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar5 = *(code **)(extraout_x12 + 0x10);
  (*pcVar5)((long)puVar4 - extraout_x13);
  FUN_001351d4(alStack_a8,(long)puVar4 - extraout_x13,1,param_1,param_2);
  (*pcVar5)(puVar4);
  puVar1 = &uStack_c0;
  _swift_dynamicCast(puVar1,puVar4,param_1,&UNK_009af680,6);
  if ((int)puVar1 == 0) {
    (**(code **)(param_2 + 0x48))(alStack_a8,&UNK_009af138,&PTR_DAT_009af160,param_1,param_2);
  }
  else {
    FUN_000c3f78(alStack_a8);
    FUN_00023358(uStack_c0,uStack_b8);
    _swift_release(uStack_b0);
  }
  uVar3 = *(undefined8 *)(alStack_a8[0] + 0x10);
  _swift_bridgeObjectRetain(alStack_a8[0]);
  lVar2 = alStack_a8[0] + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,uVar3);
  _swift_bridgeObjectRelease(alStack_a8[0]);
  FUN_0010f3e8(alStack_a8);
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 0010eaf4; end: 0010ec8b;  */

/* WARNING: Removing unreachable block (ram,0x0010ec6c) */

undefined1  [16] FUN_0010eaf4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x13;
  undefined8 uVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [11];
  
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  pcVar5 = *(code **)(extraout_x12 + 0x10);
  (*pcVar5)((long)puVar4 - extraout_x13);
  FUN_001351d4(alStack_a8,(long)puVar4 - extraout_x13,param_1,param_2,param_3);
  (*pcVar5)(puVar4);
  puVar1 = &uStack_c0;
  _swift_dynamicCast(puVar1,puVar4,param_2,&UNK_009af680,6);
  if ((int)puVar1 == 0) {
    (**(code **)(param_3 + 0x48))(alStack_a8,&UNK_009af138,&PTR_DAT_009af160,param_2,param_3);
  }
  else {
    FUN_000c3f78(alStack_a8);
    FUN_00023358(uStack_c0,uStack_b8);
    _swift_release(uStack_b0);
  }
  uVar3 = *(undefined8 *)(alStack_a8[0] + 0x10);
  _swift_bridgeObjectRetain(alStack_a8[0]);
  lVar2 = alStack_a8[0] + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,uVar3);
  _swift_bridgeObjectRelease(alStack_a8[0]);
  FUN_0010f3e8(alStack_a8);
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 0010ec8c; end: 0010ed6f;  */

void FUN_0010ec8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar2 = *(long *)(param_5 + -8);
  uVar1 = param_4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000c6fb4(uVar1,auStack_88);
  FUN_0010ed70(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3,100,0,
               auStack_88,param_5,param_6);
  FUN_000ea918(param_4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar2 + 0x20))
              (param_1,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}


