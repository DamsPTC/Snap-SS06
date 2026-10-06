/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c692bc; end: 108c692bf;  */

undefined8 * FUN_108c692bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb880;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_108c6158c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c692c0; end: 108c692d3;  */

void FUN_108c692c0(void)

{
  FUN_108c692d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c692d4; end: 108c6933b;  */

undefined8 * FUN_108c692d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb880;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_108c6158c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c6933c; end: 108c693a3;  */

void FUN_108c6933c(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  uint uStack_38;
  
  func_0x000108c69c08();
  do {
    func_0x000108c69ad4();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xd8) == '\x01') {
        FUN_108c6158c(unaff_x20 + 0x98);
        *(undefined1 *)(unaff_x20 + 0xd8) = 0;
      }
      func_0x000108c69cf8();
      FUN_108c693a4();
      *(undefined4 *)(unaff_x20 + 0xd0) = *(undefined4 *)(unaff_x21 + 0x38);
      *(undefined1 *)(unaff_x20 + 0xd8) = 1;
      func_0x000108c69abc();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 108c693a4; end: 108c693d3;  */

void FUN_108c693a4(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_108c693d4();
    param_1[0x30] = 1;
  }
  return;
}



/* Entry: 108c693d4; end: 108c69433;  */

long FUN_108c693d4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong extraout_x8;
  
  lVar1 = param_1;
  func_0x000108c69c18(&UNK_110abc6a0);
  *(undefined4 *)(lVar1 + 0x28) = 0;
  if (lVar1 != param_2) {
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      func_0x000108c69dc4();
      uVar2 = extraout_x8;
    }
    if (uVar2 == 0) {
      FUN_108c6e204(param_1);
    }
    else {
      FUN_108c6e1d4(param_1);
    }
  }
  return param_1;
}



/* Entry: 108c69434; end: 108c6943f;  */

void FUN_108c69434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb7b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c69440; end: 108c69487;  */

void FUN_108c69440(long param_1)

{
  func_0x000108c69bb4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c69488; end: 108c6948b;  */

void FUN_108c69488(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb8c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c6948c; end: 108c6949f;  */

void FUN_108c6948c(void)

{
  FUN_108c696d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c694a0; end: 108c694ab;  */

void FUN_108c694a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c69b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c694ac; end: 108c694bf;  */

void FUN_108c694ac(void)

{
  func_0x000108c6959c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c694c0; end: 108c69547;  */

void FUN_108c694c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [56];
  undefined1 uStack_70;
  undefined1 auStack_68 [64];
  undefined4 uStack_28;
  
  auStack_a8[0] = 0;
  uStack_70 = 0;
  uVar1 = *param_3;
  func_0x000108c69d6c();
  uStack_28 = uVar1;
  func_0x000108c69d28();
  FUN_108c5da90(auStack_68);
  FUN_108c5da90(auStack_a8);
  return;
}



/* Entry: 108c69548; end: 108c6954b;  */

undefined8 * FUN_108c69548(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb990;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    FUN_108c5da90(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c6954c; end: 108c6955f;  */

void FUN_108c6954c(void)

{
  FUN_108c69560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c69560; end: 108c695c7;  */

undefined8 * FUN_108c69560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb990;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    FUN_108c5da90(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c695c8; end: 108c6962f;  */

void FUN_108c695c8(undefined8 param_1)

{
  long unaff_x20;
  long unaff_x21;
  uint uStack_38;
  
  func_0x000108c69c08();
  do {
    func_0x000108c69ad4();
    if ((int)param_1 != 0) {
      if (*(char *)(unaff_x20 + 0xe0) == '\x01') {
        FUN_108c5da90(unaff_x20 + 0x98);
        *(undefined1 *)(unaff_x20 + 0xe0) = 0;
      }
      func_0x000108c69cf8();
      FUN_108c69630();
      *(undefined4 *)(unaff_x20 + 0xd8) = *(undefined4 *)(unaff_x21 + 0x40);
      *(undefined1 *)(unaff_x20 + 0xe0) = 1;
      func_0x000108c69abc();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 108c69630; end: 108c6965f;  */

void FUN_108c69630(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_108c69660();
    param_1[0x38] = 1;
  }
  return;
}



/* Entry: 108c69660; end: 108c696d3;  */

undefined8 * FUN_108c69660(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  
  *param_1 = &PTR_FUN_110abc750;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 6) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      func_0x000108c69dc4();
      uVar1 = extraout_x8;
    }
    if (uVar1 == 0) {
      func_0x000108c6e86c(param_1);
    }
    else {
      FUN_108c6e83c(param_1);
    }
  }
  return param_1;
}



/* Entry: 108c696d4; end: 108c696df;  */

void FUN_108c696d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb8c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c696e0; end: 108c69727;  */

void FUN_108c696e0(long param_1)

{
  func_0x000108c69bb4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c69728; end: 108c6977f;  */

void FUN_108c69728(long *param_1)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = 200;
  __Znwm();
  func_0x000108c69b38();
  func_0x000108c69cec(&PTR_FUN_110abb9d0);
  *(undefined1 *)(lVar1 + 0xc0) = 0;
  uStack_28 = 0;
  *param_1 = lVar1;
  param_1[1] = lVar1;
  func_0x000108c69d98();
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 108c69780; end: 108c697ef;  */

void FUN_108c69780(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uStack_38;
  
  lVar1 = param_1;
  do {
    func_0x000108c69ad4();
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        func_0x000107c279c4(param_1 + 0x98);
        *(undefined1 *)(param_1 + 0xc0) = 0;
      }
      func_0x000108c69cf8();
      func_0x000107c27b7c();
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_3 + 0x20);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      func_0x000108c69abc();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 108c697f0; end: 108c697f3;  */

undefined8 * FUN_108c697f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb9d0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c279c4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c697f4; end: 108c69807;  */

void FUN_108c697f4(void)

{
  FUN_108c69808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c69808; end: 108c69843;  */

undefined8 * FUN_108c69808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abb9d0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c279c4(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 108c69844; end: 108c69847;  */

void FUN_108c69844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abba10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c69848; end: 108c6985b;  */

void FUN_108c69848(void)

{
  func_0x000108c69a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6985c; end: 108c69867;  */

void FUN_108c6985c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c69b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c69868; end: 108c6987b;  */

void FUN_108c69868(void)

{
  FUN_108c69a50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6987c; end: 108c698d7;  */

void FUN_108c6987c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [24];
  undefined1 uStack_50;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  auStack_68[0] = 0;
  uStack_50 = 0;
  uVar1 = *param_3;
  func_0x000107c27b7c(auStack_48,auStack_68);
  uStack_28 = uVar1;
  FUN_108c69a7c(param_1 + 0x10,auStack_48);
  func_0x000107c279c4(auStack_48);
  func_0x000107c279c4(auStack_68);
  return;
}



/* Entry: 108c698d8; end: 108c69a4f;  */

long * FUN_108c698d8(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  int aiStack_80 [8];
  undefined4 uStack_60;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*plRam0000000113815c70 + 0x140))(&lStack_48);
  if (*param_3 != 0) {
    func_0x000104ae4640(aiStack_80,param_3,&lStack_48);
    func_0x000107c27cbc(aiStack_80);
    if (aiStack_80[0] == 0) {
      uVar1 = uStack_40 & 0xff;
      lVar2 = (long)&uStack_40 + 1;
      if (lStack_48 != 0) {
        uVar1 = uStack_40;
        lVar2 = lStack_38;
      }
      func_0x000107c27d7c(&uStack_e0,lVar2,lVar2 + uVar1);
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      uStack_b0 = uStack_d0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_e0 = 0;
      uStack_a8 = 1;
      func_0x000107c27b7c(aiStack_80,&uStack_c0);
      uStack_60 = 0;
      FUN_108c69a7c(param_1 + 0x10,aiStack_80);
      func_0x000107c279c4(aiStack_80);
      func_0x000107c279c4(&uStack_c0);
      func_0x000107c27914(&uStack_e0);
      goto LAB_108c69a00;
    }
  }
  auStack_a0[0] = 0;
  uStack_88 = 0;
  func_0x000107c27b7c(aiStack_80,auStack_a0);
  uStack_60 = 2;
  FUN_108c69a7c(param_1 + 0x10,aiStack_80);
  func_0x000107c279c4(aiStack_80);
  func_0x000107c279c4(auStack_a0);
LAB_108c69a00:
  plVar3 = &lStack_48;
  func_0x000107c28118();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    plVar3 = &lStack_48;
    func_0x000107c28118(plVar3);
    func_0x000108c69ba4();
    func_0x000108c69b14(&PTR_DAT_110abba60);
    func_0x000108c69c50();
    return plVar3;
  }
  return plVar3;
}



/* Entry: 108c69a50; end: 108c69a7b;  */

undefined8 FUN_108c69a50(undefined8 param_1)

{
  func_0x000108c69b14(&PTR_DAT_110abba60);
  func_0x000108c69c50();
  return param_1;
}



/* Entry: 108c69a7c; end: 108c69a97;  */

void FUN_108c69a7c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uStack_38;
  
  lVar2 = *param_1;
  lVar1 = lVar2;
  do {
    func_0x000108c69ad4();
    if ((int)lVar1 != 0) {
      if (*(char *)(lVar2 + 0xc0) == '\x01') {
        func_0x000107c279c4(lVar2 + 0x98);
        *(undefined1 *)(lVar2 + 0xc0) = 0;
      }
      func_0x000108c69cf8();
      func_0x000107c27b7c();
      *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(param_2 + 0x20);
      *(undefined1 *)(lVar2 + 0xc0) = 1;
      func_0x000108c69abc();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 108c69a98; end: 108c69abb;  */

void FUN_108c69a98(long param_1)

{
  func_0x000108c69bb4();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 108c69abc; end: 108c69dfb;  */

void FUN_108c69abc(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 2;
  lVar1 = unaff_x20 + 0x20;
  lVar4 = lVar1;
  do {
    if (*(char *)(lVar4 + 1) != '\0') {
      uVar5 = 0;
      plVar7 = (long *)(lVar4 + 0x20);
      do {
        plVar2 = (long *)*plVar7;
        pcVar3 = (code *)plVar7[-2];
        if (plVar2 == (long *)0x0) {
          if (pcVar3 == (code *)0x0) {
            (**(code **)plVar7[-1])();
          }
          else {
            (*pcVar3)();
          }
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2,pcVar3,plVar7[-1]);
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 3;
      } while (uVar5 < *(byte *)(lVar4 + 1));
    }
    lVar6 = *(long *)(lVar4 + 8);
    if (lVar4 != lVar1) {
      func_0x000107c60fd0(lVar4);
    }
    lVar4 = lVar6;
  } while (lVar6 != 0);
  *(long *)(unaff_x20 + 0x90) = lVar1;
  *(undefined1 *)(unaff_x20 + 0x21) = 0;
  return;
}



/* Entry: 108c69dfc; end: 108c69eff;  */

void FUN_108c69dfc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_a0;
  puVar3 = param_2;
  func_0x000108c6a2cc();
  uVar1 = *puVar3;
  lVar2 = puVar3[1];
  uStack_a0 = uVar1;
  lStack_98 = lVar2;
  uStack_48 = extraout_x8;
  if (lVar2 != 0) {
    do {
      func_0x000108c6a2a0();
    } while (extraout_w10 != 0);
  }
  puVar3 = (undefined8 *)0x78;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_110abbb18;
  uStack_a0 = 0;
  lStack_98 = 0;
  ppuStack_68 = &PTR_FUN_110abbb68;
  uStack_78 = 0;
  uStack_70 = 0;
  pppuStack_50 = &ppuStack_68;
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  uStack_60 = uVar1;
  lStack_58 = lVar2;
  if (param_2[1] != 0) {
    do {
      func_0x000108c6a2a0();
    } while (extraout_w10_00 != 0);
  }
  FUN_108c67e0c(puVar3 + 3,&ppuStack_68,&uStack_90);
  func_0x000107c278a4(&uStack_90);
  func_0x000108c68b60(&ppuStack_68);
  func_0x000107c278a4(&uStack_78);
  *unaff_x19 = (long)(puVar3 + 3);
  unaff_x19[1] = (long)puVar3;
  func_0x000107c278a4(&uStack_a0);
  func_0x000108c6a2b8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c278a4(&uStack_a0);
    __Unwind_Resume(puVar4);
    return;
  }
  return;
}



/* Entry: 108c69f00; end: 108c69f0b;  */

void FUN_108c69f00(void)

{
  return;
}



/* Entry: 108c69f0c; end: 108c69f1f;  */

void FUN_108c69f0c(void)

{
  func_0x000108c6a290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c69f20; end: 108c69f2f;  */

void FUN_108c69f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c69f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c69f30; end: 108c69f5b;  */

undefined8 * FUN_108c69f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abbb68;
  func_0x000107c278a4(param_1 + 1);
  return param_1;
}



/* Entry: 108c69f5c; end: 108c69f6f;  */

void FUN_108c69f5c(void)

{
  FUN_108c69f30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c69f70; end: 108c69fb7;  */

void FUN_108c69f70(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110abbb68;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000108c6a2a0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108c69fb8; end: 108c6a007;  */

void FUN_108c69fb8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110abbb68;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108c6a2a0(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108c6a008; end: 108c6a24b;  */

void FUN_108c6a008(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x000108c6a2cc();
  lStack_50 = CONCAT44(lStack_50._4_4_,0x19);
  uStack_38 = extraout_x8;
  func_0x000107c31444();
  func_0x0001053903fc(auStack_68,&PTR_DAT_110abbbd8,&lStack_50,lVar3);
  func_0x000107c281e4(auStack_78);
  func_0x000107c27e78(&lStack_88);
  func_0x000107c27c04(&uStack_90);
  lVar3 = lStack_88;
  func_0x000107c278b8(&lStack_50,"us-east4-gcp.api.snapchat.com");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar3 + 0x98,&lStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_50);
  *(undefined4 *)(lStack_88 + 0x8c) = 3;
  *(undefined1 *)(lStack_88 + 0x88) = 1;
  *(undefined8 *)(lStack_88 + 0x90) = 10000;
  *(undefined8 *)(lStack_88 + 0x68) = 20000;
  *(undefined1 *)(lStack_88 + 0x70) = 1;
  lStack_50 = lStack_88;
  lStack_48 = lStack_80;
  if (lStack_80 != 0) {
    do {
      func_0x000108c6a2a0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c2bf94();
  func_0x000107c27e7c(&lStack_50);
  func_0x000107c28064(auStack_a0,param_1 + 8);
  func_0x000107c27c30(&lStack_50,1);
  puVar1 = puStack_40;
  uStack_58 = uStack_90;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1107e9bc8;
  puStack_40[1] = 0;
  uStack_90 = 0;
  func_0x000107c27c34(puStack_40 + 3,auStack_68,auStack_a0,auStack_78,&uStack_58,0,0,0);
  func_0x000107c27c10(&uStack_58);
  puVar2 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  func_0x000107c27c2c(puVar2 + 3);
  func_0x000107c27cdc(&lStack_50);
  func_0x000107c27c18(auStack_a0);
  func_0x000107c27c10(&uStack_90);
  func_0x000107c27e94(&lStack_88);
  func_0x000107c27c28(auStack_78);
  puVar4 = auStack_68;
  func_0x000107c27c20(puVar4);
  func_0x000108c6a2b8(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27c10(&uStack_58);
    __ZNSt3__119__shared_weak_countD2Ev(puVar1);
    func_0x000107c27cdc(&lStack_50);
    func_0x000107c27c18(auStack_a0);
    func_0x000107c27c10(&uStack_90);
    do {
      func_0x000107c27e94(&lStack_88);
      func_0x000107c27c28(auStack_78);
      func_0x000107c27c20(auStack_68);
      __Unwind_Resume(puVar4);
    } while( true );
  }
  return;
}



/* Entry: 108c6a24c; end: 108c6a283;  */

long FUN_108c6a24c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110abbbe0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108c6a284; end: 108c6a2df;  */

undefined ** FUN_108c6a284(void)

{
  return &PTR_DAT_110abbbe0;
}



/* Entry: 108c6a2e0; end: 108c6a317;  */

undefined8 * FUN_108c6a2e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abbc00;
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  FUN_108c6a820(param_1[2]);
  return param_1;
}



/* Entry: 108c6a318; end: 108c6a31b;  */

undefined8 * FUN_108c6a318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abbc00;
  __ZNSt3__15mutexD1Ev(param_1 + 4);
  FUN_108c6a820(param_1[2]);
  return param_1;
}



/* Entry: 108c6a31c; end: 108c6a32f;  */

void FUN_108c6a31c(void)

{
  FUN_108c6a2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6a330; end: 108c6a397;  */

void FUN_108c6a330(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  
  func_0x000108c6aa60();
  FUN_108c6a398(unaff_x20 + 8,param_2);
  FUN_108c527f0();
  func_0x000108c6aa70();
  func_0x000108c6aa80();
  func_0x000108c6aa9c();
  func_0x000108c6aabc();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c6aa44();
    } while (extraout_w10 != 0);
  }
  func_0x000108c6aa8c();
  return;
}



/* Entry: 108c6a398; end: 108c6a4af;  */

undefined8 * FUN_108c6a398(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar7 = param_1 + 1;
  plVar6 = plVar7;
  plVar5 = plVar7;
  plVar1 = (long *)*plVar7;
joined_r0x000108c6a3c8:
  do {
    if (plVar1 == (long *)0x0) {
LAB_108c6a41c:
      puVar4 = (undefined8 *)0x50;
      __Znwm();
      uStack_48 = 0;
      puStack_58 = puVar4;
      plStack_50 = plVar7;
      FUN_108c54578(puVar4 + 4,param_2);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = plVar5;
      *plVar6 = (long)puVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x000107c27be4(param_1[1],puVar4);
      param_1[2] = param_1[2] + 1;
      puStack_58 = (undefined8 *)0x0;
      func_0x000108c6a860(&puStack_58);
LAB_108c6a484:
      return puVar4 + 7;
    }
    uVar2 = param_2;
    func_0x000107c27bd4(param_2,plVar1 + 4);
    plVar5 = plVar1;
    if (((uint)uVar2 >> 7 & 1) != 0) {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar1;
      goto joined_r0x000108c6a3c8;
    }
    plVar3 = plVar1 + 4;
    func_0x000107c27bd4(plVar3,param_2);
    if (((uint)plVar3 >> 7 & 1) == 0) {
      puVar4 = (undefined8 *)*plVar6;
      if (puVar4 != (undefined8 *)0x0) goto LAB_108c6a484;
      goto LAB_108c6a41c;
    }
    plVar6 = plVar1 + 1;
    plVar1 = (long *)*plVar6;
  } while( true );
}



/* Entry: 108c6a4b0; end: 108c6a523;  */

void FUN_108c6a4b0(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long *plVar1;
  
  func_0x000108c6aa60();
  plVar1 = (long *)(param_2 + 0x10);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_108c6a398(unaff_x20 + 8,plVar1 + 2);
    FUN_108c527f0();
  }
  func_0x000108c6aa70();
  func_0x000108c6aa80();
  func_0x000108c6aa9c();
  func_0x000108c6aabc();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c6aa44();
    } while (extraout_w10 != 0);
  }
  func_0x000108c6aa8c();
  return;
}



/* Entry: 108c6a524; end: 108c6a5ef;  */

void FUN_108c6a524(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_40;
  
  func_0x000108c6aa78();
  FUN_108c6a8a8(param_2 + 8,param_3);
  func_0x000108c6aa70();
  func_0x000108c6aab0();
  func_0x000107c28850(param_3 + 8);
  *param_1 = uStack_40;
  if (uStack_40 != 0) {
    do {
      func_0x000108c6aa44();
    } while (extraout_w10 != 0);
  }
  func_0x000108c6aa8c();
  return;
}



/* Entry: 108c6a5f0; end: 108c6a67f;  */

void FUN_108c6a5f0(long *param_1,long param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  
  func_0x000108c6aa78();
  FUN_108c6a978(param_2 + 8);
  __ZNSt3__15mutex6unlockEv(param_2 + 0x20);
  func_0x000108c6aab0();
  func_0x000107c28850(param_2 + 8);
  *param_1 = uStack_30;
  if (uStack_30 != 0) {
    do {
      func_0x000108c6aa44();
    } while (extraout_w10 != 0);
  }
  func_0x000108c6aa8c();
  return;
}



/* Entry: 108c6a680; end: 108c6a73b;  */

void FUN_108c6a680(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  lVar1 = param_2;
  func_0x000108c6aa78();
  func_0x000108c6aaa4();
  if (param_2 + 0x10 != lVar1) {
    FUN_108c527f0(&uStack_48,lVar1 + 0x38);
  }
  func_0x000108c6aa70();
  FUN_108c4f060(&lStack_58);
  FUN_108c4f090(auStack_50,&uStack_48);
  *param_1 = lStack_58;
  if (lStack_58 != 0) {
    do {
      func_0x000108c6aa44();
    } while (extraout_w10 != 0);
  }
  FUN_108c4ff78(&lStack_58);
  FUN_108c41168(&uStack_48);
  return;
}



/* Entry: 108c6a73c; end: 108c6a81f;  */

void FUN_108c6a73c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  int extraout_w10;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x3f800000;
  puVar2 = param_1;
  func_0x000108c6aa78();
  lVar1 = param_2[1];
  for (lVar3 = *param_2; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    func_0x000108c6aaa4();
    if (param_1 + 2 != puVar2) {
      puVar2 = &uStack_70;
      FUN_108c53e84(puVar2,lVar3);
      FUN_108c527f0();
    }
  }
  func_0x000108c6aa70();
  func_0x000108c4e9e4(auStack_80);
  FUN_108c4ea14(auStack_78,&uStack_70);
  func_0x000108c6aabc();
  if (extraout_x8 != 0) {
    do {
      func_0x000108c6aa44();
    } while (extraout_w10 != 0);
  }
  FUN_108c4fdf4(auStack_80);
  func_0x000108c42160(&uStack_70);
  return;
}



/* Entry: 108c6a820; end: 108c6a8a7;  */

void FUN_108c6a820(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_108c6a820(*param_1);
    FUN_108c6a820(param_1[1]);
    func_0x000108c41870(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 108c6a8a8; end: 108c6a977;  */

void FUN_108c6a8a8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar4 = param_1 + 1;
  puVar3 = puVar4;
  puVar5 = puVar4;
  while (puVar6 = (undefined8 *)*puVar3, puVar6 != (undefined8 *)0x0) {
    puVar3 = puVar6 + 4;
    func_0x000107c27bd4(puVar3,param_2);
    bVar2 = -1 < (char)puVar3;
    lVar1 = 8;
    if (bVar2) {
      lVar1 = 0;
    }
    puVar3 = (undefined8 *)((long)puVar6 + lVar1);
    if (bVar2) {
      puVar5 = puVar6;
    }
  }
  if ((puVar4 != puVar5) && (func_0x000107c27bd4(param_2,puVar5 + 4), ((uint)param_2 >> 7 & 1) == 0)
     ) {
    puVar4 = puVar5;
    func_0x000107c27be0();
    if ((undefined8 *)*param_1 == puVar5) {
      *param_1 = puVar4;
    }
    param_1[2] = param_1[2] + -1;
    func_0x00010530d618(param_1[1],puVar5);
    func_0x000108c41870(puVar5 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar5);
    return;
  }
  return;
}



/* Entry: 108c6a978; end: 108c6a9ab;  */

void FUN_108c6a978(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  FUN_108c6a820(*puVar1);
  *param_1 = puVar1;
  param_1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 108c6a9ac; end: 108c6aa33;  */

long * FUN_108c6a9ac(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    lVar3 = (long)(plVar6 + 4);
    func_0x000107c27bd4(lVar3,param_2);
    bVar2 = -1 < (char)lVar3;
    lVar3 = 8;
    if (bVar2) {
      lVar3 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar3);
    if (bVar2) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (func_0x000107c27bd4(param_2,plVar5 + 4), ((uint)param_2 >> 7 & 1) != 0)
     ) {
    plVar5 = plVar1;
  }
  return plVar5;
}



/* Entry: 108c6aa34; end: 108c6aac7;  */

void FUN_108c6aa34(void)

{
  return;
}



/* Entry: 108c6aac8; end: 108c6aaf7;  */

undefined8 * FUN_108c6aac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abbc88;
  FUN_108c41168(param_1 + 1);
  return param_1;
}



/* Entry: 108c6aaf8; end: 108c6aafb;  */

undefined8 * FUN_108c6aaf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abbc88;
  FUN_108c41168(param_1 + 1);
  return param_1;
}



/* Entry: 108c6aafc; end: 108c6ab0f;  */

void FUN_108c6aafc(void)

{
  FUN_108c6aac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c6ab10; end: 108c6ab5f;  */

void FUN_108c6ab10(long *param_1,long param_2)

{
  int extraout_w10;
  long unaff_x20;
  long alStack_30 [2];
  
  FUN_108c40c8c(param_2 + 8);
  func_0x000108c6ac58();
  func_0x000107c28850(unaff_x20 + 8);
  *param_1 = alStack_30[0];
  if (alStack_30[0] != 0) {
    do {
      func_0x000108c6ac48();
    } while (extraout_w10 != 0);
  }
  func_0x000107c289dc(alStack_30);
  return;
}



/* Entry: 108c6ab60; end: 108c6ab67;  */

void FUN_108c6ab60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x000108c43e8c(puVar1,*puVar1);
  lVar2 = puVar1[1];
  while (lVar2 != unaff_x19) {
    lVar2 = lVar2 + -0x48;
    FUN_108c4064c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108c6ab68; end: 108c6abb7;  */

void FUN_108c6ab68(long *param_1,long param_2)

{
  int extraout_w10;
  long unaff_x20;
  long alStack_30 [2];
  
  FUN_108c527f0(param_2 + 8);
  func_0x000108c6ac58();
  func_0x000107c28850(unaff_x20 + 8);
  *param_1 = alStack_30[0];
  if (alStack_30[0] != 0) {
    do {
      func_0x000108c6ac48();
    } while (extraout_w10 != 0);
  }
  func_0x000107c289dc(alStack_30);
  return;
}



/* Entry: 108c6abb8; end: 108c6ac47;  */

void FUN_108c6abb8(long *param_1,long param_2)

{
  int extraout_w10;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined1 auStack_38 [8];
  
  FUN_108c4f060(&lStack_40);
  FUN_108c41f1c(auStack_58,param_2 + 8);
  FUN_108c4f090(auStack_38,auStack_58);
  FUN_108c41168(auStack_58);
  *param_1 = lStack_40;
  if (lStack_40 != 0) {
    do {
      FUN_108c6ac48();
    } while (extraout_w10 != 0);
  }
  FUN_108c4ff78(&lStack_40);
  return;
}



/* Entry: 108c6ac48; end: 108c6ac6f;  */

void FUN_108c6ac48(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108c6ac70; end: 108c6acff;  */

void FUN_108c6ac70(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    puVar1 = (ulong *)(*(long *)(param_2 + 0x18) + 0x10);
    uVar2 = *puVar1;
    if ((uVar2 & 1) != 0) {
      puVar1 = (ulong *)(uVar2 + 7);
    }
    for (lVar3 = (long)*(int *)(*(long *)(param_2 + 0x18) + 0x18) << 3; lVar3 != 0;
        lVar3 = lVar3 + -8) {
      func_0x000108c6b0fc(*puVar1);
      func_0x000108c6b10c();
      func_0x000108c6b0ec();
      puVar1 = puVar1 + 1;
    }
  }
  return;
}



/* Entry: 108c6ad00; end: 108c6adcf;  */

void FUN_108c6ad00(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  __ZNSt3__16chrono12system_clock3nowEv();
  puVar2 = &UNK_10f50e407;
  func_0x000107c30184(&UNK_10f50e407,0x18,5);
  FUN_108c6b0d8(*(undefined8 *)(param_2 + 0x10),&uStack_48);
  FUN_108c6b0d8(*(undefined8 *)(param_2 + 0x20),&uStack_60);
  param_1[2] = uStack_38;
  param_1[5] = uStack_50;
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  param_1[7] = *(undefined8 *)(param_2 + 0x30);
  param_1[6] = uVar3;
  param_1[8] = lVar1 / 1000000 + (long)puVar2 * 0x3c;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  func_0x000108c6b0f4();
  return;
}



/* Entry: 108c6add0; end: 108c6ae83;  */

void FUN_108c6add0(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *(ulong *)(param_2 + 0x10);
  param_1[2] = 0;
  puVar4 = (ulong *)(param_2 + 0x10);
  if ((uVar2 & 1) != 0) {
    puVar4 = (ulong *)(uVar2 + 7);
  }
  puVar1 = puVar4 + *(int *)(param_2 + 0x18);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    puVar3 = (ulong *)(*puVar4 + 0x10);
    uVar2 = *puVar3;
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    for (lVar5 = (long)*(int *)(*puVar4 + 0x18) << 3; lVar5 != 0; lVar5 = lVar5 + -8) {
      func_0x000108c6b0fc(*puVar3);
      func_0x000108c6b10c();
      func_0x000108c6b0ec();
      puVar3 = puVar3 + 1;
    }
  }
  return;
}



/* Entry: 108c6ae84; end: 108c6af9f;  */

void FUN_108c6ae84(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar3 = *(ulong *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  puVar4 = (ulong *)(param_2 + 0x10);
  if ((uVar3 & 1) != 0) {
    puVar4 = (ulong *)(uVar3 + 7);
  }
  puVar1 = puVar4 + *(int *)(param_2 + 0x18);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    uVar5 = *puVar4;
    FUN_108c6b118(auStack_58,*(ulong *)(uVar5 + 0x28) & 0xfffffffffffffffc);
    uStack_68 = 0;
    uStack_60 = 0;
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uStack_70 = 0;
    puVar2 = (ulong *)(uVar5 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar2 = (ulong *)(uVar3 + 7);
    }
    for (lVar6 = (long)*(int *)(uVar5 + 0x18) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      func_0x000108c6b0fc(*puVar2);
      func_0x000108c40fc0(&uStack_70,auStack_b8);
      func_0x000108c6b0ec();
      puVar2 = puVar2 + 1;
    }
    FUN_108c53e84(param_1,auStack_58);
    FUN_108c40c20();
    FUN_108c41168(&uStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  return;
}



/* Entry: 108c6afa0; end: 108c6afc3;  */

undefined8 * FUN_108c6afa0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000100696410();
  return param_1;
}



/* Entry: 108c6afc4; end: 108c6b0d7;  */

void FUN_108c6afc4(undefined8 param_1,long param_2)

{
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  FUN_108c6afa0(auStack_38,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  FUN_108c6b0d8(*(undefined8 *)(param_2 + 0x18),auStack_50);
  FUN_108c6b0d8(*(undefined8 *)(param_2 + 0x20),auStack_68);
  FUN_108c6b0d8(*(undefined8 *)(param_2 + 0x28),auStack_80);
  FUN_108c6b0d8(*(undefined8 *)(param_2 + 0x30),auStack_98);
  FUN_108c6b0d8(*(undefined8 *)(param_2 + 0x38),auStack_b0);
  FUN_108c46eb0(param_1,auStack_38,auStack_50,auStack_68,auStack_80,auStack_98,auStack_b0,
                *(undefined8 *)(param_2 + 0x40));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x000108c6b0f4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 108c6b0d8; end: 108c6b117;  */

void FUN_108c6b0d8(ulong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_2,param_1 & 0xfffffffffffffffc);
  return;
}



/* Entry: 108c6b118; end: 108c6b1bb;  */

void FUN_108c6b118(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 *unaff_x19;
  long lStack_30;
  long lStack_28;
  long lStack_18;
  
  plVar1 = &lStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] == 0x10) {
      param_2 = (long *)*param_2;
      goto LAB_108c6b15c;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) == '\x10') {
LAB_108c6b15c:
    lStack_28 = param_2[1];
    lStack_30 = *param_2;
    func_0x000107c27f30();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
      return;
    }
    goto LAB_108c6b1b8;
  }
  plVar1 = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330
    )(param_1);
    return;
  }
LAB_108c6b1b8:
  ___stack_chk_fail();
  plVar2 = plVar1;
  func_0x000108c6c19c();
  lVar3 = *plVar1;
  while( true ) {
    if (lVar3 == plVar1[1]) {
      *unaff_x19 = 0;
      unaff_x19[0x48] = 0;
      return;
    }
    if ((*(long *)(lVar3 + 0x30) <= (long)plVar2 / 1000000) &&
       ((long)plVar2 / 1000000 < *(long *)(lVar3 + 0x38) + *(long *)(lVar3 + 0x30))) break;
    lVar3 = lVar3 + 0x48;
  }
  FUN_108c420f0();
  unaff_x19[0x48] = 1;
  return;
}



/* Entry: 108c6b1bc; end: 108c6b22f;  */

void FUN_108c6b1bc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *unaff_x19;
  
  plVar1 = param_1;
  func_0x000108c6c19c();
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == param_1[1]) {
      *unaff_x19 = 0;
      unaff_x19[0x48] = 0;
      return;
    }
    if ((*(long *)(lVar2 + 0x30) <= (long)plVar1 / 1000000) &&
       ((long)plVar1 / 1000000 < *(long *)(lVar2 + 0x38) + *(long *)(lVar2 + 0x30))) break;
    lVar2 = lVar2 + 0x48;
  }
  FUN_108c420f0();
  unaff_x19[0x48] = 1;
  return;
}



/* Entry: 108c6b230; end: 108c6b2a7;  */

void FUN_108c6b230(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long lVar3;
  
  plVar2 = param_1;
  func_0x000108c6c19c();
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  lVar1 = param_1[1];
  for (lVar3 = *param_1; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
    if ((long)plVar2 / 1000000 <= *(long *)(lVar3 + 0x38) + *(long *)(lVar3 + 0x30)) {
      FUN_108c6b434();
    }
  }
  return;
}



/* Entry: 108c6b2a8; end: 108c6b37f;  */

void FUN_108c6b2a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long lVar3;
  long *plVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x000108c6c19c();
  unaff_x19[1] = 0;
  *unaff_x19 = 0;
  unaff_x19[3] = 0;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 4) = 0x3f800000;
  plVar4 = (long *)(param_1 + 0x10);
  while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    lVar1 = plVar4[6];
    for (lVar3 = plVar4[5]; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
      if (lVar2 / 1000000 <= *(long *)(lVar3 + 0x38) + *(long *)(lVar3 + 0x30)) {
        FUN_108c6b434(&uStack_58,lVar3);
      }
    }
    FUN_108c53e84();
    FUN_108c40c20();
    FUN_108c41168(&uStack_58);
  }
  return;
}



/* Entry: 108c6b380; end: 108c6b3df;  */

bool FUN_108c6b380(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*param_1 == param_1[1]) {
    return false;
  }
  plVar3 = param_1;
  __ZNSt3__16chrono12system_clock3nowEv();
  lVar4 = *param_1;
  do {
    bVar2 = lVar4 != param_1[1];
    if (lVar4 == param_1[1]) {
      return bVar2;
    }
    plVar1 = (long *)(lVar4 + 0x40);
    lVar4 = lVar4 + 0x48;
  } while ((long)plVar3 / 1000000 < *plVar1);
  return bVar2;
}



/* Entry: 108c6b3e0; end: 108c6b417;  */

void FUN_108c6b3e0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  bool bVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  plVar6 = (long *)*param_1;
  plVar11 = (long *)param_1[1];
  if (plVar6 == plVar11) {
    return;
  }
  uVar12 = LZCOUNT(((long)plVar11 - (long)plVar6) / 0x48) << 1 ^ 0x7e;
  bVar17 = true;
  do {
    plVar10 = plVar11 + -9;
    plVar9 = plVar6;
LAB_108c6b5a8:
    while( true ) {
      plVar6 = plVar9;
      uVar13 = (long)plVar11 - (long)plVar6;
      uVar18 = (long)uVar13 / 0x48;
      cVar4 = SBORROW8(uVar18,5);
      cVar5 = (long)(uVar18 - 5) < 0;
      switch(uVar18) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x000108c6c1c4(plVar11[-3]);
        if (cVar5 == cVar4) {
          return;
        }
        FUN_108c6c0d8(plVar6,plVar10);
        return;
      case 3:
        func_0x000108c6c174(plVar6,plVar6 + 9);
        return;
      case 4:
        func_0x000108c6be10(plVar6,plVar6 + 9,plVar6 + 0x12,plVar10);
        return;
      case 5:
        FUN_108c6be70(plVar6,plVar6 + 9,plVar6 + 0x12,plVar6 + 0x1b,plVar10);
        return;
      }
      if ((long)uVar13 < 0x6c0) {
        if (bVar17 == false) {
          if (plVar6 == plVar11) {
            return;
          }
          while (plVar9 = plVar6, plVar6 = plVar9 + 9, plVar6 != plVar11) {
            if (plVar9[0xf] < plVar9[6]) {
              lStack_a8 = plVar9[10];
              lStack_b0 = *plVar6;
              lStack_a0 = plVar9[0xb];
              plVar9[10] = 0;
              plVar9[0xb] = 0;
              *plVar6 = 0;
              lStack_90 = plVar9[0xd];
              lStack_98 = plVar9[0xc];
              lStack_88 = plVar9[0xe];
              plVar9[0xc] = 0;
              plVar9[0xd] = 0;
              plVar9[0xe] = 0;
              lStack_78 = plVar9[0x10];
              lStack_80 = plVar9[0xf];
              lStack_70 = plVar9[0x11];
              do {
                plVar10 = plVar9;
                func_0x000108c6c194(plVar10 + 9);
                plVar9 = plVar10 + -9;
              } while (lStack_80 < plVar10[-3]);
              FUN_108c405ec(plVar10,&lStack_b0);
              func_0x000108c6c150();
            }
          }
          return;
        }
        if (plVar6 == plVar11) {
          return;
        }
        lVar15 = 0;
        plVar9 = plVar6;
        goto LAB_108c6b938;
      }
      if (uVar12 == 0) {
        if (plVar6 == plVar11) {
          return;
        }
        uVar13 = uVar18 - 2 >> 1;
        uVar12 = uVar13;
        goto LAB_108c6ba08;
      }
      plVar9 = plVar6 + (uVar18 >> 1) * 9;
      cVar4 = SBORROW8(uVar13,0x2401);
      cVar5 = (long)(uVar13 - 0x2401) < 0;
      if (uVar13 < 0x2401) {
        func_0x000108c6c174(plVar9,plVar6);
      }
      else {
        func_0x000108c6c174(plVar6,plVar9);
        FUN_108c6bd78(plVar6 + 9,plVar9 + -9,plVar11 + -0x12);
        FUN_108c6bd78(plVar6 + 0x12,plVar9 + 9,plVar11 + -0x1b);
        FUN_108c6bd78(plVar9 + -9,plVar9,plVar9 + 9);
        FUN_108c6c0d8(plVar6,plVar9);
      }
      uVar12 = uVar12 - 1;
      if ((bVar17) || (func_0x000108c6c1c4(plVar6[-3]), cVar5 != cVar4)) break;
      lVar20 = plVar6[1];
      lVar15 = *plVar6;
      lStack_a0 = plVar6[2];
      lStack_b0 = lVar15;
      lStack_a8 = lVar20;
      func_0x000108c6c164();
      lStack_88 = plVar6[5];
      func_0x000108c6c1b0();
      lStack_70 = plVar6[8];
      plVar7 = plVar6;
      if (lVar15 < plVar11[-3]) {
        do {
          plVar9 = plVar7 + 9;
          plVar8 = plVar7 + 0xf;
          plVar7 = plVar9;
        } while (*plVar8 <= lVar15);
      }
      else {
        do {
          plVar9 = plVar7 + 9;
          if (plVar11 <= plVar9) break;
          plVar8 = plVar7 + 0xf;
          plVar7 = plVar9;
        } while (*plVar8 <= lVar15);
      }
      plVar7 = plVar11;
      plVar8 = plVar11;
      lStack_80 = lVar15;
      lStack_78 = lVar20;
      if (plVar9 < plVar11) {
        do {
          plVar8 = plVar7 + -9;
          plVar19 = plVar7 + -3;
          plVar7 = plVar8;
        } while (lVar15 < *plVar19);
      }
      while (plVar9 < plVar8) {
        FUN_108c6c0d8(plVar9,plVar8);
        do {
          plVar7 = plVar9 + 0xf;
          plVar9 = plVar9 + 9;
        } while (*plVar7 <= lVar15);
        do {
          plVar7 = plVar8 + -3;
          plVar8 = plVar8 + -9;
        } while (lVar15 < *plVar7);
      }
      plVar7 = plVar9 + -9;
      if (plVar6 != plVar7) {
        FUN_108c405ec(plVar6,plVar7);
      }
      FUN_108c405ec(plVar7,&lStack_b0);
      func_0x000108c6c150();
      bVar17 = false;
    }
    lVar21 = plVar6[1];
    lVar20 = *plVar6;
    lStack_a0 = plVar6[2];
    lStack_b0 = lVar20;
    lStack_a8 = lVar21;
    func_0x000108c6c164(0);
    lStack_88 = plVar6[5];
    func_0x000108c6c1b0();
    lStack_70 = plVar6[8];
    lVar15 = extraout_x8;
    do {
      lVar3 = lVar15 + 0x78;
      lVar15 = lVar15 + 0x48;
    } while (*(long *)((long)plVar6 + lVar3) < lVar20);
    plVar7 = (long *)((long)plVar6 + lVar15);
    plVar8 = plVar11;
    plVar9 = plVar7;
    lStack_80 = lVar20;
    lStack_78 = lVar21;
    if (lVar15 == 0x48) {
      do {
        plVar19 = plVar8;
        if (plVar8 <= plVar7) break;
        plVar19 = plVar8 + -9;
        plVar1 = plVar8 + -3;
        plVar8 = plVar19;
      } while (lVar20 <= *plVar1);
    }
    else {
      do {
        plVar19 = plVar8 + -9;
        plVar1 = plVar8 + -3;
        plVar8 = plVar19;
      } while (lVar20 <= *plVar1);
    }
    while (plVar9 < plVar19) {
      FUN_108c6c0d8(plVar9,plVar19);
      do {
        plVar1 = plVar9 + 0xf;
        plVar9 = plVar9 + 9;
      } while (*plVar1 < lVar20);
      do {
        plVar1 = plVar19 + -3;
        plVar19 = plVar19 + -9;
      } while (lVar20 <= *plVar1);
    }
    plVar19 = plVar9 + -9;
    if (plVar6 != plVar19) {
      FUN_108c405ec(plVar6,plVar19);
    }
    FUN_108c405ec(plVar19,&lStack_b0);
    func_0x000108c6c150();
    if (plVar7 < plVar8) goto LAB_108c6b77c;
    plVar7 = plVar6;
    FUN_108c6bf0c(plVar6,plVar19);
    plVar8 = plVar9;
    FUN_108c6bf0c(plVar9,plVar11);
    if ((int)plVar8 == 0) goto code_r0x000108c6b778;
    plVar11 = plVar19;
    if (((ulong)plVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_108c6b938:
  plVar10 = plVar9 + 9;
  if (plVar10 == plVar11) {
    return;
  }
  if (plVar9[0xf] < plVar9[6]) {
    lStack_a8 = plVar9[10];
    lStack_b0 = *plVar10;
    lStack_a0 = plVar9[0xb];
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    *plVar10 = 0;
    lStack_90 = plVar9[0xd];
    lStack_98 = plVar9[0xc];
    lStack_88 = plVar9[0xe];
    plVar9[0xc] = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = 0;
    lStack_78 = plVar9[0x10];
    lStack_80 = plVar9[0xf];
    lStack_70 = plVar9[0x11];
    lVar20 = lVar15;
    do {
      lVar21 = lVar20;
      func_0x000108c6c194((long)plVar6 + lVar21 + 0x48);
      plVar9 = plVar6;
      if (lVar21 == 0) goto LAB_108c6b9d0;
      lVar20 = lVar21 + -0x48;
    } while (lStack_80 < *(long *)((long)plVar6 + lVar21 + -0x18));
    plVar9 = (long *)((long)plVar6 + lVar21);
LAB_108c6b9d0:
    FUN_108c405ec(plVar9,&lStack_b0);
    func_0x000108c6c150();
  }
  lVar15 = lVar15 + 0x48;
  plVar9 = plVar10;
  goto LAB_108c6b938;
LAB_108c6ba08:
  do {
    if ((long)uVar12 <= (long)uVar13) {
      uVar16 = (uVar12 & 0x3fffffffffffffff) << 1 | 1;
      plVar9 = plVar6 + uVar16 * 9;
      uVar2 = uVar12 * 2 + 2;
      uVar14 = uVar16;
      if ((long)uVar2 < (long)uVar18) {
        plVar10 = plVar9 + 6;
        plVar7 = plVar9 + 0xf;
        lVar15 = 0x48;
        if (*plVar7 <= *plVar10) {
          lVar15 = 0;
        }
        plVar9 = (long *)((long)plVar9 + lVar15);
        uVar14 = uVar2;
        if (*plVar7 <= *plVar10) {
          uVar14 = uVar16;
        }
      }
      plVar10 = plVar6 + uVar12 * 9;
      if (plVar10[6] <= plVar9[6]) {
        lStack_a8 = plVar10[1];
        lStack_b0 = *plVar10;
        lStack_a0 = plVar10[2];
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = 0;
        lStack_90 = plVar10[4];
        lStack_98 = plVar10[3];
        lStack_88 = plVar10[5];
        plVar10[4] = 0;
        plVar10[5] = 0;
        plVar10[3] = 0;
        lStack_78 = plVar10[7];
        lVar15 = plVar10[6];
        lStack_70 = plVar10[8];
        lStack_80 = lVar15;
        do {
          plVar7 = plVar9;
          FUN_108c405ec(plVar10,plVar7);
          if ((long)uVar13 < (long)uVar14) break;
          uVar16 = uVar14 << 1 | 1;
          plVar9 = plVar6 + uVar16 * 9;
          uVar2 = uVar14 * 2 + 2;
          uVar14 = uVar16;
          if ((long)uVar2 < (long)uVar18) {
            plVar10 = plVar9 + 6;
            plVar8 = plVar9 + 0xf;
            lVar20 = 0x48;
            if (*plVar8 <= *plVar10) {
              lVar20 = 0;
            }
            plVar9 = (long *)((long)plVar9 + lVar20);
            uVar14 = uVar2;
            if (*plVar8 <= *plVar10) {
              uVar14 = uVar16;
            }
          }
          plVar10 = plVar7;
        } while (lVar15 <= plVar9[6]);
        FUN_108c405ec(plVar7,&lStack_b0);
        func_0x000108c6c150();
      }
    }
    uVar12 = uVar12 - 1;
  } while (-1 < (long)uVar12);
  do {
    if ((long)uVar18 < 2) {
      return;
    }
    lVar20 = plVar6[1];
    lVar15 = *plVar6;
    lStack_f0 = plVar6[2];
    lStack_100 = lVar15;
    lStack_f8 = lVar20;
    func_0x000108c6c164(uVar18 - 2);
    lStack_d8 = plVar6[5];
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[3] = 0;
    lStack_c8 = plVar6[7];
    lStack_d0 = plVar6[6];
    lStack_c0 = plVar6[8];
    plVar9 = plVar6;
    uVar12 = 0;
    lStack_e8 = lVar15;
    lStack_e0 = lVar20;
    do {
      uVar2 = uVar12 << 1 | 1;
      uVar13 = uVar12 * 2 + 2;
      plVar10 = plVar9 + uVar12 * 9 + 9;
      uVar16 = uVar2;
      if (((long)uVar13 < (long)uVar18) &&
         (plVar10 = plVar9 + uVar12 * 9 + 0x12, uVar16 = uVar13,
         plVar9[uVar12 * 9 + 0x18] <= plVar9[uVar12 * 9 + 0xf])) {
        plVar10 = plVar9 + uVar12 * 9 + 9;
        uVar16 = uVar2;
      }
      plVar9 = plVar10;
      func_0x000108c6c194();
      uVar12 = uVar16;
    } while ((long)uVar16 <= (long)(extraout_x8_00 >> 1));
    plVar11 = plVar11 + -9;
    if (plVar9 == plVar11) {
      FUN_108c405ec(plVar9,&lStack_100);
    }
    else {
      FUN_108c405ec(plVar9,plVar11);
      FUN_108c405ec(plVar11,&lStack_100);
      uVar12 = (long)plVar9 + (0x48 - (long)plVar6);
      if (0x48 < (long)uVar12) {
        uVar12 = uVar12 / 0x48 - 2 >> 1;
        if ((plVar6 + uVar12 * 9)[6] < plVar9[6]) {
          lStack_a8 = plVar9[1];
          lStack_b0 = *plVar9;
          lStack_a0 = plVar9[2];
          plVar9[1] = 0;
          plVar9[2] = 0;
          *plVar9 = 0;
          lStack_90 = plVar9[4];
          lStack_98 = plVar9[3];
          lStack_88 = plVar9[5];
          plVar9[4] = 0;
          plVar9[5] = 0;
          plVar9[3] = 0;
          lStack_78 = plVar9[7];
          lVar15 = plVar9[6];
          lStack_70 = plVar9[8];
          plVar10 = plVar6 + uVar12 * 9;
          lStack_80 = lVar15;
          do {
            plVar7 = plVar10;
            FUN_108c405ec(plVar9,plVar7);
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            plVar10 = plVar6 + uVar12 * 9;
            plVar9 = plVar7;
          } while ((plVar6 + uVar12 * 9)[6] < lVar15);
          FUN_108c405ec(plVar7,&lStack_b0);
          func_0x000108c6c150();
        }
      }
    }
    FUN_108c4064c(&lStack_100);
    uVar18 = uVar18 - 1;
  } while( true );
code_r0x000108c6b778:
  if (((ulong)plVar7 & 1) == 0) {
LAB_108c6b77c:
    FUN_108c6b558(plVar6,plVar19,uVar12,bVar17);
    bVar17 = false;
  }
  goto LAB_108c6b5a8;
}



/* Entry: 108c6b418; end: 108c6b433;  */

void FUN_108c6b418(long param_1)

{
  FUN_108c420f0();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 108c6b434; end: 108c6b473;  */

long FUN_108c6b434(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_108c6b474();
    lVar2 = uVar1 + 0x48;
  }
  else {
    lVar2 = param_1;
    FUN_108c6b4ac();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x48;
}



/* Entry: 108c6b474; end: 108c6b4ab;  */

void FUN_108c6b474(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_108c420f0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x48;
  return;
}



/* Entry: 108c6b4ac; end: 108c6b557;  */

long FUN_108c6b4ac(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_108c41108(param_1,(param_1[1] - *param_1) / 0x48 + 1);
  FUN_108c40d5c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x48,param_1 + 2);
  FUN_108c420f0(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x48;
  FUN_108c40cdc(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x000108c40f58(auStack_58);
  return lVar2;
}



/* Entry: 108c6b558; end: 108c6bd77;  */

void FUN_108c6b558(long *param_1,long *param_2,long param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  do {
    plVar9 = param_2 + -9;
    plVar8 = param_1;
LAB_108c6b5a8:
    while( true ) {
      param_1 = plVar8;
      uVar10 = (long)param_2 - (long)param_1;
      uVar15 = (long)uVar10 / 0x48;
      cVar4 = SBORROW8(uVar15,5);
      cVar5 = (long)(uVar15 - 5) < 0;
      switch(uVar15) {
      case 0:
      case 1:
        return;
      case 2:
        func_0x000108c6c1c4(param_2[-3]);
        if (cVar5 == cVar4) {
          return;
        }
        FUN_108c6c0d8(param_1,plVar9);
        return;
      case 3:
        func_0x000108c6c174(param_1,param_1 + 9);
        return;
      case 4:
        func_0x000108c6be10(param_1,param_1 + 9,param_1 + 0x12,plVar9);
        return;
      case 5:
        FUN_108c6be70(param_1,param_1 + 9,param_1 + 0x12,param_1 + 0x1b,plVar9);
        return;
      }
      if ((long)uVar10 < 0x6c0) {
        if ((param_4 & 1) == 0) {
          if (param_1 == param_2) {
            return;
          }
          while (plVar8 = param_1, param_1 = plVar8 + 9, param_1 != param_2) {
            if (plVar8[0xf] < plVar8[6]) {
              lStack_a8 = plVar8[10];
              lStack_b0 = *param_1;
              lStack_a0 = plVar8[0xb];
              plVar8[10] = 0;
              plVar8[0xb] = 0;
              *param_1 = 0;
              lStack_90 = plVar8[0xd];
              lStack_98 = plVar8[0xc];
              lStack_88 = plVar8[0xe];
              plVar8[0xc] = 0;
              plVar8[0xd] = 0;
              plVar8[0xe] = 0;
              lStack_78 = plVar8[0x10];
              lStack_80 = plVar8[0xf];
              lStack_70 = plVar8[0x11];
              do {
                plVar9 = plVar8;
                func_0x000108c6c194(plVar9 + 9);
                plVar8 = plVar9 + -9;
              } while (lStack_80 < plVar9[-3]);
              FUN_108c405ec(plVar9,&lStack_b0);
              func_0x000108c6c150();
            }
          }
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        lVar12 = 0;
        plVar8 = param_1;
        goto LAB_108c6b938;
      }
      if (param_3 == 0) {
        if (param_1 == param_2) {
          return;
        }
        uVar13 = uVar15 - 2 >> 1;
        uVar10 = uVar13;
        goto LAB_108c6ba08;
      }
      plVar8 = param_1 + (uVar15 >> 1) * 9;
      cVar4 = SBORROW8(uVar10,0x2401);
      cVar5 = (long)(uVar10 - 0x2401) < 0;
      if (uVar10 < 0x2401) {
        func_0x000108c6c174(plVar8,param_1);
      }
      else {
        func_0x000108c6c174(param_1,plVar8);
        FUN_108c6bd78(param_1 + 9,plVar8 + -9,param_2 + -0x12);
        FUN_108c6bd78(param_1 + 0x12,plVar8 + 9,param_2 + -0x1b);
        FUN_108c6bd78(plVar8 + -9,plVar8,plVar8 + 9);
        FUN_108c6c0d8(param_1,plVar8);
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) || (func_0x000108c6c1c4(param_1[-3]), cVar5 != cVar4)) break;
      lVar17 = param_1[1];
      lVar12 = *param_1;
      lStack_a0 = param_1[2];
      lStack_b0 = lVar12;
      lStack_a8 = lVar17;
      func_0x000108c6c164();
      lStack_88 = param_1[5];
      func_0x000108c6c1b0();
      lStack_70 = param_1[8];
      plVar6 = param_1;
      if (lVar12 < param_2[-3]) {
        do {
          plVar8 = plVar6 + 9;
          plVar7 = plVar6 + 0xf;
          plVar6 = plVar8;
        } while (*plVar7 <= lVar12);
      }
      else {
        do {
          plVar8 = plVar6 + 9;
          if (param_2 <= plVar8) break;
          plVar7 = plVar6 + 0xf;
          plVar6 = plVar8;
        } while (*plVar7 <= lVar12);
      }
      plVar6 = param_2;
      plVar7 = param_2;
      lStack_80 = lVar12;
      lStack_78 = lVar17;
      if (plVar8 < param_2) {
        do {
          plVar7 = plVar6 + -9;
          plVar16 = plVar6 + -3;
          plVar6 = plVar7;
        } while (lVar12 < *plVar16);
      }
      while (plVar8 < plVar7) {
        FUN_108c6c0d8(plVar8,plVar7);
        do {
          plVar6 = plVar8 + 0xf;
          plVar8 = plVar8 + 9;
        } while (*plVar6 <= lVar12);
        do {
          plVar6 = plVar7 + -3;
          plVar7 = plVar7 + -9;
        } while (lVar12 < *plVar6);
      }
      plVar6 = plVar8 + -9;
      if (param_1 != plVar6) {
        FUN_108c405ec(param_1,plVar6);
      }
      FUN_108c405ec(plVar6,&lStack_b0);
      func_0x000108c6c150();
      param_4 = 0;
    }
    lVar18 = param_1[1];
    lVar17 = *param_1;
    lStack_a0 = param_1[2];
    lStack_b0 = lVar17;
    lStack_a8 = lVar18;
    func_0x000108c6c164(0);
    lStack_88 = param_1[5];
    func_0x000108c6c1b0();
    lStack_70 = param_1[8];
    lVar12 = extraout_x8;
    do {
      lVar3 = lVar12 + 0x78;
      lVar12 = lVar12 + 0x48;
    } while (*(long *)((long)param_1 + lVar3) < lVar17);
    plVar6 = (long *)((long)param_1 + lVar12);
    plVar7 = param_2;
    plVar8 = plVar6;
    lStack_80 = lVar17;
    lStack_78 = lVar18;
    if (lVar12 == 0x48) {
      do {
        plVar16 = plVar7;
        if (plVar7 <= plVar6) break;
        plVar16 = plVar7 + -9;
        plVar1 = plVar7 + -3;
        plVar7 = plVar16;
      } while (lVar17 <= *plVar1);
    }
    else {
      do {
        plVar16 = plVar7 + -9;
        plVar1 = plVar7 + -3;
        plVar7 = plVar16;
      } while (lVar17 <= *plVar1);
    }
    while (plVar8 < plVar16) {
      FUN_108c6c0d8(plVar8,plVar16);
      do {
        plVar1 = plVar8 + 0xf;
        plVar8 = plVar8 + 9;
      } while (*plVar1 < lVar17);
      do {
        plVar1 = plVar16 + -3;
        plVar16 = plVar16 + -9;
      } while (lVar17 <= *plVar1);
    }
    plVar16 = plVar8 + -9;
    if (param_1 != plVar16) {
      FUN_108c405ec(param_1,plVar16);
    }
    FUN_108c405ec(plVar16,&lStack_b0);
    func_0x000108c6c150();
    if (plVar6 < plVar7) goto LAB_108c6b77c;
    plVar6 = param_1;
    FUN_108c6bf0c(param_1,plVar16);
    plVar7 = plVar8;
    FUN_108c6bf0c(plVar8,param_2);
    if ((int)plVar7 == 0) goto code_r0x000108c6b778;
    param_2 = plVar16;
    if (((ulong)plVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_108c6b938:
  plVar9 = plVar8 + 9;
  if (plVar9 == param_2) {
    return;
  }
  if (plVar8[0xf] < plVar8[6]) {
    lStack_a8 = plVar8[10];
    lStack_b0 = *plVar9;
    lStack_a0 = plVar8[0xb];
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    *plVar9 = 0;
    lStack_90 = plVar8[0xd];
    lStack_98 = plVar8[0xc];
    lStack_88 = plVar8[0xe];
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    lStack_78 = plVar8[0x10];
    lStack_80 = plVar8[0xf];
    lStack_70 = plVar8[0x11];
    lVar17 = lVar12;
    do {
      lVar18 = lVar17;
      func_0x000108c6c194((long)param_1 + lVar18 + 0x48);
      plVar8 = param_1;
      if (lVar18 == 0) goto LAB_108c6b9d0;
      lVar17 = lVar18 + -0x48;
    } while (lStack_80 < *(long *)((long)param_1 + lVar18 + -0x18));
    plVar8 = (long *)((long)param_1 + lVar18);
LAB_108c6b9d0:
    FUN_108c405ec(plVar8,&lStack_b0);
    func_0x000108c6c150();
  }
  lVar12 = lVar12 + 0x48;
  plVar8 = plVar9;
  goto LAB_108c6b938;
LAB_108c6ba08:
  do {
    if ((long)uVar10 <= (long)uVar13) {
      uVar14 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      plVar8 = param_1 + uVar14 * 9;
      uVar2 = uVar10 * 2 + 2;
      uVar11 = uVar14;
      if ((long)uVar2 < (long)uVar15) {
        plVar9 = plVar8 + 6;
        plVar6 = plVar8 + 0xf;
        lVar12 = 0x48;
        if (*plVar6 <= *plVar9) {
          lVar12 = 0;
        }
        plVar8 = (long *)((long)plVar8 + lVar12);
        uVar11 = uVar2;
        if (*plVar6 <= *plVar9) {
          uVar11 = uVar14;
        }
      }
      plVar9 = param_1 + uVar10 * 9;
      if (plVar9[6] <= plVar8[6]) {
        lStack_a8 = plVar9[1];
        lStack_b0 = *plVar9;
        lStack_a0 = plVar9[2];
        plVar9[1] = 0;
        plVar9[2] = 0;
        *plVar9 = 0;
        lStack_90 = plVar9[4];
        lStack_98 = plVar9[3];
        lStack_88 = plVar9[5];
        plVar9[4] = 0;
        plVar9[5] = 0;
        plVar9[3] = 0;
        lStack_78 = plVar9[7];
        lVar12 = plVar9[6];
        lStack_70 = plVar9[8];
        lStack_80 = lVar12;
        do {
          plVar6 = plVar8;
          FUN_108c405ec(plVar9,plVar6);
          if ((long)uVar13 < (long)uVar11) break;
          uVar14 = uVar11 << 1 | 1;
          plVar8 = param_1 + uVar14 * 9;
          uVar2 = uVar11 * 2 + 2;
          uVar11 = uVar14;
          if ((long)uVar2 < (long)uVar15) {
            plVar9 = plVar8 + 6;
            plVar7 = plVar8 + 0xf;
            lVar17 = 0x48;
            if (*plVar7 <= *plVar9) {
              lVar17 = 0;
            }
            plVar8 = (long *)((long)plVar8 + lVar17);
            uVar11 = uVar2;
            if (*plVar7 <= *plVar9) {
              uVar11 = uVar14;
            }
          }
          plVar9 = plVar6;
        } while (lVar12 <= plVar8[6]);
        FUN_108c405ec(plVar6,&lStack_b0);
        func_0x000108c6c150();
      }
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (long)uVar10);
  do {
    if ((long)uVar15 < 2) {
      return;
    }
    lVar17 = param_1[1];
    lVar12 = *param_1;
    lStack_f0 = param_1[2];
    lStack_100 = lVar12;
    lStack_f8 = lVar17;
    func_0x000108c6c164(uVar15 - 2);
    lStack_d8 = param_1[5];
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    lStack_c8 = param_1[7];
    lStack_d0 = param_1[6];
    lStack_c0 = param_1[8];
    plVar8 = param_1;
    uVar10 = 0;
    lStack_e8 = lVar12;
    lStack_e0 = lVar17;
    do {
      uVar2 = uVar10 << 1 | 1;
      uVar13 = uVar10 * 2 + 2;
      plVar9 = plVar8 + uVar10 * 9 + 9;
      uVar14 = uVar2;
      if (((long)uVar13 < (long)uVar15) &&
         (plVar9 = plVar8 + uVar10 * 9 + 0x12, uVar14 = uVar13,
         plVar8[uVar10 * 9 + 0x18] <= plVar8[uVar10 * 9 + 0xf])) {
        plVar9 = plVar8 + uVar10 * 9 + 9;
        uVar14 = uVar2;
      }
      plVar8 = plVar9;
      func_0x000108c6c194();
      uVar10 = uVar14;
    } while ((long)uVar14 <= (long)(extraout_x8_00 >> 1));
    param_2 = param_2 + -9;
    if (plVar8 == param_2) {
      FUN_108c405ec(plVar8,&lStack_100);
    }
    else {
      FUN_108c405ec(plVar8,param_2);
      FUN_108c405ec(param_2,&lStack_100);
      uVar10 = (long)plVar8 + (0x48 - (long)param_1);
      if (0x48 < (long)uVar10) {
        uVar10 = uVar10 / 0x48 - 2 >> 1;
        if ((param_1 + uVar10 * 9)[6] < plVar8[6]) {
          lStack_a8 = plVar8[1];
          lStack_b0 = *plVar8;
          lStack_a0 = plVar8[2];
          plVar8[1] = 0;
          plVar8[2] = 0;
          *plVar8 = 0;
          lStack_90 = plVar8[4];
          lStack_98 = plVar8[3];
          lStack_88 = plVar8[5];
          plVar8[4] = 0;
          plVar8[5] = 0;
          plVar8[3] = 0;
          lStack_78 = plVar8[7];
          lVar12 = plVar8[6];
          lStack_70 = plVar8[8];
          plVar9 = param_1 + uVar10 * 9;
          lStack_80 = lVar12;
          do {
            plVar6 = plVar9;
            FUN_108c405ec(plVar8,plVar6);
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            plVar9 = param_1 + uVar10 * 9;
            plVar8 = plVar6;
          } while ((param_1 + uVar10 * 9)[6] < lVar12);
          FUN_108c405ec(plVar6,&lStack_b0);
          func_0x000108c6c150();
        }
      }
    }
    FUN_108c4064c(&lStack_100);
    uVar15 = uVar15 - 1;
  } while( true );
code_r0x000108c6b778:
  if (((ulong)plVar6 & 1) == 0) {
LAB_108c6b77c:
    FUN_108c6b558(param_1,plVar16,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_108c6b5a8;
}



/* Entry: 108c6bd78; end: 108c6be6f;  */

void FUN_108c6bd78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_2[6];
  lVar4 = param_3[6];
  if (lVar3 < (long)param_1[6]) {
    cVar1 = SBORROW8(lVar4,lVar3);
    cVar2 = lVar4 - lVar3 < 0;
    if (lVar3 <= lVar4) {
      FUN_108c6c0d8(param_1,param_2);
      func_0x000108c6c1e4(param_3[6]);
      param_1 = param_2;
      if (cVar2 == cVar1) {
        return;
      }
    }
  }
  else if ((lVar3 <= lVar4) ||
          (FUN_108c6c0d8(param_2,param_3), param_3 = param_2, (long)param_1[6] <= (long)param_2[6]))
  {
    return;
  }
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_50 = param_1[4];
  uStack_58 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_48 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  FUN_108c405ec();
  FUN_108c405ec(param_3,&uStack_70);
  FUN_108c4064c(&uStack_70);
  return;
}



/* Entry: 108c6be70; end: 108c6bf0b;  */

void FUN_108c6be70(void)

{
  char cVar1;
  char cVar2;
  long in_x4;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000108c6c1d0();
  func_0x000108c6be10();
  if (*(long *)(in_x4 + 0x30) < *(long *)(unaff_x22 + 0x30)) {
    FUN_108c6c0d8();
    lVar3 = *(long *)(unaff_x22 + 0x30);
    lVar4 = *(long *)(unaff_x21 + 0x30);
    cVar1 = SBORROW8(lVar3,lVar4);
    cVar2 = lVar3 - lVar4 < 0;
    if (lVar3 < lVar4) {
      func_0x000108c6c1a4();
      func_0x000108c6c1e4(*(undefined8 *)(unaff_x21 + 0x30));
      if (cVar2 != cVar1) {
        func_0x000108c6c17c();
        func_0x000108c6c1c4(*(undefined8 *)(unaff_x19 + 0x30));
        if (cVar2 != cVar1) {
          uStack_68 = unaff_x20[1];
          uStack_70 = *unaff_x20;
          uStack_60 = unaff_x20[2];
          *unaff_x20 = 0;
          unaff_x20[1] = 0;
          uStack_50 = unaff_x20[4];
          uStack_58 = unaff_x20[3];
          unaff_x20[2] = 0;
          unaff_x20[3] = 0;
          uStack_48 = unaff_x20[5];
          unaff_x20[4] = 0;
          unaff_x20[5] = 0;
          FUN_108c405ec();
          FUN_108c405ec();
          FUN_108c4064c(&uStack_70);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 108c6bf0c; end: 108c6c0d7;  */

void FUN_108c6bf0c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar9 = ((long)param_2 - param_1) / 0x48;
  cVar3 = SBORROW8(lVar9,5);
  cVar4 = lVar9 + -5 < 0;
  switch(lVar9) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x000108c6c1e4(param_2[-3],1);
    if (cVar4 != cVar3) {
      FUN_108c6c0d8(param_1,param_2 + -9);
    }
    break;
  case 3:
    FUN_108c6bd78(param_1,param_1 + 0x48,param_2 + -9);
    break;
  case 4:
    func_0x000108c6be10(param_1,param_1 + 0x48,param_1 + 0x90,param_2 + -9);
    break;
  case 5:
    FUN_108c6be70(param_1,param_1 + 0x48,param_1 + 0x90,param_1 + 0xd8,param_2 + -9);
    break;
  default:
    FUN_108c6bd78(param_1,param_1 + 0x48,(undefined8 *)(param_1 + 0x90));
    lVar9 = 0;
    iVar10 = 0;
    puVar2 = (undefined8 *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(param_1 + 0x90);
    while (puVar6 = puVar2, puVar6 != param_2) {
      if ((long)puVar6[6] < (long)puVar7[6]) {
        uStack_98 = puVar6[1];
        uStack_a0 = *puVar6;
        uStack_90 = puVar6[2];
        *puVar6 = 0;
        puVar6[1] = 0;
        uStack_80 = puVar6[4];
        uStack_88 = puVar6[3];
        puVar6[2] = 0;
        puVar6[3] = 0;
        uStack_78 = puVar6[5];
        puVar6[4] = 0;
        puVar6[5] = 0;
        uStack_60 = puVar6[8];
        uStack_68 = puVar6[7];
        lStack_70 = puVar6[6];
        lVar8 = lVar9;
        do {
          lVar1 = param_1 + lVar8;
          FUN_108c405ec(lVar1 + 0xd8,lVar1 + 0x90);
          lVar5 = param_1;
          if (lVar8 == -0x90) goto LAB_108c6c068;
          lVar8 = lVar8 + -0x48;
        } while (lStack_70 < *(long *)(lVar1 + 0x78));
        lVar5 = param_1 + lVar8 + 0xd8;
LAB_108c6c068:
        FUN_108c405ec(lVar5,&uStack_a0);
        iVar10 = iVar10 + 1;
        FUN_108c4064c(&uStack_a0);
        if (iVar10 == 8) {
          return;
        }
      }
      lVar9 = lVar9 + 0x48;
      puVar7 = puVar6;
      puVar2 = puVar6 + 9;
    }
  }
  return;
}



/* Entry: 108c6c0d8; end: 108c6c14f;  */

void FUN_108c6c0d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_50 = param_1[4];
  uStack_58 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_48 = param_1[5];
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_30 = param_1[8];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  FUN_108c405ec();
  FUN_108c405ec(param_2,&uStack_70);
  FUN_108c4064c(&uStack_70);
  return;
}



/* Entry: 108c6c150; end: 108c6c1ef;  */

void FUN_108c6c150(void)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000088);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000070);
  return;
}



/* Entry: 108c6c1f0; end: 108c6c28b;  */

/* WARNING: Possible PIC construction at 0x000108c6c224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4c0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4e4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c2c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c2e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c228) */
/* WARNING: Removing unreachable block (ram,0x000108c6c24c) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c1f0(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  undefined8 extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x8_17;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 uVar13;
  undefined1 auStack_8e0 [96];
  undefined8 *puStack_880;
  undefined1 *puStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 ******ppppppuStack_860;
  code *pcStack_858;
  undefined1 auStack_830 [72];
  undefined8 uStack_7e8;
  undefined8 ******ppppppuStack_7b0;
  code *pcStack_7a8;
  undefined8 *puStack_760;
  undefined8 *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 ******ppppppuStack_740;
  code *pcStack_738;
  undefined1 auStack_730 [96];
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 ******ppppppuStack_6b0;
  code *pcStack_6a8;
  undefined1 auStack_6a0 [96];
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 ******ppppppuStack_620;
  code *pcStack_618;
  undefined1 auStack_610 [96];
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 ******ppppppuStack_590;
  code *pcStack_588;
  undefined1 auStack_580 [96];
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 ******ppppppuStack_500;
  code *pcStack_4f8;
  undefined1 auStack_4f0 [96];
  undefined8 *puStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 *puStack_478;
  undefined8 ******ppppppuStack_470;
  code *pcStack_468;
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 *puStack_408;
  undefined8 ******ppppppuStack_400;
  code *pcStack_3f8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  undefined1 ******ppppppuStack_390;
  code *pcStack_388;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 *****pppppuStack_320;
  code *pcStack_318;
  undefined1 auStack_310 [96];
  undefined8 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  undefined1 auStack_260 [72];
  undefined8 uStack_218;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_168;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined1 auStack_120 [96];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar6 = param_3;
  func_0x000108c6cb64();
  puVar2 = (undefined8 *)&UNK_110abbce0;
  (*extraout_x8)();
  if (param_1 != 0) {
FUN_108c6cb2c:
    uVar13 = *param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_2[1];
    *(undefined8 *)(puVar1 + 0x20) = uVar13;
    *(undefined8 *)(puVar1 + 0x30) = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar13 = *param_3;
    *(undefined8 *)(puVar1 + 0x40) = param_3[1];
    *(undefined8 *)(puVar1 + 0x38) = uVar13;
    *(undefined8 *)(puVar1 + 0x48) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  func_0x000108c6cb88();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    puVar1 = auStack_120;
    pcStack_98 = FUN_108c6c28c;
    puVar5 = puVar6;
    puStack_c0 = param_2;
    puStack_b8 = param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    (*extraout_x8_00)();
    param_3 = puVar6;
    param_2 = puVar2;
    if (param_1 != 0) goto FUN_108c6cb2c;
    func_0x000108c6cb88();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      pcStack_128 = FUN_108c6c320;
      ppuStack_130 = &puStack_a0;
      func_0x000108c6cba0();
      uStack_168 = extraout_x8_01;
      func_0x000108c6cc54();
      (*extraout_x8_02)();
      if (param_1 != 0) {
        func_0x000108c6cc04();
        func_0x000108c6ccd8();
        func_0x000108c6cd38();
        func_0x000108c6cce8();
        (*extraout_x9)();
        func_0x000108c6cca4();
        do {
          func_0x000108c6ccc8();
          func_0x000108c6cd00();
        } while (!(bool)in_ZR);
      }
      func_0x000108c6cbb4(uStack_168);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        pcStack_1d8 = FUN_108c6c3d4;
        param_3 = puVar5;
        uVar13 = param_5;
        pppuStack_1e0 = &ppuStack_130;
        func_0x000108c6cba0();
        uStack_218 = extraout_x8_03;
        func_0x000108c6cc54();
        puVar2 = (undefined8 *)&UNK_110abbdd0;
        (*extraout_x8_04)();
        if (param_1 != 0) {
          func_0x000108c6cc04();
          func_0x000108c6ccd8();
          func_0x000108c6cd38();
          puVar2 = (undefined8 *)&UNK_110abbdd0;
          func_0x000108c6cce8();
          (*extraout_x9_00)();
          func_0x000108c6cca4();
          param_5 = 0x30;
          do {
            func_0x000108c6ccc8();
            func_0x000108c6cd00();
          } while (!(bool)in_ZR);
        }
        func_0x000108c6cbb4(uStack_218);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_310;
          uStack_2a0 = 0x30;
          pcStack_288 = FUN_108c6c488;
          puVar6 = param_3;
          uVar10 = param_4;
          puStack_2b0 = puVar5;
          puStack_2a8 = auStack_260;
          uStack_298 = param_5;
          ppppuStack_290 = &pppuStack_1e0;
          func_0x000108c6cb64();
          puVar3 = &UNK_110abbe20;
          (*extraout_x8_05)();
          param_2 = puVar2;
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            uStack_330 = 0x30;
            pcStack_318 = FUN_108c6c524;
            puVar5 = puVar6;
            puStack_340 = puVar2;
            puStack_338 = param_3;
            uStack_328 = param_4;
            pppppuStack_320 = &ppppuStack_290;
            func_0x000108c6cb64();
            puVar4 = &UNK_110abbe70;
            (*extraout_x8_06)();
            if (param_1 != 0) {
              func_0x000108c6cc64();
              func_0x000108c6cc94();
              func_0x000108c6ccf4();
              puVar4 = &UNK_110abbe70;
              func_0x000108c6cbc8();
              func_0x000108c6cca4();
              func_0x000108c6cd0c();
            }
            func_0x000108c6cb88();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd0c();
              func_0x000108c6ccc0();
              uStack_3a0 = 0x30;
              pcStack_388 = FUN_108c6c59c;
              puVar7 = puVar5;
              puStack_3b0 = puVar2;
              puStack_3a8 = puVar3;
              puStack_398 = puVar6;
              ppppppuStack_390 = &pppppuStack_320;
              func_0x000108c6cb64();
              puVar3 = &UNK_110abbec0;
              (*extraout_x8_07)();
              if (param_1 != 0) {
                func_0x000108c6cc64();
                func_0x000108c6cc94();
                func_0x000108c6ccf4();
                puVar3 = &UNK_110abbec0;
                func_0x000108c6cbc8();
                func_0x000108c6cca4();
                func_0x000108c6cd0c();
              }
              func_0x000108c6cb88();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd0c();
                func_0x000108c6ccc0();
                uStack_410 = 0x30;
                pcStack_3f8 = FUN_108c6c614;
                param_3 = puVar7;
                puStack_420 = puVar2;
                puStack_418 = puVar4;
                puStack_408 = puVar5;
                ppppppuStack_400 = &ppppppuStack_390;
                func_0x000108c6cb64();
                param_2 = (undefined8 *)&UNK_110abbf10;
                (*extraout_x8_08)();
                if (param_1 != 0) {
                  func_0x000108c6cc64();
                  func_0x000108c6cc94();
                  func_0x000108c6ccf4();
                  param_2 = (undefined8 *)&UNK_110abbf10;
                  func_0x000108c6cbc8();
                  func_0x000108c6cca4();
                  func_0x000108c6cd0c();
                }
                func_0x000108c6cb88();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd0c();
                  func_0x000108c6ccc0();
                  puVar1 = auStack_4f0;
                  uStack_480 = 0x30;
                  pcStack_468 = FUN_108c6c68c;
                  puVar6 = param_3;
                  uVar11 = uVar10;
                  puStack_490 = puVar2;
                  puStack_488 = puVar3;
                  puStack_478 = puVar7;
                  ppppppuStack_470 = &ppppppuStack_400;
                  func_0x000108c6cb64();
                  puVar2 = (undefined8 *)&UNK_110abbf60;
                  (*extraout_x8_09)();
                  if (param_1 == 0) {
                    func_0x000108c6cb88();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    func_0x000108c6cd2c();
                    do {
                      func_0x000108c6ccd0();
                      func_0x000108c6cd14();
                    } while (!(bool)in_ZR);
                    func_0x000108c6ccc0();
                    puVar1 = auStack_580;
                    uStack_510 = 0x30;
                    pcStack_4f8 = FUN_108c6c720;
                    puVar7 = puVar6;
                    uVar12 = uVar11;
                    puStack_520 = param_2;
                    puStack_518 = param_3;
                    uStack_508 = uVar10;
                    ppppppuStack_500 = &ppppppuStack_470;
                    func_0x000108c6cb64();
                    puVar5 = (undefined8 *)&UNK_110abbfb0;
                    (*extraout_x8_10)();
                    param_3 = puVar6;
                    param_2 = puVar2;
                    if (param_1 == 0) {
                      func_0x000108c6cb88();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x000108c6cbf8();
                      func_0x000108c6cd2c();
                      do {
                        func_0x000108c6ccd0();
                        func_0x000108c6cd14();
                      } while (!(bool)in_ZR);
                      func_0x000108c6ccc0();
                      puVar1 = auStack_610;
                      uStack_5a0 = 0x30;
                      pcStack_588 = FUN_108c6c7b4;
                      puVar8 = puVar7;
                      uVar10 = uVar12;
                      puStack_5b0 = puVar2;
                      puStack_5a8 = puVar6;
                      uStack_598 = uVar11;
                      ppppppuStack_590 = &ppppppuStack_500;
                      func_0x000108c6cb64();
                      puVar2 = (undefined8 *)&UNK_110abc000;
                      (*extraout_x8_11)();
                      param_3 = puVar7;
                      param_2 = puVar5;
                      if (param_1 == 0) {
                        func_0x000108c6cb88();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x000108c6cbf8();
                        func_0x000108c6cd2c();
                        do {
                          func_0x000108c6ccd0();
                          func_0x000108c6cd14();
                        } while (!(bool)in_ZR);
                        func_0x000108c6ccc0();
                        puVar1 = auStack_6a0;
                        uStack_630 = 0x30;
                        pcStack_618 = FUN_108c6c848;
                        puVar9 = puVar8;
                        uVar11 = uVar10;
                        puStack_640 = puVar5;
                        puStack_638 = puVar7;
                        uStack_628 = uVar12;
                        ppppppuStack_620 = &ppppppuStack_590;
                        func_0x000108c6cb64();
                        puVar6 = (undefined8 *)&UNK_110abc050;
                        (*extraout_x8_12)();
                        param_3 = puVar8;
                        param_2 = puVar2;
                        if (param_1 == 0) {
                          func_0x000108c6cb88();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x000108c6cbf8();
                          func_0x000108c6cd2c();
                          do {
                            func_0x000108c6ccd0();
                            func_0x000108c6cd14();
                          } while (!(bool)in_ZR);
                          func_0x000108c6ccc0();
                          puVar1 = auStack_730;
                          uStack_6c0 = 0x30;
                          pcStack_6a8 = FUN_108c6c8dc;
                          puVar5 = puVar9;
                          puStack_6d0 = puVar2;
                          puStack_6c8 = puVar8;
                          uStack_6b8 = uVar10;
                          ppppppuStack_6b0 = &ppppppuStack_620;
                          func_0x000108c6cb64();
                          (*extraout_x8_13)();
                          param_3 = puVar9;
                          param_2 = puVar6;
                          if (param_1 == 0) {
                            func_0x000108c6cb88();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x000108c6cbf8();
                            func_0x000108c6cd2c();
                            do {
                              func_0x000108c6ccd0();
                              func_0x000108c6cd14();
                            } while (!(bool)in_ZR);
                            func_0x000108c6ccc0();
                            uStack_750 = 0x30;
                            pcStack_738 = FUN_108c6c970;
                            puStack_760 = puVar6;
                            puStack_758 = puVar9;
                            uStack_748 = uVar11;
                            ppppppuStack_740 = &ppppppuStack_6b0;
                            func_0x000108c6cb64();
                            (*extraout_x8_14)();
                            if (param_1 != 0) {
                              func_0x000108c6cc64();
                              func_0x000108c6cc94();
                              func_0x000108c6ccf4();
                              func_0x000108c6cbc8();
                              func_0x000108c6cca4();
                              func_0x000108c6cd0c();
                            }
                            func_0x000108c6cb88();
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x000108c6cbf8();
                            func_0x000108c6cd0c();
                            func_0x000108c6ccc0();
                            pcStack_7a8 = FUN_108c6c9e8;
                            param_3 = puVar5;
                            ppppppuStack_7b0 = &ppppppuStack_740;
                            func_0x000108c6cba0();
                            uStack_7e8 = extraout_x8_15;
                            func_0x000108c6cc54();
                            param_2 = (undefined8 *)&UNK_110abc140;
                            (*extraout_x8_16)();
                            if (param_1 != 0) {
                              func_0x000108c6cc04();
                              func_0x000108c6ccd8();
                              func_0x000108c6ccf4();
                              param_2 = (undefined8 *)&UNK_110abc140;
                              func_0x000108c6cbc8();
                              func_0x000108c6cca4();
                              uVar13 = 0x30;
                              do {
                                func_0x000108c6ccc8();
                                func_0x000108c6cd00();
                              } while (!(bool)in_ZR);
                            }
                            func_0x000108c6cbb4(uStack_7e8);
                            if ((bool)in_ZR) {
                              return;
                            }
                            ___stack_chk_fail();
                            func_0x000108c6cbf8();
                            do {
                              func_0x000108c6ccd0();
                              func_0x000108c6cd14();
                            } while (!(bool)in_ZR);
                            func_0x000108c6ccc0();
                            puVar1 = auStack_8e0;
                            uStack_870 = 0x30;
                            pcStack_858 = FUN_108c6ca98;
                            puStack_880 = puVar5;
                            puStack_878 = auStack_830;
                            uStack_868 = uVar13;
                            ppppppuStack_860 = &ppppppuStack_7b0;
                            func_0x000108c6cb64();
                            (*extraout_x8_17)();
                            if (param_1 == 0) {
                              func_0x000108c6cb88();
                              if ((bool)in_ZR) {
                                return;
                              }
                              ___stack_chk_fail();
                              func_0x000108c6cbf8();
                              func_0x000108c6cd2c();
                              do {
                                func_0x000108c6ccd0();
                                func_0x000108c6cd14();
                              } while (!(bool)in_ZR);
                              func_0x000108c6ccc0();
                              puVar1 = auStack_8e0;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto FUN_108c6cb2c;
                }
              }
            }
            return;
          }
          goto FUN_108c6cb2c;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 108c6c28c; end: 108c6c31f;  */

/* WARNING: Possible PIC construction at 0x000108c6c2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4c0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4e4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c2c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c2e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c28c(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  undefined8 extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 uVar12;
  undefined1 auStack_850 [96];
  undefined8 *puStack_7f0;
  undefined1 *puStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 *****pppppuStack_7d0;
  code *pcStack_7c8;
  undefined1 auStack_7a0 [72];
  undefined8 uStack_758;
  undefined8 *****pppppuStack_720;
  code *pcStack_718;
  undefined8 *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 *****pppppuStack_6b0;
  code *pcStack_6a8;
  undefined1 auStack_6a0 [96];
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *****pppppuStack_620;
  code *pcStack_618;
  undefined1 auStack_610 [96];
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 *****pppppuStack_590;
  code *pcStack_588;
  undefined1 auStack_580 [96];
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 *****pppppuStack_500;
  code *pcStack_4f8;
  undefined1 auStack_4f0 [96];
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 *****pppppuStack_470;
  code *pcStack_468;
  undefined1 auStack_460 [96];
  undefined8 *puStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *****pppppuStack_3e0;
  code *pcStack_3d8;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 uStack_380;
  undefined8 *puStack_378;
  undefined8 *****pppppuStack_370;
  code *pcStack_368;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined1 *****pppppuStack_300;
  code *pcStack_2f8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 ****ppppuStack_290;
  code *pcStack_288;
  undefined1 auStack_280 [96];
  undefined8 *puStack_220;
  undefined1 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 ***pppuStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1d0 [72];
  undefined8 uStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar5 = param_3;
  func_0x000108c6cb64();
  (*extraout_x8)();
  if (param_1 != 0) {
FUN_108c6cb2c:
    uVar12 = *param_2;
    *(undefined8 *)(puVar1 + 0x28) = param_2[1];
    *(undefined8 *)(puVar1 + 0x20) = uVar12;
    *(undefined8 *)(puVar1 + 0x30) = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar12 = *param_3;
    *(undefined8 *)(puVar1 + 0x40) = param_3[1];
    *(undefined8 *)(puVar1 + 0x38) = uVar12;
    *(undefined8 *)(puVar1 + 0x48) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  func_0x000108c6cb88();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108c6cbf8();
  func_0x000108c6cd2c();
  do {
    func_0x000108c6ccd0();
    func_0x000108c6cd14();
  } while (!(bool)in_ZR);
  func_0x000108c6ccc0();
  pcStack_98 = FUN_108c6c320;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000108c6cba0();
  uStack_d8 = extraout_x8_00;
  func_0x000108c6cc54();
  (*extraout_x8_01)();
  if (param_1 != 0) {
    func_0x000108c6cc04();
    func_0x000108c6ccd8();
    func_0x000108c6cd38();
    func_0x000108c6cce8();
    (*extraout_x9)();
    func_0x000108c6cca4();
    do {
      func_0x000108c6ccc8();
      func_0x000108c6cd00();
    } while (!(bool)in_ZR);
  }
  func_0x000108c6cbb4(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    pcStack_148 = FUN_108c6c3d4;
    param_3 = puVar5;
    uVar12 = param_5;
    ppuStack_150 = &puStack_a0;
    func_0x000108c6cba0();
    uStack_188 = extraout_x8_02;
    func_0x000108c6cc54();
    puVar2 = (undefined8 *)&UNK_110abbdd0;
    (*extraout_x8_03)();
    if (param_1 != 0) {
      func_0x000108c6cc04();
      func_0x000108c6ccd8();
      func_0x000108c6cd38();
      puVar2 = (undefined8 *)&UNK_110abbdd0;
      func_0x000108c6cce8();
      (*extraout_x9_00)();
      func_0x000108c6cca4();
      param_5 = 0x30;
      do {
        func_0x000108c6ccc8();
        func_0x000108c6cd00();
      } while (!(bool)in_ZR);
    }
    func_0x000108c6cbb4(uStack_188);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_280;
      uStack_210 = 0x30;
      pcStack_1f8 = FUN_108c6c488;
      puVar6 = param_3;
      uVar9 = param_4;
      puStack_220 = puVar5;
      puStack_218 = auStack_1d0;
      uStack_208 = param_5;
      pppuStack_200 = &ppuStack_150;
      func_0x000108c6cb64();
      puVar3 = &UNK_110abbe20;
      (*extraout_x8_04)();
      param_2 = puVar2;
      if (param_1 == 0) {
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd2c();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        uStack_2a0 = 0x30;
        pcStack_288 = FUN_108c6c524;
        puVar5 = puVar6;
        puStack_2b0 = puVar2;
        puStack_2a8 = param_3;
        uStack_298 = param_4;
        ppppuStack_290 = &pppuStack_200;
        func_0x000108c6cb64();
        puVar4 = &UNK_110abbe70;
        (*extraout_x8_05)();
        if (param_1 != 0) {
          func_0x000108c6cc64();
          func_0x000108c6cc94();
          func_0x000108c6ccf4();
          puVar4 = &UNK_110abbe70;
          func_0x000108c6cbc8();
          func_0x000108c6cca4();
          func_0x000108c6cd0c();
        }
        func_0x000108c6cb88();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd0c();
          func_0x000108c6ccc0();
          uStack_310 = 0x30;
          pcStack_2f8 = FUN_108c6c59c;
          puVar7 = puVar5;
          puStack_320 = puVar2;
          puStack_318 = puVar3;
          puStack_308 = puVar6;
          pppppuStack_300 = &ppppuStack_290;
          func_0x000108c6cb64();
          puVar3 = &UNK_110abbec0;
          (*extraout_x8_06)();
          if (param_1 != 0) {
            func_0x000108c6cc64();
            func_0x000108c6cc94();
            func_0x000108c6ccf4();
            puVar3 = &UNK_110abbec0;
            func_0x000108c6cbc8();
            func_0x000108c6cca4();
            func_0x000108c6cd0c();
          }
          func_0x000108c6cb88();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd0c();
            func_0x000108c6ccc0();
            uStack_380 = 0x30;
            pcStack_368 = FUN_108c6c614;
            param_3 = puVar7;
            puStack_390 = puVar2;
            puStack_388 = puVar4;
            puStack_378 = puVar5;
            pppppuStack_370 = &pppppuStack_300;
            func_0x000108c6cb64();
            param_2 = (undefined8 *)&UNK_110abbf10;
            (*extraout_x8_07)();
            if (param_1 != 0) {
              func_0x000108c6cc64();
              func_0x000108c6cc94();
              func_0x000108c6ccf4();
              param_2 = (undefined8 *)&UNK_110abbf10;
              func_0x000108c6cbc8();
              func_0x000108c6cca4();
              func_0x000108c6cd0c();
            }
            func_0x000108c6cb88();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd0c();
              func_0x000108c6ccc0();
              puVar1 = auStack_460;
              uStack_3f0 = 0x30;
              pcStack_3d8 = FUN_108c6c68c;
              puVar6 = param_3;
              uVar10 = uVar9;
              puStack_400 = puVar2;
              puStack_3f8 = puVar3;
              puStack_3e8 = puVar7;
              pppppuStack_3e0 = &pppppuStack_370;
              func_0x000108c6cb64();
              puVar5 = (undefined8 *)&UNK_110abbf60;
              (*extraout_x8_08)();
              if (param_1 == 0) {
                func_0x000108c6cb88();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd2c();
                do {
                  func_0x000108c6ccd0();
                  func_0x000108c6cd14();
                } while (!(bool)in_ZR);
                func_0x000108c6ccc0();
                puVar1 = auStack_4f0;
                uStack_480 = 0x30;
                pcStack_468 = FUN_108c6c720;
                puVar7 = puVar6;
                uVar11 = uVar10;
                puStack_490 = param_2;
                puStack_488 = param_3;
                uStack_478 = uVar9;
                pppppuStack_470 = &pppppuStack_3e0;
                func_0x000108c6cb64();
                puVar2 = (undefined8 *)&UNK_110abbfb0;
                (*extraout_x8_09)();
                param_3 = puVar6;
                param_2 = puVar5;
                if (param_1 == 0) {
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd2c();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  puVar1 = auStack_580;
                  uStack_510 = 0x30;
                  pcStack_4f8 = FUN_108c6c7b4;
                  puVar8 = puVar7;
                  uVar9 = uVar11;
                  puStack_520 = puVar5;
                  puStack_518 = puVar6;
                  uStack_508 = uVar10;
                  pppppuStack_500 = &pppppuStack_470;
                  func_0x000108c6cb64();
                  puVar5 = (undefined8 *)&UNK_110abc000;
                  (*extraout_x8_10)();
                  param_3 = puVar7;
                  param_2 = puVar2;
                  if (param_1 == 0) {
                    func_0x000108c6cb88();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    func_0x000108c6cd2c();
                    do {
                      func_0x000108c6ccd0();
                      func_0x000108c6cd14();
                    } while (!(bool)in_ZR);
                    func_0x000108c6ccc0();
                    puVar1 = auStack_610;
                    uStack_5a0 = 0x30;
                    pcStack_588 = FUN_108c6c848;
                    puVar6 = puVar8;
                    uVar10 = uVar9;
                    puStack_5b0 = puVar2;
                    puStack_5a8 = puVar7;
                    uStack_598 = uVar11;
                    pppppuStack_590 = &pppppuStack_500;
                    func_0x000108c6cb64();
                    puVar2 = (undefined8 *)&UNK_110abc050;
                    (*extraout_x8_11)();
                    param_3 = puVar8;
                    param_2 = puVar5;
                    if (param_1 == 0) {
                      func_0x000108c6cb88();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x000108c6cbf8();
                      func_0x000108c6cd2c();
                      do {
                        func_0x000108c6ccd0();
                        func_0x000108c6cd14();
                      } while (!(bool)in_ZR);
                      func_0x000108c6ccc0();
                      puVar1 = auStack_6a0;
                      uStack_630 = 0x30;
                      pcStack_618 = FUN_108c6c8dc;
                      puVar7 = puVar6;
                      puStack_640 = puVar5;
                      puStack_638 = puVar8;
                      uStack_628 = uVar9;
                      pppppuStack_620 = &pppppuStack_590;
                      func_0x000108c6cb64();
                      (*extraout_x8_12)();
                      param_3 = puVar6;
                      param_2 = puVar2;
                      if (param_1 == 0) {
                        func_0x000108c6cb88();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x000108c6cbf8();
                        func_0x000108c6cd2c();
                        do {
                          func_0x000108c6ccd0();
                          func_0x000108c6cd14();
                        } while (!(bool)in_ZR);
                        func_0x000108c6ccc0();
                        uStack_6c0 = 0x30;
                        pcStack_6a8 = FUN_108c6c970;
                        puStack_6d0 = puVar2;
                        puStack_6c8 = puVar6;
                        uStack_6b8 = uVar10;
                        pppppuStack_6b0 = &pppppuStack_620;
                        func_0x000108c6cb64();
                        (*extraout_x8_13)();
                        if (param_1 != 0) {
                          func_0x000108c6cc64();
                          func_0x000108c6cc94();
                          func_0x000108c6ccf4();
                          func_0x000108c6cbc8();
                          func_0x000108c6cca4();
                          func_0x000108c6cd0c();
                        }
                        func_0x000108c6cb88();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x000108c6cbf8();
                        func_0x000108c6cd0c();
                        func_0x000108c6ccc0();
                        pcStack_718 = FUN_108c6c9e8;
                        param_3 = puVar7;
                        pppppuStack_720 = &pppppuStack_6b0;
                        func_0x000108c6cba0();
                        uStack_758 = extraout_x8_14;
                        func_0x000108c6cc54();
                        param_2 = (undefined8 *)&UNK_110abc140;
                        (*extraout_x8_15)();
                        if (param_1 != 0) {
                          func_0x000108c6cc04();
                          func_0x000108c6ccd8();
                          func_0x000108c6ccf4();
                          param_2 = (undefined8 *)&UNK_110abc140;
                          func_0x000108c6cbc8();
                          func_0x000108c6cca4();
                          uVar12 = 0x30;
                          do {
                            func_0x000108c6ccc8();
                            func_0x000108c6cd00();
                          } while (!(bool)in_ZR);
                        }
                        func_0x000108c6cbb4(uStack_758);
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x000108c6cbf8();
                        do {
                          func_0x000108c6ccd0();
                          func_0x000108c6cd14();
                        } while (!(bool)in_ZR);
                        func_0x000108c6ccc0();
                        puVar1 = auStack_850;
                        uStack_7e0 = 0x30;
                        pcStack_7c8 = FUN_108c6ca98;
                        puStack_7f0 = puVar7;
                        puStack_7e8 = auStack_7a0;
                        uStack_7d8 = uVar12;
                        pppppuStack_7d0 = &pppppuStack_720;
                        func_0x000108c6cb64();
                        (*extraout_x8_16)();
                        if (param_1 == 0) {
                          func_0x000108c6cb88();
                          if ((bool)in_ZR) {
                            return;
                          }
                          ___stack_chk_fail();
                          func_0x000108c6cbf8();
                          func_0x000108c6cd2c();
                          do {
                            func_0x000108c6ccd0();
                            func_0x000108c6cd14();
                          } while (!(bool)in_ZR);
                          func_0x000108c6ccc0();
                          puVar1 = auStack_850;
                        }
                      }
                    }
                  }
                }
              }
              goto FUN_108c6cb2c;
            }
          }
        }
        return;
      }
      goto FUN_108c6cb2c;
    }
  }
  return;
}



/* Entry: 108c6c320; end: 108c6c3d3;  */

/* WARNING: Possible PIC construction at 0x000108c6c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4c0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4e4) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c320(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  undefined8 extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 uVar15;
  undefined1 auStack_7c0 [96];
  undefined8 *puStack_760;
  undefined1 *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 **ppuStack_740;
  code *pcStack_738;
  undefined1 auStack_710 [72];
  undefined8 uStack_6c8;
  undefined8 **ppuStack_690;
  code *pcStack_688;
  undefined8 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 **ppuStack_620;
  code *pcStack_618;
  undefined1 auStack_610 [96];
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 **ppuStack_590;
  code *pcStack_588;
  undefined1 auStack_580 [96];
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 **ppuStack_500;
  code *pcStack_4f8;
  undefined1 auStack_4f0 [96];
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined1 auStack_460 [96];
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 **ppuStack_3e0;
  code *pcStack_3d8;
  undefined1 auStack_3d0 [96];
  undefined8 *puStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 **ppuStack_350;
  code *pcStack_348;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 **ppuStack_2e0;
  code *pcStack_2d8;
  undefined8 *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 **ppuStack_270;
  code *pcStack_268;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 **ppuStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1f0 [96];
  undefined8 *puStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined1 auStack_140 [72];
  undefined8 uStack_f8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_48;
  
  func_0x000108c6cba0();
  uStack_48 = extraout_x8;
  func_0x000108c6cc54();
  (*extraout_x8_00)();
  if (param_1 != 0) {
    func_0x000108c6cc04();
    func_0x000108c6ccd8();
    func_0x000108c6cd38();
    func_0x000108c6cce8();
    (*extraout_x9)();
    func_0x000108c6cca4();
    do {
      func_0x000108c6ccc8();
      func_0x000108c6cd00();
    } while (!(bool)in_ZR);
  }
  func_0x000108c6cbb4(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    pcStack_b8 = FUN_108c6c3d4;
    puVar8 = param_3;
    uVar15 = param_5;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x000108c6cba0();
    uStack_f8 = extraout_x8_01;
    func_0x000108c6cc54();
    puVar2 = (undefined8 *)&UNK_110abbdd0;
    (*extraout_x8_02)();
    if (param_1 != 0) {
      func_0x000108c6cc04();
      func_0x000108c6ccd8();
      func_0x000108c6cd38();
      puVar2 = (undefined8 *)&UNK_110abbdd0;
      func_0x000108c6cce8();
      (*extraout_x9_00)();
      func_0x000108c6cca4();
      param_5 = 0x30;
      do {
        func_0x000108c6ccc8();
        func_0x000108c6cd00();
      } while (!(bool)in_ZR);
    }
    func_0x000108c6cbb4(uStack_f8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      puVar1 = auStack_1f0;
      uStack_180 = 0x30;
      pcStack_168 = FUN_108c6c488;
      puVar7 = puVar8;
      uVar12 = param_4;
      puStack_190 = param_3;
      puStack_188 = auStack_140;
      uStack_178 = param_5;
      ppuStack_170 = &puStack_c0;
      func_0x000108c6cb64();
      puVar3 = &UNK_110abbe20;
      (*extraout_x8_03)();
      puVar5 = puVar2;
      if (param_1 != 0) {
FUN_108c6cb2c:
        uVar15 = *puVar5;
        *(undefined8 *)(puVar1 + 0x28) = puVar5[1];
        *(undefined8 *)(puVar1 + 0x20) = uVar15;
        *(undefined8 *)(puVar1 + 0x30) = puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        uVar15 = *puVar8;
        *(undefined8 *)(puVar1 + 0x40) = puVar8[1];
        *(undefined8 *)(puVar1 + 0x38) = uVar15;
        *(undefined8 *)(puVar1 + 0x48) = puVar8[2];
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        return;
      }
      func_0x000108c6cb88();
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd2c();
      do {
        func_0x000108c6ccd0();
        func_0x000108c6cd14();
      } while (!(bool)in_ZR);
      func_0x000108c6ccc0();
      uStack_210 = 0x30;
      pcStack_1f8 = FUN_108c6c524;
      puVar5 = puVar7;
      puStack_220 = puVar2;
      puStack_218 = puVar8;
      uStack_208 = param_4;
      ppuStack_200 = &ppuStack_170;
      func_0x000108c6cb64();
      puVar4 = &UNK_110abbe70;
      (*extraout_x8_04)();
      if (param_1 != 0) {
        func_0x000108c6cc64();
        func_0x000108c6cc94();
        func_0x000108c6ccf4();
        puVar4 = &UNK_110abbe70;
        func_0x000108c6cbc8();
        func_0x000108c6cca4();
        func_0x000108c6cd0c();
      }
      func_0x000108c6cb88();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd0c();
        func_0x000108c6ccc0();
        uStack_280 = 0x30;
        pcStack_268 = FUN_108c6c59c;
        puVar6 = puVar5;
        puStack_290 = puVar2;
        puStack_288 = puVar3;
        puStack_278 = puVar7;
        ppuStack_270 = &ppuStack_200;
        func_0x000108c6cb64();
        puVar3 = &UNK_110abbec0;
        (*extraout_x8_05)();
        if (param_1 != 0) {
          func_0x000108c6cc64();
          func_0x000108c6cc94();
          func_0x000108c6ccf4();
          puVar3 = &UNK_110abbec0;
          func_0x000108c6cbc8();
          func_0x000108c6cca4();
          func_0x000108c6cd0c();
        }
        func_0x000108c6cb88();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd0c();
          func_0x000108c6ccc0();
          uStack_2f0 = 0x30;
          pcStack_2d8 = FUN_108c6c614;
          puVar8 = puVar6;
          puStack_300 = puVar2;
          puStack_2f8 = puVar4;
          puStack_2e8 = puVar5;
          ppuStack_2e0 = &ppuStack_270;
          func_0x000108c6cb64();
          puVar5 = (undefined8 *)&UNK_110abbf10;
          (*extraout_x8_06)();
          if (param_1 != 0) {
            func_0x000108c6cc64();
            func_0x000108c6cc94();
            func_0x000108c6ccf4();
            puVar5 = (undefined8 *)&UNK_110abbf10;
            func_0x000108c6cbc8();
            func_0x000108c6cca4();
            func_0x000108c6cd0c();
          }
          func_0x000108c6cb88();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd0c();
            func_0x000108c6ccc0();
            puVar1 = auStack_3d0;
            uStack_360 = 0x30;
            pcStack_348 = FUN_108c6c68c;
            puVar7 = puVar8;
            uVar13 = uVar12;
            puStack_370 = puVar2;
            puStack_368 = puVar3;
            puStack_358 = puVar6;
            ppuStack_350 = &ppuStack_2e0;
            func_0x000108c6cb64();
            puVar2 = (undefined8 *)&UNK_110abbf60;
            (*extraout_x8_07)();
            if (param_1 == 0) {
              func_0x000108c6cb88();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd2c();
              do {
                func_0x000108c6ccd0();
                func_0x000108c6cd14();
              } while (!(bool)in_ZR);
              func_0x000108c6ccc0();
              puVar1 = auStack_460;
              uStack_3f0 = 0x30;
              pcStack_3d8 = FUN_108c6c720;
              puVar9 = puVar7;
              uVar14 = uVar13;
              puStack_400 = puVar5;
              puStack_3f8 = puVar8;
              uStack_3e8 = uVar12;
              ppuStack_3e0 = &ppuStack_350;
              func_0x000108c6cb64();
              puVar6 = (undefined8 *)&UNK_110abbfb0;
              (*extraout_x8_08)();
              puVar8 = puVar7;
              puVar5 = puVar2;
              if (param_1 == 0) {
                func_0x000108c6cb88();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd2c();
                do {
                  func_0x000108c6ccd0();
                  func_0x000108c6cd14();
                } while (!(bool)in_ZR);
                func_0x000108c6ccc0();
                puVar1 = auStack_4f0;
                uStack_480 = 0x30;
                pcStack_468 = FUN_108c6c7b4;
                puVar10 = puVar9;
                uVar12 = uVar14;
                puStack_490 = puVar2;
                puStack_488 = puVar7;
                uStack_478 = uVar13;
                ppuStack_470 = &ppuStack_3e0;
                func_0x000108c6cb64();
                puVar2 = (undefined8 *)&UNK_110abc000;
                (*extraout_x8_09)();
                puVar8 = puVar9;
                puVar5 = puVar6;
                if (param_1 == 0) {
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd2c();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  puVar1 = auStack_580;
                  uStack_510 = 0x30;
                  pcStack_4f8 = FUN_108c6c848;
                  puVar11 = puVar10;
                  uVar13 = uVar12;
                  puStack_520 = puVar6;
                  puStack_518 = puVar9;
                  uStack_508 = uVar14;
                  ppuStack_500 = &ppuStack_470;
                  func_0x000108c6cb64();
                  puVar7 = (undefined8 *)&UNK_110abc050;
                  (*extraout_x8_10)();
                  puVar8 = puVar10;
                  puVar5 = puVar2;
                  if (param_1 == 0) {
                    func_0x000108c6cb88();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    func_0x000108c6cd2c();
                    do {
                      func_0x000108c6ccd0();
                      func_0x000108c6cd14();
                    } while (!(bool)in_ZR);
                    func_0x000108c6ccc0();
                    puVar1 = auStack_610;
                    uStack_5a0 = 0x30;
                    pcStack_588 = FUN_108c6c8dc;
                    puVar6 = puVar11;
                    puStack_5b0 = puVar2;
                    puStack_5a8 = puVar10;
                    uStack_598 = uVar12;
                    ppuStack_590 = &ppuStack_500;
                    func_0x000108c6cb64();
                    (*extraout_x8_11)();
                    puVar8 = puVar11;
                    puVar5 = puVar7;
                    if (param_1 == 0) {
                      func_0x000108c6cb88();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x000108c6cbf8();
                      func_0x000108c6cd2c();
                      do {
                        func_0x000108c6ccd0();
                        func_0x000108c6cd14();
                      } while (!(bool)in_ZR);
                      func_0x000108c6ccc0();
                      uStack_630 = 0x30;
                      pcStack_618 = FUN_108c6c970;
                      puStack_640 = puVar7;
                      puStack_638 = puVar11;
                      uStack_628 = uVar13;
                      ppuStack_620 = &ppuStack_590;
                      func_0x000108c6cb64();
                      (*extraout_x8_12)();
                      if (param_1 != 0) {
                        func_0x000108c6cc64();
                        func_0x000108c6cc94();
                        func_0x000108c6ccf4();
                        func_0x000108c6cbc8();
                        func_0x000108c6cca4();
                        func_0x000108c6cd0c();
                      }
                      func_0x000108c6cb88();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x000108c6cbf8();
                      func_0x000108c6cd0c();
                      func_0x000108c6ccc0();
                      pcStack_688 = FUN_108c6c9e8;
                      puVar8 = puVar6;
                      ppuStack_690 = &ppuStack_620;
                      func_0x000108c6cba0();
                      uStack_6c8 = extraout_x8_13;
                      func_0x000108c6cc54();
                      puVar5 = (undefined8 *)&UNK_110abc140;
                      (*extraout_x8_14)();
                      if (param_1 != 0) {
                        func_0x000108c6cc04();
                        func_0x000108c6ccd8();
                        func_0x000108c6ccf4();
                        puVar5 = (undefined8 *)&UNK_110abc140;
                        func_0x000108c6cbc8();
                        func_0x000108c6cca4();
                        uVar15 = 0x30;
                        do {
                          func_0x000108c6ccc8();
                          func_0x000108c6cd00();
                        } while (!(bool)in_ZR);
                      }
                      func_0x000108c6cbb4(uStack_6c8);
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x000108c6cbf8();
                      do {
                        func_0x000108c6ccd0();
                        func_0x000108c6cd14();
                      } while (!(bool)in_ZR);
                      func_0x000108c6ccc0();
                      puVar1 = auStack_7c0;
                      uStack_750 = 0x30;
                      pcStack_738 = FUN_108c6ca98;
                      puStack_760 = puVar6;
                      puStack_758 = auStack_710;
                      uStack_748 = uVar15;
                      ppuStack_740 = &ppuStack_690;
                      func_0x000108c6cb64();
                      (*extraout_x8_15)();
                      if (param_1 == 0) {
                        func_0x000108c6cb88();
                        if ((bool)in_ZR) {
                          return;
                        }
                        ___stack_chk_fail();
                        func_0x000108c6cbf8();
                        func_0x000108c6cd2c();
                        do {
                          func_0x000108c6ccd0();
                          func_0x000108c6cd14();
                        } while (!(bool)in_ZR);
                        func_0x000108c6ccc0();
                        puVar1 = auStack_7c0;
                      }
                    }
                  }
                }
              }
            }
            goto FUN_108c6cb2c;
          }
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 108c6c3d4; end: 108c6c487;  */

/* WARNING: Possible PIC construction at 0x000108c6c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4c0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4e4) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c3d4(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  undefined8 extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x9;
  undefined8 uVar15;
  undefined1 auStack_710 [96];
  undefined8 *puStack_6b0;
  undefined1 *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 *****pppppuStack_690;
  code *pcStack_688;
  undefined1 auStack_660 [72];
  undefined8 uStack_618;
  undefined8 *****pppppuStack_5e0;
  code *pcStack_5d8;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 *****pppppuStack_570;
  code *pcStack_568;
  undefined1 auStack_560 [96];
  undefined8 *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 *****pppppuStack_4e0;
  code *pcStack_4d8;
  undefined1 auStack_4d0 [96];
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 *****pppppuStack_450;
  code *pcStack_448;
  undefined1 auStack_440 [96];
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *****pppppuStack_3c0;
  code *pcStack_3b8;
  undefined1 auStack_3b0 [96];
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 *****pppppuStack_330;
  code *pcStack_328;
  undefined1 auStack_320 [96];
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 *****pppppuStack_2a0;
  code *pcStack_298;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined1 ****ppppuStack_230;
  code *pcStack_228;
  undefined8 *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 ***pppuStack_1c0;
  code *pcStack_1b8;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [96];
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  
  puVar8 = param_3;
  uVar15 = param_5;
  func_0x000108c6cba0();
  uStack_48 = extraout_x8;
  func_0x000108c6cc54();
  puVar2 = (undefined8 *)&UNK_110abbdd0;
  (*extraout_x8_00)();
  if (param_1 != 0) {
    func_0x000108c6cc04();
    func_0x000108c6ccd8();
    func_0x000108c6cd38();
    puVar2 = (undefined8 *)&UNK_110abbdd0;
    func_0x000108c6cce8();
    (*extraout_x9)();
    func_0x000108c6cca4();
    param_5 = 0x30;
    do {
      func_0x000108c6ccc8();
      func_0x000108c6cd00();
    } while (!(bool)in_ZR);
  }
  func_0x000108c6cbb4(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108c6cbf8();
  do {
    func_0x000108c6ccd0();
    func_0x000108c6cd14();
  } while (!(bool)in_ZR);
  func_0x000108c6ccc0();
  puVar1 = auStack_140;
  uStack_d0 = 0x30;
  pcStack_b8 = FUN_108c6c488;
  puVar7 = puVar8;
  uVar12 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = auStack_90;
  uStack_c8 = param_5;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x000108c6cb64();
  puVar3 = &UNK_110abbe20;
  (*extraout_x8_01)();
  puVar5 = puVar2;
  if (param_1 == 0) {
    func_0x000108c6cb88();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd2c();
    do {
      func_0x000108c6ccd0();
      func_0x000108c6cd14();
    } while (!(bool)in_ZR);
    func_0x000108c6ccc0();
    uStack_160 = 0x30;
    pcStack_148 = FUN_108c6c524;
    puVar5 = puVar7;
    puStack_170 = puVar2;
    puStack_168 = puVar8;
    uStack_158 = param_4;
    ppuStack_150 = &puStack_c0;
    func_0x000108c6cb64();
    puVar4 = &UNK_110abbe70;
    (*extraout_x8_02)();
    if (param_1 != 0) {
      func_0x000108c6cc64();
      func_0x000108c6cc94();
      func_0x000108c6ccf4();
      puVar4 = &UNK_110abbe70;
      func_0x000108c6cbc8();
      func_0x000108c6cca4();
      func_0x000108c6cd0c();
    }
    func_0x000108c6cb88();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd0c();
      func_0x000108c6ccc0();
      uStack_1d0 = 0x30;
      pcStack_1b8 = FUN_108c6c59c;
      puVar6 = puVar5;
      puStack_1e0 = puVar2;
      puStack_1d8 = puVar3;
      puStack_1c8 = puVar7;
      pppuStack_1c0 = &ppuStack_150;
      func_0x000108c6cb64();
      puVar3 = &UNK_110abbec0;
      (*extraout_x8_03)();
      if (param_1 != 0) {
        func_0x000108c6cc64();
        func_0x000108c6cc94();
        func_0x000108c6ccf4();
        puVar3 = &UNK_110abbec0;
        func_0x000108c6cbc8();
        func_0x000108c6cca4();
        func_0x000108c6cd0c();
      }
      func_0x000108c6cb88();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd0c();
        func_0x000108c6ccc0();
        uStack_240 = 0x30;
        pcStack_228 = FUN_108c6c614;
        puVar8 = puVar6;
        puStack_250 = puVar2;
        puStack_248 = puVar4;
        puStack_238 = puVar5;
        ppppuStack_230 = &pppuStack_1c0;
        func_0x000108c6cb64();
        puVar5 = (undefined8 *)&UNK_110abbf10;
        (*extraout_x8_04)();
        if (param_1 != 0) {
          func_0x000108c6cc64();
          func_0x000108c6cc94();
          func_0x000108c6ccf4();
          puVar5 = (undefined8 *)&UNK_110abbf10;
          func_0x000108c6cbc8();
          func_0x000108c6cca4();
          func_0x000108c6cd0c();
        }
        func_0x000108c6cb88();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd0c();
          func_0x000108c6ccc0();
          puVar1 = auStack_320;
          uStack_2b0 = 0x30;
          pcStack_298 = FUN_108c6c68c;
          puVar7 = puVar8;
          uVar13 = uVar12;
          puStack_2c0 = puVar2;
          puStack_2b8 = puVar3;
          puStack_2a8 = puVar6;
          pppppuStack_2a0 = &ppppuStack_230;
          func_0x000108c6cb64();
          puVar2 = (undefined8 *)&UNK_110abbf60;
          (*extraout_x8_05)();
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            puVar1 = auStack_3b0;
            uStack_340 = 0x30;
            pcStack_328 = FUN_108c6c720;
            puVar9 = puVar7;
            uVar14 = uVar13;
            puStack_350 = puVar5;
            puStack_348 = puVar8;
            uStack_338 = uVar12;
            pppppuStack_330 = &pppppuStack_2a0;
            func_0x000108c6cb64();
            puVar6 = (undefined8 *)&UNK_110abbfb0;
            (*extraout_x8_06)();
            puVar8 = puVar7;
            puVar5 = puVar2;
            if (param_1 == 0) {
              func_0x000108c6cb88();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd2c();
              do {
                func_0x000108c6ccd0();
                func_0x000108c6cd14();
              } while (!(bool)in_ZR);
              func_0x000108c6ccc0();
              puVar1 = auStack_440;
              uStack_3d0 = 0x30;
              pcStack_3b8 = FUN_108c6c7b4;
              puVar10 = puVar9;
              uVar12 = uVar14;
              puStack_3e0 = puVar2;
              puStack_3d8 = puVar7;
              uStack_3c8 = uVar13;
              pppppuStack_3c0 = &pppppuStack_330;
              func_0x000108c6cb64();
              puVar2 = (undefined8 *)&UNK_110abc000;
              (*extraout_x8_07)();
              puVar8 = puVar9;
              puVar5 = puVar6;
              if (param_1 == 0) {
                func_0x000108c6cb88();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd2c();
                do {
                  func_0x000108c6ccd0();
                  func_0x000108c6cd14();
                } while (!(bool)in_ZR);
                func_0x000108c6ccc0();
                puVar1 = auStack_4d0;
                uStack_460 = 0x30;
                pcStack_448 = FUN_108c6c848;
                puVar11 = puVar10;
                uVar13 = uVar12;
                puStack_470 = puVar6;
                puStack_468 = puVar9;
                uStack_458 = uVar14;
                pppppuStack_450 = &pppppuStack_3c0;
                func_0x000108c6cb64();
                puVar7 = (undefined8 *)&UNK_110abc050;
                (*extraout_x8_08)();
                puVar8 = puVar10;
                puVar5 = puVar2;
                if (param_1 == 0) {
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd2c();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  puVar1 = auStack_560;
                  uStack_4f0 = 0x30;
                  pcStack_4d8 = FUN_108c6c8dc;
                  puVar6 = puVar11;
                  puStack_500 = puVar2;
                  puStack_4f8 = puVar10;
                  uStack_4e8 = uVar12;
                  pppppuStack_4e0 = &pppppuStack_450;
                  func_0x000108c6cb64();
                  (*extraout_x8_09)();
                  puVar8 = puVar11;
                  puVar5 = puVar7;
                  if (param_1 == 0) {
                    func_0x000108c6cb88();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    func_0x000108c6cd2c();
                    do {
                      func_0x000108c6ccd0();
                      func_0x000108c6cd14();
                    } while (!(bool)in_ZR);
                    func_0x000108c6ccc0();
                    uStack_580 = 0x30;
                    pcStack_568 = FUN_108c6c970;
                    puStack_590 = puVar7;
                    puStack_588 = puVar11;
                    uStack_578 = uVar13;
                    pppppuStack_570 = &pppppuStack_4e0;
                    func_0x000108c6cb64();
                    (*extraout_x8_10)();
                    if (param_1 != 0) {
                      func_0x000108c6cc64();
                      func_0x000108c6cc94();
                      func_0x000108c6ccf4();
                      func_0x000108c6cbc8();
                      func_0x000108c6cca4();
                      func_0x000108c6cd0c();
                    }
                    func_0x000108c6cb88();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    func_0x000108c6cd0c();
                    func_0x000108c6ccc0();
                    pcStack_5d8 = FUN_108c6c9e8;
                    puVar8 = puVar6;
                    pppppuStack_5e0 = &pppppuStack_570;
                    func_0x000108c6cba0();
                    uStack_618 = extraout_x8_11;
                    func_0x000108c6cc54();
                    puVar5 = (undefined8 *)&UNK_110abc140;
                    (*extraout_x8_12)();
                    if (param_1 != 0) {
                      func_0x000108c6cc04();
                      func_0x000108c6ccd8();
                      func_0x000108c6ccf4();
                      puVar5 = (undefined8 *)&UNK_110abc140;
                      func_0x000108c6cbc8();
                      func_0x000108c6cca4();
                      uVar15 = 0x30;
                      do {
                        func_0x000108c6ccc8();
                        func_0x000108c6cd00();
                      } while (!(bool)in_ZR);
                    }
                    func_0x000108c6cbb4(uStack_618);
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    do {
                      func_0x000108c6ccd0();
                      func_0x000108c6cd14();
                    } while (!(bool)in_ZR);
                    func_0x000108c6ccc0();
                    puVar1 = auStack_710;
                    uStack_6a0 = 0x30;
                    pcStack_688 = FUN_108c6ca98;
                    puStack_6b0 = puVar6;
                    puStack_6a8 = auStack_660;
                    uStack_698 = uVar15;
                    pppppuStack_690 = &pppppuStack_5e0;
                    func_0x000108c6cb64();
                    (*extraout_x8_13)();
                    if (param_1 == 0) {
                      func_0x000108c6cb88();
                      if ((bool)in_ZR) {
                        return;
                      }
                      ___stack_chk_fail();
                      func_0x000108c6cbf8();
                      func_0x000108c6cd2c();
                      do {
                        func_0x000108c6ccd0();
                        func_0x000108c6cd14();
                      } while (!(bool)in_ZR);
                      func_0x000108c6ccc0();
                      puVar1 = auStack_710;
                    }
                  }
                }
              }
            }
          }
          goto FUN_108c6cb2c;
        }
      }
    }
    return;
  }
FUN_108c6cb2c:
  uVar15 = *puVar5;
  *(undefined8 *)(puVar1 + 0x28) = puVar5[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar15;
  *(undefined8 *)(puVar1 + 0x30) = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar15 = *puVar8;
  *(undefined8 *)(puVar1 + 0x40) = puVar8[1];
  *(undefined8 *)(puVar1 + 0x38) = uVar15;
  *(undefined8 *)(puVar1 + 0x48) = puVar8[2];
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  return;
}



/* Entry: 108c6c488; end: 108c6c523;  */

/* WARNING: Possible PIC construction at 0x000108c6c4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4c0) */
/* WARNING: Removing unreachable block (ram,0x000108c6c4e4) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c488(int param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  undefined8 uVar10;
  undefined1 auStack_660 [96];
  undefined8 *puStack_600;
  undefined1 *puStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 **ppuStack_5e0;
  code *pcStack_5d8;
  undefined1 auStack_5b0 [72];
  undefined8 uStack_568;
  undefined8 **ppuStack_530;
  code *pcStack_528;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 **ppuStack_4c0;
  code *pcStack_4b8;
  undefined1 auStack_4b0 [96];
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined1 auStack_420 [96];
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined1 auStack_390 [96];
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined1 auStack_300 [96];
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined1 auStack_270 [96];
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = auStack_90;
  puVar6 = param_3;
  func_0x000108c6cb64();
  puVar2 = &UNK_110abbe20;
  (*extraout_x8)();
  puVar4 = param_2;
  if (param_1 != 0) {
FUN_108c6cb2c:
    uVar10 = *puVar4;
    *(undefined8 *)(puVar1 + 0x28) = puVar4[1];
    *(undefined8 *)(puVar1 + 0x20) = uVar10;
    *(undefined8 *)(puVar1 + 0x30) = puVar4[2];
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    uVar10 = *param_3;
    *(undefined8 *)(puVar1 + 0x40) = param_3[1];
    *(undefined8 *)(puVar1 + 0x38) = uVar10;
    *(undefined8 *)(puVar1 + 0x48) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  func_0x000108c6cb88();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108c6cbf8();
  func_0x000108c6cd2c();
  do {
    func_0x000108c6ccd0();
    func_0x000108c6cd14();
  } while (!(bool)in_ZR);
  func_0x000108c6ccc0();
  pcStack_98 = FUN_108c6c524;
  puStack_c0 = param_2;
  puStack_b8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000108c6cb64();
  puVar3 = &UNK_110abbe70;
  (*extraout_x8_00)();
  if (param_1 != 0) {
    func_0x000108c6cc64();
    func_0x000108c6cc94();
    func_0x000108c6ccf4();
    puVar3 = &UNK_110abbe70;
    func_0x000108c6cbc8();
    func_0x000108c6cca4();
    func_0x000108c6cd0c();
  }
  func_0x000108c6cb88();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd0c();
    func_0x000108c6ccc0();
    pcStack_108 = FUN_108c6c59c;
    puStack_130 = param_2;
    puStack_128 = puVar2;
    ppuStack_110 = &puStack_a0;
    func_0x000108c6cb64();
    puVar2 = &UNK_110abbec0;
    (*extraout_x8_01)();
    if (param_1 != 0) {
      func_0x000108c6cc64();
      func_0x000108c6cc94();
      func_0x000108c6ccf4();
      puVar2 = &UNK_110abbec0;
      func_0x000108c6cbc8();
      func_0x000108c6cca4();
      func_0x000108c6cd0c();
    }
    func_0x000108c6cb88();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd0c();
      func_0x000108c6ccc0();
      pcStack_178 = FUN_108c6c614;
      puStack_1a0 = param_2;
      puStack_198 = puVar3;
      ppuStack_180 = &ppuStack_110;
      func_0x000108c6cb64();
      puVar4 = (undefined8 *)&UNK_110abbf10;
      (*extraout_x8_02)();
      if (param_1 != 0) {
        func_0x000108c6cc64();
        func_0x000108c6cc94();
        func_0x000108c6ccf4();
        puVar4 = (undefined8 *)&UNK_110abbf10;
        func_0x000108c6cbc8();
        func_0x000108c6cca4();
        func_0x000108c6cd0c();
      }
      func_0x000108c6cb88();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd0c();
        func_0x000108c6ccc0();
        puVar1 = auStack_270;
        pcStack_1e8 = FUN_108c6c68c;
        puVar7 = puVar6;
        puStack_210 = param_2;
        puStack_208 = puVar2;
        ppuStack_1f0 = &ppuStack_180;
        func_0x000108c6cb64();
        puVar5 = (undefined8 *)&UNK_110abbf60;
        (*extraout_x8_03)();
        param_3 = puVar6;
        if (param_1 == 0) {
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd2c();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_300;
          pcStack_278 = FUN_108c6c720;
          puVar8 = puVar7;
          puStack_2a0 = puVar4;
          puStack_298 = puVar6;
          ppuStack_280 = &ppuStack_1f0;
          func_0x000108c6cb64();
          puVar6 = (undefined8 *)&UNK_110abbfb0;
          (*extraout_x8_04)();
          param_3 = puVar7;
          puVar4 = puVar5;
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            puVar1 = auStack_390;
            pcStack_308 = FUN_108c6c7b4;
            puVar9 = puVar8;
            puStack_330 = puVar5;
            puStack_328 = puVar7;
            ppuStack_310 = &ppuStack_280;
            func_0x000108c6cb64();
            puVar5 = (undefined8 *)&UNK_110abc000;
            (*extraout_x8_05)();
            param_3 = puVar8;
            puVar4 = puVar6;
            if (param_1 == 0) {
              func_0x000108c6cb88();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd2c();
              do {
                func_0x000108c6ccd0();
                func_0x000108c6cd14();
              } while (!(bool)in_ZR);
              func_0x000108c6ccc0();
              puVar1 = auStack_420;
              pcStack_398 = FUN_108c6c848;
              puVar7 = puVar9;
              puStack_3c0 = puVar6;
              puStack_3b8 = puVar8;
              ppuStack_3a0 = &ppuStack_310;
              func_0x000108c6cb64();
              puVar6 = (undefined8 *)&UNK_110abc050;
              (*extraout_x8_06)();
              param_3 = puVar9;
              puVar4 = puVar5;
              if (param_1 == 0) {
                func_0x000108c6cb88();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd2c();
                do {
                  func_0x000108c6ccd0();
                  func_0x000108c6cd14();
                } while (!(bool)in_ZR);
                func_0x000108c6ccc0();
                puVar1 = auStack_4b0;
                pcStack_428 = FUN_108c6c8dc;
                puVar8 = puVar7;
                puStack_450 = puVar5;
                puStack_448 = puVar9;
                ppuStack_430 = &ppuStack_3a0;
                func_0x000108c6cb64();
                (*extraout_x8_07)();
                param_3 = puVar7;
                puVar4 = puVar6;
                if (param_1 == 0) {
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd2c();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  pcStack_4b8 = FUN_108c6c970;
                  puStack_4e0 = puVar6;
                  puStack_4d8 = puVar7;
                  ppuStack_4c0 = &ppuStack_430;
                  func_0x000108c6cb64();
                  (*extraout_x8_08)();
                  if (param_1 != 0) {
                    func_0x000108c6cc64();
                    func_0x000108c6cc94();
                    func_0x000108c6ccf4();
                    func_0x000108c6cbc8();
                    func_0x000108c6cca4();
                    func_0x000108c6cd0c();
                  }
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd0c();
                  func_0x000108c6ccc0();
                  pcStack_528 = FUN_108c6c9e8;
                  param_3 = puVar8;
                  ppuStack_530 = &ppuStack_4c0;
                  func_0x000108c6cba0();
                  uStack_568 = extraout_x8_09;
                  func_0x000108c6cc54();
                  puVar4 = (undefined8 *)&UNK_110abc140;
                  (*extraout_x8_10)();
                  if (param_1 != 0) {
                    func_0x000108c6cc04();
                    func_0x000108c6ccd8();
                    func_0x000108c6ccf4();
                    puVar4 = (undefined8 *)&UNK_110abc140;
                    func_0x000108c6cbc8();
                    func_0x000108c6cca4();
                    param_5 = 0x30;
                    do {
                      func_0x000108c6ccc8();
                      func_0x000108c6cd00();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000108c6cbb4(uStack_568);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  puVar1 = auStack_660;
                  uStack_5f0 = 0x30;
                  pcStack_5d8 = FUN_108c6ca98;
                  puStack_600 = puVar8;
                  puStack_5f8 = auStack_5b0;
                  uStack_5e8 = param_5;
                  ppuStack_5e0 = &ppuStack_530;
                  func_0x000108c6cb64();
                  (*extraout_x8_11)();
                  if (param_1 == 0) {
                    func_0x000108c6cb88();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    func_0x000108c6cd2c();
                    do {
                      func_0x000108c6ccd0();
                      func_0x000108c6cd14();
                    } while (!(bool)in_ZR);
                    func_0x000108c6ccc0();
                    puVar1 = auStack_660;
                  }
                }
              }
            }
          }
        }
        goto FUN_108c6cb2c;
      }
    }
  }
  return;
}



/* Entry: 108c6c524; end: 108c6c59b;  */

/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c524(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  undefined8 extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  undefined8 uVar9;
  undefined1 auStack_5d0 [96];
  undefined8 *puStack_570;
  undefined1 *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 **ppuStack_550;
  code *pcStack_548;
  undefined1 auStack_520 [72];
  undefined8 uStack_4d8;
  undefined8 **ppuStack_4a0;
  code *pcStack_498;
  undefined8 *puStack_450;
  undefined8 *puStack_448;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined1 auStack_420 [96];
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined1 auStack_390 [96];
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined1 auStack_300 [96];
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 **ppuStack_280;
  code *pcStack_278;
  undefined1 auStack_270 [96];
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1e0 [96];
  undefined8 **ppuStack_160;
  code *pcStack_158;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  func_0x000108c6cb64();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000108c6cc64();
    func_0x000108c6cc94();
    func_0x000108c6ccf4();
    func_0x000108c6cbc8();
    func_0x000108c6cca4();
    func_0x000108c6cd0c();
  }
  func_0x000108c6cb88();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd0c();
    func_0x000108c6ccc0();
    pcStack_78 = FUN_108c6c59c;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    (*extraout_x8_00)();
    if (param_1 != 0) {
      func_0x000108c6cc64();
      func_0x000108c6cc94();
      func_0x000108c6ccf4();
      func_0x000108c6cbc8();
      func_0x000108c6cca4();
      func_0x000108c6cd0c();
    }
    func_0x000108c6cb88();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd0c();
      func_0x000108c6ccc0();
      pcStack_e8 = FUN_108c6c614;
      ppuStack_f0 = &puStack_80;
      func_0x000108c6cb64();
      puVar2 = (undefined8 *)&UNK_110abbf10;
      (*extraout_x8_01)();
      if (param_1 != 0) {
        func_0x000108c6cc64();
        func_0x000108c6cc94();
        func_0x000108c6ccf4();
        puVar2 = (undefined8 *)&UNK_110abbf10;
        func_0x000108c6cbc8();
        func_0x000108c6cca4();
        func_0x000108c6cd0c();
      }
      func_0x000108c6cb88();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd0c();
        func_0x000108c6ccc0();
        puVar1 = auStack_1e0;
        pcStack_158 = FUN_108c6c68c;
        puVar5 = param_3;
        ppuStack_160 = &ppuStack_f0;
        func_0x000108c6cb64();
        puVar3 = (undefined8 *)&UNK_110abbf60;
        (*extraout_x8_02)();
        if (param_1 == 0) {
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd2c();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_270;
          pcStack_1e8 = FUN_108c6c720;
          puVar6 = puVar5;
          puStack_210 = puVar2;
          puStack_208 = param_3;
          ppuStack_1f0 = &ppuStack_160;
          func_0x000108c6cb64();
          puVar4 = (undefined8 *)&UNK_110abbfb0;
          (*extraout_x8_03)();
          param_3 = puVar5;
          puVar2 = puVar3;
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            puVar1 = auStack_300;
            pcStack_278 = FUN_108c6c7b4;
            puVar7 = puVar6;
            puStack_2a0 = puVar3;
            puStack_298 = puVar5;
            ppuStack_280 = &ppuStack_1f0;
            func_0x000108c6cb64();
            puVar3 = (undefined8 *)&UNK_110abc000;
            (*extraout_x8_04)();
            param_3 = puVar6;
            puVar2 = puVar4;
            if (param_1 == 0) {
              func_0x000108c6cb88();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd2c();
              do {
                func_0x000108c6ccd0();
                func_0x000108c6cd14();
              } while (!(bool)in_ZR);
              func_0x000108c6ccc0();
              puVar1 = auStack_390;
              pcStack_308 = FUN_108c6c848;
              puVar8 = puVar7;
              puStack_330 = puVar4;
              puStack_328 = puVar6;
              ppuStack_310 = &ppuStack_280;
              func_0x000108c6cb64();
              puVar5 = (undefined8 *)&UNK_110abc050;
              (*extraout_x8_05)();
              param_3 = puVar7;
              puVar2 = puVar3;
              if (param_1 == 0) {
                func_0x000108c6cb88();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd2c();
                do {
                  func_0x000108c6ccd0();
                  func_0x000108c6cd14();
                } while (!(bool)in_ZR);
                func_0x000108c6ccc0();
                puVar1 = auStack_420;
                pcStack_398 = FUN_108c6c8dc;
                puVar4 = puVar8;
                puStack_3c0 = puVar3;
                puStack_3b8 = puVar7;
                ppuStack_3a0 = &ppuStack_310;
                func_0x000108c6cb64();
                (*extraout_x8_06)();
                param_3 = puVar8;
                puVar2 = puVar5;
                if (param_1 == 0) {
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd2c();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  pcStack_428 = FUN_108c6c970;
                  puStack_450 = puVar5;
                  puStack_448 = puVar8;
                  ppuStack_430 = &ppuStack_3a0;
                  func_0x000108c6cb64();
                  (*extraout_x8_07)();
                  if (param_1 != 0) {
                    func_0x000108c6cc64();
                    func_0x000108c6cc94();
                    func_0x000108c6ccf4();
                    func_0x000108c6cbc8();
                    func_0x000108c6cca4();
                    func_0x000108c6cd0c();
                  }
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd0c();
                  func_0x000108c6ccc0();
                  pcStack_498 = FUN_108c6c9e8;
                  param_3 = puVar4;
                  ppuStack_4a0 = &ppuStack_430;
                  func_0x000108c6cba0();
                  uStack_4d8 = extraout_x8_08;
                  func_0x000108c6cc54();
                  puVar2 = (undefined8 *)&UNK_110abc140;
                  (*extraout_x8_09)();
                  if (param_1 != 0) {
                    func_0x000108c6cc04();
                    func_0x000108c6ccd8();
                    func_0x000108c6ccf4();
                    puVar2 = (undefined8 *)&UNK_110abc140;
                    func_0x000108c6cbc8();
                    func_0x000108c6cca4();
                    param_5 = 0x30;
                    do {
                      func_0x000108c6ccc8();
                      func_0x000108c6cd00();
                    } while (!(bool)in_ZR);
                  }
                  func_0x000108c6cbb4(uStack_4d8);
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  puVar1 = auStack_5d0;
                  uStack_560 = 0x30;
                  pcStack_548 = FUN_108c6ca98;
                  puStack_570 = puVar4;
                  puStack_568 = auStack_520;
                  uStack_558 = param_5;
                  ppuStack_550 = &ppuStack_4a0;
                  func_0x000108c6cb64();
                  (*extraout_x8_10)();
                  if (param_1 == 0) {
                    func_0x000108c6cb88();
                    if ((bool)in_ZR) {
                      return;
                    }
                    ___stack_chk_fail();
                    func_0x000108c6cbf8();
                    func_0x000108c6cd2c();
                    do {
                      func_0x000108c6ccd0();
                      func_0x000108c6cd14();
                    } while (!(bool)in_ZR);
                    func_0x000108c6ccc0();
                    puVar1 = auStack_5d0;
                  }
                }
              }
            }
          }
        }
        uVar9 = *puVar2;
        *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
        *(undefined8 *)(puVar1 + 0x20) = uVar9;
        *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        uVar9 = *param_3;
        *(undefined8 *)(puVar1 + 0x40) = param_3[1];
        *(undefined8 *)(puVar1 + 0x38) = uVar9;
        *(undefined8 *)(puVar1 + 0x48) = param_3[2];
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        return;
      }
    }
  }
  return;
}



/* Entry: 108c6c59c; end: 108c6c613;  */

/* WARNING: Possible PIC construction at 0x000108c6c6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c7e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c87c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108c6cacc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108c6c914) */
/* WARNING: Removing unreachable block (ram,0x000108c6c930) */
/* WARNING: Removing unreachable block (ram,0x000108c6c880) */
/* WARNING: Removing unreachable block (ram,0x000108c6c89c) */
/* WARNING: Removing unreachable block (ram,0x000108c6c7ec) */
/* WARNING: Removing unreachable block (ram,0x000108c6c808) */
/* WARNING: Removing unreachable block (ram,0x000108c6c758) */
/* WARNING: Removing unreachable block (ram,0x000108c6c774) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6c4) */
/* WARNING: Removing unreachable block (ram,0x000108c6c6e0) */
/* WARNING: Removing unreachable block (ram,0x000108c6cad0) */
/* WARNING: Removing unreachable block (ram,0x000108c6caec) */

void FUN_108c6c59c(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  undefined8 uVar9;
  undefined1 auStack_560 [96];
  undefined8 *puStack_500;
  undefined1 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 **ppuStack_4e0;
  code *pcStack_4d8;
  undefined1 auStack_4b0 [72];
  undefined8 uStack_468;
  undefined8 **ppuStack_430;
  code *pcStack_428;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 **ppuStack_3c0;
  code *pcStack_3b8;
  undefined1 auStack_3b0 [96];
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 **ppuStack_330;
  code *pcStack_328;
  undefined1 auStack_320 [96];
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 **ppuStack_2a0;
  code *pcStack_298;
  undefined1 auStack_290 [96];
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined1 auStack_200 [96];
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_170 [96];
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  func_0x000108c6cb64();
  (*extraout_x8)();
  if (param_1 != 0) {
    func_0x000108c6cc64();
    func_0x000108c6cc94();
    func_0x000108c6ccf4();
    func_0x000108c6cbc8();
    func_0x000108c6cca4();
    func_0x000108c6cd0c();
  }
  func_0x000108c6cb88();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c6cbf8();
    func_0x000108c6cd0c();
    func_0x000108c6ccc0();
    pcStack_78 = FUN_108c6c614;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000108c6cb64();
    puVar2 = (undefined8 *)&UNK_110abbf10;
    (*extraout_x8_00)();
    if (param_1 != 0) {
      func_0x000108c6cc64();
      func_0x000108c6cc94();
      func_0x000108c6ccf4();
      puVar2 = (undefined8 *)&UNK_110abbf10;
      func_0x000108c6cbc8();
      func_0x000108c6cca4();
      func_0x000108c6cd0c();
    }
    func_0x000108c6cb88();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000108c6cbf8();
      func_0x000108c6cd0c();
      func_0x000108c6ccc0();
      puVar1 = auStack_170;
      pcStack_e8 = FUN_108c6c68c;
      puVar5 = param_3;
      ppuStack_f0 = &puStack_80;
      func_0x000108c6cb64();
      puVar3 = (undefined8 *)&UNK_110abbf60;
      (*extraout_x8_01)();
      if (param_1 == 0) {
        func_0x000108c6cb88();
        if ((bool)in_ZR) {
          return;
        }
        ___stack_chk_fail();
        func_0x000108c6cbf8();
        func_0x000108c6cd2c();
        do {
          func_0x000108c6ccd0();
          func_0x000108c6cd14();
        } while (!(bool)in_ZR);
        func_0x000108c6ccc0();
        puVar1 = auStack_200;
        pcStack_178 = FUN_108c6c720;
        puVar6 = puVar5;
        puStack_1a0 = puVar2;
        puStack_198 = param_3;
        ppuStack_180 = &ppuStack_f0;
        func_0x000108c6cb64();
        puVar4 = (undefined8 *)&UNK_110abbfb0;
        (*extraout_x8_02)();
        param_3 = puVar5;
        puVar2 = puVar3;
        if (param_1 == 0) {
          func_0x000108c6cb88();
          if ((bool)in_ZR) {
            return;
          }
          ___stack_chk_fail();
          func_0x000108c6cbf8();
          func_0x000108c6cd2c();
          do {
            func_0x000108c6ccd0();
            func_0x000108c6cd14();
          } while (!(bool)in_ZR);
          func_0x000108c6ccc0();
          puVar1 = auStack_290;
          pcStack_208 = FUN_108c6c7b4;
          puVar7 = puVar6;
          puStack_230 = puVar3;
          puStack_228 = puVar5;
          ppuStack_210 = &ppuStack_180;
          func_0x000108c6cb64();
          puVar3 = (undefined8 *)&UNK_110abc000;
          (*extraout_x8_03)();
          param_3 = puVar6;
          puVar2 = puVar4;
          if (param_1 == 0) {
            func_0x000108c6cb88();
            if ((bool)in_ZR) {
              return;
            }
            ___stack_chk_fail();
            func_0x000108c6cbf8();
            func_0x000108c6cd2c();
            do {
              func_0x000108c6ccd0();
              func_0x000108c6cd14();
            } while (!(bool)in_ZR);
            func_0x000108c6ccc0();
            puVar1 = auStack_320;
            pcStack_298 = FUN_108c6c848;
            puVar8 = puVar7;
            puStack_2c0 = puVar4;
            puStack_2b8 = puVar6;
            ppuStack_2a0 = &ppuStack_210;
            func_0x000108c6cb64();
            puVar5 = (undefined8 *)&UNK_110abc050;
            (*extraout_x8_04)();
            param_3 = puVar7;
            puVar2 = puVar3;
            if (param_1 == 0) {
              func_0x000108c6cb88();
              if ((bool)in_ZR) {
                return;
              }
              ___stack_chk_fail();
              func_0x000108c6cbf8();
              func_0x000108c6cd2c();
              do {
                func_0x000108c6ccd0();
                func_0x000108c6cd14();
              } while (!(bool)in_ZR);
              func_0x000108c6ccc0();
              puVar1 = auStack_3b0;
              pcStack_328 = FUN_108c6c8dc;
              puVar4 = puVar8;
              puStack_350 = puVar3;
              puStack_348 = puVar7;
              ppuStack_330 = &ppuStack_2a0;
              func_0x000108c6cb64();
              (*extraout_x8_05)();
              param_3 = puVar8;
              puVar2 = puVar5;
              if (param_1 == 0) {
                func_0x000108c6cb88();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd2c();
                do {
                  func_0x000108c6ccd0();
                  func_0x000108c6cd14();
                } while (!(bool)in_ZR);
                func_0x000108c6ccc0();
                pcStack_3b8 = FUN_108c6c970;
                puStack_3e0 = puVar5;
                puStack_3d8 = puVar8;
                ppuStack_3c0 = &ppuStack_330;
                func_0x000108c6cb64();
                (*extraout_x8_06)();
                if (param_1 != 0) {
                  func_0x000108c6cc64();
                  func_0x000108c6cc94();
                  func_0x000108c6ccf4();
                  func_0x000108c6cbc8();
                  func_0x000108c6cca4();
                  func_0x000108c6cd0c();
                }
                func_0x000108c6cb88();
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                func_0x000108c6cd0c();
                func_0x000108c6ccc0();
                pcStack_428 = FUN_108c6c9e8;
                param_3 = puVar4;
                ppuStack_430 = &ppuStack_3c0;
                func_0x000108c6cba0();
                uStack_468 = extraout_x8_07;
                func_0x000108c6cc54();
                puVar2 = (undefined8 *)&UNK_110abc140;
                (*extraout_x8_08)();
                if (param_1 != 0) {
                  func_0x000108c6cc04();
                  func_0x000108c6ccd8();
                  func_0x000108c6ccf4();
                  puVar2 = (undefined8 *)&UNK_110abc140;
                  func_0x000108c6cbc8();
                  func_0x000108c6cca4();
                  param_5 = 0x30;
                  do {
                    func_0x000108c6ccc8();
                    func_0x000108c6cd00();
                  } while (!(bool)in_ZR);
                }
                func_0x000108c6cbb4(uStack_468);
                if ((bool)in_ZR) {
                  return;
                }
                ___stack_chk_fail();
                func_0x000108c6cbf8();
                do {
                  func_0x000108c6ccd0();
                  func_0x000108c6cd14();
                } while (!(bool)in_ZR);
                func_0x000108c6ccc0();
                puVar1 = auStack_560;
                uStack_4f0 = 0x30;
                pcStack_4d8 = FUN_108c6ca98;
                puStack_500 = puVar4;
                puStack_4f8 = auStack_4b0;
                uStack_4e8 = param_5;
                ppuStack_4e0 = &ppuStack_430;
                func_0x000108c6cb64();
                (*extraout_x8_09)();
                if (param_1 == 0) {
                  func_0x000108c6cb88();
                  if ((bool)in_ZR) {
                    return;
                  }
                  ___stack_chk_fail();
                  func_0x000108c6cbf8();
                  func_0x000108c6cd2c();
                  do {
                    func_0x000108c6ccd0();
                    func_0x000108c6cd14();
                  } while (!(bool)in_ZR);
                  func_0x000108c6ccc0();
                  puVar1 = auStack_560;
                }
              }
            }
          }
        }
      }
      uVar9 = *puVar2;
      *(undefined8 *)(puVar1 + 0x28) = puVar2[1];
      *(undefined8 *)(puVar1 + 0x20) = uVar9;
      *(undefined8 *)(puVar1 + 0x30) = puVar2[2];
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar9 = *param_3;
      *(undefined8 *)(puVar1 + 0x40) = param_3[1];
      *(undefined8 *)(puVar1 + 0x38) = uVar9;
      *(undefined8 *)(puVar1 + 0x48) = param_3[2];
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      return;
    }
  }
  return;
}


