/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8fb278; end: 10b8fb27f;  */

long FUN_10b8fb278(long param_1)

{
  return param_1 + 0x28;
}



/* Entry: 10b8fb280; end: 10b8fb2c7;  */

void FUN_10b8fb280(long param_1)

{
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x00010b8fd9d4();
  FUN_10b8df048(auStack_40,*(undefined8 *)(param_1 + 0x40),unaff_x20 + 0x48);
  func_0x00010b8fe008(extraout_x8);
  FUN_10b8fb2e0();
  FUN_10b8df100(auStack_40);
  return;
}



/* Entry: 10b8fb2c8; end: 10b8fb2cb;  */

undefined8 * FUN_10b8fb2c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73b00;
  FUN_10b9a3d64(param_1 + 6);
  return param_1;
}



/* Entry: 10b8fb2cc; end: 10b8fb2df;  */

void FUN_10b8fb2cc(void)

{
  FUN_10b8fb2fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fb2e0; end: 10b8fb2fb;  */

void FUN_10b8fb2e0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  if ((*(ulong *)(param_1 + 0x20) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x10) + ((long)*(ulong *)(param_1 + 0x20) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010b8fb2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b8fb2fc; end: 10b8fb357;  */

undefined8 * FUN_10b8fb2fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73b00;
  FUN_10b9a3d64(param_1 + 6);
  return param_1;
}



/* Entry: 10b8fb358; end: 10b8fb3b7;  */

void FUN_10b8fb358(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
    func_0x00010045db50(param_1 + 1);
    func_0x000105276914();
    return;
  }
  return;
}



/* Entry: 10b8fb3b8; end: 10b8fb40f;  */

void FUN_10b8fb3b8(long *param_1,long param_2)

{
  float *pfVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  
  if (*param_1 != 0) {
    plVar2 = *(long **)(param_2 + 0x10);
    fVar3 = (float)*(double *)plVar2[1];
    fVar4 = (float)*(double *)plVar2[3];
    FUN_10b8d35b8(*param_1,*(undefined4 *)plVar2[2],*(undefined4 *)plVar2[4],
                  *(undefined1 *)plVar2[5]);
    pfVar1 = (float *)*plVar2;
    *pfVar1 = fVar3;
    pfVar1[1] = fVar4;
  }
  return;
}



/* Entry: 10b8fb410; end: 10b8fb423;  */

void FUN_10b8fb410(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fb424; end: 10b8fb473;  */

void FUN_10b8fb424(undefined8 *param_1)

{
  func_0x00010b8fdcd4();
  *param_1 = &PTR_FUN_110d73b50;
  func_0x00010b8fdd04();
  func_0x00010b8fe4f4();
  return;
}



/* Entry: 10b8fb474; end: 10b8fb49b;  */

void FUN_10b8fb474(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x00010b8c3d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fb49c; end: 10b8fb49f;  */

undefined8 * FUN_10b8fb49c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73b80;
  func_0x0001080e0bc0(param_1 + 6);
  FUN_10b9a3d64(param_1 + 4);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b8fb4a0; end: 10b8fb4b3;  */

void FUN_10b8fb4a0(void)

{
  FUN_10b8fb528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fb4b4; end: 10b8fb4bb;  */

long FUN_10b8fb4b4(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10b8fb4bc; end: 10b8fb527;  */

undefined8 * FUN_10b8fb4bc(int param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x9;
  long unaff_x21;
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  
  func_0x00010b8fea3c();
  func_0x00010b8fd3f4();
  auStack_98[0] = 0;
  uStack_40 = 0;
  func_0x000105c3b044();
  if (param_1 != 0) {
    func_0x00010b8fb56c(auStack_98,unaff_x21 + 0x10);
  }
  func_0x00010b8fdb38();
  (*extraout_x9)(extraout_x8);
  puVar1 = (undefined8 *)auStack_98;
  func_0x0001080e8dd4();
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  *puVar1 = &PTR_FUN_110d73b80;
  func_0x0001080e0bc0(puVar1 + 6);
  FUN_10b9a3d64(puVar1 + 4);
  func_0x000107c278f4(puVar1 + 2);
  return puVar1;
}



/* Entry: 10b8fb528; end: 10b8fb593;  */

undefined8 * FUN_10b8fb528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73b80;
  func_0x0001080e0bc0(param_1 + 6);
  FUN_10b9a3d64(param_1 + 4);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b8fb594; end: 10b8fb5af;  */

void FUN_10b8fb594(long param_1)

{
  FUN_10b9a75b4();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10b8fb5b0; end: 10b8fb5d7;  */

void FUN_10b8fb5b0(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x19;
  
  func_0x00010b8fe554();
  func_0x00010b8c1d38(*(undefined8 *)(param_2 + 0x10));
  func_0x00010b8fd458(*unaff_x19);
  return;
}



/* Entry: 10b8fb5d8; end: 10b8fb623;  */

void FUN_10b8fb5d8(long param_1)

{
  func_0x00010045db50(param_1 + 8);
  func_0x000105276914();
  return;
}



/* Entry: 10b8fb624; end: 10b8fb67f;  */

void FUN_10b8fb624(undefined8 *param_1,long param_2)

{
  undefined1 auStack_38 [16];
  long lStack_28;
  
  FUN_10b8d406c(&lStack_28,*param_1,**(undefined4 **)(param_2 + 0x10));
  if (lStack_28 != 0) {
    FUN_10b8c649c(auStack_38,lStack_28,0);
    FUN_10b9a9020(*(undefined8 *)(param_2 + 0x18),auStack_38);
    func_0x00010b8fdf8c();
  }
  func_0x0001080d289c(lStack_28);
  return;
}



/* Entry: 10b8fb680; end: 10b8fb69b;  */

void FUN_10b8fb680(void)

{
  return;
}



/* Entry: 10b8fb69c; end: 10b8fb89b;  */

long * FUN_10b8fb69c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
  code *pcStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined8 uStack_e8;
  
  func_0x00010b8fd4b8();
  plVar2 = param_1;
  if (*param_1 != 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    func_0x00010b8fdb18();
    *plVar2 = (long)param_1;
    plVar2[1] = lVar4 + 0x18;
    plVar2[2] = lVar4 + 0x20;
    plVar2[3] = lVar4;
    plVar2[4] = lVar4 + 8;
    func_0x00010b8fdcc8();
    FUN_10b8d2f54();
    func_0x00010b8fe8a0(&PTR_FUN_110d73c28);
  }
  func_0x00010b8fd3bc(extraout_x8);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010b8fd4b8();
  puVar5 = (undefined8 *)plVar2[2];
  plVar3 = *(long **)*puVar5;
  uStack_e8 = extraout_x8_00;
  FUN_10b8d406c(&plStack_120,plVar3,*(undefined4 *)puVar5[1]);
  plVar2 = plStack_120;
  if (plStack_120 == (long *)0x0) {
    ppuStack_110 = (undefined **)CONCAT62(ppuStack_110._2_6_,1);
    pcStack_118 = (code *)0x0;
    FUN_10b8edae0(*(undefined8 *)puVar5[3],puVar5[4],&pcStack_118);
    FUN_10b9a8d98(&pcStack_118);
  }
  else {
    puVar1 = (undefined8 *)puVar5[2];
    lVar4 = *(long *)puVar5[3];
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    lVar8 = *(long *)puVar5[4];
    lVar6 = ((long *)puVar5[4])[1];
    lStack_138 = lVar4;
    lStack_130 = lVar8;
    lStack_128 = lVar6;
    if (lVar6 != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10_00 != 0);
    }
    pcVar7 = (code *)*puVar1;
    pcStack_118 = FUN_10b8fb8c0;
    ppuStack_110 = &PTR_FUN_110d73c08;
    func_0x00010b8fe744();
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10_01 != 0);
    }
    *plVar3 = lVar4;
    plVar3[1] = lVar8;
    plVar3[2] = lVar6;
    if (lVar6 != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10_02 != 0);
    }
    plStack_108 = plVar3;
    (*pcVar7)(plVar2,&pcStack_118,puVar1);
    func_0x00010b8fe8a0(ppuStack_110);
    FUN_10b8fb89c(&lStack_138);
  }
  func_0x0001080d289c(plStack_120);
  func_0x00010b8fd3bc(uStack_e8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b8fead8();
    FUN_10b8e552c();
    func_0x00010b8fdf5c(plVar2);
    func_0x00010b8e8bd0();
    return plVar2;
  }
  return plStack_120;
}



/* Entry: 10b8fb89c; end: 10b8fb8bf;  */

undefined8 FUN_10b8fb89c(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b8fead8();
  FUN_10b8e552c();
  func_0x00010b8fdf5c();
  func_0x00010b8e8bd0();
  return unaff_x19;
}



/* Entry: 10b8fb8c0; end: 10b8fb8cf;  */

/* WARNING: Possible PIC construction at 0x00010b8edb6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8edb70) */
/* WARNING: Removing unreachable block (ram,0x00010b8edb84) */
/* WARNING: Removing unreachable block (ram,0x00010b8edb7c) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd8e8) */

void FUN_10b8fb8c0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  plVar3 = puVar2 + 1;
  plVar1 = plVar3;
  func_0x00010b8fd408(*puVar2,plVar3,param_1);
  lStack_60 = *(long *)(*plVar1 + 8);
  if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      lStack_60 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  func_0x00010b8fe57c(auStack_80);
  uStack_68 = puVar2[2];
  lStack_70 = *plVar3;
  if (puVar2[2] != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8fde00(0x10b8f7780);
  func_0x00010b8f7848();
  func_0x00010b8fde88();
  func_0x00010b8fd640(uStack_50);
  func_0x00010b8fdf68(auStack_80);
  FUN_10b8e552c();
  func_0x00010b9abca8();
  if (((bool)in_ZR) && ((long *)*unaff_x19 != (long *)0x0)) {
    (**(code **)(*(long *)*unaff_x19 + 0x18))();
  }
  return;
}



/* Entry: 10b8fb8d0; end: 10b8fb8ef;  */

void FUN_10b8fb8d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8fb89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fb8f0; end: 10b8fb8f3;  */

void FUN_10b8fb8f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8fb8f4; end: 10b8fb95b;  */

void FUN_10b8fb8f4(long *param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010b8fdcd4();
  *param_1 = (long)&PTR_FUN_110d73c08;
  func_0x00010b8fe744();
  lVar1 = *unaff_x20;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = lVar1;
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[1];
  param_1[2] = unaff_x20[2];
  param_1[1] = lVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  *(long **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8fb95c; end: 10b8fb96f;  */

void FUN_10b8fb95c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fb970; end: 10b8fb9a7;  */

void FUN_10b8fb970(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010b8fdcd4();
  func_0x00010b8fd934(&PTR_FUN_110d73c28);
  uVar1 = unaff_x20[4];
  uVar4 = *unaff_x20;
  uVar3 = unaff_x20[3];
  uVar2 = unaff_x20[2];
  param_1[1] = unaff_x20[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[4] = uVar1;
  *(undefined8 **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8fb9a8; end: 10b8fb9c7;  */

void FUN_10b8fb9a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8ede60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fb9c8; end: 10b8fb9cb;  */

void FUN_10b8fb9c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8fb9cc; end: 10b8fbacb;  */

void FUN_10b8fb9cc(long *param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  
  func_0x00010b8fdcd4();
  *param_1 = (long)&PTR_FUN_110d73c48;
  func_0x00010b8fde6c();
  lVar1 = *unaff_x20;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b8fda68();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = lVar1;
  lVar1 = unaff_x20[2];
  lVar2 = unaff_x20[1];
  param_1[2] = unaff_x20[2];
  param_1[1] = lVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b8fd9c4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = unaff_x20[3];
  param_1[4] = unaff_x20[4];
  func_0x00010b8fe0e0(*(undefined8 *)(unaff_x20[5] + 0x18),param_1 + 5);
  *(long **)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 10b8fbacc; end: 10b8fbae7;  */

void FUN_10b8fbacc(void)

{
  return;
}



/* Entry: 10b8fbae8; end: 10b8fbb67;  */

void FUN_10b8fbae8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  code *pcVar2;
  long alStack_90 [5];
  undefined8 uStack_68;
  undefined8 auStack_60 [6];
  
  func_0x00010b8fd3f4();
  uVar1 = *param_2;
  func_0x00010b8fe21c();
  pcVar2 = *(code **)(param_3 + 0x10);
  uStack_68 = uVar1;
  (**(code **)(alStack_90[0] + 0x10))(auStack_60,alStack_90);
  (*pcVar2)(param_1,&uStack_68);
  func_0x00010b8fd804(auStack_60[0]);
  func_0x00010b8fd6f8(alStack_90[0]);
  func_0x00010b8fd38c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8fbb68; end: 10b8fbb83;  */

void FUN_10b8fbb68(void)

{
  return;
}



/* Entry: 10b8fbb84; end: 10b8fbc6f;  */

/* WARNING: Possible PIC construction at 0x00010b8fbc30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8fbc34) */

long * FUN_10b8fbb84(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x19;
  undefined8 uStack_50;
  
  func_0x00010b8fd430();
  if (*(long *)(param_2 + 0x18) == 0) {
    func_0x00010b8fd3a4();
    if ((bool)in_ZR) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  else {
    unaff_x19 = *(long **)(param_2 + 0x10);
    lVar1 = *(long *)(*(long *)(param_2 + 0x18) + 8);
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x00010b8fda68();
      } while (extraout_w11 != 0);
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      do {
        func_0x00010b8fd9c4();
      } while (extraout_w10 != 0);
    }
    if ((*param_1 == 2) && (param_1[1] != 0)) {
      do {
        func_0x00010b8fe168();
      } while (extraout_w11_00 != 0);
    }
    func_0x00010b8fde00(FUN_10b8fbca4);
    FUN_10b8fbda8();
    func_0x00010b8fde88();
    func_0x00010b8fd640(uStack_50);
  }
  func_0x00010b8fdf68();
  func_0x0001080c6234();
  if (unaff_x19[1] != 0) {
    func_0x000107c27b90();
  }
  return unaff_x19;
}



/* Entry: 10b8fbc70; end: 10b8fbca3;  */

void FUN_10b8fbc70(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if (lVar1 == 2) {
    lVar1 = 0;
    if (param_2[1] != 0) {
      do {
        func_0x00010b8fe168();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    param_1[1] = lVar1;
  }
  return;
}



/* Entry: 10b8fbca4; end: 10b8fbda7;  */

undefined8 * FUN_10b8fbca4(undefined8 *param_1,undefined8 ***param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *unaff_x19;
  long unaff_x20;
  undefined8 **ppuVar2;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 auStack_98 [4];
  undefined8 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  undefined8 **ppuStack_40;
  
  func_0x00010b8fda54();
  func_0x00010b8fd3f4();
  func_0x00010b8fe6c4();
  puStack_48 = param_1;
  ppuStack_40 = param_2;
  func_0x00010b8fdeac();
  uVar1 = 0;
  if ((bool)in_ZR) {
    uVar1 = *(long *)(unaff_x20 + 0x20) == 1;
    if ((bool)uVar1) {
      ppuStack_78 = (undefined8 **)*unaff_x19;
      puStack_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      func_0x00010b8fdb50(&ppuStack_78);
      func_0x00010b8fdb38();
      func_0x00010b8fe5d0(auStack_98);
    }
    else {
      FUN_10b99f8ac(&ppuStack_78,unaff_x20 + 0x28);
      uVar1 = uStack_68._7_1_ == 0;
      puStack_b0 = puStack_70;
      ppuStack_b8 = ppuStack_78;
      if (-1 < uStack_68) {
        puStack_b0 = (undefined8 *)(ulong)uStack_68._7_1_;
        ppuStack_b8 = &ppuStack_78;
      }
      param_2 = &ppuStack_b8;
      func_0x00010b8fe0a8(auStack_98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_78);
      func_0x00010b8fdeac();
      if ((bool)uVar1) {
        ppuStack_78 = (undefined8 **)*unaff_x19;
        uStack_68 = 1;
        puStack_70 = auStack_98;
        func_0x0001080e01a8(auStack_58);
        func_0x00010b8fdb38();
        func_0x00010b8fe5d0(&ppuStack_b8);
        func_0x00010b8fdda4();
      }
    }
    param_1 = auStack_98;
    func_0x0001080e0bc0();
  }
  func_0x00010b8fd38c();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    *param_1 = &PTR_FUN_110d73ca8;
    ppuVar2 = *param_2;
    param_1[2] = param_2[1];
    param_1[1] = ppuVar2;
    *param_2 = (undefined8 **)0x0;
    param_2[1] = (undefined8 **)0x0;
    FUN_10b8fbc70(param_1 + 3,param_2 + 2);
    return param_1;
  }
  return param_1;
}



/* Entry: 10b8fbda8; end: 10b8fbde3;  */

undefined8 * FUN_10b8fbda8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110d73ca8;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10b8fbc70(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 10b8fbde4; end: 10b8fbec7;  */

void FUN_10b8fbde4(long param_1)

{
  long unaff_x19;
  
  func_0x00010b8fdf68(param_1 + 8);
  func_0x0001080c6234();
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x000107c27b90();
  }
  return;
}



/* Entry: 10b8fbec8; end: 10b8fbfb3;  */

undefined8 * FUN_10b8fbec8(undefined8 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w11;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010b8fd3e0();
  uStack_38 = extraout_x8;
  func_0x00010b8fda14(auStack_50);
  func_0x00010b8fd91c();
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010b8fd2ec();
  }
  else {
    param_1 = *(undefined8 **)(param_2 + 0x10);
    FUN_10b8bc120(&lStack_48,param_1,auStack_50);
    if (lStack_48 == 1) {
      param_1 = puStack_40;
      if ((puStack_40 != (undefined8 *)0x0) && (puStack_40[2] != 0)) {
        do {
          func_0x00010b8fda68();
          param_1 = extraout_x8_01;
        } while (extraout_w11 != 0);
      }
      func_0x00010b8fdb70();
      func_0x00010b8fdb20();
      if (param_1 != (undefined8 *)0x0) {
        func_0x00010b8fd5d8();
      }
    }
    else {
      func_0x00010b8fd500();
    }
    in_ZR = lStack_48 == 2;
    if ((bool)in_ZR) {
      func_0x00010b8fe620();
    }
    else {
      in_ZR = lStack_48 == 1;
      if ((bool)in_ZR) {
        FUN_10b8bac98();
        param_1 = puStack_40;
      }
    }
  }
  func_0x00010b8fdd60();
  func_0x00010b8fd3bc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b8bb3c0(param_1[1]);
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8fbfb4; end: 10b8fc003;  */

undefined8 * FUN_10b8fbfb4(long param_1)

{
  FUN_10b8bb3c0(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b8fc004; end: 10b8fc017;  */

void FUN_10b8fc004(void)

{
  func_0x00010b8fc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fc018; end: 10b8fc03b;  */

void FUN_10b8fc018(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fc03c; end: 10b8fc04f;  */

void FUN_10b8fc03c(void)

{
  func_0x00010b8fc058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fc050; end: 10b8fc06f;  */

void FUN_10b8fc050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fc070; end: 10b8fc0af;  */

void FUN_10b8fc070(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x00010b8fc094(&lStack_18);
  return;
}



/* Entry: 10b8fc0b0; end: 10b8fc11f;  */

void FUN_10b8fc0b0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b8fd6cc();
  FUN_10b8fc120();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b8fc0dc;
  func_0x00010b8fe9a0();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b8fc0dc;
  }
  if (unaff_x22 == 0) {
    func_0x00010b8feaf0();
LAB_10b8fc100:
    FUN_10b8fc148();
  }
  else {
    func_0x00010b8fdf20();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b8fdef8();
      goto LAB_10b8fc100;
    }
    func_0x00010b8fc1f0();
  }
  func_0x00010b8fda38();
  FUN_10b8fc120();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b8fc0dc:
  func_0x00010b8fd610(lVar1);
  return;
}



/* Entry: 10b8fc120; end: 10b8fc147;  */

ulong FUN_10b8fc120(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b8feb3c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8fc148; end: 10b8fc2d7;  */

void FUN_10b8fc148(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  byte unaff_w22;
  long unaff_x24;
  long lVar4;
  
  func_0x00010b8fe524();
  lVar2 = extraout_x8 + 0x10 + param_2 * 0x10;
  __Znwm();
  *unaff_x20 = lVar2;
  unaff_x20[1] = lVar2 + extraout_x8 + 0x10;
  func_0x00010b8fdedc();
  lVar4 = 0;
  func_0x00010b8fe4a0();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b8fe8c0(uVar1);
  for (; unaff_x24 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar4)) {
      lVar3 = unaff_x21;
      FUN_10b8fc2d8();
      func_0x00010b8fe488();
      FUN_10b8fc120();
      *(byte *)(lVar2 + lVar3) = unaff_w22 & 0x7f;
      func_0x00010b8fd548();
      FUN_10b8fc2f4(extraout_x8_01 + lVar3 * 0x10,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fc2d8; end: 10b8fc2f3;  */

void FUN_10b8fc2d8(undefined8 *param_1)

{
  func_0x00010b8fdc28(param_1,*param_1);
  return;
}



/* Entry: 10b8fc2f4; end: 10b8fc30b;  */

undefined8 FUN_10b8fc2f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010b8fead8(param_2);
  FUN_10b8a1838();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b8fc30c; end: 10b8fc31f;  */

void FUN_10b8fc30c(void)

{
  func_0x00010b8fc368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fc320; end: 10b8fc383;  */

void FUN_10b8fc320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fc384; end: 10b8fc397;  */

void FUN_10b8fc384(void)

{
  func_0x00010b8fc3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fc398; end: 10b8fc3cf;  */

void FUN_10b8fc398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fc3d0; end: 10b8fc3ef;  */

void FUN_10b8fc3d0(void)

{
  func_0x00010b8fdf5c();
  FUN_10b8fc3f0();
  return;
}



/* Entry: 10b8fc3f0; end: 10b8fc42f;  */

void FUN_10b8fc3f0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8fd960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8fc430; end: 10b8fc457;  */

long FUN_10b8fc430(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b8fc458();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b8fc458; end: 10b8fc487;  */

void FUN_10b8fc458(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x2d02d02d02d02e) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x5b0);
    return;
  }
  func_0x000104bfe188();
  *param_1 = &PTR_FUN_110d73e58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8fc488; end: 10b8fc48b;  */

void FUN_10b8fc488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73e58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8fc48c; end: 10b8fc49f;  */

void FUN_10b8fc48c(void)

{
  func_0x00010b8fc4a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fc4a0; end: 10b8fc4b7;  */

void FUN_10b8fc4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fc4b8; end: 10b8fc51b;  */

void FUN_10b8fc4b8(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x00010b8fda68();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c284e8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8fc51c; end: 10b8fc52f;  */

void FUN_10b8fc51c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fc530; end: 10b8fc543;  */

void FUN_10b8fc530(void)

{
  func_0x00010b8fc54c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fc544; end: 10b8fc563;  */

void FUN_10b8fc544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fc564; end: 10b8fc5b7;  */

ulong FUN_10b8fc564(ulong param_1)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (uVar1 = param_1, FUN_10b9a5818(), (uVar1 & 1) == 0)) {
    FUN_10b9a5890();
    func_0x00010b8fe548();
    if (uVar1 != 0) {
      func_0x000107c27b90();
    }
  }
  return param_1;
}



/* Entry: 10b8fc5b8; end: 10b8fc5d7;  */

void FUN_10b8fc5b8(long param_1)

{
  func_0x00010b8db194(param_1 + 0x28);
  func_0x00010b8fda8c();
  return;
}



/* Entry: 10b8fc5d8; end: 10b8fc5db;  */

void FUN_10b8fc5d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73ef8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8fc5dc; end: 10b8fc5ef;  */

void FUN_10b8fc5dc(void)

{
  func_0x00010b8fc5f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fc5f0; end: 10b8fc603;  */

void FUN_10b8fc5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fc604; end: 10b8fc673;  */

void FUN_10b8fc604(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b8fd6cc();
  FUN_10b8fc674();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b8fc630;
  func_0x00010b8fe9a0();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b8fc630;
  }
  if (unaff_x22 == 0) {
    func_0x00010b8feaf0();
LAB_10b8fc654:
    FUN_10b8fc69c();
  }
  else {
    func_0x00010b8fdf20();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b8fdef8();
      goto LAB_10b8fc654;
    }
    func_0x00010b8fc73c();
  }
  func_0x00010b8fda38();
  FUN_10b8fc674();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b8fc630:
  func_0x00010b8fd610(lVar1);
  return;
}



/* Entry: 10b8fc674; end: 10b8fc69b;  */

ulong FUN_10b8fc674(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b8feb3c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8fc69c; end: 10b8fc81f;  */

void FUN_10b8fc69c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  byte unaff_w23;
  long unaff_x25;
  long unaff_x26;
  
  func_0x00010b8fe30c();
  lVar2 = unaff_x22 + param_2 * 0x20;
  __Znwm();
  *unaff_x20 = lVar2;
  unaff_x20[1] = lVar2 + unaff_x22;
  lVar3 = lVar2;
  func_0x00010b8fdedc();
  func_0x00010b8fe94c();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8fe130(uVar1);
  for (; unaff_x25 != unaff_x26; unaff_x26 = unaff_x26 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x26)) {
      func_0x00010b8fe8e8();
      FUN_10b8fc820();
      func_0x00010b8fe50c();
      FUN_10b8fc674();
      *(byte *)(lVar2 + lVar3) = unaff_w23 & 0x7f;
      func_0x00010b8fd548();
      lVar3 = extraout_x8_00 + lVar3 * 0x20;
      FUN_10b8fc83c(lVar3,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (unaff_x25 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fc820; end: 10b8fc83b;  */

void FUN_10b8fc820(void)

{
  func_0x00010b8db194();
  func_0x00010b8fda8c();
  return;
}



/* Entry: 10b8fc83c; end: 10b8fc867;  */

/* WARNING: Possible PIC construction at 0x00010b8bc444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8bc448) */

void FUN_10b8fc83c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  func_0x00010b8fdf68(param_2);
  func_0x00010b8fc594();
  func_0x00010007e5d0(unaff_x19 + 8);
  func_0x0001003a8cb8();
  return;
}



/* Entry: 10b8fc868; end: 10b8fc8d3;  */

undefined8 * FUN_10b8fc868(undefined8 *param_1)

{
  *param_1 = 1;
  func_0x0001080e08ac(param_1 + 1);
  return param_1;
}



/* Entry: 10b8fc8d4; end: 10b8fc963;  */

void FUN_10b8fc8d4(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar4 = param_3;
  func_0x00010b8fda54();
  FUN_10b8fc964(param_2,puVar4);
  uVar3 = *param_3;
  plVar2 = unaff_x20;
  func_0x00010b8fc984();
  if ((uVar3 & 1) != 0) {
    FUN_10b8bc3c4(unaff_x20[1] + (long)plVar2 * 0x10,param_3);
    *(byte *)(*unaff_x20 + (long)plVar2) = (byte)param_2 & 0x7f;
    func_0x00010b8fd5a8();
  }
  lVar1 = unaff_x20[1];
  *unaff_x19 = *unaff_x20 + (long)plVar2;
  unaff_x19[1] = lVar1 + (long)plVar2 * 0x10;
  *(char *)(unaff_x19 + 2) = (char)uVar3;
  return;
}



/* Entry: 10b8fc964; end: 10b8fca47;  */

void FUN_10b8fc964(long param_1)

{
  func_0x00010b8db194(param_1 + 0x28);
  func_0x00010b8fda8c();
  return;
}



/* Entry: 10b8fca48; end: 10b8fcab7;  */

void FUN_10b8fca48(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b8fd6cc();
  FUN_10b8fcab8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b8fca74;
  func_0x00010b8fe9a0();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b8fca74;
  }
  if (unaff_x22 == 0) {
    func_0x00010b8feaf0();
LAB_10b8fca98:
    FUN_10b8fcae0();
  }
  else {
    func_0x00010b8fdf20();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b8fdef8();
      goto LAB_10b8fca98;
    }
    func_0x00010b8fcb80();
  }
  func_0x00010b8fda38();
  FUN_10b8fcab8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b8fca74:
  func_0x00010b8fd610(lVar1);
  return;
}



/* Entry: 10b8fcab8; end: 10b8fcadf;  */

ulong FUN_10b8fcab8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b8feb3c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b8fcae0; end: 10b8fcc6b;  */

void FUN_10b8fcae0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  byte unaff_w23;
  long unaff_x25;
  long unaff_x26;
  
  func_0x00010b8fe30c();
  lVar2 = unaff_x22 + param_2 * 0x10;
  __Znwm();
  *unaff_x20 = lVar2;
  unaff_x20[1] = lVar2 + unaff_x22;
  lVar3 = lVar2;
  func_0x00010b8fdedc();
  func_0x00010b8fe94c();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b8fe130(uVar1);
  for (; unaff_x25 != unaff_x26; unaff_x26 = unaff_x26 + 1) {
    if (-1 < *(char *)(unaff_x19 + unaff_x26)) {
      func_0x00010b8fe8e8();
      FUN_10b8fcc6c();
      func_0x00010b8fe50c();
      FUN_10b8fcab8();
      *(byte *)(lVar2 + lVar3) = unaff_w23 & 0x7f;
      func_0x00010b8fd548();
      lVar3 = extraout_x8_00 + lVar3 * 0x10;
      FUN_10b8fcc88(lVar3,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x10;
  }
  if (unaff_x25 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8fcc6c; end: 10b8fcc87;  */

void FUN_10b8fcc6c(void)

{
  func_0x00010b8db194();
  func_0x00010b8fda8c();
  return;
}



/* Entry: 10b8fcc88; end: 10b8fcca7;  */

/* WARNING: Possible PIC construction at 0x00010b8bc444: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8bc448) */

undefined8 * FUN_10b8fcc88(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  func_0x00010007e5d0(param_2 + 1);
  func_0x0001003a8cb8();
  return param_2;
}



/* Entry: 10b8fcca8; end: 10b8fcce7;  */

void FUN_10b8fcca8(uint param_1)

{
  char *extraout_x8;
  char *pcVar1;
  long *unaff_x19;
  
  func_0x00010b8feacc();
  pcVar1 = extraout_x8;
  while (*pcVar1 < -1) {
    func_0x00010b8fdafc();
    pcVar1 = (char *)(*unaff_x19 + (ulong)param_1);
    *unaff_x19 = (long)pcVar1;
    unaff_x19[1] = unaff_x19[1] + (ulong)param_1 * 0x10;
  }
  return;
}



/* Entry: 10b8fcce8; end: 10b8fcceb;  */

void FUN_10b8fcce8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73f48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8fccec; end: 10b8fccff;  */

void FUN_10b8fccec(void)

{
  FUN_10b8fce60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fcd00; end: 10b8fcd0b;  */

void FUN_10b8fcd00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b8fd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b8fcd0c; end: 10b8fcd1f;  */

void FUN_10b8fcd0c(void)

{
  FUN_10b8fce28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fcd20; end: 10b8fce27;  */

void FUN_10b8fcd20(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_88 [8];
  undefined8 auStack_80 [2];
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    func_0x00010b949ba0(&plStack_58,*(long *)(param_2 + 0x10) + 0x120);
    uStack_68 = 0;
    uStack_60 = 0;
    for (plVar2 = plStack_58; plVar2 != plStack_50; plVar2 = plVar2 + 1) {
      lVar1 = *plVar2;
      if ((lVar1 != 0) &&
         (___dynamic_cast(lVar1,&PTR_DAT_110d71aa8,&PTR_DAT_110d71a70,0x10), lVar1 != 0)) {
        func_0x00010b8c3b30(&plStack_70);
        if (plStack_70 != (long *)0x0) {
          (**(code **)(*plStack_70 + 0x28))(auStack_88);
          func_0x00010b8fe560();
          FUN_10b9a8e18();
          func_0x00010b9abec8(&uStack_68,auStack_80);
          func_0x00010b8fdbfc();
          func_0x00010b8fd9e0();
        }
        func_0x000104bddf04(plStack_70);
      }
    }
    func_0x00010b9abf6c(auStack_80,&uStack_68);
    func_0x00010b9a8f84(param_1,auStack_80);
    func_0x000104bddf60(auStack_80[0]);
    func_0x000104bddf60(uStack_68);
    if (plStack_58 != (long *)0x0) {
      plStack_50 = plStack_58;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10b8fce28; end: 10b8fce5f;  */

undefined8 * FUN_10b8fce28(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d73f98;
  FUN_10b8f99cc();
  func_0x0001052768f0(param_1 + 2);
  return param_1;
}



/* Entry: 10b8fce60; end: 10b8fce6b;  */

void FUN_10b8fce60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73f48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8fce6c; end: 10b8fce8b;  */

void FUN_10b8fce6c(void)

{
  undefined1 uStack_11;
  
  FUN_10b8fce8c(&uStack_11);
  return;
}



/* Entry: 10b8fce8c; end: 10b8fcf0f;  */

/* WARNING: Possible PIC construction at 0x00010b8fceac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8fceb0) */
/* WARNING: Removing unreachable block (ram,0x00010b8fcee4) */
/* WARNING: Removing unreachable block (ram,0x00010b8fcedc) */
/* WARNING: Removing unreachable block (ram,0x00010b8fd790) */

undefined1 * FUN_10b8fce8c(void)

{
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b8fd3e0();
  uStack_38 = 1;
  FUN_10b8fcf10();
  return auStack_40;
}



/* Entry: 10b8fcf10; end: 10b8fcf2b;  */

undefined8 * FUN_10b8fcf10(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3b == 0) {
    puVar1 = (undefined8 *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bfe188();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d73fc0;
  FUN_10b8fd000(param_1 + 3);
  return param_1;
}



/* Entry: 10b8fcf2c; end: 10b8fcf5b;  */

undefined8 * FUN_10b8fcf2c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110d73fc0;
  FUN_10b8fd000(param_1 + 3);
  return param_1;
}



/* Entry: 10b8fcf5c; end: 10b8fcf5f;  */

void FUN_10b8fcf5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d73fc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b8fcf60; end: 10b8fcf73;  */

void FUN_10b8fcf60(void)

{
  FUN_10b8fd0b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8fcf74; end: 10b8fcffb;  */

void FUN_10b8fcf74(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_40 [32];
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 != 0) {
    func_0x00010b8fab48();
    plVar5 = *(long **)(param_1 + 0x18);
    if (((uVar4 & 1) == 0) && (0 < plVar5[1])) {
      __ZNSt3__115future_categoryEv();
      __ZNSt3__112future_errorC1ENS_10error_codeE(auStack_40,4,plVar5);
      _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b8fcfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}


