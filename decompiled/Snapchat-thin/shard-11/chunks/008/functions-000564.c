/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10896b680; end: 10896b6a3;  */

undefined8 FUN_10896b680(undefined8 param_1)

{
  FUN_10896b63c();
  return param_1;
}



/* Entry: 10896b6a4; end: 10896b713;  */

void FUN_10896b6a4(void)

{
  long unaff_x19;
  
  func_0x0001089716fc();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x18))();
  return;
}



/* Entry: 10896b714; end: 10896b76b;  */

void FUN_10896b714(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_1[8] = param_2[8];
  uVar1 = param_2[9];
  param_2[9] = 0;
  param_1[9] = uVar1;
  return;
}



/* Entry: 10896b76c; end: 10896b7cb;  */

undefined1 * FUN_10896b76c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar2 = auStack_70;
  func_0x0001089714ac();
  func_0x000108971cac();
  uVar1 = *(long *)(param_1 + 0x20) == 0;
  func_0x000108971ee0(*(undefined8 *)(param_2 + 0x48),auStack_70);
  func_0x000108971d04();
  func_0x000108971d40();
  func_0x000108971480(uStack_38);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  FUN_10896b51c();
  return puVar2;
}



/* Entry: 10896b7cc; end: 10896b7ef;  */

undefined8 FUN_10896b7cc(undefined8 param_1)

{
  FUN_10896b51c();
  return param_1;
}



/* Entry: 10896b7f0; end: 10896b847;  */

undefined8 * FUN_10896b7f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x000108971ffc();
  func_0x000108971bec();
  *param_1 = &PTR_FUN_110aa00a0;
  param_1[1] = unaff_x20;
  param_1[2] = unaff_x19;
  param_1[3] = param_2;
  func_0x000108972200(*unaff_x21);
  return param_1 + 1;
}



/* Entry: 10896b848; end: 10896b90b;  */

void FUN_10896b848(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *unaff_x19;
  undefined1 auStack_50 [16];
  
  func_0x000108971918();
  func_0x00010894f204();
  if ((char)unaff_x19[0x14] == '\x01') {
    func_0x00010bd4058c(unaff_x19[6],param_5,0);
  }
  else {
    param_2 = param_2 + 0x10;
    func_0x00010bd42f38(param_2,param_3,param_4,param_5);
    plVar1 = (long *)(unaff_x19[6] + 0xf0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)param_2 != 0) {
      (**(code **)(*unaff_x19 + 0x28))();
    }
  }
  FUN_10894f570(auStack_50);
  return;
}



/* Entry: 10896b90c; end: 10896ba93;  */

void FUN_10896b90c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  code *unaff_x20;
  undefined1 auStack_1f0 [80];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 uStack_169;
  undefined8 auStack_168 [9];
  undefined1 auStack_120 [32];
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [112];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x000108971494();
  lStack_180 = param_2;
  lStack_178 = param_2;
  uStack_38 = extraout_x8;
  func_0x00010896b568(auStack_e0,param_2 + 0x88);
  FUN_10896b714(auStack_1f0,unaff_x20 + 0x38);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0x28);
  puStack_188 = auStack_1f0;
  FUN_10896ba94(&puStack_188);
  if (unaff_x19 != 0) {
    func_0x000108971ba0();
    if (extraout_x8_00 == 0) {
      FUN_10896bae0(auStack_1f0);
    }
    else {
      func_0x000108971524();
      func_0x000108971da4();
      if (extraout_x8_01 == 0) {
        unaff_x20 = *(code **)(extraout_x9 + 0x10);
        puVar1 = auStack_168;
        FUN_10896bb0c(puVar1,auStack_1f0);
        puStack_f8 = &uStack_169;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        FUN_10896bb0c(puVar1 + 1,auStack_168);
        *puVar1 = FUN_10896bb2c;
        uStack_f0 = 0;
        uStack_e8 = 0;
        puStack_100 = puVar1;
        FUN_10896bbd0(&puStack_f8);
        (*unaff_x20)(auStack_70,&puStack_100);
        FUN_10894e00c(&puStack_100);
        FUN_108968f38(auStack_120);
      }
      else {
        func_0x0001089717e4();
      }
      func_0x0001089717d4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108971690();
  func_0x000108971f44();
  ppuVar2 = &puStack_188;
  FUN_10896bc80();
  func_0x000108971480(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10894e00c(&puStack_100);
  func_0x0001089719b4(auStack_168);
  func_0x0001089717d4();
  DataMemoryBarrier(2,3);
  func_0x000108971690();
  func_0x000108971f44();
  FUN_10896bc80(&puStack_188);
  func_0x000108971660();
  func_0x000108971a58();
  if (unaff_x20 != (code *)0x0) {
    FUN_10896b6a4(unaff_x20 + 0x88);
    FUN_108968f38(unaff_x20 + 0x80);
    ppuVar2[2] = (undefined1 *)0x0;
  }
  if (ppuVar2[1] != (undefined1 *)0x0) {
    func_0x0001089720ac(*ppuVar2 + 0x48);
    ppuVar2[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 10896ba94; end: 10896badf;  */

void FUN_10896ba94(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896b6a4(unaff_x20 + 0x88);
    FUN_108968f38(unaff_x20 + 0x80);
    unaff_x19[2] = 0;
  }
  if (unaff_x19[1] != 0) {
    func_0x0001089720ac(*unaff_x19 + 0x48);
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10896bae0; end: 10896bb07;  */

void FUN_10896bae0(long param_1)

{
  func_0x000108971b4c(*(undefined8 *)(param_1 + 0x60));
  FUN_10896a30c();
  return;
}



/* Entry: 10896bb08; end: 10896bb0b;  */

void FUN_10896bb08(long param_1)

{
  func_0x000108971b4c(*(undefined8 *)(param_1 + 0x60));
  FUN_10896a30c();
  return;
}



/* Entry: 10896bb0c; end: 10896bb2b;  */

void FUN_10896bb0c(void)

{
  FUN_10896b714();
  func_0x000108972274();
  return;
}



/* Entry: 10896bb2c; end: 10896bb8b;  */

void FUN_10896bb2c(void)

{
  int unaff_w19;
  undefined1 auStack_a8 [104];
  undefined1 auStack_40 [32];
  
  func_0x0001089714c0();
  func_0x000108971adc();
  FUN_10896bb0c();
  FUN_10896bb8c(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896bae0(auStack_a8);
  }
  func_0x0001089719b4(auStack_a8);
  FUN_10896bbd0(auStack_40);
  return;
}



/* Entry: 10896bb8c; end: 10896bbcf;  */

void FUN_10896bb8c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_108968f38(extraout_x8 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896bbd0; end: 10896bbf3;  */

undefined8 FUN_10896bbd0(undefined8 param_1)

{
  FUN_10896bb8c();
  return param_1;
}



/* Entry: 10896bbf4; end: 10896bc77;  */

void FUN_10896bbf4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((param_2 & 7) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = *(long *)(lVar1 + 0x68);
    func_0x00010894f204(auStack_40,lVar3 + 0x38);
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010bd43240(lVar1 + 0x38,uVar2,&uStack_50,(long *)(param_1 + 8));
    func_0x00010894f1d0(auStack_40);
    func_0x00010bd40720(*(undefined8 *)(lVar3 + 0x30),&uStack_50);
    FUN_10894f514(&uStack_50);
    func_0x000108971f00();
  }
  return;
}



/* Entry: 10896bc78; end: 10896bc7f;  */

void FUN_10896bc78(void)

{
  return;
}



/* Entry: 10896bc80; end: 10896bca3;  */

undefined8 FUN_10896bc80(undefined8 param_1)

{
  FUN_10896ba94();
  return param_1;
}



/* Entry: 10896bca4; end: 10896be83;  */

long * FUN_10896bca4(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined8 uVar10;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long **pplVar11;
  ulong unaff_x22;
  long lVar12;
  long lVar13;
  long *plStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  ulong uStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long lStack_a8;
  long alStack_a0 [7];
  undefined8 uStack_68;
  
  func_0x000108971494();
  *(int *)(param_1 + 0x28) = param_4;
  uStack_68 = extraout_x8;
  if (param_4 == 0) {
    func_0x000108971628();
    if ((unaff_x21 != (long *)0x0) || ((int)param_1 != 0)) {
      in_CY = (ulong)unaff_x19[3] <= (ulong)unaff_x19[4];
      in_ZR = unaff_x19[4] == unaff_x19[3];
      if ((!(bool)in_CY) && (func_0x000108971768(), (param_1 & 1) == 0)) {
        lVar12 = *unaff_x19;
        if ((lVar12 == 0) || (*(int *)(lVar12 + 8) == 0)) {
          uVar10 = 0x10000;
          goto LAB_10896bce4;
        }
        func_0x000108971b94();
      }
    }
    func_0x000108972078();
    plVar5 = unaff_x19 + 6;
    plVar4 = alStack_a0;
    FUN_10896a30c();
  }
  else {
    func_0x000108971768();
    func_0x00010897206c();
    uVar10 = 0;
    if ((bool)in_ZR) {
      uVar10 = extraout_x8_00;
    }
    lVar12 = *unaff_x19;
LAB_10896bce4:
    func_0x0001089722a8(uVar10);
    plVar5 = (long *)unaff_x19[1];
    lVar9 = unaff_x19[2];
    func_0x000108972230();
    lVar1 = extraout_x9_00;
    if ((bool)in_CY) {
      lVar1 = extraout_x8_01;
    }
    lVar13 = *plVar5;
    lVar3 = unaff_x19[5];
    uVar2 = *(uint *)((long)unaff_x19 + 0x4c);
    plStack_d0 = unaff_x19 + 0xf;
    unaff_x20 = 0x158;
    lStack_a8 = lVar12;
    func_0x00010bd3faa4();
    unaff_x21 = plVar5 + 1;
    unaff_x22 = (ulong)((int)lVar3 == 0 || uVar2 == 0);
    lVar3 = unaff_x20;
    func_0x000108972250((int)*unaff_x21);
    func_0x000108971af8(*(undefined8 *)(lVar13 + 0x30));
    *(long *)(lVar3 + 0x50) = lVar9 + extraout_x9;
    *(long *)(lVar3 + 0x58) = lVar1;
    func_0x000108971ea4();
    func_0x00010896c2b8();
    FUN_10894fe4c(unaff_x20 + 0xe8,0,0,plVar5 + 4);
    lVar9 = *(long *)(unaff_x20 + 0x108);
    func_0x000108971ee0(*(undefined8 *)(unaff_x20 + 0xe0),alStack_a0);
    FUN_10896a1b4(unaff_x20 + 0x120,lVar9 != 0,alStack_a0,plVar5 + 4);
    func_0x00010bd43af0(alStack_a0);
    if (lVar12 != 0) {
      plVar4 = &lStack_a8;
      FUN_108969e20(plVar4,*(undefined8 *)(lVar13 + 0x28),plVar5 + 2,unaff_x21,1);
      *(long **)(ulong)uVar2 = plVar4;
    }
    in_ZR = lVar1 == 0;
    func_0x000108972048(*(undefined1 *)((long)plVar5 + 0xc));
    plVar5 = (long *)(lVar13 + 0x28);
    plVar4 = unaff_x21;
    func_0x000108971a9c(plVar5,unaff_x21,1,unaff_x20,unaff_x22);
    func_0x000108971668();
    FUN_10896c2e4();
  }
  func_0x000108971480(uStack_68);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  func_0x000108971660();
  pcStack_d8 = FUN_10896be84;
  if (plVar4 == (long *)0x0) {
    pplVar11 = (long **)0x0;
  }
  else {
    pplVar7 = &plStack_118;
    plVar8 = plVar4;
    plStack_118 = plVar4;
    uStack_100 = unaff_x22;
    plStack_f8 = unaff_x21;
    lStack_f0 = unaff_x20;
    plStack_e8 = plVar5;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000108971bec();
    pplVar11 = pplVar7 + 1;
    *pplVar11 = (long *)0x0;
    *pplVar7 = (long *)&PTR_FUN_110aa00d8;
    *(undefined4 *)(pplVar7 + 2) = 0;
    pplVar7[3] = plVar8;
    uStack_110 = 0;
    *plVar4 = (long)pplVar7;
    plStack_108 = plVar8;
    func_0x00010bd3f974(&uStack_110);
  }
  *plVar6 = (long)pplVar11;
  return plVar6;
}



/* Entry: 10896be84; end: 10896bef3;  */

undefined8 * FUN_10896be84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  if (param_2 == (undefined8 *)0x0) {
    ppuVar3 = (undefined8 **)0x0;
  }
  else {
    ppuVar1 = &puStack_48;
    puVar2 = param_2;
    puStack_48 = param_2;
    func_0x000108971bec();
    ppuVar3 = ppuVar1 + 1;
    *ppuVar3 = (undefined8 *)0x0;
    *ppuVar1 = &PTR_FUN_110aa00d8;
    *(undefined4 *)(ppuVar1 + 2) = 0;
    ppuVar1[3] = puVar2;
    uStack_40 = 0;
    *param_2 = ppuVar1;
    puStack_38 = puVar2;
    func_0x00010bd3f974(&uStack_40);
  }
  *param_1 = ppuVar3;
  return param_1;
}



/* Entry: 10896bef4; end: 10896bf17;  */

void FUN_10896bef4(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = param_2 & 3;
  if (((param_2 & 3) != 0) && (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010896bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10896bf18; end: 10896bf4f;  */

undefined1  [16] FUN_10896bf18(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1[3];
  *param_1 = &PTR_FUN_110aa00d8;
  func_0x00010bd3f73c(param_1 + 1);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10896bf50; end: 10896c0df;  */

void FUN_10896bf50(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_270 [128];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined1 uStack_1b1;
  undefined1 auStack_1b0 [120];
  undefined1 auStack_138 [48];
  undefined1 *puStack_108;
  undefined1 auStack_f0 [32];
  long lStack_d0;
  undefined1 auStack_b8 [32];
  long lStack_98;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [32];
  long lStack_58;
  undefined8 uStack_48;
  
  func_0x000108971494();
  lStack_1c8 = param_2;
  lStack_1c0 = param_2;
  uStack_48 = extraout_x8;
  func_0x00010bd3f54c(auStack_f0,param_2 + 0xe8);
  func_0x00010bd3f54c(auStack_b8,unaff_x20 + 0x120);
  func_0x0001089722b4();
  func_0x00010896c2b8();
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108971f88();
  puStack_1d0 = auStack_270;
  FUN_10896c0e0(&puStack_1d0);
  if (unaff_x19 != 0) {
    if (lStack_d0 == 0 && lStack_98 == 0) {
      FUN_10896c134(auStack_270);
    }
    else {
      func_0x000108971968();
      func_0x000108971814(auStack_80,auStack_b8);
      if (*(long *)(lStack_58 + 0x18) == 0) {
        unaff_x20 = *(long *)(lStack_58 + 0x10);
        FUN_10896c160(auStack_1b0,auStack_270);
        puStack_108 = &uStack_1b1;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        func_0x000108972314();
        FUN_10896c160();
        func_0x00010897223c(FUN_10896c194);
        FUN_10896c228();
        func_0x0001089721d4();
        func_0x000108971fbc();
        FUN_108968f38(auStack_78);
      }
      else {
        func_0x0001089719bc(auStack_80,FUN_10896c15c);
      }
      func_0x000108971bc4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108971a90();
  func_0x00010896c24c(auStack_f0);
  ppuVar1 = &puStack_1d0;
  FUN_10896c2e4();
  func_0x000108971480(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971fbc();
  FUN_108968f38(auStack_138);
  func_0x000108971bc4();
  DataMemoryBarrier(2,3);
  func_0x000108971a90();
  func_0x00010896c24c(auStack_f0);
  FUN_10896c2e4(&puStack_1d0);
  func_0x000108971660();
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    func_0x00010896c24c(unaff_x20 + 0xe8);
    FUN_108968f38(unaff_x20 + 0xe0);
    ppuVar1[2] = (undefined1 *)0x0;
  }
  if (ppuVar1[1] != (undefined1 *)0x0) {
    func_0x00010bd3facc(ppuVar1[1],0x158);
    ppuVar1[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 10896c0e0; end: 10896c133;  */

void FUN_10896c0e0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896c24c(unaff_x20 + 0xe8);
    FUN_108968f38(unaff_x20 + 0xe0);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(unaff_x19 + 8),0x158);
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896c134; end: 10896c15b;  */

void FUN_10896c134(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x90),param_1,param_2,
                      *(undefined8 *)(param_1 + 0x98));
  FUN_10896bca4();
  return;
}



/* Entry: 10896c15c; end: 10896c15f;  */

void FUN_10896c15c(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x90),param_1,param_2,
                      *(undefined8 *)(param_1 + 0x98));
  FUN_10896bca4();
  return;
}



/* Entry: 10896c160; end: 10896c193;  */

void FUN_10896c160(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010896c2b8();
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  return;
}



/* Entry: 10896c194; end: 10896c1ef;  */

void FUN_10896c194(void)

{
  int unaff_w19;
  undefined1 auStack_e0 [160];
  undefined1 auStack_40 [32];
  
  func_0x0001089714c0();
  func_0x000108971888();
  FUN_10896c160();
  FUN_10896c1f0(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896c134(auStack_e0);
  }
  func_0x000108971a90();
  FUN_10896c228(auStack_40);
  return;
}



/* Entry: 10896c1f0; end: 10896c227;  */

void FUN_10896c1f0(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    func_0x0001089718d8();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108971aec();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896c228; end: 10896c24b;  */

undefined8 FUN_10896c228(undefined8 param_1)

{
  FUN_10896c1f0();
  return param_1;
}



/* Entry: 10896c24c; end: 10896c2e3;  */

void FUN_10896c24c(void)

{
  long unaff_x19;
  
  func_0x0001089716fc();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x18))();
  return;
}



/* Entry: 10896c2e4; end: 10896c307;  */

undefined8 FUN_10896c2e4(undefined8 param_1)

{
  FUN_10896c0e0();
  return param_1;
}



/* Entry: 10896c308; end: 10896c363;  */

void FUN_10896c308(void)

{
  undefined8 *puVar1;
  long *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000108971ffc();
  puVar1 = (undefined8 *)0x80;
  FUN_108968564();
  *puVar1 = FUN_108970340;
  puVar1[1] = FUN_108970584;
  puVar1[0xd] = unaff_x19;
  puVar1[0xe] = unaff_x21;
  puVar1[0xc] = unaff_x20;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[2] = puVar1;
  puVar1[3] = 0;
  *extraout_x8 = (long)(puVar1 + 2);
  *(undefined1 *)(puVar1 + 0xf) = 0;
  return;
}



/* Entry: 10896c364; end: 10896c543;  */

void FUN_10896c364(ulong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 **ppuVar5;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long *plVar8;
  long unaff_x21;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 **ppuVar13;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined4 uStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  
  func_0x0001089717c8();
  *(int *)(param_1 + 0x28) = param_4;
  if (param_4 != 0) {
    func_0x000108971768();
    func_0x00010897206c();
    uVar6 = 0;
    if ((bool)in_ZR) {
      uVar6 = extraout_x8_00;
    }
    puVar9 = (undefined8 *)*unaff_x19;
LAB_10896c3a0:
    lVar7 = unaff_x19[2];
    puStack_98 = (undefined8 *)unaff_x19[1];
    uVar3 = unaff_x19[3];
    uVar1 = unaff_x19[4];
    if (uVar3 <= (ulong)unaff_x19[4]) {
      uVar1 = uVar3;
    }
    uVar2 = uVar3 - uVar1;
    if (uVar6 <= uVar3 - uVar1) {
      uVar2 = uVar6;
    }
    puVar11 = puStack_98 + 1;
    uVar12 = *puStack_98;
    puStack_68 = puVar9;
    if (puVar9 == (undefined8 *)0x0) {
      ppuVar13 = (undefined8 **)0x0;
      lStack_a0 = 0;
    }
    else {
      ppuVar5 = &puStack_68;
      func_0x000108971bec();
      ppuVar13 = ppuVar5 + 1;
      *ppuVar13 = (undefined8 *)0x0;
      *ppuVar5 = &PTR_DAT_110aa0030;
      *(undefined4 *)(ppuVar5 + 2) = 0;
      ppuVar5[3] = param_2;
      uStack_108 = 0;
      *puVar9 = ppuVar5;
      puStack_100 = param_2;
      func_0x00010bd3f974(&uStack_108);
      lStack_a0 = *unaff_x19;
      puStack_98 = (undefined8 *)unaff_x19[1];
    }
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    lStack_88 = unaff_x19[3];
    lStack_90 = unaff_x19[2];
    lStack_80 = unaff_x19[4];
    uStack_78 = (undefined4)unaff_x19[5];
    lStack_70 = unaff_x19[6];
    unaff_x19[6] = 0;
    uStack_108 = 0;
    puStack_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    ppuStack_f0 = ppuVar13;
    uStack_e8 = uVar12;
    puStack_e0 = puVar11;
    lStack_d8 = lVar7 + uVar1;
    uStack_d0 = uVar2;
    func_0x00010897178c();
    FUN_10896c544();
    FUN_108968f38(&lStack_70);
    return;
  }
  func_0x000108971628();
  iVar4 = (int)param_1;
  if (((unaff_x21 != 0) || (iVar4 != 0)) && ((ulong)unaff_x19[4] < (ulong)unaff_x19[3])) {
    func_0x000108971768();
    iVar4 = (int)param_1;
    if ((param_1 & 1) == 0) {
      puVar9 = (undefined8 *)*unaff_x19;
      if ((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 1) == 0)) {
        uVar6 = 0x10000;
        goto LAB_10896c3a0;
      }
      func_0x000108971b94();
    }
  }
  plVar8 = unaff_x19 + 6;
  lVar10 = unaff_x19[4];
  *(long **)(*(long *)(*plVar8 + 0x58) + 8) = plVar8;
  func_0x000108971768();
  lVar7 = *(long *)(*plVar8 + 0x58);
  if (iVar4 == 0) {
    *(long *)(lVar7 + 0x20) = lVar10;
    *(undefined1 *)(lVar7 + 0x28) = 1;
  }
  else {
    func_0x00010bdb1c9c();
  }
  func_0x0001089716d4(*plVar8);
  FUN_10897219c();
  func_0x000108971ddc();
  puVar9 = *(undefined8 **)(extraout_x8 + 0x58);
  do {
    (**(code **)*puVar9)();
    if (*unaff_x19 == 0) {
      return;
    }
    puVar9 = *(undefined8 **)(*unaff_x19 + 0x58);
  } while (puVar9 != (undefined8 *)0x0);
  *unaff_x19 = 0;
  FUN_108968df8();
  func_0x0001089719fc();
  return;
}



/* Entry: 10896c544; end: 10896c777;  */

void FUN_10896c544(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined8 unaff_x23;
  long unaff_x24;
  long lVar6;
  long lStack_100;
  long lStack_f8;
  long *plStack_70;
  long lStack_58;
  long lStack_50;
  
  func_0x000108971b78();
  *(int *)(param_1 + 0x28) = param_4;
  if (param_4 == 0) goto LAB_10896c5a0;
  do {
    param_1 = unaff_x19[2];
    lStack_f8 = unaff_x19[4];
    lStack_100 = unaff_x19[3];
    func_0x00010bd45e80(param_1,&lStack_100,unaff_x19 + 6,unaff_x19 + 9);
    iVar2 = (int)param_1;
    *(int *)((long)unaff_x19 + 0x2c) = iVar2;
    uVar1 = iVar2 == -2;
    if ((bool)uVar1) {
      lVar5 = unaff_x19[2];
      if (*(long *)(lVar5 + 0x158) == 0) {
        func_0x000108972140();
        func_0x000108972268();
        if ((bool)uVar1) {
          FUN_10896a568();
          func_0x000108971be0();
          lVar5 = unaff_x19[1];
          lStack_f8 = *(undefined8 *)(unaff_x19[2] + 0x148);
          lStack_100 = *(long *)(unaff_x19[2] + 0x140);
          goto LAB_10896c724;
        }
        lVar5 = unaff_x20 + 0x10;
        goto LAB_10896c74c;
      }
      func_0x000108971b60();
      iVar2 = (int)lVar5;
      func_0x000108972224();
    }
    else {
      uVar1 = iVar2 == -1 || iVar2 == 1;
      if ((bool)uVar1) {
        func_0x000108972170(unaff_x19[2]);
        func_0x000108972268();
        if ((bool)uVar1) {
          FUN_10896a568();
          func_0x000108971640();
          func_0x000108972160(unaff_x19[2]);
          func_0x000108971c04();
          func_0x000108972054();
          func_0x00010896cc48();
          func_0x00010897178c();
          FUN_10896d000();
          FUN_108968f38(unaff_x22 + 0xb0);
          return;
        }
        lVar5 = unaff_x20 + 0x88;
LAB_10896c74c:
        plVar3 = unaff_x19;
        func_0x000108971db0(lVar5);
        plStack_70 = plVar3 + 0x10;
        lVar4 = 0x130;
        func_0x00010bd3faa4();
        lStack_58 = lVar4;
        func_0x000108971718(FUN_10896cd34);
        func_0x00010896cc48();
        lVar5 = lVar4 + 0xc0;
        FUN_10896ccb0(lVar5,lVar4 + 0x38,unaff_x23);
        lStack_50 = lVar4;
        if (unaff_x24 != 0) {
          func_0x000108971eb0();
          *(long *)(lVar4 + 0x30) = lVar5;
        }
        *(undefined1 *)(unaff_x19 + 2) = 1;
        func_0x000108971cd4(*(undefined8 *)(unaff_x20 + 0x68));
        func_0x000108971668();
        FUN_10896cfdc();
        return;
      }
      if ((int)unaff_x20 != 0) {
        lVar5 = unaff_x19[1];
        lStack_100 = *(long *)(unaff_x19[2] + 0x140);
        lStack_f8 = 0;
LAB_10896c724:
        FUN_10896c794(lVar5,&lStack_100);
        return;
      }
LAB_10896c5a0:
      lVar5 = 0;
      if ((unaff_x22 != -1) && (func_0x0001089720a4(), lVar5 = unaff_x22, (param_1 & 1) == 0)) {
        lVar6 = unaff_x21[1];
        lVar4 = *unaff_x21;
        unaff_x19[8] = unaff_x21[2];
        unaff_x19[7] = lVar6;
        unaff_x19[6] = lVar4;
      }
      unaff_x22 = lVar5;
      iVar2 = *(int *)((long)unaff_x19 + 0x2c);
      if (iVar2 == -2) {
        func_0x000108971948();
        func_0x000108972224();
        lVar5 = unaff_x19[2];
        FUN_108971df4();
        iVar2 = (int)lVar5 + 0x10;
      }
      else {
        if (iVar2 != -1) {
          if (iVar2 == 1) {
            FUN_10896a518();
            func_0x000108971640();
          }
          func_0x000108972180();
          func_0x0001089720a4();
          if ((param_1 & 1) == 0) {
            lVar5 = unaff_x19[9];
          }
          else {
            lVar5 = 0;
          }
          goto LAB_10896c6dc;
        }
        lVar5 = unaff_x19[2];
        FUN_108971df4();
        iVar2 = (int)lVar5 + 0x88;
      }
      FUN_10896a520();
      if ((*unaff_x19 != 0) && (*(int *)(*unaff_x19 + 8) != 0)) {
        plVar3 = unaff_x19 + 6;
        FUN_10894f248(plVar3,0x59);
        iVar2 = (int)plVar3;
      }
    }
    func_0x0001089720a4();
  } while (iVar2 == 0);
  func_0x000108972180();
  lVar5 = 0;
LAB_10896c6dc:
  func_0x0001089715e8(unaff_x19[8],unaff_x19 + 10,unaff_x19 + 6,lVar5);
  FUN_10896c364();
  return;
}



/* Entry: 10896c778; end: 10896c793;  */

void FUN_10896c778(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001089716a8();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 10896c794; end: 10896c88f;  */

void FUN_10896c794(long *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  func_0x000108971e2c();
  lVar5 = *param_1;
  lVar2 = param_3[5];
  uVar1 = *(uint *)(param_3 + 0xf);
  lVar6 = *param_3;
  lVar3 = 0x160;
  func_0x00010bd3faa4();
  func_0x000108972250(*(undefined4 *)(unaff_x20 + 8));
  func_0x0001089718e0(*(undefined8 *)(lVar5 + 0x30));
  func_0x00010896cc48();
  lVar4 = lVar3 + 0xf0;
  FUN_10896ccb0(lVar4,lVar3 + 0x68,unaff_x20 + 0x20);
  if (lVar6 != 0) {
    func_0x000108971ce8();
    *(long *)(ulong)uVar1 = lVar4;
  }
  func_0x000108972048(*(undefined1 *)(unaff_x20 + 0xc));
  func_0x000108971a9c(lVar5 + 0x28,(undefined4 *)(unaff_x20 + 8),0,lVar3,
                      (int)lVar2 == 0 || uVar1 == 0);
  func_0x000108971668();
  FUN_10896cd10();
  return;
}



/* Entry: 10896c890; end: 10896c927;  */

void FUN_10896c890(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x24;
  
  func_0x000108971db0();
  lVar1 = 0x130;
  func_0x00010bd3faa4();
  func_0x000108971718(FUN_10896cd34);
  func_0x00010896cc48();
  lVar2 = lVar1 + 0xc0;
  FUN_10896ccb0(lVar2,lVar1 + 0x38);
  if (unaff_x24 != 0) {
    func_0x000108971eb0();
    *(long *)(lVar1 + 0x30) = lVar2;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = 1;
  func_0x000108971cd4(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000108971668();
  FUN_10896cfdc();
  return;
}



/* Entry: 10896c928; end: 10896c94f;  */

void FUN_10896c928(undefined8 param_1,long param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_2 + 0x10));
  FUN_10896c364();
  return;
}



/* Entry: 10896c950; end: 10896caa7;  */

/* WARNING: Possible PIC construction at 0x00010896c9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010896c9a4) */
/* WARNING: Removing unreachable block (ram,0x00010896c9a8) */
/* WARNING: Removing unreachable block (ram,0x00010896c9bc) */
/* WARNING: Removing unreachable block (ram,0x00010896c9dc) */
/* WARNING: Removing unreachable block (ram,0x00010896c9cc) */
/* WARNING: Removing unreachable block (ram,0x00010896ca28) */
/* WARNING: Removing unreachable block (ram,0x00010896c9b0) */
/* WARNING: Removing unreachable block (ram,0x00010896ca2c) */
/* WARNING: Removing unreachable block (ram,0x00010896ca30) */
/* WARNING: Removing unreachable block (ram,0x00010896ca58) */
/* WARNING: Removing unreachable block (ram,0x00010896ca74) */
/* WARNING: Removing unreachable block (ram,0x00010896ca88) */
/* WARNING: Removing unreachable block (ram,0x00010896ca94) */
/* WARNING: Removing unreachable block (ram,0x00010896ca4c) */
/* WARNING: Removing unreachable block (ram,0x00010897153c) */

void FUN_10896c950(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_270 [136];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 auStack_e0 [176];
  
  func_0x000108971494();
  lStack_1c0 = param_2;
  lStack_1b8 = param_2;
  func_0x00010896cafc(auStack_e0,param_2 + 0xf0);
  func_0x0001089722b4();
  func_0x00010896cc48();
  uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108971f88();
  puStack_1c8 = auStack_270;
  func_0x000108971a58(&puStack_1c8);
  if (unaff_x20 != 0) {
    func_0x00010896cc2c(unaff_x20 + 0xf0);
    FUN_108968f38(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(unaff_x19 + 8),0x160);
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896caa8; end: 10896cb1f;  */

void FUN_10896caa8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896cc2c(unaff_x20 + 0xf0);
    FUN_108968f38(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(unaff_x19 + 8),0x160);
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896cb20; end: 10896cb43;  */

void FUN_10896cb20(long param_1)

{
  func_0x00010897229c();
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x98));
  FUN_10896c544();
  return;
}



/* Entry: 10896cb44; end: 10896cb47;  */

void FUN_10896cb44(long param_1)

{
  func_0x00010897229c();
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x98));
  FUN_10896c544();
  return;
}



/* Entry: 10896cb48; end: 10896cb6f;  */

void FUN_10896cb48(long param_1,long param_2)

{
  func_0x00010896cc48();
  func_0x0001089717a0();
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  return;
}



/* Entry: 10896cb70; end: 10896cbcb;  */

void FUN_10896cb70(void)

{
  int unaff_w19;
  undefined1 auStack_e8 [168];
  undefined1 auStack_40 [32];
  
  func_0x0001089714c0();
  func_0x000108971adc();
  FUN_10896cb48();
  FUN_10896cbcc(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896cb20(auStack_e8);
  }
  func_0x0001089718d8(auStack_e8);
  FUN_10896cc08(auStack_40);
  return;
}



/* Entry: 10896cbcc; end: 10896cc07;  */

void FUN_10896cbcc(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_108968f38(extraout_x8 + 0x88);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x0001089720ec();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896cc08; end: 10896cc2b;  */

undefined8 FUN_10896cc08(undefined8 param_1)

{
  FUN_10896cbcc();
  return param_1;
}



/* Entry: 10896cc2c; end: 10896ccaf;  */

void FUN_10896cc2c(void)

{
  long unaff_x19;
  
  func_0x0001089716fc();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x18))();
  return;
}



/* Entry: 10896ccb0; end: 10896cd0f;  */

undefined1 * FUN_10896ccb0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  puVar2 = auStack_70;
  func_0x0001089714ac();
  func_0x000108971cac();
  uVar1 = *(long *)(param_1 + 0x20) == 0;
  func_0x000108971ee0(*(undefined8 *)(param_2 + 0x80),auStack_70);
  func_0x000108971d04();
  func_0x000108971d40();
  func_0x000108971480(uStack_38);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  FUN_10896caa8();
  return puVar2;
}



/* Entry: 10896cd10; end: 10896cd33;  */

undefined8 FUN_10896cd10(undefined8 param_1)

{
  FUN_10896caa8();
  return param_1;
}



/* Entry: 10896cd34; end: 10896ce8b;  */

void FUN_10896cd34(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a1;
  undefined1 auStack_1a0 [168];
  undefined1 *puStack_f8;
  undefined1 auStack_e0 [168];
  undefined8 uStack_38;
  
  func_0x000108971494();
  lStack_1b8 = param_2;
  lStack_1b0 = param_2;
  uStack_38 = extraout_x8;
  func_0x00010896cafc(auStack_e0,param_2 + 0xc0);
  func_0x00010896cc48(auStack_260,unaff_x20 + 0x38);
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_1c8 = *(undefined8 *)(unaff_x20 + 0x28);
  puStack_1c0 = auStack_260;
  FUN_10896ce8c(&puStack_1c0);
  if (unaff_x19 != 0) {
    func_0x000108971ba0();
    if (extraout_x8_00 == 0) {
      FUN_10896cee0(auStack_260);
    }
    else {
      func_0x000108971524();
      func_0x000108971da4();
      if (extraout_x8_01 == 0) {
        unaff_x20 = *(long *)(extraout_x9 + 0x10);
        FUN_10896cf08(auStack_1a0,auStack_260);
        puStack_f8 = &uStack_1a1;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        func_0x000108972314();
        FUN_10896cf08();
        func_0x000108971ab8(FUN_10896cf28);
        FUN_10896cfb8();
        func_0x000108971a78();
        func_0x000108971b70();
        FUN_108968f38(auStack_1e0);
      }
      else {
        func_0x0001089717e4();
      }
      func_0x0001089717d4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x00010897169c();
  func_0x000108971f3c();
  ppuVar1 = &puStack_1c0;
  FUN_10896cfdc();
  func_0x000108971480(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971b70();
  func_0x0001089718d8(auStack_1a0);
  func_0x0001089717d4();
  DataMemoryBarrier(2,3);
  func_0x00010897169c();
  func_0x000108971f3c();
  FUN_10896cfdc(&puStack_1c0);
  func_0x000108971660();
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    func_0x00010896cc2c(unaff_x20 + 0xc0);
    FUN_108968f38(unaff_x20 + 0xb8);
    ppuVar1[2] = (undefined1 *)0x0;
  }
  if (ppuVar1[1] != (undefined1 *)0x0) {
    func_0x00010bd3facc(ppuVar1[1],0x130);
    ppuVar1[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 10896ce8c; end: 10896cedf;  */

void FUN_10896ce8c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896cc2c(unaff_x20 + 0xc0);
    FUN_108968f38(unaff_x20 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(unaff_x19 + 8),0x130);
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896cee0; end: 10896cf03;  */

void FUN_10896cee0(long param_1)

{
  func_0x00010897229c();
  func_0x000108971b4c(*(undefined8 *)(param_1 + 0x98));
  FUN_10896c544();
  return;
}



/* Entry: 10896cf04; end: 10896cf07;  */

void FUN_10896cf04(long param_1)

{
  func_0x00010897229c();
  func_0x000108971b4c(*(undefined8 *)(param_1 + 0x98));
  FUN_10896c544();
  return;
}



/* Entry: 10896cf08; end: 10896cf27;  */

void FUN_10896cf08(void)

{
  func_0x00010896cc48();
  func_0x0001089717a0();
  return;
}



/* Entry: 10896cf28; end: 10896cf7b;  */

void FUN_10896cf28(void)

{
  int unaff_w19;
  undefined1 auStack_e0 [160];
  undefined1 auStack_40 [32];
  
  func_0x0001089714c0();
  func_0x000108971888();
  FUN_10896cf08();
  FUN_10896cf7c(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896cee0(auStack_e0);
  }
  func_0x00010897169c();
  FUN_10896cfb8(auStack_40);
  return;
}



/* Entry: 10896cf7c; end: 10896cfb7;  */

void FUN_10896cf7c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_108968f38(extraout_x8 + 0x88);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108971aec();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896cfb8; end: 10896cfdb;  */

undefined8 FUN_10896cfb8(undefined8 param_1)

{
  FUN_10896cf7c();
  return param_1;
}



/* Entry: 10896cfdc; end: 10896cfff;  */

undefined8 FUN_10896cfdc(undefined8 param_1)

{
  FUN_10896ce8c();
  return param_1;
}



/* Entry: 10896d000; end: 10896d1ef;  */

void FUN_10896d000(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar2;
  long lVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long *unaff_x27;
  long unaff_x28;
  undefined1 auStack_3b0 [184];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined1 uStack_2b9;
  undefined1 auStack_2b8 [224];
  undefined1 *puStack_1d8;
  undefined1 auStack_1c0 [32];
  long lStack_1a0;
  undefined1 auStack_188 [32];
  long lStack_168;
  undefined1 auStack_150 [40];
  long lStack_128;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_a8;
  long alStack_a0 [7];
  undefined8 uStack_68;
  
  func_0x000108971494();
  *(int *)(param_1 + 0x28) = param_4;
  uStack_68 = extraout_x8;
  if (param_4 == 0) {
    func_0x000108971628();
    if ((unaff_x21 != 0) || ((int)param_1 != 0)) {
      in_CY = (ulong)unaff_x19[3] <= (ulong)unaff_x19[4];
      in_ZR = unaff_x19[4] == unaff_x19[3];
      if ((!(bool)in_CY) && (func_0x000108971768(), (param_1 & 1) == 0)) {
        if ((*unaff_x19 == 0) || (*(int *)(*unaff_x19 + 8) == 0)) {
          uVar7 = 0x10000;
          goto LAB_10896d03c;
        }
        func_0x000108971b94();
      }
    }
    func_0x000108972078();
    plVar2 = unaff_x19 + 6;
    plVar5 = alStack_a0;
    FUN_10896c544();
  }
  else {
    func_0x000108971768();
    func_0x00010897206c();
    uVar7 = 0;
    if ((bool)in_ZR) {
      uVar7 = extraout_x8_00;
    }
LAB_10896d03c:
    func_0x0001089722a8(uVar7);
    plVar5 = (long *)unaff_x19[1];
    unaff_x28 = unaff_x19[2] + extraout_x9;
    func_0x000108972230();
    lVar1 = extraout_x9_00;
    if ((bool)in_CY) {
      lVar1 = extraout_x8_01;
    }
    lVar8 = *plVar5;
    if ((int)unaff_x19[5] == 0) {
      unaff_x20 = 1;
    }
    else {
      unaff_x20 = (ulong)((int)unaff_x19[0xb] == 0 || (int)unaff_x19[0x15] == 0);
    }
    lVar9 = *unaff_x19;
    lVar3 = 400;
    lStack_a8 = lVar9;
    func_0x00010bd3faa4();
    lVar6 = lVar3;
    func_0x000108972250((int)plVar5[1]);
    func_0x000108971af8(*(undefined8 *)(lVar8 + 0x30));
    *(long *)(lVar6 + 0x50) = unaff_x28;
    *(long *)(lVar6 + 0x58) = lVar1;
    func_0x000108971ea4();
    func_0x00010896d538();
    FUN_10894fe4c(lVar3 + 0x120,0,0,plVar5 + 4);
    lVar6 = *(long *)(lVar3 + 0x140);
    func_0x000108971ee0(*(undefined8 *)(lVar3 + 0x118),alStack_a0);
    FUN_10896a1b4(lVar3 + 0x158,lVar6 != 0,alStack_a0,plVar5 + 4);
    func_0x00010bd43af0(alStack_a0);
    if (lVar9 != 0) {
      plVar2 = &lStack_a8;
      FUN_108969e20(plVar2,*(undefined8 *)(lVar8 + 0x28),plVar5 + 2,plVar5 + 1,1);
      *unaff_x27 = (long)plVar2;
    }
    in_ZR = lVar1 == 0;
    func_0x000108972048(*(undefined1 *)((long)plVar5 + 0xc));
    plVar2 = (long *)(lVar8 + 0x28);
    plVar5 = plVar5 + 1;
    func_0x000108971a9c(plVar2,plVar5,1,lVar3,unaff_x20);
    func_0x000108971668();
    FUN_10896d564();
  }
  func_0x000108971480(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971660();
  lStack_110 = unaff_x28;
  func_0x000108971494();
  plStack_2d0 = plVar5;
  plStack_2c8 = plVar5;
  uStack_118 = extraout_x8_02;
  func_0x00010bd3f54c(auStack_1c0,plVar5 + 0x24);
  func_0x00010bd3f54c(auStack_188,unaff_x20 + 0x158);
  func_0x0001089722b4();
  func_0x00010896d538();
  uStack_2f0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_2f8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108971f88();
  puStack_2d8 = auStack_3b0;
  FUN_10896d384(&puStack_2d8);
  if (plVar2 != (long *)0x0) {
    if (lStack_1a0 == 0 && lStack_168 == 0) {
      FUN_10896d3d8(auStack_3b0);
    }
    else {
      func_0x000108971968();
      func_0x000108971814(auStack_150,auStack_188);
      if (*(long *)(lStack_128 + 0x18) == 0) {
        unaff_x20 = *(ulong *)(lStack_128 + 0x10);
        FUN_10896d404(auStack_2b8,auStack_3b0);
        puStack_1d8 = &uStack_2b9;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        func_0x000108972328();
        FUN_10896d404();
        func_0x00010897223c(FUN_10896d438);
        FUN_10896d4f8();
        func_0x0001089721d4();
        func_0x000108971fbc();
        FUN_108968f38(&lStack_110);
      }
      else {
        func_0x0001089719bc(auStack_150,FUN_10896d400);
      }
      func_0x000108971bc4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108971ef8(auStack_3b0);
  func_0x00010896d51c(auStack_1c0);
  ppuVar4 = &puStack_2d8;
  FUN_10896d564();
  func_0x000108971480(uStack_118);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971fbc();
  func_0x000108971ef8(auStack_2b8);
  func_0x000108971bc4();
  DataMemoryBarrier(2,3);
  func_0x000108971ef8(auStack_3b0);
  func_0x00010896d51c(auStack_1c0);
  FUN_10896d564(&puStack_2d8);
  func_0x000108971660();
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    func_0x00010896d51c(unaff_x20 + 0x120);
    FUN_108968f38(unaff_x20 + 0x118);
    ppuVar4[2] = (undefined1 *)0x0;
  }
  if (ppuVar4[1] != (undefined1 *)0x0) {
    func_0x00010bd3facc(ppuVar4[1],400);
    ppuVar4[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 10896d1f0; end: 10896d383;  */

void FUN_10896d1f0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 **ppuVar1;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_2e0 [184];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 uStack_1e9;
  undefined1 auStack_1e8 [224];
  undefined1 *puStack_108;
  undefined1 auStack_f0 [32];
  long lStack_d0;
  undefined1 auStack_b8 [32];
  long lStack_98;
  undefined1 auStack_80 [40];
  long lStack_58;
  undefined8 uStack_48;
  
  func_0x000108971494();
  lStack_200 = param_2;
  lStack_1f8 = param_2;
  uStack_48 = extraout_x8;
  func_0x00010bd3f54c(auStack_f0,param_2 + 0x120);
  func_0x00010bd3f54c(auStack_b8,unaff_x20 + 0x158);
  func_0x0001089722b4();
  func_0x00010896d538();
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108971f88();
  puStack_208 = auStack_2e0;
  FUN_10896d384(&puStack_208);
  if (unaff_x19 != 0) {
    if (lStack_d0 == 0 && lStack_98 == 0) {
      FUN_10896d3d8(auStack_2e0);
    }
    else {
      func_0x000108971968();
      func_0x000108971814(auStack_80,auStack_b8);
      if (*(long *)(lStack_58 + 0x18) == 0) {
        unaff_x20 = *(long *)(lStack_58 + 0x10);
        FUN_10896d404(auStack_1e8,auStack_2e0);
        puStack_108 = &uStack_1e9;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        func_0x000108972328();
        FUN_10896d404();
        func_0x00010897223c(FUN_10896d438);
        FUN_10896d4f8();
        func_0x0001089721d4();
        func_0x000108971fbc();
        FUN_108968f38(&stack0xffffffffffffffc0);
      }
      else {
        func_0x0001089719bc(auStack_80,FUN_10896d400);
      }
      func_0x000108971bc4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108971ef8(auStack_2e0);
  func_0x00010896d51c(auStack_f0);
  ppuVar1 = &puStack_208;
  FUN_10896d564();
  func_0x000108971480(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971fbc();
  func_0x000108971ef8(auStack_1e8);
  func_0x000108971bc4();
  DataMemoryBarrier(2,3);
  func_0x000108971ef8(auStack_2e0);
  func_0x00010896d51c(auStack_f0);
  FUN_10896d564(&puStack_208);
  func_0x000108971660();
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    func_0x00010896d51c(unaff_x20 + 0x120);
    FUN_108968f38(unaff_x20 + 0x118);
    ppuVar1[2] = (undefined1 *)0x0;
  }
  if (ppuVar1[1] != (undefined1 *)0x0) {
    func_0x00010bd3facc(ppuVar1[1],400);
    ppuVar1[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 10896d384; end: 10896d3d7;  */

void FUN_10896d384(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    FUN_10896d51c(unaff_x20 + 0x120);
    FUN_108968f38(unaff_x20 + 0x118);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(unaff_x19 + 8),400);
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896d3d8; end: 10896d3ff;  */

void FUN_10896d3d8(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 200),param_1,param_2,*(undefined8 *)(param_1 + 0xd0)
                     );
  FUN_10896d000();
  return;
}



/* Entry: 10896d400; end: 10896d403;  */

void FUN_10896d400(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 200),param_1,param_2,*(undefined8 *)(param_1 + 0xd0)
                     );
  FUN_10896d000();
  return;
}



/* Entry: 10896d404; end: 10896d437;  */

void FUN_10896d404(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010896d538();
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  return;
}



/* Entry: 10896d438; end: 10896d4b3;  */

void FUN_10896d438(undefined8 param_1)

{
  int unaff_w19;
  undefined1 auStack_128 [216];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  func_0x0001089719a0();
  puStack_50 = &uStack_31;
  uStack_48 = param_1;
  uStack_40 = param_1;
  func_0x000108971adc();
  FUN_10896d404();
  FUN_10896d4b4(&puStack_50);
  if (unaff_w19 != 0) {
    FUN_10896d3d8(auStack_128);
  }
  func_0x000108971ef8(auStack_128);
  FUN_10896d4f8(&puStack_50);
  return;
}



/* Entry: 10896d4b4; end: 10896d4f7;  */

void FUN_10896d4b4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_108968f38(extraout_x8 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896d4f8; end: 10896d51b;  */

undefined8 FUN_10896d4f8(undefined8 param_1)

{
  FUN_10896d4b4();
  return param_1;
}



/* Entry: 10896d51c; end: 10896d563;  */

void FUN_10896d51c(void)

{
  long unaff_x19;
  
  func_0x0001089716fc();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x18))();
  return;
}



/* Entry: 10896d564; end: 10896d587;  */

undefined8 FUN_10896d564(undefined8 param_1)

{
  FUN_10896d384();
  return param_1;
}



/* Entry: 10896d588; end: 10896d713;  */

void FUN_10896d588(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 *extraout_x11;
  long unaff_x19;
  long lVar3;
  ulong unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001089717c8();
  *(int *)(param_1 + 0x20) = param_4;
  if (param_4 == 0) {
    *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + param_3;
    func_0x000108971768();
    iVar1 = (int)param_1;
    if ((((param_3 == 0) && (iVar1 == 0)) ||
        (*(ulong *)(unaff_x19 + 0x10) <= *(ulong *)(unaff_x19 + 0x18))) ||
       (func_0x000108971768(), iVar1 != 0)) {
      lVar3 = *(long *)(unaff_x19 + 0x38);
      *(undefined1 *)(lVar3 + 0x2f0) = 0;
      func_0x00010897181c(&uStack_b8);
      func_0x00010894fa8c();
      if ((unaff_x20 & 1) != 0) {
        return;
      }
      if (*(int *)(lVar3 + 0x260) == 3) {
        return;
      }
      func_0x000108971768();
      if ((int)unaff_x20 != 0) {
        FUN_108968710(&uStack_b8);
        FUN_1089686dc(lVar3,&uStack_b8);
        func_0x000108b80d84(&uStack_b8);
        return;
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      FUN_108968984(lVar3,unaff_x20);
      return;
    }
    uVar2 = 0x10000;
  }
  else {
    func_0x000108971768();
    func_0x00010897206c();
    uVar2 = 0;
    if ((bool)in_ZR) {
      uVar2 = extraout_x8;
    }
  }
  func_0x0001089722a8(uVar2);
  func_0x000108972230();
  uStack_b8 = *extraout_x11;
  puStack_b0 = extraout_x11 + 1;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_60 = *(undefined8 *)(unaff_x19 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x19 + 8);
  uStack_58 = *(undefined8 *)(unaff_x19 + 0x18);
  uStack_50 = *(undefined4 *)(unaff_x19 + 0x20);
  uStack_40 = *(undefined8 *)(unaff_x19 + 0x30);
  uStack_48 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x38);
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x000108971c78(&uStack_b8,&uStack_d0);
  FUN_10896d714();
  FUN_10895c544(&uStack_48);
  return;
}



/* Entry: 10896d714; end: 10896d957;  */

void FUN_10896d714(ulong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  long lVar6;
  long lVar7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_c8 [120];
  undefined8 *puStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000108971b78();
  *(int *)(param_1 + 0x20) = param_4;
  if (param_4 == 0) goto LAB_10896d770;
  do {
    param_1 = unaff_x19[1];
    uStack_e8 = unaff_x19[3];
    uStack_f0 = unaff_x19[2];
    param_2 = &uStack_f0;
    func_0x00010bd45e3c(param_1,param_2,unaff_x19 + 5,unaff_x19 + 8);
    iVar1 = (int)param_1;
    *(int *)((long)unaff_x19 + 0x24) = iVar1;
    if (iVar1 == -2) {
      uVar3 = unaff_x19[1];
      if (*(long *)(uVar3 + 0x158) == 0) {
        func_0x000108972140();
        if (unaff_x21 == uVar3) {
          FUN_10896a568();
          func_0x000108971be0();
          uVar5 = *unaff_x19;
          uStack_e8 = *(undefined8 *)(unaff_x19[1] + 0x148);
          uStack_f0 = *(undefined8 *)(unaff_x19[1] + 0x140);
          goto LAB_10896d908;
        }
        plVar4 = (long *)(unaff_x19[1] + 0x10);
        goto LAB_10896d930;
      }
      func_0x000108971b60();
      lVar6 = unaff_x19[1];
      *(ulong *)(lVar6 + 0x150) = uVar3;
      *(undefined8 **)(lVar6 + 0x158) = param_2;
    }
    else {
      if (iVar1 == -1 || iVar1 == 1) {
        func_0x000108972170(unaff_x19[1]);
        if (unaff_x21 == param_1) {
          FUN_10896a568();
          func_0x000108971640();
          uVar5 = *unaff_x19;
          uVar2 = unaff_x19[1];
          func_0x000108972160();
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_f0 = uVar5;
          uStack_e8 = uVar2;
          puStack_e0 = param_2;
          FUN_10896dcb0(auStack_c8);
          func_0x00010897178c();
          FUN_10896e15c();
          func_0x0001089720cc();
          return;
        }
        plVar4 = (long *)(unaff_x19[1] + 0x88);
LAB_10896d930:
        func_0x000108971e2c();
        lVar7 = *plVar4;
        puStack_50 = unaff_x19 + 0xe;
        lVar6 = 0xf8;
        func_0x00010bd3faa4();
        func_0x000108971718(FUN_10896deb8);
        FUN_10896dcb0();
        func_0x00010896dd30(lVar6 + 0xc0,unaff_x20 + 0x40);
        *(undefined1 *)(unaff_x20 + 0x10) = 1;
        FUN_10896b848(*(undefined8 *)(lVar7 + 0x68),lVar7 + 0x28,unaff_x20 + 8,unaff_x20 + 0x18,
                      lVar6);
        FUN_10896de94(auStack_48);
        return;
      }
      if ((int)unaff_x20 != 0) {
        uVar5 = *unaff_x19;
        uStack_f0 = *(undefined8 *)(unaff_x19[1] + 0x140);
        uStack_e8 = 0;
LAB_10896d908:
        FUN_10896d958(uVar5,&uStack_f0);
        return;
      }
LAB_10896d770:
      uVar3 = 0;
      if ((unaff_x22 != 0xffffffffffffffff) &&
         (func_0x000108971b68(), uVar3 = unaff_x22, (param_1 & 1) == 0)) {
        func_0x000108972288();
      }
      unaff_x22 = uVar3;
      iVar1 = *(int *)((long)unaff_x19 + 0x24);
      if (iVar1 == -2) {
        lVar6 = unaff_x19[1];
        uVar3 = *(ulong *)(lVar6 + 0x148);
        if (unaff_x22 <= *(ulong *)(lVar6 + 0x148)) {
          uVar3 = unaff_x22;
        }
        *(undefined8 *)(lVar6 + 0x150) = *(undefined8 *)(lVar6 + 0x140);
        *(ulong *)(lVar6 + 0x158) = uVar3;
        uVar5 = unaff_x19[1];
        func_0x000108971b60();
        lVar6 = unaff_x19[1];
        *(undefined8 *)(lVar6 + 0x150) = uVar5;
        *(undefined8 **)(lVar6 + 0x158) = param_2;
        lVar6 = unaff_x19[1];
        FUN_108971df4();
        uVar3 = lVar6 + 0x10;
      }
      else {
        if (iVar1 != -1) {
          if (iVar1 == 1) {
            FUN_10896a518();
            func_0x000108971640();
          }
          uVar3 = unaff_x19[1];
          func_0x000108971f10();
          func_0x000108971b68();
          if ((uVar3 & 1) == 0) {
            uVar5 = unaff_x19[8];
          }
          else {
            uVar5 = 0;
          }
          goto LAB_10896d8bc;
        }
        lVar6 = unaff_x19[1];
        FUN_108971df4();
        uVar3 = lVar6 + 0x88;
      }
      FUN_10896a520();
    }
    iVar1 = (int)uVar3;
    func_0x000108971b68();
  } while (iVar1 == 0);
  func_0x000108971f10(unaff_x19[1]);
  uVar5 = 0;
LAB_10896d8bc:
  func_0x0001089715e8(unaff_x19[7],unaff_x19 + 9,unaff_x19 + 5,uVar5);
  FUN_10896d588();
  return;
}



/* Entry: 10896d958; end: 10896da5f;  */

void FUN_10896d958(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 extraout_w8;
  undefined1 extraout_w10;
  long lVar5;
  undefined8 uVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar5 = *param_1;
  iVar1 = *(int *)(param_3 + 0x20);
  iVar2 = *(int *)(param_3 + 0x68);
  lVar3 = 0x128;
  lStack_68 = param_3;
  func_0x00010bd3faa4();
  lVar4 = lVar3;
  lStack_60 = lVar3;
  func_0x000108971e88((int)param_1[1]);
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0x10896b6c0;
  *(undefined4 *)(lVar4 + 0x48) = extraout_w8;
  *(undefined1 *)(lVar4 + 0x4c) = extraout_w10;
  uVar6 = *param_2;
  *(undefined8 *)(lVar4 + 0x58) = param_2[1];
  *(undefined8 *)(lVar4 + 0x50) = uVar6;
  func_0x000108971ea4();
  FUN_10896dcb0();
  func_0x00010896dd30(lVar3 + 0xf0,param_1 + 4);
  lStack_58 = lVar3;
  func_0x000108971a9c(lVar5 + 0x28,param_1 + 1,0,lVar3,iVar1 == 0 || iVar2 == 0,param_6,
                      param_2[1] == 0 & *(byte *)((long)param_1 + 0xc) >> 4);
  lStack_60 = 0;
  lStack_58 = 0;
  FUN_10896db24(&lStack_68);
  return;
}



/* Entry: 10896da60; end: 10896dafb;  */

void FUN_10896da60(long *param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000108971e2c();
  lVar2 = *param_1;
  lVar1 = 0xf8;
  uStack_48 = param_2;
  func_0x00010bd3faa4();
  lStack_40 = lVar1;
  func_0x000108971718(FUN_10896deb8);
  FUN_10896dcb0();
  func_0x00010896dd30(lVar1 + 0xc0,unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  lStack_38 = lVar1;
  FUN_10896b848(*(undefined8 *)(lVar2 + 0x68),lVar2 + 0x28,unaff_x20 + 8,unaff_x20 + 0x18,lVar1);
  lStack_40 = 0;
  lStack_38 = 0;
  FUN_10896de94(&uStack_48);
  return;
}



/* Entry: 10896dafc; end: 10896db23;  */

void FUN_10896dafc(undefined8 param_1,long param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_2 + 0x10));
  FUN_10896d588();
  return;
}



/* Entry: 10896db24; end: 10896db47;  */

undefined8 FUN_10896db24(undefined8 param_1)

{
  FUN_10896dd40();
  return param_1;
}



/* Entry: 10896db48; end: 10896dcaf;  */

void FUN_10896db48(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_238 [136];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_171;
  undefined1 auStack_170 [112];
  undefined1 auStack_100 [64];
  undefined1 *puStack_c0;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined8 uStack_38;
  
  func_0x000108971494();
  uStack_38 = extraout_x8;
  func_0x00010bd3f54c(auStack_a8,param_2 + 0xf0);
  func_0x00010897225c();
  pcVar3 = (code *)(unaff_x20 + 0x68);
  FUN_10896dcb0();
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108971f88();
  FUN_10896dd40(&stack0xfffffffffffffe70);
  if (unaff_x19 != 0) {
    if (lStack_88 == 0) {
      FUN_10896dd8c(auStack_238);
    }
    else {
      func_0x0001089715c0();
      func_0x000108971814(auStack_a8);
      func_0x000108971da4();
      if (extraout_x8_00 == 0) {
        puVar1 = auStack_170;
        FUN_10896ddb0(puVar1,auStack_238);
        puStack_c0 = &uStack_171;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        pcVar3 = (code *)auStack_170;
        FUN_10896ddb0(puVar1 + 8);
        func_0x000108971aa4(FUN_10896de00);
        FUN_10896dddc();
        func_0x000108971a84();
        func_0x000108971a64();
        FUN_10895c544(auStack_100);
      }
      else {
        pcVar3 = FUN_10896ddd8;
        func_0x000108971a6c();
      }
      func_0x0001089717d4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108971678();
  func_0x0001089719c4();
  FUN_10896db24(&stack0xfffffffffffffe70);
  func_0x000108971480(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971a64();
  func_0x000108971940(auStack_170);
  func_0x0001089717d4();
  DataMemoryBarrier(2,3);
  func_0x000108971678();
  func_0x0001089719c4();
  puVar2 = (undefined8 *)&stack0xfffffffffffffe70;
  FUN_10896db24();
  func_0x000108971660();
  *puVar2 = *(undefined8 *)pcVar3;
  puVar2[1] = *(undefined8 *)(pcVar3 + 8);
  uVar4 = *(undefined8 *)(pcVar3 + 0x10);
  puVar2[3] = *(undefined8 *)(pcVar3 + 0x18);
  puVar2[2] = uVar4;
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(pcVar3 + 0x20);
  *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(pcVar3 + 0x24);
  uVar5 = *(undefined8 *)(pcVar3 + 0x30);
  uVar4 = *(undefined8 *)(pcVar3 + 0x28);
  puVar2[7] = *(undefined8 *)(pcVar3 + 0x38);
  puVar2[6] = uVar5;
  puVar2[5] = uVar4;
  puVar2[8] = *(undefined8 *)(pcVar3 + 0x40);
  puVar2[9] = *(undefined8 *)(pcVar3 + 0x48);
  uVar5 = *(undefined8 *)(pcVar3 + 0x58);
  uVar4 = *(undefined8 *)(pcVar3 + 0x50);
  puVar2[0xc] = *(undefined8 *)(pcVar3 + 0x60);
  puVar2[0xb] = uVar5;
  puVar2[10] = uVar4;
  *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(pcVar3 + 0x68);
  puVar2[0xe] = *(undefined8 *)(pcVar3 + 0x70);
  puVar2[0xf] = *(undefined8 *)(pcVar3 + 0x78);
  *(undefined8 *)(pcVar3 + 0x70) = 0;
  *(undefined8 *)(pcVar3 + 0x78) = 0;
  puVar2[0x10] = *(undefined8 *)(pcVar3 + 0x80);
  return;
}



/* Entry: 10896dcb0; end: 10896dd3f;  */

void FUN_10896dcb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_1[0x10] = param_2[0x10];
  return;
}



/* Entry: 10896dd40; end: 10896dd8b;  */

void FUN_10896dd40(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    func_0x00010bd43af0(unaff_x20 + 0xf0);
    FUN_10895c544(unaff_x20 + 0xd8);
    unaff_x19[2] = 0;
  }
  if (unaff_x19[1] != 0) {
    func_0x0001089720b8(*unaff_x19 + 0x70);
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10896dd8c; end: 10896ddaf;  */

void FUN_10896dd8c(long param_1)

{
  func_0x00010897229c();
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x98));
  FUN_10896d714();
  return;
}



/* Entry: 10896ddb0; end: 10896ddd7;  */

void FUN_10896ddb0(long param_1,long param_2)

{
  FUN_10896dcb0();
  func_0x0001089717a0();
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  return;
}



/* Entry: 10896ddd8; end: 10896dddb;  */

void FUN_10896ddd8(long param_1)

{
  func_0x00010897229c();
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0x98));
  FUN_10896d714();
  return;
}



/* Entry: 10896dddc; end: 10896ddff;  */

undefined8 FUN_10896dddc(undefined8 param_1)

{
  FUN_10896de58();
  return param_1;
}



/* Entry: 10896de00; end: 10896de57;  */

void FUN_10896de00(void)

{
  int unaff_w19;
  undefined1 auStack_e8 [168];
  undefined1 auStack_40 [32];
  
  func_0x0001089714c0();
  func_0x000108971adc();
  FUN_10896ddb0();
  FUN_10896de58(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896dd8c(auStack_e8);
  }
  func_0x000108971678();
  FUN_10896dddc(auStack_40);
  return;
}



/* Entry: 10896de58; end: 10896de93;  */

void FUN_10896de58(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_10895c544(extraout_x8 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x0001089720ec();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896de94; end: 10896deb7;  */

undefined8 FUN_10896de94(undefined8 param_1)

{
  FUN_10896e010();
  return param_1;
}



/* Entry: 10896deb8; end: 10896e00f;  */

void FUN_10896deb8(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_228 [136];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_169;
  undefined1 auStack_168 [168];
  undefined1 *puStack_c0;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined8 uStack_38;
  
  func_0x000108971494();
  uStack_38 = extraout_x8;
  func_0x00010bd3f54c(auStack_a8,param_2 + 0xc0);
  func_0x00010897225c();
  FUN_10896dcb0();
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_10896e010(&stack0xfffffffffffffe78);
  if (unaff_x19 != 0) {
    if (lStack_88 == 0) {
      FUN_10896e05c(auStack_228);
    }
    else {
      func_0x0001089715c0();
      func_0x000108971814(auStack_a8);
      func_0x000108971da4();
      if (extraout_x8_00 == 0) {
        unaff_x20 = *(long *)(extraout_x9 + 0x10);
        FUN_10896e080(auStack_168,auStack_228);
        puStack_c0 = &uStack_169;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        func_0x0001089722e0();
        FUN_10896e080();
        func_0x000108971aa4(FUN_10896e0c8);
        FUN_10896e0a4();
        func_0x000108971a84();
        func_0x000108971a64();
        FUN_10895c544(unaff_x21 + 0x70);
      }
      else {
        func_0x000108971a6c();
      }
      func_0x0001089717d4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108971678();
  func_0x0001089719c4();
  plVar1 = (long *)&stack0xfffffffffffffe78;
  FUN_10896de94();
  func_0x000108971480(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108971a64();
  func_0x000108971940(auStack_168);
  func_0x0001089717d4();
  DataMemoryBarrier(2,3);
  func_0x000108971678();
  func_0x0001089719c4();
  FUN_10896de94(&stack0xfffffffffffffe78);
  func_0x000108971660();
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    func_0x00010bd43af0(unaff_x20 + 0xc0);
    FUN_10895c544(unaff_x20 + 0xa8);
    plVar1[2] = 0;
  }
  if (plVar1[1] != 0) {
    func_0x0001089720ac(*plVar1 + 0x70);
    plVar1[1] = 0;
  }
  return;
}



/* Entry: 10896e010; end: 10896e05b;  */

void FUN_10896e010(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000108971a58();
  if (unaff_x20 != 0) {
    func_0x00010bd43af0(unaff_x20 + 0xc0);
    FUN_10895c544(unaff_x20 + 0xa8);
    unaff_x19[2] = 0;
  }
  if (unaff_x19[1] != 0) {
    func_0x0001089720ac(*unaff_x19 + 0x70);
    unaff_x19[1] = 0;
  }
  return;
}



/* Entry: 10896e05c; end: 10896e07f;  */

void FUN_10896e05c(long param_1)

{
  func_0x00010897229c();
  func_0x000108971b4c(*(undefined8 *)(param_1 + 0x98));
  FUN_10896d714();
  return;
}



/* Entry: 10896e080; end: 10896e09f;  */

void FUN_10896e080(void)

{
  FUN_10896dcb0();
  func_0x0001089717a0();
  return;
}



/* Entry: 10896e0a0; end: 10896e0a3;  */

void FUN_10896e0a0(long param_1)

{
  func_0x00010897229c();
  func_0x000108971b4c(*(undefined8 *)(param_1 + 0x98));
  FUN_10896d714();
  return;
}



/* Entry: 10896e0a4; end: 10896e0c7;  */

undefined8 FUN_10896e0a4(undefined8 param_1)

{
  FUN_10896e120();
  return param_1;
}



/* Entry: 10896e0c8; end: 10896e11f;  */

void FUN_10896e0c8(void)

{
  int unaff_w19;
  undefined1 auStack_e0 [160];
  undefined1 auStack_40 [32];
  
  func_0x0001089714c0();
  func_0x000108971888();
  FUN_10896e080();
  FUN_10896e120(auStack_40);
  if (unaff_w19 != 0) {
    FUN_10896e05c(auStack_e0);
  }
  func_0x000108971940(auStack_e0);
  FUN_10896e0a4(auStack_40);
  return;
}



/* Entry: 10896e120; end: 10896e15b;  */

void FUN_10896e120(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_10895c544(extraout_x8 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    func_0x000108971aec();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896e15c; end: 10896e2f7;  */

void FUN_10896e15c(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 in_CY;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar8;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined1 extraout_w10;
  long *unaff_x19;
  long lVar9;
  
  func_0x0001089717c8();
  *(int *)(param_1 + 0x20) = param_4;
  if (param_4 == 0) {
    unaff_x19[3] = unaff_x19[3] + param_3;
    func_0x000108971768();
    iVar4 = (int)param_1;
    uVar7 = unaff_x19[3];
    if (((param_3 != 0) || (iVar4 != 0)) && (in_CY = (ulong)unaff_x19[2] <= uVar7, !(bool)in_CY)) {
      func_0x000108971768();
      if (iVar4 == 0) {
        uVar8 = 0x10000;
        goto LAB_10896e190;
      }
      uVar7 = unaff_x19[3];
    }
    FUN_10896d714(unaff_x19 + 5,&stack0xffffffffffffff90,uVar7,0);
  }
  else {
    func_0x000108971768();
    func_0x00010897206c();
    uVar8 = 0;
    if ((bool)in_ZR) {
      uVar8 = extraout_x8;
    }
LAB_10896e190:
    func_0x0001089722a8(uVar8);
    plVar1 = (long *)*unaff_x19;
    lVar2 = unaff_x19[1];
    func_0x000108972230();
    uVar8 = extraout_x9_00;
    if ((bool)in_CY) {
      uVar8 = extraout_x8_00;
    }
    lVar9 = *plVar1;
    if ((int)unaff_x19[4] == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = (int)unaff_x19[9] == 0 || (int)unaff_x19[0x12] == 0;
    }
    lVar5 = 0x150;
    func_0x00010bd3faa4();
    lVar6 = lVar5;
    func_0x000108971e88((int)plVar1[1]);
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0x10896c268;
    *(undefined4 *)(lVar6 + 0x48) = extraout_w8;
    *(undefined1 *)(lVar6 + 0x4c) = extraout_w10;
    *(long *)(lVar6 + 0x50) = lVar2 + extraout_x9;
    *(undefined8 *)(lVar6 + 0x58) = uVar8;
    func_0x000108971ea4();
    FUN_10896e480();
    FUN_10894fe4c(lVar5 + 0x118,0,0,plVar1 + 4);
    func_0x000108972048(*(undefined1 *)((long)plVar1 + 0xc));
    func_0x000108971a9c(lVar9 + 0x28,plVar1 + 1,1,lVar5,bVar3);
    func_0x000108971668();
    FUN_10896e2f8();
  }
  return;
}



/* Entry: 10896e2f8; end: 10896e31b;  */

undefined8 FUN_10896e2f8(undefined8 param_1)

{
  func_0x00010896e4b4();
  return param_1;
}



/* Entry: 10896e31c; end: 10896e47f;  */

undefined1 * FUN_10896e31c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_288 [176];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_199;
  undefined1 auStack_198 [216];
  undefined1 *puStack_c0;
  undefined1 auStack_a8 [32];
  long lStack_88;
  undefined8 uStack_38;
  
  func_0x000108971494();
  uStack_38 = extraout_x8;
  func_0x00010bd3f54c(auStack_a8,param_2 + 0x118);
  func_0x00010897225c();
  pcVar3 = (code *)(unaff_x20 + 0x68);
  FUN_10896e480();
  uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_1d8 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000108971f88();
  func_0x00010896e4b4(&stack0xfffffffffffffe48);
  if (unaff_x19 != 0) {
    if (lStack_88 == 0) {
      FUN_10896e508(auStack_288);
    }
    else {
      func_0x0001089715c0();
      func_0x000108971814(auStack_a8);
      func_0x000108971da4();
      if (extraout_x8_00 == 0) {
        FUN_10896e530(auStack_198,auStack_288);
        puStack_c0 = &uStack_199;
        func_0x00010bd42e30();
        pcVar3 = (code *)0xe0;
        func_0x0001089717dc();
        func_0x000108972328();
        FUN_10896e530();
        func_0x000108971aa4(FUN_10896e58c);
        FUN_10896e568();
        func_0x000108971a84();
        func_0x000108971a64();
        FUN_10895c544(unaff_x21 + 0x98);
      }
      else {
        pcVar3 = FUN_10896e564;
        func_0x000108971a6c();
      }
      func_0x0001089717d4();
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108971f94(auStack_288);
  func_0x0001089719c4();
  puVar1 = &stack0xfffffffffffffe48;
  FUN_10896e2f8();
  func_0x000108971480(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000108971a64();
  func_0x000108971f94(auStack_198);
  func_0x0001089717d4();
  DataMemoryBarrier(2,3);
  func_0x000108971f94(auStack_288);
  func_0x0001089719c4();
  puVar2 = &stack0xfffffffffffffe48;
  FUN_10896e2f8();
  func_0x000108971660();
  func_0x0001089718b0();
  func_0x0001089722c0();
  *(undefined4 *)(puVar2 + 0x20) = *(undefined4 *)(pcVar3 + 0x20);
  FUN_10896dcb0(puVar2 + 0x28,pcVar3 + 0x28);
  return puVar1;
}



/* Entry: 10896e480; end: 10896e507;  */

void FUN_10896e480(long param_1,long param_2)

{
  func_0x0001089718b0();
  func_0x0001089722c0();
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_10896dcb0(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 10896e508; end: 10896e52f;  */

void FUN_10896e508(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0xc0),param_1,param_2,*(undefined8 *)(param_1 + 200)
                     );
  FUN_10896e15c();
  return;
}



/* Entry: 10896e530; end: 10896e563;  */

void FUN_10896e530(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10896e480();
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  return;
}


