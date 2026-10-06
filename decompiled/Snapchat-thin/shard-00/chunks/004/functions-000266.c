/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005f2030; end: 1005f2057;  */

void FUN_1005f2030(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_1005f1f6c(*param_1,param_2,&uStack_18);
  return;
}



/* Entry: 1005f2058; end: 1005f20b3;  */

void FUN_1005f2058(void)

{
  FUN_1004a5350();
  FUN_1004a53b0();
  return;
}



/* Entry: 1005f20b4; end: 1005f20bb;  */

void FUN_1005f20b4(void)

{
  return;
}



/* Entry: 1005f20bc; end: 1005f20f7;  */

undefined8 * FUN_1005f20bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1000df524(&uStack_30);
  return param_1;
}



/* Entry: 1005f20f8; end: 1005f21f7;  */

void FUN_1005f20f8(void)

{
  return;
}



/* Entry: 1005f21f8; end: 1005f22bb;  */

undefined8 FUN_1005f21f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  func_0x0001005f2104(auStack_38);
  FUN_1000df4d8(auStack_38);
  return uVar1;
}



/* Entry: 1005f22bc; end: 1005f22cf;  */

void FUN_1005f22bc(void)

{
  return;
}



/* Entry: 1005f22d0; end: 1005f235f;  */

long FUN_1005f22d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5c628;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    FUN_1005f2360();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1005f2360; end: 1005f236b;  */

void FUN_1005f2360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005f236c; end: 1005f23cf;  */

void FUN_1005f236c(long param_1)

{
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f23d0; end: 1005f244b;  */

void FUN_1005f23d0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f080;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10049f338();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_1005f2478);
  func_0x000107c61180();
  func_0x0001005f2618();
  FUN_1000df524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005f244c; end: 1005f2477;  */

void FUN_1005f244c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1005f23d0();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005f2478; end: 1005f24e3;  */

void FUN_1005f2478(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126ba570;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10049f338();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1005f25dc(&uStack_30);
  return;
}



/* Entry: 1005f24e4; end: 1005f2523; -[SCNMessagingSession .cxx_construct] */

undefined8 * FUN_1005f24e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10049f338();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1005f2524; end: 1005f2573; -[SCNMessagingSession initWithCpp:] */

undefined1 * FUN_1005f2524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd2d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1005f2584((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1005f2574; end: 1005f2583;  */

void FUN_1005f2574(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1005f2584; end: 1005f25cf;  */

undefined8 * FUN_1005f2584(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1005f2574();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1005f25dc(&uStack_30);
  return param_1;
}



/* Entry: 1005f25d0; end: 1005f25db;  */

undefined8 FUN_1005f25d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1005f25dc; end: 1005f25ff;  */

void FUN_1005f25dc(long param_1)

{
  FUN_1005f25d0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005f2600; end: 1005f2633;  */

void FUN_1005f2600(void)

{
  return;
}



/* Entry: 1005f2634; end: 1005f26b7; -[SCNMessagingSession setComplianceEngine:] */

void FUN_1005f2634(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x0001005f2624();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1005f26b8();
  FUN_1005f26c4();
  func_0x00010060421c(*(undefined8 *)(*plVar1 + 0x58));
  FUN_1006042ec(auStack_40);
  FUN_10049e468();
  return;
}



/* Entry: 1005f26b8; end: 1005f26c3;  */

void FUN_1005f26b8(void)

{
  return;
}



/* Entry: 1005f26c4; end: 1005f277b;  */

void FUN_1005f26c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110c97e80;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_100601548);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_100601648(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1005f277c; end: 1005f27a7;  */

void FUN_1005f277c(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_10011df08();
  func_0x000107c61180();
  uVar1 = uRam00000001137fdee8;
  uRam00000001137fdee8 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1005f27a8; end: 1005f27bb;  */

void FUN_1005f27a8(long param_1)

{
  long lVar1;
  code *extraout_x8;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x0001002a91f0(lVar1,1,*(undefined4 *)(param_1 + 0x20));
  (**(code **)(**(long **)(lVar1 + 0x48) + 0x38))();
  (**(code **)(**(long **)(unaff_x20 + 0x58) + 0x38))();
  func_0x0001005f67e4(*(undefined8 *)(unaff_x20 + 0x68));
  (*extraout_x8)();
  return;
}



/* Entry: 1005f27bc; end: 1005f2817;  */

void FUN_1005f27bc(long param_1)

{
  code *extraout_x8;
  long unaff_x20;
  
  func_0x0001002a91f0();
  (**(code **)(**(long **)(param_1 + 0x48) + 0x38))();
  (**(code **)(**(long **)(unaff_x20 + 0x58) + 0x38))();
  func_0x0001005f67e4(*(undefined8 *)(unaff_x20 + 0x68));
  (*extraout_x8)();
  return;
}



/* Entry: 1005f2818; end: 1005f399f;  */

void FUN_1005f2818(ulong param_1,int param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined **ppuVar19;
  undefined **extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined **extraout_x9;
  undefined **extraout_x9_00;
  ulong uVar20;
  ulong extraout_x9_01;
  undefined **ppuVar21;
  long *extraout_x10;
  undefined **extraout_x11;
  long lVar22;
  undefined ***pppuVar23;
  uint uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  long *plVar27;
  undefined1 *unaff_x24;
  undefined8 uVar28;
  undefined **unaff_x27;
  undefined4 uVar29;
  undefined ***pppuVar30;
  undefined1 auStack_25b8 [24];
  undefined1 auStack_25a0 [24];
  undefined1 auStack_2588 [24];
  undefined **ppuStack_2570;
  undefined8 uStack_2568;
  undefined8 uStack_2560;
  undefined8 uStack_2558;
  undefined4 uStack_2550;
  undefined1 auStack_2548 [40];
  undefined1 auStack_2520 [96];
  undefined1 auStack_24c0 [904];
  undefined1 auStack_2138 [24];
  undefined8 uStack_2120;
  undefined8 uStack_2118;
  undefined8 uStack_2110;
  undefined8 uStack_2108;
  undefined8 uStack_2100;
  undefined8 uStack_20f8;
  long lStack_20f0;
  long lStack_20e8;
  ulong uStack_20e0;
  undefined **ppuStack_20d0;
  undefined **ppuStack_20c8;
  undefined8 uStack_20c0;
  undefined1 auStack_20b0 [24];
  undefined1 uStack_2098;
  undefined1 auStack_2090 [96];
  undefined1 auStack_2030 [904];
  undefined1 auStack_1ca8 [24];
  undefined **ppuStack_1c90;
  undefined **ppuStack_1c88;
  undefined8 uStack_1c80;
  long lStack_1c78;
  long lStack_1c70;
  ulong uStack_1c68;
  undefined8 uStack_1c60;
  undefined8 uStack_1c58;
  undefined8 uStack_1c50;
  undefined8 uStack_1c48;
  undefined8 uStack_1c40;
  undefined8 uStack_1c38;
  char cStack_1ae8;
  undefined1 auStack_1900 [24];
  long lStack_18e8;
  long lStack_18e0;
  long lStack_18a0;
  long lStack_1898;
  undefined ***pppuStack_1888;
  undefined ***pppuStack_1880;
  undefined8 *puStack_1840;
  undefined8 *puStack_1838;
  undefined1 auStack_1828 [24];
  undefined1 auStack_1810 [64];
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined4 uStack_17b0;
  undefined8 auStack_17a8 [13];
  undefined1 auStack_1740 [16];
  undefined1 uStack_1730;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined **ppuStack_1470;
  undefined **ppuStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  ulong uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  ulong uStack_1418;
  undefined **ppuStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined4 uStack_a78;
  long lStack_a48;
  long lStack_a40;
  undefined4 uStack_144;
  undefined4 uStack_10c;
  undefined8 uStack_18;
  
  FUN_10056ad58();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = param_1;
  FUN_1005f39a0();
  pppuVar23 = &ppuStack_1c90;
  FUN_100567c58();
  ppuVar25 = (undefined **)(uVar8 + 0x80);
  plVar27 = (long *)(uVar8 + 0x70);
  plVar14 = (long *)*ppuVar25;
  uStack_18 = extraout_x8;
  while (plVar14 != (long *)0x0) {
    uVar8 = *(ulong *)(param_1 + 0x38);
    func_0x000107c298d4(uVar8,plVar14 + 2);
    if ((uVar8 & 1) == 0) {
      plVar9 = plVar27;
      func_0x000107c299d4(plVar27,plVar14);
      plVar14 = plVar9;
    }
    else {
      plVar14 = (long *)*plVar14;
    }
  }
  func_0x0001005f39ac();
  FUN_1005f39cc(auStack_1740);
  func_0x0001005f39ac();
  FUN_1005f3d74(auStack_17a8);
  uStack_17b8 = 0;
  uStack_17c0 = 0;
  uStack_17c8 = 0;
  uStack_17d0 = 0;
  uStack_17b0 = 0x3f800000;
  FUN_1005f4020();
  puVar10 = auStack_17a8;
  func_0x0001005f402c(puVar10);
  uStack_1418 = 0;
  uStack_1420 = 0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1438 = 0;
  uStack_1440 = 0;
  uStack_1448 = 0;
  uStack_1450 = 0;
  uStack_1458 = 0;
  uStack_1460 = 0;
  ppuStack_1468 = (undefined **)0x0;
  ppuStack_1470 = (undefined **)0x0;
  while ((((unaff_x24[0x58] & 1) != 0 || ((uStack_1418 & 1) != 0)) &&
         (ppuStack_a98 != ppuStack_1470))) {
    FUN_1005f49d4();
    func_0x000107c298f4();
    puVar11 = &uStack_17d0;
    func_0x000107c29974(puVar11,puVar10,puVar10);
    FUN_1005f49d4();
    FUN_1005f3f98();
    puVar10 = puVar11;
  }
  func_0x0001005f4100();
  FUN_1005f4020();
  FUN_1005f4130();
  FUN_10002b838(auStack_1828,&UNK_10f4baf41);
  func_0x0001005f4138(auStack_1810);
  func_0x000107c60ca0(auStack_1828);
  FUN_1005f4140(&puStack_1840,auStack_1740);
  puVar10 = puStack_1840;
  uVar8 = param_3;
  do {
    uVar5 = puVar10 == puStack_1838;
    if ((bool)uVar5) {
      FUN_1005f463c(&puStack_1840);
      FUN_10054cbac(auStack_1810);
      plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x138);
      uStack_a88 = 0;
      uStack_a80 = 0;
      uStack_a90 = 0;
      ppuStack_a98 = &PTR_DAT_110a609a8;
      uStack_a78 = 0x1a9;
      puVar18 = auStack_25b8;
      FUN_10002b838(puVar18,&UNK_10f4baf56);
      FUN_1005f49d4();
      FUN_1005e34cc();
      (**(code **)(*plVar14 + 0x78))(plVar14,puVar18,uStack_17b8);
      func_0x0001005f4a28();
      FUN_1005f49d4();
      FUN_1005505e4();
      FUN_10054d120(auStack_1810);
      func_0x0001005f4a64(&uStack_17d0);
      FUN_1005f4ae4(auStack_17a8);
      puVar18 = auStack_1740;
      FUN_1005f4be0(puVar18);
      while( true ) {
        func_0x000100567e68(uStack_18);
        if ((bool)uVar5) {
          return;
        }
        func_0x000107c60e78();
        func_0x000107c33548();
        func_0x000104be1274(puVar18 + 0x168);
        func_0x000107c28a90(&ppuStack_2570);
        func_0x000107c33574();
        FUN_10068e154();
        FUN_1005f49d4();
        FUN_1006928bc();
        func_0x000107c335d4();
        func_0x000104bee768(auStack_1900);
        func_0x000104bee768(&lStack_18a0);
        FUN_1005f463c(&puStack_1840);
        FUN_10054d120(auStack_1810);
        func_0x0001005f4a64(&uStack_17d0);
        FUN_1005f4ae4(auStack_17a8);
        FUN_1005f4be0(auStack_1740);
        uVar5 = (int)pppuVar23 == 1;
        if (!(bool)uVar5) break;
        func_0x000107c33570();
        auStack_1740[0] = 0;
        uStack_1730 = 0;
        func_0x000107c3358c(*(undefined8 *)(param_1 + 0x20));
        func_0x000107c335fc();
        puVar18 = auStack_1740;
        func_0x000107c29984();
        func_0x000107c60e3c();
      }
      func_0x000107c3357c();
      func_0x000107c33600();
      return;
    }
    puVar11 = &uStack_17d0;
    func_0x000107c2997c(puVar11,puVar10 + 0xe);
    iVar7 = *(int *)((long)puVar11 + 0x44);
    uVar12 = *(ulong *)(param_1 + 0x38);
    func_0x000107c298d4(uVar12,puVar10 + 0xe);
    if ((uVar12 & 1) == 0) {
      func_0x0001005f39ac();
      func_0x000107c29914(&lStack_18a0);
      func_0x000107c335f0();
      if ((uVar12 & 1) != 0) {
        func_0x000107c28c00(auStack_1900,&lStack_18a0);
        if (pppuStack_1888 == pppuStack_1880) {
LAB_1005f2af8:
          if ((lStack_18e8 == lStack_18e0) || (pppuStack_1888 != pppuStack_1880)) {
            pppuVar23 = (undefined ***)0x0;
          }
          else {
            func_0x000107c33574();
            func_0x000107c335dc();
            uStack_20c0 = 0;
            ppuStack_20d0 = (undefined **)0x0;
            ppuStack_20c8 = (undefined **)0x0;
            func_0x000107c335ec(&lStack_20f0);
            uStack_1c80 = uStack_20c0;
            ppuStack_1c88 = ppuStack_20c8;
            ppuStack_1c90 = ppuStack_20d0;
            uStack_20c0 = 0;
            ppuStack_20c8 = (undefined **)0x0;
            ppuStack_20d0 = (undefined **)0x0;
            lStack_1c70 = lStack_20e8;
            lStack_1c78 = lStack_20f0;
            uStack_1c68 = uStack_20e0;
            lStack_20f0 = 0;
            lStack_20e8 = 0;
            uStack_20e0 = 0;
            uStack_1c60 = 0;
            uStack_1c58 = 0;
            uStack_20f8 = 0;
            uStack_2108 = 0;
            uStack_2100 = 0;
            uStack_1c50 = 0;
            uStack_1c48 = 0;
            uStack_1c40 = 0;
            uStack_1c38 = 0;
            uStack_2118 = 0;
            uStack_2120 = 0;
            uStack_2110 = 0;
            func_0x000104bee7a0(&uStack_2120);
            func_0x000104bee7dc(&uStack_2108);
            func_0x000104bee864(&lStack_20f0);
            func_0x0001005fb56c(&ppuStack_20d0);
            FUN_10054f8dc(auStack_2138,puVar10 + 0xe);
            func_0x000107c28bfc(auStack_24c0,&ppuStack_1470);
            func_0x000107c28c00(auStack_2520,&ppuStack_1c90);
            FUN_1005f49d4();
            func_0x000107c28f74();
            func_0x000104bee768(auStack_2520);
            func_0x000104bee3a8(auStack_24c0);
            FUN_100100fec(auStack_2138);
            func_0x000107c33608();
            func_0x000107c335b8();
            unaff_x27 = (undefined **)(uStack_1430 & 0xffffffff);
            func_0x000107c29908();
            for (unaff_x24 = (undefined1 *)0x0;
                unaff_x24 < (undefined1 *)((lStack_18e0 - lStack_18e8) / 0x58);
                unaff_x24 = unaff_x24 + 1) {
              plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x138);
              uStack_2568 = 0;
              uStack_2560 = 0;
              uStack_2558 = 0;
              ppuStack_2570 = &PTR_DAT_110a609a8;
              uStack_2550 = 0x1ab;
              pppuVar23 = &ppuStack_2570;
              func_0x000107c2990c(pppuVar23,0x70036);
              FUN_10002b838(auStack_2588,"message_type");
              FUN_1005504ac(pppuVar23,auStack_2588,unaff_x27);
              func_0x000107c29910();
              func_0x0001005505a0(auStack_2548,pppuVar23);
              (**(code **)(*plVar14 + 0x50))(plVar14,auStack_2548);
              FUN_1005505e4(auStack_2548);
              FUN_10056b520();
              FUN_1005505e4(&ppuStack_2570);
            }
            FUN_1005f49d4();
            func_0x000107c28f78();
            func_0x000107c335d4();
            func_0x000107c33574();
            func_0x000104bee3a8();
            pppuVar23 = (undefined ***)0x1;
            uVar8 = param_3 & 0xffffffff;
            FUN_1005f39a0();
          }
          uVar4 = iVar7 + -3 < 0;
          uVar5 = iVar7 == 3;
          if ((bool)uVar5) {
            iVar7 = (int)*(undefined8 *)(param_1 + 0x98);
            func_0x000107c33564();
            (*extraout_x8_01)();
            if (iVar7 == 0) {
              if (param_2 != 0) {
                uVar28 = *puVar10;
                func_0x0001005f39ac();
                func_0x000107c29914(&ppuStack_1c90);
                if (lStack_1c78 != lStack_1c70) {
                  plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x198);
                  FUN_1005f49d4();
                  func_0x000107c335dc();
                  (**(code **)(*plVar14 + 0x30))(plVar14,puVar10 + 0xe,&ppuStack_a98,&lStack_1c78,1)
                  ;
                  FUN_1005f49d4();
                  func_0x000104bee3a8();
                }
                ppuVar21 = ppuStack_1c90;
                if (ppuStack_1c90 != ppuStack_1c88) {
                  lVar13 = *(long *)(param_1 + 0x20);
                  if ((long)ppuStack_1c88 - (long)ppuStack_1c90 == 0x18) {
                    unaff_x27 = *(undefined ***)(lVar13 + 0x168);
                    puVar11 = puVar10;
                    func_0x000107c29e84(puVar10);
                    (**(code **)(*unaff_x27 + 0x58))
                              (unaff_x27,ppuVar21,uVar28,puVar11,2,puVar10[0x15] * 1000);
                    func_0x0001005f39ac();
                    FUN_1005f4020();
                    func_0x000107c2a020();
                    if (unaff_x24[0x1a8] == '\x01') {
                      plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0xa8);
                      func_0x000107c33574();
                      FUN_10068e4a4();
                      func_0x000107c290a8(&ppuStack_2570,&ppuStack_1470,1);
                      uStack_1480 = 0;
                      uStack_1488 = 0;
                      uStack_1478 = 0;
                      (**(code **)(*plVar14 + 8))(plVar14,ppuVar21,&ppuStack_2570,&uStack_1488);
                      func_0x000104be1274(&uStack_1488);
                      func_0x000107c28a90(&ppuStack_2570);
                      func_0x000107c33574();
                      FUN_10068e154();
                    }
                    FUN_1005f49d4();
                    FUN_1006928bc();
                  }
                  else {
                    *unaff_x24 = 0;
                    unaff_x24[0x18] = 0;
                    func_0x000107c29938(lVar13 + 0x38,lVar13 + 0x168,&ppuStack_1c90,&ppuStack_a98);
                    FUN_1005f49d4();
                    func_0x000104bee748();
                  }
                }
                func_0x000107c335d4();
              }
              goto LAB_1005f3524;
            }
          }
          if (param_2 != 0) {
            uVar4 = *(int *)(puVar11 + 8) + -3 < 0;
            uVar5 = *(int *)(puVar11 + 8) == 3;
            if ((bool)uVar5) {
              *(undefined4 *)(puVar11 + 8) = 2;
            }
          }
          lVar13 = *(long *)(param_1 + 0x20);
          func_0x000107c33574();
          func_0x000107c29964();
          FUN_1005f4020();
          func_0x000107c298d0(lVar13 + 0x28,puVar11,&ppuStack_1470);
          func_0x000107c33574();
          func_0x000107c28f78();
          pbVar17 = (byte *)(param_1 + 0x1c0);
          FUN_10056337c();
          unaff_x24[0x988] = *pbVar17 ^ 1;
          uVar29 = (undefined4)uVar8;
          unaff_x24[0x990] = 1;
          uStack_10c = uVar29;
          FUN_1005f4020();
          ppuVar21 = (undefined **)(extraout_x8_02 + 0x18);
          func_0x000107c29eec();
          ppuVar26 = *(undefined ***)(param_1 + 0x78);
          ppuVar15 = ppuVar21;
          if (ppuVar26 != (undefined **)0x0) {
            unaff_x24 = (undefined1 *)((long)ppuVar26 + -1);
            uVar24 = (uint)ppuVar26;
            if (((ulong)ppuVar26 & (ulong)unaff_x24) == 0) {
              unaff_x27 = (undefined **)((ulong)(uVar24 - 1) & (ulong)ppuVar21);
              uVar5 = true;
              uVar4 = false;
            }
            else {
              uVar4 = (long)ppuVar21 - (long)ppuVar26 < 0;
              uVar5 = ppuVar21 == ppuVar26;
              unaff_x27 = ppuVar21;
              if (ppuVar26 <= ppuVar21) {
                uVar1 = 0;
                if (uVar24 != 0) {
                  uVar1 = (uint)ppuVar21 / uVar24;
                }
                unaff_x27 = (undefined **)(ulong)((uint)ppuVar21 - uVar1 * uVar24);
              }
            }
            plVar14 = *(long **)(*plVar27 + (long)unaff_x27 * 8);
            if (plVar14 != (long *)0x0) {
              do {
                while( true ) {
                  plVar14 = (long *)*plVar14;
                  if (plVar14 == (long *)0x0) goto LAB_1005f2fb0;
                  ppuVar19 = (undefined **)plVar14[1];
                  uVar4 = (long)ppuVar19 - (long)ppuVar21 < 0;
                  uVar5 = ppuVar19 == ppuVar21;
                  if (!(bool)uVar5) break;
                  ppuVar15 = (undefined **)(plVar14 + 2);
                  FUN_1005f4020();
                  FUN_1006760a8();
                  if (((ulong)ppuVar15 & 1) != 0) {
                    *(undefined4 *)(plVar14 + 5) = uVar29;
                    FUN_1005f39a0();
                    if ((int)pppuVar23 == 0) goto LAB_1005f33b8;
                    goto LAB_1005f3398;
                  }
                }
                if (((ulong)ppuVar26 & (ulong)unaff_x24) == 0) {
                  ppuVar19 = (undefined **)((ulong)ppuVar19 & (ulong)unaff_x24);
                }
                else if (ppuVar26 <= ppuVar19) {
                  uVar12 = 0;
                  if (ppuVar26 != (undefined **)0x0) {
                    uVar12 = (ulong)ppuVar19 / (ulong)ppuVar26;
                  }
                  ppuVar19 = (undefined **)((long)ppuVar19 - uVar12 * (long)ppuVar26);
                }
                uVar4 = (long)ppuVar19 - (long)unaff_x27 < 0;
                uVar5 = ppuVar19 == unaff_x27;
              } while ((bool)uVar5);
            }
LAB_1005f2fb0:
            FUN_1005f39a0();
          }
          FUN_10056cbbc();
          uStack_1460 = 0;
          *ppuVar15 = (undefined *)0x0;
          ppuVar15[1] = (undefined *)ppuVar21;
          ppuStack_1470 = ppuVar15;
          ppuStack_1468 = ppuVar25;
          FUN_1005f4020(ppuVar15 + 2);
          FUN_10054f8dc();
          *(undefined4 *)(ppuVar15 + 5) = uVar29;
          uStack_1460 = CONCAT71(uStack_1460._1_7_,1);
          if ((ppuVar26 == (undefined **)0x0) ||
             (func_0x000107c33604((float)(*(long *)(param_1 + 0x88) + 1),
                                  *(undefined4 *)(param_1 + 0x90),(float)ppuVar26), (bool)uVar4)) {
            bVar3 = (undefined **)0x2 < ppuVar26;
            bVar6 = ppuVar26 == (undefined **)0x3;
            uVar12 = 1;
            if (bVar3) {
              uVar12 = (ulong)(((ulong)ppuVar26 & (long)ppuVar26 - 1U) != 0);
            }
            func_0x000107c3359c(uVar12 | (long)ppuVar26 << 1);
            ppuVar19 = extraout_x8_03;
            if (!bVar3 || bVar6) {
              ppuVar19 = extraout_x9;
            }
            if ((long)ppuVar19 - 1U == 0) {
              ppuVar19 = (undefined **)0x2;
            }
            else if (((ulong)ppuVar19 & (long)ppuVar19 - 1U) != 0) {
              func_0x000107c60c44();
            }
            ppuVar26 = *(undefined ***)(param_1 + 0x78);
            if (ppuVar26 < ppuVar19) {
LAB_1005f3064:
              ppuVar26 = ppuVar19;
              if ((ulong)ppuVar26 >> 0x3d != 0) {
                func_0x000104bd35f4();
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1005f3630);
                (*pcVar2)();
              }
              lVar13 = (long)ppuVar26 << 3;
              func_0x000107c60e20(lVar13);
              func_0x000107c299e8(plVar27,lVar13);
              ppuVar19 = (undefined **)0x0;
              *(undefined ***)(param_1 + 0x78) = ppuVar26;
              lVar13 = *(long *)(param_1 + 0x70);
              while (ppuVar26 != ppuVar19) {
                func_0x000107c33610();
                lVar13 = extraout_x8_04;
                ppuVar19 = extraout_x9_00;
              }
              plVar14 = (long *)*ppuVar25;
              if (plVar14 != (long *)0x0) {
                ppuVar19 = (undefined **)plVar14[1];
                uVar20 = (long)ppuVar26 - 1;
                uVar12 = 0;
                if (ppuVar26 != (undefined **)0x0) {
                  uVar12 = (ulong)ppuVar19 / (ulong)ppuVar26;
                }
                ppuVar16 = ppuVar19;
                if (ppuVar26 <= ppuVar19) {
                  ppuVar16 = (undefined **)((long)ppuVar19 - uVar12 * (long)ppuVar26);
                }
                if (((ulong)ppuVar26 & uVar20) == 0) {
                  ppuVar16 = (undefined **)((ulong)ppuVar19 & uVar20);
                }
                *(undefined ***)(lVar13 + (long)ppuVar16 * 8) = ppuVar25;
                while (plVar9 = plVar14, plVar14 = (long *)*plVar9, plVar14 != (long *)0x0) {
                  ppuVar19 = (undefined **)plVar14[1];
                  if (((ulong)ppuVar26 & uVar20) == 0) {
                    ppuVar19 = (undefined **)((ulong)ppuVar19 & uVar20);
                  }
                  else if (ppuVar26 <= ppuVar19) {
                    uVar12 = 0;
                    if (ppuVar26 != (undefined **)0x0) {
                      uVar12 = (ulong)ppuVar19 / (ulong)ppuVar26;
                    }
                    ppuVar19 = (undefined **)((long)ppuVar19 - uVar12 * (long)ppuVar26);
                  }
                  if (ppuVar19 != ppuVar16) {
                    if (*(long *)(lVar13 + (long)ppuVar19 * 8) == 0) {
                      *(long **)(lVar13 + (long)ppuVar19 * 8) = plVar9;
                      ppuVar16 = ppuVar19;
                    }
                    else {
                      *plVar9 = *plVar14;
                      func_0x000107c33590();
                      lVar13 = extraout_x8_05;
                      uVar20 = extraout_x9_01;
                      plVar14 = extraout_x10;
                      ppuVar16 = extraout_x11;
                    }
                  }
                }
              }
            }
            else if (ppuVar19 < ppuVar26) {
              ppuVar16 = (undefined **)
                         (long)((float)*(ulong *)(param_1 + 0x88) / *(float *)(param_1 + 0x90));
              if ((ppuVar26 < (undefined **)0x3) || (((ulong)ppuVar26 & (long)ppuVar26 - 1U) != 0))
              {
                func_0x000107c60c44();
              }
              else {
                func_0x000107c3353c();
              }
              if (ppuVar19 <= ppuVar16) {
                ppuVar19 = ppuVar16;
              }
              if (ppuVar19 < ppuVar26) {
                if (ppuVar19 != (undefined **)0x0) goto LAB_1005f3064;
                func_0x000107c299e8(plVar27,0);
                ppuVar26 = (undefined **)0x0;
                *(undefined8 *)(param_1 + 0x78) = 0;
              }
              else {
                ppuVar26 = *(undefined ***)(param_1 + 0x78);
              }
            }
            if (((ulong)ppuVar26 & (long)ppuVar26 - 1U) == 0) {
              uVar5 = 1;
              unaff_x27 = (undefined **)((ulong)((int)ppuVar26 - 1) & (ulong)ppuVar21);
            }
            else {
              uVar5 = ppuVar21 == ppuVar26;
              unaff_x27 = ppuVar21;
              if (ppuVar26 <= ppuVar21) {
                uVar12 = 0;
                if (ppuVar26 != (undefined **)0x0) {
                  uVar12 = (ulong)ppuVar21 / (ulong)ppuVar26;
                }
                unaff_x27 = (undefined **)((long)ppuVar21 - uVar12 * (long)ppuVar26);
              }
            }
          }
          lVar13 = *plVar27;
          plVar14 = *(long **)(lVar13 + (long)unaff_x27 * 8);
          if (plVar14 == (long *)0x0) {
            *ppuVar15 = *ppuVar25;
            *ppuVar25 = (undefined *)ppuVar15;
            *(undefined ***)(lVar13 + (long)unaff_x27 * 8) = ppuVar25;
            if (*ppuVar15 != (undefined *)0x0) {
              ppuVar21 = *(undefined ***)(*ppuVar15 + 8);
              if (((ulong)ppuVar26 & (long)ppuVar26 - 1U) == 0) {
                ppuVar21 = (undefined **)((ulong)ppuVar21 & (long)ppuVar26 - 1U);
                uVar5 = true;
              }
              else {
                uVar5 = ppuVar21 == ppuVar26;
                if (ppuVar26 <= ppuVar21) {
                  uVar12 = 0;
                  if (ppuVar26 != (undefined **)0x0) {
                    uVar12 = (ulong)ppuVar21 / (ulong)ppuVar26;
                  }
                  ppuVar21 = (undefined **)((long)ppuVar21 - uVar12 * (long)ppuVar26);
                }
              }
              *(undefined ***)(lVar13 + (long)ppuVar21 * 8) = ppuVar15;
            }
          }
          else {
            *ppuVar15 = (undefined *)*plVar14;
            *plVar14 = (long)ppuVar15;
          }
          ppuStack_1470 = (undefined **)0x0;
          *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
          func_0x000107c33574();
          func_0x000107c299d8();
          if ((int)pppuVar23 != 0) {
LAB_1005f3398:
            func_0x000107c335ec(auStack_25a0);
            FUN_1005f4020();
            func_0x000107c29988(extraout_x8_06 + 0x970,auStack_25a0);
            func_0x000104bee864(auStack_25a0);
          }
LAB_1005f33b8:
          FUN_10056337c(param_1 + 0xd0);
          FUN_1006bc480();
          if (((bool)uVar5) && (lStack_a40 - lStack_a48 == 0x18)) {
            func_0x0001005f39ac();
            func_0x000107c29f98(&ppuStack_1470);
            func_0x000107c33574(&ppuStack_1c90);
            FUN_1006b90c8();
            func_0x000107c33574();
            FUN_1006928f0();
            if ((cStack_1ae8 != '\x01') || ((uStack_1c68 & 1) == 0)) {
              func_0x000107c335e8();
              goto LAB_1005f3458;
            }
            func_0x0001005f39ac();
            func_0x000107c2a028();
            func_0x0001005f39ac();
            func_0x000107c2a024();
            func_0x0001005f39ac();
            FUN_1005f4020();
            func_0x000107c29f74();
            func_0x000107c335e8();
          }
          else {
LAB_1005f3458:
            uVar12 = param_1;
            func_0x000107c29970(param_1,auStack_1810,&ppuStack_a98);
            if ((uVar12 & 1) == 0) {
              func_0x000107c29968(&ppuStack_1c90);
              ppuStack_1468 = ppuStack_1c88;
              ppuStack_1470 = ppuStack_1c90;
              ppuStack_1c88 = (undefined **)0x0;
              ppuStack_1c90 = (undefined **)0x0;
              FUN_1005f4020();
              func_0x000107c2996c(param_1,extraout_x8_07 + 0x18,extraout_x8_07 + 0x130,
                                  &ppuStack_1470);
              func_0x000107c33574();
              func_0x000104be36f0();
              func_0x000107c299d0(&ppuStack_1c90);
              uVar28 = *(undefined8 *)(param_1 + 0x30);
              func_0x000107c29968(&ppuStack_2570);
              func_0x000107c3360c();
              func_0x000107c2993c(&ppuStack_1470,uVar28,&ppuStack_1c90);
              func_0x000107c335d0();
              func_0x000107c335f4();
              func_0x000107c29968(&ppuStack_2570);
              func_0x000107c3360c();
              func_0x000107c29960(param_1,&ppuStack_a98,&ppuStack_1470,&ppuStack_1c90);
              func_0x000107c335d0();
              func_0x000107c335f4();
              func_0x000107c33574();
              func_0x000107c29944();
            }
          }
          FUN_1005f49d4();
          func_0x000107c298e4();
        }
        else {
          lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
          lVar22 = puVar10[0x15];
          func_0x000107c33564();
          (*extraout_x8_00)();
          if ((ulong)(lVar13 - lVar22) < 0x5265c01) goto LAB_1005f2af8;
          unaff_x27 = (undefined **)*puVar10;
          FUN_1005f49d4();
          func_0x000107c335dc();
          func_0x000107c29a18(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x368),&pppuStack_1888,4,
                              puVar10 + 0xe,&ppuStack_a98,puVar10[0x15]);
          pppuVar23 = pppuStack_1880;
          for (pppuVar30 = pppuStack_1888; pppuVar30 != pppuVar23; pppuVar30 = pppuVar30 + 0xb) {
            func_0x000107c2a010(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),unaff_x27,
                                pppuVar30);
          }
          plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0x198);
          (**(code **)(*plVar14 + 0x30))(plVar14,puVar10 + 0xe,&ppuStack_a98,&pppuStack_1888,4);
          uVar8 = param_3 & 0xffffffff;
          func_0x000104bee8b4(&pppuStack_1888);
          if (lStack_18a0 != lStack_1898) {
            FUN_1005f49d4();
            func_0x000104bee3a8();
            goto LAB_1005f2af8;
          }
          func_0x0001005f39ac();
          func_0x000107c2a024();
          func_0x0001005f39ac();
          func_0x000107c29f74();
          FUN_1005f49d4();
          func_0x000104bee3a8();
          func_0x000107c335dc(&ppuStack_1c90);
          FUN_10054f8dc(auStack_1ca8,puVar10 + 0xe);
          func_0x000107c28bfc(auStack_2030,&ppuStack_1c90);
          func_0x000107c28c00(auStack_2090,auStack_1900);
          ppuStack_1470 = (undefined **)0x0;
          ppuStack_1468 = (undefined **)((ulong)ppuStack_1468 & 0xffffffff00000000);
          func_0x000107c33574();
          func_0x000107c28f1c();
          FUN_1005f49d4();
          func_0x000107c28f74();
          func_0x000104bee768(auStack_2090);
          func_0x000104bee3a8(auStack_2030);
          FUN_100100fec(auStack_1ca8);
          unaff_x24[0x958] = 1;
          uStack_144 = (int)param_3;
          func_0x000107c33608();
          func_0x000107c335b8();
          pbVar17 = (byte *)(param_1 + 400);
          FUN_10056337c();
          if ((*pbVar17 & 1) == 0) {
            auStack_20b0[0] = 0;
            uStack_2098 = 0;
            func_0x000107c29924(&ppuStack_1470,*(long *)(param_1 + 0x20) + 0x28,
                                *(long *)(param_1 + 0x20) + 0x358,6,0,&ppuStack_a98,
                                *(undefined4 *)(puVar11 + 8),0,auStack_20b0);
            FUN_1001148fc(auStack_20b0);
            plVar14 = *(long **)(*(long *)(param_1 + 0x20) + 0xa8);
            (**(code **)(*plVar14 + 0x58))(plVar14,&ppuStack_1470);
            func_0x000107c33574();
            func_0x000107c28c04();
          }
          FUN_1005f49d4();
          func_0x000107c28f78();
          func_0x000104bee3a8(&ppuStack_1c90);
        }
LAB_1005f3524:
        func_0x000104bee768(auStack_1900);
      }
      func_0x000104bee768(&lStack_18a0);
    }
    puVar10 = puVar10 + 0x54;
  } while( true );
}



/* Entry: 1005f39a0; end: 1005f39cb;  */

void FUN_1005f39a0(void)

{
  return;
}



/* Entry: 1005f39cc; end: 1005f3a4b;  */

void FUN_1005f39cc(void)

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
  FUN_1005f3b00();
  return;
}



/* Entry: 1005f3a4c; end: 1005f3a57;  */

long FUN_1005f3a4c(long param_1)

{
  long in_x9;
  
  return param_1 + in_x9;
}



/* Entry: 1005f3a58; end: 1005f3aff;  */

long FUN_1005f3a58(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005f3acc;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005f3acc:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_1005f3a58();
  func_0x0001005ec788(extraout_x8);
  FUN_1005f3b70();
  return param_1;
}



/* Entry: 1005f3b00; end: 1005f3b23;  */

void FUN_1005f3b00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1005f3a58();
  func_0x0001005ec788(param_1);
  FUN_1005f3b70(param_2,auStack_28);
  return;
}



/* Entry: 1005f3b24; end: 1005f3b6f;  */

void FUN_1005f3b24(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_1005f3b70(param_1,auStack_28);
  return;
}



/* Entry: 1005f3b70; end: 1005f3b93;  */

void FUN_1005f3b70(void)

{
  FUN_1005ec7e4();
  FUN_1005f3b94();
  return;
}



/* Entry: 1005f3b94; end: 1005f3bc3;  */

void FUN_1005f3b94(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  FUN_1005f3bc4();
  return;
}



/* Entry: 1005f3bc4; end: 1005f3c2f;  */

void FUN_1005f3bc4(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_2c0 [672];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    func_0x000107c299f8(auStack_2c0,*param_1);
    func_0x000107c299f4(param_1 + 1,auStack_2c0);
    func_0x000107c335cc();
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[0x55] == '\x01') {
    func_0x000107c29858();
    *(undefined1 *)(plVar2 + 0x54) = 0;
  }
  return;
}



/* Entry: 1005f3c30; end: 1005f3c4f;  */

undefined1  [16] FUN_1005f3c30(void)

{
  return ZEXT816(0x11058a168);
}



/* Entry: 1005f3c50; end: 1005f3d17;  */

void FUN_1005f3c50(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    func_0x000107c61524(param_1,0,2,&lStack_30,param_1 + 0x78);
  }
  return;
}



/* Entry: 1005f3d18; end: 1005f3d5b;  */

void FUN_1005f3d18(void)

{
  func_0x000107c61168(&PTR_PTR_1129dc638);
  return;
}



/* Entry: 1005f3d5c; end: 1005f3d73;  */

void FUN_1005f3d5c(undefined8 param_1,undefined4 param_2)

{
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0x34) = param_2;
  return;
}



/* Entry: 1005f3d74; end: 1005f3df3;  */

void FUN_1005f3d74(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  FUN_1005f3d5c();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341bc();
      func_0x000107c34228();
      FUN_10054f908();
      func_0x000107c34160();
      func_0x000107c3424c();
      func_0x000107c34390();
      func_0x00010054f944();
      func_0x000107c34384();
    }
  }
  FUN_1005f3df4(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005f3e04();
  return;
}



/* Entry: 1005f3df4; end: 1005f3e03;  */

undefined1  [16] FUN_1005f3df4(long param_1)

{
  long in_x9;
  long unaff_x29;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x29 + -0x34;
  auVar1._0_8_ = param_1 + in_x9;
  return auVar1;
}



/* Entry: 1005f3e04; end: 1005f3e27;  */

void FUN_1005f3e04(void)

{
  func_0x0001005ed940();
  FUN_1005f3e28();
  func_0x0001005edc50();
  func_0x0001005edc5c();
  FUN_1005f3f28();
  func_0x0001005edd60();
  FUN_1005f3f38();
  return;
}



/* Entry: 1005f3e28; end: 1005f3ecf;  */

long FUN_1005f3e28(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005f3e9c;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005f3e9c:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  func_0x0001005edc5c();
  FUN_1005f3f28();
  func_0x0001005edd60();
  FUN_1005f3f38();
  return param_1;
}



/* Entry: 1005f3ed0; end: 1005f3f27;  */

void FUN_1005f3ed0(void)

{
  func_0x0001005edc5c();
  FUN_1005f3f28();
  func_0x0001005edd60();
  FUN_1005f3f38();
  return;
}



/* Entry: 1005f3f28; end: 1005f3f37;  */

void FUN_1005f3f28(undefined8 param_1)

{
  int iVar1;
  
  FUN_1005edd44(param_1,1);
  iVar1 = (int)param_1;
  func_0x000107c6132c();
  if (iVar1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    FUN_1003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1005f3f38; end: 1005f3f5b;  */

void FUN_1005f3f38(void)

{
  FUN_1005ec7e4();
  FUN_1005f3f5c();
  return;
}



/* Entry: 1005f3f5c; end: 1005f3f8b;  */

void FUN_1005f3f5c(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_1005f3f98();
  return;
}



/* Entry: 1005f3f8c; end: 1005f3f97;  */

undefined8 FUN_1005f3f8c(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1005f3f98; end: 1005f3ffb;  */

void FUN_1005f3f98(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_1005f3f8c();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    func_0x000107c33514();
    func_0x000107c29920();
    func_0x000107c33500();
    func_0x000107c298cc();
    func_0x000107c33504();
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x58) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(lVar1 + 0x50) = 0;
  }
  return;
}



/* Entry: 1005f3ffc; end: 1005f401f;  */

void FUN_1005f3ffc(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_100100fec();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 1005f4020; end: 1005f404f;  */

void FUN_1005f4020(void)

{
  return;
}



/* Entry: 1005f4050; end: 1005f4083;  */

void FUN_1005f4050(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001005f4044();
  FUN_1005f4084(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1005f4084; end: 1005f40f7;  */

void FUN_1005f4084(long param_1,long param_2)

{
  char cVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  func_0x0001005f4044();
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 != *(char *)(param_2 + 0x50)) {
    if (cVar1 == '\0') {
      func_0x000107c298dc();
    }
    else {
      func_0x000107c334e8();
      func_0x000107c298dc();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 10) == '\x01') {
      FUN_100100fec();
      *(undefined1 *)(unaff_x19 + 10) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    uStack_68 = unaff_x20[1];
    uStack_70 = *unaff_x20;
    uStack_60 = unaff_x20[2];
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    uStack_50 = unaff_x20[4];
    uStack_58 = unaff_x20[3];
    uStack_40 = unaff_x20[6];
    uStack_48 = unaff_x20[5];
    uStack_30 = unaff_x20[8];
    uStack_38 = unaff_x20[7];
    uStack_28 = *(undefined4 *)(unaff_x20 + 9);
    func_0x000108791988();
    func_0x000108791988();
    func_0x000107c27914(&uStack_70);
    return;
  }
  return;
}



/* Entry: 1005f40f8; end: 1005f410f;  */

void FUN_1005f40f8(void)

{
  return;
}



/* Entry: 1005f4110; end: 1005f412f;  */

void FUN_1005f4110(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1005f4130; end: 1005f413f;  */

void FUN_1005f4130(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1005f4140; end: 1005f43cf;  */

void FUN_1005f4140(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_1038 [688];
  undefined1 auStack_d88 [688];
  undefined1 auStack_ad8 [688];
  undefined1 auStack_828 [688];
  long alStack_578 [85];
  byte bStack_2d0;
  long alStack_2c8 [85];
  byte bStack_20;
  long *plStack_18;
  undefined1 uStack_10;
  
  FUN_10056ad58();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  FUN_1005f43d0(auStack_ad8,param_2);
  FUN_1005f44f0(auStack_828,auStack_ad8);
  func_0x000107c60ee4(auStack_1038,0x2b0);
  FUN_1005f44f0(auStack_d88,auStack_1038);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1005f455c(alStack_2c8,auStack_828);
  FUN_1005f455c(alStack_578,auStack_d88);
  uStack_10 = 0;
  plStack_18 = param_1;
  do {
    if ((((bStack_20 & 1) == 0) && ((bStack_2d0 & 1) == 0)) || (alStack_2c8[0] == alStack_578[0])) {
      uStack_10 = 1;
      FUN_1005f45b4(&plStack_18);
      FUN_1005f45e0(alStack_578);
      FUN_1005f45e0(alStack_2c8);
      FUN_1005f45e0(auStack_d88);
      FUN_1005f45e0(auStack_1038);
      FUN_1005f45e0(auStack_828);
      FUN_1005f45e0(auStack_ad8);
      return;
    }
    plVar4 = alStack_2c8;
    func_0x000107c29870(plVar4);
    uVar5 = param_1[1];
    if (uVar5 < (ulong)param_1[2]) {
      func_0x000107c29868(uVar5,plVar4);
      lVar11 = uVar5 + 0x2a0;
    }
    else {
      lVar11 = uVar5 - *param_1;
      uVar5 = lVar11 / 0x2a0 + 1;
      if (0x61861861861861 < uVar5) {
        func_0x000107c299e4();
LAB_1005f4378:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005f437c);
        (*pcVar3)();
      }
      uVar2 = (param_1[2] - *param_1) / 0x2a0;
      uVar9 = uVar2 * 2;
      if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
        uVar9 = uVar5;
      }
      if (0x30c30c30c30c2f < uVar2) {
        uVar9 = 0x61861861861861;
      }
      if (uVar9 == 0) {
        lVar6 = 0;
      }
      else {
        if (0x61861861861861 < uVar9) {
          func_0x000104bd35f4();
          goto LAB_1005f4378;
        }
        lVar6 = uVar9 * 0x2a0;
        func_0x000107c60e20();
      }
      lVar11 = lVar6 + lVar11;
      func_0x000107c29868(lVar11,plVar4);
      lVar10 = *param_1;
      lVar1 = param_1[1];
      lVar12 = lVar11 + ((lVar1 - lVar10) / -0x2a0) * 0x2a0;
      lVar7 = lVar12;
      for (lVar8 = lVar10; lVar8 != lVar1; lVar8 = lVar8 + 0x2a0) {
        func_0x000107c29868(lVar7,lVar8);
        lVar7 = lVar7 + 0x2a0;
      }
      for (; lVar10 != lVar1; lVar10 = lVar10 + 0x2a0) {
        func_0x000107c29858(lVar10);
      }
      lVar11 = lVar11 + 0x2a0;
      lVar8 = *param_1;
      *param_1 = lVar12;
      param_1[1] = lVar11;
      param_1[2] = lVar6 + uVar9 * 0x2a0;
      if (lVar8 != 0) {
        func_0x000107c60e14();
      }
    }
    param_1[1] = lVar11;
    FUN_1005f3bc4(alStack_2c8);
  } while( true );
}



/* Entry: 1005f43d0; end: 1005f43f3;  */

void FUN_1005f43d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_2 = param_2 + 8;
  func_0x0001005f43e8(param_1,param_2);
  FUN_1005f4428(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1005f43f4; end: 1005f4427;  */

void FUN_1005f43f4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001005f43e8();
  FUN_1005f4428(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 1005f4428; end: 1005f4497;  */

void FUN_1005f4428(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_2d0 [672];
  
  func_0x0001005f43e8();
  cVar1 = *(char *)(param_1 + 0x2a0);
  if (cVar1 != *(char *)(param_2 + 0x2a0)) {
    if (cVar1 == '\0') {
      func_0x000107c33460();
      func_0x000107c29864();
    }
    else {
      func_0x000107c29864();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x2a0) == '\x01') {
      func_0x000107c29858();
      *(undefined1 *)(unaff_x19 + 0x2a0) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c33460();
    func_0x000107c33448();
    func_0x000108788e34(auStack_2d0,unaff_x20);
    func_0x000108789894();
    func_0x000108788d40();
    func_0x000108788d40(unaff_x19,auStack_2d0);
    func_0x000108788648(auStack_2d0);
    return;
  }
  return;
}



/* Entry: 1005f4498; end: 1005f44b3;  */

void FUN_1005f4498(void)

{
  return;
}



/* Entry: 1005f44b4; end: 1005f44ef;  */

void FUN_1005f44b4(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001005f44a0();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(unaff_x19 + 0x2a8) = 0;
  if (*(char *)(param_2 + 0x2a8) == '\x01') {
    func_0x000107c29864((undefined1 *)(param_1 + 8),param_2 + 8);
  }
  return;
}



/* Entry: 1005f44f0; end: 1005f453b;  */

void FUN_1005f44f0(undefined8 param_1)

{
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [680];
  
  FUN_1005f44b4(auStack_2e0);
  FUN_1005f44b4(param_1,auStack_2e0);
  FUN_1005f453c(auStack_2d8);
  return;
}



/* Entry: 1005f453c; end: 1005f455b;  */

void FUN_1005f453c(long param_1)

{
  if (*(char *)(param_1 + 0x2a0) == '\x01') {
    func_0x000107c29858();
  }
  return;
}



/* Entry: 1005f455c; end: 1005f45b3;  */

void FUN_1005f455c(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x0001005f44a0();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  if (*(char *)(param_2 + 0x2a8) == '\x01') {
    func_0x000107c299cc((undefined1 *)(param_1 + 8),param_2 + 8);
    *(undefined1 *)(unaff_x19 + 0x2a8) = 1;
  }
  return;
}



/* Entry: 1005f45b4; end: 1005f45df;  */

long FUN_1005f45b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1005f45e8(param_1);
  }
  return param_1;
}



/* Entry: 1005f45e0; end: 1005f45e7;  */

void FUN_1005f45e0(long param_1)

{
  if (*(char *)(param_1 + 0x2a8) == '\x01') {
    func_0x000107c29858();
  }
  return;
}



/* Entry: 1005f45e8; end: 1005f463b;  */

void FUN_1005f45e8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x2a0;
      func_0x000107c29858();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1005f463c; end: 1005f4667;  */

undefined8 FUN_1005f463c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1005f45e8(&uStack_28);
  return param_1;
}



/* Entry: 1005f4668; end: 1005f467f;  */

void FUN_1005f4668(void)

{
  return;
}



/* Entry: 1005f4680; end: 1005f46a3;  */

void FUN_1005f4680(undefined8 param_1)

{
  FUN_1005f46a4();
  func_0x0001005f46c4(param_1,0x30);
  return;
}



/* Entry: 1005f46a4; end: 1005f46d3;  */

void FUN_1005f46a4(void)

{
  return;
}



/* Entry: 1005f46d4; end: 1005f479f;  */

void FUN_1005f46d4(long param_1)

{
  code *extraout_x9;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1005f47a0();
    (*extraout_x9)();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1005f47a0();
                    /* WARNING: Could not recover jumptable at 0x0001005f477c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1005f47a0; end: 1005f47cb;  */

void FUN_1005f47a0(void)

{
  return;
}



/* Entry: 1005f47cc; end: 1005f495b;  */

void FUN_1005f47cc(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  long extraout_x8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined **ppuStack_78;
  undefined1 auStack_70 [24];
  undefined4 uStack_58;
  
  uStack_90 = 0;
  uStack_88 = 0;
  ppuStack_a0 = &PTR_DAT_110cc8300;
  uStack_98 = 0;
  uStack_80 = 4;
  func_0x0001005f47c0();
  FUN_1004c37a8(&ppuStack_a0,*(undefined4 *)(extraout_x8 + (long)param_2 * 4));
  func_0x0001004c394c();
  FUN_10002b838(auStack_b8);
  FUN_1005f495c(auStack_d0);
  FUN_1004c39d0(&ppuStack_a0,auStack_b8,auStack_d0);
  FUN_1005f4968(&ppuStack_a0,*(undefined4 *)(&UNK_10e56a518 + (long)param_7 * 4));
  FUN_10002b838(auStack_e8,"transactionId");
  FUN_1004c3860(&ppuStack_a0,auStack_e8,param_5,param_6);
  ppuStack_78 = &PTR_DAT_110cc8368;
  FUN_10015bc98(auStack_70,&uStack_98);
  ppuStack_78 = &PTR_DAT_110cc8300;
  uStack_58 = uStack_80;
  func_0x0001004c3944();
  func_0x0001004c3a2c();
  func_0x000107c60ca0(auStack_b8);
  pppuVar1 = &ppuStack_a0;
  FUN_1004c3a3c();
  FUN_1004c34c8();
  ppuVar2 = *pppuVar1;
  func_0x0001004c3a08();
  func_0x0001004c3a14();
  FUN_1004c34c8();
  (**(code **)(*(long *)*ppuVar2 + 8))(*ppuVar2,&ppuStack_78,1);
  FUN_1004c3a3c(&ppuStack_78);
  return;
}



/* Entry: 1005f495c; end: 1005f4967;  */

void FUN_1005f495c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  FUN_100060b18(param_1,&stack0xffffffffffffffe0);
  uVar1 = param_1[1];
  puVar2 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar2 = param_1;
  }
  uStack_21 = 0x2e;
  uStack_22 = 0x5f;
  func_0x0001004a4aa4(puVar2,(long)puVar2 + uVar1,&uStack_21,&uStack_22);
  return;
}



/* Entry: 1005f4968; end: 1005f499b;  */

void FUN_1005f4968(void)

{
  func_0x0001004c3788();
  FUN_1004c37dc();
  func_0x0001004c37f0();
  func_0x0001004c3944();
  return;
}



/* Entry: 1005f499c; end: 1005f49d3;  */

void FUN_1005f499c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_100164ee0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 1005f49d4; end: 1005f49eb;  */

undefined1 * FUN_1005f49d4(void)

{
  return &stack0x00001b58;
}



/* Entry: 1005f49ec; end: 1005f4a0f;  */

void FUN_1005f49ec(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  
  FUN_1005e3548();
  FUN_1005f4a10();
  UNRECOVERED_JUMPTABLE = *(code **)(extraout_x8 + 0x10);
  func_0x0001005f4a1c();
                    /* WARNING: Could not recover jumptable at 0x0001005e700c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1005f4a10; end: 1005f4a2f;  */

void FUN_1005f4a10(void)

{
  return;
}



/* Entry: 1005f4a30; end: 1005f4a8b;  */

void FUN_1005f4a30(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  while (param_2 != (long *)0x0) {
    lVar1 = (long)(param_2 + 2);
    param_2 = (long *)*param_2;
    func_0x000107c299e0(lVar1);
    func_0x000107c33560();
  }
  return;
}



/* Entry: 1005f4a8c; end: 1005f4aab;  */

void FUN_1005f4a8c(void)

{
  return;
}



/* Entry: 1005f4aac; end: 1005f4acf;  */

undefined8 FUN_1005f4aac(undefined8 param_1)

{
  func_0x0001005f4a94(param_1,0);
  return param_1;
}



/* Entry: 1005f4ad0; end: 1005f4ae3;  */

void FUN_1005f4ad0(void)

{
  return;
}



/* Entry: 1005f4ae4; end: 1005f4b3f;  */

undefined8 * FUN_1005f4ae4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [96];
  
  puVar1 = param_1;
  FUN_1005f4ad0();
  FUN_1005f4b8c(puVar1 + 1,auStack_80);
  FUN_1005f4110((ulong)auStack_80 | 8);
  uVar2 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar2);
  FUN_1005f4110(param_1 + 2);
  return param_1;
}



/* Entry: 1005f4b40; end: 1005f4b67;  */

void FUN_1005f4b40(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_1 + 0x50);
  if (cVar1 != *(char *)(param_2 + 0x50)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x50) == '\x01') {
        FUN_100100fec();
        *(undefined1 *)(param_1 + 0x50) = 0;
      }
      return;
    }
    func_0x0001087919e4();
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c334e4();
    func_0x000107c3194c();
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar7;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar6;
    *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
    return;
  }
  return;
}



/* Entry: 1005f4b68; end: 1005f4b8b;  */

undefined8 FUN_1005f4b68(undefined8 param_1)

{
  FUN_1005f4b40();
  return param_1;
}



/* Entry: 1005f4b8c; end: 1005f4bcf;  */

undefined8 * FUN_1005f4b8c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1005f4b68(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1005f4bd0; end: 1005f4bdf;  */

void FUN_1005f4bd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 1005f4be0; end: 1005f4c3b;  */

undefined8 * FUN_1005f4be0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_2e0 [688];
  
  FUN_1005f4bd0();
  FUN_1005f4c88(param_1 + 1,auStack_2e0);
  func_0x0001005f4cb8();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_1005f453c(param_1 + 2);
  return param_1;
}



/* Entry: 1005f4c3c; end: 1005f4c63;  */

void FUN_1005f4c3c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x54);
  if (cVar1 != *(char *)(param_2 + 0x54)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x54) == '\x01') {
        func_0x000107c29858();
        *(undefined1 *)(param_1 + 0x54) = 0;
      }
      return;
    }
    func_0x000108788e34();
    *(undefined1 *)(param_1 + 0x54) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001087895d8();
    *param_1 = *param_2;
    func_0x000107c3194c(param_1 + 1,param_2 + 1);
    func_0x000107c28960(unaff_x19 + 0x20,unaff_x20 + 0x20);
    func_0x0001087898c0();
    func_0x0001052b2b60();
    *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
    func_0x000107c3194c(unaff_x19 + 0x70,unaff_x20 + 0x70);
    func_0x000107c27b9c(unaff_x19 + 0x88,unaff_x20 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
    *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
    *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
    func_0x00010865f9c0(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
    func_0x00010878967c();
    func_0x0001052b2b60();
    func_0x0001052b2b60(unaff_x19 + 0x108,unaff_x20 + 0x108);
    func_0x0001052b2b60(unaff_x19 + 0x128,unaff_x20 + 0x128);
    func_0x000108789880();
    func_0x000107c28908();
    func_0x0001086ac3c8(unaff_x19 + 0x170,unaff_x20 + 0x170);
    func_0x00010878986c();
    func_0x000107c28908();
    func_0x0001052b2b60(unaff_x19 + 0x260,unaff_x20 + 0x260);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x291);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x289);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x280);
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x20 + 0x288);
    *(undefined8 *)(unaff_x19 + 0x280) = uVar4;
    *(undefined8 *)(unaff_x19 + 0x291) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x289) = uVar2;
    return;
  }
  return;
}



/* Entry: 1005f4c64; end: 1005f4c87;  */

undefined8 FUN_1005f4c64(undefined8 param_1)

{
  FUN_1005f4c3c();
  return param_1;
}



/* Entry: 1005f4c88; end: 1005f4caf;  */

undefined8 * FUN_1005f4c88(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1005f4c64(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1005f4cb0; end: 1005f4cbf;  */

void FUN_1005f4cb0(void)

{
  return;
}



/* Entry: 1005f4cc0; end: 1005f4cdb;  */

void FUN_1005f4cc0(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005f4cdc; end: 1005f4cf3;  */

void FUN_1005f4cdc(void)

{
  return;
}



/* Entry: 1005f4cf4; end: 1005f5547;  */

void FUN_1005f4cf4(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_ee8 [24];
  undefined1 auStack_ed0 [24];
  undefined1 auStack_eb8 [64];
  undefined1 auStack_e78 [24];
  long alStack_e60 [160];
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  long lStack_948;
  undefined4 uStack_940;
  undefined1 auStack_938 [104];
  undefined1 auStack_8d0 [192];
  ulong uStack_810;
  undefined8 uStack_808;
  undefined1 uStack_800;
  ulong uStack_7f0;
  undefined8 uStack_7e8;
  ulong uStack_7e0;
  undefined8 uStack_7d8;
  long alStack_7c8 [22];
  byte bStack_718;
  long alStack_710 [22];
  byte bStack_660;
  ulong uStack_650;
  undefined8 uStack_648;
  ulong uStack_640;
  long lStack_638;
  undefined4 uStack_630;
  undefined1 auStack_628 [104];
  long lStack_5c0;
  long alStack_5b8 [3];
  undefined4 uStack_5a0;
  byte bStack_568;
  undefined8 uStack_18;
  
  FUN_1005f4cdc();
  lVar14 = param_1;
  uVar10 = param_2;
  func_0x000100569594();
  uVar12 = 0x800286;
  if ((int)uVar10 == 0) {
    uVar12 = 0x800287;
  }
  alStack_e60[0] = CONCAT44(alStack_e60[0]._4_4_,uVar12);
  uStack_18 = extraout_x8;
  FUN_1005f5548(&lStack_5c0,*(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x40));
  lVar14 = 0;
  for (lVar15 = lStack_5c0; uVar6 = lVar15 == alStack_5b8[0], !(bool)uVar6; lVar15 = lVar15 + 0xf8)
  {
    uVar7 = *(ulong *)(param_1 + 0x28);
    func_0x000107c29a7c(uVar7,lVar15 + 0xd8);
    if ((uVar7 & 1) == 0) {
      if ((*(byte *)(lVar15 + 0x30) & 1) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(*(long *)(lVar15 + 0x38) + 0x40);
      }
      if (*(uint *)(lVar15 + 0xf0) < 3) {
        ppuVar1 = &PTR_PTR_113284418;
        if (*(undefined ***)(lVar15 + 0x38) != (undefined **)0x0) {
          ppuVar1 = *(undefined ***)(lVar15 + 0x38);
        }
        uVar7 = lVar15 + 0x60;
        func_0x000107c29adc(uVar7,ppuVar1,*(undefined8 *)(param_1 + 0x18));
        if ((((uint)uVar7 & 0xffff) < 0x100) || (9 < lVar14)) {
          func_0x000107c33720(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe0));
        }
        else {
          if ((uVar7 & 1) == 0) {
            func_0x000107c2a064(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),lVar15 + 0xd8);
          }
          else {
            func_0x000107c29844(*(long *)(param_1 + 0x18) + 0x40,lVar15 + 0xd8);
          }
          func_0x000107c33720(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe0));
          lVar14 = lVar14 + 1;
        }
      }
      else {
        func_0x000107c29a84(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xe0),alStack_e60,uVar12,
                            0x7f0284);
      }
    }
  }
  func_0x0001005f5dc0(&lStack_5c0);
  FUN_1005f5df4(auStack_8d0,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40));
  FUN_1005f3d74(auStack_938,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x40),2);
  lStack_948 = 0;
  uStack_950 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_940 = 0x3f800000;
  func_0x0001005f402c(&lStack_5c0,auStack_938);
  alStack_e60[9] = 0;
  alStack_e60[8] = 0;
  alStack_e60[0xb] = 0;
  alStack_e60[10] = 0;
  alStack_e60[5] = 0;
  alStack_e60[4] = 0;
  alStack_e60[7] = 0;
  alStack_e60[6] = 0;
  alStack_e60[1] = 0;
  alStack_e60[0] = 0;
  alStack_e60[3] = 0;
  alStack_e60[2] = 0;
  while ((((bStack_568 & 1) != 0 || ((alStack_e60[0xb] & 1U) != 0)) &&
         (uVar6 = lStack_5c0 == alStack_e60[0], !(bool)uVar6))) {
    plVar9 = &lStack_5c0;
    func_0x000107c298f4(plVar9);
    func_0x000107c29974(&uStack_960,plVar9,plVar9);
    FUN_1005f3f98(&lStack_5c0);
  }
  FUN_1005f611c(alStack_e60);
  func_0x0001005f6124();
  func_0x0001005f6130(alStack_710,auStack_8d0);
  FUN_1005f61e0(alStack_7c8);
  while ((((bStack_660 & 1) != 0 || ((bStack_718 & 1) != 0)) &&
         (uVar6 = alStack_710[0] == alStack_7c8[0], !(bool)uVar6))) {
    plVar9 = alStack_710;
    func_0x000107c28ef8();
    plVar11 = plVar9;
    func_0x000107c3371c();
    uVar7 = *(ulong *)(param_1 + 0x28);
    func_0x000107c29a7c(uVar7,plVar9 + 0x12);
    if (((uVar7 & 1) == 0) && (uVar6 = *(int *)((long)plVar11 + 0x44) == 3, !(bool)uVar6)) {
      func_0x000107c3371c();
      if (((int)param_2 != 0) && (uVar6 = *(int *)(uVar7 + 0x40) == 3, (bool)uVar6)) {
        *(undefined4 *)(uVar7 + 0x40) = 2;
      }
      func_0x000107c33710(auStack_e78);
      lVar14 = plVar9[3];
      func_0x000107c28f94(auStack_eb8,plVar9 + 6);
      func_0x000107c29a94(alStack_e60,auStack_e78,lVar14,auStack_eb8);
      func_0x000107c2a61c(auStack_eb8);
      FUN_100100fec(auStack_e78);
      lVar14 = *(long *)(param_1 + 0x18);
      FUN_10054f8dc(auStack_ed0,plVar9 + 0x12);
      uVar13 = *(undefined8 *)(uVar7 + 0x38);
      uVar12 = *(undefined4 *)(uVar7 + 0x30);
      uVar10 = *(undefined8 *)(uVar7 + 0x18);
      uVar2 = *(undefined8 *)(uVar7 + 0x20);
      uVar3 = *(undefined4 *)(uVar7 + 0x40);
      uVar4 = *(undefined4 *)(uVar7 + 0x28);
      uVar5 = *(undefined4 *)(uVar7 + 0x48);
      func_0x000107c28edc();
      func_0x000107c28f70(&lStack_5c0,lVar14 + 0x30,auStack_ed0,uVar10,uVar13,uVar12,uVar2,uVar3,
                          uVar4,uVar5,2);
      FUN_100100fec(auStack_ed0);
      func_0x000107c29a80(param_1,alStack_5b8 + 2);
      func_0x000107c29a38(&uStack_7e0);
      uStack_648 = uStack_7d8;
      uStack_650 = uStack_7e0;
      uStack_7d8 = 0;
      uStack_7e0 = 0;
      func_0x000107c33718(auStack_628);
      func_0x000104be3970(&uStack_650);
      func_0x000107c29a6c(&uStack_7e0);
      uStack_650 = uStack_650 & 0xffffffffffffff00;
      uStack_640 = uStack_640 & 0xffffffffffffff00;
      func_0x000107c336e4();
      func_0x000107c290bc(&uStack_650);
      func_0x000107c29a90(auStack_628);
      func_0x000107c336ec();
      func_0x000107c28f6c(alStack_e60);
    }
    FUN_1005f6004(alStack_710);
  }
  func_0x0001005f61e8(alStack_7c8);
  func_0x0001005f61e8(alStack_710);
  FUN_1005f6210();
  FUN_1005f621c(alStack_e60);
  FUN_1005f6210();
  FUN_1005f3d74(auStack_628);
  lStack_638 = 0;
  uStack_640 = 0;
  uStack_648 = 0;
  uStack_650 = 0;
  uStack_630 = 0x3f800000;
  func_0x0001005f402c(&lStack_5c0,auStack_628);
  alStack_710[0xb] = 0;
  alStack_710[10] = 0;
  alStack_710[9] = 0;
  alStack_710[8] = 0;
  alStack_710[7] = 0;
  alStack_710[6] = 0;
  alStack_710[5] = 0;
  alStack_710[4] = 0;
  alStack_710[3] = 0;
  alStack_710[2] = 0;
  alStack_710[1] = 0;
  alStack_710[0] = 0;
  while ((((bStack_568 & 1) != 0 || ((alStack_710[0xb] & 1U) != 0)) &&
         (uVar6 = lStack_5c0 == alStack_710[0], !(bool)uVar6))) {
    plVar9 = &lStack_5c0;
    func_0x000107c298f4(plVar9);
    func_0x000107c29974(&uStack_650,plVar9,plVar9);
    FUN_1005f3f98(&lStack_5c0);
  }
  FUN_1005f611c(alStack_710);
  FUN_1005f4110(alStack_5b8);
  FUN_1005f64c0(alStack_710,alStack_e60);
  FUN_1005f61e0(alStack_7c8);
  while ((((bStack_660 & 1) != 0 || ((bStack_718 & 1) != 0)) &&
         (uVar6 = alStack_710[0] == alStack_7c8[0], !(bool)uVar6))) {
    plVar9 = alStack_710;
    func_0x000107c29a8c(plVar9);
    puVar8 = &uStack_650;
    func_0x000107c299ec(puVar8,plVar9 + 0x11);
    if (puVar8 != (ulong *)0x0) {
      uVar7 = *(ulong *)(param_1 + 0x28);
      func_0x000107c29a7c(uVar7,plVar9 + 0x11);
      if (((uVar7 & 1) == 0) && (uVar6 = *(int *)((long)puVar8 + 0x6c) == 3, !(bool)uVar6)) {
        if (((int)param_2 != 0) && (uVar6 = (int)puVar8[0xd] == 3, (bool)uVar6)) {
          *(undefined4 *)(puVar8 + 0xd) = 2;
        }
        func_0x000107c28ee0(&lStack_5c0,*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x18) + 0x30,
                            puVar8 + 5,plVar9);
        func_0x000107c29a80(param_1,alStack_5b8 + 2);
        func_0x000107c29a38(&uStack_7f0);
        uStack_808 = uStack_7e8;
        uStack_810 = uStack_7f0;
        uStack_7e8 = 0;
        uStack_7f0 = 0;
        func_0x000107c33718(&uStack_7e0);
        func_0x000104be3970(&uStack_810);
        func_0x000107c29a6c(&uStack_7f0);
        uStack_810 = uStack_810 & 0xffffffffffffff00;
        uStack_800 = 0;
        func_0x000107c336e4();
        func_0x000107c290bc(&uStack_810);
        func_0x000107c29a90(&uStack_7e0);
        func_0x000107c336ec();
      }
    }
    FUN_1005f6438(alStack_710);
  }
  func_0x0001005f6590(alStack_7c8);
  func_0x0001005f6590(alStack_710);
  lVar14 = lStack_638;
  func_0x0001005f4a64(&uStack_650);
  FUN_1005f4ae4(auStack_628);
  FUN_1005f65b8(alStack_e60);
  plVar11 = *(long **)(*(long *)(param_1 + 0x18) + 0xe0);
  FUN_1005f66b0();
  alStack_5b8[1] = 0;
  alStack_5b8[2] = 0;
  lStack_5c0 = extraout_x8_00 + 0x10;
  alStack_5b8[0] = 0;
  uStack_5a0 = 0x1b1;
  FUN_10002b838(auStack_ee8,&UNK_10f4baf56);
  plVar9 = &lStack_5c0;
  FUN_1005e34cc(plVar9,auStack_ee8,param_2);
  (**(code **)(*plVar11 + 0x78))(plVar11,plVar9,lStack_948 + lVar14);
  func_0x0001005f66bc();
  FUN_1005505e4(&lStack_5c0);
  func_0x0001005f4a64(&uStack_960);
  FUN_1005f4ae4(auStack_938);
  FUN_1005f66c4(auStack_8d0);
  func_0x000100569d3c(uStack_18);
  if (!(bool)uVar6) {
    func_0x000107c60e78();
    FUN_1005505e4(&lStack_5c0);
    func_0x0001005f4a64(&uStack_960);
    FUN_1005f4ae4(auStack_938);
    FUN_1005f66c4(auStack_8d0);
    do {
      func_0x000107c336a4();
      func_0x0001005f5dc0(&lStack_5c0);
    } while( true );
  }
  return;
}



/* Entry: 1005f5548; end: 1005f55eb;  */

void FUN_1005f5548(void)

{
  undefined1 in_ZR;
  undefined1 auStack_180 [296];
  undefined1 auStack_58 [40];
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c34214(auStack_58);
      func_0x000107c34310();
      FUN_10054f908();
      func_0x000107c34198();
      func_0x000107c34394();
      func_0x000107c34428();
      func_0x000107c34468();
      func_0x000107c34460();
    }
  }
  FUN_1005f55ec();
  FUN_1005f56a0();
  FUN_1005f5810();
  FUN_1005f5834();
  FUN_1005f5c74(auStack_180);
  return;
}


