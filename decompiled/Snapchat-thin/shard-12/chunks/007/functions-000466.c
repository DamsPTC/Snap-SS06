/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1095bcf7c; end: 1095bcf9f;  */

void FUN_1095bcf7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110afe420;
  return;
}



/* Entry: 1095bcfa0; end: 1095bcfcf;  */

void FUN_1095bcfa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110afe420;
  return;
}



/* Entry: 1095bcfd0; end: 1095bd00b;  */

long FUN_1095bcfd0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe490);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bd00c; end: 1095bd01f;  */

undefined ** FUN_1095bd00c(void)

{
  return &PTR_DAT_110afe490;
}



/* Entry: 1095bd020; end: 1095bd043;  */

void FUN_1095bd020(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110afe4b0;
  return;
}



/* Entry: 1095bd044; end: 1095bd05b;  */

void FUN_1095bd044(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110afe4b0;
  return;
}



/* Entry: 1095bd05c; end: 1095bd26f;  */

undefined8 * FUN_1095bd05c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  *puVar2 = &PTR_DAT_110afe3d0;
  puVar2[1] = 0;
  puVar2[5] = 0;
  puVar2[9] = 0;
  if (*(long *)(param_2 + 8) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(param_2 + 0x48);
    plStack_50 = plVar3;
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_2 + 0x30)) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
        plStack_50 = plVar3;
      }
    }
    FUN_109471f54(alStack_68,puVar2 + 6);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bd12c:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bd12c;
    }
    plVar3 = *(long **)(param_2 + 0x28);
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_2 + 0x10)) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
        plVar3 = plStack_50;
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    plStack_50 = plVar3;
    FUN_1094720c0(alStack_68,puVar2 + 2);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bd1a4:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bd1a4;
    }
    plVar3 = (long *)puVar2[9];
    if (plVar3 == (long *)0x0) goto LAB_1095bd204;
    (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_2 + 8));
  }
  puVar2[1] = plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
LAB_1095bd204:
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095bd20c);
  (*pcVar1)();
}



/* Entry: 1095bd270; end: 1095bd2ab;  */

long FUN_1095bd270(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe520);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bd2ac; end: 1095bd2b7;  */

undefined ** FUN_1095bd2ac(void)

{
  return &PTR_DAT_110afe520;
}



/* Entry: 1095bd2b8; end: 1095bd36b;  */

undefined8 * FUN_1095bd2b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_1095ba234(param_1 + 5,param_2 + 5);
  FUN_1095ba3a0(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



/* Entry: 1095bd36c; end: 1095bd4c3;  */

void FUN_1095bd36c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined1 auStack_160 [24];
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
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  byte bStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = 0;
  uStack_188 = *(undefined8 *)(param_2 + 8);
  uStack_168 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_109472a80(auStack_160,param_2 + 0x30);
  FUN_109472bec(auStack_180,param_2 + 0x10);
  FUN_109472410(&uStack_140,param_3,&uStack_188);
  puVar1 = &uStack_188;
  FUN_1094729dc(puVar1);
  if ((bStack_60 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uStack_a8;
    uStack_a8 = uVar2;
    FUN_109472a80(param_2 + 0x30,auStack_80);
    puVar1 = (undefined8 *)(param_2 + 0x10);
    FUN_109472bec(puVar1,auStack_a0);
    param_1[6] = uStack_110;
    param_1[1] = uStack_138;
    *param_1 = uStack_140;
    param_1[3] = uStack_128;
    param_1[2] = uStack_130;
    param_1[5] = uStack_118;
    param_1[4] = uStack_120;
    param_1[0xd] = uStack_d8;
    param_1[0xc] = uStack_e0;
    param_1[0xf] = uStack_c8;
    param_1[0xe] = uStack_d0;
    param_1[0x10] = uStack_c0;
    param_1[9] = uStack_f8;
    param_1[8] = uStack_100;
    param_1[0xb] = uStack_e8;
    param_1[10] = uStack_f0;
    *(undefined4 *)(param_1 + 0x12) = uStack_b0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    if ((bStack_60 & 1) != 0) {
      puVar1 = &uStack_a8;
      FUN_1094729dc(puVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1094729dc(&uStack_188);
  __Unwind_Resume(puVar1);
  return;
}



/* Entry: 1095bd4c4; end: 1095bd4cb;  */

void FUN_1095bd4c4(void)

{
  return;
}



/* Entry: 1095bd4cc; end: 1095bd4ef;  */

void FUN_1095bd4cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110afe580;
  return;
}



/* Entry: 1095bd4f0; end: 1095bd51f;  */

void FUN_1095bd4f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110afe580;
  return;
}



/* Entry: 1095bd520; end: 1095bd55b;  */

long FUN_1095bd520(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe5e0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bd55c; end: 1095bd56f;  */

undefined ** FUN_1095bd55c(void)

{
  return &PTR_DAT_110afe5e0;
}



/* Entry: 1095bd570; end: 1095bd593;  */

void FUN_1095bd570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110afe600;
  return;
}



/* Entry: 1095bd594; end: 1095bd5ab;  */

void FUN_1095bd594(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110afe600;
  return;
}



/* Entry: 1095bd5ac; end: 1095bd7bf;  */

undefined8 * FUN_1095bd5ac(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  *puVar2 = &PTR_DAT_110afe540;
  puVar2[1] = 0;
  puVar2[5] = 0;
  puVar2[9] = 0;
  if (*(long *)(param_2 + 8) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(param_2 + 0x48);
    plStack_50 = plVar3;
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_2 + 0x30)) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
        plStack_50 = plVar3;
      }
    }
    FUN_109472a80(alStack_68,puVar2 + 6);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bd67c:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bd67c;
    }
    plVar3 = *(long **)(param_2 + 0x28);
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_2 + 0x10)) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
        plVar3 = plStack_50;
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    plStack_50 = plVar3;
    FUN_109472bec(alStack_68,puVar2 + 2);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bd6f4:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bd6f4;
    }
    plVar3 = (long *)puVar2[9];
    if (plVar3 == (long *)0x0) goto LAB_1095bd754;
    (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_2 + 8));
  }
  puVar2[1] = plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
LAB_1095bd754:
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095bd75c);
  (*pcVar1)();
}



/* Entry: 1095bd7c0; end: 1095bd7fb;  */

long FUN_1095bd7c0(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe660);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bd7fc; end: 1095bd807;  */

undefined ** FUN_1095bd7fc(void)

{
  return &PTR_DAT_110afe660;
}



/* Entry: 1095bd808; end: 1095bd867;  */

undefined8 * FUN_1095bd808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afe680;
  FUN_1095b6cec(param_1 + 1);
  return param_1;
}



/* Entry: 1095bd868; end: 1095bd9bf;  */

void FUN_1095bd868(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_188;
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined1 auStack_160 [24];
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
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  byte bStack_60;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = 0;
  uStack_188 = *(undefined8 *)(param_2 + 8);
  uStack_168 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  FUN_1095b6f60(auStack_160,param_2 + 0x30);
  FUN_1095b70cc(auStack_180,param_2 + 0x10);
  FUN_1095b60b0(&uStack_140,param_3,&uStack_188);
  puVar1 = &uStack_188;
  FUN_1095b6cec(puVar1);
  if ((bStack_60 & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = uStack_a8;
    uStack_a8 = uVar2;
    FUN_1095b6f60(param_2 + 0x30,auStack_80);
    puVar1 = (undefined8 *)(param_2 + 0x10);
    FUN_1095b70cc(puVar1,auStack_a0);
    param_1[6] = uStack_110;
    param_1[1] = uStack_138;
    *param_1 = uStack_140;
    param_1[3] = uStack_128;
    param_1[2] = uStack_130;
    param_1[5] = uStack_118;
    param_1[4] = uStack_120;
    param_1[0xd] = uStack_d8;
    param_1[0xc] = uStack_e0;
    param_1[0xf] = uStack_c8;
    param_1[0xe] = uStack_d0;
    param_1[0x10] = uStack_c0;
    param_1[9] = uStack_f8;
    param_1[8] = uStack_100;
    param_1[0xb] = uStack_e8;
    param_1[10] = uStack_f0;
    *(undefined4 *)(param_1 + 0x12) = uStack_b0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    if ((bStack_60 & 1) != 0) {
      puVar1 = &uStack_a8;
      FUN_1095b6cec(puVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_1095b6cec(&uStack_188);
  __Unwind_Resume(puVar1);
  return;
}



/* Entry: 1095bd9c0; end: 1095bd9c7;  */

void FUN_1095bd9c0(void)

{
  return;
}



/* Entry: 1095bd9c8; end: 1095bd9eb;  */

void FUN_1095bd9c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110afe6c0;
  return;
}



/* Entry: 1095bd9ec; end: 1095bda1b;  */

void FUN_1095bd9ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110afe6c0;
  return;
}



/* Entry: 1095bda1c; end: 1095bda57;  */

long FUN_1095bda1c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe720);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bda58; end: 1095bda6b;  */

undefined ** FUN_1095bda58(void)

{
  return &PTR_DAT_110afe720;
}



/* Entry: 1095bda6c; end: 1095bda8f;  */

void FUN_1095bda6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110afe740;
  return;
}



/* Entry: 1095bda90; end: 1095bdaa7;  */

void FUN_1095bda90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110afe740;
  return;
}



/* Entry: 1095bdaa8; end: 1095bdcbb;  */

undefined8 * FUN_1095bdaa8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  *puVar2 = &PTR_FUN_110afe680;
  puVar2[1] = 0;
  puVar2[5] = 0;
  puVar2[9] = 0;
  if (*(long *)(param_2 + 8) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(param_2 + 0x48);
    plStack_50 = plVar3;
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_2 + 0x30)) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
        plStack_50 = plVar3;
      }
    }
    FUN_1095b6f60(alStack_68,puVar2 + 6);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bdb78:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bdb78;
    }
    plVar3 = *(long **)(param_2 + 0x28);
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_2 + 0x10)) {
        plStack_50 = alStack_68;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_68);
        plVar3 = plStack_50;
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    plStack_50 = plVar3;
    FUN_1095b70cc(alStack_68,puVar2 + 2);
    if (plStack_50 == alStack_68) {
      lVar4 = 0x20;
LAB_1095bdbf0:
      (**(code **)(*plStack_50 + lVar4))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar4 = 0x28;
      goto LAB_1095bdbf0;
    }
    plVar3 = (long *)puVar2[9];
    if (plVar3 == (long *)0x0) goto LAB_1095bdc50;
    (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_2 + 8));
  }
  puVar2[1] = plVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
LAB_1095bdc50:
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095bdc58);
  (*pcVar1)();
}



/* Entry: 1095bdcbc; end: 1095bdcf7;  */

long FUN_1095bdcbc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe7a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095bdcf8; end: 1095bdd03;  */

undefined ** FUN_1095bdcf8(void)

{
  return &PTR_DAT_110afe7a0;
}



/* Entry: 1095bdd04; end: 1095bde43;  */

void FUN_1095bdd04(undefined8 *param_1,byte *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uStack_40;
  
  puVar1 = (undefined1 *)0x210;
  __Znwm();
  _bzero();
  FUN_10949cfe4(puVar1 + 8);
  *(undefined8 *)(puVar1 + 0x160) = 0;
  *(undefined8 *)(puVar1 + 0x168) = 0;
  *(undefined8 *)(puVar1 + 0x170) = 0;
  *(undefined8 *)(puVar1 + 0x178) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x188) = 0;
  *(undefined8 *)(puVar1 + 400) = 0;
  *(undefined8 *)(puVar1 + 0x180) = 0;
  *(undefined8 *)(puVar1 + 0x1a0) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x1a8) = 0;
  *(undefined8 *)(puVar1 + 0x1b0) = 0;
  *(undefined8 *)(puVar1 + 0x1b8) = 0;
  *(undefined8 *)(puVar1 + 0x1c0) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x1c8) = 0;
  *(undefined8 *)(puVar1 + 0x1d0) = 0;
  *(undefined8 *)(puVar1 + 0x1d8) = 0;
  *(undefined8 *)(puVar1 + 0x1e0) = 0x3ff0000000000000;
  *(undefined8 *)(puVar1 + 0x1f0) = 0;
  *(undefined8 *)(puVar1 + 0x1f8) = 0;
  *(undefined8 *)(puVar1 + 0x200) = 0;
  if ((*param_2 & 1) != 0) {
    *puVar1 = 1;
    lVar2 = *(long *)(param_2 + 8);
    *(undefined4 *)(puVar1 + 0x6c) = *(undefined4 *)(param_2 + 4);
    if (lVar2 != *(long *)(param_2 + 0x10)) {
      if (*(long *)(param_2 + 0x20) != *(long *)(param_2 + 0x28)) {
        func_0x00010949ce84(puVar1 + 8,param_2 + 8,param_2 + 0x20);
      }
    }
    *(undefined4 *)(puVar1 + 0x204) = 0;
    uStack_40 = *(ulong *)(puVar1 + 0x200) & 0xffffffff00000000;
    *(undefined8 *)(puVar1 + 0x1f8) = 0;
    *(undefined8 *)(puVar1 + 0x1f0) = 0;
    *(ulong *)(puVar1 + 0x200) = uStack_40;
  }
  *param_1 = puVar1;
  param_1[1] = &PTR_FUN_110afe7c0;
  param_1[4] = param_1 + 1;
  param_1[5] = &PTR_DAT_110afe850;
  param_1[8] = param_1 + 5;
  return;
}



/* Entry: 1095bde44; end: 1095bdf8f;  */

dword * FUN_1095bde44(dword *param_1,long *param_2,undefined8 *param_3,mach_header *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  dword *pdVar3;
  dword *pdVar4;
  dword *pdVar5;
  mach_header *pmVar6;
  int iVar7;
  dword *extraout_x8;
  int iVar8;
  mach_header *pmVar9;
  dword *pdVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *****pppppuVar13;
  code *pcVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined1 auStack_520 [8];
  long lStack_518;
  mach_header *pmStack_508;
  undefined8 ****ppppuStack_500;
  code *pcStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  double dStack_4d0;
  double dStack_4c8;
  double dStack_4c0;
  double dStack_4b0;
  double dStack_4a8;
  double dStack_4a0;
  double dStack_498;
  double dStack_490;
  double dStack_488;
  double dStack_480;
  undefined8 uStack_478;
  double dStack_470;
  char cStack_460;
  undefined1 auStack_450 [8];
  double dStack_448;
  double dStack_440;
  double dStack_438;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  undefined8 uStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  double dStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  undefined8 uStack_3d8;
  double dStack_3d0;
  int iStack_3c0;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  double dStack_388;
  double dStack_380;
  undefined8 uStack_378;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  double dStack_358;
  double dStack_350;
  double dStack_348;
  double dStack_340;
  undefined8 uStack_338;
  double dStack_330;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  undefined8 uStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  undefined8 uStack_2a8;
  double dStack_2a0;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  undefined8 uStack_218;
  double dStack_210;
  long lStack_208;
  undefined8 ****ppppuStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_48;
  
  pppppuVar13 = (undefined8 *****)&stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *param_2;
  FUN_10937f718(&uStack_90,lVar11 + 0x160);
  uStack_1a8 = uStack_88;
  uStack_1b0 = uStack_90;
  uStack_198 = uStack_78;
  uStack_1a0 = uStack_80;
  uStack_188 = uStack_68;
  uStack_190 = uStack_70;
  uStack_180 = uStack_60;
  func_0x00010937fbc4(&uStack_120,&uStack_1b0);
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_130 = uStack_e0;
  uStack_168 = uStack_118;
  uStack_170 = uStack_120;
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  FUN_10937f9d4(&uStack_120,param_3,&uStack_1b0);
  uVar15 = *param_3;
  *(undefined8 *)(lVar11 + 0x168) = param_3[1];
  *(undefined8 *)(lVar11 + 0x160) = uVar15;
  uVar15 = param_3[2];
  *(undefined8 *)(lVar11 + 0x178) = param_3[3];
  *(undefined8 *)(lVar11 + 0x170) = uVar15;
  uVar15 = param_3[4];
  *(undefined8 *)(lVar11 + 0x188) = param_3[5];
  *(undefined8 *)(lVar11 + 0x180) = uVar15;
  *(undefined8 *)(lVar11 + 400) = param_3[6];
  uVar15 = param_3[8];
  *(undefined8 *)(lVar11 + 0x1a8) = param_3[9];
  *(undefined8 *)(lVar11 + 0x1a0) = uVar15;
  uVar15 = param_3[10];
  *(undefined8 *)(lVar11 + 0x1b8) = param_3[0xb];
  *(undefined8 *)(lVar11 + 0x1b0) = uVar15;
  uVar15 = param_3[0xc];
  *(undefined8 *)(lVar11 + 0x1c8) = param_3[0xd];
  *(undefined8 *)(lVar11 + 0x1c0) = uVar15;
  uVar15 = param_3[0xe];
  *(undefined8 *)(lVar11 + 0x1d8) = param_3[0xf];
  *(undefined8 *)(lVar11 + 0x1d0) = uVar15;
  *(undefined8 *)(lVar11 + 0x1e0) = param_3[0x10];
  FUN_10949d1cc(lVar11 + 8,&uStack_120);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)param_1 = *param_2;
  pdVar10 = (dword *)(param_2 + 1);
  *param_2 = 0;
  FUN_1094778f8(param_1 + 10,param_2 + 5);
  pdVar3 = param_1 + 2;
  pdVar5 = pdVar10;
  FUN_109477a64();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pdVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppppuStack_1c0 = pppppuVar13;
  pcStack_1b8 = FUN_1095bdf90;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar12 = *(byte **)param_4;
  pmVar9 = param_4;
  if ((*pbVar12 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      pcVar14 = FUN_1095bdf90;
      puVar2 = &uStack_1b0;
      pdVar4 = extraout_x8;
      goto code_r0x0001095be770;
    }
  }
  else {
    pmVar6 = param_4;
    if ((pdVar3[0x74] < 2) || ((*(undefined1 *)((long)pdVar3 + 0x269) & 1) != 0)) {
      if (*(char *)(pdVar3 + 0x9a) == '\x01') {
        dStack_4d0 = 0.0;
        dStack_4c8 = 0.0;
        dStack_4c0 = 0.0;
        dStack_4e8 = *(double *)(pdVar3 + 0x4a);
        dStack_4f0 = *(double *)(pdVar3 + 0x48);
        dStack_4d8 = *(double *)(pdVar3 + 0x4e);
        dStack_4e0 = *(double *)(pdVar3 + 0x4c);
        dVar16 = SQRT(dStack_4f0 * dStack_4f0 + dStack_4e0 * dStack_4e0 +
                      dStack_4e8 * dStack_4e8 + dStack_4d8 * dStack_4d8);
        dStack_4f0 = dStack_4f0 / dVar16;
        dStack_4e8 = dStack_4e8 / dVar16;
        dStack_4e0 = dStack_4e0 / dVar16;
        dStack_4d8 = dStack_4d8 / dVar16;
        func_0x00010937fbc4(auStack_450,&dStack_4f0);
        dStack_3d0 = dStack_410;
        dStack_3e8 = dStack_428;
        dStack_3f0 = dStack_430;
        uStack_3d8 = uStack_418;
        dStack_3e0 = dStack_420;
        dStack_408 = dStack_448;
        dStack_410 = (double)auStack_450;
        dStack_3f8 = dStack_438;
        dStack_400 = dStack_440;
        iStack_3c0 = 1;
        goto LAB_1095be198;
      }
      auStack_450 = (undefined1  [8])0x0;
      dStack_448 = 0.0;
      dStack_430 = 0.0;
      dStack_428 = 0.0;
      dStack_408 = 0.0;
      dStack_400 = 0.0;
      dStack_3e8 = 0.0;
      dStack_3e0 = 0.0;
      dStack_440 = 0.0;
      dStack_438 = 1.0;
      dStack_420 = 0.0;
      dStack_410 = 1.0;
      dStack_3f8 = 0.0;
      dStack_3f0 = 1.0;
      uStack_3d8 = 0;
      dStack_3d0 = 1.0;
      bVar1 = true;
      iStack_3c0 = 0;
    }
    else {
      dStack_3a8 = *(double *)(pdVar3 + 0x22);
      dStack_3b0 = *(double *)(pdVar3 + 0x20);
      dStack_398 = *(double *)(pdVar3 + 0x26);
      dStack_3a0 = *(double *)(pdVar3 + 0x24);
      dStack_388 = *(double *)(pdVar3 + 0x2a);
      dStack_390 = *(double *)(pdVar3 + 0x28);
      dStack_380 = *(double *)(pdVar3 + 0x2c);
      dStack_348 = *(double *)(pdVar3 + 0x3a);
      dStack_350 = *(double *)(pdVar3 + 0x38);
      uStack_338 = *(undefined8 *)(pdVar3 + 0x3e);
      dStack_340 = *(double *)(pdVar3 + 0x3c);
      dStack_330 = *(double *)(pdVar3 + 0x40);
      dStack_368 = *(double *)(pdVar3 + 0x32);
      dStack_370 = *(double *)(pdVar3 + 0x30);
      dStack_358 = *(double *)(pdVar3 + 0x36);
      dStack_360 = *(double *)(pdVar3 + 0x34);
      FUN_109388a48(&dStack_320,pdVar3 + 0x50,&dStack_3b0);
      FUN_10937f718(&dStack_250,&dStack_320);
      dStack_4e8 = dStack_248;
      dStack_4f0 = dStack_250;
      dStack_4d8 = dStack_238;
      dStack_4e0 = dStack_240;
      dStack_4c8 = dStack_228;
      dStack_4d0 = dStack_230;
      dStack_4c0 = dStack_220;
      func_0x00010937fbc4(auStack_450,&dStack_4f0);
      dStack_3d0 = dStack_410;
      dStack_3e8 = dStack_428;
      dStack_3f0 = dStack_430;
      uStack_3d8 = uStack_418;
      dStack_3e0 = dStack_420;
      dStack_408 = dStack_448;
      dStack_410 = (double)auStack_450;
      dStack_3f8 = dStack_438;
      dStack_400 = dStack_440;
      iStack_3c0 = 2;
LAB_1095be198:
      bVar1 = false;
      dStack_4b0 = dStack_410;
      dStack_4a8 = dStack_408;
      dStack_4a0 = dStack_400;
      dStack_498 = dStack_3f8;
      dStack_490 = dStack_3f0;
      dStack_488 = dStack_3e8;
      dStack_480 = dStack_3e0;
      uStack_478 = uStack_3d8;
      dStack_470 = dStack_3d0;
      auStack_450 = (undefined1  [8])dStack_4f0;
      dStack_448 = dStack_4e8;
      dStack_440 = dStack_4e0;
      dStack_438 = dStack_4d8;
      dStack_430 = dStack_4d0;
      dStack_428 = dStack_4c8;
      dStack_420 = dStack_4c0;
    }
    if ((pbVar12[1] != *(undefined1 *)((long)pdVar3 + 0x269)) ||
       (iStack_3c0 != *(int *)(pbVar12 + 4))) {
      pbVar12[1] = *(undefined1 *)((long)pdVar3 + 0x269);
      *(int *)(pbVar12 + 4) = iStack_3c0;
      FUN_10949b274(pbVar12 + 8);
      pbVar12[0x204] = 0;
      pbVar12[0x205] = 0;
      pbVar12[0x206] = 0;
      pbVar12[0x207] = 0;
      dStack_4e8 = 0.0;
      dStack_4f0 = 0.0;
      dStack_4e0 = (double)(*(ulong *)(pbVar12 + 0x200) & 0xffffffff00000000);
      pbVar12[0x1f8] = 0;
      pbVar12[0x1f9] = 0;
      pbVar12[0x1fa] = 0;
      pbVar12[0x1fb] = 0;
      pbVar12[0x1fc] = 0;
      pbVar12[0x1fd] = 0;
      pbVar12[0x1fe] = 0;
      pbVar12[0x1ff] = 0;
      pbVar12[0x1f0] = 0;
      pbVar12[0x1f1] = 0;
      pbVar12[0x1f2] = 0;
      pbVar12[499] = 0;
      pbVar12[500] = 0;
      pbVar12[0x1f5] = 0;
      pbVar12[0x1f6] = 0;
      pbVar12[0x1f7] = 0;
      *(double *)(pbVar12 + 0x200) = dStack_4e0;
    }
    if (bVar1) {
      pdVar3 = extraout_x8;
      pmVar6 = param_4;
      FUN_1095be770();
    }
    else {
      dStack_4f0 = (double)((ulong)dStack_4f0 & 0xffffffffffffff00);
      cStack_460 = '\0';
      if (*(char *)(pdVar5 + 0x24) == '\x01') {
        dStack_4e8 = *(double *)(pdVar5 + 2);
        dStack_4f0 = *(double *)pdVar5;
        dStack_4d8 = *(double *)(pdVar5 + 6);
        dStack_4e0 = *(double *)(pdVar5 + 4);
        dStack_4c8 = *(double *)(pdVar5 + 10);
        dStack_4d0 = *(double *)(pdVar5 + 8);
        dStack_4c0 = *(double *)(pdVar5 + 0xc);
        dStack_488 = *(double *)(pdVar5 + 0x1a);
        dStack_490 = *(double *)(pdVar5 + 0x18);
        uStack_478 = *(undefined8 *)(pdVar5 + 0x1e);
        dStack_480 = *(double *)(pdVar5 + 0x1c);
        dStack_470 = *(double *)(pdVar5 + 0x20);
        dStack_4a8 = *(double *)(pdVar5 + 0x12);
        dStack_4b0 = *(double *)(pdVar5 + 0x10);
        dStack_498 = *(double *)(pdVar5 + 0x16);
        dStack_4a0 = *(double *)(pdVar5 + 0x14);
        cStack_460 = '\x01';
        FUN_10937f718(&dStack_250,pdVar5);
        dStack_318 = dStack_248;
        dStack_320 = dStack_250;
        dStack_308 = dStack_238;
        dStack_310 = dStack_240;
        dStack_2f8 = dStack_228;
        dStack_300 = dStack_230;
        dStack_2f0 = dStack_220;
        func_0x00010937fbc4(&dStack_3b0,&dStack_320);
        dStack_2b8 = dStack_388;
        dStack_2c0 = dStack_390;
        uStack_2a8 = uStack_378;
        dStack_2b0 = dStack_380;
        dStack_2a0 = dStack_370;
        dStack_2d8 = dStack_3a8;
        dStack_2e0 = dStack_3b0;
        dStack_2c8 = dStack_398;
        dStack_2d0 = dStack_3a0;
        pmVar6 = (mach_header *)auStack_450;
        FUN_10949b424(pbVar12 + 8,&dStack_320);
        if (*(int *)(pbVar12 + 0x68) == 2) {
          FUN_10949cbb8(&dStack_3b0,pbVar12 + 8,auStack_450);
          FUN_10937f718(&dStack_290,&dStack_3b0);
          dStack_318 = dStack_288;
          dStack_320 = dStack_290;
          dStack_308 = dStack_278;
          dStack_310 = dStack_280;
          dStack_2f8 = dStack_268;
          dStack_300 = dStack_270;
          dStack_2f0 = dStack_260;
          func_0x00010937fbc4(&dStack_250,&dStack_320);
          dStack_2b8 = dStack_228;
          dStack_2c0 = dStack_230;
          uStack_2a8 = uStack_218;
          dStack_2b0 = dStack_220;
          dStack_2a0 = dStack_210;
          dStack_2d8 = dStack_248;
          dStack_2e0 = dStack_250;
          dStack_2c8 = dStack_238;
          dStack_2d0 = dStack_240;
          dStack_4e8 = dStack_318;
          dStack_4f0 = dStack_320;
          dStack_4d8 = dStack_308;
          dStack_4e0 = dStack_310;
          dStack_4c8 = dStack_2f8;
          dStack_4d0 = dStack_300;
          dStack_4c0 = dStack_2f0;
          dStack_488 = dStack_228;
          dStack_490 = dStack_230;
          uStack_478 = uStack_218;
          dStack_480 = dStack_220;
          dStack_470 = dStack_210;
          dStack_4a8 = dStack_248;
          dStack_4b0 = dStack_250;
          dStack_498 = dStack_238;
          dStack_4a0 = dStack_240;
        }
LAB_1095be428:
        FUN_10937f718(&dStack_250,&dStack_4f0);
        dStack_3a8 = dStack_248;
        dStack_3b0 = dStack_250;
        dStack_398 = dStack_238;
        dStack_3a0 = dStack_240;
        dStack_388 = dStack_228;
        dStack_390 = dStack_230;
        dStack_380 = dStack_220;
        func_0x00010937fbc4(&dStack_320,&dStack_3b0);
        dStack_348 = dStack_2f8;
        dStack_350 = dStack_300;
        uStack_338 = uStack_2e8;
        dStack_340 = dStack_2f0;
        dStack_330 = dStack_2e0;
        dStack_368 = dStack_318;
        dStack_370 = dStack_320;
        dStack_358 = dStack_308;
        dStack_360 = dStack_310;
        FUN_10937f9d4(&dStack_320,&dStack_3b0,auStack_450);
        iVar7 = *(int *)(pbVar12 + 0x204);
        dVar20 = SQRT(dStack_2f0 * dStack_2f0 + dStack_300 * dStack_300 + dStack_2f8 * dStack_2f8);
        iVar8 = *(int *)(pbVar12 + 0x200) + 1;
        dVar23 = dVar20 - *(double *)(pbVar12 + 0x1f0);
        dVar16 = *(double *)(pbVar12 + 0x1f0) + dVar23 / (double)iVar8;
        dVar20 = dVar20 - dVar16;
        dVar23 = *(double *)(pbVar12 + 0x1f8) + dVar20 * dVar23;
        dVar25 = dVar23 / (double)iVar8;
        dVar24 = SQRT(dVar25);
        if (dVar24 <= 100.0) {
          if ((((0x3a < *(int *)(pbVar12 + 0x200)) && (iVar8 != 0x3c)) && (dVar25 != 0.0)) &&
             (3.0 < ABS(dVar20) / dVar24)) {
            iVar7 = iVar7 + 1;
            goto LAB_1095be4e4;
          }
        }
        else {
LAB_1095be4e4:
          iVar8 = 0;
          dVar16 = 0.0;
          dVar23 = 0.0;
        }
        *(double *)(pbVar12 + 0x1f0) = dVar16;
        *(double *)(pbVar12 + 0x1f8) = dVar23;
        *(int *)(pbVar12 + 0x200) = iVar8;
        *(int *)(pbVar12 + 0x204) = iVar7;
        *(undefined1 *)extraout_x8 = 0;
        *(undefined1 *)(extraout_x8 + 0x24) = 0;
        if (cStack_460 == '\x01') {
          *(double *)(extraout_x8 + 2) = dStack_4e8;
          *(double *)extraout_x8 = dStack_4f0;
          *(double *)(extraout_x8 + 6) = dStack_4d8;
          *(double *)(extraout_x8 + 4) = dStack_4e0;
          *(double *)(extraout_x8 + 10) = dStack_4c8;
          *(double *)(extraout_x8 + 8) = dStack_4d0;
          *(double *)(extraout_x8 + 0xc) = dStack_4c0;
          *(double *)(extraout_x8 + 0x1a) = dStack_488;
          *(double *)(extraout_x8 + 0x18) = dStack_490;
          *(undefined8 *)(extraout_x8 + 0x1e) = uStack_478;
          *(double *)(extraout_x8 + 0x1c) = dStack_480;
          *(double *)(extraout_x8 + 0x20) = dStack_470;
          *(double *)(extraout_x8 + 0x12) = dStack_4a8;
          *(double *)(extraout_x8 + 0x10) = dStack_4b0;
          *(double *)(extraout_x8 + 0x16) = dStack_498;
          *(double *)(extraout_x8 + 0x14) = dStack_4a0;
          *(undefined1 *)(extraout_x8 + 0x24) = 1;
        }
      }
      else {
        if (*(int *)(pbVar12 + 0x68) != 0) {
          FUN_10949cbb8(&dStack_3b0,pbVar12 + 8,auStack_450);
          FUN_10937f718(&dStack_290,&dStack_3b0);
          dStack_318 = dStack_288;
          dStack_320 = dStack_290;
          dStack_308 = dStack_278;
          dStack_310 = dStack_280;
          dStack_2f8 = dStack_268;
          dStack_300 = dStack_270;
          dStack_2f0 = dStack_260;
          func_0x00010937fbc4(&dStack_250,&dStack_320);
          dStack_2b8 = dStack_228;
          dStack_2c0 = dStack_230;
          uStack_2a8 = uStack_218;
          dStack_2b0 = dStack_220;
          dStack_2a0 = dStack_210;
          dStack_2d8 = dStack_248;
          dStack_2e0 = dStack_250;
          dStack_2c8 = dStack_238;
          dStack_2d0 = dStack_240;
          dStack_4e8 = dStack_318;
          dStack_4f0 = dStack_320;
          dStack_4d8 = dStack_308;
          dStack_4e0 = dStack_310;
          dStack_4c0 = dStack_2f0;
          dStack_4c8 = dStack_2f8;
          dStack_4d0 = dStack_300;
          dStack_470 = dStack_210;
          dStack_488 = dStack_228;
          dStack_490 = dStack_230;
          uStack_478 = uStack_218;
          dStack_480 = dStack_220;
          dStack_4a8 = dStack_248;
          dStack_4b0 = dStack_250;
          dStack_498 = dStack_238;
          dStack_4a0 = dStack_240;
          cStack_460 = '\x01';
          goto LAB_1095be428;
        }
        *(undefined1 *)extraout_x8 = 0;
        *(undefined1 *)(extraout_x8 + 0x24) = 0;
      }
      *(undefined8 *)(extraout_x8 + 0x30) = 0;
      *(undefined8 *)(extraout_x8 + 0x38) = 0;
      *(undefined8 *)(extraout_x8 + 0x28) = *(undefined8 *)param_4;
      pmVar9 = (mach_header *)&param_4->cpusubtype;
      param_4->magic = 0;
      param_4->cputype = 0;
      FUN_1094778f8(extraout_x8 + 0x32,&param_4[1].cpusubtype);
      pdVar3 = extraout_x8 + 0x2a;
      pdVar5 = (dword *)pmVar9;
      FUN_109477a64();
    }
    param_4 = pmVar6;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
      return pdVar3;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar2 = &uStack_620;
  pcStack_4f8 = FUN_1095be5f4;
  pppppuVar13 = &ppppuStack_500;
  lStack_518 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pmStack_508 = pmVar9;
  ppppuStack_500 = &ppppuStack_1c0;
  if ((bRam000000011382a440 & 1) == 0) {
    pdVar3 = (dword *)0x11382a440;
    ___cxa_guard_acquire();
    if ((int)pdVar3 != 0) {
      uRam000000011382a40c = 5;
      uRam000000011382a408 = 0;
      uStack_558 = 0xbf705ee2eff1c343;
      uStack_560 = 0xbf6d976e0a88b400;
      uStack_548 = 0xbf6e861dc2c37916;
      uStack_550 = 0xbf700e2a98088fbc;
      uStack_538 = 0xbf6a424cfb0936e8;
      uStack_540 = 0xbf6d485b2be5ea9a;
      uStack_528 = 0xbf5ef440e02d8ac0;
      uStack_530 = 0xbf65ea4d49a3ed31;
      uStack_598 = 0x3f6afa2e22e0d229;
      uStack_5a0 = 0x3f714f134002ea12;
      uStack_588 = 0x3f51f6813469d584;
      uStack_590 = 0x3f61d869719af5ea;
      uStack_578 = 0xbf5310c2f666e316;
      uStack_580 = 0xbf11e05e90b9cb33;
      uStack_568 = 0xbf690d6c34e1cb38;
      uStack_570 = 0xbf6218c1d1d39af0;
      uStack_5d8 = 0x3f74dbe38cee37e9;
      uStack_5e0 = 0x3f728f7644c0f584;
      uStack_5c8 = 0x3f75dc05fb3bf61e;
      uStack_5d0 = 0x3f75e8cce977372a;
      uStack_5b8 = 0x3f75df466cff53c1;
      uStack_5c0 = 0x3f757802f3a43a3d;
      uStack_5a8 = 0x3f7412d6789d77ac;
      uStack_5b0 = 0x3f764d63b0308e58;
      lRam000000011382a410 = 0;
      lRam000000011382a418 = 0;
      uRam000000011382a420 = 0;
      FUN_1092d4cc8(0x11382a410,&uStack_5e0,auStack_520,0x18);
      uStack_618 = 0xbff27cfb29ac76c1;
      uStack_620 = 0x3ff0000000000000;
      uStack_608 = 0x3fa5cf9e08fa2f9e;
      uStack_610 = 0xbf51f31d12e07a9d;
      uStack_5f8 = 0x3fb72249a48d604a;
      uStack_600 = 0x3fb4827cb076732e;
      uStack_5e8 = 0xbfb595d817d25952;
      uStack_5f0 = 0x3fa7f2f49635d31e;
      uRam000000011382a430 = 0;
      uRam000000011382a438 = 0;
      uRam000000011382a428 = 0;
      FUN_1092d4cc8(0x11382a428,&uStack_620,&uStack_5e0,8);
      pdVar5 = (dword *)0x11382a408;
      param_4 = &MACH_HEADER;
      ___cxa_atexit(FUN_10947aa20);
      pdVar3 = (dword *)0x11382a440;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_518) {
    return (dword *)0x11382a408;
  }
  ___stack_chk_fail();
  if (lRam000000011382a410 != 0) {
    lRam000000011382a418 = lRam000000011382a410;
    __ZdlPv();
  }
  ___cxa_guard_abort(0x11382a440);
  pcVar14 = FUN_1095be770;
  pdVar4 = pdVar3;
  __Unwind_Resume();
  pdVar10 = pdVar3;
  param_1 = extraout_x8;
code_r0x0001095be770:
  *(dword **)((long)puVar2 + -0x20) = param_1;
  *(dword **)((long)puVar2 + -0x18) = pdVar10;
  *(undefined8 ******)((long)puVar2 + -0x10) = pppppuVar13;
  *(code **)((long)puVar2 + -8) = pcVar14;
  *(undefined1 *)pdVar4 = 0;
  *(undefined1 *)(pdVar4 + 0x24) = 0;
  if (*(char *)(pdVar5 + 0x24) == '\x01') {
    uVar15 = *(undefined8 *)pdVar5;
    uVar18 = *(undefined8 *)(pdVar5 + 6);
    uVar17 = *(undefined8 *)(pdVar5 + 4);
    *(undefined8 *)(pdVar4 + 2) = *(undefined8 *)(pdVar5 + 2);
    *(undefined8 *)pdVar4 = uVar15;
    *(undefined8 *)(pdVar4 + 6) = uVar18;
    *(undefined8 *)(pdVar4 + 4) = uVar17;
    uVar17 = *(undefined8 *)(pdVar5 + 10);
    uVar15 = *(undefined8 *)(pdVar5 + 8);
    *(undefined8 *)(pdVar4 + 0xc) = *(undefined8 *)(pdVar5 + 0xc);
    *(undefined8 *)(pdVar4 + 10) = uVar17;
    *(undefined8 *)(pdVar4 + 8) = uVar15;
    uVar17 = *(undefined8 *)(pdVar5 + 0x16);
    uVar15 = *(undefined8 *)(pdVar5 + 0x14);
    uVar19 = *(undefined8 *)(pdVar5 + 0x1a);
    uVar18 = *(undefined8 *)(pdVar5 + 0x18);
    uVar22 = *(undefined8 *)(pdVar5 + 0x1e);
    uVar21 = *(undefined8 *)(pdVar5 + 0x1c);
    *(undefined8 *)(pdVar4 + 0x20) = *(undefined8 *)(pdVar5 + 0x20);
    *(undefined8 *)(pdVar4 + 0x1a) = uVar19;
    *(undefined8 *)(pdVar4 + 0x18) = uVar18;
    *(undefined8 *)(pdVar4 + 0x1e) = uVar22;
    *(undefined8 *)(pdVar4 + 0x1c) = uVar21;
    *(undefined8 *)(pdVar4 + 0x16) = uVar17;
    *(undefined8 *)(pdVar4 + 0x14) = uVar15;
    uVar15 = *(undefined8 *)(pdVar5 + 0x10);
    *(undefined8 *)(pdVar4 + 0x12) = *(undefined8 *)(pdVar5 + 0x12);
    *(undefined8 *)(pdVar4 + 0x10) = uVar15;
    *(undefined1 *)(pdVar4 + 0x24) = 1;
  }
  *(undefined8 *)(pdVar4 + 0x28) = 0;
  *(undefined8 *)(pdVar4 + 0x30) = 0;
  *(undefined8 *)(pdVar4 + 0x38) = 0;
  *(undefined8 *)(pdVar4 + 0x28) = *(undefined8 *)param_4;
  param_4->magic = 0;
  param_4->cputype = 0;
  FUN_1094778f8(pdVar4 + 0x32,&param_4[1].cpusubtype);
  FUN_109477a64(pdVar4 + 0x2a,&param_4->cpusubtype);
  return pdVar4;
}



/* Entry: 1095bdf90; end: 1095be5f3;  */

double * FUN_1095bdf90(double *param_1,double *param_2,dword *param_3,mach_header *param_4)

{
  bool bVar1;
  double *pdVar2;
  mach_header *pmVar3;
  int iVar4;
  int iVar5;
  double *unaff_x19;
  mach_header *pmVar6;
  double *unaff_x20;
  byte *pbVar7;
  undefined1 **unaff_x29;
  code *unaff_x30;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
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
  undefined1 auStack_370 [8];
  long lStack_368;
  double *pdStack_360;
  mach_header *pmStack_358;
  undefined1 *puStack_350;
  code *pcStack_348;
  double dStack_340;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  char cStack_2b0;
  undefined1 auStack_2a0 [8];
  double dStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double dStack_268;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  int iStack_210;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar7 = *(byte **)param_4;
  pmVar6 = param_4;
  if ((*pbVar7 & 1) == 0) {
    pdVar2 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0)
    goto code_r0x0001095be770;
  }
  else {
    pmVar3 = param_4;
    if ((*(uint *)(param_2 + 0x3a) < 2) || ((*(byte *)((long)param_2 + 0x269) & 1) != 0)) {
      if (*(char *)(param_2 + 0x4d) == '\x01') {
        dStack_320 = 0.0;
        dStack_318 = 0.0;
        dStack_310 = 0.0;
        dStack_338 = param_2[0x25];
        dVar8 = param_2[0x24];
        dStack_328 = param_2[0x27];
        dStack_330 = param_2[0x26];
        dVar11 = SQRT(dVar8 * dVar8 + dStack_330 * dStack_330 +
                      dStack_338 * dStack_338 + dStack_328 * dStack_328);
        dStack_340 = dVar8 / dVar11;
        dStack_338 = dStack_338 / dVar11;
        dStack_330 = dStack_330 / dVar11;
        dStack_328 = dStack_328 / dVar11;
        func_0x00010937fbc4(auStack_2a0,&dStack_340);
        dStack_220 = dStack_260;
        dStack_238 = dStack_278;
        dStack_240 = dStack_280;
        dStack_228 = dStack_268;
        dStack_230 = dStack_270;
        dStack_258 = dStack_298;
        dStack_260 = (double)auStack_2a0;
        dStack_248 = dStack_288;
        dStack_250 = dStack_290;
        iStack_210 = 1;
        goto LAB_1095be198;
      }
      auStack_2a0 = (undefined1  [8])0x0;
      dStack_298 = 0.0;
      dStack_280 = 0.0;
      dStack_278 = 0.0;
      dStack_258 = 0.0;
      dStack_250 = 0.0;
      dStack_238 = 0.0;
      dStack_230 = 0.0;
      dStack_290 = 0.0;
      dStack_288 = 1.0;
      dStack_270 = 0.0;
      dStack_260 = 1.0;
      dStack_248 = 0.0;
      dStack_240 = 1.0;
      dStack_228 = 0.0;
      dStack_220 = 1.0;
      bVar1 = true;
      iStack_210 = 0;
    }
    else {
      dStack_1f8 = param_2[0x11];
      dStack_200 = param_2[0x10];
      dStack_1e8 = param_2[0x13];
      dStack_1f0 = param_2[0x12];
      dStack_1d8 = param_2[0x15];
      dStack_1e0 = param_2[0x14];
      dStack_1d0 = param_2[0x16];
      dStack_198 = param_2[0x1d];
      dStack_1a0 = param_2[0x1c];
      dStack_188 = param_2[0x1f];
      dStack_190 = param_2[0x1e];
      dStack_180 = param_2[0x20];
      dStack_1b8 = param_2[0x19];
      dStack_1c0 = param_2[0x18];
      dStack_1a8 = param_2[0x1b];
      dStack_1b0 = param_2[0x1a];
      FUN_109388a48(&dStack_170,param_2 + 0x28,&dStack_200);
      FUN_10937f718(&dStack_a0,&dStack_170);
      dStack_338 = dStack_98;
      dStack_340 = dStack_a0;
      dStack_328 = dStack_88;
      dStack_330 = dStack_90;
      dStack_318 = dStack_78;
      dStack_320 = dStack_80;
      dStack_310 = dStack_70;
      func_0x00010937fbc4(auStack_2a0,&dStack_340);
      dStack_220 = dStack_260;
      dStack_238 = dStack_278;
      dStack_240 = dStack_280;
      dStack_228 = dStack_268;
      dStack_230 = dStack_270;
      dStack_258 = dStack_298;
      dStack_260 = (double)auStack_2a0;
      dStack_248 = dStack_288;
      dStack_250 = dStack_290;
      iStack_210 = 2;
LAB_1095be198:
      bVar1 = false;
      dStack_300 = dStack_260;
      dStack_2f8 = dStack_258;
      dStack_2f0 = dStack_250;
      dStack_2e8 = dStack_248;
      dStack_2e0 = dStack_240;
      dStack_2d8 = dStack_238;
      dStack_2d0 = dStack_230;
      dStack_2c8 = dStack_228;
      dStack_2c0 = dStack_220;
      auStack_2a0 = (undefined1  [8])dStack_340;
      dStack_298 = dStack_338;
      dStack_290 = dStack_330;
      dStack_288 = dStack_328;
      dStack_280 = dStack_320;
      dStack_278 = dStack_318;
      dStack_270 = dStack_310;
    }
    if ((pbVar7[1] != *(byte *)((long)param_2 + 0x269)) || (iStack_210 != *(int *)(pbVar7 + 4))) {
      pbVar7[1] = *(byte *)((long)param_2 + 0x269);
      *(int *)(pbVar7 + 4) = iStack_210;
      FUN_10949b274(pbVar7 + 8);
      pbVar7[0x204] = 0;
      pbVar7[0x205] = 0;
      pbVar7[0x206] = 0;
      pbVar7[0x207] = 0;
      dStack_338 = 0.0;
      dStack_340 = 0.0;
      dStack_330 = (double)(*(ulong *)(pbVar7 + 0x200) & 0xffffffff00000000);
      pbVar7[0x1f8] = 0;
      pbVar7[0x1f9] = 0;
      pbVar7[0x1fa] = 0;
      pbVar7[0x1fb] = 0;
      pbVar7[0x1fc] = 0;
      pbVar7[0x1fd] = 0;
      pbVar7[0x1fe] = 0;
      pbVar7[0x1ff] = 0;
      pbVar7[0x1f0] = 0;
      pbVar7[0x1f1] = 0;
      pbVar7[0x1f2] = 0;
      pbVar7[499] = 0;
      pbVar7[500] = 0;
      pbVar7[0x1f5] = 0;
      pbVar7[0x1f6] = 0;
      pbVar7[0x1f7] = 0;
      *(double *)(pbVar7 + 0x200) = dStack_330;
    }
    if (bVar1) {
      param_2 = param_1;
      pmVar3 = param_4;
      FUN_1095be770();
    }
    else {
      dStack_340 = (double)((ulong)dStack_340 & 0xffffffffffffff00);
      cStack_2b0 = '\0';
      if (*(char *)(param_3 + 0x24) == '\x01') {
        dStack_338 = *(double *)(param_3 + 2);
        dStack_340 = *(double *)param_3;
        dStack_328 = *(double *)(param_3 + 6);
        dStack_330 = *(double *)(param_3 + 4);
        dStack_318 = *(double *)(param_3 + 10);
        dStack_320 = *(double *)(param_3 + 8);
        dStack_310 = *(double *)(param_3 + 0xc);
        dStack_2d8 = *(double *)(param_3 + 0x1a);
        dStack_2e0 = *(double *)(param_3 + 0x18);
        dStack_2c8 = *(double *)(param_3 + 0x1e);
        dStack_2d0 = *(double *)(param_3 + 0x1c);
        dStack_2c0 = *(double *)(param_3 + 0x20);
        dStack_2f8 = *(double *)(param_3 + 0x12);
        dStack_300 = *(double *)(param_3 + 0x10);
        dStack_2e8 = *(double *)(param_3 + 0x16);
        dStack_2f0 = *(double *)(param_3 + 0x14);
        cStack_2b0 = '\x01';
        FUN_10937f718(&dStack_a0,param_3);
        dStack_168 = dStack_98;
        dStack_170 = dStack_a0;
        dStack_158 = dStack_88;
        dStack_160 = dStack_90;
        dStack_148 = dStack_78;
        dStack_150 = dStack_80;
        dStack_140 = dStack_70;
        func_0x00010937fbc4(&dStack_200,&dStack_170);
        dStack_108 = dStack_1d8;
        dStack_110 = dStack_1e0;
        dStack_f8 = dStack_1c8;
        dStack_100 = dStack_1d0;
        dStack_f0 = dStack_1c0;
        dStack_128 = dStack_1f8;
        dStack_130 = dStack_200;
        dStack_118 = dStack_1e8;
        dStack_120 = dStack_1f0;
        pmVar3 = (mach_header *)auStack_2a0;
        FUN_10949b424(pbVar7 + 8,&dStack_170);
        if (*(int *)(pbVar7 + 0x68) == 2) {
          FUN_10949cbb8(&dStack_200,pbVar7 + 8,auStack_2a0);
          FUN_10937f718(&dStack_e0,&dStack_200);
          dStack_168 = dStack_d8;
          dStack_170 = dStack_e0;
          dStack_158 = dStack_c8;
          dStack_160 = dStack_d0;
          dStack_148 = dStack_b8;
          dStack_150 = dStack_c0;
          dStack_140 = dStack_b0;
          func_0x00010937fbc4(&dStack_a0,&dStack_170);
          dStack_108 = dStack_78;
          dStack_110 = dStack_80;
          dStack_f8 = dStack_68;
          dStack_100 = dStack_70;
          dStack_f0 = dStack_60;
          dStack_128 = dStack_98;
          dStack_130 = dStack_a0;
          dStack_118 = dStack_88;
          dStack_120 = dStack_90;
          dStack_338 = dStack_168;
          dStack_340 = dStack_170;
          dStack_328 = dStack_158;
          dStack_330 = dStack_160;
          dStack_318 = dStack_148;
          dStack_320 = dStack_150;
          dStack_310 = dStack_140;
          dStack_2d8 = dStack_78;
          dStack_2e0 = dStack_80;
          dStack_2c8 = dStack_68;
          dStack_2d0 = dStack_70;
          dStack_2c0 = dStack_60;
          dStack_2f8 = dStack_98;
          dStack_300 = dStack_a0;
          dStack_2e8 = dStack_88;
          dStack_2f0 = dStack_90;
        }
LAB_1095be428:
        FUN_10937f718(&dStack_a0,&dStack_340);
        dStack_1f8 = dStack_98;
        dStack_200 = dStack_a0;
        dStack_1e8 = dStack_88;
        dStack_1f0 = dStack_90;
        dStack_1d8 = dStack_78;
        dStack_1e0 = dStack_80;
        dStack_1d0 = dStack_70;
        func_0x00010937fbc4(&dStack_170,&dStack_200);
        dStack_198 = dStack_148;
        dStack_1a0 = dStack_150;
        dStack_188 = dStack_138;
        dStack_190 = dStack_140;
        dStack_180 = dStack_130;
        dStack_1b8 = dStack_168;
        dStack_1c0 = dStack_170;
        dStack_1a8 = dStack_158;
        dStack_1b0 = dStack_160;
        FUN_10937f9d4(&dStack_170,&dStack_200,auStack_2a0);
        iVar4 = *(int *)(pbVar7 + 0x204);
        dVar9 = SQRT(dStack_140 * dStack_140 + dStack_150 * dStack_150 + dStack_148 * dStack_148);
        iVar5 = *(int *)(pbVar7 + 0x200) + 1;
        dVar11 = dVar9 - *(double *)(pbVar7 + 0x1f0);
        dVar8 = *(double *)(pbVar7 + 0x1f0) + dVar11 / (double)iVar5;
        dVar9 = dVar9 - dVar8;
        dVar11 = *(double *)(pbVar7 + 0x1f8) + dVar9 * dVar11;
        dVar13 = dVar11 / (double)iVar5;
        dVar12 = SQRT(dVar13);
        if (dVar12 <= 100.0) {
          if ((((0x3a < *(int *)(pbVar7 + 0x200)) && (iVar5 != 0x3c)) && (dVar13 != 0.0)) &&
             (3.0 < ABS(dVar9) / dVar12)) {
            iVar4 = iVar4 + 1;
            goto LAB_1095be4e4;
          }
        }
        else {
LAB_1095be4e4:
          iVar5 = 0;
          dVar8 = 0.0;
          dVar11 = 0.0;
        }
        *(double *)(pbVar7 + 0x1f0) = dVar8;
        *(double *)(pbVar7 + 0x1f8) = dVar11;
        *(int *)(pbVar7 + 0x200) = iVar5;
        *(int *)(pbVar7 + 0x204) = iVar4;
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 0x12) = 0;
        if (cStack_2b0 == '\x01') {
          param_1[1] = dStack_338;
          *param_1 = dStack_340;
          param_1[3] = dStack_328;
          param_1[2] = dStack_330;
          param_1[5] = dStack_318;
          param_1[4] = dStack_320;
          param_1[6] = dStack_310;
          param_1[0xd] = dStack_2d8;
          param_1[0xc] = dStack_2e0;
          param_1[0xf] = dStack_2c8;
          param_1[0xe] = dStack_2d0;
          param_1[0x10] = dStack_2c0;
          param_1[9] = dStack_2f8;
          param_1[8] = dStack_300;
          param_1[0xb] = dStack_2e8;
          param_1[10] = dStack_2f0;
          *(undefined1 *)(param_1 + 0x12) = 1;
        }
      }
      else {
        if (*(int *)(pbVar7 + 0x68) != 0) {
          FUN_10949cbb8(&dStack_200,pbVar7 + 8,auStack_2a0);
          FUN_10937f718(&dStack_e0,&dStack_200);
          dStack_168 = dStack_d8;
          dStack_170 = dStack_e0;
          dStack_158 = dStack_c8;
          dStack_160 = dStack_d0;
          dStack_148 = dStack_b8;
          dStack_150 = dStack_c0;
          dStack_140 = dStack_b0;
          func_0x00010937fbc4(&dStack_a0,&dStack_170);
          dStack_108 = dStack_78;
          dStack_110 = dStack_80;
          dStack_f8 = dStack_68;
          dStack_100 = dStack_70;
          dStack_f0 = dStack_60;
          dStack_128 = dStack_98;
          dStack_130 = dStack_a0;
          dStack_118 = dStack_88;
          dStack_120 = dStack_90;
          dStack_338 = dStack_168;
          dStack_340 = dStack_170;
          dStack_328 = dStack_158;
          dStack_330 = dStack_160;
          dStack_310 = dStack_140;
          dStack_318 = dStack_148;
          dStack_320 = dStack_150;
          dStack_2c0 = dStack_60;
          dStack_2d8 = dStack_78;
          dStack_2e0 = dStack_80;
          dStack_2c8 = dStack_68;
          dStack_2d0 = dStack_70;
          dStack_2f8 = dStack_98;
          dStack_300 = dStack_a0;
          dStack_2e8 = dStack_88;
          dStack_2f0 = dStack_90;
          cStack_2b0 = '\x01';
          goto LAB_1095be428;
        }
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 0x12) = 0;
      }
      param_1[0x18] = 0.0;
      param_1[0x1c] = 0.0;
      param_1[0x14] = *(double *)param_4;
      pmVar6 = (mach_header *)&param_4->cpusubtype;
      param_4->magic = 0;
      param_4->cputype = 0;
      FUN_1094778f8(param_1 + 0x19,&param_4[1].cpusubtype);
      param_2 = param_1 + 0x15;
      param_3 = (dword *)pmVar6;
      FUN_109477a64();
    }
    param_4 = pmVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_348 = FUN_1095be5f4;
  unaff_x29 = &puStack_350;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdStack_360 = param_1;
  pmStack_358 = pmVar6;
  puStack_350 = &stack0xfffffffffffffff0;
  if ((bRam000000011382a440 & 1) == 0) {
    param_2 = (double *)0x11382a440;
    ___cxa_guard_acquire();
    if ((int)param_2 != 0) {
      uRam000000011382a40c = 5;
      uRam000000011382a408 = 0;
      uStack_3a8 = 0xbf705ee2eff1c343;
      uStack_3b0 = 0xbf6d976e0a88b400;
      uStack_398 = 0xbf6e861dc2c37916;
      uStack_3a0 = 0xbf700e2a98088fbc;
      uStack_388 = 0xbf6a424cfb0936e8;
      uStack_390 = 0xbf6d485b2be5ea9a;
      uStack_378 = 0xbf5ef440e02d8ac0;
      uStack_380 = 0xbf65ea4d49a3ed31;
      uStack_3e8 = 0x3f6afa2e22e0d229;
      uStack_3f0 = 0x3f714f134002ea12;
      uStack_3d8 = 0x3f51f6813469d584;
      uStack_3e0 = 0x3f61d869719af5ea;
      uStack_3c8 = 0xbf5310c2f666e316;
      uStack_3d0 = 0xbf11e05e90b9cb33;
      uStack_3b8 = 0xbf690d6c34e1cb38;
      uStack_3c0 = 0xbf6218c1d1d39af0;
      uStack_428 = 0x3f74dbe38cee37e9;
      uStack_430 = 0x3f728f7644c0f584;
      uStack_418 = 0x3f75dc05fb3bf61e;
      uStack_420 = 0x3f75e8cce977372a;
      uStack_408 = 0x3f75df466cff53c1;
      uStack_410 = 0x3f757802f3a43a3d;
      uStack_3f8 = 0x3f7412d6789d77ac;
      uStack_400 = 0x3f764d63b0308e58;
      lRam000000011382a410 = 0;
      lRam000000011382a418 = 0;
      uRam000000011382a420 = 0;
      FUN_1092d4cc8(0x11382a410,&uStack_430,auStack_370,0x18);
      uStack_468 = 0xbff27cfb29ac76c1;
      uStack_470 = 0x3ff0000000000000;
      uStack_458 = 0x3fa5cf9e08fa2f9e;
      uStack_460 = 0xbf51f31d12e07a9d;
      uStack_448 = 0x3fb72249a48d604a;
      uStack_450 = 0x3fb4827cb076732e;
      uStack_438 = 0xbfb595d817d25952;
      uStack_440 = 0x3fa7f2f49635d31e;
      uRam000000011382a430 = 0;
      uRam000000011382a438 = 0;
      uRam000000011382a428 = 0;
      FUN_1092d4cc8(0x11382a428,&uStack_470,&uStack_430,8);
      param_3 = (dword *)0x11382a408;
      param_4 = &MACH_HEADER;
      ___cxa_atexit(FUN_10947aa20);
      param_2 = (double *)0x11382a440;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return (double *)0x11382a408;
  }
  ___stack_chk_fail();
  if (lRam000000011382a410 != 0) {
    lRam000000011382a418 = lRam000000011382a410;
    __ZdlPv();
  }
  ___cxa_guard_abort(0x11382a440);
  unaff_x30 = FUN_1095be770;
  pdVar2 = param_2;
  __Unwind_Resume();
  register0x00000008 = (BADSPACEBASE *)&uStack_470;
  unaff_x19 = param_2;
  unaff_x20 = param_1;
code_r0x0001095be770:
  *(double **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(double **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined1 *)pdVar2 = 0;
  *(undefined1 *)(pdVar2 + 0x12) = 0;
  if (*(char *)(param_3 + 0x24) == '\x01') {
    dVar8 = *(double *)param_3;
    dVar9 = *(double *)(param_3 + 6);
    dVar11 = *(double *)(param_3 + 4);
    pdVar2[1] = *(double *)(param_3 + 2);
    *pdVar2 = dVar8;
    pdVar2[3] = dVar9;
    pdVar2[2] = dVar11;
    dVar11 = *(double *)(param_3 + 10);
    dVar8 = *(double *)(param_3 + 8);
    pdVar2[6] = *(double *)(param_3 + 0xc);
    pdVar2[5] = dVar11;
    pdVar2[4] = dVar8;
    dVar11 = *(double *)(param_3 + 0x16);
    dVar8 = *(double *)(param_3 + 0x14);
    dVar12 = *(double *)(param_3 + 0x1a);
    dVar9 = *(double *)(param_3 + 0x18);
    dVar10 = *(double *)(param_3 + 0x1e);
    dVar13 = *(double *)(param_3 + 0x1c);
    pdVar2[0x10] = *(double *)(param_3 + 0x20);
    pdVar2[0xd] = dVar12;
    pdVar2[0xc] = dVar9;
    pdVar2[0xf] = dVar10;
    pdVar2[0xe] = dVar13;
    pdVar2[0xb] = dVar11;
    pdVar2[10] = dVar8;
    dVar8 = *(double *)(param_3 + 0x10);
    pdVar2[9] = *(double *)(param_3 + 0x12);
    pdVar2[8] = dVar8;
    *(undefined1 *)(pdVar2 + 0x12) = 1;
  }
  pdVar2[0x14] = 0.0;
  pdVar2[0x18] = 0.0;
  pdVar2[0x1c] = 0.0;
  pdVar2[0x14] = *(double *)param_4;
  param_4->magic = 0;
  param_4->cputype = 0;
  FUN_1094778f8(pdVar2 + 0x19,&param_4[1].cpusubtype);
  FUN_109477a64(pdVar2 + 0x15,&param_4->cpusubtype);
  return pdVar2;
}



/* Entry: 1095be5f4; end: 1095be76f;  */

undefined8 * FUN_1095be5f4(undefined8 *param_1,undefined8 *param_2,mach_header *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
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
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011382a440 & 1) == 0) {
    param_1 = (undefined8 *)0x11382a440;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      uRam000000011382a40c = 5;
      uRam000000011382a408 = 0;
      uStack_68 = 0xbf705ee2eff1c343;
      uStack_70 = 0xbf6d976e0a88b400;
      uStack_58 = 0xbf6e861dc2c37916;
      uStack_60 = 0xbf700e2a98088fbc;
      uStack_48 = 0xbf6a424cfb0936e8;
      uStack_50 = 0xbf6d485b2be5ea9a;
      uStack_38 = 0xbf5ef440e02d8ac0;
      uStack_40 = 0xbf65ea4d49a3ed31;
      uStack_a8 = 0x3f6afa2e22e0d229;
      uStack_b0 = 0x3f714f134002ea12;
      uStack_98 = 0x3f51f6813469d584;
      uStack_a0 = 0x3f61d869719af5ea;
      uStack_88 = 0xbf5310c2f666e316;
      uStack_90 = 0xbf11e05e90b9cb33;
      uStack_78 = 0xbf690d6c34e1cb38;
      uStack_80 = 0xbf6218c1d1d39af0;
      uStack_e8 = 0x3f74dbe38cee37e9;
      uStack_f0 = 0x3f728f7644c0f584;
      uStack_d8 = 0x3f75dc05fb3bf61e;
      uStack_e0 = 0x3f75e8cce977372a;
      uStack_c8 = 0x3f75df466cff53c1;
      uStack_d0 = 0x3f757802f3a43a3d;
      uStack_b8 = 0x3f7412d6789d77ac;
      uStack_c0 = 0x3f764d63b0308e58;
      lRam000000011382a410 = 0;
      lRam000000011382a418 = 0;
      uRam000000011382a420 = 0;
      FUN_1092d4cc8(0x11382a410,&uStack_f0,auStack_30,0x18);
      uStack_128 = 0xbff27cfb29ac76c1;
      uStack_130 = 0x3ff0000000000000;
      uStack_118 = 0x3fa5cf9e08fa2f9e;
      uStack_120 = 0xbf51f31d12e07a9d;
      uStack_108 = 0x3fb72249a48d604a;
      uStack_110 = 0x3fb4827cb076732e;
      uStack_f8 = 0xbfb595d817d25952;
      uStack_100 = 0x3fa7f2f49635d31e;
      uRam000000011382a430 = 0;
      uRam000000011382a438 = 0;
      uRam000000011382a428 = 0;
      FUN_1092d4cc8(0x11382a428,&uStack_130,&uStack_f0,8);
      param_2 = (undefined8 *)0x11382a408;
      param_3 = &MACH_HEADER;
      ___cxa_atexit(FUN_10947aa20);
      param_1 = (undefined8 *)0x11382a440;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined8 *)0x11382a408;
  }
  ___stack_chk_fail();
  if (lRam000000011382a410 != 0) {
    lRam000000011382a418 = lRam000000011382a410;
    __ZdlPv();
  }
  ___cxa_guard_abort(0x11382a440);
  __Unwind_Resume();
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x14] = *(undefined8 *)param_3;
  param_3->magic = 0;
  param_3->cputype = 0;
  FUN_1094778f8(param_1 + 0x19,&param_3[1].cpusubtype);
  FUN_109477a64(param_1 + 0x15,&param_3->cpusubtype);
  return param_1;
}



/* Entry: 1095be770; end: 1095be87f;  */

undefined8 * FUN_1095be770(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    uVar2 = param_2[5];
    uVar1 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
    uVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar1;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  param_1[0x14] = 0;
  param_1[0x18] = 0;
  param_1[0x1c] = 0;
  param_1[0x14] = *param_3;
  *param_3 = 0;
  FUN_1094778f8(param_1 + 0x19,param_3 + 5);
  FUN_109477a64(param_1 + 0x15,param_3 + 1);
  return param_1;
}



/* Entry: 1095be880; end: 1095be887;  */

void FUN_1095be880(void)

{
  return;
}



/* Entry: 1095be888; end: 1095be8ab;  */

void FUN_1095be888(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110afe7c0;
  return;
}



/* Entry: 1095be8ac; end: 1095be8c3;  */

void FUN_1095be8ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110afe7c0;
  return;
}



/* Entry: 1095be8c4; end: 1095be96f;  */

void FUN_1095be8c4(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_10949ee1c(lVar1 + 0x130);
    FUN_10949ee1c(lVar1 + 0x100);
    FUN_10949ee1c(lVar1 + 0xd0);
    FUN_10949ee1c(lVar1 + 0xa0);
    if (*(long *)(lVar1 + 0x88) != 0) {
      *(long *)(lVar1 + 0x90) = *(long *)(lVar1 + 0x88);
      __ZdlPv();
    }
    if (*(long *)(lVar1 + 0x70) != 0) {
      *(long *)(lVar1 + 0x78) = *(long *)(lVar1 + 0x70);
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095be970; end: 1095be983;  */

undefined ** FUN_1095be970(void)

{
  return &PTR_DAT_110afe830;
}



/* Entry: 1095be984; end: 1095be9a7;  */

void FUN_1095be984(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110afe850;
  return;
}



/* Entry: 1095be9a8; end: 1095be9bf;  */

void FUN_1095be9a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110afe850;
  return;
}



/* Entry: 1095be9c0; end: 1095beb57;  */

undefined8 * FUN_1095be9c0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = (undefined8 *)0x210;
  __Znwm();
  *puVar2 = *param_2;
  uVar4 = param_2[7];
  puVar2[8] = param_2[8];
  puVar2[7] = uVar4;
  uVar4 = param_2[9];
  puVar2[10] = param_2[10];
  puVar2[9] = uVar4;
  uVar4 = param_2[0xb];
  puVar2[0xc] = param_2[0xc];
  puVar2[0xb] = uVar4;
  lVar1 = param_2[0xe];
  puVar2[0xd] = param_2[0xd];
  uVar4 = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[1] = uVar4;
  uVar4 = param_2[3];
  puVar2[4] = param_2[4];
  puVar2[3] = uVar4;
  uVar5 = param_2[6];
  uVar4 = param_2[5];
  puVar2[0xe] = 0;
  puVar2[6] = uVar5;
  puVar2[5] = uVar4;
  lVar3 = param_2[0xf];
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  FUN_109471edc(puVar2 + 0xe,lVar1,lVar3,lVar3 - lVar1 >> 3);
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  FUN_109471edc(puVar2 + 0x11,param_2[0x11],param_2[0x12],(long)(param_2[0x12] - param_2[0x11]) >> 3
               );
  FUN_1095beba0(puVar2 + 0x14,param_2 + 0x14);
  FUN_1095beba0(puVar2 + 0x1a,param_2 + 0x1a);
  FUN_1095beba0(puVar2 + 0x20,param_2 + 0x20);
  FUN_1095beba0(puVar2 + 0x26,param_2 + 0x26);
  uVar4 = param_2[0x2c];
  uVar6 = param_2[0x2f];
  uVar5 = param_2[0x2e];
  puVar2[0x2d] = param_2[0x2d];
  puVar2[0x2c] = uVar4;
  puVar2[0x2f] = uVar6;
  puVar2[0x2e] = uVar5;
  uVar4 = param_2[0x30];
  puVar2[0x31] = param_2[0x31];
  puVar2[0x30] = uVar4;
  puVar2[0x32] = param_2[0x32];
  uVar4 = param_2[0x38];
  uVar6 = param_2[0x3b];
  uVar5 = param_2[0x3a];
  puVar2[0x39] = param_2[0x39];
  puVar2[0x38] = uVar4;
  puVar2[0x3b] = uVar6;
  puVar2[0x3a] = uVar5;
  puVar2[0x3c] = param_2[0x3c];
  uVar6 = param_2[0x34];
  uVar5 = param_2[0x37];
  uVar4 = param_2[0x36];
  puVar2[0x35] = param_2[0x35];
  puVar2[0x34] = uVar6;
  puVar2[0x37] = uVar5;
  puVar2[0x36] = uVar4;
  puVar2[0x40] = param_2[0x40];
  uVar4 = param_2[0x3e];
  puVar2[0x3f] = param_2[0x3f];
  puVar2[0x3e] = uVar4;
  return puVar2;
}



/* Entry: 1095beb58; end: 1095beb93;  */

long FUN_1095beb58(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110afe8c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1095beb94; end: 1095beb9f;  */

undefined ** FUN_1095beb94(void)

{
  return &PTR_DAT_110afe8c0;
}



/* Entry: 1095beba0; end: 1095bedbb;  */

undefined8 * FUN_1095beba0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long *plStack_60;
  undefined8 *puStack_58;
  
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  uVar4 = *(ulong *)(param_2 + 0x20);
  uVar13 = uVar4 / 0x2a;
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) == lVar1) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(*(long *)(lVar1 + uVar13 * 8) + (uVar4 % 0x2a) * 0x60);
    uVar5 = *(long *)(param_2 + 0x28) + uVar4;
    uVar7 = uVar5 / 0x2a;
    uVar5 = uVar5 % 0x2a;
    if ((undefined8 *)(*(long *)(lVar1 + uVar7 * 8) + uVar5 * 0x60) != puVar10) {
      lVar9 = (uVar5 + ((long)(uVar7 * 8 + uVar13 * -8) >> 3) * 0x2a) - uVar4 % 0x2a;
      if (lVar9 == 0) {
        plVar11 = (long *)0x0;
      }
      else {
        FUN_10949e428(param_1,lVar9);
        plVar11 = (long *)(param_1[1] + ((ulong)(param_1[4] + param_1[5]) / 0x2a) * 8);
        if (param_1[2] != param_1[1]) {
          puVar12 = (undefined8 *)(*plVar11 + ((ulong)(param_1[4] + param_1[5]) % 0x2a) * 0x60);
          goto LAB_1095beccc;
        }
      }
      puVar12 = (undefined8 *)0x0;
      goto LAB_1095beccc;
    }
  }
  plVar11 = (long *)0x0;
  lVar9 = 0;
  puVar12 = (undefined8 *)0x0;
LAB_1095beccc:
  plStack_60 = plVar11;
  puStack_58 = puVar12;
  FUN_10949e9bc(&plStack_60,lVar9);
  if (puVar12 != puStack_58) {
    plVar6 = (long *)(lVar1 + uVar13 * 8);
    do {
      puVar2 = puVar12;
      puVar3 = puVar12;
      puVar8 = puStack_58;
      if (plVar11 != plStack_60) {
        puVar8 = (undefined8 *)(*plVar11 + 0xfc0);
      }
      for (; puVar2 != puVar8; puVar2 = puVar2 + 0xc) {
        uVar14 = *puVar10;
        uVar16 = puVar10[3];
        uVar15 = puVar10[2];
        puVar2[1] = puVar10[1];
        *puVar2 = uVar14;
        puVar2[3] = uVar16;
        puVar2[2] = uVar15;
        uVar15 = puVar10[5];
        uVar14 = puVar10[4];
        uVar17 = puVar10[7];
        uVar16 = puVar10[6];
        uVar18 = puVar10[8];
        uVar20 = puVar10[0xb];
        uVar19 = puVar10[10];
        puVar2[9] = puVar10[9];
        puVar2[8] = uVar18;
        puVar2[0xb] = uVar20;
        puVar2[10] = uVar19;
        puVar2[5] = uVar15;
        puVar2[4] = uVar14;
        puVar2[7] = uVar17;
        puVar2[6] = uVar16;
        puVar10 = puVar10 + 0xc;
        if ((long)puVar10 - *plVar6 == 0xfc0) {
          plVar6 = plVar6 + 1;
          puVar10 = (undefined8 *)*plVar6;
        }
        puVar3 = puVar8;
      }
      param_1[5] = param_1[5] + ((long)puVar3 - (long)puVar12 >> 5) * -0x5555555555555555;
      if (plVar11 == plStack_60) {
        return param_1;
      }
      plVar11 = plVar11 + 1;
      puVar12 = (undefined8 *)*plVar11;
    } while (puVar12 != puStack_58);
  }
  return param_1;
}



/* Entry: 1095bedbc; end: 1095bee83;  */

long * FUN_1095bedbc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 1095bee84; end: 1095bf6ef;  */

undefined **
FUN_1095bee84(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined **ppuVar22;
  int iVar23;
  undefined *puVar24;
  float *pfVar25;
  ulong uVar26;
  float *pfVar27;
  uint uVar28;
  ulong uVar29;
  long *plVar30;
  undefined1 *puVar31;
  int *piVar32;
  int *piVar33;
  undefined8 *puVar34;
  float fVar35;
  int iVar36;
  uint uVar37;
  int iVar39;
  int iVar40;
  undefined1 auVar38 [16];
  int iVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fStack_23730;
  float fStack_2372c;
  float fStack_23728;
  float fStack_23724;
  double dStack_236c0;
  double dStack_236b8;
  undefined8 uStack_236b0;
  undefined8 uStack_236a8;
  int iStack_236a0;
  int iStack_2369c;
  int iStack_23698;
  int iStack_23694;
  undefined8 uStack_23690;
  undefined8 uStack_23688;
  undefined8 uStack_23680;
  undefined **ppuStack_23678;
  undefined8 uStack_23670;
  undefined8 uStack_23668;
  int iStack_23660;
  int iStack_2365c;
  undefined8 uStack_23658;
  uint uStack_23650;
  int iStack_2364c;
  undefined8 *puStack_23648;
  undefined8 auStack_23640 [3];
  undefined1 auStack_23628 [4];
  undefined8 uStack_23624;
  undefined4 uStack_2361c;
  undefined4 uStack_23618;
  undefined4 uStack_23614;
  undefined4 uStack_23610;
  undefined4 uStack_2360c;
  undefined4 uStack_23608;
  undefined4 uStack_23604;
  undefined4 uStack_23600;
  undefined4 uStack_235fc;
  undefined4 uStack_235f8;
  undefined4 uStack_235f4;
  long lStack_235f0;
  long lStack_235e8;
  undefined8 *puStack_235e0;
  undefined8 uStack_235d8;
  undefined8 uStack_235d0;
  long lStack_23598;
  undefined *puStack_234d0;
  undefined8 *puStack_234c8;
  undefined8 uStack_234c0;
  undefined8 uStack_234b8;
  undefined8 uStack_234a8;
  undefined **ppuStack_234a0;
  undefined8 uStack_23498;
  undefined8 uStack_23490;
  undefined8 uStack_23480;
  undefined8 uStack_23478;
  undefined8 uStack_23470;
  undefined8 uStack_23468;
  long lStack_23458;
  long lStack_23450;
  undefined1 *puStack_23448;
  undefined1 auStack_23440 [16];
  int iStack_23430;
  int iStack_2342c;
  int iStack_23428;
  int iStack_23424;
  undefined8 auStack_23420 [8192];
  undefined8 auStack_13420 [4];
  float afStack_13400 [2];
  undefined8 auStack_133f8 [8187];
  float afStack_3420 [1024];
  undefined *apuStack_2420 [512];
  int aiStack_1420 [1024];
  long lStack_420;
  undefined4 uStack_3a0;
  int iStack_39c;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_368;
  long lStack_360;
  undefined1 *puStack_358;
  undefined1 auStack_350 [16];
  undefined4 uStack_340;
  int iStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_308;
  long lStack_300;
  undefined1 *puStack_2f8;
  undefined1 auStack_2f0 [16];
  int aiStack_2e0 [2];
  undefined1 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  int iStack_2bc;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  long lStack_290;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [4];
  undefined8 uStack_264;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  int iStack_204;
  undefined4 uStack_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  int iStack_1dc;
  undefined *apuStack_1d8 [12];
  undefined1 auStack_178 [96];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [4];
  undefined8 auStack_10c [4];
  long alStack_e8 [6];
  undefined1 auStack_b8 [96];
  undefined *puStack_58;
  
  ppuVar12 = (undefined **)&uStack_3a0;
  puStack_58 = *(undefined **)PTR____stack_chk_guard_11034bdc0;
  iVar40 = *(int *)(param_1 + 0xc) * *param_2;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uStack_1f8 = *(undefined4 *)(param_1 + 0x20);
  iVar39 = *(int *)(param_1 + 0x24);
  iVar36 = *(int *)(param_1 + 0x2c) + iVar39;
  iStack_1f4 = iVar36;
  if (iVar40 <= *(int *)(param_1 + 0x2c)) {
    iStack_1f4 = iVar40 + iVar39;
  }
  if (iStack_1f4 <= iVar39) {
    iStack_1f4 = iVar39;
  }
  iVar40 = iVar39 + param_2[1] * *(int *)(param_1 + 0xc);
  iStack_1fc = iVar36;
  if (iVar40 <= iVar36) {
    iStack_1fc = iVar40;
  }
  iStack_1e4 = iVar36;
  if (iStack_1f4 + -0x10 <= iVar36) {
    iStack_1e4 = iStack_1f4 + -0x10;
  }
  if (iStack_1e4 <= iVar39) {
    iStack_1e4 = iVar39;
  }
  if (iStack_1fc + 0x10 <= iVar36) {
    iVar36 = iStack_1fc + 0x10;
  }
  iVar36 = iVar36 - iStack_1e4;
  iStack_204 = iStack_1f4 - iStack_1e4;
  iStack_1fc = iStack_1fc - iStack_1f4;
  uStack_208 = 0;
  auStack_118._0_4_ = iVar36 * 2;
  auStack_268 = (undefined1  [4])0x42ff0000;
  lStack_228 = (long)&uStack_264 + 4;
  uStack_25c = 0;
  uStack_258 = 0;
  uStack_264 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_254 = 0;
  uStack_250 = 0;
  uStack_23c = 0;
  uStack_244 = 0;
  uStack_240 = 0;
  lStack_230 = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  puStack_220 = &uStack_218;
  uStack_200 = uVar2;
  uStack_1f0 = uVar2;
  iStack_1ec = iStack_1fc;
  uStack_1e8 = uStack_1f8;
  uStack_1e0 = uVar2;
  iStack_1dc = iVar36;
  auStack_118._4_4_ = uVar2;
  FUN_109a83fd0(auStack_268,2,auStack_118,5);
  lVar19 = 0;
  do {
    *(undefined4 *)(auStack_118 + lVar19) = 0x42ff0000;
    *(undefined8 *)((long)auStack_10c + lVar19) = 0;
    *(undefined8 *)((long)auStack_10c + lVar19 + -8) = 0;
    *(undefined8 *)((long)auStack_10c + lVar19 + 0x10) = 0;
    *(undefined8 *)((long)auStack_10c + lVar19 + 8) = 0;
    *(undefined8 *)(&stack0xffffffffffffff14 + lVar19) = 0;
    *(undefined8 *)((long)auStack_10c + lVar19 + 0x18) = 0;
    puVar18 = (undefined8 *)((long)alStack_e8 + lVar19 + 0x20);
    *puVar18 = 0;
    *(undefined8 *)((long)alStack_e8 + lVar19 + 8) = 0;
    *(undefined8 *)((long)alStack_e8 + lVar19) = 0;
    *(long *)((long)alStack_e8 + lVar19 + 0x10) = (long)auStack_10c + lVar19 + -4;
    *(undefined8 **)((long)alStack_e8 + lVar19 + 0x18) = puVar18;
    lVar21 = lVar19 + 0x60;
    *(undefined8 *)((long)alStack_e8 + lVar19 + 0x28) = 0;
    lVar19 = lVar21;
  } while (lVar21 != 0xc0);
  uStack_2c8 = (undefined *)0x0;
  uStack_2c0 = uVar2;
  iStack_2bc = iVar36;
  FUN_109a852c8(apuStack_1d8,auStack_268,&uStack_2c8);
  uStack_340 = 0;
  uStack_338 = (undefined **)CONCAT44(iVar36,uVar2);
  iStack_33c = iVar36;
  FUN_109a852c8(auStack_178,auStack_268,&uStack_340);
  FUN_109a852c8(&uStack_2c8,*(undefined8 *)(param_1 + 0x10),&uStack_1e8);
  FUN_109a3d9cc(&uStack_2c8,apuStack_1d8);
  if (lStack_290 != 0) {
    piVar15 = (int *)(lStack_290 + 0x14);
    do {
      iVar39 = *piVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar5) {
        *piVar15 = iVar39 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar39 + -1 == 0) {
      func_0x000109a848d4(&uStack_2c8);
    }
  }
  lStack_290 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  if (0 < uStack_2c8._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_288 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_2c8._4_4_);
  }
  if (puStack_280 != auStack_278 && puStack_280 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_280 + -8));
  }
  uStack_340 = 0x1010000;
  uStack_338 = apuStack_1d8;
  uStack_330 = 0;
  FUN_109a852c8(&uStack_2c8,*(undefined8 *)(param_1 + 0x18),&uStack_1e8);
  uStack_390 = 0;
  uStack_3a0 = 0x1010000;
  aiStack_2e0[0] = 0x2010000;
  puStack_2d8 = auStack_118;
  uStack_2d0 = 0;
  puStack_398 = &uStack_2c8;
  FUN_109669760(0x3ff0000000000000,&uStack_340,&uStack_3a0,aiStack_2e0,0);
  if (lStack_290 != 0) {
    piVar15 = (int *)(lStack_290 + 0x14);
    do {
      iVar39 = *piVar15;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar5) {
        *piVar15 = iVar39 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar39 + -1 == 0) {
      func_0x000109a848d4(&uStack_2c8);
    }
  }
  lStack_290 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  if (0 < uStack_2c8._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_288 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_2c8._4_4_);
  }
  if (puStack_280 != auStack_278 && puStack_280 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_280 + -8));
  }
  uStack_330 = 0;
  uStack_340 = 0x1010000;
  uStack_338 = (undefined **)auStack_178;
  FUN_109a852c8(&uStack_2c8,*(undefined8 *)(param_1 + 0x18),&uStack_1e8);
  uStack_390 = 0;
  uStack_3a0 = 0x1010000;
  puStack_2d8 = auStack_b8;
  aiStack_2e0[0] = 0x2010000;
  uStack_2d0 = 0;
  piVar15 = (int *)0x0;
  puStack_398 = &uStack_2c8;
  FUN_109669760(0x3ff0000000000000,&uStack_340,&uStack_3a0,aiStack_2e0);
  if (lStack_290 != 0) {
    piVar14 = (int *)(lStack_290 + 0x14);
    do {
      iVar39 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar39 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar39 + -1 == 0) {
      func_0x000109a848d4(&uStack_2c8);
    }
  }
  lStack_290 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  if (0 < uStack_2c8._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_288 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_2c8._4_4_);
  }
  if (puStack_280 != auStack_278 && puStack_280 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_280 + -8));
  }
  FUN_109a890bc(&uStack_2c8,auStack_268,2,iVar36);
  uStack_340 = 0x2010000;
  uStack_330 = 0;
  uStack_338 = (undefined **)&uStack_2c8;
  FUN_109a3e010(auStack_118,2,&uStack_340);
  FUN_109a852c8(&uStack_340,&uStack_2c8,&uStack_208);
  FUN_109a852c8(&uStack_3a0,*(undefined8 *)(param_1 + 0x10),&uStack_1f8);
  aiStack_2e0[0] = -0x3dff0000;
  uStack_2d0 = 0;
  ppuVar11 = (undefined **)&uStack_340;
  piVar14 = aiStack_2e0;
  puStack_2d8 = (undefined1 *)&uStack_3a0;
  FUN_109a479a0();
  if (lStack_368 != 0) {
    piVar32 = (int *)(lStack_368 + 0x14);
    do {
      iVar36 = *piVar32;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar5) {
        *piVar32 = iVar36 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 + -1 == 0) {
      func_0x000109a848d4();
      ppuVar11 = ppuVar12;
    }
  }
  lStack_368 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  if (0 < iStack_39c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_360 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_39c);
  }
  if (puStack_358 != auStack_350 && puStack_358 != (undefined1 *)0x0) {
    ppuVar11 = *(undefined ***)(puStack_358 + -8);
    _free();
  }
  if (lStack_308 != 0) {
    piVar32 = (int *)(lStack_308 + 0x14);
    do {
      iVar36 = *piVar32;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar5) {
        *piVar32 = iVar36 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 + -1 == 0) {
      ppuVar11 = (undefined **)&uStack_340;
      func_0x000109a848d4();
    }
  }
  lStack_308 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  if (0 < iStack_33c) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_300 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < iStack_33c);
  }
  if (puStack_2f8 != auStack_2f0 && puStack_2f8 != (undefined1 *)0x0) {
    ppuVar11 = *(undefined ***)(puStack_2f8 + -8);
    _free();
  }
  if (lStack_290 != 0) {
    piVar32 = (int *)(lStack_290 + 0x14);
    do {
      iVar36 = *piVar32;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar5) {
        *piVar32 = iVar36 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 + -1 == 0) {
      ppuVar11 = (undefined **)&uStack_2c8;
      func_0x000109a848d4();
    }
  }
  lStack_290 = 0;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  if (0 < uStack_2c8._4_4_) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_288 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < uStack_2c8._4_4_);
  }
  if (puStack_280 != auStack_278 && puStack_280 != (undefined1 *)0x0) {
    ppuVar11 = *(undefined ***)(puStack_280 + -8);
    _free();
  }
  ppuVar12 = (undefined **)auStack_118;
  do {
    ppuVar13 = ppuVar12 + -0xc;
    if (ppuVar12[-5] != (undefined *)0x0) {
      piVar32 = (int *)(ppuVar12[-5] + 0x14);
      do {
        iVar36 = *piVar32;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar32,0x10);
        if (bVar5) {
          *piVar32 = iVar36 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 + -1 == 0) {
        ppuVar11 = ppuVar13;
        func_0x000109a848d4();
      }
    }
    ppuVar12[-5] = (undefined *)0x0;
    ppuVar12[-9] = (undefined *)0x0;
    ppuVar12[-10] = (undefined *)0x0;
    ppuVar12[-7] = (undefined *)0x0;
    ppuVar12[-8] = (undefined *)0x0;
    if (0 < *(int *)((long)ppuVar12 + -0x5c)) {
      lVar19 = 0;
      puVar24 = ppuVar12[-4];
      do {
        *(undefined4 *)(puVar24 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)ppuVar12 + -0x5c));
    }
    ppuVar20 = (undefined **)ppuVar12[-3];
    if (ppuVar20 != ppuVar12 + -2 && ppuVar20 != (undefined **)0x0) {
      ppuVar11 = (undefined **)ppuVar20[-1];
      _free();
    }
    ppuVar12 = ppuVar13;
  } while (ppuVar13 != apuStack_1d8);
  ppuVar12 = &puStack_58;
  do {
    ppuVar13 = ppuVar12 + -0xc;
    if (ppuVar12[-5] != (undefined *)0x0) {
      piVar32 = (int *)(ppuVar12[-5] + 0x14);
      do {
        iVar36 = *piVar32;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar32,0x10);
        if (bVar5) {
          *piVar32 = iVar36 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 + -1 == 0) {
        ppuVar11 = ppuVar13;
        func_0x000109a848d4();
      }
    }
    ppuVar12[-5] = (undefined *)0x0;
    ppuVar12[-9] = (undefined *)0x0;
    ppuVar12[-10] = (undefined *)0x0;
    ppuVar12[-7] = (undefined *)0x0;
    ppuVar12[-8] = (undefined *)0x0;
    if (0 < *(int *)((long)ppuVar12 + -0x5c)) {
      lVar19 = 0;
      puVar24 = ppuVar12[-4];
      do {
        *(undefined4 *)(puVar24 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)ppuVar12 + -0x5c));
    }
    ppuVar20 = (undefined **)ppuVar12[-3];
    if (ppuVar20 != ppuVar12 + -2 && ppuVar20 != (undefined **)0x0) {
      ppuVar11 = (undefined **)ppuVar20[-1];
      _free();
    }
    ppuVar12 = ppuVar13;
  } while (ppuVar13 != (undefined **)auStack_118);
  if (lStack_230 != 0) {
    piVar32 = (int *)(lStack_230 + 0x14);
    do {
      iVar36 = *piVar32;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar5) {
        *piVar32 = iVar36 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar36 + -1 == 0) {
      ppuVar11 = (undefined **)auStack_268;
      func_0x000109a848d4();
    }
  }
  lStack_230 = 0;
  uStack_250 = 0;
  uStack_24c = 0;
  uStack_258 = 0;
  uStack_254 = 0;
  uStack_240 = 0;
  uStack_23c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  if (0 < (int)uStack_264) {
    lVar19 = 0;
    do {
      *(undefined4 *)(lStack_228 + lVar19 * 4) = 0;
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)uStack_264);
  }
  if (puStack_220 != &uStack_218 && puStack_220 != (undefined8 *)0x0) {
    ppuVar11 = (undefined **)puStack_220[-1];
    _free();
  }
  if (*(undefined **)PTR____stack_chk_guard_11034bdc0 == puStack_58) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  if ((int)piVar14 == 0) {
    __Unwind_Resume(ppuVar11);
  }
  func_0x000104bd46a0();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_420 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar41 = *(int *)((long)ppuVar11 + 0x44) * *piVar14;
  iVar40 = *(int *)((long)ppuVar11 + 0x34);
  iVar36 = *(int *)((long)ppuVar11 + 0x3c) + iVar40;
  iVar39 = iVar36;
  if (iVar41 <= *(int *)((long)ppuVar11 + 0x3c)) {
    iVar39 = iVar41 + iVar40;
  }
  if (iVar39 <= iVar40) {
    iVar39 = iVar40;
  }
  iVar40 = iVar40 + piVar14[1] * *(int *)((long)ppuVar11 + 0x44);
  if (iVar40 <= iVar36) {
    iVar36 = iVar40;
  }
  cVar4 = *(char *)((long)ppuVar11 + 0x2c);
  lVar19 = 0x148c;
  if (cVar4 == '\0') {
    lVar19 = 0x2490;
  }
  puVar24 = ppuVar11[3];
  pfVar25 = *(float **)ppuVar11[4];
  lVar21 = *(long *)((long)ppuVar11[4] + 8) - (long)pfVar25;
  uVar26 = (lVar21 >> 4) * -0x71c71c71c71c71c7;
  if (lVar21 != 0) {
    uVar37 = 0;
    pfVar27 = afStack_3420;
    ppuVar12 = apuStack_2420;
    piVar14 = aiStack_1420;
    uVar29 = uVar26;
    do {
      *piVar14 = (int)*(short *)((long)pfVar25 + 6);
      *(int *)ppuVar12 = (int)*(short *)(pfVar25 + 2);
      *pfVar27 = *pfVar25;
      lVar21 = (long)((ulong)uVar37 << 0x20) >> 0x1e;
      uVar50 = *(undefined8 *)(pfVar25 + 4);
      uVar8 = *(undefined8 *)(pfVar25 + 8);
      uVar9 = *(undefined8 *)(pfVar25 + 10);
      *(undefined8 *)((long)auStack_13420 + lVar21 + 8) = *(undefined8 *)(pfVar25 + 6);
      *(undefined8 *)((long)auStack_13420 + lVar21) = uVar50;
      *(undefined8 *)((long)auStack_13420 + lVar21 + 0x18) = uVar9;
      *(undefined8 *)((long)auStack_13420 + lVar21 + 0x10) = uVar8;
      uVar50 = *(undefined8 *)(pfVar25 + 0xc);
      uVar8 = *(undefined8 *)(pfVar25 + 0x10);
      uVar9 = *(undefined8 *)(pfVar25 + 0x12);
      *(undefined8 *)((long)auStack_133f8 + lVar21) = *(undefined8 *)(pfVar25 + 0xe);
      *(undefined8 *)((long)afStack_13400 + lVar21) = uVar50;
      *(undefined8 *)((long)auStack_133f8 + lVar21 + 0x10) = uVar9;
      *(undefined8 *)((long)auStack_133f8 + lVar21 + 8) = uVar8;
      uVar50 = *(undefined8 *)(pfVar25 + 0x14);
      uVar8 = *(undefined8 *)(pfVar25 + 0x16);
      uVar9 = *(undefined8 *)(pfVar25 + 0x18);
      uVar10 = *(undefined8 *)(pfVar25 + 0x1a);
      uVar44 = *(undefined8 *)(pfVar25 + 0x1c);
      uVar47 = *(undefined8 *)(pfVar25 + 0x22);
      uVar46 = *(undefined8 *)(pfVar25 + 0x20);
      *(undefined8 *)((long)auStack_23420 + lVar21 + 0x28) = *(undefined8 *)(pfVar25 + 0x1e);
      *(undefined8 *)((long)auStack_23420 + lVar21 + 0x20) = uVar44;
      *(undefined8 *)((long)auStack_23420 + lVar21 + 0x38) = uVar47;
      *(undefined8 *)((long)auStack_23420 + lVar21 + 0x30) = uVar46;
      uVar37 = uVar37 + 0x10;
      pfVar25 = pfVar25 + 0x24;
      *(undefined8 *)((long)auStack_23420 + lVar21 + 8) = uVar8;
      *(undefined8 *)((long)auStack_23420 + lVar21) = uVar50;
      *(undefined8 *)((long)auStack_23420 + lVar21 + 0x18) = uVar10;
      *(undefined8 *)((long)auStack_23420 + lVar21 + 0x10) = uVar9;
      uVar29 = uVar29 - 1;
      pfVar27 = pfVar27 + 1;
      ppuVar12 = (undefined **)((long)ppuVar12 + 4);
      piVar14 = piVar14 + 1;
    } while (uVar29 != 0);
  }
  fVar52 = *(float *)(ppuVar11 + 5);
  iVar40 = *(int *)(ppuVar11 + 6);
  iVar41 = *(int *)(ppuVar11 + 7);
  lVar21 = 0x688;
  if (cVar4 == '\0') {
    lVar21 = 0x660;
  }
  fVar51 = *(float *)(puVar24 + lVar21);
  iStack_23430 = iVar40;
  iStack_2342c = iVar39;
  iStack_23428 = iVar41;
  iStack_23424 = iVar36 - iVar39;
  puVar18 = &uStack_23490;
  FUN_109a852c8(puVar18,ppuVar11[1],&iStack_23430);
  puStack_234c8 = (undefined8 *)0x0;
  puStack_234d0 = (undefined *)0x0;
  uStack_234b8 = 0;
  uStack_234c0 = 0;
  uStack_234a8 = CONCAT44(uStack_234a8._4_4_,0xc1020006);
  ppuStack_234a0 = &puStack_234d0;
  uStack_23498 = 0x400000001;
  FUN_109a91d90();
  FUN_109a48a40(&uStack_23490,&uStack_234a8,puVar18);
  if (lStack_23458 != 0) {
    piVar14 = (int *)(lStack_23458 + 0x14);
    do {
      iVar23 = *piVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 + -1 == 0) {
      func_0x000109a848d4(&uStack_23490);
    }
  }
  lStack_23458 = 0;
  uStack_23478 = 0;
  uStack_23480 = 0;
  uStack_23468 = 0;
  uStack_23470 = 0;
  if (0 < uStack_23490._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(lStack_23450 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_23490._4_4_);
  }
  if (puStack_23448 != auStack_23440 && puStack_23448 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_23448 + -8));
  }
  piVar14 = (int *)&uStack_23490;
  FUN_109a852c8(piVar14,ppuVar11[2],&iStack_23430);
  uStack_234a8 = 0x406fe00000000000;
  puStack_234d0 = (undefined *)CONCAT44(puStack_234d0._4_4_,0xc1020006);
  puStack_234c8 = &uStack_234a8;
  uStack_234c0 = 0x100000001;
  FUN_109a91d90();
  ppuVar12 = (undefined **)&uStack_23490;
  ppuVar13 = &puStack_234d0;
  FUN_109a48a40();
  if (lStack_23458 != 0) {
    piVar32 = (int *)(lStack_23458 + 0x14);
    do {
      iVar23 = *piVar32;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar32,0x10);
      if (bVar5) {
        *piVar32 = iVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar23 + -1 == 0) {
      ppuVar12 = (undefined **)&uStack_23490;
      func_0x000109a848d4();
    }
  }
  lStack_23458 = 0;
  uStack_23478 = 0;
  uStack_23480 = 0;
  uStack_23468 = 0;
  uStack_23470 = 0;
  if (0 < uStack_23490._4_4_) {
    lVar21 = 0;
    do {
      *(undefined4 *)(lStack_23450 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < uStack_23490._4_4_);
  }
  if (puStack_23448 != auStack_23440 && puStack_23448 != (undefined1 *)0x0) {
    ppuVar12 = *(undefined ***)(puStack_23448 + -8);
    _free();
  }
  if (iVar39 < iVar36) {
    iVar23 = (int)SQRT(fVar52);
    uVar37 = iVar41 + iVar40;
    uVar6 = (int)uVar26 - 1;
    lVar21 = (long)iVar39;
    ppuVar13 = apuStack_2420;
    do {
      iVar39 = (int)lVar21;
      uVar17 = uVar6;
      if ((int)uVar26 < 1) {
        param_5 = 0;
      }
      else {
        uVar29 = 0;
        param_5 = 0;
        do {
          iVar40 = *(int *)((long)ppuVar13 + uVar29 * 4) - iVar39;
          bVar5 = iVar23 < iVar40;
          bVar7 = iVar40 < -iVar23;
          ppuVar12 = (undefined **)(ulong)(bVar5 || bVar7);
          uVar28 = (uint)uVar29;
          uVar3 = uVar28;
          if ((int)uVar17 <= (int)uVar28) {
            uVar3 = uVar17;
          }
          piVar14 = (int *)(ulong)uVar3;
          uVar16 = (uint)param_5;
          uVar1 = uVar16;
          if ((int)uVar16 <= (int)uVar28) {
            uVar1 = uVar28;
          }
          piVar15 = (int *)(ulong)uVar1;
          if (!bVar5 && !bVar7) {
            uVar16 = uVar1;
          }
          param_5 = (ulong)uVar16;
          if (!bVar5 && !bVar7) {
            uVar17 = uVar3;
          }
          uVar29 = uVar29 + 1;
        } while ((uVar26 & 0x7fffffff) != uVar29);
      }
      uVar29 = (ulong)*(int *)(ppuVar11 + 6);
      if (*(int *)(ppuVar11 + 6) < (int)uVar37) {
        plVar30 = *(long **)(ppuVar11[1] + 0x48);
        puVar18 = (undefined8 *)
                  (*(long *)(ppuVar11[1] + 0x10) + *plVar30 * lVar21 + plVar30[1] * uVar29);
        plVar30 = *(long **)(ppuVar11[2] + 0x48);
        fVar43 = (float)iVar39;
        puVar31 = (undefined1 *)
                  (*(long *)(ppuVar11[2] + 0x10) + *plVar30 * lVar21 + plVar30[1] * uVar29);
        fVar45 = fVar43 * fVar43;
        fVar48 = fVar45 * fVar43;
        piVar15 = (int *)((long)ppuVar13 + (long)(int)uVar17 * 4);
        piVar14 = aiStack_1420 + (int)uVar17;
        ppuVar12 = (undefined **)(ulong)(((int)param_5 - uVar17) + 1);
        do {
          iVar40 = (int)uVar29;
          if ((int)param_5 < (int)uVar17) {
            uVar50 = 0;
            fVar53 = 0.0;
          }
          else {
            fVar35 = (float)iVar40;
            fVar49 = fVar35 * fVar35;
            fVar54 = fVar49 * fVar35;
            uVar50 = 0;
            fVar53 = 0.0;
            pfVar25 = afStack_3420 + (int)uVar17;
            piVar32 = piVar15;
            piVar33 = piVar14;
            ppuVar20 = ppuVar12;
            puVar34 = (undefined8 *)((long)auStack_23420 + (long)(int)(uVar17 << 4) * 4 + 0x20);
            pfVar27 = afStack_13400 + (int)(uVar17 << 4);
            do {
              uVar3 = (*piVar33 - iVar40) * (*piVar33 - iVar40) +
                      (*piVar32 - iVar39) * (*piVar32 - iVar39);
              if ((int)uVar3 <= (int)fVar52) {
                fVar55 = (float)uVar3 * 0.00639375;
                if ((int)fVar55 < 0x3ff) {
                  fVar55 = (fVar55 - (float)(int)fVar55) *
                           *(float *)(puVar24 + (long)(int)fVar55 * 4 + lVar19) +
                           *(float *)(puVar24 + (long)(int)fVar55 * 4 + lVar19) *
                           (1.0 - (fVar55 - (float)(int)fVar55));
                }
                else {
                  fVar55 = *(float *)(puVar24 + lVar19 + 0xffc);
                }
                fVar55 = *pfVar25 * fVar55;
                fVar53 = fVar53 + fVar55;
                auVar42._0_4_ =
                     pfVar27[-8] * fVar49 * fVar49 + 0.0 +
                     (float)*(undefined8 *)(pfVar27 + -4) * fVar45 * fVar45 + *pfVar27 * fVar48 +
                     (float)*(undefined8 *)(pfVar27 + 4) * fVar35;
                auVar42._4_4_ =
                     pfVar27[-7] * fVar43 * fVar54 + 0.0 +
                     (float)((ulong)*(undefined8 *)(pfVar27 + -4) >> 0x20) * fVar54 +
                     pfVar27[1] * fVar49 +
                     (float)((ulong)*(undefined8 *)(pfVar27 + 4) >> 0x20) * fVar43;
                auVar42._8_4_ =
                     pfVar27[-6] * fVar45 * fVar49 + 0.0 +
                     (float)*(undefined8 *)(pfVar27 + -2) * fVar45 * fVar35 +
                     pfVar27[2] * fVar43 * fVar35 + (float)*(undefined8 *)(pfVar27 + 6) * 1.0;
                auVar42._12_4_ =
                     pfVar27[-5] * fVar48 * fVar35 + 0.0 +
                     (float)((ulong)*(undefined8 *)(pfVar27 + -2) >> 0x20) * fVar49 * fVar43 +
                     pfVar27[3] * fVar45 +
                     (float)((ulong)*(undefined8 *)(pfVar27 + 6) >> 0x20) * 0.0;
                auVar56._0_4_ =
                     (float)puVar34[-4] * fVar49 * fVar49 + 0.0 +
                     (float)puVar34[-2] * fVar45 * fVar45 + (float)*puVar34 * fVar48 +
                     (float)puVar34[2] * fVar35;
                auVar56._4_4_ =
                     (float)((ulong)puVar34[-4] >> 0x20) * fVar43 * fVar54 + 0.0 +
                     (float)((ulong)puVar34[-2] >> 0x20) * fVar54 +
                     (float)((ulong)*puVar34 >> 0x20) * fVar49 +
                     (float)((ulong)puVar34[2] >> 0x20) * fVar43;
                auVar56._8_4_ =
                     (float)puVar34[-3] * fVar45 * fVar49 + 0.0 +
                     (float)puVar34[-1] * fVar45 * fVar35 + (float)puVar34[1] * fVar43 * fVar35 +
                     (float)puVar34[3] * 1.0;
                auVar56._12_4_ =
                     (float)((ulong)puVar34[-3] >> 0x20) * fVar48 * fVar35 + 0.0 +
                     (float)((ulong)puVar34[-1] >> 0x20) * fVar49 * fVar43 +
                     (float)((ulong)puVar34[1] >> 0x20) * fVar45 +
                     (float)((ulong)puVar34[3] >> 0x20) * 0.0;
                auVar57 = NEON_ext(auVar56,auVar56,8,1);
                auVar38 = NEON_ext(auVar42,auVar42,8,1);
                uVar50 = CONCAT44((float)((ulong)uVar50 >> 0x20) +
                                  (auVar56._0_4_ + auVar56._4_4_ + auVar57._0_4_ + auVar57._4_4_) *
                                  fVar55,(float)uVar50 +
                                         (auVar42._0_4_ + auVar42._4_4_ +
                                         auVar38._0_4_ + auVar38._4_4_) * fVar55);
              }
              pfVar25 = pfVar25 + 1;
              pfVar27 = pfVar27 + 0x10;
              puVar34 = puVar34 + 8;
              uVar3 = (int)ppuVar20 - 1;
              ppuVar20 = (undefined **)(ulong)uVar3;
              piVar32 = piVar32 + 1;
              piVar33 = piVar33 + 1;
            } while (uVar3 != 0);
          }
          if ((((fVar51 <= fVar53) && (fVar35 = (float)uVar50, 0.0 <= fVar35)) && (fVar35 <= fVar53)
              ) && ((fVar49 = (float)((ulong)uVar50 >> 0x20), 0.0 <= fVar49 && (fVar49 <= fVar53))))
          {
            *puVar18 = CONCAT44(fVar49 / fVar53,fVar35 / fVar53);
            *puVar31 = 0;
          }
          uVar29 = (ulong)(iVar40 + 1U);
          puVar18 = puVar18 + 1;
          puVar31 = puVar31 + 1;
        } while (iVar40 + 1U != uVar37);
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != iVar36);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_420) {
    return ppuVar12;
  }
  ___stack_chk_fail();
  if ((int)ppuVar13 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_23490);
  }
  __Unwind_Resume();
  lStack_23598 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = (undefined **)&uStack_23690;
  FUN_1095c2144(ppuVar11,ppuVar12,0);
  puVar24 = (undefined *)uStack_23688;
  if (-1 < (long)uStack_23680) {
    puVar24 = (undefined *)((ulong)uStack_23680 >> 0x38);
  }
  if (puVar24 == (undefined *)0x0) {
    ppuVar20 = (undefined **)0x0;
  }
  else {
    ppuVar11 = uStack_23690;
    if (-1 < (long)uStack_23680) {
      ppuVar11 = (undefined **)&uStack_23690;
    }
    _stat(ppuVar11,auStack_23628);
    ppuVar20 = (undefined **)0x0;
    if (((int)ppuVar11 != -1) && ((short)uStack_23624 < 0)) {
      ppuVar11 = ppuVar13;
      FUN_1095c263c(ppuVar13,&uStack_23690);
      ppuVar20 = ppuVar11;
    }
  }
  if ((long)uStack_23680 < 0) {
    ppuVar11 = uStack_23690;
    __ZdlPv(uStack_23690);
  }
  if (((ulong)ppuVar20 & 1) == 0) {
    if ((*(byte *)((long)ppuVar12 + 0x248c) & 1) == 0) {
      lVar19 = 0;
      fVar52 = *(float *)((long)ppuVar12 + 0x644);
      fVar51 = *(float *)(ppuVar12 + 0xc9);
      iVar36 = 0;
      iVar39 = 1;
      iVar40 = 2;
      iVar41 = 3;
      auVar42 = NEON_fmov(0x3f800000,4);
      do {
        auVar38._4_4_ = iVar39;
        auVar38._0_4_ = iVar36;
        auVar38._8_4_ = iVar40;
        auVar38._12_4_ = iVar41;
        auVar38 = NEON_ucvtf(auVar38,4);
        fVar43 = (float)_expf();
        fVar45 = (float)_expf(CONCAT44((SQRT(auVar38._4_4_ / 0.00639375) - fVar52) / fVar51,
                                       (SQRT(auVar38._0_4_ / 0.00639375) - fVar52) / fVar51));
        fVar48 = (float)_expf();
        fVar35 = (float)_expf();
        fStack_23730 = auVar42._0_4_;
        fStack_2372c = auVar42._4_4_;
        fStack_23728 = auVar42._8_4_;
        fStack_23724 = auVar42._12_4_;
        pfVar25 = (float *)((long)ppuVar12 + lVar19 + 0x2490);
        pfVar25[2] = fStack_23728 / (fVar48 + fStack_23728);
        pfVar25[3] = fStack_23724 / (fVar35 + fStack_23724);
        *pfVar25 = fStack_23730 / (fVar45 + fStack_23730);
        pfVar25[1] = fStack_2372c / (fVar43 + fStack_2372c);
        iVar36 = iVar36 + 4;
        iVar39 = iVar39 + 4;
        iVar40 = iVar40 + 4;
        iVar41 = iVar41 + 4;
        lVar19 = lVar19 + 0x10;
      } while (lVar19 != 0x1000);
      *(undefined1 *)((long)ppuVar12 + 0x248c) = 1;
    }
    fVar52 = *(float *)(ppuVar12 + 0x25);
    fVar51 = *(float *)(ppuVar12 + 0x7d);
    fVar43 = *(float *)((long)ppuVar12 + 0x54) / *(float *)(ppuVar12 + 10);
    uVar37 = FUN_1095c1ab0(*(undefined8 *)piVar14,*(undefined8 *)(piVar14 + 2));
    lVar19 = 0x58;
    if (*(char *)(ppuVar12 + 0x200) == '\0') {
      lVar19 = 0x50;
    }
    fVar45 = *(float *)((long)ppuVar12 + lVar19);
    fVar48 = fVar43 * fVar45;
    if ((*(float *)((long)ppuVar12 + 4) == 1315.0) && (fVar45 != fVar48)) goto LAB_1095c04bc;
    FUN_1095c1b68(&iStack_236a0,ppuVar12,piVar15);
    iVar39 = (int)(fVar52 * fVar51);
    iVar36 = (int)(fVar43 * (float)(int)(fVar52 * fVar51));
    ppuVar11 = ppuVar13 + 0x11;
    if (((2 < *(int *)((long)ppuVar13 + 0x8c)) ||
        (((*(int *)(ppuVar13 + 0x12) != iVar39 || (*(int *)((long)ppuVar13 + 0x94) != iVar36)) ||
         (((ulong)ppuVar13[0x11] & 0xfff) != 0xd)))) || (ppuVar13[0x13] == (undefined *)0x0)) {
      uStack_23624 = CONCAT44(uStack_23624._4_4_,iVar36);
      auStack_23628 = (undefined1  [4])iVar39;
      FUN_109a83fd0(ppuVar11,2,auStack_23628,0xd);
    }
    auStack_23628 = (undefined1  [4])0x42ff0000;
    uStack_2361c = 0;
    uStack_23618 = 0;
    uStack_23624 = 0;
    lStack_235e8 = (long)&uStack_23624 + 4;
    uStack_2360c = 0;
    uStack_23608 = 0;
    uStack_23614 = 0;
    uStack_23610 = 0;
    uStack_235fc = 0;
    uStack_23604 = 0;
    uStack_23600 = 0;
    lStack_235f0 = 0;
    uStack_235f8 = 0;
    uStack_235f4 = 0;
    uStack_235d8 = 0;
    uStack_235d0 = 0;
    puVar31 = auStack_23628;
    puStack_235e0 = &uStack_235d8;
    uStack_23690._0_4_ = iVar39;
    uStack_23690._4_4_ = iVar36;
    FUN_109a83fd0(puVar31,2,&uStack_23690,0);
    dStack_236c0 = 255.0;
    uStack_23690 = (undefined **)CONCAT44(uStack_23690._4_4_,0xc1020006);
    uStack_23688 = (undefined **)&dStack_236c0;
    uStack_23680 = (undefined **)0x100000001;
    FUN_109a91d90();
    FUN_109a48a40(auStack_23628,&uStack_23690,puVar31);
    uStack_23690 = &PTR_FUN_110afe908;
    uStack_23668._0_5_ = (uint5)uVar37;
    iStack_23660 = iStack_236a0;
    iStack_2365c = iStack_2369c;
    uStack_23658 = (undefined *)CONCAT44(iStack_23694,iStack_23698);
    iStack_2364c = (int)((double)iStack_23694 / (double)(int)uRam00000001132dfb70);
    uStack_23650 = uRam00000001132dfb70;
    dStack_236c0 = (double)((ulong)uRam00000001132dfb70 << 0x20);
    uStack_23688 = ppuVar11;
    uStack_23680 = (undefined **)auStack_23628;
    ppuStack_23678 = ppuVar12;
    uStack_23670 = piVar14;
    func_0x000109aa87cc(0xbff0000000000000,&dStack_236c0,&uStack_23690);
    iVar40 = iStack_236a0;
    if (iStack_236a0 < 0xb) {
      iVar40 = 10;
    }
    iVar40 = iVar40 + -10;
    iVar41 = iStack_2369c;
    if (iStack_2369c < 0xb) {
      iVar41 = 10;
    }
    iVar41 = iVar41 + -10;
    iVar23 = iStack_236a0 + iStack_23698 + 10;
    if (iVar23 <= iVar36) {
      iVar36 = iVar23;
    }
    iVar36 = iVar36 - iVar40;
    iVar23 = iStack_2369c + iStack_23694 + 10;
    if (iVar23 <= iVar39) {
      iVar39 = iVar23;
    }
    uVar37 = iVar39 - iVar41;
    if (iVar36 < 1 || (int)uVar37 < 1) {
      uVar37 = 0;
      iVar36 = 0;
      iVar41 = 0;
      iVar40 = 0;
    }
    uStack_23690 = &PTR_DAT_110afe8e0;
    ppuStack_23678 = (undefined **)auStack_23628;
    uStack_23670 = (int *)CONCAT44(iVar41,iVar40);
    uStack_23668 = (undefined *)CONCAT44(uVar37,iVar36);
    uStack_23688 = (undefined **)
                   CONCAT44((int)((double)uVar37 / (double)(int)uRam00000001132dfb70),
                            uRam00000001132dfb70);
    dStack_236c0 = (double)((ulong)uRam00000001132dfb70 << 0x20);
    uStack_23680 = ppuVar11;
    func_0x000109aa87cc(0xbff0000000000000,&dStack_236c0,&uStack_23690);
    FUN_109a852c8(&uStack_23690,auStack_23628,&iStack_236a0);
    if (ppuVar13[0x24] != (undefined *)0x0) {
      piVar14 = (int *)(ppuVar13[0x24] + 0x14);
      do {
        iVar36 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar36 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 + -1 == 0) {
        func_0x000109a848d4(ppuVar13 + 0x1d);
      }
    }
    ppuVar13[0x20] = (undefined *)0x0;
    ppuVar13[0x1f] = (undefined *)0x0;
    ppuVar13[0x24] = (undefined *)0x0;
    ppuVar13[0x22] = (undefined *)0x0;
    ppuVar13[0x21] = (undefined *)0x0;
    if (0 < *(int *)((long)ppuVar13 + 0xec)) {
      lVar19 = 0;
      puVar24 = ppuVar13[0x25];
      do {
        *(undefined4 *)(puVar24 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)ppuVar13 + 0xec));
    }
    ppuVar13[0x1e] = (undefined *)uStack_23688;
    ppuVar13[0x1d] = (undefined *)uStack_23690;
    ppuVar13[0x20] = (undefined *)ppuStack_23678;
    ppuVar13[0x1f] = (undefined *)uStack_23680;
    ppuVar13[0x22] = uStack_23668;
    ppuVar13[0x21] = (undefined *)uStack_23670;
    ppuVar13[0x24] = uStack_23658;
    ppuVar13[0x23] = (undefined *)CONCAT44(iStack_2365c,iStack_23660);
    ppuVar22 = (undefined **)ppuVar13[0x26];
    ppuVar20 = ppuVar13 + 0x27;
    iVar36 = uStack_23690._4_4_;
    if (ppuVar22 != ppuVar20) {
      if (ppuVar22 != (undefined **)0x0) {
        _free(ppuVar22[-1]);
      }
      ppuVar13[0x25] = (undefined *)(ppuVar13 + 0x1e);
      ppuVar13[0x26] = (undefined *)ppuVar20;
      ppuVar22 = ppuVar20;
      iVar36 = uStack_23690._4_4_;
    }
    if (iVar36 < 3) {
      puVar18 = (undefined8 *)((ulong)&uStack_23690 | 4);
      *ppuVar22 = (undefined *)*puStack_23648;
      ppuVar22[1] = (undefined *)puStack_23648[1];
      uStack_23690 = (undefined **)CONCAT44(uStack_23690._4_4_,0x42ff0000);
      puVar18[1] = 0;
      *puVar18 = 0;
      puVar18[3] = 0;
      puVar18[2] = 0;
      puVar18[5] = 0;
      puVar18[4] = 0;
      *(undefined8 *)((long)puVar18 + 0x34) = 0;
      *(undefined8 *)((long)puVar18 + 0x2c) = 0;
      if (puStack_23648 != auStack_23640) {
        _free(puStack_23648[-1]);
      }
    }
    else {
      ppuVar13[0x25] = (undefined *)CONCAT44(iStack_2364c,uStack_23650);
      ppuVar13[0x26] = (undefined *)puStack_23648;
    }
    FUN_109a852c8(&uStack_23690,ppuVar11,&iStack_236a0);
    dStack_236c0 = (double)fVar48;
    dStack_236b8 = (double)fVar45;
    uStack_236b0 = 0;
    uStack_236a8 = 0;
    FUN_1095c1c44(&uStack_23690,&dStack_236c0,ppuVar13);
    if (uStack_23658 != (undefined *)0x0) {
      piVar14 = (int *)(uStack_23658 + 0x14);
      do {
        iVar36 = *piVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar36 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 + -1 == 0) {
        func_0x000109a848d4(&uStack_23690);
      }
    }
    uStack_23658 = (undefined *)0x0;
    ppuStack_23678 = (undefined **)0x0;
    uStack_23680 = (undefined **)0x0;
    uStack_23668 = (undefined *)0x0;
    uStack_23670 = (int *)0x0;
    if (0 < uStack_23690._4_4_) {
      lVar19 = 0;
      do {
        *(undefined4 *)(CONCAT44(iStack_2364c,uStack_23650) + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < uStack_23690._4_4_);
    }
    if (puStack_23648 != auStack_23640 && puStack_23648 != (undefined8 *)0x0) {
      _free(puStack_23648[-1]);
    }
    ppuVar13[0xc] = (undefined *)CONCAT44((int)fVar45,(int)fVar48);
    ppuVar11 = (undefined **)&uStack_23690;
    FUN_1095c2144(ppuVar11,ppuVar12,0,(ulong)piVar15 & 0xffffffff,param_5);
    uVar37 = (uint)(char)uStack_23680._7_1_;
    puVar24 = (undefined *)uStack_23688;
    if (-1 < (int)uVar37) {
      puVar24 = (undefined *)(ulong)uStack_23680._7_1_;
    }
    if (puVar24 != (undefined *)0x0) {
      FUN_1095c2a50(ppuVar13,&uStack_23690);
      uVar37 = (uint)uStack_23680._7_1_;
      ppuVar11 = ppuVar13;
    }
    if ((uVar37 >> 7 & 1) != 0) {
      ppuVar11 = uStack_23690;
      __ZdlPv(uStack_23690);
    }
    if (lStack_235f0 != 0) {
      piVar15 = (int *)(lStack_235f0 + 0x14);
      do {
        iVar36 = *piVar15;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar5) {
          *piVar15 = iVar36 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar36 + -1 == 0) {
        ppuVar11 = (undefined **)auStack_23628;
        func_0x000109a848d4(ppuVar11);
      }
    }
    lStack_235f0 = 0;
    uStack_23610 = 0;
    uStack_2360c = 0;
    uStack_23618 = 0;
    uStack_23614 = 0;
    uStack_23600 = 0;
    uStack_235fc = 0;
    uStack_23608 = 0;
    uStack_23604 = 0;
    if (0 < (int)uStack_23624) {
      lVar19 = 0;
      do {
        *(undefined4 *)(lStack_235e8 + lVar19 * 4) = 0;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)uStack_23624);
    }
    if (puStack_235e0 != &uStack_235d8 && puStack_235e0 != (undefined8 *)0x0) {
      ppuVar11 = (undefined **)puStack_235e0[-1];
      _free(ppuVar11);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_23598) {
    return ppuVar11;
  }
  ___stack_chk_fail();
LAB_1095c04bc:
  lVar19 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar24 = PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(lVar19,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  if ((int)puVar24 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_23690);
    func_0x00010567aa40(auStack_23628);
  }
  __Unwind_Resume();
  fVar52 = *(float *)(lVar19 + 0x10);
  if (3.1 <= fVar52) {
    FUN_1095c0604();
    FUN_1095c0604(lVar19,lVar19 + 0x13c0,lVar19 + 0x1050,0,puVar24);
  }
  return (undefined **)(ulong)(3.1 <= fVar52);
}



/* Entry: 1095bf6f0; end: 1095bfd87;  */

undefined ** FUN_1095bf6f0(long param_1,int *param_2,undefined8 param_3,int *param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined **ppuVar19;
  int iVar20;
  float *pfVar21;
  ulong uVar22;
  float *pfVar23;
  undefined *puVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  long *plVar28;
  undefined1 *puVar29;
  int *piVar30;
  undefined **ppuVar31;
  int *piVar32;
  undefined8 *puVar33;
  float fVar34;
  int iVar35;
  uint uVar36;
  int iVar38;
  int iVar39;
  undefined1 auVar37 [16];
  int iVar40;
  undefined1 auVar41 [16];
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fStack_23390;
  float fStack_2338c;
  float fStack_23388;
  float fStack_23384;
  double dStack_23320;
  double dStack_23318;
  undefined8 uStack_23310;
  undefined8 uStack_23308;
  int iStack_23300;
  int iStack_232fc;
  int iStack_232f8;
  int iStack_232f4;
  undefined8 uStack_232f0;
  undefined8 uStack_232e8;
  undefined8 uStack_232e0;
  undefined **ppuStack_232d8;
  undefined8 uStack_232d0;
  undefined8 uStack_232c8;
  int iStack_232c0;
  int iStack_232bc;
  undefined8 uStack_232b8;
  uint uStack_232b0;
  int iStack_232ac;
  undefined8 *puStack_232a8;
  undefined8 auStack_232a0 [3];
  undefined1 auStack_23288 [4];
  undefined8 uStack_23284;
  undefined4 uStack_2327c;
  undefined4 uStack_23278;
  undefined4 uStack_23274;
  undefined4 uStack_23270;
  undefined4 uStack_2326c;
  undefined4 uStack_23268;
  undefined4 uStack_23264;
  undefined4 uStack_23260;
  undefined4 uStack_2325c;
  undefined4 uStack_23258;
  undefined4 uStack_23254;
  long lStack_23250;
  long lStack_23248;
  undefined8 *puStack_23240;
  undefined8 uStack_23238;
  undefined8 uStack_23230;
  long lStack_231f8;
  undefined *puStack_23130;
  undefined8 *puStack_23128;
  undefined8 uStack_23120;
  undefined8 uStack_23118;
  undefined8 uStack_23108;
  undefined **ppuStack_23100;
  undefined8 uStack_230f8;
  undefined8 uStack_230f0;
  undefined8 uStack_230e0;
  undefined8 uStack_230d8;
  undefined8 uStack_230d0;
  undefined8 uStack_230c8;
  long lStack_230b8;
  long lStack_230b0;
  undefined1 *puStack_230a8;
  undefined1 auStack_230a0 [16];
  int iStack_23090;
  int iStack_2308c;
  int iStack_23088;
  int iStack_23084;
  undefined8 auStack_23080 [8192];
  undefined8 auStack_13080 [4];
  float afStack_13060 [2];
  undefined8 auStack_13058 [8187];
  float afStack_3080 [1024];
  undefined *apuStack_2080 [512];
  int aiStack_1080 [1024];
  long lStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar40 = *(int *)(param_1 + 0x44) * *param_2;
  iVar39 = *(int *)(param_1 + 0x34);
  iVar35 = *(int *)(param_1 + 0x3c) + iVar39;
  iVar38 = iVar35;
  if (iVar40 <= *(int *)(param_1 + 0x3c)) {
    iVar38 = iVar40 + iVar39;
  }
  if (iVar38 <= iVar39) {
    iVar38 = iVar39;
  }
  iVar39 = iVar39 + param_2[1] * *(int *)(param_1 + 0x44);
  if (iVar39 <= iVar35) {
    iVar35 = iVar39;
  }
  cVar3 = *(char *)(param_1 + 0x2c);
  lVar25 = 0x148c;
  if (cVar3 == '\0') {
    lVar25 = 0x2490;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  pfVar21 = (float *)**(long **)(param_1 + 0x20);
  lVar18 = (*(long **)(param_1 + 0x20))[1] - (long)pfVar21;
  uVar22 = (lVar18 >> 4) * -0x71c71c71c71c71c7;
  if (lVar18 != 0) {
    uVar36 = 0;
    pfVar23 = afStack_3080;
    ppuVar11 = apuStack_2080;
    piVar14 = aiStack_1080;
    uVar27 = uVar22;
    do {
      *piVar14 = (int)*(short *)((long)pfVar21 + 6);
      *(int *)ppuVar11 = (int)*(short *)(pfVar21 + 2);
      *pfVar23 = *pfVar21;
      lVar18 = (long)((ulong)uVar36 << 0x20) >> 0x1e;
      uVar49 = *(undefined8 *)(pfVar21 + 4);
      uVar8 = *(undefined8 *)(pfVar21 + 8);
      uVar9 = *(undefined8 *)(pfVar21 + 10);
      *(undefined8 *)((long)auStack_13080 + lVar18 + 8) = *(undefined8 *)(pfVar21 + 6);
      *(undefined8 *)((long)auStack_13080 + lVar18) = uVar49;
      *(undefined8 *)((long)auStack_13080 + lVar18 + 0x18) = uVar9;
      *(undefined8 *)((long)auStack_13080 + lVar18 + 0x10) = uVar8;
      uVar49 = *(undefined8 *)(pfVar21 + 0xc);
      uVar8 = *(undefined8 *)(pfVar21 + 0x10);
      uVar9 = *(undefined8 *)(pfVar21 + 0x12);
      *(undefined8 *)((long)auStack_13058 + lVar18) = *(undefined8 *)(pfVar21 + 0xe);
      *(undefined8 *)((long)afStack_13060 + lVar18) = uVar49;
      *(undefined8 *)((long)auStack_13058 + lVar18 + 0x10) = uVar9;
      *(undefined8 *)((long)auStack_13058 + lVar18 + 8) = uVar8;
      uVar49 = *(undefined8 *)(pfVar21 + 0x14);
      uVar8 = *(undefined8 *)(pfVar21 + 0x16);
      uVar9 = *(undefined8 *)(pfVar21 + 0x18);
      uVar10 = *(undefined8 *)(pfVar21 + 0x1a);
      uVar43 = *(undefined8 *)(pfVar21 + 0x1c);
      uVar46 = *(undefined8 *)(pfVar21 + 0x22);
      uVar45 = *(undefined8 *)(pfVar21 + 0x20);
      *(undefined8 *)((long)auStack_23080 + lVar18 + 0x28) = *(undefined8 *)(pfVar21 + 0x1e);
      *(undefined8 *)((long)auStack_23080 + lVar18 + 0x20) = uVar43;
      *(undefined8 *)((long)auStack_23080 + lVar18 + 0x38) = uVar46;
      *(undefined8 *)((long)auStack_23080 + lVar18 + 0x30) = uVar45;
      uVar36 = uVar36 + 0x10;
      pfVar21 = pfVar21 + 0x24;
      *(undefined8 *)((long)auStack_23080 + lVar18 + 8) = uVar8;
      *(undefined8 *)((long)auStack_23080 + lVar18) = uVar49;
      *(undefined8 *)((long)auStack_23080 + lVar18 + 0x18) = uVar10;
      *(undefined8 *)((long)auStack_23080 + lVar18 + 0x10) = uVar9;
      uVar27 = uVar27 - 1;
      pfVar23 = pfVar23 + 1;
      ppuVar11 = (undefined **)((long)ppuVar11 + 4);
      piVar14 = piVar14 + 1;
    } while (uVar27 != 0);
  }
  fVar51 = *(float *)(param_1 + 0x28);
  iVar39 = *(int *)(param_1 + 0x30);
  iVar40 = *(int *)(param_1 + 0x38);
  lVar18 = 0x688;
  if (cVar3 == '\0') {
    lVar18 = 0x660;
  }
  fVar50 = *(float *)(lVar2 + lVar18);
  iStack_23084 = iVar35 - iVar38;
  puVar17 = &uStack_230f0;
  iStack_23090 = iVar39;
  iStack_2308c = iVar38;
  iStack_23088 = iVar40;
  FUN_109a852c8(puVar17,*(undefined8 *)(param_1 + 8),&iStack_23090);
  puStack_23128 = (undefined8 *)0x0;
  puStack_23130 = (undefined *)0x0;
  uStack_23118 = 0;
  uStack_23120 = 0;
  uStack_23108 = CONCAT44(uStack_23108._4_4_,0xc1020006);
  ppuStack_23100 = &puStack_23130;
  uStack_230f8 = 0x400000001;
  FUN_109a91d90();
  FUN_109a48a40(&uStack_230f0,&uStack_23108,puVar17);
  if (lStack_230b8 != 0) {
    piVar14 = (int *)(lStack_230b8 + 0x14);
    do {
      iVar20 = *piVar14;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
      if (bVar5) {
        *piVar14 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 + -1 == 0) {
      func_0x000109a848d4(&uStack_230f0);
    }
  }
  lStack_230b8 = 0;
  uStack_230d8 = 0;
  uStack_230e0 = 0;
  uStack_230c8 = 0;
  uStack_230d0 = 0;
  if (0 < uStack_230f0._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_230b0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_230f0._4_4_);
  }
  if (puStack_230a8 != auStack_230a0 && puStack_230a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_230a8 + -8));
  }
  piVar14 = (int *)&uStack_230f0;
  FUN_109a852c8(piVar14,*(undefined8 *)(param_1 + 0x10),&iStack_23090);
  uStack_23108 = 0x406fe00000000000;
  puStack_23130 = (undefined *)CONCAT44(puStack_23130._4_4_,0xc1020006);
  puStack_23128 = &uStack_23108;
  uStack_23120 = 0x100000001;
  FUN_109a91d90();
  ppuVar11 = (undefined **)&uStack_230f0;
  ppuVar12 = &puStack_23130;
  FUN_109a48a40();
  if (lStack_230b8 != 0) {
    piVar30 = (int *)(lStack_230b8 + 0x14);
    do {
      iVar20 = *piVar30;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar30,0x10);
      if (bVar5) {
        *piVar30 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 + -1 == 0) {
      ppuVar11 = (undefined **)&uStack_230f0;
      func_0x000109a848d4();
    }
  }
  lStack_230b8 = 0;
  uStack_230d8 = 0;
  uStack_230e0 = 0;
  uStack_230c8 = 0;
  uStack_230d0 = 0;
  if (0 < uStack_230f0._4_4_) {
    lVar18 = 0;
    do {
      *(undefined4 *)(lStack_230b0 + lVar18 * 4) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < uStack_230f0._4_4_);
  }
  if (puStack_230a8 != auStack_230a0 && puStack_230a8 != (undefined1 *)0x0) {
    ppuVar11 = *(undefined ***)(puStack_230a8 + -8);
    _free();
  }
  if (iVar38 < iVar35) {
    lVar2 = lVar2 + lVar25;
    iVar20 = (int)SQRT(fVar51);
    uVar36 = iVar40 + iVar39;
    uVar6 = (int)uVar22 - 1;
    lVar25 = (long)iVar38;
    ppuVar12 = apuStack_2080;
    do {
      iVar38 = (int)lVar25;
      uVar16 = uVar6;
      if ((int)uVar22 < 1) {
        param_5 = 0;
      }
      else {
        uVar27 = 0;
        param_5 = 0;
        do {
          iVar39 = *(int *)((long)ppuVar12 + uVar27 * 4) - iVar38;
          bVar5 = iVar20 < iVar39;
          bVar7 = iVar39 < -iVar20;
          ppuVar11 = (undefined **)(ulong)(bVar5 || bVar7);
          uVar26 = (uint)uVar27;
          uVar4 = uVar26;
          if ((int)uVar16 <= (int)uVar26) {
            uVar4 = uVar16;
          }
          piVar14 = (int *)(ulong)uVar4;
          uVar15 = (uint)param_5;
          uVar1 = uVar15;
          if ((int)uVar15 <= (int)uVar26) {
            uVar1 = uVar26;
          }
          param_4 = (int *)(ulong)uVar1;
          if (!bVar5 && !bVar7) {
            uVar15 = uVar1;
          }
          param_5 = (ulong)uVar15;
          if (!bVar5 && !bVar7) {
            uVar16 = uVar4;
          }
          uVar27 = uVar27 + 1;
        } while ((uVar22 & 0x7fffffff) != uVar27);
      }
      uVar27 = (ulong)*(int *)(param_1 + 0x30);
      if (*(int *)(param_1 + 0x30) < (int)uVar36) {
        plVar28 = *(long **)(*(long *)(param_1 + 8) + 0x48);
        puVar17 = (undefined8 *)
                  (*(long *)(*(long *)(param_1 + 8) + 0x10) + *plVar28 * lVar25 +
                  plVar28[1] * uVar27);
        plVar28 = *(long **)(*(long *)(param_1 + 0x10) + 0x48);
        fVar42 = (float)iVar38;
        puVar29 = (undefined1 *)
                  (*(long *)(*(long *)(param_1 + 0x10) + 0x10) + *plVar28 * lVar25 +
                  plVar28[1] * uVar27);
        fVar44 = fVar42 * fVar42;
        fVar47 = fVar44 * fVar42;
        param_4 = (int *)((long)ppuVar12 + (long)(int)uVar16 * 4);
        piVar14 = aiStack_1080 + (int)uVar16;
        ppuVar11 = (undefined **)(ulong)(((int)param_5 - uVar16) + 1);
        do {
          iVar39 = (int)uVar27;
          if ((int)param_5 < (int)uVar16) {
            uVar49 = 0;
            fVar52 = 0.0;
          }
          else {
            fVar34 = (float)iVar39;
            fVar48 = fVar34 * fVar34;
            fVar53 = fVar48 * fVar34;
            uVar49 = 0;
            fVar52 = 0.0;
            pfVar21 = afStack_3080 + (int)uVar16;
            piVar30 = param_4;
            piVar32 = piVar14;
            ppuVar13 = ppuVar11;
            puVar33 = (undefined8 *)((long)auStack_23080 + (long)(int)(uVar16 << 4) * 4 + 0x20);
            pfVar23 = afStack_13060 + (int)(uVar16 << 4);
            do {
              uVar4 = (*piVar32 - iVar39) * (*piVar32 - iVar39) +
                      (*piVar30 - iVar38) * (*piVar30 - iVar38);
              if ((int)uVar4 <= (int)fVar51) {
                fVar54 = (float)uVar4 * 0.00639375;
                if ((int)fVar54 < 0x3ff) {
                  fVar54 = (fVar54 - (float)(int)fVar54) * *(float *)(lVar2 + (long)(int)fVar54 * 4)
                           + *(float *)(lVar2 + (long)(int)fVar54 * 4) *
                             (1.0 - (fVar54 - (float)(int)fVar54));
                }
                else {
                  fVar54 = *(float *)(lVar2 + 0xffc);
                }
                fVar54 = *pfVar21 * fVar54;
                fVar52 = fVar52 + fVar54;
                auVar41._0_4_ =
                     pfVar23[-8] * fVar48 * fVar48 + 0.0 +
                     (float)*(undefined8 *)(pfVar23 + -4) * fVar44 * fVar44 + *pfVar23 * fVar47 +
                     (float)*(undefined8 *)(pfVar23 + 4) * fVar34;
                auVar41._4_4_ =
                     pfVar23[-7] * fVar42 * fVar53 + 0.0 +
                     (float)((ulong)*(undefined8 *)(pfVar23 + -4) >> 0x20) * fVar53 +
                     pfVar23[1] * fVar48 +
                     (float)((ulong)*(undefined8 *)(pfVar23 + 4) >> 0x20) * fVar42;
                auVar41._8_4_ =
                     pfVar23[-6] * fVar44 * fVar48 + 0.0 +
                     (float)*(undefined8 *)(pfVar23 + -2) * fVar44 * fVar34 +
                     pfVar23[2] * fVar42 * fVar34 + (float)*(undefined8 *)(pfVar23 + 6) * 1.0;
                auVar41._12_4_ =
                     pfVar23[-5] * fVar47 * fVar34 + 0.0 +
                     (float)((ulong)*(undefined8 *)(pfVar23 + -2) >> 0x20) * fVar48 * fVar42 +
                     pfVar23[3] * fVar44 +
                     (float)((ulong)*(undefined8 *)(pfVar23 + 6) >> 0x20) * 0.0;
                auVar55._0_4_ =
                     (float)puVar33[-4] * fVar48 * fVar48 + 0.0 +
                     (float)puVar33[-2] * fVar44 * fVar44 + (float)*puVar33 * fVar47 +
                     (float)puVar33[2] * fVar34;
                auVar55._4_4_ =
                     (float)((ulong)puVar33[-4] >> 0x20) * fVar42 * fVar53 + 0.0 +
                     (float)((ulong)puVar33[-2] >> 0x20) * fVar53 +
                     (float)((ulong)*puVar33 >> 0x20) * fVar48 +
                     (float)((ulong)puVar33[2] >> 0x20) * fVar42;
                auVar55._8_4_ =
                     (float)puVar33[-3] * fVar44 * fVar48 + 0.0 +
                     (float)puVar33[-1] * fVar44 * fVar34 + (float)puVar33[1] * fVar42 * fVar34 +
                     (float)puVar33[3] * 1.0;
                auVar55._12_4_ =
                     (float)((ulong)puVar33[-3] >> 0x20) * fVar47 * fVar34 + 0.0 +
                     (float)((ulong)puVar33[-1] >> 0x20) * fVar48 * fVar42 +
                     (float)((ulong)puVar33[1] >> 0x20) * fVar44 +
                     (float)((ulong)puVar33[3] >> 0x20) * 0.0;
                auVar56 = NEON_ext(auVar55,auVar55,8,1);
                auVar37 = NEON_ext(auVar41,auVar41,8,1);
                uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) +
                                  (auVar55._0_4_ + auVar55._4_4_ + auVar56._0_4_ + auVar56._4_4_) *
                                  fVar54,(float)uVar49 +
                                         (auVar41._0_4_ + auVar41._4_4_ +
                                         auVar37._0_4_ + auVar37._4_4_) * fVar54);
              }
              pfVar21 = pfVar21 + 1;
              pfVar23 = pfVar23 + 0x10;
              puVar33 = puVar33 + 8;
              uVar4 = (int)ppuVar13 - 1;
              ppuVar13 = (undefined **)(ulong)uVar4;
              piVar30 = piVar30 + 1;
              piVar32 = piVar32 + 1;
            } while (uVar4 != 0);
          }
          if ((((fVar50 <= fVar52) && (fVar34 = (float)uVar49, 0.0 <= fVar34)) && (fVar34 <= fVar52)
              ) && ((fVar48 = (float)((ulong)uVar49 >> 0x20), 0.0 <= fVar48 && (fVar48 <= fVar52))))
          {
            *puVar17 = CONCAT44(fVar48 / fVar52,fVar34 / fVar52);
            *puVar29 = 0;
          }
          uVar27 = (ulong)(iVar39 + 1U);
          puVar17 = puVar17 + 1;
          puVar29 = puVar29 + 1;
        } while (iVar39 + 1U != uVar36);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 != iVar35);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar11;
  }
  ___stack_chk_fail();
  if ((int)ppuVar12 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_230f0);
  }
  __Unwind_Resume();
  lStack_231f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = (undefined **)&uStack_232f0;
  FUN_1095c2144(ppuVar13,ppuVar11,0);
  puVar24 = (undefined *)uStack_232e8;
  if (-1 < (long)uStack_232e0) {
    puVar24 = (undefined *)((ulong)uStack_232e0 >> 0x38);
  }
  if (puVar24 == (undefined *)0x0) {
    ppuVar31 = (undefined **)0x0;
  }
  else {
    ppuVar13 = uStack_232f0;
    if (-1 < (long)uStack_232e0) {
      ppuVar13 = (undefined **)&uStack_232f0;
    }
    _stat(ppuVar13,auStack_23288);
    ppuVar31 = (undefined **)0x0;
    if (((int)ppuVar13 != -1) && ((short)uStack_23284 < 0)) {
      ppuVar13 = ppuVar12;
      FUN_1095c263c(ppuVar12,&uStack_232f0);
      ppuVar31 = ppuVar13;
    }
  }
  if ((long)uStack_232e0 < 0) {
    ppuVar13 = uStack_232f0;
    __ZdlPv(uStack_232f0);
  }
  if (((ulong)ppuVar31 & 1) == 0) {
    if ((*(byte *)((long)ppuVar11 + 0x248c) & 1) == 0) {
      lVar25 = 0;
      fVar51 = *(float *)((long)ppuVar11 + 0x644);
      fVar50 = *(float *)(ppuVar11 + 0xc9);
      iVar35 = 0;
      iVar38 = 1;
      iVar39 = 2;
      iVar40 = 3;
      auVar41 = NEON_fmov(0x3f800000,4);
      do {
        auVar37._4_4_ = iVar38;
        auVar37._0_4_ = iVar35;
        auVar37._8_4_ = iVar39;
        auVar37._12_4_ = iVar40;
        auVar37 = NEON_ucvtf(auVar37,4);
        fVar42 = (float)_expf();
        fVar44 = (float)_expf(CONCAT44((SQRT(auVar37._4_4_ / 0.00639375) - fVar51) / fVar50,
                                       (SQRT(auVar37._0_4_ / 0.00639375) - fVar51) / fVar50));
        fVar47 = (float)_expf();
        fVar34 = (float)_expf();
        fStack_23390 = auVar41._0_4_;
        fStack_2338c = auVar41._4_4_;
        fStack_23388 = auVar41._8_4_;
        fStack_23384 = auVar41._12_4_;
        pfVar21 = (float *)((long)ppuVar11 + lVar25 + 0x2490);
        pfVar21[2] = fStack_23388 / (fVar47 + fStack_23388);
        pfVar21[3] = fStack_23384 / (fVar34 + fStack_23384);
        *pfVar21 = fStack_23390 / (fVar44 + fStack_23390);
        pfVar21[1] = fStack_2338c / (fVar42 + fStack_2338c);
        iVar35 = iVar35 + 4;
        iVar38 = iVar38 + 4;
        iVar39 = iVar39 + 4;
        iVar40 = iVar40 + 4;
        lVar25 = lVar25 + 0x10;
      } while (lVar25 != 0x1000);
      *(undefined1 *)((long)ppuVar11 + 0x248c) = 1;
    }
    fVar51 = *(float *)(ppuVar11 + 0x25);
    fVar50 = *(float *)(ppuVar11 + 0x7d);
    fVar42 = *(float *)((long)ppuVar11 + 0x54) / *(float *)(ppuVar11 + 10);
    uVar36 = FUN_1095c1ab0(*(undefined8 *)piVar14,*(undefined8 *)(piVar14 + 2));
    lVar25 = 0x58;
    if (*(char *)(ppuVar11 + 0x200) == '\0') {
      lVar25 = 0x50;
    }
    fVar44 = *(float *)((long)ppuVar11 + lVar25);
    fVar47 = fVar42 * fVar44;
    if ((*(float *)((long)ppuVar11 + 4) == 1315.0) && (fVar44 != fVar47)) goto LAB_1095c04bc;
    FUN_1095c1b68(&iStack_23300,ppuVar11,param_4);
    iVar38 = (int)(fVar51 * fVar50);
    iVar35 = (int)(fVar42 * (float)(int)(fVar51 * fVar50));
    ppuVar13 = ppuVar12 + 0x11;
    if (((2 < *(int *)((long)ppuVar12 + 0x8c)) ||
        (((*(int *)(ppuVar12 + 0x12) != iVar38 || (*(int *)((long)ppuVar12 + 0x94) != iVar35)) ||
         (((ulong)ppuVar12[0x11] & 0xfff) != 0xd)))) || (ppuVar12[0x13] == (undefined *)0x0)) {
      uStack_23284 = CONCAT44(uStack_23284._4_4_,iVar35);
      auStack_23288 = (undefined1  [4])iVar38;
      FUN_109a83fd0(ppuVar13,2,auStack_23288,0xd);
    }
    auStack_23288 = (undefined1  [4])0x42ff0000;
    uStack_2327c = 0;
    uStack_23278 = 0;
    uStack_23284 = 0;
    lStack_23248 = (long)&uStack_23284 + 4;
    uStack_2326c = 0;
    uStack_23268 = 0;
    uStack_23274 = 0;
    uStack_23270 = 0;
    uStack_2325c = 0;
    uStack_23264 = 0;
    uStack_23260 = 0;
    lStack_23250 = 0;
    uStack_23258 = 0;
    uStack_23254 = 0;
    uStack_23238 = 0;
    uStack_23230 = 0;
    puVar29 = auStack_23288;
    puStack_23240 = &uStack_23238;
    uStack_232f0._0_4_ = iVar38;
    uStack_232f0._4_4_ = iVar35;
    FUN_109a83fd0(puVar29,2,&uStack_232f0,0);
    dStack_23320 = 255.0;
    uStack_232f0 = (undefined **)CONCAT44(uStack_232f0._4_4_,0xc1020006);
    uStack_232e8 = (undefined **)&dStack_23320;
    uStack_232e0 = (undefined **)0x100000001;
    FUN_109a91d90();
    FUN_109a48a40(auStack_23288,&uStack_232f0,puVar29);
    uStack_232f0 = &PTR_FUN_110afe908;
    uStack_232c8._0_5_ = (uint5)uVar36;
    iStack_232c0 = iStack_23300;
    iStack_232bc = iStack_232fc;
    uStack_232b8 = (undefined *)CONCAT44(iStack_232f4,iStack_232f8);
    iStack_232ac = (int)((double)iStack_232f4 / (double)(int)uRam00000001132dfb70);
    uStack_232b0 = uRam00000001132dfb70;
    dStack_23320 = (double)((ulong)uRam00000001132dfb70 << 0x20);
    uStack_232e8 = ppuVar13;
    uStack_232e0 = (undefined **)auStack_23288;
    ppuStack_232d8 = ppuVar11;
    uStack_232d0 = piVar14;
    func_0x000109aa87cc(0xbff0000000000000,&dStack_23320,&uStack_232f0);
    iVar39 = iStack_23300;
    if (iStack_23300 < 0xb) {
      iVar39 = 10;
    }
    iVar39 = iVar39 + -10;
    iVar40 = iStack_232fc;
    if (iStack_232fc < 0xb) {
      iVar40 = 10;
    }
    iVar40 = iVar40 + -10;
    iVar20 = iStack_23300 + iStack_232f8 + 10;
    if (iVar20 <= iVar35) {
      iVar35 = iVar20;
    }
    iVar35 = iVar35 - iVar39;
    iVar20 = iStack_232fc + iStack_232f4 + 10;
    if (iVar20 <= iVar38) {
      iVar38 = iVar20;
    }
    uVar36 = iVar38 - iVar40;
    if (iVar35 < 1 || (int)uVar36 < 1) {
      uVar36 = 0;
      iVar35 = 0;
      iVar40 = 0;
      iVar39 = 0;
    }
    uStack_232f0 = &PTR_DAT_110afe8e0;
    ppuStack_232d8 = (undefined **)auStack_23288;
    uStack_232d0 = (int *)CONCAT44(iVar40,iVar39);
    uStack_232c8 = (undefined *)CONCAT44(uVar36,iVar35);
    uStack_232e8 = (undefined **)
                   CONCAT44((int)((double)uVar36 / (double)(int)uRam00000001132dfb70),
                            uRam00000001132dfb70);
    dStack_23320 = (double)((ulong)uRam00000001132dfb70 << 0x20);
    uStack_232e0 = ppuVar13;
    func_0x000109aa87cc(0xbff0000000000000,&dStack_23320,&uStack_232f0);
    FUN_109a852c8(&uStack_232f0,auStack_23288,&iStack_23300);
    if (ppuVar12[0x24] != (undefined *)0x0) {
      piVar14 = (int *)(ppuVar12[0x24] + 0x14);
      do {
        iVar35 = *piVar14;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar35 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(ppuVar12 + 0x1d);
      }
    }
    ppuVar12[0x20] = (undefined *)0x0;
    ppuVar12[0x1f] = (undefined *)0x0;
    ppuVar12[0x24] = (undefined *)0x0;
    ppuVar12[0x22] = (undefined *)0x0;
    ppuVar12[0x21] = (undefined *)0x0;
    if (0 < *(int *)((long)ppuVar12 + 0xec)) {
      lVar25 = 0;
      puVar24 = ppuVar12[0x25];
      do {
        *(undefined4 *)(puVar24 + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < *(int *)((long)ppuVar12 + 0xec));
    }
    ppuVar12[0x1e] = (undefined *)uStack_232e8;
    ppuVar12[0x1d] = (undefined *)uStack_232f0;
    ppuVar12[0x20] = (undefined *)ppuStack_232d8;
    ppuVar12[0x1f] = (undefined *)uStack_232e0;
    ppuVar12[0x22] = uStack_232c8;
    ppuVar12[0x21] = (undefined *)uStack_232d0;
    ppuVar12[0x24] = uStack_232b8;
    ppuVar12[0x23] = (undefined *)CONCAT44(iStack_232bc,iStack_232c0);
    ppuVar19 = (undefined **)ppuVar12[0x26];
    ppuVar31 = ppuVar12 + 0x27;
    iVar35 = uStack_232f0._4_4_;
    if (ppuVar19 != ppuVar31) {
      if (ppuVar19 != (undefined **)0x0) {
        _free(ppuVar19[-1]);
      }
      ppuVar12[0x25] = (undefined *)(ppuVar12 + 0x1e);
      ppuVar12[0x26] = (undefined *)ppuVar31;
      ppuVar19 = ppuVar31;
      iVar35 = uStack_232f0._4_4_;
    }
    if (iVar35 < 3) {
      puVar17 = (undefined8 *)((ulong)&uStack_232f0 | 4);
      *ppuVar19 = (undefined *)*puStack_232a8;
      ppuVar19[1] = (undefined *)puStack_232a8[1];
      uStack_232f0 = (undefined **)CONCAT44(uStack_232f0._4_4_,0x42ff0000);
      puVar17[1] = 0;
      *puVar17 = 0;
      puVar17[3] = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      puVar17[4] = 0;
      *(undefined8 *)((long)puVar17 + 0x34) = 0;
      *(undefined8 *)((long)puVar17 + 0x2c) = 0;
      if (puStack_232a8 != auStack_232a0) {
        _free(puStack_232a8[-1]);
      }
    }
    else {
      ppuVar12[0x25] = (undefined *)CONCAT44(iStack_232ac,uStack_232b0);
      ppuVar12[0x26] = (undefined *)puStack_232a8;
    }
    FUN_109a852c8(&uStack_232f0,ppuVar13,&iStack_23300);
    dStack_23320 = (double)fVar47;
    dStack_23318 = (double)fVar44;
    uStack_23310 = 0;
    uStack_23308 = 0;
    FUN_1095c1c44(&uStack_232f0,&dStack_23320,ppuVar12);
    if (uStack_232b8 != (undefined *)0x0) {
      piVar14 = (int *)(uStack_232b8 + 0x14);
      do {
        iVar35 = *piVar14;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar35 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar35 + -1 == 0) {
        func_0x000109a848d4(&uStack_232f0);
      }
    }
    uStack_232b8 = (undefined *)0x0;
    ppuStack_232d8 = (undefined **)0x0;
    uStack_232e0 = (undefined **)0x0;
    uStack_232c8 = (undefined *)0x0;
    uStack_232d0 = (int *)0x0;
    if (0 < uStack_232f0._4_4_) {
      lVar25 = 0;
      do {
        *(undefined4 *)(CONCAT44(iStack_232ac,uStack_232b0) + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < uStack_232f0._4_4_);
    }
    if (puStack_232a8 != auStack_232a0 && puStack_232a8 != (undefined8 *)0x0) {
      _free(puStack_232a8[-1]);
    }
    ppuVar12[0xc] = (undefined *)CONCAT44((int)fVar44,(int)fVar47);
    ppuVar13 = (undefined **)&uStack_232f0;
    FUN_1095c2144(ppuVar13,ppuVar11,0,(ulong)param_4 & 0xffffffff,param_5);
    uVar36 = (uint)(char)uStack_232e0._7_1_;
    puVar24 = (undefined *)uStack_232e8;
    if (-1 < (int)uVar36) {
      puVar24 = (undefined *)(ulong)uStack_232e0._7_1_;
    }
    if (puVar24 != (undefined *)0x0) {
      FUN_1095c2a50(ppuVar12,&uStack_232f0);
      uVar36 = (uint)uStack_232e0._7_1_;
      ppuVar13 = ppuVar12;
    }
    if ((uVar36 >> 7 & 1) != 0) {
      ppuVar13 = uStack_232f0;
      __ZdlPv(uStack_232f0);
    }
    if (lStack_23250 != 0) {
      piVar14 = (int *)(lStack_23250 + 0x14);
      do {
        iVar35 = *piVar14;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar5) {
          *piVar14 = iVar35 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar35 + -1 == 0) {
        ppuVar13 = (undefined **)auStack_23288;
        func_0x000109a848d4(ppuVar13);
      }
    }
    lStack_23250 = 0;
    uStack_23270 = 0;
    uStack_2326c = 0;
    uStack_23278 = 0;
    uStack_23274 = 0;
    uStack_23260 = 0;
    uStack_2325c = 0;
    uStack_23268 = 0;
    uStack_23264 = 0;
    if (0 < (int)uStack_23284) {
      lVar25 = 0;
      do {
        *(undefined4 *)(lStack_23248 + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < (int)uStack_23284);
    }
    if (puStack_23240 != &uStack_23238 && puStack_23240 != (undefined8 *)0x0) {
      ppuVar13 = (undefined **)puStack_23240[-1];
      _free(ppuVar13);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_231f8) {
    return ppuVar13;
  }
  ___stack_chk_fail();
LAB_1095c04bc:
  lVar25 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar24 = PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(lVar25,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  if ((int)puVar24 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_232f0);
    func_0x00010567aa40(auStack_23288);
  }
  __Unwind_Resume();
  fVar51 = *(float *)(lVar25 + 0x10);
  if (3.1 <= fVar51) {
    FUN_1095c0604();
    FUN_1095c0604(lVar25,lVar25 + 0x13c0,lVar25 + 0x1050,0,puVar24);
  }
  return (undefined **)(ulong)(3.1 <= fVar51);
}



/* Entry: 1095bfd88; end: 1095c0583;  */

undefined **
FUN_1095bfd88(long param_1,undefined **param_2,undefined8 *param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  int iVar20;
  int iVar21;
  undefined1 auVar19 [16];
  int iVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  double dStack_1d0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int iStack_170;
  int iStack_16c;
  undefined8 uStack_168;
  uint uStack_160;
  int iStack_15c;
  undefined8 *puStack_158;
  undefined8 auStack_150 [3];
  undefined1 auStack_138 [4];
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  long lStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = (undefined **)&uStack_1a0;
  FUN_1095c2144(ppuVar7,param_1,0);
  puVar11 = (undefined *)uStack_198;
  if (-1 < (long)uStack_190) {
    puVar11 = (undefined *)((ulong)uStack_190 >> 0x38);
  }
  if (puVar11 == (undefined *)0x0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    ppuVar7 = uStack_1a0;
    if (-1 < (long)uStack_190) {
      ppuVar7 = (undefined **)&uStack_1a0;
    }
    _stat(ppuVar7,auStack_138);
    ppuVar12 = (undefined **)0x0;
    if (((int)ppuVar7 != -1) && ((short)uStack_134 < 0)) {
      ppuVar7 = param_2;
      FUN_1095c263c(param_2,&uStack_1a0);
      ppuVar12 = ppuVar7;
    }
  }
  if ((long)uStack_190 < 0) {
    ppuVar7 = uStack_1a0;
    __ZdlPv(uStack_1a0);
  }
  if (((ulong)ppuVar12 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x248c) & 1) == 0) {
      lVar8 = 0;
      fVar24 = *(float *)(param_1 + 0x644);
      fVar25 = *(float *)(param_1 + 0x648);
      iVar17 = 0;
      iVar20 = 1;
      iVar21 = 2;
      iVar22 = 3;
      auVar23 = NEON_fmov(0x3f800000,4);
      do {
        auVar19._4_4_ = iVar20;
        auVar19._0_4_ = iVar17;
        auVar19._8_4_ = iVar21;
        auVar19._12_4_ = iVar22;
        auVar19 = NEON_ucvtf(auVar19,4);
        fVar13 = (float)_expf();
        fVar14 = (float)_expf(CONCAT44((SQRT(auVar19._4_4_ / 0.00639375) - fVar24) / fVar25,
                                       (SQRT(auVar19._0_4_ / 0.00639375) - fVar24) / fVar25));
        fVar15 = (float)_expf();
        fVar16 = (float)_expf();
        fStack_240 = auVar23._0_4_;
        fStack_23c = auVar23._4_4_;
        fStack_238 = auVar23._8_4_;
        fStack_234 = auVar23._12_4_;
        pfVar5 = (float *)(param_1 + 0x2490 + lVar8);
        pfVar5[2] = fStack_238 / (fVar15 + fStack_238);
        pfVar5[3] = fStack_234 / (fVar16 + fStack_234);
        *pfVar5 = fStack_240 / (fVar14 + fStack_240);
        pfVar5[1] = fStack_23c / (fVar13 + fStack_23c);
        iVar17 = iVar17 + 4;
        iVar20 = iVar20 + 4;
        iVar21 = iVar21 + 4;
        iVar22 = iVar22 + 4;
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != 0x1000);
      *(undefined1 *)(param_1 + 0x248c) = 1;
    }
    fVar24 = *(float *)(param_1 + 0x128);
    fVar25 = *(float *)(param_1 + 1000);
    fVar13 = *(float *)(param_1 + 0x54) / *(float *)(param_1 + 0x50);
    uVar18 = FUN_1095c1ab0(*param_3,param_3[1]);
    lVar8 = 0x58;
    if (*(char *)(param_1 + 0x1000) == '\0') {
      lVar8 = 0x50;
    }
    fVar14 = *(float *)(param_1 + lVar8);
    fVar15 = fVar13 * fVar14;
    if ((*(float *)(param_1 + 4) == 1315.0) && (fVar14 != fVar15)) goto LAB_1095c04bc;
    FUN_1095c1b68(&iStack_1b0,param_1,param_4);
    fVar24 = fVar24 * fVar25;
    iVar20 = (int)fVar24;
    iVar17 = (int)(fVar13 * (float)(int)fVar24);
    ppuVar7 = param_2 + 0x11;
    if (((2 < *(int *)((long)param_2 + 0x8c)) ||
        (((*(int *)(param_2 + 0x12) != iVar20 || (*(int *)((long)param_2 + 0x94) != iVar17)) ||
         (((ulong)param_2[0x11] & 0xfff) != 0xd)))) || (param_2[0x13] == (undefined *)0x0)) {
      uStack_134 = CONCAT44(uStack_134._4_4_,iVar17);
      auStack_138 = (undefined1  [4])iVar20;
      FUN_109a83fd0(ppuVar7,2,auStack_138,0xd);
    }
    auStack_138 = (undefined1  [4])0x42ff0000;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_134 = 0;
    lStack_f8 = (long)&uStack_134 + 4;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    uStack_10c = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    lStack_100 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    puVar6 = auStack_138;
    puStack_f0 = &uStack_e8;
    uStack_1a0._0_4_ = iVar20;
    uStack_1a0._4_4_ = iVar17;
    FUN_109a83fd0(puVar6,2,&uStack_1a0,0);
    dStack_1d0 = 255.0;
    uStack_1a0 = (undefined **)CONCAT44(uStack_1a0._4_4_,0xc1020006);
    uStack_198 = (undefined **)&dStack_1d0;
    uStack_190 = (undefined **)0x100000001;
    FUN_109a91d90();
    FUN_109a48a40(auStack_138,&uStack_1a0,puVar6);
    uStack_1a0 = &PTR_FUN_110afe908;
    uStack_178._0_5_ = (uint5)uVar18;
    iStack_170 = iStack_1b0;
    iStack_16c = iStack_1ac;
    uStack_168 = (undefined *)CONCAT44(iStack_1a4,iStack_1a8);
    iStack_15c = (int)((double)iStack_1a4 / (double)(int)uRam00000001132dfb70);
    uStack_160 = uRam00000001132dfb70;
    dStack_1d0 = (double)((ulong)uRam00000001132dfb70 << 0x20);
    uStack_198 = ppuVar7;
    uStack_190 = (undefined **)auStack_138;
    puStack_188 = (undefined1 *)param_1;
    uStack_180 = param_3;
    func_0x000109aa87cc(0xbff0000000000000,&dStack_1d0,&uStack_1a0);
    iVar21 = iStack_1b0;
    if (iStack_1b0 < 0xb) {
      iVar21 = 10;
    }
    iVar21 = iVar21 + -10;
    iVar22 = iStack_1ac;
    if (iStack_1ac < 0xb) {
      iVar22 = 10;
    }
    iVar22 = iVar22 + -10;
    iVar1 = iStack_1b0 + iStack_1a8 + 10;
    if (iVar1 <= iVar17) {
      iVar17 = iVar1;
    }
    iVar17 = iVar17 - iVar21;
    iVar1 = iStack_1ac + iStack_1a4 + 10;
    if (iVar1 <= iVar20) {
      iVar20 = iVar1;
    }
    uVar18 = iVar20 - iVar22;
    if (iVar17 < 1 || (int)uVar18 < 1) {
      uVar18 = 0;
      iVar17 = 0;
      iVar22 = 0;
      iVar21 = 0;
    }
    uStack_1a0 = &PTR_DAT_110afe8e0;
    puStack_188 = auStack_138;
    uStack_180 = (undefined8 *)CONCAT44(iVar22,iVar21);
    uStack_178 = (undefined *)CONCAT44(uVar18,iVar17);
    uStack_198 = (undefined **)
                 CONCAT44((int)((double)uVar18 / (double)(int)uRam00000001132dfb70),
                          uRam00000001132dfb70);
    dStack_1d0 = (double)((ulong)uRam00000001132dfb70 << 0x20);
    uStack_190 = ppuVar7;
    func_0x000109aa87cc(0xbff0000000000000,&dStack_1d0,&uStack_1a0);
    FUN_109a852c8(&uStack_1a0,auStack_138,&iStack_1b0);
    if (param_2[0x24] != (undefined *)0x0) {
      piVar2 = (int *)(param_2[0x24] + 0x14);
      do {
        iVar17 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(param_2 + 0x1d);
      }
    }
    param_2[0x20] = (undefined *)0x0;
    param_2[0x1f] = (undefined *)0x0;
    param_2[0x24] = (undefined *)0x0;
    param_2[0x22] = (undefined *)0x0;
    param_2[0x21] = (undefined *)0x0;
    if (0 < *(int *)((long)param_2 + 0xec)) {
      lVar8 = 0;
      puVar11 = param_2[0x25];
      do {
        *(undefined4 *)(puVar11 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)((long)param_2 + 0xec));
    }
    param_2[0x1e] = (undefined *)uStack_198;
    param_2[0x1d] = (undefined *)uStack_1a0;
    param_2[0x20] = puStack_188;
    param_2[0x1f] = (undefined *)uStack_190;
    param_2[0x22] = uStack_178;
    param_2[0x21] = (undefined *)uStack_180;
    param_2[0x24] = uStack_168;
    param_2[0x23] = (undefined *)CONCAT44(iStack_16c,iStack_170);
    ppuVar9 = (undefined **)param_2[0x26];
    ppuVar12 = param_2 + 0x27;
    iVar17 = uStack_1a0._4_4_;
    if (ppuVar9 != ppuVar12) {
      if (ppuVar9 != (undefined **)0x0) {
        _free(ppuVar9[-1]);
      }
      param_2[0x25] = (undefined *)(param_2 + 0x1e);
      param_2[0x26] = (undefined *)ppuVar12;
      ppuVar9 = ppuVar12;
      iVar17 = uStack_1a0._4_4_;
    }
    if (iVar17 < 3) {
      puVar10 = (undefined8 *)((ulong)&uStack_1a0 | 4);
      *ppuVar9 = (undefined *)*puStack_158;
      ppuVar9[1] = (undefined *)puStack_158[1];
      uStack_1a0 = (undefined **)CONCAT44(uStack_1a0._4_4_,0x42ff0000);
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      puVar10[4] = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      if (puStack_158 != auStack_150) {
        _free(puStack_158[-1]);
      }
    }
    else {
      param_2[0x25] = (undefined *)CONCAT44(iStack_15c,uStack_160);
      param_2[0x26] = (undefined *)puStack_158;
    }
    FUN_109a852c8(&uStack_1a0,ppuVar7,&iStack_1b0);
    dStack_1d0 = (double)fVar15;
    dStack_1c8 = (double)fVar14;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    FUN_1095c1c44(&uStack_1a0,&dStack_1d0,param_2);
    if (uStack_168 != (undefined *)0x0) {
      piVar2 = (int *)(uStack_168 + 0x14);
      do {
        iVar17 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        func_0x000109a848d4(&uStack_1a0);
      }
    }
    uStack_168 = (undefined *)0x0;
    puStack_188 = (undefined1 *)0x0;
    uStack_190 = (undefined **)0x0;
    uStack_178 = (undefined *)0x0;
    uStack_180 = (undefined8 *)0x0;
    if (0 < uStack_1a0._4_4_) {
      lVar8 = 0;
      do {
        *(undefined4 *)(CONCAT44(iStack_15c,uStack_160) + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < uStack_1a0._4_4_);
    }
    if (puStack_158 != auStack_150 && puStack_158 != (undefined8 *)0x0) {
      _free(puStack_158[-1]);
    }
    param_2[0xc] = (undefined *)CONCAT44((int)fVar14,(int)fVar15);
    ppuVar7 = (undefined **)&uStack_1a0;
    FUN_1095c2144(ppuVar7,param_1,0,param_4 & 0xffffffff,param_5);
    uVar18 = (uint)(char)uStack_190._7_1_;
    puVar11 = (undefined *)uStack_198;
    if (-1 < (int)uVar18) {
      puVar11 = (undefined *)(ulong)uStack_190._7_1_;
    }
    if (puVar11 != (undefined *)0x0) {
      FUN_1095c2a50(param_2,&uStack_1a0);
      uVar18 = (uint)uStack_190._7_1_;
      ppuVar7 = param_2;
    }
    if ((uVar18 >> 7 & 1) != 0) {
      ppuVar7 = uStack_1a0;
      __ZdlPv(uStack_1a0);
    }
    if (lStack_100 != 0) {
      piVar2 = (int *)(lStack_100 + 0x14);
      do {
        iVar17 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar17 + -1 == 0) {
        ppuVar7 = (undefined **)auStack_138;
        func_0x000109a848d4(ppuVar7);
      }
    }
    lStack_100 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    if (0 < (int)uStack_134) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lStack_f8 + lVar8 * 4) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uStack_134);
    }
    if (puStack_f0 != &uStack_e8 && puStack_f0 != (undefined8 *)0x0) {
      ppuVar7 = (undefined **)puStack_f0[-1];
      _free(ppuVar7);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return ppuVar7;
  }
  ___stack_chk_fail();
LAB_1095c04bc:
  lVar8 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  puVar11 = PTR___ZTISt13runtime_error_110346a40;
  ___cxa_throw(lVar8,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  if ((int)puVar11 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_1a0);
    func_0x00010567aa40(auStack_138);
  }
  __Unwind_Resume();
  fVar24 = *(float *)(lVar8 + 0x10);
  if (3.1 <= fVar24) {
    FUN_1095c0604();
    FUN_1095c0604(lVar8,lVar8 + 0x13c0,lVar8 + 0x1050,0,puVar11);
  }
  return (undefined **)(ulong)(3.1 <= fVar24);
}



/* Entry: 1095c0584; end: 1095c0603;  */

bool FUN_1095c0584(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x10);
  if (3.1 <= fVar1) {
    FUN_1095c0604(param_1,param_1 + 0x12f8,param_1 + 0x1038,1,param_2);
    FUN_1095c0604(param_1,param_1 + 0x13c0,param_1 + 0x1050,0,param_2);
  }
  return 3.1 <= fVar1;
}



/* Entry: 1095c0604; end: 1095c0adf;  */

uint * FUN_1095c0604(uint *param_1,uint *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5)

{
  int *piVar1;
  float *pfVar2;
  short sVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  short *psVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  uint *puVar25;
  short *psVar26;
  uint *unaff_x25;
  short *psVar27;
  ulong unaff_x26;
  uint uVar28;
  int iVar29;
  ulong unaff_x27;
  short *psVar30;
  uint uVar31;
  ulong unaff_x28;
  short *psVar32;
  undefined4 uVar33;
  int iVar34;
  undefined4 extraout_var;
  int iVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 unaff_d8;
  float fVar40;
  float fVar41;
  ulong unaff_d9;
  short *psStack_3e0;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  undefined8 auStack_3a8 [2];
  char cStack_391;
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  ulong uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  uint *puStack_218;
  uint *puStack_210;
  undefined8 *puStack_208;
  uint *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  uint *puStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  float fStack_164;
  long lStack_160;
  undefined8 uStack_158;
  uint *puStack_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined8 *puStack_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined8 uStack_128;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  int iStack_114;
  uint uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = (uint *)&uStack_158;
  uVar16 = 1;
  puVar10 = param_1;
  uVar14 = param_4;
  uVar15 = param_5;
  FUN_1095c2144();
  iVar17 = (int)uVar14;
  puVar25 = puStack_150;
  if (-1 < (long)uStack_148) {
    puVar25 = (uint *)((ulong)uStack_148 >> 0x38);
  }
  if (puVar25 == (uint *)0x0) {
    puVar25 = (uint *)0x0;
  }
  else {
    puVar11 = (uint *)uStack_158;
    if (-1 < (long)uStack_148) {
      puVar11 = (uint *)&uStack_158;
    }
    puVar10 = &uStack_110;
    _stat();
    puVar25 = (uint *)0x0;
    if (((int)puVar11 != -1) && ((short)uStack_10c < 0)) {
      puVar10 = (uint *)&uStack_158;
      puVar11 = param_2;
      FUN_1095c263c();
      puVar25 = puVar11;
    }
  }
  if ((long)uStack_148 < 0) {
    puVar11 = (uint *)uStack_158;
    __ZdlPv();
  }
  if (((ulong)puVar25 & 1) == 0) {
    uStack_10c._4_4_ = (undefined4)((ulong)uStack_10c >> 0x20);
    if ((param_1[0x522] & 1) == 0) {
      lVar20 = 0;
      fStack_1a0 = (float)param_1[0x19b];
      fStack_1b0 = (float)param_1[0x19c];
      iVar17 = 0;
      iVar29 = 1;
      iVar34 = 2;
      iVar35 = 3;
      auVar36 = NEON_fmov(0x3f800000,4);
      uStack_1c8 = auVar36._8_8_;
      uStack_1d0 = auVar36._0_8_;
      uStack_1b8 = 0x3bd182aa3bd182aa;
      uStack_1c0 = 0x3bd182aa3bd182aa;
      fStack_1ac = fStack_1b0;
      fStack_1a8 = fStack_1b0;
      fStack_1a4 = fStack_1b0;
      fStack_19c = fStack_1a0;
      fStack_198 = fStack_1a0;
      fStack_194 = fStack_1a0;
      do {
        auVar36._4_4_ = iVar29;
        auVar36._0_4_ = iVar17;
        auVar36._8_4_ = iVar34;
        auVar36._12_4_ = iVar35;
        auVar36 = NEON_ucvtf(auVar36,4);
        fStack_168 = (SQRT(auVar36._8_4_ / (float)uStack_1b8) - fStack_198) / fStack_1a8;
        fStack_164 = (SQRT(auVar36._12_4_ / uStack_1b8._4_4_) - fStack_194) / fStack_1a4;
        uStack_170 = (undefined8 *)
                     CONCAT44((SQRT(auVar36._4_4_ / uStack_1c0._4_4_) - fStack_19c) / fStack_1ac,
                              (SQRT(auVar36._0_4_ / (float)uStack_1c0) - fStack_1a0) / fStack_1b0);
        iStack_190 = iVar17;
        iStack_18c = iVar29;
        iStack_188 = iVar34;
        iStack_184 = iVar35;
        uStack_180 = _expf();
        uVar33 = _expf(uStack_170);
        uStack_180._4_4_ = (undefined4)uStack_180;
        uStack_180._0_4_ = uVar33;
        uStack_178._4_4_ = extraout_var;
        uVar33 = _expf();
        uStack_178 = CONCAT44(uStack_178._4_4_,uVar33);
        fVar41 = (float)_expf();
        pfVar2 = (float *)((long)param_1 + lVar20 + 0x148c);
        pfVar2[2] = (float)uStack_1c8 / ((float)uStack_178 + (float)uStack_1c8);
        pfVar2[3] = uStack_1c8._4_4_ / (fVar41 + uStack_1c8._4_4_);
        *pfVar2 = (float)uStack_1d0 / ((float)uStack_180 + (float)uStack_1d0);
        pfVar2[1] = uStack_1d0._4_4_ / ((float)((ulong)uStack_180 >> 0x20) + uStack_1d0._4_4_);
        iVar17 = iStack_190 + 4;
        iVar29 = iStack_18c + 4;
        iVar34 = iStack_188 + 4;
        iVar35 = iStack_184 + 4;
        lVar20 = lVar20 + 0x10;
      } while (lVar20 != 0x1000);
      *(undefined1 *)(param_1 + 0x522) = 1;
    }
    uVar28 = (uint)(float)param_1[0x1a4];
    unaff_x27 = (ulong)uVar28;
    uVar31 = (uint)(float)param_1[0x1a3];
    unaff_x28 = (ulong)uVar31;
    unaff_d8 = FUN_1095c1ab0(*param_3,param_3[1]);
    fVar41 = (float)param_1[0xf4];
    fVar40 = (float)param_1[0xf6];
    bVar9 = true;
    if ((!NAN(fVar40)) && (bVar9 = false, !NAN(fVar40) && !NAN((float)param_1[0x3ff]))) {
      bVar9 = fVar40 == (float)param_1[0x3ff];
    }
    if (bVar9) {
      fVar40 = ((float)param_1[0x15] / (float)param_1[0x14]) * (float)(int)fVar41;
    }
    unaff_d9 = (ulong)(uint)fVar40;
    puVar25 = param_2 + 0x1a;
    if ((((2 < (int)param_2[0x1b]) || (param_2[0x1c] != uVar28 || param_2[0x1d] != uVar31)) ||
        ((param_2[0x1a] & 0xfff) != 0xd)) || (*(long *)(param_2 + 0x1e) == 0)) {
      uStack_10c = CONCAT44(uStack_10c._4_4_,uVar31);
      uStack_110 = uVar28;
      FUN_109a83fd0(puVar25,2,&uStack_110,0xd);
    }
    uStack_110 = 0x42ff0000;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 0;
    lStack_d0 = (long)&uStack_10c + 4;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    lStack_d8 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_170 = &uStack_c0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    puVar10 = &uStack_110;
    puStack_c8 = uStack_170;
    uStack_158._0_4_ = uVar28;
    uStack_158._4_4_ = uVar31;
    FUN_109a83fd0(puVar10,2,&uStack_158,0);
    lStack_160 = 0x406fe00000000000;
    uStack_158 = (undefined **)CONCAT44(uStack_158._4_4_,0xc1020006);
    puStack_150 = (uint *)&lStack_160;
    uStack_148 = (uint *)0x100000001;
    FUN_109a91d90();
    unaff_x25 = &uStack_110;
    FUN_109a48a40(&uStack_110,&uStack_158,puVar10);
    uStack_158 = &PTR_FUN_110afe908;
    uStack_130 = (undefined4)unaff_d8;
    uStack_12c = 1;
    uStack_128 = 0;
    iStack_114 = (int)((double)(int)uVar28 / (double)(int)uRam00000001132dfb70);
    uStack_118 = uRam00000001132dfb70;
    lStack_160 = (ulong)uRam00000001132dfb70 << 0x20;
    puStack_150 = puVar25;
    uStack_148 = unaff_x25;
    puStack_140 = param_1;
    puStack_138 = param_3;
    uStack_120 = uVar31;
    uStack_11c = uVar28;
    func_0x000109aa87cc(0xbff0000000000000,&lStack_160,&uStack_158);
    uVar28 = (int)fVar41 << 1;
    param_3 = (undefined8 *)(ulong)uVar28;
    uVar31 = (int)fVar40 << 1;
    unaff_x26 = (ulong)uVar31;
    uStack_158 = (undefined **)(double)(int)uVar31;
    puStack_150 = (uint *)(double)(int)uVar28;
    uStack_148 = (uint *)0x0;
    puStack_140 = (uint *)0x0;
    FUN_1095c1c44(puVar25,&uStack_158,param_2);
    *(ulong *)(param_2 + 0x18) = CONCAT44(uVar28,uVar31);
    puVar11 = (uint *)&uStack_158;
    uVar16 = 1;
    puVar10 = param_1;
    uVar14 = param_4;
    uVar15 = param_5;
    FUN_1095c2144();
    iVar17 = (int)uVar14;
    uVar28 = (uint)(char)uStack_148._7_1_;
    puVar12 = puStack_150;
    if (-1 < (int)uVar28) {
      puVar12 = (uint *)(ulong)uStack_148._7_1_;
    }
    if (puVar12 != (uint *)0x0) {
      puVar10 = (uint *)&uStack_158;
      FUN_1095c2a50();
      uVar28 = (uint)uStack_148._7_1_;
      puVar11 = param_2;
    }
    if ((uVar28 >> 7 & 1) != 0) {
      puVar11 = (uint *)uStack_158;
      __ZdlPv();
    }
    if (lStack_d8 != 0) {
      piVar1 = (int *)(lStack_d8 + 0x14);
      do {
        iVar29 = *piVar1;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar29 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar29 + -1 == 0) {
        puVar11 = &uStack_110;
        func_0x000109a848d4();
      }
    }
    lStack_d8 = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    if (0 < (int)uStack_10c) {
      lVar20 = 0;
      do {
        *(undefined4 *)(lStack_d0 + lVar20 * 4) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)uStack_10c);
    }
    if (puStack_c8 != uStack_170 && puStack_c8 != (undefined8 *)0x0) {
      puVar11 = (uint *)puStack_c8[-1];
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar11;
  }
  ___stack_chk_fail();
  if ((int)puVar10 != 0) {
    func_0x000104bd46a0();
    if ((long)uStack_148 < 0) {
      __ZdlPv(uStack_158);
    }
    func_0x00010567aa40(&uStack_110);
  }
  puVar12 = puVar11;
  __Unwind_Resume();
  pcStack_1d8 = FUN_1095c0ae0;
  *(undefined1 *)(puVar12 + 0x400) = uVar16;
  lVar20 = *(long *)puVar10;
  uStack_240 = unaff_d9;
  uStack_238 = unaff_d8;
  uStack_230 = unaff_x28;
  uStack_228 = unaff_x27;
  uStack_220 = unaff_x26;
  puStack_218 = unaff_x25;
  puStack_210 = puVar25;
  puStack_208 = param_3;
  puStack_200 = param_1;
  uStack_1f8 = param_4;
  uStack_1f0 = param_5;
  puStack_1e8 = puVar11;
  puStack_1e0 = &stack0xfffffffffffffff0;
  if ((ulong)(*(long *)(puVar10 + 2) - lVar20) < 0x1000) {
    if (iRam00000001132dfb08 < 1) {
      return (uint *)0x0;
    }
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    FUN_10926db08(&uStack_390);
    uStack_288 = CONCAT44(uStack_288._4_4_,3);
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_250 = uStack_250 & 0xffffffff00000000;
    func_0x000107c31940(auStack_3a8,&UNK_10f57563e);
    func_0x000107c31940(auStack_3c0,&UNK_10f575760);
    FUN_109671348(&uStack_390,1,auStack_3a8,auStack_3c0,0x16d);
    FUN_1092b4db8();
  }
  else {
    _memcpy();
    if (iVar17 != 0) {
      if (3.1 <= (float)puVar12[4]) {
        uVar16 = 1;
      }
      else {
        if (0 < iRam00000001132dfb08) {
          uStack_250 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_288 = 0;
          uStack_290 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_2a8 = 0;
          uStack_2b0 = 0;
          uStack_298 = 0;
          uStack_2a0 = 0;
          uStack_2c8 = 0;
          uStack_2d0 = 0;
          uStack_2b8 = 0;
          uStack_2c0 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          uStack_2d8 = 0;
          uStack_2e0 = 0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_2f8 = 0;
          uStack_300 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_368 = 0;
          uStack_370 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          uStack_388 = 0;
          uStack_390 = 0;
          uStack_378 = 0;
          uStack_380 = 0;
          FUN_10926db08(&uStack_390);
          uStack_288 = CONCAT44(uStack_288._4_4_,3);
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_250 = uStack_250 & 0xffffffff00000000;
          func_0x000107c31940(auStack_3a8,&UNK_10f57563e);
          func_0x000107c31940(auStack_3c0,&UNK_10f575760);
          FUN_109671348(&uStack_390,1,auStack_3a8,auStack_3c0,0x17a);
          FUN_1092b4db8();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf();
          FUN_1092b4db8();
          if (cStack_3a9 < '\0') {
            __ZdlPv(auStack_3c0[0]);
          }
          if (cStack_391 < '\0') {
            __ZdlPv(auStack_3a8[0]);
          }
          FUN_109671170(&uStack_390);
        }
        uVar16 = 0;
      }
      *(undefined1 *)((long)puVar12 + 0x1001) = uVar16;
    }
    iVar17 = (int)(float)puVar12[0xd2];
    iVar29 = (int)(float)puVar12[0xd3];
    uVar28 = iVar29 + iVar17;
    fVar41 = (float)puVar12[4];
    if (3.1 <= fVar41) {
      uVar28 = uVar28 + (int)(float)puVar12[0xd4] + (int)(float)puVar12[0xd5];
    }
    if ((ulong)uVar28 + 0x1000 <= (ulong)(*(long *)(puVar10 + 2) - *(long *)puVar10)) {
      if (iVar17 == 0) {
        psVar27 = (short *)0x0;
        psVar21 = (short *)0x0;
        psVar13 = (short *)0x0;
      }
      else {
        if (iVar17 < 0) {
          FUN_1095c30cc();
          goto LAB_1095c162c;
        }
        psVar27 = (short *)((long)iVar17 * 0x7e);
        psVar13 = psVar27;
        __Znwm();
        _bzero();
        psVar21 = psVar13 + ((ulong)(psVar27 + -0x3f) / 0x7e) * 0x3f + 0x3f;
      }
      lVar20 = lVar20 + 0x1000;
      _memcpy(psVar13,lVar20,psVar27);
      if (iVar29 == 0) {
        psVar32 = (short *)0x0;
        psVar23 = (short *)0x0;
        psVar22 = (short *)0x0;
      }
      else {
        if (iVar29 < 0) {
          FUN_1095c30cc();
          goto LAB_1095c162c;
        }
        psVar32 = (short *)((long)iVar29 * 0x7e);
        psVar22 = psVar32;
        __Znwm();
        _bzero();
        psVar23 = psVar22 + ((ulong)(psVar32 + -0x3f) / 0x7e) * 0x3f + 0x3f;
      }
      lVar20 = lVar20 + (long)psVar27;
      _memcpy(psVar22,lVar20,psVar32);
      if (3.1 <= fVar41) {
        iVar17 = (int)(float)puVar12[0xd4];
        if (iVar17 == 0) {
          psVar27 = (short *)0x0;
          psVar24 = (short *)0x0;
          psStack_3e0 = (short *)0x0;
        }
        else {
          if (iVar17 < 0) {
            FUN_1095c30cc();
            goto LAB_1095c162c;
          }
          psVar27 = (short *)((long)iVar17 * 0x7e);
          psVar24 = psVar27;
          __Znwm();
          _bzero();
          psStack_3e0 = psVar24 + ((ulong)(psVar27 + -0x3f) / 0x7e) * 0x3f + 0x3f;
        }
        lVar20 = lVar20 + (long)psVar32;
        _memcpy(psVar24,lVar20,psVar27);
        iVar17 = (int)(float)puVar12[0xd5];
        if (iVar17 == 0) {
          psVar30 = (short *)0x0;
          psVar26 = (short *)0x0;
          psVar32 = (short *)0x0;
        }
        else {
          if (iVar17 < 0) {
            FUN_1095c30cc();
LAB_1095c162c:
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1095c1630);
            (*pcVar8)();
          }
          psVar30 = (short *)((long)iVar17 * 0x7e);
          psVar26 = psVar30;
          __Znwm();
          _bzero();
          psVar32 = psVar26 + ((ulong)(psVar30 + -0x3f) / 0x7e) * 0x3f + 0x3f;
        }
        _memcpy(psVar26,lVar20 + (long)psVar27,psVar30);
      }
      else {
        psVar24 = (short *)0x0;
        psStack_3e0 = (short *)0x0;
        psVar26 = (short *)0x0;
        psVar32 = (short *)0x0;
      }
      FUN_1095c30e0(puVar12 + 0x402,((long)psVar21 - (long)psVar13 >> 1) * -0x1041041041041041);
      _bzero(*(long *)(puVar12 + 0x402),*(long *)(puVar12 + 0x404) - *(long *)(puVar12 + 0x402));
      lVar20 = *(long *)(puVar12 + 0x402);
      if (*(long *)(puVar12 + 0x404) != lVar20) {
        lVar18 = 0;
        uVar19 = 0;
        psVar21 = psVar13;
        do {
          sVar3 = *psVar21;
          pfVar2 = (float *)(lVar20 + lVar18);
          *(short *)(pfVar2 + 1) = sVar3;
          *(undefined4 *)((long)pfVar2 + 6) = *(undefined4 *)(psVar21 + 1);
          *pfVar2 = (float)(uint)((int)sVar3 * (int)sVar3);
          uVar14 = *(undefined8 *)(psVar21 + 3);
          uVar5 = *(undefined8 *)(psVar21 + 7);
          uVar6 = *(undefined8 *)(psVar21 + 0xb);
          uVar7 = *(undefined8 *)(psVar21 + 0xf);
          uVar38 = *(undefined8 *)(psVar21 + 0x17);
          uVar37 = *(undefined8 *)(psVar21 + 0x13);
          uVar39 = *(undefined8 *)(psVar21 + 0x19);
          *(undefined8 *)(pfVar2 + 0x11) = *(undefined8 *)(psVar21 + 0x1d);
          *(undefined8 *)(pfVar2 + 0xf) = uVar39;
          *(undefined8 *)(pfVar2 + 10) = uVar7;
          *(undefined8 *)(pfVar2 + 8) = uVar6;
          *(undefined8 *)(pfVar2 + 0xe) = uVar38;
          *(undefined8 *)(pfVar2 + 0xc) = uVar37;
          *(undefined8 *)(pfVar2 + 6) = uVar5;
          *(undefined8 *)(pfVar2 + 4) = uVar14;
          lVar20 = *(long *)(puVar12 + 0x402) + lVar18;
          uVar14 = *(undefined8 *)(psVar21 + 0x21);
          uVar5 = *(undefined8 *)(psVar21 + 0x25);
          uVar6 = *(undefined8 *)(psVar21 + 0x29);
          uVar7 = *(undefined8 *)(psVar21 + 0x2d);
          uVar38 = *(undefined8 *)(psVar21 + 0x35);
          uVar37 = *(undefined8 *)(psVar21 + 0x31);
          uVar39 = *(undefined8 *)(psVar21 + 0x37);
          *(undefined8 *)(lVar20 + 0x84) = *(undefined8 *)(psVar21 + 0x3b);
          *(undefined8 *)(lVar20 + 0x7c) = uVar39;
          *(undefined8 *)(lVar20 + 0x68) = uVar7;
          *(undefined8 *)(lVar20 + 0x60) = uVar6;
          *(undefined8 *)(lVar20 + 0x78) = uVar38;
          *(undefined8 *)(lVar20 + 0x70) = uVar37;
          *(undefined8 *)(lVar20 + 0x58) = uVar5;
          *(undefined8 *)(lVar20 + 0x50) = uVar14;
          uVar19 = uVar19 + 1;
          lVar20 = *(long *)(puVar12 + 0x402);
          psVar21 = psVar21 + 0x3f;
          lVar18 = lVar18 + 0x90;
        } while (uVar19 < (ulong)((*(long *)(puVar12 + 0x404) - lVar20 >> 4) * -0x71c71c71c71c71c7))
        ;
      }
      FUN_1095c30e0(puVar12 + 0x408,((long)psVar23 - (long)psVar22 >> 1) * -0x1041041041041041);
      _bzero(*(long *)(puVar12 + 0x408),*(long *)(puVar12 + 0x40a) - *(long *)(puVar12 + 0x408));
      lVar20 = *(long *)(puVar12 + 0x408);
      if (*(long *)(puVar12 + 0x40a) != lVar20) {
        lVar18 = 0;
        uVar19 = 0;
        psVar21 = psVar22;
        do {
          sVar3 = *psVar21;
          pfVar2 = (float *)(lVar20 + lVar18);
          *(short *)(pfVar2 + 1) = sVar3;
          *(undefined4 *)((long)pfVar2 + 6) = *(undefined4 *)(psVar21 + 1);
          *pfVar2 = (float)(uint)((int)sVar3 * (int)sVar3);
          uVar14 = *(undefined8 *)(psVar21 + 3);
          uVar5 = *(undefined8 *)(psVar21 + 7);
          uVar6 = *(undefined8 *)(psVar21 + 0xb);
          uVar7 = *(undefined8 *)(psVar21 + 0xf);
          uVar38 = *(undefined8 *)(psVar21 + 0x17);
          uVar37 = *(undefined8 *)(psVar21 + 0x13);
          uVar39 = *(undefined8 *)(psVar21 + 0x19);
          *(undefined8 *)(pfVar2 + 0x11) = *(undefined8 *)(psVar21 + 0x1d);
          *(undefined8 *)(pfVar2 + 0xf) = uVar39;
          *(undefined8 *)(pfVar2 + 10) = uVar7;
          *(undefined8 *)(pfVar2 + 8) = uVar6;
          *(undefined8 *)(pfVar2 + 0xe) = uVar38;
          *(undefined8 *)(pfVar2 + 0xc) = uVar37;
          *(undefined8 *)(pfVar2 + 6) = uVar5;
          *(undefined8 *)(pfVar2 + 4) = uVar14;
          lVar20 = *(long *)(puVar12 + 0x408) + lVar18;
          uVar14 = *(undefined8 *)(psVar21 + 0x21);
          uVar5 = *(undefined8 *)(psVar21 + 0x25);
          uVar6 = *(undefined8 *)(psVar21 + 0x29);
          uVar7 = *(undefined8 *)(psVar21 + 0x2d);
          uVar38 = *(undefined8 *)(psVar21 + 0x35);
          uVar37 = *(undefined8 *)(psVar21 + 0x31);
          uVar39 = *(undefined8 *)(psVar21 + 0x37);
          *(undefined8 *)(lVar20 + 0x84) = *(undefined8 *)(psVar21 + 0x3b);
          *(undefined8 *)(lVar20 + 0x7c) = uVar39;
          *(undefined8 *)(lVar20 + 0x68) = uVar7;
          *(undefined8 *)(lVar20 + 0x60) = uVar6;
          *(undefined8 *)(lVar20 + 0x78) = uVar38;
          *(undefined8 *)(lVar20 + 0x70) = uVar37;
          *(undefined8 *)(lVar20 + 0x58) = uVar5;
          *(undefined8 *)(lVar20 + 0x50) = uVar14;
          uVar19 = uVar19 + 1;
          lVar20 = *(long *)(puVar12 + 0x408);
          psVar21 = psVar21 + 0x3f;
          lVar18 = lVar18 + 0x90;
        } while (uVar19 < (ulong)((*(long *)(puVar12 + 0x40a) - lVar20 >> 4) * -0x71c71c71c71c71c7))
        ;
      }
      puVar12[0x435] = puVar12[0xfd];
      puVar12[0x436] = puVar12[0xfe];
      puVar12[0x487] = puVar12[0xff];
      puVar12[0x488] = puVar12[0x100];
      if ((float)puVar12[4] < 3.1) {
LAB_1095c14bc:
        if (psVar26 != (short *)0x0) goto LAB_1095c14c0;
      }
      else {
        FUN_1095c30e0(puVar12 + 0x40e,((long)psStack_3e0 - (long)psVar24 >> 1) * -0x1041041041041041
                     );
        _bzero(*(long *)(puVar12 + 0x40e),*(long *)(puVar12 + 0x410) - *(long *)(puVar12 + 0x40e));
        lVar20 = *(long *)(puVar12 + 0x40e);
        if (*(long *)(puVar12 + 0x410) != lVar20) {
          lVar18 = 0;
          uVar19 = 0;
          psVar21 = psVar24;
          do {
            sVar3 = *psVar21;
            pfVar2 = (float *)(lVar20 + lVar18);
            *(short *)(pfVar2 + 1) = sVar3;
            *(undefined4 *)((long)pfVar2 + 6) = *(undefined4 *)(psVar21 + 1);
            *pfVar2 = (float)(uint)((int)sVar3 * (int)sVar3);
            uVar14 = *(undefined8 *)(psVar21 + 3);
            uVar5 = *(undefined8 *)(psVar21 + 7);
            uVar6 = *(undefined8 *)(psVar21 + 0xb);
            uVar7 = *(undefined8 *)(psVar21 + 0xf);
            uVar38 = *(undefined8 *)(psVar21 + 0x17);
            uVar37 = *(undefined8 *)(psVar21 + 0x13);
            uVar39 = *(undefined8 *)(psVar21 + 0x19);
            *(undefined8 *)(pfVar2 + 0x11) = *(undefined8 *)(psVar21 + 0x1d);
            *(undefined8 *)(pfVar2 + 0xf) = uVar39;
            *(undefined8 *)(pfVar2 + 10) = uVar7;
            *(undefined8 *)(pfVar2 + 8) = uVar6;
            *(undefined8 *)(pfVar2 + 0xe) = uVar38;
            *(undefined8 *)(pfVar2 + 0xc) = uVar37;
            *(undefined8 *)(pfVar2 + 6) = uVar5;
            *(undefined8 *)(pfVar2 + 4) = uVar14;
            lVar20 = *(long *)(puVar12 + 0x40e) + lVar18;
            uVar14 = *(undefined8 *)(psVar21 + 0x21);
            uVar5 = *(undefined8 *)(psVar21 + 0x25);
            uVar6 = *(undefined8 *)(psVar21 + 0x29);
            uVar7 = *(undefined8 *)(psVar21 + 0x2d);
            uVar38 = *(undefined8 *)(psVar21 + 0x35);
            uVar37 = *(undefined8 *)(psVar21 + 0x31);
            uVar39 = *(undefined8 *)(psVar21 + 0x37);
            *(undefined8 *)(lVar20 + 0x84) = *(undefined8 *)(psVar21 + 0x3b);
            *(undefined8 *)(lVar20 + 0x7c) = uVar39;
            *(undefined8 *)(lVar20 + 0x68) = uVar7;
            *(undefined8 *)(lVar20 + 0x60) = uVar6;
            *(undefined8 *)(lVar20 + 0x78) = uVar38;
            *(undefined8 *)(lVar20 + 0x70) = uVar37;
            *(undefined8 *)(lVar20 + 0x58) = uVar5;
            *(undefined8 *)(lVar20 + 0x50) = uVar14;
            uVar19 = uVar19 + 1;
            lVar20 = *(long *)(puVar12 + 0x40e);
            psVar21 = psVar21 + 0x3f;
            lVar18 = lVar18 + 0x90;
          } while (uVar19 < (ulong)((*(long *)(puVar12 + 0x410) - lVar20 >> 4) * -0x71c71c71c71c71c7
                                   ));
        }
        FUN_1095c30e0(puVar12 + 0x414,((long)psVar32 - (long)psVar26 >> 1) * -0x1041041041041041);
        _bzero(*(long *)(puVar12 + 0x414),*(long *)(puVar12 + 0x416) - *(long *)(puVar12 + 0x414));
        lVar20 = *(long *)(puVar12 + 0x414);
        if (*(long *)(puVar12 + 0x416) == lVar20) goto LAB_1095c14bc;
        lVar18 = 0;
        uVar19 = 0;
        psVar21 = psVar26;
        do {
          sVar3 = *psVar21;
          pfVar2 = (float *)(lVar20 + lVar18);
          *(short *)(pfVar2 + 1) = sVar3;
          *(undefined4 *)((long)pfVar2 + 6) = *(undefined4 *)(psVar21 + 1);
          *pfVar2 = (float)(uint)((int)sVar3 * (int)sVar3);
          uVar14 = *(undefined8 *)(psVar21 + 3);
          uVar5 = *(undefined8 *)(psVar21 + 7);
          uVar6 = *(undefined8 *)(psVar21 + 0xb);
          uVar7 = *(undefined8 *)(psVar21 + 0xf);
          uVar38 = *(undefined8 *)(psVar21 + 0x17);
          uVar37 = *(undefined8 *)(psVar21 + 0x13);
          uVar39 = *(undefined8 *)(psVar21 + 0x19);
          *(undefined8 *)(pfVar2 + 0x11) = *(undefined8 *)(psVar21 + 0x1d);
          *(undefined8 *)(pfVar2 + 0xf) = uVar39;
          *(undefined8 *)(pfVar2 + 10) = uVar7;
          *(undefined8 *)(pfVar2 + 8) = uVar6;
          *(undefined8 *)(pfVar2 + 0xe) = uVar38;
          *(undefined8 *)(pfVar2 + 0xc) = uVar37;
          *(undefined8 *)(pfVar2 + 6) = uVar5;
          *(undefined8 *)(pfVar2 + 4) = uVar14;
          lVar20 = *(long *)(puVar12 + 0x414) + lVar18;
          uVar14 = *(undefined8 *)(psVar21 + 0x21);
          uVar5 = *(undefined8 *)(psVar21 + 0x25);
          uVar6 = *(undefined8 *)(psVar21 + 0x29);
          uVar7 = *(undefined8 *)(psVar21 + 0x2d);
          uVar38 = *(undefined8 *)(psVar21 + 0x35);
          uVar37 = *(undefined8 *)(psVar21 + 0x31);
          uVar39 = *(undefined8 *)(psVar21 + 0x37);
          *(undefined8 *)(lVar20 + 0x84) = *(undefined8 *)(psVar21 + 0x3b);
          *(undefined8 *)(lVar20 + 0x7c) = uVar39;
          *(undefined8 *)(lVar20 + 0x68) = uVar7;
          *(undefined8 *)(lVar20 + 0x60) = uVar6;
          *(undefined8 *)(lVar20 + 0x78) = uVar38;
          *(undefined8 *)(lVar20 + 0x70) = uVar37;
          *(undefined8 *)(lVar20 + 0x58) = uVar5;
          *(undefined8 *)(lVar20 + 0x50) = uVar14;
          uVar19 = uVar19 + 1;
          lVar20 = *(long *)(puVar12 + 0x414);
          psVar21 = psVar21 + 0x3f;
          lVar18 = lVar18 + 0x90;
        } while (uVar19 < (ulong)((*(long *)(puVar12 + 0x416) - lVar20 >> 4) * -0x71c71c71c71c71c7))
        ;
LAB_1095c14c0:
        __ZdlPv(psVar26);
      }
      if (psVar24 != (short *)0x0) {
        __ZdlPv(psVar24);
      }
      if (psVar22 != (short *)0x0) {
        __ZdlPv(psVar22);
      }
      if (psVar13 != (short *)0x0) {
        __ZdlPv(psVar13);
      }
      FUN_1095bfd88(puVar12,puVar12 + 0x41a,puVar12 + 0x402,1,uVar15);
      FUN_1095bfd88(puVar12,puVar12 + 0x46c,puVar12 + 0x408,0,uVar15);
      if (*(char *)((long)puVar12 + 0x1001) != '\x01') {
        return (uint *)0x1;
      }
      FUN_1095c0584(puVar12,uVar15);
      if (((ulong)puVar12 & 1) != 0) {
        return (uint *)0x1;
      }
      if (iRam00000001132dfb08 < 5) {
        return (uint *)0x0;
      }
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      FUN_10926db08(&uStack_390);
      uStack_288 = CONCAT44(uStack_288._4_4_,3);
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_250 = uStack_250 & 0xffffffff00000000;
      func_0x000107c31940(auStack_3a8,&UNK_10f57563e);
      func_0x000107c31940(auStack_3c0,&UNK_10f500fc6);
      FUN_109671348(&uStack_390,5,auStack_3a8,auStack_3c0,0x13f);
      FUN_1092b4db8();
      goto LAB_1095c0ec0;
    }
    if (iRam00000001132dfb08 < 1) {
      return (uint *)0x0;
    }
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    FUN_10926db08(&uStack_390);
    uStack_288 = CONCAT44(uStack_288._4_4_,3);
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_250 = uStack_250 & 0xffffffff00000000;
    func_0x000107c31940(auStack_3a8,&UNK_10f57563e);
    func_0x000107c31940(auStack_3c0,&UNK_10f575760);
    FUN_109671348(&uStack_390,1,auStack_3a8,auStack_3c0,0x18c);
    FUN_1092b4db8();
  }
  if (cStack_3a9 < '\0') {
    __ZdlPv(auStack_3c0[0]);
  }
  if (cStack_391 < '\0') {
    __ZdlPv(auStack_3a8[0]);
  }
  FUN_109671170(&uStack_390);
  if (iRam00000001132dfb08 < 5) {
    return (uint *)0x0;
  }
  uStack_250 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  FUN_10926db08(&uStack_390);
  uStack_288 = CONCAT44(uStack_288._4_4_,3);
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_250 = uStack_250 & 0xffffffff00000000;
  func_0x000107c31940(auStack_3a8,&UNK_10f57563e);
  func_0x000107c31940(auStack_3c0,&UNK_10f500fc6);
  FUN_109671348(&uStack_390,5,auStack_3a8,auStack_3c0,0x134);
  FUN_1092b4db8();
LAB_1095c0ec0:
  if (cStack_3a9 < '\0') {
    __ZdlPv(auStack_3c0[0]);
  }
  if (cStack_391 < '\0') {
    __ZdlPv(auStack_3a8[0]);
  }
  FUN_109671170(&uStack_390);
  return (uint *)0x0;
}



/* Entry: 1095c0ae0; end: 1095c1707;  */

undefined8
FUN_1095c0ae0(ulong param_1,long *param_2,undefined1 param_3,int param_4,undefined8 param_5)

{
  float *pfVar1;
  short sVar2;
  code *pcVar3;
  short *psVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  short *psVar18;
  short *psVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  short *psStack_210;
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
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
  ulong uStack_80;
  
  *(undefined1 *)(param_1 + 0x1000) = param_3;
  lVar10 = *param_2;
  if ((ulong)(param_2[1] - lVar10) < 0x1000) {
    if (iRam00000001132dfb08 < 1) {
      return 0;
    }
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    FUN_10926db08(&uStack_1c0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1d8,&UNK_10f57563e);
    func_0x000107c31940(auStack_1f0,&UNK_10f575760);
    FUN_109671348(&uStack_1c0,1,auStack_1d8,auStack_1f0,0x16d);
    FUN_1092b4db8();
  }
  else {
    _memcpy(param_1,lVar10,0x1000);
    if (param_4 != 0) {
      if (3.1 <= *(float *)(param_1 + 0x10)) {
        uVar5 = 1;
      }
      else {
        if (0 < iRam00000001132dfb08) {
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_188 = 0;
          uStack_190 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          FUN_10926db08(&uStack_1c0);
          uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_80 = uStack_80 & 0xffffffff00000000;
          func_0x000107c31940(auStack_1d8,&UNK_10f57563e);
          func_0x000107c31940(auStack_1f0,&UNK_10f575760);
          FUN_109671348(&uStack_1c0,1,auStack_1d8,auStack_1f0,0x17a);
          FUN_1092b4db8();
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf(*(undefined4 *)(param_1 + 0x10));
          FUN_1092b4db8();
          if (cStack_1d9 < '\0') {
            __ZdlPv(auStack_1f0[0]);
          }
          if (cStack_1c1 < '\0') {
            __ZdlPv(auStack_1d8[0]);
          }
          FUN_109671170(&uStack_1c0);
        }
        uVar5 = 0;
      }
      *(undefined1 *)(param_1 + 0x1001) = uVar5;
    }
    iVar6 = (int)*(float *)(param_1 + 0x348);
    iVar17 = (int)*(float *)(param_1 + 0x34c);
    uVar8 = iVar17 + iVar6;
    fVar27 = *(float *)(param_1 + 0x10);
    if (3.1 <= fVar27) {
      uVar8 = uVar8 + (int)*(float *)(param_1 + 0x350) + (int)*(float *)(param_1 + 0x354);
    }
    if ((ulong)uVar8 + 0x1000 <= (ulong)(param_2[1] - *param_2)) {
      if (iVar6 == 0) {
        psVar16 = (short *)0x0;
        psVar11 = (short *)0x0;
        psVar4 = (short *)0x0;
      }
      else {
        if (iVar6 < 0) {
          FUN_1095c30cc();
          goto LAB_1095c162c;
        }
        psVar16 = (short *)((long)iVar6 * 0x7e);
        psVar4 = psVar16;
        __Znwm();
        _bzero();
        psVar11 = psVar4 + ((ulong)(psVar16 + -0x3f) / 0x7e) * 0x3f + 0x3f;
      }
      _memcpy(psVar4,lVar10 + 0x1000,psVar16);
      if (iVar17 == 0) {
        psVar19 = (short *)0x0;
        psVar13 = (short *)0x0;
        psVar12 = (short *)0x0;
      }
      else {
        if (iVar17 < 0) {
          FUN_1095c30cc();
          goto LAB_1095c162c;
        }
        psVar19 = (short *)((long)iVar17 * 0x7e);
        psVar12 = psVar19;
        __Znwm();
        _bzero();
        psVar13 = psVar12 + ((ulong)(psVar19 + -0x3f) / 0x7e) * 0x3f + 0x3f;
      }
      lVar10 = lVar10 + 0x1000 + (long)psVar16;
      _memcpy(psVar12,lVar10,psVar19);
      if (3.1 <= fVar27) {
        iVar6 = (int)*(float *)(param_1 + 0x350);
        if (iVar6 == 0) {
          psVar16 = (short *)0x0;
          psVar14 = (short *)0x0;
          psStack_210 = (short *)0x0;
        }
        else {
          if (iVar6 < 0) {
            FUN_1095c30cc();
            goto LAB_1095c162c;
          }
          psVar16 = (short *)((long)iVar6 * 0x7e);
          psVar14 = psVar16;
          __Znwm();
          _bzero();
          psStack_210 = psVar14 + ((ulong)(psVar16 + -0x3f) / 0x7e) * 0x3f + 0x3f;
        }
        lVar10 = lVar10 + (long)psVar19;
        _memcpy(psVar14,lVar10,psVar16);
        iVar6 = (int)*(float *)(param_1 + 0x354);
        if (iVar6 == 0) {
          psVar18 = (short *)0x0;
          psVar15 = (short *)0x0;
          psVar19 = (short *)0x0;
        }
        else {
          if (iVar6 < 0) {
            FUN_1095c30cc();
LAB_1095c162c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1095c1630);
            (*pcVar3)();
          }
          psVar18 = (short *)((long)iVar6 * 0x7e);
          psVar15 = psVar18;
          __Znwm();
          _bzero();
          psVar19 = psVar15 + ((ulong)(psVar18 + -0x3f) / 0x7e) * 0x3f + 0x3f;
        }
        _memcpy(psVar15,lVar10 + (long)psVar16,psVar18);
      }
      else {
        psVar14 = (short *)0x0;
        psStack_210 = (short *)0x0;
        psVar15 = (short *)0x0;
        psVar19 = (short *)0x0;
      }
      FUN_1095c30e0(param_1 + 0x1008,((long)psVar11 - (long)psVar4 >> 1) * -0x1041041041041041);
      _bzero(*(long *)(param_1 + 0x1008),*(long *)(param_1 + 0x1010) - *(long *)(param_1 + 0x1008));
      lVar10 = *(long *)(param_1 + 0x1008);
      if (*(long *)(param_1 + 0x1010) != lVar10) {
        lVar7 = 0;
        uVar9 = 0;
        psVar11 = psVar4;
        do {
          sVar2 = *psVar11;
          pfVar1 = (float *)(lVar10 + lVar7);
          *(short *)(pfVar1 + 1) = sVar2;
          *(undefined4 *)((long)pfVar1 + 6) = *(undefined4 *)(psVar11 + 1);
          *pfVar1 = (float)(uint)((int)sVar2 * (int)sVar2);
          uVar21 = *(undefined8 *)(psVar11 + 7);
          uVar20 = *(undefined8 *)(psVar11 + 3);
          uVar23 = *(undefined8 *)(psVar11 + 0xf);
          uVar22 = *(undefined8 *)(psVar11 + 0xb);
          uVar25 = *(undefined8 *)(psVar11 + 0x17);
          uVar24 = *(undefined8 *)(psVar11 + 0x13);
          uVar26 = *(undefined8 *)(psVar11 + 0x19);
          *(undefined8 *)(pfVar1 + 0x11) = *(undefined8 *)(psVar11 + 0x1d);
          *(undefined8 *)(pfVar1 + 0xf) = uVar26;
          *(undefined8 *)(pfVar1 + 10) = uVar23;
          *(undefined8 *)(pfVar1 + 8) = uVar22;
          *(undefined8 *)(pfVar1 + 0xe) = uVar25;
          *(undefined8 *)(pfVar1 + 0xc) = uVar24;
          *(undefined8 *)(pfVar1 + 6) = uVar21;
          *(undefined8 *)(pfVar1 + 4) = uVar20;
          lVar10 = *(long *)(param_1 + 0x1008) + lVar7;
          uVar21 = *(undefined8 *)(psVar11 + 0x25);
          uVar20 = *(undefined8 *)(psVar11 + 0x21);
          uVar23 = *(undefined8 *)(psVar11 + 0x2d);
          uVar22 = *(undefined8 *)(psVar11 + 0x29);
          uVar25 = *(undefined8 *)(psVar11 + 0x35);
          uVar24 = *(undefined8 *)(psVar11 + 0x31);
          uVar26 = *(undefined8 *)(psVar11 + 0x37);
          *(undefined8 *)(lVar10 + 0x84) = *(undefined8 *)(psVar11 + 0x3b);
          *(undefined8 *)(lVar10 + 0x7c) = uVar26;
          *(undefined8 *)(lVar10 + 0x68) = uVar23;
          *(undefined8 *)(lVar10 + 0x60) = uVar22;
          *(undefined8 *)(lVar10 + 0x78) = uVar25;
          *(undefined8 *)(lVar10 + 0x70) = uVar24;
          *(undefined8 *)(lVar10 + 0x58) = uVar21;
          *(undefined8 *)(lVar10 + 0x50) = uVar20;
          uVar9 = uVar9 + 1;
          lVar10 = *(long *)(param_1 + 0x1008);
          psVar11 = psVar11 + 0x3f;
          lVar7 = lVar7 + 0x90;
        } while (uVar9 < (ulong)((*(long *)(param_1 + 0x1010) - lVar10 >> 4) * -0x71c71c71c71c71c7))
        ;
      }
      FUN_1095c30e0(param_1 + 0x1020,((long)psVar13 - (long)psVar12 >> 1) * -0x1041041041041041);
      _bzero(*(long *)(param_1 + 0x1020),*(long *)(param_1 + 0x1028) - *(long *)(param_1 + 0x1020));
      lVar10 = *(long *)(param_1 + 0x1020);
      if (*(long *)(param_1 + 0x1028) != lVar10) {
        lVar7 = 0;
        uVar9 = 0;
        psVar11 = psVar12;
        do {
          sVar2 = *psVar11;
          pfVar1 = (float *)(lVar10 + lVar7);
          *(short *)(pfVar1 + 1) = sVar2;
          *(undefined4 *)((long)pfVar1 + 6) = *(undefined4 *)(psVar11 + 1);
          *pfVar1 = (float)(uint)((int)sVar2 * (int)sVar2);
          uVar21 = *(undefined8 *)(psVar11 + 7);
          uVar20 = *(undefined8 *)(psVar11 + 3);
          uVar23 = *(undefined8 *)(psVar11 + 0xf);
          uVar22 = *(undefined8 *)(psVar11 + 0xb);
          uVar25 = *(undefined8 *)(psVar11 + 0x17);
          uVar24 = *(undefined8 *)(psVar11 + 0x13);
          uVar26 = *(undefined8 *)(psVar11 + 0x19);
          *(undefined8 *)(pfVar1 + 0x11) = *(undefined8 *)(psVar11 + 0x1d);
          *(undefined8 *)(pfVar1 + 0xf) = uVar26;
          *(undefined8 *)(pfVar1 + 10) = uVar23;
          *(undefined8 *)(pfVar1 + 8) = uVar22;
          *(undefined8 *)(pfVar1 + 0xe) = uVar25;
          *(undefined8 *)(pfVar1 + 0xc) = uVar24;
          *(undefined8 *)(pfVar1 + 6) = uVar21;
          *(undefined8 *)(pfVar1 + 4) = uVar20;
          lVar10 = *(long *)(param_1 + 0x1020) + lVar7;
          uVar21 = *(undefined8 *)(psVar11 + 0x25);
          uVar20 = *(undefined8 *)(psVar11 + 0x21);
          uVar23 = *(undefined8 *)(psVar11 + 0x2d);
          uVar22 = *(undefined8 *)(psVar11 + 0x29);
          uVar25 = *(undefined8 *)(psVar11 + 0x35);
          uVar24 = *(undefined8 *)(psVar11 + 0x31);
          uVar26 = *(undefined8 *)(psVar11 + 0x37);
          *(undefined8 *)(lVar10 + 0x84) = *(undefined8 *)(psVar11 + 0x3b);
          *(undefined8 *)(lVar10 + 0x7c) = uVar26;
          *(undefined8 *)(lVar10 + 0x68) = uVar23;
          *(undefined8 *)(lVar10 + 0x60) = uVar22;
          *(undefined8 *)(lVar10 + 0x78) = uVar25;
          *(undefined8 *)(lVar10 + 0x70) = uVar24;
          *(undefined8 *)(lVar10 + 0x58) = uVar21;
          *(undefined8 *)(lVar10 + 0x50) = uVar20;
          uVar9 = uVar9 + 1;
          lVar10 = *(long *)(param_1 + 0x1020);
          psVar11 = psVar11 + 0x3f;
          lVar7 = lVar7 + 0x90;
        } while (uVar9 < (ulong)((*(long *)(param_1 + 0x1028) - lVar10 >> 4) * -0x71c71c71c71c71c7))
        ;
      }
      *(undefined4 *)(param_1 + 0x10d4) = *(undefined4 *)(param_1 + 0x3f4);
      *(undefined4 *)(param_1 + 0x10d8) = *(undefined4 *)(param_1 + 0x3f8);
      *(undefined4 *)(param_1 + 0x121c) = *(undefined4 *)(param_1 + 0x3fc);
      *(undefined4 *)(param_1 + 0x1220) = *(undefined4 *)(param_1 + 0x400);
      if (*(float *)(param_1 + 0x10) < 3.1) {
LAB_1095c14bc:
        if (psVar15 != (short *)0x0) goto LAB_1095c14c0;
      }
      else {
        FUN_1095c30e0(param_1 + 0x1038,
                      ((long)psStack_210 - (long)psVar14 >> 1) * -0x1041041041041041);
        _bzero(*(long *)(param_1 + 0x1038),*(long *)(param_1 + 0x1040) - *(long *)(param_1 + 0x1038)
              );
        lVar10 = *(long *)(param_1 + 0x1038);
        if (*(long *)(param_1 + 0x1040) != lVar10) {
          lVar7 = 0;
          uVar9 = 0;
          psVar11 = psVar14;
          do {
            sVar2 = *psVar11;
            pfVar1 = (float *)(lVar10 + lVar7);
            *(short *)(pfVar1 + 1) = sVar2;
            *(undefined4 *)((long)pfVar1 + 6) = *(undefined4 *)(psVar11 + 1);
            *pfVar1 = (float)(uint)((int)sVar2 * (int)sVar2);
            uVar21 = *(undefined8 *)(psVar11 + 7);
            uVar20 = *(undefined8 *)(psVar11 + 3);
            uVar23 = *(undefined8 *)(psVar11 + 0xf);
            uVar22 = *(undefined8 *)(psVar11 + 0xb);
            uVar25 = *(undefined8 *)(psVar11 + 0x17);
            uVar24 = *(undefined8 *)(psVar11 + 0x13);
            uVar26 = *(undefined8 *)(psVar11 + 0x19);
            *(undefined8 *)(pfVar1 + 0x11) = *(undefined8 *)(psVar11 + 0x1d);
            *(undefined8 *)(pfVar1 + 0xf) = uVar26;
            *(undefined8 *)(pfVar1 + 10) = uVar23;
            *(undefined8 *)(pfVar1 + 8) = uVar22;
            *(undefined8 *)(pfVar1 + 0xe) = uVar25;
            *(undefined8 *)(pfVar1 + 0xc) = uVar24;
            *(undefined8 *)(pfVar1 + 6) = uVar21;
            *(undefined8 *)(pfVar1 + 4) = uVar20;
            lVar10 = *(long *)(param_1 + 0x1038) + lVar7;
            uVar21 = *(undefined8 *)(psVar11 + 0x25);
            uVar20 = *(undefined8 *)(psVar11 + 0x21);
            uVar23 = *(undefined8 *)(psVar11 + 0x2d);
            uVar22 = *(undefined8 *)(psVar11 + 0x29);
            uVar25 = *(undefined8 *)(psVar11 + 0x35);
            uVar24 = *(undefined8 *)(psVar11 + 0x31);
            uVar26 = *(undefined8 *)(psVar11 + 0x37);
            *(undefined8 *)(lVar10 + 0x84) = *(undefined8 *)(psVar11 + 0x3b);
            *(undefined8 *)(lVar10 + 0x7c) = uVar26;
            *(undefined8 *)(lVar10 + 0x68) = uVar23;
            *(undefined8 *)(lVar10 + 0x60) = uVar22;
            *(undefined8 *)(lVar10 + 0x78) = uVar25;
            *(undefined8 *)(lVar10 + 0x70) = uVar24;
            *(undefined8 *)(lVar10 + 0x58) = uVar21;
            *(undefined8 *)(lVar10 + 0x50) = uVar20;
            uVar9 = uVar9 + 1;
            lVar10 = *(long *)(param_1 + 0x1038);
            psVar11 = psVar11 + 0x3f;
            lVar7 = lVar7 + 0x90;
          } while (uVar9 < (ulong)((*(long *)(param_1 + 0x1040) - lVar10 >> 4) * -0x71c71c71c71c71c7
                                  ));
        }
        FUN_1095c30e0(param_1 + 0x1050,((long)psVar19 - (long)psVar15 >> 1) * -0x1041041041041041);
        _bzero(*(long *)(param_1 + 0x1050),*(long *)(param_1 + 0x1058) - *(long *)(param_1 + 0x1050)
              );
        lVar10 = *(long *)(param_1 + 0x1050);
        if (*(long *)(param_1 + 0x1058) == lVar10) goto LAB_1095c14bc;
        lVar7 = 0;
        uVar9 = 0;
        psVar11 = psVar15;
        do {
          sVar2 = *psVar11;
          pfVar1 = (float *)(lVar10 + lVar7);
          *(short *)(pfVar1 + 1) = sVar2;
          *(undefined4 *)((long)pfVar1 + 6) = *(undefined4 *)(psVar11 + 1);
          *pfVar1 = (float)(uint)((int)sVar2 * (int)sVar2);
          uVar21 = *(undefined8 *)(psVar11 + 7);
          uVar20 = *(undefined8 *)(psVar11 + 3);
          uVar23 = *(undefined8 *)(psVar11 + 0xf);
          uVar22 = *(undefined8 *)(psVar11 + 0xb);
          uVar25 = *(undefined8 *)(psVar11 + 0x17);
          uVar24 = *(undefined8 *)(psVar11 + 0x13);
          uVar26 = *(undefined8 *)(psVar11 + 0x19);
          *(undefined8 *)(pfVar1 + 0x11) = *(undefined8 *)(psVar11 + 0x1d);
          *(undefined8 *)(pfVar1 + 0xf) = uVar26;
          *(undefined8 *)(pfVar1 + 10) = uVar23;
          *(undefined8 *)(pfVar1 + 8) = uVar22;
          *(undefined8 *)(pfVar1 + 0xe) = uVar25;
          *(undefined8 *)(pfVar1 + 0xc) = uVar24;
          *(undefined8 *)(pfVar1 + 6) = uVar21;
          *(undefined8 *)(pfVar1 + 4) = uVar20;
          lVar10 = *(long *)(param_1 + 0x1050) + lVar7;
          uVar21 = *(undefined8 *)(psVar11 + 0x25);
          uVar20 = *(undefined8 *)(psVar11 + 0x21);
          uVar23 = *(undefined8 *)(psVar11 + 0x2d);
          uVar22 = *(undefined8 *)(psVar11 + 0x29);
          uVar25 = *(undefined8 *)(psVar11 + 0x35);
          uVar24 = *(undefined8 *)(psVar11 + 0x31);
          uVar26 = *(undefined8 *)(psVar11 + 0x37);
          *(undefined8 *)(lVar10 + 0x84) = *(undefined8 *)(psVar11 + 0x3b);
          *(undefined8 *)(lVar10 + 0x7c) = uVar26;
          *(undefined8 *)(lVar10 + 0x68) = uVar23;
          *(undefined8 *)(lVar10 + 0x60) = uVar22;
          *(undefined8 *)(lVar10 + 0x78) = uVar25;
          *(undefined8 *)(lVar10 + 0x70) = uVar24;
          *(undefined8 *)(lVar10 + 0x58) = uVar21;
          *(undefined8 *)(lVar10 + 0x50) = uVar20;
          uVar9 = uVar9 + 1;
          lVar10 = *(long *)(param_1 + 0x1050);
          psVar11 = psVar11 + 0x3f;
          lVar7 = lVar7 + 0x90;
        } while (uVar9 < (ulong)((*(long *)(param_1 + 0x1058) - lVar10 >> 4) * -0x71c71c71c71c71c7))
        ;
LAB_1095c14c0:
        __ZdlPv(psVar15);
      }
      if (psVar14 != (short *)0x0) {
        __ZdlPv(psVar14);
      }
      if (psVar12 != (short *)0x0) {
        __ZdlPv(psVar12);
      }
      if (psVar4 != (short *)0x0) {
        __ZdlPv(psVar4);
      }
      FUN_1095bfd88(param_1,param_1 + 0x1068,param_1 + 0x1008,1,param_5);
      FUN_1095bfd88(param_1,param_1 + 0x11b0,param_1 + 0x1020,0,param_5);
      if (*(char *)(param_1 + 0x1001) != '\x01') {
        return 1;
      }
      FUN_1095c0584(param_1,param_5);
      if ((param_1 & 1) != 0) {
        return 1;
      }
      if (iRam00000001132dfb08 < 5) {
        return 0;
      }
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      FUN_10926db08(&uStack_1c0);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1d8,&UNK_10f57563e);
      func_0x000107c31940(auStack_1f0,&UNK_10f500fc6);
      FUN_109671348(&uStack_1c0,5,auStack_1d8,auStack_1f0,0x13f);
      FUN_1092b4db8();
      goto LAB_1095c0ec0;
    }
    if (iRam00000001132dfb08 < 1) {
      return 0;
    }
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    FUN_10926db08(&uStack_1c0);
    uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    func_0x000107c31940(auStack_1d8,&UNK_10f57563e);
    func_0x000107c31940(auStack_1f0,&UNK_10f575760);
    FUN_109671348(&uStack_1c0,1,auStack_1d8,auStack_1f0,0x18c);
    FUN_1092b4db8();
  }
  if (cStack_1d9 < '\0') {
    __ZdlPv(auStack_1f0[0]);
  }
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  FUN_109671170(&uStack_1c0);
  if (iRam00000001132dfb08 < 5) {
    return 0;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  FUN_10926db08(&uStack_1c0);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,3);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  func_0x000107c31940(auStack_1d8,&UNK_10f57563e);
  func_0x000107c31940(auStack_1f0,&UNK_10f500fc6);
  FUN_109671348(&uStack_1c0,5,auStack_1d8,auStack_1f0,0x134);
  FUN_1092b4db8();
LAB_1095c0ec0:
  if (cStack_1d9 < '\0') {
    __ZdlPv(auStack_1f0[0]);
  }
  if (cStack_1c1 < '\0') {
    __ZdlPv(auStack_1d8[0]);
  }
  FUN_109671170(&uStack_1c0);
  return 0;
}



/* Entry: 1095c1708; end: 1095c1aaf;  */

undefined ***
FUN_1095c1708(undefined ***param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  undefined ***pppuVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  undefined8 auStack_410 [2];
  char cStack_3f9;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  long lStack_3e0;
  long lStack_3d8;
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
  ulong uStack_360;
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  uint auStack_278 [98];
  undefined **appuStack_f0 [6];
  undefined8 uStack_c0;
  undefined8 uStack_68;
  undefined4 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  uStack_c0 = 0;
  appuStack_f0[0] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfe0;
  ppuStack_298 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_11087cfb8;
  uStack_290 = 0;
  __ZNSt3__18ios_base4initEPv(appuStack_f0,auStack_288);
  uStack_68 = 0;
  uStack_60 = 0xffffffff;
  ppuStack_298 = &PTR_DAT_11087cf48;
  appuStack_f0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28024(auStack_288);
  puVar4 = auStack_288;
  func_0x000107c28028(puVar4,plVar2,0xc);
  if (puVar4 == (undefined1 *)0x0) {
    __ZNSt3__18ios_base5clearEj
              ((undefined *)((long)&ppuStack_298 + (long)ppuStack_298[-3]),
               *(uint *)((long)auStack_278 + (long)ppuStack_298[-3]) | 4);
  }
  if ((*(byte *)((long)auStack_278 + (long)ppuStack_298[-3]) & 5) == 0) {
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgExNS_8ios_base7seekdirE(&ppuStack_298,0,2)
    ;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5tellgEv(&lStack_3e0,&ppuStack_298);
    uVar8 = uStack_360 & 0xffffffff;
    uStack_360 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    lStack_3d8 = 0;
    lStack_3e0 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE5seekgENS_4fposI11__mbstate_tEE
              (&ppuStack_298,&lStack_3e0);
    FUN_109246310(&lStack_3e0,uVar8);
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(&ppuStack_298,lStack_3e0,uVar8);
    puVar4 = auStack_288;
    func_0x000107c27ffc();
    if (puVar4 == (undefined1 *)0x0) {
      __ZNSt3__18ios_base5clearEj
                ((undefined *)((long)&ppuStack_298 + (long)ppuStack_298[-3]),
                 *(uint *)((long)auStack_278 + (long)ppuStack_298[-3]) | 4);
    }
    FUN_1095c0ae0(param_1,&lStack_3e0,param_3,param_4,param_5);
    if (lStack_3e0 != 0) {
      lStack_3d8 = lStack_3e0;
      __ZdlPv();
    }
  }
  else {
    if (0 < iRam00000001132dfb08) {
      uStack_2a0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      lStack_3d8 = 0;
      lStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      FUN_10926db08(&lStack_3e0);
      uStack_2d8 = CONCAT44(uStack_2d8._4_4_,3);
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
      func_0x000107c31940(auStack_3f8,&UNK_10f57563e);
      func_0x000107c31940(auStack_410,&UNK_10f500fc6);
      FUN_109671348(&lStack_3e0,1,auStack_3f8,auStack_410,0x14d);
      FUN_1092b4db8();
      if (cStack_3f9 < '\0') {
        __ZdlPv(auStack_410[0]);
      }
      if (cStack_3e1 < '\0') {
        __ZdlPv(auStack_3f8[0]);
      }
      FUN_109671170(&lStack_3e0);
    }
    param_1 = (undefined ***)0x0;
  }
  ppuStack_298 = &PTR_DAT_11087cf48;
  appuStack_f0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_288);
  ppuVar6 = &PTR_PTR_11087cf88;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_298);
  pppuVar5 = appuStack_f0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107c2803c(&ppuStack_298);
  __Unwind_Resume();
  if ((long)ppuVar6 - (long)pppuVar5 != 0) {
    uVar7 = ((long)ppuVar6 - (long)pppuVar5 >> 4) * -0x71c71c71c71c71c7;
    pppuVar9 = pppuVar5 + 0x13;
    uVar13 = 0;
    uVar15 = 0;
    uVar17 = 0;
    uVar19 = 0;
    uVar10 = 0;
    uVar8 = uVar7;
    do {
      uVar8 = uVar8 - 1;
      uVar1 = uVar10 + 1;
      if (uVar1 < uVar7) {
        pppuVar11 = pppuVar9;
        uVar12 = uVar8;
        uVar14 = uVar13;
        uVar16 = uVar15;
        uVar18 = uVar17;
        uVar20 = uVar19;
        do {
          iVar3 = (int)*(short *)((long)pppuVar5 + uVar10 * 0x90 + 6) -
                  (int)*(short *)((long)pppuVar11 + -2);
          fVar21 = (float)(uint)(iVar3 * iVar3) +
                   (float)(uint)(((int)*(short *)(pppuVar5 + uVar10 * 0x12 + 1) -
                                 (int)*(short *)pppuVar11) *
                                ((int)*(short *)(pppuVar5 + uVar10 * 0x12 + 1) -
                                (int)*(short *)pppuVar11));
          uVar13 = SUB41(fVar21,0);
          uVar15 = (char)((uint)fVar21 >> 8);
          uVar17 = (char)((uint)fVar21 >> 0x10);
          uVar19 = (char)((uint)fVar21 >> 0x18);
          if (fVar21 <= (float)CONCAT13(uVar20,CONCAT12(uVar18,CONCAT11(uVar16,uVar14)))) {
            uVar13 = uVar14;
            uVar15 = uVar16;
            uVar17 = uVar18;
            uVar19 = uVar20;
          }
          pppuVar11 = pppuVar11 + 0x12;
          uVar12 = uVar12 - 1;
          uVar14 = uVar13;
          uVar16 = uVar15;
          uVar18 = uVar17;
          uVar20 = uVar19;
        } while (uVar12 != 0);
      }
      pppuVar9 = pppuVar9 + 0x12;
      uVar10 = uVar1;
    } while (uVar1 != uVar7);
    return pppuVar5;
  }
  return pppuVar5;
}



/* Entry: 1095c1ab0; end: 1095c1b67;  */

float FUN_1095c1ab0(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  short *psVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 - param_1 != 0) {
    uVar4 = (param_2 - param_1 >> 4) * -0x71c71c71c71c71c7;
    psVar6 = (short *)(param_1 + 0x98);
    fVar10 = 0.0;
    uVar7 = 0;
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 1;
      uVar1 = uVar7 + 1;
      if (uVar1 < uVar4) {
        lVar8 = param_1 + uVar7 * 0x90;
        psVar9 = psVar6;
        uVar7 = uVar5;
        fVar11 = fVar10;
        do {
          iVar2 = (int)*(short *)(lVar8 + 6) - (int)psVar9[-1];
          iVar3 = (int)*(short *)(lVar8 + 8) - (int)*psVar9;
          fVar10 = (float)(uint)(iVar2 * iVar2) + (float)(uint)(iVar3 * iVar3);
          if (fVar10 <= fVar11) {
            fVar10 = fVar11;
          }
          psVar9 = psVar9 + 0x48;
          uVar7 = uVar7 - 1;
          fVar11 = fVar10;
        } while (uVar7 != 0);
      }
      psVar6 = psVar6 + 0x48;
      uVar7 = uVar1;
    } while (uVar1 != uVar4);
    return fVar10 * 0.0625;
  }
  return 0.0;
}



/* Entry: 1095c1b68; end: 1095c1c3b;  */

void FUN_1095c1b68(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_48 [8];
  
  iVar4 = (int)*(float *)(param_2 + 0x3d0);
  fVar5 = *(float *)(param_2 + 0x3d8);
  bVar3 = true;
  if ((!NAN(fVar5)) && (bVar3 = false, !NAN(fVar5) && !NAN(*(float *)(param_2 + 0xffc)))) {
    bVar3 = fVar5 == *(float *)(param_2 + 0xffc);
  }
  if (bVar3) {
    fVar5 = (*(float *)(param_2 + 0x54) / *(float *)(param_2 + 0x50)) * (float)iVar4;
  }
  FUN_1095c1f30(auStack_48,param_2);
  lVar1 = 0x3f4;
  if (param_3 == 0) {
    lVar1 = 0x3fc;
  }
  lVar2 = 0x3f8;
  if (param_3 == 0) {
    lVar2 = 0x400;
  }
  fVar6 = (float)*(undefined8 *)(param_2 + 0x128);
  *param_1 = CONCAT44((auStack_48._4_4_ - iVar4) +
                      (int)(float)(int)(*(float *)(param_2 + lVar2) * fVar6),
                      (auStack_48._0_4_ - (int)fVar5) +
                      (int)(float)(int)(*(float *)(param_2 + lVar1) * fVar6));
  *(int *)(param_1 + 1) = (int)fVar5 << 1;
  *(int *)((long)param_1 + 0xc) = iVar4 << 1;
  return;
}



/* Entry: 1095c1c3c; end: 1095c1c43;  */

void FUN_1095c1c3c(void)

{
  return;
}



/* Entry: 1095c1c44; end: 1095c1e0f;  */

void FUN_1095c1c44(float param_1,undefined8 param_2,double *param_3,undefined8 param_4)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  double *pdStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pdVar1 = &dStack_c0;
  puStack_80 = (undefined1 *)&dStack_c0;
  uStack_98 = param_4;
  if (0.001 <= 3.4 - param_1) {
    auVar2 = NEON_fmov(0xbff0000000000000,8);
    dStack_a8 = param_3[3];
    dStack_b0 = param_3[2];
    dStack_c0 = *param_3 + auVar2._0_8_;
    dStack_b8 = param_3[1] + auVar2._8_8_;
    uStack_60 = 0;
    auStack_70[0] = 0x1010000;
    auStack_88[0] = 0xc1020006;
    uStack_78 = 0x400000001;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x2010000);
    uStack_90 = 0;
    uStack_58 = 0x3ff0000000000000;
    pdStack_68 = (double *)param_2;
    FUN_109a91d90();
    FUN_109a293c4(auStack_70,auStack_88,&uStack_a0,param_2,0xffffffff,&PTR_FUN_1132e8c90,1,
                  &uStack_58);
  }
  else {
    dStack_b0 = 0.0;
    dStack_c0 = (double)CONCAT44(dStack_c0._4_4_,0x1010000);
    auStack_70[0] = 0xc1020006;
    uStack_60 = 0x400000001;
    auStack_88[0] = 0x2010000;
    uStack_78 = 0;
    uStack_a0 = 0x3ff0000000000000;
    dStack_b8 = (double)param_2;
    puStack_80 = (undefined1 *)param_4;
    pdStack_68 = param_3;
    FUN_109a91d90();
    FUN_109a293c4(&dStack_c0,auStack_70,auStack_88,param_2,0xffffffff,&PTR_FUN_1132e8c90,1,
                  &uStack_a0);
    auVar2 = NEON_fmov(0x3fe0000000000000,8);
    dStack_b8 = auVar2._8_8_;
    dStack_c0 = auVar2._0_8_;
    dStack_b0 = 0.0;
    dStack_a8 = 0.0;
    uStack_60 = 0;
    auStack_70[0] = 0x1010000;
    auStack_88[0] = 0xc1020006;
    uStack_78 = 0x400000001;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x2010000);
    uStack_90 = 0;
    puStack_80 = (undefined1 *)&dStack_c0;
    pdStack_68 = (double *)param_4;
    FUN_109a91d90();
    FUN_109a293c4(auStack_70,auStack_88,&uStack_a0,pdVar1,0xffffffff,&PTR_DAT_1132e8c10,0,0);
    FUN_1095c329c((float)(*param_3 + -1.0),(float)(param_3[1] + -1.0),0,0,param_4);
  }
  return;
}



/* Entry: 1095c1e10; end: 1095c1eaf;  */

void FUN_1095c1e10(float *param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  float fVar2;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  int iStack_3c;
  
  fVar2 = *(float *)(param_2 + 0xe10);
  bVar1 = true;
  if ((!NAN(fVar2)) && (bVar1 = false, !NAN(fVar2) && !NAN(*(float *)(param_2 + 0xffc)))) {
    bVar1 = fVar2 == *(float *)(param_2 + 0xffc);
  }
  if (bVar1) {
    FUN_1095c1b68(&iStack_40,param_2);
    FUN_1095c1eb0(&fStack_48,param_2,param_3);
    fStack_44 = fStack_44 - (float)iStack_3c;
    fVar2 = fStack_44;
    if (*(float *)(param_2 + 4) != 1315.0) {
      fVar2 = fStack_48 - (float)iStack_40;
    }
  }
  else {
    fStack_44 = *(float *)(param_2 + 0xe18);
    fVar2 = *(float *)(param_2 + 0xe14);
  }
  *param_1 = fVar2;
  param_1[1] = fStack_44;
  return;
}



/* Entry: 1095c1eb0; end: 1095c1f2f;  */

void FUN_1095c1eb0(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_28;
  
  uVar5 = *(undefined8 *)(param_2 + 0x128);
  lVar1 = 0x3f4;
  if (param_3 == 0) {
    lVar1 = 0x3fc;
  }
  lVar2 = 0x3f8;
  if (param_3 == 0) {
    lVar2 = 0x400;
  }
  fVar3 = *(float *)(param_2 + lVar1);
  fVar6 = *(float *)(param_2 + lVar2);
  FUN_1095c1f30(&uStack_28);
  fVar4 = (float)uVar5;
  uVar5 = NEON_scvtf(uStack_28,4);
  *param_1 = CONCAT44(fVar6 * fVar4 + (float)((ulong)uVar5 >> 0x20) + -0.5,
                      fVar3 * fVar4 + (float)uVar5 + -0.5);
  return;
}



/* Entry: 1095c1f30; end: 1095c1fd3;  */

ulong FUN_1095c1f30(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  fVar7 = *(float *)(param_2 + 1000);
  if ((*(float *)(param_2 + 4) == 1315.0) && (((int)fVar7 & 1U) != 0)) {
    lVar4 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    lVar5 = lVar4;
    puVar6 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
    ___cxa_throw(lVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
    ___cxa_free_exception(lVar4);
    __Unwind_Resume();
    if (*(char *)((long)puVar6 + 0x17) < '\0') {
      *(undefined1 *)*puVar6 = 0;
      puVar6[1] = 0;
    }
    else {
      *(undefined1 *)puVar6 = 0;
      *(undefined1 *)((long)puVar6 + 0x17) = 0;
    }
    fVar7 = *(float *)(lVar5 + 4);
    if (fVar7 == 2000.0) {
      bVar3 = true;
      if ((*(float *)(lVar5 + 0x960) != *(float *)(lVar5 + 0xffc)) &&
         (bVar3 = true, !NAN(*(float *)(lVar5 + 0x960)))) {
        bVar3 = false;
      }
      puVar1 = (undefined *)(lVar5 + 0x960);
      if (bVar3) {
        puVar1 = &UNK_10f575885;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,puVar1,4);
      bVar3 = true;
      if ((*(float *)(lVar5 + 0x964) != *(float *)(lVar5 + 0xffc)) &&
         (bVar3 = true, !NAN(*(float *)(lVar5 + 0x964)))) {
        bVar3 = false;
      }
      puVar1 = (undefined *)(lVar5 + 0x964);
      if (bVar3) {
        puVar1 = &UNK_10f575885;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,puVar1,4);
      bVar3 = true;
      if ((*(float *)(lVar5 + 0x968) != *(float *)(lVar5 + 0xffc)) &&
         (bVar3 = true, !NAN(*(float *)(lVar5 + 0x968)))) {
        bVar3 = false;
      }
      puVar1 = (undefined *)(lVar5 + 0x968);
      if (bVar3) {
        puVar1 = &UNK_10f575885;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,puVar1,4);
      bVar3 = true;
      if ((*(float *)(lVar5 + 0x96c) != *(float *)(lVar5 + 0xffc)) &&
         (bVar3 = true, !NAN(*(float *)(lVar5 + 0x96c)))) {
        bVar3 = false;
      }
      puVar1 = (undefined *)(lVar5 + 0x96c);
      if (bVar3) {
        puVar1 = &UNK_10f575885;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,puVar1,4);
      bVar3 = true;
      if ((*(float *)(lVar5 + 0x970) != *(float *)(lVar5 + 0xffc)) &&
         (bVar3 = true, !NAN(*(float *)(lVar5 + 0x970)))) {
        bVar3 = false;
      }
      puVar1 = (undefined *)(lVar5 + 0x970);
      if (bVar3) {
        puVar1 = &UNK_10f575885;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar6,puVar1,4);
      puVar2 = (undefined8 *)*puVar6;
      if (-1 < *(char *)((long)puVar6 + 0x17)) {
        puVar2 = puVar6;
      }
      func_0x000107c31940(&uStack_78,puVar2);
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      puVar6[1] = uStack_70;
      *puVar6 = uStack_78;
      puVar6[2] = uStack_68;
    }
    return (ulong)(fVar7 == 2000.0);
  }
  fVar8 = (float)*(undefined8 *)(param_2 + 0x128);
  *param_1 = CONCAT44((int)(fVar7 * fVar8 * 0.5),
                      (int)(fVar7 * (*(float *)(param_2 + 0x54) / *(float *)(param_2 + 0x50)) *
                            fVar8 * 0.5));
  return param_2;
}



/* Entry: 1095c1fd4; end: 1095c2143;  */

bool FUN_1095c1fd4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  float fVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    *(undefined1 *)*param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((long)param_2 + 0x17) = 0;
  }
  fVar4 = *(float *)(param_1 + 4);
  if (fVar4 == 2000.0) {
    bVar3 = true;
    if ((*(float *)(param_1 + 0x960) != *(float *)(param_1 + 0xffc)) &&
       (bVar3 = true, !NAN(*(float *)(param_1 + 0x960)))) {
      bVar3 = false;
    }
    puVar1 = (undefined *)(param_1 + 0x960);
    if (bVar3) {
      puVar1 = &UNK_10f575885;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,puVar1,4);
    bVar3 = true;
    if ((*(float *)(param_1 + 0x964) != *(float *)(param_1 + 0xffc)) &&
       (bVar3 = true, !NAN(*(float *)(param_1 + 0x964)))) {
      bVar3 = false;
    }
    puVar1 = (undefined *)(param_1 + 0x964);
    if (bVar3) {
      puVar1 = &UNK_10f575885;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,puVar1,4);
    bVar3 = true;
    if ((*(float *)(param_1 + 0x968) != *(float *)(param_1 + 0xffc)) &&
       (bVar3 = true, !NAN(*(float *)(param_1 + 0x968)))) {
      bVar3 = false;
    }
    puVar1 = (undefined *)(param_1 + 0x968);
    if (bVar3) {
      puVar1 = &UNK_10f575885;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,puVar1,4);
    bVar3 = true;
    if ((*(float *)(param_1 + 0x96c) != *(float *)(param_1 + 0xffc)) &&
       (bVar3 = true, !NAN(*(float *)(param_1 + 0x96c)))) {
      bVar3 = false;
    }
    puVar1 = (undefined *)(param_1 + 0x96c);
    if (bVar3) {
      puVar1 = &UNK_10f575885;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,puVar1,4);
    bVar3 = true;
    if ((*(float *)(param_1 + 0x970) != *(float *)(param_1 + 0xffc)) &&
       (bVar3 = true, !NAN(*(float *)(param_1 + 0x970)))) {
      bVar3 = false;
    }
    puVar1 = (undefined *)(param_1 + 0x970);
    if (bVar3) {
      puVar1 = &UNK_10f575885;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,puVar1,4);
    puVar2 = (undefined8 *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      puVar2 = param_2;
    }
    func_0x000107c31940(&uStack_58,puVar2);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
    }
    param_2[1] = uStack_50;
    *param_2 = uStack_58;
    param_2[2] = uStack_48;
  }
  return fVar4 == 2000.0;
}



/* Entry: 1095c2144; end: 1095c263b;  */

/* WARNING: Possible PIC construction at 0x0001095c23e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001095c24ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001095c23e8) */
/* WARNING: Removing unreachable block (ram,0x0001095c23fc) */
/* WARNING: Removing unreachable block (ram,0x0001095c242c) */
/* WARNING: Removing unreachable block (ram,0x0001095c2430) */
/* WARNING: Removing unreachable block (ram,0x0001095c245c) */
/* WARNING: Removing unreachable block (ram,0x0001095c2464) */
/* WARNING: Removing unreachable block (ram,0x0001095c246c) */
/* WARNING: Removing unreachable block (ram,0x0001095c2474) */
/* WARNING: Removing unreachable block (ram,0x0001095c247c) */
/* WARNING: Removing unreachable block (ram,0x0001095c2484) */
/* WARNING: Removing unreachable block (ram,0x0001095c248c) */
/* WARNING: Removing unreachable block (ram,0x0001095c2494) */
/* WARNING: Removing unreachable block (ram,0x0001095c249c) */
/* WARNING: Removing unreachable block (ram,0x0001095c24a4) */
/* WARNING: Removing unreachable block (ram,0x0001095c24ac) */
/* WARNING: Removing unreachable block (ram,0x0001095c24f0) */
/* WARNING: Removing unreachable block (ram,0x0001095c24f8) */
/* WARNING: Removing unreachable block (ram,0x0001095c2500) */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */
/* WARNING: Removing unreachable block (ram,0x0001095c21f4) */

undefined8 **
FUN_1095c2144(undefined8 **param_1,ulong param_2,undefined8 **param_3,undefined8 param_4,
             long *param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 ******ppppppuVar5;
  bool bVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  ulong uVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 **unaff_x19;
  undefined8 unaff_x20;
  undefined8 **unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  undefined8 ******unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  float fVar16;
  undefined1 auStack_160 [8];
  undefined8 *****apppppuStack_158 [2];
  char cStack_141;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *****pppppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 *****pppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *****pppppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 *****pppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined1 uStack_51;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar9 = param_5[1];
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_5 + 0x17);
  }
  if (uVar9 == 0) {
    ppuVar14 = (undefined8 **)"";
  }
  else {
    pppppuStack_70 = (undefined8 ******)0x0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar9 = param_2;
    FUN_1095c1fd4(param_2,&pppppuStack_70);
    unaff_x19 = param_1;
    unaff_x21 = param_3;
    unaff_x29 = puVar1;
    unaff_x22 = param_5;
    unaff_x20 = param_4;
    if ((uVar9 & 1) == 0) {
      unaff_x30 = (undefined *)0x1095c24f0;
      register0x00000008 = (BADSPACEBASE *)auStack_160;
      ppuVar14 = (undefined8 **)"";
      unaff_x23 = param_2;
    }
    else {
      __ZNSt3__19to_stringEi(&pppppuStack_88,(int)(*(float *)(param_2 + 0x10) * 100.0));
      pppppuStack_a0 = (undefined8 ******)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      fVar16 = *(float *)(param_2 + 0xaf0);
      bVar6 = true;
      if ((!NAN(fVar16)) && (bVar6 = false, !NAN(fVar16) && !NAN(*(float *)(param_2 + 0xffc)))) {
        bVar6 = fVar16 == *(float *)(param_2 + 0xffc);
      }
      if (!bVar6) {
        __ZNSt3__19to_stringEi(&pppppuStack_c0,(int)fVar16);
        uStack_98 = uStack_b8;
        pppppuStack_a0 = pppppuStack_c0;
        uStack_90 = uStack_b0;
      }
      unaff_x23 = param_5[1];
      if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
        unaff_x23 = (ulong)*(byte *)((long)param_5 + 0x17);
      }
      func_0x000104c4f768(apppppuStack_158,unaff_x23 + 1,&uStack_51);
      unaff_x24 = (undefined8 ******)apppppuStack_158[0];
      if (-1 < cStack_141) {
        unaff_x24 = apppppuStack_158;
      }
      if (unaff_x23 != 0) {
        plVar2 = (long *)*param_5;
        if (-1 < *(char *)((long)param_5 + 0x17)) {
          plVar2 = param_5;
        }
        _memmove(unaff_x24,plVar2,unaff_x23);
      }
      *(undefined2 *)((long)unaff_x24 + unaff_x23) = 0x2f;
      uVar9 = uStack_68;
      ppppppuVar5 = (undefined8 ******)pppppuStack_70;
      if (-1 < (long)uStack_60) {
        uVar9 = uStack_60 >> 0x38;
        ppppppuVar5 = &pppppuStack_70;
      }
      ppppppuVar10 = apppppuStack_158;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppppuVar10,ppppppuVar5,uVar9);
      ppppuStack_138 = ppppppuVar10[1];
      ppppuStack_140 = *ppppppuVar10;
      ppppuStack_130 = ppppppuVar10[2];
      ppppppuVar10[1] = (undefined8 *****)0x0;
      ppppppuVar10[2] = (undefined8 *****)0x0;
      *ppppppuVar10 = (undefined8 *****)0x0;
      pppppuVar11 = &ppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar11,"_",1);
      pppuStack_118 = pppppuVar11[1];
      pppuStack_120 = *pppppuVar11;
      pppuStack_110 = pppppuVar11[2];
      pppppuVar11[1] = (undefined8 ****)0x0;
      pppppuVar11[2] = (undefined8 ****)0x0;
      *pppppuVar11 = (undefined8 ****)0x0;
      if (-1 < (char)bStack_71) {
        uStack_80 = (ulong)bStack_71;
        pppppuStack_88 = &pppppuStack_88;
      }
      ppppuVar12 = &pppuStack_120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppppuVar12,pppppuStack_88,uStack_80);
      ppuStack_f8 = ppppuVar12[1];
      ppuStack_100 = *ppppuVar12;
      ppuStack_f0 = ppppuVar12[2];
      ppppuVar12[1] = (undefined8 ***)0x0;
      ppppuVar12[2] = (undefined8 ***)0x0;
      *ppppuVar12 = (undefined8 ***)0x0;
      pppuVar13 = &ppuStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar13,"_",1);
      puStack_d8 = pppuVar13[1];
      puStack_e0 = *pppuVar13;
      puStack_d0 = pppuVar13[2];
      pppuVar13[1] = (undefined8 **)0x0;
      pppuVar13[2] = (undefined8 **)0x0;
      *pppuVar13 = (undefined8 **)0x0;
      puVar3 = (undefined8 *)uStack_98;
      ppppppuVar5 = (undefined8 ******)pppppuStack_a0;
      if (-1 < (long)uStack_90) {
        puVar3 = (undefined8 *)(uStack_90 >> 0x38);
        ppppppuVar5 = &pppppuStack_a0;
      }
      ppuVar14 = &puStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (ppuVar14,ppppppuVar5,puVar3);
      uStack_b8 = (ulong)ppuVar14[1];
      pppppuStack_c0 = (undefined8 *****)*ppuVar14;
      uStack_b0 = (ulong)ppuVar14[2];
      ppuVar14[1] = (undefined8 *)0x0;
      ppuVar14[2] = (undefined8 *)0x0;
      *ppuVar14 = (undefined8 *)0x0;
      if ((long)puStack_d0 < 0) {
        __ZdlPv(puStack_e0);
      }
      if ((long)ppuStack_f0 < 0) {
        __ZdlPv(ppuStack_100);
      }
      if ((long)pppuStack_110 < 0) {
        __ZdlPv(pppuStack_120);
      }
      if ((long)ppppuStack_130 < 0) {
        __ZdlPv(ppppuStack_140);
      }
      if (cStack_141 < '\0') {
        __ZdlPv(apppppuStack_158[0]);
      }
      ppuVar14 = (undefined8 **)&UNK_10f5757fc;
      if ((int)param_3 == 0) {
        ppuVar14 = (undefined8 **)&UNK_10f575804;
      }
      param_1 = &puStack_e0;
      unaff_x30 = (undefined *)0x1095c23e8;
      register0x00000008 = (BADSPACEBASE *)auStack_160;
    }
  }
  while( true ) {
    ppuVar15 = ppuVar14;
    ppuVar7 = param_1;
    *(undefined8 *******)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 ***)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    ppuVar14 = ppuVar15;
    func_0x000107c613d0();
    if (ppuVar14 < (undefined8 **)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x20;
    *(undefined8 ***)((long)register0x00000008 + -0x58) = ppuVar7;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return ppuVar14;
    }
    ppuVar14 = (undefined8 **)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)ppuVar14 == 0) {
      return ppuVar14;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_1 = (undefined8 **)0x1132dfae8;
    ppuVar14 = (undefined8 **)&UNK_10f5738ce;
    unaff_x19 = ppuVar7;
    unaff_x21 = ppuVar15;
  }
  if (ppuVar14 < (undefined8 **)0x17) {
    *(char *)((long)ppuVar7 + 0x17) = (char)ppuVar14;
    ppuVar8 = ppuVar7;
    if (ppuVar14 == (undefined8 **)0x0) goto code_r0x00010002d55c;
  }
  else {
    ppuVar4 = (undefined8 **)0x19;
    if (((ulong)ppuVar14 | 7) != 0x17) {
      ppuVar4 = (undefined8 **)(((ulong)ppuVar14 | 7) + 1);
    }
    ppuVar8 = ppuVar4;
    func_0x000107c60e20();
    ppuVar7[1] = ppuVar14;
    ppuVar7[2] = (undefined8 *)((ulong)ppuVar4 | 0x8000000000000000);
    *ppuVar7 = ppuVar8;
  }
  func_0x000107c610b8(ppuVar8,ppuVar15,ppuVar14);
code_r0x00010002d55c:
  *(char *)((long)ppuVar8 + (long)ppuVar14) = '\0';
  return ppuVar7;
}



/* Entry: 1095c263c; end: 1095c2a4f;  */

undefined ***
FUN_1095c263c(float param_1,uint *param_2,undefined8 param_3,undefined8 param_4,undefined ***param_5
             ,ulong param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  float *pfVar10;
  uint uVar11;
  long lVar12;
  undefined ***pppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar18;
  double dStack_8b0;
  double dStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined4 auStack_890 [2];
  undefined ***pppuStack_888;
  undefined8 uStack_880;
  undefined4 auStack_878 [2];
  double *pdStack_870;
  undefined8 uStack_868;
  undefined4 auStack_860 [2];
  undefined ***pppuStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_7f0;
  undefined **appuStack_7e8 [2];
  char cStack_7d1;
  undefined4 uStack_7d0;
  int iStack_7cc;
  int aiStack_7c8 [12];
  long lStack_798;
  int *piStack_790;
  long *plStack_788;
  long alStack_780 [23];
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  ulong uStack_690;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 *puStack_680;
  long lStack_678;
  undefined **ppuStack_670;
  undefined1 auStack_668 [24];
  uint auStack_650 [96];
  undefined **appuStack_4d0 [19];
  long lStack_438;
  undefined **appuStack_3f0 [2];
  char cStack_3d9;
  undefined8 uStack_3d8;
  char cStack_3c1;
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined **appuStack_278 [2];
  undefined1 auStack_268 [16];
  uint auStack_258 [98];
  undefined **appuStack_d0 [19];
  long lStack_38;
  ulong uVar17;
  
  pppuVar13 = appuStack_3f0;
  pppuVar7 = appuStack_3f0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c28038(appuStack_278,param_3,4);
  if ((*(byte *)((long)auStack_258 + (long)appuStack_278[0][-3]) & 5) == 0) {
    if (4 < iRam00000001132dfb08) {
      uStack_280 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      FUN_10926db08(&uStack_3c0);
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,3);
      param_1 = 0.0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_280 = uStack_280 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_3d8,&UNK_10f57563e);
      func_0x000107c31940(appuStack_3f0,"read");
      param_6 = 0x375;
      FUN_109671348(&uStack_3c0,5,&uStack_3d8);
      FUN_1092b4db8();
      FUN_1092b4db8();
      param_5 = pppuVar7;
      if (cStack_3d9 < '\0') {
        __ZdlPv(appuStack_3f0[0]);
        param_5 = pppuVar7;
      }
      if (cStack_3c1 < '\0') {
        __ZdlPv(uStack_3d8);
      }
      FUN_109671170(&uStack_3c0);
    }
    uStack_3d8 = 0;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(appuStack_278,&uStack_3d8,8);
    bVar4 = (uint)uStack_3d8 - 1 >> 4 < 0x271;
    bVar5 = uStack_3d8._4_4_ - 1 >> 4 < 0x271;
    pppuVar13 = (undefined ***)(ulong)(bVar4 && bVar5);
    if (bVar4 && bVar5) {
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(appuStack_278,param_2 + 0x18,8);
      if ((((2 < (int)param_2[1]) || (param_2[2] != uStack_3d8._4_4_)) ||
          (param_2[3] != (uint)uStack_3d8)) ||
         (((*param_2 & 0xfff) != 0xd ||
          (lVar12 = *(long *)(param_2 + 4), uVar11 = uStack_3d8._4_4_, lVar12 == 0)))) {
        uStack_3c0 = CONCAT44((uint)uStack_3d8,uStack_3d8._4_4_);
        param_5 = (undefined ***)0xd;
        FUN_109a83fd0(param_2,2,&uStack_3c0);
        lVar12 = *(long *)(param_2 + 4);
        uVar11 = param_2[2];
      }
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl
                (appuStack_278,lVar12,*(long *)(param_2 + 0x14) * (long)(int)uVar11);
      puVar6 = auStack_268;
      func_0x000107c27ffc();
      if (puVar6 == (undefined1 *)0x0) {
        __ZNSt3__18ios_base5clearEj
                  ((undefined *)((long)appuStack_278 + (long)appuStack_278[0][-3]),
                   *(uint *)((long)auStack_258 + (long)appuStack_278[0][-3]) | 4);
      }
    }
  }
  else {
    if (4 < iRam00000001132dfb08) {
      uStack_280 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_338 = 0;
      uStack_340 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      FUN_10926db08(&uStack_3c0);
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,3);
      param_1 = 0.0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_280 = uStack_280 & 0xffffffff00000000;
      func_0x000107c31940(&uStack_3d8,&UNK_10f57563e);
      func_0x000107c31940(appuStack_3f0,"read");
      param_6 = 0;
      FUN_109671348(&uStack_3c0,5,&uStack_3d8);
      FUN_1092b4db8();
      FUN_1092b4db8();
      FUN_1092b4db8();
      param_5 = pppuVar13;
      if (cStack_3d9 < '\0') {
        __ZdlPv(appuStack_3f0[0]);
        param_5 = pppuVar13;
      }
      if (cStack_3c1 < '\0') {
        __ZdlPv(uStack_3d8);
      }
      FUN_109671170(&uStack_3c0);
    }
    pppuVar13 = (undefined ***)0x0;
  }
  appuStack_278[0] = &PTR_DAT_11087cf48;
  appuStack_d0[0] = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_268);
  ppuVar9 = &PTR_PTR_11087cf88;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(appuStack_278);
  pppuVar7 = appuStack_d0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar13;
  }
  ___stack_chk_fail();
  if (cStack_3c1 < '\0') {
    __ZdlPv(uStack_3d8);
  }
  FUN_109671170(&uStack_3c0);
  func_0x000107c2803c(appuStack_278);
  __Unwind_Resume();
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar10 = (float *)0x4;
  func_0x000107c2800c(&ppuStack_670);
  if ((*(byte *)((long)auStack_650 + (long)ppuStack_670[-3]) & 5) == 0) {
    uVar15 = NEON_rev64(*pppuVar7[8],4);
    uStack_7f0 = uVar15;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_670,&uStack_7f0,8);
    param_1 = (float)uVar15;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_670,pppuVar7 + 0xc,8);
    if ((*(byte *)((long)pppuVar7 + 1) >> 6 & 1) == 0) {
      uStack_7d0 = 0x42ff0000;
      puStack_680 = &uStack_7d0;
      aiStack_7c8[1] = 0;
      aiStack_7c8[2] = 0;
      iStack_7cc = 0;
      aiStack_7c8[0] = 0;
      piStack_790 = aiStack_7c8;
      aiStack_7c8[5] = 0;
      aiStack_7c8[6] = 0;
      aiStack_7c8[3] = 0;
      aiStack_7c8[4] = 0;
      aiStack_7c8[9] = 0;
      aiStack_7c8[7] = 0;
      aiStack_7c8[8] = 0;
      lStack_798 = 0;
      aiStack_7c8[10] = 0;
      aiStack_7c8[0xb] = 0;
      alStack_780[0] = 0;
      alStack_780[1] = 0;
      uStack_688 = 0x2010000;
      lStack_678 = 0;
      plStack_788 = alStack_780;
      FUN_109a479a0(pppuVar7,&uStack_688);
      pfVar10 = (float *)(alStack_780[0] * aiStack_7c8[0]);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (&ppuStack_670,CONCAT44(aiStack_7c8[3],aiStack_7c8[2]));
      if (lStack_798 != 0) {
        piVar1 = (int *)(lStack_798 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_7d0);
        }
      }
      lStack_798 = 0;
      param_1 = 0.0;
      aiStack_7c8[4] = 0;
      aiStack_7c8[5] = 0;
      aiStack_7c8[2] = 0;
      aiStack_7c8[3] = 0;
      aiStack_7c8[8] = 0;
      aiStack_7c8[9] = 0;
      aiStack_7c8[6] = 0;
      aiStack_7c8[7] = 0;
      if (0 < iStack_7cc) {
        lVar12 = 0;
        do {
          piStack_790[lVar12] = 0;
          lVar12 = lVar12 + 1;
        } while (lVar12 < iStack_7cc);
      }
      if (plStack_788 != alStack_780 && plStack_788 != (long *)0x0) {
        param_1 = 0.0;
        _free(plStack_788[-1]);
      }
    }
    else {
      pfVar10 = (float *)((long)pppuVar7[10] * (long)*(int *)(pppuVar7 + 1));
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_670,pppuVar7[2]);
    }
    puVar6 = auStack_668;
    func_0x000107c27ffc();
    if (puVar6 == (undefined1 *)0x0) {
      __ZNSt3__18ios_base5clearEj
                (auStack_668 + (long)(ppuStack_670[-3] + -8),
                 *(uint *)((long)auStack_650 + (long)ppuStack_670[-3]) | 4);
    }
    if (iRam00000001132dfb08 < 5) goto LAB_1095c2d98;
    uStack_690 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_6c8 = 0;
    alStack_780[0x16] = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    alStack_780[0x13] = 0;
    alStack_780[0x12] = 0;
    alStack_780[0x15] = 0;
    alStack_780[0x14] = 0;
    alStack_780[0xf] = 0;
    alStack_780[0xe] = 0;
    alStack_780[0x11] = 0;
    alStack_780[0x10] = 0;
    alStack_780[0xb] = 0;
    alStack_780[10] = 0;
    alStack_780[0xd] = 0;
    alStack_780[0xc] = 0;
    alStack_780[7] = 0;
    alStack_780[6] = 0;
    alStack_780[9] = 0;
    alStack_780[8] = 0;
    alStack_780[3] = 0;
    alStack_780[2] = 0;
    alStack_780[5] = 0;
    alStack_780[4] = 0;
    plStack_788 = (long *)0x0;
    piStack_790 = (int *)0x0;
    alStack_780[1] = 0;
    alStack_780[0] = 0;
    aiStack_7c8[8] = 0;
    aiStack_7c8[9] = 0;
    aiStack_7c8[6] = 0;
    aiStack_7c8[7] = 0;
    lStack_798 = 0;
    aiStack_7c8[10] = 0;
    aiStack_7c8[0xb] = 0;
    aiStack_7c8[0] = 0;
    aiStack_7c8[1] = 0;
    uStack_7d0 = 0;
    iStack_7cc = 0;
    aiStack_7c8[4] = 0;
    aiStack_7c8[5] = 0;
    aiStack_7c8[2] = 0;
    aiStack_7c8[3] = 0;
    FUN_10926db08(&uStack_7d0);
    uStack_6c8 = CONCAT44(uStack_6c8._4_4_,3);
    param_1 = 0.0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_690 = uStack_690 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_688,&UNK_10f57563e);
    func_0x000107c31940(appuStack_7e8,"write");
    param_5 = appuStack_7e8;
    param_6 = 0x36b;
    FUN_109671348(&uStack_7d0,5,&uStack_688);
    FUN_1092b4db8();
    pfVar10 = (float *)ppuVar9[1];
    if (-1 < (char)*(byte *)((long)ppuVar9 + 0x17)) {
      pfVar10 = (float *)(ulong)*(byte *)((long)ppuVar9 + 0x17);
    }
    FUN_1092b4db8();
  }
  else {
    if (iRam00000001132dfb08 < 5) goto LAB_1095c2d98;
    uStack_690 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_6c8 = 0;
    alStack_780[0x16] = 0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    alStack_780[0x13] = 0;
    alStack_780[0x12] = 0;
    alStack_780[0x15] = 0;
    alStack_780[0x14] = 0;
    alStack_780[0xf] = 0;
    alStack_780[0xe] = 0;
    alStack_780[0x11] = 0;
    alStack_780[0x10] = 0;
    alStack_780[0xb] = 0;
    alStack_780[10] = 0;
    alStack_780[0xd] = 0;
    alStack_780[0xc] = 0;
    alStack_780[7] = 0;
    alStack_780[6] = 0;
    alStack_780[9] = 0;
    alStack_780[8] = 0;
    alStack_780[3] = 0;
    alStack_780[2] = 0;
    alStack_780[5] = 0;
    alStack_780[4] = 0;
    plStack_788 = (long *)0x0;
    piStack_790 = (int *)0x0;
    alStack_780[1] = 0;
    alStack_780[0] = 0;
    aiStack_7c8[8] = 0;
    aiStack_7c8[9] = 0;
    aiStack_7c8[6] = 0;
    aiStack_7c8[7] = 0;
    lStack_798 = 0;
    aiStack_7c8[10] = 0;
    aiStack_7c8[0xb] = 0;
    aiStack_7c8[0] = 0;
    aiStack_7c8[1] = 0;
    uStack_7d0 = 0;
    iStack_7cc = 0;
    aiStack_7c8[4] = 0;
    aiStack_7c8[5] = 0;
    aiStack_7c8[2] = 0;
    aiStack_7c8[3] = 0;
    FUN_10926db08(&uStack_7d0);
    uStack_6c8 = CONCAT44(uStack_6c8._4_4_,3);
    param_1 = 0.0;
    uStack_6b8 = 0;
    uStack_6c0 = 0;
    uStack_6a8 = 0;
    uStack_6b0 = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_690 = uStack_690 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_688,&UNK_10f57563e);
    func_0x000107c31940(appuStack_7e8,"write");
    param_5 = appuStack_7e8;
    param_6 = 0x35d;
    FUN_109671348(&uStack_7d0,5,&uStack_688);
    pfVar10 = (float *)0x16;
    FUN_1092b4db8();
  }
  if (cStack_7d1 < '\0') {
    __ZdlPv(appuStack_7e8[0]);
  }
  if (lStack_678 < 0) {
    __ZdlPv(CONCAT44(uStack_684,uStack_688));
  }
  FUN_109671170(&uStack_7d0);
LAB_1095c2d98:
  ppuStack_670 = &PTR_DAT_11087cb40;
  appuStack_4d0[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(auStack_668);
  ppuVar9 = &PTR_PTR_11087cb80;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_670);
  pppuVar13 = appuStack_4d0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_438) {
    ___stack_chk_fail();
    if ((int)ppuVar9 != 0) {
      func_0x000104bd46a0();
      if (lStack_678 < 0) {
        __ZdlPv(CONCAT44(uStack_684,uStack_688));
      }
      FUN_109671170(&uStack_7d0);
      func_0x000107c28010(&ppuStack_670);
    }
    __Unwind_Resume();
    pppuStack_888 = param_5;
    pppuStack_858 = pppuVar13;
    if (0.001 <= 3.4 - param_1) {
      uStack_850 = 0;
      auStack_860[0] = 0x1010000;
      uVar15 = NEON_fmov(0xbf800000,4);
      fVar16 = (float)((ulong)uVar15 >> 0x20);
      dStack_8b0 = (double)(((float)*(undefined8 *)pfVar10 + (float)uVar15) /
                           (SUB84(*ppuVar9,0) + (float)uVar15));
      dStack_8a8 = (double)(((float)((ulong)*(undefined8 *)pfVar10 >> 0x20) + fVar16) /
                           ((float)((ulong)*ppuVar9 >> 0x20) + fVar16));
      uStack_8a0 = 0;
      uStack_898 = 0;
      auStack_878[0] = 0xc1020006;
      pdStack_870 = &dStack_8b0;
      uStack_868 = 0x400000001;
      auStack_890[0] = 0x2010000;
      uStack_880 = 0;
      uStack_848 = 0x3ff0000000000000;
      FUN_109a91d90();
      param_5 = (undefined ***)auStack_860;
      FUN_109a293c4(param_5,auStack_878,auStack_890,pppuVar13,0xffffffff,&PTR_FUN_1132e8c90,1,
                    &uStack_848);
    }
    else {
      fVar16 = pfVar10[1] / *(float *)((long)ppuVar9 + 4);
      uVar17 = (ulong)(uint)fVar16;
      uVar14 = uVar17;
      if ((param_6 & 1) == 0) {
        uVar14 = (ulong)(uint)(*pfVar10 / *(float *)ppuVar9);
      }
      uStack_850 = 0;
      auStack_860[0] = 0x1010000;
      uVar18 = 0;
      dStack_8b0 = (double)(float)uVar14;
      dStack_8a8 = (double)fVar16;
      uStack_8a0 = 0;
      uStack_898 = 0;
      auStack_878[0] = 0xc1020006;
      uStack_868 = 0x400000001;
      auStack_890[0] = 0x2010000;
      uStack_880 = 0;
      uStack_848 = 0x3ff0000000000000;
      uVar15 = 0;
      pdStack_870 = &dStack_8b0;
      FUN_109a91d90();
      puVar8 = auStack_860;
      FUN_109a293c4(puVar8,auStack_878,auStack_890,pppuVar13,0xffffffff,&PTR_FUN_1132e8c90,1,
                    &uStack_848,uVar17,uVar15,uVar14,uVar18);
      dStack_8b0 = (double)((float)uVar14 * 0.5 + -0.5);
      dStack_8a8 = (double)((float)uVar17 * 0.5 + -0.5);
      uStack_8a0 = 0;
      uStack_898 = 0;
      uStack_850 = 0;
      auStack_860[0] = 0x1010000;
      auStack_878[0] = 0xc1020006;
      uStack_868 = 0x400000001;
      auStack_890[0] = 0x2010000;
      uStack_880 = 0;
      pppuStack_888 = param_5;
      pdStack_870 = &dStack_8b0;
      pppuStack_858 = param_5;
      FUN_109a91d90();
      FUN_109a293c4(auStack_860,auStack_878,auStack_890,puVar8,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
      FUN_1095c329c(*pfVar10 + -1.0,pfVar10[1] + -1.0,0,0,param_5);
    }
    return param_5;
  }
  return pppuVar13;
}



/* Entry: 1095c2a50; end: 1095c2e9f;  */

void FUN_1095c2a50(float param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5,
                  ulong param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined ***pppuVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar15;
  double dStack_4c0;
  double dStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 auStack_4a0 [2];
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined4 auStack_488 [2];
  double *pdStack_480;
  undefined8 uStack_478;
  undefined4 auStack_470 [2];
  undefined ***pppuStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined4 uStack_3e0;
  int iStack_3dc;
  int aiStack_3d8 [12];
  long lStack_3a8;
  int *piStack_3a0;
  long *plStack_398;
  long alStack_390 [23];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 *puStack_290;
  long lStack_288;
  undefined **ppuStack_280;
  undefined1 auStack_278 [24];
  uint auStack_260 [96];
  undefined **appuStack_e0 [19];
  long lStack_48;
  ulong uVar14;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar9 = (float *)0x4;
  func_0x000107c2800c(&ppuStack_280);
  if ((*(byte *)((long)auStack_260 + (long)ppuStack_280[-3]) & 5) == 0) {
    uVar12 = NEON_rev64(**(undefined8 **)(param_2 + 0x40),4);
    uStack_400 = uVar12;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_280,&uStack_400,8);
    param_1 = (float)uVar12;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&ppuStack_280,param_2 + 0x60,8);
    if ((*(byte *)(param_2 + 1) >> 6 & 1) == 0) {
      uStack_3e0 = 0x42ff0000;
      puStack_290 = &uStack_3e0;
      aiStack_3d8[1] = 0;
      aiStack_3d8[2] = 0;
      iStack_3dc = 0;
      aiStack_3d8[0] = 0;
      piStack_3a0 = aiStack_3d8;
      aiStack_3d8[5] = 0;
      aiStack_3d8[6] = 0;
      aiStack_3d8[3] = 0;
      aiStack_3d8[4] = 0;
      aiStack_3d8[9] = 0;
      aiStack_3d8[7] = 0;
      aiStack_3d8[8] = 0;
      lStack_3a8 = 0;
      aiStack_3d8[10] = 0;
      aiStack_3d8[0xb] = 0;
      alStack_390[0] = 0;
      alStack_390[1] = 0;
      uStack_298 = 0x2010000;
      lStack_288 = 0;
      plStack_398 = alStack_390;
      FUN_109a479a0(param_2,&uStack_298);
      pfVar9 = (float *)(alStack_390[0] * aiStack_3d8[0]);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (&ppuStack_280,CONCAT44(aiStack_3d8[3],aiStack_3d8[2]));
      if (lStack_3a8 != 0) {
        piVar1 = (int *)(lStack_3a8 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_3e0);
        }
      }
      lStack_3a8 = 0;
      param_1 = 0.0;
      aiStack_3d8[4] = 0;
      aiStack_3d8[5] = 0;
      aiStack_3d8[2] = 0;
      aiStack_3d8[3] = 0;
      aiStack_3d8[8] = 0;
      aiStack_3d8[9] = 0;
      aiStack_3d8[6] = 0;
      aiStack_3d8[7] = 0;
      if (0 < iStack_3dc) {
        lVar10 = 0;
        do {
          piStack_3a0[lVar10] = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_3dc);
      }
      if (plStack_398 != alStack_390 && plStack_398 != (long *)0x0) {
        param_1 = 0.0;
        _free(plStack_398[-1]);
      }
    }
    else {
      pfVar9 = (float *)(*(long *)(param_2 + 0x50) * (long)*(int *)(param_2 + 8));
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (&ppuStack_280,*(undefined8 *)(param_2 + 0x10));
    }
    puVar5 = auStack_278;
    func_0x000107c27ffc();
    if (puVar5 == (undefined1 *)0x0) {
      __ZNSt3__18ios_base5clearEj
                (auStack_278 + (long)(ppuStack_280[-3] + -8),
                 *(uint *)((long)auStack_260 + (long)ppuStack_280[-3]) | 4);
    }
    if (iRam00000001132dfb08 < 5) goto LAB_1095c2d98;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    alStack_390[0x16] = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    alStack_390[0x13] = 0;
    alStack_390[0x12] = 0;
    alStack_390[0x15] = 0;
    alStack_390[0x14] = 0;
    alStack_390[0xf] = 0;
    alStack_390[0xe] = 0;
    alStack_390[0x11] = 0;
    alStack_390[0x10] = 0;
    alStack_390[0xb] = 0;
    alStack_390[10] = 0;
    alStack_390[0xd] = 0;
    alStack_390[0xc] = 0;
    alStack_390[7] = 0;
    alStack_390[6] = 0;
    alStack_390[9] = 0;
    alStack_390[8] = 0;
    alStack_390[3] = 0;
    alStack_390[2] = 0;
    alStack_390[5] = 0;
    alStack_390[4] = 0;
    plStack_398 = (long *)0x0;
    piStack_3a0 = (int *)0x0;
    alStack_390[1] = 0;
    alStack_390[0] = 0;
    aiStack_3d8[8] = 0;
    aiStack_3d8[9] = 0;
    aiStack_3d8[6] = 0;
    aiStack_3d8[7] = 0;
    lStack_3a8 = 0;
    aiStack_3d8[10] = 0;
    aiStack_3d8[0xb] = 0;
    aiStack_3d8[0] = 0;
    aiStack_3d8[1] = 0;
    uStack_3e0 = 0;
    iStack_3dc = 0;
    aiStack_3d8[4] = 0;
    aiStack_3d8[5] = 0;
    aiStack_3d8[2] = 0;
    aiStack_3d8[3] = 0;
    FUN_10926db08(&uStack_3e0);
    uStack_2d8 = CONCAT44(uStack_2d8._4_4_,3);
    param_1 = 0.0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_298,&UNK_10f57563e);
    func_0x000107c31940(auStack_3f8,"write");
    param_5 = auStack_3f8;
    param_6 = 0x36b;
    FUN_109671348(&uStack_3e0,5,&uStack_298);
    FUN_1092b4db8();
    pfVar9 = *(float **)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      pfVar9 = (float *)(ulong)*(byte *)(param_3 + 0x17);
    }
    FUN_1092b4db8();
  }
  else {
    if (iRam00000001132dfb08 < 5) goto LAB_1095c2d98;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2d8 = 0;
    alStack_390[0x16] = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    alStack_390[0x13] = 0;
    alStack_390[0x12] = 0;
    alStack_390[0x15] = 0;
    alStack_390[0x14] = 0;
    alStack_390[0xf] = 0;
    alStack_390[0xe] = 0;
    alStack_390[0x11] = 0;
    alStack_390[0x10] = 0;
    alStack_390[0xb] = 0;
    alStack_390[10] = 0;
    alStack_390[0xd] = 0;
    alStack_390[0xc] = 0;
    alStack_390[7] = 0;
    alStack_390[6] = 0;
    alStack_390[9] = 0;
    alStack_390[8] = 0;
    alStack_390[3] = 0;
    alStack_390[2] = 0;
    alStack_390[5] = 0;
    alStack_390[4] = 0;
    plStack_398 = (long *)0x0;
    piStack_3a0 = (int *)0x0;
    alStack_390[1] = 0;
    alStack_390[0] = 0;
    aiStack_3d8[8] = 0;
    aiStack_3d8[9] = 0;
    aiStack_3d8[6] = 0;
    aiStack_3d8[7] = 0;
    lStack_3a8 = 0;
    aiStack_3d8[10] = 0;
    aiStack_3d8[0xb] = 0;
    aiStack_3d8[0] = 0;
    aiStack_3d8[1] = 0;
    uStack_3e0 = 0;
    iStack_3dc = 0;
    aiStack_3d8[4] = 0;
    aiStack_3d8[5] = 0;
    aiStack_3d8[2] = 0;
    aiStack_3d8[3] = 0;
    FUN_10926db08(&uStack_3e0);
    uStack_2d8 = CONCAT44(uStack_2d8._4_4_,3);
    param_1 = 0.0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
    func_0x000107c31940(&uStack_298,&UNK_10f57563e);
    func_0x000107c31940(auStack_3f8,"write");
    param_5 = auStack_3f8;
    param_6 = 0x35d;
    FUN_109671348(&uStack_3e0,5,&uStack_298);
    pfVar9 = (float *)0x16;
    FUN_1092b4db8();
  }
  if (cStack_3e1 < '\0') {
    __ZdlPv(auStack_3f8[0]);
  }
  if (lStack_288 < 0) {
    __ZdlPv(CONCAT44(uStack_294,uStack_298));
  }
  FUN_109671170(&uStack_3e0);
LAB_1095c2d98:
  ppuStack_280 = &PTR_DAT_11087cb40;
  appuStack_e0[0] = &PTR_DAT_11087cb68;
  func_0x000107c28018(auStack_278);
  ppuVar8 = &PTR_PTR_11087cb80;
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_280);
  pppuVar6 = appuStack_e0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if ((int)ppuVar8 != 0) {
      func_0x000104bd46a0();
      if (lStack_288 < 0) {
        __ZdlPv(CONCAT44(uStack_294,uStack_298));
      }
      FUN_109671170(&uStack_3e0);
      func_0x000107c28010(&ppuStack_280);
    }
    __Unwind_Resume();
    puStack_498 = param_5;
    pppuStack_468 = pppuVar6;
    if (0.001 <= 3.4 - param_1) {
      uStack_460 = 0;
      auStack_470[0] = 0x1010000;
      uVar12 = NEON_fmov(0xbf800000,4);
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      dStack_4c0 = (double)(((float)*(undefined8 *)pfVar9 + (float)uVar12) /
                           (SUB84(*ppuVar8,0) + (float)uVar12));
      dStack_4b8 = (double)(((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) + fVar13) /
                           ((float)((ulong)*ppuVar8 >> 0x20) + fVar13));
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      auStack_488[0] = 0xc1020006;
      pdStack_480 = &dStack_4c0;
      uStack_478 = 0x400000001;
      auStack_4a0[0] = 0x2010000;
      uStack_490 = 0;
      uStack_458 = 0x3ff0000000000000;
      FUN_109a91d90();
      FUN_109a293c4(auStack_470,auStack_488,auStack_4a0,pppuVar6,0xffffffff,&PTR_FUN_1132e8c90,1,
                    &uStack_458);
    }
    else {
      fVar13 = pfVar9[1] / *(float *)((long)ppuVar8 + 4);
      uVar14 = (ulong)(uint)fVar13;
      uVar11 = uVar14;
      if ((param_6 & 1) == 0) {
        uVar11 = (ulong)(uint)(*pfVar9 / *(float *)ppuVar8);
      }
      uStack_460 = 0;
      auStack_470[0] = 0x1010000;
      uVar15 = 0;
      dStack_4c0 = (double)(float)uVar11;
      dStack_4b8 = (double)fVar13;
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      auStack_488[0] = 0xc1020006;
      uStack_478 = 0x400000001;
      auStack_4a0[0] = 0x2010000;
      uStack_490 = 0;
      uStack_458 = 0x3ff0000000000000;
      uVar12 = 0;
      pdStack_480 = &dStack_4c0;
      FUN_109a91d90();
      puVar7 = auStack_470;
      FUN_109a293c4(puVar7,auStack_488,auStack_4a0,pppuVar6,0xffffffff,&PTR_FUN_1132e8c90,1,
                    &uStack_458,uVar14,uVar12,uVar11,uVar15);
      dStack_4c0 = (double)((float)uVar11 * 0.5 + -0.5);
      dStack_4b8 = (double)((float)uVar14 * 0.5 + -0.5);
      uStack_4b0 = 0;
      uStack_4a8 = 0;
      uStack_460 = 0;
      auStack_470[0] = 0x1010000;
      auStack_488[0] = 0xc1020006;
      uStack_478 = 0x400000001;
      auStack_4a0[0] = 0x2010000;
      uStack_490 = 0;
      puStack_498 = param_5;
      pdStack_480 = &dStack_4c0;
      pppuStack_468 = (undefined ***)param_5;
      FUN_109a91d90();
      FUN_109a293c4(auStack_470,auStack_488,auStack_4a0,puVar7,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
      FUN_1095c329c(*pfVar9 + -1.0,pfVar9[1] + -1.0,0,0,param_5);
    }
    return;
  }
  return;
}



/* Entry: 1095c2ea0; end: 1095c30c3;  */

void FUN_1095c2ea0(float param_1,undefined8 param_2,float *param_3,float *param_4,undefined8 param_5
                  ,ulong param_6)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  ulong uVar5;
  undefined8 uVar6;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  double *pdStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_98 = param_5;
  uStack_68 = param_2;
  if (0.001 <= 3.4 - param_1) {
    uStack_60 = 0;
    auStack_70[0] = 0x1010000;
    uVar3 = NEON_fmov(0xbf800000,4);
    fVar4 = (float)((ulong)uVar3 >> 0x20);
    dStack_c0 = (double)(((float)*(undefined8 *)param_4 + (float)uVar3) /
                        ((float)*(undefined8 *)param_3 + (float)uVar3));
    dStack_b8 = (double)(((float)((ulong)*(undefined8 *)param_4 >> 0x20) + fVar4) /
                        ((float)((ulong)*(undefined8 *)param_3 >> 0x20) + fVar4));
    uStack_b0 = 0;
    uStack_a8 = 0;
    auStack_88[0] = 0xc1020006;
    pdStack_80 = &dStack_c0;
    uStack_78 = 0x400000001;
    auStack_a0[0] = 0x2010000;
    uStack_90 = 0;
    uStack_58 = 0x3ff0000000000000;
    FUN_109a91d90();
    FUN_109a293c4(auStack_70,auStack_88,auStack_a0,param_2,0xffffffff,&PTR_FUN_1132e8c90,1,
                  &uStack_58);
  }
  else {
    uVar5 = (ulong)(uint)(param_4[1] / param_3[1]);
    uVar2 = uVar5;
    if ((param_6 & 1) == 0) {
      uVar2 = (ulong)(uint)(*param_4 / *param_3);
    }
    uStack_60 = 0;
    auStack_70[0] = 0x1010000;
    uVar6 = 0;
    dStack_c0 = (double)(float)uVar2;
    dStack_b8 = (double)(param_4[1] / param_3[1]);
    uStack_b0 = 0;
    uStack_a8 = 0;
    auStack_88[0] = 0xc1020006;
    uStack_78 = 0x400000001;
    auStack_a0[0] = 0x2010000;
    uStack_90 = 0;
    uStack_58 = 0x3ff0000000000000;
    uVar3 = 0;
    pdStack_80 = &dStack_c0;
    FUN_109a91d90();
    puVar1 = auStack_70;
    FUN_109a293c4(puVar1,auStack_88,auStack_a0,param_2,0xffffffff,&PTR_FUN_1132e8c90,1,&uStack_58,
                  uVar5,uVar3,uVar2,uVar6);
    dStack_c0 = (double)((float)uVar2 * 0.5 + -0.5);
    dStack_b8 = (double)((float)uVar5 * 0.5 + -0.5);
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_60 = 0;
    auStack_70[0] = 0x1010000;
    auStack_88[0] = 0xc1020006;
    uStack_78 = 0x400000001;
    auStack_a0[0] = 0x2010000;
    uStack_90 = 0;
    uStack_98 = param_5;
    pdStack_80 = &dStack_c0;
    uStack_68 = param_5;
    FUN_109a91d90();
    FUN_109a293c4(auStack_70,auStack_88,auStack_a0,puVar1,0xffffffff,&PTR_FUN_1132e8bd0,0,0);
    FUN_1095c329c(*param_4 + -1.0,param_4[1] + -1.0,0,0,param_5);
  }
  return;
}



/* Entry: 1095c30c4; end: 1095c30cb;  */

void FUN_1095c30c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095c30cc; end: 1095c30df;  */

void FUN_1095c30cc(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                  ulong param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  float fVar15;
  ulong uVar14;
  
  plVar4 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar9 = *plVar4;
  lVar7 = plVar4[1];
  lVar12 = lVar7 - lVar9;
  bVar3 = (ulong)((lVar12 >> 4) * -0x71c71c71c71c71c7) <= param_6;
  uVar6 = param_6 + (lVar12 >> 4) * 0x71c71c71c71c71c7;
  if (bVar3 && uVar6 != 0) {
    if ((ulong)((plVar4[2] - lVar7 >> 4) * -0x71c71c71c71c71c7) < uVar6) {
      if (param_6 < 0x1c71c71c71c71c8) {
        lVar7 = plVar4[2] - lVar9 >> 4;
        uVar8 = lVar7 * 0x1c71c71c71c71c72;
        if (uVar8 < param_6 || uVar8 - param_6 == 0) {
          uVar8 = param_6;
        }
        if (0xe38e38e38e38e2 < (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
          uVar8 = 0x1c71c71c71c71c7;
        }
        if (uVar8 < 0x1c71c71c71c71c8) {
          lVar7 = uVar8 * 0x90;
          __Znwm();
          lVar13 = ((uVar6 * 0x90 - 0x90) / 0x90) * 0x90 + 0x90;
          _bzero(lVar7 + lVar12,lVar13);
          _memcpy(lVar7,lVar9,lVar12);
          *plVar4 = lVar7;
          plVar4[1] = lVar7 + lVar12 + lVar13;
          plVar4[2] = lVar7 + uVar8 * 0x90;
          if (lVar9 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar9);
          return;
        }
      }
      else {
        FUN_1095c3288();
      }
      func_0x000104c4f740();
      puVar5 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      uVar1 = *(uint *)(puVar5 + 8);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        lVar7 = *(long *)(puVar5 + 0x10);
        lVar9 = **(long **)(puVar5 + 0x48);
        iVar2 = *(int *)(puVar5 + 0xc);
        do {
          if (0 < iVar2) {
            puVar10 = (ulong *)(lVar7 + uVar6 * lVar9);
            iVar11 = iVar2;
            do {
              uVar8 = *puVar10;
              fVar15 = (float)(uVar8 >> 0x20);
              uVar14 = uVar8 ^ (uVar8 ^ CONCAT44(param_2,param_1)) &
                               CONCAT44(-(uint)(param_2 < fVar15),-(uint)(param_1 < (float)uVar8));
              *puVar10 = uVar14 ^ (uVar14 ^ CONCAT44(param_4,param_3)) &
                                  CONCAT44(-(uint)(fVar15 < param_4),-(uint)((float)uVar8 < param_3)
                                          );
              iVar11 = iVar11 + -1;
              puVar10 = puVar10 + 1;
            } while (iVar11 != 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar1);
      }
      return;
    }
    lVar9 = ((uVar6 * 0x90 - 0x90) / 0x90) * 0x90 + 0x90;
    _bzero(lVar7,lVar9);
    lVar7 = lVar7 + lVar9;
  }
  else {
    if (bVar3) {
      return;
    }
    lVar7 = lVar9 + param_6 * 0x90;
  }
  plVar4[1] = lVar7;
  return;
}



/* Entry: 1095c30e0; end: 1095c3287;  */

void FUN_1095c30e0(float param_1,float param_2,float param_3,float param_4,long *param_5,
                  ulong param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  float fVar14;
  ulong uVar13;
  
  lVar8 = *param_5;
  lVar6 = param_5[1];
  lVar11 = lVar6 - lVar8;
  bVar3 = (ulong)((lVar11 >> 4) * -0x71c71c71c71c71c7) <= param_6;
  uVar5 = param_6 + (lVar11 >> 4) * 0x71c71c71c71c71c7;
  if (bVar3 && uVar5 != 0) {
    if ((ulong)((param_5[2] - lVar6 >> 4) * -0x71c71c71c71c71c7) < uVar5) {
      if (param_6 < 0x1c71c71c71c71c8) {
        lVar6 = param_5[2] - lVar8 >> 4;
        uVar7 = lVar6 * 0x1c71c71c71c71c72;
        if (uVar7 < param_6 || uVar7 - param_6 == 0) {
          uVar7 = param_6;
        }
        if (0xe38e38e38e38e2 < (ulong)(lVar6 * -0x71c71c71c71c71c7)) {
          uVar7 = 0x1c71c71c71c71c7;
        }
        if (uVar7 < 0x1c71c71c71c71c8) {
          lVar6 = uVar7 * 0x90;
          __Znwm();
          lVar12 = ((uVar5 * 0x90 - 0x90) / 0x90) * 0x90 + 0x90;
          _bzero(lVar6 + lVar11,lVar12);
          _memcpy(lVar6,lVar8,lVar11);
          *param_5 = lVar6;
          param_5[1] = lVar6 + lVar11 + lVar12;
          param_5[2] = lVar6 + uVar7 * 0x90;
          if (lVar8 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(lVar8);
          return;
        }
      }
      else {
        FUN_1095c3288();
      }
      func_0x000104c4f740();
      puVar4 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      uVar1 = *(uint *)(puVar4 + 8);
      if (0 < (int)uVar1) {
        uVar5 = 0;
        lVar6 = *(long *)(puVar4 + 0x10);
        lVar8 = **(long **)(puVar4 + 0x48);
        iVar2 = *(int *)(puVar4 + 0xc);
        do {
          if (0 < iVar2) {
            puVar9 = (ulong *)(lVar6 + uVar5 * lVar8);
            iVar10 = iVar2;
            do {
              uVar7 = *puVar9;
              fVar14 = (float)(uVar7 >> 0x20);
              uVar13 = uVar7 ^ (uVar7 ^ CONCAT44(param_2,param_1)) &
                               CONCAT44(-(uint)(param_2 < fVar14),-(uint)(param_1 < (float)uVar7));
              *puVar9 = uVar13 ^ (uVar13 ^ CONCAT44(param_4,param_3)) &
                                 CONCAT44(-(uint)(fVar14 < param_4),-(uint)((float)uVar7 < param_3))
              ;
              iVar10 = iVar10 + -1;
              puVar9 = puVar9 + 1;
            } while (iVar10 != 0);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar1);
      }
      return;
    }
    lVar8 = ((uVar5 * 0x90 - 0x90) / 0x90) * 0x90 + 0x90;
    _bzero(lVar6,lVar8);
    lVar6 = lVar6 + lVar8;
  }
  else {
    if (bVar3) {
      return;
    }
    lVar6 = lVar8 + param_6 * 0x90;
  }
  param_5[1] = lVar6;
  return;
}



/* Entry: 1095c3288; end: 1095c329b;  */

void FUN_1095c3288(float param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  float fVar11;
  ulong uVar10;
  
  puVar3 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  uVar1 = *(uint *)(puVar3 + 8);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    lVar5 = *(long *)(puVar3 + 0x10);
    lVar6 = **(long **)(puVar3 + 0x48);
    iVar2 = *(int *)(puVar3 + 0xc);
    do {
      if (0 < iVar2) {
        puVar7 = (ulong *)(lVar5 + uVar4 * lVar6);
        iVar8 = iVar2;
        do {
          uVar9 = *puVar7;
          fVar11 = (float)(uVar9 >> 0x20);
          uVar10 = uVar9 ^ (uVar9 ^ CONCAT44(param_2,param_1)) &
                           CONCAT44(-(uint)(param_2 < fVar11),-(uint)(param_1 < (float)uVar9));
          *puVar7 = uVar10 ^ (uVar10 ^ CONCAT44(param_4,param_3)) &
                             CONCAT44(-(uint)(fVar11 < param_4),-(uint)((float)uVar9 < param_3));
          iVar8 = iVar8 + -1;
          puVar7 = puVar7 + 1;
        } while (iVar8 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  return;
}



/* Entry: 1095c329c; end: 1095c3303;  */

void FUN_1095c329c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  float fVar10;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_5 + 8);
  if (0 < (int)uVar1) {
    uVar3 = 0;
    lVar4 = *(long *)(param_5 + 0x10);
    lVar5 = **(long **)(param_5 + 0x48);
    iVar2 = *(int *)(param_5 + 0xc);
    do {
      if (0 < iVar2) {
        puVar6 = (ulong *)(lVar4 + uVar3 * lVar5);
        iVar7 = iVar2;
        do {
          uVar8 = *puVar6;
          fVar10 = (float)(uVar8 >> 0x20);
          uVar9 = uVar8 ^ (uVar8 ^ CONCAT44(param_2,param_1)) &
                          CONCAT44(-(uint)(param_2 < fVar10),-(uint)(param_1 < (float)uVar8));
          *puVar6 = uVar9 ^ (uVar9 ^ CONCAT44(param_4,param_3)) &
                            CONCAT44(-(uint)(fVar10 < param_4),-(uint)((float)uVar8 < param_3));
          iVar7 = iVar7 + -1;
          puVar6 = puVar6 + 1;
        } while (iVar7 != 0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}



/* Entry: 1095c3304; end: 1095c3437;  */

void FUN_1095c3304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  long lStack_48;
  long lStack_40;
  
  if ((int)param_3 == 1) {
    FUN_109670d48(&lStack_48);
    FUN_1095c3438(param_1,&lStack_48,1,param_4);
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
    return;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_60,param_3);
  FUN_10928a5e0(&lStack_48,&UNK_10f57588a,auStack_60);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar2,&lStack_48);
  ___cxa_throw(uVar2,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095c33c8);
  (*pcVar1)();
}



/* Entry: 1095c3438; end: 1095c3787;  */

void FUN_1095c3438(undefined8 *param_1,undefined8 param_2,undefined *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  undefined8 auStack_1a8 [2];
  char cStack_191;
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
  ulong uStack_50;
  
  if ((int)param_3 == 1) {
    if (2 < iRam00000001132dfb08) {
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      FUN_10926db08(&uStack_190);
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1a8,&UNK_10f5758a9);
      func_0x000107c31940(auStack_1c0,&UNK_10f575931);
      FUN_109671348(&uStack_190,3,auStack_1a8,auStack_1c0,0x27);
      FUN_1092b4db8();
      if (cStack_1a9 < '\0') {
        __ZdlPv(auStack_1c0[0]);
      }
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      FUN_109671170(&uStack_190);
    }
    uVar2 = 0x34c0;
    __Znwm();
    FUN_1095c51e8();
    *param_1 = uVar2;
    return;
  }
  if ((int)param_3 == 0) {
    if (2 < iRam00000001132dfb08) {
      uStack_50 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      FUN_10926db08(&uStack_190);
      uStack_88 = CONCAT44(uStack_88._4_4_,3);
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      func_0x000107c31940(auStack_1a8,&UNK_10f5758a9);
      func_0x000107c31940(auStack_1c0,&UNK_10f575931);
      FUN_109671348(&uStack_190,3,auStack_1a8,auStack_1c0,0x2c);
      FUN_1092b4db8();
      if (cStack_1a9 < '\0') {
        __ZdlPv(auStack_1c0[0]);
      }
      if (cStack_191 < '\0') {
        __ZdlPv(auStack_1a8[0]);
      }
      FUN_109671170(&uStack_190);
    }
    uVar2 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    param_3 = PTR___ZTISt13runtime_error_110346a40;
    ___cxa_throw(uVar2,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8)
    ;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_1a8,param_3);
  FUN_10928a5e0(&uStack_190,&UNK_10f57588a,auStack_1a8);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar2,&uStack_190);
  ___cxa_throw(uVar2,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1095c360c);
  (*pcVar1)();
}



/* Entry: 1095c3788; end: 1095c51e7;  */

void FUN_1095c3788(undefined8 *param_1,long *param_2,ushort *param_3,int param_4,undefined8 param_5,
                  long *param_6)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  ushort *puVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 ******ppppppuVar27;
  int *piVar28;
  int *piVar29;
  long *plVar30;
  ushort *puVar31;
  uint uVar32;
  long *plVar33;
  uint uVar34;
  long *plVar35;
  float fVar36;
  float fVar37;
  long lVar38;
  float fVar39;
  float fVar40;
  long lStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  long lStack_188;
  undefined4 uStack_180;
  byte bStack_178;
  undefined8 *****pppppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 auStack_158 [3];
  undefined8 uStack_140;
  ulong uStack_138;
  long *plStack_130;
  long lStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  byte bStack_118;
  undefined7 uStack_117;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  ushort *puStack_d0;
  long *plStack_c8;
  char *pcStack_c0;
  char cStack_b5;
  undefined2 uStack_b4;
  char cStack_b1;
  long lStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined4 uStack_90;
  
  if (((char)*param_3 != '\0' || *(char *)((long)param_3 + 1) != '\x01') &&
     ((char)*param_3 != '\x01' || *(char *)((long)param_3 + 1) != '\0')) {
    uVar10 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt3__19to_stringEi(auStack_158,(char)*param_3);
    FUN_10928a5e0(&plStack_d8,&UNK_10f575993,auStack_158);
    FUN_109259240(&lStack_b0,&plStack_d8,&DAT_10f68e8ee);
    __ZNSt3__19to_stringEi(&pppppuStack_170,*(char *)((long)param_3 + 1));
    ppppppuVar27 = (undefined8 ******)pppppuStack_170;
    if (-1 < (char)bStack_159) {
      uStack_168 = (ulong)bStack_159;
      ppppppuVar27 = &pppppuStack_170;
    }
    plVar20 = &lStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar20,ppppppuVar27,uStack_168);
    uStack_198 = plVar20[1];
    lStack_1a0 = *plVar20;
    plStack_190 = (long *)plVar20[2];
    plVar20[1] = 0;
    plVar20[2] = 0;
    *plVar20 = 0;
    FUN_109259240(&uStack_140,&lStack_1a0,&DAT_10f684600);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar10,&uStack_140);
    ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
    goto LAB_1095c4f48;
  }
  if (param_4 == (int)param_5) {
    uVar10 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
LAB_1095c4d44:
    ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
LAB_1095c4d5c:
    uVar10 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
  else {
    if ((param_4 == 2) || ((int)param_5 == 2)) {
      uVar10 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt13runtime_errorC1EPKc();
      goto LAB_1095c4d44;
    }
    fVar39 = *(float *)(param_2 + 0x13);
    uVar4 = *param_3;
    uStack_a8 = 0;
    lStack_b0 = 0;
    lStack_98 = 0;
    plStack_a0 = (long *)0x0;
    uStack_90 = 0x3f800000;
    cStack_b5 = '\0';
    auStack_158[0] = 0;
    pppppuStack_170 = (undefined8 ******)0x0;
    plVar30 = &lStack_b0;
    uStack_b4 = uVar4;
    cStack_b1 = (char)param_4;
    FUN_1095c7b1c(plVar30,uVar4,&uStack_b4);
    plVar33 = &lStack_b0;
    FUN_1095c7b1c(plVar33,uVar4 >> 8,(ulong)&uStack_b4 | 1);
    plVar20 = plVar30 + 3;
    plVar21 = plVar33 + 3;
    if (cStack_b1 == '\0') {
      plVar35 = param_2 + 0x213;
      if (plVar20 != plVar35) {
        if (param_2[0x21a] != 0) {
          piVar14 = (int *)(param_2[0x21a] + 0x14);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = *piVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (plVar30[10] != 0) {
          piVar14 = (int *)(plVar30[10] + 0x14);
          do {
            iVar12 = *piVar14;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = iVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(plVar20);
          }
        }
        plVar30[10] = 0;
        plVar30[6] = 0;
        plVar30[5] = 0;
        plVar30[8] = 0;
        plVar30[7] = 0;
        if (*(int *)((long)plVar30 + 0x1c) < 1) {
          *(int *)plVar20 = (int)*plVar35;
LAB_1095c39e0:
          if (2 < *(int *)((long)param_2 + 0x109c)) goto LAB_1095c3a14;
          *(int *)((long)plVar30 + 0x1c) = *(int *)((long)param_2 + 0x109c);
          plVar30[4] = param_2[0x214];
          puVar15 = (undefined8 *)param_2[0x21c];
          puVar25 = (undefined8 *)plVar30[0xc];
          *puVar25 = *puVar15;
          puVar25[1] = puVar15[1];
        }
        else {
          lVar13 = 0;
          lVar16 = plVar30[0xb];
          do {
            *(undefined4 *)(lVar16 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)plVar30 + 0x1c));
          *(int *)plVar20 = (int)*plVar35;
          if (*(int *)((long)plVar30 + 0x1c) < 3) goto LAB_1095c39e0;
LAB_1095c3a14:
          func_0x000109a84868(plVar20,plVar35);
        }
        lVar13 = param_2[0x215];
        plVar30[6] = param_2[0x216];
        plVar30[5] = lVar13;
        lVar13 = param_2[0x217];
        plVar30[8] = param_2[0x218];
        plVar30[7] = lVar13;
        lVar13 = param_2[0x219];
        plVar30[10] = param_2[0x21a];
        plVar30[9] = lVar13;
      }
      plVar35 = param_2 + 0x23c;
      if (plVar21 != plVar35) {
        if (param_2[0x243] != 0) {
          piVar14 = (int *)(param_2[0x243] + 0x14);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = *piVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (plVar33[10] != 0) {
          piVar14 = (int *)(plVar33[10] + 0x14);
          do {
            iVar12 = *piVar14;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = iVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(plVar21);
          }
        }
        plVar33[6] = 0;
        plVar33[5] = 0;
        plVar33[10] = 0;
        plVar33[8] = 0;
        plVar33[7] = 0;
        if (*(int *)((long)plVar33 + 0x1c) < 1) {
          *(int *)plVar21 = (int)*plVar35;
LAB_1095c3af0:
          if (2 < *(int *)((long)param_2 + 0x11e4)) goto LAB_1095c3b24;
          *(int *)((long)plVar33 + 0x1c) = *(int *)((long)param_2 + 0x11e4);
          plVar33[4] = param_2[0x23d];
          puVar15 = (undefined8 *)param_2[0x245];
          puVar25 = (undefined8 *)plVar33[0xc];
          *puVar25 = *puVar15;
          puVar25[1] = puVar15[1];
        }
        else {
          lVar13 = 0;
          lVar16 = plVar33[0xb];
          do {
            *(undefined4 *)(lVar16 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)plVar33 + 0x1c));
          *(int *)plVar21 = (int)*plVar35;
          if (*(int *)((long)plVar33 + 0x1c) < 3) goto LAB_1095c3af0;
LAB_1095c3b24:
          func_0x000109a84868(plVar21,plVar35);
        }
        lVar13 = param_2[0x23e];
        plVar33[6] = param_2[0x23f];
        plVar33[5] = lVar13;
        lVar13 = 0x1240;
        lVar16 = 0x10f8;
        lVar23 = 0x1210;
        lVar26 = 0x1200;
        goto LAB_1095c3cc8;
      }
      lVar13 = 0x1240;
      lVar16 = 0x10f8;
LAB_1095c3cd8:
      auStack_158[0] = *(undefined8 *)((long)param_2 + lVar16);
      pppppuStack_170 = *(undefined8 *******)((long)param_2 + lVar13);
      piVar14 = (int *)plVar30[0xb];
      uVar32 = piVar14[-1];
      uVar24 = (ulong)uVar32;
      piVar17 = (int *)plVar33[0xb];
      if (uVar32 != piVar17[-1]) {
LAB_1095c3d28:
        uVar10 = 0x10;
        ___cxa_allocate_exception(0x10);
        __ZNSt13runtime_errorC1EPKc();
        goto LAB_1095c3d40;
      }
      if (uVar32 == 2) {
        if ((*piVar14 != *piVar17) || (piVar14[1] != piVar17[1])) goto LAB_1095c3d28;
      }
      else if (0 < (int)uVar32) {
        do {
          if (*piVar14 != *piVar17) goto LAB_1095c3d28;
          uVar24 = uVar24 - 1;
          piVar14 = piVar14 + 1;
          piVar17 = piVar17 + 1;
        } while (uVar24 != 0);
      }
      bVar9 = true;
      ppppppuVar27 = &pppppuStack_170;
      piVar14 = (int *)auStack_158;
      do {
        iVar12 = *piVar14;
        iVar2 = *(int *)ppppppuVar27;
        if (!bVar9) break;
        bVar9 = false;
        ppppppuVar27 = (undefined8 ******)((ulong)&pppppuStack_170 | 4);
        piVar14 = (int *)((ulong)auStack_158 | 4);
      } while (iVar12 == iVar2);
      if (iVar12 == iVar2) {
        if (param_6[3] != 0) {
          puStack_d0 = (ushort *)&cStack_b1;
          pcStack_c0 = &cStack_b5;
          plStack_d8 = param_6;
          plStack_c8 = param_2;
          FUN_1095c6344(&uStack_140,&plStack_d8,(undefined1)uStack_b4,auStack_158,plVar20);
          if (plVar30[10] != 0) {
            piVar14 = (int *)(plVar30[10] + 0x14);
            do {
              iVar12 = *piVar14;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar9) {
                *piVar14 = iVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(plVar20);
            }
          }
          plVar30[6] = 0;
          plVar30[5] = 0;
          plVar30[10] = 0;
          plVar30[8] = 0;
          plVar30[7] = 0;
          lVar13 = uStack_140;
          if (0 < *(int *)((long)plVar30 + 0x1c)) {
            lVar16 = 0;
            lVar23 = plVar30[0xb];
            do {
              *(undefined4 *)(lVar23 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)((long)plVar30 + 0x1c));
          }
          iVar12 = uStack_140._4_4_;
          plVar30[4] = uStack_138;
          plVar30[3] = lVar13;
          plVar35 = plStack_130;
          plVar30[6] = lStack_128;
          plVar30[5] = (long)plVar35;
          lVar13 = CONCAT44(uStack_11c,uStack_120);
          plVar30[8] = CONCAT71(uStack_117,bStack_118);
          plVar30[7] = lVar13;
          lVar13 = lStack_110;
          plVar30[10] = lStack_108;
          plVar30[9] = lVar13;
          plVar18 = (long *)plVar30[0xc];
          plVar35 = plVar30 + 0xd;
          if (plVar18 != plVar35) {
            if (plVar18 != (long *)0x0) {
              _free(plVar18[-1]);
              iVar12 = uStack_140._4_4_;
            }
            plVar30[0xb] = (long)(plVar30 + 4);
            plVar30[0xc] = (long)plVar35;
            plVar18 = plVar35;
          }
          plVar19 = plStack_f8;
          if (iVar12 < 3) {
            puVar15 = (undefined8 *)((ulong)&uStack_140 | 4);
            *plVar18 = *plStack_f8;
            plVar18[1] = plStack_f8[1];
            uStack_140 = CONCAT44(uStack_140._4_4_,0x42ff0000);
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0;
            *(undefined8 *)((long)puVar15 + 0x34) = 0;
            *(undefined8 *)((long)puVar15 + 0x2c) = 0;
            if (plStack_f8 != alStack_f0) {
              _free(plStack_f8[-1]);
            }
          }
          else {
            plVar30[0xb] = lStack_100;
            plVar30[0xc] = (long)plVar19;
          }
          FUN_1095c6344(&uStack_140,&plStack_d8,uStack_b4._1_1_,&pppppuStack_170,plVar21);
          if (plVar33[10] != 0) {
            piVar14 = (int *)(plVar33[10] + 0x14);
            do {
              iVar12 = *piVar14;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar9) {
                *piVar14 = iVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(plVar21);
            }
          }
          plVar33[6] = 0;
          plVar33[5] = 0;
          plVar33[10] = 0;
          plVar33[8] = 0;
          plVar33[7] = 0;
          lVar13 = uStack_140;
          if (0 < *(int *)((long)plVar33 + 0x1c)) {
            lVar16 = 0;
            lVar23 = plVar33[0xb];
            do {
              *(undefined4 *)(lVar23 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)((long)plVar33 + 0x1c));
          }
          iVar12 = uStack_140._4_4_;
          plVar33[4] = uStack_138;
          plVar33[3] = lVar13;
          plVar18 = plStack_130;
          plVar33[6] = lStack_128;
          plVar33[5] = (long)plVar18;
          lVar13 = CONCAT44(uStack_11c,uStack_120);
          plVar33[8] = CONCAT71(uStack_117,bStack_118);
          plVar33[7] = lVar13;
          lVar13 = lStack_110;
          plVar33[10] = lStack_108;
          plVar33[9] = lVar13;
          plVar19 = (long *)plVar33[0xc];
          plVar18 = plVar33 + 0xd;
          if (plVar19 != plVar18) {
            if (plVar19 != (long *)0x0) {
              _free(plVar19[-1]);
              iVar12 = uStack_140._4_4_;
            }
            plVar33[0xb] = (long)(plVar33 + 4);
            plVar33[0xc] = (long)plVar18;
            plVar19 = plVar18;
          }
          plVar7 = plStack_f8;
          if (iVar12 < 3) {
            puVar15 = (undefined8 *)((ulong)&uStack_140 | 4);
            *plVar19 = *plStack_f8;
            plVar19[1] = plStack_f8[1];
            uStack_140 = CONCAT44(uStack_140._4_4_,0x42ff0000);
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0;
            *(undefined8 *)((long)puVar15 + 0x34) = 0;
            *(undefined8 *)((long)puVar15 + 0x2c) = 0;
            if (plStack_f8 != alStack_f0) {
              _free(plStack_f8[-1]);
            }
          }
          else {
            plVar33[0xb] = lStack_100;
            plVar33[0xc] = (long)plVar7;
          }
          FUN_1095c64ec(&uStack_140,param_6,param_5,(undefined1)uStack_b4,plVar20);
          if (plVar30[10] != 0) {
            piVar14 = (int *)(plVar30[10] + 0x14);
            do {
              iVar12 = *piVar14;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar9) {
                *piVar14 = iVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(plVar20);
            }
          }
          plVar30[10] = 0;
          plVar30[6] = 0;
          plVar30[5] = 0;
          plVar30[8] = 0;
          plVar30[7] = 0;
          lVar13 = uStack_140;
          if (0 < *(int *)((long)plVar30 + 0x1c)) {
            lVar16 = 0;
            lVar23 = plVar30[0xb];
            do {
              *(undefined4 *)(lVar23 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)((long)plVar30 + 0x1c));
          }
          iVar12 = uStack_140._4_4_;
          plVar30[4] = uStack_138;
          plVar30[3] = lVar13;
          plVar20 = plStack_130;
          plVar30[6] = lStack_128;
          plVar30[5] = (long)plVar20;
          lVar13 = CONCAT44(uStack_11c,uStack_120);
          plVar30[8] = CONCAT71(uStack_117,bStack_118);
          plVar30[7] = lVar13;
          lVar13 = lStack_110;
          plVar30[10] = lStack_108;
          plVar30[9] = lVar13;
          plVar20 = (long *)plVar30[0xc];
          if (plVar20 != plVar35) {
            if (plVar20 != (long *)0x0) {
              _free(plVar20[-1]);
              iVar12 = uStack_140._4_4_;
            }
            plVar30[0xb] = (long)(plVar30 + 4);
            plVar30[0xc] = (long)plVar35;
            plVar20 = plVar35;
          }
          plVar35 = plStack_f8;
          if (iVar12 < 3) {
            puVar15 = (undefined8 *)((ulong)&uStack_140 | 4);
            *plVar20 = *plStack_f8;
            plVar20[1] = plStack_f8[1];
            uStack_140 = CONCAT44(uStack_140._4_4_,0x42ff0000);
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0;
            *(undefined8 *)((long)puVar15 + 0x34) = 0;
            *(undefined8 *)((long)puVar15 + 0x2c) = 0;
            if (plStack_f8 != alStack_f0) {
              _free(plStack_f8[-1]);
            }
          }
          else {
            plVar30[0xb] = lStack_100;
            plVar30[0xc] = (long)plVar35;
          }
          FUN_1095c64ec(&uStack_140,param_6,param_5,uStack_b4._1_1_,plVar21);
          if (plVar33[10] != 0) {
            piVar14 = (int *)(plVar33[10] + 0x14);
            do {
              iVar12 = *piVar14;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
              if (bVar9) {
                *piVar14 = iVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 + -1 == 0) {
              func_0x000109a848d4(plVar21);
            }
          }
          plVar33[10] = 0;
          plVar33[6] = 0;
          plVar33[5] = 0;
          plVar33[8] = 0;
          plVar33[7] = 0;
          lVar13 = uStack_140;
          if (0 < *(int *)((long)plVar33 + 0x1c)) {
            lVar16 = 0;
            lVar23 = plVar33[0xb];
            do {
              *(undefined4 *)(lVar23 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < *(int *)((long)plVar33 + 0x1c));
          }
          iVar12 = uStack_140._4_4_;
          plVar33[4] = uStack_138;
          plVar33[3] = lVar13;
          plVar20 = plStack_130;
          plVar33[6] = lStack_128;
          plVar33[5] = (long)plVar20;
          lVar13 = CONCAT44(uStack_11c,uStack_120);
          plVar33[8] = CONCAT71(uStack_117,bStack_118);
          plVar33[7] = lVar13;
          plVar33[10] = lStack_108;
          plVar33[9] = lStack_110;
          plVar21 = (long *)plVar33[0xc];
          if (plVar21 != plVar18) {
            if (plVar21 != (long *)0x0) {
              _free(plVar21[-1]);
              iVar12 = uStack_140._4_4_;
            }
            plVar33[0xb] = (long)(plVar33 + 4);
            plVar33[0xc] = (long)plVar18;
            plVar21 = plVar18;
          }
          plVar20 = param_6;
          if (iVar12 < 3) {
            puVar15 = (undefined8 *)((ulong)&uStack_140 | 4);
            *plVar21 = *plStack_f8;
            plVar21[1] = plStack_f8[1];
            uStack_140 = CONCAT44(uStack_140._4_4_,0x42ff0000);
            puVar15[1] = 0;
            *puVar15 = 0;
            puVar15[3] = 0;
            puVar15[2] = 0;
            puVar15[5] = 0;
            puVar15[4] = 0;
            *(undefined8 *)((long)puVar15 + 0x34) = 0;
            *(undefined8 *)((long)puVar15 + 0x2c) = 0;
            if (plStack_f8 != alStack_f0) {
              _free(plStack_f8[-1]);
            }
          }
          else {
            plVar33[0xb] = lStack_100;
            plVar33[0xc] = (long)plStack_f8;
          }
        }
        uStack_198 = uStack_a8;
        lStack_1a0 = lStack_b0;
        lStack_b0 = 0;
        uStack_a8 = 0;
        plStack_190 = plStack_a0;
        lStack_188 = lStack_98;
        uStack_180 = uStack_90;
        if (lStack_98 != 0) {
          uVar24 = plStack_a0[1];
          if ((uStack_198 & uStack_198 - 1) == 0) {
            uVar24 = uVar24 & uStack_198 - 1;
          }
          else if (uStack_198 <= uVar24) {
            uVar22 = 0;
            if (uStack_198 != 0) {
              uVar22 = uVar24 / uStack_198;
            }
            uVar24 = uVar24 - uVar22 * uStack_198;
          }
          *(long ***)(lStack_1a0 + uVar24 * 8) = &plStack_190;
          plStack_a0 = (long *)0x0;
          lStack_98 = 0;
        }
        bStack_178 = 1;
        plVar21 = &lStack_b0;
        FUN_1095c6ecc();
        if ((bStack_178 & 1) == 0) {
          uVar10 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt13runtime_errorC1EPKc();
          ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_1095c4f48;
        }
        uStack_a8 = 0;
        lStack_b0 = 0;
        lStack_98 = 0;
        plStack_a0 = (long *)0x0;
        uStack_90 = 0x3f800000;
        plStack_d8._0_2_ = 0x100;
        FUN_1095c7d60();
        plStack_d8 = (long *)CONCAT62(plStack_d8._2_6_,0x101);
        plVar30 = &lStack_b0;
        FUN_1095c7d60(plVar30,1,1,&plStack_d8);
        if (*(float *)(param_2 + 0x1c8) == *(float *)((long)param_2 + 0x102c)) {
          fVar36 = (*(float *)(param_2 + 0x2b) * *(float *)((long)param_2 + 0x41c)) /
                   *(float *)(param_2 + 0x84);
        }
        else {
          fVar36 = *(float *)((long)param_2 + 0xe4c);
        }
        *(float *)(plVar30 + 4) = fVar36;
        *(float *)((long)plVar30 + 0x24) = fVar36;
        *(float *)(plVar21 + 4) = fVar36;
        *(float *)((long)plVar21 + 0x24) = fVar36;
        FUN_1095c1e10(&plStack_d8,param_2 + 6,1);
        plVar21[5] = (long)plStack_d8;
        FUN_1095c1e10(&plStack_d8,param_2 + 6,0);
        plVar30[5] = (long)plStack_d8;
        piVar17 = (int *)param_2[0x21b];
        piVar14 = (int *)param_2[0x244];
        uVar32 = piVar17[-1];
        uVar24 = (ulong)uVar32;
        if (uVar32 == piVar14[-1]) {
          if (uVar32 == 2) {
            if ((*piVar17 != *piVar14) || (piVar17[1] != piVar14[1])) goto LAB_1095c4408;
          }
          else {
            piVar28 = piVar17;
            piVar29 = piVar14;
            if (0 < (int)uVar32) {
              do {
                if (*piVar28 != *piVar29) goto LAB_1095c4408;
                uVar24 = uVar24 - 1;
                piVar28 = piVar28 + 1;
                piVar29 = piVar29 + 1;
              } while (uVar24 != 0);
            }
          }
          uVar10 = NEON_scvtf(*(undefined8 *)piVar17,4);
          lVar13 = NEON_rev64(uVar10,4);
          plVar21[3] = lVar13;
          uVar10 = NEON_scvtf(*(undefined8 *)piVar14,4);
          lVar13 = NEON_rev64(uVar10,4);
          plVar30[3] = lVar13;
          fVar40 = *(float *)(plVar21 + 3);
          fVar36 = *(float *)((long)plVar21 + 0x1c);
          if ((fVar40 != 0.0) || (fVar36 != 0.0)) {
            if (param_6[3] != 0) {
              plVar33 = param_6;
              FUN_1095c6e18(param_6,0,1);
              if (plVar33 != (long *)0x0) {
                fVar37 = *(float *)(plVar33 + 3);
                bVar9 = false;
                if ((fVar40 == *(float *)((long)plVar33 + 0x14)) &&
                   (bVar9 = false, !NAN(fVar36) && !NAN(fVar37))) {
                  bVar9 = fVar36 == fVar37;
                }
                if (!bVar9) {
                  fVar37 = fVar37 / fVar36;
                  plVar21[5] = CONCAT44(((float)((ulong)plVar21[5] >> 0x20) + 0.5) * fVar37 + -0.5,
                                        ((float)plVar21[5] + 0.5) * fVar37 + -0.5);
                  plVar21[4] = CONCAT44(fVar37 * (float)((ulong)plVar21[4] >> 0x20),
                                        fVar37 * (float)plVar21[4]);
                  plVar21[3] = *(long *)((long)plVar33 + 0x14);
                }
              }
              FUN_1095c6e18(param_6,1,1);
              if (param_6 != (long *)0x0) {
                fVar36 = *(float *)((long)plVar30 + 0x1c);
                fVar40 = *(float *)(param_6 + 3);
                bVar9 = false;
                if ((*(float *)(plVar30 + 3) == *(float *)((long)param_6 + 0x14)) &&
                   (bVar9 = false, !NAN(fVar36) && !NAN(fVar40))) {
                  bVar9 = fVar36 == fVar40;
                }
                if (!bVar9) {
                  fVar40 = fVar40 / fVar36;
                  plVar30[5] = CONCAT44(((float)((ulong)plVar30[5] >> 0x20) + 0.5) * fVar40 + -0.5,
                                        ((float)plVar30[5] + 0.5) * fVar40 + -0.5);
                  plVar30[4] = CONCAT44(fVar40 * (float)((ulong)plVar30[4] >> 0x20),
                                        fVar40 * (float)plVar30[4]);
                  plVar30[3] = *(long *)((long)param_6 + 0x14);
                }
              }
            }
            uStack_138 = uStack_a8;
            uStack_140 = lStack_b0;
            lStack_b0 = 0;
            uStack_a8 = 0;
            plStack_130 = plStack_a0;
            lStack_128 = lStack_98;
            uStack_120 = uStack_90;
            if (lStack_98 != 0) {
              uVar24 = plStack_a0[1];
              if ((uStack_138 & uStack_138 - 1) == 0) {
                uVar24 = uVar24 & uStack_138 - 1;
              }
              else if (uStack_138 <= uVar24) {
                uVar22 = 0;
                if (uStack_138 != 0) {
                  uVar22 = uVar24 / uStack_138;
                }
                uVar24 = uVar24 - uVar22 * uStack_138;
              }
              *(long ***)(uStack_140 + uVar24 * 8) = &plStack_130;
              plStack_a0 = (long *)0x0;
              lStack_98 = 0;
            }
            bStack_118 = 1;
            FUN_1095c6fcc(&lStack_b0);
            if ((bStack_118 & 1) != 0) {
              puVar11 = (ushort *)0x88;
              __Znwm();
              uStack_a8 = 0;
              lStack_b0 = 0;
              lStack_98 = 0;
              plStack_a0 = (long *)0x0;
              uStack_90 = 0x3f800000;
              *puVar11 = *param_3;
              *(char *)(puVar11 + 1) = (char)param_4;
              *(char *)((long)puVar11 + 3) = (char)param_5;
              *(double *)(puVar11 + 4) = (double)fVar39;
              puVar31 = puVar11 + 8;
              puVar11[0xc] = 0;
              puVar11[0xd] = 0;
              puVar11[0xe] = 0;
              puVar11[0xf] = 0;
              puVar31[0] = 0;
              puVar31[1] = 0;
              puVar31[2] = 0;
              puVar31[3] = 0;
              puVar11[0x14] = 0;
              puVar11[0x15] = 0;
              puVar11[0x16] = 0;
              puVar11[0x17] = 0;
              puVar11[0x10] = 0;
              puVar11[0x11] = 0;
              puVar11[0x12] = 0;
              puVar11[0x13] = 0;
              *(undefined4 *)(puVar11 + 0x18) = uStack_180;
              FUN_1095c706c(puVar31,uStack_198);
              if (plStack_190 != (long *)0x0) {
                puVar1 = puVar11 + 0x10;
                plVar30 = plStack_190;
                do {
                  plVar35 = (long *)(ulong)*(byte *)(plVar30 + 2);
                  plVar33 = *(long **)(puVar11 + 0xc);
                  if (plVar33 != (long *)0x0) {
                    uVar24 = (long)plVar33 - 1;
                    uVar32 = (uint)plVar33;
                    uVar34 = (uint)*(byte *)(plVar30 + 2);
                    if (((ulong)plVar33 & uVar24) == 0) {
                      plVar21 = (long *)((ulong)(uVar32 - 1) & (ulong)plVar35);
                    }
                    else {
                      plVar21 = plVar35;
                      if (plVar33 <= plVar35) {
                        uVar6 = 0;
                        if (uVar32 != 0) {
                          uVar6 = uVar34 / uVar32;
                        }
                        plVar21 = (long *)(ulong)(uVar34 - uVar6 * uVar32);
                      }
                    }
                    plVar18 = *(long **)(*(long *)puVar31 + (long)plVar21 * 8);
                    if (plVar18 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar18 = (long *)*plVar18;
                          if (plVar18 == (long *)0x0) goto LAB_1095c46c4;
                          plVar19 = (long *)plVar18[1];
                          if (plVar19 != plVar35) break;
                          if (*(byte *)(plVar18 + 2) == uVar34) goto LAB_1095c4874;
                        }
                        if (((ulong)plVar33 & uVar24) == 0) {
                          plVar19 = (long *)((ulong)plVar19 & uVar24);
                        }
                        else if (plVar33 <= plVar19) {
                          uVar22 = 0;
                          if (plVar33 != (long *)0x0) {
                            uVar22 = (ulong)plVar19 / (ulong)plVar33;
                          }
                          plVar19 = (long *)((long)plVar19 - uVar22 * (long)plVar33);
                        }
                      } while (plVar19 == plVar21);
                    }
                  }
LAB_1095c46c4:
                  plVar18 = (long *)0x78;
                  __Znwm();
                  plStack_c8 = (long *)0x0;
                  *plVar18 = 0;
                  plVar18[1] = (long)plVar35;
                  lVar16 = plVar30[4];
                  lVar13 = plVar30[3];
                  *(char *)(plVar18 + 2) = (char)plVar30[2];
                  iVar12 = *(int *)((long)plVar30 + 0x1c);
                  plVar18[4] = lVar16;
                  plVar18[3] = lVar13;
                  lVar13 = plVar30[5];
                  plVar18[6] = plVar30[6];
                  plVar18[5] = lVar13;
                  lVar13 = plVar30[7];
                  plVar18[8] = plVar30[8];
                  plVar18[7] = lVar13;
                  lVar13 = plVar30[10];
                  lVar16 = plVar30[9];
                  plVar18[10] = plVar30[10];
                  plVar18[9] = lVar16;
                  plVar18[0xd] = 0;
                  plVar18[0xb] = (long)(plVar18 + 4);
                  plVar18[0xc] = (long)(plVar18 + 0xd);
                  plVar18[0xe] = 0;
                  if (lVar13 != 0) {
                    piVar14 = (int *)(lVar13 + 0x14);
                    do {
                      cVar5 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                      if (bVar9) {
                        *piVar14 = *piVar14 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    iVar12 = *(int *)((long)plVar30 + 0x1c);
                  }
                  plStack_d8 = plVar18;
                  puStack_d0 = puVar31;
                  if (iVar12 < 3) {
                    puVar15 = (undefined8 *)plVar30[0xc];
                    puVar25 = (undefined8 *)plVar18[0xc];
                    *puVar25 = *puVar15;
                    puVar25[1] = puVar15[1];
                  }
                  else {
                    *(undefined4 *)((long)plVar18 + 0x1c) = 0;
                    func_0x000109a84868(plVar18 + 3);
                  }
                  plStack_c8 = (long *)CONCAT71(plStack_c8._1_7_,1);
                  if ((plVar33 == (long *)0x0) ||
                     (*(float *)(puVar11 + 0x18) * (float)plVar33 <
                      (float)(*(long *)(puVar11 + 0x14) + 1))) {
                    uVar24 = 1;
                    if ((long *)0x2 < plVar33) {
                      uVar24 = (ulong)(((ulong)plVar33 & (long)plVar33 - 1U) != 0);
                    }
                    uVar24 = uVar24 | (long)plVar33 << 1;
                    uVar22 = (ulong)((float)(*(long *)(puVar11 + 0x14) + 1) /
                                    *(float *)(puVar11 + 0x18));
                    if (uVar24 <= uVar22) {
                      uVar24 = uVar22;
                    }
                    FUN_1095c706c(puVar31,uVar24);
                    plVar33 = *(long **)(puVar11 + 0xc);
                    if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
                      plVar21 = (long *)((ulong)((int)plVar33 - 1) & (ulong)plVar35);
                    }
                    else {
                      plVar21 = plVar35;
                      if (plVar33 <= plVar35) {
                        uVar24 = 0;
                        if (plVar33 != (long *)0x0) {
                          uVar24 = (ulong)plVar35 / (ulong)plVar33;
                        }
                        plVar21 = (long *)((long)plVar35 - uVar24 * (long)plVar33);
                      }
                    }
                  }
                  lVar13 = *(long *)puVar31;
                  plVar35 = *(long **)(lVar13 + (long)plVar21 * 8);
                  if (plVar35 == (long *)0x0) {
                    *plStack_d8 = *(long *)puVar1;
                    *(long **)puVar1 = plStack_d8;
                    *(ushort **)(lVar13 + (long)plVar21 * 8) = puVar1;
                    if (*plStack_d8 != 0) {
                      plVar35 = *(long **)(*plStack_d8 + 8);
                      if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
                        plVar35 = (long *)((ulong)plVar35 & (long)plVar33 - 1U);
                      }
                      else if (plVar33 <= plVar35) {
                        uVar24 = 0;
                        if (plVar33 != (long *)0x0) {
                          uVar24 = (ulong)plVar35 / (ulong)plVar33;
                        }
                        plVar35 = (long *)((long)plVar35 - uVar24 * (long)plVar33);
                      }
                      *(long **)(*(long *)puVar31 + (long)plVar35 * 8) = plStack_d8;
                    }
                  }
                  else {
                    *plStack_d8 = *plVar35;
                    *plVar35 = (long)plStack_d8;
                  }
                  *(long *)(puVar11 + 0x14) = *(long *)(puVar11 + 0x14) + 1;
LAB_1095c4874:
                  plVar30 = (long *)*plVar30;
                } while (plVar30 != (long *)0x0);
              }
              puVar31 = puVar11 + 0x1c;
              puVar11[0x20] = 0;
              puVar11[0x21] = 0;
              puVar11[0x22] = 0;
              puVar11[0x23] = 0;
              puVar31[0] = 0;
              puVar31[1] = 0;
              puVar31[2] = 0;
              puVar31[3] = 0;
              puVar11[0x28] = 0;
              puVar11[0x29] = 0;
              puVar11[0x2a] = 0;
              puVar11[0x2b] = 0;
              puVar11[0x24] = 0;
              puVar11[0x25] = 0;
              puVar11[0x26] = 0;
              puVar11[0x27] = 0;
              *(undefined4 *)(puVar11 + 0x2c) = uStack_120;
              FUN_1095c7284(puVar31,uStack_138);
              if (plStack_130 != (long *)0x0) {
                puVar1 = puVar11 + 0x24;
                plVar30 = plStack_130;
                do {
                  uVar32 = (uint)(*(byte *)((long)plVar30 + 0x11) ^ *(byte *)(plVar30 + 2));
                  plVar33 = (long *)(ulong)uVar32;
                  plVar21 = *(long **)(puVar11 + 0x20);
                  if (plVar21 != (long *)0x0) {
                    uVar24 = (long)plVar21 - 1;
                    uVar34 = (uint)plVar21;
                    if (((ulong)plVar21 & uVar24) == 0) {
                      plVar20 = (long *)(ulong)(uVar34 - 1 & uVar32);
                    }
                    else {
                      plVar20 = plVar33;
                      if (plVar21 <= plVar33) {
                        uVar6 = 0;
                        if (uVar34 != 0) {
                          uVar6 = uVar32 / uVar34;
                        }
                        plVar20 = (long *)(ulong)(uVar32 - uVar6 * uVar34);
                      }
                    }
                    plVar35 = *(long **)(*(long *)puVar31 + (long)plVar20 * 8);
                    if (plVar35 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar35 = (long *)*plVar35;
                          if (plVar35 == (long *)0x0) goto LAB_1095c4954;
                          plVar18 = (long *)plVar35[1];
                          if (plVar18 != plVar33) break;
                          if (*(byte *)(plVar35 + 2) == *(byte *)(plVar30 + 2) &&
                              *(byte *)((long)plVar35 + 0x11) == *(byte *)((long)plVar30 + 0x11))
                          goto LAB_1095c4ac8;
                        }
                        if (((ulong)plVar21 & uVar24) == 0) {
                          plVar18 = (long *)((ulong)plVar18 & uVar24);
                        }
                        else if (plVar21 <= plVar18) {
                          uVar22 = 0;
                          if (plVar21 != (long *)0x0) {
                            uVar22 = (ulong)plVar18 / (ulong)plVar21;
                          }
                          plVar18 = (long *)((long)plVar18 - uVar22 * (long)plVar21);
                        }
                      } while (plVar18 == plVar20);
                    }
                  }
LAB_1095c4954:
                  plVar35 = (long *)0x60;
                  __Znwm();
                  plStack_c8 = (long *)0x0;
                  *plVar35 = 0;
                  plVar35[1] = (long)plVar33;
                  *(short *)(plVar35 + 2) = (short)plVar30[2];
                  lVar16 = plVar30[4];
                  lVar13 = plVar30[3];
                  plVar35[5] = plVar30[5];
                  plVar35[4] = lVar16;
                  plVar35[3] = lVar13;
                  plStack_d8 = plVar35;
                  puStack_d0 = puVar31;
                  if (*(char *)((long)plVar30 + 0x47) < '\0') {
                    func_0x000107c3192c(plVar35 + 6,plVar30[6],plVar30[7]);
                  }
                  else {
                    lVar16 = plVar30[7];
                    lVar13 = plVar30[6];
                    plVar35[8] = plVar30[8];
                    plVar35[7] = lVar16;
                    plVar35[6] = lVar13;
                  }
                  plVar35[9] = 0;
                  plVar35[10] = 0;
                  plVar35[0xb] = 0;
                  FUN_109471edc();
                  plStack_c8 = (long *)CONCAT71(plStack_c8._1_7_,1);
                  if ((plVar21 == (long *)0x0) ||
                     (*(float *)(puVar11 + 0x2c) * (float)plVar21 <
                      (float)(*(long *)(puVar11 + 0x28) + 1))) {
                    uVar24 = 1;
                    if ((long *)0x2 < plVar21) {
                      uVar24 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
                    }
                    uVar24 = uVar24 | (long)plVar21 << 1;
                    uVar22 = (ulong)((float)(*(long *)(puVar11 + 0x28) + 1) /
                                    *(float *)(puVar11 + 0x2c));
                    if (uVar24 <= uVar22) {
                      uVar24 = uVar22;
                    }
                    FUN_1095c7284(puVar31,uVar24);
                    plVar21 = *(long **)(puVar11 + 0x20);
                    if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
                      plVar20 = (long *)(ulong)((int)plVar21 - 1U & uVar32);
                    }
                    else {
                      plVar20 = plVar33;
                      if (plVar21 <= plVar33) {
                        uVar24 = 0;
                        if (plVar21 != (long *)0x0) {
                          uVar24 = (ulong)plVar33 / (ulong)plVar21;
                        }
                        plVar20 = (long *)((long)plVar33 - uVar24 * (long)plVar21);
                      }
                    }
                  }
                  lVar13 = *(long *)puVar31;
                  plVar33 = *(long **)(lVar13 + (long)plVar20 * 8);
                  if (plVar33 == (long *)0x0) {
                    *plVar35 = *(long *)puVar1;
                    *(long **)puVar1 = plVar35;
                    *(ushort **)(lVar13 + (long)plVar20 * 8) = puVar1;
                    if (*plVar35 != 0) {
                      plVar33 = *(long **)(*plVar35 + 8);
                      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
                        plVar33 = (long *)((ulong)plVar33 & (long)plVar21 - 1U);
                      }
                      else if (plVar21 <= plVar33) {
                        uVar24 = 0;
                        if (plVar21 != (long *)0x0) {
                          uVar24 = (ulong)plVar33 / (ulong)plVar21;
                        }
                        plVar33 = (long *)((long)plVar33 - uVar24 * (long)plVar21);
                      }
                      *(long **)(*(long *)puVar31 + (long)plVar33 * 8) = plVar35;
                    }
                  }
                  else {
                    *plVar35 = *plVar33;
                    *plVar33 = (long)plVar35;
                  }
                  *(long *)(puVar11 + 0x28) = *(long *)(puVar11 + 0x28) + 1;
LAB_1095c4ac8:
                  plVar30 = (long *)*plVar30;
                } while (plVar30 != (long *)0x0);
              }
              puVar31 = puVar11 + 0x30;
              puVar11[0x34] = 0;
              puVar11[0x35] = 0;
              puVar11[0x36] = 0;
              puVar11[0x37] = 0;
              puVar31[0] = 0;
              puVar31[1] = 0;
              puVar31[2] = 0;
              puVar31[3] = 0;
              puVar11[0x3c] = 0;
              puVar11[0x3d] = 0;
              puVar11[0x3e] = 0;
              puVar11[0x3f] = 0;
              puVar11[0x38] = 0;
              puVar11[0x39] = 0;
              puVar11[0x3a] = 0;
              puVar11[0x3b] = 0;
              *(undefined4 *)(puVar11 + 0x40) = uStack_90;
              FUN_1095c749c(puVar31,uStack_a8);
              if (plStack_a0 != (long *)0x0) {
                puVar1 = puVar11 + 0x38;
                plVar30 = *(long **)(puVar11 + 0x34);
                plVar20 = plStack_a0;
                do {
                  bVar3 = *(byte *)(plVar20 + 2);
                  plVar33 = (long *)(ulong)bVar3;
                  if (plVar30 != (long *)0x0) {
                    uVar24 = (long)plVar30 - 1;
                    uVar32 = (uint)plVar30;
                    uVar34 = (uint)bVar3;
                    if (((ulong)plVar30 & uVar24) == 0) {
                      plVar21 = (long *)((ulong)(uVar32 - 1) & (ulong)plVar33);
                    }
                    else {
                      plVar21 = plVar33;
                      if (plVar30 <= plVar33) {
                        uVar6 = 0;
                        if (uVar32 != 0) {
                          uVar6 = uVar34 / uVar32;
                        }
                        plVar21 = (long *)(ulong)(uVar34 - uVar6 * uVar32);
                      }
                    }
                    plVar35 = *(long **)(*(long *)puVar31 + (long)plVar21 * 8);
                    if (plVar35 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar35 = (long *)*plVar35;
                          if (plVar35 == (long *)0x0) goto LAB_1095c4b90;
                          plVar18 = (long *)plVar35[1];
                          if (plVar18 != plVar33) break;
                          if (*(byte *)(plVar35 + 2) == uVar34) goto LAB_1095c4ca8;
                        }
                        if (((ulong)plVar30 & uVar24) == 0) {
                          plVar18 = (long *)((ulong)plVar18 & uVar24);
                        }
                        else if (plVar30 <= plVar18) {
                          uVar22 = 0;
                          if (plVar30 != (long *)0x0) {
                            uVar22 = (ulong)plVar18 / (ulong)plVar30;
                          }
                          plVar18 = (long *)((long)plVar18 - uVar22 * (long)plVar30);
                        }
                      } while (plVar18 == plVar21);
                    }
                  }
LAB_1095c4b90:
                  plVar35 = (long *)0x30;
                  __Znwm();
                  *plVar35 = 0;
                  plVar35[1] = (long)plVar33;
                  lVar13 = plVar20[2];
                  lVar23 = plVar20[5];
                  lVar16 = plVar20[4];
                  plVar35[3] = plVar20[3];
                  plVar35[2] = lVar13;
                  plVar35[5] = lVar23;
                  plVar35[4] = lVar16;
                  if ((plVar30 == (long *)0x0) ||
                     (*(float *)(puVar11 + 0x40) * (float)plVar30 <
                      (float)(*(long *)(puVar11 + 0x3c) + 1))) {
                    uVar24 = 1;
                    if ((long *)0x2 < plVar30) {
                      uVar24 = (ulong)(((ulong)plVar30 & (long)plVar30 - 1U) != 0);
                    }
                    uVar24 = uVar24 | (long)plVar30 << 1;
                    uVar22 = (ulong)((float)(*(long *)(puVar11 + 0x3c) + 1) /
                                    *(float *)(puVar11 + 0x40));
                    if (uVar24 <= uVar22) {
                      uVar24 = uVar22;
                    }
                    FUN_1095c749c(puVar31,uVar24);
                    plVar30 = *(long **)(puVar11 + 0x34);
                    if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
                      plVar21 = (long *)((ulong)((int)plVar30 - 1) & (ulong)plVar33);
                    }
                    else {
                      plVar21 = plVar33;
                      if (plVar30 <= plVar33) {
                        uVar24 = 0;
                        if (plVar30 != (long *)0x0) {
                          uVar24 = (ulong)plVar33 / (ulong)plVar30;
                        }
                        plVar21 = (long *)((long)plVar33 - uVar24 * (long)plVar30);
                      }
                    }
                  }
                  lVar13 = *(long *)puVar31;
                  plVar33 = *(long **)(lVar13 + (long)plVar21 * 8);
                  if (plVar33 == (long *)0x0) {
                    *plVar35 = *(long *)puVar1;
                    *(long **)puVar1 = plVar35;
                    *(ushort **)(lVar13 + (long)plVar21 * 8) = puVar1;
                    if (*plVar35 != 0) {
                      plVar33 = *(long **)(*plVar35 + 8);
                      if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
                        plVar33 = (long *)((ulong)plVar33 & (long)plVar30 - 1U);
                      }
                      else if (plVar30 <= plVar33) {
                        uVar24 = 0;
                        if (plVar30 != (long *)0x0) {
                          uVar24 = (ulong)plVar33 / (ulong)plVar30;
                        }
                        plVar33 = (long *)((long)plVar33 - uVar24 * (long)plVar30);
                      }
                      plVar33 = (long *)(*(long *)puVar31 + (long)plVar33 * 8);
                      goto LAB_1095c4c98;
                    }
                  }
                  else {
                    *plVar35 = *plVar33;
LAB_1095c4c98:
                    *plVar33 = (long)plVar35;
                  }
                  *(long *)(puVar11 + 0x3c) = *(long *)(puVar11 + 0x3c) + 1;
LAB_1095c4ca8:
                  plVar20 = (long *)*plVar20;
                } while (plVar20 != (long *)0x0);
              }
              *param_1 = puVar11;
              FUN_1095c766c(&lStack_b0);
              if (bStack_118 == 1) {
                FUN_1095c6fcc(&uStack_140);
              }
              if (bStack_178 == 1) {
                FUN_1095c6ecc(&lStack_1a0);
              }
              return;
            }
            uVar10 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt13runtime_errorC1EPKc();
            ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_1095c4f48;
          }
          uVar10 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt13runtime_errorC1EPKc();
        }
        else {
LAB_1095c4408:
          uVar10 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt13runtime_errorC1EPKc();
        }
        ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
        goto LAB_1095c4f48;
      }
      goto LAB_1095c4d5c;
    }
    if (cStack_b1 == '\x01') {
      cStack_b5 = cStack_b1;
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        plVar35 = param_2 + 6;
        FUN_1095c0584(plVar35,param_2 + 2);
        if (((ulong)plVar35 & 1) == 0) {
          uVar10 = 0x10;
          ___cxa_allocate_exception(0x10);
          (**(code **)(*param_2 + 0x28))(&plStack_d8,param_2);
          FUN_10928a5e0(&uStack_140,&UNK_10f575bdd,&plStack_d8);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar10,&uStack_140);
          ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_1095c4f48;
        }
        *(undefined1 *)(param_2 + 5) = 1;
      }
      plVar35 = param_2 + 0x265;
      if (plVar20 != plVar35) {
        if (param_2[0x26c] != 0) {
          piVar14 = (int *)(param_2[0x26c] + 0x14);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = *piVar14 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        if (plVar30[10] != 0) {
          piVar14 = (int *)(plVar30[10] + 0x14);
          do {
            iVar12 = *piVar14;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
            if (bVar9) {
              *piVar14 = iVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 + -1 == 0) {
            func_0x000109a848d4(plVar20);
          }
        }
        plVar30[10] = 0;
        plVar30[6] = 0;
        plVar30[5] = 0;
        plVar30[8] = 0;
        plVar30[7] = 0;
        if (*(int *)((long)plVar30 + 0x1c) < 1) {
          *(int *)plVar20 = (int)*plVar35;
LAB_1095c3b54:
          if (2 < *(int *)((long)param_2 + 0x132c)) goto LAB_1095c3b88;
          *(int *)((long)plVar30 + 0x1c) = *(int *)((long)param_2 + 0x132c);
          plVar30[4] = param_2[0x266];
          puVar15 = (undefined8 *)param_2[0x26e];
          puVar25 = (undefined8 *)plVar30[0xc];
          *puVar25 = *puVar15;
          puVar25[1] = puVar15[1];
        }
        else {
          lVar13 = 0;
          lVar16 = plVar30[0xb];
          do {
            *(undefined4 *)(lVar16 + lVar13 * 4) = 0;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)((long)plVar30 + 0x1c));
          *(int *)plVar20 = (int)*plVar35;
          if (*(int *)((long)plVar30 + 0x1c) < 3) goto LAB_1095c3b54;
LAB_1095c3b88:
          func_0x000109a84868(plVar20,plVar35);
        }
        lVar13 = param_2[0x267];
        plVar30[6] = param_2[0x268];
        plVar30[5] = lVar13;
        lVar13 = param_2[0x269];
        plVar30[8] = param_2[0x26a];
        plVar30[7] = lVar13;
        lVar13 = param_2[0x26b];
        plVar30[10] = param_2[0x26c];
        plVar30[9] = lVar13;
      }
      plVar35 = param_2 + 0x27e;
      if (plVar21 == plVar35) {
        lVar13 = 0x1450;
        lVar16 = 5000;
        goto LAB_1095c3cd8;
      }
      if (param_2[0x285] != 0) {
        piVar14 = (int *)(param_2[0x285] + 0x14);
        do {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar9) {
            *piVar14 = *piVar14 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (plVar33[10] != 0) {
        piVar14 = (int *)(plVar33[10] + 0x14);
        do {
          iVar12 = *piVar14;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar9) {
            *piVar14 = iVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(plVar21);
        }
      }
      plVar33[6] = 0;
      plVar33[5] = 0;
      plVar33[10] = 0;
      plVar33[8] = 0;
      plVar33[7] = 0;
      if (*(int *)((long)plVar33 + 0x1c) < 1) {
        *(int *)plVar21 = (int)*plVar35;
LAB_1095c3c70:
        if (2 < *(int *)((long)param_2 + 0x13f4)) goto LAB_1095c3ca4;
        *(int *)((long)plVar33 + 0x1c) = *(int *)((long)param_2 + 0x13f4);
        plVar33[4] = param_2[0x27f];
        puVar15 = (undefined8 *)param_2[0x287];
        puVar25 = (undefined8 *)plVar33[0xc];
        *puVar25 = *puVar15;
        puVar25[1] = puVar15[1];
      }
      else {
        lVar13 = 0;
        lVar16 = plVar33[0xb];
        do {
          *(undefined4 *)(lVar16 + lVar13 * 4) = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)((long)plVar33 + 0x1c));
        *(int *)plVar21 = (int)*plVar35;
        if (*(int *)((long)plVar33 + 0x1c) < 3) goto LAB_1095c3c70;
LAB_1095c3ca4:
        func_0x000109a84868(plVar21,plVar35);
      }
      lVar13 = param_2[0x280];
      plVar33[6] = param_2[0x281];
      plVar33[5] = lVar13;
      lVar13 = 0x1450;
      lVar16 = 5000;
      lVar23 = 0x1420;
      lVar26 = 0x1410;
LAB_1095c3cc8:
      lVar38 = *(long *)((long)param_2 + lVar26);
      plVar33[8] = ((long *)((long)param_2 + lVar26))[1];
      plVar33[7] = lVar38;
      lVar26 = *(long *)((long)param_2 + lVar23);
      plVar33[10] = ((long *)((long)param_2 + lVar23))[1];
      plVar33[9] = lVar26;
      goto LAB_1095c3cd8;
    }
    uVar10 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
LAB_1095c3d40:
  ___cxa_throw(uVar10,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_1095c4f48:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1095c4f4c);
  (*pcVar8)();
}



/* Entry: 1095c51e8; end: 1095c5663;  */

undefined8 * FUN_1095c51e8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  *param_1 = &PTR_DAT_110afe9d8;
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 2,*param_3,param_3[1]);
  }
  else {
    uVar6 = param_3[1];
    uVar4 = *param_3;
    param_1[4] = param_3[2];
    param_1[3] = uVar6;
    param_1[2] = uVar4;
  }
  *param_1 = &PTR_FUN_110afe960;
  *(undefined1 *)(param_1 + 5) = 0;
  _bzero(param_1 + 6,0x1002);
  param_1[0x210] = 0;
  param_1[0x20f] = 0;
  param_1[0x212] = 0;
  param_1[0x211] = 0;
  param_1[0x20c] = 0;
  param_1[0x20b] = 0;
  param_1[0x20e] = 0;
  param_1[0x20d] = 0;
  param_1[0x208] = 0;
  param_1[0x207] = 0;
  param_1[0x20a] = 0;
  param_1[0x209] = 0;
  *(undefined4 *)(param_1 + 0x213) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x10a4) = 0;
  *(undefined8 *)((long)param_1 + 0x109c) = 0;
  *(undefined8 *)((long)param_1 + 0x10b4) = 0;
  *(undefined8 *)((long)param_1 + 0x10ac) = 0;
  *(undefined8 *)((long)param_1 + 0x10c4) = 0;
  *(undefined8 *)((long)param_1 + 0x10bc) = 0;
  param_1[0x21a] = 0;
  param_1[0x219] = 0;
  param_1[0x21b] = param_1 + 0x214;
  param_1[0x21c] = param_1 + 0x21d;
  param_1[0x21e] = 0;
  param_1[0x21d] = 0;
  param_1[0x220] = 0;
  param_1[0x21f] = 0;
  param_1[0x222] = 0;
  param_1[0x221] = 0;
  *(undefined4 *)(param_1 + 0x223) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0x42ff0000;
  param_1[0x22b] = 0;
  param_1[0x22a] = 0;
  *(undefined8 *)((long)param_1 + 0x113c) = 0;
  *(undefined8 *)((long)param_1 + 0x1134) = 0;
  *(undefined8 *)((long)param_1 + 0x114c) = 0;
  *(undefined8 *)((long)param_1 + 0x1144) = 0;
  *(undefined8 *)((long)param_1 + 0x112c) = 0;
  *(undefined8 *)((long)param_1 + 0x1124) = 0;
  param_1[0x22c] = param_1 + 0x225;
  param_1[0x22d] = param_1 + 0x22e;
  param_1[0x22f] = 0;
  param_1[0x22e] = 0;
  *(undefined4 *)(param_1 + 0x230) = 0x42ff0000;
  *(undefined8 *)((long)param_1 + 0x118c) = 0;
  *(undefined8 *)((long)param_1 + 0x1184) = 0;
  *(undefined8 *)((long)param_1 + 0x119c) = 0;
  *(undefined8 *)((long)param_1 + 0x1194) = 0;
  *(undefined8 *)((long)param_1 + 0x11ac) = 0;
  *(undefined8 *)((long)param_1 + 0x11a4) = 0;
  param_1[0x237] = 0;
  param_1[0x236] = 0;
  param_1[0x238] = param_1 + 0x231;
  param_1[0x239] = param_1 + 0x23a;
  param_1[0x23b] = 0;
  param_1[0x23a] = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0x42ff0000;
  param_1[0x243] = 0;
  param_1[0x242] = 0;
  *(undefined8 *)((long)param_1 + 0x11fc) = 0;
  *(undefined8 *)((long)param_1 + 0x11f4) = 0;
  *(undefined8 *)((long)param_1 + 0x120c) = 0;
  *(undefined8 *)((long)param_1 + 0x1204) = 0;
  *(undefined8 *)((long)param_1 + 0x11ec) = 0;
  *(undefined8 *)((long)param_1 + 0x11e4) = 0;
  param_1[0x244] = param_1 + 0x23d;
  param_1[0x245] = param_1 + 0x246;
  param_1[0x247] = 0;
  param_1[0x246] = 0;
  param_1[0x249] = 0;
  param_1[0x248] = 0;
  param_1[0x24b] = 0;
  param_1[0x24a] = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x24d) = 0x42ff0000;
  param_1[0x254] = 0;
  param_1[0x253] = 0;
  *(undefined8 *)((long)param_1 + 0x1284) = 0;
  *(undefined8 *)((long)param_1 + 0x127c) = 0;
  *(undefined8 *)((long)param_1 + 0x1294) = 0;
  *(undefined8 *)((long)param_1 + 0x128c) = 0;
  *(undefined8 *)((long)param_1 + 0x1274) = 0;
  *(undefined8 *)((long)param_1 + 0x126c) = 0;
  param_1[0x255] = param_1 + 0x24e;
  param_1[0x256] = param_1 + 599;
  param_1[600] = 0;
  param_1[599] = 0;
  *(undefined4 *)(param_1 + 0x259) = 0x42ff0000;
  param_1[0x260] = 0;
  param_1[0x25f] = 0;
  *(undefined8 *)((long)param_1 + 0x12e4) = 0;
  *(undefined8 *)((long)param_1 + 0x12dc) = 0;
  *(undefined8 *)((long)param_1 + 0x12f4) = 0;
  *(undefined8 *)((long)param_1 + 0x12ec) = 0;
  *(undefined8 *)((long)param_1 + 0x12d4) = 0;
  *(undefined8 *)((long)param_1 + 0x12cc) = 0;
  param_1[0x261] = param_1 + 0x25a;
  param_1[0x262] = param_1 + 0x263;
  param_1[0x264] = 0;
  param_1[0x263] = 0;
  *(undefined4 *)(param_1 + 0x265) = 0x42ff0000;
  param_1[0x26c] = 0;
  param_1[0x26b] = 0;
  *(undefined8 *)((long)param_1 + 0x1344) = 0;
  *(undefined8 *)((long)param_1 + 0x133c) = 0;
  *(undefined8 *)((long)param_1 + 0x1354) = 0;
  *(undefined8 *)((long)param_1 + 0x134c) = 0;
  *(undefined8 *)((long)param_1 + 0x1334) = 0;
  *(undefined8 *)((long)param_1 + 0x132c) = 0;
  param_1[0x26d] = param_1 + 0x266;
  param_1[0x270] = 0;
  param_1[0x26f] = 0;
  param_1[0x26e] = param_1 + 0x26f;
  param_1[0x271] = 0;
  *(undefined4 *)(param_1 + 0x272) = 0x42ff0000;
  param_1[0x279] = 0;
  param_1[0x278] = 0;
  *(undefined8 *)((long)param_1 + 0x13ac) = 0;
  *(undefined8 *)((long)param_1 + 0x13a4) = 0;
  *(undefined8 *)((long)param_1 + 0x13bc) = 0;
  *(undefined8 *)((long)param_1 + 0x13b4) = 0;
  *(undefined8 *)((long)param_1 + 0x139c) = 0;
  *(undefined8 *)((long)param_1 + 0x1394) = 0;
  param_1[0x27a] = param_1 + 0x273;
  param_1[0x27b] = param_1 + 0x27c;
  param_1[0x27d] = 0;
  param_1[0x27c] = 0;
  *(undefined4 *)(param_1 + 0x27e) = 0x42ff0000;
  param_1[0x285] = 0;
  param_1[0x284] = 0;
  *(undefined8 *)((long)param_1 + 0x140c) = 0;
  *(undefined8 *)((long)param_1 + 0x1404) = 0;
  *(undefined8 *)((long)param_1 + 0x141c) = 0;
  *(undefined8 *)((long)param_1 + 0x1414) = 0;
  *(undefined8 *)((long)param_1 + 0x13fc) = 0;
  *(undefined8 *)((long)param_1 + 0x13f4) = 0;
  param_1[0x286] = param_1 + 0x27f;
  param_1[0x287] = param_1 + 0x288;
  param_1[0x28a] = 0;
  param_1[0x289] = 0;
  param_1[0x288] = 0;
  *(undefined4 *)(param_1 + 0x28b) = 0x42ff0000;
  param_1[0x292] = 0;
  param_1[0x291] = 0;
  *(undefined8 *)((long)param_1 + 0x1474) = 0;
  *(undefined8 *)((long)param_1 + 0x146c) = 0;
  *(undefined8 *)((long)param_1 + 0x1484) = 0;
  *(undefined8 *)((long)param_1 + 0x147c) = 0;
  *(undefined8 *)((long)param_1 + 0x1464) = 0;
  *(undefined8 *)((long)param_1 + 0x145c) = 0;
  param_1[0x293] = param_1 + 0x28c;
  param_1[0x294] = param_1 + 0x295;
  *(undefined1 *)(param_1 + 0x297) = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  _bzero((long)param_1 + 0x14bc,0x1001);
  _bzero(param_1 + 0x498,0x1000);
  if (*param_2 == param_2[1]) {
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
  else {
    puVar3 = param_1 + 6;
    FUN_1095c0ae0(puVar3,param_2,0,0,param_3);
    if (((ulong)puVar3 & 1) != 0) {
      uVar1 = param_3[1];
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
      }
      if (uVar1 == 0) {
        return param_1;
      }
      fVar5 = *(float *)((long)param_1 + 0x34);
      if ((int)fVar5 == 2000) {
        return param_1;
      }
      uVar4 = 0x10;
      ___cxa_allocate_exception(0x10);
      __ZNSt3__19to_stringEi(auStack_70,(int)fVar5);
      FUN_10928a5e0(auStack_58,&UNK_10f575a1b,auStack_70);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (uVar4,auStack_58);
      ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,
                   PTR___ZNSt13runtime_errorD1Ev_1103461d8);
      goto LAB_1095c55dc;
    }
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
  ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_1095c55dc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1095c55e0);
  (*pcVar2)();
}



/* Entry: 1095c5664; end: 1095c5893;  */

long * FUN_1095c5664(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_68 [24];
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113733090 & 1) == 0) {
    iVar3 = 0x13733090;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      uStack_50 = 0x523;
      uStack_4c = 0;
      uStack_48 = 2000;
      uStack_44 = 1;
      FUN_1095c76b4(&uStack_50,2);
      ___cxa_atexit(FUN_1095c5894,0x113733098,0x100000000);
      ___cxa_guard_release(0x113733090);
    }
  }
  uVar11 = (ulong)(int)*(float *)(param_1 + 0x34);
  if (uRam00000001137330a0 != 0) {
    uVar7 = uRam00000001137330a0 - 1;
    if ((uRam00000001137330a0 & uVar7) == 0) {
      uVar8 = uVar7 & uVar11;
    }
    else {
      uVar8 = uVar11;
      if (uRam00000001137330a0 <= uVar11) {
        uVar8 = 0;
        if (uRam00000001137330a0 != 0) {
          uVar8 = uVar11 / uRam00000001137330a0;
        }
        uVar8 = uVar11 - uVar8 * uRam00000001137330a0;
      }
    }
    plVar9 = *(long **)(lRam0000000113733098 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_1095c5738;
          uVar10 = plVar9[1];
          if (uVar10 != uVar11) break;
          if (*(int *)(plVar9 + 2) == (int)*(float *)(param_1 + 0x34)) {
            plVar9 = (long *)(ulong)*(byte *)((long)plVar9 + 0x14);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
              ___stack_chk_fail();
              ___cxa_guard_abort(0x113733090);
              __Unwind_Resume();
              plVar5 = (long *)plVar9[2];
              while (plVar5 != (long *)0x0) {
                plVar5 = (long *)*plVar5;
                __ZdlPv();
              }
              lVar6 = *plVar9;
              *plVar9 = 0;
              if (lVar6 != 0) {
                __ZdlPv();
              }
              return plVar9;
            }
            return plVar9;
          }
        }
        if ((uRam00000001137330a0 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uRam00000001137330a0 <= uVar10) {
          uVar1 = 0;
          if (uRam00000001137330a0 != 0) {
            uVar1 = uVar10 / uRam00000001137330a0;
          }
          uVar10 = uVar10 - uVar1 * uRam00000001137330a0;
        }
      } while (uVar10 == uVar8);
    }
  }
LAB_1095c5738:
  uVar4 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEi(auStack_68,uVar11);
  FUN_10928a5e0(&uStack_50,&UNK_10f575a41,auStack_68);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar4,&uStack_50);
  ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1095c5794);
  (*pcVar2)();
}



/* Entry: 1095c5894; end: 1095c5897;  */

long * FUN_1095c5894(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095c5898; end: 1095c5a53;  */

void FUN_1095c5898(double *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_1b0 [2];
  char cStack_199;
  undefined8 auStack_198 [2];
  char cStack_181;
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
  ulong uStack_40;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x10))();
  if ((int)plVar1 == 0) {
    fVar4 = *(float *)(param_2 + 0x106);
    lVar5 = param_2[0x100];
    lVar6 = param_2[0x101];
    param_1[1] = (double)(float)((ulong)lVar5 >> 0x20);
    *param_1 = (double)(float)lVar5;
    param_1[3] = (double)(float)((ulong)lVar6 >> 0x20);
    param_1[2] = (double)(float)lVar6;
    lVar5 = param_2[0x102];
    lVar6 = param_2[0x105];
    param_1[5] = (double)(float)((ulong)lVar5 >> 0x20);
    param_1[4] = (double)(float)lVar5;
    param_1[7] = (double)(float)((ulong)lVar6 >> 0x20);
    param_1[6] = (double)(float)lVar6;
    param_1[8] = (double)fVar4;
    uVar3 = 1;
  }
  else {
    if (1 < iRam00000001132dfb08) {
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      FUN_10926db08(&uStack_180);
      uStack_78 = CONCAT44(uStack_78._4_4_,3);
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      func_0x000107c31940(auStack_198,&UNK_10f575a57);
      func_0x000107c31940(auStack_1b0,&UNK_10f575ae3);
      puVar2 = &uStack_180;
      FUN_109671348(puVar2,2,auStack_198,auStack_1b0,0x90);
      FUN_1092b4db8();
      (**(code **)(*param_2 + 0x10))(param_2);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(puVar2,param_2);
      if (cStack_199 < '\0') {
        __ZdlPv(auStack_1b0[0]);
      }
      if (cStack_181 < '\0') {
        __ZdlPv(auStack_198[0]);
      }
      FUN_109671170(&uStack_180);
    }
    uVar3 = 0;
    *(undefined1 *)param_1 = 0;
  }
  *(undefined1 *)(param_1 + 9) = uVar3;
  return;
}



/* Entry: 1095c5a54; end: 1095c5bfb;  */

/* WARNING: Removing unreachable block (ram,0x0001095c5bb4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1095c5a54(undefined8 param_1,long param_2)

{
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [56];
  undefined8 uStack_110;
  char cStack_f9;
  undefined **appuStack_e8 [19];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_31;
  
  __ZNSt3__19to_stringEi(&uStack_50,(int)(*(float *)(param_2 + 0x40) * 100.0));
  FUN_10926db08(&ppuStack_158);
  uStack_31 = uStack_50;
  FUN_1092b4db8(&ppuStack_158,&uStack_31,1);
  FUN_1092b4db8();
  uStack_31 = uStack_4f;
  FUN_1092b4db8();
  FUN_1092b4db8();
  uStack_31 = uStack_4e;
  FUN_1092b4db8();
  FUN_10926dc5c(param_1,&ppuStack_150,&uStack_31);
  appuStack_e8[0] = &PTR_DAT_11088d708;
  ppuStack_158 = &PTR_SUB_11088d6e0;
  ppuStack_150 = &PTR_DAT_11088d7b0;
  if (cStack_f9 < '\0') {
    __ZdlPv(uStack_110);
  }
  ppuStack_150 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_148);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_158,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e8);
  return;
}



/* Entry: 1095c5bfc; end: 1095c60b3;  */

/* WARNING: Removing unreachable block (ram,0x0001095c5d10) */
/* WARNING: Removing unreachable block (ram,0x0001095c5d30) */

void FUN_1095c5bfc(undefined8 param_1,long *param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 ****ppppuStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined8 ****ppppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 ****ppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined8 auStack_148 [3];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 auStack_118 [3];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [24];
  ulong uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long lStack_68;
  long lStack_60;
  
  (**(code **)(*param_2 + 0x38))(&uStack_98,param_2,param_3,0);
  fVar1 = (float)uStack_98;
  if ((fVar1 != 0.0) && (fVar6 = (float)(uStack_98 >> 0x20), fVar6 != 0.0)) {
    fVar8 = *param_4;
    fVar9 = param_4[1];
    uVar7 = uStack_98;
    fVar10 = fStack_90;
    fVar11 = fStack_8c;
    fVar12 = fStack_88;
    fVar13 = fStack_84;
    if ((fVar8 != 0.0) || (fVar9 != 0.0)) {
      bVar3 = false;
      if ((fVar8 == fVar1) && (bVar3 = false, !NAN(fVar9) && !NAN(fVar6))) {
        bVar3 = fVar9 == fVar6;
      }
      if (!bVar3) {
        fVar9 = fVar9 / fVar6;
        if (1e-06 < ABS(fVar9 - fVar8 / fVar1)) {
          uVar4 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__19to_stringEf(auStack_178,uStack_98 & 0xffffffff);
          FUN_10928a5e0(auStack_160,&UNK_10f575b66,auStack_178);
          FUN_109259240(auStack_148,auStack_160,&DAT_10f68e8ee);
          __ZNSt3__19to_stringEf(&ppppuStack_190,fVar6);
          if (-1 < (char)bStack_179) {
            uStack_188 = (ulong)bStack_179;
            ppppuStack_190 = &ppppuStack_190;
          }
          puVar5 = auStack_148;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar5,ppppuStack_190,uStack_188);
          uStack_128 = puVar5[1];
          uStack_130 = *puVar5;
          uStack_120 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          FUN_109259240(auStack_118,&uStack_130,&UNK_10f575bb5);
          __ZNSt3__19to_stringEf(&ppppuStack_1a8,*param_4);
          if (-1 < (char)bStack_191) {
            uStack_1a0 = (ulong)bStack_191;
            ppppuStack_1a8 = &ppppuStack_1a8;
          }
          puVar5 = auStack_118;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar5,ppppuStack_1a8,uStack_1a0);
          uStack_f8 = puVar5[1];
          uStack_100 = *puVar5;
          uStack_f0 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          FUN_109259240(auStack_e8,&uStack_100,&DAT_10f68e8ee);
          __ZNSt3__19to_stringEf(&ppppuStack_1c0,param_4[1]);
          if (-1 < (char)bStack_1a9) {
            uStack_1b8 = (ulong)bStack_1a9;
            ppppuStack_1c0 = &ppppuStack_1c0;
          }
          puVar5 = auStack_e8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar5,ppppuStack_1c0,uStack_1b8);
          uStack_c8 = puVar5[1];
          uStack_d0 = *puVar5;
          uStack_c0 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          FUN_109259240(auStack_b0,&uStack_d0,&DAT_10f684600);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar4,auStack_b0);
          ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_1095c5f10;
        }
        fVar10 = fVar9 * fStack_90;
        fVar11 = fVar9 * fStack_8c;
        fVar12 = fVar9 * (fStack_88 + 0.5) + -0.5;
        fVar13 = fVar9 * (fStack_84 + 0.5) + -0.5;
        uVar7 = *(ulong *)param_4;
      }
    }
    func_0x000107c31940(auStack_b0,"");
    FUN_1095c6d7c(param_1,uVar7,CONCAT44(fVar11,fVar10),CONCAT44(fVar13,fVar12),auStack_b0,0,0);
    if (lStack_68 != 0) {
      lStack_60 = lStack_68;
      __ZdlPv();
    }
    return;
  }
  uVar4 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1EPKc();
  ___cxa_throw(uVar4,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_1095c5f10:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1095c5f14);
  (*pcVar2)();
}



/* Entry: 1095c60b4; end: 1095c60f3;  */

long FUN_1095c60b4(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x30);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  return param_1;
}



/* Entry: 1095c60f4; end: 1095c61e7;  */

void FUN_1095c60f4(undefined8 param_1,long param_2,uint param_3,int param_4,undefined8 *param_5,
                  undefined8 *param_6,int param_7,int param_8,int param_9)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  int iStack_70;
  long *plStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  long **pplStack_48;
  long *plStack_40;
  undefined4 *puStack_38;
  long lStack_30;
  undefined4 uStack_28;
  undefined1 uStack_21;
  
  uStack_21 = (undefined1)param_3;
  if (param_3 < 2) {
    uStack_28 = *(undefined4 *)(param_2 + 0x102c);
    plStack_60 = &lStack_30;
    puStack_38 = &uStack_28;
    puStack_50 = &uStack_21;
    pplStack_48 = &plStack_40;
    if (param_4 == 0) {
      uVar12 = 0xca;
      uVar14 = 0xc9;
      uVar15 = 0xe6;
      uVar16 = 0xec;
      uVar17 = 0xed;
      uVar18 = 0xe7;
    }
    else {
      uVar12 = 0xcc;
      uVar14 = 0xcb;
      uVar15 = 0xe9;
      uVar16 = 0xee;
      uVar17 = 0xef;
      uVar18 = 0xea;
    }
    lStack_58 = param_2;
    plStack_40 = plStack_60;
    lStack_30 = param_2;
    FUN_1095c61e8(param_1,&plStack_60,uVar12,uVar14,uVar15,uVar16,uVar17,uVar18);
    return;
  }
  uVar14 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  uVar12 = uVar14;
  puVar21 = (undefined8 *)PTR___ZTISt13runtime_error_110346a40;
  puVar13 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
  ___cxa_throw();
  iVar11 = (int)puVar13;
  ___cxa_free_exception(uVar14);
  __Unwind_Resume(uVar12);
  lVar19 = *(long *)*puVar21 + 0x30;
  fVar24 = *(float *)(lVar19 + (long)iVar11 * 4);
  if ((fVar24 == 0.0) || (fVar25 = *(float *)(lVar19 + (long)(int)param_5 * 4), fVar25 == 0.0)) {
    puVar8 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    puVar21 = puVar8;
    plVar10 = (long *)PTR___ZTISt13runtime_error_110346a40;
    puVar13 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
    ___cxa_throw(puVar8,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
    ___cxa_free_exception(puVar8);
    __Unwind_Resume();
    lVar19 = plVar10[2];
    lVar9 = *plVar10;
    FUN_1095c6e18(lVar9,puVar13,*(undefined1 *)plVar10[1]);
    if (lVar9 != 0) {
      lVar20 = 0;
      fVar24 = *(float *)(lVar9 + 0x14);
      fVar25 = *(float *)(lVar9 + 0x18);
      bVar7 = true;
      iVar11 = (int)fVar24;
      do {
        iVar22 = iVar11;
        iVar5 = *(int *)((long)param_5 + lVar20 * 4);
        if (!bVar7) break;
        bVar7 = false;
        lVar20 = 1;
        iVar11 = (int)fVar25;
      } while (iVar5 == iVar22);
      if (iVar5 != iVar22) {
        *(undefined4 *)puVar21 = 0x42ff0000;
        *(undefined8 *)((long)puVar21 + 0xc) = 0;
        *(undefined8 *)((long)puVar21 + 4) = 0;
        *(undefined8 *)((long)puVar21 + 0x1c) = 0;
        *(undefined8 *)((long)puVar21 + 0x14) = 0;
        *(undefined8 *)((long)puVar21 + 0x2c) = 0;
        *(undefined8 *)((long)puVar21 + 0x24) = 0;
        puVar21[7] = 0;
        puVar21[6] = 0;
        puVar21[10] = 0;
        puVar21[8] = puVar21 + 1;
        puVar21[9] = puVar21 + 10;
        uStack_118 = NEON_scvtf(*param_5,4);
        fStack_120 = (float)(int)fVar24;
        fStack_11c = (float)(int)fVar25;
        puVar21[0xb] = 0;
        FUN_1095c2ea0(*(undefined4 *)(lVar19 + 0x40),param_6,&uStack_118,&fStack_120,puVar21,
                      *(undefined1 *)plVar10[3]);
        return;
      }
    }
    uVar12 = *param_6;
    uVar15 = param_6[3];
    uVar14 = param_6[2];
    iVar11 = *(int *)((long)param_6 + 4);
    puVar21[1] = param_6[1];
    *puVar21 = uVar12;
    puVar21[3] = uVar15;
    puVar21[2] = uVar14;
    lVar19 = param_6[7];
    uVar15 = param_6[4];
    uVar14 = param_6[7];
    uVar12 = param_6[6];
    puVar21[5] = param_6[5];
    puVar21[4] = uVar15;
    puVar21[7] = uVar14;
    puVar21[6] = uVar12;
    puVar21[10] = 0;
    puVar21[8] = puVar21 + 1;
    puVar21[9] = puVar21 + 10;
    puVar21[0xb] = 0;
    if (lVar19 != 0) {
      piVar1 = (int *)(lVar19 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      iVar11 = *(int *)((long)param_6 + 4);
    }
    if (iVar11 < 3) {
      puVar8 = (undefined8 *)param_6[9];
      puVar21 = (undefined8 *)puVar21[9];
      *puVar21 = *puVar8;
      puVar21[1] = puVar8[1];
      return;
    }
    *(undefined4 *)((long)puVar21 + 4) = 0;
    FUN_109a844cc(puVar21,*(undefined4 *)((long)param_6 + 4),0,0,0);
    if (0 < *(int *)((long)puVar21 + 4)) {
      lVar19 = 0;
      lVar9 = param_6[8];
      lVar2 = param_6[9];
      lVar20 = puVar21[8];
      lVar3 = puVar21[9];
      do {
        *(undefined4 *)(lVar20 + lVar19 * 4) = *(undefined4 *)(lVar9 + lVar19 * 4);
        *(undefined8 *)(lVar3 + lVar19 * 8) = *(undefined8 *)(lVar2 + lVar19 * 8);
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)puVar21 + 4));
    }
    return;
  }
  uVar4 = *(undefined4 *)(puVar21[1] + ((ulong)param_6 & 0xffffffff) * 4 + 0x30);
  if (*(char *)puVar21[2] == '\x01') {
    lVar19 = **(long **)puVar21[3] + 0x30;
    fVar26 = *(float *)(lVar19 + (long)param_7 * 4);
    fVar23 = *(float *)((undefined8 *)puVar21[3])[1];
    bVar7 = true;
    if ((!NAN(fVar26)) && (bVar7 = false, !NAN(fVar26) && !NAN(fVar23))) {
      bVar7 = fVar26 == fVar23;
    }
    if (!bVar7) {
      fVar27 = *(float *)(lVar19 + (long)param_8 * 4);
      bVar7 = true;
      if ((!NAN(fVar27)) && (bVar7 = false, !NAN(fVar27) && !NAN(fVar23))) {
        bVar7 = fVar27 == fVar23;
      }
      if (!bVar7) goto LAB_1095c6280;
    }
  }
  fVar26 = *(float *)(lVar19 + (long)param_9 * 4);
  fVar27 = *(float *)(lVar19 + (long)iStack_70 * 4);
LAB_1095c6280:
  func_0x000107c31940(auStack_c8,"");
  FUN_1095c6d7c(uVar12,CONCAT44(fVar25,fVar24),CONCAT44(uVar4,uVar4),CONCAT44(fVar27,fVar26),
                auStack_c8,0,0);
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  return;
}



/* Entry: 1095c61e8; end: 1095c6343;  */

void FUN_1095c61e8(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6,int param_7,int param_8,int param_9)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  lVar13 = *(long *)*param_2 + 0x30;
  fVar21 = *(float *)(lVar13 + (long)param_3 * 4);
  if ((fVar21 == 0.0) || (fVar22 = *(float *)(lVar13 + (long)(int)param_4 * 4), fVar22 == 0.0)) {
    puVar9 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    puVar15 = puVar9;
    plVar11 = (long *)PTR___ZTISt13runtime_error_110346a40;
    puVar12 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
    ___cxa_throw(puVar9,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
    ___cxa_free_exception(puVar9);
    __Unwind_Resume();
    lVar13 = plVar11[2];
    lVar10 = *plVar11;
    FUN_1095c6e18(lVar10,puVar12,*(undefined1 *)plVar11[1]);
    if (lVar10 != 0) {
      lVar14 = 0;
      fVar21 = *(float *)(lVar10 + 0x14);
      fVar22 = *(float *)(lVar10 + 0x18);
      bVar8 = true;
      iVar5 = (int)fVar21;
      do {
        iVar16 = iVar5;
        iVar6 = *(int *)((long)param_4 + lVar14 * 4);
        if (!bVar8) break;
        bVar8 = false;
        lVar14 = 1;
        iVar5 = (int)fVar22;
      } while (iVar6 == iVar16);
      if (iVar6 != iVar16) {
        *(undefined4 *)puVar15 = 0x42ff0000;
        *(undefined8 *)((long)puVar15 + 0xc) = 0;
        *(undefined8 *)((long)puVar15 + 4) = 0;
        *(undefined8 *)((long)puVar15 + 0x1c) = 0;
        *(undefined8 *)((long)puVar15 + 0x14) = 0;
        *(undefined8 *)((long)puVar15 + 0x2c) = 0;
        *(undefined8 *)((long)puVar15 + 0x24) = 0;
        puVar15[7] = 0;
        puVar15[6] = 0;
        puVar15[10] = 0;
        puVar15[8] = puVar15 + 1;
        puVar15[9] = puVar15 + 10;
        uStack_a8 = NEON_scvtf(*param_4,4);
        fStack_b0 = (float)(int)fVar21;
        fStack_ac = (float)(int)fVar22;
        puVar15[0xb] = 0;
        FUN_1095c2ea0(*(undefined4 *)(lVar13 + 0x40),param_5,&uStack_a8,&fStack_b0,puVar15,
                      *(undefined1 *)plVar11[3]);
        return;
      }
    }
    uVar18 = *param_5;
    uVar20 = param_5[3];
    uVar19 = param_5[2];
    iVar5 = *(int *)((long)param_5 + 4);
    puVar15[1] = param_5[1];
    *puVar15 = uVar18;
    puVar15[3] = uVar20;
    puVar15[2] = uVar19;
    lVar13 = param_5[7];
    uVar20 = param_5[4];
    uVar19 = param_5[7];
    uVar18 = param_5[6];
    puVar15[5] = param_5[5];
    puVar15[4] = uVar20;
    puVar15[7] = uVar19;
    puVar15[6] = uVar18;
    puVar15[10] = 0;
    puVar15[8] = puVar15 + 1;
    puVar15[9] = puVar15 + 10;
    puVar15[0xb] = 0;
    if (lVar13 != 0) {
      piVar1 = (int *)(lVar13 + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      iVar5 = *(int *)((long)param_5 + 4);
    }
    if (iVar5 < 3) {
      puVar9 = (undefined8 *)param_5[9];
      puVar15 = (undefined8 *)puVar15[9];
      *puVar15 = *puVar9;
      puVar15[1] = puVar9[1];
      return;
    }
    *(undefined4 *)((long)puVar15 + 4) = 0;
    FUN_109a844cc(puVar15,*(undefined4 *)((long)param_5 + 4),0,0,0);
    if (0 < *(int *)((long)puVar15 + 4)) {
      lVar13 = 0;
      lVar10 = param_5[8];
      lVar2 = param_5[9];
      lVar14 = puVar15[8];
      lVar3 = puVar15[9];
      do {
        *(undefined4 *)(lVar14 + lVar13 * 4) = *(undefined4 *)(lVar10 + lVar13 * 4);
        *(undefined8 *)(lVar3 + lVar13 * 8) = *(undefined8 *)(lVar2 + lVar13 * 8);
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)((long)puVar15 + 4));
    }
    return;
  }
  uVar4 = *(undefined4 *)(param_2[1] + ((ulong)param_5 & 0xffffffff) * 4 + 0x30);
  if (*(char *)param_2[2] == '\x01') {
    lVar13 = **(long **)param_2[3] + 0x30;
    fVar23 = *(float *)(lVar13 + (long)param_6 * 4);
    fVar17 = *(float *)((undefined8 *)param_2[3])[1];
    bVar8 = true;
    if ((!NAN(fVar23)) && (bVar8 = false, !NAN(fVar23) && !NAN(fVar17))) {
      bVar8 = fVar23 == fVar17;
    }
    if (!bVar8) {
      fVar24 = *(float *)(lVar13 + (long)param_7 * 4);
      bVar8 = true;
      if ((!NAN(fVar24)) && (bVar8 = false, !NAN(fVar24) && !NAN(fVar17))) {
        bVar8 = fVar24 == fVar17;
      }
      if (!bVar8) goto LAB_1095c6280;
    }
  }
  fVar23 = *(float *)(lVar13 + (long)param_8 * 4);
  fVar24 = *(float *)(lVar13 + (long)param_9 * 4);
LAB_1095c6280:
  func_0x000107c31940(auStack_58,"");
  FUN_1095c6d7c(param_1,CONCAT44(fVar22,fVar21),CONCAT44(uVar4,uVar4),CONCAT44(fVar24,fVar23),
                auStack_58,0,0);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 1095c6344; end: 1095c64eb;  */

void FUN_1095c6344(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  lVar9 = param_2[2];
  lVar7 = *param_2;
  FUN_1095c6e18(lVar7,param_3,*(undefined1 *)param_2[1]);
  if (lVar7 != 0) {
    lVar10 = 0;
    fVar14 = *(float *)(lVar7 + 0x14);
    fVar17 = *(float *)(lVar7 + 0x18);
    bVar12 = true;
    iVar4 = (int)fVar14;
    do {
      iVar13 = iVar4;
      iVar5 = *(int *)((long)param_4 + lVar10 * 4);
      if (!bVar12) break;
      bVar12 = false;
      lVar10 = 1;
      iVar4 = (int)fVar17;
    } while (iVar5 == iVar13);
    if (iVar5 != iVar13) {
      *(undefined4 *)param_1 = 0x42ff0000;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(undefined8 *)((long)param_1 + 4) = 0;
      *(undefined8 *)((long)param_1 + 0x1c) = 0;
      *(undefined8 *)((long)param_1 + 0x14) = 0;
      *(undefined8 *)((long)param_1 + 0x2c) = 0;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[10] = 0;
      param_1[8] = param_1 + 1;
      param_1[9] = param_1 + 10;
      uStack_48 = NEON_scvtf(*param_4,4);
      fStack_50 = (float)(int)fVar14;
      fStack_4c = (float)(int)fVar17;
      param_1[0xb] = 0;
      FUN_1095c2ea0(*(undefined4 *)(lVar9 + 0x40),param_5,&uStack_48,&fStack_50,param_1,
                    *(undefined1 *)param_2[3]);
      return;
    }
  }
  uVar15 = *param_5;
  uVar18 = param_5[3];
  uVar16 = param_5[2];
  iVar4 = *(int *)((long)param_5 + 4);
  param_1[1] = param_5[1];
  *param_1 = uVar15;
  param_1[3] = uVar18;
  param_1[2] = uVar16;
  lVar9 = param_5[7];
  uVar18 = param_5[4];
  uVar16 = param_5[7];
  uVar15 = param_5[6];
  param_1[5] = param_5[5];
  param_1[4] = uVar18;
  param_1[7] = uVar16;
  param_1[6] = uVar15;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x14);
    do {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar12) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    iVar4 = *(int *)((long)param_5 + 4);
  }
  if (iVar4 < 3) {
    puVar8 = (undefined8 *)param_5[9];
    puVar11 = (undefined8 *)param_1[9];
    *puVar11 = *puVar8;
    puVar11[1] = puVar8[1];
    return;
  }
  *(undefined4 *)((long)param_1 + 4) = 0;
  FUN_109a844cc(param_1,*(undefined4 *)((long)param_5 + 4),0,0,0);
  if (0 < *(int *)((long)param_1 + 4)) {
    lVar9 = 0;
    lVar7 = param_5[8];
    lVar2 = param_5[9];
    lVar10 = param_1[8];
    lVar3 = param_1[9];
    do {
      *(undefined4 *)(lVar10 + lVar9 * 4) = *(undefined4 *)(lVar7 + lVar9 * 4);
      *(undefined8 *)(lVar3 + lVar9 * 8) = *(undefined8 *)(lVar2 + lVar9 * 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)param_1 + 4));
  }
  return;
}



/* Entry: 1095c64ec; end: 1095c6807;  */

float * FUN_1095c64ec(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  float *pfVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 *puVar15;
  int iVar16;
  ulong uVar17;
  float fVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  float *pfVar22;
  bool bVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1095c6e18(param_2,param_4);
  if (param_2 == (float *)0x0) {
    fVar14 = *(float *)(param_5 + 1);
    fVar18 = *(float *)((long)param_5 + 0xc);
LAB_1095c6554:
    iVar16 = *(int *)((long)param_5 + 4);
    *(undefined8 *)param_1 = *param_5;
    param_1[2] = fVar14;
    param_1[3] = fVar18;
    uVar24 = param_5[2];
    uVar27 = param_5[5];
    uVar26 = param_5[4];
    *(undefined8 *)(param_1 + 6) = param_5[3];
    *(undefined8 *)(param_1 + 4) = uVar24;
    *(undefined8 *)(param_1 + 10) = uVar27;
    *(undefined8 *)(param_1 + 8) = uVar26;
    lVar20 = param_5[7];
    uVar24 = param_5[6];
    *(undefined8 *)(param_1 + 0xe) = param_5[7];
    *(undefined8 *)(param_1 + 0xc) = uVar24;
    pfVar9 = param_1 + 0x14;
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
    *(float **)(param_1 + 0x10) = param_1 + 2;
    *(float **)(param_1 + 0x12) = pfVar9;
    param_1[0x16] = 0.0;
    param_1[0x17] = 0.0;
    if (lVar20 != 0) {
      piVar1 = (int *)(lVar20 + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      iVar16 = *(int *)((long)param_5 + 4);
    }
    if (2 < iVar16) {
      param_1[1] = 0.0;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        pfVar9 = param_1;
        FUN_109a844cc(param_1,*(undefined4 *)((long)param_5 + 4),0,0,0);
        if (0 < (int)param_1[1]) {
          lVar20 = 0;
          lVar11 = param_5[8];
          lVar13 = param_5[9];
          lVar12 = *(long *)(param_1 + 0x10);
          lVar6 = *(long *)(param_1 + 0x12);
          do {
            *(undefined4 *)(lVar12 + lVar20 * 4) = *(undefined4 *)(lVar11 + lVar20 * 4);
            *(undefined8 *)(lVar6 + lVar20 * 8) = *(undefined8 *)(lVar13 + lVar20 * 8);
            lVar20 = lVar20 + 1;
          } while (lVar20 < (int)param_1[1]);
        }
        return pfVar9;
      }
      goto LAB_1095c6800;
    }
    puVar15 = (undefined8 *)param_5[9];
    puVar19 = *(undefined8 **)(param_1 + 0x12);
    *puVar19 = *puVar15;
    puVar19[1] = puVar15[1];
  }
  else {
    fVar25 = param_2[5];
    fVar18 = *(float *)((long)param_5 + 0xc);
    if ((fVar18 == (float)(int)fVar25) &&
       (fVar14 = (float)(int)param_2[6], *(float *)(param_5 + 1) == fVar14)) goto LAB_1095c6554;
    fStack_40 = (float)(int)param_2[6];
    *param_1 = 127.5;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[7] = 0.0;
    param_1[8] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[0xb] = 0.0;
    param_1[0xc] = 0.0;
    param_1[9] = 0.0;
    param_1[10] = 0.0;
    pfVar9 = param_1 + 0x14;
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
    param_1[0xe] = 0.0;
    param_1[0xf] = 0.0;
    param_1[0xc] = 0.0;
    param_1[0xd] = 0.0;
    *(float **)(param_1 + 0x10) = param_1 + 2;
    *(float **)(param_1 + 0x12) = pfVar9;
    param_1[0x16] = 0.0;
    param_1[0x17] = 0.0;
    param_2 = param_1;
    fStack_3c = (float)(int)fVar25;
    FUN_109a83fd0(param_1,2,&fStack_40,0xd);
    fVar14 = param_1[2];
    if (0 < (int)fVar14) {
      uVar17 = 0;
      uVar4 = *(uint *)(param_5 + 1);
      uVar5 = *(uint *)((long)param_5 + 0xc);
      fVar18 = param_1[3];
      lVar20 = param_5[2];
      plVar21 = (long *)param_5[9];
      do {
        if (0 < (int)fVar18) {
          fVar25 = 0.0;
          fVar28 = ((float)(uVar17 & 0xffffffff) + 0.5) / ((float)(int)fVar14 / (float)(int)uVar4) +
                   -0.5;
          uVar10 = (uint)fVar28;
          uVar3 = 0;
          if (-1 < (int)uVar10) {
            uVar3 = uVar4 - 1;
          }
          uVar2 = uVar10;
          if (uVar4 <= uVar10) {
            uVar2 = uVar3;
          }
          uVar3 = 0;
          if (-2 < (int)uVar10) {
            uVar3 = uVar4 - 1;
          }
          if (uVar10 + 1 < uVar4) {
            uVar3 = uVar10 + 1;
          }
          lVar11 = lVar20 + *plVar21 * (long)(int)uVar2;
          lVar12 = lVar20 + *plVar21 * (long)(int)uVar3;
          pfVar9 = (float *)(*(long *)(param_1 + 4) + **(long **)(param_1 + 0x12) * uVar17);
          do {
            lVar13 = 0;
            fVar29 = ((float)(uint)fVar25 + 0.5) / ((float)(int)fVar14 / (float)(int)uVar4) + -0.5;
            uVar10 = (uint)fVar29;
            uVar3 = 0;
            if (-1 < (int)uVar10) {
              uVar3 = uVar5 - 1;
            }
            uVar2 = uVar10;
            if (uVar5 <= uVar10) {
              uVar2 = uVar3;
            }
            uVar3 = 0;
            if (-2 < (int)uVar10) {
              uVar3 = uVar5 - 1;
            }
            if (uVar10 + 1 < uVar5) {
              uVar3 = uVar10 + 1;
            }
            fVar29 = fVar29 - (float)(int)fVar29;
            fStack_44 = 0.0;
            fStack_40 = 0.0;
            pfVar22 = &fStack_40;
            bVar8 = true;
            do {
              bVar23 = bVar8;
              *pfVar22 = (fVar28 - (float)(int)fVar28) *
                         (fVar29 * *(float *)(lVar12 + (long)(int)uVar3 * 8 + lVar13 * 4) +
                         (1.0 - fVar29) * *(float *)(lVar12 + (long)(int)uVar2 * 8 + lVar13 * 4)) +
                         (1.0 - (fVar28 - (float)(int)fVar28)) *
                         (fVar29 * *(float *)(lVar11 + (long)(int)uVar3 * 8 + lVar13 * 4) +
                         (1.0 - fVar29) * *(float *)(lVar11 + (long)(int)uVar2 * 8 + lVar13 * 4));
              pfVar22 = &fStack_44;
              lVar13 = 1;
              bVar8 = false;
            } while (bVar23);
            param_2 = pfVar9 + 2;
            *pfVar9 = fStack_40;
            pfVar9[1] = fStack_44;
            fVar25 = (float)((int)fVar25 + 1);
            pfVar9 = param_2;
          } while (fVar25 != fVar18);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != (uint)fVar14);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
LAB_1095c6800:
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined ***)param_2 = &PTR_FUN_110afe960;
  FUN_1095c6cec(param_2 + 0xc);
  *(undefined ***)param_2 = &PTR_DAT_110afe9d8;
  if (*(char *)((long)param_2 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_2 + 4));
  }
  return param_2;
}



/* Entry: 1095c6808; end: 1095c689f;  */

undefined8 * FUN_1095c6808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afe960;
  FUN_1095c6cec(param_1 + 6);
  *param_1 = &PTR_DAT_110afe9d8;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 1095c68a0; end: 1095c69df;  */

void FUN_1095c68a0(undefined1 *param_1)

{
  undefined8 auStack_1a0 [2];
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
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
  undefined8 uStack_38;
  ulong uStack_30;
  
  if (1 < iRam00000001132dfb08) {
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    FUN_10926db08(&uStack_170);
    uStack_68 = CONCAT44(uStack_68._4_4_,3);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = uStack_30 & 0xffffffff00000000;
    func_0x000107c31940(auStack_188,&UNK_10f575e20);
    func_0x000107c31940(auStack_1a0,&UNK_10f575ae3);
    FUN_109671348(&uStack_170,2,auStack_188,auStack_1a0,0x4f);
    FUN_1092b4db8();
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
    if (cStack_171 < '\0') {
      __ZdlPv(auStack_188[0]);
    }
    FUN_109671170(&uStack_170);
  }
  *param_1 = 0;
  param_1[0x48] = 0;
  return;
}



/* Entry: 1095c69e0; end: 1095c6a2f;  */

long FUN_1095c69e0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar6 = lVar5;
  ___cxa_throw(lVar5,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(lVar5);
  __Unwind_Resume();
  if (*(long *)(lVar6 + 0xa0) != 0) {
    piVar1 = (int *)(*(long *)(lVar6 + 0xa0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar6 + 0x68);
    }
  }
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x78) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  if (0 < *(int *)(lVar6 + 0x6c)) {
    lVar5 = 0;
    lVar7 = *(long *)(lVar6 + 0xa8);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar6 + 0x6c));
  }
  lVar5 = *(long *)(lVar6 + 0xb0);
  if (lVar5 != lVar6 + 0xb8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(lVar6 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(lVar6 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(lVar6);
    }
  }
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  if (0 < *(int *)(lVar6 + 4)) {
    lVar5 = 0;
    lVar7 = *(long *)(lVar6 + 0x40);
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar6 + 4));
  }
  lVar5 = *(long *)(lVar6 + 0x48);
  if (lVar5 != lVar6 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return lVar6;
}



/* Entry: 1095c6a30; end: 1095c6b4b;  */

long FUN_1095c6a30(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xa0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x68);
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0xa8);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x6c));
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 != param_1 + 0xb8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1095c6b4c; end: 1095c6ceb;  */

long FUN_1095c6b4c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x120) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x120) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0xe8);
    }
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (0 < *(int *)(param_1 + 0xec)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x128);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xec));
  }
  lVar5 = *(long *)(param_1 + 0x130);
  if (lVar5 != param_1 + 0x138 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xc0) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x88);
    }
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 200);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x8c));
  }
  lVar5 = *(long *)(param_1 + 0xd0);
  if (lVar5 != param_1 + 0xd8 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x38) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x40);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 4));
  }
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != param_1 + 0x50 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 1095c6cec; end: 1095c6d7b;  */

long FUN_1095c6cec(long param_1)

{
  FUN_1095c6a30(param_1 + 0x13c0);
  FUN_1095c6a30(param_1 + 0x12f8);
  FUN_1095c6b4c(param_1 + 0x11b0);
  FUN_1095c6b4c(param_1 + 0x1068);
  if (*(long *)(param_1 + 0x1050) != 0) {
    *(long *)(param_1 + 0x1058) = *(long *)(param_1 + 0x1050);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1038) != 0) {
    *(long *)(param_1 + 0x1040) = *(long *)(param_1 + 0x1038);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1020) != 0) {
    *(long *)(param_1 + 0x1028) = *(long *)(param_1 + 0x1020);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x1008) != 0) {
    *(long *)(param_1 + 0x1010) = *(long *)(param_1 + 0x1008);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095c6d7c; end: 1095c6e17;  */

undefined8 *
FUN_1095c6d7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 3,*param_5,param_5[1]);
  }
  else {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[5] = param_5[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_109471edc(param_1 + 6,param_6,param_7,param_7 - param_6 >> 3);
  return param_1;
}



/* Entry: 1095c6e18; end: 1095c6ecb;  */

long * FUN_1095c6e18(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar1 = param_3 & 0xff ^ param_2 & 0xff;
    uVar6 = (ulong)uVar1;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & uVar1);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar1 / uVar4;
        }
        uVar8 = (ulong)(uVar1 - uVar2 * uVar4);
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      do {
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((uint)*(byte *)(plVar9 + 2) == (param_2 & 0xff) &&
              (uint)*(byte *)((long)plVar9 + 0x11) == (param_3 & 0xff)) {
            return plVar9;
          }
        }
        else {
          if ((uVar5 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar5 <= uVar10) {
            uVar3 = 0;
            if (uVar5 != 0) {
              uVar3 = uVar10 / uVar5;
            }
            uVar10 = uVar10 - uVar3 * uVar5;
          }
          if (uVar10 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar9 = (long *)*plVar9;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1095c6ecc; end: 1095c6f27;  */

long * FUN_1095c6ecc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1095c6f28(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095c6f28; end: 1095c6fcb;  */

void FUN_1095c6f28(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == param_1 + 0x58 || lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(lVar5 + -8));
  return;
}



/* Entry: 1095c6fcc; end: 1095c7027;  */

long * FUN_1095c6fcc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1095c7028(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1095c7028; end: 1095c706b;  */

void FUN_1095c7028(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38);
    __ZdlPv();
  }
  if (-1 < *(char *)(param_1 + 0x37)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x20));
  return;
}


