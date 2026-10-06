/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015ee048; end: 1015ee0e7;  */

void FUN_1015ee048(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if ((-1 < (long)uStack_48) &&
     (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5160();
    (*pcVar1)(&uStack_58,1,&UNK_110666f08,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015ee0e8);
  (*pcVar1)();
}



/* Entry: 1015ee0e8; end: 1015ee18b;  */

void FUN_1015ee0e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if (((long)uStack_48 < 0) &&
     (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    uStack_48 = uStack_48 & 0x7fffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d51e0();
    (*pcVar1)(&uStack_58,2,&UNK_1103ed2f8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015ee18c);
  (*pcVar1)();
}



/* Entry: 1015ee18c; end: 1015ee1cf;  */

void FUN_1015ee18c(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0xf000000000000007;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 1015ee1d0; end: 1015ee1ff;  */

undefined1  [16] FUN_1015ee1d0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1015ee200; end: 1015ee233;  */

void FUN_1015ee200(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1015ee234; end: 1015ee247;  */

undefined1  [16] FUN_1015ee234(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1015ee244;
  return auVar1;
}



/* Entry: 1015ee248; end: 1015ee25b;  */

void FUN_1015ee248(void)

{
  FUN_1015edc14();
  return;
}



/* Entry: 1015ee25c; end: 1015ee293;  */

void FUN_1015ee25c(void)

{
  FUN_1015edfc0();
  return;
}



/* Entry: 1015ee294; end: 1015ee297;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015ee294(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015ee298; end: 1015ee2cf;  */

uint FUN_1015ee298(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1015efc40();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015ee2d0; end: 1015ee317;  */

uint FUN_1015ee2d0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_1015ee5ac(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015ee318; end: 1015ee3b7;  */

/* WARNING: Possible PIC construction at 0x0001015ee364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015ee374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015ee368) */
/* WARNING: Removing unreachable block (ram,0x0001015ee378) */

void FUN_1015ee318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8de0 != -1) {
    func_0x000107c61568(0x112db8de0,FUN_1015edbcc);
  }
  uVar5 = uRam0000000113801130;
  uVar4 = uRam0000000113801128;
  uVar3 = uRam0000000113801120;
  uVar2 = uRam0000000113801118;
  uVar1 = uRam0000000113801110;
  *param_1 = uRam0000000113801108;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015ee3b8; end: 1015ee3f3;  */

void FUN_1015ee3b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8e18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8e18,&UNK_10d969ab0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015ee3f4; end: 1015ee4f7;  */

void FUN_1015ee3f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015ee4f8; end: 1015ee53f;  */

uint FUN_1015ee4f8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015ee5ac(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015ee540; end: 1015ee5ab;  */

void FUN_1015ee540(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,code *UNRECOVERED_JUMPTABLE)

{
  if ((((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((param_3 & 0xf000000000000007) == 0x7000000000000007)) {
    return;
  }
  (*param_6)();
                    /* WARNING: Could not recover jumptable at 0x0001015ee5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_4,param_5);
  return;
}



/* Entry: 1015ee5ac; end: 1015eed37;  */

uint FUN_1015ee5ac(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar9 = param_1[1];
  uVar7 = *param_1;
  uVar5 = param_1[2];
  uVar10 = param_2[1];
  uVar8 = *param_2;
  uVar6 = param_2[2];
  bVar1 = ((uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  bVar2 = ((uVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0;
  uStack_a0 = uVar8;
  uStack_98 = uVar10;
  uStack_90 = uVar6;
  uStack_80 = uVar7;
  uStack_78 = uVar9;
  uStack_70 = uVar5;
  if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     ((uVar5 & 0xf000000000000007) == 0xf000000000000007)) {
    if (bVar1 || bVar2) {
LAB_1015ee680:
      FUN_1015efd2c(&uStack_80,auStack_b8,0x112db8e40,&UNK_10d969b30);
      FUN_1015efd2c(&uStack_a0,auStack_b8,0x112db8e40,&UNK_10d969b30);
      FUN_10155470c(uVar7,uVar9,uVar5);
      uVar7 = uVar8;
      uVar9 = uVar10;
      uVar5 = uVar6;
LAB_1015ee6d4:
      FUN_10155470c(uVar7,uVar9,uVar5);
LAB_1015ee6d8:
      uVar3 = 0;
      goto LAB_1015ee834;
    }
    FUN_1015efd2c(&uStack_80,auStack_b8,0x112db8e40,&UNK_10d969b30);
    FUN_1015efd2c(&uStack_a0,auStack_b8,0x112db8e40,&UNK_10d969b30);
    FUN_10155470c(uVar7,uVar9,uVar5);
  }
  else {
    if (!bVar1 && !bVar2) goto LAB_1015ee680;
    uVar4 = uVar7;
    if ((long)uVar5 < 0) {
      if (-1 < (long)uVar6) goto LAB_1015ee74c;
      FUN_1015efd2c(&uStack_80,auStack_b8,0x112db8e40,&UNK_10d969b30);
      FUN_1015efd2c(&uStack_a0,auStack_b8,0x112db8e40,&UNK_10d969b30);
      FUN_101646fd8(uVar7,uVar9,uVar5 & 0x7fffffffffffffff,uVar8,uVar10,uVar6 & 0x7fffffffffffffff);
    }
    else {
      if ((long)uVar6 < 0) {
LAB_1015ee74c:
        FUN_1015efd2c(&uStack_80,auStack_b8,0x112db8e40,&UNK_10d969b30);
        FUN_1015efd2c(&uStack_a0,auStack_b8,0x112db8e40,&UNK_10d969b30);
        FUN_10155470c(uVar8,uVar10,uVar6);
        goto LAB_1015ee6d4;
      }
      FUN_1015efd2c(&uStack_80,auStack_b8,0x112db8e40,&UNK_10d969b30);
      FUN_1015efd2c(&uStack_a0,auStack_b8,0x112db8e40,&UNK_10d969b30);
      func_0x000103586e1c(uVar7,uVar9,uVar5,uVar8,uVar10,uVar6);
    }
    FUN_10155470c(uVar8,uVar10,uVar6);
    FUN_10155470c(uVar7,uVar9,uVar5);
    if ((uVar4 & 1) == 0) goto LAB_1015ee6d8;
  }
  uVar7 = param_1[3];
  FUN_100e25fcc(uVar7,param_1[4],param_2[3],param_2[4]);
  uVar3 = (uint)uVar7;
LAB_1015ee834:
  return uVar3 & 1;
}



/* Entry: 1015eed38; end: 1015eedb7;  */

void FUN_1015eed38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8dd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9698b8;
  func_0x000107c61520(&UNK_10d9698b8,&UNK_1103e5f90);
  puRam0000000112db8dd8 = puVar1;
  return;
}



/* Entry: 1015eedb8; end: 1015eeddb;  */

void FUN_1015eedb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015eeddc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015eeddc; end: 1015eee1b;  */

void FUN_1015eeddc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969890;
  func_0x000107c61520(&UNK_10d969890,&UNK_1103e5f90);
  puRam0000000112db8df0 = puVar1;
  return;
}



/* Entry: 1015eee1c; end: 1015eee33;  */

void FUN_1015eee1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015eed38();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015d53e0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015eee34; end: 1015eee73;  */

void FUN_1015eee34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8df8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9698f8;
  func_0x000107c61520(&UNK_10d9698f8,&UNK_1103e5f90);
  puRam0000000112db8df8 = puVar1;
  return;
}



/* Entry: 1015eee74; end: 1015eee97;  */

void FUN_1015eee74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015eee98();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015eee98; end: 1015eeed7;  */

void FUN_1015eee98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d969968;
  func_0x000107c61520(&UNK_10d969968,&UNK_1103e6020);
  puRam0000000112db8e00 = puVar1;
  return;
}



/* Entry: 1015eeed8; end: 1015eeeeb;  */

void FUN_1015eeed8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1015eed78)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015eef1c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015eeeec; end: 1015eef1b;  */

void FUN_1015eeeec(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015eef1c; end: 1015eef5b;  */

void FUN_1015eef1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d969920;
  func_0x000107c61520(&DAT_10d969920,&UNK_1103e6020);
  puRam0000000112db8e08 = puVar1;
  return;
}



/* Entry: 1015eef5c; end: 1015eef5f;  */

void FUN_1015eef5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9699d0;
  func_0x000107c61520(&UNK_10d9699d0,&UNK_1103e6020);
  puRam0000000112db8e10 = puVar1;
  return;
}



/* Entry: 1015eef60; end: 1015eef9f;  */

void FUN_1015eef60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9699d0;
  func_0x000107c61520(&UNK_10d9699d0,&UNK_1103e6020);
  puRam0000000112db8e10 = puVar1;
  return;
}



/* Entry: 1015eefa0; end: 1015ef037;  */

/* WARNING: Possible PIC construction at 0x0001015eefc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015eefc8) */
/* WARNING: Removing unreachable block (ram,0x0001015eefd8) */
/* WARNING: Removing unreachable block (ram,0x0001015eefe0) */
/* WARNING: Removing unreachable block (ram,0x0001015eeffc) */
/* WARNING: Removing unreachable block (ram,0x0001015ef000) */
/* WARNING: Removing unreachable block (ram,0x0001015ef02c) */
/* WARNING: Removing unreachable block (ram,0x0001015ef004) */
/* WARNING: Removing unreachable block (ram,0x0001015ef00c) */
/* WARNING: Removing unreachable block (ram,0x0001015ef010) */
/* WARNING: Removing unreachable block (ram,0x0001015ef014) */
/* WARNING: Removing unreachable block (ram,0x0001015ef01c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015eefa0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015ef038; end: 1015ef433;  */

undefined8 * FUN_1015ef038(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar3,uVar5);
  param_1[4] = uVar3;
  param_1[5] = uVar5;
  uVar2 = param_2[9];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[6] = param_2[6];
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    uVar3 = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[8] = uVar3;
    param_1[9] = uVar2;
  }
  else {
    uVar3 = param_2[6];
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
  }
  uVar2 = param_2[0xb];
  uVar1 = param_2[0xc];
  if (((uVar2 & 0x3000000000000000) == 0x3000000000000000) &&
     ((uVar1 & 0xf000000000000007) == 0x7000000000000007)) {
    uVar3 = param_2[10];
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
    param_1[0xe] = param_2[0xe];
  }
  else {
    if (((uVar2 & 0x3000000000000000) == 0x3000000000000000) &&
       ((uVar1 & 0xf000000000000007) == 0xf000000000000007)) {
      uVar3 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar3;
      param_1[0xc] = param_2[0xc];
    }
    else {
      uVar3 = param_2[10];
      FUN_1015546e8(uVar3,uVar2,uVar1);
      param_1[10] = uVar3;
      param_1[0xb] = uVar2;
      param_1[0xc] = uVar1;
    }
    uVar3 = param_2[0xd];
    uVar4 = param_2[0xe];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
  }
  return param_1;
}



/* Entry: 1015ef434; end: 1015ef633;  */

undefined8 FUN_1015ef434(undefined8 param_1)

{
  (*(code *)&DAT_10460e114)();
  return param_1;
}



/* Entry: 1015ef634; end: 1015ef6e7;  */

int FUN_1015ef634(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015ef6e8; end: 1015ef72f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015ef6e8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (param_1[2] & 0xf000000000000007) != 0xf000000000000007) {
    FUN_101554730(*param_1);
  }
  uVar1 = param_1[3];
  uVar2 = (uint)((ulong)param_1[4] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[4] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015ef730; end: 1015ef8cf;  */

undefined8 * FUN_1015ef730(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  if (((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      (uVar2 & 0xf000000000000007) == 0xf000000000000007) {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[2] = param_2[2];
  }
  else {
    uVar4 = *param_2;
    FUN_1015546e8(uVar4,uVar1,uVar2);
    *param_1 = uVar4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  uVar4 = param_2[3];
  uVar3 = param_2[4];
  func_0x00010006c00c(uVar4,uVar3);
  param_1[3] = uVar4;
  param_1[4] = uVar3;
  return param_1;
}



/* Entry: 1015ef8d0; end: 1015ef96b;  */

undefined8 * FUN_1015ef8d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (((param_1[1] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (param_1[2] & 0xf000000000000007) != 0xf000000000000007) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    if (((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
        (uVar2 & 0xf000000000000007) != 0xf000000000000007) {
      uVar4 = *param_1;
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      FUN_101554730(uVar4);
      goto LAB_1015ef94c;
    }
    func_0x0001015ef468(param_1);
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
LAB_1015ef94c:
  uVar4 = param_1[3];
  uVar3 = param_1[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  func_0x00010006c090(uVar4,uVar3);
  return param_1;
}



/* Entry: 1015ef96c; end: 1015efa5b;  */

int FUN_1015ef96c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fd < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0x1fe;
  }
  uVar3 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3 |
          ((uint)*(undefined8 *)(param_1 + 4) & 7) << 2 | uVar3 >> 0x17 & 0xe0;
  iVar2 = 0x1fe - (uVar3 >> 0x1f | uVar1 << 1);
  if (uVar1 == 0) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1015efa5c; end: 1015efaf7;  */

undefined8 * FUN_1015efa5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_1015546e8(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Entry: 1015efaf8; end: 1015efb37;  */

undefined8 * FUN_1015efaf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_101554730(uVar3,uVar1,uVar2);
  return param_1;
}



/* Entry: 1015efb38; end: 1015efc3f;  */

int FUN_1015efb38(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x1fe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x1ff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          ((uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x3c) & 3 |
           ((uint)*(undefined8 *)(param_1 + 4) & 7) << 2 | uVar1 >> 0x17 & 0xe0) << 1) ^ 0x1ff;
  if (0x1fd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015efc40; end: 1015efcbf;  */

void FUN_1015efc40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96993c;
  func_0x000107c61520(&DAT_10d96993c,&UNK_1103e6020);
  puRam0000000112db8e20 = puVar1;
  return;
}



/* Entry: 1015efcc0; end: 1015efceb;  */

void FUN_1015efcc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return;
  }
  return;
}



/* Entry: 1015efcec; end: 1015efd2b;  */

void FUN_1015efcec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd1f550;
  func_0x000107c61520(&DAT_10dd1f550,&UNK_11078f958);
  puRam0000000112db8e38 = puVar1;
  return;
}



/* Entry: 1015efd2c; end: 1015efd73;  */

undefined8 FUN_1015efd2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015efd74; end: 1015efdbf;  */

long FUN_1015efd74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015efdc0; end: 1015efe07;  */

void FUN_1015efdc0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d969f60,0x66,2);
  uRam0000000113801140 = uStack_38;
  uRam0000000113801138 = uStack_40;
  uRam0000000113801150 = uStack_28;
  uRam0000000113801148 = uStack_30;
  uRam0000000113801160 = uStack_18;
  uRam0000000113801158 = uStack_20;
  return;
}



/* Entry: 1015efe08; end: 1015eff67;  */

/* WARNING: Removing unreachable block (ram,0x0001015eff58) */

void FUN_1015efe08(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_1015efe80;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_110790a00;
LAB_1015eff44:
          (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1015f2abc();
          lVar2 = unaff_x20 + 0x58;
          puVar3 = &UNK_1103e6410;
          goto LAB_1015eff44;
        }
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 5) {
            if (lVar1 != 6) goto LAB_1015efe90;
            pcVar4 = *(code **)(param_3 + 0x198);
            FUN_1015f2be8();
            lVar2 = unaff_x20 + 0xb0;
            puVar3 = &UNK_1103e6498;
            goto LAB_1015eff44;
          }
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_1015efe80:
        (*pcVar4)();
      }
LAB_1015efe90:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1015eff68; end: 1015f0087;  */

void FUN_1015eff68(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_1015f0088(), unaff_x21 == 0)) {
    FUN_1015f0110();
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,4,param_2,param_3);
    }
    uVar2 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,5,param_2,param_3);
    }
    FUN_1015f01b8();
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 1015f0088; end: 1015f010f;  */

void FUN_1015f0088(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f0110; end: 1015f01b7;  */

void FUN_1015f0110(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_90 = *(ulong *)(param_1 + 0x60);
  if (uStack_90 >> 0x3c < 0xf) {
    uStack_98 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x80);
    uStack_78 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    uStack_68 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0xa0);
    uStack_58 = *(undefined8 *)(param_1 + 0x98);
    uStack_48 = *(undefined8 *)(param_1 + 0xa8);
    uStack_80 = *(undefined8 *)(param_1 + 0x70);
    uStack_88 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015f2abc();
    (*pcVar1)(&uStack_98,3,&UNK_1103e6410,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f01b8; end: 1015f025b;  */

void FUN_1015f01b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_60 = *(ulong *)(param_1 + 0xb8);
  uStack_58 = *(ulong *)(param_1 + 0xc0);
  if (((uStack_60 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (uStack_58 & 0xf000000000000007) != 0x7000000000000007) {
    uStack_68 = *(undefined8 *)(param_1 + 0xb0);
    uStack_48 = *(undefined8 *)(param_1 + 0xd0);
    uStack_50 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015f2be8();
    (*pcVar1)(&uStack_68,6,&UNK_1103e6498,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f025c; end: 1015f02e3;  */

uint FUN_1015f025c(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined1 auStack_388 [40];
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
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
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
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
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
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
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar4 = *param_1;
  if ((uVar4 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar4 & 1) == 0))
  goto LAB_1015f254c;
  uVar8 = param_1[9];
  uVar4 = param_1[8];
  uVar6 = param_1[10];
  uVar10 = param_2[9];
  uVar9 = param_2[8];
  uVar7 = param_2[10];
  uStack_110 = uVar9;
  uStack_108 = uVar10;
  uStack_100 = uVar7;
  uStack_f0 = uVar4;
  uStack_e8 = uVar8;
  uStack_e0 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar7 >> 0x3c) goto LAB_1015f23a0;
    if (uVar4 == uVar9) {
      func_0x0001015f45ac(&uStack_f0,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
      func_0x0001015f45ac(&uStack_110,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
      uVar9 = uVar8;
      FUN_100e25fcc(uVar8,uVar6,uVar10,uVar7);
      func_0x000100cb6648(uVar4,uVar10,uVar7);
      if ((uVar9 & 1) != 0) goto LAB_1015f2240;
    }
    else {
      func_0x0001015f45ac(&uStack_f0,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
      func_0x0001015f45ac(&uStack_110,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
      func_0x000100cb6648(uVar9,uVar10,uVar7);
    }
LAB_1015f2548:
    func_0x000100cb6648(uVar4,uVar8,uVar6);
  }
  else {
    if (uVar7 >> 0x3c < 0xf) {
LAB_1015f23a0:
      func_0x0001015f45ac(&uStack_f0,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
      func_0x0001015f45ac(&uStack_110,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
      func_0x000100cb6648(uVar4,uVar8,uVar6);
      uVar4 = uVar9;
      uVar8 = uVar10;
      uVar6 = uVar7;
      goto LAB_1015f2548;
    }
    func_0x0001015f45ac(&uStack_f0,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
    func_0x0001015f45ac(&uStack_110,&uStack_2b0,0x112db6f48,&UNK_10d969b40);
LAB_1015f2240:
    FUN_100cb6644(uVar4,uVar8,uVar6);
    uStack_148 = param_1[0x10];
    uStack_150 = param_1[0xf];
    uStack_138 = param_1[0x12];
    uStack_140 = param_1[0x11];
    uStack_128 = param_1[0x14];
    uStack_130 = param_1[0x13];
    uStack_168 = param_1[0xc];
    uStack_170 = param_1[0xb];
    uStack_158 = param_1[0xe];
    uStack_160 = param_1[0xd];
    uStack_1a8 = param_2[0x10];
    uStack_1b0 = param_2[0xf];
    uStack_198 = param_2[0x12];
    uStack_1a0 = param_2[0x11];
    uStack_188 = param_2[0x14];
    uStack_190 = param_2[0x13];
    uStack_1c8 = param_2[0xc];
    uStack_1d0 = param_2[0xb];
    uStack_1b8 = param_2[0xe];
    uStack_1c0 = param_2[0xd];
    uStack_288 = param_1[0x10];
    uStack_290 = param_1[0xf];
    uStack_278 = param_1[0x12];
    uStack_280 = param_1[0x11];
    uStack_268 = param_1[0x14];
    uStack_270 = param_1[0x13];
    uStack_2a8 = param_1[0xc];
    uStack_2b0 = param_1[0xb];
    uStack_298 = param_1[0xe];
    uStack_2a0 = param_1[0xd];
    uStack_2e0 = param_2[0x10];
    uStack_2e8 = param_2[0xf];
    uStack_2d0 = param_2[0x12];
    uStack_2d8 = param_2[0x11];
    uStack_2c0 = param_2[0x14];
    uStack_2c8 = param_2[0x13];
    uStack_300 = param_2[0xc];
    uStack_308 = param_2[0xb];
    uStack_2f0 = param_2[0xe];
    uStack_2f8 = param_2[0xd];
    uStack_120 = param_1[0x15];
    uStack_180 = param_2[0x15];
    uStack_260 = param_1[0x15];
    uStack_2b8 = param_2[0x15];
    uStack_258 = uStack_308;
    uStack_250 = uStack_300;
    uStack_248 = uStack_2f8;
    uStack_240 = uStack_2f0;
    uStack_238 = uStack_2e8;
    uStack_230 = uStack_2e0;
    uStack_228 = uStack_2d8;
    uStack_220 = uStack_2d0;
    uStack_218 = uStack_2c8;
    uStack_210 = uStack_2c0;
    uStack_208 = uStack_2b8;
    if (uStack_2a8 >> 0x3c < 0xf) {
      if (0xe < uStack_300 >> 0x3c) goto LAB_1015f2470;
      uStack_3b8 = param_2[0x10];
      uStack_3c0 = param_2[0xf];
      uStack_3a8 = param_2[0x12];
      uStack_3b0 = param_2[0x11];
      uStack_398 = param_2[0x14];
      uStack_3a0 = param_2[0x13];
      uStack_390 = param_2[0x15];
      uStack_3d8 = param_2[0xc];
      uStack_3e0 = param_2[0xb];
      uStack_3c8 = param_2[0xe];
      uStack_3d0 = param_2[0xd];
      uStack_a8 = param_1[0x10];
      uStack_b0 = param_1[0xf];
      uStack_98 = param_1[0x12];
      uStack_a0 = param_1[0x11];
      uStack_88 = param_1[0x14];
      uStack_90 = param_1[0x13];
      uStack_80 = param_1[0x15];
      uStack_c8 = param_1[0xc];
      uStack_d0 = param_1[0xb];
      uStack_b8 = param_1[0xe];
      uStack_c0 = param_1[0xd];
      uStack_360 = uStack_3e0;
      uStack_358 = uStack_3d8;
      uStack_350 = uStack_3d0;
      uStack_348 = uStack_3c8;
      uStack_340 = uStack_3c0;
      uStack_338 = uStack_3b8;
      uStack_330 = uStack_3b0;
      uStack_328 = uStack_3a8;
      uStack_320 = uStack_3a0;
      uStack_318 = uStack_398;
      uStack_310 = uStack_390;
      func_0x0001015f45ac(&uStack_170,&uStack_440,0x112db8e48,&UNK_10d969b48);
      func_0x0001015f45ac(&uStack_1d0,&uStack_440,0x112db8e48,&UNK_10d969b48);
      puVar5 = &uStack_d0;
      FUN_1015f1924(puVar5,&uStack_360);
      func_0x0001015f18e4(&uStack_3e0,0x112db8e48,&UNK_10d969b48);
      func_0x0001015f18e4(&uStack_2b0,0x112db8e48,&UNK_10d969b48);
      if (((ulong)puVar5 & 1) == 0) goto LAB_1015f254c;
    }
    else {
      if (uStack_300 >> 0x3c < 0xf) {
LAB_1015f2470:
        uStack_360 = uStack_2b0;
        uStack_358 = uStack_2a8;
        uStack_350 = uStack_2a0;
        uStack_348 = uStack_298;
        uStack_340 = uStack_290;
        uStack_338 = uStack_288;
        uStack_330 = uStack_280;
        uStack_328 = uStack_278;
        uStack_320 = uStack_270;
        uStack_318 = uStack_268;
        uStack_310 = uStack_260;
        func_0x0001015f45ac(&uStack_170,&uStack_d0,0x112db8e48,&UNK_10d969b48);
        func_0x0001015f45ac(&uStack_1d0,&uStack_d0,0x112db8e48,&UNK_10d969b48);
        func_0x0001015f18e4(&uStack_360,0x112db8e50,&UNK_10d969b50);
        goto LAB_1015f254c;
      }
      uStack_338 = param_1[0x10];
      uStack_340 = param_1[0xf];
      uStack_328 = param_1[0x12];
      uStack_330 = param_1[0x11];
      uStack_318 = param_1[0x14];
      uStack_320 = param_1[0x13];
      uStack_310 = param_1[0x15];
      uStack_358 = param_1[0xc];
      uStack_360 = param_1[0xb];
      uStack_348 = param_1[0xe];
      uStack_350 = param_1[0xd];
      func_0x0001015f45ac(&uStack_170,&uStack_d0,0x112db8e48,&UNK_10d969b48);
      func_0x0001015f45ac(&uStack_1d0,&uStack_d0,0x112db8e48,&UNK_10d969b48);
      func_0x0001015f18e4(&uStack_360,0x112db8e48,&UNK_10d969b48);
    }
    uVar4 = param_1[2];
    if (((uVar4 == param_2[2]) && (param_1[3] == param_2[3])) ||
       (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
      uVar4 = param_1[4];
      if (((uVar4 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
        uVar9 = param_1[0x17];
        uVar6 = param_1[0x16];
        uVar13 = param_1[0x19];
        uVar11 = param_1[0x18];
        uVar4 = param_1[0x1a];
        uVar10 = param_2[0x17];
        uVar7 = param_2[0x16];
        uVar14 = param_2[0x19];
        uVar12 = param_2[0x18];
        uVar8 = param_2[0x1a];
        bVar1 = ((uVar10 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        bVar2 = (uVar12 & 0xf000000000000007) == 0x7000000000000007;
        uStack_440 = uVar6;
        uStack_438 = uVar9;
        uStack_430 = uVar11;
        uStack_428 = uVar13;
        uStack_420 = uVar4;
        uStack_200 = uVar7;
        uStack_1f8 = uVar10;
        uStack_1f0 = uVar12;
        uStack_1e8 = uVar14;
        uStack_1e0 = uVar8;
        if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
           ((uVar11 & 0xf000000000000007) == 0x7000000000000007)) {
          if (bVar1 && bVar2) {
            func_0x0001015f45ac(&uStack_440,&uStack_2b0,0x112db8e58,&UNK_10d969b58);
            func_0x0001015f45ac(&uStack_200,&uStack_2b0,0x112db8e58,&UNK_10d969b58);
            func_0x0001015f1e40(uVar6,uVar9,uVar11,uVar13,uVar4,0x1015d55dc,&SUB_10006c090);
LAB_1015f28b8:
            uVar4 = param_1[6];
            FUN_100e25fcc(uVar4,param_1[7],param_2[6],param_2[7]);
            uVar3 = (uint)uVar4;
            goto LAB_1015f2550;
          }
        }
        else if (!bVar1 || !bVar2) {
          uStack_3e0 = uVar6;
          uStack_3d8 = uVar9;
          uStack_3d0 = uVar11;
          uStack_3c8 = uVar13;
          uStack_3c0 = uVar4;
          uStack_2b0 = uVar7;
          uStack_2a8 = uVar10;
          uStack_2a0 = uVar12;
          uStack_298 = uVar14;
          uStack_290 = uVar8;
          func_0x0001015f45ac(&uStack_440,auStack_388,0x112db8e58,&UNK_10d969b58);
          func_0x0001015f45ac(&uStack_200,auStack_388,0x112db8e58,&UNK_10d969b58);
          puVar5 = &uStack_3e0;
          FUN_1015f1ed0(puVar5,&uStack_2b0);
          func_0x0001015f1e40(uVar7,uVar10,uVar12,uVar14,uVar8,0x1015d55dc,&SUB_10006c090);
          func_0x0001015f1e40(uVar6,uVar9,uVar11,uVar13,uVar4,0x1015d55dc,&SUB_10006c090);
          if (((ulong)puVar5 & 1) != 0) goto LAB_1015f28b8;
          goto LAB_1015f254c;
        }
        func_0x0001015f45ac(&uStack_440,&uStack_2b0,0x112db8e58,&UNK_10d969b58);
        func_0x0001015f45ac(&uStack_200,&uStack_2b0,0x112db8e58,&UNK_10d969b58);
        func_0x0001015f1e40(uVar6,uVar9,uVar11,uVar13,uVar4,0x1015d55dc,&SUB_10006c090);
        func_0x0001015f1e40(uVar7,uVar10,uVar12,uVar14,uVar8,0x1015d55dc,&SUB_10006c090);
      }
    }
  }
LAB_1015f254c:
  uVar3 = 0;
LAB_1015f2550:
  return uVar3 & 1;
}



/* Entry: 1015f02e4; end: 1015f0313;  */

undefined1  [16] FUN_1015f02e4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 1015f0314; end: 1015f0347;  */

void FUN_1015f0314(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 1015f0348; end: 1015f035b;  */

undefined1  [16] FUN_1015f0348(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x1015f0358;
  return auVar1;
}



/* Entry: 1015f035c; end: 1015f036f;  */

void FUN_1015f035c(void)

{
  FUN_1015efe08();
  return;
}



/* Entry: 1015f0370; end: 1015f03d7;  */

void FUN_1015f0370(void)

{
  FUN_1015eff68();
  return;
}



/* Entry: 1015f03d8; end: 1015f03db;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015f03d8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015f03dc; end: 1015f0413;  */

uint FUN_1015f03dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015f4540();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015f0414; end: 1015f04c3;  */

uint FUN_1015f0414(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  func_0x0001015f217c(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 1015f04c4; end: 1015f0563;  */

/* WARNING: Possible PIC construction at 0x0001015f0510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f0520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f0514) */
/* WARNING: Removing unreachable block (ram,0x0001015f0524) */

void FUN_1015f04c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8e60 != -1) {
    func_0x000107c61568(0x112db8e60,FUN_1015efdc0);
  }
  uVar5 = uRam0000000113801160;
  uVar4 = uRam0000000113801158;
  uVar3 = uRam0000000113801150;
  uVar2 = uRam0000000113801148;
  uVar1 = uRam0000000113801140;
  *param_1 = uRam0000000113801138;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015f0564; end: 1015f059f;  */

void FUN_1015f0564(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8ef0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8ef0,&UNK_10d969f00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015f05a0; end: 1015f070b;  */

void FUN_1015f05a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  undefined8 uStack_b8;
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
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015f070c; end: 1015f07bb;  */

uint FUN_1015f070c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  func_0x0001015f217c(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 1015f07bc; end: 1015f0803;  */

void FUN_1015f07bc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d969f40,0x1e,2);
  uRam0000000113801170 = uStack_38;
  uRam0000000113801168 = uStack_40;
  uRam0000000113801180 = uStack_28;
  uRam0000000113801178 = uStack_30;
  uRam0000000113801190 = uStack_18;
  uRam0000000113801188 = uStack_20;
  return;
}



/* Entry: 1015f0804; end: 1015f08f3;  */

void FUN_1015f0804(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0x40;
LAB_1015f0878:
        (*pcVar4)(lVar2,&UNK_110790900,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1015f0878;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_1015f0878;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015f08f4; end: 1015f097f;  */

void FUN_1015f08f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1015f0980();
  if (unaff_x21 == 0) {
    FUN_1015f0a08();
    FUN_1015f0a90();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1015f0980; end: 1015f0a07;  */

void FUN_1015f0980(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,1,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f0a08; end: 1015f0a8f;  */

void FUN_1015f0a08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,2,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f0a90; end: 1015f0b17;  */

void FUN_1015f0a90(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,3,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015f0b18; end: 1015f0b63;  */

void FUN_1015f0b18(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf000000000000000;
  return;
}



/* Entry: 1015f0b64; end: 1015f0b93;  */

undefined1  [16] FUN_1015f0b64(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015f0b94; end: 1015f0bc7;  */

void FUN_1015f0b94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015f0bc8; end: 1015f0bdb;  */

undefined8 FUN_1015f0bc8(void)

{
  return 0x1015f0bd8;
}



/* Entry: 1015f0bdc; end: 1015f0bef;  */

void FUN_1015f0bdc(void)

{
  FUN_1015f0804();
  return;
}



/* Entry: 1015f0bf0; end: 1015f0c37;  */

void FUN_1015f0bf0(void)

{
  FUN_1015f08f4();
  return;
}



/* Entry: 1015f0c38; end: 1015f0c3b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015f0c38(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015f0c3c; end: 1015f0c73;  */

uint FUN_1015f0c3c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001015f4500();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015f0c74; end: 1015f0cdb;  */

uint FUN_1015f0c74(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_1015f1924(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1015f0cdc; end: 1015f0d7b;  */

/* WARNING: Possible PIC construction at 0x0001015f0d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f0d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f0d2c) */
/* WARNING: Removing unreachable block (ram,0x0001015f0d3c) */

void FUN_1015f0cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8e70 != -1) {
    func_0x000107c61568(0x112db8e70,FUN_1015f07bc);
  }
  uVar5 = uRam0000000113801190;
  uVar4 = uRam0000000113801188;
  uVar3 = uRam0000000113801180;
  uVar2 = uRam0000000113801178;
  uVar1 = uRam0000000113801170;
  *param_1 = uRam0000000113801168;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015f0d7c; end: 1015f0db7;  */

void FUN_1015f0d7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8ee0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8ee0,&UNK_10d969ef8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015f0db8; end: 1015f0edb;  */

void FUN_1015f0db8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015f0edc; end: 1015f0f8b;  */

uint FUN_1015f0edc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
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
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1015f1924(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1015f0f8c; end: 1015f102f;  */

void FUN_1015f0f8c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_1015f1030();
    }
    else if (lVar1 == 2) {
      FUN_1015f11b0();
    }
  }
  return;
}



/* Entry: 1015f1030; end: 1015f11af;  */

/* WARNING: Removing unreachable block (ram,0x0001015f1158) */

void FUN_1015f1030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0;
  puVar6 = param_1;
  if ((-1 < (long)uVar7) && (!bVar4 || !bVar5)) {
    uVar10 = *param_1;
    FUN_1015f1e1c(uVar10,uVar1,uVar7);
    puVar6 = (undefined8 *)0x0;
    FUN_1015f4580(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x0001015d5160();
  (*pcVar9)(&uStack_78,&UNK_110666f08,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 && bVar5) {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      else {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      FUN_1015f4580(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7;
      FUN_1015d55d8(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_1015f4580(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 1015f11b0; end: 1015f1337;  */

/* WARNING: Removing unreachable block (ram,0x0001015f12f8) */

void FUN_1015f11b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar1 = param_1[1];
  uVar7 = param_1[2];
  bVar4 = ((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0;
  puVar6 = param_1;
  if (((long)uVar7 < 0) && (bVar4 || bVar5)) {
    uVar10 = *param_1;
    FUN_1015f1e1c(uVar10,uVar1);
    puVar6 = (undefined8 *)0x0;
    FUN_1015f4580(0,0,0);
    uStack_78 = uVar10;
    uStack_70 = uVar1;
    uStack_68 = uVar7 & 0x7fffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  func_0x0001015d51e0();
  (*pcVar9)(&uStack_78,&UNK_1103ed2f8,puVar6,param_3,param_4);
  uVar7 = uStack_68;
  uVar1 = uStack_70;
  uVar10 = uStack_78;
  if (unaff_x21 == 0) {
    if (uStack_68 != 0) {
      if (bVar4 || bVar5) {
        pcVar9 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
        (*pcVar9)(param_3,param_4);
      }
      else {
        func_0x00010006c00c();
        func_0x000107c6157c(uVar7);
      }
      FUN_1015f4580(uStack_78,uStack_70,uStack_68);
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar1;
      param_1[2] = uVar7 | 0x8000000000000000;
      FUN_1015d55d8(uVar2,uVar3,uVar8);
      return;
    }
    uVar7 = 0;
  }
  FUN_1015f4580(uStack_78,uStack_70,uVar7);
  return;
}



/* Entry: 1015f1338; end: 1015f13bf;  */

void FUN_1015f1338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 8) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      (*(ulong *)(unaff_x20 + 0x10) & 0xf000000000000007) != 0xf000000000000007) {
    if ((long)*(ulong *)(unaff_x20 + 0x10) < 0) {
      FUN_1015f1460();
    }
    else {
      FUN_1015f13c0();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      param_2,param_3);
  return;
}



/* Entry: 1015f13c0; end: 1015f145f;  */

void FUN_1015f13c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if ((-1 < (long)uStack_48) &&
     (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5160();
    (*pcVar1)(&uStack_58,1,&UNK_110666f08,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015f1460);
  (*pcVar1)();
}



/* Entry: 1015f1460; end: 1015f1503;  */

void FUN_1015f1460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uStack_50 = param_1[1];
  uStack_48 = param_1[2];
  if (((long)uStack_48 < 0) &&
     (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 ||
      ((uStack_48 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    uStack_58 = *param_1;
    uStack_48 = uStack_48 & 0x7fffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d51e0();
    (*pcVar1)(&uStack_58,2,&UNK_1103ed2f8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015f1504);
  (*pcVar1)();
}



/* Entry: 1015f1504; end: 1015f1547;  */

void FUN_1015f1504(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0xf000000000000007;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 1015f1548; end: 1015f1577;  */

undefined1  [16] FUN_1015f1548(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1015f1578; end: 1015f15ab;  */

void FUN_1015f1578(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1015f15ac; end: 1015f15bf;  */

undefined1  [16] FUN_1015f15ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1015f15bc;
  return auVar1;
}



/* Entry: 1015f15c0; end: 1015f15d3;  */

void FUN_1015f15c0(void)

{
  FUN_1015f0f8c();
  return;
}



/* Entry: 1015f15d4; end: 1015f160b;  */

void FUN_1015f15d4(void)

{
  FUN_1015f1338();
  return;
}



/* Entry: 1015f160c; end: 1015f160f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015f160c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1015f1610; end: 1015f1647;  */

uint FUN_1015f1610(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1015f44c0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1015f1648; end: 1015f168f;  */

uint FUN_1015f1648(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_1015f1ed0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015f1690; end: 1015f172f;  */

/* WARNING: Possible PIC construction at 0x0001015f16dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f16ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f16e0) */
/* WARNING: Removing unreachable block (ram,0x0001015f16f0) */

void FUN_1015f1690(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8e80 != -1) {
    func_0x000107c61568(0x112db8e80,0x1015f0f44);
  }
  uVar5 = uRam00000001138011c0;
  uVar4 = uRam00000001138011b8;
  uVar3 = uRam00000001138011b0;
  uVar2 = uRam00000001138011a8;
  uVar1 = uRam00000001138011a0;
  *param_1 = uRam0000000113801198;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1015f1730; end: 1015f176b;  */

void FUN_1015f1730(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8ed0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8ed0,&UNK_10d969ef0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}


