/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10abdbd04; end: 10abdbd17;  */

undefined ** FUN_10abdbd04(void)

{
  return &PTR_DAT_110c53b38;
}



/* Entry: 10abdbd18; end: 10abdbd3b;  */

void FUN_10abdbd18(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53b58;
  return;
}



/* Entry: 10abdbd3c; end: 10abdbd53;  */

void FUN_10abdbd3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c53b58;
  return;
}



/* Entry: 10abdbd54; end: 10abdbe8f;  */

long FUN_10abdbd54(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  long alStack_48 [2];
  char cStack_31;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(alStack_48,&UNK_10f699bba);
  func_0x000107c2b054(auStack_60,&UNK_10f699bc8);
  FUN_10ab108b4(param_1,alStack_48,auStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  func_0x000107c2b07c(alStack_48,&DAT_10f64420f);
  lVar1 = param_1 + 0x48;
  plVar2 = alStack_48;
  FUN_10ab14240(lVar1,plVar2,&lStack_28,1);
  if (cStack_31 < '\0') {
    lVar1 = alStack_48[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar1;
  }
  ___stack_chk_fail();
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  FUN_10ab11bb0(param_1);
  __Unwind_Resume(lVar1);
  FUN_10a042ab0(plVar2,&PTR_DAT_110c53bb8);
  lVar1 = lVar1 + 8;
  if ((int)plVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10abdbe90; end: 10abdbecb;  */

long FUN_10abdbe90(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53bb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdbecc; end: 10abdbedf;  */

undefined ** FUN_10abdbecc(void)

{
  return &PTR_DAT_110c53bb8;
}



/* Entry: 10abdbee0; end: 10abdbf1b;  */

void FUN_10abdbee0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53bd8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  return;
}



/* Entry: 10abdbf1c; end: 10abdbf53;  */

void FUN_10abdbf1c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110c53bd8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  return;
}



/* Entry: 10abdbf54; end: 10abdbf8f;  */

long FUN_10abdbf54(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53c38);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdbf90; end: 10abdbfa3;  */

undefined ** FUN_10abdbf90(void)

{
  return &PTR_DAT_110c53c38;
}



/* Entry: 10abdbfa4; end: 10abdbfc7;  */

void FUN_10abdbfa4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53c58;
  return;
}



/* Entry: 10abdbfc8; end: 10abdbfdf;  */

void FUN_10abdbfc8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c53c58;
  return;
}



/* Entry: 10abdbfe0; end: 10abdc1bb;  */

long FUN_10abdbfe0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  undefined8 auStack_b8 [2];
  char cStack_a1;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  long alStack_58 [2];
  char acStack_41 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(auStack_b8,&UNK_10f699bdb);
  func_0x000107c2b054(auStack_d0,&UNK_10f699be6);
  FUN_10ab108b4(param_1,auStack_b8,auStack_d0);
  if (cStack_b9 < '\0') {
    __ZdlPv(auStack_d0[0]);
  }
  if (cStack_a1 < '\0') {
    __ZdlPv(auStack_b8[0]);
  }
  func_0x000107c2b07c(auStack_b8,&DAT_10f64420f);
  func_0x000107c2b07c(auStack_98,&UNK_10f699b9e);
  func_0x000107c2b07c(auStack_78,&UNK_10f699bac);
  func_0x000107c2b07c(alStack_58,&UNK_10f699bf6);
  param_1 = param_1 + 0x48;
  puVar1 = auStack_b8;
  FUN_10ab14240(param_1,puVar1,&lStack_38,4);
  lVar2 = 0;
  do {
    if (acStack_41[lVar2] < '\0') {
      param_1 = *(long *)((long)alStack_58 + lVar2);
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != -0x80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = -0x80;
  pcVar3 = acStack_41;
  do {
    if (*pcVar3 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
    }
    lVar2 = lVar2 + 0x20;
    pcVar3 = pcVar3 + -0x20;
  } while (lVar2 != 0);
  FUN_10ab11bb0(0xffffffffffffff80);
  __Unwind_Resume(param_1);
  FUN_10a042ab0(puVar1,&PTR_DAT_110c53cb8);
  param_1 = param_1 + 8;
  if ((int)puVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdc1bc; end: 10abdc1f7;  */

long FUN_10abdc1bc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53cb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdc1f8; end: 10abdc20b;  */

undefined ** FUN_10abdc1f8(void)

{
  return &PTR_DAT_110c53cb8;
}



/* Entry: 10abdc20c; end: 10abdc23f;  */

void FUN_10abdc20c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110c53cd8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10abdc240; end: 10abdc26f;  */

void FUN_10abdc240(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110c53cd8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10abdc270; end: 10abdc2ab;  */

long FUN_10abdc270(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53d38);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdc2ac; end: 10abdc2bf;  */

undefined ** FUN_10abdc2ac(void)

{
  return &PTR_DAT_110c53d38;
}



/* Entry: 10abdc2c0; end: 10abdc2f7;  */

void FUN_10abdc2c0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53d58;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10abdc2f8; end: 10abdc317;  */

void FUN_10abdc2f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110c53d58;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10abdc318; end: 10abdc3cb;  */

bool FUN_10abdc318(long param_1,long param_2,undefined4 *param_3)

{
  short *psVar1;
  undefined4 uVar2;
  short sVar3;
  long lVar4;
  ulong uVar5;
  short *psVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *param_3;
  lVar4 = param_2;
  func_0x00010a01e9ec(param_2,uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(ulong *)(param_1 + 8);
  uVar8 = *(ulong *)(lVar4 + 0x30);
  uVar5 = (ulong)&uStack_40 | 8;
  FUN_10a3c8d60(uVar5,lVar4 + 0x38);
  if ((uVar8 & uVar7) != 0 || (uVar5 & 0xffff) != 0) {
    FUN_10a015150(param_2,uVar2);
    psVar1 = *(short **)(param_2 + 0xb8);
    if (psVar1 != *(short **)(param_2 + 0xc0)) {
      do {
        psVar6 = psVar1 + 1;
        sVar3 = *psVar1;
        psVar1 = psVar6;
      } while (sVar3 == -1 && psVar6 != *(short **)(param_2 + 0xc0));
      return sVar3 != -1;
    }
  }
  return false;
}



/* Entry: 10abdc3cc; end: 10abdc407;  */

long FUN_10abdc3cc(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53db8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdc408; end: 10abdc413;  */

undefined ** FUN_10abdc408(void)

{
  return &PTR_DAT_110c53db8;
}



/* Entry: 10abdc414; end: 10abdc47f;  */

void FUN_10abdc414(long param_1,undefined8 param_2)

{
  FUN_10abdc480(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10abdc480; end: 10abdc4c7;  */

long FUN_10abdc480(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    lVar2 = param_4;
    do {
      uVar3 = 0xff;
      if (*param_2 <= *(long *)(param_3 + 0x20)) {
        uVar3 = 0;
      }
      if (*(long *)(param_3 + 0x20) == *param_2) {
        uVar1 = 0xff;
        if (param_2[1] <= *(long *)(param_3 + 0x28)) {
          uVar1 = 0;
        }
        uVar3 = 0;
        if (*(long *)(param_3 + 0x28) != param_2[1]) {
          uVar3 = uVar1;
        }
      }
      param_4 = param_3;
      if ((uVar3 & 0x80) != 0) {
        param_4 = lVar2;
      }
      param_3 = *(long *)(param_3 + ((uVar3 & 0x80) >> 4));
      lVar2 = param_4;
    } while (param_3 != 0);
  }
  return param_4;
}



/* Entry: 10abdc4c8; end: 10abdc5cf;  */

long * FUN_10abdc4c8(long *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
joined_r0x00010abdc4ec:
  plVar4 = plVar1;
  if (plVar2 == (long *)0x0) {
LAB_10abdc558:
    plVar2 = (long *)0x78;
    __Znwm();
    lVar3 = *param_4;
    plVar2[5] = param_4[1];
    plVar2[4] = lVar3;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[9] = 0;
    plVar2[8] = 0;
    plVar2[0xb] = 0;
    plVar2[10] = 0;
    plVar2[0xd] = 0;
    plVar2[0xc] = 0;
    plVar2[0xe] = 0;
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)plVar1;
    *plVar4 = (long)plVar2;
    plVar1 = plVar2;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      plVar1 = (long *)*plVar4;
    }
    func_0x000107c2b058(param_1[1],plVar1);
    param_1[2] = param_1[2] + 1;
    return plVar2;
  }
  do {
    plVar1 = plVar2;
    lVar3 = plVar1[4];
    if (param_2 == lVar3) {
      lVar3 = plVar1[5];
      if (param_3 < lVar3) break;
      if (lVar3 == param_3 || param_3 <= lVar3) {
        return plVar1;
      }
    }
    else {
      if (param_2 < lVar3) break;
      if (param_2 <= lVar3) {
        return plVar1;
      }
    }
    plVar2 = (long *)plVar1[1];
    if ((long *)plVar1[1] == (long *)0x0) {
      plVar4 = plVar1 + 1;
      goto LAB_10abdc558;
    }
  } while( true );
  plVar2 = (long *)*plVar1;
  goto joined_r0x00010abdc4ec;
}



/* Entry: 10abdc5d0; end: 10abdc64f;  */

long * FUN_10abdc5d0(long param_1,long param_2,long param_3)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  plVar4 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar4;
  plVar5 = plVar4;
  plVar6 = plVar4;
  if (plVar7 != (long *)0x0) {
    do {
      uVar8 = 0xff;
      if (param_2 <= plVar7[4]) {
        uVar8 = 0;
      }
      if (plVar7[4] == param_2) {
        uVar3 = 0xff;
        if (param_3 <= plVar7[5]) {
          uVar3 = 0;
        }
        uVar8 = 0;
        if (plVar7[5] != param_3) {
          uVar8 = uVar3;
        }
      }
      plVar2 = plVar7;
      if ((uVar8 & 0x80) != 0) {
        plVar2 = plVar6;
      }
      plVar7 = *(long **)((long)plVar7 + ((uVar8 & 0x80) >> 4));
      plVar6 = plVar2;
    } while (plVar7 != (long *)0x0);
    if (plVar4 != plVar2) {
      bVar1 = param_2 < plVar2[4];
      if (param_2 == plVar2[4]) {
        bVar1 = param_3 != plVar2[5] && param_3 < plVar2[5];
      }
      plVar5 = plVar2;
      if (bVar1) {
        plVar5 = plVar4;
      }
    }
  }
  return plVar5;
}



/* Entry: 10abdc650; end: 10abdc743;  */

bool FUN_10abdc650(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10abdc414();
  bVar1 = param_1 + 8 != lVar2;
  if (bVar1) {
    func_0x00010abdc694(param_1,lVar2);
  }
  return bVar1;
}



/* Entry: 10abdc744; end: 10abdc74b;  */

void FUN_10abdc744(void)

{
  return;
}



/* Entry: 10abdc74c; end: 10abdc76f;  */

void FUN_10abdc74c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c53dd8;
  return;
}



/* Entry: 10abdc770; end: 10abdc787;  */

void FUN_10abdc770(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c53dd8;
  return;
}



/* Entry: 10abdc788; end: 10abdc8c3;  */

long FUN_10abdc788(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  long alStack_48 [2];
  char cStack_31;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(alStack_48,&UNK_10f63f11e);
  func_0x000107c2b054(auStack_60,&UNK_10f699c04);
  FUN_10ab108b4(param_1,alStack_48,auStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  func_0x000107c2b07c(alStack_48,&UNK_10f699c1a);
  lVar1 = param_1 + 0x48;
  plVar2 = alStack_48;
  FUN_10ab14240(lVar1,plVar2,&lStack_28,1);
  if (cStack_31 < '\0') {
    lVar1 = alStack_48[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar1;
  }
  ___stack_chk_fail();
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  FUN_10ab11bb0(param_1);
  __Unwind_Resume(lVar1);
  FUN_10a042ab0(plVar2,&PTR_DAT_110c53e38);
  lVar1 = lVar1 + 8;
  if ((int)plVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10abdc8c4; end: 10abdc8ff;  */

long FUN_10abdc8c4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53e38);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdc900; end: 10abdc913;  */

undefined ** FUN_10abdc900(void)

{
  return &PTR_DAT_110c53e38;
}



/* Entry: 10abdc914; end: 10abdc937;  */

void FUN_10abdc914(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53e58;
  return;
}



/* Entry: 10abdc938; end: 10abdc94f;  */

void FUN_10abdc938(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c53e58;
  return;
}



/* Entry: 10abdc950; end: 10abdca8b;  */

long FUN_10abdc950(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  long alStack_48 [2];
  char cStack_31;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(alStack_48,&UNK_10f699c26);
  func_0x000107c2b054(auStack_60,&UNK_10f699c34);
  FUN_10ab108b4(param_1,alStack_48,auStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  func_0x000107c2b07c(alStack_48,&UNK_10f699c4a);
  lVar1 = param_1 + 0x48;
  plVar2 = alStack_48;
  FUN_10ab14240(lVar1,plVar2,&lStack_28,1);
  if (cStack_31 < '\0') {
    lVar1 = alStack_48[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar1;
  }
  ___stack_chk_fail();
  if (cStack_31 < '\0') {
    __ZdlPv(alStack_48[0]);
  }
  FUN_10ab11bb0(param_1);
  __Unwind_Resume(lVar1);
  FUN_10a042ab0(plVar2,&PTR_DAT_110c53eb8);
  lVar1 = lVar1 + 8;
  if ((int)plVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 10abdca8c; end: 10abdcac7;  */

long FUN_10abdca8c(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53eb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdcac8; end: 10abdcadb;  */

undefined ** FUN_10abdcac8(void)

{
  return &PTR_DAT_110c53eb8;
}



/* Entry: 10abdcadc; end: 10abdcaff;  */

void FUN_10abdcadc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c53ed8;
  return;
}



/* Entry: 10abdcb00; end: 10abdcb17;  */

void FUN_10abdcb00(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c53ed8;
  return;
}



/* Entry: 10abdcb18; end: 10abdcbab;  */

undefined8 FUN_10abdcb18(undefined8 param_1,long param_2,undefined4 *param_3)

{
  short *psVar1;
  short *psVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = *param_3;
  lVar4 = param_2;
  func_0x00010a01e9ec(param_2,uVar3);
  if ((*(byte *)(lVar4 + 0x1d) & 0xfd) == 1) {
    lVar4 = param_2;
    FUN_10a015150(param_2,uVar3);
    psVar2 = *(short **)(lVar4 + 0xc0);
    for (psVar1 = *(short **)(lVar4 + 0xb8); psVar1 != psVar2; psVar1 = psVar1 + 1) {
      if ((*psVar1 != -1) &&
         (lVar4 = param_2, FUN_10a021e20(), (*(byte *)(lVar4 + 0x18) >> 1 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10abdcbac; end: 10abdcbe7;  */

long FUN_10abdcbac(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53f38);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdcbe8; end: 10abdcbf3;  */

undefined ** FUN_10abdcbe8(void)

{
  return &PTR_DAT_110c53f38;
}



/* Entry: 10abdcbf4; end: 10abdccc7;  */

void FUN_10abdcbf4(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if (param_4 <= uVar6 && uVar6 - param_4 != 0) {
    plVar7 = (long *)(param_2 + (ulong)param_4 * 0x30);
    if (plVar7[1] != *plVar7) {
      uVar6 = (ulong)*(uint *)(*plVar7 + 4);
      if (uVar6 < (ulong)(plVar7[4] - plVar7[3] >> 4)) {
        puVar4 = (undefined8 *)(plVar7[3] + uVar6 * 0x10);
        plVar7 = (long *)puVar4[1];
        uVar9 = *puVar4;
        if (plVar7 == (long *)0x0) {
          *param_1 = uVar9;
          param_1[1] = 0;
        }
        else {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          param_1[1] = plVar7;
          *param_1 = uVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abdccc8);
  (*pcVar5)();
}



/* Entry: 10abdccc8; end: 10abdcccf;  */

void FUN_10abdccc8(void)

{
  return;
}



/* Entry: 10abdccd0; end: 10abdcd27;  */

void FUN_10abdccd0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *puVar1 = &PTR_FUN_110c53f58;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = uVar2;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10abdcd28; end: 10abdcd67;  */

void FUN_10abdcd28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_110c53f58;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  param_2[9] = *(undefined8 *)(param_1 + 0x48);
  param_2[8] = uVar6;
  param_2[7] = uVar5;
  param_2[6] = uVar4;
  param_2[5] = uVar3;
  param_2[4] = uVar2;
  param_2[3] = uVar1;
  return;
}



/* Entry: 10abdcd68; end: 10abdd127;  */

void FUN_10abdcd68(long param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fStack_80;
  float fStack_7c;
  undefined8 auStack_78 [2];
  char cStack_61;
  float fStack_54;
  
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(param_1 + 0xc);
  fStack_54 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x10);
  bVar4 = *(byte *)(param_1 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x29);
  func_0x000107c2b07c(auStack_78,&DAT_10f699c5b);
  fStack_80 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x28));
  fStack_7c = 1.0 / (fStack_80 + -0.5);
  FUN_10a022468(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699c67);
  fStack_80 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x29));
  FUN_10a01671c(param_2,auStack_78,&fStack_80);
  fVar2 = fVar2 * 0.1;
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&DAT_10f4154b4);
  fStack_80 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x28));
  fStack_80 = (fVar2 * 6.2831855 * fVar5) / fStack_80;
  FUN_10a01671c(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&DAT_10f324ae5);
  FUN_10a01671c(param_2,auStack_78,&fStack_54);
  fVar5 = (float)NEON_ucvtf((uint)bVar4);
  fVar1 = (float)NEON_ucvtf((uint)bVar3);
  fVar1 = (1.0 / (fVar5 + -0.5)) * fVar1;
  fVar5 = 3.3702806e+12;
  if (cStack_61 < '\0') {
    fVar5 = 3.3702806e+12;
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699c73);
  fVar1 = (fVar1 + fVar1) * 3.1415927;
  ___sincosf_stret();
  fStack_7c = fVar1;
  fStack_80 = fVar5;
  FUN_10a022468(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699c85);
  fStack_80 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0xc);
  FUN_10a01671c(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699ca3);
  fStack_80 = 1.0 / (*(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc));
  FUN_10a01671c(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699cb4);
  fVar5 = *(float *)(param_1 + 0x48);
  _sinf();
  fStack_80 = fVar5 * fVar5;
  FUN_10a01671c(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f6521b3);
  FUN_10a01671c(param_2,auStack_78,param_1 + 0x14);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699ccf);
  fStack_80 = fVar2 * fVar2;
  FUN_10a01671c(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699ce2);
  FUN_10a01671c(param_2,auStack_78,param_1 + 0x30);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&DAT_10f3e7cb5);
  fStack_80 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x24));
  FUN_10a01671c(param_2,auStack_78,&fStack_80);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 10abdd128; end: 10abdd163;  */

long FUN_10abdd128(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c53fb8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdd164; end: 10abdd16f;  */

undefined ** FUN_10abdd164(void)

{
  return &PTR_DAT_110c53fb8;
}



/* Entry: 10abdd170; end: 10abdd24f;  */

void FUN_10abdd170(undefined8 *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if (param_4 <= uVar6 && uVar6 - param_4 != 0) {
    plVar7 = (long *)(param_2 + (ulong)param_4 * 0x30);
    if ((ulong)param_5 < (ulong)(plVar7[1] - *plVar7 >> 3)) {
      uVar6 = (ulong)*(uint *)(*plVar7 + (ulong)param_5 * 8 + 4);
      if (uVar6 < (ulong)(plVar7[4] - plVar7[3] >> 4)) {
        puVar4 = (undefined8 *)(plVar7[3] + uVar6 * 0x10);
        plVar7 = (long *)puVar4[1];
        uVar9 = *puVar4;
        if (plVar7 == (long *)0x0) {
          *param_1 = uVar9;
          param_1[1] = 0;
        }
        else {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          param_1[1] = plVar7;
          *param_1 = uVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abdd250);
  (*pcVar5)();
}



/* Entry: 10abdd250; end: 10abdd287;  */

long FUN_10abdd250(long param_1)

{
  if (param_1 != 0) {
    FUN_10a1dd000();
    if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____dynamic_cast_110346c00)();
      return param_1;
    }
  }
  return 0;
}



/* Entry: 10abdd288; end: 10abdd367;  */

undefined8 * FUN_10abdd288(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110c53fd8;
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  plVar1 = (long *)param_1[10];
  if (plVar1 == param_1 + 7) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10abdd2e0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10abdd2e0:
  func_0x00010abda948(param_1 + 2);
  return param_1;
}



/* Entry: 10abdd368; end: 10abdd48b;  */

undefined8 * FUN_10abdd368(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = (undefined8 *)0xc8;
  __Znwm();
  *puVar4 = &PTR_FUN_110c53fd8;
  uVar6 = *(undefined8 *)(param_1 + 8);
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  puVar4[1] = uVar6;
  lVar5 = *(long *)(param_1 + 0x18);
  puVar4[3] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  puVar4[4] = uVar6;
  puVar4[6] = *(undefined8 *)(param_1 + 0x30);
  func_0x00010a194208(puVar4 + 7,param_1 + 0x38);
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  FUN_10a194110();
  *(undefined1 *)(puVar4 + 0xe) = *(undefined1 *)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  puVar4[0x12] = *(undefined8 *)(param_1 + 0x90);
  puVar4[0x11] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  puVar4[0x14] = *(undefined8 *)(param_1 + 0xa0);
  puVar4[0x13] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0xa8);
  puVar4[0x16] = *(undefined8 *)(param_1 + 0xb0);
  puVar4[0x15] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0xb4);
  *(undefined8 *)((long)puVar4 + 0xbc) = *(undefined8 *)(param_1 + 0xbc);
  *(undefined8 *)((long)puVar4 + 0xb4) = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  puVar4[0x10] = *(undefined8 *)(param_1 + 0x80);
  puVar4[0xf] = uVar6;
  *(undefined4 *)((long)puVar4 + 0xc4) = 0;
  return puVar4;
}



/* Entry: 10abdd48c; end: 10abdd59b;  */

void FUN_10abdd48c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_2 = &PTR_FUN_110c53fd8;
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  lVar4 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  func_0x00010a194208(param_2 + 7,param_1 + 0x38);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  FUN_10a194110();
  *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  param_2[0x10] = *(undefined8 *)(param_1 + 0x80);
  param_2[0xf] = uVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  uVar10 = *(undefined8 *)(param_1 + 0xb0);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  uVar11 = *(undefined8 *)(param_1 + 0xb4);
  *(undefined8 *)((long)param_2 + 0xbc) = *(undefined8 *)(param_1 + 0xbc);
  *(undefined8 *)((long)param_2 + 0xb4) = uVar11;
  param_2[0x16] = uVar10;
  param_2[0x15] = uVar9;
  param_2[0x14] = uVar8;
  param_2[0x13] = uVar7;
  param_2[0x12] = uVar6;
  param_2[0x11] = uVar5;
  *(undefined4 *)((long)param_2 + 0xc4) = 0;
  return;
}



/* Entry: 10abdd59c; end: 10abdd5a3;  */

long FUN_10abdd59c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  plVar4 = *(long **)(param_1 + 0x50);
  if (plVar4 == (long *)(param_1 + 0x38)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_10abdd8ac;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_10abdd8ac:
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1 + 0x10;
}



/* Entry: 10abdd5a4; end: 10abdd5cb;  */

void FUN_10abdd5a4(long param_1)

{
  FUN_10abdd860(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10abdd5cc; end: 10abdd817;  */

void FUN_10abdd5cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  char cStack_59;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
  func_0x00010a1de5f0();
  uVar7 = *(long *)(param_1 + 0xa8) + 1;
  uVar5 = uVar7 >> 1;
  if (0xf < uVar5) {
    uVar5 = 0x10;
  }
  func_0x000107c2b07c(&fStack_70,&DAT_10f699c5b);
  fStack_78 = (float)uVar5;
  FUN_10a01671c(param_2,&fStack_70,&fStack_78);
  if (cStack_59 < '\0') {
    __ZdlPv(CONCAT44(uStack_6c,fStack_70));
  }
  func_0x000107c2b07c(&fStack_70,&UNK_10f699cee);
  fStack_78 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  FUN_10a01671c(param_2,&fStack_70,&fStack_78);
  if (cStack_59 < '\0') {
    __ZdlPv(CONCAT44(uStack_6c,fStack_70));
  }
  if (*(int *)(param_1 + 0xc0) == 2) {
    func_0x000107c2b07c(&fStack_70,&UNK_10f5a3e3a);
    fStack_78 = (1.0 / (float)(int)uVar4) * *(float *)(param_1 + 0xb4);
    fStack_74 = 0.0;
    FUN_10a022468(param_2,&fStack_70,&fStack_78);
  }
  else {
    func_0x000107c2b07c(&fStack_70,&UNK_10f5a3e3a);
    fStack_74 = (1.0 / (float)(int)((ulong)uVar4 >> 0x20)) * *(float *)(param_1 + 0xb4);
    fStack_78 = 0.0;
    FUN_10a022468(param_2,&fStack_70,&fStack_78);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(CONCAT44(uStack_6c,fStack_70));
  }
  if (1 < uVar7) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      fVar8 = *(float *)(param_1 + 0xb0);
      fVar8 = -((float)uVar7 * (float)uVar7) / (fVar8 * (fVar8 + fVar8));
      _expf();
      lVar2 = *(long *)(lVar1 + 0xd8);
      fStack_70 = fVar8;
      if ((ulong)(*(long *)(lVar1 + 0xe0) - lVar2 >> 5) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10abdd7ec);
        (*pcVar3)();
      }
      FUN_10a01671c(param_2,lVar2 + lVar6,&fStack_70);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar5 * 0x20 - lVar6 != 0);
  }
  func_0x000107c2b07c(&fStack_70,&DAT_10f3e7cb5);
  fStack_78 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x94));
  FUN_10a01671c(param_2,&fStack_70,&fStack_78);
  if (cStack_59 < '\0') {
    __ZdlPv(CONCAT44(uStack_6c,fStack_70));
  }
  return;
}



/* Entry: 10abdd818; end: 10abdd853;  */

long FUN_10abdd818(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c54038);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdd854; end: 10abdd85f;  */

undefined ** FUN_10abdd854(void)

{
  return &PTR_DAT_110c54038;
}



/* Entry: 10abdd860; end: 10abdd8bb;  */

long FUN_10abdd860(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x50);
    __ZdlPv();
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if (plVar4 == (long *)(param_1 + 0x30)) {
    lVar5 = 0x20;
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_10abdd8ac;
    lVar5 = 0x28;
  }
  (**(code **)(*plVar4 + lVar5))();
LAB_10abdd8ac:
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1 + 8;
}



/* Entry: 10abdd8bc; end: 10abdd8c3;  */

void FUN_10abdd8bc(void)

{
  return;
}



/* Entry: 10abdd8c4; end: 10abdd8e7;  */

void FUN_10abdd8c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110c54058;
  return;
}



/* Entry: 10abdd8e8; end: 10abdd8ff;  */

void FUN_10abdd8e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110c54058;
  return;
}



/* Entry: 10abdd900; end: 10abddaff;  */

long FUN_10abdd900(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 auStack_b0 [2];
  char cStack_99;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [32];
  undefined8 auStack_58 [2];
  char acStack_41 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(&puStack_98,&UNK_10f699d08);
  func_0x000107c2b054(auStack_b0,&UNK_10f699d13);
  FUN_10ab108b4(param_1,&puStack_98,auStack_b0);
  if (cStack_99 < '\0') {
    __ZdlPv(auStack_b0[0]);
  }
  if (uStack_88._7_1_ < '\0') {
    __ZdlPv(puStack_98);
  }
  func_0x000107c2b074(&puStack_98,&PTR_DAT_110c51bf0);
  func_0x000107c2b074(auStack_78,&PTR_DAT_110c51c40);
  func_0x000107c2b074(auStack_58,&PTR_DAT_110c51c68);
  FUN_10ab14240(param_1 + 0x48,&puStack_98,&lStack_38,3);
  lVar2 = 0;
  do {
    if (acStack_41[lVar2] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_58 + lVar2));
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != -0x60);
  puStack_98 = &UNK_10e4ac8a8;
  puStack_90 = &UNK_10e4ac8a8;
  uStack_88 = &UNK_10e4ac8d0;
  lVar2 = param_1 + 0x60;
  ppuVar1 = &puStack_98;
  FUN_10ab143b0(lVar2,ppuVar1,auStack_80,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar2;
  }
  ___stack_chk_fail();
  FUN_10ab11bb0(param_1);
  __Unwind_Resume(lVar2);
  FUN_10a042ab0(ppuVar1,&PTR_DAT_110c540b8);
  lVar2 = lVar2 + 8;
  if ((int)ppuVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 10abddb00; end: 10abddb3b;  */

long FUN_10abddb00(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c540b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abddb3c; end: 10abddb4f;  */

undefined ** FUN_10abddb3c(void)

{
  return &PTR_DAT_110c540b8;
}



/* Entry: 10abddb50; end: 10abddb73;  */

void FUN_10abddb50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c540d8;
  return;
}



/* Entry: 10abddb74; end: 10abddb8b;  */

void FUN_10abddb74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c540d8;
  return;
}



/* Entry: 10abddb8c; end: 10abddd57;  */

void FUN_10abddb8c(long param_1)

{
  undefined8 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined8 **ppuStack_48;
  long lStack_40;
  undefined7 uStack_38;
  char cStack_31;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(&ppuStack_48,&UNK_10f699d2b);
  func_0x000107c2b054(auStack_60,&UNK_10f699d13);
  FUN_10ab108b4(param_1,&ppuStack_48,auStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  if (cStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  func_0x000107c2b074(&ppuStack_48,&PTR_DAT_110c51c40);
  FUN_10ab14240(param_1 + 0x48,&ppuStack_48,&lStack_28,1);
  if (cStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  ppuStack_48 = (undefined8 **)&UNK_10e4ac8d0;
  FUN_10ab143b0(param_1 + 0x60,&ppuStack_48,&lStack_40,1);
  pppuVar2 = &ppuStack_48;
  func_0x000107c2b07c(pppuVar2,&UNK_10f699d33);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 < *(undefined8 **)(param_1 + 0x40)) {
    puVar1[2] = CONCAT17(cStack_31,uStack_38);
    puVar1[1] = lStack_40;
    *puVar1 = ppuStack_48;
    puVar1[3] = uStack_30;
    *(undefined8 **)(param_1 + 0x38) = puVar1 + 4;
  }
  else {
    pppuVar2 = (undefined8 ***)(param_1 + 0x30);
    FUN_10ab1411c(pppuVar2,&ppuStack_48);
    *(undefined8 ****)(param_1 + 0x38) = pppuVar2;
    if (cStack_31 < '\0') {
      pppuVar2 = (undefined8 ***)ppuStack_48;
      __ZdlPv(ppuStack_48);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  FUN_10ab11bb0(param_1);
  do {
    __Unwind_Resume(pppuVar2);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
    if (cStack_31 < '\0') {
      __ZdlPv(ppuStack_48);
    }
  } while( true );
}



/* Entry: 10abddd58; end: 10abddd93;  */

long FUN_10abddd58(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c54138);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abddd94; end: 10abddd9f;  */

undefined ** FUN_10abddd94(void)

{
  return &PTR_DAT_110c54138;
}



/* Entry: 10abddda0; end: 10abdde73;  */

void FUN_10abddda0(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if (param_4 <= uVar6 && uVar6 - param_4 != 0) {
    plVar7 = (long *)(param_2 + (ulong)param_4 * 0x30);
    if (plVar7[1] != *plVar7) {
      uVar6 = (ulong)*(uint *)(*plVar7 + 4);
      if (uVar6 < (ulong)(plVar7[4] - plVar7[3] >> 4)) {
        puVar4 = (undefined8 *)(plVar7[3] + uVar6 * 0x10);
        plVar7 = (long *)puVar4[1];
        uVar9 = *puVar4;
        if (plVar7 == (long *)0x0) {
          *param_1 = uVar9;
          param_1[1] = 0;
        }
        else {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          param_1[1] = plVar7;
          *param_1 = uVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abdde74);
  (*pcVar5)();
}



/* Entry: 10abdde74; end: 10abdde7b;  */

void FUN_10abdde74(void)

{
  return;
}



/* Entry: 10abdde7c; end: 10abddeb3;  */

void FUN_10abdde7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110c54158;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10abddeb4; end: 10abdded3;  */

void FUN_10abddeb4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110c54158;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10abdded4; end: 10abde2c3;  */

void FUN_10abdded4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char cStack_49;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  lVar1 = *(long *)(param_5 + 0x10);
  puStack_48 = &uStack_40;
  FUN_10a0ee900(&uStack_60,&UNK_10f699d3b,0x13);
  func_0x00010a0e35d4(&puStack_48,&uStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(CONCAT44(uStack_5c,uStack_60));
  }
  FUN_10a0ee900(&uStack_60,&UNK_10f699d4f,0x18);
  func_0x00010a0e35d4(&puStack_48,&uStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(CONCAT44(uStack_5c,uStack_60));
  }
  FUN_10a0ee900(&uStack_60,&UNK_10f699d68,0x1b);
  func_0x00010a0e35d4(&puStack_48,&uStack_60);
  if (cStack_49 < '\0') {
    __ZdlPv(CONCAT44(uStack_5c,uStack_60));
  }
  if (*(undefined8 ***)(param_6 + 0x158) != &puStack_48) {
    FUN_10a1f503c(*(undefined8 ***)(param_6 + 0x158),puStack_48,&uStack_40);
  }
  if ((bRam00000001137ec500 & 1) == 0) {
    iVar3 = 0x137ec500;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c2b07c(0x1137ec5b0,&UNK_10f699d84);
      ___cxa_atexit(FUN_10a32edf4,0x1137ec5b0,0x100000000);
      uRam00000001137ec4f8 = 0x1137ec5b0;
      ___cxa_guard_release(0x1137ec500);
    }
  }
  uVar5 = 0x3f800000;
  uStack_60 = 0x3f800000;
  if (*(int *)(lVar1 + 0x48) != 0) {
    uStack_60 = 0x3d800000;
  }
  FUN_10a01671c(param_6,uRam00000001137ec4f8,&uStack_60);
  if ((bRam00000001137ec510 & 1) == 0) {
    iVar3 = 0x137ec510;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c2b074(0x1137ec5d0,&PTR_DAT_110c51bc8);
      ___cxa_atexit(FUN_10a32edf4,0x1137ec5d0,0x100000000);
      uRam00000001137ec508 = 0x1137ec5d0;
      ___cxa_guard_release(0x1137ec510);
    }
  }
  FUN_10a022468(param_6,uRam00000001137ec508,*(long *)(param_5 + 8) + 4);
  if ((bRam00000001137ec520 & 1) == 0) {
    iVar3 = 0x137ec520;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c2b07c(0x1137ec5f0,&UNK_10f699d97);
      ___cxa_atexit(FUN_10a32edf4,0x1137ec5f0,0x100000000);
      uRam00000001137ec518 = 0x1137ec5f0;
      ___cxa_guard_release(0x1137ec520);
    }
  }
  uVar4 = *(undefined4 *)(*(long *)(*(long *)(param_5 + 8) + 0x890) + 0x308);
  uStack_60 = uVar4;
  FUN_10a01671c(param_6,uRam00000001137ec518,&uStack_60);
  if ((bRam00000001137ec530 & 1) == 0) {
    iVar3 = 0x137ec530;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000107c2b07c(0x1137ec610,&UNK_10f699da2);
      ___cxa_atexit(FUN_10a32edf4,0x1137ec610,0x100000000);
      uRam00000001137ec528 = 0x1137ec610;
      ___cxa_guard_release(0x1137ec530);
    }
  }
  uVar2 = uRam00000001137ec528;
  FUN_10a1dcc3c(*(undefined8 *)(*(long *)(param_5 + 8) + 0x890));
  uStack_60 = uVar4;
  uStack_5c = uVar5;
  uStack_58 = param_3;
  uStack_54 = param_4;
  FUN_10a015dcc(param_6,uVar2,&uStack_60);
  FUN_10a0da1b8(&puStack_48,uStack_40);
  return;
}



/* Entry: 10abde2c4; end: 10abde2ff;  */

long FUN_10abde2c4(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c541b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abde300; end: 10abde313;  */

undefined ** FUN_10abde300(void)

{
  return &PTR_DAT_110c541b8;
}



/* Entry: 10abde314; end: 10abde337;  */

void FUN_10abde314(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110c541d8;
  return;
}



/* Entry: 10abde338; end: 10abde34f;  */

void FUN_10abde338(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110c541d8;
  return;
}



/* Entry: 10abde350; end: 10abde4ef;  */

long FUN_10abde350(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  long alStack_58 [2];
  char acStack_41 [9];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b054(auStack_78,&UNK_10f699dae);
  func_0x000107c2b054(auStack_90,&UNK_10f699dbf);
  FUN_10ab108b4(param_1,auStack_78,auStack_90);
  if (cStack_79 < '\0') {
    __ZdlPv(auStack_90[0]);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  func_0x000107c2b07c(auStack_78,&UNK_10f699dde);
  func_0x000107c2b07c(alStack_58,&UNK_10f699dea);
  param_1 = param_1 + 0x48;
  puVar1 = auStack_78;
  FUN_10ab14240(param_1,puVar1,&lStack_38,2);
  lVar2 = 0;
  do {
    if (acStack_41[lVar2] < '\0') {
      param_1 = *(long *)((long)alStack_58 + lVar2);
      __ZdlPv();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != -0x40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar2 = -0x40;
  pcVar3 = acStack_41;
  do {
    if (*pcVar3 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar3 + -0x17));
    }
    lVar2 = lVar2 + 0x20;
    pcVar3 = pcVar3 + -0x20;
  } while (lVar2 != 0);
  FUN_10ab11bb0(0xffffffffffffffc0);
  __Unwind_Resume(param_1);
  FUN_10a042ab0(puVar1,&PTR_DAT_110c54238);
  param_1 = param_1 + 8;
  if ((int)puVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abde4f0; end: 10abde52b;  */

long FUN_10abde4f0(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c54238);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abde52c; end: 10abde537;  */

undefined ** FUN_10abde52c(void)

{
  return &PTR_DAT_110c54238;
}



/* Entry: 10abde538; end: 10abde62f;  */

undefined8 * FUN_10abde538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c54258;
  func_0x00010a0523dc(param_1 + 3);
  func_0x00010a0523dc(param_1 + 1);
  return param_1;
}



/* Entry: 10abde630; end: 10abde697;  */

void FUN_10abde630(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_2 = &PTR_FUN_110c54258;
  lVar5 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar5 = *(long *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)((long)param_2 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 5) = uVar2;
  return;
}



/* Entry: 10abde698; end: 10abde6ef;  */

/* WARNING: Possible PIC construction at 0x00010abde6ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010abde6b0) */

long FUN_10abde698(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 0x18;
}



/* Entry: 10abde6f0; end: 10abde877;  */

void FUN_10abde6f0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined1 uStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  func_0x000107c2b07c(auStack_50,&UNK_10f699df7);
  FUN_10a01671c(param_2,auStack_50,param_1 + 0x28);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  func_0x000107c2b07c(auStack_50,&UNK_10f699e02);
  func_0x00010a01edd4(param_2,auStack_50,param_1 + 0x2c);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
    ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar2 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar2) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if ((*(byte *)((long)ppuVar1 + 0x14) & 1) != 0) {
      func_0x000107c2b07c(auStack_50,&UNK_10f699e0c);
      uStack_51 = 1;
      func_0x00010a01edd4(param_2,auStack_50,&uStack_51);
      if (cStack_39 < '\0') {
        __ZdlPv(auStack_50[0]);
      }
    }
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x50))();
    ppuVar1 = &PTR_DAT_110ae4700 + ((ulong)plVar2 & 0xffffffff) * 4;
    if (0x56 < (uint)plVar2) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if ((*(byte *)((long)ppuVar1 + 0x14) & 1) != 0) {
      func_0x000107c2b07c(auStack_50,&UNK_10f699e25);
      uStack_51 = 1;
      func_0x00010a01edd4(param_2,auStack_50,&uStack_51);
      if (cStack_39 < '\0') {
        __ZdlPv(auStack_50[0]);
      }
    }
  }
  return;
}



/* Entry: 10abde878; end: 10abde8b3;  */

long FUN_10abde878(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c542b8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abde8b4; end: 10abde8bf;  */

undefined ** FUN_10abde8b4(void)

{
  return &PTR_DAT_110c542b8;
}



/* Entry: 10abde8c0; end: 10abde94f;  */

long * FUN_10abde8c0(long *param_1)

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



/* Entry: 10abde950; end: 10abde957;  */

void FUN_10abde950(void)

{
  return;
}



/* Entry: 10abde958; end: 10abde98f;  */

void FUN_10abde958(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110c542d8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10abde990; end: 10abde9af;  */

void FUN_10abde990(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110c542d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10abde9b0; end: 10abdea07;  */

bool FUN_10abde9b0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 8) - 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x58);
  uVar4 = (*(long *)(*(long *)(param_1 + 0x10) + 0x60) - lVar2 >> 3) * -0x3333333333333333;
  if (uVar3 <= uVar4 && uVar4 - uVar3 != 0) {
    lVar2 = lVar2 + (long)(int)uVar3 * 0x28;
    func_0x00010abdea50(lVar2,*param_3);
    return lVar2 != 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10abdea08);
  (*pcVar1)();
}



/* Entry: 10abdea08; end: 10abdea43;  */

long FUN_10abdea08(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c54338);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10abdea44; end: 10abdeaf3;  */

undefined ** FUN_10abdea44(void)

{
  return &PTR_DAT_110c54338;
}



/* Entry: 10abdeaf4; end: 10abdebc7;  */

void FUN_10abdeaf4(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = (param_3 - param_2 >> 4) * -0x5555555555555555;
  if (param_4 <= uVar6 && uVar6 - param_4 != 0) {
    plVar7 = (long *)(param_2 + (ulong)param_4 * 0x30);
    if (plVar7[1] != *plVar7) {
      uVar6 = (ulong)*(uint *)(*plVar7 + 4);
      if (uVar6 < (ulong)(plVar7[4] - plVar7[3] >> 4)) {
        puVar4 = (undefined8 *)(plVar7[3] + uVar6 * 0x10);
        plVar7 = (long *)puVar4[1];
        uVar9 = *puVar4;
        if (plVar7 == (long *)0x0) {
          *param_1 = uVar9;
          param_1[1] = 0;
        }
        else {
          plVar1 = plVar7 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          param_1[1] = plVar7;
          *param_1 = uVar9;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10abdebc8);
  (*pcVar5)();
}


