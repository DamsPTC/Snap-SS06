/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008629d4; end: 100862a73;  */

void FUN_1008629d4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  code *extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined8 in_stack_00000088;
  undefined1 auStack_1b8 [256];
  undefined1 auStack_b8 [136];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001008359a4();
  FUN_10083448c();
  (*extraout_x8)();
  if (param_1 != 0) {
    FUN_100835a5c();
    func_0x000100835ac4();
    func_0x000107c3545c();
    func_0x000107c3548c();
    func_0x00010061348c();
    func_0x000100835ae0();
    do {
      func_0x0001006134a0();
      func_0x0001006134a8();
    } while (!(bool)in_ZR);
  }
  func_0x0001008344b0(in_stack_00000088);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c35468();
    func_0x000107c354c0();
    do {
      func_0x000107c3549c();
      func_0x000107c354a4();
    } while (!(bool)in_ZR);
    func_0x000107c35498();
    uStack_30 = param_4;
    uStack_28 = param_5;
    FUN_10084f08c();
    FUN_100862b50(auStack_b8);
    FUN_10084f180(param_3,auStack_b8);
    if ((int)param_3 == 0) {
      func_0x000107c34acc();
      func_0x000107c34a84();
      func_0x000107c34ac8();
      func_0x000107c34aa0();
      func_0x000107c34b10();
      func_0x000107c34a88();
      func_0x000107c34af4();
      func_0x000107c34af0();
      func_0x000107c34af8();
    }
    else {
      FUN_100862e10();
      if (extraout_x8_00 != 0) {
        do {
          func_0x000100601cf4();
        } while (extraout_w10 != 0);
      }
      func_0x00010084f9d0();
      func_0x000100862e1c();
      func_0x0001006b30c8(auStack_1b8);
    }
    FUN_100870800(auStack_b8);
    return;
  }
  return;
}



/* Entry: 100862a74; end: 100862b4f;  */

void FUN_100862a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_1b8 [256];
  undefined1 auStack_b8 [136];
  
  FUN_10084f08c();
  FUN_100862b50(auStack_b8);
  FUN_10084f180(param_3,auStack_b8);
  if ((int)param_3 == 0) {
    func_0x000107c34acc();
    func_0x000107c34a84();
    func_0x000107c34ac8();
    func_0x000107c34aa0();
    func_0x000107c34b10();
    func_0x000107c34a88();
    func_0x000107c34af4();
    func_0x000107c34af0();
    func_0x000107c34af8();
  }
  else {
    FUN_100862e10();
    if (extraout_x8 != 0) {
      do {
        func_0x000100601cf4();
      } while (extraout_w10 != 0);
    }
    func_0x00010084f9d0();
    func_0x000100862e1c();
    func_0x0001006b30c8(auStack_1b8);
  }
  FUN_100870800(auStack_b8);
  return;
}



/* Entry: 100862b50; end: 100862b8f;  */

void FUN_100862b50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a8adf0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &DAT_11383d918;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x7f) = 0;
  return;
}



/* Entry: 100862b90; end: 100862bb3; -[MASViewConstraint layoutPriority] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100862b90(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_112793748);
}



/* Entry: 100862bb4; end: 100862c27;  */

void FUN_100862bb4(long param_1)

{
  ulong *puVar1;
  
  func_0x000100862ba0(param_1 + 0x18);
  FUN_100862c28(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x50)) {
    func_0x0001053936e4(param_1 + 0x48);
  }
  FUN_10029b2d4(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c2a32c(*(undefined8 *)(param_1 + 0x68));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 100862c28; end: 100862c3b;  */

void FUN_100862c28(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 100862c3c; end: 100862c4b; -[MASViewConstraint mas_key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100862c3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793768);
}



/* Entry: 100862c4c; end: 100862c8b; -[MASLayoutConstraint setMas_key:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100862c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112793734;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100862c8c; end: 100862c97;  */

undefined ** FUN_100862c8c(void)

{
  return &PTR_DAT_110a8af70;
}



/* Entry: 100862c98; end: 100862d8b;  */

void FUN_100862c98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar3 = 0;
    lVar4 = 0;
  }
  else {
    do {
      func_0x000107c61174(param_1);
      lVar4 = param_1;
      if (param_1 == 0) {
        lVar3 = 0;
      }
      else {
        do {
          if (lVar2 == lVar4) {
            func_0x000107c61174(lVar2);
            lVar3 = lVar2;
          }
          else {
            lVar3 = 0;
          }
          lVar1 = lVar4;
          func_0x000107c5c42c();
          func_0x000107c61180();
          func_0x000107c61170(lVar4);
        } while ((lVar3 == 0) && (lVar4 = lVar1, lVar1 != 0));
        func_0x000107c61170(lVar1);
      }
      lVar4 = lVar2;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    } while ((lVar3 == 0) && (lVar2 = lVar4, lVar4 != 0));
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100862d8c; end: 100862d9f; -[MASViewConstraint setInstalledView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100862d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112793760,param_3);
  return;
}



/* Entry: 100862da0; end: 100862dbf; -[MASViewConstraint installedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100862da0(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112793760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100862dc0; end: 100862ddb; -[MASViewConstraint setLayoutConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100862dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112793764,param_3);
  return;
}



/* Entry: 100862ddc; end: 100862e0f;  */

void FUN_100862ddc(long param_1)

{
  if (param_1 == 0) {
    func_0x00010065a534();
  }
  else {
    func_0x000107c34854();
  }
  func_0x00010065a53c(&PTR_DAT_110a8b408);
  return;
}



/* Entry: 100862e10; end: 100862e23;  */

void FUN_100862e10(void)

{
  return;
}



/* Entry: 100862e24; end: 100862e83;  */

void FUN_100862e24(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100862e84; end: 100862edf;  */

long FUN_100862e84(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    FUN_10084fb0c();
  }
  FUN_1005fe558(alStack_30);
  return alStack_30[0];
}



/* Entry: 100862ee0; end: 100862f0b; -[MASConstraintMaker .cxx_destruct] */

void FUN_100862ee0(long param_1)

{
  func_0x000107c6119c(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 100862f0c; end: 100862f4b; -[MASCompositeConstraint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100862f30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100862f34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100862f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793714,0);
  return;
}



/* Entry: 100862f4c; end: 1008645bb;  */

void FUN_100862f4c(long param_1,long param_2)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  long *plVar11;
  undefined ***pppuVar12;
  long **pplVar13;
  long ***ppplVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined **ppuVar17;
  undefined **extraout_x8_03;
  code *extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar18;
  undefined **extraout_x9;
  undefined **ppuVar19;
  ulong uVar20;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar21;
  long *plVar22;
  long **pplVar23;
  undefined **ppuVar24;
  uint uVar25;
  long *plVar26;
  undefined *puVar27;
  uint uVar28;
  long lVar29;
  undefined8 uVar30;
  long *plVar31;
  long lVar32;
  undefined **ppuVar33;
  undefined8 *puVar34;
  ulong *puVar35;
  long **pplVar36;
  long *plVar37;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined1 auStack_e10 [16];
  undefined1 auStack_e00 [32];
  long lStack_de0;
  long lStack_dd8;
  undefined8 uStack_dd0;
  undefined1 auStack_dc8 [8];
  undefined1 auStack_dc0 [24];
  long lStack_da8;
  long lStack_da0;
  undefined8 uStack_d98;
  ulong uStack_d90;
  ulong uStack_d88;
  undefined8 uStack_d80;
  long lStack_d78;
  long lStack_d70;
  undefined8 uStack_d68;
  undefined4 uStack_d60;
  long lStack_d58;
  long lStack_d50;
  undefined8 uStack_d48;
  undefined1 auStack_d40 [24];
  undefined1 auStack_d28 [24];
  long **pplStack_d10;
  undefined8 uStack_d08;
  long *plStack_d00;
  undefined1 auStack_cf8 [128];
  byte bStack_c78;
  byte bStack_938;
  undefined **ppuStack_930;
  undefined8 uStack_928;
  long *plStack_920;
  long *plStack_918;
  undefined4 uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  undefined8 uStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  undefined8 uStack_8e0;
  undefined4 uStack_8d8;
  undefined1 auStack_8d0 [8];
  byte bStack_8c8;
  undefined1 uStack_8c7;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  ulong uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined *apuStack_500 [3];
  byte bStack_4e8;
  long lStack_4e0;
  undefined **ppuStack_4d8;
  long *plStack_4d0;
  ulong uStack_4c8;
  float fStack_4c0;
  long *plStack_4b0;
  long **pplStack_4a8;
  undefined8 uStack_4a0;
  undefined *puStack_498;
  undefined **ppuStack_490;
  long lStack_488;
  long lStack_480;
  ulong uStack_478;
  long lStack_470;
  long lStack_468;
  long **pplStack_458;
  long **pplStack_450;
  long lStack_448;
  char cStack_428;
  byte bStack_3c0;
  byte bStack_80;
  undefined8 uStack_78;
  
  func_0x0001006aea64();
  plVar26 = *(long **)(param_2 + 0x20);
  plVar11 = plVar26 + 0xf;
  uStack_78 = extraout_x8;
  FUN_1008645bc();
  bVar2 = *(byte *)(param_1 + 0x80);
  uVar7 = bVar2 != 0;
  uVar9 = bVar2 == 1;
  if ((bool)uVar9) {
    uVar30 = *(undefined8 *)(plVar26[0x15] + 0x18);
    FUN_10002b838(auStack_d28,&UNK_10f4ba657);
    FUN_10054b97c(&puStack_498,uVar30,auStack_d28);
    func_0x000107c60ca0(auStack_d28);
    FUN_1008690e8();
    if ((bool)uVar7 && !(bool)uVar9) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(&UNK_10dee0a70 + (extraout_x8_00 & 0xffffffff) * 4);
    }
    func_0x000107c29fe0(plVar26[0x15],uVar16);
    FUN_1008690e8();
    if ((bool)uVar7 && !(bool)uVar9) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(&UNK_10dee0a70 + (extraout_x8_01 & 0xffffffff) * 4);
    }
    func_0x000107c29fe4(plVar26[0x15],uVar16);
    uVar25 = uStack_540._4_4_;
    puStack_508 = (undefined *)0x0;
    puStack_510 = (undefined *)0x0;
    apuStack_500[0] = (undefined *)0x0;
    uStack_d88 = 0;
    uStack_d90 = 0;
    lStack_d78 = 0;
    uStack_d80 = 0;
    lStack_d70 = CONCAT44(lStack_d70._4_4_,0x3f800000);
    uStack_540 = (undefined *)((ulong)uStack_540._4_4_ << 0x20);
    uVar28 = *(uint *)((long)plVar26 + 0x124);
    if (uVar28 == 1) {
      uStack_540 = (undefined *)CONCAT62(uStack_540._2_6_,0x100);
      uVar9 = true;
      uVar7 = true;
    }
    else if (uVar28 == 3) {
      uStack_540 = (undefined *)CONCAT53(uStack_540._3_5_,0x10000);
      uVar9 = true;
      uVar7 = true;
    }
    else {
      uVar7 = 3 < uVar28;
      uVar9 = uVar28 == 4;
      if ((bool)uVar9) {
        uStack_540 = (undefined *)CONCAT44(uVar25,0x1000000);
      }
      else {
        uStack_540 = (undefined *)CONCAT71(uStack_540._1_7_,1);
      }
    }
    func_0x000107c29fec(&ppuStack_930,plVar26[0x15],&uStack_540,0);
    func_0x0001006577b0(&pplStack_d10,&ppuStack_930);
    func_0x000107c60ee4(&pplStack_458,0x3e0);
    while (((bStack_938 & 1) != 0 || ((bStack_80 & 1) != 0))) {
      uVar7 = pplStack_458 <= pplStack_d10;
      uVar9 = pplStack_d10 == pplStack_458;
      if ((bool)uVar9) break;
      FUN_10065798c(&pplStack_d10);
      func_0x00010878b160();
      FUN_100636aa4(&pplStack_d10);
    }
    func_0x00010878b118(&pplStack_458);
    func_0x00010878b118(&pplStack_d10);
    FUN_10065cae8(&ppuStack_930);
    if (((ulong)uStack_540 & 0x10000) != 0) {
      func_0x000107c29fd4(&ppuStack_930,plVar26[0x15],2);
      func_0x000108707144(&pplStack_d10,&ppuStack_930);
      func_0x000107c60ee4(&pplStack_458,0xa0);
      while (((bStack_c78 & 1) != 0 || ((bStack_3c0 & 1) != 0))) {
        uVar7 = pplStack_458 <= pplStack_d10;
        uVar9 = pplStack_d10 == pplStack_458;
        if ((bool)uVar9) break;
        func_0x00010870715c(&pplStack_d10);
        func_0x00010878b160();
        func_0x00010872a10c(&pplStack_d10);
      }
      func_0x00010878b110(&pplStack_458);
      func_0x00010878b110(&pplStack_d10);
      func_0x000108706f8c(&ppuStack_930);
    }
    func_0x00010878a518(plVar26,puStack_510,puStack_508,0);
    func_0x000100864b68(&uStack_d90);
    func_0x0001005fb56c(&puStack_510);
    FUN_10054cbac(&puStack_498);
    func_0x000100864724();
    FUN_1008690e8();
    if ((bool)uVar7 && !(bool)uVar9) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(&UNK_10dee0a70 + (extraout_x8_02 & 0xffffffff) * 4);
    }
    (**(code **)(*(long *)ppuStack_930[0x26] + 0xc0))(ppuStack_930[0x26],uVar16);
    func_0x000100864c28();
    FUN_10054d120(&puStack_498);
  }
  func_0x000100864724();
  (**(code **)(*(long *)ppuStack_930[0x16] + 0x10))
            (ppuStack_930[0x16],*(undefined8 *)(param_1 + 0x70));
  func_0x000100864c28();
  plVar31 = (long *)plVar26[0x11];
  plStack_920 = (long *)0x0;
  plStack_918 = (long *)0x0;
  uStack_928 = 0;
  ppuStack_930 = &PTR_DAT_110a609a8;
  uStack_910 = 0x44;
  func_0x000100864c30();
  FUN_10002b838(auStack_d40);
  func_0x000100864c3c();
  pppuVar12 = &ppuStack_930;
  FUN_1005504ac(pppuVar12,auStack_d40);
  (**(code **)(*plVar31 + 0x78))(plVar31,pppuVar12,(long)*(int *)(param_1 + 0x20));
  func_0x000107c60ca0(auStack_d40);
  func_0x000100864c50();
  lStack_d58 = 0;
  lStack_d50 = 0;
  uStack_d48 = 0;
  FUN_100864c58(&lStack_d58,(long)*(int *)(param_1 + 0x20));
  uVar18 = *(ulong *)(param_1 + 0x18);
  puVar35 = (ulong *)(param_1 + 0x18);
  if ((uVar18 & 1) != 0) {
    puVar35 = (ulong *)(uVar18 + 7);
  }
  for (lVar29 = (long)*(int *)(param_1 + 0x20) << 3; lVar29 != 0; lVar29 = lVar29 + -8) {
    func_0x0001086f8248(&lStack_d58,*puVar35);
    puVar35 = puVar35 + 1;
  }
  if (plVar11 < (long *)((lStack_d50 - lStack_d58) / 0xa8)) {
    func_0x0001086f7dd8(&lStack_d58);
  }
  uStack_d60 = 0;
  lStack_d78 = 0;
  uStack_d80 = 0;
  uStack_d68 = 0;
  lStack_d70 = 0;
  uStack_d88 = 0;
  uStack_d90 = 0;
  lStack_da8 = 0;
  lStack_da0 = 0;
  uStack_d98 = 0;
  plVar31 = plVar26 + 0x15;
  uVar30 = *(undefined8 *)(*plVar31 + 0x18);
  FUN_10002b838(auStack_dc0,&UNK_10f4ba669);
  FUN_10054b97c(&pplStack_d10,uVar30,auStack_dc0);
  FUN_100864e7c();
  FUN_100864f9c(auStack_dc8,plVar26,&lStack_d58,plVar11);
  FUN_100865a38(plVar26[0x13],&lStack_d58,&pplStack_d10);
  lVar29 = plVar26[0xb];
  FUN_10002b838(&ppuStack_930,&UNK_10f4ba682);
  FUN_100865ba0(lVar29,&ppuStack_930,*(undefined1 *)(param_1 + 0x81));
  func_0x000107c60ca0(&ppuStack_930);
  lStack_de0 = 0;
  lStack_dd8 = 0;
  uStack_dd0 = 0;
  FUN_10065cf40(&lStack_de0,(lStack_d50 - lStack_d58) / 0xa8);
  lVar15 = lStack_d50;
  for (lVar29 = lStack_d58; lVar29 != lVar15; lVar29 = lVar29 + 0xa8) {
    if (*(char *)(lVar29 + 0x88) == '\x01') {
      lVar32 = *plVar31;
      ppuVar33 = &PTR_PTR_113278360;
      if (*(undefined ***)(lVar29 + 0x38) != (undefined **)0x0) {
        ppuVar33 = *(undefined ***)(lVar29 + 0x38);
      }
      ppuVar24 = &PTR_PTR_11326cb58;
      if ((undefined **)ppuVar33[3] != (undefined **)0x0) {
        ppuVar24 = (undefined **)ppuVar33[3];
      }
      FUN_100696384(&puStack_498,ppuVar24);
      func_0x00010885edd8(&ppuStack_930,lVar32,&puStack_498);
      func_0x000108663a10(&pplStack_458,&ppuStack_930);
      func_0x000108656820(&ppuStack_930);
      func_0x00010878b1c4();
      if (cStack_428 == '\x01') {
        FUN_10065d008(&lStack_de0,&pplStack_458);
      }
      func_0x0001086569a0(&pplStack_458);
    }
  }
  if (lStack_de0 != lStack_dd8) {
    func_0x00010878a518(plVar26,lStack_de0,lStack_dd8,1);
  }
  uVar28 = *(uint *)(param_1 + 0x10);
  func_0x0001006ae9b4(&ppuStack_930,plVar26 + 0x27);
  if ((uVar28 & 1) == 0) {
    uStack_900 = uStack_900 & 0xffffffffffffff00;
    auStack_8d0[0] = 0;
  }
  else {
    ppuVar33 = &PTR_PTR_113278338;
    if (*(undefined ***)(param_1 + 0x68) != (undefined **)0x0) {
      ppuVar33 = *(undefined ***)(param_1 + 0x68);
    }
    FUN_100865c14(auStack_e10,ppuVar33);
    FUN_100865d40(&uStack_900,auStack_e10);
  }
  bStack_8c8 = *(byte *)(param_1 + 0x81) | bVar2;
  uStack_8c7 = 0;
  if ((uVar28 & 1) != 0) {
    FUN_1005fce88(auStack_e00);
  }
  uStack_4c8 = 0;
  plStack_4d0 = (long *)0x0;
  ppuStack_4d8 = (undefined **)0x0;
  lStack_4e0 = 0;
  fStack_4c0 = 1.0;
  FUN_100865d64(&pplStack_458,*plVar31);
  func_0x00010066dab8(&puStack_510,&pplStack_458);
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_538 = 0;
  uStack_540 = (undefined *)0x0;
  uStack_528 = 0;
  uStack_530 = 0;
  while ((((bStack_4e8 & 1) != 0 || ((uStack_518 & 1) != 0)) && (puStack_510 != uStack_540))) {
    ppuVar33 = &puStack_510;
    func_0x00010878a760();
    FUN_10054f8dc(&puStack_498,ppuVar33);
    func_0x00010878ad98(&lStack_480,ppuVar33);
    ppuVar24 = &puStack_498;
    func_0x000108848654();
    ppuVar19 = ppuStack_4d8;
    if (ppuStack_4d8 != (undefined **)0x0) {
      uVar18 = (long)ppuStack_4d8 - 1;
      uVar28 = (uint)ppuStack_4d8;
      if (((ulong)ppuStack_4d8 & uVar18) == 0) {
        ppuVar33 = (undefined **)((ulong)(uVar28 - 1) & (ulong)ppuVar24);
      }
      else {
        ppuVar33 = ppuVar24;
        if (ppuStack_4d8 <= ppuVar24) {
          uVar25 = 0;
          if (uVar28 != 0) {
            uVar25 = (uint)ppuVar24 / uVar28;
          }
          ppuVar33 = (undefined **)(ulong)((uint)ppuVar24 - uVar25 * uVar28);
        }
      }
      plVar37 = *(long **)(lStack_4e0 + (long)ppuVar33 * 8);
      if (plVar37 != (long *)0x0) {
        do {
          while( true ) {
            plVar37 = (long *)*plVar37;
            if (plVar37 == (long *)0x0) goto LAB_1008635f8;
            ppuVar17 = (undefined **)plVar37[1];
            if (ppuVar17 != ppuVar24) break;
            uVar20 = (ulong)(plVar37 + 2);
            FUN_1006760a8(uVar20,&puStack_498);
            if ((uVar20 & 1) != 0) goto LAB_1008638b8;
          }
          if (((ulong)ppuVar19 & uVar18) == 0) {
            ppuVar17 = (undefined **)((ulong)ppuVar17 & uVar18);
          }
          else if (ppuVar19 <= ppuVar17) {
            uVar20 = 0;
            if (ppuVar19 != (undefined **)0x0) {
              uVar20 = (ulong)ppuVar17 / (ulong)ppuVar19;
            }
            ppuVar17 = (undefined **)((long)ppuVar17 - uVar20 * (long)ppuVar19);
          }
        } while (ppuVar17 == ppuVar33);
      }
    }
LAB_1008635f8:
    plVar37 = (long *)0x48;
    func_0x000107c60e20();
    uStack_4a0 = 0;
    *plVar37 = 0;
    plVar37[1] = (long)ppuVar24;
    plStack_4b0 = plVar37;
    pplStack_4a8 = &plStack_4d0;
    FUN_10054f8dc(plVar37 + 2,&puStack_498);
    lVar29 = lStack_470;
    plVar37[6] = uStack_478;
    plVar37[5] = lStack_480;
    uStack_478 = 0;
    lStack_470 = 0;
    lStack_480 = 0;
    plVar37[7] = lVar29;
    plVar37[8] = lStack_468;
    uStack_4a0 = CONCAT71(uStack_4a0._1_7_,1);
    if ((ppuVar19 == (undefined **)0x0) || (fStack_4c0 * (float)ppuVar19 < (float)(uStack_4c8 + 1)))
    {
      bVar8 = (undefined **)0x2 < ppuVar19;
      bVar10 = ppuVar19 == (undefined **)0x3;
      func_0x00010086bf3c((long)ppuVar19 << 1);
      ppuVar33 = extraout_x8_03;
      if (!bVar8 || bVar10) {
        ppuVar33 = extraout_x9;
      }
      if ((long)ppuVar33 - 1U == 0) {
        ppuVar33 = (undefined **)0x2;
      }
      else if (((ulong)ppuVar33 & (long)ppuVar33 - 1U) != 0) {
        func_0x000107c60c44();
      }
      ppuVar19 = ppuStack_4d8;
      if (ppuStack_4d8 < ppuVar33) {
LAB_1008636b4:
        if ((ulong)ppuVar33 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_10086412c;
        }
        lVar29 = (long)ppuVar33 << 3;
        func_0x000107c60e20(lVar29);
        func_0x00010878b080(&lStack_4e0,lVar29);
        for (ppuVar19 = (undefined **)0x0; ppuVar33 != ppuVar19;
            ppuVar19 = (undefined **)((long)ppuVar19 + 1)) {
          *(undefined8 *)(lStack_4e0 + (long)ppuVar19 * 8) = 0;
        }
        ppuStack_4d8 = ppuVar33;
        if (plStack_4d0 != (long *)0x0) {
          ppuVar19 = (undefined **)plStack_4d0[1];
          uVar20 = (long)ppuVar33 - 1;
          uVar18 = 0;
          if (ppuVar33 != (undefined **)0x0) {
            uVar18 = (ulong)ppuVar19 / (ulong)ppuVar33;
          }
          ppuVar17 = ppuVar19;
          if (ppuVar33 <= ppuVar19) {
            ppuVar17 = (undefined **)((long)ppuVar19 - uVar18 * (long)ppuVar33);
          }
          if (((ulong)ppuVar33 & uVar20) == 0) {
            ppuVar17 = (undefined **)((ulong)ppuVar19 & uVar20);
          }
          *(long ***)(lStack_4e0 + (long)ppuVar17 * 8) = &plStack_4d0;
          plVar22 = plStack_4d0;
          while (plVar21 = plVar22, plVar22 = (long *)*plVar21, plVar22 != (long *)0x0) {
            ppuVar19 = (undefined **)plVar22[1];
            if (((ulong)ppuVar33 & uVar20) == 0) {
              ppuVar19 = (undefined **)((ulong)ppuVar19 & uVar20);
            }
            else if (ppuVar33 <= ppuVar19) {
              uVar18 = 0;
              if (ppuVar33 != (undefined **)0x0) {
                uVar18 = (ulong)ppuVar19 / (ulong)ppuVar33;
              }
              ppuVar19 = (undefined **)((long)ppuVar19 - uVar18 * (long)ppuVar33);
            }
            if (ppuVar19 != ppuVar17) {
              if (*(long *)(lStack_4e0 + (long)ppuVar19 * 8) == 0) {
                *(long **)(lStack_4e0 + (long)ppuVar19 * 8) = plVar21;
                ppuVar17 = ppuVar19;
              }
              else {
                *plVar21 = *plVar22;
                *plVar22 = **(long **)(lStack_4e0 + (long)ppuVar19 * 8);
                **(undefined8 **)(lStack_4e0 + (long)ppuVar19 * 8) = plVar22;
                plVar22 = plVar21;
              }
            }
          }
        }
      }
      else if (ppuVar33 < ppuStack_4d8) {
        ppuVar17 = (undefined **)(long)((float)uStack_4c8 / fStack_4c0);
        if ((ppuStack_4d8 < (undefined **)0x3) ||
           (((ulong)ppuStack_4d8 & (long)ppuStack_4d8 - 1U) != 0)) {
          func_0x000107c60c44();
        }
        else if ((undefined **)0x1 < ppuVar17) {
          ppuVar17 = (undefined **)(1L << (-LZCOUNT((long)ppuVar17 + -1) & 0x3fU));
        }
        if (ppuVar33 <= ppuVar17) {
          ppuVar33 = ppuVar17;
        }
        if (ppuVar33 < ppuVar19) {
          if (ppuVar33 != (undefined **)0x0) goto LAB_1008636b4;
          func_0x00010878b080(&lStack_4e0,0);
          ppuStack_4d8 = (undefined **)0x0;
        }
      }
      ppuVar19 = ppuStack_4d8;
      if (((ulong)ppuStack_4d8 & (long)ppuStack_4d8 - 1U) == 0) {
        ppuVar33 = (undefined **)((ulong)((int)ppuStack_4d8 - 1) & (ulong)ppuVar24);
      }
      else {
        ppuVar33 = ppuVar24;
        if (ppuStack_4d8 <= ppuVar24) {
          uVar18 = 0;
          if (ppuStack_4d8 != (undefined **)0x0) {
            uVar18 = (ulong)ppuVar24 / (ulong)ppuStack_4d8;
          }
          ppuVar33 = (undefined **)((long)ppuVar24 - uVar18 * (long)ppuStack_4d8);
        }
      }
    }
    plVar22 = *(long **)(lStack_4e0 + (long)ppuVar33 * 8);
    if (plVar22 == (long *)0x0) {
      *plVar37 = (long)plStack_4d0;
      *(long ***)(lStack_4e0 + (long)ppuVar33 * 8) = &plStack_4d0;
      plStack_4d0 = plVar37;
      if (*plVar37 != 0) {
        ppuVar33 = *(undefined ***)(*plVar37 + 8);
        if (((ulong)ppuVar19 & (long)ppuVar19 - 1U) == 0) {
          ppuVar33 = (undefined **)((ulong)ppuVar33 & (long)ppuVar19 - 1U);
        }
        else if (ppuVar19 <= ppuVar33) {
          uVar18 = 0;
          if (ppuVar19 != (undefined **)0x0) {
            uVar18 = (ulong)ppuVar33 / (ulong)ppuVar19;
          }
          ppuVar33 = (undefined **)((long)ppuVar33 - uVar18 * (long)ppuVar19);
        }
        *(long **)(lStack_4e0 + (long)ppuVar33 * 8) = plVar37;
      }
    }
    else {
      *plVar37 = *plVar22;
      *plVar22 = (long)plVar37;
    }
    plStack_4b0 = (long *)0x0;
    uStack_4c8 = uStack_4c8 + 1;
    func_0x00010878b098(&plStack_4b0);
LAB_1008638b8:
    func_0x00010878adbc(&puStack_498);
    FUN_10066d8fc(&puStack_510);
  }
  FUN_100866068();
  func_0x000100866074();
  FUN_10066dcb8(&pplStack_458);
  uStack_e20 = 0;
  uStack_e18 = 0;
  uStack_e28 = 0;
  FUN_10065cf40(&uStack_e28,uStack_4c8);
  puStack_508 = (undefined *)0x0;
  puStack_510 = (undefined *)0x0;
  apuStack_500[0] = (undefined *)0x0;
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == 0) {
    lVar29 = 0;
  }
  else {
    if (iVar4 < 0) goto LAB_100864128;
    func_0x00010878aea4(&pplStack_458,(long)iVar4,0,apuStack_500);
    func_0x00010878b1f4();
    func_0x00010878b1a4();
    lVar29 = (long)*(int *)(param_1 + 0x50);
  }
  uVar18 = *(ulong *)(param_1 + 0x48);
  puVar35 = (ulong *)(param_1 + 0x48);
  if ((uVar18 & 1) != 0) {
    puVar35 = (ulong *)(uVar18 + 7);
  }
  puVar1 = puVar35 + lVar29;
  for (; plVar37 = plStack_4d0, puVar35 != puVar1; puVar35 = puVar35 + 1) {
    func_0x000108845fb8(&puStack_498,*puVar35);
    puVar27 = puStack_508;
    if ((uStack_478 & 1) != 0) {
      if (puStack_508 < apuStack_500[0]) {
        func_0x00010878ad98(puStack_508,&puStack_498);
        puVar27 = puVar27 + 0x20;
      }
      else {
        lVar29 = (long)puStack_508 - (long)puStack_510 >> 5;
        uVar18 = lVar29 + 1;
        if (uVar18 >> 0x3b != 0) {
          func_0x00010878ade4();
          goto LAB_10086412c;
        }
        uVar20 = (long)apuStack_500[0] - (long)puStack_510 >> 4;
        if (uVar20 <= uVar18) {
          uVar20 = uVar18;
        }
        if (0x7fffffffffffffdf < (ulong)((long)apuStack_500[0] - (long)puStack_510)) {
          uVar20 = 0x7ffffffffffffff;
        }
        func_0x00010878aea4(&pplStack_458,uVar20,lVar29,apuStack_500);
        func_0x00010878ad98(lStack_448,&puStack_498);
        lStack_448 = lStack_448 + 0x20;
        func_0x00010878b1f4();
        puVar27 = puStack_508;
        func_0x00010878b1a4();
      }
      ppuVar33 = ppuStack_4d8;
      puStack_508 = puVar27;
      if ((ppuStack_4d8 != (undefined **)0x0) && (uStack_4c8 != 0)) {
        ppuVar24 = &puStack_498;
        func_0x000108848654();
        uVar18 = (long)ppuVar33 - 1;
        if (((ulong)ppuVar33 & uVar18) == 0) {
          ppuVar19 = (undefined **)((ulong)ppuVar24 & uVar18);
        }
        else {
          ppuVar19 = ppuVar24;
          if (ppuVar33 <= ppuVar24) {
            uVar28 = 0;
            uVar25 = (uint)ppuVar33;
            if (uVar25 != 0) {
              uVar28 = (uint)ppuVar24 / uVar25;
            }
            ppuVar19 = (undefined **)(ulong)((uint)ppuVar24 - uVar28 * uVar25);
          }
        }
        pplVar36 = *(long ***)(lStack_4e0 + (long)ppuVar19 * 8);
        if (pplVar36 != (long **)0x0) {
LAB_100863a4c:
          while (pplVar36 = (long **)*pplVar36, pplVar36 != (long **)0x0) {
            ppuVar17 = (undefined **)pplVar36[1];
            if (ppuVar17 != ppuVar24) goto LAB_100863a74;
            pplVar13 = pplVar36 + 2;
            FUN_1006760a8(pplVar13,&puStack_498);
            if ((int)pplVar13 != 0) {
              ppuVar33 = (undefined **)pplVar36[1];
              uVar18 = (long)ppuStack_4d8 - 1;
              if (((ulong)ppuStack_4d8 & uVar18) == 0) {
                ppuVar33 = (undefined **)(uVar18 & (ulong)ppuVar33);
              }
              else if (ppuStack_4d8 <= ppuVar33) {
                uVar20 = 0;
                if (ppuStack_4d8 != (undefined **)0x0) {
                  uVar20 = (ulong)ppuVar33 / (ulong)ppuStack_4d8;
                }
                ppuVar33 = (undefined **)((long)ppuVar33 - uVar20 * (long)ppuStack_4d8);
              }
              plVar37 = *pplVar36;
              pplVar13 = *(long ***)(lStack_4e0 + (long)ppuVar33 * 8);
              do {
                pplVar23 = pplVar13;
                pplVar13 = (long **)*pplVar23;
              } while ((long **)*pplVar23 != pplVar36);
              if (pplVar23 == &plStack_4d0) {
LAB_100863b1c:
                if (plVar37 == (long *)0x0) {
LAB_100863b50:
                  *(undefined8 *)(lStack_4e0 + (long)ppuVar33 * 8) = 0;
                  plVar37 = *pplVar36;
                  goto LAB_100863b58;
                }
                ppuVar24 = (undefined **)plVar37[1];
                if (((ulong)ppuStack_4d8 & uVar18) == 0) {
                  ppuVar19 = (undefined **)((ulong)ppuVar24 & uVar18);
                }
                else {
                  ppuVar19 = ppuVar24;
                  if (ppuStack_4d8 <= ppuVar24) {
                    uVar20 = 0;
                    if (ppuStack_4d8 != (undefined **)0x0) {
                      uVar20 = (ulong)ppuVar24 / (ulong)ppuStack_4d8;
                    }
                    ppuVar19 = (undefined **)((long)ppuVar24 - uVar20 * (long)ppuStack_4d8);
                  }
                }
                if (ppuVar19 != ppuVar33) goto LAB_100863b50;
LAB_100863b60:
                if (((ulong)ppuStack_4d8 & uVar18) == 0) {
                  ppuVar24 = (undefined **)((ulong)ppuVar24 & uVar18);
                }
                else if (ppuStack_4d8 <= ppuVar24) {
                  uVar18 = 0;
                  if (ppuStack_4d8 != (undefined **)0x0) {
                    uVar18 = (ulong)ppuVar24 / (ulong)ppuStack_4d8;
                  }
                  ppuVar24 = (undefined **)((long)ppuVar24 - uVar18 * (long)ppuStack_4d8);
                }
                if (ppuVar24 != ppuVar33) {
                  *(long ***)(lStack_4e0 + (long)ppuVar24 * 8) = pplVar23;
                  plVar37 = *pplVar36;
                }
              }
              else {
                ppuVar24 = (undefined **)pplVar23[1];
                if (((ulong)ppuStack_4d8 & uVar18) == 0) {
                  ppuVar24 = (undefined **)((ulong)ppuVar24 & uVar18);
                }
                else if (ppuStack_4d8 <= ppuVar24) {
                  uVar20 = 0;
                  if (ppuStack_4d8 != (undefined **)0x0) {
                    uVar20 = (ulong)ppuVar24 / (ulong)ppuStack_4d8;
                  }
                  ppuVar24 = (undefined **)((long)ppuVar24 - uVar20 * (long)ppuStack_4d8);
                }
                if (ppuVar24 != ppuVar33) goto LAB_100863b1c;
LAB_100863b58:
                if (plVar37 != (long *)0x0) {
                  ppuVar24 = (undefined **)plVar37[1];
                  goto LAB_100863b60;
                }
              }
              *pplVar23 = plVar37;
              *pplVar36 = (long *)0x0;
              uStack_4c8 = uStack_4c8 - 1;
              lStack_448 = 1;
              pplStack_458 = pplVar36;
              pplStack_450 = &plStack_4d0;
              func_0x00010878b098(&pplStack_458);
              break;
            }
          }
        }
      }
    }
LAB_100863bc8:
    FUN_10066dc24(&puStack_498);
  }
  for (; plVar37 != (long *)0x0; plVar37 = (long *)*plVar37) {
    FUN_10065d008(&uStack_e28,plVar37 + 2);
  }
  FUN_100866080(*plVar31);
  puVar5 = puStack_508;
  for (puVar27 = puStack_510; puVar27 != puVar5; puVar27 = puVar27 + 0x20) {
    func_0x000107c29fcc(*plVar31,puVar27);
  }
  FUN_1008660f8(&puStack_510);
  FUN_100866140(&lStack_4e0);
  FUN_10065ad64(&lStack_da8,&uStack_e28);
  func_0x0001005fb56c(&uStack_e28);
  uVar28 = *(int *)((long)plVar26 + 0x124) - 1;
  if (uVar28 < 4) {
    plVar37 = (long *)(ulong)*(uint *)(&UNK_10dee0a70 + (ulong)uVar28 * 4);
  }
  else {
    plVar37 = (long *)0x0;
  }
  lVar29 = plVar26[0x13];
  func_0x0001002a8308(&puStack_498,*(ulong *)(param_1 + 0x60) & 0xfffffffffffffffc);
  (**(code **)(**(long **)(lVar29 + 0x10) + 0xb8))
            (&pplStack_458,*(long **)(lVar29 + 0x10),plVar37,&lStack_d58,&puStack_498,&pplStack_d10,
             &ppuStack_930,1);
  func_0x000100867b30(&uStack_d90,&pplStack_458);
  FUN_100867bf0(&pplStack_458);
  FUN_1001148fc(&puStack_498);
  FUN_10054cbac(&pplStack_d10);
  FUN_100868e10(&ppuStack_930);
  func_0x0001005fb56c(&lStack_de0);
  FUN_100868e54(auStack_dc8);
  FUN_10054d120(&pplStack_d10);
  FUN_100869044();
  uStack_910 = 0x48;
  func_0x000100864c30();
  FUN_10002b838(&puStack_510);
  func_0x000100864c3c();
  pppuVar12 = &ppuStack_930;
  FUN_1005504ac(pppuVar12,&puStack_510);
  (**(code **)(*plVar37 + 0x78))(plVar37,pppuVar12,(long)(uStack_d88 - uStack_d90) / 0x378);
  func_0x000107c60ca0(&puStack_510);
  func_0x000100864c50();
  FUN_100869044();
  uStack_910 = 0x49;
  func_0x000100864c30();
  FUN_10002b838(&uStack_540);
  func_0x000100864c3c();
  pppuVar12 = &ppuStack_930;
  FUN_1005504ac(pppuVar12,&uStack_540);
  (**(code **)(*plVar37 + 0x78))(plVar37,pppuVar12,lStack_d70 - lStack_d78 >> 5);
  func_0x000107c60ca0(&uStack_540);
  func_0x000100864c50();
  uVar7 = (char)plVar26[0x2d] != '\0';
  uVar9 = (char)plVar26[0x2d] == '\x01';
  if ((bool)uVar9) {
    FUN_1006a2668(plVar26[0xb]);
    uVar20 = uStack_d88;
    uVar18 = uStack_d90;
    func_0x00010086b73c(&pplStack_d10,plVar26[0xb],1);
    ppuStack_930 = (undefined **)CONCAT44(ppuStack_930._4_4_,8);
    ppplVar14 = &pplStack_d10;
    FUN_10086bd20(ppplVar14,&ppuStack_930);
    *ppplVar14 = (long **)((long)(uVar20 - uVar18) / 0x378);
    bVar3 = *(byte *)(plVar26 + 0x28);
    puVar34 = (undefined8 *)plVar26[0x25];
    func_0x00010086bf50(&pplStack_458,&pplStack_d10);
    ppuStack_490 = (undefined **)0x0;
    puStack_498 = (undefined *)0x0;
    lStack_488 = 0;
    plStack_4d0 = (long *)0x0;
    lStack_4e0 = 0;
    ppuStack_4d8 = (undefined **)0x0;
    FUN_10086bfc0(&ppuStack_930,&pplStack_458,&puStack_498,&lStack_4e0,
                  uVar20 == uVar18 & (bVar3 ^ 0xff),*(undefined1 *)(param_1 + 0x82));
    (**(code **)*puVar34)(puVar34,&uStack_d90,&lStack_d78,bVar2,&ppuStack_930);
    FUN_10086cf88(&ppuStack_930);
    func_0x0001005fb56c(&lStack_4e0);
    func_0x0001005fb56c(&puStack_498);
    func_0x00010086cfe4(&pplStack_458);
    uVar9 = lStack_da8 == lStack_da0;
    if (!(bool)uVar9) {
      func_0x000100864724();
      func_0x00010878b180(ppuStack_930);
      (*extraout_x8_04)();
      func_0x000100864c28();
    }
    func_0x000100864724();
    (**(code **)(*(long *)ppuStack_930[0x26] + 0x98))
              (ppuStack_930[0x26],*(undefined4 *)((long)plVar26 + 0xd4),(int)plVar26[0x1a],0x100,0);
    func_0x000100864c28();
    ppuStack_930 = (undefined **)((ulong)ppuStack_930 & 0xffffffffffffff00);
    uStack_908 = uStack_908 & 0xffffffffffffff00;
    FUN_1006a2aac(plVar26[0xb],&ppuStack_930);
    FUN_1006a5b38(&ppuStack_930);
    (**(code **)(*plVar26 + 0x28))(plVar26);
    func_0x00010086cfe4(&pplStack_d10);
  }
  else {
    FUN_10086906c(&lStack_d58,&uStack_d90,plVar11);
    uStack_928 = *(undefined8 *)(param_2 + 0x18);
    ppuStack_930 = *(undefined ***)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x18) != 0) {
      do {
        func_0x0001006aee88();
      } while (extraout_w10 != 0);
    }
    uStack_8f8 = uStack_d80;
    uStack_910._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x82),bVar2);
    uStack_900 = uStack_d88;
    uStack_908 = uStack_d90;
    uStack_d90 = 0;
    uStack_d88 = 0;
    lStack_8e8 = lStack_d70;
    lStack_8f0 = lStack_d78;
    uStack_d80 = 0;
    uStack_8e0 = uStack_d68;
    lStack_d70 = 0;
    uStack_d68 = 0;
    lStack_d78 = 0;
    uStack_8d8 = uStack_d60;
    plStack_920 = plVar26;
    plStack_918 = plVar11;
    func_0x0001005fad5c(auStack_8d0,&lStack_da8);
    uStack_d08 = *(undefined8 *)(param_2 + 0x18);
    pplStack_d10 = *(long ***)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x18) != 0) {
      do {
        func_0x0001006aee88();
      } while (extraout_w10_00 != 0);
    }
    plStack_d00 = plVar26;
    func_0x0001005fad5c(auStack_cf8,&lStack_da8);
    pplStack_458 = (long **)CONCAT44(pplStack_458._4_4_,0x120097);
    FUN_1008690e8();
    if ((bool)uVar7 && !(bool)uVar9) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined4 *)(&UNK_10dee0a70 + (extraout_x8_05 & 0xffffffff) * 4);
    }
    puStack_498 = (undefined *)CONCAT44(puStack_498._4_4_,uVar16);
    FUN_1008691d0(&lStack_4e0,plVar26 + 0x17,plVar26 + 0x13,plVar31,plVar26 + 0x11,&pplStack_458,
                  &puStack_498);
    lVar29 = lStack_4e0;
    pplStack_458 = (long **)FUN_10086b224;
    pplStack_450 = (long **)&PTR_FUN_110a6f490;
    lVar32 = 0x78;
    func_0x000107c60e20();
    lVar15 = lVar32;
    FUN_1008694a8();
    puStack_498 = &UNK_10878a8ec;
    ppuStack_490 = &PTR_FUN_110a6f4b0;
    lStack_448 = lVar32;
    func_0x0001006aeea0();
    FUN_100869560();
    lStack_488 = lVar15;
    FUN_1008695c0(lVar29,&lStack_d58,param_1 + 0x30,&pplStack_458,&puStack_498);
    FUN_10087078c();
    func_0x0001008707a0(pplStack_450);
    func_0x000100869440(&lStack_4e0);
    func_0x0001008706fc(&pplStack_d10);
    FUN_100870740(&ppuStack_930);
  }
  func_0x0001005fb56c(&lStack_da8);
  FUN_100867bf0(&uStack_d90);
  func_0x0001008670d0(&lStack_d58);
  FUN_1006b39e0(uStack_78);
  if ((bool)uVar9) {
    return;
  }
  func_0x000107c60e78();
LAB_100864128:
  func_0x00010878ade4();
LAB_10086412c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100864130);
  (*pcVar6)();
LAB_100863a74:
  if (((ulong)ppuVar33 & uVar18) == 0) {
    ppuVar17 = (undefined **)((ulong)ppuVar17 & uVar18);
  }
  else if (ppuVar33 <= ppuVar17) {
    uVar20 = 0;
    if (ppuVar33 != (undefined **)0x0) {
      uVar20 = (ulong)ppuVar17 / (ulong)ppuVar33;
    }
    ppuVar17 = (undefined **)((long)ppuVar17 - uVar20 * (long)ppuVar33);
  }
  if (ppuVar17 != ppuVar19) goto LAB_100863bc8;
  goto LAB_100863a4c;
}



/* Entry: 1008645bc; end: 1008645eb;  */

long FUN_1008645bc(long param_1)

{
  FUN_1008645f4(param_1,0xb5,0x14,1);
  if (param_1 < 1) {
    param_1 = 0x14;
  }
  return param_1;
}



/* Entry: 1008645ec; end: 1008645f3; -[MASConstraint .cxx_destruct] */

void FUN_1008645ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 1008645f4; end: 100864683;  */

undefined1  [16]
FUN_1008645f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined1 uStack_31;
  
  FUN_1004b5428(auStack_58);
  if ((bStack_40 & 1) == 0) {
    uVar2 = param_4 & 0xffffffffffffff00;
  }
  else {
    puVar1 = &uStack_31;
    FUN_100864684(puVar1,auStack_58,&uStack_60);
    uVar2 = param_4 & 0xffffffffffffff00;
    if ((int)puVar1 != 0) {
      param_4 = 1;
      param_3 = uStack_60;
      uVar2 = 0;
    }
  }
  FUN_1001148fc(auStack_58);
  auVar3._8_8_ = param_4 & 0xff | uVar2;
  auVar3._0_8_ = param_3;
  return auVar3;
}



/* Entry: 100864684; end: 10086470f;  */

undefined8 FUN_100864684(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint extraout_w8;
  ulong extraout_x8;
  undefined8 uVar1;
  undefined8 uStack_138;
  undefined1 auStack_130 [272];
  
  FUN_100552c0c(auStack_130,param_2,8);
  func_0x000107c60cc0(auStack_130,&uStack_138);
  FUN_100864710();
  if ((extraout_x8 & 5) == 0) {
    FUN_100552f2c(auStack_130);
    FUN_100864710();
    if ((extraout_w8 >> 1 & 1) != 0) {
      *param_3 = uStack_138;
      uVar1 = 1;
      goto LAB_1008646d4;
    }
  }
  uVar1 = 0;
LAB_1008646d4:
  func_0x0001005530d4(auStack_130);
  return uVar1;
}



/* Entry: 100864710; end: 10086474b;  */

void FUN_100864710(void)

{
  return;
}



/* Entry: 10086474c; end: 10086492b;  */

undefined1 * FUN_10086474c(undefined8 param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  code *extraout_x8_00;
  code *extraout_x9;
  undefined *puVar8;
  int iVar9;
  int extraout_w10;
  long unaff_x19;
  undefined **unaff_x20;
  long *plVar10;
  long *plVar11;
  undefined8 in_register_00005008;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  
  puVar6 = &uStack_110;
  func_0x000100864738();
  if (param_3 != 0) {
    FUN_100658238();
    plVar10 = *(long **)(*(long *)(param_2 + 0xd0) + 0x30);
    plVar10[1] = param_3;
    plVar11 = plVar10;
    (**(code **)(*plVar10 + 0x10))();
    if (*(byte *)(plVar10 + 3) == 1) {
      iVar9 = (int)plVar10[2];
    }
    else {
      iVar9 = 0;
    }
    uVar4 = iVar9 - (int)(unaff_x19 - (long)plVar11);
    uVar1 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar1 = uVar4;
    }
    in_ZR = uVar1 == 0xea61;
    if (60000 < uVar1) {
      if ((*(byte *)(plVar10 + 3) & 1) == 0) {
        *(undefined1 *)(plVar10 + 3) = 1;
      }
      plVar10[2] = unaff_x19 - (long)plVar11;
    }
    FUN_10086492c();
    func_0x000100864938();
    (*extraout_x9)(auStack_d0);
    if (lStack_b8 != 0) {
      plVar11 = *(long **)(unaff_x20[0x1a] + 0x110);
      func_0x0001086da1e8();
      uStack_110 = param_1;
      uStack_108 = in_register_00005008;
      if (extraout_x8 != 0) {
        do {
          FUN_100571a34();
        } while (extraout_w10 != 0);
      }
      func_0x0001086ac478(&stack0xffffffffffffff00,auStack_d0);
      puStack_a8 = &UNK_1086d75a8;
      func_0x0001086d7720(&ppuStack_a0,&uStack_110);
      func_0x0001086dad6c(*(undefined8 *)(*plVar11 + 0x10));
      func_0x0001086d9ec8(ppuStack_a0);
      func_0x0001086c6dd4(&uStack_110);
    }
    param_2 = auStack_d0;
    func_0x000100864b68(param_2);
    puVar8 = unaff_x20[0x1a];
    lVar7 = *(long *)(puVar8 + 0x1b0);
    if (lVar7 != 0) {
      uVar5 = *(undefined8 *)(puVar8 + 0x110);
      lStack_90 = *(long *)(puVar8 + 0x1b8);
      if (lStack_90 != 0) {
        plVar11 = (long *)(lStack_90 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = *plVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_108 = 0;
      unaff_x20 = &puStack_a8;
      puStack_a8 = (undefined *)0x100871164;
      ppuStack_a0 = &PTR_DAT_110a64c98;
      uStack_110 = 0;
      lStack_98 = lVar7;
      FUN_100571b00(uVar5);
      (*extraout_x8_00)();
      func_0x000100864c04(ppuStack_a0);
      func_0x0001005588dc(&uStack_110);
      param_2 = (undefined1 *)puVar6;
    }
  }
  func_0x000100864c10();
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100864c04(ppuStack_a0);
    func_0x0001005588dc(&uStack_110);
    func_0x0001086d9ff8();
    return *(undefined1 **)(unaff_x20[0x1a] + 0x230);
  }
  return param_2;
}



/* Entry: 10086492c; end: 100864943;  */

undefined8 FUN_10086492c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(*(long *)(unaff_x20 + 0xd0) + 0x230);
}



/* Entry: 100864944; end: 100864993;  */

void FUN_100864944(undefined8 *param_1,long param_2)

{
  func_0x00010055be84();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_1008649dc();
  FUN_100864a98();
  return;
}



/* Entry: 100864994; end: 1008649db;  */

void FUN_100864994(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_100864944(param_1,param_2 + 0x78);
  FUN_100864adc(param_2 + 0x78);
  if ((*(byte *)(param_2 + 0xa8) & 1) == 0) {
    *(undefined1 *)(param_2 + 0xa8) = 1;
  }
  *(undefined8 *)(param_2 + 0xa0) = param_3;
  return;
}



/* Entry: 1008649dc; end: 100864a7b;  */

void FUN_1008649dc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_1;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
    uVar2 = param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 < param_2) {
LAB_100864a24:
    if (param_2 == 0) {
      func_0x00010869a078(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar3 = param_1 + 8;
      func_0x00010869a090(lVar3);
      func_0x00010869a078(param_1,lVar3);
      func_0x00010869a470();
      uVar2 = extraout_x9;
      while (param_2 != uVar2) {
        func_0x00010869a4dc();
        uVar2 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x00010869a438();
        func_0x00010869a424();
        lVar3 = extraout_x8;
        plVar5 = extraout_x9_01;
        uVar2 = extraout_x10;
        uVar7 = extraout_x11;
        while (plVar4 = plVar5, plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
          uVar6 = plVar5[1];
          if ((param_2 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (param_2 <= uVar6) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar6 / param_2;
            }
            uVar6 = uVar6 - uVar1 * param_2;
          }
          if (uVar6 != uVar7) {
            if (*(long *)(lVar3 + uVar6 * 8) == 0) {
              *(long **)(lVar3 + uVar6 * 8) = plVar4;
              uVar7 = uVar6;
            }
            else {
              *plVar4 = *plVar5;
              func_0x00010869a394();
              lVar3 = extraout_x8_00;
              plVar5 = extraout_x9_02;
              uVar2 = extraout_x10_00;
              uVar7 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    func_0x00010869a498();
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x00010869a360();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar7) goto LAB_100864a24;
  }
  return;
}



/* Entry: 100864a7c; end: 100864a97;  */

void FUN_100864a7c(void)

{
  return;
}



/* Entry: 100864a98; end: 100864acf;  */

void FUN_100864a98(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x000100864a88();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x000108699d34();
  }
  return;
}



/* Entry: 100864ad0; end: 100864adb;  */

void FUN_100864ad0(void)

{
  return;
}



/* Entry: 100864adc; end: 100864b8f;  */

void FUN_100864adc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x000100864b30(param_1,param_1[2]);
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 100864b90; end: 100864baf;  */

void FUN_100864b90(void)

{
  return;
}



/* Entry: 100864bb0; end: 100864bd3;  */

undefined8 FUN_100864bb0(undefined8 param_1)

{
  func_0x000100864b98(param_1,0);
  return param_1;
}



/* Entry: 100864bd4; end: 100864c57;  */

void FUN_100864bd4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a64c98;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 100864c58; end: 100864ceb;  */

void FUN_100864c58(long *param_1,ulong param_2)

{
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0xa8) < param_2) {
    if (param_2 < 0x186186186186187) {
      func_0x0001086f83c4(auStack_48,param_2,(param_1[1] - *param_1) / 0xa8);
      func_0x0001086f8380(param_1,auStack_48);
      func_0x0001086f8594(auStack_48);
    }
    else {
      func_0x0001086f5748();
      func_0x0001086f8594(auStack_48);
      func_0x000108772ce8();
    }
  }
  return;
}



/* Entry: 100864cec; end: 100864cf7;  */

void FUN_100864cec(void)

{
  return;
}



/* Entry: 100864cf8; end: 100864d3f; -[SCCameraViewfinderRenderTargetImpl layoutSubviews] */

void FUN_100864cf8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7420;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x000107c3cc18(param_1);
  return;
}



/* Entry: 100864d40; end: 100864daf; -[SCCameraViewfinderRenderTargetImpl _updateLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100864d40(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c3ec60();
  func_0x000107c54b80(*(undefined8 *)(param_1 + _DAT_112720b9c));
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(*(undefined8 *)(param_1 + _DAT_112720b90));
  lVar1 = param_1 + _DAT_112720ba0;
  func_0x000107c61148(lVar1);
  func_0x000107c3ec60(param_1);
  func_0x000107c500fc(lVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100864db0; end: 100864e03; -[SCCameraViewfinderRenderAgentImpl renderTarget:didUpdateRect:] */

void FUN_100864db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c3af8c();
                    /* WARNING: Could not recover jumptable at 0x00010bea85d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,param_4,param_5,PTR_s__setTextureSizeIfNecessary__112587b18);
  return;
}



/* Entry: 100864e04; end: 100864e7b; -[SCCameraViewfinderRenderAgentImpl _cacheViewfinderSizeIfNecessary:] */

void FUN_100864e04(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  double dVar3;
  
  lVar1 = param_5;
  func_0x000107c3c7a0();
  if ((int)lVar1 != 0) {
    dVar3 = *(double *)(param_5 + 0xb8);
    if (dVar3 == 0.0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61180();
      func_0x000107c4d488();
      *(double *)(param_5 + 0xb8) = dVar3;
      func_0x000107c61170(puVar2);
      dVar3 = *(double *)(param_5 + 0xb8);
    }
    *(double *)(param_5 + 0xa8) = param_3 * dVar3;
    *(double *)(param_5 + 0xb0) = param_4 * dVar3;
  }
  return;
}



/* Entry: 100864e7c; end: 100864e87; -[SCCameraViewfinderRenderAgentImpl _shouldRenderAtOutputBufferSize] */

void FUN_100864e7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd59b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__bufferSizeRenderingEnabled_112553008);
  return;
}



/* Entry: 100864e88; end: 100864f2b; -[SCCameraViewfinderRenderAgentImpl _bufferSizeRenderingEnabled] */

undefined1 FUN_100864e88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c44f78();
  func_0x000107c61170(puVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100865e54;
  puStack_30 = &UNK_110848088;
  if (lRam00000001136b95d0 != -1) {
    puStack_28 = puVar2;
    FUN_10002a2fc(0x1136b95d0,&puStack_48);
  }
  return uRam00000001136b95c8;
}



/* Entry: 100864f2c; end: 100864f9b;  */

undefined1  [16] FUN_100864f2c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auStack_50 [31];
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  for (; param_1 != param_2; param_1 = param_1 + 0xa8) {
    func_0x000108772620(auStack_50,&uStack_31,param_1);
    func_0x0001086f51c0(&uStack_30,auStack_50);
    FUN_100100fec(auStack_50);
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 100864f9c; end: 10086503b;  */

void FUN_100864f9c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  FUN_100864f2c(*param_3,param_3[1],&uStack_50,0);
  plVar1 = *(long **)(*(long *)(param_2 + 0x98) + 0x10);
  (**(code **)(*plVar1 + 0x120))(auStack_60,plVar1,&uStack_50);
  FUN_100865974(param_1,auStack_60);
  FUN_1008659e4(auStack_60);
  func_0x000100864b68(&uStack_50);
  return;
}



/* Entry: 10086503c; end: 100865057;  */

void FUN_10086503c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100865048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x120))();
  return;
}



/* Entry: 100865058; end: 100865117;  */

void FUN_100865058(long param_1)

{
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar1;
  long extraout_x9;
  long lVar2;
  int extraout_w12;
  long unaff_x21;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010086504c();
  FUN_100865128(&lStack_50,(long *)(param_1 + 0x508));
  if (lStack_50 == 0) {
    FUN_1008651f8(&lStack_60);
    lStack_38 = lStack_48;
    lStack_40 = lStack_50;
    lStack_48 = lStack_58;
    lStack_50 = lStack_60;
    lStack_60 = 0;
    lStack_58 = 0;
    func_0x000100865280();
    FUN_100865288(&lStack_60);
    uVar1 = 0;
    lVar2 = lStack_50;
    if (lStack_48 != 0) {
      do {
        FUN_10055be54();
        uVar1 = extraout_x8_00;
        lVar2 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    lStack_60 = 0;
    lStack_58 = 0;
    lStack_38 = *(undefined8 *)(param_1 + 0x510);
    lStack_40 = *(long *)(param_1 + 0x508);
    *(long *)(unaff_x21 + 0x508) = lVar2;
    *(undefined8 *)(unaff_x21 + 0x510) = uVar1;
    func_0x0001008652b0(&lStack_40);
    func_0x0001008652b0(&lStack_60);
  }
  FUN_10086554c(extraout_x8,&lStack_50);
  FUN_100865288(&lStack_50);
  return;
}



/* Entry: 100865118; end: 100865127;  */

undefined8 FUN_100865118(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  return *(undefined8 *)(param_2 + 8);
}



/* Entry: 100865128; end: 100865153;  */

void FUN_100865128(long param_1)

{
  long unaff_x19;
  
  FUN_100865118();
  if (param_1 != 0) {
    func_0x000100869dc8();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      func_0x00010871f85c();
    }
  }
  return;
}



/* Entry: 100865154; end: 10086516b;  */

void FUN_100865154(void)

{
  return;
}



/* Entry: 10086516c; end: 1008651f7;  */

void FUN_10086516c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010086515c();
  uStack_28 = extraout_x8;
  FUN_100865234(auStack_40,1);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_110a68d40;
  puStack_30[1] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0x3f800000;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_10086525c(auStack_40);
  func_0x00010086526c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_1008651f8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10086516c(&uStack_51);
  return;
}



/* Entry: 1008651f8; end: 100865233;  */

void FUN_1008651f8(void)

{
  undefined1 uStack_11;
  
  FUN_10086516c(&uStack_11);
  return;
}



/* Entry: 100865234; end: 10086525b;  */

long FUN_100865234(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000100865218();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10086525c; end: 100865287;  */

void FUN_10086525c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100865288; end: 1008652d3;  */

long FUN_100865288(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1008652d4; end: 1008652eb;  */

void FUN_1008652d4(void)

{
  return;
}



/* Entry: 1008652ec; end: 1008654ef;  */

undefined1  [16] FUN_1008652ec(float param_1,float param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *unaff_x26;
  undefined1 auVar11 [16];
  long *in_stack_00000008;
  
  FUN_1008652d4();
  plVar7 = param_3 + 3;
  FUN_100865598();
  plVar10 = (long *)param_3[1];
  if (plVar10 != (long *)0x0) {
    uVar5 = (long)plVar10 - 1;
    if (((ulong)plVar10 & uVar5) == 0) {
      unaff_x26 = (long *)(uVar5 & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar10 <= plVar7) {
        uVar1 = 0;
        if (plVar10 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar10;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar1 * (long)plVar10);
      }
    }
    plVar9 = *(long **)(*param_3 + (long)unaff_x26 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_1008653ac;
          plVar8 = (long *)plVar9[1];
          if (plVar8 != plVar7) break;
          if (plVar9[2] == *param_4) {
            uVar4 = 0;
            goto LAB_1008654c4;
          }
        }
        if (((ulong)plVar10 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (plVar10 <= plVar8) {
          uVar1 = 0;
          if (plVar10 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)plVar10;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar10);
        }
      } while (plVar8 == unaff_x26);
    }
  }
LAB_1008653ac:
  FUN_1008655c8(&stack0x00000008);
  FUN_1008655d4();
  func_0x00010086567c();
  if ((plVar10 == (long *)0x0) || (param_2 * (float)plVar10 < param_1)) {
    bVar2 = (long *)0x2 < plVar10;
    bVar3 = plVar10 == (long *)0x3;
    func_0x000100865690((long)plVar10 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    FUN_1008656a4(param_3,uVar4);
    plVar10 = (long *)param_3[1];
    if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar10 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x26 = plVar7;
      if (plVar10 <= plVar7) {
        uVar5 = 0;
        if (plVar10 != (long *)0x0) {
          uVar5 = (ulong)plVar7 / (ulong)plVar10;
        }
        unaff_x26 = (long *)((long)plVar7 - uVar5 * (long)plVar10);
      }
    }
  }
  plVar9 = in_stack_00000008;
  lVar6 = *param_3;
  plVar7 = *(long **)(lVar6 + (long)unaff_x26 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_3 + 2;
    *in_stack_00000008 = *plVar7;
    *plVar7 = (long)in_stack_00000008;
    *(long **)(lVar6 + (long)unaff_x26 * 8) = plVar7;
    if (*in_stack_00000008 != 0) {
      plVar7 = *(long **)(*in_stack_00000008 + 8);
      if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar10 - 1U);
      }
      else if (plVar10 <= plVar7) {
        uVar5 = 0;
        if (plVar10 != (long *)0x0) {
          uVar5 = (ulong)plVar7 / (ulong)plVar10;
        }
        plVar7 = (long *)((long)plVar7 - uVar5 * (long)plVar10);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = in_stack_00000008;
    }
  }
  else {
    *in_stack_00000008 = *plVar7;
    *plVar7 = (long)in_stack_00000008;
  }
  in_stack_00000008 = (long *)0x0;
  param_3[3] = param_3[3] + 1;
  FUN_100865940(&stack0x00000008);
  uVar4 = 1;
LAB_1008654c4:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar9;
  return auVar11;
}



/* Entry: 1008654f0; end: 10086554b;  */

void FUN_1008654f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1008652ec(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 10086554c; end: 100865597;  */

undefined8 * FUN_10086554c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000100865528(*param_1,param_1);
  return param_1;
}



/* Entry: 100865598; end: 10086559f;  */

void FUN_100865598(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  FUN_1000df370(&uStack_18,8);
  return;
}



/* Entry: 1008655a0; end: 1008655c7;  */

void FUN_1008655a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1000df370(&uStack_18,8);
  return;
}



/* Entry: 1008655c8; end: 1008655d3;  */

void FUN_1008655c8(void)

{
  return;
}



/* Entry: 1008655d4; end: 100865633;  */

void FUN_1008655d4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_100865634(puVar1 + 2);
  FUN_100865640();
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 100865634; end: 10086563f;  */

void FUN_100865634(void)

{
  return;
}



/* Entry: 100865640; end: 10086566b;  */

undefined8 * FUN_100865640(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_1 = *param_2;
  FUN_100864944(param_1 + 1,param_3);
  return param_1;
}



/* Entry: 10086566c; end: 1008656a3;  */

void FUN_10086566c(void)

{
  return;
}



/* Entry: 1008656a4; end: 10086573f;  */

void FUN_1008656a4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  long *plVar6;
  long *plVar7;
  long *extraout_x11;
  long *plVar8;
  
  plVar2 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar2 = param_2;
  }
  plVar8 = (long *)param_1[1];
  if (param_2 <= plVar8) {
    if (param_2 < plVar8) {
      func_0x00010871ef30();
      if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else {
        func_0x00010871e9f4();
      }
      if (param_2 <= plVar2) {
        param_2 = plVar2;
      }
      if (param_2 < plVar8) goto LAB_1008656ec;
    }
    return;
  }
LAB_1008656ec:
  FUN_1008655c8();
  if (plVar3 == (long *)0x0) {
    FUN_100865910(plVar2);
    plVar2[1] = 0;
  }
  else {
    plVar8 = plVar2 + 1;
    FUN_100865740(plVar8);
    FUN_100865910(plVar2,plVar8);
    plVar2[1] = (long)plVar3;
    lVar4 = *plVar2;
    for (plVar8 = (long *)0x0; plVar3 != plVar8; plVar8 = (long *)((long)plVar8 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar8 * 8) = 0;
    }
    plVar8 = (long *)plVar2[2];
    if (plVar8 != (long *)0x0) {
      plVar6 = (long *)plVar8[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar7 = plVar6;
      if (plVar3 <= plVar6) {
        plVar7 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar7 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar2 + 2;
      while (plVar2 = plVar8, plVar8 = (long *)*plVar2, plVar8 != (long *)0x0) {
        plVar6 = (long *)plVar8[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (plVar3 <= plVar6) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar3;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar4 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar6 * 8) = plVar2;
            plVar7 = plVar6;
          }
          else {
            *plVar2 = *plVar8;
            func_0x00010871ef18();
            lVar4 = extraout_x8;
            plVar8 = extraout_x9;
            uVar5 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100865740; end: 10086575b;  */

void FUN_100865740(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_100865910(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_100865740(plVar3);
      FUN_100865910(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              func_0x00010871ef18();
              lVar1 = extraout_x8;
              plVar3 = extraout_x9;
              uVar5 = extraout_x10;
              uVar7 = extraout_x11;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 10086575c; end: 100865847;  */

void FUN_10086575c(long *param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  ulong uVar6;
  ulong uVar7;
  ulong extraout_x11;
  
  if (param_2 == 0) {
    FUN_100865910(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_100865740(plVar3);
    FUN_100865910(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            func_0x00010871ef18();
            lVar1 = extraout_x8;
            plVar3 = extraout_x9;
            uVar5 = extraout_x10;
            uVar7 = extraout_x11;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100865848; end: 10086590f; -[SCDevice iPhoneDeviceCluster] */

undefined8 FUN_100865848(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c41928();
  if (uVar1 == 2) {
    uVar1 = param_1;
    func_0x000107c4a418();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x000107c4a414();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x000107c4a410();
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x000107c4a40c();
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x000107c4a428();
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x000107c4a42c();
              if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000107c4a424(), (uVar1 & 1) == 0))
              {
                func_0x000107c4a420();
                uVar2 = 4;
                if ((int)param_1 != 0) {
                  uVar2 = 5;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 7;
            }
          }
          else {
            uVar2 = 8;
          }
        }
        else {
          uVar2 = 9;
        }
      }
      else {
        uVar2 = 10;
      }
    }
    else {
      uVar2 = 0xb;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 100865910; end: 10086593f;  */

void FUN_100865910(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100865940; end: 100865963;  */

undefined8 FUN_100865940(undefined8 param_1)

{
  func_0x000100865928(param_1,0);
  return param_1;
}



/* Entry: 100865964; end: 100865973;  */

void FUN_100865964(void)

{
  return;
}



/* Entry: 100865974; end: 1008659e3;  */

void FUN_100865974(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  func_0x000107c60e20();
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1008659e4; end: 100865a0b;  */

long FUN_1008659e4(long param_1)

{
  func_0x0001008659a8();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100865a0c; end: 100865a37;  */

void FUN_100865a0c(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_100865288(&uStack_20);
  return;
}



/* Entry: 100865a38; end: 100865a5f;  */

void FUN_100865a38(long param_1,long *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar5;
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [48];
  char cStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000100865a50(param_2,param_1 + 0x10,param_1,param_3);
  lVar3 = param_2[1];
  for (lVar5 = *param_2; lVar5 != lVar3; lVar5 = lVar5 + 0xa8) {
    ppuVar1 = &PTR_PTR_113278360;
    if (*(undefined ***)(lVar5 + 0x38) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar5 + 0x38);
    }
    ppuVar2 = &PTR_PTR_11326cb58;
    if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
      ppuVar2 = (undefined **)ppuVar1[3];
    }
    FUN_100696384(auStack_68,ppuVar2);
    func_0x00010885edd8(auStack_e8,*unaff_x20,auStack_68);
    func_0x000108663a10(auStack_a0,auStack_e8);
    func_0x000108656820(auStack_e8);
    if (cStack_70 == '\x01') {
      uVar4 = *unaff_x20;
      func_0x000107c2a02c(uVar4,auStack_a0);
      if ((int)uVar4 != 0) {
        FUN_10054f8dc(auStack_e8,auStack_a0);
        (**(code **)(*(long *)*unaff_x21 + 0xd0))((long *)*unaff_x21,auStack_e8);
        func_0x000107c2a00c(*unaff_x20,auStack_e8);
        func_0x0001086f9fc0();
      }
    }
    func_0x0001086569a0(auStack_a0);
    FUN_100100fec(auStack_68);
  }
  return;
}



/* Entry: 100865a60; end: 100865b9f;  */

void FUN_100865a60(long *param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar5;
  undefined1 auStack_e8 [72];
  undefined1 auStack_a0 [48];
  char cStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000100865a50();
  lVar3 = param_1[1];
  for (lVar5 = *param_1; lVar5 != lVar3; lVar5 = lVar5 + 0xa8) {
    ppuVar1 = &PTR_PTR_113278360;
    if (*(undefined ***)(lVar5 + 0x38) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(lVar5 + 0x38);
    }
    ppuVar2 = &PTR_PTR_11326cb58;
    if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
      ppuVar2 = (undefined **)ppuVar1[3];
    }
    FUN_100696384(auStack_68,ppuVar2);
    func_0x00010885edd8(auStack_e8,*unaff_x20,auStack_68);
    func_0x000108663a10(auStack_a0,auStack_e8);
    func_0x000108656820(auStack_e8);
    if (cStack_70 == '\x01') {
      uVar4 = *unaff_x20;
      func_0x000107c2a02c(uVar4,auStack_a0);
      if ((int)uVar4 != 0) {
        FUN_10054f8dc(auStack_e8,auStack_a0);
        (**(code **)(*(long *)*unaff_x21 + 0xd0))((long *)*unaff_x21,auStack_e8);
        func_0x000107c2a00c(*unaff_x20,auStack_e8);
        func_0x0001086f9fc0();
      }
    }
    func_0x0001086569a0(auStack_a0);
    FUN_100100fec(auStack_68);
  }
  return;
}



/* Entry: 100865ba0; end: 100865bef;  */

undefined8 FUN_100865ba0(void)

{
  undefined8 unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x0001005fe13c();
  FUN_100865bf0();
  func_0x0001006a5710();
  FUN_100635430();
  func_0x000107c60ca0(auStack_38);
  return unaff_x20;
}



/* Entry: 100865bf0; end: 100865c13;  */

void FUN_100865bf0(void)

{
  return;
}



/* Entry: 100865c14; end: 100865cb7;  */

undefined8 * FUN_100865c14(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  ppuVar1 = &PTR_PTR_11326cb58;
  if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_2 + 0x18);
  }
  FUN_100696384(&uStack_60,ppuVar1);
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  uStack_30 = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_28 = 1;
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_100606fd8(param_1 + 2,&uStack_40);
  FUN_1005fce88(&uStack_40);
  FUN_100100fec(&uStack_60);
  return param_1;
}



/* Entry: 100865cb8; end: 100865d3f; -[SCDevice isSimilarToIphone14orNewer] */

long FUN_100865cb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c41928();
  if (lVar1 == 2) {
    func_0x000107c446b4(param_1);
    func_0x000107c61180();
    lVar1 = param_1;
    FUN_10014f9e4();
    func_0x000107c61170(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 100865d40; end: 100865d5b;  */

void FUN_100865d40(long param_1)

{
  func_0x000100865d18();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 100865d5c; end: 100865d63;  */

void FUN_100865d5c(void)

{
  return;
}



/* Entry: 100865d64; end: 100865de3;  */

void FUN_100865d64(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100865de4();
  return;
}



/* Entry: 100865de4; end: 100865e07;  */

void FUN_100865de4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_10066d7a8();
  func_0x0001005ec788(param_1);
  FUN_10066d8a8(param_2,auStack_28);
  return;
}



/* Entry: 100865e08; end: 100865e53;  */

void FUN_100865e08(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_10066d8a8(param_1,auStack_28);
  return;
}



/* Entry: 100865e54; end: 100865e6b;  */

void FUN_100865e54(long param_1)

{
  bRam00000001136b95c8 = 7 < *(long *)(param_1 + 0x20);
  return;
}



/* Entry: 100865e6c; end: 100865f9b; -[SCCameraViewfinderRenderAgentImpl _setTextureSizeIfNecessary:] */

void FUN_100865e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = param_5;
  func_0x000107c3c7a0();
  if ((uVar1 & 1) == 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3010000000;
    pcStack_68 = "";
    func_0x000107c3ca60(param_1,param_2,param_3,param_4,param_5);
    uStack_60 = param_1;
    uStack_58 = param_2;
    func_0x000107c61144(auStack_88,param_5);
    uVar2 = *(undefined8 *)(param_5 + 0x48);
    func_0x000107c6111c(auStack_90,auStack_88);
    func_0x000107c4e524(uVar2);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
    func_0x000107c60bcc(&uStack_80,8);
  }
  return;
}



/* Entry: 100865f9c; end: 100866067; -[MASViewConstraint uninstall] */

/* WARNING: Possible PIC construction at 0x000100865fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100866048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100865fe8) */
/* WARNING: Removing unreachable block (ram,0x00010086604c) */

void FUN_100865f9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c497dc();
  func_0x000107c61180();
  func_0x000107c4abd4(param_1);
  func_0x000107c61180();
  func_0x000107c4febc(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100866068; end: 10086607f;  */

void FUN_100866068(void)

{
  if (*(char *)(((ulong)&stack0x00000920 | 8) + 0x20) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 100866080; end: 1008660f7;  */

void FUN_100866080(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000100620450();
  if ((bool)in_ZR) {
    FUN_1005ef0c4();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c341a0();
      func_0x000107c3427c();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c34314();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1006204d8(*(undefined8 *)(unaff_x19 + 0x20));
  return;
}



/* Entry: 1008660f8; end: 10086613f;  */

long * FUN_1008660f8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x20;
      FUN_100100fec();
    }
    param_1[1] = lVar2;
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 100866140; end: 10086618f;  */

long * FUN_100866140(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x00010878adbc(lVar1);
    func_0x00010878b148();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100866190; end: 1008661ab;  */

void FUN_100866190(void)

{
  return;
}



/* Entry: 1008661ac; end: 100866c97;  */

void FUN_1008661ac(long *param_1,int param_2,long *param_3,long param_4,undefined8 param_5,
                  undefined8 *param_6,int param_7)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined8 *extraout_x8;
  undefined **extraout_x8_00;
  undefined **extraout_x8_01;
  int iVar11;
  long lVar12;
  undefined8 uStack_ed0;
  uint uStack_ec8;
  undefined1 auStack_ec0 [8];
  undefined1 uStack_eb8;
  undefined7 uStack_eb7;
  undefined1 uStack_eb0;
  undefined4 uStack_eaf;
  uint uStack_eab;
  uint uStack_ea7;
  undefined1 uStack_e90;
  byte bStack_d08;
  byte bStack_c18;
  int iStack_bb8;
  byte bStack_b28;
  undefined1 auStack_b00 [24];
  undefined1 auStack_ae8 [432];
  int iStack_938;
  char cStack_934;
  byte bStack_930;
  undefined1 auStack_928 [24];
  undefined8 uStack_910;
  undefined5 uStack_908;
  undefined3 uStack_903;
  undefined5 uStack_900;
  char cStack_8f8;
  undefined1 auStack_8f0 [24];
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined1 uStack_8b8;
  undefined1 uStack_8b0;
  undefined1 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined4 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  long lStack_850;
  long lStack_848;
  undefined1 auStack_838 [24];
  long lStack_820;
  long lStack_818;
  undefined1 auStack_808 [32];
  undefined1 auStack_7e8 [24];
  undefined **ppuStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined4 uStack_778;
  undefined1 auStack_6a0 [24];
  undefined8 uStack_688;
  undefined1 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 uStack_668;
  undefined1 uStack_660;
  undefined1 uStack_658;
  undefined1 uStack_650;
  undefined1 uStack_648;
  undefined4 uStack_644;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined7 uStack_627;
  undefined1 uStack_620;
  undefined8 uStack_61f;
  undefined1 uStack_610;
  undefined1 uStack_608;
  undefined1 uStack_604;
  uint5 uStack_3e0;
  uint uStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [24];
  char cStack_3b0;
  undefined *puStack_2f8;
  int iStack_2f0;
  undefined4 uStack_2dc;
  char cStack_10;
  
  func_0x00010065d054();
  FUN_10007847c(auStack_7e8,&UNK_10f4b238b);
  if ((*param_3 == param_3[1]) && ((*(byte *)(param_4 + 0x18) & 1) == 0)) {
    *(undefined4 *)(extraout_x8 + 6) = 0;
    extraout_x8[3] = 0;
    extraout_x8[2] = 0;
    extraout_x8[5] = 0;
    extraout_x8[4] = 0;
    extraout_x8[1] = 0;
    *extraout_x8 = 0;
    goto LAB_100671834;
  }
  FUN_1005f6fa4(auStack_808,param_1 + 0xf);
  FUN_100866c98(&lStack_850,param_3);
  iVar11 = 0;
  uStack_860 = 0;
  uStack_868 = 0;
  uStack_858 = 0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_888 = 0;
  uStack_890 = 0;
  uStack_870 = 0x3f800000;
  uStack_8c0._0_1_ = 0;
  uStack_8b8 = 0;
  uStack_8b0 = 0;
  uStack_898 = 0;
  uStack_8d0 = 0;
  uStack_8d8 = 0;
  uStack_8c8 = 0;
  for (lVar7 = lStack_850; lVar12 = lStack_820, lVar7 != lStack_848; lVar7 = lVar7 + 0xa8) {
    bVar6 = *(undefined ***)(lVar7 + 0x38) == (undefined **)0x0;
    ppuVar1 = &PTR_PTR_113278360;
    if (!bVar6) {
      ppuVar1 = *(undefined ***)(lVar7 + 0x38);
    }
    func_0x00010871eeac(ppuVar1);
    ppuVar1 = &PTR_PTR_11326cb58;
    if (!bVar6) {
      ppuVar1 = extraout_x8_00;
    }
    FUN_100696384(auStack_8f0,ppuVar1);
    func_0x00010885edd8(&ppuStack_7d0,param_1[0x17],auStack_8f0);
    func_0x000108663a10(auStack_928,&ppuStack_7d0);
    func_0x000108656820(&ppuStack_7d0);
    auStack_b00[0] = 0;
    bStack_930 = 0;
    if (cStack_8f8 == '\x01') {
      func_0x00010871ed00(&ppuStack_7d0,param_1[0x17],auStack_8f0);
      FUN_10066baec(auStack_b00,&ppuStack_7d0);
      FUN_10066b97c(&ppuStack_7d0);
      if (((cStack_8f8 != '\x01') || ((bStack_930 & 1) == 0)) ||
         (cStack_934 == '\x01' && iStack_938 == 3)) goto LAB_100866368;
      bVar6 = false;
    }
    else {
LAB_100866368:
      FUN_10054f8dc(&uStack_ed0,auStack_8f0);
      uStack_eb8 = 0;
      uStack_eb0 = 0;
      uStack_eab = uStack_eab & 0xffffff;
      uStack_ea7 = uStack_ea7 & 0xffffff;
      if (cStack_8f8 == '\x01') {
        FUN_1006202b4(auStack_928,&uStack_ed0);
        uStack_908 = CONCAT41(uStack_eaf,uStack_eb0);
        uStack_910 = CONCAT71(uStack_eb7,uStack_eb8);
        uStack_903 = (undefined3)uStack_eab;
        uStack_900 = (undefined5)(CONCAT44(uStack_ea7,uStack_eab) >> 0x18);
      }
      else {
        func_0x000108656b70(auStack_928,&uStack_ed0);
        cStack_8f8 = '\x01';
      }
      func_0x00010885fef4(param_1[0x17],&uStack_ed0);
      func_0x0001006623a4(&uStack_3e0);
      iVar11 = iVar11 + 1;
      for (lVar12 = (long)*(int *)(lVar7 + 0x20) << 3; lVar12 != 0; lVar12 = lVar12 + -8) {
        uStack_7c8 = 0;
        ppuStack_7d0 = &PTR_DAT_110a8d288;
        uStack_7b8 = 0;
        uStack_7c0 = 0;
        uStack_7a8 = 0;
        uStack_7b0 = 0;
        uStack_798 = 0;
        uStack_7a0 = 0;
        uStack_788 = 0;
        uStack_790 = 0;
        uStack_77c = 0;
        uStack_778 = 0;
        uStack_784 = 0;
        uStack_780 = 0;
        func_0x0001086a505c(&ppuStack_7d0);
        func_0x000107c2a2ec();
        func_0x0001086a9d54(auStack_3c8);
        func_0x000107c2a3f4();
        FUN_10066c150(&ppuStack_7d0);
      }
      FUN_1005f6fa4(&ppuStack_7d0,auStack_8f0);
      func_0x0001086a506c(&uStack_3e0);
      FUN_1005ff214();
      FUN_1005f73a4(&ppuStack_7d0);
      func_0x0001086aab40(&uStack_3e0);
      func_0x000107c60ca4();
      iVar10 = *(int *)(lVar7 + 0x8c);
      uStack_2dc = *(undefined4 *)(lVar7 + 0xa0);
      if (iVar10 == 1) {
        ppuVar1 = &PTR_PTR_113278268;
        if (*(undefined ***)(lVar7 + 0x48) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(lVar7 + 0x48);
        }
        puStack_2f8 = ppuVar1[8];
      }
      iStack_2f0 = iVar10;
      if ((*(byte *)(lVar7 + 0x11) & 1) != 0) {
        func_0x000108713a94(&uStack_3e0);
        func_0x000107c2a2a8();
        iVar10 = *(int *)(lVar7 + 0x8c);
      }
      if (((char)param_1[0x32] == '\x01') && (iVar10 == 0)) {
        func_0x0001088413ec(&ppuStack_7d0);
        func_0x0001086a508c(&uStack_3e0);
        func_0x0001086a509c();
        FUN_10066bd14(&ppuStack_7d0);
      }
      FUN_10054f8dc(&ppuStack_7d0,auStack_8f0);
      FUN_100694450(&uStack_7b8,&uStack_3e0);
      FUN_10002b838(auStack_6a0,&DAT_10f4bdfe8);
      uStack_688 = *(undefined8 *)(lVar7 + 0x80);
      uStack_680 = 1;
      uStack_660 = 0;
      uStack_658 = 0;
      uStack_650 = 0;
      uStack_678 = 0;
      uStack_670 = 0;
      uStack_668 = 0;
      uStack_648 = 1;
      uStack_644 = 7;
      uStack_610 = 0;
      uStack_608 = 0;
      uStack_604 = 0;
      uStack_638 = 0;
      uStack_640 = 0;
      uStack_628 = 0;
      uStack_630 = 0;
      uStack_61f = 0;
      uStack_627 = 0;
      uStack_620 = 0;
      func_0x00010885ff98(param_1[0x17],&ppuStack_7d0);
      FUN_10066b5d4(&ppuStack_7d0);
      FUN_10066b614(&uStack_3e0);
      func_0x00010871f1d0();
      bVar6 = true;
    }
    if (param_7 == 0) {
      func_0x0001088660e8(&ppuStack_7d0,param_1[0x17],auStack_8f0);
      func_0x00010869148c(&uStack_3e0,&ppuStack_7d0);
      FUN_10065cae8(&ppuStack_7d0);
      if (cStack_10 == '\x01') {
        FUN_100657ca8(&uStack_ed0,&uStack_3e0);
      }
      else {
        func_0x000108845808(&uStack_ed0,auStack_8f0,lVar7);
        if (((bStack_b28 & 1) == 0) && (iStack_bb8 != 2)) {
          uStack_e90 = 1;
        }
      }
      FUN_10065cac8(&uStack_3e0);
    }
    else {
      func_0x0001087134f4(&uStack_ed0,auStack_8f0,param_1 + 0x17,1,lVar7,param_1 + 0x31);
    }
    if ((bStack_d08 & 1) == 0) {
      if (bVar6) {
        if (*(int *)(lVar7 + 0xa0) == 6) {
          func_0x0001087139d0(&uStack_8d8,&uStack_ed0);
        }
      }
      else if ((bStack_930 == 1 && iStack_bb8 == 2) && ((*(byte *)(lVar7 + 0x11) & 1) != 0)) {
        func_0x000108713a94(auStack_ae8);
        func_0x000107c2a2a8();
        func_0x00010885ff98(param_1[0x17],auStack_b00);
      }
      if (param_7 != 0) {
        func_0x00010871f19c(param_1[0x17]);
      }
      if (((*(byte *)(param_6 + 0xc) & 1) == 0) && ((bStack_c18 & 1) == 0)) {
        FUN_100867214(&uStack_8c0,CONCAT35((undefined3)uStack_eab,CONCAT41(uStack_eaf,uStack_eb0)),
                      &uStack_ed0);
      }
      func_0x0001086d6ea8(&uStack_868,&uStack_ed0);
    }
    FUN_100657324(&uStack_ed0);
    FUN_10066b97c(auStack_b00);
    func_0x0001086569a0(auStack_928);
    FUN_100100fec(auStack_8f0);
  }
  for (; lVar12 != lStack_818; lVar12 = lVar12 + 0x20) {
    FUN_100696384(&uStack_ed0,lVar12);
    func_0x00010885edd8(&ppuStack_7d0,param_1[0x17],&uStack_ed0);
    func_0x000108663a10(&uStack_3e0,&ppuStack_7d0);
    func_0x000108656820(&ppuStack_7d0);
    if (cStack_3b0 == '\x01') {
      func_0x000107c29fdc(param_1[0x17],&uStack_3e0);
      if (param_2 != 1) {
        plVar9 = param_1 + 0x31;
        func_0x000108713aa4();
        if (((ulong)plVar9 & 1) != 0) goto LAB_10086679c;
      }
      func_0x000107c2a00c(param_1[0x17],&uStack_3e0);
    }
LAB_10086679c:
    func_0x0001086569a0(&uStack_3e0);
    func_0x00010871f1d0();
  }
  FUN_100867108(param_1 + 0x97);
  FUN_100867108(param_1 + 0x9c);
  puVar2 = param_6 + 6;
  if (*(char *)(param_6 + 0xc) == '\0') {
    puVar2 = &uStack_8c0;
  }
  func_0x0001006ae9b4(&uStack_ed0,puVar2);
  if (*(char *)(param_4 + 0x18) == '\x01') {
    FUN_1006963ec(auStack_928,param_4);
    if ((*(char *)(param_6 + 1) == '\x01') && ((*(byte *)(param_6 + 0xd) & 1) == 0)) {
      uVar8 = *param_6;
      uVar3 = param_6[1];
      FUN_100606fd8(&ppuStack_7d0,param_6 + 2);
      uStack_3d8 = CONCAT31(uStack_3d8._1_3_,(char)uVar3);
      _uStack_3e0 = uVar8;
      FUN_100606fd8(auStack_3d0,&ppuStack_7d0);
      FUN_100867154();
      lVar7 = param_1[0xd];
      FUN_10054ea0c(lVar7,0x9d);
      uVar8 = uStack_ed0;
      if (((((int)lVar7 == 0) || (param_1[0x31] != 4)) ||
          ((*(byte *)((long)param_6 + 0x69) & 1) == 0)) ||
         (((uStack_ec8 & 1) == 0 || ((uStack_3d8 & 1) == 0)))) {
LAB_10086696c:
        FUN_1008671a4(&uStack_3e0,&uStack_ed0);
      }
      else {
        FUN_100606fd8(&ppuStack_7d0,auStack_ec0);
        uVar3 = _uStack_3e0;
        FUN_100606fd8(auStack_b00,auStack_3d0);
        func_0x0001086f7ea8(uVar8,&ppuStack_7d0,uVar3,auStack_b00);
        FUN_1005fce88(auStack_b00);
        FUN_100867154();
        if ((int)uVar8 == 0) goto LAB_10086696c;
        plVar9 = (long *)param_1[0x23];
        uStack_7c0 = 0;
        uStack_7b8 = 0;
        func_0x00010871e048();
        uStack_7c8 = 0;
        uStack_7b0 = CONCAT44(uStack_7b0._4_4_,0x69);
        ppuStack_7d0 = extraout_x8_01;
        (**(code **)(*plVar9 + 0x78))();
        FUN_1005505e4(&ppuStack_7d0);
        _uStack_3e0 = uStack_ed0;
        uStack_3d8 = CONCAT31(uStack_3d8._1_3_,(undefined1)uStack_ec8);
        func_0x000100620418(auStack_3d0,auStack_ec0);
      }
      FUN_100867298();
      FUN_10054f8dc(&uStack_7c8,auStack_928);
      uStack_7b0 = _uStack_3e0;
      uStack_7a8 = CONCAT71(uStack_7a8._1_7_,(char)uStack_3d8);
      FUN_100606fd8(&uStack_7a0,auStack_3d0);
      uStack_780 = (undefined4)param_1[0x31];
      uStack_77c = (undefined4)((ulong)param_1[0x31] >> 0x20);
      func_0x0001008672b0();
      FUN_10061fba0(&ppuStack_7d0);
      FUN_1005fce88(auStack_3d0);
    }
    else {
      FUN_100867298();
      FUN_10054f8dc(&uStack_7c8,auStack_928);
      uStack_7b0 = uStack_ed0;
      uStack_7a8 = CONCAT71(uStack_7a8._1_7_,(undefined1)uStack_ec8);
      FUN_100606fd8(&uStack_7a0,auStack_ec0);
      uStack_780 = (undefined4)param_1[0x31];
      uStack_77c = (undefined4)((ulong)param_1[0x31] >> 0x20);
      func_0x0001008672b0();
      FUN_10061fba0(&ppuStack_7d0);
    }
    FUN_100100fec(auStack_928);
  }
  FUN_100867af8(&uStack_ed0);
  uVar5 = (ulong)_uStack_3e0 >> 0x28;
  uVar4 = (uint)_uStack_3e0;
  uStack_3e0 = (uint5)(uVar4 & 0xffffff00);
  _uStack_3e0 = CONCAT35((int3)uVar5,uStack_3e0);
  (**(code **)(*param_1 + 0xc0))(&ppuStack_7d0,param_1,&uStack_868,&uStack_ed0,&uStack_3e0);
  extraout_x8[1] = uStack_7c8;
  *extraout_x8 = ppuStack_7d0;
  extraout_x8[2] = uStack_7c0;
  ppuStack_7d0 = (undefined **)0x0;
  uStack_7c8 = 0;
  uStack_7c0 = 0;
  FUN_100632dc0(extraout_x8 + 3,auStack_838);
  *(int *)(extraout_x8 + 6) = iVar11;
  func_0x00010063350c(&ppuStack_7d0);
  FUN_10065cc64(&uStack_8d8);
  FUN_100867af8(&uStack_8c0);
  FUN_1006a2498(&uStack_890);
  FUN_10065cc64(&uStack_868);
  FUN_100867b00(&lStack_850);
  FUN_1005f73a4(auStack_808);
LAB_100671834:
  FUN_100078bd8(auStack_7e8);
  return;
}



/* Entry: 100866c98; end: 100866df3;  */

void FUN_100866c98(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lVar4 = *param_2;
  lVar3 = param_2[1];
  FUN_100866e44();
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0xa8) {
    if (*(char *)(lVar4 + 0x88) == '\x01') {
      func_0x0001088467b8(auStack_a8,0,lVar4);
      func_0x000104bf1fd0(&uStack_70,auStack_a8);
      FUN_100100fec(auStack_a0);
      lVar1 = unaff_x23;
      if (*(long *)(lVar4 + 0x38) != 0) {
        lVar1 = *(long *)(lVar4 + 0x38);
      }
      lVar2 = unaff_x24;
      if (*(long *)(lVar1 + 0x18) != 0) {
        lVar2 = *(long *)(lVar1 + 0x18);
      }
      func_0x0001086f7b9c(&uStack_88,lVar2);
    }
    else {
      func_0x0001086f8248(&uStack_58,lVar4);
    }
  }
  FUN_100866ed4(param_1,&uStack_58);
  FUN_100632dc0(param_1 + 0x18,&uStack_70);
  FUN_100866f60(param_1 + 0x30,&uStack_88);
  func_0x000100867064(&uStack_88);
  func_0x000100633494(&uStack_70);
  func_0x0001008670d0(&uStack_58);
  return;
}



/* Entry: 100866df4; end: 100866dfb; -[SCMainCameraScreenRootUIContainerProviderImpl _bringSubviewToFront:] */

void FUN_100866df4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_bringSubviewToFront__1125a5e68);
  return;
}


