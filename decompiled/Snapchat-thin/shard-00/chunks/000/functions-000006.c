/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100057558; end: 1000575a3;  */

/* WARNING: Removing unreachable block (ram,0x000100057584) */

void FUN_100057558(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x28) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 1000575a4; end: 1000575e3;  */

void FUN_1000575a4(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_100057558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1000575e4; end: 100057653;  */

void FUN_1000575e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x40;
        func_0x000107c2b0c4(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 100057654; end: 100057697;  */

void FUN_100057654(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 5;
  func_0x000100056a90(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  return;
}



/* Entry: 100057698; end: 100057707;  */

void FUN_100057698(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x40;
        FUN_100057654(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 100057708; end: 10005778f;  */

void FUN_100057708(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_100033dac(puVar1,*param_2,param_2[1]);
    }
    else {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
    }
    puVar1[3] = param_2[3];
    puVar1 = puVar1 + 4;
    param_1[1] = puVar1;
  }
  else {
    puVar1 = param_1;
    FUN_1000577c4(param_1,param_2);
  }
  param_1[1] = puVar1;
  return;
}



/* Entry: 100057790; end: 1000577c3;  */

undefined1  [16]
FUN_100057790(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long **pplVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined1 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    func_0x000107c60e20(lVar2);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  func_0x000104c4f740();
  lVar2 = param_1[1] - *param_1;
  uVar1 = (lVar2 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    func_0x000107c2ab94();
    func_0x000100057a3c(&plStack_78);
    func_0x000107c60bd8();
    pplVar4 = &plStack_e0;
    ppuStack_d8 = &puStack_c0;
    ppuStack_d0 = &puStack_b8;
    puStack_b8 = param_4;
    puVar7 = param_2;
    plStack_e0 = param_1;
    puStack_c0 = param_4;
    if (param_2 == param_3) {
      uStack_c8 = 1;
    }
    else {
      do {
        uVar10 = puVar7[1];
        uVar9 = *puVar7;
        puStack_b8[2] = puVar7[2];
        puStack_b8[1] = uVar10;
        *puStack_b8 = uVar9;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        puStack_b8[3] = puVar7[3];
        puVar7 = puVar7 + 4;
        puStack_b8 = puStack_b8 + 4;
      } while (puVar7 != param_3);
      uStack_c8 = 1;
      puVar7 = param_2;
      do {
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          func_0x000107c60e14(*puVar7);
        }
        puVar7 = puVar7 + 4;
      } while (puVar7 != param_3);
    }
    FUN_1000579b4(&plStack_e0);
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = pplVar4;
    return auVar13;
  }
  uVar6 = param_1[2] - *param_1;
  uVar8 = (long)uVar6 >> 4;
  if (uVar8 <= uVar1) {
    uVar8 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar6) {
    uVar8 = 0x7ffffffffffffff;
  }
  plStack_58 = param_1;
  if (uVar8 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = param_1;
    FUN_100057790();
  }
  puVar7 = (undefined8 *)((long)plVar3 + lVar2);
  plStack_60 = plVar3 + uVar8 * 4;
  plStack_68 = puVar7;
  plStack_78 = plVar3;
  plStack_70 = puVar7;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(puVar7,*param_2,param_2[1]);
  }
  else {
    uVar10 = param_2[1];
    uVar9 = *param_2;
    puVar7[2] = param_2[2];
    puVar7[1] = uVar10;
    *puVar7 = uVar9;
  }
  puVar7[3] = param_2[3];
  plStack_68 = plStack_68 + 4;
  lVar5 = *param_1;
  lVar2 = (long)plStack_70 + (lVar5 - param_1[1]);
  FUN_1000578fc(param_1,lVar5,param_1[1],lVar2);
  plVar3 = plStack_68;
  plStack_78 = (long *)*param_1;
  *param_1 = lVar2;
  lVar2 = param_1[2];
  param_1[2] = (long)plStack_60;
  param_1[1] = (long)plStack_68;
  plStack_70 = plStack_78;
  plStack_68 = plStack_78;
  plStack_60 = (long *)lVar2;
  func_0x000100057a3c(&plStack_78);
  auVar12._8_8_ = lVar5;
  auVar12._0_8_ = plVar3;
  return auVar12;
}



/* Entry: 1000577c4; end: 1000578fb;  */

undefined8 *
FUN_1000577c4(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  long **pplVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined1 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
    func_0x000107c2ab94();
    func_0x000100057a3c(&plStack_58);
    func_0x000107c60bd8();
    pplVar3 = &plStack_c0;
    ppuStack_b8 = &puStack_a0;
    ppuStack_b0 = &puStack_98;
    puStack_98 = param_4;
    puVar5 = param_2;
    plStack_c0 = param_1;
    puStack_a0 = param_4;
    if (param_2 == param_3) {
      uStack_a8 = 1;
    }
    else {
      do {
        uVar9 = puVar5[1];
        uVar8 = *puVar5;
        puStack_98[2] = puVar5[2];
        puStack_98[1] = uVar9;
        *puStack_98 = uVar8;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puStack_98[3] = puVar5[3];
        puVar5 = puVar5 + 4;
        puStack_98 = puStack_98 + 4;
      } while (puVar5 != param_3);
      uStack_a8 = 1;
      do {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c60e14(*param_2);
        }
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
    FUN_1000579b4(&plStack_c0);
    return pplVar3;
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 4;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar4) {
    uVar6 = 0x7ffffffffffffff;
  }
  plStack_38 = param_1;
  if (uVar6 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = param_1;
    FUN_100057790();
  }
  puVar5 = (undefined8 *)((long)plVar2 + lVar7);
  plStack_40 = plVar2 + uVar6 * 4;
  plStack_48 = puVar5;
  plStack_58 = plVar2;
  plStack_50 = puVar5;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(puVar5,*param_2,param_2[1]);
  }
  else {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    puVar5[2] = param_2[2];
    puVar5[1] = uVar9;
    *puVar5 = uVar8;
  }
  puVar5[3] = param_2[3];
  plStack_48 = plStack_48 + 4;
  lVar7 = (long)plStack_50 + (*param_1 - param_1[1]);
  FUN_1000578fc(param_1,*param_1,param_1[1],lVar7);
  plVar2 = plStack_48;
  plStack_58 = (long *)*param_1;
  *param_1 = lVar7;
  lVar7 = param_1[2];
  param_1[2] = (long)plStack_40;
  param_1[1] = (long)plStack_48;
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  plStack_40 = (long *)lVar7;
  func_0x000100057a3c(&plStack_58);
  return plVar2;
}



/* Entry: 1000578fc; end: 1000579b3;  */

void FUN_1000578fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  puVar1 = param_2;
  uStack_50 = param_1;
  puStack_30 = param_4;
  if (param_2 == param_3) {
    uStack_38 = 1;
  }
  else {
    do {
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      puStack_28[2] = puVar1[2];
      puStack_28[1] = uVar3;
      *puStack_28 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puStack_28[3] = puVar1[3];
      puVar1 = puVar1 + 4;
      puStack_28 = puStack_28 + 4;
    } while (puVar1 != param_3);
    uStack_38 = 1;
    do {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c60e14(*param_2);
      }
      param_2 = param_2 + 4;
    } while (param_2 != param_3);
  }
  FUN_1000579b4(&uStack_50);
  return;
}



/* Entry: 1000579b4; end: 1000579e7;  */

long FUN_1000579b4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107c2aba4(param_1);
  }
  return param_1;
}



/* Entry: 1000579e8; end: 100057a6f;  */

/* WARNING: Removing unreachable block (ram,0x000100057a18) */

void FUN_1000579e8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x20;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 100057a70; end: 100057b47;  */

void FUN_100057a70(void)

{
  undefined *puVar1;
  
  uRam00000001137ea578 = 0x4059000000000000;
  uRam00000001137ea570 = 0x4057c3020c49ba5e;
  uRam00000001137ea580 = 0x405b3883126e978d;
  uRam00000001137ea540 = 0;
  uRam00000001137ea550 = 0;
  ppuRam00000001137ea548 = &PTR_DAT_110ba37a8;
  uRam0000000113834bd8 = 0x1137ea548;
  puVar1 = &UNK_10a10215c;
  func_0x000107c60e34(&UNK_10a10215c,0x1132ffe60,0x100000000);
  func_0x000100057af4();
  func_0x000107c60d08();
  uRam0000000113834be0 = (ulong)puVar1 & 0xffffffff;
  return;
}



/* Entry: 100057b48; end: 100057bb7;  */

undefined8 FUN_100057b48(undefined8 param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  FUN_10005375c(auStack_38,&UNK_10f517992);
  func_0x000107c60d00(param_1,auStack_38);
  if (cStack_21 < '\0') {
    func_0x000107c60e14(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 100057bb8; end: 100057bd7;  */

void FUN_100057bb8(void)

{
  uRam00000001137ea638 = 0;
  uRam00000001137ea630 = 0;
  uRam00000001137ea648 = 0;
  uRam00000001137ea640 = 0;
  uRam00000001137ea650 = 0x3f800000;
  uRam00000001137ea5e0 = 0;
  return;
}



/* Entry: 100057bd8; end: 100057cfb;  */

undefined8 * FUN_100057bd8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_1e8 [448];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea6a0 = 0;
  uRam00000001137ea6a8 = 0;
  uRam00000001137ea6b8 = 0x41a0000041700000;
  uRam00000001137ea6b0 = 0xc1a00000c1700000;
  func_0x000107c610b4(auStack_1e8,&PTR_s_b_110ba8b38,0x1b0);
  FUN_100057cfc(0x1137ea708,auStack_1e8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea708,0x100000000);
  func_0x000107c610b4(auStack_1e8,&PTR_DAT_110ba8ce8,0x1c0);
  FUN_1000584bc(0x1137ea730,auStack_1e8,0xe);
  puVar1 = (undefined8 *)&UNK_10a1595e4;
  lVar3 = 0x100000000;
  lVar2 = 0x1137ea730;
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea730);
  uRam00000001137ea6c8 = 0x4059000000000000;
  uRam00000001137ea6c0 = 0x4057c3020c49ba5e;
  uRam00000001137ea6d0 = 0x405b3883126e978d;
  uRam00000001137ea6e8 = 0;
  uRam00000001137ea6e0 = 0x3f800000;
  uRam00000001137ea6f8 = 0;
  uRam00000001137ea6f0 = 0x3f800000;
  uRam00000001137ea700 = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  if (lVar3 != 0) {
    lVar3 = lVar3 * 0x18;
    do {
      FUN_100057e40(puVar1,lVar2,lVar2);
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  return puVar1;
}



/* Entry: 100057cfc; end: 100057d73;  */

undefined8 * FUN_100057cfc(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    do {
      FUN_100057e40(param_1,param_2,param_2);
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 100057d74; end: 100057ddb;  */

void FUN_100057d74(undefined8 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = *param_2;
  lVar4 = (long)cVar1;
  if (cVar1 < 0) {
    lVar3 = lVar4;
    func_0x000107c60e64(lVar4,0x4000);
    uVar2 = (uint)lVar3;
  }
  else {
    uVar2 = *(uint *)(PTR___DefaultRuneLocale_11034bcf8 + (ulong)(uint)(int)cVar1 * 4 + 0x3c) &
            0x4000;
  }
  if (uVar2 == 0) {
    func_0x000107c60e80();
    *(long *)*param_1 = *(long *)*param_1 + (long)(int)lVar4;
  }
  return;
}



/* Entry: 100057ddc; end: 100057e3f;  */

undefined1  [16] FUN_100057ddc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar1 = lVar2;
  if (lVar3 != 0) {
    lVar1 = lVar2 + lVar3;
    uStack_38 = param_3;
    do {
      FUN_100057d74(&uStack_38,lVar2);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + -1;
      param_3 = uStack_38;
    } while (lVar3 != 0);
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = lVar1;
  return auVar4;
}



/* Entry: 100057e40; end: 10005807b;  */

undefined1  [16] FUN_100057e40(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  ulong uStack_58;
  
  uStack_58 = 0;
  FUN_100057ddc(&UNK_10e4998d0,param_2,&uStack_58);
  uVar6 = uStack_58;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      unaff_x25 = uVar10 & uStack_58;
    }
    else {
      unaff_x25 = uStack_58;
      if (uVar9 <= uStack_58) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uStack_58 / uVar9;
        }
        unaff_x25 = uStack_58 - uVar4 * uVar9;
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar4 = plVar8[1];
        if (uVar4 == uVar6) {
          plVar5 = param_1;
          func_0x000107c2b0f8(param_1,plVar8 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_100058040;
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar4 = uVar4 & uVar10;
          }
          else if (uVar9 <= uVar4) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar4 / uVar9;
            }
            uVar4 = uVar4 - uVar1 * uVar9;
          }
          if (uVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar8 = (long *)0x28;
  func_0x000107c60e20();
  *plVar8 = 0;
  plVar8[1] = uVar6;
  lVar7 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar7;
  plVar8[4] = param_3[2];
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar9) {
      uVar10 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar10 = uVar10 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_10005807c(param_1,uVar10);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar9 <= uVar6) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar6 / uVar9;
        }
        unaff_x25 = uVar6 - uVar10 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_100058030;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar10 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_100058030:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_100058040:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10005807c; end: 10005814b;  */

/* WARNING: Removing unreachable block (ram,0x0001000582e8) */
/* WARNING: Removing unreachable block (ram,0x000100058400) */

undefined1  [16] FUN_10005807c(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long unaff_x25;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  plVar11 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar11 = param_2;
  }
  plVar12 = (long *)param_1[1];
  if (plVar12 > param_2 || param_2 == plVar12) {
    if (plVar12 <= param_2) {
LAB_10005813c:
      auVar14._8_8_ = plVar5;
      auVar14._0_8_ = plVar11;
      return auVar14;
    }
    plVar11 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar12 < (long *)0x3) || (((ulong)plVar12 & (long)plVar12 - 1U) != 0)) {
      func_0x000107c60c44();
    }
    else if ((long *)0x1 < plVar11) {
      plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 + -1) & 0x3fU));
    }
    if (param_2 <= plVar11) {
      param_2 = plVar11;
    }
    if (plVar12 <= param_2) goto LAB_10005813c;
  }
  plVar11 = param_2;
  if (param_2 == (long *)0x0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      func_0x000107c60e14();
      plVar11 = param_2;
    }
    param_1[1] = 0;
LAB_100058278:
    auVar15._8_8_ = plVar11;
    auVar15._0_8_ = lVar3;
    return auVar15;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    plVar5 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar5 * 8) = 0;
      plVar5 = (long *)((long)plVar5 + 1);
    } while (param_2 != plVar5);
    plVar5 = (long *)param_1[2];
    if (plVar5 != (long *)0x0) {
      plVar12 = (long *)plVar5[1];
      uVar6 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar6) == 0) {
        plVar12 = (long *)((ulong)plVar12 & uVar6);
      }
      else if (param_2 <= plVar12) {
        uVar7 = 0;
        if (param_2 != (long *)0x0) {
          uVar7 = (ulong)plVar12 / (ulong)param_2;
        }
        plVar12 = (long *)((long)plVar12 - uVar7 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar12 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar5;
      while (plVar8 != (long *)0x0) {
        plVar10 = (long *)plVar8[1];
        if (((ulong)param_2 & uVar6) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar6);
        }
        else if (param_2 <= plVar10) {
          uVar7 = 0;
          if (param_2 != (long *)0x0) {
            uVar7 = (ulong)plVar10 / (ulong)param_2;
          }
          plVar10 = (long *)((long)plVar10 - uVar7 * (long)param_2);
        }
        plVar9 = plVar8;
        if (plVar10 != plVar12) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar10 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar10 * 8) = plVar5;
            plVar12 = plVar10;
          }
          else {
            *plVar5 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + (long)plVar10 * 8);
            **(long **)(lVar2 + (long)plVar10 * 8) = (long)plVar8;
            plVar9 = plVar5;
          }
        }
        plVar5 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
    goto LAB_100058278;
  }
  func_0x000107c2b044();
  FUN_100057ddc(&UNK_10e4998d0);
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    unaff_x25 = 0;
    if (*(undefined8 **)*param_1 != (undefined8 *)0x0) {
      for (plVar11 = (long *)**(undefined8 **)*param_1; plVar11 != (long *)0x0;
          plVar11 = (long *)*plVar11) {
        uVar7 = plVar11[1];
        if (uVar7 == 0) {
          plVar5 = param_1;
          func_0x000107c2b0f8(param_1,plVar11 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_100058480;
          }
        }
        else {
          if ((uVar6 & uVar6 - 1) == 0) {
            uVar7 = uVar7 & uVar6 - 1;
          }
          else if (uVar6 <= uVar7) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar1 * uVar6;
          }
          if (uVar7 != 0) break;
        }
      }
    }
  }
  plVar11 = (long *)0x30;
  func_0x000107c60e20();
  *plVar11 = 0;
  plVar11[1] = 0;
  lVar3 = *param_3;
  lVar13 = param_3[3];
  lVar2 = param_3[2];
  plVar11[3] = param_3[1];
  plVar11[2] = lVar3;
  plVar11[5] = lVar13;
  plVar11[4] = lVar2;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar6) {
      uVar7 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar7 = uVar7 | uVar6 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    FUN_100058530(param_1,uVar7);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x25 = 0;
    }
    else {
      unaff_x25 = 0;
      if (uVar6 == 0) {
        unaff_x25 = 0;
      }
    }
  }
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar11 = *plVar5;
    *plVar5 = (long)plVar11;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar5;
    if (*plVar11 == 0) goto LAB_100058470;
    uVar7 = *(ulong *)(*plVar11 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar7 = uVar7 & uVar6 - 1;
    }
    else if (uVar6 <= uVar7) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar7 / uVar6;
      }
      uVar7 = uVar7 - uVar1 * uVar6;
    }
    plVar5 = (long *)(*param_1 + uVar7 * 8);
  }
  else {
    *plVar11 = *plVar5;
  }
  *plVar5 = (long)plVar11;
LAB_100058470:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_100058480:
  auVar16._8_8_ = uVar4;
  auVar16._0_8_ = plVar11;
  return auVar16;
}



/* Entry: 10005814c; end: 100058287;  */

/* WARNING: Removing unreachable block (ram,0x0001000582e8) */
/* WARNING: Removing unreachable block (ram,0x000100058400) */

undefined1  [16] FUN_10005814c(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x25;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar11 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      func_0x000107c60e14();
      uVar11 = param_2;
    }
    param_1[1] = 0;
LAB_100058278:
    auVar13._8_8_ = uVar11;
    auVar13._0_8_ = lVar3;
    return auVar13;
  }
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    uVar5 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar5 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar10 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar1 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar5) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + uVar10 * 8) == 0) {
            *(long **)(lVar2 + uVar10 * 8) = plVar7;
            uVar5 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar2 + uVar10 * 8);
            **(long **)(lVar2 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
    goto LAB_100058278;
  }
  func_0x000107c2b044();
  FUN_100057ddc(&UNK_10e4998d0);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    unaff_x25 = 0;
    if (*(undefined8 **)*param_1 != (undefined8 *)0x0) {
      for (plVar7 = (long *)**(undefined8 **)*param_1; plVar7 != (long *)0x0;
          plVar7 = (long *)*plVar7) {
        uVar5 = plVar7[1];
        if (uVar5 == 0) {
          plVar8 = param_1;
          func_0x000107c2b0f8(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar4 = 0;
            goto LAB_100058480;
          }
        }
        else {
          if ((uVar11 & uVar11 - 1) == 0) {
            uVar5 = uVar5 & uVar11 - 1;
          }
          else if (uVar11 <= uVar5) {
            uVar6 = 0;
            if (uVar11 != 0) {
              uVar6 = uVar5 / uVar11;
            }
            uVar5 = uVar5 - uVar6 * uVar11;
          }
          if (uVar5 != 0) break;
        }
      }
    }
  }
  plVar7 = (long *)0x30;
  func_0x000107c60e20();
  *plVar7 = 0;
  plVar7[1] = 0;
  lVar3 = *param_3;
  lVar12 = param_3[3];
  lVar2 = param_3[2];
  plVar7[3] = param_3[1];
  plVar7[2] = lVar3;
  plVar7[5] = lVar12;
  plVar7[4] = lVar2;
  if ((uVar11 == 0) || (*(float *)(param_1 + 4) * (float)uVar11 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar11) {
      uVar5 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar5 = uVar5 | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    FUN_100058530(param_1,uVar5);
    uVar11 = param_1[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = 0;
    }
    else {
      unaff_x25 = 0;
      if (uVar11 == 0) {
        unaff_x25 = 0;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar8;
    if (*plVar7 == 0) goto LAB_100058470;
    uVar5 = *(ulong *)(*plVar7 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar5 = uVar5 & uVar11 - 1;
    }
    else if (uVar11 <= uVar5) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar5 / uVar11;
      }
      uVar5 = uVar5 - uVar6 * uVar11;
    }
    plVar8 = (long *)(*param_1 + uVar5 * 8);
  }
  else {
    *plVar7 = *plVar8;
  }
  *plVar8 = (long)plVar7;
LAB_100058470:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_100058480:
  auVar14._8_8_ = uVar4;
  auVar14._0_8_ = plVar7;
  return auVar14;
}



/* Entry: 100058288; end: 1000584bb;  */

undefined1  [16] FUN_100058288(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  ulong uStack_58;
  
  uStack_58 = 0;
  FUN_100057ddc(&UNK_10e4998d0,param_2,&uStack_58);
  uVar6 = uStack_58;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar10 = uVar9 - 1;
    if ((uVar9 & uVar10) == 0) {
      unaff_x25 = uVar10 & uStack_58;
    }
    else {
      unaff_x25 = uStack_58;
      if (uVar9 <= uStack_58) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uStack_58 / uVar9;
        }
        unaff_x25 = uStack_58 - uVar4 * uVar9;
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar3 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar3; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar4 = plVar8[1];
        if (uVar4 == uVar6) {
          plVar5 = param_1;
          func_0x000107c2b0f8(param_1,plVar8 + 2,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_100058480;
          }
        }
        else {
          if ((uVar9 & uVar10) == 0) {
            uVar4 = uVar4 & uVar10;
          }
          else if (uVar9 <= uVar4) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar4 / uVar9;
            }
            uVar4 = uVar4 - uVar1 * uVar9;
          }
          if (uVar4 != unaff_x25) break;
        }
      }
    }
  }
  plVar8 = (long *)0x30;
  func_0x000107c60e20();
  *plVar8 = 0;
  plVar8[1] = uVar6;
  lVar7 = *param_3;
  lVar12 = param_3[3];
  lVar11 = param_3[2];
  plVar8[3] = param_3[1];
  plVar8[2] = lVar7;
  plVar8[5] = lVar12;
  plVar8[4] = lVar11;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar10 = 1;
    if (2 < uVar9) {
      uVar10 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar10 = uVar10 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
    FUN_100058530(param_1,uVar10);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar6;
    }
    else {
      unaff_x25 = uVar6;
      if (uVar9 <= uVar6) {
        uVar10 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar6 / uVar9;
        }
        unaff_x25 = uVar6 - uVar10 * uVar9;
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar7 + unaff_x25 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_100058470;
    uVar6 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar10 * uVar9;
    }
    plVar5 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_100058470:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_100058480:
  auVar13._8_8_ = uVar2;
  auVar13._0_8_ = plVar8;
  return auVar13;
}



/* Entry: 1000584bc; end: 10005852f;  */

undefined8 * FUN_1000584bc(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 << 5;
    do {
      FUN_100058288(param_1,param_2,param_2);
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 100058530; end: 1000585ff;  */

void FUN_100058530(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  ulong uVar15;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined **appuStack_438 [3];
  undefined ***pppuStack_420;
  long lStack_290;
  undefined1 auStack_218 [448];
  long lStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar14 = param_1[1];
  if (uVar14 > param_2 || param_2 == uVar14) {
    if (uVar14 <= param_2) {
      return;
    }
    uVar8 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (param_2 <= uVar8) {
      param_2 = uVar8;
    }
    if (uVar14 <= param_2) {
      return;
    }
  }
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    uVar14 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar14 * 8) = 0;
      uVar14 = uVar14 + 1;
    } while (param_2 != uVar14);
    plVar10 = (long *)param_1[2];
    if (plVar10 == (long *)0x0) {
      return;
    }
    uVar14 = plVar10[1];
    uVar8 = param_2 - 1;
    if ((param_2 & uVar8) == 0) {
      uVar14 = uVar14 & uVar8;
    }
    else if (param_2 <= uVar14) {
      uVar13 = 0;
      if (param_2 != 0) {
        uVar13 = uVar14 / param_2;
      }
      uVar14 = uVar14 - uVar13 * param_2;
    }
    *(long **)(*param_1 + uVar14 * 8) = param_1 + 2;
    plVar11 = (long *)*plVar10;
    while (plVar11 != (long *)0x0) {
      uVar13 = plVar11[1];
      if ((param_2 & uVar8) == 0) {
        uVar13 = uVar13 & uVar8;
      }
      else if (param_2 <= uVar13) {
        uVar15 = 0;
        if (param_2 != 0) {
          uVar15 = uVar13 / param_2;
        }
        uVar13 = uVar13 - uVar15 * param_2;
      }
      plVar12 = plVar11;
      if (uVar13 != uVar14) {
        lVar2 = *param_1;
        if (*(long *)(lVar2 + uVar13 * 8) == 0) {
          *(long **)(lVar2 + uVar13 * 8) = plVar10;
          uVar14 = uVar13;
        }
        else {
          *plVar10 = *plVar11;
          *plVar11 = **(undefined8 **)(lVar2 + uVar13 * 8);
          **(long **)(lVar2 + uVar13 * 8) = (long)plVar11;
          plVar12 = plVar10;
        }
      }
      plVar10 = plVar12;
      plVar11 = (long *)*plVar12;
    }
    return;
  }
  func_0x000107c2b044();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea758 = 0;
  uRam00000001137ea760 = 0;
  uRam00000001137ea798 = 0;
  uRam00000001137ea790 = 0;
  uRam00000001137ea7a8 = 0;
  uRam00000001137ea7a0 = 0;
  uRam00000001137ea7b0 = 0x3e8000000000000;
  func_0x000107c610b4(auStack_218,&PTR_s_b_110ba9240,0x1b0);
  FUN_100057cfc(0x1137ea7b8,auStack_218,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea7b8,0x100000000);
  func_0x000107c610b4(auStack_218,&PTR_DAT_110ba93f0,0x1c0);
  FUN_1000584bc(0x1137ea7e0,auStack_218,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea7e0,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea8d8 = 0;
  uRam00000001137ea8e0 = 0;
  func_0x000107c610b4(&lStack_450,&PTR_s_b_110bacc50,0x1b0);
  FUN_100057cfc(0x1137ea8e8,&lStack_450,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea8e8,0x100000000);
  func_0x000107c610b4(&lStack_450,&PTR_DAT_110bace00,0x1c0);
  FUN_1000584bc(0x1137ea910,&lStack_450,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea910,0x100000000);
  lStack_448 = 0;
  lStack_450 = 0x382d667475;
  lStack_440 = 0x500000000000000;
  appuStack_438[0] = &PTR_DAT_110bad428;
  uVar13 = 0x1137ea938;
  uRam00000001137ea940 = 0;
  lRam00000001137ea938 = 0;
  lRam00000001137ea950 = 0;
  plRam00000001137ea948 = (long *)0x0;
  fRam00000001137ea958 = 1.0;
  pppuStack_420 = appuStack_438;
  FUN_1000554d8(0x1137ea938,&lStack_450);
  uVar14 = uRam00000001137ea940;
  uVar8 = 0x1137ea000;
  if (uRam00000001137ea940 != 0) {
    uVar15 = uRam00000001137ea940 - 1;
    if ((uRam00000001137ea940 & uVar15) == 0) {
      unaff_x26 = uVar15 & uVar13;
    }
    else {
      unaff_x26 = uVar13;
      if (uRam00000001137ea940 <= uVar13) {
        uVar9 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar9 = uVar13 / uRam00000001137ea940;
        }
        unaff_x26 = uVar13 - uVar9 * uRam00000001137ea940;
      }
    }
    plVar10 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar9 = plVar10[1];
        if (uVar9 == uVar13) {
          uVar9 = 0;
          FUN_1001a6960(0x1137ea938,plVar10 + 2,&lStack_450);
          if ((uVar9 & 1) != 0) goto LAB_100058b88;
        }
        else {
          if ((uVar14 & uVar15) == 0) {
            uVar9 = uVar9 & uVar15;
          }
          else if (uVar14 <= uVar9) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar9 / uVar14;
            }
            uVar9 = uVar9 - uVar1 * uVar14;
          }
          if (uVar9 != unaff_x26) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar10 = (long *)0x48;
  func_0x000107c60e20();
  uStack_460 = 0x1137ea938;
  uStack_458 = 0;
  *plVar10 = 0;
  plVar10[1] = uVar13;
  plStack_468 = plVar10;
  if (lStack_440 < 0) {
    FUN_100033dac(plVar10 + 2,lStack_450,lStack_448);
  }
  else {
    plVar10[3] = lStack_448;
    plVar10[2] = lStack_450;
    plVar10[4] = lStack_440;
  }
  pppuVar4 = pppuStack_420;
  if (pppuStack_420 == (undefined ***)0x0) {
LAB_100058a54:
    plVar10[8] = (long)pppuVar4;
  }
  else {
    if (pppuStack_420 != appuStack_438) {
      (*(code *)(*pppuStack_420)[2])();
      goto LAB_100058a54;
    }
    plVar10[8] = (long)(plVar10 + 5);
    (*(code *)(*pppuStack_420)[3])();
  }
  uStack_458 = CONCAT71(uStack_458._1_7_,1);
  if ((uVar14 == 0) || (fRam00000001137ea958 * (float)uVar14 < (float)(lRam00000001137ea950 + 1))) {
    uVar15 = 1;
    if (2 < uVar14) {
      uVar15 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar15 = uVar15 | uVar14 << 1;
    uVar14 = (ulong)((float)(lRam00000001137ea950 + 1) / fRam00000001137ea958);
    if (uVar15 <= uVar14) {
      uVar15 = uVar14;
    }
    FUN_100059330(uVar15);
    uVar14 = uRam00000001137ea940;
    if ((uRam00000001137ea940 & uRam00000001137ea940 - 1) == 0) {
      unaff_x26 = uRam00000001137ea940 - 1 & uVar13;
    }
    else {
      unaff_x26 = uVar13;
      if (uRam00000001137ea940 <= uVar13) {
        uVar15 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar15 = uVar13 / uRam00000001137ea940;
        }
        unaff_x26 = uVar13 - uVar15 * uRam00000001137ea940;
      }
    }
  }
  lVar2 = lRam00000001137ea938;
  plVar11 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar10 = (long)plRam00000001137ea948;
    plRam00000001137ea948 = plVar10;
    *(undefined8 *)(lVar2 + unaff_x26 * 8) = 0x1137ea948;
    if (*plVar10 != 0) {
      uVar13 = *(ulong *)(*plVar10 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar15 = 0;
        if (uVar14 != 0) {
          uVar15 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar15 * uVar14;
      }
      *(long **)(lRam00000001137ea938 + uVar13 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar11;
    *plVar11 = (long)plVar10;
  }
  lRam00000001137ea950 = lRam00000001137ea950 + 1;
LAB_100058b88:
  if (pppuStack_420 == appuStack_438) {
    lVar2 = 0x20;
LAB_100058ba4:
    (**(code **)((long)*pppuStack_420 + lVar2))();
  }
  else if (pppuStack_420 != (undefined ***)0x0) {
    lVar2 = 0x28;
    goto LAB_100058ba4;
  }
  if (lStack_440 < 0) {
    func_0x000107c60e14(lStack_450);
  }
  func_0x000107c60e34(&UNK_10a1c3d00,0x1137ea938,0x100000000);
  lStack_448 = 0;
  lStack_450 = 0x382d667475;
  lStack_440 = 0x500000000000000;
  appuStack_438[0] = &PTR_DAT_110bad4b8;
  uVar13 = 0x1137ea960;
  uRam00000001137ea968 = 0;
  lRam00000001137ea960 = 0;
  lRam00000001137ea978 = 0;
  plRam00000001137ea970 = (long *)0x0;
  fRam00000001137ea980 = 1.0;
  pppuStack_420 = appuStack_438;
  FUN_1000554d8(0x1137ea960,&lStack_450);
  uVar14 = uRam00000001137ea968;
  if (uRam00000001137ea968 != 0) {
    uVar15 = uRam00000001137ea968 - 1;
    if ((uRam00000001137ea968 & uVar15) == 0) {
      uVar8 = uVar15 & uVar13;
    }
    else {
      uVar8 = uVar13;
      if (uRam00000001137ea968 <= uVar13) {
        uVar8 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar8 = uVar13 / uRam00000001137ea968;
        }
        uVar8 = uVar13 - uVar8 * uRam00000001137ea968;
      }
    }
    plVar10 = *(long **)(lRam00000001137ea960 + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar9 = plVar10[1];
        if (uVar9 == uVar13) {
          uVar9 = 0;
          FUN_1001a6960(0x1137ea960,plVar10 + 2,&lStack_450);
          if ((uVar9 & 1) != 0) goto LAB_100058e5c;
        }
        else {
          if ((uVar14 & uVar15) == 0) {
            uVar9 = uVar9 & uVar15;
          }
          else if (uVar14 <= uVar9) {
            uVar1 = 0;
            if (uVar14 != 0) {
              uVar1 = uVar9 / uVar14;
            }
            uVar9 = uVar9 - uVar1 * uVar14;
          }
          if (uVar9 != uVar8) break;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  plVar10 = (long *)0x48;
  func_0x000107c60e20();
  uStack_460 = 0x1137ea960;
  uStack_458 = 0;
  *plVar10 = 0;
  plVar10[1] = uVar13;
  plStack_468 = plVar10;
  if (lStack_440 < 0) {
    FUN_100033dac(plVar10 + 2,lStack_450,lStack_448);
  }
  else {
    plVar10[3] = lStack_448;
    plVar10[2] = lStack_450;
    plVar10[4] = lStack_440;
  }
  pppuVar4 = pppuStack_420;
  if (pppuStack_420 == (undefined ***)0x0) {
LAB_100058d28:
    plVar10[8] = (long)pppuVar4;
  }
  else {
    if (pppuStack_420 != appuStack_438) {
      (*(code *)(*pppuStack_420)[2])();
      goto LAB_100058d28;
    }
    plVar10[8] = (long)(plVar10 + 5);
    (*(code *)(*pppuStack_420)[3])();
  }
  uStack_458 = CONCAT71(uStack_458._1_7_,1);
  if ((uVar14 == 0) || (fRam00000001137ea980 * (float)uVar14 < (float)(lRam00000001137ea978 + 1))) {
    uVar8 = 1;
    if (2 < uVar14) {
      uVar8 = (ulong)((uVar14 & uVar14 - 1) != 0);
    }
    uVar8 = uVar8 | uVar14 << 1;
    uVar14 = (ulong)((float)(lRam00000001137ea978 + 1) / fRam00000001137ea980);
    if (uVar8 <= uVar14) {
      uVar8 = uVar14;
    }
    FUN_10005952c(uVar8);
    uVar14 = uRam00000001137ea968;
    if ((uRam00000001137ea968 & uRam00000001137ea968 - 1) == 0) {
      uVar8 = uRam00000001137ea968 - 1 & uVar13;
    }
    else {
      uVar8 = uVar13;
      if (uRam00000001137ea968 <= uVar13) {
        uVar8 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar8 = uVar13 / uRam00000001137ea968;
        }
        uVar8 = uVar13 - uVar8 * uRam00000001137ea968;
      }
    }
  }
  lVar2 = lRam00000001137ea960;
  plVar11 = *(long **)(lRam00000001137ea960 + uVar8 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar10 = (long)plRam00000001137ea970;
    plRam00000001137ea970 = plVar10;
    *(undefined8 *)(lVar2 + uVar8 * 8) = 0x1137ea970;
    if (*plVar10 != 0) {
      uVar8 = *(ulong *)(*plVar10 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar8 = uVar8 & uVar14 - 1;
      }
      else if (uVar14 <= uVar8) {
        uVar13 = 0;
        if (uVar14 != 0) {
          uVar13 = uVar8 / uVar14;
        }
        uVar8 = uVar8 - uVar13 * uVar14;
      }
      *(long **)(lRam00000001137ea960 + uVar8 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar11;
    *plVar11 = (long)plVar10;
  }
  lRam00000001137ea978 = lRam00000001137ea978 + 1;
LAB_100058e5c:
  if (pppuStack_420 == appuStack_438) {
    lVar2 = 0x20;
  }
  else {
    if (pppuStack_420 == (undefined ***)0x0) goto LAB_100058e84;
    lVar2 = 0x28;
  }
  (**(code **)((long)*pppuStack_420 + lVar2))();
LAB_100058e84:
  if (lStack_440 < 0) {
    func_0x000107c60e14(lStack_450);
  }
  func_0x000107c60e34(&UNK_10a1c4370,0x1137ea960,0x100000000);
  FUN_10005375c(&lStack_450,&UNK_10f643788);
  uRam00000001137ea988 = 0;
  uRam00000001137ea98c = 0x200000006;
  uRam00000001137ea9a0 = 0;
  uRam00000001137ea998 = 0;
  uRam00000001137ea9b0 = 0;
  uRam00000001137ea9a8 = 0;
  uRam00000001137ea9c0 = 0;
  uRam00000001137ea9b8 = 0;
  uRam00000001137ea9d0 = 0;
  uRam00000001137ea9c8 = 0;
  lRam00000001137ea9e0 = lStack_448;
  lRam00000001137ea9d8 = lStack_450;
  lRam00000001137ea9e8 = lStack_440;
  lStack_450 = 0;
  lStack_448 = 0;
  lStack_440 = 0;
  uRam00000001137ea9f8 = 0;
  uRam00000001137ea9f0 = 0;
  uRam00000001137eaa08 = 0;
  uRam00000001137eaa00 = 0;
  uRam00000001137eaa10 = 0;
  uRam00000001137eaa18 = 0x32aaaba7;
  uRam00000001137eaa28 = 0;
  uRam00000001137eaa20 = 0;
  uRam00000001137eaa38 = 0;
  uRam00000001137eaa30 = 0;
  uRam00000001137eaa48 = 0;
  uRam00000001137eaa40 = 0;
  uRam00000001137eaa50 = 0;
  func_0x000107c60e34(&UNK_10a1c5888,0x1137ea988,0x100000000);
  FUN_10005375c(&lStack_450,&UNK_10f642cb1);
  uRam00000001137eaa5c = 0x200000000;
  uRam00000001137eaa70 = 0;
  uRam00000001137eaa68 = 0;
  uRam00000001137eaa80 = 0;
  uRam00000001137eaa78 = 0;
  uRam00000001137eaa90 = 0;
  uRam00000001137eaa88 = 0;
  uRam00000001137eaaa0 = 0;
  uRam00000001137eaa98 = 0;
  uRam00000001137eaab0 = lStack_448;
  lRam00000001137eaaa8 = lStack_450;
  uRam00000001137eaab8 = lStack_440;
  uRam00000001137eaac8 = 0;
  uRam00000001137eaac0 = 0;
  uRam00000001137eaad8 = 0;
  uRam00000001137eaad0 = 0;
  uRam00000001137eaae0 = 0;
  uRam00000001137eaae8 = 0x32aaaba7;
  uRam00000001137eaaf8 = 0;
  uRam00000001137eaaf0 = 0;
  uRam00000001137eab08 = 0;
  uRam00000001137eab00 = 0;
  uRam00000001137eab18 = 0;
  uRam00000001137eab10 = 0;
  uRam00000001137eab20 = 0;
  uRam00000001137eaa58 = 1;
  func_0x000107c60e34(&UNK_10a1c58f8,0x1137eaa58,0x100000000);
  puVar5 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113834ea0 = 0x8000000000000020;
  uRam0000000113834e98 = 0x1e;
  puRam0000000113834e90 = puVar5;
  puVar5[1] = 0x525255434e4f435f;
  *puVar5 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar5 + 0x16) = 0x545049524353444e;
  *(undefined8 *)((long)puVar5 + 0xe) = 0x49425f544e455252;
  *(undefined1 *)((long)puVar5 + 0x1e) = 0;
  uRam0000000113834ea8 = 0;
  puRam0000000113834eb0 = &UNK_10a09e854;
  ppuRam0000000113834eb8 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x113834e90,0x100000000);
  uRam0000000113834ef0 = 0;
  uRam0000000113834ef8 = 0;
  uRam0000000113834f00 = 0;
  uRam0000000113834f1f = 0x15;
  uRam0000000113834f10 = 0x465f47535f;
  uRam0000000113834f08 = 0x45524f43534e454c;
  uRam0000000113834f15 = 0x4f5042;
  uRam0000000113834f18 = 0x31565f4c4f;
  uRam0000000113834f1d = 0;
  uRam0000000113834f20 = 0;
  uRam0000000113834f28 = 0;
  uRam0000000113834f30 = 0;
  uRam0000000113834f38 = 0;
  puRam0000000113834f40 = &UNK_10a1d5bec;
  ppuRam0000000113834f48 = &PTR_DAT_110badb28;
  puRam0000000113834f80 = &UNK_10a1d5bd0;
  ppuRam0000000113834f88 = &PTR_DAT_110badb10;
  func_0x000107c60e34(&UNK_10a1c5e48,0x113834ef0,0x100000000);
  puVar5 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puRam0000000113834fc0 = puVar5;
  *(undefined2 *)(puVar5 + 6) = 0x31;
  uRam0000000113834fd0 = 0x8000000000000038;
  uRam0000000113834fc8 = 0x31;
  puVar5[1] = 0x4149524554414d5f;
  *puVar5 = 0x45524f43534e454c;
  puVar5[3] = 0x505543434f5f474e;
  puVar5[2] = 0x4948435441425f4c;
  puVar5[5] = 0x565f5058455f4f49;
  puVar5[4] = 0x5441525f59434e41;
  uRam0000000113834fd8 = 0x3ecccccd;
  uRam0000000113834fdc = 0;
  uRam0000000113834fe0 = 0;
  uRam0000000113834fe4 = 0;
  puRam0000000113834fe8 = &UNK_10a1d5d00;
  ppuRam0000000113834ff0 = &PTR_DAT_110badb40;
  func_0x000107c60e34(&UNK_10a1c6038,0x113834fc0,0x100000000);
  uRam0000000113835028 = 0;
  uRam000000011383502c = 0;
  uRam0000000113835030 = 0;
  puVar5 = (undefined8 *)0x30;
  func_0x000107c60e20();
  uRam0000000113835048 = 0x8000000000000030;
  uRam0000000113835040 = 0x2f;
  puRam0000000113835038 = puVar5;
  puVar5[1] = 0x4149524554414d5f;
  *puVar5 = 0x45524f43534e454c;
  puVar5[3] = 0x4c42414e455f474e;
  puVar5[2] = 0x4948435441425f4c;
  *(undefined8 *)((long)puVar5 + 0x27) = 0x31565f5058455f53;
  *(undefined8 *)((long)puVar5 + 0x1f) = 0x455059545f44454c;
  *(undefined1 *)((long)puVar5 + 0x2f) = 0;
  uRam0000000113835050 = 0;
  uRam0000000113835054 = 0;
  uRam0000000113835058 = 0;
  uRam000000011383505c = 0;
  puRam0000000113835060 = &UNK_10a0a027c;
  ppuRam0000000113835068 = &PTR_DAT_110ba0c08;
  puRam00000001138350a0 = &UNK_10a1d5d1c;
  ppuRam00000001138350a8 = &PTR_DAT_110badb58;
  func_0x000107c60e34(&UNK_10a1c6214,0x113835028,0x100000000);
  uRam00000001138350e0 = 0;
  puVar5 = (undefined8 *)0x1138350e8;
  uRam00000001138350e8 = 0;
  uRam00000001138350ec = 0;
  uRam00000001138350f0 = 0;
  puVar6 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113835108 = 0x8000000000000020;
  uRam0000000113835100 = 0x1b;
  puRam00000001138350f8 = puVar6;
  puVar6[1] = 0x574549564552505f;
  *puVar6 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar6 + 0x13) = 0x31565f4552555458;
  *(undefined8 *)((long)puVar6 + 0xb) = 0x45545f5745495645;
  *(undefined1 *)((long)puVar6 + 0x1b) = 0;
  uRam0000000113835110 = 0;
  uRam0000000113835114 = 0;
  uRam0000000113835118 = 0;
  uRam000000011383511c = 0;
  puRam0000000113835120 = &UNK_10a0a027c;
  ppuRam0000000113835128 = &PTR_DAT_110ba0c08;
  puRam0000000113835160 = &UNK_10a1d5d38;
  ppuRam0000000113835168 = &PTR_DAT_110badb70;
  puVar7 = &UNK_10a1c6400;
  func_0x000107c60e34(&UNK_10a1c6400,0x1138350e8,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
    func_0x000107c60e78();
    func_0x000107c2b11c(&plStack_468);
    func_0x000107c2b120(0x1137ea960);
    func_0x000107c2b108(&lStack_450);
    func_0x000107c60bd8(puVar7);
    *puVar5 = &PTR_DAT_110bad428;
    return;
  }
  return;
}



/* Entry: 100058600; end: 10005873b;  */

void FUN_100058600(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x26;
  ulong uVar15;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined **appuStack_438 [3];
  undefined ***pppuStack_420;
  long lStack_290;
  undefined1 auStack_218 [448];
  long lStack_58;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      func_0x000107c60e14();
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    uVar8 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (param_2 != uVar8);
    plVar11 = (long *)param_1[2];
    if (plVar11 == (long *)0x0) {
      return;
    }
    uVar8 = plVar11[1];
    uVar9 = param_2 - 1;
    if ((param_2 & uVar9) == 0) {
      uVar8 = uVar8 & uVar9;
    }
    else if (param_2 <= uVar8) {
      uVar14 = 0;
      if (param_2 != 0) {
        uVar14 = uVar8 / param_2;
      }
      uVar8 = uVar8 - uVar14 * param_2;
    }
    *(long **)(*param_1 + uVar8 * 8) = param_1 + 2;
    plVar12 = (long *)*plVar11;
    while (plVar12 != (long *)0x0) {
      uVar14 = plVar12[1];
      if ((param_2 & uVar9) == 0) {
        uVar14 = uVar14 & uVar9;
      }
      else if (param_2 <= uVar14) {
        uVar15 = 0;
        if (param_2 != 0) {
          uVar15 = uVar14 / param_2;
        }
        uVar14 = uVar14 - uVar15 * param_2;
      }
      plVar13 = plVar12;
      if (uVar14 != uVar8) {
        lVar2 = *param_1;
        if (*(long *)(lVar2 + uVar14 * 8) == 0) {
          *(long **)(lVar2 + uVar14 * 8) = plVar11;
          uVar8 = uVar14;
        }
        else {
          *plVar11 = *plVar12;
          *plVar12 = **(undefined8 **)(lVar2 + uVar14 * 8);
          **(long **)(lVar2 + uVar14 * 8) = (long)plVar12;
          plVar13 = plVar11;
        }
      }
      plVar11 = plVar13;
      plVar12 = (long *)*plVar13;
    }
    return;
  }
  func_0x000107c2b044();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea758 = 0;
  uRam00000001137ea760 = 0;
  uRam00000001137ea798 = 0;
  uRam00000001137ea790 = 0;
  uRam00000001137ea7a8 = 0;
  uRam00000001137ea7a0 = 0;
  uRam00000001137ea7b0 = 0x3e8000000000000;
  func_0x000107c610b4(auStack_218,&PTR_s_b_110ba9240,0x1b0);
  FUN_100057cfc(0x1137ea7b8,auStack_218,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea7b8,0x100000000);
  func_0x000107c610b4(auStack_218,&PTR_DAT_110ba93f0,0x1c0);
  FUN_1000584bc(0x1137ea7e0,auStack_218,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea7e0,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea8d8 = 0;
  uRam00000001137ea8e0 = 0;
  func_0x000107c610b4(&lStack_450,&PTR_s_b_110bacc50,0x1b0);
  FUN_100057cfc(0x1137ea8e8,&lStack_450,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea8e8,0x100000000);
  func_0x000107c610b4(&lStack_450,&PTR_DAT_110bace00,0x1c0);
  FUN_1000584bc(0x1137ea910,&lStack_450,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea910,0x100000000);
  lStack_448 = 0;
  lStack_450 = 0x382d667475;
  lStack_440 = 0x500000000000000;
  appuStack_438[0] = &PTR_DAT_110bad428;
  uVar14 = 0x1137ea938;
  uRam00000001137ea940 = 0;
  lRam00000001137ea938 = 0;
  lRam00000001137ea950 = 0;
  plRam00000001137ea948 = (long *)0x0;
  fRam00000001137ea958 = 1.0;
  pppuStack_420 = appuStack_438;
  FUN_1000554d8(0x1137ea938,&lStack_450);
  uVar8 = uRam00000001137ea940;
  uVar9 = 0x1137ea000;
  if (uRam00000001137ea940 != 0) {
    uVar15 = uRam00000001137ea940 - 1;
    if ((uRam00000001137ea940 & uVar15) == 0) {
      unaff_x26 = uVar15 & uVar14;
    }
    else {
      unaff_x26 = uVar14;
      if (uRam00000001137ea940 <= uVar14) {
        uVar10 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar10 = uVar14 / uRam00000001137ea940;
        }
        unaff_x26 = uVar14 - uVar10 * uRam00000001137ea940;
      }
    }
    plVar11 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar10 = plVar11[1];
        if (uVar10 == uVar14) {
          uVar10 = 0;
          FUN_1001a6960(0x1137ea938,plVar11 + 2,&lStack_450);
          if ((uVar10 & 1) != 0) goto LAB_100058b88;
        }
        else {
          if ((uVar8 & uVar15) == 0) {
            uVar10 = uVar10 & uVar15;
          }
          else if (uVar8 <= uVar10) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar1 * uVar8;
          }
          if (uVar10 != unaff_x26) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar11 = (long *)0x48;
  func_0x000107c60e20();
  uStack_460 = 0x1137ea938;
  uStack_458 = 0;
  *plVar11 = 0;
  plVar11[1] = uVar14;
  plStack_468 = plVar11;
  if (lStack_440 < 0) {
    FUN_100033dac(plVar11 + 2,lStack_450,lStack_448);
  }
  else {
    plVar11[3] = lStack_448;
    plVar11[2] = lStack_450;
    plVar11[4] = lStack_440;
  }
  pppuVar4 = pppuStack_420;
  if (pppuStack_420 == (undefined ***)0x0) {
LAB_100058a54:
    plVar11[8] = (long)pppuVar4;
  }
  else {
    if (pppuStack_420 != appuStack_438) {
      (*(code *)(*pppuStack_420)[2])();
      goto LAB_100058a54;
    }
    plVar11[8] = (long)(plVar11 + 5);
    (*(code *)(*pppuStack_420)[3])();
  }
  uStack_458 = CONCAT71(uStack_458._1_7_,1);
  if ((uVar8 == 0) || (fRam00000001137ea958 * (float)uVar8 < (float)(lRam00000001137ea950 + 1))) {
    uVar15 = 1;
    if (2 < uVar8) {
      uVar15 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar15 = uVar15 | uVar8 << 1;
    uVar8 = (ulong)((float)(lRam00000001137ea950 + 1) / fRam00000001137ea958);
    if (uVar15 <= uVar8) {
      uVar15 = uVar8;
    }
    FUN_100059330(uVar15);
    uVar8 = uRam00000001137ea940;
    if ((uRam00000001137ea940 & uRam00000001137ea940 - 1) == 0) {
      unaff_x26 = uRam00000001137ea940 - 1 & uVar14;
    }
    else {
      unaff_x26 = uVar14;
      if (uRam00000001137ea940 <= uVar14) {
        uVar15 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar15 = uVar14 / uRam00000001137ea940;
        }
        unaff_x26 = uVar14 - uVar15 * uRam00000001137ea940;
      }
    }
  }
  lVar2 = lRam00000001137ea938;
  plVar12 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar11 = (long)plRam00000001137ea948;
    plRam00000001137ea948 = plVar11;
    *(undefined8 *)(lVar2 + unaff_x26 * 8) = 0x1137ea948;
    if (*plVar11 != 0) {
      uVar14 = *(ulong *)(*plVar11 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar14 = uVar14 & uVar8 - 1;
      }
      else if (uVar8 <= uVar14) {
        uVar15 = 0;
        if (uVar8 != 0) {
          uVar15 = uVar14 / uVar8;
        }
        uVar14 = uVar14 - uVar15 * uVar8;
      }
      *(long **)(lRam00000001137ea938 + uVar14 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar12;
    *plVar12 = (long)plVar11;
  }
  lRam00000001137ea950 = lRam00000001137ea950 + 1;
LAB_100058b88:
  if (pppuStack_420 == appuStack_438) {
    lVar2 = 0x20;
LAB_100058ba4:
    (**(code **)((long)*pppuStack_420 + lVar2))();
  }
  else if (pppuStack_420 != (undefined ***)0x0) {
    lVar2 = 0x28;
    goto LAB_100058ba4;
  }
  if (lStack_440 < 0) {
    func_0x000107c60e14(lStack_450);
  }
  func_0x000107c60e34(&UNK_10a1c3d00,0x1137ea938,0x100000000);
  lStack_448 = 0;
  lStack_450 = 0x382d667475;
  lStack_440 = 0x500000000000000;
  appuStack_438[0] = &PTR_DAT_110bad4b8;
  uVar14 = 0x1137ea960;
  uRam00000001137ea968 = 0;
  lRam00000001137ea960 = 0;
  lRam00000001137ea978 = 0;
  plRam00000001137ea970 = (long *)0x0;
  fRam00000001137ea980 = 1.0;
  pppuStack_420 = appuStack_438;
  FUN_1000554d8(0x1137ea960,&lStack_450);
  uVar8 = uRam00000001137ea968;
  if (uRam00000001137ea968 != 0) {
    uVar15 = uRam00000001137ea968 - 1;
    if ((uRam00000001137ea968 & uVar15) == 0) {
      uVar9 = uVar15 & uVar14;
    }
    else {
      uVar9 = uVar14;
      if (uRam00000001137ea968 <= uVar14) {
        uVar9 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar9 = uVar14 / uRam00000001137ea968;
        }
        uVar9 = uVar14 - uVar9 * uRam00000001137ea968;
      }
    }
    plVar11 = *(long **)(lRam00000001137ea960 + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar10 = plVar11[1];
        if (uVar10 == uVar14) {
          uVar10 = 0;
          FUN_1001a6960(0x1137ea960,plVar11 + 2,&lStack_450);
          if ((uVar10 & 1) != 0) goto LAB_100058e5c;
        }
        else {
          if ((uVar8 & uVar15) == 0) {
            uVar10 = uVar10 & uVar15;
          }
          else if (uVar8 <= uVar10) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar1 * uVar8;
          }
          if (uVar10 != uVar9) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  plVar11 = (long *)0x48;
  func_0x000107c60e20();
  uStack_460 = 0x1137ea960;
  uStack_458 = 0;
  *plVar11 = 0;
  plVar11[1] = uVar14;
  plStack_468 = plVar11;
  if (lStack_440 < 0) {
    FUN_100033dac(plVar11 + 2,lStack_450,lStack_448);
  }
  else {
    plVar11[3] = lStack_448;
    plVar11[2] = lStack_450;
    plVar11[4] = lStack_440;
  }
  pppuVar4 = pppuStack_420;
  if (pppuStack_420 == (undefined ***)0x0) {
LAB_100058d28:
    plVar11[8] = (long)pppuVar4;
  }
  else {
    if (pppuStack_420 != appuStack_438) {
      (*(code *)(*pppuStack_420)[2])();
      goto LAB_100058d28;
    }
    plVar11[8] = (long)(plVar11 + 5);
    (*(code *)(*pppuStack_420)[3])();
  }
  uStack_458 = CONCAT71(uStack_458._1_7_,1);
  if ((uVar8 == 0) || (fRam00000001137ea980 * (float)uVar8 < (float)(lRam00000001137ea978 + 1))) {
    uVar9 = 1;
    if (2 < uVar8) {
      uVar9 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar9 = uVar9 | uVar8 << 1;
    uVar8 = (ulong)((float)(lRam00000001137ea978 + 1) / fRam00000001137ea980);
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    FUN_10005952c(uVar9);
    uVar8 = uRam00000001137ea968;
    if ((uRam00000001137ea968 & uRam00000001137ea968 - 1) == 0) {
      uVar9 = uRam00000001137ea968 - 1 & uVar14;
    }
    else {
      uVar9 = uVar14;
      if (uRam00000001137ea968 <= uVar14) {
        uVar9 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar9 = uVar14 / uRam00000001137ea968;
        }
        uVar9 = uVar14 - uVar9 * uRam00000001137ea968;
      }
    }
  }
  lVar2 = lRam00000001137ea960;
  plVar12 = *(long **)(lRam00000001137ea960 + uVar9 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar11 = (long)plRam00000001137ea970;
    plRam00000001137ea970 = plVar11;
    *(undefined8 *)(lVar2 + uVar9 * 8) = 0x1137ea970;
    if (*plVar11 != 0) {
      uVar9 = *(ulong *)(*plVar11 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar9 = uVar9 & uVar8 - 1;
      }
      else if (uVar8 <= uVar9) {
        uVar14 = 0;
        if (uVar8 != 0) {
          uVar14 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar14 * uVar8;
      }
      *(long **)(lRam00000001137ea960 + uVar9 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar12;
    *plVar12 = (long)plVar11;
  }
  lRam00000001137ea978 = lRam00000001137ea978 + 1;
LAB_100058e5c:
  if (pppuStack_420 == appuStack_438) {
    lVar2 = 0x20;
  }
  else {
    if (pppuStack_420 == (undefined ***)0x0) goto LAB_100058e84;
    lVar2 = 0x28;
  }
  (**(code **)((long)*pppuStack_420 + lVar2))();
LAB_100058e84:
  if (lStack_440 < 0) {
    func_0x000107c60e14(lStack_450);
  }
  func_0x000107c60e34(&UNK_10a1c4370,0x1137ea960,0x100000000);
  FUN_10005375c(&lStack_450,&UNK_10f643788);
  uRam00000001137ea988 = 0;
  uRam00000001137ea98c = 0x200000006;
  uRam00000001137ea9a0 = 0;
  uRam00000001137ea998 = 0;
  uRam00000001137ea9b0 = 0;
  uRam00000001137ea9a8 = 0;
  uRam00000001137ea9c0 = 0;
  uRam00000001137ea9b8 = 0;
  uRam00000001137ea9d0 = 0;
  uRam00000001137ea9c8 = 0;
  lRam00000001137ea9e0 = lStack_448;
  lRam00000001137ea9d8 = lStack_450;
  lRam00000001137ea9e8 = lStack_440;
  lStack_450 = 0;
  lStack_448 = 0;
  lStack_440 = 0;
  uRam00000001137ea9f8 = 0;
  uRam00000001137ea9f0 = 0;
  uRam00000001137eaa08 = 0;
  uRam00000001137eaa00 = 0;
  uRam00000001137eaa10 = 0;
  uRam00000001137eaa18 = 0x32aaaba7;
  uRam00000001137eaa28 = 0;
  uRam00000001137eaa20 = 0;
  uRam00000001137eaa38 = 0;
  uRam00000001137eaa30 = 0;
  uRam00000001137eaa48 = 0;
  uRam00000001137eaa40 = 0;
  uRam00000001137eaa50 = 0;
  func_0x000107c60e34(&UNK_10a1c5888,0x1137ea988,0x100000000);
  FUN_10005375c(&lStack_450,&UNK_10f642cb1);
  uRam00000001137eaa5c = 0x200000000;
  uRam00000001137eaa70 = 0;
  uRam00000001137eaa68 = 0;
  uRam00000001137eaa80 = 0;
  uRam00000001137eaa78 = 0;
  uRam00000001137eaa90 = 0;
  uRam00000001137eaa88 = 0;
  uRam00000001137eaaa0 = 0;
  uRam00000001137eaa98 = 0;
  uRam00000001137eaab0 = lStack_448;
  lRam00000001137eaaa8 = lStack_450;
  uRam00000001137eaab8 = lStack_440;
  uRam00000001137eaac8 = 0;
  uRam00000001137eaac0 = 0;
  uRam00000001137eaad8 = 0;
  uRam00000001137eaad0 = 0;
  uRam00000001137eaae0 = 0;
  uRam00000001137eaae8 = 0x32aaaba7;
  uRam00000001137eaaf8 = 0;
  uRam00000001137eaaf0 = 0;
  uRam00000001137eab08 = 0;
  uRam00000001137eab00 = 0;
  uRam00000001137eab18 = 0;
  uRam00000001137eab10 = 0;
  uRam00000001137eab20 = 0;
  uRam00000001137eaa58 = 1;
  func_0x000107c60e34(&UNK_10a1c58f8,0x1137eaa58,0x100000000);
  puVar5 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113834ea0 = 0x8000000000000020;
  uRam0000000113834e98 = 0x1e;
  puRam0000000113834e90 = puVar5;
  puVar5[1] = 0x525255434e4f435f;
  *puVar5 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar5 + 0x16) = 0x545049524353444e;
  *(undefined8 *)((long)puVar5 + 0xe) = 0x49425f544e455252;
  *(undefined1 *)((long)puVar5 + 0x1e) = 0;
  uRam0000000113834ea8 = 0;
  puRam0000000113834eb0 = &UNK_10a09e854;
  ppuRam0000000113834eb8 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x113834e90,0x100000000);
  uRam0000000113834ef0 = 0;
  uRam0000000113834ef8 = 0;
  uRam0000000113834f00 = 0;
  uRam0000000113834f1f = 0x15;
  uRam0000000113834f10 = 0x465f47535f;
  uRam0000000113834f08 = 0x45524f43534e454c;
  uRam0000000113834f15 = 0x4f5042;
  uRam0000000113834f18 = 0x31565f4c4f;
  uRam0000000113834f1d = 0;
  uRam0000000113834f20 = 0;
  uRam0000000113834f28 = 0;
  uRam0000000113834f30 = 0;
  uRam0000000113834f38 = 0;
  puRam0000000113834f40 = &UNK_10a1d5bec;
  ppuRam0000000113834f48 = &PTR_DAT_110badb28;
  puRam0000000113834f80 = &UNK_10a1d5bd0;
  ppuRam0000000113834f88 = &PTR_DAT_110badb10;
  func_0x000107c60e34(&UNK_10a1c5e48,0x113834ef0,0x100000000);
  puVar5 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puRam0000000113834fc0 = puVar5;
  *(undefined2 *)(puVar5 + 6) = 0x31;
  uRam0000000113834fd0 = 0x8000000000000038;
  uRam0000000113834fc8 = 0x31;
  puVar5[1] = 0x4149524554414d5f;
  *puVar5 = 0x45524f43534e454c;
  puVar5[3] = 0x505543434f5f474e;
  puVar5[2] = 0x4948435441425f4c;
  puVar5[5] = 0x565f5058455f4f49;
  puVar5[4] = 0x5441525f59434e41;
  uRam0000000113834fd8 = 0x3ecccccd;
  uRam0000000113834fdc = 0;
  uRam0000000113834fe0 = 0;
  uRam0000000113834fe4 = 0;
  puRam0000000113834fe8 = &UNK_10a1d5d00;
  ppuRam0000000113834ff0 = &PTR_DAT_110badb40;
  func_0x000107c60e34(&UNK_10a1c6038,0x113834fc0,0x100000000);
  uRam0000000113835028 = 0;
  uRam000000011383502c = 0;
  uRam0000000113835030 = 0;
  puVar5 = (undefined8 *)0x30;
  func_0x000107c60e20();
  uRam0000000113835048 = 0x8000000000000030;
  uRam0000000113835040 = 0x2f;
  puRam0000000113835038 = puVar5;
  puVar5[1] = 0x4149524554414d5f;
  *puVar5 = 0x45524f43534e454c;
  puVar5[3] = 0x4c42414e455f474e;
  puVar5[2] = 0x4948435441425f4c;
  *(undefined8 *)((long)puVar5 + 0x27) = 0x31565f5058455f53;
  *(undefined8 *)((long)puVar5 + 0x1f) = 0x455059545f44454c;
  *(undefined1 *)((long)puVar5 + 0x2f) = 0;
  uRam0000000113835050 = 0;
  uRam0000000113835054 = 0;
  uRam0000000113835058 = 0;
  uRam000000011383505c = 0;
  puRam0000000113835060 = &UNK_10a0a027c;
  ppuRam0000000113835068 = &PTR_DAT_110ba0c08;
  puRam00000001138350a0 = &UNK_10a1d5d1c;
  ppuRam00000001138350a8 = &PTR_DAT_110badb58;
  func_0x000107c60e34(&UNK_10a1c6214,0x113835028,0x100000000);
  uRam00000001138350e0 = 0;
  puVar5 = (undefined8 *)0x1138350e8;
  uRam00000001138350e8 = 0;
  uRam00000001138350ec = 0;
  uRam00000001138350f0 = 0;
  puVar6 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113835108 = 0x8000000000000020;
  uRam0000000113835100 = 0x1b;
  puRam00000001138350f8 = puVar6;
  puVar6[1] = 0x574549564552505f;
  *puVar6 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar6 + 0x13) = 0x31565f4552555458;
  *(undefined8 *)((long)puVar6 + 0xb) = 0x45545f5745495645;
  *(undefined1 *)((long)puVar6 + 0x1b) = 0;
  uRam0000000113835110 = 0;
  uRam0000000113835114 = 0;
  uRam0000000113835118 = 0;
  uRam000000011383511c = 0;
  puRam0000000113835120 = &UNK_10a0a027c;
  ppuRam0000000113835128 = &PTR_DAT_110ba0c08;
  puRam0000000113835160 = &UNK_10a1d5d38;
  ppuRam0000000113835168 = &PTR_DAT_110badb70;
  puVar7 = &UNK_10a1c6400;
  func_0x000107c60e34(&UNK_10a1c6400,0x1138350e8,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
    func_0x000107c60e78();
    func_0x000107c2b11c(&plStack_468);
    func_0x000107c2b120(0x1137ea960);
    func_0x000107c2b108(&lStack_450);
    func_0x000107c60bd8(puVar7);
    *puVar5 = &PTR_DAT_110bad428;
    return;
  }
  return;
}



/* Entry: 10005873c; end: 10005882f;  */

void FUN_10005873c(void)

{
  ulong uVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  ulong uVar13;
  long *plStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  undefined **appuStack_418 [3];
  undefined ***pppuStack_400;
  long lStack_270;
  undefined1 auStack_1f8 [448];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea758 = 0;
  uRam00000001137ea760 = 0;
  uRam00000001137ea798 = 0;
  uRam00000001137ea790 = 0;
  uRam00000001137ea7a8 = 0;
  uRam00000001137ea7a0 = 0;
  uRam00000001137ea7b0 = 0x3e8000000000000;
  func_0x000107c610b4(auStack_1f8,&PTR_s_b_110ba9240,0x1b0);
  FUN_100057cfc(0x1137ea7b8,auStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea7b8,0x100000000);
  func_0x000107c610b4(auStack_1f8,&PTR_DAT_110ba93f0,0x1c0);
  FUN_1000584bc(0x1137ea7e0,auStack_1f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea7e0,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea8d8 = 0;
  uRam00000001137ea8e0 = 0;
  func_0x000107c610b4(&lStack_430,&PTR_s_b_110bacc50,0x1b0);
  FUN_100057cfc(0x1137ea8e8,&lStack_430,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea8e8,0x100000000);
  func_0x000107c610b4(&lStack_430,&PTR_DAT_110bace00,0x1c0);
  FUN_1000584bc(0x1137ea910,&lStack_430,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea910,0x100000000);
  lStack_428 = 0;
  lStack_430 = 0x382d667475;
  lStack_420 = 0x500000000000000;
  appuStack_418[0] = &PTR_DAT_110bad428;
  uVar11 = 0x1137ea938;
  uRam00000001137ea940 = 0;
  lRam00000001137ea938 = 0;
  lRam00000001137ea950 = 0;
  plRam00000001137ea948 = (long *)0x0;
  fRam00000001137ea958 = 1.0;
  pppuStack_400 = appuStack_418;
  FUN_1000554d8(0x1137ea938,&lStack_430);
  uVar9 = uRam00000001137ea940;
  uVar12 = 0x1137ea000;
  if (uRam00000001137ea940 != 0) {
    uVar13 = uRam00000001137ea940 - 1;
    if ((uRam00000001137ea940 & uVar13) == 0) {
      unaff_x26 = uVar13 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uRam00000001137ea940 <= uVar11) {
        uVar7 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar7 = uVar11 / uRam00000001137ea940;
        }
        unaff_x26 = uVar11 - uVar7 * uRam00000001137ea940;
      }
    }
    plVar6 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar11) {
          uVar7 = 0;
          FUN_1001a6960(0x1137ea938,plVar6 + 2,&lStack_430);
          if ((uVar7 & 1) != 0) goto LAB_100058b88;
        }
        else {
          if ((uVar9 & uVar13) == 0) {
            uVar7 = uVar7 & uVar13;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x26) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = (long *)0x48;
  func_0x000107c60e20();
  uStack_440 = 0x1137ea938;
  uStack_438 = 0;
  *plVar6 = 0;
  plVar6[1] = uVar11;
  plStack_448 = plVar6;
  if (lStack_420 < 0) {
    FUN_100033dac(plVar6 + 2,lStack_430,lStack_428);
  }
  else {
    plVar6[3] = lStack_428;
    plVar6[2] = lStack_430;
    plVar6[4] = lStack_420;
  }
  pppuVar2 = pppuStack_400;
  if (pppuStack_400 == (undefined ***)0x0) {
LAB_100058a54:
    plVar6[8] = (long)pppuVar2;
  }
  else {
    if (pppuStack_400 != appuStack_418) {
      (*(code *)(*pppuStack_400)[2])();
      goto LAB_100058a54;
    }
    plVar6[8] = (long)(plVar6 + 5);
    (*(code *)(*pppuStack_400)[3])();
  }
  uStack_438 = CONCAT71(uStack_438._1_7_,1);
  if ((uVar9 == 0) || (fRam00000001137ea958 * (float)uVar9 < (float)(lRam00000001137ea950 + 1))) {
    uVar13 = 1;
    if (2 < uVar9) {
      uVar13 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar13 = uVar13 | uVar9 << 1;
    uVar9 = (ulong)((float)(lRam00000001137ea950 + 1) / fRam00000001137ea958);
    if (uVar13 <= uVar9) {
      uVar13 = uVar9;
    }
    FUN_100059330(uVar13);
    uVar9 = uRam00000001137ea940;
    if ((uRam00000001137ea940 & uRam00000001137ea940 - 1) == 0) {
      unaff_x26 = uRam00000001137ea940 - 1 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uRam00000001137ea940 <= uVar11) {
        uVar13 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar13 = uVar11 / uRam00000001137ea940;
        }
        unaff_x26 = uVar11 - uVar13 * uRam00000001137ea940;
      }
    }
  }
  lVar8 = lRam00000001137ea938;
  plVar10 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar6 = (long)plRam00000001137ea948;
    plRam00000001137ea948 = plVar6;
    *(undefined8 *)(lVar8 + unaff_x26 * 8) = 0x1137ea948;
    if (*plVar6 != 0) {
      uVar11 = *(ulong *)(*plVar6 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar11 = uVar11 & uVar9 - 1;
      }
      else if (uVar9 <= uVar11) {
        uVar13 = 0;
        if (uVar9 != 0) {
          uVar13 = uVar11 / uVar9;
        }
        uVar11 = uVar11 - uVar13 * uVar9;
      }
      *(long **)(lRam00000001137ea938 + uVar11 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
  }
  lRam00000001137ea950 = lRam00000001137ea950 + 1;
LAB_100058b88:
  if (pppuStack_400 == appuStack_418) {
    lVar8 = 0x20;
LAB_100058ba4:
    (**(code **)((long)*pppuStack_400 + lVar8))();
  }
  else if (pppuStack_400 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_100058ba4;
  }
  if (lStack_420 < 0) {
    func_0x000107c60e14(lStack_430);
  }
  func_0x000107c60e34(&UNK_10a1c3d00,0x1137ea938,0x100000000);
  lStack_428 = 0;
  lStack_430 = 0x382d667475;
  lStack_420 = 0x500000000000000;
  appuStack_418[0] = &PTR_DAT_110bad4b8;
  uVar11 = 0x1137ea960;
  uRam00000001137ea968 = 0;
  lRam00000001137ea960 = 0;
  lRam00000001137ea978 = 0;
  plRam00000001137ea970 = (long *)0x0;
  fRam00000001137ea980 = 1.0;
  pppuStack_400 = appuStack_418;
  FUN_1000554d8(0x1137ea960,&lStack_430);
  uVar9 = uRam00000001137ea968;
  if (uRam00000001137ea968 != 0) {
    uVar13 = uRam00000001137ea968 - 1;
    if ((uRam00000001137ea968 & uVar13) == 0) {
      uVar12 = uVar13 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uRam00000001137ea968 <= uVar11) {
        uVar12 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar12 = uVar11 / uRam00000001137ea968;
        }
        uVar12 = uVar11 - uVar12 * uRam00000001137ea968;
      }
    }
    plVar6 = *(long **)(lRam00000001137ea960 + uVar12 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar11) {
          uVar7 = 0;
          FUN_1001a6960(0x1137ea960,plVar6 + 2,&lStack_430);
          if ((uVar7 & 1) != 0) goto LAB_100058e5c;
        }
        else {
          if ((uVar9 & uVar13) == 0) {
            uVar7 = uVar7 & uVar13;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != uVar12) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = (long *)0x48;
  func_0x000107c60e20();
  uStack_440 = 0x1137ea960;
  uStack_438 = 0;
  *plVar6 = 0;
  plVar6[1] = uVar11;
  plStack_448 = plVar6;
  if (lStack_420 < 0) {
    FUN_100033dac(plVar6 + 2,lStack_430,lStack_428);
  }
  else {
    plVar6[3] = lStack_428;
    plVar6[2] = lStack_430;
    plVar6[4] = lStack_420;
  }
  pppuVar2 = pppuStack_400;
  if (pppuStack_400 == (undefined ***)0x0) {
LAB_100058d28:
    plVar6[8] = (long)pppuVar2;
  }
  else {
    if (pppuStack_400 != appuStack_418) {
      (*(code *)(*pppuStack_400)[2])();
      goto LAB_100058d28;
    }
    plVar6[8] = (long)(plVar6 + 5);
    (*(code *)(*pppuStack_400)[3])();
  }
  uStack_438 = CONCAT71(uStack_438._1_7_,1);
  if ((uVar9 == 0) || (fRam00000001137ea980 * (float)uVar9 < (float)(lRam00000001137ea978 + 1))) {
    uVar12 = 1;
    if (2 < uVar9) {
      uVar12 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar12 = uVar12 | uVar9 << 1;
    uVar9 = (ulong)((float)(lRam00000001137ea978 + 1) / fRam00000001137ea980);
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    FUN_10005952c(uVar12);
    uVar9 = uRam00000001137ea968;
    if ((uRam00000001137ea968 & uRam00000001137ea968 - 1) == 0) {
      uVar12 = uRam00000001137ea968 - 1 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uRam00000001137ea968 <= uVar11) {
        uVar12 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar12 = uVar11 / uRam00000001137ea968;
        }
        uVar12 = uVar11 - uVar12 * uRam00000001137ea968;
      }
    }
  }
  lVar8 = lRam00000001137ea960;
  plVar10 = *(long **)(lRam00000001137ea960 + uVar12 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar6 = (long)plRam00000001137ea970;
    plRam00000001137ea970 = plVar6;
    *(undefined8 *)(lVar8 + uVar12 * 8) = 0x1137ea970;
    if (*plVar6 != 0) {
      uVar12 = *(ulong *)(*plVar6 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar12 = uVar12 & uVar9 - 1;
      }
      else if (uVar9 <= uVar12) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar12 / uVar9;
        }
        uVar12 = uVar12 - uVar11 * uVar9;
      }
      *(long **)(lRam00000001137ea960 + uVar12 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
  }
  lRam00000001137ea978 = lRam00000001137ea978 + 1;
LAB_100058e5c:
  if (pppuStack_400 == appuStack_418) {
    lVar8 = 0x20;
  }
  else {
    if (pppuStack_400 == (undefined ***)0x0) goto LAB_100058e84;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuStack_400 + lVar8))();
LAB_100058e84:
  if (lStack_420 < 0) {
    func_0x000107c60e14(lStack_430);
  }
  func_0x000107c60e34(&UNK_10a1c4370,0x1137ea960,0x100000000);
  FUN_10005375c(&lStack_430,&UNK_10f643788);
  uRam00000001137ea988 = 0;
  uRam00000001137ea98c = 0x200000006;
  uRam00000001137ea9a0 = 0;
  uRam00000001137ea998 = 0;
  uRam00000001137ea9b0 = 0;
  uRam00000001137ea9a8 = 0;
  uRam00000001137ea9c0 = 0;
  uRam00000001137ea9b8 = 0;
  uRam00000001137ea9d0 = 0;
  uRam00000001137ea9c8 = 0;
  lRam00000001137ea9e0 = lStack_428;
  lRam00000001137ea9d8 = lStack_430;
  lRam00000001137ea9e8 = lStack_420;
  lStack_430 = 0;
  lStack_428 = 0;
  lStack_420 = 0;
  uRam00000001137ea9f8 = 0;
  uRam00000001137ea9f0 = 0;
  uRam00000001137eaa08 = 0;
  uRam00000001137eaa00 = 0;
  uRam00000001137eaa10 = 0;
  uRam00000001137eaa18 = 0x32aaaba7;
  uRam00000001137eaa28 = 0;
  uRam00000001137eaa20 = 0;
  uRam00000001137eaa38 = 0;
  uRam00000001137eaa30 = 0;
  uRam00000001137eaa48 = 0;
  uRam00000001137eaa40 = 0;
  uRam00000001137eaa50 = 0;
  func_0x000107c60e34(&UNK_10a1c5888,0x1137ea988,0x100000000);
  FUN_10005375c(&lStack_430,&UNK_10f642cb1);
  uRam00000001137eaa5c = 0x200000000;
  uRam00000001137eaa70 = 0;
  uRam00000001137eaa68 = 0;
  uRam00000001137eaa80 = 0;
  uRam00000001137eaa78 = 0;
  uRam00000001137eaa90 = 0;
  uRam00000001137eaa88 = 0;
  uRam00000001137eaaa0 = 0;
  uRam00000001137eaa98 = 0;
  uRam00000001137eaab0 = lStack_428;
  lRam00000001137eaaa8 = lStack_430;
  uRam00000001137eaab8 = lStack_420;
  uRam00000001137eaac8 = 0;
  uRam00000001137eaac0 = 0;
  uRam00000001137eaad8 = 0;
  uRam00000001137eaad0 = 0;
  uRam00000001137eaae0 = 0;
  uRam00000001137eaae8 = 0x32aaaba7;
  uRam00000001137eaaf8 = 0;
  uRam00000001137eaaf0 = 0;
  uRam00000001137eab08 = 0;
  uRam00000001137eab00 = 0;
  uRam00000001137eab18 = 0;
  uRam00000001137eab10 = 0;
  uRam00000001137eab20 = 0;
  uRam00000001137eaa58 = 1;
  func_0x000107c60e34(&UNK_10a1c58f8,0x1137eaa58,0x100000000);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113834ea0 = 0x8000000000000020;
  uRam0000000113834e98 = 0x1e;
  puRam0000000113834e90 = puVar3;
  puVar3[1] = 0x525255434e4f435f;
  *puVar3 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar3 + 0x16) = 0x545049524353444e;
  *(undefined8 *)((long)puVar3 + 0xe) = 0x49425f544e455252;
  *(undefined1 *)((long)puVar3 + 0x1e) = 0;
  uRam0000000113834ea8 = 0;
  puRam0000000113834eb0 = &UNK_10a09e854;
  ppuRam0000000113834eb8 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x113834e90,0x100000000);
  uRam0000000113834ef0 = 0;
  uRam0000000113834ef8 = 0;
  uRam0000000113834f00 = 0;
  uRam0000000113834f1f = 0x15;
  uRam0000000113834f10 = 0x465f47535f;
  uRam0000000113834f08 = 0x45524f43534e454c;
  uRam0000000113834f15 = 0x4f5042;
  uRam0000000113834f18 = 0x31565f4c4f;
  uRam0000000113834f1d = 0;
  uRam0000000113834f20 = 0;
  uRam0000000113834f28 = 0;
  uRam0000000113834f30 = 0;
  uRam0000000113834f38 = 0;
  puRam0000000113834f40 = &UNK_10a1d5bec;
  ppuRam0000000113834f48 = &PTR_DAT_110badb28;
  puRam0000000113834f80 = &UNK_10a1d5bd0;
  ppuRam0000000113834f88 = &PTR_DAT_110badb10;
  func_0x000107c60e34(&UNK_10a1c5e48,0x113834ef0,0x100000000);
  puVar3 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puRam0000000113834fc0 = puVar3;
  *(undefined2 *)(puVar3 + 6) = 0x31;
  uRam0000000113834fd0 = 0x8000000000000038;
  uRam0000000113834fc8 = 0x31;
  puVar3[1] = 0x4149524554414d5f;
  *puVar3 = 0x45524f43534e454c;
  puVar3[3] = 0x505543434f5f474e;
  puVar3[2] = 0x4948435441425f4c;
  puVar3[5] = 0x565f5058455f4f49;
  puVar3[4] = 0x5441525f59434e41;
  uRam0000000113834fd8 = 0x3ecccccd;
  uRam0000000113834fdc = 0;
  uRam0000000113834fe0 = 0;
  uRam0000000113834fe4 = 0;
  puRam0000000113834fe8 = &UNK_10a1d5d00;
  ppuRam0000000113834ff0 = &PTR_DAT_110badb40;
  func_0x000107c60e34(&UNK_10a1c6038,0x113834fc0,0x100000000);
  uRam0000000113835028 = 0;
  uRam000000011383502c = 0;
  uRam0000000113835030 = 0;
  puVar3 = (undefined8 *)0x30;
  func_0x000107c60e20();
  uRam0000000113835048 = 0x8000000000000030;
  uRam0000000113835040 = 0x2f;
  puRam0000000113835038 = puVar3;
  puVar3[1] = 0x4149524554414d5f;
  *puVar3 = 0x45524f43534e454c;
  puVar3[3] = 0x4c42414e455f474e;
  puVar3[2] = 0x4948435441425f4c;
  *(undefined8 *)((long)puVar3 + 0x27) = 0x31565f5058455f53;
  *(undefined8 *)((long)puVar3 + 0x1f) = 0x455059545f44454c;
  *(undefined1 *)((long)puVar3 + 0x2f) = 0;
  uRam0000000113835050 = 0;
  uRam0000000113835054 = 0;
  uRam0000000113835058 = 0;
  uRam000000011383505c = 0;
  puRam0000000113835060 = &UNK_10a0a027c;
  ppuRam0000000113835068 = &PTR_DAT_110ba0c08;
  puRam00000001138350a0 = &UNK_10a1d5d1c;
  ppuRam00000001138350a8 = &PTR_DAT_110badb58;
  func_0x000107c60e34(&UNK_10a1c6214,0x113835028,0x100000000);
  uRam00000001138350e0 = 0;
  puVar3 = (undefined8 *)0x1138350e8;
  uRam00000001138350e8 = 0;
  uRam00000001138350ec = 0;
  uRam00000001138350f0 = 0;
  puVar4 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113835108 = 0x8000000000000020;
  uRam0000000113835100 = 0x1b;
  puRam00000001138350f8 = puVar4;
  puVar4[1] = 0x574549564552505f;
  *puVar4 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x31565f4552555458;
  *(undefined8 *)((long)puVar4 + 0xb) = 0x45545f5745495645;
  *(undefined1 *)((long)puVar4 + 0x1b) = 0;
  uRam0000000113835110 = 0;
  uRam0000000113835114 = 0;
  uRam0000000113835118 = 0;
  uRam000000011383511c = 0;
  puRam0000000113835120 = &UNK_10a0a027c;
  ppuRam0000000113835128 = &PTR_DAT_110ba0c08;
  puRam0000000113835160 = &UNK_10a1d5d38;
  ppuRam0000000113835168 = &PTR_DAT_110badb70;
  puVar5 = &UNK_10a1c6400;
  func_0x000107c60e34(&UNK_10a1c6400,0x1138350e8,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_270) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c2b11c(&plStack_448);
  func_0x000107c2b120(0x1137ea960);
  func_0x000107c2b108(&lStack_430);
  func_0x000107c60bd8(puVar5);
  *puVar3 = &PTR_DAT_110bad428;
  return;
}



/* Entry: 100058830; end: 10005931f;  */

void FUN_100058830(void)

{
  ulong uVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  ulong uVar13;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined **appuStack_218 [3];
  undefined ***pppuStack_200;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ea8d8 = 0;
  uRam00000001137ea8e0 = 0;
  func_0x000107c610b4(&lStack_230,&PTR_s_b_110bacc50,0x1b0);
  FUN_100057cfc(0x1137ea8e8,&lStack_230,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ea8e8,0x100000000);
  func_0x000107c610b4(&lStack_230,&PTR_DAT_110bace00,0x1c0);
  FUN_1000584bc(0x1137ea910,&lStack_230,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ea910,0x100000000);
  lStack_228 = 0;
  lStack_230 = 0x382d667475;
  lStack_220 = 0x500000000000000;
  appuStack_218[0] = &PTR_DAT_110bad428;
  uVar11 = 0x1137ea938;
  uRam00000001137ea940 = 0;
  lRam00000001137ea938 = 0;
  lRam00000001137ea950 = 0;
  plRam00000001137ea948 = (long *)0x0;
  fRam00000001137ea958 = 1.0;
  pppuStack_200 = appuStack_218;
  FUN_1000554d8(0x1137ea938,&lStack_230);
  uVar9 = uRam00000001137ea940;
  uVar12 = 0x1137ea000;
  if (uRam00000001137ea940 != 0) {
    uVar13 = uRam00000001137ea940 - 1;
    if ((uRam00000001137ea940 & uVar13) == 0) {
      unaff_x26 = uVar13 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uRam00000001137ea940 <= uVar11) {
        uVar7 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar7 = uVar11 / uRam00000001137ea940;
        }
        unaff_x26 = uVar11 - uVar7 * uRam00000001137ea940;
      }
    }
    plVar6 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar11) {
          uVar7 = 0;
          FUN_1001a6960(0x1137ea938,plVar6 + 2,&lStack_230);
          if ((uVar7 & 1) != 0) goto LAB_100058b88;
        }
        else {
          if ((uVar9 & uVar13) == 0) {
            uVar7 = uVar7 & uVar13;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x26) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = (long *)0x48;
  func_0x000107c60e20();
  uStack_240 = 0x1137ea938;
  uStack_238 = 0;
  *plVar6 = 0;
  plVar6[1] = uVar11;
  plStack_248 = plVar6;
  if (lStack_220 < 0) {
    FUN_100033dac(plVar6 + 2,lStack_230,lStack_228);
  }
  else {
    plVar6[3] = lStack_228;
    plVar6[2] = lStack_230;
    plVar6[4] = lStack_220;
  }
  pppuVar2 = pppuStack_200;
  if (pppuStack_200 == (undefined ***)0x0) {
LAB_100058a54:
    plVar6[8] = (long)pppuVar2;
  }
  else {
    if (pppuStack_200 != appuStack_218) {
      (*(code *)(*pppuStack_200)[2])();
      goto LAB_100058a54;
    }
    plVar6[8] = (long)(plVar6 + 5);
    (*(code *)(*pppuStack_200)[3])();
  }
  uStack_238 = CONCAT71(uStack_238._1_7_,1);
  if ((uVar9 == 0) || (fRam00000001137ea958 * (float)uVar9 < (float)(lRam00000001137ea950 + 1))) {
    uVar13 = 1;
    if (2 < uVar9) {
      uVar13 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar13 = uVar13 | uVar9 << 1;
    uVar9 = (ulong)((float)(lRam00000001137ea950 + 1) / fRam00000001137ea958);
    if (uVar13 <= uVar9) {
      uVar13 = uVar9;
    }
    FUN_100059330(uVar13);
    uVar9 = uRam00000001137ea940;
    if ((uRam00000001137ea940 & uRam00000001137ea940 - 1) == 0) {
      unaff_x26 = uRam00000001137ea940 - 1 & uVar11;
    }
    else {
      unaff_x26 = uVar11;
      if (uRam00000001137ea940 <= uVar11) {
        uVar13 = 0;
        if (uRam00000001137ea940 != 0) {
          uVar13 = uVar11 / uRam00000001137ea940;
        }
        unaff_x26 = uVar11 - uVar13 * uRam00000001137ea940;
      }
    }
  }
  lVar8 = lRam00000001137ea938;
  plVar10 = *(long **)(lRam00000001137ea938 + unaff_x26 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar6 = (long)plRam00000001137ea948;
    plRam00000001137ea948 = plVar6;
    *(undefined8 *)(lVar8 + unaff_x26 * 8) = 0x1137ea948;
    if (*plVar6 != 0) {
      uVar11 = *(ulong *)(*plVar6 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar11 = uVar11 & uVar9 - 1;
      }
      else if (uVar9 <= uVar11) {
        uVar13 = 0;
        if (uVar9 != 0) {
          uVar13 = uVar11 / uVar9;
        }
        uVar11 = uVar11 - uVar13 * uVar9;
      }
      *(long **)(lRam00000001137ea938 + uVar11 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
  }
  lRam00000001137ea950 = lRam00000001137ea950 + 1;
LAB_100058b88:
  if (pppuStack_200 == appuStack_218) {
    lVar8 = 0x20;
LAB_100058ba4:
    (**(code **)((long)*pppuStack_200 + lVar8))();
  }
  else if (pppuStack_200 != (undefined ***)0x0) {
    lVar8 = 0x28;
    goto LAB_100058ba4;
  }
  if (lStack_220 < 0) {
    func_0x000107c60e14(lStack_230);
  }
  func_0x000107c60e34(&UNK_10a1c3d00,0x1137ea938,0x100000000);
  lStack_228 = 0;
  lStack_230 = 0x382d667475;
  lStack_220 = 0x500000000000000;
  appuStack_218[0] = &PTR_DAT_110bad4b8;
  uVar11 = 0x1137ea960;
  uRam00000001137ea968 = 0;
  lRam00000001137ea960 = 0;
  lRam00000001137ea978 = 0;
  plRam00000001137ea970 = (long *)0x0;
  fRam00000001137ea980 = 1.0;
  pppuStack_200 = appuStack_218;
  FUN_1000554d8(0x1137ea960,&lStack_230);
  uVar9 = uRam00000001137ea968;
  if (uRam00000001137ea968 != 0) {
    uVar13 = uRam00000001137ea968 - 1;
    if ((uRam00000001137ea968 & uVar13) == 0) {
      uVar12 = uVar13 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uRam00000001137ea968 <= uVar11) {
        uVar12 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar12 = uVar11 / uRam00000001137ea968;
        }
        uVar12 = uVar11 - uVar12 * uRam00000001137ea968;
      }
    }
    plVar6 = *(long **)(lRam00000001137ea960 + uVar12 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar11) {
          uVar7 = 0;
          FUN_1001a6960(0x1137ea960,plVar6 + 2,&lStack_230);
          if ((uVar7 & 1) != 0) goto LAB_100058e5c;
        }
        else {
          if ((uVar9 & uVar13) == 0) {
            uVar7 = uVar7 & uVar13;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != uVar12) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  plVar6 = (long *)0x48;
  func_0x000107c60e20();
  uStack_240 = 0x1137ea960;
  uStack_238 = 0;
  *plVar6 = 0;
  plVar6[1] = uVar11;
  plStack_248 = plVar6;
  if (lStack_220 < 0) {
    FUN_100033dac(plVar6 + 2,lStack_230,lStack_228);
  }
  else {
    plVar6[3] = lStack_228;
    plVar6[2] = lStack_230;
    plVar6[4] = lStack_220;
  }
  pppuVar2 = pppuStack_200;
  if (pppuStack_200 == (undefined ***)0x0) {
LAB_100058d28:
    plVar6[8] = (long)pppuVar2;
  }
  else {
    if (pppuStack_200 != appuStack_218) {
      (*(code *)(*pppuStack_200)[2])();
      goto LAB_100058d28;
    }
    plVar6[8] = (long)(plVar6 + 5);
    (*(code *)(*pppuStack_200)[3])();
  }
  uStack_238 = CONCAT71(uStack_238._1_7_,1);
  if ((uVar9 == 0) || (fRam00000001137ea980 * (float)uVar9 < (float)(lRam00000001137ea978 + 1))) {
    uVar12 = 1;
    if (2 < uVar9) {
      uVar12 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar12 = uVar12 | uVar9 << 1;
    uVar9 = (ulong)((float)(lRam00000001137ea978 + 1) / fRam00000001137ea980);
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    FUN_10005952c(uVar12);
    uVar9 = uRam00000001137ea968;
    if ((uRam00000001137ea968 & uRam00000001137ea968 - 1) == 0) {
      uVar12 = uRam00000001137ea968 - 1 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uRam00000001137ea968 <= uVar11) {
        uVar12 = 0;
        if (uRam00000001137ea968 != 0) {
          uVar12 = uVar11 / uRam00000001137ea968;
        }
        uVar12 = uVar11 - uVar12 * uRam00000001137ea968;
      }
    }
  }
  lVar8 = lRam00000001137ea960;
  plVar10 = *(long **)(lRam00000001137ea960 + uVar12 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar6 = (long)plRam00000001137ea970;
    plRam00000001137ea970 = plVar6;
    *(undefined8 *)(lVar8 + uVar12 * 8) = 0x1137ea970;
    if (*plVar6 != 0) {
      uVar12 = *(ulong *)(*plVar6 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar12 = uVar12 & uVar9 - 1;
      }
      else if (uVar9 <= uVar12) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar12 / uVar9;
        }
        uVar12 = uVar12 - uVar11 * uVar9;
      }
      *(long **)(lRam00000001137ea960 + uVar12 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar10;
    *plVar10 = (long)plVar6;
  }
  lRam00000001137ea978 = lRam00000001137ea978 + 1;
LAB_100058e5c:
  if (pppuStack_200 == appuStack_218) {
    lVar8 = 0x20;
  }
  else {
    if (pppuStack_200 == (undefined ***)0x0) goto LAB_100058e84;
    lVar8 = 0x28;
  }
  (**(code **)((long)*pppuStack_200 + lVar8))();
LAB_100058e84:
  if (lStack_220 < 0) {
    func_0x000107c60e14(lStack_230);
  }
  func_0x000107c60e34(&UNK_10a1c4370,0x1137ea960,0x100000000);
  FUN_10005375c(&lStack_230,&UNK_10f643788);
  uRam00000001137ea988 = 0;
  uRam00000001137ea98c = 0x200000006;
  uRam00000001137ea9a0 = 0;
  uRam00000001137ea998 = 0;
  uRam00000001137ea9b0 = 0;
  uRam00000001137ea9a8 = 0;
  uRam00000001137ea9c0 = 0;
  uRam00000001137ea9b8 = 0;
  uRam00000001137ea9d0 = 0;
  uRam00000001137ea9c8 = 0;
  lRam00000001137ea9e0 = lStack_228;
  lRam00000001137ea9d8 = lStack_230;
  lRam00000001137ea9e8 = lStack_220;
  lStack_230 = 0;
  lStack_228 = 0;
  lStack_220 = 0;
  uRam00000001137ea9f8 = 0;
  uRam00000001137ea9f0 = 0;
  uRam00000001137eaa08 = 0;
  uRam00000001137eaa00 = 0;
  uRam00000001137eaa10 = 0;
  uRam00000001137eaa18 = 0x32aaaba7;
  uRam00000001137eaa28 = 0;
  uRam00000001137eaa20 = 0;
  uRam00000001137eaa38 = 0;
  uRam00000001137eaa30 = 0;
  uRam00000001137eaa48 = 0;
  uRam00000001137eaa40 = 0;
  uRam00000001137eaa50 = 0;
  func_0x000107c60e34(&UNK_10a1c5888,0x1137ea988,0x100000000);
  FUN_10005375c(&lStack_230,&UNK_10f642cb1);
  uRam00000001137eaa5c = 0x200000000;
  uRam00000001137eaa70 = 0;
  uRam00000001137eaa68 = 0;
  uRam00000001137eaa80 = 0;
  uRam00000001137eaa78 = 0;
  uRam00000001137eaa90 = 0;
  uRam00000001137eaa88 = 0;
  uRam00000001137eaaa0 = 0;
  uRam00000001137eaa98 = 0;
  uRam00000001137eaab0 = lStack_228;
  lRam00000001137eaaa8 = lStack_230;
  uRam00000001137eaab8 = lStack_220;
  uRam00000001137eaac8 = 0;
  uRam00000001137eaac0 = 0;
  uRam00000001137eaad8 = 0;
  uRam00000001137eaad0 = 0;
  uRam00000001137eaae0 = 0;
  uRam00000001137eaae8 = 0x32aaaba7;
  uRam00000001137eaaf8 = 0;
  uRam00000001137eaaf0 = 0;
  uRam00000001137eab08 = 0;
  uRam00000001137eab00 = 0;
  uRam00000001137eab18 = 0;
  uRam00000001137eab10 = 0;
  uRam00000001137eab20 = 0;
  uRam00000001137eaa58 = 1;
  func_0x000107c60e34(&UNK_10a1c58f8,0x1137eaa58,0x100000000);
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113834ea0 = 0x8000000000000020;
  uRam0000000113834e98 = 0x1e;
  puRam0000000113834e90 = puVar3;
  puVar3[1] = 0x525255434e4f435f;
  *puVar3 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar3 + 0x16) = 0x545049524353444e;
  *(undefined8 *)((long)puVar3 + 0xe) = 0x49425f544e455252;
  *(undefined1 *)((long)puVar3 + 0x1e) = 0;
  uRam0000000113834ea8 = 0;
  puRam0000000113834eb0 = &UNK_10a09e854;
  ppuRam0000000113834eb8 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x113834e90,0x100000000);
  uRam0000000113834ef0 = 0;
  uRam0000000113834ef8 = 0;
  uRam0000000113834f00 = 0;
  uRam0000000113834f1f = 0x15;
  uRam0000000113834f10 = 0x465f47535f;
  uRam0000000113834f08 = 0x45524f43534e454c;
  uRam0000000113834f15 = 0x4f5042;
  uRam0000000113834f18 = 0x31565f4c4f;
  uRam0000000113834f1d = 0;
  uRam0000000113834f20 = 0;
  uRam0000000113834f28 = 0;
  uRam0000000113834f30 = 0;
  uRam0000000113834f38 = 0;
  puRam0000000113834f40 = &UNK_10a1d5bec;
  ppuRam0000000113834f48 = &PTR_DAT_110badb28;
  puRam0000000113834f80 = &UNK_10a1d5bd0;
  ppuRam0000000113834f88 = &PTR_DAT_110badb10;
  func_0x000107c60e34(&UNK_10a1c5e48,0x113834ef0,0x100000000);
  puVar3 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puRam0000000113834fc0 = puVar3;
  *(undefined2 *)(puVar3 + 6) = 0x31;
  uRam0000000113834fd0 = 0x8000000000000038;
  uRam0000000113834fc8 = 0x31;
  puVar3[1] = 0x4149524554414d5f;
  *puVar3 = 0x45524f43534e454c;
  puVar3[3] = 0x505543434f5f474e;
  puVar3[2] = 0x4948435441425f4c;
  puVar3[5] = 0x565f5058455f4f49;
  puVar3[4] = 0x5441525f59434e41;
  uRam0000000113834fd8 = 0x3ecccccd;
  uRam0000000113834fdc = 0;
  uRam0000000113834fe0 = 0;
  uRam0000000113834fe4 = 0;
  puRam0000000113834fe8 = &UNK_10a1d5d00;
  ppuRam0000000113834ff0 = &PTR_DAT_110badb40;
  func_0x000107c60e34(&UNK_10a1c6038,0x113834fc0,0x100000000);
  uRam0000000113835028 = 0;
  uRam000000011383502c = 0;
  uRam0000000113835030 = 0;
  puVar3 = (undefined8 *)0x30;
  func_0x000107c60e20();
  uRam0000000113835048 = 0x8000000000000030;
  uRam0000000113835040 = 0x2f;
  puRam0000000113835038 = puVar3;
  puVar3[1] = 0x4149524554414d5f;
  *puVar3 = 0x45524f43534e454c;
  puVar3[3] = 0x4c42414e455f474e;
  puVar3[2] = 0x4948435441425f4c;
  *(undefined8 *)((long)puVar3 + 0x27) = 0x31565f5058455f53;
  *(undefined8 *)((long)puVar3 + 0x1f) = 0x455059545f44454c;
  *(undefined1 *)((long)puVar3 + 0x2f) = 0;
  uRam0000000113835050 = 0;
  uRam0000000113835054 = 0;
  uRam0000000113835058 = 0;
  uRam000000011383505c = 0;
  puRam0000000113835060 = &UNK_10a0a027c;
  ppuRam0000000113835068 = &PTR_DAT_110ba0c08;
  puRam00000001138350a0 = &UNK_10a1d5d1c;
  ppuRam00000001138350a8 = &PTR_DAT_110badb58;
  func_0x000107c60e34(&UNK_10a1c6214,0x113835028,0x100000000);
  uRam00000001138350e0 = 0;
  puVar3 = (undefined8 *)0x1138350e8;
  uRam00000001138350e8 = 0;
  uRam00000001138350ec = 0;
  uRam00000001138350f0 = 0;
  puVar4 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113835108 = 0x8000000000000020;
  uRam0000000113835100 = 0x1b;
  puRam00000001138350f8 = puVar4;
  puVar4[1] = 0x574549564552505f;
  *puVar4 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar4 + 0x13) = 0x31565f4552555458;
  *(undefined8 *)((long)puVar4 + 0xb) = 0x45545f5745495645;
  *(undefined1 *)((long)puVar4 + 0x1b) = 0;
  uRam0000000113835110 = 0;
  uRam0000000113835114 = 0;
  uRam0000000113835118 = 0;
  uRam000000011383511c = 0;
  puRam0000000113835120 = &UNK_10a0a027c;
  ppuRam0000000113835128 = &PTR_DAT_110ba0c08;
  puRam0000000113835160 = &UNK_10a1d5d38;
  ppuRam0000000113835168 = &PTR_DAT_110badb70;
  puVar5 = &UNK_10a1c6400;
  func_0x000107c60e34(&UNK_10a1c6400,0x1138350e8,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c2b11c(&plStack_248);
  func_0x000107c2b120(0x1137ea960);
  func_0x000107c2b108(&lStack_230);
  func_0x000107c60bd8(puVar5);
  *puVar3 = &PTR_DAT_110bad428;
  return;
}



/* Entry: 100059320; end: 10005932f;  */

void FUN_100059320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110bad428;
  return;
}



/* Entry: 100059330; end: 100059517;  */

void FUN_100059330(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 & param_1 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar5 = uRam00000001137ea940;
  if (uRam00000001137ea940 > param_1 || param_1 == uRam00000001137ea940) {
    if (uRam00000001137ea940 <= param_1) {
      return;
    }
    uVar6 = (ulong)((float)uRam00000001137ea950 / fRam00000001137ea958);
    if ((uRam00000001137ea940 < 3) || ((uRam00000001137ea940 & uRam00000001137ea940 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    lVar4 = lRam00000001137ea938;
    if (param_1 <= uVar6) {
      param_1 = uVar6;
    }
    if (uVar5 <= param_1) {
      return;
    }
    if (param_1 == 0) {
      lRam00000001137ea938 = 0;
      if (lVar4 != 0) {
        func_0x000107c60e14();
      }
      uRam00000001137ea940 = 0;
      return;
    }
  }
  if (param_1 >> 0x3d == 0) {
    lVar4 = param_1 << 3;
    func_0x000107c60e20();
    bVar1 = lRam00000001137ea938 != 0;
    lRam00000001137ea938 = lVar4;
    if (bVar1) {
      func_0x000107c60e14();
    }
    uVar5 = 0;
    uRam00000001137ea940 = param_1;
    do {
      *(undefined8 *)(lRam00000001137ea938 + uVar5 * 8) = 0;
      plVar3 = plRam00000001137ea948;
      uVar5 = uVar5 + 1;
    } while (param_1 != uVar5);
    if (plRam00000001137ea948 != (long *)0x0) {
      uVar5 = plRam00000001137ea948[1];
      uVar6 = param_1 - 1;
      if ((param_1 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_1 <= uVar5) {
        uVar9 = 0;
        if (param_1 != 0) {
          uVar9 = uVar5 / param_1;
        }
        uVar5 = uVar5 - uVar9 * param_1;
      }
      *(undefined8 *)(lRam00000001137ea938 + uVar5 * 8) = 0x1137ea948;
      plVar7 = (long *)*plVar3;
      lVar4 = lRam00000001137ea938;
      while (lRam00000001137ea938 = lVar4, plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_1 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (param_1 <= uVar9) {
          uVar2 = 0;
          if (param_1 != 0) {
            uVar2 = uVar9 / param_1;
          }
          uVar9 = uVar9 - uVar2 * param_1;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar5) {
          if (*(long *)(lVar4 + uVar9 * 8) == 0) {
            *(long **)(lVar4 + uVar9 * 8) = plVar3;
            uVar5 = uVar9;
          }
          else {
            *plVar3 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar4 + uVar9 * 8);
            **(long **)(lVar4 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar3;
          }
        }
        lVar4 = lRam00000001137ea938;
        plVar3 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000107c2b044();
  return;
}



/* Entry: 100059518; end: 10005952b;  */

void FUN_100059518(void)

{
  return;
}



/* Entry: 10005952c; end: 100059713;  */

void FUN_10005952c(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 & param_1 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar5 = uRam00000001137ea968;
  if (uRam00000001137ea968 > param_1 || param_1 == uRam00000001137ea968) {
    if (uRam00000001137ea968 <= param_1) {
      return;
    }
    uVar6 = (ulong)((float)uRam00000001137ea978 / fRam00000001137ea980);
    if ((uRam00000001137ea968 < 3) || ((uRam00000001137ea968 & uRam00000001137ea968 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    lVar4 = lRam00000001137ea960;
    if (param_1 <= uVar6) {
      param_1 = uVar6;
    }
    if (uVar5 <= param_1) {
      return;
    }
    if (param_1 == 0) {
      lRam00000001137ea960 = 0;
      if (lVar4 != 0) {
        func_0x000107c60e14();
      }
      uRam00000001137ea968 = 0;
      return;
    }
  }
  if (param_1 >> 0x3d == 0) {
    lVar4 = param_1 << 3;
    func_0x000107c60e20();
    bVar1 = lRam00000001137ea960 != 0;
    lRam00000001137ea960 = lVar4;
    if (bVar1) {
      func_0x000107c60e14();
    }
    uVar5 = 0;
    uRam00000001137ea968 = param_1;
    do {
      *(undefined8 *)(lRam00000001137ea960 + uVar5 * 8) = 0;
      plVar3 = plRam00000001137ea970;
      uVar5 = uVar5 + 1;
    } while (param_1 != uVar5);
    if (plRam00000001137ea970 != (long *)0x0) {
      uVar5 = plRam00000001137ea970[1];
      uVar6 = param_1 - 1;
      if ((param_1 & uVar6) == 0) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_1 <= uVar5) {
        uVar9 = 0;
        if (param_1 != 0) {
          uVar9 = uVar5 / param_1;
        }
        uVar5 = uVar5 - uVar9 * param_1;
      }
      *(undefined8 *)(lRam00000001137ea960 + uVar5 * 8) = 0x1137ea970;
      plVar7 = (long *)*plVar3;
      lVar4 = lRam00000001137ea960;
      while (lRam00000001137ea960 = lVar4, plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        if ((param_1 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (param_1 <= uVar9) {
          uVar2 = 0;
          if (param_1 != 0) {
            uVar2 = uVar9 / param_1;
          }
          uVar9 = uVar9 - uVar2 * param_1;
        }
        plVar8 = plVar7;
        if (uVar9 != uVar5) {
          if (*(long *)(lVar4 + uVar9 * 8) == 0) {
            *(long **)(lVar4 + uVar9 * 8) = plVar3;
            uVar5 = uVar9;
          }
          else {
            *plVar3 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar4 + uVar9 * 8);
            **(long **)(lVar4 + uVar9 * 8) = (long)plVar7;
            plVar8 = plVar3;
          }
        }
        lVar4 = lRam00000001137ea960;
        plVar3 = plVar8;
        plVar7 = (long *)*plVar8;
      }
    }
    return;
  }
  func_0x000107c2b044();
  return;
}



/* Entry: 100059714; end: 100059717;  */

void FUN_100059714(void)

{
  return;
}



/* Entry: 100059718; end: 10005981f;  */

void FUN_100059718(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_1e8 [448];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eab38 = 0;
  uRam00000001137eab40 = 0;
  func_0x000107c610b4(auStack_1e8,&PTR_s_b_110baedb0,0x1b0);
  FUN_100057cfc(0x1137eab78,auStack_1e8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eab78,0x100000000);
  func_0x000107c610b4(auStack_1e8,&PTR_DAT_110baef60,0x1c0);
  FUN_1000584bc(0x1137eaba0,auStack_1e8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eaba0,0x100000000);
  uRam00000001138351b0 = 0;
  uRam00000001138351a8 = 0;
  uRam00000001138351a0 = 0x1138351a8;
  uRam00000001138351c0 = 0;
  uRam00000001138351c8 = 0;
  uRam00000001138351b8 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  if ((bRam00000001132ffc88 & 1) == 0) {
    iVar1 = 0x132ffc88;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x30;
      func_0x000107c60e20();
      uRam00000001132ffc38 = 0x8000000000000030;
      uRam00000001132ffc30 = 0x2c;
      puRam00000001132ffc28 = puVar2;
      puVar2[1] = 0x434948504152475f;
      *puVar2 = 0x45524f43534e454c;
      puVar2[3] = 0x525f595a414c5f54;
      puVar2[2] = 0x5845544e4f435f53;
      *(undefined8 *)((long)puVar2 + 0x24) = 0x54494e495f454352;
      *(undefined8 *)((long)puVar2 + 0x1c) = 0x554f5345525f595a;
      *(undefined1 *)((long)puVar2 + 0x2c) = 0;
      uRam00000001132ffc40 = 0;
      puRam00000001132ffc48 = &UNK_10a09e854;
      ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
      func_0x000107c60e34(&UNK_10a08e670,0x1132ffc28,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
      return;
    }
  }
  return;
}



/* Entry: 100059820; end: 1000598eb;  */

void FUN_100059820(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001132ffc88 & 1) == 0) {
    iVar1 = 0x132ffc88;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x30;
      func_0x000107c60e20();
      uRam00000001132ffc38 = 0x8000000000000030;
      uRam00000001132ffc30 = 0x2c;
      puRam00000001132ffc28 = puVar2;
      puVar2[1] = 0x434948504152475f;
      *puVar2 = 0x45524f43534e454c;
      puVar2[3] = 0x525f595a414c5f54;
      puVar2[2] = 0x5845544e4f435f53;
      *(undefined8 *)((long)puVar2 + 0x24) = 0x54494e495f454352;
      *(undefined8 *)((long)puVar2 + 0x1c) = 0x554f5345525f595a;
      *(undefined1 *)((long)puVar2 + 0x2c) = 0;
      uRam00000001132ffc40 = 0;
      puRam00000001132ffc48 = &UNK_10a09e854;
      ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
      func_0x000107c60e34(&UNK_10a08e670,0x1132ffc28,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
      return;
    }
  }
  return;
}



/* Entry: 1000598ec; end: 1000599b7;  */

void FUN_1000598ec(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000113300ba0 & 1) == 0) {
    iVar1 = 0x13300ba0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x28;
      func_0x000107c60e20();
      uRam0000000113300b50 = 0x8000000000000028;
      uRam0000000113300b48 = 0x22;
      puRam0000000113300b40 = puVar2;
      *(undefined2 *)(puVar2 + 4) = 0x4445;
      puVar2[1] = 0x49444e495f454341;
      *puVar2 = 0x465f454c42415453;
      puVar2[3] = 0x4c42414e455f5359;
      puVar2[2] = 0x41574c415f534543;
      *(undefined1 *)((long)puVar2 + 0x22) = 0;
      uRam0000000113300b58 = 0;
      puRam0000000113300b60 = &UNK_10a09e854;
      ppuRam0000000113300b68 = &PTR_DAT_110ba0fe0;
      func_0x000107c60e34(&UNK_10a08e670,0x113300b40,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113300ba0);
      return;
    }
  }
  return;
}



/* Entry: 1000599b8; end: 100059a7f;  */

void FUN_1000599b8(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001137eabe8 & 1) == 0) {
    iVar1 = 0x137eabe8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x30;
      func_0x000107c60e20();
      uRam00000001137eac28 = 0x8000000000000030;
      uRam00000001137eac20 = 0x29;
      puRam00000001137eac18 = puVar2;
      puVar2[1] = 0x434e45465f47535f;
      *puVar2 = 0x45524f43534e454c;
      puVar2[3] = 0x494f52444e415f44;
      puVar2[2] = 0x454c42414e455f45;
      *(undefined8 *)((long)puVar2 + 0x21) = 0x455255545845545f;
      *(undefined8 *)((long)puVar2 + 0x19) = 0x44494f52444e415f;
      *(undefined1 *)((long)puVar2 + 0x29) = 0;
      uRam00000001137eac30 = 0;
      puRam00000001137eac38 = &UNK_10a09e854;
      ppuRam00000001137eac40 = &PTR_DAT_110ba0fe0;
      func_0x000107c60e34(&UNK_10a08e670,0x1137eac18,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1137eabe8);
      return;
    }
  }
  return;
}



/* Entry: 100059a80; end: 100059bc3;  */

undefined8 *
FUN_100059a80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined **param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined **appuStack_100 [7];
  long lStack_c8;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  char cStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  long lStack_28;
  
  puVar1 = (undefined8 *)&uStack_80;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113300cb0 & 1) == 0) {
    param_1 = (undefined8 *)0x113300cb0;
    func_0x000107c60e48();
    if ((int)param_1 != 0) {
      cStack_69 = '\x01';
      uStack_80 = 0x30;
      puStack_68 = &UNK_10a234e24;
      ppuStack_60 = &PTR_DAT_110bb5650;
      puStack_58 = &UNK_10a219574;
      param_5 = &puStack_68;
      FUN_100059bc4(0x113300ba8,&UNK_10f646716,0x28);
      (*(code *)*ppuStack_60)(&ppuStack_60);
      param_4 = puVar1;
      if (cStack_69 < '\0') {
        func_0x000107c60e14(CONCAT62(uStack_7e,uStack_80));
        param_4 = puVar1;
      }
      param_2 = 0x113300ba8;
      param_3 = 0x100000000;
      func_0x000107c60e34(&UNK_10a2196fc,0x113300ba8,0x100000000);
      param_1 = (undefined8 *)0x113300cb0;
      func_0x000107c60e4c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (cStack_69 < '\0') {
    func_0x000107c60e14(CONCAT62(uStack_7e,uStack_80));
  }
  func_0x000107c60e44(0x113300cb0);
  func_0x000107c60bd8();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    FUN_100033dac(&uStack_120,*param_4,param_4[1]);
  }
  else {
    uStack_118 = param_4[1];
    uStack_120 = *param_4;
    lStack_110 = param_4[2];
  }
  puStack_108 = &UNK_10a080f80;
  appuStack_100[0] = &PTR_DAT_110b9f408;
  FUN_100053ca0(param_1 + 6,param_2,param_3,&uStack_120,&puStack_108);
  (*(code *)*appuStack_100[0])(appuStack_100);
  if (lStack_110 < 0) {
    func_0x000107c60e14(uStack_120);
  }
  param_1[0x19] = *param_5;
  param_5 = param_5 + 1;
  puVar1 = param_1 + 0x1a;
  (**(code **)(*param_5 + 0x10))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return param_1;
  }
  func_0x000107c60e78();
  if ((*(char *)(param_1 + 5) == '\x01') && (*(char *)((long)param_1 + 0x27) < '\0')) {
    func_0x000107c60e14(param_1[2]);
  }
  func_0x000107c60bd8();
  *puVar1 = &PTR_DAT_110bb5650;
  puVar1[1] = param_5[1];
  return puVar1;
}



/* Entry: 100059bc4; end: 100059d23;  */

undefined8 *
FUN_100059bc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined **appuStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    FUN_100033dac(&uStack_a0,*param_4,param_4[1]);
  }
  else {
    uStack_98 = param_4[1];
    uStack_a0 = *param_4;
    lStack_90 = param_4[2];
  }
  puStack_88 = &UNK_10a080f80;
  appuStack_80[0] = &PTR_DAT_110b9f408;
  FUN_100053ca0(param_1 + 6,param_2,param_3,&uStack_a0,&puStack_88);
  (*(code *)*appuStack_80[0])(appuStack_80);
  if (lStack_90 < 0) {
    func_0x000107c60e14(uStack_a0);
  }
  param_1[0x19] = *param_5;
  plVar2 = param_5 + 1;
  puVar1 = param_1 + 0x1a;
  (**(code **)(*plVar2 + 0x10))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  func_0x000107c60e78();
  if ((*(char *)(param_1 + 5) == '\x01') && (*(char *)((long)param_1 + 0x27) < '\0')) {
    func_0x000107c60e14(param_1[2]);
  }
  func_0x000107c60bd8();
  *puVar1 = &PTR_DAT_110bb5650;
  puVar1[1] = plVar2[1];
  return puVar1;
}



/* Entry: 100059d24; end: 100059d3f;  */

void FUN_100059d24(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_110bb5650;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  return;
}



/* Entry: 100059d40; end: 10005a043;  */

void FUN_100059d40(void)

{
  undefined8 *puVar1;
  undefined2 uStack_43;
  undefined1 uStack_41;
  
  uRam00000001137eabd8 = 0;
  uRam00000001137eabe0 = 0;
  uStack_43 = 0x201;
  uStack_41 = 4;
  uRam00000001137eac08 = 0;
  uRam00000001137eac10 = 0;
  uRam00000001137eac00 = 0;
  FUN_100053640(0x1137eac00,&uStack_43,&stack0xffffffffffffffc0,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137eac00,0x100000000);
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  uRam00000001138351e0 = 0x8000000000000038;
  uRam00000001138351d8 = 0x32;
  puRam00000001138351d0 = puVar1;
  *(undefined2 *)(puVar1 + 6) = 0x4445;
  puVar1[1] = 0x455341454c45525f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4e4f5f52454b4341;
  puVar1[2] = 0x52545f454341465f;
  puVar1[5] = 0x5241454c435f5345;
  puVar1[4] = 0x4352554f5345525f;
  *(undefined1 *)((long)puVar1 + 0x32) = 0;
  uRam00000001138351e8 = 0;
  puRam00000001138351f0 = &UNK_10a09e854;
  ppuRam00000001138351f8 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x1138351d0,0x100000000);
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  uRam00000001137eac88 = 0x8000000000000038;
  uRam00000001137eac80 = 0x35;
  puRam00000001137eac78 = puVar1;
  puVar1[1] = 0x455341454c45525f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x454c435f4e4f5f53;
  puVar1[2] = 0x52454b434152545f;
  puVar1[5] = 0x43454646455f5845;
  puVar1[4] = 0x4c504d4f435f5241;
  *(undefined8 *)((long)puVar1 + 0x2d) = 0x31565f5354434546;
  *(undefined1 *)((long)puVar1 + 0x35) = 0;
  uRam00000001137eac90 = 0;
  puRam00000001137eac98 = &UNK_10a09e854;
  ppuRam00000001137eaca0 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x1137eac78,0x100000000);
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  uRam0000000113835240 = 0x8000000000000028;
  uRam0000000113835238 = 0x21;
  puRam0000000113835230 = puVar1;
  *(undefined2 *)(puVar1 + 4) = 0x32;
  puVar1[1] = 0x494d5f50414e535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x5f45534148505f45;
  puVar1[2] = 0x4c49424f4d5f444e;
  uRam0000000113835248 = 0;
  puRam0000000113835250 = &UNK_10a09e854;
  ppuRam0000000113835258 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x113835230,0x100000000);
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  uRam00000001137eace8 = 0x8000000000000030;
  uRam00000001137eace0 = 0x2a;
  puRam00000001137eacd8 = puVar1;
  puVar1[1] = 0x5f44414f4c4e555f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x4f4d454d5f574f4c;
  puVar1[2] = 0x5f4e4f5f534e454c;
  *(undefined8 *)((long)puVar1 + 0x22) = 0x44454c42414e455f;
  *(undefined8 *)((long)puVar1 + 0x1a) = 0x59524f4d454d5f57;
  *(undefined1 *)((long)puVar1 + 0x2a) = 0;
  uRam00000001137eacf0 = 0;
  puRam00000001137eacf8 = &UNK_10a234e2c;
  ppuRam00000001137ead00 = &PTR_DAT_110bb44a0;
  uRam00000001137ead38 = 0;
  uRam00000001137ead3a = 0;
  uRam00000001137ead40 = 0;
  uRam00000001137ead48 = 0;
  puRam00000001137ead50 = &UNK_10a09f9d0;
  ppuRam00000001137ead58 = &PTR_DAT_110ae9180;
  puRam00000001137ead90 = &UNK_10a09f9e0;
  ppuRam00000001137ead98 = &PTR_DAT_110950c70;
  func_0x000107c60e34(&UNK_10a219904,0x1137eacd8,0x100000000);
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puRam0000000113835290 = puVar1;
  *(undefined2 *)(puVar1 + 6) = 0x474e;
  uRam00000001138352a0 = 0x8000000000000038;
  uRam0000000113835298 = 0x32;
  puVar1[1] = 0x434948504152475f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x5245464655425f44;
  puVar1[2] = 0x4e414d4d4f435f53;
  puVar1[5] = 0x494c444e41485f45;
  puVar1[4] = 0x4352554f5345525f;
  *(undefined1 *)((long)puVar1 + 0x32) = 0;
  uRam00000001138352a8 = 0;
  uRam00000001138352ac = 0;
  uRam00000001138352b0 = 0;
  uRam00000001138352b4 = 0;
  puRam00000001138352b8 = &UNK_10a0a027c;
  ppuRam00000001138352c0 = &PTR_DAT_110ba0c08;
  func_0x000107c60e34(&UNK_10a08fdec,0x113835290,0x100000000);
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  uRam0000000113835308 = 0x8000000000000030;
  uRam0000000113835300 = 0x2c;
  puRam00000001138352f8 = puVar1;
  puVar1[1] = 0x434948504152475f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x424c4c41435f4755;
  puVar1[2] = 0x4245445f4c475f53;
  *(undefined8 *)((long)puVar1 + 0x24) = 0x44454c42414e455f;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0x534b4341424c4c41;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
  uRam0000000113835310 = 0;
  puRam0000000113835318 = &UNK_10a09e854;
  ppuRam0000000113835320 = &PTR_DAT_110ba0fe0;
  func_0x000107c60e34(&UNK_10a08e670,0x1138352f8,0x100000000);
  uRam00000001137eabf8 = 0x41a0000041700000;
  uRam00000001137eabf0 = 0xc1a00000c1700000;
  return;
}



/* Entry: 10005a044; end: 10005a10f;  */

void FUN_10005a044(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000113300ba0 & 1) == 0) {
    iVar1 = 0x13300ba0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x28;
      func_0x000107c60e20();
      uRam0000000113300b50 = 0x8000000000000028;
      uRam0000000113300b48 = 0x22;
      puRam0000000113300b40 = puVar2;
      *(undefined2 *)(puVar2 + 4) = 0x4445;
      puVar2[1] = 0x49444e495f454341;
      *puVar2 = 0x465f454c42415453;
      puVar2[3] = 0x4c42414e455f5359;
      puVar2[2] = 0x41574c415f534543;
      *(undefined1 *)((long)puVar2 + 0x22) = 0;
      uRam0000000113300b58 = 0;
      puRam0000000113300b60 = &UNK_10a09e854;
      ppuRam0000000113300b68 = &PTR_DAT_110ba0fe0;
      func_0x000107c60e34(&UNK_10a08e670,0x113300b40,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113300ba0);
      return;
    }
  }
  return;
}



/* Entry: 10005a110; end: 10005a24f;  */

void FUN_10005a110(void)

{
  undefined2 uStack_423;
  undefined1 uStack_421;
  undefined2 *puStack_420;
  undefined8 uStack_418;
  undefined1 **ppuStack_410;
  code *pcStack_408;
  undefined2 uStack_3f8;
  undefined1 uStack_3f6;
  undefined1 auStack_3f5 [445];
  long lStack_238;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined2 uStack_1f8;
  undefined1 uStack_1f6;
  undefined1 auStack_1f5 [445];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eadd8 = 0;
  uRam00000001137eade0 = 0;
  uStack_1f8 = 0x201;
  uStack_1f6 = 4;
  uRam00000001137eae40 = 0;
  uRam00000001137eae48 = 0;
  uRam00000001137eae38 = 0;
  FUN_100053640(0x1137eae38,&uStack_1f8,auStack_1f5,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137eae38,0x100000000);
  func_0x000107c610b4(&uStack_1f8,&PTR_s_b_110bb5e98,0x1b0);
  FUN_100057cfc(0x1137eae68,&uStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eae68,0x100000000);
  func_0x000107c610b4(&uStack_1f8,&PTR_DAT_110bb6048,0x1c0);
  FUN_1000584bc(0x1137eae90,&uStack_1f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eae90,0x100000000);
  uRam00000001137eae58 = 0x4059000000000000;
  uRam00000001137eae50 = 0x4057c3020c49ba5e;
  uRam00000001137eae60 = 0x405b3883126e978d;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  pcStack_208 = FUN_10005a250;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb038 = 0;
  uRam00000001137eb040 = 0;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x000107c610b4(&uStack_3f8,&PTR_s_b_110bd0168,0x1b0);
  FUN_100057cfc(0x1137eb0c8,&uStack_3f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eb0c8,0x100000000);
  func_0x000107c610b4(&uStack_3f8,&PTR_DAT_110bd0318,0x1c0);
  FUN_1000584bc(0x1137eb0f0,&uStack_3f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eb0f0,0x100000000);
  uStack_3f8 = 0x201;
  uStack_3f6 = 4;
  uRam00000001137eb068 = 0;
  uRam00000001137eb070 = 0;
  uRam00000001137eb060 = 0;
  FUN_100053640(0x1137eb060,&uStack_3f8,auStack_3f5,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137eb060,0x100000000);
  uRam00000001137eb058 = 0x41a0000041700000;
  uRam00000001137eb050 = 0xc1a00000c1700000;
  uRam00000001137eb088 = 0x4059000000000000;
  uRam00000001137eb080 = 0x4057c3020c49ba5e;
  uRam00000001137eb090 = 0x405b3883126e978d;
  uRam00000001137eb0a8 = 0;
  uRam00000001137eb0a0 = 0x3f800000;
  uRam00000001137eb0b8 = 0;
  uRam00000001137eb0b0 = 0x3f800000;
  uRam00000001137eb0c0 = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  uStack_418 = 0x1137eb050;
  pcStack_408 = FUN_10005a3cc;
  uRam00000001137eb158 = 0;
  uRam00000001137eb160 = 0;
  uRam00000001138353c0 = 0;
  uRam00000001138353c8 = 0;
  uRam00000001138353d0 = 0;
  uRam00000001138353d8 = 0;
  uRam00000001138353e8 = 0x41a0000041700000;
  uRam00000001138353e0 = 0xc1a00000c1700000;
  uStack_423 = 0x201;
  uStack_421 = 4;
  uRam00000001137eb178 = 0;
  uRam00000001137eb180 = 0;
  uRam00000001137eb170 = 0;
  puStack_420 = &uStack_3f8;
  ppuStack_410 = &puStack_210;
  FUN_100053640(0x1137eb170,&uStack_423,&puStack_420,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137eb170,0x100000000);
  return;
}



/* Entry: 10005a250; end: 10005a3cb;  */

void FUN_10005a250(void)

{
  undefined2 uStack_223;
  undefined1 uStack_221;
  undefined2 *puStack_220;
  undefined8 uStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined2 uStack_1f8;
  undefined1 uStack_1f6;
  undefined1 auStack_1f5 [445];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb038 = 0;
  uRam00000001137eb040 = 0;
  func_0x000107c610b4(&uStack_1f8,&PTR_s_b_110bd0168,0x1b0);
  FUN_100057cfc(0x1137eb0c8,&uStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eb0c8,0x100000000);
  func_0x000107c610b4(&uStack_1f8,&PTR_DAT_110bd0318,0x1c0);
  FUN_1000584bc(0x1137eb0f0,&uStack_1f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eb0f0,0x100000000);
  uStack_1f8 = 0x201;
  uStack_1f6 = 4;
  uRam00000001137eb068 = 0;
  uRam00000001137eb070 = 0;
  uRam00000001137eb060 = 0;
  FUN_100053640(0x1137eb060,&uStack_1f8,auStack_1f5,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137eb060,0x100000000);
  uRam00000001137eb058 = 0x41a0000041700000;
  uRam00000001137eb050 = 0xc1a00000c1700000;
  uRam00000001137eb088 = 0x4059000000000000;
  uRam00000001137eb080 = 0x4057c3020c49ba5e;
  uRam00000001137eb090 = 0x405b3883126e978d;
  uRam00000001137eb0a8 = 0;
  uRam00000001137eb0a0 = 0x3f800000;
  uRam00000001137eb0b8 = 0;
  uRam00000001137eb0b0 = 0x3f800000;
  uRam00000001137eb0c0 = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  uStack_218 = 0x1137eb050;
  pcStack_208 = FUN_10005a3cc;
  uRam00000001137eb158 = 0;
  uRam00000001137eb160 = 0;
  uRam00000001138353c0 = 0;
  uRam00000001138353c8 = 0;
  uRam00000001138353d0 = 0;
  uRam00000001138353d8 = 0;
  uRam00000001138353e8 = 0x41a0000041700000;
  uRam00000001138353e0 = 0xc1a00000c1700000;
  uStack_223 = 0x201;
  uStack_221 = 4;
  uRam00000001137eb178 = 0;
  uRam00000001137eb180 = 0;
  uRam00000001137eb170 = 0;
  puStack_220 = &uStack_1f8;
  puStack_210 = &stack0xfffffffffffffff0;
  FUN_100053640(0x1137eb170,&uStack_223,&puStack_220,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137eb170,0x100000000);
  return;
}



/* Entry: 10005a3cc; end: 10005a467;  */

void FUN_10005a3cc(void)

{
  undefined2 uStack_23;
  undefined1 uStack_21;
  
  uRam00000001137eb158 = 0;
  uRam00000001137eb160 = 0;
  uRam00000001138353c0 = 0;
  uRam00000001138353c8 = 0;
  uRam00000001138353d0 = 0;
  uRam00000001138353d8 = 0;
  uRam00000001138353e8 = 0x41a0000041700000;
  uRam00000001138353e0 = 0xc1a00000c1700000;
  uStack_23 = 0x201;
  uStack_21 = 4;
  uRam00000001137eb178 = 0;
  uRam00000001137eb180 = 0;
  uRam00000001137eb170 = 0;
  FUN_100053640(0x1137eb170,&uStack_23,&stack0xffffffffffffffe0,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137eb170,0x100000000);
  return;
}



/* Entry: 10005a468; end: 10005a58b;  */

/* WARNING: Removing unreachable block (ram,0x00010005a924) */

void FUN_10005a468(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 auStack_488 [2];
  char cStack_471;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_2a8;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  char cStack_259;
  undefined *puStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  long lStack_218;
  undefined1 auStack_1e8 [448];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb390 = 0;
  uRam00000001137eb398 = 0;
  uRam00000001137eb3a8 = 0x41a0000041700000;
  uRam00000001137eb3a0 = 0xc1a00000c1700000;
  func_0x000107c610b4(auStack_1e8,&PTR_s_b_110bf10d0,0x1b0);
  FUN_100057cfc(0x1137eb3f8,auStack_1e8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eb3f8,0x100000000);
  func_0x000107c610b4(auStack_1e8,&PTR_DAT_110bf1280,0x1c0);
  FUN_1000584bc(0x1137eb420,auStack_1e8,0xe);
  puVar1 = &UNK_10a1595e4;
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eb420,0x100000000);
  uRam00000001137eb3b8 = 0x4059000000000000;
  uRam00000001137eb3b0 = 0x4057c3020c49ba5e;
  uRam00000001137eb3c0 = 0x405b3883126e978d;
  uRam00000001137eb3d8 = 0;
  uRam00000001137eb3d0 = 0x3f800000;
  uRam00000001137eb3e8 = 0;
  uRam00000001137eb3e0 = 0x3f800000;
  uRam00000001137eb3f0 = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113300cb0 & 1) == 0) {
    puVar1 = (undefined *)0x113300cb0;
    func_0x000107c60e48();
    if ((int)puVar1 != 0) {
      cStack_259 = '\x01';
      uStack_270 = 0x30;
      puStack_258 = &UNK_10a234e24;
      ppuStack_250 = &PTR_DAT_110bb5650;
      puStack_248 = &UNK_10a219574;
      FUN_100059bc4(0x113300ba8,&UNK_10f646716,0x28,&uStack_270,&puStack_258);
      (*(code *)*ppuStack_250)(&ppuStack_250);
      if (cStack_259 < '\0') {
        func_0x000107c60e14(CONCAT62(uStack_26e,uStack_270));
      }
      func_0x000107c60e34(&UNK_10a2196fc,0x113300ba8,0x100000000);
      puVar1 = (undefined *)0x113300cb0;
      func_0x000107c60e4c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    func_0x000107c60e78();
    (*(code *)*ppuStack_250)(&ppuStack_250);
    if (cStack_259 < '\0') {
      func_0x000107c60e14(CONCAT62(uStack_26e,uStack_270));
    }
    func_0x000107c60e44(0x113300cb0);
    func_0x000107c60bd8(puVar1);
    lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uRam00000001137eb460 = 0;
    uRam00000001137eb468 = 0;
    func_0x000107c610b4(&uStack_470,&PTR_s_b_110bf6b00,0x1b0);
    FUN_100057cfc(0x1137eb4b8,&uStack_470,0x12);
    func_0x000107c60e34(&UNK_10a1595e0,0x1137eb4b8,0x100000000);
    func_0x000107c610b4(&uStack_470,&PTR_DAT_110bf6cb0,0x1c0);
    FUN_1000584bc(0x1137eb4e0,&uStack_470,0xe);
    func_0x000107c60e34(&UNK_10a1595e4,0x1137eb4e0,0x100000000);
    FUN_10005375c(0x1137eb508,&UNK_10f66429f);
    FUN_10005375c(0x1137eb520,&UNK_10f664953);
    FUN_10005375c(0x1137eb538,&UNK_10f66499e);
    FUN_10005375c(0x1137eb550,&UNK_10f6649de);
    func_0x000107c60ddc(auStack_488,8);
    puVar2 = auStack_488;
    func_0x000107c60c70(puVar2,0,&UNK_10f664a0b,0xb);
    uStack_468 = puVar2[1];
    uStack_470 = *puVar2;
    lStack_460 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    puVar2 = &uStack_470;
    func_0x000107c60c5c(puVar2,&UNK_10f664a17,0x14);
    uRam00000001137eb570 = puVar2[1];
    uRam00000001137eb568 = *puVar2;
    uRam00000001137eb578 = puVar2[2];
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    if (lStack_460 < 0) {
      func_0x000107c60e14(uStack_470);
    }
    if (cStack_471 < '\0') {
      func_0x000107c60e14(auStack_488[0]);
    }
    puVar1 = &UNK_10a598508;
    func_0x000107c60e34(&UNK_10a598508,0x1137eb508,0x100000000);
    uRam00000001137eb488 = 0x41a0000041700000;
    uRam00000001137eb480 = 0xc1a00000c1700000;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a8) {
      func_0x000107c60e78();
      if (lStack_460 < 0) {
        func_0x000107c60e14(uStack_470);
      }
      if (cStack_471 < '\0') {
        func_0x000107c60e14(auStack_488[0]);
      }
      lVar3 = 0x1137eb568;
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0x1137eb508);
      func_0x000107c60bd8(puVar1);
      uRam00000001137eb580 = 0;
      uRam00000001137eb588 = 0;
      FUN_10005375c(0x113835408,&UNK_10f5f9ef0);
      FUN_10005375c(0x1137eb598,&DAT_10f63a6be);
      FUN_10005375c(0x113835420,&UNK_10f667316);
      uRam0000000113835490 = 0;
      uRam0000000113835488 = 0;
      uRam00000001138354a0 = 0;
      uRam0000000113835498 = 0;
      uRam0000000113835470 = 0;
      uRam0000000113835468 = 0;
      uRam0000000113835480 = 0;
      uRam0000000113835478 = 0;
      uRam0000000113835450 = 0;
      uRam0000000113835448 = 0;
      uRam0000000113835460 = 0;
      uRam0000000113835458 = 0;
      uRam0000000113835440 = 0;
      uRam0000000113835438 = 0;
      uRam00000001138354a8 = 0x3f800000;
      return;
    }
    return;
  }
  return;
}



/* Entry: 10005a58c; end: 10005a6cf;  */

/* WARNING: Removing unreachable block (ram,0x00010005a924) */

void FUN_10005a58c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_b8;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  char cStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113300cb0 & 1) == 0) {
    param_1 = 0x113300cb0;
    func_0x000107c60e48();
    if ((int)param_1 != 0) {
      cStack_69 = '\x01';
      uStack_80 = 0x30;
      puStack_68 = &UNK_10a234e24;
      ppuStack_60 = &PTR_DAT_110bb5650;
      puStack_58 = &UNK_10a219574;
      FUN_100059bc4(0x113300ba8,&UNK_10f646716,0x28,&uStack_80,&puStack_68);
      (*(code *)*ppuStack_60)(&ppuStack_60);
      if (cStack_69 < '\0') {
        func_0x000107c60e14(CONCAT62(uStack_7e,uStack_80));
      }
      func_0x000107c60e34(&UNK_10a2196fc,0x113300ba8,0x100000000);
      param_1 = 0x113300cb0;
      func_0x000107c60e4c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    if (cStack_69 < '\0') {
      func_0x000107c60e14(CONCAT62(uStack_7e,uStack_80));
    }
    func_0x000107c60e44(0x113300cb0);
    func_0x000107c60bd8(param_1);
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uRam00000001137eb460 = 0;
    uRam00000001137eb468 = 0;
    func_0x000107c610b4(&uStack_280,&PTR_s_b_110bf6b00,0x1b0);
    FUN_100057cfc(0x1137eb4b8,&uStack_280,0x12);
    func_0x000107c60e34(&UNK_10a1595e0,0x1137eb4b8,0x100000000);
    func_0x000107c610b4(&uStack_280,&PTR_DAT_110bf6cb0,0x1c0);
    FUN_1000584bc(0x1137eb4e0,&uStack_280,0xe);
    func_0x000107c60e34(&UNK_10a1595e4,0x1137eb4e0,0x100000000);
    FUN_10005375c(0x1137eb508,&UNK_10f66429f);
    FUN_10005375c(0x1137eb520,&UNK_10f664953);
    FUN_10005375c(0x1137eb538,&UNK_10f66499e);
    FUN_10005375c(0x1137eb550,&UNK_10f6649de);
    func_0x000107c60ddc(auStack_298,8);
    puVar1 = auStack_298;
    func_0x000107c60c70(puVar1,0,&UNK_10f664a0b,0xb);
    uStack_278 = puVar1[1];
    uStack_280 = *puVar1;
    lStack_270 = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1 = &uStack_280;
    func_0x000107c60c5c(puVar1,&UNK_10f664a17,0x14);
    uRam00000001137eb570 = puVar1[1];
    uRam00000001137eb568 = *puVar1;
    uRam00000001137eb578 = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    if (lStack_270 < 0) {
      func_0x000107c60e14(uStack_280);
    }
    if (cStack_281 < '\0') {
      func_0x000107c60e14(auStack_298[0]);
    }
    puVar2 = &UNK_10a598508;
    func_0x000107c60e34(&UNK_10a598508,0x1137eb508,0x100000000);
    uRam00000001137eb488 = 0x41a0000041700000;
    uRam00000001137eb480 = 0xc1a00000c1700000;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      func_0x000107c60e78();
      if (lStack_270 < 0) {
        func_0x000107c60e14(uStack_280);
      }
      if (cStack_281 < '\0') {
        func_0x000107c60e14(auStack_298[0]);
      }
      lVar3 = 0x1137eb568;
      do {
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0x1137eb508);
      func_0x000107c60bd8(puVar2);
      uRam00000001137eb580 = 0;
      uRam00000001137eb588 = 0;
      FUN_10005375c(0x113835408,&UNK_10f5f9ef0);
      FUN_10005375c(0x1137eb598,&DAT_10f63a6be);
      FUN_10005375c(0x113835420,&UNK_10f667316);
      uRam0000000113835490 = 0;
      uRam0000000113835488 = 0;
      uRam00000001138354a0 = 0;
      uRam0000000113835498 = 0;
      uRam0000000113835470 = 0;
      uRam0000000113835468 = 0;
      uRam0000000113835480 = 0;
      uRam0000000113835478 = 0;
      uRam0000000113835450 = 0;
      uRam0000000113835448 = 0;
      uRam0000000113835460 = 0;
      uRam0000000113835458 = 0;
      uRam0000000113835440 = 0;
      uRam0000000113835438 = 0;
      uRam00000001138354a8 = 0x3f800000;
      return;
    }
    return;
  }
  return;
}



/* Entry: 10005a6d0; end: 10005a943;  */

/* WARNING: Removing unreachable block (ram,0x00010005a924) */

void FUN_10005a6d0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb460 = 0;
  uRam00000001137eb468 = 0;
  func_0x000107c610b4(&uStack_200,&PTR_s_b_110bf6b00,0x1b0);
  FUN_100057cfc(0x1137eb4b8,&uStack_200,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eb4b8,0x100000000);
  func_0x000107c610b4(&uStack_200,&PTR_DAT_110bf6cb0,0x1c0);
  FUN_1000584bc(0x1137eb4e0,&uStack_200,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eb4e0,0x100000000);
  FUN_10005375c(0x1137eb508,&UNK_10f66429f);
  FUN_10005375c(0x1137eb520,&UNK_10f664953);
  FUN_10005375c(0x1137eb538,&UNK_10f66499e);
  FUN_10005375c(0x1137eb550,&UNK_10f6649de);
  func_0x000107c60ddc(auStack_218,8);
  puVar1 = auStack_218;
  func_0x000107c60c70(puVar1,0,&UNK_10f664a0b,0xb);
  uStack_1f8 = puVar1[1];
  uStack_200 = *puVar1;
  lStack_1f0 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1 = &uStack_200;
  func_0x000107c60c5c(puVar1,&UNK_10f664a17,0x14);
  uRam00000001137eb570 = puVar1[1];
  uRam00000001137eb568 = *puVar1;
  uRam00000001137eb578 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (lStack_1f0 < 0) {
    func_0x000107c60e14(uStack_200);
  }
  if (cStack_201 < '\0') {
    func_0x000107c60e14(auStack_218[0]);
  }
  puVar2 = &UNK_10a598508;
  func_0x000107c60e34(&UNK_10a598508,0x1137eb508,0x100000000);
  uRam00000001137eb488 = 0x41a0000041700000;
  uRam00000001137eb480 = 0xc1a00000c1700000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    if (lStack_1f0 < 0) {
      func_0x000107c60e14(uStack_200);
    }
    if (cStack_201 < '\0') {
      func_0x000107c60e14(auStack_218[0]);
    }
    lVar3 = 0x1137eb568;
    do {
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0x1137eb508);
    func_0x000107c60bd8(puVar2);
    uRam00000001137eb580 = 0;
    uRam00000001137eb588 = 0;
    FUN_10005375c(0x113835408,&UNK_10f5f9ef0);
    FUN_10005375c(0x1137eb598,&DAT_10f63a6be);
    FUN_10005375c(0x113835420,&UNK_10f667316);
    uRam0000000113835490 = 0;
    uRam0000000113835488 = 0;
    uRam00000001138354a0 = 0;
    uRam0000000113835498 = 0;
    uRam0000000113835470 = 0;
    uRam0000000113835468 = 0;
    uRam0000000113835480 = 0;
    uRam0000000113835478 = 0;
    uRam0000000113835450 = 0;
    uRam0000000113835448 = 0;
    uRam0000000113835460 = 0;
    uRam0000000113835458 = 0;
    uRam0000000113835440 = 0;
    uRam0000000113835438 = 0;
    uRam00000001138354a8 = 0x3f800000;
    return;
  }
  return;
}



/* Entry: 10005a944; end: 10005a9c7;  */

void FUN_10005a944(void)

{
  uRam00000001137eb580 = 0;
  uRam00000001137eb588 = 0;
  FUN_10005375c(0x113835408,&UNK_10f5f9ef0);
  FUN_10005375c(0x1137eb598,&DAT_10f63a6be);
  FUN_10005375c(0x113835420,&UNK_10f667316);
  uRam0000000113835490 = 0;
  uRam0000000113835488 = 0;
  uRam00000001138354a0 = 0;
  uRam0000000113835498 = 0;
  uRam0000000113835470 = 0;
  uRam0000000113835468 = 0;
  uRam0000000113835480 = 0;
  uRam0000000113835478 = 0;
  uRam0000000113835450 = 0;
  uRam0000000113835448 = 0;
  uRam0000000113835460 = 0;
  uRam0000000113835458 = 0;
  uRam0000000113835440 = 0;
  uRam0000000113835438 = 0;
  uRam00000001138354a8 = 0x3f800000;
  return;
}



/* Entry: 10005a9c8; end: 10005aa7f;  */

undefined8 ***
FUN_10005a9c8(ulong *param_1,undefined8 ***param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,byte param_6)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  undefined8 *puStack_98;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  ppuVar4 = param_2[1];
  if ((undefined8 **)0x7ffffffffffffff7 < ppuVar4) {
    func_0x000107c2b040();
    FUN_10005a9c8(&puStack_b0,param_3);
    if (cStack_99 < '\0') {
      FUN_100033dac(param_2,puStack_b0,puStack_a8);
      bVar1 = cStack_99 < '\0';
    }
    else {
      bVar1 = false;
      param_2[1] = (undefined8 **)puStack_a8;
      *param_2 = (undefined8 **)puStack_b0;
      param_2[2] = (undefined8 **)CONCAT17(cStack_99,uStack_a0);
    }
    param_2[3] = (undefined8 **)puStack_98;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)((long)param_2 + 0x24) = param_4;
    *(undefined4 *)(param_2 + 5) = param_5;
    *(byte *)((long)param_2 + 0x2c) = param_6 & 1;
    *(undefined4 *)(param_2 + 6) = 0;
    if (bVar1) {
      func_0x000107c60e14(puStack_b0);
    }
    return param_2;
  }
  ppuVar5 = *param_2;
  if (ppuVar4 < (undefined8 **)0x17) {
    uStack_48 = CONCAT17((char)ppuVar4,(undefined7)uStack_48);
    pppuVar2 = &ppuStack_58;
    pppuVar3 = param_2;
    if (ppuVar4 == (undefined8 **)0x0) goto LAB_10005aa4c;
  }
  else {
    pppuVar3 = (undefined8 ***)0x19;
    if (((ulong)ppuVar4 | 7) != 0x17) {
      pppuVar3 = (undefined8 ***)(((ulong)ppuVar4 | 7) + 1);
    }
    pppuVar2 = pppuVar3;
    func_0x000107c60e20();
    uStack_48 = (ulong)pppuVar3 | 0x8000000000000000;
    ppuStack_58 = pppuVar2;
    puStack_50 = ppuVar4;
  }
  pppuVar3 = pppuVar2;
  func_0x000107c610b8(pppuVar2,ppuVar5,ppuVar4);
LAB_10005aa4c:
  *(undefined1 *)((long)pppuVar2 + (long)ppuVar4) = 0;
  ppuVar4 = param_2[2];
  param_1[1] = (ulong)puStack_50;
  *param_1 = (ulong)ppuStack_58;
  param_1[2] = uStack_48;
  param_1[3] = (ulong)ppuVar4;
  return pppuVar3;
}



/* Entry: 10005aa80; end: 10005ab43;  */

undefined8 *
FUN_10005aa80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             byte param_5)

{
  bool bVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined7 uStack_40;
  char cStack_39;
  undefined8 uStack_38;
  
  FUN_10005a9c8(&uStack_50,param_2);
  if (cStack_39 < '\0') {
    FUN_100033dac(param_1,uStack_50,uStack_48);
    bVar1 = cStack_39 < '\0';
  }
  else {
    bVar1 = false;
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = CONCAT17(cStack_39,uStack_40);
  }
  param_1[3] = uStack_38;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(byte *)((long)param_1 + 0x2c) = param_5 & 1;
  *(undefined4 *)(param_1 + 6) = 0;
  if (bVar1) {
    func_0x000107c60e14(uStack_50);
  }
  return param_1;
}



/* Entry: 10005ab44; end: 10005ac9b;  */

/* WARNING: Removing unreachable block (ram,0x00010005b278) */
/* WARNING: Removing unreachable block (ram,0x00010005b28c) */

void FUN_10005ab44(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  mach_header *pmVar4;
  mach_header *pmVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 auStack_598 [2];
  char cStack_581;
  long lStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 auStack_568 [2];
  char cStack_551;
  long lStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_538 [2];
  char cStack_521;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [8];
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [8];
  undefined1 auStack_4e8 [48];
  undefined1 auStack_4b8 [48];
  undefined8 auStack_488 [2];
  char cStack_471;
  long alStack_470 [4];
  undefined1 auStack_3f8 [448];
  long lStack_238;
  undefined1 auStack_1f8 [448];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb5c8 = 0;
  uRam00000001137eb5d0 = 0;
  FUN_10005aa80(0x1137eb628,&PTR_DAT_110c00920,5,3,0);
  FUN_10005aa80(0x1137eb660,&PTR_DAT_110c00938,5,3,0);
  FUN_10005aa80(0x1137eb698,&PTR_DAT_110c00950,5,3,0);
  FUN_10005aa80(0x1137eb6d0,&PTR_DAT_110c00950,5,4,0);
  func_0x000107c610b4(auStack_1f8,&PTR_s_b_110bfbee0,0x1b0);
  FUN_100057cfc(0x1137eb5d8,auStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eb5d8,0x100000000);
  func_0x000107c610b4(auStack_1f8,&PTR_DAT_110bfc090,0x1c0);
  FUN_1000584bc(0x1137eb600,auStack_1f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eb600,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb738 = 0;
  uRam00000001137eb740 = 0;
  func_0x000107c610b4(auStack_3f8,&PTR_s_b_110c02d20,0x1b0);
  FUN_100057cfc(0x1137eb760,auStack_3f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eb760,0x100000000);
  func_0x000107c610b4(auStack_3f8,&PTR_DAT_110c02ed0,0x1c0);
  FUN_1000584bc(0x1137eb788,auStack_3f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eb788,0x100000000);
  uRam00000001137eb758 = 0x41a0000041700000;
  uRam00000001137eb750 = 0xc1a00000c1700000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
    func_0x000107c60e78();
    alStack_470[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
    uRam00000001137eb8c8 = 0;
    FUN_10005375c(auStack_538,&DAT_10f2f4acd);
    uStack_508 = 0x1100000000;
    uStack_548 = 0;
    uStack_540 = 0;
    lStack_550 = 0;
    FUN_10005b3f0(&lStack_550,&uStack_508,&uStack_500,1);
    lVar1 = lStack_550;
    FUN_10005b45c(auStack_4e8,auStack_538,lStack_550,uStack_548);
    FUN_10005375c(auStack_568,&DAT_10f2f4ae0);
    uStack_4f8 = 0x240000001f;
    uStack_500 = 0x1f0000001b;
    uStack_578 = 0;
    uStack_570 = 0;
    lStack_580 = 0;
    FUN_10005b3f0(&lStack_580,&uStack_500,auStack_4f0,2);
    lVar3 = lStack_580;
    FUN_10005b45c(auStack_4b8,auStack_568,lStack_580,uStack_578);
    FUN_10005375c(auStack_598,&UNK_10f66cad1);
    uStack_518 = 0x1b00000016;
    uStack_520 = 0x1600000011;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    lStack_5b0 = 0;
    FUN_10005b3f0(&lStack_5b0,&uStack_520,auStack_510,2);
    lVar8 = lStack_5b0;
    FUN_10005b45c(auStack_488,auStack_598,lStack_5b0,uStack_5a8);
    uRam00000001137eb8d8 = 0;
    uRam00000001137eb8e0 = 0;
    uRam00000001137eb8e8 = 0;
    FUN_10005b56c(0x1137eb8d8,auStack_4e8,alStack_470 + 3);
    lVar7 = 0;
    do {
      if (*(long *)((long)alStack_470 + lVar7) != 0) {
        *(long *)((long)alStack_470 + lVar7 + 8) = *(long *)((long)alStack_470 + lVar7);
        func_0x000107c60e14();
      }
      if ((&cStack_471)[lVar7] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_488 + lVar7));
      }
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != -0x90);
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
    if (cStack_581 < '\0') {
      func_0x000107c60e14(auStack_598[0]);
    }
    if (lVar3 != 0) {
      func_0x000107c60e14(lVar3);
    }
    if (cStack_551 < '\0') {
      func_0x000107c60e14(auStack_568[0]);
    }
    if (lVar1 != 0) {
      func_0x000107c60e14(lVar1);
    }
    if (cStack_521 < '\0') {
      func_0x000107c60e14(auStack_538[0]);
    }
    func_0x000107c60e34(&UNK_10a6b0564,0x1137eb8d8,0x100000000);
    FUN_10005375c(auStack_538,&UNK_10f66cad7);
    uStack_4f8 = 0x300000002a;
    uStack_500 = 0x2a00000024;
    uStack_548 = 0;
    uStack_540 = 0;
    lStack_550 = 0;
    FUN_10005b3f0(&lStack_550,&uStack_500,auStack_4f0,2);
    lVar1 = lStack_550;
    FUN_10005b45c(auStack_4e8,auStack_538,lStack_550,uStack_548);
    FUN_10005375c(auStack_568,&UNK_10f66cadc);
    uStack_520 = 0x3c00000030;
    uStack_578 = 0;
    uStack_570 = 0;
    lStack_580 = 0;
    FUN_10005b3f0(&lStack_580,&uStack_520,&uStack_518,1);
    lVar3 = lStack_580;
    FUN_10005b45c(auStack_4b8,auStack_568,lStack_580,uStack_578);
    FUN_10005375c(auStack_598,&UNK_10f66cae8);
    uStack_508 = 0x440000003c;
    uStack_5a8 = 0;
    uStack_5a0 = 0;
    lStack_5b0 = 0;
    FUN_10005b3f0(&lStack_5b0,&uStack_508,&uStack_500,1);
    lVar8 = lStack_5b0;
    FUN_10005b45c(auStack_488,auStack_598,lStack_5b0,uStack_5a8);
    uRam00000001137eb8f0 = 0;
    uRam00000001137eb8f8 = 0;
    uRam00000001137eb900 = 0;
    FUN_10005b56c(0x1137eb8f0,auStack_4e8,alStack_470 + 3);
    lVar7 = 0;
    do {
      if (*(long *)((long)alStack_470 + lVar7) != 0) {
        *(long *)((long)alStack_470 + lVar7 + 8) = *(long *)((long)alStack_470 + lVar7);
        func_0x000107c60e14();
      }
      if ((&cStack_471)[lVar7] < '\0') {
        func_0x000107c60e14(*(undefined8 *)((long)auStack_488 + lVar7));
      }
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != -0x90);
    if (lVar8 != 0) {
      func_0x000107c60e14(lVar8);
    }
    if (cStack_581 < '\0') {
      func_0x000107c60e14(auStack_598[0]);
    }
    if (lVar3 != 0) {
      func_0x000107c60e14(lVar3);
    }
    if (cStack_551 < '\0') {
      func_0x000107c60e14(auStack_568[0]);
    }
    if (lVar1 != 0) {
      func_0x000107c60e14(lVar1);
    }
    if (cStack_521 < '\0') {
      func_0x000107c60e14(auStack_538[0]);
    }
    plVar2 = (long *)&UNK_10a6b0564;
    pmVar5 = &MACH_HEADER;
    pmVar4 = (mach_header *)0x1137eb8f0;
    func_0x000107c60e34();
    uRam00000001137eb8d0 = 0;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_470[3]) {
      func_0x000107c60e78();
      lVar8 = -0x90;
      lVar3 = -0x90;
      do {
        func_0x000107c2b130(lVar3);
        lVar3 = lVar3 + -0x30;
        lVar8 = lVar8 + 0x30;
      } while (lVar8 != 0);
      if (lStack_5b0 != 0) {
        func_0x000107c60e14(lStack_5b0);
      }
      if (cStack_581 < '\0') {
        func_0x000107c60e14(auStack_598[0]);
      }
      if (lStack_580 != 0) {
        func_0x000107c60e14(lStack_580);
      }
      if (cStack_551 < '\0') {
        func_0x000107c60e14(auStack_568[0]);
      }
      if (lStack_550 != 0) {
        func_0x000107c60e14(lStack_550);
      }
      if (cStack_521 < '\0') {
        func_0x000107c60e14(auStack_538[0]);
      }
      func_0x000107c60bd8();
      if ((ulong)pmVar4 >> 0x3d != 0) {
        func_0x000107c2b134();
        FUN_10005b3b0();
        puVar6 = (undefined8 *)plVar2[1];
        for (; pmVar4 != pmVar5; pmVar4 = (mach_header *)&pmVar4->cpusubtype) {
          *puVar6 = *(undefined8 *)pmVar4;
          puVar6 = puVar6 + 1;
        }
        plVar2[1] = (long)puVar6;
        return;
      }
      lVar8 = (long)pmVar4 << 3;
      func_0x000107c60e20();
      *plVar2 = lVar8;
      plVar2[1] = lVar8;
      plVar2[2] = lVar8 + (long)pmVar4 * 8;
      return;
    }
    return;
  }
  return;
}



/* Entry: 10005ac9c; end: 10005ad7f;  */

/* WARNING: Removing unreachable block (ram,0x00010005b278) */
/* WARNING: Removing unreachable block (ram,0x00010005b28c) */

void FUN_10005ac9c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  mach_header *pmVar4;
  mach_header *pmVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 auStack_398 [2];
  char cStack_381;
  long lStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 auStack_368 [2];
  char cStack_351;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [8];
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [48];
  undefined1 auStack_2b8 [48];
  undefined8 auStack_288 [2];
  char cStack_271;
  long alStack_270 [4];
  undefined1 auStack_1f8 [448];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb738 = 0;
  uRam00000001137eb740 = 0;
  func_0x000107c610b4(auStack_1f8,&PTR_s_b_110c02d20,0x1b0);
  FUN_100057cfc(0x1137eb760,auStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137eb760,0x100000000);
  func_0x000107c610b4(auStack_1f8,&PTR_DAT_110c02ed0,0x1c0);
  FUN_1000584bc(0x1137eb788,auStack_1f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137eb788,0x100000000);
  uRam00000001137eb758 = 0x41a0000041700000;
  uRam00000001137eb750 = 0xc1a00000c1700000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  alStack_270[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb8c8 = 0;
  FUN_10005375c(auStack_338,&DAT_10f2f4acd);
  uStack_308 = 0x1100000000;
  uStack_348 = 0;
  uStack_340 = 0;
  lStack_350 = 0;
  FUN_10005b3f0(&lStack_350,&uStack_308,&uStack_300,1);
  lVar1 = lStack_350;
  FUN_10005b45c(auStack_2e8,auStack_338,lStack_350,uStack_348);
  FUN_10005375c(auStack_368,&DAT_10f2f4ae0);
  uStack_2f8 = 0x240000001f;
  uStack_300 = 0x1f0000001b;
  uStack_378 = 0;
  uStack_370 = 0;
  lStack_380 = 0;
  FUN_10005b3f0(&lStack_380,&uStack_300,auStack_2f0,2);
  lVar3 = lStack_380;
  FUN_10005b45c(auStack_2b8,auStack_368,lStack_380,uStack_378);
  FUN_10005375c(auStack_398,&UNK_10f66cad1);
  uStack_318 = 0x1b00000016;
  uStack_320 = 0x1600000011;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  lStack_3b0 = 0;
  FUN_10005b3f0(&lStack_3b0,&uStack_320,auStack_310,2);
  lVar8 = lStack_3b0;
  FUN_10005b45c(auStack_288,auStack_398,lStack_3b0,uStack_3a8);
  uRam00000001137eb8d8 = 0;
  uRam00000001137eb8e0 = 0;
  uRam00000001137eb8e8 = 0;
  FUN_10005b56c(0x1137eb8d8,auStack_2e8,alStack_270 + 3);
  lVar7 = 0;
  do {
    if (*(long *)((long)alStack_270 + lVar7) != 0) {
      *(long *)((long)alStack_270 + lVar7 + 8) = *(long *)((long)alStack_270 + lVar7);
      func_0x000107c60e14();
    }
    if ((&cStack_271)[lVar7] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_288 + lVar7));
    }
    lVar7 = lVar7 + -0x30;
  } while (lVar7 != -0x90);
  if (lVar8 != 0) {
    func_0x000107c60e14(lVar8);
  }
  if (cStack_381 < '\0') {
    func_0x000107c60e14(auStack_398[0]);
  }
  if (lVar3 != 0) {
    func_0x000107c60e14(lVar3);
  }
  if (cStack_351 < '\0') {
    func_0x000107c60e14(auStack_368[0]);
  }
  if (lVar1 != 0) {
    func_0x000107c60e14(lVar1);
  }
  if (cStack_321 < '\0') {
    func_0x000107c60e14(auStack_338[0]);
  }
  func_0x000107c60e34(&UNK_10a6b0564,0x1137eb8d8,0x100000000);
  FUN_10005375c(auStack_338,&UNK_10f66cad7);
  uStack_2f8 = 0x300000002a;
  uStack_300 = 0x2a00000024;
  uStack_348 = 0;
  uStack_340 = 0;
  lStack_350 = 0;
  FUN_10005b3f0(&lStack_350,&uStack_300,auStack_2f0,2);
  lVar1 = lStack_350;
  FUN_10005b45c(auStack_2e8,auStack_338,lStack_350,uStack_348);
  FUN_10005375c(auStack_368,&UNK_10f66cadc);
  uStack_320 = 0x3c00000030;
  uStack_378 = 0;
  uStack_370 = 0;
  lStack_380 = 0;
  FUN_10005b3f0(&lStack_380,&uStack_320,&uStack_318,1);
  lVar3 = lStack_380;
  FUN_10005b45c(auStack_2b8,auStack_368,lStack_380,uStack_378);
  FUN_10005375c(auStack_398,&UNK_10f66cae8);
  uStack_308 = 0x440000003c;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  lStack_3b0 = 0;
  FUN_10005b3f0(&lStack_3b0,&uStack_308,&uStack_300,1);
  lVar8 = lStack_3b0;
  FUN_10005b45c(auStack_288,auStack_398,lStack_3b0,uStack_3a8);
  uRam00000001137eb8f0 = 0;
  uRam00000001137eb8f8 = 0;
  uRam00000001137eb900 = 0;
  FUN_10005b56c(0x1137eb8f0,auStack_2e8,alStack_270 + 3);
  lVar7 = 0;
  do {
    if (*(long *)((long)alStack_270 + lVar7) != 0) {
      *(long *)((long)alStack_270 + lVar7 + 8) = *(long *)((long)alStack_270 + lVar7);
      func_0x000107c60e14();
    }
    if ((&cStack_271)[lVar7] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_288 + lVar7));
    }
    lVar7 = lVar7 + -0x30;
  } while (lVar7 != -0x90);
  if (lVar8 != 0) {
    func_0x000107c60e14(lVar8);
  }
  if (cStack_381 < '\0') {
    func_0x000107c60e14(auStack_398[0]);
  }
  if (lVar3 != 0) {
    func_0x000107c60e14(lVar3);
  }
  if (cStack_351 < '\0') {
    func_0x000107c60e14(auStack_368[0]);
  }
  if (lVar1 != 0) {
    func_0x000107c60e14(lVar1);
  }
  if (cStack_321 < '\0') {
    func_0x000107c60e14(auStack_338[0]);
  }
  plVar2 = (long *)&UNK_10a6b0564;
  pmVar5 = &MACH_HEADER;
  pmVar4 = (mach_header *)0x1137eb8f0;
  func_0x000107c60e34();
  uRam00000001137eb8d0 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_270[3]) {
    func_0x000107c60e78();
    lVar8 = -0x90;
    lVar3 = -0x90;
    do {
      func_0x000107c2b130(lVar3);
      lVar3 = lVar3 + -0x30;
      lVar8 = lVar8 + 0x30;
    } while (lVar8 != 0);
    if (lStack_3b0 != 0) {
      func_0x000107c60e14(lStack_3b0);
    }
    if (cStack_381 < '\0') {
      func_0x000107c60e14(auStack_398[0]);
    }
    if (lStack_380 != 0) {
      func_0x000107c60e14(lStack_380);
    }
    if (cStack_351 < '\0') {
      func_0x000107c60e14(auStack_368[0]);
    }
    if (lStack_350 != 0) {
      func_0x000107c60e14(lStack_350);
    }
    if (cStack_321 < '\0') {
      func_0x000107c60e14(auStack_338[0]);
    }
    func_0x000107c60bd8();
    if ((ulong)pmVar4 >> 0x3d != 0) {
      func_0x000107c2b134();
      FUN_10005b3b0();
      puVar6 = (undefined8 *)plVar2[1];
      for (; pmVar4 != pmVar5; pmVar4 = (mach_header *)&pmVar4->cpusubtype) {
        *puVar6 = *(undefined8 *)pmVar4;
        puVar6 = puVar6 + 1;
      }
      plVar2[1] = (long)puVar6;
      return;
    }
    lVar8 = (long)pmVar4 << 3;
    func_0x000107c60e20();
    *plVar2 = lVar8;
    plVar2[1] = lVar8;
    plVar2[2] = lVar8 + (long)pmVar4 * 8;
    return;
  }
  return;
}



/* Entry: 10005ad80; end: 10005b3af;  */

/* WARNING: Removing unreachable block (ram,0x00010005b278) */
/* WARNING: Removing unreachable block (ram,0x00010005b28c) */

void FUN_10005ad80(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  mach_header *pmVar4;
  mach_header *pmVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 auStack_168 [2];
  char cStack_151;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [4];
  
  alStack_70[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb8c8 = 0;
  FUN_10005375c(auStack_138,&DAT_10f2f4acd);
  uStack_108 = 0x1100000000;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_150 = 0;
  FUN_10005b3f0(&lStack_150,&uStack_108,&uStack_100,1);
  lVar1 = lStack_150;
  FUN_10005b45c(auStack_e8,auStack_138,lStack_150,uStack_148);
  FUN_10005375c(auStack_168,&DAT_10f2f4ae0);
  uStack_f8 = 0x240000001f;
  uStack_100 = 0x1f0000001b;
  uStack_178 = 0;
  uStack_170 = 0;
  lStack_180 = 0;
  FUN_10005b3f0(&lStack_180,&uStack_100,auStack_f0,2);
  lVar3 = lStack_180;
  FUN_10005b45c(auStack_b8,auStack_168,lStack_180,uStack_178);
  FUN_10005375c(auStack_198,&UNK_10f66cad1);
  uStack_118 = 0x1b00000016;
  uStack_120 = 0x1600000011;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  lStack_1b0 = 0;
  FUN_10005b3f0(&lStack_1b0,&uStack_120,auStack_110,2);
  lVar8 = lStack_1b0;
  FUN_10005b45c(auStack_88,auStack_198,lStack_1b0,uStack_1a8);
  uRam00000001137eb8d8 = 0;
  uRam00000001137eb8e0 = 0;
  uRam00000001137eb8e8 = 0;
  FUN_10005b56c(0x1137eb8d8,auStack_e8,alStack_70 + 3);
  lVar7 = 0;
  do {
    if (*(long *)((long)alStack_70 + lVar7) != 0) {
      *(long *)((long)alStack_70 + lVar7 + 8) = *(long *)((long)alStack_70 + lVar7);
      func_0x000107c60e14();
    }
    if ((&cStack_71)[lVar7] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_88 + lVar7));
    }
    lVar7 = lVar7 + -0x30;
  } while (lVar7 != -0x90);
  if (lVar8 != 0) {
    func_0x000107c60e14(lVar8);
  }
  if (cStack_181 < '\0') {
    func_0x000107c60e14(auStack_198[0]);
  }
  if (lVar3 != 0) {
    func_0x000107c60e14(lVar3);
  }
  if (cStack_151 < '\0') {
    func_0x000107c60e14(auStack_168[0]);
  }
  if (lVar1 != 0) {
    func_0x000107c60e14(lVar1);
  }
  if (cStack_121 < '\0') {
    func_0x000107c60e14(auStack_138[0]);
  }
  func_0x000107c60e34(&UNK_10a6b0564,0x1137eb8d8,0x100000000);
  FUN_10005375c(auStack_138,&UNK_10f66cad7);
  uStack_f8 = 0x300000002a;
  uStack_100 = 0x2a00000024;
  uStack_148 = 0;
  uStack_140 = 0;
  lStack_150 = 0;
  FUN_10005b3f0(&lStack_150,&uStack_100,auStack_f0,2);
  lVar1 = lStack_150;
  FUN_10005b45c(auStack_e8,auStack_138,lStack_150,uStack_148);
  FUN_10005375c(auStack_168,&UNK_10f66cadc);
  uStack_120 = 0x3c00000030;
  uStack_178 = 0;
  uStack_170 = 0;
  lStack_180 = 0;
  FUN_10005b3f0(&lStack_180,&uStack_120,&uStack_118,1);
  lVar3 = lStack_180;
  FUN_10005b45c(auStack_b8,auStack_168,lStack_180,uStack_178);
  FUN_10005375c(auStack_198,&UNK_10f66cae8);
  uStack_108 = 0x440000003c;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  lStack_1b0 = 0;
  FUN_10005b3f0(&lStack_1b0,&uStack_108,&uStack_100,1);
  lVar8 = lStack_1b0;
  FUN_10005b45c(auStack_88,auStack_198,lStack_1b0,uStack_1a8);
  uRam00000001137eb8f0 = 0;
  uRam00000001137eb8f8 = 0;
  uRam00000001137eb900 = 0;
  FUN_10005b56c(0x1137eb8f0,auStack_e8,alStack_70 + 3);
  lVar7 = 0;
  do {
    if (*(long *)((long)alStack_70 + lVar7) != 0) {
      *(long *)((long)alStack_70 + lVar7 + 8) = *(long *)((long)alStack_70 + lVar7);
      func_0x000107c60e14();
    }
    if ((&cStack_71)[lVar7] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_88 + lVar7));
    }
    lVar7 = lVar7 + -0x30;
  } while (lVar7 != -0x90);
  if (lVar8 != 0) {
    func_0x000107c60e14(lVar8);
  }
  if (cStack_181 < '\0') {
    func_0x000107c60e14(auStack_198[0]);
  }
  if (lVar3 != 0) {
    func_0x000107c60e14(lVar3);
  }
  if (cStack_151 < '\0') {
    func_0x000107c60e14(auStack_168[0]);
  }
  if (lVar1 != 0) {
    func_0x000107c60e14(lVar1);
  }
  if (cStack_121 < '\0') {
    func_0x000107c60e14(auStack_138[0]);
  }
  plVar2 = (long *)&UNK_10a6b0564;
  pmVar5 = &MACH_HEADER;
  pmVar4 = (mach_header *)0x1137eb8f0;
  func_0x000107c60e34();
  uRam00000001137eb8d0 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[3]) {
    func_0x000107c60e78();
    lVar8 = -0x90;
    lVar3 = -0x90;
    do {
      func_0x000107c2b130(lVar3);
      lVar3 = lVar3 + -0x30;
      lVar8 = lVar8 + 0x30;
    } while (lVar8 != 0);
    if (lStack_1b0 != 0) {
      func_0x000107c60e14(lStack_1b0);
    }
    if (cStack_181 < '\0') {
      func_0x000107c60e14(auStack_198[0]);
    }
    if (lStack_180 != 0) {
      func_0x000107c60e14(lStack_180);
    }
    if (cStack_151 < '\0') {
      func_0x000107c60e14(auStack_168[0]);
    }
    if (lStack_150 != 0) {
      func_0x000107c60e14(lStack_150);
    }
    if (cStack_121 < '\0') {
      func_0x000107c60e14(auStack_138[0]);
    }
    func_0x000107c60bd8();
    if ((ulong)pmVar4 >> 0x3d != 0) {
      func_0x000107c2b134();
      FUN_10005b3b0();
      puVar6 = (undefined8 *)plVar2[1];
      for (; pmVar4 != pmVar5; pmVar4 = (mach_header *)&pmVar4->cpusubtype) {
        *puVar6 = *(undefined8 *)pmVar4;
        puVar6 = puVar6 + 1;
      }
      plVar2[1] = (long)puVar6;
      return;
    }
    lVar8 = (long)pmVar4 << 3;
    func_0x000107c60e20();
    *plVar2 = lVar8;
    plVar2[1] = lVar8;
    plVar2[2] = lVar8 + (long)pmVar4 * 8;
    return;
  }
  return;
}



/* Entry: 10005b3b0; end: 10005b3ef;  */

void FUN_10005b3b0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    func_0x000107c60e20();
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + (long)param_2 * 8;
    return;
  }
  func_0x000107c2b134();
  FUN_10005b3b0();
  puVar2 = (undefined8 *)param_1[1];
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = (long)puVar2;
  return;
}



/* Entry: 10005b3f0; end: 10005b45b;  */

void FUN_10005b3f0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  FUN_10005b3b0(param_1,param_4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10005b45c; end: 10005b4f3;  */

undefined8 * FUN_10005b45c(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10005b4f4(param_1 + 3,param_3,param_4,param_4 - param_3 >> 3);
  return param_1;
}



/* Entry: 10005b4f4; end: 10005b56b;  */

void FUN_10005b4f4(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10005b3b0(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      func_0x000107c610b8(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10005b56c; end: 10005b687;  */

void FUN_10005b56c(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = 0x90;
  func_0x000107c60e20();
  *param_1 = lVar4;
  param_1[1] = lVar4;
  param_1[2] = lVar4 + 0x90;
  if (param_2 != param_3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar5);
      puVar2 = (undefined8 *)(lVar4 + lVar5);
      if (*(char *)((long)puVar1 + 0x17) < '\0') {
        FUN_100033dac(puVar2,*puVar1,puVar1[1]);
      }
      else {
        uVar6 = *puVar1;
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[2] = puVar1[2];
      }
      lVar3 = lVar4 + lVar5;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      FUN_10005b4f4();
      lVar5 = lVar5 + 0x30;
    } while (param_2 + lVar5 != param_3);
    lVar4 = lVar4 + lVar5;
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 10005b688; end: 10005b82f;  */

undefined8 * FUN_10005b688(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined1 auStack_208 [448];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137eb940 = 0;
  uRam00000001137eb948 = 0;
  func_0x000107c610b4(auStack_208,&PTR_s_b_110c17678,0x1b0);
  FUN_100057cfc(0x1137ebae8,auStack_208,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ebae8,0x100000000);
  func_0x000107c610b4(auStack_208,&PTR_DAT_110c17828,0x1c0);
  FUN_1000584bc(0x1137ebb10,auStack_208,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ebb10,0x100000000);
  FUN_10005b830(0x1137eba28,&DAT_10f67535f);
  puVar2 = (undefined8 *)&UNK_10a32edf4;
  func_0x000107c60e34(&UNK_10a32edf4,0x1137eba28,0x100000000);
  FUN_10005b830(0x1137eba48,&DAT_10f67536e);
  func_0x000107c60e34(&UNK_10a32edf4,0x1137eba48,0x100000000);
  FUN_10005b830(0x1137eba68,&DAT_10f67537e);
  func_0x000107c60e34(&UNK_10a32edf4,0x1137eba68,0x100000000);
  FUN_10005b830(0x1137eba88,&DAT_10f675393);
  func_0x000107c60e34(&UNK_10a32edf4,0x1137eba88,0x100000000);
  FUN_10005b830(0x1137ebaa8,&DAT_10f675393);
  func_0x000107c60e34(&UNK_10a32edf4,0x1137ebaa8,0x100000000);
  FUN_10005b830(0x1137ebac8,&UNK_10f67630b);
  func_0x000107c60e34(&UNK_10a32edf4,0x1137ebac8,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  func_0x000107c60e78();
  puStack_230 = &UNK_10a32edf4;
  uStack_228 = 0x100000000;
  pcStack_218 = FUN_10005b830;
  puStack_220 = &stack0xfffffffffffffff0;
  FUN_10005375c(&uStack_248);
  lVar1 = lStack_238;
  puVar2[1] = uStack_240;
  *puVar2 = uStack_248;
  uStack_240 = 0;
  lStack_238 = 0;
  uStack_248 = 0;
  puVar2[2] = lVar1;
  puVar2[3] = 0;
  func_0x00010005b890(puVar2);
  if (lStack_238 < 0) {
    func_0x000107c60e14(uStack_248);
  }
  return puVar2;
}



/* Entry: 10005b830; end: 10005b8db;  */

undefined8 * FUN_10005b830(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10005375c(&uStack_38);
  lVar1 = lStack_28;
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_38 = 0;
  param_1[2] = lVar1;
  param_1[3] = 0;
  func_0x00010005b890(param_1);
  if (lStack_28 < 0) {
    func_0x000107c60e14(uStack_38);
  }
  return param_1;
}



/* Entry: 10005b8dc; end: 10005b9c7;  */

ulong FUN_10005b8dc(undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lStack_38;
  
  plVar1 = (long *)*param_2;
  uVar2 = param_2[1];
  uVar3 = uVar2 >> 3;
  if (((ulong)plVar1 & 7) == 0) {
    if (7 < uVar2) {
      uVar5 = 0;
      plVar4 = plVar1;
      do {
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar4 ^ uVar5;
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
      goto LAB_10005b96c;
    }
  }
  else if (7 < uVar2) {
    uVar5 = 0;
    plVar4 = plVar1;
    do {
      uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar4 ^ uVar5;
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
    goto LAB_10005b96c;
  }
  uVar5 = 0;
LAB_10005b96c:
  lStack_38 = 0;
  if ((uVar2 & 7) == 0) {
    lStack_38 = 0;
  }
  else {
    func_0x000107c610b4(&lStack_38,(long)plVar1 + (uVar2 - (uVar2 & 7)));
  }
  uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + lStack_38 ^ uVar5;
  return uVar2 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
}



/* Entry: 10005b9c8; end: 10005bc73;  */

long * FUN_10005b9c8(void)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong unaff_x28;
  long lVar23;
  undefined4 auStack_718 [2];
  undefined1 auStack_710 [24];
  undefined4 uStack_6f8;
  undefined1 auStack_6f0 [24];
  undefined4 uStack_6d8;
  undefined1 auStack_6d0 [24];
  undefined4 uStack_6b8;
  undefined1 auStack_6b0 [24];
  undefined4 uStack_698;
  undefined1 auStack_690 [24];
  undefined4 uStack_678;
  undefined8 auStack_670 [2];
  char acStack_659 [9];
  undefined8 auStack_650 [2];
  char cStack_639;
  long lStack_638;
  undefined1 auStack_5f8 [448];
  long lStack_438;
  undefined1 auStack_3f8 [448];
  long lStack_238;
  undefined1 auStack_1f8 [448];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ebd58 = 0;
  uRam00000001137ebd60 = 0;
  func_0x000107c610b4(auStack_1f8,&PTR_s_b_110c1bfc0,0x1b0);
  FUN_100057cfc(0x1137ebd68,auStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ebd68,0x100000000);
  func_0x000107c610b4(auStack_1f8,&PTR_DAT_110c1c170,0x1c0);
  FUN_1000584bc(0x1137ebd90,auStack_1f8,0xe);
  plVar7 = (long *)&UNK_10a1595e4;
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ebd90,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  func_0x000107c60e78();
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ebdd0 = 0;
  uRam00000001137ebdd8 = 0x300000002a;
  uRam00000001137ebde0 = 0x2a00000024;
  uRam00000001137ebde8 = 0x3c00000030;
  uRam00000001137ebdf0 = 0;
  func_0x000107c610b4(auStack_3f8,&PTR_s_b_110c26e68,0x1b0);
  FUN_100057cfc(0x1137ebe00,auStack_3f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ebe00,0x100000000);
  func_0x000107c610b4(auStack_3f8,&PTR_DAT_110c27018,0x1c0);
  FUN_1000584bc(0x1137ebe28,auStack_3f8,0xe);
  plVar7 = (long *)&UNK_10a1595e4;
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ebe28,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return plVar7;
  }
  func_0x000107c60e78();
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ebf20 = 0;
  uRam00000001137ebf28 = 0;
  func_0x000107c610b4(auStack_5f8,&PTR_s_b_110c328a0,0x1b0);
  FUN_100057cfc(0x1137ebf30,auStack_5f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ebf30,0x100000000);
  func_0x000107c610b4(auStack_5f8,&PTR_DAT_110c32a50,0x1c0);
  FUN_1000584bc(0x1137ebf58,auStack_5f8,0xe);
  plVar7 = (long *)&UNK_10a1595e4;
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ebf58,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return plVar7;
  }
  func_0x000107c60e78();
  lStack_638 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ebf80 = 0;
  uRam00000001137ebf88 = 0;
  auStack_718[0] = 1;
  FUN_10005375c(auStack_710,&UNK_10f6883a9);
  uStack_6f8 = 2;
  FUN_10005375c(auStack_6f0,&UNK_10f6883d1);
  uStack_6d8 = 3;
  FUN_10005375c(auStack_6d0,&UNK_10f6883f7);
  uStack_6b8 = 4;
  FUN_10005375c(auStack_6b0,&UNK_10f68841b);
  uStack_698 = 5;
  FUN_10005375c(auStack_690,&UNK_10f688440);
  uStack_678 = 6;
  FUN_10005375c(auStack_670,&UNK_10f688467);
  acStack_659[1] = 'c';
  acStack_659[2] = '\0';
  acStack_659[3] = '\0';
  acStack_659[4] = '\0';
  FUN_10005375c(auStack_650,&UNK_10f68848f);
  FUN_10005bfdc(0x1137ebf90,auStack_718,7);
  lVar17 = 0;
  do {
    if ((&cStack_639)[lVar17] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_650 + lVar17));
    }
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0xe0);
  func_0x000107c60e34(&UNK_10a9c3e88,0x1137ebf90,0x100000000);
  auStack_718[0] = 1;
  FUN_10005375c(auStack_710,&UNK_10f6884b9);
  uStack_6f8 = 2;
  FUN_10005375c(auStack_6f0,&UNK_10f6884de);
  uStack_6d8 = 3;
  FUN_10005375c(auStack_6d0,&UNK_10f688501);
  uStack_6b8 = 4;
  FUN_10005375c(auStack_6b0,&UNK_10f688522);
  uStack_698 = 5;
  FUN_10005375c(auStack_690,&UNK_10f688544);
  uStack_678 = 6;
  FUN_10005375c(auStack_670,&UNK_10f688568);
  FUN_10005bfdc(0x1137ebfb8,auStack_718,6);
  lVar17 = 0;
  do {
    if (acStack_659[lVar17] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_670 + lVar17));
    }
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0xc0);
  plVar7 = (long *)&UNK_10a9c3e88;
  puVar8 = (uint *)0x1137ebfb8;
  lVar17 = 0x100000000;
  func_0x000107c60e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_638) {
    return plVar7;
  }
  func_0x000107c60e78();
  puVar18 = auStack_670;
  lVar19 = -0xc0;
  do {
    if (*(char *)((long)puVar18 + 0x17) < '\0') {
      func_0x000107c60e14(*puVar18);
    }
    puVar18 = puVar18 + -4;
    lVar19 = lVar19 + 0x20;
  } while (lVar19 != 0);
  func_0x000107c60bd8();
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 4) = 0x3f800000;
  if (lVar17 != 0) {
    lVar19 = 0;
    plVar1 = plVar7 + 2;
    puVar2 = puVar8 + lVar17 * 8;
    do {
      uVar3 = *puVar8;
      uVar20 = (ulong)uVar3;
      uVar22 = plVar7[1];
      if (uVar22 != 0) {
        uVar9 = uVar22 - 1;
        uVar21 = (uint)uVar22;
        if ((uVar22 & uVar9) == 0) {
          unaff_x28 = (ulong)(uVar21 - 1 & uVar3);
        }
        else {
          unaff_x28 = uVar20;
          if (uVar22 <= uVar20) {
            uVar4 = 0;
            if (uVar21 != 0) {
              uVar4 = uVar3 / uVar21;
            }
            unaff_x28 = (ulong)(uVar3 - uVar4 * uVar21);
          }
        }
        plVar11 = *(long **)(*plVar7 + unaff_x28 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10005c0b4;
              uVar13 = plVar11[1];
              if (uVar13 != uVar20) break;
              if (*(uint *)(plVar11 + 2) == uVar3) goto LAB_10005c354;
            }
            if ((uVar22 & uVar9) == 0) {
              uVar13 = uVar13 & uVar9;
            }
            else if (uVar22 <= uVar13) {
              uVar10 = 0;
              if (uVar22 != 0) {
                uVar10 = uVar13 / uVar22;
              }
              uVar13 = uVar13 - uVar10 * uVar22;
            }
          } while (uVar13 == unaff_x28);
        }
      }
LAB_10005c0b4:
      plVar11 = (long *)0x30;
      func_0x000107c60e20();
      *plVar11 = 0;
      plVar11[1] = uVar20;
      *(uint *)(plVar11 + 2) = uVar3;
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        FUN_100033dac(plVar11 + 3,*(undefined8 *)(puVar8 + 2),*(undefined8 *)(puVar8 + 4));
        lVar19 = plVar7[3];
      }
      else {
        lVar23 = *(long *)(puVar8 + 4);
        lVar17 = *(long *)(puVar8 + 2);
        plVar11[5] = *(long *)(puVar8 + 6);
        plVar11[4] = lVar23;
        plVar11[3] = lVar17;
      }
      if ((uVar22 == 0) || (*(float *)(plVar7 + 4) * (float)uVar22 < (float)(lVar19 + 1))) {
        uVar9 = 1;
        if (2 < uVar22) {
          uVar9 = (ulong)((uVar22 & uVar22 - 1) != 0);
        }
        uVar9 = uVar9 | uVar22 << 1;
        uVar22 = (ulong)((float)(lVar19 + 1) / *(float *)(plVar7 + 4));
        if (uVar9 <= uVar22) {
          uVar9 = uVar22;
        }
        if (uVar9 - 1 == 0) {
          uVar9 = 2;
        }
        else if ((uVar9 & uVar9 - 1) != 0) {
          func_0x000107c60c44();
        }
        uVar22 = plVar7[1];
        if (uVar22 < uVar9) {
LAB_10005c170:
          if (uVar9 >> 0x3d != 0) {
            func_0x000107c2b044();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10005c3c8);
            (*pcVar6)();
          }
          lVar17 = uVar9 << 3;
          func_0x000107c60e20();
          lVar19 = *plVar7;
          *plVar7 = lVar17;
          if (lVar19 != 0) {
            func_0x000107c60e14();
          }
          uVar22 = 0;
          plVar7[1] = uVar9;
          do {
            *(undefined8 *)(*plVar7 + uVar22 * 8) = 0;
            uVar22 = uVar22 + 1;
          } while (uVar9 != uVar22);
          plVar12 = (long *)*plVar1;
          uVar22 = uVar9;
          if (plVar12 != (long *)0x0) {
            uVar13 = plVar12[1];
            uVar10 = uVar9 - 1;
            if ((uVar9 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar9 <= uVar13) {
              uVar16 = 0;
              if (uVar9 != 0) {
                uVar16 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar16 * uVar9;
            }
            *(long **)(*plVar7 + uVar13 * 8) = plVar1;
            plVar14 = (long *)*plVar12;
            while (plVar14 != (long *)0x0) {
              uVar16 = plVar14[1];
              if ((uVar9 & uVar10) == 0) {
                uVar16 = uVar16 & uVar10;
              }
              else if (uVar9 <= uVar16) {
                uVar5 = 0;
                if (uVar9 != 0) {
                  uVar5 = uVar16 / uVar9;
                }
                uVar16 = uVar16 - uVar5 * uVar9;
              }
              plVar15 = plVar14;
              if (uVar16 != uVar13) {
                lVar17 = *plVar7;
                if (*(long *)(lVar17 + uVar16 * 8) == 0) {
                  *(long **)(lVar17 + uVar16 * 8) = plVar12;
                  uVar13 = uVar16;
                }
                else {
                  *plVar12 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar17 + uVar16 * 8);
                  **(long **)(lVar17 + uVar16 * 8) = (long)plVar14;
                  plVar15 = plVar12;
                }
              }
              plVar12 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (uVar9 < uVar22) {
          uVar13 = (ulong)((float)(ulong)plVar7[3] / *(float *)(plVar7 + 4));
          if ((uVar22 < 3) || ((uVar22 & uVar22 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar13) {
            uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
          }
          if (uVar9 <= uVar13) {
            uVar9 = uVar13;
          }
          if (uVar9 < uVar22) {
            if (uVar9 != 0) goto LAB_10005c170;
            lVar17 = *plVar7;
            *plVar7 = 0;
            if (lVar17 != 0) {
              func_0x000107c60e14();
            }
            plVar7[1] = 0;
            uVar22 = 0;
          }
          else {
            uVar22 = plVar7[1];
          }
        }
        if ((uVar22 & uVar22 - 1) == 0) {
          unaff_x28 = (ulong)((int)uVar22 - 1U & uVar3);
        }
        else {
          unaff_x28 = uVar20;
          if (uVar22 <= uVar20) {
            uVar9 = 0;
            if (uVar22 != 0) {
              uVar9 = uVar20 / uVar22;
            }
            unaff_x28 = uVar20 - uVar9 * uVar22;
          }
        }
      }
      lVar17 = *plVar7;
      plVar12 = *(long **)(lVar17 + unaff_x28 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar17 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar20 = *(ulong *)(*plVar11 + 8);
          if ((uVar22 & uVar22 - 1) == 0) {
            uVar20 = uVar20 & uVar22 - 1;
          }
          else if (uVar22 <= uVar20) {
            uVar9 = 0;
            if (uVar22 != 0) {
              uVar9 = uVar20 / uVar22;
            }
            uVar20 = uVar20 - uVar9 * uVar22;
          }
          *(long **)(*plVar7 + uVar20 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar12;
        *plVar12 = (long)plVar11;
      }
      lVar19 = plVar7[3] + 1;
      plVar7[3] = lVar19;
LAB_10005c354:
      puVar8 = puVar8 + 8;
    } while (puVar8 != puVar2);
  }
  return plVar7;
}



/* Entry: 10005bc74; end: 10005bfdb;  */

long * FUN_10005bc74(void)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  ulong unaff_x28;
  long lVar23;
  undefined4 auStack_118 [2];
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined4 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined4 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined8 auStack_70 [2];
  char acStack_59 [9];
  undefined8 auStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ebf80 = 0;
  uRam00000001137ebf88 = 0;
  auStack_118[0] = 1;
  FUN_10005375c(auStack_110,&UNK_10f6883a9);
  uStack_f8 = 2;
  FUN_10005375c(auStack_f0,&UNK_10f6883d1);
  uStack_d8 = 3;
  FUN_10005375c(auStack_d0,&UNK_10f6883f7);
  uStack_b8 = 4;
  FUN_10005375c(auStack_b0,&UNK_10f68841b);
  uStack_98 = 5;
  FUN_10005375c(auStack_90,&UNK_10f688440);
  uStack_78 = 6;
  FUN_10005375c(auStack_70,&UNK_10f688467);
  acStack_59[1] = 'c';
  acStack_59[2] = '\0';
  acStack_59[3] = '\0';
  acStack_59[4] = '\0';
  FUN_10005375c(auStack_50,&UNK_10f68848f);
  FUN_10005bfdc(0x1137ebf90,auStack_118,7);
  lVar17 = 0;
  do {
    if ((&cStack_39)[lVar17] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_50 + lVar17));
    }
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0xe0);
  func_0x000107c60e34(&UNK_10a9c3e88,0x1137ebf90,0x100000000);
  auStack_118[0] = 1;
  FUN_10005375c(auStack_110,&UNK_10f6884b9);
  uStack_f8 = 2;
  FUN_10005375c(auStack_f0,&UNK_10f6884de);
  uStack_d8 = 3;
  FUN_10005375c(auStack_d0,&UNK_10f688501);
  uStack_b8 = 4;
  FUN_10005375c(auStack_b0,&UNK_10f688522);
  uStack_98 = 5;
  FUN_10005375c(auStack_90,&UNK_10f688544);
  uStack_78 = 6;
  FUN_10005375c(auStack_70,&UNK_10f688568);
  FUN_10005bfdc(0x1137ebfb8,auStack_118,6);
  lVar17 = 0;
  do {
    if (acStack_59[lVar17] < '\0') {
      func_0x000107c60e14(*(undefined8 *)((long)auStack_70 + lVar17));
    }
    lVar17 = lVar17 + -0x20;
  } while (lVar17 != -0xc0);
  plVar7 = (long *)&UNK_10a9c3e88;
  puVar8 = (uint *)0x1137ebfb8;
  lVar17 = 0x100000000;
  func_0x000107c60e34();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar7;
  }
  func_0x000107c60e78();
  puVar18 = auStack_70;
  lVar19 = -0xc0;
  do {
    if (*(char *)((long)puVar18 + 0x17) < '\0') {
      func_0x000107c60e14(*puVar18);
    }
    puVar18 = puVar18 + -4;
    lVar19 = lVar19 + 0x20;
  } while (lVar19 != 0);
  func_0x000107c60bd8();
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  *(undefined4 *)(plVar7 + 4) = 0x3f800000;
  if (lVar17 != 0) {
    lVar19 = 0;
    plVar1 = plVar7 + 2;
    puVar2 = puVar8 + lVar17 * 8;
    do {
      uVar3 = *puVar8;
      uVar20 = (ulong)uVar3;
      uVar22 = plVar7[1];
      if (uVar22 != 0) {
        uVar9 = uVar22 - 1;
        uVar21 = (uint)uVar22;
        if ((uVar22 & uVar9) == 0) {
          unaff_x28 = (ulong)(uVar21 - 1 & uVar3);
        }
        else {
          unaff_x28 = uVar20;
          if (uVar22 <= uVar20) {
            uVar4 = 0;
            if (uVar21 != 0) {
              uVar4 = uVar3 / uVar21;
            }
            unaff_x28 = (ulong)(uVar3 - uVar4 * uVar21);
          }
        }
        plVar11 = *(long **)(*plVar7 + unaff_x28 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10005c0b4;
              uVar13 = plVar11[1];
              if (uVar13 != uVar20) break;
              if (*(uint *)(plVar11 + 2) == uVar3) goto LAB_10005c354;
            }
            if ((uVar22 & uVar9) == 0) {
              uVar13 = uVar13 & uVar9;
            }
            else if (uVar22 <= uVar13) {
              uVar10 = 0;
              if (uVar22 != 0) {
                uVar10 = uVar13 / uVar22;
              }
              uVar13 = uVar13 - uVar10 * uVar22;
            }
          } while (uVar13 == unaff_x28);
        }
      }
LAB_10005c0b4:
      plVar11 = (long *)0x30;
      func_0x000107c60e20();
      *plVar11 = 0;
      plVar11[1] = uVar20;
      *(uint *)(plVar11 + 2) = uVar3;
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        FUN_100033dac(plVar11 + 3,*(undefined8 *)(puVar8 + 2),*(undefined8 *)(puVar8 + 4));
        lVar19 = plVar7[3];
      }
      else {
        lVar23 = *(long *)(puVar8 + 4);
        lVar17 = *(long *)(puVar8 + 2);
        plVar11[5] = *(long *)(puVar8 + 6);
        plVar11[4] = lVar23;
        plVar11[3] = lVar17;
      }
      if ((uVar22 == 0) || (*(float *)(plVar7 + 4) * (float)uVar22 < (float)(lVar19 + 1))) {
        uVar9 = 1;
        if (2 < uVar22) {
          uVar9 = (ulong)((uVar22 & uVar22 - 1) != 0);
        }
        uVar9 = uVar9 | uVar22 << 1;
        uVar22 = (ulong)((float)(lVar19 + 1) / *(float *)(plVar7 + 4));
        if (uVar9 <= uVar22) {
          uVar9 = uVar22;
        }
        if (uVar9 - 1 == 0) {
          uVar9 = 2;
        }
        else if ((uVar9 & uVar9 - 1) != 0) {
          func_0x000107c60c44();
        }
        uVar22 = plVar7[1];
        if (uVar22 < uVar9) {
LAB_10005c170:
          if (uVar9 >> 0x3d != 0) {
            func_0x000107c2b044();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10005c3c8);
            (*pcVar6)();
          }
          lVar17 = uVar9 << 3;
          func_0x000107c60e20();
          lVar19 = *plVar7;
          *plVar7 = lVar17;
          if (lVar19 != 0) {
            func_0x000107c60e14();
          }
          uVar22 = 0;
          plVar7[1] = uVar9;
          do {
            *(undefined8 *)(*plVar7 + uVar22 * 8) = 0;
            uVar22 = uVar22 + 1;
          } while (uVar9 != uVar22);
          plVar12 = (long *)*plVar1;
          uVar22 = uVar9;
          if (plVar12 != (long *)0x0) {
            uVar13 = plVar12[1];
            uVar10 = uVar9 - 1;
            if ((uVar9 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar9 <= uVar13) {
              uVar16 = 0;
              if (uVar9 != 0) {
                uVar16 = uVar13 / uVar9;
              }
              uVar13 = uVar13 - uVar16 * uVar9;
            }
            *(long **)(*plVar7 + uVar13 * 8) = plVar1;
            plVar14 = (long *)*plVar12;
            while (plVar14 != (long *)0x0) {
              uVar16 = plVar14[1];
              if ((uVar9 & uVar10) == 0) {
                uVar16 = uVar16 & uVar10;
              }
              else if (uVar9 <= uVar16) {
                uVar5 = 0;
                if (uVar9 != 0) {
                  uVar5 = uVar16 / uVar9;
                }
                uVar16 = uVar16 - uVar5 * uVar9;
              }
              plVar15 = plVar14;
              if (uVar16 != uVar13) {
                lVar17 = *plVar7;
                if (*(long *)(lVar17 + uVar16 * 8) == 0) {
                  *(long **)(lVar17 + uVar16 * 8) = plVar12;
                  uVar13 = uVar16;
                }
                else {
                  *plVar12 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar17 + uVar16 * 8);
                  **(long **)(lVar17 + uVar16 * 8) = (long)plVar14;
                  plVar15 = plVar12;
                }
              }
              plVar12 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (uVar9 < uVar22) {
          uVar13 = (ulong)((float)(ulong)plVar7[3] / *(float *)(plVar7 + 4));
          if ((uVar22 < 3) || ((uVar22 & uVar22 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar13) {
            uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
          }
          if (uVar9 <= uVar13) {
            uVar9 = uVar13;
          }
          if (uVar9 < uVar22) {
            if (uVar9 != 0) goto LAB_10005c170;
            lVar17 = *plVar7;
            *plVar7 = 0;
            if (lVar17 != 0) {
              func_0x000107c60e14();
            }
            plVar7[1] = 0;
            uVar22 = 0;
          }
          else {
            uVar22 = plVar7[1];
          }
        }
        if ((uVar22 & uVar22 - 1) == 0) {
          unaff_x28 = (ulong)((int)uVar22 - 1U & uVar3);
        }
        else {
          unaff_x28 = uVar20;
          if (uVar22 <= uVar20) {
            uVar9 = 0;
            if (uVar22 != 0) {
              uVar9 = uVar20 / uVar22;
            }
            unaff_x28 = uVar20 - uVar9 * uVar22;
          }
        }
      }
      lVar17 = *plVar7;
      plVar12 = *(long **)(lVar17 + unaff_x28 * 8);
      if (plVar12 == (long *)0x0) {
        *plVar11 = *plVar1;
        *plVar1 = (long)plVar11;
        *(long **)(lVar17 + unaff_x28 * 8) = plVar1;
        if (*plVar11 != 0) {
          uVar20 = *(ulong *)(*plVar11 + 8);
          if ((uVar22 & uVar22 - 1) == 0) {
            uVar20 = uVar20 & uVar22 - 1;
          }
          else if (uVar22 <= uVar20) {
            uVar9 = 0;
            if (uVar22 != 0) {
              uVar9 = uVar20 / uVar22;
            }
            uVar20 = uVar20 - uVar9 * uVar22;
          }
          *(long **)(*plVar7 + uVar20 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar12;
        *plVar12 = (long)plVar11;
      }
      lVar19 = plVar7[3] + 1;
      plVar7[3] = lVar19;
LAB_10005c354:
      puVar8 = puVar8 + 8;
    } while (puVar8 != puVar2);
  }
  return plVar7;
}



/* Entry: 10005bfdc; end: 10005c403;  */

long * FUN_10005bfdc(long *param_1,uint *param_2,long param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong unaff_x28;
  long lVar20;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    lVar16 = 0;
    plVar1 = param_1 + 2;
    puVar2 = param_2 + param_3 * 8;
    do {
      uVar3 = *param_2;
      uVar17 = (ulong)uVar3;
      uVar19 = param_1[1];
      if (uVar19 != 0) {
        uVar8 = uVar19 - 1;
        uVar18 = (uint)uVar19;
        if ((uVar19 & uVar8) == 0) {
          unaff_x28 = (ulong)(uVar18 - 1 & uVar3);
        }
        else {
          unaff_x28 = uVar17;
          if (uVar19 <= uVar17) {
            uVar4 = 0;
            if (uVar18 != 0) {
              uVar4 = uVar3 / uVar18;
            }
            unaff_x28 = (ulong)(uVar3 - uVar4 * uVar18);
          }
        }
        plVar10 = *(long **)(*param_1 + unaff_x28 * 8);
        if (plVar10 != (long *)0x0) {
          do {
            while( true ) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) goto LAB_10005c0b4;
              uVar12 = plVar10[1];
              if (uVar12 != uVar17) break;
              if (*(uint *)(plVar10 + 2) == uVar3) goto LAB_10005c354;
            }
            if ((uVar19 & uVar8) == 0) {
              uVar12 = uVar12 & uVar8;
            }
            else if (uVar19 <= uVar12) {
              uVar9 = 0;
              if (uVar19 != 0) {
                uVar9 = uVar12 / uVar19;
              }
              uVar12 = uVar12 - uVar9 * uVar19;
            }
          } while (uVar12 == unaff_x28);
        }
      }
LAB_10005c0b4:
      plVar10 = (long *)0x30;
      func_0x000107c60e20();
      *plVar10 = 0;
      plVar10[1] = uVar17;
      *(uint *)(plVar10 + 2) = uVar3;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        FUN_100033dac(plVar10 + 3,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        lVar16 = param_1[3];
      }
      else {
        lVar20 = *(long *)(param_2 + 4);
        lVar7 = *(long *)(param_2 + 2);
        plVar10[5] = *(long *)(param_2 + 6);
        plVar10[4] = lVar20;
        plVar10[3] = lVar7;
      }
      if ((uVar19 == 0) || (*(float *)(param_1 + 4) * (float)uVar19 < (float)(lVar16 + 1))) {
        uVar8 = 1;
        if (2 < uVar19) {
          uVar8 = (ulong)((uVar19 & uVar19 - 1) != 0);
        }
        uVar8 = uVar8 | uVar19 << 1;
        uVar19 = (ulong)((float)(lVar16 + 1) / *(float *)(param_1 + 4));
        if (uVar8 <= uVar19) {
          uVar8 = uVar19;
        }
        if (uVar8 - 1 == 0) {
          uVar8 = 2;
        }
        else if ((uVar8 & uVar8 - 1) != 0) {
          func_0x000107c60c44();
        }
        uVar19 = param_1[1];
        if (uVar19 < uVar8) {
LAB_10005c170:
          if (uVar8 >> 0x3d != 0) {
            func_0x000107c2b044();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10005c3c8);
            (*pcVar6)();
          }
          lVar16 = uVar8 << 3;
          func_0x000107c60e20();
          lVar7 = *param_1;
          *param_1 = lVar16;
          if (lVar7 != 0) {
            func_0x000107c60e14();
          }
          uVar19 = 0;
          param_1[1] = uVar8;
          do {
            *(undefined8 *)(*param_1 + uVar19 * 8) = 0;
            uVar19 = uVar19 + 1;
          } while (uVar8 != uVar19);
          plVar11 = (long *)*plVar1;
          uVar19 = uVar8;
          if (plVar11 != (long *)0x0) {
            uVar12 = plVar11[1];
            uVar9 = uVar8 - 1;
            if ((uVar8 & uVar9) == 0) {
              uVar12 = uVar12 & uVar9;
            }
            else if (uVar8 <= uVar12) {
              uVar15 = 0;
              if (uVar8 != 0) {
                uVar15 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar15 * uVar8;
            }
            *(long **)(*param_1 + uVar12 * 8) = plVar1;
            plVar13 = (long *)*plVar11;
            while (plVar13 != (long *)0x0) {
              uVar15 = plVar13[1];
              if ((uVar8 & uVar9) == 0) {
                uVar15 = uVar15 & uVar9;
              }
              else if (uVar8 <= uVar15) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar15 / uVar8;
                }
                uVar15 = uVar15 - uVar5 * uVar8;
              }
              plVar14 = plVar13;
              if (uVar15 != uVar12) {
                lVar16 = *param_1;
                if (*(long *)(lVar16 + uVar15 * 8) == 0) {
                  *(long **)(lVar16 + uVar15 * 8) = plVar11;
                  uVar12 = uVar15;
                }
                else {
                  *plVar11 = *plVar13;
                  *plVar13 = **(undefined8 **)(lVar16 + uVar15 * 8);
                  **(long **)(lVar16 + uVar15 * 8) = (long)plVar13;
                  plVar14 = plVar11;
                }
              }
              plVar11 = plVar14;
              plVar13 = (long *)*plVar14;
            }
          }
        }
        else if (uVar8 < uVar19) {
          uVar12 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
          if ((uVar19 < 3) || ((uVar19 & uVar19 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar12) {
            uVar12 = 1L << (-LZCOUNT(uVar12 - 1) & 0x3fU);
          }
          if (uVar8 <= uVar12) {
            uVar8 = uVar12;
          }
          if (uVar8 < uVar19) {
            if (uVar8 != 0) goto LAB_10005c170;
            lVar16 = *param_1;
            *param_1 = 0;
            if (lVar16 != 0) {
              func_0x000107c60e14();
            }
            param_1[1] = 0;
            uVar19 = 0;
          }
          else {
            uVar19 = param_1[1];
          }
        }
        if ((uVar19 & uVar19 - 1) == 0) {
          unaff_x28 = (ulong)((int)uVar19 - 1U & uVar3);
        }
        else {
          unaff_x28 = uVar17;
          if (uVar19 <= uVar17) {
            uVar8 = 0;
            if (uVar19 != 0) {
              uVar8 = uVar17 / uVar19;
            }
            unaff_x28 = uVar17 - uVar8 * uVar19;
          }
        }
      }
      lVar16 = *param_1;
      plVar11 = *(long **)(lVar16 + unaff_x28 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar10 = *plVar1;
        *plVar1 = (long)plVar10;
        *(long **)(lVar16 + unaff_x28 * 8) = plVar1;
        if (*plVar10 != 0) {
          uVar17 = *(ulong *)(*plVar10 + 8);
          if ((uVar19 & uVar19 - 1) == 0) {
            uVar17 = uVar17 & uVar19 - 1;
          }
          else if (uVar19 <= uVar17) {
            uVar8 = 0;
            if (uVar19 != 0) {
              uVar8 = uVar17 / uVar19;
            }
            uVar17 = uVar17 - uVar8 * uVar19;
          }
          *(long **)(*param_1 + uVar17 * 8) = plVar10;
        }
      }
      else {
        *plVar10 = *plVar11;
        *plVar11 = (long)plVar10;
      }
      lVar16 = param_1[3] + 1;
      param_1[3] = lVar16;
LAB_10005c354:
      param_2 = param_2 + 8;
    } while (param_2 != puVar2);
  }
  return param_1;
}



/* Entry: 10005c404; end: 10005c4e7;  */

void FUN_10005c404(void)

{
  undefined1 auStack_1f8 [448];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ebfe0 = 0;
  uRam00000001137ebfe8 = 0;
  func_0x000107c610b4(auStack_1f8,&PTR_s_b_110c36e68,0x1b0);
  FUN_100057cfc(0x1137ec000,auStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ec000,0x100000000);
  func_0x000107c610b4(auStack_1f8,&PTR_DAT_110c37018,0x1c0);
  FUN_1000584bc(0x1137ec028,auStack_1f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ec028,0x100000000);
  uRam00000001137ebff8 = 0x41a0000041700000;
  uRam00000001137ebff0 = 0xc1a00000c1700000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  uRam00000001137ec058 = 0;
  uRam00000001137ec060 = 0;
  uRam00000001137ec078 = 0;
  uRam00000001137ec070 = 0x3f80000000000001;
  uRam00000001137ec120 = 0;
  uRam00000001137ec130 = 0;
  uRam00000001137ec128 = 0;
  uRam00000001137ec140 = 0;
  uRam00000001137ec138 = 0;
  uRam00000001137ec150 = 0;
  uRam00000001137ec148 = 0;
  uRam00000001137ec160 = 0;
  uRam00000001137ec158 = 0;
  uRam00000001137ec170 = 0;
  uRam00000001137ec168 = 0;
  func_0x000107c60e34(&UNK_10aa271e8,0x1137ec120,0x100000000);
  uRam0000000113835560 = 0;
  uRam0000000113835568 = 0;
  uRam0000000113835578 = 0x3f80000000000000;
  uRam0000000113835570 = 0;
  uRam0000000113835580 = 0;
  uRam0000000113835588 = 0;
  uRam0000000113835590 = 0;
  uRam0000000113835598 = 0;
  uRam00000001137ec088 = 0x3f800000;
  uRam00000001137ec080 = 0x3f8000003f800000;
  uRam00000001137ec098 = 0x3f80000000000000;
  uRam00000001137ec090 = 0;
  uRam00000001137ec0a8 = 0;
  uRam00000001137ec0a0 = 0x3f800000;
  uRam00000001137ec0b8 = 0;
  uRam00000001137ec0b0 = 0x3f80000000000000;
  uRam00000001137ec0c8 = 0x3f800000;
  uRam00000001137ec0c0 = 0;
  uRam00000001137ec0d0 = 0;
  uRam00000001137ec0d8 = 0;
  puRam000000011382b1e0 = &UNK_10aa4ad3c;
  uRam00000001137ec050 = 0;
  return;
}



/* Entry: 10005c4e8; end: 10005c70f;  */

void FUN_10005c4e8(void)

{
  uRam00000001137ec058 = 0;
  uRam00000001137ec060 = 0;
  uRam00000001137ec078 = 0;
  uRam00000001137ec070 = 0x3f80000000000001;
  uRam00000001137ec120 = 0;
  uRam00000001137ec130 = 0;
  uRam00000001137ec128 = 0;
  uRam00000001137ec140 = 0;
  uRam00000001137ec138 = 0;
  uRam00000001137ec150 = 0;
  uRam00000001137ec148 = 0;
  uRam00000001137ec160 = 0;
  uRam00000001137ec158 = 0;
  uRam00000001137ec170 = 0;
  uRam00000001137ec168 = 0;
  func_0x000107c60e34(&UNK_10aa271e8,0x1137ec120,0x100000000);
  uRam0000000113835560 = 0;
  uRam0000000113835568 = 0;
  uRam0000000113835578 = 0x3f80000000000000;
  uRam0000000113835570 = 0;
  uRam0000000113835580 = 0;
  uRam0000000113835588 = 0;
  uRam0000000113835590 = 0;
  uRam0000000113835598 = 0;
  uRam00000001137ec088 = 0x3f800000;
  uRam00000001137ec080 = 0x3f8000003f800000;
  uRam00000001137ec098 = 0x3f80000000000000;
  uRam00000001137ec090 = 0;
  uRam00000001137ec0a8 = 0;
  uRam00000001137ec0a0 = 0x3f800000;
  uRam00000001137ec0b8 = 0;
  uRam00000001137ec0b0 = 0x3f80000000000000;
  uRam00000001137ec0c8 = 0x3f800000;
  uRam00000001137ec0c0 = 0;
  uRam00000001137ec0d0 = 0;
  uRam00000001137ec0d8 = 0;
  puRam000000011382b1e0 = &UNK_10aa4ad3c;
  uRam00000001137ec050 = 0;
  return;
}



/* Entry: 10005c710; end: 10005c9af;  */

void FUN_10005c710(void)

{
  undefined *puVar1;
  undefined2 uStack_6a3;
  undefined1 uStack_6a1;
  undefined8 uStack_6a0;
  undefined *puStack_698;
  undefined8 **ppuStack_690;
  code *pcStack_688;
  undefined2 uStack_680;
  undefined6 uStack_67e;
  char cStack_669;
  undefined *puStack_668;
  undefined **ppuStack_660;
  undefined *puStack_658;
  long lStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 **ppuStack_610;
  code *pcStack_608;
  undefined1 auStack_5f8 [448];
  long lStack_438;
  undefined1 **ppuStack_410;
  undefined8 uStack_408;
  undefined1 auStack_3f8 [448];
  long lStack_238;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [448];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ec258 = 0;
  uRam00000001137ec260 = 0;
  func_0x000107c610b4(auStack_1f8,&PTR_s_b_110c45408,0x1b0);
  FUN_100057cfc(0x1137ec268,auStack_1f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ec268,0x100000000);
  func_0x000107c610b4(auStack_1f8,&PTR_DAT_110c455b8,0x1c0);
  FUN_1000584bc(0x1137ec290,auStack_1f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ec290,0x100000000);
  uRam0000000113835668 = 0x503;
  uRam000000011383566a = 4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  uStack_208 = 0x10005c800;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ec2b8 = 0;
  uRam00000001137ec2c0 = 0;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x000107c610b4(auStack_3f8,&PTR_s_b_110c465b8,0x1b0);
  FUN_100057cfc(0x1137ec370,auStack_3f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ec370,0x100000000);
  func_0x000107c610b4(auStack_3f8,&PTR_DAT_110c46768,0x1c0);
  FUN_1000584bc(0x1137ec398,auStack_3f8,0xe);
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ec398,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return;
  }
  func_0x000107c60e78();
  uStack_408 = 0x10005c8d8;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ec3e8 = 0;
  uRam00000001137ec3f0 = 0;
  ppuStack_410 = &puStack_210;
  func_0x000107c610b4(auStack_5f8,&PTR_s_b_110c47310,0x1b0);
  FUN_100057cfc(0x1137ec420,auStack_5f8,0x12);
  func_0x000107c60e34(&UNK_10a1595e0,0x1137ec420,0x100000000);
  func_0x000107c610b4(auStack_5f8,&PTR_DAT_110c474c0,0x1c0);
  FUN_1000584bc(0x1137ec448,auStack_5f8,0xe);
  puVar1 = &UNK_10a1595e4;
  func_0x000107c60e34(&UNK_10a1595e4,0x1137ec448,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
    return;
  }
  func_0x000107c60e78();
  uStack_620 = 0x1137ec3e8;
  uStack_618 = 0x100000000;
  pcStack_608 = FUN_10005c9b0;
  lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_610 = &ppuStack_410;
  if ((bRam0000000113300cb0 & 1) == 0) {
    puVar1 = (undefined *)0x113300cb0;
    func_0x000107c60e48();
    if ((int)puVar1 != 0) {
      cStack_669 = '\x01';
      uStack_680 = 0x30;
      puStack_668 = &UNK_10a234e24;
      ppuStack_660 = &PTR_DAT_110bb5650;
      puStack_658 = &UNK_10a219574;
      FUN_100059bc4(0x113300ba8,&UNK_10f646716,0x28,&uStack_680,&puStack_668);
      (*(code *)*ppuStack_660)(&ppuStack_660);
      if (cStack_669 < '\0') {
        func_0x000107c60e14(CONCAT62(uStack_67e,uStack_680));
      }
      func_0x000107c60e34(&UNK_10a2196fc,0x113300ba8,0x100000000);
      puVar1 = (undefined *)0x113300cb0;
      func_0x000107c60e4c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
    return;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_660)(&ppuStack_660);
  if (cStack_669 < '\0') {
    func_0x000107c60e14(CONCAT62(uStack_67e,uStack_680));
  }
  func_0x000107c60e44(0x113300cb0);
  func_0x000107c60bd8(puVar1);
  uStack_6a0 = 0x1137ec3e8;
  pcStack_688 = FUN_10005caf4;
  uRam00000001137ec4a8 = 0;
  uRam00000001137ec4b0 = 0;
  uStack_6a3 = 0x201;
  uStack_6a1 = 4;
  uRam00000001137ec568 = 0;
  uRam00000001137ec570 = 0;
  uRam00000001137ec560 = 0;
  puStack_698 = puVar1;
  ppuStack_690 = &ppuStack_610;
  FUN_100053640(0x1137ec560,&uStack_6a3,&uStack_6a0,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137ec560,0x100000000);
  return;
}



/* Entry: 10005c9b0; end: 10005caf3;  */

void FUN_10005c9b0(undefined8 param_1)

{
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  char cStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113300cb0 & 1) == 0) {
    param_1 = 0x113300cb0;
    func_0x000107c60e48();
    if ((int)param_1 != 0) {
      cStack_69 = '\x01';
      uStack_80 = 0x30;
      puStack_68 = &UNK_10a234e24;
      ppuStack_60 = &PTR_DAT_110bb5650;
      puStack_58 = &UNK_10a219574;
      FUN_100059bc4(0x113300ba8,&UNK_10f646716,0x28,&uStack_80,&puStack_68);
      (*(code *)*ppuStack_60)(&ppuStack_60);
      if (cStack_69 < '\0') {
        func_0x000107c60e14(CONCAT62(uStack_7e,uStack_80));
      }
      func_0x000107c60e34(&UNK_10a2196fc,0x113300ba8,0x100000000);
      param_1 = 0x113300cb0;
      func_0x000107c60e4c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  if (cStack_69 < '\0') {
    func_0x000107c60e14(CONCAT62(uStack_7e,uStack_80));
  }
  func_0x000107c60e44(0x113300cb0);
  func_0x000107c60bd8(param_1);
  uRam00000001137ec4a8 = 0;
  uRam00000001137ec4b0 = 0;
  uStack_a3 = 0x201;
  uStack_a1 = 4;
  uRam00000001137ec568 = 0;
  uRam00000001137ec570 = 0;
  uRam00000001137ec560 = 0;
  FUN_100053640(0x1137ec560,&uStack_a3,&stack0xffffffffffffff60,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137ec560,0x100000000);
  return;
}



/* Entry: 10005caf4; end: 10005cc57;  */

void FUN_10005caf4(void)

{
  undefined2 uStack_23;
  undefined1 uStack_21;
  
  uRam00000001137ec4a8 = 0;
  uRam00000001137ec4b0 = 0;
  uStack_23 = 0x201;
  uStack_21 = 4;
  uRam00000001137ec568 = 0;
  uRam00000001137ec570 = 0;
  uRam00000001137ec560 = 0;
  FUN_100053640(0x1137ec560,&uStack_23,&stack0xffffffffffffffe0,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137ec560,0x100000000);
  return;
}



/* Entry: 10005cc58; end: 10005ccc3;  */

void FUN_10005cc58(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  func_0x00010005cc1c(param_1,param_4);
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 10005ccc4; end: 10005d283;  */

/* WARNING: Removing unreachable block (ram,0x00010005d1b0) */
/* WARNING: Removing unreachable block (ram,0x00010005d220) */

void FUN_10005ccc4(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
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
  int aiStack_130 [2];
  long alStack_128 [3];
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long alStack_88 [5];
  
  alStack_88[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uRam00000001137ec6b0 = 0;
  uRam00000001137ec6a8 = 0;
  uRam00000001137ec6c8 = 0x4000000040;
  uStack_138 = 0x3f8000000000001b;
  lStack_1f0 = 0;
  uStack_1e8 = 0;
  lStack_1f8 = 0;
  FUN_10005cc58(&lStack_1f8,&uStack_138,aiStack_130,1);
  aiStack_130[0] = 0;
  alStack_128[1] = 0;
  alStack_128[2] = 0;
  alStack_128[0] = 0;
  FUN_10005d284(alStack_128,lStack_1f8,lStack_1f0,lStack_1f0 - lStack_1f8 >> 3);
  uStack_168 = 0x3e2aaaab00000024;
  uStack_160 = 0x3e2aaaab00000025;
  uStack_158 = 0x3e2aaaab00000026;
  uStack_150 = 0x3e2aaaab00000027;
  uStack_148 = 0x3e2aaaab00000028;
  uStack_140 = 0x3e2aaaab00000029;
  lStack_208 = 0;
  uStack_200 = 0;
  lStack_210 = 0;
  FUN_10005cc58(&lStack_210,&uStack_168,&uStack_138,6);
  uStack_110 = 1;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_108 = 0;
  FUN_10005d284(&uStack_108,lStack_210,lStack_208,lStack_208 - lStack_210 >> 3);
  uStack_198 = 0x3e2aaaab0000002a;
  uStack_190 = 0x3e2aaaab0000002b;
  uStack_188 = 0x3e2aaaab0000002c;
  uStack_180 = 0x3e2aaaab0000002d;
  uStack_178 = 0x3e2aaaab0000002e;
  uStack_170 = 0x3e2aaaab0000002f;
  lStack_220 = 0;
  uStack_218 = 0;
  lStack_228 = 0;
  FUN_10005cc58(&lStack_228,&uStack_198,&uStack_168,6);
  uStack_f0 = 2;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  FUN_10005d284(&uStack_e8,lStack_228,lStack_220,lStack_220 - lStack_228 >> 3);
  uStack_1d8 = 0x3e0000000000003c;
  uStack_1d0 = 0x3e0000000000003d;
  uStack_1c8 = 0x3e0000000000003e;
  uStack_1c0 = 0x3e0000000000003f;
  uStack_1b8 = 0x3e00000000000040;
  uStack_1b0 = 0x3e00000000000041;
  uStack_1a8 = 0x3e00000000000042;
  uStack_1a0 = 0x3e00000000000043;
  lStack_238 = 0;
  uStack_230 = 0;
  puStack_240 = (undefined8 *)0x0;
  FUN_10005cc58(&puStack_240,&uStack_1d8,&uStack_198,8);
  puVar9 = puStack_240;
  uStack_d0 = 3;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  FUN_10005d284(&uStack_c8,puStack_240,lStack_238,lStack_238 - (long)puStack_240 >> 3);
  uStack_1e0 = 0x3f8000000000001e;
  puStack_250 = (undefined8 *)0x0;
  uStack_248 = 0;
  puStack_258 = (undefined8 *)0x0;
  FUN_10005cc58(&puStack_258,&uStack_1e0,&uStack_1d8,1);
  uStack_b0 = 4;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  lVar5 = (long)puStack_250 - (long)puStack_258 >> 3;
  puVar3 = puStack_258;
  puVar4 = puStack_250;
  FUN_10005d284(&uStack_a8);
  lVar6 = 0;
  lVar8 = 0;
  uStack_90 = 5;
  alStack_88[1] = 0;
  alStack_88[2] = 0;
  alStack_88[0] = 0;
  lRam00000001137ec6f0 = 0;
  puRam00000001137ec6e8 = (undefined8 *)0x0;
  plRam00000001137ec6e0 = (long *)0x1137ec6e8;
  puVar7 = (undefined8 *)0x1137ec6e8;
  do {
    iVar1 = *(int *)((long)aiStack_130 + lVar8);
    puVar10 = puVar7;
    puVar12 = puVar7;
    if (plRam00000001137ec6e0 == (long *)0x1137ec6e8) {
      if (puRam00000001137ec6e8 == (undefined8 *)0x0) goto LAB_10005d06c;
      if (lVar6 == 0) {
        puVar10 = (undefined8 *)0x1137ec6f0;
        goto LAB_10005d06c;
      }
    }
    else {
      puVar2 = puRam00000001137ec6e8;
      if (puRam00000001137ec6e8 != (undefined8 *)0x0) {
        do {
          puVar12 = puVar2;
          puVar2 = (undefined8 *)puVar12[1];
        } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
        puVar2 = puRam00000001137ec6e8;
        if (*(int *)(puVar12 + 4) < iVar1) {
LAB_10005d04c:
          puVar10 = puVar12 + 1;
        }
        else {
          do {
            while (puVar10 = puVar2, puVar12 = puVar10, *(int *)(puVar10 + 4) <= iVar1) {
              if (iVar1 <= *(int *)(puVar10 + 4)) goto LAB_10005d0cc;
              puVar2 = (undefined8 *)puVar10[1];
              if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) goto LAB_10005d04c;
            }
            puVar2 = (undefined8 *)*puVar10;
            puVar9 = puVar10;
          } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
        }
      }
LAB_10005d06c:
      puVar3 = (undefined8 *)0x40;
      func_0x000107c60e20();
      puVar3[5] = 0;
      *(int *)(puVar3 + 4) = iVar1;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar4 = *(undefined8 **)((long)alStack_128 + lVar8 + 8);
      lVar5 = (long)puVar4 - *(long *)((long)alStack_128 + lVar8) >> 3;
      FUN_10005d284();
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = puVar12;
      *puVar10 = puVar3;
      if ((long *)*plRam00000001137ec6e0 != (long *)0x0) {
        puVar3 = (undefined8 *)*puVar10;
        plRam00000001137ec6e0 = (long *)*plRam00000001137ec6e0;
      }
      FUN_10005d2f4(puRam00000001137ec6e8);
      lVar6 = lRam00000001137ec6f0 + 1;
      puVar9 = puVar10;
      lRam00000001137ec6f0 = lVar6;
    }
LAB_10005d0cc:
    lVar8 = lVar8 + 0x20;
    if (lVar8 == 0xc0) {
      lVar6 = 0;
      do {
        if (*(long *)((long)alStack_88 + lVar6) != 0) {
          *(long *)((long)alStack_88 + lVar6 + 8) = *(long *)((long)alStack_88 + lVar6);
          func_0x000107c60e14();
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != -0xc0);
      if (puStack_258 != (undefined8 *)0x0) {
        func_0x000107c60e14();
      }
      if (puStack_240 != (undefined8 *)0x0) {
        func_0x000107c60e14();
      }
      if (lStack_228 != 0) {
        func_0x000107c60e14();
      }
      if (lStack_210 != 0) {
        func_0x000107c60e14();
      }
      lVar6 = lStack_1f8;
      if (lStack_1f8 != 0) {
        func_0x000107c60e14();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_88[3]) {
        return;
      }
      func_0x000107c60e78();
      func_0x000107c60e14(0x1137ec6e0);
      piVar11 = (int *)0x1137ec080;
      if (puVar9 != (undefined8 *)0x0) {
        func_0x000107c60e14(puVar9);
      }
      func_0x000107c60e14(0xc0);
      if (aiStack_130 != (int *)0x0) {
        func_0x000107c60e14(aiStack_130);
      }
      func_0x000107c60e14(0xffffffffffffff40);
      if (aiStack_130 != (int *)0x1137ec080) {
        do {
          if (*(long *)(piVar11 + -6) != 0) {
            *(long *)(piVar11 + -4) = *(long *)(piVar11 + -6);
            func_0x000107c60e14();
          }
          piVar11 = piVar11 + -8;
        } while (piVar11 != aiStack_130);
      }
      func_0x000107c60bd8();
      if (lVar5 != 0) {
        func_0x00010005cc1c();
        puVar7 = *(undefined8 **)(lVar6 + 8);
        for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
          *puVar7 = *puVar3;
          puVar7 = puVar7 + 1;
        }
        *(undefined8 **)(lVar6 + 8) = puVar7;
      }
      return;
    }
  } while( true );
}



/* Entry: 10005d284; end: 10005d2f3;  */

void FUN_10005d284(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    func_0x00010005cc1c(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10005d2f4; end: 10005d49f;  */

void FUN_10005d2f4(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (*(byte *)(plVar3 + 3) & 1) != 0)) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar4 = (long *)*plVar2;
    if (plVar4 == plVar3) {
      if ((plVar2[1] == 0) || (plVar7 = (long *)(plVar2[1] + 0x18), *(char *)plVar7 == '\x01')) {
        if ((long *)*plVar3 != param_2) {
          plVar7 = (long *)plVar3[1];
          lVar5 = *plVar7;
          plVar3[1] = lVar5;
          plVar4 = plVar3;
          if (lVar5 != 0) {
            *(long **)(lVar5 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
            plVar4 = (long *)*plVar2;
          }
          plVar7[2] = (long)plVar2;
          lVar5 = 0;
          if (plVar4 != plVar3) {
            lVar5 = 8;
          }
          *(long **)((long)plVar2 + lVar5) = plVar7;
          *plVar7 = (long)plVar3;
          plVar3[2] = (long)plVar7;
          plVar2 = (long *)plVar7[2];
          plVar4 = (long *)*plVar2;
          plVar3 = plVar7;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar5 = plVar4[1];
        *plVar2 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar2;
        }
        puVar6 = (undefined8 *)plVar2[2];
        plVar4[2] = (long)puVar6;
        lVar5 = 0;
        if ((long *)*puVar6 != plVar2) {
          lVar5 = 8;
        }
        *(long **)((long)puVar6 + lVar5) = plVar4;
        plVar4[1] = (long)plVar2;
        plVar2[2] = (long)plVar4;
        return;
      }
    }
    else if ((plVar4 == (long *)0x0) || (plVar7 = plVar4 + 3, (char)*plVar7 == '\x01')) {
      plVar4 = (long *)*plVar3;
      if (plVar4 == param_2) {
        lVar5 = plVar4[1];
        *plVar3 = lVar5;
        if (lVar5 != 0) {
          *(long **)(lVar5 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        plVar4[2] = (long)plVar2;
        lVar5 = 0;
        if ((long *)*plVar2 != plVar3) {
          lVar5 = 8;
        }
        *(long **)((long)plVar2 + lVar5) = plVar4;
        plVar4[1] = (long)plVar3;
        plVar3[2] = (long)plVar4;
        plVar2 = (long *)plVar4[2];
        plVar3 = plVar4;
      }
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar2 + 3) = 0;
      plVar3 = (long *)plVar2[1];
      lVar5 = *plVar3;
      plVar2[1] = lVar5;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar2;
      }
      puVar6 = (undefined8 *)plVar2[2];
      plVar3[2] = (long)puVar6;
      lVar5 = 0;
      if ((long *)*puVar6 != plVar2) {
        lVar5 = 8;
      }
      *(long **)((long)puVar6 + lVar5) = plVar3;
      *plVar3 = (long)plVar2;
      plVar2[2] = (long)plVar3;
      return;
    }
    *(undefined1 *)(plVar3 + 3) = 1;
    bVar1 = plVar2 == param_1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar7 = '\x01';
    param_2 = plVar2;
  } while( true );
}



/* Entry: 10005d4a0; end: 10005d4e7;  */

void FUN_10005d4a0(void)

{
  uRam00000001137ec740 = 0;
  uRam00000001137ec748 = 0;
  FUN_10005375c(0x1137ec760,&UNK_10f69edec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)
            (PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340,
             0x1137ec760,0x100000000);
  return;
}



/* Entry: 10005d4e8; end: 10005d607;  */

/* WARNING: Possible PIC construction at 0x00010005d554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010005d580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010005d5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010005d5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010005d5b4) */
/* WARNING: Removing unreachable block (ram,0x00010005d584) */
/* WARNING: Removing unreachable block (ram,0x00010005d558) */
/* WARNING: Removing unreachable block (ram,0x00010005d5e0) */

void FUN_10005d4e8(undefined8 param_1)

{
  uRam00000001137ecaf8 = 0;
  uRam00000001137ecb48 = 0x4059000000000000;
  uRam00000001137ecb40 = 0x4057c3020c49ba5e;
  uRam00000001137ecb50 = 0x405b3883126e978d;
  func_0x000107c60d9c();
  uRam00000001137ecb00 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(PTR___ZNSt3__15mutexD1Ev_110346798,0x113307068,0x100000000)
  ;
  return;
}



/* Entry: 10005d608; end: 10005d693;  */

/* WARNING: Possible PIC construction at 0x00010005d670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010005d674) */

void FUN_10005d608(void)

{
  uRam00000001137ecc50 = 0;
  uRam00000001137ecc78 = 0x4059000000000000;
  uRam00000001137ecc70 = 0x4057c3020c49ba5e;
  uRam00000001137ecc80 = 0x405b3883126e978d;
  uRam00000001137ecc98 = 0;
  uRam00000001137ecc90 = 0x3f800000;
  uRam00000001137ecca8 = 0;
  uRam00000001137ecca0 = 0x3f800000;
  uRam00000001137eccb0 = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(PTR___ZNSt3__15mutexD1Ev_110346798,0x113307388,0x100000000)
  ;
  return;
}



/* Entry: 10005d694; end: 10005d71f;  */

void FUN_10005d694(void)

{
  uRam00000001137ecd38 = 0;
  uRam0000000113835d30 = 0;
  uRam0000000113835d28 = 0;
  uRam0000000113835d40 = 0;
  uRam0000000113835d38 = 0;
  uRam0000000113835d50 = 0;
  uRam0000000113835d48 = 0;
  uRam0000000113835d60 = 0;
  uRam0000000113835d58 = 0;
  uRam0000000113835d70 = 0;
  uRam0000000113835d68 = 0;
  uRam0000000113835d80 = 0;
  uRam0000000113835d78 = 0;
  uRam0000000113835d90 = 0;
  uRam0000000113835d88 = 0;
  uRam0000000113835da0 = 0;
  uRam0000000113835d98 = 0;
  uRam0000000113835db0 = 0;
  uRam0000000113835da8 = 0;
  uRam0000000113835dc0 = 0;
  uRam0000000113835db8 = 0;
  uRam0000000113835dd0 = 0;
  uRam0000000113835dc8 = 0;
  uRam0000000113835de0 = 0;
  uRam0000000113835dd8 = 0;
  uRam0000000113835df0 = 0;
  uRam0000000113835de8 = 0;
  uRam0000000113835e00 = 0;
  uRam0000000113835df8 = 0;
  uRam0000000113835e10 = 0;
  uRam0000000113835e08 = 0;
  uRam0000000113835e20 = 0;
  uRam0000000113835e18 = 0;
  uRam0000000113835e80 = 0;
  uRam0000000113835e78 = 0;
  uRam0000000113835e90 = 0;
  uRam0000000113835e88 = 0;
  uRam0000000113835ea0 = 0;
  uRam0000000113835e98 = 0;
  uRam0000000113835e28 = 0x32aaaba7;
  uRam0000000113835e38 = 0;
  uRam0000000113835e30 = 0;
  uRam0000000113835e48 = 0;
  uRam0000000113835e40 = 0;
  uRam0000000113835e58 = 0;
  uRam0000000113835e50 = 0;
  uRam0000000113835e60 = 0;
  puRam0000000113835e68 = &UNK_1069b161c;
  ppuRam0000000113835e70 = &PTR_DAT_110950c70;
  uRam0000000113835ea8 = 0x32aaaba7;
  uRam0000000113835eb8 = 0;
  uRam0000000113835eb0 = 0;
  uRam0000000113835ec8 = 0;
  uRam0000000113835ec0 = 0;
  uRam0000000113835ed8 = 0;
  uRam0000000113835ed0 = 0;
  uRam0000000113835ee0 = 0;
  return;
}



/* Entry: 10005d720; end: 10005d793;  */

void FUN_10005d720(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113835ef8 = 0x8000000000000020;
  uRam0000000113835ef0 = 0x1c;
  puRam0000000113835ee8 = puVar1;
  puVar1[1] = 0x494a4f4d5449425f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar1 + 0x14) = 0x594649544f4e5f54;
  *(undefined8 *)((long)puVar1 + 0xc) = 0x494d455f494a4f4d;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  uRam0000000113835f00 = 0;
  puRam0000000113835f08 = &UNK_10a09e854;
  ppuRam0000000113835f10 = &PTR_DAT_110ba0fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a08e670,0x113835ee8,0x100000000);
  return;
}



/* Entry: 10005d794; end: 10005d86f;  */

/* WARNING: Possible PIC construction at 0x00010005d810: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010005d814) */

void FUN_10005d794(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam0000000113835f58 = 0x8000000000000020;
  uRam0000000113835f50 = 0x1d;
  puRam0000000113835f48 = puVar1;
  puVar1[1] = 0x4c4c45434e41435f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar1 + 0x15) = 0x44454c42414e455f;
  *(undefined8 *)((long)puVar1 + 0xd) = 0x4e4f4954414c4c45;
  *(undefined1 *)((long)puVar1 + 0x1d) = 0;
  uRam0000000113835f60 = 0;
  puRam0000000113835f68 = &UNK_10a09e854;
  ppuRam0000000113835f70 = &PTR_DAT_110ba0fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a08e670,0x113835f48,0x100000000);
  return;
}



/* Entry: 10005d870; end: 10005da07;  */

void FUN_10005d870(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = 0;
  uStack_90 = 0x656e6f4e;
  lStack_80 = 0x400000000000000;
  puStack_78 = &UNK_10ad059bc;
  ppuStack_70 = &PTR_DAT_110c6e2c0;
  puStack_68 = &UNK_10ad05698;
  FUN_100053ca0(0x113836008,&UNK_10f6a2e74,0x29,&uStack_90,&puStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_80 < 0) {
    func_0x000107c60e14(uStack_90);
  }
  func_0x000107c60e34(&UNK_10a03d294,0x113836008,0x100000000);
  uStack_88 = 0;
  uStack_90 = 0x656e6f4e;
  lStack_80 = 0x400000000000000;
  puStack_78 = &UNK_10ad059bc;
  ppuStack_70 = &PTR_DAT_110c6e2c0;
  puStack_68 = &UNK_10ad0582c;
  FUN_100053ca0(0x1138360a0,&UNK_10f6a2fe2,0x2f,&uStack_90,&puStack_78);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_80 < 0) {
    func_0x000107c60e14(uStack_90);
  }
  puVar1 = (undefined8 *)&UNK_10a03d294;
  lVar2 = 0x1138360a0;
  func_0x000107c60e34(&UNK_10a03d294,0x1138360a0,0x100000000);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  if (lStack_80 < 0) {
    func_0x000107c60e14(uStack_90);
  }
  func_0x000107c60bd8();
  *puVar1 = &PTR_DAT_110c6e2c0;
  puVar1[1] = *(undefined8 *)(lVar2 + 8);
  return;
}



/* Entry: 10005da08; end: 10005da23;  */

void FUN_10005da08(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_DAT_110c6e2c0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  return;
}



/* Entry: 10005da24; end: 10005db23;  */

/* WARNING: Possible PIC construction at 0x00010005dac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010005dba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010005dc24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010005dbac) */
/* WARNING: Removing unreachable block (ram,0x00010005dc04) */
/* WARNING: Removing unreachable block (ram,0x00010005dc0c) */
/* WARNING: Removing unreachable block (ram,0x00010005dac8) */
/* WARNING: Removing unreachable block (ram,0x00010005daf0) */
/* WARNING: Removing unreachable block (ram,0x00010005db14) */
/* WARNING: Removing unreachable block (ram,0x00010005db1c) */
/* WARNING: Removing unreachable block (ram,0x00010005dae0) */
/* WARNING: Removing unreachable block (ram,0x00010005dc28) */
/* WARNING: Removing unreachable block (ram,0x00010005dc50) */
/* WARNING: Removing unreachable block (ram,0x00010005dc74) */
/* WARNING: Removing unreachable block (ram,0x00010005dc7c) */
/* WARNING: Removing unreachable block (ram,0x00010005dc40) */

void FUN_10005da24(void)

{
  undefined2 uStack_80;
  undefined6 uStack_7e;
  char cStack_69;
  undefined *puStack_68;
  undefined **appuStack_60 [7];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  cStack_69 = '\x01';
  uStack_80 = 0x30;
  puStack_68 = &UNK_10a080f80;
  appuStack_60[0] = &PTR_DAT_110b9f408;
  FUN_100053ca0(0x113836138,&UNK_10f6a3122,0x21,&uStack_80,&puStack_68);
  (*(code *)*appuStack_60[0])(appuStack_60);
  if (cStack_69 < '\0') {
    func_0x000107c60e14(CONCAT62(uStack_7e,uStack_80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a03d294,0x113836138,0x100000000);
  return;
}



/* Entry: 10005db24; end: 10005dc83;  */

/* WARNING: Possible PIC construction at 0x00010005dba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010005dc24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010005dbac) */
/* WARNING: Removing unreachable block (ram,0x00010005dc04) */
/* WARNING: Removing unreachable block (ram,0x00010005dc0c) */
/* WARNING: Removing unreachable block (ram,0x00010005dc28) */
/* WARNING: Removing unreachable block (ram,0x00010005dc50) */
/* WARNING: Removing unreachable block (ram,0x00010005dc74) */
/* WARNING: Removing unreachable block (ram,0x00010005dc7c) */
/* WARNING: Removing unreachable block (ram,0x00010005dc40) */

void FUN_10005db24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam00000001138361e0 = 0x8000000000000020;
  uRam00000001138361d8 = 0x1f;
  puRam00000001138361d0 = puVar1;
  puVar1[1] = 0x445f4c475f47535f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar1 + 0x17) = 0x54494c425f4f4246;
  *(undefined8 *)((long)puVar1 + 0xf) = 0x5f454c4241534944;
  *(undefined1 *)((long)puVar1 + 0x1f) = 0;
  uRam00000001138361e8 = 0;
  puRam00000001138361f0 = &UNK_10a09e854;
  ppuRam00000001138361f8 = &PTR_DAT_110ba0fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a08e670,0x1138361d0,0x100000000);
  return;
}



/* Entry: 10005dc84; end: 10005dd6b;  */

void FUN_10005dc84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  uRam00000001138362d8 = 0x8000000000000028;
  uRam00000001138362d0 = 0x22;
  puRam00000001138362c8 = puVar1;
  *(undefined2 *)(puVar1 + 4) = 0x5344;
  puVar1[1] = 0x454c42415349445f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x5f524553555f4854;
  puVar1[2] = 0x49575f4141534d5f;
  *(undefined1 *)((long)puVar1 + 0x22) = 0;
  uRam00000001138362e0 = 0;
  puRam00000001138362e8 = &UNK_10a09e854;
  ppuRam00000001138362f0 = &PTR_DAT_110ba0fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a08e670,0x1138362c8,0x100000000);
  return;
}



/* Entry: 10005dd6c; end: 10005ddc3;  */

void FUN_10005dd6c(void)

{
  uRam000000011383639f = 0x15;
  uRam0000000113836390 = 0x324354455f;
  uRam0000000113836388 = 0x45524f43534e454c;
  uRam0000000113836395 = 0x45525f;
  uRam0000000113836398 = 0x4843544950;
  uRam000000011383639d = 0;
  uRam00000001138363a0 = 0;
  puRam00000001138363a8 = &UNK_10a09e854;
  ppuRam00000001138363b0 = &PTR_DAT_110ba0fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a08e670,0x113836388,0x100000000);
  return;
}



/* Entry: 10005ddc4; end: 10005df2b;  */

void FUN_10005ddc4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam00000001138363f8 = 0x8000000000000020;
  uRam00000001138363f0 = 0x1b;
  puRam00000001138363e8 = puVar1;
  puVar1[1] = 0x494e49465f4c475f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar1 + 0x13) = 0x5241454c435f4e4f;
  *(undefined8 *)((long)puVar1 + 0xb) = 0x5f4853494e49465f;
  *(undefined1 *)((long)puVar1 + 0x1b) = 0;
  uRam0000000113836400 = 0;
  uRam0000000113836404 = 0;
  uRam0000000113836408 = 0;
  uRam000000011383640c = 0;
  puRam0000000113836410 = &UNK_10a0a027c;
  ppuRam0000000113836418 = &PTR_DAT_110ba0c08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a08fdec,0x1138363e8,0x100000000);
  return;
}



/* Entry: 10005df2c; end: 10005dfd7;  */

void FUN_10005df2c(void)

{
  undefined8 *puVar1;
  
  uRam0000000113836510 = 0;
  uRam0000000113836514 = 0;
  uRam0000000113836518 = 0;
  puVar1 = (undefined8 *)0x30;
  func_0x000107c60e20();
  uRam0000000113836530 = 0x8000000000000030;
  uRam0000000113836528 = 0x2a;
  puRam0000000113836520 = puVar1;
  puVar1[1] = 0x445f48535f47535f;
  *puVar1 = 0x45524f43534e454c;
  puVar1[3] = 0x444148535f455255;
  puVar1[2] = 0x545845545f574152;
  *(undefined8 *)((long)puVar1 + 0x22) = 0x44454c42414e455f;
  *(undefined8 *)((long)puVar1 + 0x1a) = 0x5245444148535f45;
  *(undefined1 *)((long)puVar1 + 0x2a) = 0;
  uRam0000000113836538 = 0;
  puRam0000000113836548 = &UNK_10a0a027c;
  ppuRam0000000113836550 = &PTR_DAT_110ba0c08;
  puRam0000000113836588 = &UNK_10ad062ec;
  ppuRam0000000113836590 = &PTR_DAT_110c6e2d8;
  uRam000000011383653c = 0;
  uRam0000000113836540 = 0;
  uRam0000000113836544 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10ad060c8,0x113836510,0x100000000);
  return;
}



/* Entry: 10005dfd8; end: 10005e04b;  */

void FUN_10005dfd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  uRam00000001138365d8 = 0x8000000000000020;
  uRam00000001138365d0 = 0x1c;
  puRam00000001138365c8 = puVar1;
  puVar1[1] = 0x52415754464f535f;
  *puVar1 = 0x45524f43534e454c;
  *(undefined8 *)((long)puVar1 + 0x14) = 0x45444f4345445f43;
  *(undefined8 *)((long)puVar1 + 0xc) = 0x54455f4552415754;
  *(undefined1 *)((long)puVar1 + 0x1c) = 0;
  uRam00000001138365e0 = 0;
  puRam00000001138365e8 = &UNK_10a09e854;
  ppuRam00000001138365f0 = &PTR_DAT_110ba0fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10a08e670,0x1138365c8,0x100000000);
  return;
}



/* Entry: 10005e04c; end: 10005e157;  */

undefined1  [16] FUN_10005e04c(long *param_1,undefined8 *param_2,mach_header *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_x19;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *unaff_x26;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_7c8 [1920];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001137ecd80 & 1) == 0) {
    unaff_x19 = (long *)0x1137ecd80;
    param_1 = unaff_x19;
    func_0x000107c60e48();
    if ((int)param_1 != 0) {
      func_0x000107c610b4(auStack_7c8,&PTR_DAT_110c6f380,0x780);
      lVar8 = 0;
      uRam00000001137ecd90 = 0;
      uRam00000001137ecd88 = 0;
      uRam00000001137ecda0 = 0;
      uRam00000001137ecd98 = 0;
      uRam00000001137ecda8 = 0x3f800000;
      do {
        FUN_10005e158(0x1137ecd88,auStack_7c8 + lVar8,auStack_7c8 + lVar8);
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != 0x780);
      param_3 = &MACH_HEADER;
      param_2 = (undefined8 *)0x1137ecd88;
      func_0x000107c60e34(&UNK_10ad2bcb8);
      param_1 = unaff_x19;
      func_0x000107c60e4c();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = param_1;
    return auVar11;
  }
  func_0x000107c60e78();
  func_0x000107c29004(unaff_x19 + 1);
  func_0x000107c60e44(unaff_x19);
  func_0x000107c60bd8();
  plVar5 = param_1;
  FUN_10002d328();
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x26 = (long *)(uVar10 & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar9 <= plVar5) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar6 * (long)plVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar7 = (long *)*puVar3, plVar7 != (long *)0x0)) {
      uVar2 = *param_2;
      lVar8 = param_2[1];
      do {
        plVar4 = (long *)plVar7[1];
        if (plVar4 == plVar5) {
          if (plVar7[3] == lVar8) {
            lVar1 = plVar7[2];
            func_0x000107c610b0(lVar1,uVar2,lVar8);
            if ((int)lVar1 == 0) {
              uVar2 = 0;
              goto LAB_10005e358;
            }
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar9);
          }
          if (plVar4 != unaff_x26) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  plVar7 = (long *)0x20;
  func_0x000107c60e20();
  *plVar7 = 0;
  plVar7[1] = (long)plVar5;
  lVar8 = *(long *)param_3;
  plVar7[3] = *(long *)&param_3->cpusubtype;
  plVar7[2] = lVar8;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    FUN_10005e394(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar9 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar9 <= plVar5) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar7 = *plVar5;
    *plVar5 = (long)plVar7;
    *(long **)(lVar8 + (long)unaff_x26 * 8) = plVar5;
    if (*plVar7 == 0) goto LAB_10005e348;
    plVar5 = *(long **)(*plVar7 + 8);
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar9 - 1U);
    }
    else if (plVar9 <= plVar5) {
      uVar10 = 0;
      if (plVar9 != (long *)0x0) {
        uVar10 = (ulong)plVar5 / (ulong)plVar9;
      }
      plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar9);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar7 = *plVar5;
  }
  *plVar5 = (long)plVar7;
LAB_10005e348:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10005e358:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar7;
  return auVar12;
}



/* Entry: 10005e158; end: 10005e393;  */

undefined1  [16] FUN_10005e158(long *param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x26;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  plVar5 = param_1;
  FUN_10002d328(param_1,*param_2,param_2[1]);
  plVar9 = (long *)param_1[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x26 = (long *)(uVar10 & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar9 <= plVar5) {
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          uVar6 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar6 * (long)plVar9);
      }
    }
    puVar3 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar3, plVar8 != (long *)0x0)) {
      uVar2 = *param_2;
      lVar7 = param_2[1];
      do {
        plVar4 = (long *)plVar8[1];
        if (plVar4 == plVar5) {
          if (plVar8[3] == lVar7) {
            lVar1 = plVar8[2];
            func_0x000107c610b0(lVar1,uVar2,lVar7);
            if ((int)lVar1 == 0) {
              uVar2 = 0;
              goto LAB_10005e358;
            }
          }
        }
        else {
          if (((ulong)plVar9 & uVar10) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar10);
          }
          else if (plVar9 <= plVar4) {
            uVar6 = 0;
            if (plVar9 != (long *)0x0) {
              uVar6 = (ulong)plVar4 / (ulong)plVar9;
            }
            plVar4 = (long *)((long)plVar4 - uVar6 * (long)plVar9);
          }
          if (plVar4 != unaff_x26) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = (long *)0x20;
  func_0x000107c60e20();
  *plVar8 = 0;
  plVar8[1] = (long)plVar5;
  lVar7 = *param_3;
  plVar8[3] = param_3[1];
  plVar8[2] = lVar7;
  if ((plVar9 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar9 < (float)(param_1[3] + 1))
     ) {
    uVar10 = 1;
    if ((long *)0x2 < plVar9) {
      uVar10 = (ulong)(((ulong)plVar9 & (long)plVar9 - 1U) != 0);
    }
    uVar10 = uVar10 | (long)plVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar10 <= uVar6) {
      uVar10 = uVar6;
    }
    FUN_10005e394(param_1,uVar10);
    plVar9 = (long *)param_1[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar9 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x26 = plVar5;
      if (plVar9 <= plVar5) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar9;
        }
        unaff_x26 = (long *)((long)plVar5 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar7 = *param_1;
  plVar5 = *(long **)(lVar7 + (long)unaff_x26 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar5;
    if (*plVar8 == 0) goto LAB_10005e348;
    plVar5 = *(long **)(*plVar8 + 8);
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      plVar5 = (long *)((ulong)plVar5 & (long)plVar9 - 1U);
    }
    else if (plVar9 <= plVar5) {
      uVar10 = 0;
      if (plVar9 != (long *)0x0) {
        uVar10 = (ulong)plVar5 / (ulong)plVar9;
      }
      plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar9);
    }
    plVar5 = (long *)(*param_1 + (long)plVar5 * 8);
  }
  else {
    *plVar8 = *plVar5;
  }
  *plVar5 = (long)plVar8;
LAB_10005e348:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10005e358:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10005e394; end: 10005e42b;  */

void FUN_10005e394(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar4;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar5;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1;
  if (param_2 - 1 == 0) {
    uVar4 = 2;
  }
  else {
    uVar4 = param_2;
    if ((param_2 & param_2 - 1) != 0) {
      func_0x00010005e558();
      uVar4 = uVar2;
    }
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 < uVar4) {
LAB_10005e3d8:
    FUN_10005e42c();
    if (param_2 == 0) {
      FUN_10005e51c(uVar2);
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    else {
      lVar3 = uVar2 + 8;
      FUN_10005e438(lVar3);
      FUN_10005e51c(uVar2,lVar3);
      func_0x00010005e534();
      uVar4 = extraout_x9;
      while (param_2 != uVar4) {
        func_0x00010005e544();
        uVar4 = extraout_x9_00;
      }
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x00010005e560();
        func_0x00010005e574();
        lVar3 = extraout_x8;
        plVar6 = extraout_x9_01;
        uVar2 = extraout_x10;
        uVar4 = extraout_x11;
        while (plVar5 = plVar6, plVar6 = (long *)*plVar5, plVar6 != (long *)0x0) {
          uVar7 = plVar6[1];
          if ((param_2 & uVar2) == 0) {
            uVar7 = uVar7 & uVar2;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          if (uVar7 != uVar4) {
            if (*(long *)(lVar3 + uVar7 * 8) == 0) {
              *(long **)(lVar3 + uVar7 * 8) = plVar5;
              uVar4 = uVar7;
            }
            else {
              *plVar5 = *plVar6;
              func_0x00010005e588();
              lVar3 = extraout_x8_00;
              plVar6 = extraout_x9_02;
              uVar2 = extraout_x10_00;
              uVar4 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (uVar4 < uVar7) {
    func_0x000107c3248c();
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c32454();
    }
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 < uVar7) goto LAB_10005e3d8;
  }
  return;
}



/* Entry: 10005e42c; end: 10005e437;  */

void FUN_10005e42c(void)

{
  return;
}



/* Entry: 10005e438; end: 10005e453;  */

void FUN_10005e438(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  if (param_2 == 0) {
    FUN_10005e51c(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_10005e438(lVar2);
    FUN_10005e51c(param_1,lVar2);
    func_0x00010005e534();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x00010005e544();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010005e560();
      func_0x00010005e574();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x00010005e588();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10005e454; end: 10005e51b;  */

void FUN_10005e454(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10005e51c(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_10005e438(lVar2);
    FUN_10005e51c(param_1,lVar2);
    func_0x00010005e534();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x00010005e544();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010005e560();
      func_0x00010005e574();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x00010005e588();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10005e51c; end: 10005e59f;  */

void FUN_10005e51c(long *param_1,long param_2)

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



/* Entry: 10005e5a0; end: 10005e663;  */

void FUN_10005e5a0(void)

{
  func_0x000107c6110c();
  uRam00000001137ecdc0 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10005e664; end: 10005e6e7;  */

void FUN_10005e664(undefined8 param_1)

{
  undefined2 uStack_23;
  undefined1 uStack_21;
  
  func_0x000107c6110c();
  uRam00000001137eceb0 = 0;
  uRam00000001137eceb8 = 0;
  uStack_23 = 0x201;
  uStack_21 = 4;
  uRam00000001137ecec8 = 0;
  uRam00000001137eced0 = 0;
  uRam00000001137ecec0 = 0;
  FUN_100053640(0x1137ecec0,&uStack_23,&stack0xffffffffffffffe0,3);
  func_0x000107c60e34(&UNK_10a00f5e4,0x1137ecec0,0x100000000);
  func_0x000107c61108(param_1);
  return;
}



/* Entry: 10005e6e8; end: 10005eb93;  */

void FUN_10005e6e8(void)

{
  func_0x000107c6110c();
  uRam00000001137eced8 = 0;
  uRam00000001137ecee0 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10005eb94; end: 10005ede3;  */

void FUN_10005eb94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined1 uStack_3d;
  char cStack_39;
  
  func_0x000107c6110c();
  cStack_39 = '\x12';
  uStack_40 = 0x7364;
  uStack_48 = 0x656972466c6c41;
  uStack_41 = 0x6e;
  uStack_50 = 0x747365757165722f;
  uStack_3e = 0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_50);
  func_0x000107c61180();
  puRam00000001138367d8 = puVar1;
  if (cStack_39 < '\0') {
    func_0x000107c60e14(uStack_50);
  }
  cStack_39 = '\x13';
  uStack_40 = 0x646e;
  uStack_3e = 0x73;
  uStack_48 = 0x69724674736542;
  uStack_41 = 0x65;
  uStack_50 = 0x747365757165722f;
  uStack_3d = 0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_50);
  func_0x000107c61180();
  puRam00000001138367e0 = puVar1;
  if (cStack_39 < '\0') {
    func_0x000107c60e14(uStack_50);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  puVar2[1] = 0x654264656e6e6950;
  *puVar2 = 0x747365757165722f;
  puVar2[2] = 0x646e656972467473;
  *(undefined1 *)(puVar2 + 3) = 0;
  func_0x000107c5c200(puVar1,param_2,puVar2);
  func_0x000107c61180();
  puRam00000001138367e8 = puVar1;
  func_0x000107c60e14(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  puVar2[1] = 0x4973646e65697246;
  *puVar2 = 0x747365757165722f;
  *(undefined8 *)((long)puVar2 + 0x17) = 0x747865746e6f4374;
  *(undefined8 *)((long)puVar2 + 0xf) = 0x6e65727275436e49;
  *(undefined1 *)((long)puVar2 + 0x1f) = 0;
  func_0x000107c5c200(puVar1,param_2,puVar2);
  func_0x000107c61180();
  puRam00000001138367f0 = puVar1;
  func_0x000107c60e14(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = (undefined8 *)0x28;
  func_0x000107c60e20();
  puVar2[1] = 0x5773646e65697246;
  *puVar2 = 0x747365757165722f;
  puVar2[3] = 0x6569666c6553794d;
  puVar2[2] = 0x6573556e61436f68;
  *(undefined1 *)(puVar2 + 4) = 0;
  func_0x000107c5c200(puVar1,param_2,puVar2);
  func_0x000107c61180();
  puRam00000001137ed240 = puVar1;
  func_0x000107c60e14(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = (undefined8 *)0x19;
  func_0x000107c60e20();
  puVar2[1] = 0x6e6f697461636f4c;
  *puVar2 = 0x747365757165722f;
  *(undefined8 *)((long)puVar2 + 0xf) = 0x72657355726f466e;
  *(undefined1 *)((long)puVar2 + 0x17) = 0;
  func_0x000107c5c200(puVar1,param_2,puVar2);
  func_0x000107c61180();
  puRam00000001138367f8 = puVar1;
  func_0x000107c60e14(puVar2);
  func_0x000107c61108(param_1);
  return;
}



/* Entry: 10005ede4; end: 10005ef3f;  */

void FUN_10005ede4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  char cStack_31;
  
  func_0x000107c6110c();
  cStack_31 = '\f';
  uStack_40 = 0x65726f63;
  uStack_48 = 0x5374696d6275732f;
  uStack_3c = 0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&uStack_48);
  func_0x000107c61180();
  puRam0000000113836800 = puVar1;
  if (cStack_31 < '\0') {
    func_0x000107c60e14(uStack_48);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  puVar2[1] = 0x656461654c73646e;
  *puVar2 = 0x656972467465672f;
  *(undefined8 *)((long)puVar2 + 0x12) = 0x6f666e496472616f;
  *(undefined8 *)((long)puVar2 + 10) = 0x6272656461654c73;
  *(undefined1 *)((long)puVar2 + 0x1a) = 0;
  func_0x000107c5c200(puVar1,param_2,puVar2);
  func_0x000107c61180();
  puRam0000000113836808 = puVar1;
  func_0x000107c60e14(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = (undefined8 *)0x20;
  func_0x000107c60e20();
  puVar2[1] = 0x546472616f627265;
  *puVar2 = 0x6461654c7465672f;
  puVar2[2] = 0x7365726f6353706f;
  *(undefined1 *)(puVar2 + 3) = 0;
  func_0x000107c5c200(puVar1,param_2,puVar2);
  func_0x000107c61180();
  puRam0000000113836810 = puVar1;
  func_0x000107c60e14(puVar2);
  func_0x000107c61108(param_1);
  return;
}


