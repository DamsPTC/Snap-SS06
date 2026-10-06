/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077baad8; end: 1077baaff;  */

void FUN_1077baad8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x000104c335c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1077badb4; end: 1077badf3;  */

/* WARNING: Possible PIC construction at 0x0001077bae48: Changing call to branch */

long * FUN_1077badb4(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  long extraout_x8;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  double dVar11;
  undefined8 *in_stack_00000070;
  undefined *in_stack_00000078;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0xfffffffffffffff;
    }
    return plVar2;
  }
  puVar10 = &UNK_1077badf4;
  func_0x00010727d26c();
  puVar9 = (undefined8 *)&stack0xfffffffffffffff0;
  do {
    func_0x0001077bee04();
    plVar2 = param_1;
    plVar1 = param_2;
    uVar7 = param_3;
    uVar6 = param_4;
    in_stack_00000070 = puVar9;
    in_stack_00000078 = puVar10;
    func_0x0001077beddc((ulong)param_2 & 0xffffffff);
    while( true ) {
      uVar4 = (uint)param_3;
      uVar3 = (uint)param_4;
      if (uVar3 <= uVar4) {
        return plVar2;
      }
      if (600 < uVar3 - uVar4) break;
      dVar11 = *(double *)(param_1[3] + extraout_x8 * 0x10);
      func_0x0001077beb78();
      func_0x0001077bb054();
      uVar6 = param_4;
      uVar8 = param_3;
      if (dVar11 < *(double *)(param_1[3] + (param_4 & 0xffffffff) * 0x10)) {
        func_0x0001077beb78();
        func_0x0001077bb054();
      }
      while( true ) {
        plVar1 = (long *)param_1[3];
        uVar5 = (uint)uVar6;
        if (uVar5 <= (uint)uVar8) break;
        plVar2 = (long *)*param_1;
        uVar7 = uVar8;
        func_0x0001077bb054();
        do {
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (*(double *)(param_1[3] + uVar8 * 0x10) < dVar11);
        do {
          uVar6 = (ulong)((int)uVar6 - 1);
        } while (dVar11 < *(double *)(param_1[3] + uVar6 * 0x10));
      }
      if ((double)plVar1[(param_3 & 0xffffffff) * 2] == dVar11) {
        func_0x0001077beb78();
      }
      else {
        uVar5 = uVar5 + 1;
        uVar7 = (ulong)uVar5;
        plVar2 = (long *)*param_1;
        uVar6 = param_4;
      }
      func_0x0001077bb054();
      if (uVar5 <= (uint)param_2) {
        uVar4 = uVar5 + 1;
      }
      param_3 = (ulong)uVar4;
      if ((uint)param_2 <= uVar5) {
        uVar3 = uVar5 - 1;
      }
      param_4 = (ulong)uVar3;
    }
    func_0x0001077bea54();
    func_0x0001077beb84();
    func_0x0001077be8dc();
    puVar10 = &UNK_1077bae4c;
    param_1 = plVar2;
    param_2 = plVar1;
    param_3 = uVar7;
    param_4 = uVar6;
    puVar9 = &stack0x00000070;
  } while( true );
}



/* Entry: 1077bb46c; end: 1077bb59f;  */

void FUN_1077bb46c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 0x28;
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    if (*(long *)(param_1 + 0x20) == 0) {
      uStack_68 = 0;
      uStack_60 = 0;
      func_0x000107269c1c(&uStack_68);
    }
    else {
      func_0x000107268400(&uStack_68);
    }
    uVar2 = *(ulong *)(param_2 + 0x40);
    if (uVar2 < *(ulong *)(param_2 + 0x48)) {
      func_0x0001077beb94(uVar2,param_1);
      lVar1 = uVar2 + 0x28;
      *(long *)(param_2 + 0x40) = lVar1;
    }
    else {
      lVar1 = param_2 + 0x38;
      func_0x0001077beaa4((long)(uVar2 - *(long *)(param_2 + 0x38)) / 0x28,lVar1);
      func_0x0001077baa48(auStack_58,lVar1,
                          (*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38)) / 0x28,
                          (ulong *)(param_2 + 0x48));
      func_0x0001077beb94(lStack_48,param_1);
      lStack_48 = lStack_48 + 0x28;
      func_0x0001077ba9ac(param_2 + 0x38,auStack_58);
      lVar1 = *(long *)(param_2 + 0x40);
      func_0x0001077bab00(auStack_58);
    }
    *(long *)(param_2 + 0x40) = lVar1;
    func_0x0001077becd8();
  }
  return;
}



/* Entry: 1077bbe88; end: 1077bbeeb;  */

long FUN_1077bbe88(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x0001077be83c();
  func_0x0001072c720c();
  func_0x0001077becd0();
  func_0x0001077be7ec(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077becd0();
  func_0x0001077be8c4();
  lVar2 = lVar1;
  puVar3 = param_3;
  func_0x0001077be83c();
  func_0x0001072c6f80();
  uVar4 = *param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_3[1];
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  *param_3 = 0;
  param_3[1] = 0;
  lVar2 = lVar2 + 0x30;
  func_0x0001072692b0(lVar2,param_4);
  func_0x0001077becd0();
  func_0x0001077be7ec(extraout_x8_00);
  if ((bool)in_ZR) {
    return lVar1;
  }
  ___stack_chk_fail();
  func_0x000104c318bc();
  *(undefined4 *)(lVar2 + 0x38) = 5;
  *(undefined8 **)(lVar2 + 0x40) = puVar3;
  return lVar2;
}



/* Entry: 1077bc3f4; end: 1077bc4fb;  */

/* WARNING: Possible PIC construction at 0x0001077bc564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001077bc568) */

void FUN_1077bc3f4(long param_1,undefined8 param_2,int *param_3,ulong param_4,uint *param_5)

{
  uint uVar1;
  char cVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 extraout_x8;
  int *piVar8;
  undefined8 *puVar9;
  uint uVar10;
  double unaff_d12;
  double unaff_d14;
  double unaff_d15;
  undefined1 auStack_a8 [112];
  undefined8 uStack_38;
  
  func_0x0001077be83c();
  uStack_38 = extraout_x8;
  func_0x0001077beac4();
  if ((bool)in_ZR) {
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    piVar8 = (int *)puVar9[1];
    if (*piVar8 != 0) {
      param_5 = (uint *)puVar9[2];
      uVar10 = *param_5;
      if ((uint)param_3[4] < 2) {
        in_CY = *(uint *)puVar9[3] <= uVar10;
        in_ZR = uVar10 == *(uint *)puVar9[3];
        if ((bool)in_CY) {
          func_0x0001077bc0c0(auStack_a8,*(undefined8 *)puVar9[4]);
          func_0x0001077becb0();
          func_0x0001077beb60();
          *(int *)puVar9[1] = *(int *)puVar9[1] + -1;
        }
        else {
          *param_5 = uVar10 + 1;
        }
      }
      else {
        uVar10 = uVar10 + param_3[4];
        uVar1 = *(uint *)puVar9[3];
        param_4 = (ulong)uVar1;
        in_CY = uVar1 <= uVar10;
        in_ZR = uVar10 == uVar1;
        if (!(bool)in_CY || (bool)in_ZR) {
          *param_5 = uVar10;
        }
        else {
          func_0x0001077bc210(*puVar9,param_3[5]);
          param_3 = piVar8;
        }
      }
    }
    **(undefined1 **)(param_1 + 0x18) = 1;
  }
  func_0x0001077be7ec(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077beb60();
  func_0x0001077be8c4();
code_r0x0001077bc4fc:
  func_0x0001077be874();
  piVar8 = param_3;
  uVar6 = param_4;
  puVar7 = param_5;
  func_0x0001077be76c();
  do {
    func_0x0001077beaac();
    if ((bool)in_ZR) {
      return;
    }
    func_0x0001077be8cc();
    if (!(bool)in_CY || (bool)in_ZR) {
      while( true ) {
        uVar10 = (uint)param_3;
        bVar4 = (uint)param_4 <= uVar10;
        bVar5 = uVar10 == (uint)param_4;
        if (bVar4 && !bVar5) break;
        func_0x0001077be800();
        if (!bVar4 || bVar5) {
          func_0x0001077be964();
          func_0x0001077bc5ac();
        }
        param_3 = (int *)(ulong)(uVar10 + 1);
      }
      return;
    }
    func_0x0001077be79c();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x0001077be954();
      func_0x0001077bc5ac();
    }
    in_ZR = ((ulong)param_5 & 0xff) == 0;
    cVar2 = '\0';
    in_CY = false;
    cVar3 = '\0';
    if ((bool)in_ZR) {
      func_0x0001077beb04();
      if (!(bool)in_CY || (bool)in_ZR) break;
      func_0x0001077bebcc();
      if (cVar2 != cVar3) {
        return;
      }
    }
    else {
      in_CY = unaff_d15 <= unaff_d12;
      in_ZR = unaff_d12 == unaff_d15;
      if (!(bool)in_CY || (bool)in_ZR) break;
      in_CY = unaff_d15 <= unaff_d14;
      in_ZR = unaff_d14 == unaff_d15;
      if (unaff_d14 < unaff_d15) {
        return;
      }
    }
    func_0x0001077bebb4();
  } while( true );
  param_5 = puVar7;
  param_4 = uVar6;
  param_3 = piVar8;
  func_0x0001077be7c0();
  goto code_r0x0001077bc4fc;
}



/* Entry: 1077bc860; end: 1077bc873;  */

void FUN_1077bc860(void)

{
  func_0x0001077bd3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bd29c; end: 1077bd33f;  */

void FUN_1077bd29c(undefined4 *param_1)

{
  int extraout_w10;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077bebc0();
  func_0x0001072c30b8(*param_1,unaff_x19 + 2);
  *unaff_x19 = 0xffffffff;
  func_0x0001072c08d0(*unaff_x20,unaff_x20 + 2,unaff_x19 + 2);
  *unaff_x19 = *unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    do {
      func_0x0001077be93c();
    } while (extraout_w10 != 0);
  }
  uStack_28 = *(undefined8 *)(unaff_x19 + 0x10);
  uStack_30 = *(undefined8 *)(unaff_x19 + 0xe);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xe) = uVar1;
  func_0x0001072c0654(&uStack_30);
  func_0x00010729c0b0(unaff_x19 + 0x12,unaff_x20 + 0x12);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x24);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x22);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x26);
  unaff_x19[0x2a] = unaff_x20[0x2a];
  *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x26) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x24) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x22) = uVar1;
  return;
}



/* Entry: 1077bd544; end: 1077bd57b;  */

undefined8 FUN_1077bd544(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm(0x60);
  func_0x0001077bd8dc();
  return uVar1;
}



/* Entry: 1077bd9b8; end: 1077bda13;  */

void FUN_1077bd9b8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001077bebe8();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001077bea30(uVar1);
  return;
}



/* Entry: 1077bdb08; end: 1077bdb33;  */

undefined8 * FUN_1077bdb08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dbf18;
  func_0x0001077bdb88(param_1 + 1);
  return param_1;
}



/* Entry: 1077bde2c; end: 1077bde8f;  */

undefined ** FUN_1077bde2c(void)

{
  return &PTR_DAT_1109dc0d0;
}



/* Entry: 1077be23c; end: 1077be283;  */

void FUN_1077be23c(undefined1 *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30) + 0x20;
  func_0x000107297a3c();
  if (lVar1 != 0) {
    func_0x000107268350(param_1,param_3 + 0x38);
    param_1[0x40] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x40] = 0;
  return;
}



/* Entry: 1077be578; end: 1077be59f;  */

void FUN_1077be578(undefined8 param_1)

{
  func_0x0001077beab8();
  func_0x0001077bea20(param_1,&PTR_DAT_1109dc160);
  func_0x0001077be974();
  return;
}



/* Entry: 1077be6b0; end: 1077be6c3;  */

void FUN_1077be6b0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077bef08; end: 1077bef7b;  */

void FUN_1077bef08(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001077bf2a8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077bf7d8();
  return;
}



/* Entry: 1077bf280; end: 1077bf2a7;  */

long FUN_1077bf280(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077bf418; end: 1077bf423;  */

undefined8 FUN_1077bf418(long param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  func_0x000107456e48(param_1 + 0xd8);
  func_0x0001077b732c();
  *puVar1 = extraout_x8;
  func_0x0001072c9240(puVar1 + 0xd);
  func_0x000104c2f714(puVar1 + 2);
  return unaff_x19;
}



/* Entry: 1077bf728; end: 1077bf75f;  */

long FUN_1077bf728(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc378);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077bf904; end: 1077bf9ef;  */

undefined8 *
FUN_1077bf904(undefined8 *param_1,undefined8 param_2,long param_3,undefined2 param_4,
             undefined1 param_5)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_23;
  undefined2 uStack_22;
  
  uStack_23 = param_5;
  uStack_22 = param_4;
  func_0x0001077bf9f0(auStack_50,&uStack_23,param_2,&uStack_22);
  func_0x0001077c0014(&uStack_40,auStack_50);
  *param_1 = &PTR_DAT_1109db730;
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[3] = &PTR_PTR_1131ada40;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = &UNK_107783258;
  func_0x0001074f7454(&uStack_40);
  func_0x0001077c0820();
  *param_1 = &PTR_DAT_1109dc3d8;
  func_0x0001077c0054(param_1 + 8,param_3 + 8);
  param_1[0x17] = 0;
  func_0x00010726ed14(param_1 + 0x18);
  param_1[0x1a] = param_1;
  return param_1;
}



/* Entry: 1077bfe30; end: 1077bfe37;  */

void FUN_1077bfe30(long param_1)

{
  long extraout_x8;
  int extraout_w11;
  
  func_0x000107346060(param_1 + 0xc0);
  if (extraout_x8 != 0) {
    do {
      func_0x00010734740c();
    } while (extraout_w11 != 0);
  }
  func_0x0001073269a0();
  func_0x0001073460e8();
  return;
}



/* Entry: 1077bffc4; end: 1077bffd7;  */

void FUN_1077bffc4(void)

{
  func_0x0001077bfff4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c0170; end: 1077c0183;  */

void FUN_1077c0170(void)

{
  func_0x0001077c0144();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c0664; end: 1077c067f;  */

void FUN_1077c0664(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 1077c0908; end: 1077c092b;  */

void FUN_1077c0908(undefined1 *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0xf0) & 1) != 0) {
    func_0x000107c60c94(param_1,param_2 + 0xa0);
    param_1[0x18] = 1;
    return;
  }
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1077c0ad8; end: 1077c0bcb;  */

void FUN_1077c0ad8(long param_1,undefined8 param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long alStack_40 [2];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  lVar1 = *(long *)(param_1 + 8);
  uStack_48 = *(undefined8 *)(lVar1 + 0x98);
  uStack_50 = *(undefined8 *)(lVar1 + 0x90);
  if (*(long *)(lVar1 + 0x98) != 0) {
    do {
      func_0x0001077c13b0();
    } while (extraout_w10 != 0);
  }
  func_0x00010751092c(alStack_40,&uStack_50);
  func_0x00010751096c(&uStack_50);
  if (alStack_40[0] != 0) {
    uStack_48 = *(undefined8 *)(alStack_40[0] + 0x40);
    uStack_50 = *(undefined8 *)(alStack_40[0] + 0x38);
    if (*(long *)(alStack_40[0] + 0x40) != 0) {
      do {
        func_0x0001077c13b0();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001073139fc(&uStack_30,&uStack_50);
    func_0x00010724b8b8(&uStack_50);
  }
  func_0x000107510994(alStack_40);
  FUN_1077c1054(auStack_60,param_2,*(long *)(*(long *)(param_1 + 8) + 0x80) + 8,&uStack_30);
  func_0x0001077c0a88(param_1,auStack_60);
  func_0x000107510994(auStack_60);
  func_0x00010724b8b8(&uStack_30);
  return;
}



/* Entry: 1077c0e34; end: 1077c0e5b;  */

long FUN_1077c0e34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001077c0e5c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1077c0f34; end: 1077c0f93;  */

undefined8 * FUN_1077c0f34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107500054(&uStack_30);
  return param_1;
}



/* Entry: 1077c1054; end: 1077c1073;  */

void FUN_1077c1054(void)

{
  func_0x0001077c1418();
  func_0x0001077c1074();
  return;
}



/* Entry: 1077c12dc; end: 1077c1317;  */

void FUN_1077c12dc(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001077c1450();
  func_0x0001077c19a8();
  func_0x000107510994(auStack_30);
  return;
}



/* Entry: 1077c1a2c; end: 1077c1a2f;  */

undefined8 FUN_1077c1a2c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107510994(param_1 + 0x12);
  func_0x0001073267a8(param_1 + 0x10);
  func_0x0001077b732c();
  *param_1 = extraout_x8;
  func_0x0001072c9240(param_1 + 0xd);
  func_0x000104c2f714(param_1 + 2);
  return unaff_x19;
}



/* Entry: 1077c1d38; end: 1077c1d73;  */

long * FUN_1077c1d38(long *param_1)

{
  if (param_1[2] != 0) {
    func_0x0001077c1d74(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1077c1ef0; end: 1077c1f33;  */

long FUN_1077c1ef0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001077c2828();
  }
  else {
    func_0x0001077c28ac();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1077c22b4; end: 1077c22eb;  */

long FUN_1077c22b4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dc800);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077c249c; end: 1077c24bf;  */

void FUN_1077c249c(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  func_0x0001077c287c(param_2,param_1 + 8);
  *param_2 = &PTR_DAT_1109dc790;
  func_0x0001077c2038(param_2 + 1);
  func_0x0001077c25b8(param_2 + 5,unaff_x20 + 0x20);
  return;
}



/* Entry: 1077c2700; end: 1077c2713;  */

void FUN_1077c2700(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0x48;
  func_0x000104c2fe00();
  lVar2 = *(long *)(param_3 + 0x40);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001077c2864();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1077c2a7c; end: 1077c2a8f;  */

void FUN_1077c2a7c(void)

{
  func_0x0001077c2a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c2e80; end: 1077c2f03;  */

undefined1 * FUN_1077c2e80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x0001077c3418();
  uStack_28 = extraout_x8;
  func_0x0001077c343c(auStack_40);
  func_0x0001077c2f54(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001077c2fd0();
  func_0x0001077c33fc(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001077c2fd0();
  func_0x0001077c3434();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  func_0x0001077c2f2c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 1077c304c; end: 1077c305f;  */

void FUN_1077c304c(void)

{
  func_0x0001077c3020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c3484; end: 1077c34b7;  */

void FUN_1077c3484(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001077b5880(param_1,0,param_2,1);
  *param_1 = &PTR_DAT_1109dc948;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}



/* Entry: 1077c36dc; end: 1077c3723;  */

void FUN_1077c36dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 1077c3904; end: 1077c3913;  */

void FUN_1077c3904(long *param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = *(long *)(param_2 + 8);
  *(undefined1 *)(lVar1 + 0x20) = 1;
  func_0x0001077c5a38(lVar1 + 0xe0);
  if (*param_1 != 0) {
    *(undefined ***)(*param_1 + 0x28) = &PTR_PTR_1131ada18;
    func_0x0001077ca0b8();
    func_0x0001077ca218(*(undefined8 *)(extraout_x8 + 0x48));
  }
  return;
}



/* Entry: 1077c3a10; end: 1077c3a5f;  */

void FUN_1077c3a10(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001077c3a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1077c4178; end: 1077c466f;  */

void FUN_1077c4178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar4;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [96];
  undefined1 auStack_288 [24];
  long lStack_270;
  undefined1 auStack_268 [24];
  long lStack_250;
  long lStack_248;
  undefined4 uStack_240;
  undefined1 auStack_238 [24];
  long lStack_220;
  undefined1 auStack_218 [24];
  long lStack_200;
  undefined1 auStack_1f8 [24];
  long lStack_1e0;
  undefined1 auStack_1d8 [24];
  long lStack_1c0;
  undefined1 auStack_1b8 [24];
  long lStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 auStack_178 [24];
  undefined8 *puStack_160;
  undefined1 auStack_158 [24];
  undefined8 *puStack_140;
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined1 auStack_118 [24];
  undefined8 *puStack_100;
  undefined1 auStack_f8 [24];
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 *puStack_a0;
  undefined1 auStack_98 [24];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  lVar1 = param_1;
  func_0x0001077c9d20();
  uStack_58 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x0001077c9e48(auStack_1b8);
  lStack_1a0 = param_1;
  func_0x0001077c9e48(auStack_1d8);
  lStack_1c0 = param_1;
  func_0x0001077c9e48(auStack_1f8);
  lStack_1e0 = param_1;
  func_0x0001077c9e48(auStack_218);
  lStack_200 = param_1;
  func_0x0001077c9e48(auStack_238);
  lStack_220 = param_1;
  func_0x0001077c9e48(&uStack_78);
  func_0x0001077c9e48(auStack_268);
  uStack_240 = 0;
  lStack_250 = param_1;
  lStack_248 = lVar1;
  func_0x0001077c9e48(auStack_288);
  lStack_270 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x68,param_2);
  plVar4 = *(long **)(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_300,param_1 + 0x200);
  func_0x0001077c6484(auStack_2e8,param_1 + 0x218);
  puVar2 = &uStack_330;
  func_0x0001077c49a0(puVar2,auStack_268);
  puStack_80 = (undefined8 *)0x0;
  func_0x0001077c9fa4();
  *puVar2 = &PTR_DAT_1109dcd00;
  puVar2[2] = uStack_328;
  puVar2[1] = uStack_330;
  uStack_330 = 0;
  uStack_328 = 0;
  puVar2[3] = uStack_320;
  puVar2[5] = uStack_310;
  puVar2[4] = uStack_318;
  puVar2[6] = uStack_308;
  puVar3 = &uStack_350;
  puStack_80 = puVar2;
  func_0x0001077c49cc(puVar3,auStack_288);
  puStack_a0 = (undefined8 *)0x0;
  func_0x0001077c9dc8();
  *puVar3 = &PTR_DAT_1109dcd90;
  puVar3[2] = uStack_348;
  puVar3[1] = uStack_350;
  uStack_350 = 0;
  uStack_348 = 0;
  puVar3[3] = uStack_340;
  puVar3[4] = uStack_338;
  puVar2 = &uStack_370;
  puStack_a0 = puVar3;
  func_0x0001077c49e4(puVar2,auStack_1b8);
  puStack_c0 = (undefined8 *)0x0;
  func_0x0001077c9dc8();
  *puVar2 = &PTR_DAT_1109dce10;
  puVar2[2] = uStack_368;
  puVar2[1] = uStack_370;
  uStack_370 = 0;
  uStack_368 = 0;
  puVar2[3] = uStack_360;
  puVar2[4] = uStack_358;
  puVar3 = &uStack_390;
  puStack_c0 = puVar2;
  func_0x0001077c49fc(puVar3,auStack_1d8);
  puStack_e0 = (undefined8 *)0x0;
  func_0x0001077c9dc8();
  *puVar3 = &PTR_DAT_1109dce90;
  puVar3[2] = uStack_388;
  puVar3[1] = uStack_390;
  uStack_390 = 0;
  uStack_388 = 0;
  puVar3[3] = uStack_380;
  puVar3[4] = uStack_378;
  puVar2 = &uStack_3b0;
  puStack_e0 = puVar3;
  func_0x0001077c4a14(puVar2,auStack_1f8);
  puStack_100 = (undefined8 *)0x0;
  func_0x0001077c9dc8();
  *puVar2 = &PTR_DAT_1109dcf20;
  puVar2[2] = uStack_3a8;
  puVar2[1] = uStack_3b0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  puVar2[3] = uStack_3a0;
  puVar2[4] = uStack_398;
  puVar3 = &uStack_3d0;
  puStack_100 = puVar2;
  func_0x0001077c4a2c(puVar3,auStack_218);
  puStack_120 = (undefined8 *)0x0;
  func_0x0001077c9dc8();
  *puVar3 = &PTR_DAT_1109dcfb0;
  puVar3[2] = uStack_3c8;
  puVar3[1] = uStack_3d0;
  uStack_3d0 = 0;
  uStack_3c8 = 0;
  puVar3[3] = uStack_3c0;
  puVar3[4] = uStack_3b8;
  puVar2 = &uStack_3f0;
  puStack_120 = puVar3;
  func_0x0001077c4a44(puVar2,auStack_238);
  puStack_140 = (undefined8 *)0x0;
  func_0x0001077c9dc8();
  *puVar2 = &PTR_DAT_1109dd040;
  puVar2[2] = uStack_3e8;
  puVar2[1] = uStack_3f0;
  uStack_3f0 = 0;
  uStack_3e8 = 0;
  puVar2[3] = uStack_3e0;
  puVar2[4] = uStack_3d8;
  uStack_198 = uStack_78;
  lStack_190 = lStack_70;
  puStack_140 = puVar2;
  if (lStack_70 != 0) {
    do {
      func_0x0001077c9f5c();
    } while (extraout_w10 != 0);
  }
  uStack_188 = uStack_68;
  puStack_160 = (undefined8 *)0x0;
  func_0x0001077c9dc8();
  *puVar2 = &PTR_DAT_1109dd0d0;
  puVar2[1] = uStack_78;
  lStack_190 = 0;
  uStack_198 = 0;
  puVar2[2] = lStack_70;
  puVar2[3] = uStack_68;
  puStack_160 = puVar2;
  (**(code **)(*plVar4 + 0x10))
            (plVar4,param_2,param_3,auStack_300,auStack_98,auStack_b8,auStack_d8,auStack_f8,
             auStack_118,auStack_138,auStack_158,auStack_178);
  func_0x0001075311d8(auStack_178);
  func_0x00010725b1d4(&uStack_198);
  func_0x00010753120c(auStack_158);
  func_0x00010725b1d4(&uStack_3f0);
  func_0x000107531240(auStack_138);
  func_0x00010725b1d4(&uStack_3d0);
  func_0x000107529804(auStack_118);
  func_0x00010725b1d4(&uStack_3b0);
  func_0x000107531a98(auStack_f8);
  func_0x00010725b1d4(&uStack_390);
  func_0x00010724b884(auStack_d8);
  func_0x00010725b1d4(&uStack_370);
  func_0x0001006393ec(auStack_b8);
  func_0x00010725b1d4(&uStack_350);
  func_0x00010752ede8(auStack_98);
  func_0x00010725b1d4(&uStack_330);
  func_0x0001077c650c(auStack_300);
  func_0x00010725b1d4(auStack_288);
  func_0x00010725b1d4(auStack_268);
  func_0x00010725b1d4(&uStack_78);
  func_0x00010725b1d4(auStack_238);
  func_0x00010725b1d4(auStack_218);
  func_0x00010725b1d4(auStack_1f8);
  func_0x00010725b1d4(auStack_1d8);
  func_0x00010725b1d4(auStack_1b8);
  func_0x0001077c9cec(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001075311d8(auStack_178);
    func_0x00010725b1d4(&uStack_198);
    func_0x00010753120c(auStack_158);
    func_0x00010725b1d4(&uStack_3f0);
    func_0x000107531240(auStack_138);
    func_0x00010725b1d4(&uStack_3d0);
    func_0x000107529804(auStack_118);
    func_0x00010725b1d4(&uStack_3b0);
    func_0x000107531a98(auStack_f8);
    do {
      func_0x00010725b1d4(&uStack_390);
      func_0x00010724b884(auStack_d8);
      func_0x00010725b1d4(&uStack_370);
      func_0x0001006393ec(auStack_b8);
      func_0x00010725b1d4(&uStack_350);
      func_0x00010752ede8(auStack_98);
      func_0x00010725b1d4(&uStack_330);
      func_0x0001077c650c(auStack_300);
      func_0x00010725b1d4(auStack_288);
      func_0x00010725b1d4(auStack_268);
      func_0x00010725b1d4(&uStack_78);
      func_0x00010725b1d4(auStack_238);
      func_0x00010725b1d4(auStack_218);
      func_0x00010725b1d4(auStack_1f8);
      func_0x00010725b1d4(auStack_1d8);
      func_0x00010725b1d4(auStack_1b8);
      func_0x0001077c9da4();
    } while( true );
  }
  return;
}



/* Entry: 1077c5940; end: 1077c59af;  */

void FUN_1077c5940(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001077c94b0(param_1,param_2[1] - *param_2 >> 3);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    func_0x0001077ca074();
    func_0x0001077c9528();
  }
  return;
}



/* Entry: 1077c5ce8; end: 1077c5d4b;  */

void FUN_1077c5ce8(long param_1)

{
  long unaff_x19;
  
  func_0x0001077c9de8();
  func_0x0001077c66a0(unaff_x19 + 0x10,*(undefined8 *)(param_1 + 8));
  func_0x000107470368();
  return;
}



/* Entry: 1077c5fd4; end: 1077c5fdb;  */

void FUN_1077c5fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *extraout_x8;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  param_1 = param_1 + -8;
  uVar1 = param_3;
  func_0x0001077ca30c(param_1);
  __ZNSt13exception_ptraSERKS_(param_1 + 0x3b8,uVar1);
  plVar2 = *(long **)(unaff_x20 + 0x3a8);
  __ZNSt13exception_ptrC1ERKS_(auStack_38,param_3);
  func_0x0001077c9ffc(*(undefined8 *)(*plVar2 + 0x20));
  (*extraout_x8)();
  __ZNSt13exception_ptrD1Ev(auStack_38);
  plVar2 = *(long **)(unaff_x20 + 0x3a8);
  __ZNSt13exception_ptrC1ERKS_(auStack_40,param_3);
  (**(code **)(*plVar2 + 0x60))(plVar2,auStack_40);
  __ZNSt13exception_ptrD1Ev(auStack_40);
  return;
}



/* Entry: 1077c6370; end: 1077c638f;  */

void FUN_1077c6370(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077c6550; end: 1077c6587;  */

void FUN_1077c6550(long param_1)

{
  long unaff_x20;
  
  func_0x0001077c9e24();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1077c6ff4; end: 1077c702b;  */

void FUN_1077c6ff4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010747cf60();
  func_0x0001077ca318();
  func_0x00010747cf60();
  func_0x0001077c9f94();
  return;
}



/* Entry: 1077c7208; end: 1077c7223;  */

void FUN_1077c7208(long param_1)

{
  long extraout_x8;
  
  func_0x00010752adac(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x0001075291f8();
    func_0x00010752ac18();
  }
  return;
}



/* Entry: 1077c7500; end: 1077c7527;  */

void FUN_1077c7500(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dcce0);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c8288; end: 1077c82af;  */

void FUN_1077c8288(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dcd70);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c83e0; end: 1077c83eb;  */

undefined ** FUN_1077c83e0(void)

{
  return &PTR_DAT_1109dcdf0;
}



/* Entry: 1077c857c; end: 1077c85db;  */

undefined8 * FUN_1077c857c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dce10;
  func_0x0001077c49e4(param_1 + 1);
  return param_1;
}



/* Entry: 1077c8894; end: 1077c88bb;  */

void FUN_1077c8894(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dcf00);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c8ab0; end: 1077c8b37;  */

void FUN_1077c8ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001077ca30c();
  iVar1 = (int)auStack_48;
  func_0x0001077ca06c();
  func_0x0001077ca080();
  if (iVar1 != 0) {
    lVar2 = *unaff_x21;
    *unaff_x21 = 0;
    if (*(char *)(*(long *)(unaff_x20 + 0x20) + 0x3c0) == '\x01') {
      lStack_38 = lVar2;
      func_0x0001077c4ae0(*(long *)(unaff_x20 + 0x20),&lStack_38,param_3);
      lVar2 = lStack_38;
    }
    if (lVar2 != 0) {
      func_0x0001077c9d14();
    }
  }
  func_0x0001077c9e38();
  return;
}



/* Entry: 1077c8c60; end: 1077c8c87;  */

void FUN_1077c8c60(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dd020);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077c8df0; end: 1077c8dfb;  */

undefined ** FUN_1077c8df0(void)

{
  return &PTR_DAT_1109dd0b0;
}



/* Entry: 1077c8f44; end: 1077c8f6f;  */

undefined8 * FUN_1077c8f44(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109dd0d0;
  func_0x0001077c64dc(param_1 + 1);
  return param_1;
}



/* Entry: 1077c9260; end: 1077c92bf;  */

long * FUN_1077c9260(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  ulong uVar7;
  long alStack_60 [7];
  undefined8 uStack_28;
  
  plVar5 = alStack_60;
  func_0x0001077c9d00();
  uStack_28 = extraout_x8;
  func_0x0001077b5514(alStack_60,*param_2);
  func_0x000104c32db4(alStack_60,*unaff_x19);
  plVar6 = plVar5;
  func_0x0001077c9eb0();
  func_0x0001077c9cec(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077c9e08();
    func_0x000104c2f714();
    func_0x0001077c9da4();
    func_0x0001077c9e24();
    puVar3 = (undefined8 *)*plVar6;
    uVar2 = plVar6[1] - *plVar6 >> 4;
    while (puVar1 = puVar3, uVar2 != 0) {
      uVar7 = uVar2 >> 1;
      iVar4 = (int)puVar1[uVar7 * 2] + 0x10;
      func_0x000104c2fc44();
      puVar3 = puVar1 + uVar7 * 2 + 2;
      uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
      if (iVar4 == 0) {
        puVar3 = puVar1;
        uVar2 = uVar7;
      }
    }
    return (long *)((long)puVar1 - *plVar5 >> 4);
  }
  return plVar5;
}



/* Entry: 1077c9474; end: 1077c947b;  */

void FUN_1077c9474(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077c9de8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000107529620();
  }
  return;
}



/* Entry: 1077c96fc; end: 1077c9733;  */

void FUN_1077c96fc(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001077ca364();
  while (unaff_x21 != unaff_x20) {
    func_0x0001077c9ffc();
    func_0x0001074e3d18();
    func_0x0001077ca110();
  }
  func_0x0001077ca14c();
  return;
}



/* Entry: 1077c98e8; end: 1077c9907;  */

void FUN_1077c98e8(void)

{
  func_0x0001077ca2ec();
  func_0x0001077c9908();
  return;
}



/* Entry: 1077c9c50; end: 1077c9c77;  */

void FUN_1077c9c50(undefined8 param_1)

{
  func_0x0001077c9e84();
  func_0x0001077c9e30(param_1,&PTR_DAT_1109dd1c0);
  func_0x0001077c9d4c();
  return;
}



/* Entry: 1077ca3f8; end: 1077ca40f;  */

void FUN_1077ca3f8(long *param_1,long param_2)

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



/* Entry: 1077cac00; end: 1077cacfb;  */

void FUN_1077cac00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long unaff_x19;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char cStack_50;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  iVar1 = (int)param_2;
  func_0x0001077ef424();
  func_0x0001077f06fc();
  if (iVar1 != 0) {
    func_0x0001077f06f4();
    func_0x0001077f1030();
    func_0x0001077cacfc(&uStack_60);
    if (cStack_50 == '\x01') {
      *(undefined8 *)(unaff_x19 + 0x278) = uStack_58;
      *(undefined8 *)(unaff_x19 + 0x270) = uStack_60;
      param_1 = uStack_60;
    }
    func_0x0001077ef370();
  }
  func_0x0001077f06fc();
  if (iVar1 != 0) {
    func_0x0001077f06f4();
    if ((*(ushort *)(CONCAT44(uVar2,iVar1) + 0x16) >> 4 & 1) != 0) {
      func_0x0001073274d0();
      *(undefined8 *)(unaff_x19 + 0x280) = param_1;
    }
  }
  func_0x0001077f06fc();
  if (iVar1 != 0) {
    func_0x0001077f06f4();
    if ((*(ushort *)(CONCAT44(uVar2,iVar1) + 0x16) >> 4 & 1) != 0) {
      func_0x0001073274d0();
      *(undefined8 *)(unaff_x19 + 0x288) = param_1;
    }
  }
  func_0x0001077f06fc();
  if (iVar1 != 0) {
    func_0x0001077f06f4();
    if ((*(ushort *)(CONCAT44(uVar2,iVar1) + 0x16) >> 4 & 1) != 0) {
      func_0x0001073274d0();
      *(undefined8 *)(unaff_x19 + 0x290) = param_1;
    }
  }
  return;
}



/* Entry: 1077caf68; end: 1077cafa7;  */

void FUN_1077caf68(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined1 auStack_98 [24];
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x0001077ee468();
  func_0x00010754bb48(auStack_38);
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  func_0x0001077efd7c();
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x0001077cb014(auStack_98,extraout_x9,&uStack_78);
  if ((bStack_80 & 1) != 0) {
    func_0x0001077cb054(unaff_x19 + 0x168,auStack_98);
  }
  func_0x0001077d5e10(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
  return;
}



/* Entry: 1077d530c; end: 1077d5333;  */

void FUN_1077d530c(void)

{
  func_0x0001077ef34c();
  func_0x0001077da3b8();
  func_0x0001077ef474();
  func_0x00010733ecf0();
  return;
}



/* Entry: 1077d5ba4; end: 1077d5bc7;  */

void FUN_1077d5ba4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109dd200;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077d5e64; end: 1077d5e8f;  */

void FUN_1077d5e64(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077f0638();
  func_0x000107277f0c();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x18;
  return;
}



/* Entry: 1077d7120; end: 1077d75f7;  */

undefined1 * FUN_1077d7120(ulong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  byte bVar6;
  long unaff_x21;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uStack_300;
  undefined8 uStack_2f8;
  ulong uStack_2f0;
  undefined1 auStack_2e8 [56];
  undefined1 auStack_2b0 [56];
  undefined1 auStack_278 [56];
  undefined1 auStack_240 [56];
  undefined1 auStack_208 [56];
  undefined1 auStack_1d0 [56];
  undefined1 auStack_198 [56];
  undefined1 auStack_160 [20];
  undefined4 uStack_14c;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined4 auStack_118 [30];
  int iStack_a0;
  undefined8 uStack_98;
  
  func_0x0001077ee358();
  auStack_118[0] = 0;
  uStack_98 = extraout_x8;
  func_0x0001077eed70();
  auStack_118[0] = 0;
  uVar11 = param_1;
  func_0x0001077eed70();
  auStack_118[0] = 0;
  uVar12 = uVar11;
  func_0x0001077eed70();
  auStack_118[0] = 0;
  uVar13 = uVar12;
  func_0x0001077eed70();
  uVar14 = uVar13;
  func_0x0001077d7830(auStack_118);
  func_0x0001077eec3c(auStack_198);
  func_0x0001077efd20();
  func_0x0001077d7834(auStack_118);
  func_0x0001077eec3c(auStack_1d0);
  func_0x0001077efd20();
  func_0x0001077d7838(auStack_118);
  func_0x0001077eec3c(auStack_208);
  func_0x0001077efd20();
  func_0x0001077d783c(auStack_118);
  func_0x0001077eec3c(auStack_240);
  func_0x0001077efd20();
  func_0x0001077d7840(auStack_118);
  func_0x0001077eec3c(auStack_278);
  func_0x0001077efd20();
  uVar7 = 0;
  if (*(int *)(unaff_x21 + 0x370) != 0) {
    puVar3 = (undefined4 *)(unaff_x21 + 0x340);
    if (*(int *)(unaff_x21 + 0x370) == 1) {
      uVar7 = *puVar3;
    }
    else {
      func_0x0001077f0e98();
      uVar7 = SUB84(puVar3,0);
      func_0x0001077f15d8();
      func_0x0001077f06b0();
    }
  }
  func_0x0001077d78e4(auStack_118);
  func_0x0001077eec3c(auStack_2b0);
  func_0x0001077efd20();
  auStack_118[0] = 0;
  func_0x0001077eed70();
  auStack_118[0] = 0;
  uVar15 = uVar14;
  func_0x0001077eed70();
  uVar8 = 0;
  uVar16 = uVar15;
  if (*(int *)(unaff_x21 + 0x490) != 0) {
    if (*(int *)(unaff_x21 + 0x490) == 1) {
      uVar8 = *(uint *)(unaff_x21 + 0x460);
    }
    else {
      auStack_160[0] = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      func_0x0001077f15e4(auStack_118,*(undefined8 *)(unaff_x21 + 0x460));
      if (iStack_a0 == 1) {
        puVar3 = auStack_118;
        func_0x00010727f7dc();
        func_0x00010755ccd8();
        uVar8 = (uint)puVar3 & 0xffffff00;
        uVar9 = (uint)puVar3 & 0xff;
        bVar1 = ((ulong)puVar3 & 0x100000000) == 0;
      }
      else {
        uVar9 = 0;
        uVar8 = 0;
        bVar1 = true;
      }
      func_0x0001077ef1b0(auStack_118);
      if (bVar1) {
        if (*(char *)(unaff_x21 + 0x48c) == '\x01') {
          uVar8 = *(uint *)(unaff_x21 + 0x488);
        }
        else {
          uVar8 = 0;
        }
      }
      else {
        uVar8 = uVar8 | uVar9;
      }
      func_0x00010724b3d8(auStack_160);
    }
  }
  uVar2 = *(int *)(unaff_x21 + 0x4e0) == 1;
  if ((bool)uVar2) {
    uStack_2f8 = *(undefined8 *)(unaff_x21 + 0x4a0);
    uVar16 = *(ulong *)(unaff_x21 + 0x498);
    uStack_2f0 = *(ulong *)(unaff_x21 + 0x4a8);
    uStack_300 = uVar16;
  }
  else if (*(int *)(unaff_x21 + 0x4e0) == 0) {
    uStack_300 = uStack_300 & 0xffffffffffffff00;
    uStack_2f0 = uStack_2f0 & 0xffffffff;
  }
  else {
    func_0x0001077f0e98();
    auStack_160[0] = 0;
    uStack_14c = 0;
    func_0x00010733b350(&uStack_300);
    func_0x0001077f06b0();
  }
  uVar10 = (undefined4)uVar16;
  func_0x0001077d78e8(auStack_118);
  func_0x0001077eec3c(auStack_160);
  func_0x0001077efd20();
  func_0x0001077d78ec(auStack_118);
  func_0x0001077eec3c(auStack_2e8);
  func_0x0001077efd20();
  auStack_118[0] = 0x42700000;
  func_0x0001077eed70();
  if (*(int *)(unaff_x21 + 0x640) == 0) {
    bVar6 = 1;
  }
  else {
    uVar2 = *(int *)(unaff_x21 + 0x640) == 1;
    if ((bool)uVar2) {
      bVar6 = *(byte *)(unaff_x21 + 0x610);
    }
    else {
      func_0x0001077f0e98();
      bVar6 = (char)unaff_x21 + 0x10;
      func_0x000107280464();
      func_0x0001077f06b0();
    }
  }
  lVar4 = 0x210;
  __Znwm();
  *(int *)(lVar4 + 8) = (int)param_1;
  *(int *)(lVar4 + 0xc) = (int)uVar11;
  *(int *)(lVar4 + 0x10) = (int)uVar12;
  *(int *)(lVar4 + 0x14) = (int)uVar13;
  func_0x000104c318bc(lVar4 + 0x18,auStack_198);
  func_0x000104c318bc(lVar4 + 0x50,auStack_1d0);
  func_0x000104c318bc(lVar4 + 0x88,auStack_208);
  func_0x000104c318bc(lVar4 + 0xc0,auStack_240);
  func_0x000104c318bc(lVar4 + 0xf8,auStack_278);
  *(undefined4 *)(lVar4 + 0x130) = uVar7;
  func_0x000104c318bc(lVar4 + 0x138,auStack_2b0);
  *(int *)(lVar4 + 0x170) = (int)uVar14;
  *(int *)(lVar4 + 0x174) = (int)uVar15;
  *(uint *)(lVar4 + 0x178) = uVar8;
  *(undefined8 *)(lVar4 + 0x184) = uStack_2f8;
  *(ulong *)(lVar4 + 0x17c) = uStack_300;
  *(ulong *)(lVar4 + 0x18c) = uStack_2f0;
  func_0x000104c318bc(lVar4 + 0x198,auStack_160);
  func_0x000104c318bc(lVar4 + 0x1d0,auStack_2e8);
  *(undefined4 *)(lVar4 + 0x208) = uVar10;
  *(byte *)(lVar4 + 0x20c) = bVar6 & 1;
  func_0x0001077f07dc(&PTR_DAT_1109dd360);
  func_0x000104c2f714(auStack_2e8);
  func_0x000104c2f714(auStack_160);
  func_0x0001077f11e8();
  func_0x0001077efe08();
  func_0x0001077f0e5c();
  func_0x000104c2f714(auStack_208);
  func_0x000104c2f714(auStack_1d0);
  puVar5 = auStack_198;
  func_0x000104c2f714();
  func_0x0001077ee344(uStack_98);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001077ef1b0(auStack_118);
  func_0x00010724b3d8(auStack_160);
  func_0x000104c2f714(auStack_2b0);
  func_0x000104c2f714(auStack_278);
  func_0x000104c2f714(auStack_240);
  func_0x000104c2f714(auStack_208);
  func_0x000104c2f714(auStack_1d0);
  puVar5 = auStack_198;
  func_0x000104c2f714(puVar5);
  func_0x0001077ef068();
  func_0x00010727fc1c(puVar5 + 0x608);
  func_0x000107266a30(puVar5 + 0x5d0);
  func_0x00010732442c(puVar5 + 0x560);
  func_0x00010732442c(puVar5 + 0x4e8);
  func_0x00010733acb4(puVar5 + 0x490);
  func_0x000107560d40(puVar5 + 0x458);
  func_0x000107266a30(puVar5 + 0x420);
  func_0x000107266a30(puVar5 + 1000);
  func_0x00010732442c(puVar5 + 0x378);
  func_0x00010755fea8(puVar5 + 0x338);
  func_0x00010732442c(puVar5 + 0x2c8);
  func_0x00010732442c(puVar5 + 0x250);
  func_0x00010732442c(puVar5 + 0x1d8);
  func_0x00010732442c(puVar5 + 0x160);
  func_0x00010732442c(puVar5 + 0xe8);
  func_0x000107266a30(puVar5 + 0xa8);
  func_0x000107266a30(puVar5 + 0x70);
  func_0x000107266a30(puVar5 + 0x38);
  func_0x000107266a30(puVar5);
  return puVar5;
}



/* Entry: 1077d7958; end: 1077d79b7;  */

void FUN_1077d7958(void)

{
  undefined1 in_ZR;
  
  func_0x0001077ee32c();
  func_0x0001077ef048();
  func_0x0001077ee8ac();
  func_0x0001077f05dc();
  func_0x0001077ef7b8();
  func_0x0001077efdf0();
  func_0x0001077efe10();
  func_0x0001077ee28c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077ef8a8();
  func_0x0001077efe10();
  func_0x0001077ef068();
  func_0x0001077f1970();
  func_0x00010755b668();
  return;
}



/* Entry: 1077d7d4c; end: 1077d7e2b;  */

long FUN_1077d7d4c(long param_1)

{
  func_0x00010732442c(param_1 + 0x2d0);
  func_0x000107560e68(param_1 + 0x290);
  func_0x00010732442c(param_1 + 0x220);
  func_0x00010755fea8(param_1 + 0x1e0);
  func_0x00010732442c(param_1 + 0x170);
  func_0x00010732442c(param_1 + 0xf8);
  func_0x00010732442c(param_1 + 0x80);
  func_0x0001077efd28();
  return param_1;
}



/* Entry: 1077d80c0; end: 1077d82af;  */

void FUN_1077d80c0(undefined4 param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 auStack_148 [7];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong auStack_a0 [7];
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001077ee358();
  uStack_58 = extraout_x8;
  func_0x0001077d8364(&uStack_110);
  if (*(int *)(unaff_x21 + 0x78) == 0) {
    puVar1 = &uStack_110;
  }
  else {
    in_ZR = *(int *)(unaff_x21 + 0x78) == 1;
    if (!(bool)in_ZR) {
      auStack_a0[0] = auStack_a0[0] & 0xffffffffffffff00;
      uStack_68 = 0;
      uStack_60 = 0;
      func_0x000104c2fe00(&uStack_d8,&uStack_110);
      func_0x0001073393c0(auStack_148,unaff_x21 + 0x10);
      func_0x0001077f0ad0();
      func_0x00010724b3d8(auStack_a0);
      goto LAB_1077d8154;
    }
    puVar1 = (undefined8 *)(unaff_x21 + 0x10);
  }
  func_0x000104c2fe00(auStack_148,puVar1);
LAB_1077d8154:
  func_0x0001077eff58();
  auStack_a0[0] = 0;
  auStack_a0[1] = 0;
  auStack_a0[2] = 0;
  func_0x0001077f1570(&uStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  auStack_a0[0] = auStack_a0[0] & 0xffffffff00000000;
  func_0x0001077f0514();
  auStack_a0[0] = auStack_a0[0] & 0xffffffff00000000;
  uVar2 = param_1;
  func_0x0001077f0514();
  auStack_a0[0] = auStack_a0[0] & 0xffffffff00000000;
  uVar3 = uVar2;
  func_0x0001077f0514();
  auStack_a0[0] = 0;
  auStack_a0[1] = 0;
  auStack_a0[2] = 0;
  func_0x0001077f1570(&uStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  __Znwm(0x80);
  func_0x0001077ef6d8();
  func_0x000104c318bc();
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_c8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  *(undefined4 *)(unaff_x20 + 0x58) = param_1;
  *(undefined4 *)(unaff_x20 + 0x5c) = uVar2;
  *(undefined4 *)(unaff_x20 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_100;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  func_0x0001077f07dc(&PTR_DAT_1109dd5b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
  func_0x0001077efaf8();
  func_0x0001077ee344(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001077f0ad0();
  func_0x00010724b3d8(auStack_a0);
  puVar1 = &uStack_110;
  do {
    func_0x000104c2f714(puVar1);
    func_0x0001077ef068();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    puVar1 = auStack_148;
  } while( true );
}



/* Entry: 1077d85b8; end: 1077d878b;  */

undefined8 * FUN_1077d85b8(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long unaff_x20;
  long unaff_x21;
  int iVar2;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [7];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_c8 [136];
  
  func_0x0001077ee358();
  func_0x0001077d8364(&uStack_100);
  if (*(int *)(unaff_x21 + 0x78) == 0) {
    puVar1 = &uStack_100;
  }
  else {
    in_ZR = *(int *)(unaff_x21 + 0x78) == 1;
    if (!(bool)in_ZR) {
      func_0x0001077eeff4();
      func_0x000104c2fe00(auStack_c8,&uStack_100);
      func_0x0001073393c0(auStack_138,unaff_x21 + 0x10);
      func_0x0001077efe08();
      func_0x0001077ef544();
      goto LAB_1077d863c;
    }
    puVar1 = (undefined8 *)(unaff_x21 + 0x10);
  }
  func_0x000104c2fe00(auStack_138,puVar1);
LAB_1077d863c:
  func_0x0001077f11e8();
  iVar2 = 0;
  if (*(int *)(unaff_x21 + 0xb0) != 0) {
    in_ZR = *(int *)(unaff_x21 + 0xb0) == 1;
    if ((bool)in_ZR) {
      iVar2 = *(int *)(unaff_x21 + 0x80);
    }
    else {
      func_0x0001077eeff4();
      iVar2 = (int)unaff_x21 + 0x80;
      func_0x0001077f0e28();
      func_0x0001077ef544();
    }
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  if ((*(int *)(unaff_x21 + 0x100) == 0) || (in_ZR = *(int *)(unaff_x21 + 0x100) == 1, (bool)in_ZR))
  {
    func_0x0001077efe2c(&uStack_150);
  }
  else {
    func_0x0001077eeff4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c8,&uStack_100)
    ;
    func_0x0001077ef0e0(&uStack_150);
    func_0x00010727f9d8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    func_0x0001077ef544();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
  func_0x0001077f0c20();
  func_0x0001077ef6d8();
  func_0x000104c318bc();
  *(int *)(unaff_x20 + 0x40) = iVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_140;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  func_0x0001077f07dc(&PTR_DAT_1109dd6c0);
  func_0x0001077ef56c();
  puVar1 = auStack_138;
  func_0x000104c2f714();
  func_0x0001077ee314();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077efe08();
    func_0x0001077ef544();
    puVar1 = &uStack_100;
    func_0x000104c2f714(puVar1);
    func_0x0001077ef068();
    func_0x00010727e9d0(puVar1 + 0x16);
    func_0x000107560e68(puVar1 + 0xf);
    func_0x0001077efd28();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1077d8cb4; end: 1077d8d33;  */

void FUN_1077d8cb4(void)

{
  func_0x0001077ef1b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return;
}



/* Entry: 1077d9344; end: 1077d93db;  */

long FUN_1077d9344(long param_1)

{
  func_0x00010732442c(param_1 + 0xb8);
  func_0x000107560f90(param_1 + 0x78);
  func_0x0001077efd28();
  return param_1;
}



/* Entry: 1077d95b4; end: 1077d9783;  */

undefined1 * FUN_1077d95b4(long param_1)

{
  bool bVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [56];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [56];
  undefined1 uStack_90;
  undefined8 uStack_88;
  int iStack_50;
  
  lVar2 = param_1;
  func_0x0001077ee3e4();
  if (*(int *)(lVar2 + 0x38) == 0) {
    uVar4 = 1;
  }
  else if (*(int *)(lVar2 + 0x38) == 1) {
    uVar4 = *(undefined1 *)(param_1 + 8);
    in_ZR = 1;
  }
  else {
    auStack_110[0] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    func_0x0001077f15e4(auStack_c8,*(undefined8 *)(param_1 + 8));
    in_ZR = iStack_50 == 1;
    if ((bool)in_ZR) {
      puVar3 = auStack_c8;
      func_0x00010727f7dc();
      func_0x000107775de4();
      uVar4 = SUB81(puVar3,0);
      in_ZR = ((ulong)puVar3 & 0x100) == 0;
      bVar1 = (bool)in_ZR;
    }
    else {
      uVar4 = 0;
      bVar1 = true;
    }
    func_0x0001077ef1b0(auStack_c8);
    if (bVar1) {
      in_ZR = *(char *)(param_1 + 0x31) == '\x01';
      if ((bool)in_ZR) {
        uVar4 = *(undefined1 *)(param_1 + 0x30);
      }
      else {
        uVar4 = 1;
      }
    }
    func_0x00010724b3d8(auStack_110);
  }
  func_0x0001077f1030();
  if ((*(int *)(param_1 + 0x88) == 0) || (in_ZR = *(int *)(param_1 + 0x88) == 1, (bool)in_ZR)) {
    func_0x0001077efd30(&uStack_140);
  }
  else {
    auStack_c8[0] = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_110,auStack_128);
    func_0x0001077f0288(&uStack_140);
    func_0x0001077f1404();
    func_0x00010724b3d8(auStack_c8);
  }
  func_0x0001077ef370();
  puVar3 = (undefined1 *)0x28;
  __Znwm();
  puVar3[8] = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uStack_138;
  *(undefined8 *)(puVar3 + 0x10) = uStack_140;
  *(undefined8 *)(puVar3 + 0x20) = uStack_130;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  func_0x0001077f1acc(&PTR_DAT_1109ddbf8);
  func_0x0001077ef56c();
  func_0x0001077ee314();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001077ef1b0(auStack_c8);
    puVar3 = auStack_110;
    func_0x00010724b3d8(puVar3);
    func_0x0001077ef068();
    func_0x00010727e9d0(puVar3 + 0x38);
    func_0x0001075610b8(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 1077d9b00; end: 1077d9b43;  */

void FUN_1077d9b00(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef424();
  func_0x0001075610b8();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x0001077eebf8(&PTR_DAT_1109ddc68);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 1077d9d04; end: 1077d9d0b;  */

void FUN_1077d9d04(void)

{
  return;
}



/* Entry: 1077d9ffc; end: 1077da007;  */

undefined1 * FUN_1077d9ffc(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001077eed88();
  func_0x0001077ee468();
  puVar1 = auStack_48;
  func_0x0001077da078(puVar1);
  func_0x0001077ef55c();
  func_0x0001077ee344(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001077eecd4();
  func_0x0001077ef068();
  func_0x0001077da094();
  return puVar1 + 0x48;
}



/* Entry: 1077da374; end: 1077da3ab;  */

long FUN_1077da374(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109dded8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077da780; end: 1077da8db;  */

void FUN_1077da780(int param_1)

{
  long *plVar1;
  double *unaff_x19;
  long *unaff_x20;
  double dVar2;
  double dStack_120;
  double dStack_118;
  undefined1 uStack_110;
  double dStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b4;
  ulong uStack_b0;
  undefined8 uStack_a8;
  byte bStack_a0;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 auStack_88 [88];
  
  func_0x0001077ef424();
  func_0x0001077f0e64();
  if (param_1 == 0) {
    plVar1 = unaff_x20 + 1;
    (**(code **)(*unaff_x20 + 0x58))();
    dVar2 = 0.0;
    if (((ulong)plVar1 & 0x100000000) != 0) {
      dVar2 = (double)SUB84(plVar1,0);
    }
    *unaff_x19 = dVar2;
    *(undefined4 *)(unaff_x19 + 7) = 1;
  }
  else {
    uStack_90 = 1;
    func_0x0001077ef09c(auStack_88,auStack_98);
    func_0x0001072c9884(auStack_98);
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_e0 = uStack_e0 & 0xffffffffffffff00;
    uStack_c0 = 0;
    func_0x0001077ef358(&uStack_b0,auStack_88);
    func_0x0001072c94e0(&uStack_e0);
    if ((bStack_a0 & 1) == 0) {
      *unaff_x19 = 0.0;
      *(undefined4 *)(unaff_x19 + 7) = 1;
    }
    else {
      uStack_d8 = uStack_a8;
      uStack_e0 = uStack_b0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      FUN_1077b0f58(&dStack_120,&uStack_e0);
      func_0x0001072c9b9c(&uStack_e0);
      uStack_f8 = 0;
      uStack_f0 = 0;
      unaff_x19[1] = dStack_118;
      *unaff_x19 = dStack_120;
      dStack_120 = 0.0;
      dStack_118 = 0.0;
      *(undefined1 *)(unaff_x19 + 2) = uStack_110;
      unaff_x19[4] = dStack_100;
      unaff_x19[3] = dStack_108;
      dStack_108 = 0.0;
      dStack_100 = 0.0;
      unaff_x19[5] = 0.0;
      unaff_x19[6] = 0.0;
      *(undefined4 *)(unaff_x19 + 7) = 2;
      func_0x0001077f1440();
    }
    func_0x0001072c95d0(&uStack_b0);
    func_0x0001077f0a80();
  }
  return;
}



/* Entry: 1077dcb64; end: 1077dcb77;  */

void FUN_1077dcb64(void)

{
  func_0x0001077dcbc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077dd5d0; end: 1077dd5d3;  */

long FUN_1077dd5d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077ef118(&UNK_1109ddfd0);
  func_0x000104c2f714(lVar1 + 0x138);
  func_0x0001077dda10();
  return param_1;
}



/* Entry: 1077dd970; end: 1077dda6f;  */

void FUN_1077dd970(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x0001077ef5bc(param_3,param_1,param_2,*param_1,param_1[1],param_1[2]);
  func_0x0001073a3de0();
  *(undefined1 *)(param_2 + lVar1) = 0;
  return;
}



/* Entry: 1077ddbec; end: 1077ddc3f;  */

void FUN_1077ddbec(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001077ef424();
  func_0x000104c2fe00();
  func_0x00010028af84(param_1 + 0x38,unaff_x20 + 0x38);
  func_0x00010028af84(unaff_x19 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 1077ddd5c; end: 1077ddd97;  */

void FUN_1077ddd5c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001077ddd98();
  return;
}



/* Entry: 1077ddf68; end: 1077ddf73;  */

void FUN_1077ddf68(void)

{
  func_0x0001077eed88();
  func_0x0001077ddf94();
  return;
}



/* Entry: 1077de0e4; end: 1077de12f;  */

void FUN_1077de0e4(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001077ee564();
  while (unaff_x21 != unaff_x19) {
    func_0x0001077f140c();
    func_0x0001077f1800();
  }
  func_0x0001077efad0();
  func_0x0001077ddde4();
  return;
}



/* Entry: 1077de27c; end: 1077de3d3;  */

long FUN_1077de27c(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_78 [40];
  
  if (0 < param_5) {
    lVar3 = param_1[1];
    if ((param_1[2] - lVar3) / 0x88 < param_5) {
      plVar2 = param_1;
      func_0x0001077de50c(param_1,(lVar3 - *param_1) / 0x88 + param_5);
      func_0x0001077dea24(auStack_78,plVar2,(param_2 - *param_1) / 0x88,param_1 + 2);
      func_0x0001077de55c(auStack_78,param_3,param_5);
      func_0x0001077de5c8(param_1,auStack_78,param_2);
      func_0x0001077ef21c();
      func_0x0001077deaf0();
    }
    else {
      lVar3 = lVar3 - param_2;
      lVar1 = param_5 - lVar3 / 0x88;
      if (lVar1 == 0 || param_5 < lVar3 / 0x88) {
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      else {
        func_0x0001077de3d4(param_1,param_3 + lVar3,param_4,lVar1);
        if (lVar3 < 1) {
          return param_2;
        }
        func_0x0001077ef474();
        func_0x0001077de3fc();
        func_0x0001077efe94();
      }
      func_0x0001077de47c();
    }
  }
  return param_2;
}



/* Entry: 1077de69c; end: 1077de6c3;  */

void FUN_1077de69c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001077ef148();
  *(undefined4 *)(param_1 + 0x78) = extraout_w8;
  func_0x0001077de6c4();
  return;
}



/* Entry: 1077de844; end: 1077de86b;  */

void FUN_1077de844(long param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    func_0x0001077f1770();
    func_0x0001077de86c();
    return;
  }
  func_0x000104c342bc(param_2,param_3);
  func_0x000104c2f698();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  return;
}



/* Entry: 1077de94c; end: 1077de953;  */

void FUN_1077de94c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x78) == 2) {
    func_0x000104c342bc(param_2,param_3);
    func_0x000104c2f698();
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    return;
  }
  func_0x0001077f1770();
  func_0x0001077de980();
  return;
}



/* Entry: 1077dea58; end: 1077deac3;  */

void FUN_1077dea58(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001077ee5cc();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x88) {
    FUN_1077de69c(in_x3 + 8,unaff_x22 + 8);
    in_x3 = lStack_38 + 0x88;
    lStack_38 = in_x3;
  }
  func_0x0001077efeac();
  func_0x0001077ef0e0();
  func_0x0001077deac4();
  func_0x0001077ddde4(auStack_60);
  return;
}



/* Entry: 1077dec94; end: 1077decbf;  */

ulong FUN_1077dec94(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                   uint *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  if (param_4[0x10] == 1) {
    return (ulong)*param_4;
  }
  if (param_4[0x10] == 0) {
    return (ulong)*param_5;
  }
  func_0x0001077eff20();
  return CONCAT44(uVar2,uVar1);
}



/* Entry: 1077df0d0; end: 1077df167;  */

void FUN_1077df0d0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined4 uStack_4c;
  long lStack_48;
  uint uStack_40;
  long lStack_30;
  uint uStack_28;
  
  lStack_30 = *param_1 + ((ulong)param_1[1] >> 6) * 8;
  uStack_28 = (uint)param_1[1] & 0x3f;
  func_0x0001077df168(&lStack_48,param_2,param_3,&lStack_30);
  uVar1 = param_1[1] + param_4;
  param_1[1] = uVar1;
  uStack_40 = (uint)uVar1 & 0x3f;
  if ((uVar1 & 0x3f) != 0) {
    lStack_48 = *param_1 + (uVar1 >> 6) * 8;
    uStack_4c = 0;
    func_0x000104becdf0(&lStack_30,&lStack_48,0x40 - uStack_40,&uStack_4c);
  }
  return;
}



/* Entry: 1077df34c; end: 1077df4c7;  */

ulong FUN_1077df34c(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long extraout_x9;
  long lVar3;
  long extraout_x9_00;
  long extraout_x10;
  long lVar4;
  long extraout_x10_00;
  int extraout_w11;
  int iVar5;
  int extraout_w11_00;
  uint extraout_w13;
  undefined4 extraout_w13_00;
  undefined4 extraout_var;
  long *unaff_x19;
  ulong uVar6;
  long unaff_x21;
  undefined1 auStack_370 [72];
  undefined1 auStack_328 [72];
  undefined1 auStack_2e0 [416];
  undefined1 auStack_100 [56];
  undefined1 auStack_c8 [56];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_58;
  
  func_0x0001077efea0();
  func_0x0001077ee3e4();
  uStack_58 = extraout_x8;
  FUN_1077df79c(auStack_c8);
  uVar2 = *(int *)(param_1 + 0x78) == 1;
  if (!(bool)uVar2) {
    if (*(int *)(param_1 + 0x78) != 0) {
      func_0x0001077f14e4();
      func_0x0001077ef0b8(auStack_100,param_1 + 0x10);
      func_0x0001073393c0();
      func_0x0001077effcc();
      goto LAB_1077df3c4;
    }
    func_0x0001077f1964();
  }
  func_0x000104c2fe00();
LAB_1077df3c4:
  func_0x0001077f0ce4();
  uStack_90 = 0;
  func_0x0001077ef238();
  FUN_1077df79c();
  uStack_90 = 0;
  func_0x0001077ef238();
  FUN_1077df79c();
  __Znwm(0x88);
  func_0x0001077efcc4();
  func_0x0001077f13f4();
  func_0x0001077f0398();
  func_0x0001077f0778(&PTR_DAT_1109de170);
  func_0x0001077f0a0c(&uStack_90);
  func_0x0001077f07ac(&uStack_90);
  uVar6 = CONCAT44(uStack_8c,uStack_90);
  *(ulong *)(unaff_x21 + 0x48) = uVar6;
  func_0x0001077dd758(&uStack_90);
  func_0x0001077f0470();
  func_0x0001077effd4(unaff_x21 + 0x50);
  func_0x0001077f072c();
  func_0x0001077ef230();
  *unaff_x19 = unaff_x21;
  func_0x0001077ee344(uStack_58);
  if ((bool)uVar2) {
    return uVar6;
  }
  ___stack_chk_fail();
  func_0x0001077effcc();
  func_0x000104c2f714(auStack_c8);
  func_0x0001077ef068();
  func_0x0001077ee358();
  func_0x0001077efc18();
  FUN_1077df79c(auStack_328);
  if (*(int *)(unaff_x21 + 0x78) != 0) {
    uVar2 = *(int *)(unaff_x21 + 0x78) == 1;
    if ((bool)uVar2) {
      func_0x0001077f02c4();
    }
    else {
      func_0x0001077efe74(auStack_2e0);
      func_0x0001077ef0c4(auStack_370,unaff_x21 + 0x10,auStack_2e0);
      func_0x0001074332fc(auStack_2e0);
    }
  }
  func_0x000104c2f714(auStack_328);
  func_0x0001077df830(auStack_2e0,unaff_x21 + 0x80,param_1);
  func_0x0001077df830(auStack_328,unaff_x21 + 0xb8,param_1);
  func_0x0001077df7bc(uVar6,auStack_370,auStack_2e0,auStack_328);
  func_0x0001077efc00();
  func_0x0001077efc5c();
  func_0x0001077ef870();
  func_0x0001077ee314();
  if ((bool)uVar2) {
    return uVar6;
  }
  ___stack_chk_fail();
  func_0x000104c2f714();
  func_0x0001077ef998();
  func_0x0001077ef0b0();
  func_0x0001077ef1b8();
  func_0x0001077df888();
  func_0x0001077f1184();
  func_0x0001077f118c();
  func_0x0001077f0bd8();
  func_0x0001077ee5f4();
  uVar6 = extraout_x8_00;
  lVar3 = extraout_x9;
  lVar4 = extraout_x10;
  iVar5 = extraout_w11;
  while( true ) {
    uVar2 = lVar3 == lVar4 && (int)uVar6 == iVar5;
    uVar6 = (ulong)(byte)uVar2;
    if (((bool)uVar2) || (func_0x0001077f03b4(), (extraout_w13 & 1) == 0)) break;
    func_0x0001077f038c();
    lVar3 = extraout_x9_00 + CONCAT44(extraout_var,extraout_w13_00);
    uVar1 = 0;
    if (!(bool)uVar2) {
      uVar1 = extraout_w8 + 1;
    }
    uVar6 = (ulong)uVar1;
    lVar4 = extraout_x10_00;
    iVar5 = extraout_w11_00;
  }
  func_0x0001077eff98();
  return uVar6;
}



/* Entry: 1077df79c; end: 1077df7bb;  */

void FUN_1077df79c(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1077e1258; end: 1077e1773;  */

void FUN_1077e1258(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  func_0x0001077efea0();
  puVar2 = auStack_d8;
  func_0x0001077e1e24(auStack_d8);
  if ((*(int *)(param_5 + 0x50) == 0) ||
     (puVar2 = (undefined1 *)(param_5 + 8), *(int *)(param_5 + 0x50) == 1)) {
    func_0x0001072787e4(&uStack_f0,puVar2);
  }
  else {
    func_0x0001072787e4(&uStack_c0,auStack_d8);
    func_0x0001077ef0b8(&uStack_f0,puVar2);
    func_0x000107403f50();
    func_0x00010726afc0(&uStack_c0);
  }
  func_0x00010726afc0(auStack_d8);
  uStack_c0._0_4_ = 0x43160000;
  uVar3 = func_0x0001077ee6e8();
  uStack_c0._0_4_ = 0x42400000;
  uVar4 = func_0x0001077ee6e8();
  uStack_c0._0_4_ = 0x40c00000;
  uVar5 = func_0x0001077ee6e8();
  uStack_c0._0_4_ = 0x40c00000;
  uVar6 = func_0x0001077ee6e8();
  uStack_c0._0_4_ = 0x40c00000;
  uVar7 = func_0x0001077ee6e8();
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0x40c00000);
  uVar8 = func_0x0001077ee6e8();
  auVar18 = NEON_fmov(0x3f800000,4);
  uStack_c0 = auVar18._0_8_;
  uStack_b8 = auVar18._8_8_;
  func_0x0001077eeb80();
  uVar9 = func_0x0001077e1e44();
  uVar19 = param_2;
  uVar21 = param_3;
  uVar23 = param_4;
  uStack_c0 = auVar18._0_8_;
  uStack_b8 = auVar18._8_8_;
  func_0x0001077eeb80();
  uVar10 = func_0x0001077e1e44();
  uStack_c0._0_4_ = 0x41700000;
  uVar20 = uVar19;
  uVar22 = uVar21;
  uVar24 = uVar23;
  uVar11 = func_0x0001077ee6e8();
  func_0x0001077ef0b8(param_5);
  uVar12 = func_0x0001077e1cfc();
  func_0x0001077ef0b8(param_5);
  uVar13 = func_0x0001077e1cfc();
  uStack_c0._0_4_ = 0x3f800000;
  uVar14 = func_0x0001077ee6e8();
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0x3f800000);
  uVar15 = func_0x0001077ee6e8();
  if (*(int *)(param_5 + 0x388) == 0) {
    uStack_14c = 0x3f800000;
    uStack_150 = 0;
  }
  else if (*(int *)(param_5 + 0x388) == 1) {
    uVar20 = *(undefined4 *)(param_5 + 0x350);
    uStack_150 = uVar20;
    uStack_14c = *(undefined4 *)(param_5 + 0x354);
  }
  else {
    uVar20 = 0x3f800000;
    func_0x0001077ef0b8(param_5 + 0x350);
    uStack_150 = func_0x000107339498();
    uStack_14c = uVar20;
  }
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0x40000000);
  uVar16 = func_0x0001077ee6e8();
  uStack_b8 = 0x3f80000000000000;
  uStack_c0 = 0;
  func_0x0001077eeb80();
  uVar17 = func_0x0001077e1e44();
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  puVar1[2] = uStack_e8;
  puVar1[1] = uStack_f0;
  puVar1[3] = uStack_e0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = 0;
  *(undefined4 *)(puVar1 + 4) = uVar3;
  *(undefined4 *)((long)puVar1 + 0x24) = uVar4;
  *(undefined4 *)(puVar1 + 5) = uVar5;
  *(undefined4 *)((long)puVar1 + 0x2c) = uVar6;
  *(undefined4 *)(puVar1 + 6) = uVar7;
  *(undefined4 *)((long)puVar1 + 0x34) = uVar8;
  *(undefined4 *)(puVar1 + 7) = uVar9;
  *(undefined4 *)((long)puVar1 + 0x3c) = param_2;
  *(undefined4 *)(puVar1 + 8) = param_3;
  *(undefined4 *)((long)puVar1 + 0x44) = param_4;
  *(undefined4 *)(puVar1 + 9) = uVar10;
  *(undefined4 *)((long)puVar1 + 0x4c) = uVar19;
  *(undefined4 *)(puVar1 + 10) = uVar21;
  *(undefined4 *)((long)puVar1 + 0x54) = uVar23;
  *(undefined4 *)(puVar1 + 0xb) = uVar11;
  *(undefined4 *)((long)puVar1 + 0x5c) = uVar12;
  *(undefined4 *)((long)puVar1 + 100) = uVar14;
  *(undefined4 *)(puVar1 + 0xd) = uVar15;
  *(undefined4 *)(puVar1 + 0xc) = uVar13;
  *(undefined4 *)((long)puVar1 + 0x6c) = uStack_150;
  *(undefined4 *)(puVar1 + 0xe) = uStack_14c;
  *(undefined4 *)((long)puVar1 + 0x74) = uVar16;
  *(undefined4 *)(puVar1 + 0xf) = uVar17;
  *(undefined4 *)((long)puVar1 + 0x7c) = uVar20;
  *(undefined4 *)(puVar1 + 0x10) = uVar22;
  *(undefined4 *)((long)puVar1 + 0x84) = uVar24;
  *puVar1 = &PTR_DAT_1109de2a0;
  uStack_c0 = 0;
  func_0x00010777d178(&uStack_c0);
  func_0x0001073ca0ec(&uStack_c0,puVar1 + 4);
  func_0x0001073ca0ec(&uStack_c0,(undefined4 *)((long)puVar1 + 0x24));
  func_0x0001077f0df8(&uStack_c0);
  func_0x0001073ca0ec(&uStack_c0,(undefined4 *)((long)puVar1 + 0x2c));
  func_0x0001073ca0ec(&uStack_c0,puVar1 + 6);
  func_0x0001077f0748(&uStack_c0);
  func_0x00010775e080(&uStack_c0,puVar1 + 7);
  func_0x00010775e080(&uStack_c0,puVar1 + 9);
  func_0x0001073ca0ec(&uStack_c0,puVar1 + 0xb);
  func_0x0001077f0d70(&uStack_c0);
  func_0x0001077f0d70(&uStack_c0);
  func_0x0001073ca0ec(&uStack_c0,(undefined4 *)((long)puVar1 + 100));
  func_0x0001073ca0ec(&uStack_c0,puVar1 + 0xd);
  func_0x0001077a20a0(&uStack_c0,(undefined4 *)((long)puVar1 + 0x6c));
  func_0x0001073ca0ec(&uStack_c0,(undefined4 *)((long)puVar1 + 0x74));
  func_0x00010775e080(&uStack_c0,puVar1 + 0xf);
  puVar1[0x11] = uStack_c0;
  func_0x0001077dd758(&uStack_c0);
  func_0x0001077f0470();
  func_0x0001077effd4(puVar1 + 0x12);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  func_0x00010726afc0(&uStack_f0);
  *extraout_x8 = puVar1;
  return;
}


