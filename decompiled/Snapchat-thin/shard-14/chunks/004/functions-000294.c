/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b228c2c; end: 10b228e8b;  */

/* WARNING: Possible PIC construction at 0x00010b228e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b228e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b228e08) */
/* WARNING: Removing unreachable block (ram,0x00010b228e30) */
/* WARNING: Removing unreachable block (ram,0x00010b228e7c) */
/* WARNING: Removing unreachable block (ram,0x00010b228e14) */
/* WARNING: Removing unreachable block (ram,0x00010b228e88) */

undefined8 * FUN_10b228c2c(long param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined **ppuVar8;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 auStack_108 [16];
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [24];
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  func_0x00010b22eb60();
  func_0x000107c351a8();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x18);
  uStack_e8 = uVar2;
  lStack_e0 = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c30404(auStack_108);
  uStack_130 = uVar2;
  lStack_128 = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10_00 != 0);
  }
  lStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  if (unaff_x20[1] != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10_01 != 0);
  }
  ppuVar6 = (undefined **)0x198;
  __Znwm();
  ppuVar8 = ppuVar6 + 1;
  *ppuVar8 = (undefined *)0x0;
  ppuVar6[2] = (undefined *)0x0;
  *ppuVar6 = (undefined *)&PTR_FUN_110cc9640;
  func_0x000107c278b8(auStack_d8,&DAT_10f73aa8b);
  lStack_a8 = lStack_128;
  uStack_b0 = uStack_130;
  ppuVar1 = ppuVar6 + 3;
  puStack_90 = (undefined *)0x10b20e52c;
  ppuStack_88 = &PTR_DAT_110cc7090;
  puStack_80 = &UNK_10054f908;
  ppuStack_c0 = (undefined **)FUN_10b22d1c4;
  ppuStack_b8 = &PTR_FUN_110cc9778;
  uStack_130 = 0;
  lStack_128 = 0;
  lStack_98 = lStack_118;
  uStack_a0 = uStack_120;
  if (lStack_118 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10_02 != 0);
  }
  FUN_10b2206f8(ppuVar1,auStack_d8,auStack_108,&puStack_90,&ppuStack_c0);
  func_0x00010b22ebe0();
  func_0x00010b22ebd0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  ppuVar7 = (undefined **)ppuVar6[4];
  ppuStack_f8 = ppuVar1;
  ppuStack_f0 = ppuVar6;
  if ((ppuVar7 == (undefined **)0x0) || (ppuVar7[1] == (undefined *)0xffffffffffffffff)) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar5) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar8 = ppuVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar5) {
        *ppuVar8 = *ppuVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puStack_90 = ppuVar6[3];
    ppuVar6[3] = (undefined *)(ppuVar6 + 3);
    ppuVar6[4] = (undefined *)ppuVar6;
    ppuStack_c0 = ppuVar1;
    ppuStack_b8 = ppuVar6;
    ppuStack_88 = ppuVar7;
    FUN_10b223424(&puStack_90);
    func_0x00010b223484(&ppuStack_c0);
  }
  func_0x00010b22dd64(0);
  ppuStack_f8 = (undefined **)0x0;
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_88 = (undefined **)unaff_x19[1];
  puStack_90 = (undefined *)*unaff_x19;
  *unaff_x19 = (long)ppuVar1;
  unaff_x19[1] = (long)ppuVar6;
  func_0x00010b223484(&puStack_90);
  func_0x00010b223484(&ppuStack_f8);
  FUN_10b228e8c(&uStack_130);
  func_0x000107c27d08(auStack_108);
  FUN_10b2207f4(*unaff_x19);
  if (lStack_e0 != 0) {
    func_0x000107c278a0();
  }
  return &uStack_e8;
}



/* Entry: 10b228e8c; end: 10b228eb3;  */

long FUN_10b228e8c(long param_1)

{
  func_0x0001052b243c(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b228eb4; end: 10b228f2f;  */

void FUN_10b228eb4(undefined8 *param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010b22eb60();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27e9c();
  lVar1 = unaff_x20[1];
  for (lVar2 = *unaff_x20; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    func_0x000107c27eac();
  }
  return;
}



/* Entry: 10b228f30; end: 10b22a54f;  */

void FUN_10b228f30(undefined8 *param_1,long ***param_2,long ****param_3,long *param_4,
                  long ****param_5,undefined8 *param_6,long ****param_7,long ****param_8,
                  long ****param_9,long ***param_10,long ***param_11,long ***param_12)

{
  long lVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined *puVar11;
  undefined8 ****ppppuVar12;
  long **pplVar13;
  long **pplVar14;
  long ****pppplVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  byte bVar21;
  long ****pppplVar22;
  undefined **ppuVar23;
  long lVar24;
  long lVar25;
  long ***ppplVar26;
  long ***ppplVar27;
  long lVar28;
  long ****pppplVar29;
  undefined **ppuVar30;
  ulong uVar31;
  undefined4 *puVar32;
  ulong uVar33;
  long lVar34;
  undefined4 uVar35;
  undefined4 auStack_c40 [6];
  long ***ppplStack_c28;
  undefined4 uStack_c20;
  undefined1 auStack_c18 [56];
  undefined1 auStack_be0 [8];
  ulong uStack_bd8;
  undefined1 auStack_bd0 [24];
  undefined1 auStack_bb8 [96];
  undefined1 auStack_b58 [16];
  undefined1 auStack_b48 [32];
  undefined1 auStack_b28 [16];
  undefined4 uStack_b18;
  undefined4 uStack_b14;
  long lStack_b10;
  undefined4 uStack_b08;
  undefined4 uStack_afc;
  undefined4 uStack_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_ae8;
  long **pplStack_ad0;
  undefined8 *puStack_ac8;
  long ***ppplStack_ac0;
  long *plStack_ab8;
  long ***ppplStack_ab0;
  long ***ppplStack_aa8;
  ulong uStack_aa0;
  long ***ppplStack_a98;
  long ***ppplStack_a90;
  long ***ppplStack_a88;
  undefined1 *puStack_a80;
  code *pcStack_a78;
  long ***ppplStack_a70;
  int iStack_a68;
  long ***ppplStack_a60;
  undefined1 *puStack_a58;
  undefined8 *puStack_a50;
  long ***ppplStack_a48;
  long **pplStack_a40;
  long ***ppplStack_a38;
  long **pplStack_a30;
  long ***ppplStack_a28;
  long ***ppplStack_a20;
  undefined1 auStack_a18 [104];
  long lStack_9b0;
  undefined8 uStack_9a8;
  undefined8 ***pppuStack_9a0;
  ulong uStack_998;
  byte bStack_989;
  long **applStack_988 [13];
  long **applStack_920 [13];
  long *aplStack_8b8 [8];
  long **applStack_878 [13];
  undefined1 auStack_810 [96];
  undefined1 uStack_7b0;
  long *aplStack_7a8 [7];
  undefined1 uStack_770;
  int iStack_764;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined4 uStack_740;
  long lStack_738;
  long lStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  long lStack_708;
  long lStack_700;
  undefined8 uStack_6f8;
  long **applStack_6f0 [13];
  undefined1 auStack_688 [96];
  undefined1 uStack_628;
  long *aplStack_620 [7];
  undefined1 uStack_5e8;
  long ***ppplStack_5e0;
  long ***ppplStack_5d8;
  long **applStack_5c8 [13];
  undefined1 auStack_560 [96];
  undefined1 uStack_500;
  long *aplStack_4f8 [7];
  undefined1 uStack_4c0;
  undefined1 auStack_4b8 [16];
  long **pplStack_4a8;
  long **pplStack_4a0;
  long **pplStack_498;
  long lStack_490;
  long **pplStack_468;
  undefined8 uStack_460;
  long ***ppplStack_450;
  long ***ppplStack_448;
  undefined8 uStack_440;
  long ***ppplStack_438;
  long ***ppplStack_430;
  byte bStack_421;
  long **pplStack_420;
  undefined8 *puStack_418;
  long lStack_410;
  long **pplStack_408;
  long lStack_400;
  long **pplStack_3f8;
  long lStack_3f0;
  long ***ppplStack_3e8;
  long **pplStack_3e0;
  undefined7 uStack_3d8;
  undefined1 uStack_3d1;
  long **pplStack_310;
  long **pplStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long ***ppplStack_258;
  long ***ppplStack_250;
  undefined1 auStack_248 [88];
  long ***ppplStack_1f0;
  ulong uStack_1e8;
  long **pplStack_1e0;
  long **pplStack_1d8;
  long ***ppplStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [24];
  long ***ppplStack_148;
  undefined1 auStack_140 [8];
  long ***ppplStack_138;
  undefined8 uStack_130;
  long ***ppplStack_128;
  long **pplStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [112];
  undefined8 uStack_78;
  
  pppplVar8 = param_3;
  pppplVar22 = param_8;
  pppplVar29 = param_9;
  pplStack_a30 = (long **)param_10;
  ppplStack_a20 = (long ***)param_5;
  func_0x000107c351a8();
  *(undefined4 *)*pppplVar22 = 0;
  uStack_78 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar5 = *(int *)(*param_4 + 0x2c) == 3;
  if ((bool)uVar5) {
    ppuVar30 = *(undefined ***)(*param_4 + 0x20);
  }
  else {
    ppuVar30 = &PTR_PTR_113373710;
  }
  pppplVar9 = (long ****)ppuVar30;
  FUN_10b22f388();
  if (((ulong)pppplVar9 & 1) == 0) {
    func_0x00010b22eb48(0x65);
    func_0x00010b22e96c();
    func_0x00010b22e894();
    aplStack_4f8[0]._0_1_ = 0;
    uStack_4c0 = 0;
    auStack_560[0] = 0;
    uStack_500 = 0;
    func_0x00010b22eaf0(applStack_5c8);
    iStack_a68 = 3;
    ppplStack_a60 = applStack_5c8;
    func_0x00010b22e98c(auStack_560);
    param_10 = (long ***)aplStack_4f8;
    func_0x00010b22e95c();
    func_0x00010b121ac0(applStack_5c8);
    FUN_10b22afe4(auStack_560);
    func_0x00010b22b004(aplStack_4f8);
    func_0x00010b22ea38();
    func_0x00010b22ea30();
    func_0x00010b22ea28();
    func_0x00010b22ea60();
    pplStack_3e0 = (long **)0x0;
    ppplStack_3e8 = (long ***)0x0;
    func_0x00010b22ea54();
    func_0x00010b22e9dc();
    goto LAB_10b229eec;
  }
  FUN_10b22f4d8(&ppplStack_5e0,param_4,param_3 + 2);
  uVar5 = (long)ppplStack_5d8 - (long)ppplStack_5e0 == 0;
  *(int *)*param_8 = (int)((long)ppplStack_5d8 - (long)ppplStack_5e0 >> 3);
  if ((bool)uVar5) {
    func_0x00010b22eb48(0x67);
    func_0x00010b22e96c();
    func_0x00010b22e894();
    aplStack_620[0]._0_1_ = 0;
    uStack_5e8 = 0;
    auStack_688[0] = 0;
    uStack_628 = 0;
    func_0x00010b22eaf0(applStack_6f0);
    iStack_a68 = 4;
    ppplStack_a60 = applStack_6f0;
    func_0x00010b22e98c(auStack_688);
    param_10 = (long ***)aplStack_620;
    func_0x00010b22e95c();
    func_0x00010b121ac0(applStack_6f0);
    FUN_10b22afe4(auStack_688);
    func_0x00010b22b004(aplStack_620);
    func_0x00010b22ea38();
    func_0x00010b22ea30();
    func_0x00010b22ea28();
    func_0x00010b22ea60();
    pplStack_3e0 = (long **)0x0;
    ppplStack_3e8 = (long ***)0x0;
    func_0x00010b22ea54();
    func_0x00010b22e9dc();
    goto LAB_10b229ee4;
  }
  lStack_700 = 0;
  lStack_708 = 0;
  uStack_6f8 = 0;
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_710 = 0;
  FUN_10b22a850(&lStack_708);
  lStack_730 = 0;
  lStack_738 = 0;
  uStack_728 = 0;
  FUN_10b22a850(&lStack_738,param_9[3]);
  bVar21 = 0;
  pplStack_a40 = (long **)param_11;
  param_2 = (long ***)0x0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_740 = 0x3f800000;
  iStack_764 = 0;
  pppplVar9 = (long ****)ppplStack_5e0;
  ppplStack_a38 = (long ***)param_7;
  ppplStack_a28 = (long ***)ppuVar30;
  if (*(char *)(param_12 + 0xc) == '\x01') {
    bVar21 = *(byte *)(param_12 + 3);
  }
  for (; pppplVar9 != (long ****)ppplStack_5d8; pppplVar9 = pppplVar9 + 1) {
    pppplVar10 = (long ****)*pppplVar9;
    ppplStack_1f0 = (long ***)pppplVar10;
    if (((*(byte *)(param_6[1] + 8) & 1) != 0) ||
       ((*(code *)*param_6)(pppplVar10,param_6), ((ulong)pppplVar10 & 1) != 0)) {
      if (param_9[3] == (long ***)0x0 || (bVar21 & 1) != 0) {
        FUN_10b22ee10(&ppplStack_3e8,ppplStack_1f0,param_4,&iStack_764,param_3 + 2);
        if ((long ****)ppplStack_3e8 != (long ****)0x0) {
          FUN_10b22a8c8(&uStack_760,&ppplStack_1f0);
          FUN_10b22a8fc();
          func_0x00010b22ed24(&lStack_708);
        }
        func_0x00010b22e9dc();
      }
      else {
        pppplVar10 = param_9;
        FUN_10b22e2c4(param_9,&ppplStack_1f0);
        if (pppplVar10 != (long ****)0x0) {
          func_0x00010b22ed24(&lStack_738);
          func_0x00010b22ed24(&lStack_708);
        }
      }
    }
  }
  if (lStack_708 == lStack_700) {
    func_0x00010b22eb48(0x66);
    uVar5 = iStack_764 == 0;
    iStack_a68 = 5;
    if (!(bool)uVar5) {
      iStack_a68 = iStack_764;
    }
    func_0x00010b22e96c();
    func_0x00010b22e894();
    aplStack_7a8[0]._0_1_ = 0;
    uStack_770 = 0;
    auStack_810[0] = 0;
    uStack_7b0 = 0;
    param_9 = (long ****)applStack_878;
    func_0x00010b22eaf0(applStack_878);
    ppplStack_a60 = (long ***)param_9;
    func_0x00010b22e98c(auStack_810);
    param_10 = (long ***)aplStack_7a8;
    func_0x00010b22e95c();
    func_0x00010b121ac0(applStack_878);
    FUN_10b22afe4(auStack_810);
    func_0x00010b22b004(aplStack_7a8);
    func_0x00010b22ea38();
    func_0x00010b22ea30();
    func_0x00010b22ea28();
    func_0x00010b22ea60();
    pplStack_3e0 = (long **)0x0;
    ppplStack_3e8 = (long ***)0x0;
    func_0x00010b22ea54();
    func_0x00010b22e9dc();
    ppuVar30 = (undefined **)ppplStack_5d8;
    goto LAB_10b229ec4;
  }
  uVar5 = 0;
  pppplVar9 = (long ****)ppplStack_a38;
  ppuVar30 = (undefined **)ppplStack_a28;
  if ((bVar21 & 1) != 0) goto LAB_10b2293b8;
  param_7 = (long ****)ppplStack_a38;
  if ((bRam00000001137f42b0 & 1) == 0) goto LAB_10b229fd8;
  do {
    if ((((bRam00000001137f42a8 & 1) == 0) || (uVar5 = lStack_730 - lStack_738 == 8, !(bool)uVar5))
       || (func_0x00010b22ed68(), !(bool)uVar5)) {
LAB_10b2293b8:
      ppplVar26 = (long ***)ppuVar30[7];
      func_0x000107c30404(&pplStack_4a8);
      if ((long ***)pplStack_4a8 == (long ***)0x0) {
        func_0x00010b22eb48(0x71);
      }
      else {
        pppplVar10 = param_3 + 0xd;
        ppplStack_3e8 = (long ***)param_3;
        pplStack_3e0 = pplStack_4a8;
        _uStack_3d8 = (long ***)pplStack_4a0;
        if ((long ***)pplStack_4a0 != (long ***)0x0) {
          do {
            func_0x000107c351a4();
          } while (extraout_w10 != 0);
        }
        uVar5 = *pppplVar10 == (long ***)0xffffffffffffffff;
        if (!(bool)uVar5) {
          ppplStack_1f0 = (long ***)&ppplStack_3e8;
          ppplStack_258 = (long ***)&ppplStack_1f0;
          __ZNSt3__111__call_onceERVmPvPFvS2_E();
        }
        func_0x000107c27d08(&pplStack_3e0);
      }
      func_0x00010b22ec1c();
      if ((long ****)ppplStack_3e8 != (long ****)0x0) {
        func_0x00010b22ec1c();
        uVar17 = SUB84(pppplVar22,0);
        if ((long ****)ppplStack_3e8 == (long ****)0x0) {
          puVar11 = &UNK_10f73ac49;
          puVar18 = (undefined8 *)0x576;
          puVar20 = (undefined8 *)0xb;
          func_0x00010bdb2a08(&ppplStack_258,&UNK_10f73abae,0x576,&UNK_10f73ac49);
          pppplVar22 = &ppplStack_258;
          FUN_10b22d104(pppplVar22,&UNK_10f73ac55);
          func_0x00010b22ed40(&ppplStack_1f0);
          pppplVar10 = &ppplStack_1f0;
          func_0x00010ae6c448(pppplVar22,pppplVar10);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev(&ppplStack_1f0);
          pppplVar22 = &ppplStack_258;
          func_0x00010ae6c700();
          func_0x000107c27d08(&pplStack_4a8);
          func_0x00010b22dd94(&uStack_760);
          FUN_10b22bec4(&lStack_738);
          FUN_10b22bec4(&uStack_720);
          FUN_10b22bec4(&lStack_708);
          pppplVar15 = &ppplStack_5e0;
          FUN_10b22bec4();
          func_0x00010b22e8ec();
          pcStack_a78 = FUN_10b22a550;
          if (*pppplVar15 != (long ***)0x0) {
            pplStack_ad0 = (long **)param_12;
            puStack_ac8 = param_1;
            ppplStack_ac0 = (long ***)pppplVar8;
            plStack_ab8 = param_4;
            ppplStack_ab0 = (long ***)ppuVar30;
            ppplStack_aa8 = (long ***)pppplVar9;
            uStack_aa0 = (ulong)ppplVar26 & 0xfffffffffffffffc;
            ppplStack_a98 = (long ***)param_3;
            ppplStack_a90 = (long ***)param_9;
            ppplStack_a88 = (long ***)pppplVar22;
            puStack_a80 = &stack0xfffffffffffffff0;
            FUN_10b56311c(auStack_be0,0);
            uVar19 = uStack_bd8;
            if ((uStack_bd8 & 1) != 0) {
              uVar19 = *(ulong *)(uStack_bd8 & 0xfffffffffffffffe);
            }
            func_0x000107c30248(auStack_b58,pppplVar10,uVar19);
            ppplVar26 = ppplStack_a60;
            iVar7 = iStack_a68;
            if ((*(char *)(ppplStack_a70 + 0xc) == '\x01') &&
               (iVar4 = *(int *)((long)ppplStack_a70 + 0x5c), iVar4 != 0)) {
              lStack_b10 = (long)iVar4;
            }
            else {
              iVar4 = 0;
            }
            puVar3 = (undefined4 *)puVar18[1];
            for (puVar32 = (undefined4 *)*puVar18; puVar32 != puVar3; puVar32 = puVar32 + 1) {
              func_0x000107c2845c(auStack_bd0,*puVar32);
            }
            FUN_10b2241b4(auStack_c18,puVar11,0);
            uVar19 = uStack_bd8;
            if ((uStack_bd8 & 1) != 0) {
              uVar19 = *(ulong *)(uStack_bd8 & 0xfffffffffffffffe);
            }
            func_0x000107c3024c(auStack_b48,auStack_c18,uVar19);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c18);
            puVar3 = (undefined4 *)puVar20[1];
            for (puVar32 = (undefined4 *)*puVar20; uVar35 = SUB84(param_2,0), puVar32 != puVar3;
                puVar32 = puVar32 + 1) {
              func_0x000107c2845c(auStack_bb8,*puVar32);
            }
            uStack_b14 = SUB84(pppplVar29,0);
            uStack_b18 = uVar17;
            if (*(char *)(param_10 + 7) == '\x01') {
              FUN_10b22ac00(auStack_c18);
              uVar17 = SUB84(param_10,0);
              FUN_10b24a690();
              puVar16 = auStack_c18;
              ppplStack_c28 = (long ***)pppplVar29;
              uStack_c20 = uVar17;
              func_0x00010b24a4a4(puVar16,&ppplStack_c28);
              uStack_afc = SUB84(puVar16,0);
              puVar16 = auStack_c18;
              func_0x00010b24a4d8(puVar16,&ppplStack_c28);
              uStack_af8 = SUB84(puVar16,0);
              puVar16 = auStack_c18;
              FUN_10b24a55c(puVar16,&ppplStack_c28);
              auStack_c40[0] = SUB84(puVar16,0);
              uStack_af4 = SUB84(auStack_c40,0);
              func_0x00010b24a534();
              FUN_10b24a640(auStack_c18);
              uStack_af0 = uVar35;
              func_0x00010b24a668(auStack_c18);
              puVar16 = auStack_c18;
              uStack_ae8 = uVar35;
              FUN_10b24a5b0(puVar16,iVar4);
              uStack_b08 = SUB84(puVar16,0);
              if ((*(char *)(ppplVar26 + 0xc) == '\x01') &&
                 (*(char *)((long)ppplVar26 + 4) == '\x01')) {
                uVar17 = *(undefined4 *)ppplVar26;
              }
              else {
                uVar17 = 0;
              }
              FUN_10b24abb8(auStack_c40,uVar17);
              if ((uStack_bd8 & 1) != 0) {
                uStack_bd8 = *(ulong *)(uStack_bd8 & 0xfffffffffffffffe);
              }
              func_0x000107c3024c(auStack_b28,auStack_c40,uStack_bd8);
              func_0x00010b22ec60();
              FUN_10b487568(auStack_c18);
            }
            func_0x00010b22ac0c(*pppplVar15);
            func_0x00010b563e38();
            if (iVar7 != 0) {
              *(int *)((long)*pppplVar15 + 0x74) = iVar7;
            }
            FUN_10b5631b4(auStack_be0);
          }
          return;
        }
      }
      func_0x00010b22ed40(&pppuStack_9a0);
      func_0x000107c27d08(&pplStack_4a8);
      func_0x00010b22eaf0(auStack_a18);
      if ((long)(char)bStack_989 < 0) {
        uVar19 = uStack_998;
        ppppuVar12 = (undefined8 ****)pppuStack_9a0;
        if (uStack_998 != 0) goto LAB_10b22951c;
LAB_10b229928:
        FUN_10b22ac1c(&ppplStack_258,auStack_a18);
        FUN_10b228eb4(&pplStack_420,&ppplStack_5e0);
        param_12 = (long ***)pplStack_a30;
        FUN_10b228eb4(&ppplStack_438,&lStack_738);
        FUN_10b243f98(&ppplStack_450,&lStack_708,*(undefined4 *)((long)ppuVar30 + 0x5c));
        func_0x00010b22ed68();
        if ((bool)uVar5) {
          lVar25 = *extraout_x8_01;
          pppplVar29 = (long ****)(ulong)*(uint *)(lVar25 + 0x20);
          lStack_270 = lVar25;
          func_0x00010b22ed2c(&pppuStack_9a0,pppplVar29);
          func_0x000107c278b8(&pplStack_468,"");
          func_0x00010b22b23c(&pplStack_4a8,lVar25);
          func_0x00010b22b258(&ppplStack_3e8,ppuVar30);
          FUN_10b22ac1c(&ppplStack_1f0,&ppplStack_258);
          iStack_a68 = 0;
          ppplStack_a70 = (long ***)&ppplStack_3e8;
          param_10 = &pplStack_4a8;
          pppplVar22 = (long ****)0x0;
          ppplStack_a60 = (long ***)&ppplStack_1f0;
          FUN_10b22a550(ppplStack_a20,&pplStack_468,&pplStack_420,&ppplStack_450,&ppplStack_438);
          func_0x00010b121ac0(&ppplStack_1f0);
          FUN_10b22afe4(&ppplStack_3e8);
          func_0x00010b22b004(&pplStack_4a8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pplStack_468);
          FUN_10b22ab40(&lStack_9b0,&lStack_270);
        }
        else {
          FUN_10b22f604(auStack_4b8,&pppuStack_9a0,param_12,param_3,param_3 + 2);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&ppplStack_1f0,param_12);
          FUN_10b22ab94(&pplStack_1d8,ppuVar30);
          FUN_10b22bde4(&uStack_178,&lStack_708);
          FUN_10b224c04(auStack_160,&ppplStack_450);
          ppplStack_148 = (long ***)param_3;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_140,&pppuStack_9a0);
          pplStack_120 = ppplStack_a20[1];
          ppplStack_128 = (long ***)*ppplStack_a20;
          if ((long ***)ppplStack_a20[1] != (long ***)0x0) {
            do {
              func_0x000107c351a4();
            } while (extraout_w10_00 != 0);
          }
          func_0x000107c28bb4(auStack_118,&pplStack_420);
          func_0x000107c28bb4(auStack_100,&ppplStack_438);
          FUN_10b22ac1c(auStack_e8,&ppplStack_258);
          pplStack_4a0 = (long **)0x0;
          pplStack_4a8 = (long **)0x0;
          uStack_460 = 0;
          pplStack_468 = (long **)0x0;
          FUN_10b22bef0(&ppplStack_3e8,auStack_4b8,&pplStack_468);
          FUN_10b22bf18(&pplStack_4a8,&ppplStack_3e8);
          func_0x00010b22ca84(&ppplStack_3e8);
          ppplVar26 = &pplStack_468;
          func_0x00010b22ca84();
          func_0x00010b22eb58();
          pppplVar9 = (long ****)ppplStack_a38;
          ppplVar26[4] = (long **)0x0;
          func_0x00010b22ed88();
          func_0x00010b22caa8();
          *ppplVar26 = (long **)&PTR_FUN_110cc9568;
          FUN_10b22bf3c(&lStack_270,ppplVar26);
          FUN_10b22bf78(&ppplStack_3e8,&ppplStack_1f0);
          lStack_3f0 = 0;
          pplStack_3f8 = (long **)0x0;
          pplStack_408 = pplStack_4a8 + 10;
          lStack_400 = CONCAT71(lStack_400._1_7_,1);
          pplStack_278 = (long **)ppplVar26;
          __ZNSt3__15mutex4lockEv();
          ppplVar26 = (long ***)pplStack_4a8;
          FUN_10b22c088();
          if ((int)ppplVar26 == 0) {
            pplVar13 = (long **)0x180;
            __Znwm();
            *pplVar13 = (long *)&PTR_FUN_110cc95a0;
            FUN_10b22bf78(pplVar13 + 1,&ppplStack_3e8);
            pplVar14 = pplStack_278;
            pplStack_278 = (long **)0x0;
            pplVar13[0x2f] = (long *)pplVar14;
            pplVar14 = (long **)pplStack_4a8[0x13];
            pplStack_4a8[0x13] = (long *)pplVar13;
            if (pplVar14 != (long **)0x0) {
              func_0x00010b22e834();
            }
          }
          else {
            FUN_10b22bf18(&pplStack_3f8,&pplStack_4a8);
          }
          func_0x000107c2798c(&pplStack_408);
          if ((long ***)pplStack_3f8 != (long ***)0x0) {
            pplStack_408 = pplStack_3f8;
            lStack_400 = lStack_3f0;
            if (lStack_3f0 != 0) {
              do {
                func_0x000107c351a4();
              } while (extraout_w10_01 != 0);
            }
            FUN_10b22c0c8(&ppplStack_3e8);
            func_0x00010b22ca84(&pplStack_408);
          }
          uStack_9a8 = uStack_268;
          lStack_9b0 = lStack_270;
          uStack_268 = 0;
          lStack_270 = 0;
          func_0x00010b22ca84(&pplStack_3f8);
          func_0x00010b22ca54(&ppplStack_3e8);
          func_0x00010b22b694(&lStack_270);
          func_0x00010b22ca84(&pplStack_4a8);
          FUN_10b22aba0(&ppplStack_1f0);
          func_0x00010b22ca84(auStack_4b8);
        }
        FUN_10b225f10(&ppplStack_450);
        func_0x000107c27a18(&ppplStack_438);
        func_0x000107c27a18(&pplStack_420);
        pppplVar10 = &ppplStack_258;
      }
      else {
        if (bStack_989 == 0) goto LAB_10b229928;
        uVar19 = (long)(char)bStack_989;
        ppppuVar12 = &pppuStack_9a0;
LAB_10b22951c:
        uVar31 = 0xb;
        ppuVar23 = &PTR_DAT_110cc94a8;
        puStack_a50 = param_1;
        ppplStack_a48 = (long ***)pppplVar8;
        do {
          uVar33 = uVar31 >> 1;
          ppuVar2 = ppuVar23 + uVar33 * 2;
          puVar11 = *ppuVar2;
          func_0x000107c27bd8(puVar11,ppuVar2[1],ppppuVar12,uVar19);
          ppuVar30 = (undefined **)ppplStack_a28;
          pppplVar9 = (long ****)ppplStack_a38;
          pppplVar8 = (long ****)ppplStack_a48;
          param_1 = puStack_a50;
          ppuVar2 = ppuVar2 + 2;
          uVar31 = uVar31 + (uVar31 >> 1 ^ 0xffffffffffffffff);
          if (-1 < (char)puVar11) {
            ppuVar2 = ppuVar23;
            uVar31 = uVar33;
          }
          ppuVar23 = ppuVar2;
        } while (uVar31 != 0);
        uVar5 = ppuVar2 == (undefined **)&UNK_110cc9558;
        if ((bool)uVar5) {
LAB_10b22959c:
          uVar5 = bStack_989 == 0;
          uVar19 = uStack_998;
          ppppuVar12 = (undefined8 ****)pppuStack_9a0;
          if (-1 < (char)bStack_989) {
            uVar19 = (ulong)bStack_989;
            ppppuVar12 = &pppuStack_9a0;
          }
          func_0x000107c27944(ppppuVar12,uVar19,&UNK_10f73aa1d,0x15);
          if (((ulong)ppppuVar12 & 1) == 0) {
            func_0x000107c3018c(&ppplStack_438,&UNK_10f73aa4e,0x2b,"",0);
            ppplStack_250 = ppplStack_430;
            ppplStack_258 = ppplStack_438;
            if (-1 < (char)bStack_421) {
              ppplStack_250 = (long ***)(ulong)bStack_421;
              ppplStack_258 = (long ***)&ppplStack_438;
            }
            _uStack_3d8 = (long ***)CONCAT17(1,uStack_3d8);
            ppplStack_3e8 = (long ***)CONCAT62(ppplStack_3e8._2_6_,0x2c);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_248,&ppplStack_3e8);
            func_0x00010b22ea60();
            puStack_418 = (undefined8 *)0x0;
            pplStack_420 = (long **)0x0;
            lStack_410 = 0;
            ppplStack_1f0 = (long ***)0x0;
            uStack_1e8 = uStack_1e8 & 0xffffffff00000000;
            pplStack_1d8 = (long **)0x0;
            pplStack_1e0 = (long **)0x0;
            puStack_a58 = auStack_248;
            ppplStack_1d0 = (long ***)&ppplStack_258;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_1c8,auStack_248);
            pppplVar8 = (long ****)ppplStack_1d0[1];
            if ((long ***)*ppplStack_1d0 == (long ***)0x0) {
              uStack_1e8 = CONCAT44(uStack_1e8._4_4_,2);
            }
            else if ((int)uStack_1e8 != 2) {
              FUN_10b22e67c(&ppplStack_1f0);
              pppplVar8 = (long ****)ppplStack_1f0;
            }
            while (ppplStack_1f0 = (long ***)pppplVar8, (int)uStack_1e8 != 2) {
              lVar34 = 0;
              lVar25 = 0x10;
              lVar28 = 0;
              do {
                lVar24 = lVar25;
                pplVar14 = pplStack_1d8;
                *(long ***)((long)&ppplStack_3e8 + lVar28) = pplStack_1e0;
                *(long ***)((long)&pplStack_3e0 + lVar28) = pplVar14;
                FUN_10b22e67c(&ppplStack_1f0);
                puVar18 = puStack_418;
                lVar34 = lVar34 + -1;
                lVar1 = lVar28 + 0x10;
                bVar6 = lVar28 != 0xf0;
                lVar25 = lVar24 + 0x10;
                lVar28 = lVar1;
              } while (bVar6 && (int)uStack_1e8 != 2);
              if (lStack_410 - (long)puStack_418 < lVar1) {
                ppplVar26 = &pplStack_420;
                func_0x000107264d4c(ppplVar26,((long)puStack_418 - (long)pplStack_420 >> 4) - lVar34
                                   );
                func_0x000107c283b0(&pplStack_4a8,ppplVar26,(long)puVar18 - (long)pplStack_420 >> 4,
                                    &lStack_410);
                ppuVar30 = (undefined **)ppplStack_a28;
                lVar1 = (long)pplStack_498 + lVar1;
                for (lVar25 = 0; lVar24 != lVar25; lVar25 = lVar25 + 0x10) {
                  pplVar14 = *(long ***)((long)&pplStack_3e0 + lVar25);
                  *pplStack_498 = (long *)*(long ***)((long)&ppplStack_3e8 + lVar25);
                  pplStack_498[1] = (long *)pplVar14;
                  pplStack_498 = pplStack_498 + 2;
                }
                pplStack_498 = (long **)lVar1;
                _memcpy(lVar1,puVar18,(long)puStack_418 - (long)puVar18);
                pplStack_498 = (long **)((long)puStack_418 + ((long)pplStack_498 - (long)puVar18));
                ppplVar26 = (long ***)((long)pplStack_4a0 - ((long)puVar18 - (long)pplStack_420));
                puStack_418 = puVar18;
                _memcpy(ppplVar26);
                lVar25 = lStack_410;
                lStack_410 = lStack_490;
                puStack_418 = pplStack_498;
                pplStack_498 = pplStack_420;
                lStack_490 = lVar25;
                pplStack_4a0 = pplStack_420;
                pplStack_4a8 = pplStack_420;
                pplStack_420 = (long **)ppplVar26;
                func_0x000107c283b4(&pplStack_4a8);
                pppplVar8 = (long ****)ppplStack_1f0;
              }
              else {
                pppplVar9 = &ppplStack_3e8;
                for (; ppuVar30 = (undefined **)ppplStack_a28, pppplVar8 = (long ****)ppplStack_1f0,
                    lVar24 != 0; lVar24 = lVar24 + -0x10) {
                  ppplVar26 = pppplVar9[1];
                  *puStack_418 = *pppplVar9;
                  puStack_418[1] = ppplVar26;
                  pppplVar9 = pppplVar9 + 2;
                  puStack_418 = puStack_418 + 2;
                }
              }
            }
            func_0x00010b22eccc();
            puVar18 = puStack_418;
            pplVar14 = pplStack_420;
            uStack_440 = 0;
            ppplStack_450 = (long ***)0x0;
            ppplStack_448 = (long ***)0x0;
            ppplStack_3e8 = (long ***)&ppplStack_450;
            pplStack_3e0 = (long **)((ulong)pplStack_3e0 & 0xffffffffffffff00);
            if ((long)puStack_418 - (long)pplStack_420 != 0) {
              lVar25 = (long)puStack_418 - (long)pplStack_420 >> 4;
              func_0x000107c27964(&ppplStack_450,lVar25);
              func_0x000107c2becc(&ppplStack_450,pplVar14,puVar18,lVar25);
            }
            pplStack_3e0 = (long **)CONCAT71(pplStack_3e0._1_7_,1);
            func_0x000107c27970(&ppplStack_3e8);
            func_0x000107264ef0(&pplStack_420);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puStack_a58);
            pppplVar9 = (long ****)ppplStack_a38;
            pppplVar8 = (long ****)ppplStack_a48;
            uVar5 = ppplStack_450 == ppplStack_448;
            if ((bool)uVar5) {
              func_0x00010b22ecf4();
              func_0x00010b22ece4();
            }
            else {
              pppplVar10 = (long ****)ppplStack_450;
              func_0x00010563d340(ppplStack_450,ppplStack_448,&pppuStack_9a0);
              ppplVar26 = ppplStack_448;
              func_0x00010b22ecf4();
              func_0x00010b22ece4();
              uVar5 = (long ****)ppplVar26 == pppplVar10;
              if (!(bool)uVar5) goto LAB_10b2298d8;
            }
          }
          else {
            iVar7 = 0xf73aa33;
            func_0x000107c30180(&UNK_10f73aa33,0x1a,0);
            if (iVar7 != 0) goto LAB_10b2298d8;
          }
          goto LAB_10b229928;
        }
        puVar11 = *ppuVar2;
        func_0x000107c27944(puVar11,ppuVar2[1],ppppuVar12,uVar19);
        if (((ulong)puVar11 & 1) == 0) goto LAB_10b22959c;
LAB_10b2298d8:
        ppplVar26 = param_3[4];
        pppplVar10 = &ppplStack_3e8;
        FUN_10b22ac1c(&ppplStack_3e8,auStack_a18);
        param_12 = (long ***)pplStack_a30;
        pppplVar22 = &pppuStack_9a0;
        pppplVar29 = (long ****)ppplStack_a20;
        param_10 = (long ***)pplStack_a40;
        ppplStack_a70 = (long ***)pppplVar10;
        FUN_10b244764(&lStack_9b0,ppplVar26,pplStack_a30,&lStack_708,&lStack_738,ppuVar30);
      }
      func_0x00010b121ac0(pppplVar10);
      uStack_1e8 = param_4[1];
      ppplStack_1f0 = (long ***)*param_4;
      if (param_4[1] != 0) {
        do {
          func_0x000107c351a4();
        } while (extraout_w10_02 != 0);
      }
      pplStack_1d8 = (long **)pppplVar9[1];
      pplStack_1e0 = (long **)*pppplVar9;
      if (pppplVar9[1] != (long ***)0x0) {
        do {
          func_0x000107c351a4();
        } while (extraout_w10_03 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppplStack_1d0,&pppuStack_9a0);
      pppplVar9 = &ppplStack_1f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1b8,param_12)
      ;
      FUN_10b22bde4(auStack_1a0,&lStack_708);
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_188 = 0;
      uStack_168 = *(undefined4 *)(param_9 + 4);
      func_0x00010b22e05c(&uStack_188,param_9[1]);
      pppplVar10 = param_9 + 2;
      while (pppplVar10 = (long ****)*pppplVar10, pppplVar10 != (long ****)0x0) {
        FUN_10b22e384(&uStack_188,pppplVar10 + 2);
      }
      func_0x00010b22e5e8(auStack_160,&uStack_760);
      uStack_130 = 0;
      pplStack_120 = (long **)CONCAT71(pplStack_120._1_7_,1);
      ppplStack_250 = (long ***)0x0;
      ppplStack_258 = (long ***)0x0;
      pplStack_4a0 = (long **)0x0;
      pplStack_4a8 = (long **)0x0;
      ppplStack_138 = (long ***)param_3;
      ppplStack_128 = (long ***)pppplVar8;
      FUN_10b22b274(&ppplStack_3e8,&lStack_9b0,&pplStack_4a8);
      FUN_10b22b29c(&ppplStack_258,&ppplStack_3e8);
      func_0x00010b22b694(&ppplStack_3e8);
      func_0x00010b22b694(&pplStack_4a8);
      FUN_10b22b2c0(&pplStack_468);
      FUN_10b22b2f8(&pplStack_420,pplStack_468);
      FUN_10b22b334(&ppplStack_3e8,&ppplStack_1f0);
      pplStack_310 = pplStack_468;
      pplStack_468 = (long **)0x0;
      ppplStack_430 = (long ***)0x0;
      ppplStack_438 = (long ***)0x0;
      ppplStack_450 = ppplStack_258 + 8;
      ppplStack_448 = (long ***)CONCAT71(ppplStack_448._1_7_,1);
      __ZNSt3__15mutex4lockEv();
      pppplVar10 = (long ****)ppplStack_258;
      FUN_10b22b41c();
      if ((int)pppplVar10 == 0) {
        param_9 = (long ****)0xe8;
        __Znwm();
        *param_9 = (long ***)&PTR_FUN_110cc9468;
        FUN_10b22b334(param_9 + 1,&ppplStack_3e8);
        pplVar14 = pplStack_310;
        pplStack_310 = (long **)0x0;
        param_9[0x1c] = (long ***)pplVar14;
        ppplVar26 = (long ***)ppplStack_258[0x11];
        ppplStack_258[0x11] = (long **)param_9;
        if (ppplVar26 != (long ***)0x0) {
          func_0x00010b22e834();
        }
      }
      else {
        FUN_10b22b29c(&ppplStack_438,&ppplStack_258);
      }
      func_0x000107c2798c(&ppplStack_450);
      if ((long ****)ppplStack_438 != (long ****)0x0) {
        ppplStack_450 = ppplStack_438;
        ppplStack_448 = ppplStack_430;
        if ((long ****)ppplStack_430 != (long ****)0x0) {
          do {
            func_0x000107c351a4();
          } while (extraout_w10_04 != 0);
        }
        FUN_10b22b45c(&ppplStack_3e8);
        func_0x00010b22b694(&ppplStack_450);
      }
      param_2 = (long ***)pplStack_420;
      param_1[1] = puStack_418;
      *param_1 = pplStack_420;
      puStack_418 = (undefined8 *)0x0;
      pplStack_420 = (long **)0x0;
      func_0x00010b22b694(&ppplStack_438);
      func_0x00010b22b66c(&ppplStack_3e8);
      FUN_10b22b928(&pplStack_420);
      pplVar14 = pplStack_468;
      pplStack_468 = (long **)0x0;
      if (pplVar14 != (long **)0x0) {
        func_0x00010b22e834();
      }
      func_0x00010b22b694(&ppplStack_258);
      func_0x00010b22a948(&ppplStack_1f0);
      func_0x00010b22b694(&lStack_9b0);
      func_0x00010b121ac0(auStack_a18);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_9a0);
      ppuVar30 = (undefined **)&ppplStack_1f0;
    }
    else {
      ppplVar26 = (long ***)*extraout_x8_00;
      pplStack_420 = (long **)ppplVar26;
      FUN_10b487bf0(*pppplVar9,ppplVar26);
      ppplVar27 = (long ***)ppuVar30[7];
      FUN_10b228eb4(&ppplStack_3e8,&lStack_708);
      uStack_1e8 = 0;
      ppplStack_1f0 = (long ***)0x0;
      pplStack_1e0 = (long **)0x0;
      FUN_10b228eb4(&ppplStack_258,&lStack_738);
      pppplVar22 = (long ****)(ulong)*(uint *)(ppplVar26 + 4);
      func_0x00010b22b23c(aplStack_8b8,ppplVar26);
      func_0x00010b22b258(applStack_920,ppuVar30);
      param_3 = (long ****)applStack_988;
      func_0x00010b22eaf0(applStack_988);
      iStack_a68 = 0;
      ppplStack_a70 = applStack_920;
      param_10 = (long ***)aplStack_8b8;
      pppplVar29 = pppplVar22;
      ppplStack_a60 = (long ***)param_3;
      FUN_10b22a550(ppplStack_a20,(ulong)ppplVar27 & 0xfffffffffffffffc,&ppplStack_3e8,
                    &ppplStack_1f0,&ppplStack_258);
      func_0x00010b121ac0(applStack_988);
      FUN_10b22afe4(applStack_920);
      func_0x00010b22b004(aplStack_8b8);
      func_0x000107c27a18(&ppplStack_258);
      FUN_10b225f10(&ppplStack_1f0);
      func_0x000107c27a18(&ppplStack_3e8);
      FUN_10b22e2c4(param_9,&pplStack_420);
      FUN_10b22b6dc(&ppplStack_3e8);
      uStack_1e8 = 0;
      ppplStack_1f0 = (long ***)0x0;
      pplStack_4a0 = (long **)0x0;
      pplStack_4a8 = (long **)0x0;
      FUN_10b22baac(&ppplStack_258,&pplStack_3e0,&pplStack_4a8);
      FUN_10b22bad4(&ppplStack_1f0,&ppplStack_258);
      FUN_10b22b928(&ppplStack_258);
      FUN_10b22b928(&pplStack_4a8);
      ppplVar26 = ppplStack_1f0;
      __ZNSt3__15mutex4lockEv(ppplStack_1f0 + 9);
      uVar5 = *(char *)(ppplStack_1f0 + 2) == '\x01';
      if ((bool)uVar5) {
        FUN_10b22a8fc(ppplStack_1f0,param_9 + 3);
        pppplVar10 = (long ****)ppplStack_1f0;
      }
      else {
        ppplVar27 = param_9[4];
        param_2 = param_9[3];
        ppplStack_1f0[1] = (long **)param_9[4];
        *ppplStack_1f0 = (long **)param_2;
        pppplVar10 = (long ****)ppplStack_1f0;
        if (ppplVar27 != (long ***)0x0) {
          do {
            func_0x000107c351a4();
          } while (extraout_w10_05 != 0);
        }
        *(undefined1 *)(pppplVar10 + 2) = 1;
      }
      param_9 = (long ****)pppplVar10[0x12];
      pppplVar10[0x12] = (long ***)0x0;
      __ZNSt3__15mutex6unlockEv(ppplVar26 + 9);
      if (param_9 == (long ****)0x0) {
        func_0x00010b22ecfc(ppplStack_1f0);
      }
      else {
        (*(code *)(*param_9)[2])(param_9,&ppplStack_1f0);
        func_0x00010b22ebc0();
      }
      FUN_10b22b928(&ppplStack_1f0);
      FUN_10b22b2f8(param_1,&ppplStack_3e8);
      FUN_10b22b95c(&ppplStack_3e8);
    }
LAB_10b229ec4:
    func_0x00010b22dd94(&uStack_760);
    FUN_10b22bec4(&lStack_738);
    FUN_10b22bec4(&uStack_720);
    FUN_10b22bec4(&lStack_708);
    param_7 = pppplVar9;
LAB_10b229ee4:
    FUN_10b22bec4(&ppplStack_5e0);
LAB_10b229eec:
    func_0x000107c351a0(uStack_78);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
LAB_10b229fd8:
    iVar7 = 0x137f42b0;
    ___cxa_guard_acquire();
    pppplVar9 = param_7;
    if (iVar7 != 0) {
      bVar21 = 0x88;
      func_0x000107c2be10();
      bRam00000001137f42a8 = bVar21;
      ___cxa_guard_release(0x1137f42b0);
      pppplVar9 = (long ****)ppplStack_a38;
      ppuVar30 = (undefined **)ppplStack_a28;
    }
  } while( true );
}



/* Entry: 10b22a550; end: 10b22a7fb;  */

void FUN_10b22a550(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined4 param_7,undefined8 param_8,
                  long param_9,long param_10,int param_11,undefined4 param_12,undefined4 *param_13)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 auStack_1d0 [6];
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 auStack_1a8 [56];
  undefined1 auStack_170 [8];
  ulong uStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [96];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  
  if (*param_2 != 0) {
    FUN_10b56311c(auStack_170,0);
    uVar5 = uStack_168;
    if ((uStack_168 & 1) != 0) {
      uVar5 = *(ulong *)(uStack_168 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(auStack_e8,param_3,uVar5);
    if ((*(char *)(param_10 + 0x60) == '\x01') && (iVar2 = *(int *)(param_10 + 0x5c), iVar2 != 0)) {
      lStack_a0 = (long)iVar2;
    }
    else {
      iVar2 = 0;
    }
    puVar1 = (undefined4 *)param_4[1];
    for (puVar6 = (undefined4 *)*param_4; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      func_0x000107c2845c(auStack_160,*puVar6);
    }
    FUN_10b2241b4(auStack_1a8,param_5,0);
    uVar5 = uStack_168;
    if ((uStack_168 & 1) != 0) {
      uVar5 = *(ulong *)(uStack_168 & 0xfffffffffffffffe);
    }
    func_0x000107c3024c(auStack_d8,auStack_1a8,uVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    puVar1 = (undefined4 *)param_6[1];
    for (puVar6 = (undefined4 *)*param_6; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      func_0x000107c2845c(auStack_148,*puVar6);
    }
    uStack_a4 = (undefined4)param_8;
    uStack_a8 = param_7;
    if (*(char *)(param_9 + 0x38) == '\x01') {
      FUN_10b22ac00(auStack_1a8);
      uVar4 = (undefined4)param_9;
      FUN_10b24a690();
      puVar3 = auStack_1a8;
      uStack_1b8 = param_8;
      uStack_1b0 = uVar4;
      func_0x00010b24a4a4(puVar3,&uStack_1b8);
      uStack_8c = SUB84(puVar3,0);
      puVar3 = auStack_1a8;
      func_0x00010b24a4d8(puVar3,&uStack_1b8);
      uStack_88 = SUB84(puVar3,0);
      puVar3 = auStack_1a8;
      FUN_10b24a55c(puVar3,&uStack_1b8);
      auStack_1d0[0] = SUB84(puVar3,0);
      uStack_84 = SUB84(auStack_1d0,0);
      func_0x00010b24a534();
      FUN_10b24a640(auStack_1a8);
      uStack_80 = param_1;
      func_0x00010b24a668(auStack_1a8);
      puVar3 = auStack_1a8;
      uStack_78 = param_1;
      FUN_10b24a5b0(puVar3,iVar2);
      uStack_98 = SUB84(puVar3,0);
      if ((*(char *)(param_13 + 0x18) == '\x01') && (*(char *)(param_13 + 1) == '\x01')) {
        uVar4 = *param_13;
      }
      else {
        uVar4 = 0;
      }
      FUN_10b24abb8(auStack_1d0,uVar4);
      if ((uStack_168 & 1) != 0) {
        uStack_168 = *(ulong *)(uStack_168 & 0xfffffffffffffffe);
      }
      func_0x000107c3024c(auStack_b8,auStack_1d0,uStack_168);
      func_0x00010b22ec60();
      FUN_10b487568(auStack_1a8);
    }
    func_0x00010b22ac0c(*param_2);
    func_0x00010b563e38();
    if (param_11 != 0) {
      *(int *)(*param_2 + 0x74) = param_11;
    }
    FUN_10b5631b4(auStack_170);
    return;
  }
  return;
}



/* Entry: 10b22a7fc; end: 10b22a84f;  */

void FUN_10b22a7fc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  FUN_10b22b6dc(auStack_48);
  FUN_10b22bb90(auStack_48,param_2);
  FUN_10b22b2f8(param_1,auStack_48);
  FUN_10b22b95c(auStack_48);
  return;
}



/* Entry: 10b22a850; end: 10b22a8c7;  */

long *** FUN_10b22a850(long *param_1,ulong param_2)

{
  long ***ppplVar1;
  long lVar2;
  long lVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = (long ***)(param_1 + 2);
  lVar2 = *param_1;
  if ((ulong)((long)*ppplVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      func_0x00010b22b024();
      func_0x00010b22e9b4();
      FUN_10b22b0f0();
      func_0x00010b22e8ec();
      FUN_10b22de30();
      return ppplVar1 + 3;
    }
    lVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_10b22b0b0();
    lStack_40 = (long)ppplVar1 + (lVar3 - lVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    func_0x00010b22eb6c();
    FUN_10b22b038();
    ppplVar1 = &pplStack_48;
    FUN_10b22b0f0(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 10b22a8c8; end: 10b22a8fb;  */

long FUN_10b22a8c8(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b22de30(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 10b22a8fc; end: 10b22a997;  */

undefined8 * FUN_10b22a8fc(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b22dd70(&uStack_30);
  return param_1;
}



/* Entry: 10b22a998; end: 10b22ab3f;  */

void FUN_10b22a998(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar4;
  undefined1 auStack_178 [40];
  undefined1 *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 uStack_121;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [48];
  undefined8 uStack_48;
  
  func_0x000107c351a8(param_1,param_2,param_1);
  uStack_48 = extraout_x8;
  func_0x0001059710c8(auStack_d8,&PTR_DAT_110cc9370);
  __ZNSt3__19to_stringEi(auStack_108,param_2);
  func_0x00010b227c98(auStack_a8,&PTR_DAT_110cc9378,auStack_108);
  if ((param_4 & 1) == 0) {
    func_0x000107c278b8(auStack_120,&UNK_10f73aa7a);
  }
  else {
    __ZNSt3__19to_stringEi(auStack_120,param_3);
  }
  func_0x00010b227c98(auStack_78,&PTR_s_optimalVariant_110cc9380,auStack_120);
  func_0x000108992a94(auStack_f0,auStack_d8,3,&uStack_121);
  lVar4 = 0x60;
  do {
    func_0x000107c278c0(auStack_d8 + lVar4);
    lVar4 = lVar4 + -0x30;
    uVar1 = lVar4 == -0x30;
  } while (!(bool)uVar1);
  func_0x00010b22ec60();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  FUN_10b23eda4(0x37,auStack_f0);
  puVar2 = auStack_f0;
  func_0x000108992e04();
  func_0x000107c351a0(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = auStack_f0;
  func_0x000108992e04(puVar3);
  func_0x00010b22e920();
  pcStack_138 = FUN_10b22ab40;
  puStack_150 = puVar2;
  lStack_148 = lVar4;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010b22caa8(auStack_178);
  FUN_10b22e718(auStack_178,puVar3);
  FUN_10b22bf3c(extraout_x8_00,auStack_178);
  FUN_10b22ccd0(auStack_178);
  return;
}



/* Entry: 10b22ab40; end: 10b22ab93;  */

void FUN_10b22ab40(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b22caa8(auStack_48);
  FUN_10b22e718(auStack_48,param_2);
  FUN_10b22bf3c(param_1,auStack_48);
  FUN_10b22ccd0(auStack_48);
  return;
}



/* Entry: 10b22ab94; end: 10b22ab9f;  */

undefined8 * FUN_10b22ab94(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110ceb828;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_2 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_10b487348(param_1 + 3,0,param_2 + 0x18);
  lVar2 = param_2 + 0x30;
  func_0x000107c2809c(lVar2,0);
  param_1[6] = lVar2;
  lVar2 = param_2 + 0x38;
  func_0x000107c2809c(lVar2,0);
  param_1[7] = lVar2;
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_10b484ca4(0,*(undefined8 *)(param_2 + 0x40));
  }
  param_1[8] = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    FUN_10b484ca4(0,*(undefined8 *)(param_2 + 0x48));
  }
  param_1[9] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 10b22aba0; end: 10b22abff;  */

void FUN_10b22aba0(long param_1)

{
  func_0x00010b121ac0(param_1 + 0x108);
  func_0x000107c27a18(param_1 + 0xf0);
  func_0x000107c27a18(param_1 + 0xd8);
  FUN_10b22e7d4(param_1 + 200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb0);
  FUN_10b225f10(param_1 + 0x90);
  FUN_10b22bec4(param_1 + 0x78);
  FUN_10b486d14(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b22ac00; end: 10b22ac1b;  */

undefined8 * FUN_10b22ac00(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110ceb970;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x00010b488374();
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  iVar3 = *(int *)(param_2 + 0x30);
  *(int *)(param_1 + 6) = iVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x00010b47cd6c(0,*(undefined8 *)(param_2 + 0x18));
    iVar3 = *(int *)(param_1 + 6);
  }
  param_1[3] = uVar2;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  if (iVar3 == 0xb) {
    uVar2 = 0;
    func_0x00010b4882dc(0,*(undefined8 *)(param_2 + 0x28));
  }
  else if (iVar3 == 10) {
    uVar2 = 0;
    FUN_10b484ca4(0,*(undefined8 *)(param_2 + 0x28));
  }
  else {
    if (iVar3 != 4) {
      return param_1;
    }
    uVar2 = 0;
    FUN_10b4881ec(0,*(undefined8 *)(param_2 + 0x28));
  }
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b22ac1c; end: 10b22ac4f;  */

undefined1 * FUN_10b22ac1c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x60] = 0;
  FUN_10b22ac50();
  return param_1;
}



/* Entry: 10b22ac50; end: 10b22ac63;  */

void FUN_10b22ac50(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_10b22ac80();
    *(undefined1 *)(param_1 + 0x60) = 1;
    return;
  }
  return;
}



/* Entry: 10b22ac64; end: 10b22ac7f;  */

void FUN_10b22ac64(long param_1)

{
  FUN_10b22ac80();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 10b22ac80; end: 10b22acb3;  */

undefined8 * FUN_10b22ac80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b22acb4(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10b22acb4; end: 10b22ace7;  */

undefined1 * FUN_10b22acb4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  FUN_10b22ace8();
  return param_1;
}



/* Entry: 10b22ace8; end: 10b22acfb;  */

void FUN_10b22ace8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10b22ad18();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 10b22acfc; end: 10b22ad17;  */

void FUN_10b22acfc(long param_1)

{
  FUN_10b22ad18();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10b22ad18; end: 10b22ad3b;  */

void FUN_10b22ad18(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10b22ad3c();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10b22ad3c; end: 10b22ad87;  */

void FUN_10b22ad3c(long param_1,long param_2)

{
  func_0x00010b22eb60();
  func_0x00010b22ed88();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  func_0x00010b18d58c();
  FUN_10b22ad88();
  return;
}



/* Entry: 10b22ad88; end: 10b22adc7;  */

void FUN_10b22ad88(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_10b22adc8(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 10b22adc8; end: 10b22adfb;  */

void FUN_10b22adc8(void)

{
  func_0x00010b22ade0();
  return;
}



/* Entry: 10b22adfc; end: 10b22afe3;  */

undefined1  [16] FUN_10b22adfc(long *param_1,int *param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  iVar2 = *param_2;
  uVar13 = (ulong)iVar2;
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar7 = uVar12 - 1;
    if ((uVar12 & uVar7) == 0) {
      unaff_x24 = uVar7 & uVar13;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar12 - uVar13) < 0;
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar9 = 0;
        if (uVar12 != 0) {
          uVar9 = uVar13 / uVar12;
        }
        unaff_x24 = uVar13 - uVar9 * uVar12;
      }
    }
    plVar11 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b22aeb0;
          uVar9 = plVar11[1];
          if (uVar9 != uVar13) break;
          in_NG = (int)plVar11[2] - iVar2 < 0;
          if ((int)plVar11[2] == iVar2) {
            uVar6 = 0;
            goto LAB_10b22afcc;
          }
        }
        if ((uVar12 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar12 <= uVar9) {
          uVar3 = 0;
          if (uVar12 != 0) {
            uVar3 = uVar9 / uVar12;
          }
          uVar9 = uVar9 - uVar3 * uVar12;
        }
        in_NG = (long)(uVar9 - unaff_x24) < 0;
      } while (uVar9 == unaff_x24);
    }
  }
LAB_10b22aeb0:
  plVar1 = param_1 + 2;
  plVar11 = (long *)0x30;
  __Znwm();
  uStack_58 = 1;
  *plVar11 = 0;
  plVar11[1] = uVar13;
  lVar8 = *param_3;
  lVar15 = param_3[3];
  lVar14 = param_3[2];
  plVar11[3] = param_3[1];
  plVar11[2] = lVar8;
  plVar11[5] = lVar15;
  plVar11[4] = lVar14;
  plStack_68 = plVar11;
  plStack_60 = plVar1;
  func_0x00010b22ea98();
  if ((uVar12 == 0) || (func_0x00010b22eda8(), (bool)in_NG)) {
    bVar4 = 2 < uVar12;
    bVar5 = uVar12 == 3;
    func_0x00010b22e928(uVar12 << 1);
    uVar6 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar6 = extraout_x9;
    }
    func_0x00010b18d58c(param_1,uVar6);
    uVar12 = param_1[1];
    if ((uVar12 & uVar12 - 1) == 0) {
      unaff_x24 = uVar12 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar12 <= uVar13) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar13 / uVar12;
        }
        unaff_x24 = uVar13 - uVar7 * uVar12;
      }
    }
  }
  plVar11 = plStack_68;
  lVar8 = *param_1;
  plVar10 = *(long **)(lVar8 + unaff_x24 * 8);
  if (plVar10 == (long *)0x0) {
    *plStack_68 = *plVar1;
    *plVar1 = (long)plStack_68;
    *(long **)(lVar8 + unaff_x24 * 8) = plVar1;
    if (*plStack_68 != 0) {
      uVar13 = *(ulong *)(*plStack_68 + 8);
      if ((uVar12 & uVar12 - 1) == 0) {
        uVar13 = uVar13 & uVar12 - 1;
      }
      else if (uVar12 <= uVar13) {
        uVar7 = 0;
        if (uVar12 != 0) {
          uVar7 = uVar13 / uVar12;
        }
        uVar13 = uVar13 - uVar7 * uVar12;
      }
      *(long **)(lVar8 + uVar13 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar10;
    *plVar10 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b18d73c(&plStack_68);
  uVar6 = 1;
LAB_10b22afcc:
  auVar16._8_8_ = uVar6;
  auVar16._0_8_ = plVar11;
  return auVar16;
}



/* Entry: 10b22afe4; end: 10b22b037;  */

void FUN_10b22afe4(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    FUN_10b486d14();
  }
  return;
}



/* Entry: 10b22b038; end: 10b22b0af;  */

void FUN_10b22b038(long *param_1,undefined8 *param_2)

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



/* Entry: 10b22b0b0; end: 10b22b0d3;  */

void FUN_10b22b0b0(void)

{
  FUN_10b22b0d4();
  return;
}



/* Entry: 10b22b0d4; end: 10b22b0ef;  */

long * FUN_10b22b0d4(long *param_1,ulong param_2)

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
  FUN_10b22b11c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b22b0f0; end: 10b22b11b;  */

long * FUN_10b22b0f0(long *param_1)

{
  FUN_10b22b11c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b22b11c; end: 10b22b13f;  */

void FUN_10b22b11c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b22b140; end: 10b22b1fb;  */

void FUN_10b22b140(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  func_0x00010b22eb60();
  puVar4 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puVar4) {
    puVar6 = puVar5 + 1;
    *puVar5 = *unaff_x20;
  }
  else {
    plVar3 = unaff_x19;
    FUN_10b22b1fc();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    puStack_58 = (ulong *)0x0;
    puStack_38 = puVar4;
    if (plVar3 != (long *)0x0) {
      FUN_10b22b0b0();
      puStack_58 = puVar4;
    }
    puStack_50 = (undefined8 *)((long)puStack_58 + (lVar2 - lVar1));
    puStack_40 = puStack_58 + (long)plVar3;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = *unaff_x20;
    func_0x00010b22eb6c();
    FUN_10b22b038();
    puVar6 = (undefined8 *)unaff_x19[1];
    FUN_10b22b0f0(&puStack_58);
  }
  unaff_x19[1] = (long)puVar6;
  return;
}



/* Entry: 10b22b1fc; end: 10b22b273;  */

long * FUN_10b22b1fc(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  func_0x00010b22b024();
  FUN_10b22ac00();
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



/* Entry: 10b22b274; end: 10b22b29b;  */

void FUN_10b22b274(void)

{
  func_0x00010b22e93c();
  func_0x00010b22ed10();
  func_0x00010b22e8bc();
  func_0x00010b22ec7c();
  return;
}



/* Entry: 10b22b29c; end: 10b22b2bf;  */

void FUN_10b22b29c(void)

{
  func_0x00010b22e808();
  func_0x00010b22b694();
  return;
}



/* Entry: 10b22b2c0; end: 10b22b2f7;  */

void FUN_10b22b2c0(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x00010b22eb58();
  lVar1 = param_2;
  func_0x00010b22ed88();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  FUN_10b22b6b8();
  *param_1 = param_2;
  return;
}



/* Entry: 10b22b2f8; end: 10b22b333;  */

void FUN_10b22b2f8(undefined8 *param_1,long param_2)

{
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  undefined8 extraout_x10;
  undefined8 uVar2;
  int extraout_w13;
  int extraout_w13_00;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010b22ea18();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b22ea18();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b22e9f8();
  return;
}



/* Entry: 10b22b334; end: 10b22b41b;  */

void FUN_10b22b334(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b22eb60();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10_00 != 0);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x38,unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x00010b22e5e8(unaff_x19 + 0x68,unaff_x20 + 0x68);
  func_0x00010b22e5e8(unaff_x19 + 0x90,unaff_x20 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc1);
  *(undefined8 *)(unaff_x19 + 0xc9) = *(undefined8 *)(unaff_x20 + 0xc9);
  *(undefined8 *)(unaff_x19 + 0xc1) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
  return;
}



/* Entry: 10b22b41c; end: 10b22b45b;  */

bool FUN_10b22b41c(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x80) != 0;
    func_0x00010b22e9d4();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b22b45c; end: 10b22b66b;  */

void FUN_10b22b45c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [8];
  undefined8 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  if (param_3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351a4();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_1 + 0xc0;
  uStack_a0 = param_2;
  lStack_98 = param_3;
  func_0x000107c28148(lVar2);
  FUN_10b23ee68(100,lVar2,0);
  puStack_40 = (undefined8 *)0x0;
  lStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_10b22b274(&puStack_50,&uStack_a0,&uStack_60);
  FUN_10b22b29c(&puStack_40,&puStack_50);
  func_0x00010b22b694(&puStack_50);
  func_0x00010b22b694(&uStack_60);
  puStack_50 = puStack_40 + 8;
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar5 = puStack_40;
  puStack_70 = puStack_40;
  lStack_68 = lStack_38;
  if (lStack_38 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10_01 != 0);
  }
  while (puVar3 = puVar5, FUN_10b22b41c(), ((ulong)puVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar5 + 2,&puStack_50);
  }
  func_0x00010b22b694(&puStack_70);
  if (puStack_40[0x10] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_78);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_78);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b22b5d8);
    (*pcVar1)();
  }
  puVar5 = (undefined8 *)*puStack_40;
  func_0x000107c2798c(&puStack_50);
  func_0x00010b22b694(&puStack_40);
  puStack_40 = puVar5;
  FUN_10b487bf0(*(undefined8 *)(param_1 + 0x10),puVar5);
  lVar2 = param_1 + 0x68;
  FUN_10b22bcd0(lVar2,&puStack_40);
  if (lVar2 == 0) {
    lVar2 = param_1 + 0x90;
    FUN_10b22bcd0(lVar2,&puStack_40);
  }
  uStack_88 = *(undefined8 *)(lVar2 + 0x20);
  uStack_90 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  FUN_10b22bb90(uVar4,&uStack_90);
  FUN_10b22dd70(&uStack_90);
  func_0x00010b22e9f0();
  func_0x00010b22ec68();
  return;
}



/* Entry: 10b22b66c; end: 10b22b6b7;  */

long FUN_10b22b66c(long param_1)

{
  FUN_10b22bdc0(param_1 + 0xd8);
  func_0x00010b22dd94(param_1 + 0x90);
  func_0x00010b22dd94(param_1 + 0x68);
  FUN_10b22bec4(param_1 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  FUN_10b22e658(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b22b6b8; end: 10b22b6db;  */

void FUN_10b22b6b8(undefined8 *param_1)

{
  FUN_10b22b6dc();
  *param_1 = &PTR_FUN_110cc93b0;
  return;
}



/* Entry: 10b22b6dc; end: 10b22b72b;  */

undefined8 * FUN_10b22b6dc(undefined8 *param_1)

{
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110cc93f8;
  func_0x00010b22b744(param_1 + 1);
  param_1[4] = param_1[2];
  param_1[3] = param_1[1];
  if (param_1[2] != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10b22b72c; end: 10b22b72f;  */

long FUN_10b22b72c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b22ec8c(&PTR_FUN_110cc93f8);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x00010b22eb6c();
    FUN_10b22b9b8();
    func_0x00010b22ed38();
  }
  FUN_10b22b928(param_1 + 0x18);
  FUN_10b22b928();
  return param_1;
}



/* Entry: 10b22b730; end: 10b22b75f;  */

void FUN_10b22b730(void)

{
  FUN_10b22b95c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22b760; end: 10b22b763;  */

long FUN_10b22b760(long param_1)

{
  long extraout_x8;
  
  func_0x00010b22ec8c(&PTR_FUN_110cc93f8);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x00010b22eb6c();
    FUN_10b22b9b8();
    func_0x00010b22ed38();
  }
  FUN_10b22b928(param_1 + 0x18);
  FUN_10b22b928();
  return param_1;
}



/* Entry: 10b22b764; end: 10b22b777;  */

void FUN_10b22b764(void)

{
  FUN_10b22b95c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22b778; end: 10b22b817;  */

undefined1 * FUN_10b22b778(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c351a8();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10b22b818();
  *puStack_30 = &PTR_FUN_110cc9418;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[6] = 0x3cb0b1bb;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xc] = 0x32aaaba7;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x15] = 0;
  func_0x000107c351c0();
  FUN_10b22b94c();
  func_0x000107c351a0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10b22b840();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10b22b818; end: 10b22b83f;  */

long FUN_10b22b818(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b22b840();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b22b840; end: 10b22b86f;  */

void FUN_10b22b840(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1745d1745d1745e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb0);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc9418;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22b870; end: 10b22b873;  */

void FUN_10b22b870(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9418;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22b874; end: 10b22b887;  */

void FUN_10b22b874(void)

{
  func_0x00010b22b894();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22b888; end: 10b22b8a3;  */

void FUN_10b22b888(long param_1)

{
  func_0x00010b22b8e4(param_1 + 0xa8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x60);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_10b22dd70();
  }
  return;
}



/* Entry: 10b22b8a4; end: 10b22b907;  */

void FUN_10b22b8a4(long param_1)

{
  func_0x00010b22b8e4(param_1 + 0x90);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x18);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b22dd70();
  }
  return;
}



/* Entry: 10b22b908; end: 10b22b927;  */

void FUN_10b22b908(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10b22dd70();
  }
  return;
}



/* Entry: 10b22b928; end: 10b22b94b;  */

void FUN_10b22b928(long param_1)

{
  func_0x000107c351c8();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b22b94c; end: 10b22b95b;  */

void FUN_10b22b94c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b22b95c; end: 10b22b9b7;  */

long FUN_10b22b95c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b22ec8c(&PTR_FUN_110cc93f8);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x00010b22eb6c();
    FUN_10b22b9b8();
    func_0x00010b22ed38();
  }
  FUN_10b22b928(param_1 + 0x18);
  FUN_10b22b928();
  return param_1;
}



/* Entry: 10b22b9b8; end: 10b22b9fb;  */

void FUN_10b22b9b8(void)

{
  func_0x00010b22e9a4();
  func_0x00010b22ebf0();
  func_0x00010b22eb6c();
  FUN_10b22b9fc();
  func_0x00010b22e9d4();
  func_0x00010b22ebb8();
  return;
}



/* Entry: 10b22b9fc; end: 10b22ba17;  */

void FUN_10b22b9fc(void)

{
  func_0x00010b22ed7c();
  FUN_10b22ba18();
  return;
}



/* Entry: 10b22ba18; end: 10b22baab;  */

void FUN_10b22ba18(void)

{
  long unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b22e900();
  func_0x00010b22e910();
  FUN_10b22baac();
  func_0x00010b22eba4();
  FUN_10b22bad4();
  FUN_10b22b928(auStack_40);
  func_0x00010b22e9f8();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x48);
  func_0x00010b22e9c8();
  FUN_10b22baf8();
  func_0x00010b22eb0c();
  if (unaff_x19 == 0) {
    func_0x00010b22ecfc(lStack_30);
  }
  else {
    func_0x00010b22ec10();
    func_0x00010b22e8d4();
    func_0x00010b22e7f8();
  }
  func_0x00010b22ebb0();
  return;
}



/* Entry: 10b22baac; end: 10b22bad3;  */

void FUN_10b22baac(void)

{
  func_0x00010b22e93c();
  func_0x00010b22ed10();
  func_0x00010b22e8bc();
  func_0x00010b22ec7c();
  return;
}



/* Entry: 10b22bad4; end: 10b22baf7;  */

void FUN_10b22bad4(void)

{
  func_0x00010b22e808();
  FUN_10b22b928();
  return;
}



/* Entry: 10b22baf8; end: 10b22bb0b;  */

void FUN_10b22baf8(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x88,*param_1);
  return;
}



/* Entry: 10b22bb0c; end: 10b22bb37;  */

undefined8 * FUN_10b22bb0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc9468;
  FUN_10b22b66c(param_1 + 1);
  return param_1;
}



/* Entry: 10b22bb38; end: 10b22bb4b;  */

void FUN_10b22bb38(void)

{
  FUN_10b22bb0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22bb4c; end: 10b22bb8f;  */

void FUN_10b22bb4c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b22ea40();
  if (param_3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  FUN_10b22b45c(param_1 + 8);
  func_0x00010b22e9c0();
  return;
}



/* Entry: 10b22bb90; end: 10b22bbab;  */

void FUN_10b22bb90(void)

{
  func_0x00010b22ed7c();
  FUN_10b22bbac();
  return;
}



/* Entry: 10b22bbac; end: 10b22bc53;  */

void FUN_10b22bbac(void)

{
  long unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x00010b22e900();
  func_0x00010b22e910();
  FUN_10b22baac();
  func_0x00010b22eba4();
  FUN_10b22bad4();
  FUN_10b22b928(auStack_40);
  func_0x00010b22e9f8();
  __ZNSt3__15mutex4lockEv(lStack_30 + 0x48);
  func_0x00010b22e9c8();
  FUN_10b22bc54();
  func_0x00010b22eb0c();
  if (unaff_x19 == 0) {
    func_0x00010b22ecfc(lStack_30);
  }
  else {
    func_0x00010b22ec10();
    func_0x00010b22e8d4();
    func_0x00010b22e7f8();
  }
  func_0x00010b22ebb0();
  return;
}



/* Entry: 10b22bc54; end: 10b22bc63;  */

undefined8 * FUN_10b22bc54(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)*param_2;
  if (*(char *)(puVar1 + 2) == '\x01') {
    func_0x00010b22bcac(puVar1);
  }
  else {
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  return puVar1;
}



/* Entry: 10b22bc64; end: 10b22bccf;  */

undefined8 * FUN_10b22bc64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    func_0x00010b22bcac(param_1);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}



/* Entry: 10b22bcd0; end: 10b22bd8f;  */

long FUN_10b22bcd0(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    FUN_10b22bd90();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar6 != plVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 10b22bd90; end: 10b22bd97;  */

void FUN_10b22bd90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x000107c278cc(&uStack_18,8);
  return;
}



/* Entry: 10b22bd98; end: 10b22bdbf;  */

void FUN_10b22bd98(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x000107c278cc(&uStack_18,8);
  return;
}



/* Entry: 10b22bdc0; end: 10b22bde3;  */

void FUN_10b22bdc0(long param_1)

{
  func_0x00010b22eab8();
  if (param_1 != 0) {
    func_0x00010b22e834();
  }
  return;
}



/* Entry: 10b22bde4; end: 10b22be7f;  */

undefined8 * FUN_10b22bde4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_38 = 0;
  lVar1 = param_2[1] - *param_2;
  puStack_40 = param_1;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 3;
    if (uVar4 >> 0x3d != 0) {
      func_0x00010b22b024();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b22be74);
      (*pcVar2)();
    }
    puVar3 = param_1 + 2;
    FUN_10b22b0b0();
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar4;
    _memmove();
    param_1[1] = (long)puVar3 + lVar1;
  }
  uStack_38 = 1;
  FUN_10b22be80(&puStack_40);
  return param_1;
}



/* Entry: 10b22be80; end: 10b22beab;  */

long FUN_10b22be80(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10b22beac(param_1);
  }
  return param_1;
}



/* Entry: 10b22beac; end: 10b22bec3;  */

void FUN_10b22beac(undefined8 *param_1)

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



/* Entry: 10b22bec4; end: 10b22beef;  */

undefined8 FUN_10b22bec4(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_10b22beac(&uStack_28);
  return param_1;
}



/* Entry: 10b22bef0; end: 10b22bf17;  */

void FUN_10b22bef0(void)

{
  func_0x00010b22e93c();
  func_0x00010b22ed10();
  func_0x00010b22e8bc();
  func_0x00010b22ec7c();
  return;
}



/* Entry: 10b22bf18; end: 10b22bf3b;  */

void FUN_10b22bf18(void)

{
  func_0x00010b22e808();
  func_0x00010b22ca84();
  return;
}



/* Entry: 10b22bf3c; end: 10b22bf77;  */

void FUN_10b22bf3c(undefined8 *param_1,long param_2)

{
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  undefined8 extraout_x10;
  undefined8 uVar2;
  int extraout_w13;
  int extraout_w13_00;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x00010b22ea18();
    } while (extraout_w13 != 0);
    do {
      func_0x00010b22ea18();
      param_1 = extraout_x8;
      uVar1 = extraout_x9;
      uVar2 = extraout_x10;
    } while (extraout_w13_00 != 0);
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x00010b22e9c0();
  return;
}



/* Entry: 10b22bf78; end: 10b22c087;  */

void FUN_10b22bf78(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b22eb60();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  FUN_10b22ab94(param_1 + 0x18,unaff_x20 + 0x18);
  FUN_10b22bde4(unaff_x19 + 0x78,unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0xb0,unaff_x20 + 0xb0);
  lVar1 = *(long *)(unaff_x20 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x19 + 200) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x20 + 0xe0);
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  FUN_10b1252ec(unaff_x19 + 0x108,unaff_x20 + 0x108);
  return;
}



/* Entry: 10b22c088; end: 10b22c0c7;  */

bool FUN_10b22c088(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x90) != 0;
    func_0x00010b22e9d4();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b22c0c8; end: 10b22ca53;  */

void FUN_10b22c0c8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  long **pplVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long **extraout_x8_00;
  long *extraout_x8_01;
  long **pplVar11;
  long **extraout_x9;
  ulong uVar12;
  ulong extraout_x9_00;
  long *plVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar14;
  long *extraout_x10;
  long **pplVar15;
  long **extraout_x11;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  int *piVar19;
  long **unaff_x22;
  long *plVar20;
  long **pplVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  long **pplStack_208;
  long *plStack_200;
  ulong uStack_1f8;
  float fStack_1f0;
  long *plStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int *piStack_140;
  int *piStack_138;
  long lStack_130;
  undefined1 uStack_119;
  undefined1 auStack_118 [24];
  long *plStack_100;
  long **pplStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined8 uStack_70;
  
  lVar22 = param_1;
  func_0x000107c351a8();
  lVar22 = *(long *)(lVar22 + 0x170);
  uStack_230 = param_2;
  lStack_228 = param_3;
  uStack_70 = extraout_x8;
  if (param_3 != 0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10 != 0);
    do {
      func_0x000107c351a4();
    } while (extraout_w10_00 != 0);
  }
  plStack_100 = (long *)0x0;
  pplStack_f8 = (long **)0x0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_220 = param_2;
  lStack_218 = param_3;
  FUN_10b22bef0(&plStack_1e8,&uStack_220,&uStack_180);
  FUN_10b22bf18(&plStack_100,&plStack_1e8);
  func_0x00010b22ca84(&plStack_1e8);
  func_0x00010b22ca84(&uStack_180);
  plStack_1e8 = plStack_100 + 10;
  uStack_1e0 = 1;
  __ZNSt3__15mutex4lockEv();
  plVar17 = plStack_100;
  plStack_210 = plStack_100;
  pplStack_208 = pplStack_f8;
  if (pplStack_f8 != (long **)0x0) {
    do {
      func_0x000107c351a4();
    } while (extraout_w10_01 != 0);
  }
  while (plVar20 = plVar17, FUN_10b22c088(), ((ulong)plVar20 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(plVar17 + 4,&plStack_1e8);
  }
  func_0x00010b22ca84(&plStack_210);
  if (plStack_100[0x12] == 0) {
    piStack_138 = (int *)plStack_100[1];
    piStack_140 = (int *)*plStack_100;
    lStack_130 = plStack_100[2];
    plStack_100[1] = 0;
    plStack_100[2] = 0;
    *plStack_100 = 0;
    func_0x000107c2798c(&plStack_1e8);
    func_0x00010b22ca84(&plStack_100);
    uVar6 = piStack_140 == piStack_138;
    if ((bool)uVar6) {
      lVar23 = **(long **)(param_1 + 0x78);
      func_0x00010b22ed2c(param_1 + 0xb0,*(undefined4 *)(lVar23 + 0x20));
      func_0x00010b22ecd8();
      func_0x00010b22e9e4();
      func_0x00010b22e94c();
      func_0x00010b22e858();
      FUN_10b22a550();
      func_0x00010b22ead0();
      func_0x00010b22ead8();
      func_0x00010b22eac8();
    }
    else {
      iVar1 = *piStack_140;
      pplStack_208 = (long **)0x0;
      plStack_210 = (long *)0x0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      fStack_1f0 = 1.0;
      plVar20 = *(long **)(param_1 + 0x80);
      for (plVar17 = *(long **)(param_1 + 0x78); pplVar9 = pplStack_208,
          uVar6 = (long)plVar17 - (long)plVar20 < 0, plVar17 != plVar20; plVar17 = plVar17 + 1) {
        lVar23 = *plVar17;
        iVar2 = *(int *)(lVar23 + 0x20);
        pplVar21 = (long **)(long)iVar2;
        if (pplStack_208 != (long **)0x0) {
          uVar10 = (long)pplStack_208 - 1;
          if (((ulong)pplStack_208 & uVar10) == 0) {
            unaff_x22 = (long **)(uVar10 & (ulong)pplVar21);
            uVar6 = false;
          }
          else {
            uVar6 = (long)pplStack_208 - (long)pplVar21 < 0;
            unaff_x22 = pplVar21;
            if (pplStack_208 <= pplVar21) {
              uVar12 = 0;
              if (pplStack_208 != (long **)0x0) {
                uVar12 = (ulong)pplVar21 / (ulong)pplStack_208;
              }
              unaff_x22 = (long **)((long)pplVar21 - uVar12 * (long)pplStack_208);
            }
          }
          plVar18 = (long *)plStack_210[(long)unaff_x22];
          if (plVar18 != (long *)0x0) {
            do {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_10b22c2ac;
                pplVar11 = (long **)plVar18[1];
                if (pplVar11 != pplVar21) break;
                uVar6 = (int)plVar18[2] - iVar2 < 0;
                if ((int)plVar18[2] == iVar2) goto LAB_10b22c52c;
              }
              if (((ulong)pplStack_208 & uVar10) == 0) {
                pplVar11 = (long **)((ulong)pplVar11 & uVar10);
              }
              else if (pplStack_208 <= pplVar11) {
                uVar12 = 0;
                if (pplStack_208 != (long **)0x0) {
                  uVar12 = (ulong)pplVar11 / (ulong)pplStack_208;
                }
                pplVar11 = (long **)((long)pplVar11 - uVar12 * (long)pplStack_208);
              }
              uVar6 = (long)pplVar11 - (long)unaff_x22 < 0;
            } while (pplVar11 == unaff_x22);
          }
        }
LAB_10b22c2ac:
        plVar18 = (long *)0x20;
        __Znwm();
        uStack_f0 = 1;
        *plVar18 = 0;
        plVar18[1] = (long)pplVar21;
        *(int *)(plVar18 + 2) = iVar2;
        plVar18[3] = 0;
        plStack_100 = plVar18;
        pplStack_f8 = &plStack_200;
        if ((pplVar9 == (long **)0x0) ||
           (func_0x00010b22eda8((float)(uStack_1f8 + 1),fStack_1f0,(float)pplVar9), (bool)uVar6)) {
          bVar5 = (long **)0x2 < pplVar9;
          bVar7 = pplVar9 == (long **)0x3;
          func_0x00010b22e928((long)pplVar9 << 1);
          pplVar11 = extraout_x8_00;
          if (!bVar5 || bVar7) {
            pplVar11 = extraout_x9;
          }
          pplVar15 = pplVar9;
          if ((long)pplVar11 - 1U == 0) {
            pplVar11 = (long **)0x2;
          }
          else if (((ulong)pplVar11 & (long)pplVar11 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            pplVar15 = pplStack_208;
          }
          pplVar9 = pplVar11;
          if (pplVar15 < pplVar11) {
LAB_10b22c33c:
            if ((ulong)pplVar9 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b22c854;
            }
            lVar8 = (long)pplVar9 << 3;
            __Znwm(lVar8);
            FUN_10b22ceb8(&plStack_210,lVar8);
            for (pplVar11 = (long **)0x0; pplVar9 != pplVar11;
                pplVar11 = (long **)((long)pplVar11 + 1)) {
              plStack_210[(long)pplVar11] = 0;
            }
            pplStack_208 = pplVar9;
            if (plStack_200 != (long *)0x0) {
              pplVar11 = (long **)plStack_200[1];
              uVar12 = (long)pplVar9 - 1;
              uVar10 = 0;
              if (pplVar9 != (long **)0x0) {
                uVar10 = (ulong)pplVar11 / (ulong)pplVar9;
              }
              pplVar15 = pplVar11;
              if (pplVar9 <= pplVar11) {
                pplVar15 = (long **)((long)pplVar11 - uVar10 * (long)pplVar9);
              }
              if (((ulong)pplVar9 & uVar12) == 0) {
                pplVar15 = (long **)((ulong)pplVar11 & uVar12);
              }
              plStack_210[(long)pplVar15] = (long)&plStack_200;
              plVar13 = plStack_210;
              plVar16 = plStack_200;
              while (plVar14 = plVar16, plVar16 = (long *)*plVar14, plVar16 != (long *)0x0) {
                pplVar11 = (long **)plVar16[1];
                if (((ulong)pplVar9 & uVar12) == 0) {
                  pplVar11 = (long **)((ulong)pplVar11 & uVar12);
                }
                else if (pplVar9 <= pplVar11) {
                  uVar10 = 0;
                  if (pplVar9 != (long **)0x0) {
                    uVar10 = (ulong)pplVar11 / (ulong)pplVar9;
                  }
                  pplVar11 = (long **)((long)pplVar11 - uVar10 * (long)pplVar9);
                }
                if (pplVar11 != pplVar15) {
                  if (plVar13[(long)pplVar11] == 0) {
                    plVar13[(long)pplVar11] = (long)plVar14;
                    pplVar15 = pplVar11;
                  }
                  else {
                    *plVar14 = *plVar16;
                    func_0x00010b22ecb4();
                    plVar13 = extraout_x8_01;
                    uVar12 = extraout_x9_00;
                    plVar16 = extraout_x10;
                    pplVar15 = extraout_x11;
                  }
                }
              }
            }
          }
          else {
            pplVar9 = pplVar15;
            if (pplVar11 < pplVar15) {
              pplVar9 = (long **)(long)((float)uStack_1f8 / fStack_1f0);
              if ((pplVar15 < (long **)0x3) || (((ulong)pplVar15 & (long)pplVar15 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long **)0x1 < pplVar9) {
                pplVar9 = (long **)(1L << (-LZCOUNT((long)pplVar9 + -1) & 0x3fU));
              }
              if (pplVar11 <= pplVar9) {
                pplVar11 = pplVar9;
              }
              pplVar9 = pplStack_208;
              if (pplVar11 < pplVar15) {
                pplVar9 = pplVar11;
                if (pplVar11 != (long **)0x0) goto LAB_10b22c33c;
                FUN_10b22ceb8(&plStack_210,0);
                pplStack_208 = (long **)0x0;
                pplVar9 = (long **)0x0;
              }
            }
          }
          if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
            unaff_x22 = (long **)((long)pplVar9 - 1U & (ulong)pplVar21);
          }
          else {
            unaff_x22 = pplVar21;
            if (pplVar9 <= pplVar21) {
              uVar10 = 0;
              if (pplVar9 != (long **)0x0) {
                uVar10 = (ulong)pplVar21 / (ulong)pplVar9;
              }
              unaff_x22 = (long **)((long)pplVar21 - uVar10 * (long)pplVar9);
            }
          }
        }
        plVar13 = (long *)plStack_210[(long)unaff_x22];
        if (plVar13 == (long *)0x0) {
          *plVar18 = (long)plStack_200;
          plStack_210[(long)unaff_x22] = (long)&plStack_200;
          plStack_200 = plVar18;
          if (*plVar18 != 0) {
            pplVar21 = *(long ***)(*plVar18 + 8);
            if (((ulong)pplVar9 & (long)pplVar9 - 1U) == 0) {
              pplVar21 = (long **)((ulong)pplVar21 & (long)pplVar9 - 1U);
            }
            else if (pplVar9 <= pplVar21) {
              uVar10 = 0;
              if (pplVar9 != (long **)0x0) {
                uVar10 = (ulong)pplVar21 / (ulong)pplVar9;
              }
              pplVar21 = (long **)((long)pplVar21 - uVar10 * (long)pplVar9);
            }
            plStack_210[(long)pplVar21] = (long)plVar18;
          }
        }
        else {
          *plVar18 = *plVar13;
          *plVar13 = (long)plVar18;
        }
        plStack_100 = (long *)0x0;
        uStack_1f8 = uStack_1f8 + 1;
        FUN_10b22ced0(&plStack_100);
LAB_10b22c52c:
        plVar18[3] = lVar23;
      }
      uVar10 = (long)pplStack_208 - 1;
      for (piVar19 = piStack_140; piVar19 != piStack_138; piVar19 = piVar19 + 1) {
        if (pplStack_208 != (long **)0x0 && uStack_1f8 != 0) {
          pplVar9 = (long **)(long)*piVar19;
          if (((ulong)pplStack_208 & uVar10) == 0) {
            pplVar21 = (long **)(uVar10 & (ulong)pplVar9);
          }
          else {
            pplVar21 = pplVar9;
            if (pplStack_208 <= pplVar9) {
              uVar12 = 0;
              if (pplStack_208 != (long **)0x0) {
                uVar12 = (ulong)pplVar9 / (ulong)pplStack_208;
              }
              pplVar21 = (long **)((long)pplVar9 - uVar12 * (long)pplStack_208);
            }
          }
          plVar17 = (long *)plStack_210[(long)pplVar21];
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_10b22c5e4;
                pplVar11 = (long **)plVar17[1];
                if (pplVar11 != pplVar9) break;
                uVar6 = *(int *)(plVar17 + 2) == *piVar19;
                if ((bool)uVar6) {
                  func_0x00010b22ed04(param_1 + 0xb0);
                  func_0x00010b22b23c(&uStack_180,plVar17[3]);
                  func_0x00010b22e9e4();
                  func_0x00010b22e94c();
                  func_0x00010b22e858();
                  FUN_10b22a550();
                  func_0x00010b22ead0();
                  func_0x00010b22ead8();
                  func_0x00010b22eac8();
                  lVar23 = plVar17[3];
                  goto LAB_10b22c768;
                }
              }
              if (((ulong)pplStack_208 & uVar10) == 0) {
                pplVar11 = (long **)((ulong)pplVar11 & uVar10);
              }
              else if (pplStack_208 <= pplVar11) {
                uVar12 = 0;
                if (pplStack_208 != (long **)0x0) {
                  uVar12 = (ulong)pplVar11 / (ulong)pplStack_208;
                }
                pplVar11 = (long **)((long)pplVar11 - uVar12 * (long)pplStack_208);
              }
            } while (pplVar11 == pplVar21);
          }
        }
LAB_10b22c5e4:
      }
      lVar23 = **(long **)(param_1 + 0x78);
      uVar3 = *(undefined4 *)(lVar23 + 0x20);
      func_0x00010b22ed04(param_1 + 0xb0,uVar3);
      func_0x0001059710c8(&plStack_100,&PTR_DAT_110cc9370,param_1 + 0xb0);
      __ZNSt3__19to_stringEi(&uStack_180,uVar3);
      func_0x00010b227c98(auStack_d0,&PTR_DAT_110cc9378,&uStack_180);
      __ZNSt3__19to_stringEi(auStack_118,iVar1);
      func_0x00010b227c98(auStack_a0,&PTR_s_optimalVariant_110cc9380,auStack_118);
      func_0x000108992a94(&plStack_1e8,&plStack_100,3,&uStack_119);
      lVar8 = 0x60;
      do {
        func_0x000107c278c0((long)&plStack_100 + lVar8);
        lVar8 = lVar8 + -0x30;
        uVar6 = lVar8 == -0x30;
      } while (!(bool)uVar6);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_180);
      FUN_10b23eda4(0x36,&plStack_1e8);
      func_0x000108992e04(&plStack_1e8);
      func_0x00010b22ecd8();
      func_0x00010b22e9e4();
      func_0x00010b22e94c();
      func_0x00010b22e858();
      FUN_10b22a550();
      func_0x00010b22ead0();
      func_0x00010b22ead8();
      func_0x00010b22eac8();
LAB_10b22c768:
      func_0x00010b22cef4(&plStack_210);
    }
    func_0x000107c27a18(&piStack_140);
    plStack_100 = (long *)0x0;
    pplStack_f8 = (long **)0x0;
    uStack_180 = 0;
    uStack_178 = 0;
    FUN_10b22b274(&plStack_1e8,lVar22 + 8,&uStack_180);
    FUN_10b22b29c(&plStack_100,&plStack_1e8);
    func_0x00010b22b694(&plStack_1e8);
    func_0x00010b22b694(&uStack_180);
    plVar17 = plStack_100;
    __ZNSt3__15mutex4lockEv(plStack_100 + 8);
    *plStack_100 = lVar23;
    *(undefined1 *)(plStack_100 + 1) = 1;
    plVar20 = (long *)plStack_100[0x11];
    plStack_100[0x11] = 0;
    __ZNSt3__15mutex6unlockEv(plVar17 + 8);
    if (plVar20 == (long *)0x0) {
      func_0x00010b22ecec(plStack_100);
    }
    else {
      (**(code **)(*plVar20 + 0x10))(plVar20,&plStack_100);
      func_0x00010b22e97c();
    }
    func_0x00010b22b694(&plStack_100);
    func_0x00010b22ca84(&uStack_220);
    func_0x00010b22ca84(&uStack_230);
    func_0x000107c351a0(uStack_70);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_118);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_118);
LAB_10b22c854:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10b22c858);
  (*pcVar4)();
}



/* Entry: 10b22ca54; end: 10b22caf7;  */

void FUN_10b22ca54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  if (lVar1 != 0) {
    func_0x00010b22e834();
  }
  func_0x00010b121ac0(param_1 + 0x108);
  func_0x000107c27a18(param_1 + 0xf0);
  func_0x000107c27a18(param_1 + 0xd8);
  FUN_10b22e7d4(param_1 + 200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb0);
  FUN_10b225f10(param_1 + 0x90);
  FUN_10b22bec4(param_1 + 0x78);
  FUN_10b486d14(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10b22caf8; end: 10b22cafb;  */

long FUN_10b22caf8(long param_1)

{
  long extraout_x8;
  
  func_0x00010b22ec8c(&PTR_FUN_110cc97a8);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x00010b22eb6c();
    FUN_10b22cd2c();
    func_0x00010b22ed38();
  }
  func_0x00010b22b694(param_1 + 0x18);
  func_0x00010b22b694();
  return param_1;
}



/* Entry: 10b22cafc; end: 10b22cb2b;  */

void FUN_10b22cafc(void)

{
  FUN_10b22ccd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22cb2c; end: 10b22cb2f;  */

long FUN_10b22cb2c(long param_1)

{
  long extraout_x8;
  
  func_0x00010b22ec8c(&PTR_FUN_110cc97a8);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x00010b22eb6c();
    FUN_10b22cd2c();
    func_0x00010b22ed38();
  }
  func_0x00010b22b694(param_1 + 0x18);
  func_0x00010b22b694();
  return param_1;
}



/* Entry: 10b22cb30; end: 10b22cb43;  */

void FUN_10b22cb30(void)

{
  FUN_10b22ccd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22cb44; end: 10b22cbd3;  */

undefined1 * FUN_10b22cb44(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c351a8();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10b22cbd4();
  *puStack_30 = &PTR_FUN_110cc97d8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0x3cb0b1bb;
  puStack_30[7] = 0;
  puStack_30[6] = 0;
  puStack_30[9] = 0;
  puStack_30[8] = 0;
  puStack_30[10] = 0;
  puStack_30[0xb] = 0x32aaaba7;
  puStack_30[0xd] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x14] = 0;
  func_0x000107c351c0();
  FUN_10b22ccc0();
  func_0x000107c351a0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10b22cbfc();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10b22cbd4; end: 10b22cbfb;  */

long FUN_10b22cbd4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b22cbfc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b22cbfc; end: 10b22cc2b;  */

void FUN_10b22cbfc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x186186186186187) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc97d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22cc2c; end: 10b22cc2f;  */

void FUN_10b22cc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc97d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b22cc30; end: 10b22cc43;  */

void FUN_10b22cc30(void)

{
  func_0x00010b22cc50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b22cc44; end: 10b22cc5f;  */

long FUN_10b22cc44(long param_1)

{
  func_0x00010b22cc9c(param_1 + 0xa0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 10b22cc60; end: 10b22ccbf;  */

long FUN_10b22cc60(long param_1)

{
  func_0x00010b22cc9c(param_1 + 0x88);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x80);
  __ZNSt3__15mutexD1Ev(param_1 + 0x40);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b22ccc0; end: 10b22cccf;  */

void FUN_10b22ccc0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b22ccd0; end: 10b22cd2b;  */

long FUN_10b22ccd0(long param_1)

{
  long extraout_x8;
  
  func_0x00010b22ec8c(&PTR_FUN_110cc97a8);
  if (extraout_x8 != 0) {
    func_0x00010b22e9a4();
    func_0x00010b22eb6c();
    FUN_10b22cd2c();
    func_0x00010b22ed38();
  }
  func_0x00010b22b694(param_1 + 0x18);
  func_0x00010b22b694();
  return param_1;
}


