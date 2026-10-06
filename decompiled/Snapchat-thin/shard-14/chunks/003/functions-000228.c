/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b11b6fc; end: 10b11b8cf;  */

void FUN_10b11b6fc(void)

{
  char cVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar2;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b134530();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  cVar1 = *(char *)(unaff_x19 + 0x58);
  if (cVar1 == *(char *)(unaff_x20 + 0x58)) {
    if (cVar1 != '\0') {
      func_0x00010b123e24(unaff_x19 + 0x18,unaff_x20 + 0x18);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10b123a3c(unaff_x19 + 0x18,unaff_x20 + 0x18);
  }
  else {
    func_0x00010b121660();
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x79);
  *(undefined8 *)(unaff_x19 + 0x81) = *(undefined8 *)(unaff_x20 + 0x81);
  *(undefined8 *)(unaff_x19 + 0x79) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  FUN_10b123e5c(unaff_x19 + 0x90,unaff_x20 + 0x90);
  func_0x00010b123e84(unaff_x19 + 0x138,unaff_x20 + 0x138);
  cVar1 = *(char *)(unaff_x19 + 0x1b8);
  if (cVar1 == *(char *)(unaff_x20 + 0x1b8)) {
    if (cVar1 != '\0') {
      func_0x00010b24da58(unaff_x19 + 0x180,unaff_x20 + 0x180);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10b123a9c(unaff_x19 + 0x180,unaff_x20 + 0x180);
  }
  else {
    FUN_10b1217fc();
  }
  func_0x00010b134f4c();
  func_0x00010b123dec(unaff_x19 + 0x1c8,unaff_x20 + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x1e0) != 0) {
    do {
      func_0x00010b133f68();
      uVar2 = extraout_x8;
      uVar3 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x1e0);
  uStack_40 = *(undefined8 *)(unaff_x19 + 0x1d8);
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar2;
  func_0x00010b121950(&uStack_40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x1e8);
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x1f0) != 0) {
    do {
      func_0x00010b133f68();
      uVar2 = extraout_x8_00;
      uVar3 = extraout_x9_00;
    } while (extraout_w12_00 != 0);
  }
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x1f0);
  uStack_40 = *(undefined8 *)(unaff_x19 + 0x1e8);
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar2;
  func_0x00010b1219bc(&uStack_40);
  FUN_10b123eac(unaff_x19 + 0x1f8,unaff_x20 + 0x1f8);
  func_0x00010b123dec(unaff_x19 + 0x208,unaff_x20 + 0x208);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x218);
  uVar3 = 0;
  if (*(long *)(unaff_x20 + 0x220) != 0) {
    do {
      func_0x00010b133f68();
      uVar3 = extraout_x8_01;
      uVar2 = extraout_x9_01;
    } while (extraout_w12_01 != 0);
  }
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x220);
  uStack_40 = *(undefined8 *)(unaff_x19 + 0x218);
  *(undefined8 *)(unaff_x19 + 0x218) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x220) = uVar3;
  func_0x00010b121a28(&uStack_40);
  FUN_10b123eac(unaff_x19 + 0x228,unaff_x20 + 0x228);
  func_0x00010b123dec(unaff_x19 + 0x238,unaff_x20 + 0x238);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x248);
  uVar3 = 0;
  if (*(long *)(unaff_x20 + 0x250) != 0) {
    do {
      func_0x00010b133f68();
      uVar3 = extraout_x8_02;
      uVar2 = extraout_x9_02;
    } while (extraout_w12_02 != 0);
  }
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x250);
  uStack_40 = *(undefined8 *)(unaff_x19 + 0x248);
  *(undefined8 *)(unaff_x19 + 0x248) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x250) = uVar3;
  func_0x00010b121a70(&uStack_40);
  FUN_10b123eac(unaff_x19 + 600,unaff_x20 + 600);
  func_0x00010b123dec(unaff_x19 + 0x268,unaff_x20 + 0x268);
  return;
}



/* Entry: 10b11b8d0; end: 10b11ba73;  */

undefined1  [16] FUN_10b11b8d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined8 uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x9;
  ulong uVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x25;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x00010b136544();
  func_0x00010b1347f0();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    uVar4 = param_3;
    if ((uVar6 & uVar7) == 0) {
      unaff_x25 = uVar7 & param_3;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar6) < 0;
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        func_0x00010b13633c();
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x20 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar5;
          if (unaff_x20 == (long *)0x0) goto LAB_10b11b978;
          uVar3 = unaff_x20[1];
          in_NG = (long)(uVar3 - param_3) < 0;
          plVar5 = unaff_x20;
          if (uVar3 != param_3) break;
          func_0x00010b135e40();
          if ((uVar4 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10b11ba44;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar3 = uVar3 & uVar7;
        }
        else if (uVar6 <= uVar3) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar3 / uVar6;
          }
          uVar3 = uVar3 - uVar1 * uVar6;
        }
        in_NG = (long)(uVar3 - unaff_x25) < 0;
      } while (uVar3 == unaff_x25);
    }
  }
LAB_10b11b978:
  func_0x00010b135e30();
  func_0x00010b1363d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b135d7c();
  func_0x00010b1345b0();
  if ((uVar6 == 0) ||
     (func_0x00010b135ab0(param_1,param_2,(float)uVar6), uVar4 = unaff_x25, (bool)in_NG)) {
    func_0x00010b135a98();
    func_0x00010b1342d8();
    func_0x00010b136014();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & param_3;
    }
    else {
      uVar4 = param_3;
      if (uVar6 <= param_3) {
        func_0x00010b13633c();
        uVar4 = unaff_x25;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar4 * 8) == 0) {
    func_0x00010b135a80();
    if (extraout_x9 != 0) {
      uVar4 = *(ulong *)(extraout_x9 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar4 = uVar4 & uVar6 - 1;
      }
      else if (uVar6 <= uVar4) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar7 * uVar6;
      }
      *(long **)(extraout_x8 + uVar4 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b135990();
  }
  func_0x00010b1342c0();
  FUN_10b129f9c();
  uVar2 = 1;
LAB_10b11ba44:
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = unaff_x20;
  return auVar8;
}



/* Entry: 10b11ba74; end: 10b11bbff;  */

void FUN_10b11ba74(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5
                  ,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long alStack_730 [2];
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined1 auStack_710 [632];
  undefined1 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined4 uStack_474;
  undefined1 auStack_470 [632];
  undefined1 auStack_1f8 [32];
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  long **pplStack_1c8;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  long *aplStack_198 [4];
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [32];
  undefined1 *puStack_110;
  undefined1 auStack_108 [8];
  long lStack_100;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = param_5;
  uVar11 = param_6;
  lVar12 = param_7;
  func_0x00010b133e8c();
  uVar3 = param_2 == 0;
  uVar14 = 0x18;
  if ((bool)uVar3) {
    uVar14 = 0x19;
  }
  uVar16 = (ulong)uVar14;
  uStack_68 = extraout_x8;
  func_0x00010b1341a0(auStack_130);
  FUN_10b12983c(auStack_108,param_5);
  func_0x00010b12aca4(auStack_e0,param_6);
  func_0x00010b123d80(auStack_b8,&UNK_10f72f996,0xc,param_3);
  func_0x00010b1351c8(auStack_130,&lStack_160);
  puStack_90 = &DAT_10f2daab1;
  uStack_88 = 7;
  lStack_78 = lStack_158;
  lStack_80 = lStack_160;
  uStack_70 = uStack_150;
  func_0x00010b1364d8();
  func_0x00010b120648(auStack_148,auStack_130,5);
  FUN_10b1135dc(param_1,uVar16,auStack_148);
  func_0x00010b134a8c();
  lVar17 = lStack_160;
  lVar18 = lStack_158;
  do {
    func_0x00010b1355dc();
    func_0x00010b135170();
  } while (!(bool)uVar3);
  func_0x00010b13458c();
  func_0x00010b133dfc(uStack_68);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134834();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b134594();
    iVar13 = (int)param_8;
  } while (!(bool)uVar3);
  func_0x00010b13458c();
  func_0x00010b1343d0();
  func_0x00010b134cf8(FUN_10b11bc00);
  lVar4 = param_7;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x00010b134b60();
  func_0x00010b133e10();
  uStack_168 = extraout_x8_00;
  FUN_10b1c41c0();
  if (lVar4 == 0) {
    if (*(char *)(param_7 + 0x58) == '\x01') {
      uVar15 = *(undefined4 *)(param_7 + 0x18);
    }
    else {
      uVar15 = 5;
    }
    if (*(char *)(param_7 + 0x88) == '\x01') {
      uVar9 = *(undefined4 *)(param_7 + 100);
    }
    else {
      uVar9 = 0;
    }
    uVar1 = 0x11;
    if (iVar13 == 0) {
      uVar1 = 0xe;
    }
    puVar2 = &UNK_10f72f865;
    if (iVar13 == 0) {
      puVar2 = &UNK_10f72f877;
    }
    FUN_10b20c010(**(undefined8 **)(uVar16 + 0x18),puVar2,uVar1,uVar15,uVar9);
    func_0x00010b135bb4(auStack_470);
    uStack_720 = 0;
    uStack_718 = 0;
  }
  else {
    func_0x00010b135bb4(auStack_470);
    FUN_10b1b3d48(&uStack_720,lVar4);
  }
  func_0x00010b135dc8(auStack_1f8,uVar16,auStack_470,&uStack_720,lVar12,uVar11);
  func_0x0001052ac684(&uStack_720);
  func_0x00010b121af0(auStack_470);
  uVar15 = 1;
  if (iVar13 == 0) {
    uVar15 = 2;
  }
  *(undefined4 *)(lVar10 + 0x270) = uVar15;
  uVar5 = uVar16;
  FUN_10b11b37c(uVar16,param_7,&UNK_10f72f886,0xd);
  uStack_474 = (undefined4)uVar5;
  uVar14 = *(uint *)(lVar12 + 0x1c);
  func_0x00010b135bb4(&uStack_720);
  FUN_10b118928(&uStack_490,uVar16 + 0x18,(ulong)uVar14 | 0x100000000,&uStack_720,0xffffffffffffff38
                ,uVar11,&uStack_474,auStack_1f8,lVar10,0);
  func_0x00010b121af0(&uStack_720);
  func_0x00010b135cec();
  FUN_10b121c1c(auStack_710,param_7);
  uStack_498 = (undefined1)iVar13;
  plVar6 = *(long **)(*(long *)(uVar16 + 0x18) + 0x30);
  func_0x00010b1ff218(alStack_730,plVar6,uRamffffffffffffff50);
  func_0x00010b1347c0(*(undefined8 *)(alStack_730[0] + 0x10));
  uVar3 = extraout_x8_01 == *plVar6;
  if ((bool)uVar3) {
    FUN_10b11cdb4(&uStack_720);
  }
  else {
    uStack_1a8 = 0x10b130a18;
    ppuStack_1a0 = &PTR_FUN_110cbd140;
    func_0x00010b1355f4();
    plVar7 = plVar6;
    func_0x00010b135ad4();
    plVar7[1] = lVar18;
    *plVar7 = lVar17;
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    FUN_10b12394c(plVar6 + 2,auStack_710);
    *(undefined1 *)(plVar6 + 0x51) = uStack_498;
    aplStack_198[0] = plVar6;
    func_0x00010b135fd4();
    func_0x00010b1341cc(ppuStack_1a0);
  }
  if (lStack_100 != 0) {
    FUN_10b127af8(&uStack_1a8,*(undefined8 *)(uVar16 + 8),*(undefined8 *)(uVar16 + 0x10));
    pplVar8 = aplStack_198;
    func_0x00010b123c68(pplVar8,lStack_100);
    lStack_170 = lStack_488;
    uStack_178 = uStack_490;
    if (lStack_488 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    pcStack_1d8 = FUN_10b130a44;
    ppuStack_1d0 = &PTR_FUN_110cbd158;
    func_0x00010b134ae0();
    func_0x00010b130af8();
    pplStack_1c8 = pplVar8;
    func_0x00010b134cec();
    FUN_10b11cebc();
    func_0x00010b133eec(ppuStack_1d0);
    FUN_10b11cfdc(&uStack_1a8);
  }
  lRam00000000000000b8 = lStack_488;
  uRam00000000000000b0 = uStack_490;
  lStack_488 = 0;
  uStack_490 = 0;
  func_0x00010b1298c4(alStack_730);
  func_0x00010b11d000(&uStack_720);
  func_0x00010b12b94c(&uStack_490);
  FUN_10b123d38(auStack_1f8);
  func_0x00010b133dfc(uStack_168);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010b1298c4(alStack_730);
    func_0x00010b11d000(&uStack_720);
    func_0x00010b12b94c(&uStack_490);
    FUN_10b123d38(auStack_1f8);
    do {
      func_0x00010b1343d0();
      func_0x00010b134604();
      func_0x0001052ac684();
      func_0x00010b121af0(auStack_470);
    } while( true );
  }
  return;
}



/* Entry: 10b11bc00; end: 10b11bfaf;  */

void FUN_10b11bc00(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long in_x3;
  undefined4 uVar9;
  long in_x4;
  long in_x6;
  int in_w7;
  undefined4 uVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long in_register_00005008;
  long in_stack_00000060;
  long alStack_5d0 [2];
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [632];
  undefined1 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined4 uStack_314;
  undefined1 auStack_310 [632];
  undefined1 auStack_98 [32];
  code *pcStack_78;
  undefined **ppuStack_70;
  long **pplStack_68;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long *aplStack_38 [4];
  undefined8 uStack_18;
  long lStack_10;
  undefined8 uStack_8;
  
  func_0x00010b134cf8();
  lVar5 = in_x3;
  func_0x00010b134b60();
  func_0x00010b133e10();
  uStack_8 = extraout_x8;
  FUN_10b1c41c0();
  if (lVar5 == 0) {
    if (*(char *)(in_x3 + 0x58) == '\x01') {
      uVar10 = *(undefined4 *)(in_x3 + 0x18);
    }
    else {
      uVar10 = 5;
    }
    if (*(char *)(in_x3 + 0x88) == '\x01') {
      uVar9 = *(undefined4 *)(in_x3 + 100);
    }
    else {
      uVar9 = 0;
    }
    uVar1 = 0x11;
    if (in_w7 == 0) {
      uVar1 = 0xe;
    }
    puVar2 = &UNK_10f72f865;
    if (in_w7 == 0) {
      puVar2 = &UNK_10f72f877;
    }
    FUN_10b20c010(**(undefined8 **)(unaff_x21 + 0x18),puVar2,uVar1,uVar10,uVar9);
    func_0x00010b135bb4(auStack_310);
    uStack_5c0 = 0;
    uStack_5b8 = 0;
  }
  else {
    func_0x00010b135bb4(auStack_310);
    FUN_10b1b3d48(&uStack_5c0,lVar5);
  }
  func_0x00010b135dc8(auStack_98);
  func_0x0001052ac684(&uStack_5c0);
  func_0x00010b121af0(auStack_310);
  uVar10 = 1;
  if (in_w7 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)(in_x4 + 0x270) = uVar10;
  lVar5 = unaff_x21;
  FUN_10b11b37c();
  uStack_314 = (undefined4)lVar5;
  uVar3 = *(uint *)(in_x6 + 0x1c);
  func_0x00010b135bb4(&uStack_5c0);
  FUN_10b118928(&uStack_330,unaff_x21 + 0x18,(ulong)uVar3 | 0x100000000,&uStack_5c0);
  func_0x00010b121af0(&uStack_5c0);
  func_0x00010b135cec();
  FUN_10b121c1c(auStack_5b0,in_x3);
  uStack_338 = (undefined1)in_w7;
  plVar6 = *(long **)(*(long *)(unaff_x21 + 0x18) + 0x30);
  func_0x00010b1ff218(alStack_5d0,plVar6,*(undefined4 *)(unaff_x20 + 0x18));
  func_0x00010b1347c0(*(undefined8 *)(alStack_5d0[0] + 0x10));
  uVar4 = extraout_x8_00 == *plVar6;
  if ((bool)uVar4) {
    FUN_10b11cdb4(&uStack_5c0);
  }
  else {
    uStack_48 = 0x10b130a18;
    ppuStack_40 = &PTR_FUN_110cbd140;
    func_0x00010b1355f4();
    plVar7 = plVar6;
    func_0x00010b135ad4();
    plVar7[1] = in_register_00005008;
    *plVar7 = param_1;
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    FUN_10b12394c(plVar6 + 2,auStack_5b0);
    *(undefined1 *)(plVar6 + 0x51) = uStack_338;
    aplStack_38[0] = plVar6;
    func_0x00010b135fd4();
    func_0x00010b1341cc(ppuStack_40);
  }
  if (in_stack_00000060 != 0) {
    FUN_10b127af8(&uStack_48,*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)(unaff_x21 + 0x10));
    pplVar8 = aplStack_38;
    func_0x00010b123c68(pplVar8,in_stack_00000060);
    lStack_10 = lStack_328;
    uStack_18 = uStack_330;
    if (lStack_328 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    pcStack_78 = FUN_10b130a44;
    ppuStack_70 = &PTR_FUN_110cbd158;
    func_0x00010b134ae0();
    func_0x00010b130af8();
    pplStack_68 = pplVar8;
    func_0x00010b134cec();
    FUN_10b11cebc();
    func_0x00010b133eec(ppuStack_70);
    FUN_10b11cfdc(&uStack_48);
  }
  unaff_x19[1] = lStack_328;
  *unaff_x19 = uStack_330;
  lStack_328 = 0;
  uStack_330 = 0;
  func_0x00010b1298c4(alStack_5d0);
  func_0x00010b11d000(&uStack_5c0);
  func_0x00010b12b94c(&uStack_330);
  FUN_10b123d38(auStack_98);
  func_0x00010b133dfc(uStack_8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00010b1298c4(alStack_5d0);
    func_0x00010b11d000(&uStack_5c0);
    func_0x00010b12b94c(&uStack_330);
    FUN_10b123d38(auStack_98);
    do {
      func_0x00010b1343d0();
      func_0x00010b134604();
      func_0x0001052ac684();
      func_0x00010b121af0(auStack_310);
    } while( true );
  }
  return;
}



/* Entry: 10b11bfb0; end: 10b11c017;  */

long FUN_10b11bfb0(long param_1)

{
  if (*(char *)(param_1 + 0x278) == '\x01') {
    FUN_10b1151e4();
  }
  else {
    FUN_10b12452c();
  }
  return param_1;
}



/* Entry: 10b11c018; end: 10b11c4e7;  */

void FUN_10b11c018(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  undefined8 unaff_x19;
  long lVar12;
  bool bVar13;
  undefined8 in_stack_fffffffffffff708;
  long alStack_8f0 [4];
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  long lStack_8a0;
  long lStack_898;
  undefined1 uStack_890;
  undefined7 uStack_88f;
  long *plStack_888;
  long *plStack_880;
  byte abStack_878 [48];
  char cStack_848;
  undefined1 auStack_800 [32];
  ushort uStack_7e0;
  undefined1 auStack_7d8 [202];
  char cStack_70e;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  undefined1 auStack_540 [632];
  undefined1 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined1 uStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  long *plStack_278;
  undefined8 uStack_10;
  
  func_0x00010b134cf8();
  lVar12 = param_1;
  lVar10 = param_3;
  func_0x00010b133e68();
  uVar4 = *(int *)(lVar10 + 8) - 3;
  uVar6 = uVar4 == 2;
  uStack_10 = extraout_x8;
  if (1 < uVar4) {
    func_0x00010b135c18(alStack_8f0);
    func_0x00010b135a20();
    FUN_10b119b74();
    plVar9 = alStack_8f0;
    goto LAB_10b11c35c;
  }
  bVar1 = *(byte *)(param_4 + 0x38);
  bVar2 = *(byte *)(param_4 + 0x28);
  bVar3 = *(byte *)(param_4 + 0x29);
  lStack_2a0 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_290 = 1;
  lStack_298 = lVar12;
  func_0x00010b135c18(&lStack_2c0);
  FUN_10b210424(lStack_2b0);
  plVar9 = &lStack_2a0;
  func_0x000107c28148();
  auStack_540[0] = 0;
  uStack_2c8 = 0;
  iVar7 = (int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
  FUN_10b20ecb0();
  if (iVar7 == 0) {
LAB_10b11c1cc:
    plVar8 = &lStack_2a0;
    func_0x000107c28148();
    FUN_10b127af8(&lStack_550,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    lStack_8c8 = lStack_548;
    lStack_8d0 = lStack_550;
    if (lStack_548 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    lStack_8b8 = lStack_2b8;
    lStack_8c0 = lStack_2c0;
    if (lStack_2b8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    lStack_8a8 = lStack_2a8;
    lStack_8b0 = lStack_2b0;
    if (lStack_2a8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    lStack_898 = lStack_298;
    lStack_8a0 = lStack_2a0;
    uStack_890 = uStack_290;
    plStack_888 = plVar9;
    plStack_880 = plVar8;
    FUN_10b121fd0(abStack_878,param_3);
    func_0x00010b13600c(auStack_800);
    uStack_7e0 = CONCAT11(bVar1 & bVar3,bVar1 & bVar2) & 0x101;
    FUN_10b124548(auStack_7d8,auStack_540);
    pcStack_288 = FUN_10b12f8cc;
    ppuStack_280 = &PTR_FUN_110cbd128;
    plVar9 = (long *)0x380;
    lStack_558 = param_1;
    __Znwm();
    plVar9[1] = lStack_8c8;
    *plVar9 = lStack_8d0;
    plVar9[3] = lStack_8b8;
    plVar9[2] = lStack_8c0;
    plVar9[5] = lStack_8a8;
    plVar9[4] = lStack_8b0;
    plVar9[7] = lStack_898;
    plVar9[6] = lStack_8a0;
    lStack_8d0 = 0;
    lStack_8c8 = 0;
    lStack_8c0 = 0;
    lStack_8b8 = 0;
    lStack_8b0 = 0;
    lStack_8a8 = 0;
    plVar9[9] = (long)plStack_888;
    plVar9[8] = CONCAT71(uStack_88f,uStack_890);
    plVar9[10] = (long)plStack_880;
    func_0x00010b135560(plVar9 + 0xb);
    func_0x00010b121ddc(plVar9 + 0x1a,auStack_800);
    *(ushort *)(plVar9 + 0x1e) = uStack_7e0;
    FUN_10b124548(plVar9 + 0x1f,auStack_7d8);
    plVar9[0x6f] = lStack_558;
    plStack_278 = plVar9;
    FUN_10b119e24(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),*(undefined4 *)(param_2 + 0x18),
                  &pcStack_288);
    func_0x00010b133f10(ppuStack_280);
    func_0x00010b11bfe4(&lStack_8d0);
    func_0x00010b12592c(&lStack_550);
    func_0x00010b135d14();
    in_stack_fffffffffffff708 = unaff_x19;
  }
  else {
    func_0x00010b1344c4(&lStack_8d0,*(undefined8 *)(param_1 + 0x28),param_2);
    lVar12 = *(long *)(param_1 + 0xc0);
    lStack_548 = *(long *)(param_1 + 200);
    lStack_550 = lVar12;
    if (lStack_548 != 0) {
      do {
        func_0x00010b133f58();
        lVar12 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    if (lVar12 != 0) {
      lVar12 = lVar12 + 0x30;
      FUN_10b1ae664(lVar12,&lStack_8d0);
      if ((int)lVar12 != 0) {
        func_0x00010b1344c4(&pcStack_288,*(undefined8 *)(param_1 + 0x28),param_2);
        FUN_10b1151e4(&lStack_8d0,&pcStack_288);
        func_0x00010b121af0(&pcStack_288);
      }
    }
    func_0x00010b125888(&lStack_550);
    plVar8 = &lStack_8d0;
    FUN_10b1c41c0();
    if ((plVar8 == (long *)0x0) || (lVar12 = plVar8[0x12], lVar12 < 1)) {
      bVar11 = false;
    }
    else {
      __ZNSt3__16chrono12system_clock3nowEv();
      bVar11 = lVar12 * 1000 < (long)plVar8;
    }
    uVar6 = cStack_848 == '\x01';
    if ((!(bool)uVar6) || (bVar11 || ((abStack_878[0] ^ 0xff) & 1) != 0)) {
LAB_10b11c1bc:
      bVar11 = false;
      bVar13 = true;
    }
    else {
      uVar6 = cStack_70e == '\x01';
      if ((bool)uVar6) {
        FUN_10b11bfb0(auStack_540,&lStack_8d0);
        goto LAB_10b11c1bc;
      }
      func_0x00010b135a20(&pcStack_288);
      FUN_10b11a420();
      uVar6 = pcStack_288 == (code *)0x0 || lStack_2b0 == 0;
      bVar13 = pcStack_288 != (code *)0x0;
      bVar5 = lStack_2b0 != 0;
      bVar11 = bVar13 && bVar5;
      bVar13 = !bVar13 || !bVar5;
      func_0x00010b0f7f30(&pcStack_288);
    }
    func_0x00010b135cf4();
    if (bVar13) goto LAB_10b11c1cc;
    func_0x00010b135d14();
    if (!bVar11) {
      func_0x00010539eeb0();
    }
  }
  plVar9 = &lStack_2c0;
LAB_10b11c35c:
  FUN_10b1237f0(plVar9);
  func_0x00010b133dfc(uStack_10);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b136290();
  func_0x00010b135cf4();
  func_0x00010b135d14();
  do {
    func_0x00010539eeb0(in_stack_fffffffffffff708);
    FUN_10b1237f0(&lStack_2c0);
    func_0x00010b1343d8();
    func_0x00010b136290();
  } while( true );
}



/* Entry: 10b11c4e8; end: 10b11c793;  */

void FUN_10b11c4e8(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_3f0 [32];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_388;
  undefined1 auStack_348 [24];
  undefined4 uStack_330;
  byte bStack_2f0;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  long lStack_10;
  
  func_0x00010b134cf8();
  puVar1 = auStack_3f0;
  func_0x00010b135394();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20);
  func_0x000107c278b8(auStack_348,&UNK_10f72f834);
  FUN_10b17aa30(&lStack_18,uVar3,param_2,auStack_348);
  func_0x00010b135550();
  lVar2 = lStack_18;
  if (lStack_18 == lStack_10) {
    func_0x00010b13552c();
    uStack_398 = uStack_28;
    uStack_3a0 = uStack_30;
    uStack_390 = uStack_20;
    func_0x00010b136434();
    uStack_388 = 5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b121ddc(auStack_60,&uStack_3a0);
    FUN_10b11c900(auStack_348);
    func_0x00010b135004(auStack_40);
    func_0x00010b135a2c();
    func_0x00010b135eec();
    func_0x00010b1356d0();
    func_0x00010b135558();
    puVar1 = auStack_60;
  }
  else {
    for (; lVar2 != lStack_10; lVar2 = lVar2 + 0x18) {
      lVar4 = unaff_x20[5];
      FUN_10b202630(&uStack_3a0,lVar2);
      FUN_10b1f69e0(auStack_348,lVar4,&uStack_3a0,1,0);
      func_0x00010b1354a4();
      if ((bStack_2f0 & 1) != 0) {
        func_0x00010b135fcc(auStack_348,&uStack_3b8);
        uStack_398 = uStack_3b0;
        uStack_3a0 = uStack_3b8;
        uStack_390 = uStack_3a8;
        uStack_3b8 = 0;
        uStack_3b0 = 0;
        uStack_3a8 = 0;
        uStack_388 = uStack_330;
        func_0x00010b13525c();
        (**(code **)(*unaff_x20 + 0x70))();
        func_0x00010b1354ac();
        func_0x00010b135ca4();
        goto LAB_10b11c6dc;
      }
      func_0x00010b135ca4();
    }
    func_0x00010b13557c();
    uStack_398 = uStack_3c8;
    uStack_3a0 = uStack_3d0;
    uStack_390 = uStack_3c0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d0 = 0;
    uStack_388 = 5;
    func_0x00010b134aac();
    func_0x00010b121ddc(auStack_3f0,&uStack_3a0);
    FUN_10b11c900(auStack_348);
    func_0x00010b135004(auStack_40);
    func_0x00010b135a2c();
    func_0x00010b135eec();
    func_0x00010b1356d0();
    func_0x00010b135558();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1);
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  func_0x00010b1354ac();
LAB_10b11c6dc:
  func_0x000107c278a8(&lStack_18);
  return;
}



/* Entry: 10b11c794; end: 10b11c8ff;  */

void FUN_10b11c794(undefined8 *param_1)

{
  long lVar1;
  long unaff_x22;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 uStack_7f0;
  undefined1 uStack_7b0;
  undefined1 uStack_7a8;
  undefined1 uStack_780;
  undefined1 uStack_778;
  undefined1 uStack_6d8;
  undefined1 uStack_6d0;
  undefined1 uStack_690;
  undefined1 uStack_688;
  undefined1 uStack_650;
  undefined2 uStack_648;
  undefined1 uStack_646;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [744];
  undefined1 auStack_298 [24];
  undefined1 uStack_280;
  undefined1 auStack_278 [632];
  
  func_0x00010b136578();
  func_0x00010b1354e8();
  uStack_7b0 = 0;
  uStack_7a8 = 0;
  uStack_780 = 0;
  uStack_778 = 0;
  uStack_6d8 = 0;
  uStack_6d0 = 0;
  uStack_690 = 0;
  uStack_688 = 0;
  uStack_650 = 0;
  uStack_648 = 0;
  uStack_646 = 0;
  uStack_800 = 0;
  uStack_7f8 = 0;
  uStack_808 = 0;
  uStack_7f0 = 0;
  func_0x00010b1342ec(&uStack_808);
  uStack_810 = 0;
  lVar1 = 0x750;
  __Znwm(0x750);
  func_0x00010b13640c();
  FUN_10b121c1c(auStack_278,&uStack_808);
  auStack_298[0] = 0;
  uStack_280 = 0;
  func_0x00010b135e00(auStack_580);
  FUN_10b1375cc(lVar1 + 0x18,unaff_x22 + 0x18,auStack_278);
  func_0x00010b0faf64(auStack_580);
  FUN_10b123d38(auStack_298);
  func_0x00010b121af0(auStack_278);
  FUN_10b12b884(&uStack_590,lVar1 + 0x18,lVar1);
  param_1[1] = uStack_588;
  *param_1 = uStack_590;
  uStack_588 = 0;
  uStack_590 = 0;
  func_0x00010b12b94c(&uStack_590);
  func_0x00010b12b970(&uStack_810);
  func_0x00010b134d88();
  return;
}



/* Entry: 10b11c900; end: 10b11c987;  */

void FUN_10b11c900(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [72];
  undefined1 auStack_68 [72];
  
  func_0x000107c278b8(auStack_c8,&UNK_10e55a8c8);
  func_0x00010564c150(auStack_e8,&UNK_10f72fed5);
  func_0x00010b134c04();
  if ((bool)in_ZR) {
    func_0x00010b13514c();
  }
  func_0x0001052b8c70(auStack_68,auStack_b0);
  FUN_10b1195f4(param_1,auStack_68);
  func_0x0001052a038c(auStack_68);
  func_0x00010b134ebc();
  func_0x00010b134e84();
  func_0x00010b134da0();
  return;
}



/* Entry: 10b11c988; end: 10b11cdb3;  */

void FUN_10b11c988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_7e0 [80];
  long lStack_790;
  undefined1 auStack_760 [32];
  long lStack_740;
  long lStack_738;
  undefined1 auStack_728 [136];
  byte bStack_6a0;
  byte bStack_566;
  undefined1 auStack_4b0 [24];
  undefined1 uStack_498;
  undefined1 auStack_490 [24];
  undefined1 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_450;
  undefined1 uStack_44c;
  undefined4 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined1 uStack_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined1 auStack_3c0 [32];
  long lStack_3a0;
  long lStack_398;
  undefined4 uStack_130;
  undefined1 auStack_128 [120];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [48];
  undefined8 uStack_8;
  
  func_0x00010b136578();
  func_0x00010b134568();
  func_0x00010b133e68();
  uStack_3d8 = 0;
  uStack_8 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_3c8 = 1;
  uVar1 = *(undefined4 *)(unaff_x21 + 0x18);
  uStack_3d0 = param_1;
  func_0x000107c2795c(&uStack_470,param_3);
  auStack_490[0] = 0;
  uStack_478 = 0;
  auStack_4b0[0] = 0;
  uStack_498 = 0;
  uStack_44c = 0;
  uStack_448 = 4;
  uStack_438 = 0;
  uStack_440 = 1000;
  uStack_428 = uStack_468;
  uStack_430 = uStack_470;
  uStack_420 = uStack_460;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_418 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3e0 = 0;
  uStack_450 = uVar1;
  func_0x000107c279a4(auStack_4b0);
  func_0x000107c279a4(auStack_490);
  func_0x000107c278a8(&uStack_470);
  func_0x00010b1344c4(auStack_728,*(undefined8 *)(unaff_x20 + 0x28));
  if (bStack_6a0 == 1) {
    if ((bStack_566 & 1) == 0) {
      lStack_740 = 0;
      lStack_738 = 0;
    }
    else {
      uVar7 = **(undefined8 **)(unaff_x20 + 0x18);
      func_0x00010b135a38();
      func_0x000107c278b8(&lStack_3a0);
      FUN_10b20bd54(uVar7,&lStack_3a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_3a0);
      puVar3 = auStack_728;
      FUN_10b1c41c0();
      if (puVar3 == (undefined1 *)0x0) {
        FUN_10b11c900(&lStack_3a0);
      }
      else {
        FUN_10b1c41c0(auStack_728);
        FUN_10b20752c(&lStack_3a0);
      }
      uStack_130 = 1;
      FUN_10b11f624(&lStack_b0,*(undefined8 *)(unaff_x20 + 0x28));
      func_0x0001056419c0(auStack_128,&lStack_b0);
      func_0x0001052a03ac(&lStack_b0);
      func_0x00010b1351d8(auStack_3c0);
      func_0x00010b135004(&lStack_740);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c0);
      func_0x00010b1355ac();
      if ((lStack_740 != 0) || ((bStack_6a0 & 1) == 0)) goto LAB_10b11cb68;
    }
    FUN_10b11a420(&lStack_b0);
    lVar9 = lStack_a8;
    lVar8 = lStack_b0;
    lStack_b0 = 0;
    lStack_a8 = 0;
    lStack_398 = lStack_738;
    lStack_3a0 = lStack_740;
    lStack_738 = lVar9;
    lStack_740 = lVar8;
    func_0x00010b0f7f30(&lStack_3a0);
    func_0x00010b0f7f30(&lStack_b0);
  }
  else {
    lStack_740 = 0;
    lStack_738 = 0;
  }
LAB_10b11cb68:
  func_0x00010b1346cc(&lStack_b0);
  FUN_10b12abac(lStack_a0,auStack_728);
  if ((lStack_a0 == 0) || (*(char *)(lStack_a0 + 0x328) != '\x01')) {
    FUN_10b11c900(&lStack_3a0);
  }
  else {
    FUN_10b123f60(&lStack_3a0,lStack_a0 + 0x40);
  }
  func_0x000107c2798c(&lStack_b0);
  uStack_130 = 1;
  uVar7 = **(undefined8 **)(unaff_x20 + 0x18);
  func_0x00010b1341a0();
  FUN_10b12983c(auStack_88,*(undefined4 *)(unaff_x21 + 0x18));
  func_0x00010b12aca4(auStack_60,0);
  func_0x00010b1349dc(auStack_38);
  func_0x00010b134cb0(auStack_3c0,&lStack_b0);
  func_0x00010b134528(uVar7,0x16,auStack_3c0);
  FUN_10b120998(auStack_3c0);
  lVar8 = 0x88;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&lStack_b0 + lVar8);
    lVar8 = lVar8 + -0x28;
    uVar2 = lVar8 == -0x18;
  } while (!(bool)uVar2);
  FUN_10b11b37c();
  if (lStack_740 == 0) {
    func_0x00010b1351d8(auStack_760);
    func_0x00010b134b9c();
    FUN_10b11c794();
    func_0x00010b13458c();
  }
  else {
    *unaff_x19 = lStack_740;
    unaff_x19[1] = lStack_738;
    unaff_x20 = -0x18;
    if (lStack_738 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
  }
  func_0x00010b1355ac();
  func_0x00010b135584();
  func_0x00010b1355fc();
  func_0x00010529fe04();
  func_0x00010b133dfc(uStack_8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3c0);
    func_0x00010b1355ac();
    func_0x00010b1355fc();
    plVar4 = (long *)&uStack_450;
    func_0x00010529fe04();
    func_0x00010b1343d0();
    lVar9 = *plVar4;
    lVar8 = *(long *)(*(long *)(lVar9 + 0x18) + 0x10);
    lStack_790 = unaff_x20;
    FUN_10b20ed78(lVar8,(int)plVar4[5]);
    uVar5 = (ulong)*(uint *)(plVar4 + 5);
    func_0x00010b20edbc();
    if ((0 < lVar8) && (0 < plVar4[10])) {
      uVar6 = uVar5;
      __ZNSt3__16chrono12system_clock3nowEv();
      lVar8 = uVar6 + lVar8 * 1000000;
      if ((long)(plVar4[10] + uVar5 * 1000000) < lVar8) {
        uVar7 = *(undefined8 *)(lVar9 + 0x28);
        func_0x00010b1360a0();
        FUN_10b1f701c(uVar7,auStack_7e0,(int)plVar4[5],plVar4 + 6,lVar8);
        func_0x00010b134cc8();
      }
    }
    if (*(char *)((long)plVar4 + 0x27) < '\0') {
      if (plVar4[3] == 0) {
        return;
      }
    }
    else if (*(char *)((long)plVar4 + 0x27) == '\0') {
      return;
    }
    func_0x00010b1360a0();
    FUN_10b1c4a58();
    func_0x00010b13534c();
    FUN_10b1f6940();
    func_0x00010b134cc8();
    return;
  }
  return;
}



/* Entry: 10b11cdb4; end: 10b11cebb;  */

void FUN_10b11cdb4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_80 [80];
  
  lVar5 = *param_1;
  lVar1 = *(long *)(*(long *)(lVar5 + 0x18) + 0x10);
  FUN_10b20ed78(lVar1,(int)param_1[5]);
  uVar2 = (ulong)*(uint *)(param_1 + 5);
  func_0x00010b20edbc();
  if ((0 < lVar1) && (0 < param_1[10])) {
    uVar3 = uVar2;
    __ZNSt3__16chrono12system_clock3nowEv();
    lVar1 = uVar3 + lVar1 * 1000000;
    if ((long)(param_1[10] + uVar2 * 1000000) < lVar1) {
      uVar4 = *(undefined8 *)(lVar5 + 0x28);
      func_0x00010b1360a0();
      FUN_10b1f701c(uVar4,auStack_80,(int)param_1[5],param_1 + 6,lVar1);
      func_0x00010b134cc8();
    }
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    if (param_1[3] == 0) {
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x27) == '\0') {
    return;
  }
  func_0x00010b1360a0();
  FUN_10b1c4a58();
  func_0x00010b13534c();
  FUN_10b1f6940();
  func_0x00010b134cc8();
  return;
}



/* Entry: 10b11cebc; end: 10b11cfdb;  */

long * FUN_10b11cebc(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long lVar3;
  long lVar4;
  long alStack_d8 [6];
  long lStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  undefined8 uStack_48;
  
  func_0x00010b13421c();
  func_0x00010b133e38();
  func_0x00010b135788();
  func_0x00010b1ff218(&lStack_a8);
  lVar3 = *(long *)(lStack_a8 + 0x10);
  func_0x00010b1347b0();
  lVar4 = *param_1;
  func_0x00010b135eb0();
  uVar1 = lVar3 == lVar4;
  if ((bool)uVar1) {
    func_0x00010b1359e0();
    func_0x00010b135d38();
    plVar2 = alStack_d8;
    func_0x0001080dea64();
    lStack_a8 = 0x10b132ea4;
    ppuStack_a0 = &PTR_FUN_110cbd550;
    func_0x00010b134ad0();
    param_1 = plVar2;
    func_0x0001080dea64();
    plStack_98 = plVar2;
    func_0x00010b1353c0();
    func_0x00010b1355d4();
    func_0x00010b13485c(ppuStack_a0);
    func_0x00010b134840(alStack_d8);
    func_0x00010b1355c4();
  }
  else {
    func_0x00010b134574(*unaff_x19);
  }
  func_0x00010b133dfc(uStack_48);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b134840(&lStack_a8);
  func_0x00010b134840(alStack_d8);
  func_0x00010b1355c4();
  func_0x00010b1343d0();
  func_0x00010b135038();
  func_0x00010b12b94c();
  func_0x00010b1357bc();
  plVar2 = param_1;
  func_0x000107c350ac();
  if (plVar2 != (long *)0x0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b11cfdc; end: 10b11d01f;  */

long FUN_10b11cfdc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135038();
  func_0x00010b12b94c();
  func_0x00010b1357bc();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b11d020; end: 10b11d087;  */

void FUN_10b11d020(long *param_1)

{
  long lVar1;
  long *extraout_x8;
  code *extraout_x8_00;
  int extraout_w11;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *param_1;
  lStack_28 = param_1[1];
  lStack_30 = lVar1;
  if (lStack_28 != 0) {
    do {
      func_0x00010b133f58();
      param_1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  if ((lVar1 != 0) && ((param_1[2] == 0 || ((*(byte *)(param_1[2] + 0x30) & 1) == 0)))) {
    func_0x00010b1346b0();
    (*extraout_x8_00)();
  }
  func_0x00010b0f7f0c(&lStack_30);
  return;
}



/* Entry: 10b11d088; end: 10b11d2b3;  */

/* WARNING: Possible PIC construction at 0x00010b11d1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b11d210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b11d2ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b11d214) */
/* WARNING: Removing unreachable block (ram,0x00010b11d23c) */
/* WARNING: Removing unreachable block (ram,0x00010b11d2ac) */
/* WARNING: Removing unreachable block (ram,0x00010b11d220) */
/* WARNING: Removing unreachable block (ram,0x00010b135b94) */
/* WARNING: Removing unreachable block (ram,0x00010b11d200) */
/* WARNING: Removing unreachable block (ram,0x00010b11d2b0) */

void FUN_10b11d088(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x20;
  undefined8 uStack_130;
  long lStack_128;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  func_0x00010b13448c();
  func_0x00010b133e8c();
  uStack_130 = *param_3;
  lStack_e8 = param_3[1];
  uStack_f0 = uStack_130;
  if (lStack_e8 == 0) {
    lStack_128 = 0;
  }
  else {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    lStack_128 = param_3[1];
    uStack_130 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x00010b121ddc(auStack_120);
  FUN_10b127af8(&uStack_100,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)0x80;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbd188;
  uStack_98 = 0x10b130b74;
  ppuStack_90 = &PTR_DAT_110cbd1c8;
  lStack_80 = lStack_e8;
  uStack_88 = uStack_f0;
  puVar2 = puVar1;
  if (lStack_e8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  uStack_c8 = 0x10b130bec;
  ppuStack_c0 = &PTR_FUN_110cbd1e8;
  func_0x00010b134ae0();
  *puVar2 = uStack_130;
  puVar2[1] = lStack_128;
  if (lStack_128 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_02 != 0);
  }
  func_0x00010b135f8c(puVar2 + 2);
  puVar2[7] = uStack_f8;
  puVar2[6] = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  puVar1[3] = &PTR_FUN_110cbd218;
  puVar1[4] = uStack_98;
  (*(code *)ppuStack_90[2])(puVar1 + 5,&ppuStack_90);
  puVar1[10] = 0x10b130bec;
  puVar1[0xb] = &PTR_FUN_110cbd1e8;
  puVar1[0xc] = puVar2;
  uStack_b8 = 0;
  FUN_10b130c1c(&ppuStack_c0);
  func_0x00010b1341cc(ppuStack_90);
  puStack_d8 = puVar1 + 3;
  puStack_d0 = puVar1;
  FUN_10b11d2b4(&uStack_130);
  puVar2 = &uStack_f0;
  func_0x0001052b8500();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b11d2b4; end: 10b11d2db;  */

long FUN_10b11d2b4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135038();
  func_0x00010b12592c();
  func_0x00010b134b74();
  lVar1 = unaff_x19;
  func_0x0001052b8500();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b11d2dc; end: 10b11d407;  */

void FUN_10b11d2dc(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long in_register_00005008;
  undefined1 auStack_d0 [48];
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [16];
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  func_0x00010b1354e8();
  func_0x00010b133e38();
  func_0x00010b135788();
  func_0x00010b1ff218(auStack_88);
  func_0x00010b13587c();
  func_0x00010b135fa8();
  func_0x00010b13537c();
  uStack_a0 = param_1;
  lStack_98 = in_register_00005008;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  pcStack_78 = FUN_10b130d38;
  ppuStack_70 = &PTR_FUN_110cbd298;
  lStack_90 = param_2;
  func_0x00010b135780();
  func_0x00010b134634();
  func_0x00010b135f8c();
  *(long *)(param_2 + 0x38) = lStack_98;
  *(undefined8 *)(param_2 + 0x30) = uStack_a0;
  if (lStack_98 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  *(long *)(param_2 + 0x40) = lStack_90;
  lStack_68 = param_2;
  func_0x00010b135828();
  func_0x00010b133eb4(ppuStack_70);
  FUN_10b11d408(auStack_d0);
  func_0x00010b135eb0();
  func_0x00010b133dfc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133eb4(ppuStack_70);
    FUN_10b11d408(auStack_d0);
    func_0x00010b135eb0();
    do {
      func_0x00010b1343d0();
    } while( true );
  }
  return;
}



/* Entry: 10b11d408; end: 10b11d42b;  */

long FUN_10b11d408(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135038();
  func_0x0001052b81f4();
  func_0x00010b134b74();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b11d42c; end: 10b11d753;  */

ulong FUN_10b11d42c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  ulong unaff_x19;
  uint uVar8;
  undefined8 uVar9;
  ulong uStack_5e0;
  undefined1 auStack_598 [16];
  long lStack_588;
  byte bStack_3d6;
  undefined1 auStack_300 [31];
  byte bStack_2e1;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 uStack_2d0;
  undefined1 auStack_2c8 [40];
  undefined1 auStack_2a0 [592];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010b133e10();
  uStack_2e0 = 0;
  uStack_48 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_2d0 = 1;
  bStack_2e1 = *(byte *)(unaff_x19 + 0xe0);
  uStack_2d8 = param_1;
  if ((bStack_2e1 & 1) == 0) {
    uVar9 = **(undefined8 **)(unaff_x19 + 0x18);
    func_0x00010b1341a0(auStack_2c8);
    func_0x00010b126fec(auStack_2a0,1);
    func_0x00010b1346c4(auStack_598,auStack_2c8);
    func_0x00010b134528(uVar9,8,auStack_598);
    func_0x00010b134a8c();
    do {
      func_0x00010b134ec4();
      func_0x00010b13517c();
    } while (!(bool)in_ZR);
  }
  func_0x00010b206f0c(auStack_300,param_2);
  uVar7 = *(ulong *)(unaff_x19 + 0x28);
  FUN_10b11d754();
  if ((uVar7 & 1) == 0) {
    uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x10);
    FUN_10b11d784(uVar9);
  }
  else {
    uVar9 = 1;
  }
  if ((bRam00000001137f4050 & 1) == 0) {
    iVar6 = 0x137f4050;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107c2be18(&PTR_DAT_110cbc850);
      func_0x00010b136064(0x1137f4048);
    }
  }
  uVar4 = uRam00000001137f4048;
  if (uRam00000001137f4048 == 0) {
    iStack_50 = 0;
  }
  else {
    FUN_10b1f69ac(auStack_2c8,*(undefined8 *)(unaff_x19 + 0x28),param_2,uVar9);
  }
  iVar6 = iStack_50;
  if ((uVar4 & 0xfffffffe) == 2 && iStack_50 == 1) {
    func_0x00010b134c50(auStack_598);
    FUN_10b12abac(lStack_588,auStack_2c8);
    if (lStack_588 == 0) {
      uVar8 = 2;
    }
    else {
      uVar8 = *(uint *)(lStack_588 + 0x330);
    }
    func_0x000107c2798c(auStack_598);
    bVar2 = uVar4 != 3;
    bVar3 = uVar8 != 0;
    uVar5 = bVar2 || bVar3;
    uVar1 = 2;
    if (bVar2 || bVar3) {
      uVar1 = uVar8;
    }
    unaff_x19 = (ulong)uVar1;
    FUN_10b11d790(&stack0xfffffffffffffce0,unaff_x19,1,uVar4 == 3 && uVar8 == 0);
  }
  else {
    if (iStack_50 == 2) {
      FUN_10b121c1c(auStack_598,auStack_2c8);
    }
    else {
      FUN_10b1f697c(auStack_598,*(undefined8 *)(unaff_x19 + 0x28),param_2,0,uVar9);
    }
    FUN_10b1f72cc(*(undefined8 *)(unaff_x19 + 0x28),auStack_598);
    if ((bStack_3d6 & 1) == 0) {
      func_0x00010b136310();
      func_0x00010b135630();
    }
    else {
      func_0x00010b135a38();
      func_0x00010b136090();
      func_0x00010b134cc0();
      func_0x00010b13458c();
      unaff_x19 = 3;
    }
    uVar5 = iVar6 == 1;
    FUN_10b11d790(&stack0xfffffffffffffce0,unaff_x19,uVar5,0);
    func_0x00010b134d88();
  }
  FUN_10b124648(auStack_2c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b133dfc(uStack_48);
  if ((bool)uVar5) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  ___cxa_guard_abort(0x1137f4050);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
  func_0x00010b1343d0();
  func_0x00010b1360b4();
  FUN_10b1c5424(uStack_5e0);
  func_0x00010b13588c();
  return uStack_5e0;
}



/* Entry: 10b11d754; end: 10b11d783;  */

undefined8 FUN_10b11d754(void)

{
  undefined8 uStack_30;
  
  func_0x00010b1360b4();
  FUN_10b1c5424(uStack_30);
  func_0x00010b13588c();
  return uStack_30;
}



/* Entry: 10b11d784; end: 10b11d78f;  */

uint FUN_10b11d784(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  param_1 = param_1 + 0x38;
  ppuStack_28 = &PTR_DAT_110cbd600;
  FUN_10b201f80(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(&PTR_DAT_110cbd600);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b11d790; end: 10b11da4f;  */

ulong FUN_10b11d790(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 extraout_x8;
  ulong unaff_x19;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x21;
  undefined8 in_stack_000000e8;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [56];
  char cStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  undefined8 uStack_20;
  
  func_0x00010b136510();
  func_0x00010b136470();
  func_0x00010b133e8c();
  in_stack_000000e8 = extraout_x8;
  func_0x00010b135ce4();
  func_0x00010b12aca4(&stack0x00000048,0);
  func_0x00010b1349dc(&stack0x00000070);
  func_0x00010b123d80(&stack0x00000098,&UNK_10f72ff10,8,**(undefined1 **)(unaff_x21 + 0x10));
  uVar1 = (int)unaff_x19 == 0;
  func_0x00010b135dc0(&stack0x000000c0,&UNK_10f72ff19);
  uVar4 = 5;
  func_0x00010b120648(&stack0x00000008,&stack0x00000020,5);
  func_0x000107c28148(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x00010b1363cc();
  FUN_10b1135dc();
  func_0x00010b134754();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x000000d0);
    func_0x00010b136440();
  } while (!(bool)uVar1);
  if ((int)param_3 == 0) {
    func_0x00010b135ce4();
    func_0x00010b1360ac(&stack0x00000048);
    puVar2 = &stack0x00000008;
    func_0x00010b1346c4(puVar2,&stack0x00000020);
    func_0x00010b1363cc();
    uVar3 = 0x48;
    func_0x00010b134528();
    func_0x00010b134754();
    uVar7 = 0x38;
    do {
      func_0x00010b13501c();
      func_0x00010b135388();
    } while (!(bool)uVar1);
  }
  else {
    func_0x00010b135ce4();
    func_0x00010b1360ac(&stack0x00000048);
    param_3 = &stack0x00000020;
    func_0x00010b123d80(&stack0x00000070,&UNK_10f72ff28,9,1);
    uVar4 = 0x12;
    func_0x00010b123d80(&stack0x00000098,&UNK_10f72ff32,0x12,param_4);
    puVar2 = &stack0x00000008;
    func_0x00010b134cb0(puVar2,&stack0x00000020);
    func_0x00010b1363cc();
    uVar3 = 0x48;
    func_0x00010b134528();
    func_0x00010b134754();
    uVar7 = 0x88;
    do {
      func_0x00010b13501c();
      func_0x00010b135388();
    } while (!(bool)uVar1);
  }
  func_0x00010b133dfc(in_stack_000000e8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b1343ac();
    func_0x00010b135370(&stack0x00000020);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      func_0x00010b134594();
    } while (!(bool)uVar1);
    func_0x00010b1343d0();
    puStack_30 = param_3;
    puStack_28 = &stack0x00000020;
    uStack_20 = uVar7;
    FUN_10b11dadc(auStack_88,*(undefined8 *)(puVar2 + 0x28),uVar3);
    if (cStack_38 == '\x01') {
      uVar3 = *(undefined8 *)(puVar2 + 0x28);
      FUN_10b11dbf0(uVar3,uVar4,auStack_88,auStack_70);
      uVar5 = 0;
      if ((int)uVar3 == 0) {
        uVar5 = 3;
      }
      uVar6 = (ulong)uVar5;
    }
    else {
      uVar6 = 3;
    }
    func_0x00010b1355bc();
    return uVar6;
  }
  return unaff_x19;
}



/* Entry: 10b11da50; end: 10b11dadb;  */

undefined4 FUN_10b11da50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [56];
  char cStack_38;
  
  FUN_10b11dadc(auStack_88,*(undefined8 *)(param_1 + 0x28),param_2);
  if (cStack_38 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_10b11dbf0(uVar1,param_3,auStack_88,auStack_70);
    uVar2 = 0;
    if ((int)uVar1 == 0) {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 3;
  }
  func_0x00010b1355bc();
  return uVar2;
}



/* Entry: 10b11dadc; end: 10b11dbef;  */

void FUN_10b11dadc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_338 [56];
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [64];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  int iStack_244;
  long lStack_228;
  char cStack_220;
  
  func_0x00010b135e8c(&uStack_2a8,param_2,param_3);
  if ((cStack_220 == '\x01' && iStack_244 == 3) && lStack_228 < 1) {
    puVar1 = &uStack_2a8;
    FUN_10b1c4c88();
    if (puVar1 == (undefined8 *)0x0) {
      func_0x00010b1246a0(auStack_338);
    }
    else {
      FUN_10b123ab4(auStack_338);
    }
    uStack_2f8 = uStack_2a0;
    uStack_300 = uStack_2a8;
    uStack_2f0 = uStack_298;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2a8 = 0;
    FUN_10b123ab4(auStack_2e8,auStack_338);
    param_1[1] = uStack_2f8;
    *param_1 = uStack_300;
    param_1[2] = uStack_2f0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_300 = 0;
    FUN_10b121838(param_1 + 3,auStack_2e8);
    *(undefined1 *)(param_1 + 10) = 1;
    FUN_10b1246a8(&uStack_300);
    FUN_10b24d634(auStack_338);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  func_0x00010b121af0(&uStack_2a8);
  return;
}



/* Entry: 10b11dbf0; end: 10b11de57;  */

bool FUN_10b11dbf0(void)

{
  bool bVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined8 uVar6;
  long in_x3;
  int *piVar7;
  undefined **extraout_x8;
  code *extraout_x8_00;
  undefined *puVar8;
  int extraout_w11;
  undefined8 *unaff_x19;
  ulong *puVar9;
  long lVar10;
  undefined **ppuStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long *aplStack_60 [2];
  undefined **ppuStack_50;
  long lStack_48;
  
  piVar7 = (int *)(in_x3 + 0x10);
  if (*piVar7 != 0) {
    func_0x00010b13448c();
    func_0x00010564c19c(&ppuStack_b0,piVar7);
    bVar2 = false;
    while (ppuStack_b0 != (undefined **)0x0) {
      puVar8 = &DAT_11383d918;
      if (*(int *)((long)ppuStack_b0 + 0x44) == 3) {
        puVar8 = (undefined *)((ulong)ppuStack_b0[7] & 0xfffffffffffffffc);
      }
      if ((char)puVar8[0x17] < '\0') {
        if (*(long *)(puVar8 + 8) != 0) goto LAB_10b11dc68;
      }
      else if (puVar8[0x17] != '\0') {
LAB_10b11dc68:
        puVar8 = &DAT_11383d918;
        if (*(int *)((long)ppuStack_b0 + 0x44) == 3) {
          puVar8 = (undefined *)((ulong)ppuStack_b0[7] & 0xfffffffffffffffc);
        }
        uVar6 = *unaff_x19;
        FUN_10b1246c8(uVar6,unaff_x19[1],puVar8);
        if ((int)uVar6 != 0) {
          return true;
        }
        bVar2 = true;
      }
      func_0x000107c27d54(&ppuStack_b0);
    }
    if (!bVar2) {
      func_0x00010b135c10(&ppuStack_b0);
      func_0x00010b1f70f0(aplStack_60);
      func_0x00010b121e00(&ppuStack_b0);
      if (aplStack_60[0] == (long *)0x0) {
        bVar2 = false;
        func_0x00010b1362ec();
      }
      else {
        (**(code **)(*aplStack_60[0] + 0x20))(&ppuStack_b0);
        ppuStack_50 = ppuStack_b0;
        lStack_48 = lStack_a8;
        ppuVar3 = ppuStack_b0;
        if (lStack_a8 != 0) {
          do {
            func_0x00010b133f58();
            ppuVar3 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        if (ppuVar3 == (undefined **)0x0) {
          ppuStack_c8 = (undefined **)((ulong)ppuStack_c8 & 0xffffffffffffff00);
        }
        else {
          lStack_c0 = lStack_a8;
          ppuStack_b0 = (undefined **)0x0;
          lStack_a8 = 0;
          ppuStack_c8 = ppuVar3;
        }
        bVar1 = ppuVar3 != (undefined **)0x0;
        uStack_b8 = bVar1;
        func_0x000107c27d78(&ppuStack_50);
        func_0x000107c27d78(&ppuStack_b0);
        bVar2 = false;
        if (bVar1) {
          if (ppuStack_c8 != (undefined **)0x0) {
            ppuVar3 = ppuStack_c8;
            func_0x00010b1346b0();
            (*extraout_x8_00)();
            if ((ppuStack_c8 != (undefined **)0x0) &&
               (ppuVar4 = ppuStack_c8, (**(code **)(*ppuStack_c8 + 0x18))(),
               ppuVar4 != (undefined **)0x0)) {
              ppuStack_b0 = &PTR_FUN_110cfd9c8;
              lStack_a8 = 0;
              uStack_98 = 0;
              uStack_90 = 0;
              uStack_a0 = 0;
              uStack_88 = 0;
              pppuVar5 = &ppuStack_b0;
              func_0x000107c3034c(pppuVar5,ppuVar3,ppuVar4);
              if (((ulong)pppuVar5 & 1) == 0) {
                bVar2 = false;
              }
              else {
                puVar9 = &uStack_a0;
                if ((uStack_a0 & 1) != 0) {
                  puVar9 = (ulong *)(uStack_a0 + 7);
                }
                lVar10 = (long)(int)uStack_98 << 3;
                do {
                  bVar2 = lVar10 != 0;
                  if (lVar10 == 0) break;
                  uVar6 = *unaff_x19;
                  FUN_10b1246c8(uVar6,unaff_x19[1],*puVar9);
                  lVar10 = lVar10 + -8;
                  puVar9 = puVar9 + 1;
                } while ((int)uVar6 == 0);
              }
              FUN_10b5259a4(&ppuStack_b0);
              goto LAB_10b11ddf4;
            }
          }
          bVar2 = false;
        }
      }
LAB_10b11ddf4:
      func_0x000107c27f18(&ppuStack_c8);
      func_0x00010b10c000(aplStack_60);
      return bVar2;
    }
  }
  return false;
}



/* Entry: 10b11de58; end: 10b11dfcf;  */

undefined1 * FUN_10b11de58(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_d0 [24];
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_58;
  
  puVar1 = auStack_110;
  func_0x00010b13448c();
  func_0x00010b133e8c();
  uStack_58 = extraout_x8;
  func_0x00010b13587c();
  uStack_f8 = param_4[1];
  uStack_100 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b134fa8();
  func_0x000107c2795c(auStack_d0,param_3);
  pcStack_88 = FUN_10b131254;
  ppuStack_80 = &PTR_FUN_110cbd2d0;
  func_0x00010b135f04();
  func_0x00010b134464();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b134f9c();
  func_0x000107c2795c(param_3 + 0x40,auStack_d0);
  FUN_10b11dfd0();
  pcStack_b8 = FUN_10b131254;
  ppuStack_b0 = &PTR_FUN_110cbd2d0;
  uStack_78 = 0;
  lStack_a8 = param_3;
  func_0x00010b13475c();
  func_0x00010b133f10(ppuStack_b0);
  func_0x00010b133e7c();
  func_0x00010b133dfc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010b133f10(ppuStack_b0);
    func_0x00010b133e7c();
    func_0x00010b1343d0();
    func_0x000107c278a8(puVar2 + 0x40);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2 + 0x20);
    func_0x00010b0f7f54(puVar2 + 0x10);
    func_0x000107c350ac();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10b11dfd0; end: 10b11e003;  */

undefined8 FUN_10b11dfd0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c278a8(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x00010b0f7f54(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b11e004; end: 10b11e17b;  */

undefined1 * FUN_10b11e004(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 unaff_x20;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_c8;
  
  puVar1 = auStack_130;
  func_0x00010b13448c();
  func_0x00010b133e8c();
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b135e60();
  func_0x00010b13644c(uStack_c8);
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uStack_118 = param_3[1];
  uStack_120 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b134fa8();
  uStack_f0 = 0;
  uStack_e0 = 1;
  lStack_e8 = param_1;
  func_0x00010b135704();
  func_0x00010b134464();
  if (extraout_x8_01 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b134f9c();
  *(long *)(param_1 + 0x48) = lStack_e8;
  *(undefined8 *)(param_1 + 0x40) = uStack_f0;
  *(undefined8 *)(param_1 + 0x58) = unaff_x20;
  *(ulong *)(param_1 + 0x50) = CONCAT71(uStack_df,uStack_e0);
  FUN_10b11e17c();
  func_0x00010b13475c();
  func_0x00010b133f10(&PTR_FUN_110cbd308);
  func_0x00010b133e7c();
  func_0x00010b134f38();
  func_0x00010b133dfc(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133f10(&PTR_FUN_110cbd308);
    func_0x00010b133e7c();
    func_0x00010b134f38();
    func_0x00010b1343d0();
    func_0x00010b136040();
    func_0x00010b0f7f54(puVar1 + 0x10);
    puVar2 = puVar1;
    func_0x000107c350ac();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10b11e17c; end: 10b11e19f;  */

long FUN_10b11e17c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b136040();
  func_0x00010b0f7f54(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b11e1a0; end: 10b11e307;  */

undefined8 * FUN_10b11e1a0(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 unaff_x20;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_d0;
  long lStack_c8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_58;
  
  puVar1 = &uStack_120;
  func_0x00010b13448c();
  func_0x00010b133e8c();
  uStack_58 = extraout_x8;
  FUN_10b127af8(&uStack_d0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  lStack_118 = lStack_c8;
  uStack_120 = uStack_d0;
  if (lStack_c8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b13537c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b134fa8();
  pcStack_88 = FUN_10b1318c8;
  ppuStack_80 = &PTR_FUN_110cbd340;
  func_0x00010b135780();
  func_0x00010b134464();
  if (extraout_x8_01 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b134f9c();
  *(undefined8 *)(param_3 + 0x40) = unaff_x20;
  FUN_10b11e308();
  pcStack_b8 = FUN_10b1318c8;
  ppuStack_b0 = &PTR_FUN_110cbd340;
  uStack_78 = 0;
  lStack_a8 = param_3;
  func_0x00010b13475c();
  func_0x00010b133f10(ppuStack_b0);
  func_0x00010b133e7c();
  func_0x00010b135494();
  func_0x00010b133dfc(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133f10(ppuStack_b0);
    func_0x00010b133e7c();
    func_0x00010b135494();
    func_0x00010b1343d0();
    func_0x00010b136040();
    func_0x00010b0f7f78((undefined1 *)((long)puVar1 + 0x10));
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c350ac();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return (undefined8 *)(undefined1 *)puVar1;
  }
  return puVar1;
}



/* Entry: 10b11e308; end: 10b11e32b;  */

long FUN_10b11e308(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b136040();
  func_0x00010b0f7f78(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b11e32c; end: 10b11e45b;  */

undefined8 * FUN_10b11e32c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w12;
  long unaff_x21;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_38;
  
  func_0x00010b136470();
  func_0x00010b133e24();
  FUN_10b127af8(auStack_b0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  lVar3 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x30);
  uStack_c0 = *(undefined8 *)(lVar3 + 0x40);
  lStack_b8 = *(long *)(lVar3 + 0x48);
  if (lStack_b8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  if (lStack_a8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  uStack_78 = *param_3;
  lStack_d0 = param_3[1];
  lStack_70 = 0;
  uStack_d8 = uStack_78;
  if (lStack_d0 != 0) {
    do {
      func_0x00010b133f68();
      lStack_70 = extraout_x8;
      uStack_78 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  pcStack_98 = FUN_10b131b28;
  ppuStack_90 = &PTR_DAT_110cbd370;
  uStack_e8 = 0;
  uStack_e0 = 0;
  if (lStack_70 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b1346b0();
  (*extraout_x8_00)();
  func_0x00010b133ea8(ppuStack_90);
  FUN_10b11e45c(&uStack_e8);
  puVar1 = &uStack_c0;
  FUN_10b127ebc();
  func_0x00010b1355ec();
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133ea8(ppuStack_90);
    FUN_10b11e45c(&uStack_e8);
    FUN_10b127ebc(&uStack_c0);
    func_0x00010b1355ec();
    func_0x00010b1343d0();
    func_0x00010b134958();
    func_0x0001052a6df8();
    puVar2 = puVar1;
    func_0x000107c350ac();
    if (puVar2 != (undefined8 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10b11e45c; end: 10b11e47b;  */

long FUN_10b11e45c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958();
  func_0x0001052a6df8();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b11e47c; end: 10b11e977;  */

void FUN_10b11e47c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long **pplVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  long *plStack_160;
  long *plStack_150;
  long lStack_148;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  char cStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 ***pppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  byte bStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char cStack_60;
  undefined8 uStack_58;
  
  lVar8 = param_4;
  func_0x00010b133e8c();
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar5 = *(char *)(lVar8 + 0x20) == '\x01';
  uStack_58 = extraout_x8;
  if ((bool)uVar5) {
    func_0x00010b206f0c(&pppuStack_d0,param_4);
    uVar5 = bStack_b9 == 0;
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
      pppuStack_d0 = &pppuStack_d0;
    }
    FUN_10b205f70(&plStack_150,pppuStack_d0,uStack_c8);
    func_0x00010b135d88();
    func_0x00010b134678();
    func_0x00010b13573c();
  }
  else {
    plVar7 = (long *)(param_2 + 0x1b8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    __ZNSt3__19to_stringEx(&plStack_150);
    func_0x00010b135d88();
    func_0x00010b134678();
    plVar7 = *(long **)(param_2 + 0x48);
    (**(code **)(*plVar7 + 0x70))(plVar7,&uStack_a8);
    if ((int)plVar7 != 0) {
      plVar7 = *(long **)(param_2 + 0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_78,&uStack_a8);
      func_0x0001074e1df0(&plStack_150,&uStack_78,1);
      (**(code **)(*plVar7 + 0x60))(&pppuStack_d0,plVar7,&plStack_150);
      func_0x000107c2826c(&plStack_150);
      func_0x00010b135744();
      ppppuVar6 = &pppuStack_d0;
      FUN_10b11e978(ppppuVar6,&uStack_a8);
      if (*(int *)ppppuVar6 != 0) {
        func_0x00010b13552c();
        func_0x000107273db0(&uStack_78,&UNK_10f72f8b0);
        lStack_148 = lStack_88;
        plStack_150 = plStack_90;
        func_0x00010b136434(lStack_80);
        func_0x00010b135abc();
        if ((bool)uVar5) {
          func_0x00010b1350e0();
        }
        func_0x000107c279a4();
        func_0x00010b134c48();
        func_0x00010b134e14(&plStack_f0);
        plStack_160 = plStack_f0;
        param_1[1] = lStack_e8;
        *param_1 = (long)plStack_f0;
        func_0x00010b134ef0();
        func_0x00010b1350b4();
        func_0x00010b135f2c();
        goto LAB_10b11e7e0;
      }
      func_0x00010b135f2c();
    }
  }
  plVar7 = *(long **)(param_2 + 0x48);
  (**(code **)(*plVar7 + 0x58))(&pppuStack_d0,plVar7,&uStack_a8);
  if ((bStack_b8 & 1) == 0) {
    func_0x00010b13552c();
    func_0x000105641abc(&uStack_78,&UNK_10f72f8d0);
    lStack_148 = lStack_88;
    plStack_150 = plStack_90;
    func_0x00010b136434();
    uStack_138 = 1;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    uStack_118 = cStack_60 == '\x01';
    if ((bool)uStack_118) {
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      uStack_120 = uStack_68;
      uStack_70 = 0;
      uStack_68 = 0;
      uStack_78 = 0;
    }
    func_0x000107c279a4();
    func_0x00010b134c48();
    func_0x00010b134e14(&plStack_f0);
    plStack_160 = plStack_f0;
    param_1[1] = lStack_e8;
    *param_1 = (long)plStack_f0;
    func_0x00010b134ef0();
    func_0x00010b1350b4();
  }
  else {
    FUN_10b11ea78(&plStack_90,param_2 + 0x150);
    uVar9 = 0;
    func_0x000107c28274();
    if ((uVar9 & 1) == 0) {
      func_0x000107c278b8(&plStack_f0,&UNK_10e5591c2);
      func_0x00010b124770(&uStack_78,&UNK_10f72f8e9);
      uVar4 = uStack_e0;
      lVar8 = lStack_e8;
      plVar7 = plStack_f0;
      lStack_148 = lStack_e8;
      plStack_150 = plStack_f0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      plStack_f0 = (long *)0x0;
      func_0x00010b135abc(uVar4);
      if ((bool)uVar5) {
        func_0x00010b1350e0();
      }
      func_0x000107c279a4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_f0);
      func_0x00010b134e14(&uStack_100);
      func_0x00010b13644c();
      param_1[1] = lVar8;
      *param_1 = (long)plVar7;
      uStack_100 = 0;
      uStack_f8 = 0;
      FUN_10b13226c(&uStack_100);
      func_0x00010b1350b4();
      func_0x00010b1351f8();
    }
    else {
      func_0x00010b1351f8();
      func_0x00010b135e60();
      lVar8 = lStack_80;
      func_0x00010b135818();
      func_0x00010b1363f8();
      FUN_10b132200(&plStack_150,param_4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_78,&pppuStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&plStack_90,&uStack_a8);
      plStack_160 = (long *)(lVar8 + 0x18);
      FUN_10b13658c(plStack_160,&plStack_150,&uStack_78,&plStack_90,(undefined8 *)(param_2 + 0x48),
                    &uStack_100);
      func_0x00010b134c48();
      func_0x00010b135744();
      FUN_10b0f7ab4(&plStack_150);
      *param_1 = (long)plStack_160;
      param_1[1] = lVar8;
      func_0x00010b134ef0();
      func_0x00010b134f38();
    }
  }
  func_0x000107c279a4(&pppuStack_d0);
LAB_10b11e7e0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
  pplVar1 = &plStack_150;
  (**(code **)(*plStack_160 + 0x40))(&plStack_150,plStack_160);
  uVar5 = cStack_110 == '\0';
  if ((bool)uVar5) {
    pplVar1 = (long **)0x0;
  }
  FUN_10b205d78(0xe,**(undefined8 **)(param_2 + 0x18),pplVar1,param_3);
  func_0x0001052a038c(&plStack_150);
  func_0x00010b133dfc(uStack_58);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134a40();
  func_0x0001052a03ac();
  func_0x00010b135f2c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a8);
  do {
    func_0x00010b1343d8();
    func_0x00010b134a40();
    func_0x0001052a038c();
    func_0x00010b0f7f9c(param_1);
  } while( true );
}



/* Entry: 10b11e978; end: 10b11e9ab;  */

long FUN_10b11e978(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b131d54(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10b11e9ac; end: 10b11ea77;  */

void FUN_10b11e9ac(long *param_1)

{
  long *plVar1;
  undefined8 *unaff_x21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_58 [40];
  
  func_0x00010b1354e8();
  plVar1 = param_1;
  func_0x00010b135818();
  func_0x00010b1363f8();
  FUN_10b132200(auStack_58);
  uStack_98 = unaff_x21[1];
  uStack_a0 = *unaff_x21;
  uStack_90 = unaff_x21[2];
  uStack_88 = unaff_x21[3];
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = 0;
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  uStack_68 = *(char *)(unaff_x21 + 7) == '\x01';
  if ((bool)uStack_68) {
    uStack_78 = unaff_x21[5];
    uStack_80 = unaff_x21[4];
    uStack_70 = unaff_x21[6];
    unaff_x21[5] = 0;
    unaff_x21[6] = 0;
    unaff_x21[4] = 0;
  }
  FUN_10b136654(plVar1 + 3,auStack_58,&uStack_a0);
  func_0x0001052a03ac(&uStack_a0);
  FUN_10b0f7ab4(auStack_58);
  *param_1 = (long)(plVar1 + 3);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10b11ea78; end: 10b11ea97;  */

void FUN_10b11ea78(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b11ea98; end: 10b11ebff;  */

undefined8 * FUN_10b11ea98(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  
  puVar1 = &uStack_110;
  func_0x00010b134b60();
  func_0x00010b133e10();
  FUN_10b127af8(&uStack_c0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  lVar3 = *(long *)(*(long *)(unaff_x19 + 0x18) + 0x30);
  uStack_d0 = *(undefined8 *)(lVar3 + 0x40);
  lStack_c8 = *(long *)(lVar3 + 0x48);
  if (lStack_c8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  lStack_108 = lStack_b8;
  uStack_110 = uStack_c0;
  uVar4 = uStack_c0;
  lVar3 = lStack_b8;
  if (lStack_b8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b124788(auStack_100);
  func_0x00010b135194();
  uStack_e8 = uVar4;
  lStack_e0 = lVar3;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  pcStack_a8 = FUN_10b132290;
  ppuStack_a0 = &PTR_FUN_110cbd428;
  func_0x00010b135e28();
  func_0x00010b134634();
  FUN_10b124788();
  *(long *)(unaff_x20 + 0x30) = lStack_e0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_e8;
  if (lStack_e0 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_02 != 0);
  }
  func_0x00010b1346dc();
  func_0x00010b134584();
  func_0x00010b133eb4(ppuStack_a0);
  FUN_10b11ec00();
  func_0x00010b1355e4();
  func_0x00010b135494();
  func_0x00010b133dfc(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133eb4(ppuStack_a0);
    FUN_10b11ec00(&uStack_110);
    func_0x00010b1355e4();
    func_0x00010b135494();
    func_0x00010b1343d0();
    func_0x00010b135838();
    func_0x0001052a6df8();
    func_0x00010b0f79e0((undefined1 *)((long)puVar1 + 0x10));
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c350ac();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return (undefined8 *)(undefined1 *)puVar1;
  }
  return puVar1;
}



/* Entry: 10b11ec00; end: 10b11ec27;  */

long FUN_10b11ec00(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135838();
  func_0x0001052a6df8();
  func_0x00010b0f79e0(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b11ec28; end: 10b11ed5f;  */

void FUN_10b11ec28(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  char **ppcVar7;
  undefined8 uVar8;
  int *piVar9;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int unaff_w19;
  long unaff_x20;
  code **unaff_x21;
  long lVar10;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  char **ppcStack_1a0;
  char **ppcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char cStack_178;
  char *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_38;
  
  func_0x00010b13647c();
  func_0x00010b133e24();
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010b135cec();
  uVar6 = unaff_w19 == 1;
  if ((bool)uVar6) {
    param_2 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x18);
    FUN_10b1d0b44();
  }
  else {
    uVar6 = unaff_w19 == 3;
    if ((bool)uVar6) {
      piVar9 = (int *)**(undefined8 **)(unaff_x20 + 0x18);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = *piVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar10 = *(long *)(unaff_x20 + 0x28);
      FUN_10b1d0bac(*(undefined8 *)(lVar10 + 0x18));
      FUN_10b1d0c68(*(undefined8 *)(lVar10 + 0x18),lVar10);
      func_0x00010b135a50();
      param_2 = *(long *)(extraout_x8 + 0x20);
      if (*(long *)(extraout_x8 + 0x28) != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10 != 0);
      }
      func_0x00010b135ad4();
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_00 != 0);
      }
      unaff_x21 = &pcStack_98;
      pcStack_98 = FUN_10b1325c8;
      ppuStack_90 = &PTR_FUN_110cbd458;
      uStack_88 = param_1;
      func_0x00010b1346b0();
      func_0x00010b135fb4();
      func_0x00010b133eb4(ppuStack_90);
      func_0x00010b134558();
      func_0x00010b1358dc();
    }
  }
  *(int *)(unaff_x20 + 0x208) = unaff_w19;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    *(int *)(*(long *)(unaff_x20 + 0xc0) + 0x150) = unaff_w19;
  }
  func_0x00010b135200();
  func_0x00010b133dfc(uStack_38);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    lVar10 = param_2;
    func_0x00010b133eb4(ppuStack_90);
    func_0x00010b134558();
    func_0x00010b1358dc();
    func_0x00010b135200();
    func_0x00010b1343d0();
    func_0x00010b136470();
    FUN_10b11eefc(&pcStack_168,&UNK_10f72f90d,0x13,**(undefined8 **)(lVar10 + 0x18),
                  (*(undefined8 **)(lVar10 + 0x18))[1]);
    FUN_10b1f7494(&pcStack_190,unaff_x21[5],param_2,uVar8);
    if (cStack_178 == '\x01') {
      lVar10 = (long)pcStack_188 - (long)pcStack_190 >> 6;
    }
    else {
      lVar10 = 0;
      pcStack_190 = (char *)0x0;
      pcStack_188 = (char *)0x0;
      pcStack_180 = (char *)0x0;
      cStack_178 = '\x01';
    }
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    FUN_10b11ef50(*(undefined8 *)unaff_x21[3],0xad,&uStack_118,lVar10);
    FUN_10b120998(&uStack_118);
    ppcVar7 = &pcStack_168;
    FUN_10b12494c();
    pcStack_168 = "";
    uStack_160 = 0;
    func_0x00010b135780();
    ppcVar7[1] = (char *)0x0;
    ppcVar7[2] = (char *)0x0;
    *ppcVar7 = (char *)&PTR_DAT_110cbd480;
    pcVar5 = pcStack_180;
    pcVar4 = pcStack_188;
    pcVar3 = pcStack_190;
    pcStack_180 = (char *)0x0;
    pcStack_190 = (char *)0x0;
    pcStack_188 = (char *)0x0;
    ppcVar7[3] = (char *)&PTR_FUN_110cbdcf8;
    ppcVar7[5] = pcVar4;
    ppcVar7[4] = pcVar3;
    ppcVar7[6] = pcVar5;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    ppcVar7[7] = pcVar3;
    *(int *)(ppcVar7 + 8) = (int)param_2;
    func_0x00010b1248a0(&uStack_118);
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    ppcStack_1a0 = ppcVar7 + 3;
    ppcStack_198 = ppcVar7;
    func_0x00010b1353c0();
    func_0x00010b1355d4();
    FUN_10b0f3ee0(&ppcStack_1a0);
    FUN_10b132784(&uStack_1b0);
    FUN_10b124a24(&pcStack_190);
    FUN_10b11ef88(&pcStack_168);
    return;
  }
  return;
}



/* Entry: 10b11ed60; end: 10b11eefb;  */

void FUN_10b11ed60(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  long lVar5;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char **ppcStack_d0;
  char **ppcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char cStack_a8;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b136470();
  FUN_10b11eefc(&pcStack_98,&UNK_10f72f90d,0x13,**(undefined8 **)(param_1 + 0x18),
                (*(undefined8 **)(param_1 + 0x18))[1]);
  FUN_10b1f7494(&pcStack_c0,*(undefined8 *)(unaff_x21 + 0x28));
  if (cStack_a8 == '\x01') {
    lVar5 = (long)pcStack_b8 - (long)pcStack_c0 >> 6;
  }
  else {
    lVar5 = 0;
    pcStack_c0 = (char *)0x0;
    pcStack_b8 = (char *)0x0;
    pcStack_b0 = (char *)0x0;
    cStack_a8 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b11ef50(**(undefined8 **)(unaff_x21 + 0x18),0xad,&uStack_48,lVar5);
  FUN_10b120998(&uStack_48);
  ppcVar4 = &pcStack_98;
  FUN_10b12494c();
  pcStack_98 = "";
  uStack_90 = 0;
  func_0x00010b135780();
  ppcVar4[1] = (char *)0x0;
  ppcVar4[2] = (char *)0x0;
  *ppcVar4 = (char *)&PTR_DAT_110cbd480;
  pcVar3 = pcStack_b0;
  pcVar2 = pcStack_b8;
  pcVar1 = pcStack_c0;
  pcStack_b0 = (char *)0x0;
  pcStack_c0 = (char *)0x0;
  pcStack_b8 = (char *)0x0;
  ppcVar4[3] = (char *)&PTR_FUN_110cbdcf8;
  ppcVar4[5] = pcVar2;
  ppcVar4[4] = pcVar1;
  ppcVar4[6] = pcVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  ppcVar4[7] = pcVar1;
  *(undefined4 *)(ppcVar4 + 8) = unaff_w19;
  func_0x00010b1248a0(&uStack_48);
  uStack_e0 = 0;
  uStack_d8 = 0;
  ppcStack_d0 = ppcVar4 + 3;
  ppcStack_c8 = ppcVar4;
  func_0x00010b1353c0();
  func_0x00010b1355d4();
  FUN_10b0f3ee0(&ppcStack_d0);
  FUN_10b132784(&uStack_e0);
  FUN_10b124a24(&pcStack_c0);
  FUN_10b11ef88(&pcStack_98);
  return;
}



/* Entry: 10b11eefc; end: 10b11ef4f;  */

undefined8 *
FUN_10b11eefc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  int extraout_w10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  if (param_5 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  func_0x000107c316c8(param_1 + 7);
  func_0x000107c28144(param_1 + 4);
  return param_1;
}



/* Entry: 10b11ef50; end: 10b11ef87;  */

void FUN_10b11ef50(void)

{
  undefined8 *unaff_x20;
  
  func_0x00010b134290();
  func_0x00010b1346b0(*unaff_x20);
  func_0x00010b134ea0();
  func_0x00010b134e98();
  return;
}



/* Entry: 10b11ef88; end: 10b11efbb;  */

long FUN_10b11ef88(long param_1)

{
  FUN_10b12494c();
  func_0x000107c316d0(param_1 + 0x38);
  func_0x00010b12487c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b11efbc; end: 10b11f29b;  */

/* WARNING: Possible PIC construction at 0x00010b11f2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b11f2b8) */
/* WARNING: Removing unreachable block (ram,0x00010b13453c) */

undefined8 * FUN_10b11efbc(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar11;
  code *extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w12;
  int extraout_w12_00;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 uVar13;
  long lVar14;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  code *in_stack_00000048;
  undefined **in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  code *in_stack_00000088;
  undefined **in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000e8;
  
  func_0x00010b136510();
  func_0x00010b136470();
  func_0x00010b133e8c();
  in_stack_000000e8 = extraout_x8;
  FUN_10b127af8(&stack0x00000030,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  in_stack_00000018 = in_stack_00000038;
  in_stack_00000010 = in_stack_00000030;
  if (in_stack_00000038 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uVar7 = *(char *)(unaff_x21 + 0xe0) == '\x01';
  in_stack_00000020 = unaff_w19;
  if ((bool)uVar7) {
    uVar8 = *(ulong *)(*(long *)(unaff_x21 + 0x18) + 0x10);
    FUN_10b20ecb0();
    if ((uVar8 & 1) == 0) {
      puVar9 = *(undefined8 **)(*(long *)(unaff_x21 + 0x18) + 0x30);
      func_0x00010b1ff218();
      lVar6 = in_stack_00000038;
      uVar11 = in_stack_00000030;
      lVar14 = in_stack_00000018;
      uVar12 = in_stack_00000010;
      in_stack_00000088 = (code *)in_stack_00000010;
      in_stack_00000090 = (undefined **)in_stack_00000018;
      in_stack_00000010 = 0;
      in_stack_00000018 = 0;
      in_stack_00000098 = CONCAT44(in_stack_00000098._4_4_,in_stack_00000020);
      in_stack_000000a0 = in_stack_00000030;
      in_stack_000000a8 = in_stack_00000038;
      if (in_stack_00000038 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_02 != 0);
      }
      in_stack_000000b0 = CONCAT44(in_stack_000000b0._4_4_,unaff_w19);
      lVar2 = *param_3;
      lVar3 = param_3[1];
      in_stack_000000b8 = lVar2;
      in_stack_000000c0 = lVar3;
      if (lVar3 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_03 != 0);
      }
      in_stack_00000048 = FUN_10b1327a8;
      in_stack_00000050 = &PTR_FUN_110cbd4d8;
      func_0x00010b134ae0();
      *puVar9 = uVar12;
      puVar9[1] = lVar14;
      in_stack_00000088 = (code *)0x0;
      in_stack_00000090 = (undefined **)0x0;
      *(undefined4 *)(puVar9 + 2) = in_stack_00000020;
      puVar9[3] = uVar11;
      puVar9[4] = lVar6;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      *(undefined4 *)(puVar9 + 5) = unaff_w19;
      puVar9[6] = lVar2;
      puVar9[7] = lVar3;
      if (lVar3 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_04 != 0);
      }
      in_stack_00000058 = puVar9;
      FUN_10b20a5ac(in_stack_00000000,&stack0x00000048);
      func_0x00010b133ea8(in_stack_00000050);
      puVar9 = &stack0x00000088;
      FUN_10b11f29c();
      func_0x00010b135894();
    }
    else {
      FUN_10b11f2c4(&stack0x00000088,&stack0x00000010);
      func_0x00010b1346dc();
      func_0x00010b134584();
      puVar9 = &stack0x00000088;
      FUN_10b0f3ee0();
    }
  }
  else {
    if (*(long *)(*(long *)(*(long *)(unaff_x21 + 0x18) + 0x30) + 0x28) != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    in_stack_00000048 = (code *)in_stack_00000030;
    uVar12 = 0;
    uVar11 = in_stack_00000030;
    if (in_stack_00000038 != 0) {
      do {
        func_0x00010b133f68();
        uVar11 = extraout_x8_00;
        uVar12 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    in_stack_00000058 = (undefined8 *)CONCAT44(in_stack_00000058._4_4_,unaff_w19);
    uVar13 = in_stack_00000010;
    lVar14 = in_stack_00000018;
    if (in_stack_00000018 != 0) {
      do {
        func_0x00010b133f68();
        uVar11 = extraout_x8_01;
        uVar12 = extraout_x9_00;
      } while (extraout_w12_00 != 0);
    }
    in_stack_00000070 = in_stack_00000020;
    in_stack_00000078 = *param_3;
    in_stack_00000080 = param_3[1];
    if (in_stack_00000080 != 0) {
      plVar1 = (long *)(in_stack_00000080 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    in_stack_00000088 = FUN_10b132930;
    in_stack_00000090 = &PTR_DAT_110cbd508;
    in_stack_00000048 = (code *)0x0;
    in_stack_00000050 = (undefined **)0x0;
    in_stack_000000a8 = CONCAT44(in_stack_000000a8._4_4_,unaff_w19);
    in_stack_00000060 = 0;
    in_stack_00000068 = 0;
    in_stack_000000c0 = CONCAT44(in_stack_000000c0._4_4_,in_stack_00000020);
    in_stack_00000098 = uVar11;
    in_stack_000000a0 = uVar12;
    in_stack_000000b0 = uVar13;
    in_stack_000000b8 = lVar14;
    in_stack_000000c8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000080;
    if (in_stack_00000080 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010b1346b0();
    (*extraout_x8_02)();
    func_0x00010b133ea8(in_stack_00000090);
    puVar9 = &stack0x00000048;
    FUN_10b11f5c4();
    func_0x00010b135884();
  }
  func_0x00010b13509c();
  func_0x00010b1355a4();
  func_0x00010b133dfc(in_stack_000000e8);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x00010b133ea8(in_stack_00000050);
    FUN_10b11f29c(&stack0x00000088);
    func_0x00010b135894();
    func_0x00010b13509c();
    func_0x00010b1355a4();
    func_0x00010b1343d0();
    func_0x00010b135038();
    func_0x00010b0f7fc0();
    puVar10 = puVar9 + 3;
    func_0x000107c350ac();
    if (puVar10 != (undefined8 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar9;
  }
  return puVar9;
}



/* Entry: 10b11f29c; end: 10b11f2c3;  */

/* WARNING: Possible PIC construction at 0x00010b11f2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b11f2b8) */
/* WARNING: Removing unreachable block (ram,0x00010b13453c) */

void FUN_10b11f29c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135038();
  func_0x00010b0f7fc0();
  lVar1 = unaff_x19 + 0x18;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b11f2c4; end: 10b11f5c3;  */

void FUN_10b11f2c4(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [80];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  
  func_0x00010b134530();
  FUN_10b11eefc(auStack_e0,&UNK_10f72ff7b,0xf,**(undefined8 **)(*param_2 + 0x18),
                (*(undefined8 **)(*param_2 + 0x18))[1]);
  func_0x00010b1349c0();
  uVar4 = *(ulong *)(extraout_x8 + 0x40);
  lVar6 = unaff_x20[2];
  func_0x00010b135d9c();
  lVar7 = lStack_70;
  FUN_10b1cfbc0(lStack_70,uVar4,(int)lVar6);
  func_0x00010b135d94();
  if (((uVar4 & 1) == 0) || (lVar7 < 0x201)) {
    func_0x00010b1349c0();
    FUN_10b1f6a70(&lStack_108,*(undefined8 *)(extraout_x8_02 + 0x40),(int)unaff_x20[2]);
    lVar6 = lStack_108;
    lStack_108 = 0;
    lStack_70 = lVar6 + 0x18;
    lStack_78 = lVar6;
    lStack_68 = CONCAT71(lStack_68._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    __ZNSt3__117__assoc_sub_state10__sub_waitERNS_11unique_lockINS_5mutexEEE(lVar6,&lStack_70);
    lVar7 = *(long *)(lVar6 + 0x10);
    uStack_90 = 0;
    __ZNSt13exception_ptrD1Ev(&uStack_90);
    if (lVar7 != 0) {
      __ZNSt13exception_ptrC1ERKS_(&uStack_90,(long *)(lVar6 + 0x10));
      __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_90);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b11f538);
      (*pcVar2)();
    }
    lVar7 = *(long *)(lVar6 + 0x90);
    lVar1 = *(long *)(lVar6 + 0x98);
    lVar8 = *(long *)(lVar6 + 0xa0);
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(undefined8 *)(lVar6 + 0x98) = 0;
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    lStack_100 = lVar7;
    lStack_f8 = lVar1;
    lStack_f0 = lVar8;
    func_0x000107c2798c(&lStack_70);
    plVar3 = &lStack_78;
    func_0x00010538d0f8();
    func_0x00010b134ae0();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110cbc8f8;
    lStack_f0 = 0;
    lStack_100 = 0;
    lStack_f8 = 0;
    plVar3[3] = (long)&PTR_FUN_110cbdd60;
    plVar3[4] = lVar7;
    plVar3[5] = lVar1;
    lStack_68 = 0;
    uStack_60 = 0;
    lStack_70 = 0;
    plVar3[6] = lVar8;
    plVar3[7] = lVar7;
    FUN_10b124b28(&lStack_70);
    *unaff_x19 = (long)(plVar3 + 3);
    unaff_x19[1] = (long)plVar3;
    FUN_10b124b28(&lStack_100);
    func_0x00010b124bb4(&lStack_108);
  }
  else {
    func_0x00010b1349c0();
    uVar5 = *(undefined8 *)(extraout_x8_00 + 0x40);
    lVar6 = unaff_x20[2];
    func_0x00010b135d9c();
    FUN_10b1cf7a0(&lStack_100,lStack_70,uVar5,(int)lVar6);
    func_0x00010b135d94();
    func_0x00010b1349c0();
    lStack_70 = 0;
    lStack_68 = 0;
    uStack_60 = 0;
    FUN_10b11ef50(*extraout_x8_01,0xae,&lStack_70,(lStack_f8 - lStack_100) / 0x18);
    plVar3 = &lStack_70;
    FUN_10b120998();
    lVar6 = *(long *)(*unaff_x20 + 0x18);
    func_0x00010b135d68();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_FUN_110cbc8a8;
    lStack_68 = lStack_f8;
    lStack_70 = lStack_100;
    uStack_60 = lStack_f0;
    lStack_100 = 0;
    lStack_f8 = 0;
    lStack_f0 = 0;
    uStack_88 = *(undefined8 *)(lVar6 + 0x48);
    uStack_90 = *(undefined8 *)(lVar6 + 0x40);
    if (*(long *)(lVar6 + 0x48) != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    FUN_10b13b2d0(plVar3 + 3,&lStack_70,&uStack_90,(int)unaff_x20[2]);
    func_0x00010b1257f8(&uStack_90);
    FUN_10b124a70(&lStack_70);
    *unaff_x19 = (long)(plVar3 + 3);
    unaff_x19[1] = (long)plVar3;
    FUN_10b124a70(&lStack_100);
  }
  FUN_10b11ef88(auStack_e0);
  return;
}



/* Entry: 10b11f5c4; end: 10b11f623;  */

/* WARNING: Possible PIC construction at 0x00010b11f5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b11f5e0) */
/* WARNING: Removing unreachable block (ram,0x00010b13453c) */

void FUN_10b11f5c4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135038();
  func_0x00010b0f7fc0();
  lVar1 = unaff_x19 + 0x18;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b11f624; end: 10b11f65f;  */

void FUN_10b11f624(undefined8 param_1)

{
  undefined8 uStack_30;
  
  func_0x00010b1360b4();
  FUN_10b1c9788(param_1,uStack_30);
  func_0x00010b13588c();
  return;
}



/* Entry: 10b11f660; end: 10b11f6a7;  */

void FUN_10b11f660(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar2 != lVar1) {
    __ZNSt3__113shared_futureIvED1Ev(lVar2 + -8);
    func_0x00010b124c0c(lVar2 + -0x18);
    lVar2 = lVar2 + -0x18;
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b11f6a8; end: 10b11f6b3;  */

uint FUN_10b11f6a8(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  param_1 = param_1 + 0x38;
  ppuStack_28 = &PTR_DAT_110cbd820;
  FUN_10b201f80(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(&PTR_DAT_110cbd820);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b11f6b4; end: 10b11f723;  */

void FUN_10b11f6b4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_10b117280(auStack_48,param_1 + 0x58);
  lVar1 = param_2[1];
  for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    lVar2 = lStack_38;
    FUN_10b12abac(lStack_38,lVar4 + 0x18);
    if (lVar2 != 0) {
      uVar3 = 3;
      if (*(char *)(lVar4 + 0x40) == '\0') {
        uVar3 = 1;
      }
      *(undefined4 *)(lVar2 + 0x330) = uVar3;
    }
  }
  func_0x00010b134e7c();
  return;
}



/* Entry: 10b11f724; end: 10b11f747;  */

void FUN_10b11f724(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  
  lVar1 = *(long *)(param_2 + 0x1e0);
  *param_1 = *(undefined8 *)(param_2 + 0x1d8);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b11f748; end: 10b11f8cb;  */

long FUN_10b11f748(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  ulong uVar2;
  long extraout_x8;
  long extraout_x9;
  ulong uVar3;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x25;
  ulong uVar6;
  
  func_0x00010b136544();
  func_0x00010b1347f0();
  uVar5 = unaff_x19[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    uVar3 = param_3;
    if ((uVar5 & uVar6) == 0) {
      unaff_x25 = uVar6 & param_3;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar5) < 0;
      unaff_x25 = param_3;
      if (uVar5 <= param_3) {
        func_0x00010b13633c();
      }
    }
    plVar4 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x20 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*plVar4;
          if (unaff_x20 == (long *)0x0) goto LAB_10b11f7f0;
          uVar2 = unaff_x20[1];
          in_NG = (long)(uVar2 - param_3) < 0;
          plVar4 = unaff_x20;
          if (uVar2 != param_3) break;
          func_0x00010b135e40();
          if ((uVar3 & 1) != 0) {
            return (long)unaff_x20;
          }
        }
        if ((uVar5 & uVar6) == 0) {
          uVar2 = uVar2 & uVar6;
        }
        else if (uVar5 <= uVar2) {
          uVar1 = 0;
          if (uVar5 != 0) {
            uVar1 = uVar2 / uVar5;
          }
          uVar2 = uVar2 - uVar1 * uVar5;
        }
        in_NG = (long)(uVar2 - unaff_x25) < 0;
      } while (uVar2 == unaff_x25);
    }
  }
LAB_10b11f7f0:
  func_0x00010b135e30();
  func_0x00010b1363d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x00010b135d7c();
  func_0x00010b1345b0();
  if ((uVar5 == 0) ||
     (func_0x00010b135ab0(param_1,param_2,(float)uVar5), uVar3 = unaff_x25, (bool)in_NG)) {
    func_0x00010b135a98();
    func_0x00010b1342d8();
    func_0x00010b136014();
    uVar5 = unaff_x19[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar3 = uVar5 - 1 & param_3;
    }
    else {
      uVar3 = param_3;
      if (uVar5 <= param_3) {
        func_0x00010b13633c();
        uVar3 = unaff_x25;
      }
    }
  }
  if (*(long *)(*unaff_x19 + uVar3 * 8) == 0) {
    func_0x00010b135a80();
    if (extraout_x9 != 0) {
      uVar3 = *(ulong *)(extraout_x9 + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar3 = uVar3 & uVar5 - 1;
      }
      else if (uVar5 <= uVar3) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar3 / uVar5;
        }
        uVar3 = uVar3 - uVar6 * uVar5;
      }
      *(long **)(extraout_x8 + uVar3 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b135990();
  }
  func_0x00010b1342c0();
  FUN_10b129f9c();
  return (long)unaff_x20;
}



/* Entry: 10b11f8cc; end: 10b11f8f3;  */

bool FUN_10b11f8cc(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 != 0) {
    if (((*(uint *)(param_1 + 0x10) >> 2 & 1) != 0) || ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0))
    {
      return true;
    }
    bVar1 = 0 < *(int *)(param_1 + 0x20);
  }
  return bVar1;
}



/* Entry: 10b11f8f4; end: 10b11f99b;  */

undefined1 * FUN_10b11f8f4(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (param_1 == 0) {
    func_0x00010b136168();
    func_0x000107c278b8(auStack_38);
  }
  else {
    ppuVar1 = &PTR_PTR_11336dce0;
    if (*(undefined ***)(param_1 + 0x58) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_1 + 0x58);
    }
    FUN_10b4d1804(auStack_38,ppuVar1);
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    ppuVar1 = &PTR_PTR_11336dce0;
    if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x58);
    }
    FUN_10b4d1804(auStack_50,ppuVar1);
  }
  else {
    func_0x00010b136168();
    func_0x00010b136090();
  }
  puVar2 = auStack_38;
  func_0x000107c278d0(puVar2,auStack_50);
  func_0x00010b13458c();
  func_0x00010b134d90();
  return puVar2;
}



/* Entry: 10b11f99c; end: 10b11fae7;  */

void FUN_10b11f99c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  undefined8 uStack_28;
  
  func_0x00010b13451c();
  FUN_10b117280();
  FUN_10b12abac(uStack_28,param_3);
  if (uStack_28 == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    func_0x00010b11f9ec();
  }
  func_0x00010b134e7c();
  return;
}



/* Entry: 10b11fae8; end: 10b11fd0f;  */

void FUN_10b11fae8(undefined1 *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  long *plStack_40;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  func_0x00010b134530();
  *param_1 = 0;
  param_1[0x60] = 0;
  if (param_3 != 0) {
    FUN_10b11fd10();
    func_0x00010b135188();
  }
  iVar5 = (int)unaff_x20 + 0xd0;
  func_0x00010b11fd48();
  if (iVar5 == 0) {
    plStack_30 = (long *)0x0;
    lStack_28 = 0;
  }
  else {
    plVar6 = (long *)(unaff_x20 + 0xd0);
    FUN_10b11fd70();
    plVar7 = (long *)*plVar6;
    lStack_28 = plVar6[1];
    plStack_30 = plVar7;
    if (lStack_28 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    lVar8 = lStack_28;
    if (plVar7 != (long *)0x0) {
      ___dynamic_cast();
      if (plVar7 == (long *)0x0) {
        plStack_40 = (long *)0x0;
        lStack_38 = 0;
      }
      else {
        lStack_38 = lVar8;
        plStack_40 = plVar7;
        if (lVar8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_00 != 0);
        }
        (**(code **)(*plVar7 + 0x10))(&uStack_80);
        if (cStack_48 == '\x01') {
          if ((*(byte *)(unaff_x19 + 0x60) & 1) == 0) {
            FUN_10b11fd10();
          }
          else {
            cStack_48 = '\x01';
          }
          cVar1 = *(char *)(unaff_x19 + 0x58);
          if (cVar1 == cStack_48) {
            if (cVar1 != '\0') {
              if (*(long *)(unaff_x19 + 0x38) != 0) {
                FUN_10b12516c(unaff_x19 + 0x20,*(undefined8 *)(unaff_x19 + 0x30));
                *(undefined8 *)(unaff_x19 + 0x30) = 0;
                lVar9 = *(long *)(unaff_x19 + 0x28);
                for (lVar8 = 0; lVar9 != lVar8; lVar8 = lVar8 + 1) {
                  *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + lVar8 * 8) = 0;
                }
                *(undefined8 *)(unaff_x19 + 0x38) = 0;
              }
              uVar3 = uStack_80;
              uStack_80 = 0;
              FUN_10b125154(unaff_x19 + 0x20,uVar3);
              uVar4 = uStack_78;
              *(long *)(unaff_x19 + 0x30) = lStack_70;
              *(ulong *)(unaff_x19 + 0x28) = uStack_78;
              uStack_78 = 0;
              *(long *)(unaff_x19 + 0x38) = lStack_68;
              *(undefined4 *)(unaff_x19 + 0x40) = uStack_60;
              if (lStack_68 != 0) {
                uVar10 = *(ulong *)(lStack_70 + 8);
                if ((uVar4 & uVar4 - 1) == 0) {
                  uVar10 = uVar10 & uVar4 - 1;
                }
                else if (uVar4 <= uVar10) {
                  uVar2 = 0;
                  if (uVar4 != 0) {
                    uVar2 = uVar10 / uVar4;
                  }
                  uVar10 = uVar10 - uVar2 * uVar4;
                }
                *(long **)(*(long *)(unaff_x19 + 0x20) + uVar10 * 8) = (long *)(unaff_x19 + 0x30);
                lStack_70 = 0;
                lStack_68 = 0;
              }
              *(undefined8 *)(unaff_x19 + 0x50) = uStack_50;
              *(undefined8 *)(unaff_x19 + 0x48) = uStack_58;
            }
          }
          else if (cVar1 == '\0') {
            func_0x00010b12513c(unaff_x19 + 0x20,&uStack_80);
          }
          else {
            FUN_10b125118(unaff_x19 + 0x20);
          }
        }
        FUN_10b12528c(&uStack_80);
      }
      FUN_10b132fcc(&plStack_40);
    }
  }
  func_0x00010539e938(&plStack_30);
  return;
}



/* Entry: 10b11fd10; end: 10b11fd6f;  */

undefined8 * FUN_10b11fd10(undefined8 *param_1)

{
  FUN_10b124cbc();
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return param_1;
}



/* Entry: 10b11fd70; end: 10b11fdb7;  */

long FUN_10b11fd70(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  FUN_10b124d2c(auStack_30);
  FUN_10b124eb8(auStack_30);
  func_0x00010b13489c();
  if ((*(byte *)(*param_1 + 0x50) & 1) != 0) {
    return *param_1 + 0x40;
  }
  func_0x00010b134e8c();
  func_0x00010b134c7c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b124d24);
  (*pcVar1)();
}



/* Entry: 10b11fdb8; end: 10b11fe17;  */

long FUN_10b11fdb8(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_10b24fef8();
  }
  else {
    FUN_10b1212e8();
  }
  return param_1;
}



/* Entry: 10b11fe18; end: 10b11feef;  */

void FUN_10b11fe18(long *param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  func_0x00010b13421c();
  lVar1 = *param_1;
  FUN_10b11f99c(auStack_58,lVar1,param_1[1]);
  FUN_10b124c64(auStack_58);
  _strlen();
  FUN_10b20c318(**(undefined8 **)(lVar1 + 0x18));
  return;
}



/* Entry: 10b11fef0; end: 10b11ffeb;  */

void FUN_10b11fef0(long *param_1,long *param_2,long *param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long lVar1;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  undefined1 auStack_b0 [120];
  undefined1 uStack_38;
  
  if ((int)param_3[2] == 1) {
    if (*param_3 != 0) {
      lVar1 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10 != 0);
      }
      *(undefined1 *)(param_1 + 0x62) = 0;
      *(undefined1 *)(param_1 + 99) = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
  }
  else if (((int)param_3[2] == 2) && (lVar1 = *param_3, lVar1 != 0)) {
    if (*param_2 == 0) {
      auStack_b0[0] = 0;
      uStack_38 = 0;
    }
    else {
      FUN_10b123790(auStack_b0);
    }
    FUN_10b1a1a14(lVar1,auStack_b0);
    FUN_10b0faf98(auStack_b0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010b135194();
    param_1[3] = CONCAT17(in_register_0000500f,
                          CONCAT16(in_register_0000500e,
                                   CONCAT15(in_register_0000500d,
                                            CONCAT14(in_register_0000500c,
                                                     CONCAT13(in_register_0000500b,
                                                              CONCAT12(in_register_0000500a,
                                                                       CONCAT11(in_register_00005009
                                                                                ,
                                                  in_register_00005008)))))));
    param_1[2] = CONCAT17(in_register_00005007,
                          CONCAT16(in_register_00005006,
                                   CONCAT15(in_register_00005005,
                                            CONCAT14(in_register_00005004,
                                                     CONCAT13(in_register_00005003,
                                                              CONCAT12(in_register_00005002,
                                                                       CONCAT11(in_register_00005001
                                                                                ,in_b0)))))));
    if (extraout_x8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    param_1[4] = lVar1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0x62) = 0;
    *(undefined1 *)(param_1 + 99) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined8 *)((long)param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  return;
}



/* Entry: 10b11ffec; end: 10b12000f;  */

void FUN_10b11ffec(void)

{
  func_0x00010b133dc4();
  func_0x0001052ac684();
  return;
}



/* Entry: 10b120010; end: 10b12003f;  */

void FUN_10b120010(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010b13448c();
  FUN_10b125790();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b120040; end: 10b120117;  */

void FUN_10b120040(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  FUN_10b125790();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10b120118; end: 10b1201f7;  */

void FUN_10b120118(void)

{
  long *unaff_x19;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  func_0x00010b135394();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_58);
  FUN_10b1136e8(auStack_40,auStack_58);
  FUN_10b1201f8(&lStack_30,auStack_40);
  FUN_10b120b58(auStack_40);
  func_0x00010b134d90();
  if (*(long *)(lStack_30 + 0x1e8) == 0) {
    FUN_10b13cfac(auStack_68);
    func_0x0001052a1980(auStack_40,auStack_68);
    func_0x000105c41cfc(lStack_30 + 0x1e8,auStack_40);
    func_0x000107c27f08(auStack_40);
    func_0x0001052a18c8(auStack_68);
  }
  *unaff_x19 = lStack_30;
  unaff_x19[1] = lStack_28;
  lStack_30 = 0;
  lStack_28 = 0;
  func_0x00010b12592c(&lStack_30);
  return;
}



/* Entry: 10b1201f8; end: 10b120313;  */

void FUN_10b1201f8(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int extraout_w10;
  long lVar3;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10b120cb8(&lStack_58,param_1,&uStack_68);
  FUN_10b120ce8(&lStack_48,&lStack_58);
  FUN_10b120b58(&lStack_58);
  FUN_10b120b58(&uStack_68);
  lStack_58 = lStack_48 + 0x48;
  uStack_50 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = lStack_48;
  lStack_78 = lStack_48;
  lStack_70 = lStack_40;
  if (lStack_40 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  while ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
    uStack_38 = 0;
    lVar3 = *(long *)(lVar1 + 0x88);
    __ZNSt13exception_ptrD1Ev(&uStack_38);
    if (lVar3 != 0) break;
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(lVar1 + 0x18,&lStack_58);
  }
  FUN_10b120b58(&lStack_78);
  if (*(long *)(lStack_48 + 0x88) != 0) {
    func_0x00010b136080();
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_80);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1202e4);
    (*pcVar2)();
  }
  func_0x00010b135950();
  func_0x000107c2798c(&lStack_58);
  FUN_10b120b58(&lStack_48);
  return;
}



/* Entry: 10b120314; end: 10b12044b;  */

undefined1 * FUN_10b120314(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long lStack_d0;
  long lStack_c8;
  long alStack_b8 [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  plVar4 = &lStack_d0;
  func_0x00010b13448c();
  func_0x00010b133e38();
  puVar2 = *(undefined1 **)(param_1 + 0x28);
  func_0x00010b1360b4();
  lVar6 = *(long *)(lStack_d0 + 0x568);
  func_0x00010b13588c();
  if (lVar6 != 0) {
    func_0x00010b13587c();
    plVar3 = alStack_b8;
    func_0x00010b121ddc();
    uStack_88 = (undefined1)param_4[1];
    uStack_87 = (undefined7)((ulong)param_4[1] >> 8);
    uStack_90 = (undefined1)*param_4;
    uStack_8f = (undefined7)((ulong)*param_4 >> 8);
    uStack_80 = *(undefined1 *)(param_4 + 2);
    pcStack_78 = FUN_10b132ff0;
    ppuStack_70 = &PTR_FUN_110cbd5d0;
    uStack_98 = param_3;
    func_0x00010b135f04();
    plVar3[1] = lStack_c8;
    *plVar3 = lStack_d0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    plVar3[2] = unaff_x20;
    func_0x00010b121ddc(plVar3 + 3,alStack_b8);
    lVar6 = CONCAT44(uStack_94,uStack_98);
    plVar3[8] = CONCAT71(uStack_8f,uStack_90);
    plVar3[7] = lVar6;
    uVar1 = CONCAT17(uStack_88,uStack_8f);
    *(ulong *)((long)plVar3 + 0x49) = CONCAT17(uStack_80,uStack_87);
    *(undefined8 *)((long)plVar3 + 0x41) = uVar1;
    plStack_68 = plVar3;
    func_0x00010b13475c();
    func_0x00010b133eec(ppuStack_70);
    FUN_10b12044c();
    puVar2 = (undefined1 *)plVar4;
  }
  func_0x00010b133dfc(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b133eec(ppuStack_70);
  FUN_10b12044c(&lStack_d0);
  func_0x00010b1343d0();
  func_0x00010b1348cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  puVar5 = puVar2;
  func_0x000107c350ac();
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar2;
}



/* Entry: 10b12044c; end: 10b12048f;  */

long FUN_10b12044c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1348cc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b120490; end: 10b1204e7;  */

void FUN_10b120490(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x50);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10b1204e8(lVar1);
    func_0x00010b134c8c();
  }
  lVar1 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10b1204e8; end: 10b120507;  */

void FUN_10b1204e8(void)

{
  func_0x00010b1348cc();
  func_0x00010b123ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b120508; end: 10b1205af;  */

void FUN_10b120508(undefined8 *param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110cbdb30;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  lVar1 = param_3[1];
  for (lVar2 = *param_3; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    func_0x000107c27958(auStack_48,lVar2);
    uStack_58 = *(undefined8 *)(lVar2 + 0x18);
    uStack_60 = *(undefined8 *)(lVar2 + 0x10);
    uStack_50 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    FUN_10b1205b4(param_1,auStack_48,&uStack_60);
    func_0x00010b13458c();
    func_0x00010b134d90();
  }
  return;
}



/* Entry: 10b1205b0; end: 10b1205b3;  */

undefined8 * FUN_10b1205b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbdb98;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 10b1205b4; end: 10b1205e3;  */

void FUN_10b1205b4(long param_1)

{
  long unaff_x20;
  
  func_0x00010b135568();
  func_0x000107c27940(param_1 + 8);
  func_0x000107c27940(unaff_x20 + 8);
  return;
}



/* Entry: 10b1205e4; end: 10b1205f7;  */

void FUN_10b1205e4(void)

{
  FUN_10b120618();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1205f8; end: 10b120617;  */

undefined4 FUN_10b1205f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* Entry: 10b120618; end: 10b12067b;  */

undefined8 * FUN_10b120618(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cbdb98;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 10b12067c; end: 10b1206db;  */

void FUN_10b12067c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010b134948();
    FUN_10b1206dc();
    func_0x00010b135a20();
    FUN_10b120720();
  }
  func_0x00010b134ecc();
  func_0x00010b1208fc(&uStack_40);
  return;
}



/* Entry: 10b1206dc; end: 10b12071f;  */

void FUN_10b1206dc(long param_1,ulong param_2)

{
  long lVar1;
  long *unaff_x19;
  
  if (param_2 < 0x666666666666667) {
    func_0x00010b134958();
    FUN_10b120760();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x28;
  }
  else {
    FUN_10b120754();
    lVar1 = param_1 + 0x10;
    func_0x00010b1207b0();
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10b120720; end: 10b120753;  */

void FUN_10b120720(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010b1207b0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b120754; end: 10b12075f;  */

void FUN_10b120754(void)

{
  func_0x00010b134d60();
  FUN_10b120784();
  return;
}



/* Entry: 10b120760; end: 10b120783;  */

void FUN_10b120760(void)

{
  FUN_10b120784();
  return;
}



/* Entry: 10b120784; end: 10b1207c3;  */

void FUN_10b120784(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  FUN_10b1207c4();
  return;
}



/* Entry: 10b1207c4; end: 10b120853;  */

long FUN_10b1207c4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10b120854(param_4,param_2);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  FUN_10b12087c(&uStack_60);
  return param_4;
}



/* Entry: 10b120854; end: 10b12087b;  */

undefined8 * FUN_10b120854(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10b12087c; end: 10b1208a7;  */

void FUN_10b12087c(void)

{
  uint extraout_w8;
  
  func_0x00010b1364ac();
  if ((extraout_w8 & 1) == 0) {
    FUN_10b1208a8();
  }
  return;
}



/* Entry: 10b1208a8; end: 10b1208c7;  */

void FUN_10b1208a8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  return;
}



/* Entry: 10b1208c8; end: 10b12094f;  */

void FUN_10b1208c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_3 + -0x18);
  }
  return;
}



/* Entry: 10b120950; end: 10b120957;  */

void FUN_10b120950(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b120958; end: 10b120997;  */

void FUN_10b120958(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b13448c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b120998; end: 10b1209bb;  */

void FUN_10b120998(void)

{
  func_0x00010b134374();
  func_0x00010b120924();
  return;
}



/* Entry: 10b1209bc; end: 10b1209e7;  */

void FUN_10b1209bc(void)

{
  func_0x00010b13448c();
  func_0x00010b1352e4();
  func_0x00010b1357b4();
  func_0x00010b134038();
  func_0x00010b134f14();
  return;
}



/* Entry: 10b1209e8; end: 10b120a0b;  */

void FUN_10b1209e8(void)

{
  func_0x00010b133dc4();
  FUN_10b120a3c();
  return;
}



/* Entry: 10b120a0c; end: 10b120a3b;  */

void FUN_10b120a0c(void)

{
  ulong uVar1;
  ulong unaff_x19;
  
  func_0x00010b13421c();
  while (uVar1 = unaff_x19, FUN_10b120a60(), (uVar1 & 1) == 0) {
    func_0x00010b1344fc();
  }
  return;
}



/* Entry: 10b120a3c; end: 10b120a5f;  */

void FUN_10b120a3c(long param_1)

{
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b120a60; end: 10b120a67;  */

bool FUN_10b120a60(long *param_1)

{
  bool bVar1;
  
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(*param_1 + 0x88) != 0;
    func_0x00010b134484();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b120a68; end: 10b120aa7;  */

bool FUN_10b120a68(long param_1)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(long *)(param_1 + 0x88) != 0;
    func_0x00010b134484();
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 10b120aa8; end: 10b120aab;  */

long FUN_10b120aa8(long param_1)

{
  long extraout_x8;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010b1359d0(&PTR_FUN_110cbc510);
  if (extraout_x8 != 0) {
    func_0x00010b1348f4();
    func_0x000104bdfe3c(auStack_28,auStack_30);
    FUN_10b120c04(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(auStack_30);
    func_0x00010b135d24();
  }
  FUN_10b120b58(param_1 + 0x18);
  FUN_10b120b58();
  return param_1;
}



/* Entry: 10b120aac; end: 10b120abf;  */

void FUN_10b120aac(void)

{
  FUN_10b120b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


