/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048411ac; end: 1048417df;  */

undefined8 FUN_1048411ac(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((param_1 == 0x7265766f63736964 && param_2 == -0x1800000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x7265766f63736964,0xe800000000000000,param_1,param_2,0), (uVar2 & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (((param_1 == 0x6f74735f6576696c) && (param_2 == -0x13ffffff8c9a968e)) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x6f74735f6576696c,0xec00000073656972,param_1,param_2,0), (uVar2 & 1) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar2 = 0x6f74735f72657375;
      if (((param_1 == 0x6f74735f72657375) && (param_2 == -0x15ffffffffff868e)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x6f74735f72657375,0xea00000000007972,param_1,param_2,0), (uVar2 & 1) != 0)) {
        uVar1 = 2;
      }
      else {
        uVar2 = 0;
        if (((param_1 == 0x636172745f6e6f6e) && (param_2 == -0x16ffffffffffff95)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x636172745f6e6f6e,0xe90000000000006b,param_1,param_2,0), (uVar2 & 1) != 0))
        {
          uVar1 = 3;
        }
        else {
          uVar2 = 0;
          if (((param_1 == 0x6465746f6d6f7270) && (param_2 == -0x11ff868d908b8ca1)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0x6465746f6d6f7270,0xee0079726f74735f,param_1,param_2,0), (uVar2 & 1) != 0)
             ) {
            uVar1 = 4;
          }
          else {
            if ((param_1 != -0x2fffffffffffffec) || (param_2 != -0x7ffffffef0dee930)) {
              uVar2 = 0;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000014,0x800000010f2116d0,param_1,param_2,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_1 == -0x2fffffffffffffea) && (param_2 == -0x7ffffffef0ff8510)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0xd000000000000016,0x800000010f007af0,param_1,param_2,0),
                   (uVar2 & 1) != 0)) {
                  return 6;
                }
                uVar2 = 0;
                if (((param_1 == 0x656873696c627570) && (param_2 == -0x16ffffffffffff8e)) ||
                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (0x656873696c627570,0xe900000000000072,param_1,param_2,0),
                   (uVar2 & 1) != 0)) {
                  return 7;
                }
                if ((param_1 != 0x776f6873) || (param_2 != -0x1c00000000000000)) {
                  uVar2 = 0x776f6873;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0x776f6873,0xe400000000000000,param_1,param_2,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0x62616b636f6c6e75;
                    if (((param_1 == 0x62616b636f6c6e75) && (param_2 == -0x15ffffffffff9a94)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x62616b636f6c6e75,0xea0000000000656c,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      return 9;
                    }
                    uVar2 = 0x63616e676f63;
                    if (((param_1 == 0x63616e676f63) && (param_2 == -0x1a00000000000000)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0x63616e676f63,0xe600000000000000,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      return 0xb;
                    }
                    uVar2 = 0x6f7774656e5f6461;
                    if (((param_1 == 0x6f7774656e5f6461) && (param_2 == -0x11ff949b8ca0948e)) ||
                       (uVar3 = uVar2,
                       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                 (0x6f7774656e5f6461,0xee006b64735f6b72,param_1,param_2,0),
                       (uVar3 & 1) != 0)) {
                      return 0xc;
                    }
                    if ((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef0dee950)) {
                      uVar3 = 0;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000010,0x800000010f2116b0,param_1,param_2,0);
                      if ((uVar3 & 1) == 0) {
                        uVar3 = 0x6e695f6572616873;
                        if (((param_1 == 0x6e695f6572616873) && (param_2 == -0x12ffff8b9e979ca1)) ||
                           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                      (0x6e695f6572616873,0xed0000746168635f,param_1,param_2,0),
                           (uVar3 & 1) != 0)) {
                          return 0xf;
                        }
                        if ((param_1 != 0x70616d) || (param_2 != -0x1d00000000000000)) {
                          uVar3 = 0x70616d;
                          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                    (0x70616d,0xe300000000000000,param_1,param_2,0);
                          if ((uVar3 & 1) == 0) {
                            uVar3 = 0;
                            if (((param_1 == 0x63696c627570) && (param_2 == -0x1a00000000000000)) ||
                               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                          (0x63696c627570,0xe600000000000000,param_1,param_2,0),
                               (uVar3 & 1) != 0)) {
                              return 0x11;
                            }
                            if (((param_1 == 0x6f7774656e5f6461) && (param_2 == -0x12ffff9d97a0948e)
                                ) || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                (0x6f7774656e5f6461,0xed000062685f6b72,param_1,
                                                 param_2,0), (uVar2 & 1) != 0)) {
                              return 0x12;
                            }
                            if ((param_1 != 0x736e656c) || (param_2 != -0x1c00000000000000)) {
                              uVar2 = 0;
                              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                        (0x736e656c,0xe400000000000000,param_1,param_2,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = 0;
                                if (((param_1 == 0x7265746c6966) && (param_2 == -0x1a00000000000000)
                                    ) || (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                                    (0x7265746c6966,0xe600000000000000,param_1,
                                                     param_2,0), (uVar2 & 1) != 0)) {
                                  return 0x14;
                                }
                                uVar2 = 0;
                                if (((param_1 == -0x2fffffffffffffee) &&
                                    (param_2 == -0x7ffffffef0dee970)) ||
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (0xd000000000000012,0x800000010f211690,param_1,param_2
                                               ,0), (uVar2 & 1) != 0)) {
                                  return 0x15;
                                }
                                uVar2 = 0x6565665f74616863;
                                if (((param_1 != 0x6565665f74616863) ||
                                    (param_2 != -0x16ffffffffffff9c)) &&
                                   (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                              (0x6565665f74616863,0xe900000000000064,param_1,param_2
                                               ,0), (uVar2 & 1) == 0)) {
                                  uVar2 = 0xd000000000000013;
                                  if ((param_1 == -0x2fffffffffffffed) &&
                                     (param_2 == -0x7ffffffef0f4d140)) {
                                    return 0x17;
                                  }
                                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                            (0xd000000000000013,0x800000010f0b2ec0,param_1,param_2,0
                                            );
                                  if ((uVar2 & 1) != 0) {
                                    return 0x17;
                                  }
                                  return 10;
                                }
                                return 0x16;
                              }
                            }
                            return 0x13;
                          }
                        }
                        return 0x10;
                      }
                    }
                    return 0xe;
                  }
                }
                return 0xd;
              }
            }
            uVar1 = 5;
          }
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 1048417e0; end: 1048417e3;  */

void FUN_1048417e0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130917f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36b70;
  _swift_getWitnessTable(&UNK_10dd36b70,&UNK_1107a1dc0);
  puRam00000001130917f8 = puVar1;
  return;
}



/* Entry: 1048417e4; end: 104841823;  */

void FUN_1048417e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130917f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36b70;
  _swift_getWitnessTable(&UNK_10dd36b70,&UNK_1107a1dc0);
  puRam00000001130917f8 = puVar1;
  return;
}



/* Entry: 104841824; end: 104841833;  */

undefined1  [16] FUN_104841824(void)

{
  return ZEXT816(0x1107a1dc0);
}



/* Entry: 104841834; end: 10484193b;  */

void FUN_104841834(void)

{
  _objc_opt_self(&PTR_PTR_1129db3f0);
  return;
}



/* Entry: 10484193c; end: 10484194f;  */

bool FUN_10484193c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104841950; end: 10484197b;  */

void FUN_104841950(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_104841bcc();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10484197c; end: 104841987;  */

void FUN_10484197c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 104841988; end: 104841a33;  */

void FUN_104841988(void)

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



/* Entry: 104841a34; end: 104841a4b;  */

void FUN_104841a34(void)

{
  undefined8 *unaff_x20;
  
  func_0x000104841854(*unaff_x20);
  return;
}



/* Entry: 104841a4c; end: 104841b5b; +[SCAdServeRequestOriginExtensions stringValueForOrigin:] */

void FUN_104841a4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  long lStack_28;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      uVar4 = 0xe700000000000000;
      uVar2 = 0x6e776f6e6b6e75;
    }
    else {
      if (param_3 != 1) {
LAB_104841b38:
        lStack_28 = param_3;
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_1107a1e48,&lStack_28,&UNK_1107a1e48,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104841b5c);
        (*pcVar1)();
      }
      uVar4 = 0xee00617265706f5f;
      uVar2 = 0x647261646e617473;
    }
  }
  else {
    if (param_3 == 2) {
      pcVar3 = "tile_tap_prefetch";
    }
    else {
      if (param_3 == 3) {
        uVar4 = 0x800000010f211710;
        uVar2 = 0xd000000000000012;
        goto LAB_104841b10;
      }
      if (param_3 != 4) goto LAB_104841b38;
      pcVar3 = "deeplink_prefetch";
    }
    uVar2 = 0xd000000000000011;
    uVar4 = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  }
LAB_104841b10:
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104841b5c; end: 104841b97; -[SCAdServeRequestOriginExtensions init] */

void FUN_104841b5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104841b98; end: 104841bcb;  */

void FUN_104841b98(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104841bcc; end: 104841bdf;  */

undefined1  [16] FUN_104841bcc(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 5) {
    uVar1 = param_1;
  }
  auVar2[8] = 4 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 104841be0; end: 104841c1f;  */

void FUN_104841be0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113091828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd36c90;
  _swift_getWitnessTable(&UNK_10dd36c90,&UNK_1107a1e48);
  puRam0000000113091828 = puVar1;
  return;
}



/* Entry: 104841c20; end: 104841c2f;  */

undefined1  [16] FUN_104841c20(void)

{
  return ZEXT816(0x1107a1e48);
}



/* Entry: 104841c30; end: 104841c4f;  */

void FUN_104841c30(void)

{
  _objc_opt_self(&PTR_PTR_1129db4a0);
  return;
}



/* Entry: 104841c50; end: 104841c53;  */

undefined8 FUN_104841c50(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&pcStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar12 - extraout_x12;
  lVar5 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_00;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if (((uVar9 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if (param_1[3] != param_2[3]) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  uVar8 = param_2[6];
  if (param_1[6] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[5];
    if (((uVar9 != param_2[5]) || (param_1[6] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  uVar8 = param_2[8];
  lStack_68 = lVar5;
  if (param_1[8] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[7];
    if (((uVar9 != param_2[7]) || (param_1[8] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  lVar5 = 0;
  func_0x000100b91fbc();
  uStack_70 = (ulong)*(int *)(lVar5 + 0x28);
  iVar3 = *(int *)(lStack_68 + 0x30);
  lStack_78 = lVar5;
  func_0x0001000c78e8((long)param_1 + uStack_70,lVar14);
  lVar5 = (long)param_2 + uStack_70;
  uStack_70 = (long)iVar3;
  func_0x0001000c78e8(lVar5,lVar14 + iVar3);
  pcVar16 = *(code **)(lVar13 + 0x30);
  lVar5 = lVar14;
  (*pcVar16)(lVar14,1,lVar4);
  if ((int)lVar5 == 1) {
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 != 1) goto LAB_104842508;
    pcStack_80 = pcVar16;
    FUN_1048433f4(lVar14,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar14,lVar15);
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 8))(lVar15,lVar4);
      goto LAB_104842508;
    }
    pcStack_80 = pcVar16;
    (**(code **)(lVar13 + 0x20))(lVar10,lVar14 + uStack_70,lVar4);
    uVar6 = 0x112d68098;
    func_0x000104843434(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    lVar5 = lVar15;
    __sSQ2eeoiySbx_xtFZTj(lVar15,lVar10,lVar4,uVar6);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)lVar5);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar10,lVar4);
    (*pcVar16)(lVar15,lVar4);
    FUN_1048433f4(lVar14,0x112d3bc20,&UNK_10d904ef0);
    if ((uStack_70 & 1) == 0) {
      return 0;
    }
  }
  lVar14 = lStack_68;
  lVar5 = lStack_78;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x2c));
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x2c));
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x30);
  puVar1 = (ulong *)((long)param_1 + lVar15);
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + lVar15);
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x34);
  lVar5 = (long)*(int *)(lVar14 + 0x30);
  func_0x0001000c78e8((long)param_1 + lVar15,lVar11);
  func_0x0001000c78e8((long)param_2 + lVar15,lVar11 + lVar5);
  pcVar16 = pcStack_80;
  lVar15 = lVar11;
  (*pcStack_80)(lVar11,1,lVar4);
  lVar14 = lVar11;
  if ((int)lVar15 == 1) {
    lVar5 = lVar11 + lVar5;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      FUN_1048433f4(lVar11,0x112d3bc20,&UNK_10d904ef0);
LAB_104842794:
      lVar5 = lStack_78;
      puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x38));
      uVar8 = puVar1[1];
      puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x38));
      uVar12 = puVar2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
      }
      else {
        if (uVar12 == 0) {
          return 0;
        }
        uVar9 = *puVar1;
        if (((uVar9 != *puVar2) || (uVar8 != uVar12)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar9 & 1) == 0)) {
          return 0;
        }
      }
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
      uVar8 = param_1[1];
      param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
      uVar12 = param_2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
        return 1;
      }
      if (uVar12 == 0) {
        return 0;
      }
      uVar9 = *param_1;
      if (((uVar9 != *param_2) || (uVar8 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar9 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  else {
    func_0x0001000c78e8(lVar11,uVar12);
    lVar15 = lVar11 + lVar5;
    (*pcVar16)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
      (**(code **)(lVar13 + 0x20))(lVar10,lVar11 + lVar5,lVar4);
      uVar6 = 0x112d68098;
      func_0x000104843434(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar8 = uVar12;
      __sSQ2eeoiySbx_xtFZTj(uVar12,lVar10,lVar4,uVar6);
      pcVar16 = *(code **)(lVar13 + 8);
      (*pcVar16)(lVar10,lVar4);
      (*pcVar16)(uVar12,lVar4);
      FUN_1048433f4(lVar11,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      goto LAB_104842794;
    }
    (**(code **)(lVar13 + 8))(uVar12,lVar4);
  }
LAB_104842508:
  FUN_1048433f4(lVar14,0x112d68090,&UNK_10da24400);
  return 0;
}



/* Entry: 104841c54; end: 104842043;  */

void FUN_104841c54(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12;
  lVar6 = unaff_x20[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  lVar6 = unaff_x20[6];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = unaff_x20[8];
  }
  else {
    uVar8 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
    lVar6 = unaff_x20[8];
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  lVar3 = 0;
  func_0x000100b91fbc();
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x28),lVar7);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = lVar7;
  (*pcVar10)(lVar7,1,lVar2);
  lStack_68 = lVar9;
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(puVar4,lVar7,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x000104843434(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar9 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x2c));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x30));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x34),lVar5);
  lVar7 = lVar5;
  (*pcVar10)(lVar5,1,lVar2);
  lVar6 = lStack_68;
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lStack_68 + 0x20))(puVar4,lVar5,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x000104843434(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x38));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x3c));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar5);
  }
  return;
}



/* Entry: 104842044; end: 10484207f;  */

void FUN_104842044(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  FUN_104841c54(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104842080; end: 104842083;  */

void FUN_104842080(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar5 - extraout_x12;
  lVar6 = unaff_x20[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *unaff_x20;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  __ss6HasherV8_combineyySuF(unaff_x20[2]);
  __ss6HasherV8_combineyySuF(unaff_x20[3]);
  __ss6HasherV8_combineyySuF(unaff_x20[4]);
  lVar6 = unaff_x20[6];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar6 = unaff_x20[8];
  }
  else {
    uVar8 = unaff_x20[5];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
    lVar6 = unaff_x20[8];
  }
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = unaff_x20[7];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  lVar3 = 0;
  func_0x000100b91fbc();
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x28),lVar7);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = lVar7;
  (*pcVar10)(lVar7,1,lVar2);
  lStack_68 = lVar9;
  if ((int)lVar6 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(puVar4,lVar7,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x000104843434(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar9 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x2c));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x30));
  lVar6 = puVar1[1];
  if (lVar6 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar6);
  }
  func_0x0001000c78e8((long)unaff_x20 + (long)*(int *)(lVar3 + 0x34),lVar5);
  lVar7 = lVar5;
  (*pcVar10)(lVar5,1,lVar2);
  lVar6 = lStack_68;
  if ((int)lVar7 == 1) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    (**(code **)(lStack_68 + 0x20))(puVar4,lVar5,lVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar8 = 0x112d6c668;
    func_0x000104843434(0x112d6c668,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSHAAMc_110350c48);
    __sSH4hash4intoys6HasherVz_tFTj(param_1,lVar2,uVar8);
    (**(code **)(lVar6 + 8))(puVar4,lVar2);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x38));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar5);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x3c));
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar8 = *puVar1;
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar8,lVar5);
  }
  return;
}



/* Entry: 104842084; end: 1048420bb;  */

void FUN_104842084(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  FUN_104841c54(auStack_68);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048420bc; end: 1048420bf;  */

undefined8 FUN_1048420bc(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&pcStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar12 - extraout_x12;
  lVar5 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_00;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if (((uVar9 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if (param_1[3] != param_2[3]) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  uVar8 = param_2[6];
  if (param_1[6] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[5];
    if (((uVar9 != param_2[5]) || (param_1[6] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  uVar8 = param_2[8];
  lStack_68 = lVar5;
  if (param_1[8] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[7];
    if (((uVar9 != param_2[7]) || (param_1[8] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  lVar5 = 0;
  func_0x000100b91fbc();
  uStack_70 = (ulong)*(int *)(lVar5 + 0x28);
  iVar3 = *(int *)(lStack_68 + 0x30);
  lStack_78 = lVar5;
  func_0x0001000c78e8((long)param_1 + uStack_70,lVar14);
  lVar5 = (long)param_2 + uStack_70;
  uStack_70 = (long)iVar3;
  func_0x0001000c78e8(lVar5,lVar14 + iVar3);
  pcVar16 = *(code **)(lVar13 + 0x30);
  lVar5 = lVar14;
  (*pcVar16)(lVar14,1,lVar4);
  if ((int)lVar5 == 1) {
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 != 1) goto LAB_104842508;
    pcStack_80 = pcVar16;
    FUN_1048433f4(lVar14,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar14,lVar15);
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 8))(lVar15,lVar4);
      goto LAB_104842508;
    }
    pcStack_80 = pcVar16;
    (**(code **)(lVar13 + 0x20))(lVar10,lVar14 + uStack_70,lVar4);
    uVar6 = 0x112d68098;
    func_0x000104843434(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    lVar5 = lVar15;
    __sSQ2eeoiySbx_xtFZTj(lVar15,lVar10,lVar4,uVar6);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)lVar5);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar10,lVar4);
    (*pcVar16)(lVar15,lVar4);
    FUN_1048433f4(lVar14,0x112d3bc20,&UNK_10d904ef0);
    if ((uStack_70 & 1) == 0) {
      return 0;
    }
  }
  lVar14 = lStack_68;
  lVar5 = lStack_78;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x2c));
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x2c));
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x30);
  puVar1 = (ulong *)((long)param_1 + lVar15);
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + lVar15);
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x34);
  lVar5 = (long)*(int *)(lVar14 + 0x30);
  func_0x0001000c78e8((long)param_1 + lVar15,lVar11);
  func_0x0001000c78e8((long)param_2 + lVar15,lVar11 + lVar5);
  pcVar16 = pcStack_80;
  lVar15 = lVar11;
  (*pcStack_80)(lVar11,1,lVar4);
  lVar14 = lVar11;
  if ((int)lVar15 == 1) {
    lVar5 = lVar11 + lVar5;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      FUN_1048433f4(lVar11,0x112d3bc20,&UNK_10d904ef0);
LAB_104842794:
      lVar5 = lStack_78;
      puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x38));
      uVar8 = puVar1[1];
      puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x38));
      uVar12 = puVar2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
      }
      else {
        if (uVar12 == 0) {
          return 0;
        }
        uVar9 = *puVar1;
        if (((uVar9 != *puVar2) || (uVar8 != uVar12)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar9 & 1) == 0)) {
          return 0;
        }
      }
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
      uVar8 = param_1[1];
      param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
      uVar12 = param_2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
        return 1;
      }
      if (uVar12 == 0) {
        return 0;
      }
      uVar9 = *param_1;
      if (((uVar9 != *param_2) || (uVar8 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar9 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  else {
    func_0x0001000c78e8(lVar11,uVar12);
    lVar15 = lVar11 + lVar5;
    (*pcVar16)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
      (**(code **)(lVar13 + 0x20))(lVar10,lVar11 + lVar5,lVar4);
      uVar6 = 0x112d68098;
      func_0x000104843434(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar8 = uVar12;
      __sSQ2eeoiySbx_xtFZTj(uVar12,lVar10,lVar4,uVar6);
      pcVar16 = *(code **)(lVar13 + 8);
      (*pcVar16)(lVar10,lVar4);
      (*pcVar16)(uVar12,lVar4);
      FUN_1048433f4(lVar11,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      goto LAB_104842794;
    }
    (**(code **)(lVar13 + 8))(uVar12,lVar4);
  }
LAB_104842508:
  FUN_1048433f4(lVar14,0x112d68090,&UNK_10da24400);
  return 0;
}



/* Entry: 1048420c0; end: 1048421c7;  */

void FUN_1048420c0(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long extraout_x8;
  code *pcVar7;
  
  lVar4 = 0;
  func_0x000100b91fbc();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar3);
  iVar2 = *(int *)(lVar5 + 0x28);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  pcVar7 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar7)((long)puVar6 + (long)iVar2,1,1,lVar5);
  (*pcVar7)((long)puVar6 + (long)*(int *)(lVar4 + 0x34),1,1,lVar5);
  *(undefined8 *)(&stack0x00000000 + lVar3) = 0;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = 0;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar3) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar3) = 0;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar3) = 0;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar3) = 0;
  *puVar6 = 0;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = 0;
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar3) = 0;
  puVar1 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x2c));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x30));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x38));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x3c));
  FUN_104846384(0);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_allocWithZone();
  func_0x000104843d30();
  puRam0000000113815360 = puVar6;
  return;
}



/* Entry: 1048421c8; end: 104842207; +[SCSKAdNetworkAttribution identity] */

void FUN_1048421c8(void)

{
  if (lRam0000000113091858 != -1) {
    _swift_once(0x113091858,FUN_1048420c0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113815360);
  return;
}



/* Entry: 104842208; end: 10484282f;  */

undefined8 FUN_104842208(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = 0;
  __s10Foundation4UUIDVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&pcStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar12 - extraout_x12;
  lVar5 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_00;
  uVar8 = param_2[1];
  if (param_1[1] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = *param_1;
    if (((uVar9 != *param_2) || (param_1[1] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[2] != param_2[2]) {
    return 0;
  }
  if (param_1[3] != param_2[3]) {
    return 0;
  }
  if (param_1[4] != param_2[4]) {
    return 0;
  }
  uVar8 = param_2[6];
  if (param_1[6] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[5];
    if (((uVar9 != param_2[5]) || (param_1[6] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  uVar8 = param_2[8];
  lStack_68 = lVar5;
  if (param_1[8] == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar9 = param_1[7];
    if (((uVar9 != param_2[7]) || (param_1[8] != uVar8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar9 & 1) == 0)) {
      return 0;
    }
  }
  lVar5 = 0;
  func_0x000100b91fbc();
  uStack_70 = (ulong)*(int *)(lVar5 + 0x28);
  iVar3 = *(int *)(lStack_68 + 0x30);
  lStack_78 = lVar5;
  func_0x0001000c78e8((long)param_1 + uStack_70,lVar14);
  lVar5 = (long)param_2 + uStack_70;
  uStack_70 = (long)iVar3;
  func_0x0001000c78e8(lVar5,lVar14 + iVar3);
  pcVar16 = *(code **)(lVar13 + 0x30);
  lVar5 = lVar14;
  (*pcVar16)(lVar14,1,lVar4);
  if ((int)lVar5 == 1) {
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 != 1) goto LAB_104842508;
    pcStack_80 = pcVar16;
    FUN_1048433f4(lVar14,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x0001000c78e8(lVar14,lVar15);
    lVar5 = lVar14 + uStack_70;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar13 + 8))(lVar15,lVar4);
      goto LAB_104842508;
    }
    pcStack_80 = pcVar16;
    (**(code **)(lVar13 + 0x20))(lVar10,lVar14 + uStack_70,lVar4);
    uVar6 = 0x112d68098;
    func_0x000104843434(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                        PTR___s10Foundation4UUIDVSQAAMc_110350c50);
    lVar5 = lVar15;
    __sSQ2eeoiySbx_xtFZTj(lVar15,lVar10,lVar4,uVar6);
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)lVar5);
    pcVar16 = *(code **)(lVar13 + 8);
    (*pcVar16)(lVar10,lVar4);
    (*pcVar16)(lVar15,lVar4);
    FUN_1048433f4(lVar14,0x112d3bc20,&UNK_10d904ef0);
    if ((uStack_70 & 1) == 0) {
      return 0;
    }
  }
  lVar14 = lStack_68;
  lVar5 = lStack_78;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x2c));
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x2c));
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x30);
  puVar1 = (ulong *)((long)param_1 + lVar15);
  uVar8 = puVar1[1];
  puVar2 = (ulong *)((long)param_2 + lVar15);
  uVar9 = puVar2[1];
  if (uVar8 == 0) {
    if (uVar9 != 0) {
      return 0;
    }
  }
  else {
    if (uVar9 == 0) {
      return 0;
    }
    uVar7 = *puVar1;
    if (((uVar7 != *puVar2) || (uVar8 != uVar9)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  lVar15 = (long)*(int *)(lVar5 + 0x34);
  lVar5 = (long)*(int *)(lVar14 + 0x30);
  func_0x0001000c78e8((long)param_1 + lVar15,lVar11);
  func_0x0001000c78e8((long)param_2 + lVar15,lVar11 + lVar5);
  pcVar16 = pcStack_80;
  lVar15 = lVar11;
  (*pcStack_80)(lVar11,1,lVar4);
  lVar14 = lVar11;
  if ((int)lVar15 == 1) {
    lVar5 = lVar11 + lVar5;
    (*pcVar16)(lVar5,1,lVar4);
    if ((int)lVar5 == 1) {
      FUN_1048433f4(lVar11,0x112d3bc20,&UNK_10d904ef0);
LAB_104842794:
      lVar5 = lStack_78;
      puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lStack_78 + 0x38));
      uVar8 = puVar1[1];
      puVar2 = (ulong *)((long)param_2 + (long)*(int *)(lStack_78 + 0x38));
      uVar12 = puVar2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
      }
      else {
        if (uVar12 == 0) {
          return 0;
        }
        uVar9 = *puVar1;
        if (((uVar9 != *puVar2) || (uVar8 != uVar12)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar9 & 1) == 0)) {
          return 0;
        }
      }
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
      uVar8 = param_1[1];
      param_2 = (ulong *)((long)param_2 + (long)*(int *)(lVar5 + 0x3c));
      uVar12 = param_2[1];
      if (uVar8 == 0) {
        if (uVar12 != 0) {
          return 0;
        }
        return 1;
      }
      if (uVar12 == 0) {
        return 0;
      }
      uVar9 = *param_1;
      if (((uVar9 != *param_2) || (uVar8 != uVar12)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar9 & 1) == 0)) {
        return 0;
      }
      return 1;
    }
  }
  else {
    func_0x0001000c78e8(lVar11,uVar12);
    lVar15 = lVar11 + lVar5;
    (*pcVar16)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
      (**(code **)(lVar13 + 0x20))(lVar10,lVar11 + lVar5,lVar4);
      uVar6 = 0x112d68098;
      func_0x000104843434(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                          PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      uVar8 = uVar12;
      __sSQ2eeoiySbx_xtFZTj(uVar12,lVar10,lVar4,uVar6);
      pcVar16 = *(code **)(lVar13 + 8);
      (*pcVar16)(lVar10,lVar4);
      (*pcVar16)(uVar12,lVar4);
      FUN_1048433f4(lVar11,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      goto LAB_104842794;
    }
    (**(code **)(lVar13 + 8))(uVar12,lVar4);
  }
LAB_104842508:
  FUN_1048433f4(lVar14,0x112d68090,&UNK_10da24400);
  return 0;
}



/* Entry: 104842830; end: 10484285b;  */

void FUN_104842830(void)

{
  func_0x000104843434(0x113091860,&SUB_100b91fbc,&UNK_10dd36de8);
  return;
}



/* Entry: 10484285c; end: 104842a5b;  */

long * FUN_10484285c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    lVar7 = param_2[2];
    lVar10 = param_2[5];
    lVar6 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = lVar7;
    param_1[5] = lVar10;
    param_1[4] = lVar6;
    lVar7 = param_2[6];
    lVar6 = param_2[7];
    param_1[6] = lVar7;
    param_1[7] = lVar6;
    lVar10 = param_2[8];
    param_1[8] = lVar10;
    lVar13 = (long)*(int *)(param_3 + 0x28);
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
    lVar11 = *(long *)(lVar6 + -8);
    pcVar12 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar10);
    lVar7 = (long)param_2 + lVar13;
    (*pcVar12)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar11 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar6);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar13,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar13,(long)param_2 + lVar13,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    lVar9 = (long)*(int *)(param_3 + 0x34);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    lVar7 = (long)param_2 + lVar9;
    (*pcVar12)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar11 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      (**(code **)(lVar11 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 104842a5c; end: 104842b43;  */

void FUN_104842a5c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  iVar1 = *(int *)(param_2 + 0x28);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30) + 8));
  iVar1 = *(int *)(param_2 + 0x34);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  return;
}



/* Entry: 104842b44; end: 104842d17;  */

undefined8 * FUN_104842b44(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar11 = param_2[2];
  uVar12 = param_2[5];
  uVar7 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar11;
  param_1[5] = uVar12;
  param_1[4] = uVar7;
  uVar11 = param_2[6];
  uVar7 = param_2[7];
  param_1[6] = uVar11;
  param_1[7] = uVar7;
  uVar7 = param_2[8];
  param_1[8] = uVar7;
  lVar10 = (long)*(int *)(param_3 + 0x28);
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar5 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar7);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar10,(long)param_2 + lVar10,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  lVar10 = (long)*(int *)(param_3 + 0x34);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar9)(lVar6,1,lVar5);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
  }
  else {
    lVar6 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar10,(long)param_2 + lVar10,
            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar11 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar11;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar11);
  return param_1;
}



/* Entry: 104842d18; end: 1048433db;  */

undefined8 * FUN_104842d18(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar6 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[7] = param_2[7];
  uVar6 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar9 = (long)*(int *)(param_3 + 0x28);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar9;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar7 + 8))((long)param_1 + lVar9,lVar3);
      goto LAB_104842e3c;
    }
    (**(code **)(lVar7 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar3);
  }
  else {
LAB_104842e3c:
    lVar4 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
            *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar9 = (long)*(int *)(param_3 + 0x34);
  lVar4 = (long)param_1 + lVar9;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar9;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
      goto LAB_104842f58;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar9,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar3);
    goto LAB_104842f58;
  }
  lVar4 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
LAB_104842f58:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar1 = *param_2;
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Entry: 1048433dc; end: 1048433f3;  */

void FUN_1048433dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1048433f4; end: 1048434a3;  */

undefined8 FUN_1048433f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1048434a4; end: 1048434af; -[SCSKAdNetworkAttribution adNetworkIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048434a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091920))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091920);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048434b0; end: 1048434bf; -[SCSKAdNetworkAttribution campaignIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048434b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091928);
}



/* Entry: 1048434c0; end: 1048434cf; -[SCSKAdNetworkAttribution sourceIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048434c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091930);
}



/* Entry: 1048434d0; end: 1048434df; -[SCSKAdNetworkAttribution timestampInMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048434d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091938);
}



/* Entry: 1048434e0; end: 1048434eb; -[SCSKAdNetworkAttribution sourceAppStoreIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048434e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091940))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091940);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048434ec; end: 1048434f7; -[SCSKAdNetworkAttribution clickVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048434ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091948))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091948);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1048434f8; end: 104843503; -[SCSKAdNetworkAttribution clickNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048434f8(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_104844c3c(param_1 + _DAT_113815368,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104843504; end: 10484350f; -[SCSKAdNetworkAttribution clickSignature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104843504(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815370))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815370);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104843510; end: 10484351b; -[SCSKAdNetworkAttribution viewThroughVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104843510(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815378))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815378);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10484351c; end: 104843527; -[SCSKAdNetworkAttribution viewThroughNonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484351c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_104844c3c(param_1 + _DAT_113815380,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104843528; end: 104843607;  */

void FUN_104843528(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_104844c3c(param_1 + *param_3,puVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104843608; end: 104843613; -[SCSKAdNetworkAttribution viewThroughSignature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104843608(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815388))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815388);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104843614; end: 10484361f; -[SCSKAdNetworkAttribution aakCompactJWS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104843614(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113815390))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113815390);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104843620; end: 104843677;  */

void FUN_104843620(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104843678; end: 104843a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104843678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091920);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091928) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113091930) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113091938) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091940);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091948);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  FUN_104844c3c(param_10,unaff_x20 + _DAT_113815368,0x112d3bc20,&UNK_10d904ef0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815370);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815378);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  FUN_104844c3c(param_15,unaff_x20 + _DAT_113815380,0x112d3bc20,&UNK_10d904ef0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815388);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815390);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x000104844c84(param_15,0x112d3bc20,&UNK_10d904ef0);
  func_0x000104844c84(param_10,0x112d3bc20,&UNK_10d904ef0);
  return puVar2;
}



/* Entry: 104843a58; end: 104843f13; -[SCSKAdNetworkAttribution initWithAdNetworkIdentifier:campaignIdentifier:sourceIdentifier:timestampInMs:sourceAppStoreIdentifier:clickVersion:clickNonce:clickSignature:viewThroughVersion:viewThroughNonce:viewThroughSignature:aakCompactJWS:] */

void FUN_104843a58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11,long param_12,long param_13,long param_14)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x12;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long alStack_140 [12];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar3 = 0x112d3bc20;
  puVar8 = &UNK_10d904ef0;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = param_6;
  uStack_80 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar3 - extraout_x12;
  if (param_3 == 0) {
    puStack_a8 = (undefined *)0x0;
    lStack_a0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_a8 = puVar8;
    lStack_a0 = param_3;
  }
  lStack_78 = param_12;
  lStack_70 = param_14;
  if (param_7 == 0) {
    puStack_b8 = (undefined *)0x0;
    lStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_b8 = puVar8;
    lStack_b0 = param_7;
  }
  if (param_8 == 0) {
    puStack_c8 = (undefined *)0x0;
    lStack_c0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_c8 = puVar8;
    lStack_c0 = param_8;
  }
  lVar7 = param_9;
  _objc_retain();
  lVar4 = param_10;
  _objc_retain();
  lVar12 = param_11;
  _objc_retain();
  lVar5 = lStack_78;
  _objc_retain();
  lStack_e0 = param_13;
  _objc_retain();
  lVar6 = lStack_70;
  _objc_retain();
  lStack_d0 = lVar6;
  if (lVar7 == 0) {
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
  }
  else {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar11,param_9);
    _objc_release(lVar7);
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
  }
  uVar9 = (ulong)(lVar7 == 0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar11,uVar9,1);
  if (lVar4 == 0) {
    lStack_d8 = 0;
    uVar2 = 0;
    uVar10 = uVar9;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar10 = uVar9;
    lStack_d8 = param_10;
    _objc_release(lVar4);
    uVar2 = uVar9;
  }
  if (lVar12 == 0) {
    param_11 = 0;
    uVar10 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar12);
  }
  if (lVar5 != 0) {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar3,lStack_78);
    _objc_release(lVar5);
  }
  uVar9 = (ulong)(lVar5 == 0);
  lVar7 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar3,uVar9,1,lVar7);
  if (param_13 == 0) {
    lVar7 = 0;
    uVar1 = 0;
    uVar13 = uVar9;
    lVar4 = lStack_d0;
    lVar12 = lStack_70;
  }
  else {
    lVar7 = lStack_e0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar13 = uVar9;
    _objc_release(param_13);
    uVar1 = uVar9;
    lVar4 = lStack_d0;
    lVar12 = lStack_70;
  }
  lStack_d0 = lVar4;
  lStack_70 = lVar12;
  if (lVar4 == 0) {
    lVar12 = 0;
    uVar13 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar4);
  }
  *(long *)(lVar11 + -0x18) = lVar12;
  *(ulong *)(lVar11 + -0x10) = uVar13;
  *(long *)(lVar11 + -0x28) = lVar7;
  *(ulong *)(lVar11 + -0x20) = uVar1;
  *(ulong *)(lVar11 + -0x38) = uVar10;
  *(long *)(lVar11 + -0x30) = lVar3;
  *(ulong *)(lVar11 + -0x48) = uVar2;
  *(long *)(lVar11 + -0x40) = param_11;
  lVar3 = lStack_d8;
  *(long *)(lVar11 + -0x58) = lVar11;
  *(long *)(lVar11 + -0x50) = lVar3;
  *(undefined **)(lVar11 + -0x60) = puStack_c8;
  func_0x00010484386c(lStack_a0,puStack_a8,uStack_98,uStack_90,uStack_88,lStack_b0,puStack_b8,
                      lStack_c0);
  return;
}



/* Entry: 104843f14; end: 104843f47; -[SCSKAdNetworkAttribution hash] */

undefined8 FUN_104843f14(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104843f48();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104843f48; end: 10484433b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104843f48(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [72];
  
  lVar7 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  __ss6HasherVABycfC(auStack_98);
  if (((undefined8 *)(unaff_x20 + _DAT_113091920))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091920);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091928));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091930));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091938));
  if (((undefined8 *)(unaff_x20 + _DAT_113091940))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091940);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_113091948))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091948);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  FUN_104844c3c(unaff_x20 + _DAT_113815368,lVar7,0x112d3bc20,&UNK_10d904ef0);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar3 = lVar7;
  (*pcVar9)(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x000104844c84(lVar7,0x112d3bc20,&UNK_10d904ef0);
    lVar7 = 0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
    lVar7 = lVar3;
    func_0x00010bfde980(lVar3);
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar7);
  if (((undefined8 *)(unaff_x20 + _DAT_113815370))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815370);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_113815378))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815378);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  FUN_104844c3c(unaff_x20 + _DAT_113815380,puVar5,0x112d3bc20,&UNK_10d904ef0);
  puVar4 = puVar5;
  (*pcVar9)(puVar5,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x000104844c84(puVar5,0x112d3bc20,&UNK_10d904ef0);
    puVar5 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar8 + 8))(puVar5,lVar2);
    puVar5 = puVar4;
    func_0x00010bfde980(puVar4);
    _objc_release(puVar4);
  }
  __ss6HasherV8_combineyySuF(puVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_113815388))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815388);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  if (((undefined8 *)(unaff_x20 + _DAT_113815390))[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815390);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar6 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar6);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10484433c; end: 104844c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10484433c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  uint uVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lStack_110;
  code *pcStack_108;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar16 = (long)&lStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_98 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar10 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar10 - extraout_x12;
  lVar8 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar8 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_00;
  lStack_a0 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar8 - extraout_x12_02;
  FUN_104844c3c(param_1,auStack_88,0x112d387f8,&UNK_10d902650);
  if (lStack_70 == 0) {
    func_0x000104844c84(auStack_88,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar3 = &lStack_90;
    _swift_dynamicCast(plVar3,auStack_88,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar5 = ((long *)(unaff_x20 + _DAT_113091920))[1];
      lVar6 = ((long *)(lStack_90 + _DAT_113091920))[1];
      uStack_b4 = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113091920);
        if ((lVar4 == *(long *)(lStack_90 + _DAT_113091920)) && (lVar5 == lVar6)) {
          uStack_b4 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_b4 = (uint)lVar4;
        }
      }
      lStack_c0 = *(long *)(unaff_x20 + _DAT_113091928);
      lStack_c8 = *(long *)(lStack_90 + _DAT_113091928);
      lStack_d0 = *(long *)(unaff_x20 + _DAT_113091930);
      lStack_d8 = *(long *)(lStack_90 + _DAT_113091930);
      lStack_e0 = *(long *)(unaff_x20 + _DAT_113091938);
      lStack_e8 = *(long *)(lStack_90 + _DAT_113091938);
      lVar5 = ((long *)(unaff_x20 + _DAT_113091940))[1];
      lVar6 = ((long *)(lStack_90 + _DAT_113091940))[1];
      uStack_f4 = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_113091940);
        if ((lVar4 == *(long *)(lStack_90 + _DAT_113091940)) && (lVar5 == lVar6)) {
          uStack_f4 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_f4 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_113091948))[1];
      lVar6 = ((long *)(lStack_90 + _DAT_113091948))[1];
      uStack_f8 = (uint)(lVar5 == 0 && lVar6 == 0);
      lStack_b0 = lVar12;
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar12 = *(long *)(unaff_x20 + _DAT_113091948);
        if ((lVar12 == *(long *)(lStack_90 + _DAT_113091948)) && (lVar5 == lVar6)) {
          uStack_f8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_f8 = (uint)lVar12;
        }
      }
      lVar12 = _DAT_113815368;
      lStack_110 = lVar16;
      lStack_f0 = lVar10;
      FUN_104844c3c(lStack_90 + _DAT_113815368,lVar15,0x112d3bc20,&UNK_10d904ef0);
      lVar5 = (long)*(int *)(lStack_98 + 0x30);
      FUN_104844c3c(unaff_x20 + lVar12,lVar13,0x112d3bc20,&UNK_10d904ef0);
      FUN_104844c3c(lVar15,lVar13 + lVar5,0x112d3bc20,&UNK_10d904ef0);
      lVar10 = lStack_b0;
      pcVar11 = *(code **)(lStack_b0 + 0x30);
      lVar12 = lVar13;
      (*pcVar11)(lVar13,1,lVar2);
      pcStack_108 = pcVar11;
      if ((int)lVar12 == 1) {
        func_0x000104844c84(lVar15,0x112d3bc20,&UNK_10d904ef0);
        lVar5 = lVar13 + lVar5;
        (*pcVar11)(lVar5,1,lVar2);
        if ((int)lVar5 == 1) {
          func_0x000104844c84(lVar13,0x112d3bc20,&UNK_10d904ef0);
          uVar14 = 0;
        }
        else {
LAB_10484478c:
          func_0x000104844c84(lVar13,0x112d68090,&UNK_10da24400);
          uVar14 = 1;
        }
      }
      else {
        FUN_104844c3c(lVar13,lVar8,0x112d3bc20,&UNK_10d904ef0);
        lVar12 = lVar13 + lVar5;
        (*pcVar11)(lVar12,1,lVar2);
        lVar16 = lStack_110;
        if ((int)lVar12 == 1) {
          func_0x000104844c84(lVar15,0x112d3bc20,&UNK_10d904ef0);
          (**(code **)(lVar10 + 8))(lVar8,lVar2);
          goto LAB_10484478c;
        }
        lVar12 = lStack_110;
        (**(code **)(lVar10 + 0x20))(lStack_110,lVar13 + lVar5,lVar2);
        func_0x000101207ba8();
        lVar5 = lVar8;
        __sSQ2eeoiySbx_xtFZTj(lVar8,lVar16,lVar2,lVar12);
        pcVar11 = *(code **)(lVar10 + 8);
        (*pcVar11)(lVar16,lVar2);
        func_0x000104844c84(lVar15,0x112d3bc20,&UNK_10d904ef0);
        (*pcVar11)(lVar8,lVar2);
        func_0x000104844c84(lVar13,0x112d3bc20,&UNK_10d904ef0);
        uVar14 = (uint)lVar5 ^ 1;
      }
      lVar5 = lStack_a0;
      lVar8 = lStack_f0;
      lVar10 = ((long *)(unaff_x20 + _DAT_113815370))[1];
      lVar12 = ((long *)(lStack_90 + _DAT_113815370))[1];
      uVar1 = (uint)(lVar10 == 0 && lVar12 == 0);
      if ((lVar10 != 0) && (lVar12 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_113815370);
        if ((lVar13 == *(long *)(lStack_90 + _DAT_113815370)) && (lVar10 == lVar12)) {
          uVar1 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar1 = (uint)lVar13;
        }
      }
      lStack_f0 = CONCAT44(lStack_f0._4_4_,uVar1);
      lVar10 = ((long *)(unaff_x20 + _DAT_113815378))[1];
      lVar12 = ((long *)(lStack_90 + _DAT_113815378))[1];
      uStack_fc = (uint)(lVar10 == 0 && lVar12 == 0);
      if ((lVar10 != 0) && (lVar12 != 0)) {
        lVar13 = *(long *)(unaff_x20 + _DAT_113815378);
        if ((lVar13 == *(long *)(lStack_90 + _DAT_113815378)) && (lVar10 == lVar12)) {
          uStack_fc = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_fc = (uint)lVar13;
        }
      }
      lVar12 = _DAT_113815380;
      FUN_104844c3c(lStack_90 + _DAT_113815380,lVar5,0x112d3bc20,&UNK_10d904ef0);
      lVar10 = (long)*(int *)(lStack_98 + 0x30);
      FUN_104844c3c(unaff_x20 + lVar12,lVar8,0x112d3bc20,&UNK_10d904ef0);
      FUN_104844c3c(lVar5,lVar8 + lVar10,0x112d3bc20,&UNK_10d904ef0);
      pcVar11 = pcStack_108;
      lVar13 = lVar8;
      (*pcStack_108)(lVar8,1,lVar2);
      lVar12 = lStack_a8;
      if ((int)lVar13 == 1) {
        func_0x000104844c84(lVar5,0x112d3bc20,&UNK_10d904ef0);
        lVar10 = lVar8 + lVar10;
        (*pcVar11)(lVar10,1,lVar2);
        if ((int)lVar10 == 1) {
          func_0x000104844c84(lVar8,0x112d3bc20,&UNK_10d904ef0);
          uVar1 = 0;
        }
        else {
LAB_104844a14:
          func_0x000104844c84(lVar8,0x112d68090,&UNK_10da24400);
          uVar1 = 1;
        }
      }
      else {
        FUN_104844c3c(lVar8,lStack_a8,0x112d3bc20,&UNK_10d904ef0);
        lVar13 = lVar8 + lVar10;
        (*pcVar11)(lVar13,1,lVar2);
        lVar16 = lStack_b0;
        lVar15 = lStack_110;
        if ((int)lVar13 == 1) {
          func_0x000104844c84(lVar5,0x112d3bc20,&UNK_10d904ef0);
          (**(code **)(lStack_b0 + 8))(lVar12,lVar2);
          goto LAB_104844a14;
        }
        lVar13 = lStack_110;
        (**(code **)(lStack_b0 + 0x20))(lStack_110,lVar8 + lVar10,lVar2);
        func_0x000101207ba8();
        lVar10 = lVar12;
        __sSQ2eeoiySbx_xtFZTj(lVar12,lVar15,lVar2,lVar13);
        lStack_98 = CONCAT44(lStack_98._4_4_,uVar14);
        pcVar11 = *(code **)(lVar16 + 8);
        (*pcVar11)(lVar15,lVar2);
        func_0x000104844c84(lVar5,0x112d3bc20,&UNK_10d904ef0);
        (*pcVar11)(lVar12,lVar2);
        func_0x000104844c84(lVar8,0x112d3bc20,&UNK_10d904ef0);
        uVar1 = (uint)lVar10 ^ 1;
        uVar14 = (uint)lStack_98;
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_113815388))[1];
      lVar5 = ((long *)(lStack_90 + _DAT_113815388))[1];
      uVar7 = (uint)(lVar8 == 0 && lVar5 == 0);
      if ((lVar8 != 0) && (lVar5 != 0)) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113815388);
        if ((lVar2 == *(long *)(lStack_90 + _DAT_113815388)) && (lVar8 == lVar5)) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar2;
        }
      }
      lVar8 = ((long *)(unaff_x20 + _DAT_113815390))[1];
      lVar5 = ((long *)(lStack_90 + _DAT_113815390))[1];
      if (lVar8 == 0) {
        _swift_bridgeObjectRetain(lVar5);
        _objc_release(lStack_90);
        if (lVar5 == 0) {
LAB_104844b84:
          uVar9 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar5);
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 0;
        if (lVar5 != 0) {
          lVar2 = *(long *)(unaff_x20 + _DAT_113815390);
          if ((lVar2 == *(long *)(lStack_90 + _DAT_113815390)) && (lVar8 == lVar5)) {
            _objc_release(lStack_90);
            goto LAB_104844b84;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar2;
        }
        _objc_release(lStack_90);
      }
      if (((uStack_b4 ^ 1 |
            (uint)((lStack_c0 != lStack_c8 || lStack_d0 != lStack_d8) || lStack_e0 != lStack_e8) |
            uStack_f4 ^ 1 | uStack_f8 ^ 1 | uVar14 | (uint)lStack_f0 ^ 0xffffffff |
            uStack_fc ^ 0xffffffff | uVar1) & 1) == 0) {
        uVar7 = uVar7 & uVar9;
        goto LAB_104844c10;
      }
    }
  }
  uVar7 = 0;
LAB_104844c10:
  return uVar7 & 1;
}



/* Entry: 104844c3c; end: 104844cc3;  */

undefined8 FUN_104844c3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104844cc4; end: 104844d53; -[SCSKAdNetworkAttribution isEqual:] */

uint FUN_104844cc4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10484433c(&uStack_40);
  _objc_release(param_1);
  func_0x000104844c84(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 104844d54; end: 104844d57; -[SCSKAdNetworkAttribution copyWithZone:] */

void FUN_104844d54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104844d58; end: 1048452fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104844d58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar5 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar7 - extraout_x12;
  if (((undefined8 *)(unaff_x20 + _DAT_113091920))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091920);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1ef430);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1ef450);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1ef470);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xef534d5f4e495f50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113091940))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091940);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1ef490);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113091948))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091948);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x45565f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45565f4b43494c43,0xed00004e4f495352);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  FUN_104844c3c(unaff_x20 + _DAT_113815368,lVar5,0x112d3bc20,&UNK_10d904ef0);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar3 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar4 = lVar5;
  (*pcVar10)(lVar5,1,lVar3);
  lVar8 = 0;
  if ((int)lVar4 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar9 + 8))(lVar5,lVar3);
    lVar8 = lVar4;
  }
  uVar1 = 0x4f4e5f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f4e5f4b43494c43,0xeb0000000045434e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar8);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113815370))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815370);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x49535f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49535f4b43494c43,0xef45525554414e47);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113815378))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815378);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1ef4b0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  FUN_104844c3c(unaff_x20 + _DAT_113815380,puVar7,0x112d3bc20,&UNK_10d904ef0);
  puVar6 = puVar7;
  (*pcVar10)(puVar7,1,lVar3);
  if ((int)puVar6 == 1) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar9 + 8))(puVar7,lVar3);
  }
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1ef4d0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar6);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113815388))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815388);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1ef4f0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113815390))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815390);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x504d4f435f4b4141;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x504d4f435f4b4141,0xef53574a5f544341);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 1048452fc; end: 10484534b; -[SCSKAdNetworkAttribution encodeWithCoder:] */

void FUN_1048452fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104844d58(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10484534c; end: 10484537b;  */

void FUN_10484534c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10484537c(param_1);
  return;
}



/* Entry: 10484537c; end: 104845fa7;  */

undefined8 FUN_10484537c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long extraout_x8;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar16;
  undefined8 uVar17;
  undefined8 unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long alStack_180 [6];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar18 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
  lVar14 = (long)&uStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar20 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar15 - extraout_x12_01;
  uVar5 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1ef430);
  lVar18 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lStack_100 = lVar20;
  if (lVar18 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar18);
    _swift_unknownObjectRelease(lVar18);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_d8 = 0;
    lVar18 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar18 = lStack_b8;
    uStack_d8 = uStack_c0;
    if ((int)puVar6 == 0) {
      uStack_d8 = 0;
      lVar18 = 0;
    }
  }
  uVar5 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1ef450);
  lVar20 = param_1;
  func_0x00010bf66f40();
  lStack_e8 = lVar20;
  _objc_release(uVar5);
  uVar5 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1ef470);
  lVar20 = param_1;
  func_0x00010bf66f40();
  lStack_f0 = lVar20;
  _objc_release(uVar5);
  uVar5 = 0x4d415453454d4954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d415453454d4954,0xef534d5f4e495f50);
  lVar20 = param_1;
  func_0x00010bf66f40();
  lStack_f8 = lVar20;
  _objc_release(uVar5);
  uVar5 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1ef490);
  lVar20 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar20 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar20);
    _swift_unknownObjectRelease(lVar20);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_120 = 0;
    lVar20 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar20 = lStack_b8;
    uStack_120 = uStack_c0;
    if ((int)puVar6 == 0) {
      uStack_120 = 0;
      lVar20 = 0;
    }
  }
  uVar5 = 0x45565f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45565f4b43494c43,0xed00004e4f495352);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar10 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_128 = 0;
    lVar10 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar10 = lStack_b8;
    uStack_128 = uStack_c0;
    if ((int)puVar6 == 0) {
      uStack_128 = 0;
      lVar10 = 0;
    }
  }
  uVar5 = 0x4f4e5f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f4e5f4b43494c43,0xeb0000000045434e);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar7 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    lVar7 = 0;
    __s10Foundation4UUIDVMa();
    pcVar13 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    uVar12 = 1;
  }
  else {
    lVar7 = 0;
    __s10Foundation4UUIDVMa();
    lVar8 = lVar19;
    _swift_dynamicCast(lVar19,&uStack_90,puVar1 + 8,lVar7,6);
    pcVar13 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    uVar12 = (uint)lVar8 ^ 1;
  }
  (*pcVar13)(lVar19,uVar12,1,lVar7);
  uVar5 = 0x49535f4b43494c43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x49535f4b43494c43,0xef45525554414e47);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar7 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_138 = 0;
    lVar7 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_b8;
    uStack_138 = uStack_c0;
    if ((int)puVar6 == 0) {
      uStack_138 = 0;
      lVar7 = 0;
    }
  }
  uVar5 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1ef4b0);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_140 = 0;
    lStack_108 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uStack_140 = uStack_c0;
    lStack_108 = lStack_b8;
    if ((int)puVar6 == 0) {
      uStack_140 = 0;
      lStack_108 = 0;
    }
  }
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1ef4d0);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    lVar8 = 0;
    __s10Foundation4UUIDVMa();
    pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
    uVar12 = 1;
  }
  else {
    lVar8 = 0;
    __s10Foundation4UUIDVMa();
    lVar9 = lVar15;
    _swift_dynamicCast(lVar15,&uStack_90,puVar1 + 8,lVar8,6);
    pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x38);
    uVar12 = (uint)lVar9 ^ 1;
  }
  (*pcVar13)(lVar15,uVar12,1,lVar8);
  uVar5 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1ef4f0);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_148 = 0;
    lStack_110 = 0;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    uStack_148 = uStack_c0;
    lStack_110 = lStack_b8;
    if ((int)puVar6 == 0) {
      uStack_148 = 0;
      lStack_110 = 0;
    }
  }
  uVar5 = 0x504d4f435f4b4141;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x504d4f435f4b4141,0xef53574a5f544341);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104844c84(&uStack_90,0x112d387f8,&UNK_10d902650);
    uStack_150 = 0;
    lVar8 = 0;
    lVar9 = lStack_100;
  }
  else {
    puVar6 = &uStack_c0;
    _swift_dynamicCast(puVar6,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_b8;
    uStack_150 = uStack_c0;
    lVar9 = lStack_100;
    if ((int)puVar6 == 0) {
      uStack_150 = 0;
      lVar8 = 0;
    }
  }
  lStack_100 = lVar9;
  if (lVar18 == 0) {
    uStack_118 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d8,lVar18);
    uStack_118 = uStack_d8;
    _swift_bridgeObjectRelease(lVar18);
  }
  if (lVar20 == 0) {
    uStack_120 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_120,lVar20);
    _swift_bridgeObjectRelease(lVar20);
  }
  if (lVar10 == 0) {
    uStack_128 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_128,lVar10);
    _swift_bridgeObjectRelease(lVar10);
  }
  FUN_104844c3c(lVar19,lVar9,0x112d3bc20,&UNK_10d904ef0);
  lVar10 = 0;
  __s10Foundation4UUIDVMa();
  lVar16 = *(long *)(lVar10 + -8);
  pcVar13 = *(code **)(lVar16 + 0x30);
  lVar18 = lVar9;
  (*pcVar13)(lVar9,1,lVar10);
  lVar20 = 0;
  if ((int)lVar18 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar16 + 8))(lVar9,lVar10);
    lVar20 = lVar18;
  }
  if (lVar7 == 0) {
    uVar5 = 0;
    uVar21 = uStack_140;
    lVar18 = lStack_108;
  }
  else {
    uVar5 = uStack_138;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_138,lVar7);
    _swift_bridgeObjectRelease(lVar7);
    uVar21 = uStack_140;
    lVar18 = lStack_108;
  }
  uStack_140 = uVar21;
  lStack_108 = lVar18;
  if (lVar18 == 0) {
    uVar21 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar21,lVar18);
    _swift_bridgeObjectRelease(lVar18);
  }
  FUN_104844c3c(lVar15,lVar14,0x112d3bc20,&UNK_10d904ef0);
  lVar18 = lVar14;
  (*pcVar13)(lVar14,1,lVar10);
  lStack_130 = lVar19;
  if ((int)lVar18 == 1) {
    lVar18 = 0;
    uVar11 = uStack_148;
    lVar14 = lStack_110;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar16 + 8))(lVar14,lVar10);
    uVar11 = uStack_148;
    lVar14 = lStack_110;
  }
  uStack_148 = uVar11;
  lStack_110 = lVar14;
  if (lVar14 == 0) {
    uVar11 = 0;
    uVar17 = uStack_150;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar11,lVar14);
    _swift_bridgeObjectRelease(lVar14);
    uVar17 = uStack_150;
  }
  uStack_150 = uVar17;
  if (lVar8 == 0) {
    uVar17 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar17,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  *(undefined8 *)(lVar19 + -0x10) = uVar11;
  *(undefined8 *)(lVar19 + -8) = uVar17;
  *(undefined8 *)(lVar19 + -0x20) = uVar21;
  *(long *)(lVar19 + -0x18) = lVar18;
  *(long *)(lVar19 + -0x30) = lVar20;
  *(undefined8 *)(lVar19 + -0x28) = uVar5;
  uVar4 = uStack_118;
  uVar3 = uStack_120;
  uVar2 = uStack_128;
  func_0x00010bff1980(unaff_x20);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar20);
  _objc_release(uVar5);
  _objc_release(uVar21);
  _objc_release(lVar18);
  _objc_release(uVar11);
  _objc_release(uVar17);
  _objc_release(param_1);
  func_0x000104844c84(lVar15,0x112d3bc20,&UNK_10d904ef0);
  func_0x000104844c84(lStack_130,0x112d3bc20,&UNK_10d904ef0);
  return unaff_x20;
}



/* Entry: 104845fa8; end: 104845fcf; -[SCSKAdNetworkAttribution initWithCoder:] */

void FUN_104845fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10484537c();
  return;
}



/* Entry: 104845fd0; end: 104846047; -[SCSKAdNetworkAttribution description] */

void FUN_104845fd0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b91fbc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_104846048(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103de0be8(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104846048; end: 104846213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846048(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_113091920);
  uVar6 = puVar1[1];
  uVar7 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar7;
  uVar7 = *(undefined8 *)(param_2 + _DAT_113091930);
  param_1[2] = *(undefined8 *)(param_2 + _DAT_113091928);
  param_1[3] = uVar7;
  param_1[4] = *(undefined8 *)(param_2 + _DAT_113091938);
  puVar1 = (undefined8 *)(param_2 + _DAT_113091940);
  uVar8 = puVar1[1];
  uVar7 = *puVar1;
  param_1[6] = puVar1[1];
  param_1[5] = uVar7;
  puVar1 = (undefined8 *)(param_2 + _DAT_113091948);
  uVar9 = puVar1[1];
  uVar7 = *puVar1;
  param_1[8] = puVar1[1];
  param_1[7] = uVar7;
  lVar4 = _DAT_113815368;
  lVar5 = 0;
  func_0x000100b91fbc();
  FUN_104844c3c(param_2 + lVar4,(long)param_1 + (long)*(int *)(lVar5 + 0x28),0x112d3bc20,
                &UNK_10d904ef0);
  puVar1 = (undefined8 *)(param_2 + _DAT_113815370);
  uVar7 = *puVar1;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar7;
  uVar11 = puVar1[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_113815378);
  uVar12 = puVar1[1];
  uVar7 = *puVar1;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar7;
  FUN_104844c3c(param_2 + _DAT_113815380,(long)param_1 + (long)*(int *)(lVar5 + 0x34),0x112d3bc20,
                &UNK_10d904ef0);
  puVar1 = (undefined8 *)(param_2 + _DAT_113815388);
  uVar7 = *puVar1;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar7;
  uVar10 = puVar1[1];
  uVar7 = *(undefined8 *)(param_2 + _DAT_113815390);
  uVar2 = ((undefined8 *)(param_2 + _DAT_113815390))[1];
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar10);
  _objc_release(param_2);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
  *param_1 = uVar7;
  param_1[1] = uVar2;
  return;
}



/* Entry: 104846214; end: 10484628f; -[SCSKAdNetworkAttribution init] */

void FUN_104846214(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModelExternal/SKAdNetworkAttributionWrapper.swift",0x37,2,0xa9,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10484625c);
  (*pcVar1)();
}



/* Entry: 104846290; end: 10484637b; -[SCSKAdNetworkAttribution .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846290(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091920 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091940 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091948 + 8));
  func_0x000104844c84(param_1 + _DAT_113815368,0x112d3bc20,&UNK_10d904ef0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815370 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815378 + 8));
  func_0x000104844c84(param_1 + _DAT_113815380,0x112d3bc20,&UNK_10d904ef0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815388 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113815390 + 8))
  ;
  return;
}



/* Entry: 10484637c; end: 104846383;  */

void FUN_10484637c(void)

{
  if (lRam0000000113091978 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81d61c);
  return;
}



/* Entry: 104846384; end: 1048463bb;  */

void FUN_104846384(undefined8 param_1)

{
  if (lRam0000000113091978 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81d61c);
  return;
}



/* Entry: 1048463bc; end: 10484644f;  */

void FUN_1048463bc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_80 = &UNK_10dd36e60;
  puStack_60 = &UNK_10dd36e60;
  puStack_58 = &UNK_10dd36e60;
  lVar1 = 0x13f;
  puStack_70 = puStack_78;
  puStack_68 = puStack_78;
  func_0x0001000b88b8();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10dd36e60;
    puStack_40 = &UNK_10dd36e60;
    puStack_30 = &UNK_10dd36e60;
    puStack_28 = &UNK_10dd36e60;
    lStack_38 = lStack_50;
    _swift_updateClassMetadata2(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
  }
  return;
}



/* Entry: 104846450; end: 10484645f; -[WebBrowsingSecureAccessServices secureGuardObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091990));
  return;
}



/* Entry: 104846460; end: 1048464e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104846460(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091988) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113091990) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 1048464e4; end: 104846543; -[WebBrowsingSecureAccessServices init] */

void FUN_1048464e4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebBrowsingSecureAccessServices.WebBrowsingSecureAccessServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104846510);
  (*pcVar1)();
}



/* Entry: 104846544; end: 10484657b; -[WebBrowsingSecureAccessServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846544(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113091988));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091990));
  return;
}



/* Entry: 10484657c; end: 104846647; -[SCWebView id] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484657c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130919c0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104846648; end: 10484671b; -[SCWebView setId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846648(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130919c0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10484671c; end: 10484675b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10484671c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130919c0;
  _swift_beginAccess(unaff_x20 + _DAT_1130919c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10484874c;
  return auVar2;
}



/* Entry: 10484675c; end: 1048467ef; -[SCWebView keyboardAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10484675c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130919c8;
  _swift_beginAccess(param_1 + _DAT_1130919c8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1048467f0; end: 1048467fb; -[SCWebView setKeyboardAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048467f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130919c8;
  _swift_beginAccess(param_1 + _DAT_1130919c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1048467fc; end: 10484684f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048467fc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130919c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130919c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 104846850; end: 10484688f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_104846850(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130919c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130919c8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104846890;
  return auVar2;
}



/* Entry: 104846890; end: 104846893;  */

void FUN_104846890(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104846894; end: 104846927; -[SCWebView keyboardView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846894(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130919d0;
  _swift_beginAccess(param_1 + _DAT_1130919d0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 104846928; end: 104846933; -[SCWebView setKeyboardView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130919d0;
  _swift_beginAccess(param_1 + _DAT_1130919d0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 104846934; end: 1048469e7;  */

void FUN_104846934(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1048469e8; end: 104846a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048469e8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1130919d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130919d0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104848750;
  return auVar2;
}



/* Entry: 104846a28; end: 104846b5b; -[SCWebView initialURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846a28(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_113815398;
  puVar4 = auStack_50 + -extraout_x8;
  _swift_beginAccess(param_1 + _DAT_113815398,auStack_48,0,0);
  func_0x000100029394(param_1 + lVar1,puVar4);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104846b5c; end: 104846c53; -[SCWebView setInitialURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846b5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation3URLVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_113815398;
  _swift_beginAccess(param_1 + _DAT_113815398,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x0001014522e4(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 104846c54; end: 104846d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104846c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffa0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130919c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130919c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130919d0) = 0;
  *(undefined **)(unaff_x20 + _DAT_1130919d8) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_1130919e0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_104848578();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_113815398;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar5);
  FUN_104848678();
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame_configuration__1125e2a10,param_5);
  iVar3 = 2;
  func_0x000100029b9c(2,0x10,4,0);
  if (iVar3 != 0) {
    puVar7 = puVar6;
    _objc_retain(puVar6);
    func_0x00010c1ada00();
    _objc_release(puVar7);
  }
  _objc_release(param_5);
  return puVar6;
}



/* Entry: 104846d94; end: 104846deb; -[SCWebView initWithFrame:configuration:] */

void FUN_104846d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  FUN_104846c54(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104846dec; end: 104846eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104846dec(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffc0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130919c0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130919c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_1130919d0) = 0;
  *(undefined **)(unaff_x20 + _DAT_1130919d8) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar2 = _DAT_1130919e0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_104848578();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_113815398;
  lVar5 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar5);
  FUN_104848678();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar6 != (undefined1 *)0x0) {
    iVar3 = 2;
    func_0x000100029b9c(2,0x10,4,0);
    if (iVar3 != 0) {
      puVar7 = puVar6;
      _objc_retain(puVar6);
      func_0x00010c1ada00();
      _objc_release(puVar7);
    }
  }
  _objc_release(param_1);
  return puVar6;
}



/* Entry: 104846f00; end: 104846f27; -[SCWebView initWithCoder:] */

void FUN_104846f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104846dec();
  return;
}



/* Entry: 104846f28; end: 104846f3b; -[SCWebView inputAccessoryView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846f28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130919c8;
  _swift_beginAccess(param_1 + _DAT_1130919c8,auStack_48,0,0);
  plVar4 = *(long **)(param_1 + lVar1);
  plVar3 = plVar4;
  if (plVar4 == (long *)0x0) {
    uVar2 = 0;
    FUN_104848678();
    plVar3 = &lStack_58;
    lStack_58 = param_1;
    uStack_50 = uVar2;
    _objc_msgSendSuper2(plVar3,PTR_s_inputAccessoryView_1125f6fa8);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104846f3c; end: 104846f4f; -[SCWebView inputView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846f3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130919d0;
  _swift_beginAccess(param_1 + _DAT_1130919d0,auStack_48,0,0);
  plVar4 = *(long **)(param_1 + lVar1);
  plVar3 = plVar4;
  if (plVar4 == (long *)0x0) {
    uVar2 = 0;
    FUN_104848678();
    plVar3 = &lStack_58;
    lStack_58 = param_1;
    uStack_50 = uVar2;
    _objc_msgSendSuper2(plVar3,PTR_s_inputView_1125f72b0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 104846f50; end: 104846fd3;  */

void FUN_104846f50(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_3;
  _swift_beginAccess(param_1 + lVar3,auStack_48,0,0);
  plVar4 = *(long **)(param_1 + lVar3);
  plVar2 = plVar4;
  if (plVar4 == (long *)0x0) {
    uVar1 = 0;
    FUN_104848678();
    plVar2 = &lStack_58;
    lStack_58 = param_1;
    uStack_50 = uVar1;
    _objc_msgSendSuper2(plVar2,*param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 104846fd4; end: 1048475f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104846fd4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar6 = _DAT_1130919d8;
  uVar20 = *(ulong *)(param_1 + _DAT_113091a28);
  uVar2 = ((ulong *)(param_1 + _DAT_113091a28))[1];
  uVar14 = uVar20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar14 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar14 != 0) {
    _swift_beginAccess(unaff_x20 + _DAT_1130919d8,auStack_80,0,0);
    uVar16 = *(undefined8 *)(unaff_x20 + lVar6);
    _swift_bridgeObjectRetain(uVar16);
    uVar14 = uVar20;
    func_0x0001000f66f0(uVar20,uVar2,uVar16);
    _swift_bridgeObjectRelease(uVar16);
    if ((uVar14 & 1) == 0) {
      _swift_beginAccess(unaff_x20 + lVar6,auStack_98,0x21,0);
      _swift_bridgeObjectRetain(uVar2);
      func_0x000100403b00(auStack_c0,uVar20,uVar2);
      _swift_endAccess(auStack_98);
      _swift_bridgeObjectRelease(uStack_b8);
      uVar20 = *(ulong *)(param_1 + _DAT_113091a30);
      uVar2 = ((ulong *)(param_1 + _DAT_113091a30))[1];
      uVar14 = uVar20 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar14 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar14 != 0) {
        puVar5 = PTR__OBJC_CLASS___WKUserScript_1126d6bd0;
        _objc_allocWithZone(PTR__OBJC_CLASS___WKUserScript_1126d6bd0);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar20,uVar2);
        func_0x00010c04a760(puVar5);
        _objc_release(uVar20);
        lVar6 = unaff_x20;
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar6;
        func_0x00010c291760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
        func_0x00010befc7c0(lVar13);
        _objc_release(puVar5);
        _objc_release(lVar13);
      }
      lVar6 = _DAT_1130919e0;
      lVar13 = *(long *)(param_1 + _DAT_113091a38);
      uVar14 = *(ulong *)(lVar13 + 0x10);
      if (uVar14 != 0) {
        uVar20 = 0;
        do {
          if (*(ulong *)(lVar13 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1048475e8);
            (*pcVar4)();
          }
          puVar1 = (ulong *)(lVar13 + 0x20 + uVar20 * 0x10);
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          uVar7 = uVar3;
          _swift_bridgeObjectRetain();
          FUN_10484887c();
          if (uVar7 >> 0x3e == 0) {
            uVar21 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar21 = uVar7 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar7) {
              uVar21 = uVar7;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar21 != 0) {
            _swift_beginAccess(unaff_x20 + lVar6,auStack_98,0,0);
            lVar22 = 4;
            do {
              uVar17 = lVar22 - 4;
              if ((uVar7 & 0xc000000000000001) == 0) {
                if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1048475e0);
                  (*pcVar4)();
                }
                uVar23 = *(ulong *)(uVar7 + lVar22 * 8);
                _swift_unknownObjectRetain(uVar23);
              }
              else {
                uVar23 = uVar17;
                func_0x000104847e78(uVar17,uVar7);
              }
              if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1048475d8);
                (*pcVar4)();
              }
              uVar17 = lVar22 - 3;
              lVar18 = *(long *)(unaff_x20 + lVar6);
              if (*(long *)(lVar18 + 0x10) == 0) {
LAB_10484731c:
                lVar8 = 0;
                FUN_1048493cc();
                lVar19 = lVar8;
                _objc_allocWithZone();
                lVar18 = _DAT_113091a90;
                puVar5 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
                _objc_opt_self();
                func_0x00010c2a2b60();
                _objc_retainAutoreleasedReturnValue();
                *(undefined **)(lVar19 + lVar18) = puVar5;
                lVar18 = _DAT_113091a98;
                _swift_unknownObjectWeakInit(lVar19 + _DAT_113091a98,0);
                _swift_unknownObjectWeakAssign(lVar19 + lVar18,unaff_x20);
                plVar9 = &lStack_a8;
                lStack_a8 = lVar19;
                lStack_a0 = lVar8;
                _objc_msgSendSuper2(plVar9,PTR_s_init_1125d9248);
                _swift_beginAccess(unaff_x20 + lVar6,auStack_c0,0x21,0);
                _objc_retain();
                uVar10 = *(ulong *)(unaff_x20 + lVar6);
                _swift_isUniquelyReferenced_nonNull_native();
                lVar19 = *(long *)(unaff_x20 + lVar6);
                *(undefined8 *)(unaff_x20 + lVar6) = 0x8000000000000000;
                uVar11 = uVar2;
                uVar12 = uVar3;
                func_0x000100029284();
                uVar15 = (ulong)~(uint)uVar12 & 1;
                lVar18 = *(long *)(lVar19 + 0x10) + uVar15;
                if (SCARRY8(*(long *)(lVar19 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1048475dc);
                  (*pcVar4)();
                }
                if (*(long *)(lVar19 + 0x18) < lVar18) {
                  FUN_1048482dc(lVar18,uVar10);
                  uVar11 = uVar2;
                  uVar10 = uVar3;
                  func_0x000100029284();
                  if (((uint)uVar12 & 1) != ((uint)uVar10 & 1)) {
                    __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                              (PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1048475f8);
                    (*pcVar4)();
                  }
LAB_10484743c:
                  if ((uVar12 & 1) != 0) goto LAB_104847444;
LAB_10484747c:
                  lVar18 = lVar19 + (uVar11 >> 6) * 8;
                  *(ulong *)(lVar18 + 0x40) = *(ulong *)(lVar18 + 0x40) | 1L << (uVar11 & 0x3f);
                  puVar1 = (ulong *)(*(long *)(lVar19 + 0x30) + uVar11 * 0x10);
                  *puVar1 = uVar2;
                  puVar1[1] = uVar3;
                  *(long **)(*(long *)(lVar19 + 0x38) + uVar11 * 8) = plVar9;
                  if (SCARRY8(*(long *)(lVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1048475e4);
                    (*pcVar4)();
                  }
                  *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + 1;
                  _swift_bridgeObjectRetain(uVar3);
                }
                else {
                  if ((uVar10 & 1) != 0) goto LAB_10484743c;
                  func_0x00010484816c();
                  if ((uVar12 & 1) == 0) goto LAB_10484747c;
LAB_104847444:
                  uVar16 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + uVar11 * 8);
                  *(long **)(*(long *)(lVar19 + 0x38) + uVar11 * 8) = plVar9;
                  _objc_release(uVar16);
                }
                *(long *)(unaff_x20 + lVar6) = lVar19;
                _swift_endAccess(auStack_c0);
                lVar18 = unaff_x20;
                func_0x00010bf46560(unaff_x20);
                _objc_retainAutoreleasedReturnValue();
                lVar19 = lVar18;
                func_0x00010c291760();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar18);
                _objc_retain(plVar9);
                uVar11 = uVar2;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
                func_0x00010befb220(lVar19);
                _objc_release(lVar19);
                _objc_release(plVar9);
                _objc_release(plVar9);
                _objc_release(uVar11);
              }
              else {
                _swift_bridgeObjectRetain(lVar18);
                uVar11 = uVar3;
                func_0x000100029284(uVar2);
                _swift_bridgeObjectRelease(lVar18);
                if ((uVar11 & 1) == 0) goto LAB_10484731c;
              }
              lVar18 = *(long *)(unaff_x20 + lVar6);
              if (*(long *)(lVar18 + 0x10) == 0) {
LAB_10484728c:
                _swift_unknownObjectRelease(uVar23);
              }
              else {
                _swift_bridgeObjectRetain(lVar18);
                uVar11 = uVar2;
                uVar12 = uVar3;
                func_0x000100029284();
                if ((uVar12 & 1) != 0) {
                  lVar19 = *(long *)(*(long *)(lVar18 + 0x38) + uVar11 * 8);
                  _objc_retain();
                  _swift_bridgeObjectRelease(lVar18);
                  func_0x00010befa120(*(undefined8 *)(lVar19 + _DAT_113091a90));
                  _objc_release(lVar19);
                  goto LAB_10484728c;
                }
                _swift_unknownObjectRelease(uVar23);
                _swift_bridgeObjectRelease(lVar18);
              }
              lVar22 = lVar22 + 1;
            } while (uVar17 != uVar21);
          }
          uVar20 = uVar20 + 1;
          _swift_bridgeObjectRelease(uVar3);
          _swift_bridgeObjectRelease(uVar7);
        } while (uVar20 != uVar14);
      }
    }
  }
  return;
}



/* Entry: 1048475f8; end: 104847647; -[SCWebView addScript:] */

void FUN_1048475f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104846fd4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104847648; end: 1048478bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104847648(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [24];
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = _DAT_1130919e0;
  _swift_beginAccess(unaff_x20 + _DAT_1130919e0,auStack_78,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar9 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar9);
    uVar7 = param_3;
    func_0x000100029284(param_2);
    _swift_bridgeObjectRelease(lVar9);
    if ((uVar7 & 1) != 0) goto LAB_10484783c;
  }
  lVar1 = 0;
  FUN_1048493cc();
  lVar2 = lVar1;
  _objc_allocWithZone();
  lVar9 = _DAT_113091a90;
  puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  _objc_opt_self();
  lVar4 = unaff_x20;
  _objc_retain();
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(lVar2 + lVar9) = puVar3;
  lVar9 = _DAT_113091a98;
  _swift_unknownObjectWeakInit(lVar2 + _DAT_113091a98,0);
  _swift_unknownObjectWeakAssign(lVar2 + lVar9,lVar4);
  plVar5 = &lStack_88;
  lStack_88 = lVar2;
  lStack_80 = lVar1;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  _objc_release(lVar4);
  _swift_beginAccess(unaff_x20 + lVar10,auStack_a0,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  _objc_retain(plVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar10);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar10);
  *(undefined8 *)(unaff_x20 + lVar10) = 0x8000000000000000;
  FUN_10484801c(plVar5,param_2,param_3,uVar6);
  _swift_bridgeObjectRelease(param_3);
  *(undefined8 *)(unaff_x20 + lVar10) = uVar8;
  _swift_endAccess(auStack_a0);
  func_0x00010bf46560(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar4;
  func_0x00010c291760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_retain(plVar5);
  lVar2 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  func_0x00010befb220(lVar9);
  _objc_release(lVar9);
  _objc_release(plVar5);
  _objc_release(plVar5);
  _objc_release(lVar2);
LAB_10484783c:
  lVar10 = *(long *)(unaff_x20 + lVar10);
  if (*(long *)(lVar10 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar10);
    func_0x000100029284();
    if ((param_3 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar10);
    }
    else {
      lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + param_2 * 8);
      _objc_retain();
      _swift_bridgeObjectRelease(lVar10);
      func_0x00010befa120(*(undefined8 *)(lVar9 + _DAT_113091a90));
      _objc_release(lVar9);
    }
  }
  return;
}



/* Entry: 1048478bc; end: 1048478c7; -[SCWebView addScriptMessageHandler:forName:] */

void FUN_1048478bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_104847648(param_3,param_4,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1048478c8; end: 104847983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048478c8(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_1130919e0;
  _swift_beginAccess(unaff_x20 + _DAT_1130919e0,auStack_58,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar2);
    func_0x000100029284();
    if ((param_3 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar2);
    }
    else {
      lVar1 = *(long *)(*(long *)(lVar2 + 0x38) + param_2 * 8);
      _objc_retain();
      _swift_bridgeObjectRelease(lVar2);
      func_0x00010c12d360(*(undefined8 *)(lVar1 + _DAT_113091a90));
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 104847984; end: 10484798f; -[SCWebView removeScriptMessageHandler:forName:] */

void FUN_104847984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_1048478c8(param_3,param_4,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104847990; end: 104847a0b;  */

void FUN_104847990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  (*param_5)(param_3,param_4,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104847a0c; end: 104847c4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104847a0c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar7 = _DAT_1130919c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130919c8,auStack_78,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined8 *)(unaff_x20 + lVar7) = 0;
  _objc_release(uVar6);
  lVar7 = _DAT_1130919d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130919d0,auStack_90,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined8 *)(unaff_x20 + lVar7) = 0;
  _objc_release(uVar6);
  lVar7 = unaff_x20;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar7;
  func_0x00010c291760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c12b160(lVar11);
  _objc_release(lVar11);
  lVar7 = _DAT_1130919e0;
  _swift_beginAccess(unaff_x20 + _DAT_1130919e0,auStack_a8,1,0);
  lVar11 = *(long *)(unaff_x20 + lVar7);
  uVar10 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar11 + 0x40);
  _swift_bridgeObjectRetain(lVar11);
  lVar13 = 0;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar3 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(lVar11 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar13 * 0x400);
      uVar6 = *puVar1;
      uVar2 = puVar1[1];
      _swift_bridgeObjectRetain(uVar2);
      lVar8 = unaff_x20;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c291760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      func_0x00010c12e260(lVar9);
      _objc_release(lVar9);
      _objc_release(uVar6);
    }
    bVar5 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar5) break;
    if ((long)(uVar10 + 0x3f >> 6) <= lVar13) {
      _swift_release(lVar11);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
      *(undefined **)(unaff_x20 + lVar7) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      _swift_bridgeObjectRelease(uVar6);
      lVar7 = _DAT_1130919d8;
      _swift_beginAccess(unaff_x20 + _DAT_1130919d8,auStack_c0,1,0);
      uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
      *(undefined **)(unaff_x20 + lVar7) = PTR___swiftEmptySetSingleton_11034f1d8;
      _swift_bridgeObjectRelease(uVar6);
      return;
    }
    uVar12 = ((ulong *)(lVar11 + 0x40))[lVar13];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104847c4c);
  (*pcVar4)();
}


