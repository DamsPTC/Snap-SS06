/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b8e2af0; end: 10b8e2af7;  */

void FUN_10b8e2af0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8e2d7c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x00010b8e2b2c();
  }
  return;
}



/* Entry: 10b8e2af8; end: 10b8e2b4f;  */

void FUN_10b8e2af8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b8e2d7c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x00010b8e2b2c();
  }
  return;
}



/* Entry: 10b8e2b50; end: 10b8e2b97;  */

void FUN_10b8e2b50(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b8e2ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8e2b98; end: 10b8e2c1f;  */

void FUN_10b8e2b98(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_30;
  long lStack_28;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    lVar1 = *(long *)(param_2 + 0x10);
    *param_1 = param_2;
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      do {
        func_0x00010b8e2de0();
      } while (extraout_w10_00 != 0);
    }
  }
  else {
    func_0x000107c278f0(&lStack_30);
    if (lStack_30 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = param_2;
      param_1[1] = lStack_28;
      if (lStack_28 != 0) {
        do {
          func_0x00010b8e2de0();
        } while (extraout_w10 != 0);
      }
    }
    func_0x000107c284e8(&lStack_30);
  }
  return;
}



/* Entry: 10b8e2c20; end: 10b8e2c33;  */

void FUN_10b8e2c20(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b8e2c34; end: 10b8e2c67;  */

void FUN_10b8e2c34(long param_1)

{
  long unaff_x19;
  
  func_0x00010b8e2d7c();
  FUN_10b8e2c68(unaff_x19 + 8,*(undefined8 *)(param_1 + 8));
  func_0x00010b8e1ea8();
  return;
}



/* Entry: 10b8e2c68; end: 10b8e2c93;  */

void FUN_10b8e2c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b8e2c94(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b8e2c94; end: 10b8e2cef;  */

undefined1  [16] FUN_10b8e2c94(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_10b8e2cf0(lVar1,param_2);
    lVar1 = lVar1 + 8;
    param_4 = param_4 + 8;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 10b8e2cf0; end: 10b8e2d27;  */

undefined8 * FUN_10b8e2cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_10b8e2b50(uVar1);
  }
  return param_1;
}



/* Entry: 10b8e2d28; end: 10b8e2e03;  */

void FUN_10b8e2d28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_1 + 0x18);
  return;
}



/* Entry: 10b8e2e04; end: 10b8e2e33;  */

undefined8 * FUN_10b8e2e04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72cd8;
  func_0x000104bda388(param_1 + 1);
  return param_1;
}



/* Entry: 10b8e2e34; end: 10b8e2e37;  */

undefined8 * FUN_10b8e2e34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72cd8;
  func_0x000104bda388(param_1 + 1);
  return param_1;
}



/* Entry: 10b8e2e38; end: 10b8e2e4b;  */

void FUN_10b8e2e38(void)

{
  FUN_10b8e2e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e2e4c; end: 10b8e2f33;  */

void FUN_10b8e2e4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined2 uStack_78;
  long alStack_70 [2];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  puVar3 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_4 + 8) == '\x01') {
    func_0x0001080dcf80(param_4);
    FUN_10b9a8e18(&uStack_80,param_4);
  }
  else {
    uStack_78 = 1;
    uStack_80 = 0;
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  FUN_10b9a8f04(alStack_70,param_3);
  FUN_10b9a8f04(auStack_60,&uStack_80);
  plVar4 = alStack_70;
  puVar5 = (undefined8 *)0x2;
  func_0x000105275910(auStack_50,uVar7);
  func_0x000104bda914(auStack_50);
  lVar6 = 0x10;
  do {
    FUN_10b9a8d98((long)alStack_70 + lVar6);
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != -0x10);
  FUN_10b9a8d98();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *puVar3 = &PTR_FUN_110d72d00;
  puVar3[1] = 1;
  lVar6 = *plVar4;
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
    plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3[2] = lVar6;
  lVar6 = puVar5[1];
  uVar7 = *puVar5;
  puVar3[4] = puVar5[1];
  puVar3[3] = uVar7;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  return;
}



/* Entry: 10b8e2f34; end: 10b8e2f9b;  */

void FUN_10b8e2f34(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110d72d00;
  param_1[1] = 1;
  lVar4 = *param_2;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = lVar4;
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar5;
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
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 10b8e2f9c; end: 10b8e304b;  */

undefined8 * FUN_10b8e2f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72d00;
  func_0x00010b8e2fe8();
  FUN_10b9a3d64(param_1 + 6);
  func_0x00010b8d1018(param_1 + 3);
  FUN_10b8a1838(param_1 + 2);
  return param_1;
}



/* Entry: 10b8e304c; end: 10b8e304f;  */

undefined8 * FUN_10b8e304c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72d00;
  func_0x00010b8e2fe8();
  FUN_10b9a3d64(param_1 + 6);
  func_0x00010b8d1018(param_1 + 3);
  FUN_10b8a1838(param_1 + 2);
  return param_1;
}



/* Entry: 10b8e3050; end: 10b8e3063;  */

void FUN_10b8e3050(void)

{
  FUN_10b8e2f9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e3064; end: 10b8e306b;  */

long FUN_10b8e3064(long param_1)

{
  return param_1 + 0x28;
}



/* Entry: 10b8e306c; end: 10b8e30db;  */

void FUN_10b8e306c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010b8e2fe8();
  lVar1 = *param_3;
  *param_1 = *(undefined8 *)(lVar1 + 0x140);
  uVar2 = *(undefined8 *)(lVar1 + 0x148);
  param_1[2] = *(undefined8 *)(lVar1 + 0x150);
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b8e30dc; end: 10b8e31c7;  */

undefined8 *
FUN_10b8e30dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &PTR_FUN_110d72d70;
  param_1[1] = 1;
  FUN_10b8e0ec8(param_1 + 2,param_2);
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = 0;
  param_1[9] = &UNK_10dd5b8b0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_10b8e4000(param_1 + 0x10);
  param_1[0x19] = &UNK_10f7cba50;
  param_1[0x1a] = 9;
  param_1[0x1b] = &UNK_10f7cba5a;
  param_1[0x1c] = 0xb;
  param_1[0x1d] = &UNK_10f7cba66;
  param_1[0x1e] = 6;
  param_1[0x1f] = &UNK_10f7cba6d;
  param_1[0x20] = 7;
  param_1[0x21] = &UNK_10f7cba75;
  param_1[0x22] = 6;
  param_1[0x23] = &UNK_10f7cba7c;
  param_1[0x24] = 0xe;
  param_1[0x25] = &UNK_10f7cba8b;
  param_1[0x26] = 0x15;
  param_1[0x27] = &UNK_10f7cbaa1;
  param_1[0x28] = 0x10;
  return param_1;
}



/* Entry: 10b8e31c8; end: 10b8e321f;  */

undefined8 * FUN_10b8e31c8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110d72d70;
  FUN_10b8e3244(param_1 + 0x10,0);
  lVar1 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar1 != 0) {
    func_0x00010b8e566c();
  }
  FUN_10b8c44a0(param_1 + 9);
  FUN_10b8e5504(param_1 + 6);
  func_0x00010b8e1574(param_1 + 2);
  return param_1;
}



/* Entry: 10b8e3220; end: 10b8e3223;  */

undefined8 * FUN_10b8e3220(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_110d72d70;
  FUN_10b8e3244(param_1 + 0x10,0);
  lVar1 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar1 != 0) {
    func_0x00010b8e566c();
  }
  FUN_10b8c44a0(param_1 + 9);
  FUN_10b8e5504(param_1 + 6);
  func_0x00010b8e1574(param_1 + 2);
  return param_1;
}



/* Entry: 10b8e3224; end: 10b8e3237;  */

void FUN_10b8e3224(void)

{
  FUN_10b8e31c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e3238; end: 10b8e3243;  */

/* WARNING: Possible PIC construction at 0x00010b8e0ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e0cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e0d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e0d9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d28) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d40) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d64) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d74) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d98) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d2c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0cc8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0ce0) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0ccc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0ca8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0da0) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0db8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0da4) */

void FUN_10b8e3238(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 auStack_80 [2];
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [4];
  
  plVar2 = (long *)(param_1 + 0x80);
  if (*plVar2 == 0) {
    return;
  }
  FUN_10b8e5554();
  *plVar2 = 0;
  lVar4 = param_1 + 200;
  param_1 = param_1 + 0x88;
  plVar2 = (long *)*plVar2;
  lVar3 = 8;
  puVar1 = auStack_50;
  func_0x00010b8e0dd0();
  if ((plVar2 != (long *)0x0) && (lVar3 != 0)) {
    (**(code **)(*plVar2 + 0x58))(auStack_50,plVar2,lVar4);
    uStack_58 = 0x10b8e0ca8;
    lStack_70 = lVar4;
    lStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010b8e0dd0();
    *(undefined1 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    auStack_80[0] = 0;
    func_0x0001080e3e58(auStack_80);
  }
  return;
}



/* Entry: 10b8e3244; end: 10b8e327f;  */

/* WARNING: Possible PIC construction at 0x00010b8e0ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e0cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e0d24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b8e0d9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d28) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d40) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d64) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d74) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d98) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0d2c) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0cc8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0ce0) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0ccc) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0ca8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0da0) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0db8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0da4) */

void FUN_10b8e3244(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_80 [2];
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined8 auStack_50 [4];
  
  if (*param_1 == param_2) {
    return;
  }
  FUN_10b8e5554();
  *param_1 = param_2;
  plVar3 = param_1 + 9;
  plVar4 = param_1 + 1;
  param_1 = (long *)*param_1;
  lVar2 = 8;
  puVar1 = auStack_50;
  func_0x00010b8e0dd0();
  if ((param_1 != (long *)0x0) && (lVar2 != 0)) {
    (**(code **)(*param_1 + 0x58))(auStack_50,param_1,plVar3);
    uStack_58 = 0x10b8e0ca8;
    plStack_70 = plVar3;
    plStack_68 = plVar4;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010b8e0dd0();
    *(undefined1 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    auStack_80[0] = 0;
    func_0x0001080e3e58(auStack_80);
  }
  return;
}



/* Entry: 10b8e3280; end: 10b8e32c7;  */

void FUN_10b8e3280(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  code *extraout_x8_01;
  long *plVar7;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [2];
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_68;
  long alStack_30 [4];
  
  plVar4 = alStack_30;
  plVar3 = alStack_30;
  func_0x00010b8e55d4();
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  alStack_30[2] = 0;
  alStack_30[3] = extraout_x8;
  FUN_10b8e32c8();
  FUN_10b8e5504();
  func_0x00010b8e55ac(alStack_30[3]);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_c0;
  func_0x00010b8e55d4();
  uStack_68 = extraout_x8_00;
  func_0x00010b8e5698(alStack_a8);
  plVar7 = plVar3 + 6;
  if ((*plVar7 == 1) && (alStack_a8[0] != 0)) {
    uStack_b0 = 0;
    pcStack_98 = FUN_10b8e407c;
    ppuStack_90 = &PTR_FUN_110d72de8;
    plStack_88 = plVar3;
    FUN_10b8e3408(alStack_a8[0],&uStack_b0,&pcStack_98);
    func_0x00010b8e55e4(ppuStack_90);
    func_0x000105276914(uStack_b0);
  }
  FUN_10b8e344c(plVar7);
  uVar2 = *plVar7 == 1;
  if (((bool)uVar2) && (plVar3[0xf] != 0)) {
    lStack_b8 = plVar3[0xf];
    plVar3[0xf] = 0;
    if (alStack_a8[0] != 0) {
      uStack_c0 = 0;
      pcStack_98 = FUN_10b8e41fc;
      ppuStack_90 = &PTR_FUN_110d72e08;
      plStack_88 = &lStack_b8;
      plStack_80 = plVar3;
      FUN_10b8e3408(alStack_a8[0],&uStack_c0,&pcStack_98);
      (*(code *)*ppuStack_90)(&ppuStack_90);
      func_0x000105276914(uStack_c0);
      lVar1 = lStack_b8;
      lStack_b8 = 0;
      plVar4 = puVar5;
      if (lVar1 == 0) goto LAB_10b8e33dc;
    }
    lStack_b8 = 0;
    func_0x00010b8e566c();
  }
LAB_10b8e33dc:
  func_0x00010b8e0a68(alStack_a8);
  func_0x00010b8e55ac(uStack_68);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    uVar6 = *plVar4;
    *plVar4 = 0;
    func_0x00010b8e5844();
    (*extraout_x8_01)();
    func_0x000105276914(uVar6);
    return;
  }
  return;
}



/* Entry: 10b8e32c8; end: 10b8e3407;  */

void FUN_10b8e32c8(long *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  code *extraout_x8_00;
  long *plVar5;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long alStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_38;
  
  puVar3 = &uStack_90;
  func_0x00010b8e55d4();
  uStack_38 = extraout_x8;
  func_0x00010b8e5698(alStack_78);
  plVar5 = param_1 + 6;
  if ((*plVar5 == 1) && (alStack_78[0] != 0)) {
    uStack_80 = 0;
    pcStack_68 = FUN_10b8e407c;
    ppuStack_60 = &PTR_FUN_110d72de8;
    plStack_58 = param_1;
    FUN_10b8e3408(alStack_78[0],&uStack_80,&pcStack_68);
    func_0x00010b8e55e4(ppuStack_60);
    func_0x000105276914(uStack_80);
  }
  FUN_10b8e344c(plVar5);
  uVar1 = *plVar5 == 1;
  if (((bool)uVar1) && (lVar2 = param_1[0xf], lVar2 != 0)) {
    param_1[0xf] = 0;
    if (alStack_78[0] != 0) {
      uStack_90 = 0;
      pcStack_68 = FUN_10b8e41fc;
      ppuStack_60 = &PTR_FUN_110d72e08;
      plStack_58 = &lStack_88;
      lStack_88 = lVar2;
      plStack_50 = param_1;
      FUN_10b8e3408(alStack_78[0],&uStack_90,&pcStack_68);
      (*(code *)*ppuStack_60)(&ppuStack_60);
      func_0x000105276914(uStack_90);
      lVar2 = lStack_88;
      lStack_88 = 0;
      param_2 = puVar3;
      if (lVar2 == 0) goto LAB_10b8e33dc;
    }
    lStack_88 = 0;
    func_0x00010b8e566c();
  }
LAB_10b8e33dc:
  func_0x00010b8e0a68(alStack_78);
  func_0x00010b8e55ac(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    uVar4 = *param_2;
    *param_2 = 0;
    func_0x00010b8e5844();
    (*extraout_x8_00)();
    func_0x000105276914(uVar4);
    return;
  }
  return;
}



/* Entry: 10b8e3408; end: 10b8e344b;  */

void FUN_10b8e3408(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *extraout_x8;
  
  uVar1 = *param_2;
  *param_2 = 0;
  func_0x00010b8e5844();
  (*extraout_x8)();
  func_0x000105276914(uVar1);
  return;
}



/* Entry: 10b8e344c; end: 10b8e34cb;  */

long * FUN_10b8e344c(long *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long lVar2;
  
  if (param_1 != param_2) {
    FUN_10b8e5504(param_1);
    lVar1 = *param_2;
    *param_1 = lVar1;
    if (lVar1 == 2) {
      lVar1 = 0;
      if (param_2[1] != 0) {
        do {
          func_0x00010b8e5744();
          lVar1 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      param_1[1] = lVar1;
    }
    else if (lVar1 == 1) {
      lVar1 = param_2[2];
      lVar2 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = lVar2;
      if (lVar1 != 0) {
        do {
          func_0x00010b8e5678();
        } while (extraout_w10 != 0);
      }
    }
  }
  return param_1;
}



/* Entry: 10b8e34cc; end: 10b8e361f;  */

long ** FUN_10b8e34cc(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                     undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long **pplVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  long *aplStack_98 [2];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  func_0x00010b8e55d4();
  uStack_58 = extraout_x8;
  func_0x00010b8e5698(aplStack_98);
  if (aplStack_98[0] != (long *)0x0) {
    lStack_a0 = *param_2;
    if ((lStack_a0 != 0) && (*(long *)(lStack_a0 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_a0 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    do {
      func_0x00010b8e5628();
    } while (extraout_w10 != 0);
    uVar1 = *param_3;
    lVar3 = param_3[1];
    uStack_c8 = uVar1;
    lStack_c0 = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x00010b8e5678();
      } while (extraout_w10_00 != 0);
    }
    uVar2 = *param_4;
    lVar4 = param_4[1];
    uStack_b8 = uVar2;
    lStack_b0 = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010b8e5678();
      } while (extraout_w10_01 != 0);
    }
    pcStack_88 = FUN_10b8e42ac;
    ppuStack_80 = &PTR_FUN_110d72e28;
    puVar5 = (undefined8 *)0x30;
    uStack_a8 = param_5;
    __Znwm();
    uStack_d0 = 0;
    *puVar5 = param_1;
    puVar5[1] = uVar1;
    puVar5[2] = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x00010b8e5678();
      } while (extraout_w10_02 != 0);
    }
    puVar5[3] = uVar2;
    puVar5[4] = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010b8e5678();
      } while (extraout_w10_03 != 0);
    }
    *(undefined4 *)(puVar5 + 5) = param_5;
    puStack_78 = puVar5;
    func_0x00010b8e561c(*(undefined8 *)(*aplStack_98[0] + 0x20),aplStack_98[0],&lStack_a0);
    func_0x00010b8e55e4(ppuStack_80);
    FUN_10b8e3620(&uStack_d0);
    func_0x000105276914(lStack_a0);
  }
  pplVar6 = aplStack_98;
  func_0x00010b8e0a68();
  func_0x00010b8e55ac(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080d26e4(pplVar6 + 3);
    func_0x0001080d26e4(pplVar6 + 1);
    FUN_10b8e47b8(*pplVar6);
    return pplVar6;
  }
  return pplVar6;
}



/* Entry: 10b8e3620; end: 10b8e364b;  */

undefined8 * FUN_10b8e3620(undefined8 *param_1)

{
  func_0x0001080d26e4(param_1 + 3);
  func_0x0001080d26e4(param_1 + 1);
  FUN_10b8e47b8(*param_1);
  return param_1;
}



/* Entry: 10b8e364c; end: 10b8e371f;  */

long * FUN_10b8e364c(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined4 uStack_118;
  long lStack_110;
  long alStack_108 [2];
  code *pcStack_f8;
  undefined **ppuStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  long lStack_80;
  long alStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  plVar3 = &lStack_80;
  plVar6 = param_2;
  func_0x00010b8e55d4();
  uStack_38 = extraout_x8;
  func_0x00010b8e5698(alStack_78);
  uVar7 = (undefined4)param_4;
  if (alStack_78[0] != 0) {
    lStack_80 = *param_2;
    if ((lStack_80 != 0) && (*(long *)(lStack_80 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_80 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    do {
      func_0x00010b8e5628();
      uVar7 = (undefined4)param_4;
    } while (extraout_w10 != 0);
    pcStack_68 = FUN_10b8e47e4;
    ppuStack_60 = &PTR_FUN_110d72e48;
    uStack_58 = param_1;
    func_0x00010b8e5844();
    func_0x00010b8e561c();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    func_0x000105276914(lStack_80);
    plVar6 = plVar3;
  }
  plVar3 = alStack_78;
  func_0x00010b8e0a68();
  func_0x00010b8e55ac(uStack_38);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  plVar4 = &lStack_130;
  func_0x00010b8e55c0();
  func_0x00010b8e5698(alStack_108);
  plVar5 = (long *)0x0;
  if (alStack_108[0] != 0) {
    lStack_110 = *plVar6;
    if ((lStack_110 != 0) && (*(long *)(lStack_110 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_110 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    do {
      func_0x00010b8e5628();
    } while (extraout_w10_00 != 0);
    uStack_128 = *param_3;
    lStack_120 = param_3[1];
    if (lStack_120 != 0) {
      plVar6 = (long *)(lStack_120 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pcStack_f8 = FUN_10b8e49c0;
    ppuStack_f0 = &PTR_FUN_110d72e68;
    lStack_130 = 0;
    uStack_118 = uVar7;
    plStack_e8 = plVar3;
    uStack_e0 = uStack_128;
    lStack_d8 = lStack_120;
    if (lStack_120 != 0) {
      do {
        func_0x00010b8e5678();
      } while (extraout_w10_01 != 0);
    }
    uStack_d0 = uVar7;
    func_0x00010b8e5844();
    func_0x00010b8e561c();
    func_0x00010b8e55e4(ppuStack_f0);
    FUN_10b8e3828();
    func_0x00010b8e57c0();
    plVar5 = plVar4;
  }
  func_0x00010b8e57b8();
  func_0x00010b8e55ac(uStack_c8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080d26e4(plVar5 + 1);
    FUN_10b8e47b8(*plVar5);
    return plVar5;
  }
  return plVar5;
}



/* Entry: 10b8e3720; end: 10b8e3827;  */

undefined8 * FUN_10b8e3720(undefined8 param_1,long *param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  long alStack_88 [2];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_b0;
  func_0x00010b8e55c0();
  func_0x00010b8e5698(alStack_88);
  puVar5 = (undefined8 *)0x0;
  if (alStack_88[0] != 0) {
    lStack_90 = *param_2;
    if ((lStack_90 != 0) && (*(long *)(lStack_90 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_90 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    do {
      func_0x00010b8e5628();
    } while (extraout_w10 != 0);
    uStack_a8 = *param_3;
    lStack_a0 = param_3[1];
    if (lStack_a0 != 0) {
      plVar1 = (long *)(lStack_a0 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_78 = FUN_10b8e49c0;
    ppuStack_70 = &PTR_FUN_110d72e68;
    uStack_b0 = 0;
    uStack_98 = param_4;
    uStack_68 = param_1;
    uStack_60 = uStack_a8;
    lStack_58 = lStack_a0;
    if (lStack_a0 != 0) {
      do {
        func_0x00010b8e5678();
      } while (extraout_w10_00 != 0);
    }
    uStack_50 = param_4;
    func_0x00010b8e5844();
    func_0x00010b8e561c();
    func_0x00010b8e55e4(ppuStack_70);
    FUN_10b8e3828();
    func_0x00010b8e57c0();
    puVar5 = puVar4;
  }
  func_0x00010b8e57b8();
  func_0x00010b8e55ac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001080d26e4(puVar5 + 1);
    FUN_10b8e47b8(*puVar5);
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10b8e3828; end: 10b8e384b;  */

undefined8 * FUN_10b8e3828(undefined8 *param_1)

{
  func_0x0001080d26e4(param_1 + 1);
  FUN_10b8e47b8(*param_1);
  return param_1;
}



/* Entry: 10b8e384c; end: 10b8e39a3;  */

long ** FUN_10b8e384c(undefined8 param_1,long *param_2,undefined4 param_3,long *param_4,
                     undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long **pplVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 uVar3;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long *aplStack_98 [2];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  func_0x00010b8e55d4();
  uStack_58 = extraout_x8;
  func_0x00010b8e5698(aplStack_98);
  if (aplStack_98[0] != (long *)0x0) {
    lStack_a0 = *param_2;
    if ((lStack_a0 != 0) && (*(long *)(lStack_a0 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_a0 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    do {
      func_0x00010b8e5628();
    } while (extraout_w10 != 0);
    lStack_b8 = 0;
    uStack_c8 = param_1;
    uStack_c0 = param_3;
    if (*param_4 != 0) {
      do {
        func_0x00010b8e5708();
        lStack_b8 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    FUN_10b9a8f04(auStack_b0,param_5);
    pcStack_88 = FUN_10b8e4c84;
    ppuStack_80 = &PTR_FUN_110d72e88;
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    *puVar1 = uStack_c8;
    uStack_c8 = 0;
    *(undefined4 *)(puVar1 + 1) = uStack_c0;
    uVar3 = 0;
    if (lStack_b8 != 0) {
      do {
        func_0x00010b8e5708();
        uVar3 = extraout_x8_02;
      } while (extraout_w11_01 != 0);
    }
    puVar1[2] = uVar3;
    FUN_10b9a8f04(puVar1 + 3,auStack_b0);
    puStack_78 = puVar1;
    func_0x00010b8e561c(*(undefined8 *)(*aplStack_98[0] + 0x20),aplStack_98[0],&lStack_a0);
    func_0x00010b8e55e4(ppuStack_80);
    FUN_10b8e39a4(&uStack_c8);
    func_0x000105276914(lStack_a0);
  }
  pplVar2 = aplStack_98;
  func_0x00010b8e0a68();
  func_0x00010b8e55ac(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b9a8d98(pplVar2 + 3);
    func_0x000107c278f4(pplVar2 + 2);
    FUN_10b8e47b8(*pplVar2);
    return pplVar2;
  }
  return pplVar2;
}



/* Entry: 10b8e39a4; end: 10b8e39cf;  */

undefined8 * FUN_10b8e39a4(undefined8 *param_1)

{
  FUN_10b9a8d98(param_1 + 3);
  func_0x000107c278f4(param_1 + 2);
  FUN_10b8e47b8(*param_1);
  return param_1;
}



/* Entry: 10b8e39d0; end: 10b8e3adb;  */

undefined8 * FUN_10b8e39d0(undefined8 param_1,long *param_2,undefined1 param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_88 [2];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x00010b8e55c0();
  func_0x00010b8e5698(alStack_88);
  puVar1 = (undefined8 *)0x0;
  if (alStack_88[0] != 0) {
    lStack_90 = *param_2;
    if ((lStack_90 != 0) && (*(long *)(lStack_90 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_90 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    do {
      func_0x00010b8e5628();
    } while (extraout_w10 != 0);
    lStack_98 = 0;
    uStack_a8 = param_1;
    uStack_a0 = param_3;
    if (*param_4 != 0) {
      do {
        func_0x00010b8e5708();
        lStack_98 = extraout_x8_00;
        param_1 = uStack_a8;
      } while (extraout_w11_00 != 0);
    }
    pcStack_78 = FUN_10b8e4eb0;
    ppuStack_70 = &PTR_DAT_110d72ea8;
    uStack_a8 = 0;
    uStack_58 = 0;
    uStack_68 = param_1;
    uStack_60 = uStack_a0;
    if (lStack_98 != 0) {
      do {
        func_0x00010b8e5708();
        uStack_58 = extraout_x8_01;
      } while (extraout_w11_01 != 0);
    }
    func_0x00010b8e5844();
    func_0x00010b8e561c();
    func_0x00010b8e55e4(ppuStack_70);
    puVar1 = &uStack_a8;
    FUN_10b8e3adc();
    func_0x00010b8e57c0();
  }
  func_0x00010b8e57b8();
  func_0x00010b8e55ac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c278f4(puVar1 + 2);
    FUN_10b8e47b8(*puVar1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10b8e3adc; end: 10b8e3aff;  */

undefined8 * FUN_10b8e3adc(undefined8 *param_1)

{
  func_0x000107c278f4(param_1 + 2);
  FUN_10b8e47b8(*param_1);
  return param_1;
}



/* Entry: 10b8e3b00; end: 10b8e3bff;  */

long * FUN_10b8e3b00(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w11;
  long *unaff_x19;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  uVar2 = *(byte *)(param_1 + 1) - 8 == 7;
  switch(*(byte *)(param_1 + 1) - 8) {
  case 0:
    lVar5 = *param_1;
    plVar3 = (long *)(lVar5 + 0x10);
    plVar4 = param_2;
    func_0x00010527d444();
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = *(long *)(lVar5 + 0x28);
    plStack_40 = plVar3;
    plStack_38 = plVar4;
    while (param_1 = plStack_40, plStack_40 != (long *)(lVar6 + lVar5)) {
      FUN_10b8e3b00(plStack_38 + 1,param_2);
      func_0x00010527d4cc(&plStack_40);
    }
    break;
  case 1:
    plVar3 = (long *)(*param_1 + 0x18);
    for (lVar6 = *(long *)(*param_1 + 0x10) << 4; lVar6 != 0; lVar6 = lVar6 + -0x10) {
      param_1 = plVar3;
      FUN_10b8e3b00(plVar3,param_2);
      plVar3 = plVar3 + 2;
    }
    break;
  case 3:
    param_1 = (long *)*param_1;
    if (((param_1 != (long *)0x0) &&
        (___dynamic_cast(param_1,&PTR_DAT_1107e3600,&PTR_DAT_110d72b10,0xfffffffffffffffe),
        param_1 != (long *)0x0)) &&
       ((*param_2 == 0 ||
        (uVar1 = *(uint *)(*param_2 + 0x18), uVar2 = *(uint *)(param_1[1] + 0x18) == uVar1,
        uVar1 < *(uint *)(param_1[1] + 0x18))))) {
      func_0x00010b8c38cc(param_2,param_1 + 1);
      if (!(bool)uVar2) {
        func_0x00010b8c3944();
        lVar6 = extraout_x8;
        if ((extraout_x8 != 0) && (*(long *)(extraout_x8 + 0x10) != 0)) {
          do {
            func_0x00010b8c390c();
            lVar6 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        *unaff_x19 = lVar6;
        func_0x000105276914();
      }
      return unaff_x19;
    }
    return param_1;
  case 7:
    FUN_10b9a94ec(&plStack_40);
    FUN_10b8e50d8(plStack_40,param_2);
    func_0x000104bddf04(plStack_40);
    param_1 = plStack_40;
  }
  return param_1;
}



/* Entry: 10b8e3c00; end: 10b8e3da7;  */

void FUN_10b8e3c00(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4,long *param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong extraout_x8;
  int extraout_w11;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [24];
  ulong auStack_b8 [11];
  undefined1 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar4 = param_2;
  func_0x00010b8e55c0();
  lVar4 = *(long *)(lVar4 + 0x30);
  if (lVar4 == 0) {
    plVar1 = *(long **)(param_2 + 0x20);
    if (plVar1 == (long *)0x0) {
LAB_10b8e3d2c:
      puVar3 = &UNK_10f7cbb05;
LAB_10b8e3d60:
      FUN_10b99f5f8(auStack_b8,puVar3);
      goto LAB_10b8e3d68;
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,param_4,param_2);
    in_ZR = 0;
    if (*(char *)(param_5[3] + 8) == '\x01') {
      lVar4 = *(long *)(param_2 + 0x30);
      goto LAB_10b8e3c38;
    }
  }
  else {
LAB_10b8e3c38:
    in_ZR = lVar4 == 1;
    if (!(bool)in_ZR) {
      if (lVar4 == 0) goto LAB_10b8e3d2c;
      auStack_b8[0] = 0;
      if (*(long *)(param_2 + 0x38) != 0) {
        do {
          func_0x00010b8e5744();
          auStack_b8[0] = extraout_x8;
        } while (extraout_w11 != 0);
      }
LAB_10b8e3d68:
      func_0x00010b8e5d68(param_1,param_5,auStack_b8);
      func_0x000104bda960(auStack_b8[0]);
      goto LAB_10b8e3d80;
    }
    FUN_10b8e3244(param_2 + 0x80,*param_5);
    lVar4 = *(long *)(param_2 + 0x38);
    if (lVar4 == 0) {
      puVar3 = &UNK_10f7cbb24;
      goto LAB_10b8e3d60;
    }
    uVar2 = *param_4;
    FUN_10b8e129c(lVar4,uVar2,param_5[3]);
    lStack_58 = lVar4;
    uStack_50 = uVar2;
    if ((*(byte *)(param_5[3] + 8) & 1) != 0) {
      auStack_b8[0] = auStack_b8[0] & 0xffffffffffffff00;
      uStack_60 = 0;
      func_0x000105c3b044();
      if ((int)lVar4 != 0) {
        lVar4 = param_2 + param_3 * 0x10;
        FUN_10b9a7544(auStack_d0,&UNK_10f7cbb45,0x18,*(undefined8 *)(lVar4 + 200),
                      *(undefined8 *)(lVar4 + 0xd0));
        func_0x00010b8a6ed0(auStack_b8,auStack_d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
      }
      FUN_10b8dbbec(param_1,*param_5,&lStack_58,param_2 + param_3 * 8 + 0x88,param_5);
      func_0x0001080e8dd4(auStack_b8);
      goto LAB_10b8e3d80;
    }
  }
  lVar4 = *param_5;
  *param_1 = *(undefined8 *)(lVar4 + 0x140);
  uVar2 = *(undefined8 *)(lVar4 + 0x148);
  param_1[2] = *(undefined8 *)(lVar4 + 0x150);
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_10b8e3d80:
  func_0x00010b8e55ac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_d8 = FUN_10b8e3da8;
    puStack_e0 = &stack0xfffffffffffffff0;
    FUN_10b9a0084(&uStack_e8);
    func_0x000104bda960(uStack_e8);
    return;
  }
  return;
}



/* Entry: 10b8e3da8; end: 10b8e3dcf;  */

void FUN_10b8e3da8(void)

{
  undefined8 uStack_18;
  
  FUN_10b9a0084(&uStack_18);
  func_0x000104bda960(uStack_18);
  return;
}



/* Entry: 10b8e3dd0; end: 10b8e3f0b;  */

undefined8 **** FUN_10b8e3dd0(undefined8 ****param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined8 ****ppppuVar1;
  long *plVar2;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long lVar3;
  long lVar4;
  undefined8 ***pppuStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_88 [2];
  code *pcStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_48;
  
  ppppuVar1 = param_1;
  func_0x00010b8e55c0();
  func_0x00010b8e5698(alStack_88);
  if (alStack_88[0] != 0) {
    lStack_90 = *param_2;
    if ((lStack_90 != 0) && (*(long *)(lStack_90 + 0x10) != 0)) {
      do {
        func_0x00010b8e564c();
        lStack_90 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    do {
      func_0x00010b8e5628();
    } while (extraout_w10 != 0);
    lVar4 = *param_3;
    pppuStack_a8 = param_1;
    if (lVar4 != 0) {
      do {
        func_0x00010b8e5788();
      } while (extraout_w10_00 != 0);
    }
    lVar3 = *param_4;
    lStack_a0 = lVar4;
    if (lVar3 != 0) {
      do {
        func_0x00010b8e5628();
      } while (extraout_w10_01 != 0);
    }
    lVar4 = lStack_a0;
    pcStack_78 = FUN_10b8e5140;
    ppuStack_70 = &PTR_FUN_110d72ec8;
    plVar2 = (long *)0x18;
    lStack_98 = lVar3;
    __Znwm();
    *plVar2 = (long)pppuStack_a8;
    pppuStack_a8 = (undefined8 ***)0x0;
    if (lVar4 != 0) {
      do {
        func_0x00010b8e5788();
        lVar3 = lStack_98;
      } while (extraout_w10_02 != 0);
    }
    plVar2[1] = lVar4;
    if (lVar3 != 0) {
      do {
        func_0x00010b8e5628();
      } while (extraout_w10_03 != 0);
    }
    plVar2[2] = lVar3;
    plStack_68 = plVar2;
    func_0x0001080d3888(alStack_88[0],&lStack_90,&pcStack_78);
    func_0x00010b8e55e4(ppuStack_70);
    ppppuVar1 = &pppuStack_a8;
    FUN_10b8e3f0c();
    func_0x00010b8e57c0();
  }
  func_0x00010b8e57b8();
  func_0x00010b8e55ac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104bddf38(ppppuVar1 + 2);
    func_0x000107c278f4(ppppuVar1 + 1);
    FUN_10b8e47b8(*ppppuVar1);
    return ppppuVar1;
  }
  return ppppuVar1;
}



/* Entry: 10b8e3f0c; end: 10b8e3f37;  */

undefined8 * FUN_10b8e3f0c(undefined8 *param_1)

{
  func_0x000104bddf38(param_1 + 2);
  func_0x000107c278f4(param_1 + 1);
  FUN_10b8e47b8(*param_1);
  return param_1;
}



/* Entry: 10b8e3f38; end: 10b8e3fff;  */

void FUN_10b8e3f38(undefined8 *param_1,long param_2,uint param_3)

{
  undefined1 in_ZR;
  uint *puVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  uint uStack_44;
  ulong auStack_40 [2];
  
  param_2 = param_2 + 0x48;
  puVar1 = &uStack_44;
  uStack_44 = param_3;
  func_0x00010b8c4388(param_2,puVar1);
  func_0x00010b8e56dc();
  if ((bool)in_ZR) {
    func_0x000107c31084();
    auStack_40[0] = (ulong)uStack_44;
    auStack_40[1] = 0;
    func_0x000107c2793c(&UNK_10f7cbacb);
    func_0x000107c3173c(auStack_68);
    func_0x000107c31080(&uStack_50,param_2,auStack_68);
    FUN_10b99f560(auStack_40,&uStack_50);
    *param_1 = 2;
    param_1[1] = auStack_40[0];
    auStack_40[0] = 0;
    func_0x000104bda960(0);
    func_0x000107c278f8(uStack_50);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  else {
    func_0x00010b8e5578(param_1,puVar1 + 2);
  }
  return;
}



/* Entry: 10b8e4000; end: 10b8e407b;  */

undefined8 * FUN_10b8e4000(undefined8 *param_1)

{
  *param_1 = 0;
  func_0x00010b8e4048(param_1 + 1);
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  return param_1;
}



/* Entry: 10b8e407c; end: 10b8e41ef;  */

void FUN_10b8e407c(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  long lVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  puVar3 = param_1;
  func_0x00010b8e55d4();
  lVar6 = *(long *)(param_2 + 0x10);
  uStack_88 = *puVar3;
  uStack_70 = puVar3[1];
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_58 = extraout_x8;
  func_0x00010b8e5754(&uStack_88);
  func_0x00010b8e57b0(auStack_a8,lVar6,0);
  uVar1 = *(char *)(param_1[1] + 8) == '\x01';
  if ((bool)uVar1) {
    func_0x00010b8e5864();
    if ((extraout_x9 & 1) == 0) goto LAB_10b8e41bc;
    while( true ) {
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_e8 = 0;
      uStack_e0 = 1;
      uStack_d0 = 0;
      uStack_c8 = 0;
      puStack_f0 = (undefined1 *)&uStack_120;
      FUN_10b9a3a64(auStack_c0,&puStack_f0);
      uVar4 = 0x48;
      __Znwm();
      FUN_10b8e0de0();
      lVar5 = *(long *)(lVar6 + 0x78);
      *(undefined8 *)(lVar6 + 0x78) = uVar4;
      if (lVar5 != 0) {
        func_0x00010b8e566c();
      }
      FUN_10b9a3d64(auStack_b8);
LAB_10b8e4188:
      func_0x0001080e0bc0(auStack_a8);
      func_0x00010b8e55ac(uStack_58);
      if ((bool)uVar1) break;
      ___stack_chk_fail();
LAB_10b8e41bc:
      iVar2 = 0x137fcf58;
      ___cxa_guard_acquire();
      func_0x00010b8e5864();
      if (iVar2 != 0) {
        func_0x000107c31088(&UNK_10f7cbb5e);
        func_0x00010b8e5864();
        ___cxa_guard_release(extraout_x8_00 + 8);
        func_0x00010b8e5864();
      }
    }
    return;
  }
  lVar5 = *(long *)(lVar6 + 0x78);
  *(undefined8 *)(lVar6 + 0x78) = 0;
  if (lVar5 == 0) goto LAB_10b8e4188;
  func_0x00010b8e566c();
  goto LAB_10b8e4188;
}



/* Entry: 10b8e41f0; end: 10b8e41fb;  */

void FUN_10b8e41f0(void)

{
  return;
}



/* Entry: 10b8e41fc; end: 10b8e429f;  */

void FUN_10b8e41fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b8e55d4();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = **(undefined8 **)(param_2 + 0x10);
  uVar4 = *param_1;
  uStack_28 = extraout_x8;
  FUN_10b8e129c(uVar3,uVar4,param_1[1]);
  uVar2 = *(char *)(param_1[1] + 8) == '\x01';
  if ((bool)uVar2) {
    uStack_78 = *param_1;
    uStack_30 = 0;
    puStack_70 = &uStack_48;
    uStack_68 = 1;
    lStack_60 = param_1[1];
    uStack_48 = uStack_78;
    uStack_40 = uVar3;
    uStack_38 = uVar4;
    func_0x00010b8e5754(&uStack_78);
    func_0x00010b8e5728(auStack_98,uVar1,1,param_4,&uStack_78);
    func_0x00010b8e5720();
    func_0x0001080e0bc0(&uStack_48);
  }
  func_0x00010b8e55ac(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8e42a0; end: 10b8e42ab;  */

void FUN_10b8e42a0(void)

{
  return;
}



/* Entry: 10b8e42ac; end: 10b8e46e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b8e42ac(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  char in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  char in_OV;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 **ppuVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long lVar10;
  undefined8 **unaff_x21;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long alStack_288 [2];
  undefined2 uStack_278;
  undefined8 uStack_270;
  undefined2 uStack_268;
  undefined8 auStack_260 [3];
  undefined1 auStack_248 [32];
  undefined8 *apuStack_228 [4];
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  undefined8 uStack_168;
  undefined8 **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [88];
  undefined1 uStack_a0;
  undefined1 auStack_98 [80];
  undefined8 uStack_48;
  
  puVar11 = param_1;
  func_0x00010b8e55c0();
  plVar13 = *(long **)(param_2 + 0x10);
  lVar10 = *plVar13;
  uVar6 = *(ulong *)puVar11[2];
  func_0x00010b8c1f54();
  if ((uVar6 & 1) != 0) goto LAB_10b8e4658;
  lVar12 = *(long *)param_1[2];
  plVar7 = *(long **)(lVar10 + 0x20);
  if (plVar7 == (long *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b8e56b8();
    puVar11 = (undefined8 *)*plVar7;
    if (puVar11 != (undefined8 *)0x0) {
      do {
        func_0x00010b8e5628();
      } while (extraout_w10 != 0);
    }
  }
  apuStack_228[0] = puVar11;
  FUN_10b920db4(auStack_98,apuStack_228,lVar12 + 0x38);
  func_0x000104bd474c(puVar11);
  iVar5 = (int)lVar12 + 0x38;
  FUN_10b98c7b8(auStack_260);
  auStack_f8[0] = 0;
  uStack_a0 = 0;
  func_0x000105c3b044();
  if (iVar5 != 0) {
    func_0x00010b8e5830();
    uVar2 = extraout_x11;
    puVar11 = extraout_x10;
    if (in_NG == in_OV) {
      uVar2 = extraout_x8;
      puVar11 = auStack_260;
    }
    FUN_10b9a7544(apuStack_228,&UNK_10f7cbab2,0x18,puVar11,uVar2);
    func_0x00010b8a6ed0(auStack_f8,apuStack_228);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_228);
  }
  plVar7 = (long *)param_1[2];
  apuStack_228[0] = (undefined8 *)CONCAT44(apuStack_228[0]._4_4_,*(undefined4 *)(*plVar7 + 0x18));
  lVar12 = lVar10 + 0x48;
  FUN_10b8c4ba0(lVar12,apuStack_228);
  lVar8 = lVar10 + 0x48;
  ppuVar9 = apuStack_228;
  func_0x00010b8c4bc4(lVar8,ppuVar9,lVar12);
  if (((ulong)ppuVar9 & 1) != 0) {
    puVar1 = (undefined4 *)(*(long *)(lVar10 + 0x50) + lVar8 * 0x10);
    *puVar1 = apuStack_228[0]._0_4_;
    *(undefined8 *)(puVar1 + 2) = 0;
    bVar3 = (byte)lVar12 & 0x7f;
    *(byte *)(*(long *)(lVar10 + 0x48) + lVar8) = bVar3;
    *(byte *)(*(long *)(lVar10 + 0x48) + (*(ulong *)(lVar10 + 0x60) & lVar8 - 8U) +
              (*(ulong *)(lVar10 + 0x60) & 7) + 1) = bVar3;
  }
  func_0x00010b8c292c(*(long *)(lVar10 + 0x50) + lVar8 * 0x10 + 8,plVar7);
  unaff_x21 = (undefined8 **)0x1;
  uStack_268 = 1;
  uStack_270 = 0;
  if (plVar13[1] != 0) {
    func_0x00010b8e565c();
    FUN_10b9a9020(&uStack_270,apuStack_228);
    func_0x00010b8e57c8();
  }
  uStack_278 = 1;
  alStack_288[1] = 0;
  if (plVar13[3] != 0) {
    func_0x00010b8e565c();
    FUN_10b9a9020(alStack_288 + 1,apuStack_228);
    func_0x00010b8e57c8();
  }
  alStack_288[0] = 0;
  FUN_10b8e3b00(&uStack_270,alStack_288);
  FUN_10b8e3b00(alStack_288 + 1,alStack_288);
  if (alStack_288[0] != 0) {
    iVar5 = *(int *)(alStack_288[0] + 0x18);
    in_OV = SBORROW4(iVar5,1);
    in_NG = iVar5 + -1 < 0;
    in_ZR = iVar5 == 1;
    if ((!(bool)in_ZR) &&
       ((lVar12 = alStack_288[0], func_0x00010b8c1f54(), (int)lVar12 == 0 ||
        ((bRam00000001133fad60 & 1) == 0)))) {
      func_0x00010b8c292c(*(long *)param_1[2] + 0x1b8,alStack_288);
      func_0x00010b8c2970(alStack_288[0]);
      do {
        func_0x00010b8e5788();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x00010b8e5830();
  apuStack_228[1] = (undefined8 *)extraout_x11_00;
  apuStack_228[0] = extraout_x10_00;
  if (in_NG == in_OV) {
    apuStack_228[1] = (undefined8 *)extraout_x8_00;
    apuStack_228[0] = auStack_260;
  }
  (**(code **)(*(long *)*param_1 + 0x78))(auStack_118,(long *)*param_1,apuStack_228,param_1[1]);
  func_0x00010b8e5688();
  if (!(bool)in_ZR) goto LAB_10b8e4620;
  unaff_x21 = (undefined8 **)0x1137fcf20;
  if ((bRam00000001137fcf28 & 1) == 0) goto LAB_10b8e468c;
  while( true ) {
    func_0x00010b8e5850();
    apuStack_228[0] = &uStack_168;
    apuStack_228[1] = (undefined8 *)0x0;
    func_0x00010b8e5798();
    FUN_10b900bd0(auStack_138);
    func_0x00010b8e5688();
    if ((bool)in_ZR) {
      uVar4 = in_ZR;
      if ((bRam00000001137fcf38 & 1) == 0) {
        iVar5 = 0x137fcf38;
        ___cxa_guard_acquire();
        uVar4 = in_ZR;
        if (iVar5 != 0) {
          func_0x000107c31088(0x1137fcf30,"context");
          ___cxa_guard_release(0x1137fcf38);
          uVar4 = in_ZR;
        }
      }
      func_0x00010b8e5850();
      apuStack_228[0] = &uStack_168;
      apuStack_228[1] = (undefined8 *)0x0;
      func_0x00010b8e5798();
      unaff_x21 = apuStack_228;
      FUN_10b900bd0(auStack_188);
      func_0x00010b8e5688();
      in_ZR = 0;
      if ((bool)uVar4) {
        func_0x00010b8e5638();
        FUN_10b8dba18(auStack_1a8);
        func_0x0001080e08ac(apuStack_228,auStack_1a8);
        func_0x0001080e08ac(auStack_208,auStack_118);
        func_0x0001080e08ac(auStack_1e8,auStack_138);
        func_0x0001080e08ac(auStack_1c8,auStack_188);
        uStack_168 = *param_1;
        uStack_150 = param_1[1];
        uStack_158 = 4;
        ppuStack_160 = unaff_x21;
        func_0x0001080e01a8(auStack_148);
        func_0x00010b8e5728(auStack_248,lVar10,2);
        func_0x0001080e0bc0(auStack_248);
        lVar10 = 0x60;
        do {
          func_0x0001080e0bc0((long)unaff_x21 + lVar10);
          lVar10 = lVar10 + -0x20;
          in_ZR = lVar10 == -0x20;
        } while (!(bool)in_ZR);
        func_0x0001080e0bc0(auStack_1a8);
        lVar10 = -0x20;
      }
      func_0x0001080e0bc0(auStack_188);
    }
    func_0x0001080e0bc0(auStack_138);
LAB_10b8e4620:
    func_0x0001080e0bc0(auStack_118);
    func_0x000105276914(alStack_288[0]);
    FUN_10b9a8d98(alStack_288 + 1);
    FUN_10b9a8d98(&uStack_270);
    func_0x0001080e8dd4(auStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
    func_0x00010b92155c(auStack_98);
LAB_10b8e4658:
    lVar12 = *(long *)param_1[2];
    uVar6 = (ulong)*(uint *)(plVar13 + 5);
    func_0x00010b8e55ac(uStack_48,lVar12,uVar6);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10b8e468c:
    iVar5 = 0x137fcf28;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c31088(unaff_x21,"viewModel");
      ___cxa_guard_release(unaff_x21 + 1);
    }
  }
  func_0x00010b8c37a0(lVar12 + 0x70);
  func_0x00010b8c20b4(lVar12,uVar6,&stack0xffffffffffffffd0);
  func_0x00010b8c3870();
  return;
}



/* Entry: 10b8e46e4; end: 10b8e4703;  */

void FUN_10b8e46e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8e3620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e4704; end: 10b8e4707;  */

void FUN_10b8e4704(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8e4708; end: 10b8e47b7;  */

void FUN_10b8e4708(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d72e28;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  uVar2 = 0;
  if (*plVar4 != 0) {
    do {
      func_0x00010b8e5744();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  lVar3 = plVar4[2];
  lVar5 = plVar4[1];
  puVar1[2] = plVar4[2];
  puVar1[1] = lVar5;
  if (lVar3 != 0) {
    do {
      func_0x00010b8e5678();
    } while (extraout_w10 != 0);
  }
  lVar3 = plVar4[4];
  lVar5 = plVar4[3];
  puVar1[4] = plVar4[4];
  puVar1[3] = lVar5;
  if (lVar3 != 0) {
    do {
      func_0x00010b8e5678();
    } while (extraout_w10_00 != 0);
  }
  *(int *)(puVar1 + 5) = (int)plVar4[5];
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b8e47b8; end: 10b8e47e3;  */

void FUN_10b8e47b8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b8e47dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b8e47e4; end: 10b8e496f;  */

undefined8 * FUN_10b8e47e4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  long extraout_x8;
  int extraout_w10;
  int extraout_w11;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 uStack_10c;
  undefined1 auStack_108 [32];
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [32];
  undefined8 auStack_98 [10];
  undefined8 uStack_48;
  
  func_0x00010b8e55c0();
  lVar5 = *(long *)(param_2 + 0x10);
  func_0x00010b8e56a8();
  puVar2 = (undefined8 *)(lVar5 + 0x48);
  FUN_10b8c41b4(puVar2,auStack_98);
  uVar1 = (undefined8 *)(*(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x60)) == puVar2;
  if (!(bool)uVar1) {
    plVar3 = *(long **)(lVar5 + 0x20);
    if (plVar3 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      func_0x00010b8e56b8();
      lVar7 = *plVar3;
      if (lVar7 != 0) {
        do {
          func_0x00010b8e5628();
        } while (extraout_w10 != 0);
      }
    }
    lStack_e8 = lVar7;
    FUN_10b920e84(auStack_98,&lStack_e8,*(long *)param_1[2] + 0x38);
    func_0x000104bd474c(lVar7);
    func_0x00010b8e581c();
    FUN_10b8dba18(auStack_b8);
    lStack_e8 = *param_1;
    lStack_d0 = param_1[1];
    uStack_d8 = 1;
    puStack_e0 = auStack_b8;
    func_0x0001080e01a8(auStack_c8);
    func_0x00010b8e57b0(auStack_108,lVar5,3,param_4,&lStack_e8);
    func_0x00010b8e5720();
    uStack_10c = *(undefined4 *)(*(long *)param_1[2] + 0x18);
    lVar7 = lVar5 + 0x48;
    puVar4 = &uStack_10c;
    FUN_10b8c41b4();
    uVar1 = *(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x60) == lVar7;
    if (!(bool)uVar1) {
      lVar6 = *(long *)(puVar4 + 2);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
        do {
          func_0x00010b8e564c();
          lVar7 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_10b8c41e0(lVar5 + 0x48,lVar7);
      if (*(long *)(lVar6 + 0x1b8) != 0) {
        func_0x00010b8c2970();
        func_0x00010b8c1d38();
      }
      func_0x000107c3105c(lVar6);
    }
    func_0x0001080e0bc0(auStack_b8);
    puVar2 = auStack_98;
    func_0x00010b92155c();
  }
  func_0x00010b8e55ac(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b8e47b8(puVar2[1]);
    return puVar2 + 1;
  }
  return puVar2;
}



/* Entry: 10b8e4970; end: 10b8e49bf;  */

undefined8 * FUN_10b8e4970(long param_1)

{
  FUN_10b8e47b8(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b8e49c0; end: 10b8e4beb;  */

void FUN_10b8e49c0(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar5;
  long lVar6;
  undefined8 **unaff_x22;
  undefined8 uVar7;
  undefined1 auStack_178 [32];
  undefined8 *apuStack_158 [2];
  undefined1 uStack_148;
  undefined8 **ppuStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined8 uStack_f8;
  undefined8 **ppuStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [80];
  undefined8 uStack_58;
  
  lVar6 = param_2;
  func_0x00010b8e55d4();
  lVar5 = *(long *)(lVar6 + 0x10);
  uStack_58 = extraout_x8;
  func_0x00010b8e56a8();
  lVar6 = lVar5 + 0x48;
  FUN_10b8c41b4(lVar6,auStack_a8);
  uVar1 = *(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x60) == lVar6;
  if ((bool)uVar1) goto LAB_10b8e4b88;
  uVar3 = *(ulong *)param_1[2];
  func_0x00010b8c1f54();
  if ((uVar3 & 1) != 0) goto LAB_10b8e4b88;
  puVar4 = *(undefined8 **)(lVar5 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    func_0x00010b8e56b8();
    puVar4 = (undefined8 *)*puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        func_0x00010b8e5628();
      } while (extraout_w10 != 0);
    }
  }
  apuStack_158[0] = puVar4;
  FUN_10b920f54(auStack_a8,apuStack_158,*(long *)param_1[2] + 0x38);
  func_0x000104bd474c(puVar4);
  unaff_x22 = (undefined8 **)0x1137fcf40;
  if ((bRam00000001137fcf48 & 1) == 0) goto LAB_10b8e4bc0;
  while( true ) {
    uVar7 = *param_1;
    if (*(long *)(param_2 + 0x18) == 0) {
      uStack_110 = 1;
      uStack_118 = 0;
    }
    else {
      func_0x00010b8e565c();
    }
    uStack_f8 = 0;
    ppuStack_f0 = (undefined8 **)0x0;
    uStack_e8 = uStack_e8 & 0xffffffffffffff00;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    apuStack_158[0] = &uStack_f8;
    apuStack_158[1] = (undefined8 *)0x0;
    uStack_148 = 1;
    uStack_138 = 0;
    uStack_130 = 0;
    ppuStack_140 = unaff_x22;
    FUN_10b900bd0(auStack_c8,uVar7,&uStack_118,apuStack_158,param_1[1]);
    func_0x00010b8e57c8();
    uVar1 = 0;
    if (*(char *)(param_1[1] + 8) == '\x01') {
      func_0x00010b8e581c();
      FUN_10b8dba18(&uStack_118);
      func_0x0001080e08ac(apuStack_158,&uStack_118);
      func_0x0001080e08ac(&uStack_138,auStack_c8);
      uStack_f8 = *param_1;
      uStack_e0 = param_1[1];
      uStack_e8 = 2;
      ppuStack_f0 = apuStack_158;
      func_0x0001080e01a8(&uStack_d8);
      func_0x00010b8e57b0(auStack_178,lVar5,4);
      func_0x00010b8e5720();
      lVar6 = 0x20;
      do {
        func_0x0001080e0bc0((long)apuStack_158 + lVar6);
        lVar6 = lVar6 + -0x20;
        uVar1 = lVar6 == -0x20;
      } while (!(bool)uVar1);
      func_0x0001080e0bc0(&uStack_118);
      lVar5 = -0x20;
    }
    func_0x0001080e0bc0(auStack_c8);
    func_0x00010b92155c(auStack_a8);
    unaff_x22 = apuStack_158;
LAB_10b8e4b88:
    lVar6 = *(long *)param_1[2];
    uVar3 = (ulong)*(uint *)(param_2 + 0x28);
    func_0x00010b8e55ac(uStack_58,lVar6,uVar3);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
LAB_10b8e4bc0:
    iVar2 = 0x137fcf48;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(unaff_x22,"viewModel");
      ___cxa_guard_release(unaff_x22 + 1);
    }
  }
  func_0x00010b8c37a0(lVar6 + 0x70);
  func_0x00010b8c20b4(lVar6,uVar3,&stack0xffffffffffffffd0);
  func_0x00010b8c3870();
  return;
}



/* Entry: 10b8e4bec; end: 10b8e4c83;  */

undefined8 * FUN_10b8e4bec(long param_1)

{
  func_0x0001080d26e4(param_1 + 0x10);
  FUN_10b8e47b8(*(undefined8 *)(param_1 + 8));
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10b8e4c84; end: 10b8e4e03;  */

void FUN_10b8e4c84(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  code *extraout_x9;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_198 [32];
  undefined8 *puStack_178;
  ulong uStack_170;
  undefined1 uStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  puVar3 = param_1;
  func_0x00010b8e55c0();
  puVar7 = *(undefined8 **)(param_2 + 0x10);
  uVar6 = *puVar7;
  FUN_10b8dba18(auStack_68,*puVar3,*(undefined4 *)(puVar7 + 1));
  lVar5 = puVar7[2];
  if (lVar5 == 0) {
    puStack_178 = (undefined8 *)&UNK_10f7d0ef0;
    uStack_170 = 0;
  }
  else {
    puStack_178 = (undefined8 *)(lVar5 + 0x18);
    uStack_170 = (ulong)*(uint *)(lVar5 + 0xc);
  }
  func_0x00010b8e5778(*param_1);
  (*extraout_x9)(auStack_88);
  uVar1 = *(char *)(param_1[1] + 8) == '\x01';
  uVar2 = 0;
  if ((bool)uVar1) {
    uStack_d8 = 0;
    ppuStack_d0 = (undefined8 **)0x0;
    uStack_c8 = uStack_c8 & 0xffffffffffffff00;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_178 = &uStack_d8;
    uStack_170 = 0;
    uStack_168 = 2;
    uStack_158 = 0;
    uStack_150 = 0;
    plStack_160 = puVar7 + 2;
    FUN_10b900bd0(auStack_a8,*param_1,puVar7 + 3,&puStack_178);
    func_0x00010b8e5688();
    uVar2 = 0;
    if ((bool)uVar1) {
      func_0x00010b8e5638();
      FUN_10b8dba18(auStack_f8);
      func_0x0001080e08ac(&puStack_178,auStack_f8);
      func_0x00010b8e57ec();
      func_0x00010b8e57e0();
      func_0x0001080e08ac(auStack_118,auStack_a8);
      uStack_d8 = *param_1;
      uStack_c0 = param_1[1];
      uStack_c8 = 4;
      ppuStack_d0 = &puStack_178;
      func_0x0001080e01a8(&uStack_b8);
      func_0x00010b8e5728(auStack_198,uVar6,7);
      func_0x00010b8e5720();
      lVar5 = 0x60;
      do {
        func_0x0001080e0bc0((long)&puStack_178 + lVar5);
        lVar5 = lVar5 + -0x20;
        uVar2 = lVar5 == -0x20;
      } while (!(bool)uVar2);
      func_0x0001080e0bc0(auStack_f8);
    }
    func_0x0001080e0bc0(auStack_a8);
  }
  func_0x0001080e0bc0(auStack_88);
  puVar4 = auStack_68;
  func_0x0001080e0bc0();
  func_0x00010b8e55ac(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(puVar4 + 8) != 0) {
    FUN_10b8e39a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e4e04; end: 10b8e4e23;  */

void FUN_10b8e4e04(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8e39a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e4e24; end: 10b8e4e27;  */

void FUN_10b8e4e24(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8e4e28; end: 10b8e4eaf;  */

void FUN_10b8e4e28(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d72e88;
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b8e5744();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  *(int *)(puVar1 + 1) = (int)plVar3[1];
  uVar2 = 0;
  if (plVar3[2] != 0) {
    do {
      func_0x00010b8e5708();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[2] = uVar2;
  FUN_10b9a8f04(puVar1 + 3,plVar3 + 3);
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b8e4eb0; end: 10b8e502f;  */

void FUN_10b8e4eb0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 extraout_w8;
  long lVar6;
  undefined *extraout_x8;
  code *extraout_x9;
  undefined *puVar7;
  int extraout_w11;
  undefined **ppuVar8;
  undefined1 auStack_158 [32];
  long lStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_108;
  ulong uStack_100;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = param_2;
  func_0x00010b8e55c0();
  ppuVar8 = *(undefined ***)(lVar6 + 0x10);
  cVar2 = *(char *)(lVar6 + 0x18);
  func_0x00010b8e56a8();
  puStack_108 = (undefined *)CONCAT44(puStack_108._4_4_,extraout_w8);
  ppuVar4 = ppuVar8 + 9;
  ppuVar5 = &puStack_108;
  FUN_10b8c41b4();
  func_0x00010b8e56dc();
  if (!(bool)in_ZR) {
    in_ZR = cVar2 == '\0';
    lVar6 = 0xc0;
    if ((bool)in_ZR) {
      lVar6 = 0xe0;
    }
    lVar1 = 200;
    if ((bool)in_ZR) {
      lVar1 = 0xe8;
    }
    puStack_68 = *(undefined **)(*param_1 + lVar6);
    puVar3 = (undefined8 *)(*param_1 + lVar1);
    uStack_58 = puVar3[1];
    uStack_60 = *puVar3;
    uStack_50 = 0;
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) {
      puStack_108 = &UNK_10f7d0ef0;
      uStack_100 = 0;
    }
    else {
      puStack_108 = (undefined *)(lVar6 + 0x18);
      uStack_100 = (ulong)*(uint *)(lVar6 + 0xc);
    }
    func_0x00010b8e5778();
    ppuVar5 = &puStack_108;
    (*extraout_x9)(auStack_88);
    if ((*(byte *)(param_1[1] + 8) & 1) == 0) {
      FUN_10b8e3da8();
    }
    else {
      func_0x00010b8e5638();
      FUN_10b8dba18(auStack_a8);
      func_0x0001080e08ac(&puStack_108,auStack_a8);
      func_0x00010b8e57ec();
      func_0x00010b8e57e0();
      lStack_138 = *param_1;
      lStack_120 = param_1[1];
      uStack_128 = 3;
      ppuStack_130 = &puStack_108;
      func_0x00010b8e5754(&lStack_138);
      func_0x00010b8e5728(auStack_158,ppuVar8,5,param_4,&lStack_138);
      func_0x00010b8e5720();
      ppuVar5 = ppuVar8;
      if ((*(byte *)(param_1[1] + 8) & 1) == 0) {
        FUN_10b8e3da8();
        ppuVar5 = ppuVar8;
      }
      lVar6 = 0x40;
      do {
        func_0x0001080e0bc0((long)&puStack_108 + lVar6);
        lVar6 = lVar6 + -0x20;
        in_ZR = lVar6 == -0x20;
      } while (!(bool)in_ZR);
      func_0x0001080e0bc0(auStack_a8);
    }
    func_0x0001080e0bc0(auStack_88);
    ppuVar4 = &puStack_68;
    func_0x0001080e0bc0();
  }
  func_0x00010b8e55ac(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar7 = *ppuVar5;
    *ppuVar4 = (undefined *)&PTR_DAT_110d72ea8;
    ppuVar4[1] = puVar7;
    *ppuVar5 = (undefined *)0x0;
    *(undefined1 *)(ppuVar4 + 2) = *(undefined1 *)(ppuVar5 + 1);
    puVar7 = (undefined *)0x0;
    if (ppuVar5[2] != (undefined *)0x0) {
      do {
        func_0x00010b8e5708();
        puVar7 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    ppuVar4[3] = puVar7;
    return;
  }
  return;
}



/* Entry: 10b8e5030; end: 10b8e50d7;  */

void FUN_10b8e5030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  uVar1 = *param_2;
  *param_1 = &PTR_DAT_110d72ea8;
  param_1[1] = uVar1;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 1);
  uVar1 = 0;
  if (param_2[2] != 0) {
    do {
      func_0x00010b8e5708();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b8e50d8; end: 10b8e513f;  */

long * FUN_10b8e50d8(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  int extraout_w11;
  long *unaff_x19;
  
  if (((param_1 != (long *)0x0) &&
      (___dynamic_cast(param_1,&PTR_DAT_1107e3600,&PTR_DAT_110d72b10,0xfffffffffffffffe),
      param_1 != (long *)0x0)) &&
     ((*param_2 == 0 ||
      (uVar1 = *(uint *)(*param_2 + 0x18), in_ZR = *(uint *)(param_1[1] + 0x18) == uVar1,
      uVar1 < *(uint *)(param_1[1] + 0x18))))) {
    func_0x00010b8c38cc(param_2,param_1 + 1);
    if (!(bool)in_ZR) {
      func_0x00010b8c3944();
      lVar2 = extraout_x8;
      if ((extraout_x8 != 0) && (*(long *)(extraout_x8 + 0x10) != 0)) {
        do {
          func_0x00010b8c390c();
          lVar2 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      *unaff_x19 = lVar2;
      func_0x000105276914();
    }
    return unaff_x19;
  }
  return param_1;
}



/* Entry: 10b8e5140; end: 10b8e5463;  */

void FUN_10b8e5140(long *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 **ppuVar4;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  long lVar5;
  code *extraout_x9;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined8 **ppuStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined1 uStack_168;
  undefined1 auStack_150 [32];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_100 [32];
  undefined8 *apuStack_e0 [4];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined8 *puStack_a0;
  undefined8 **ppuStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010b8e55d4();
  plVar9 = *(long **)(param_2 + 0x10);
  lVar6 = *plVar9;
  uStack_70 = extraout_x8;
  func_0x00010b8e56a8();
  ppuStack_190 = (undefined8 **)CONCAT44(ppuStack_190._4_4_,extraout_w8);
  FUN_10b8c41b4(lVar6 + 0x48,&ppuStack_190);
  func_0x00010b8e56dc();
  if ((bool)in_ZR) {
    lVar6 = param_1[1];
    FUN_10b99f5f8(&ppuStack_190,&UNK_10f7cbaec);
    FUN_10b99ff08(lVar6,&ppuStack_190);
    ppuVar4 = ppuStack_190;
    func_0x000104bda960();
    goto LAB_10b8e5434;
  }
  lVar5 = plVar9[1];
  if (lVar5 == 0) {
    ppuStack_190 = (undefined8 **)&UNK_10f7d0ef0;
    uStack_188 = 0;
  }
  else {
    ppuStack_190 = (undefined8 **)(lVar5 + 0x18);
    uStack_188 = (ulong)*(uint *)(lVar5 + 0xc);
  }
  func_0x00010b8e5778(*param_1);
  (*extraout_x9)(apuStack_e0);
  func_0x00010b8e5688();
  uVar3 = 0;
  if ((bool)in_ZR) {
    func_0x0001080e0180(auStack_100);
    if ((plVar9[2] == 0) || (*(long *)(plVar9[2] + 0x10) == 0)) {
      lVar5 = *param_1;
      ppuStack_190 = *(undefined8 ***)(lVar5 + 0x140);
      uStack_180 = *(undefined8 *)(lVar5 + 0x150);
      uStack_188 = *(ulong *)(lVar5 + 0x148);
      uStack_178 = uStack_178 & 0xffffffffffffff00;
      func_0x00010b8e57f8();
      func_0x0001080e0bc0(&ppuStack_190);
LAB_10b8e53a8:
      func_0x00010b8e5638();
      FUN_10b8dba18(&uStack_130);
      func_0x00010b8e5804();
      func_0x0001080e08ac(&lStack_170,apuStack_e0);
      func_0x0001080e08ac(auStack_150,auStack_100);
      puStack_a0 = (undefined8 *)*param_1;
      plStack_88 = (long *)param_1[1];
      uStack_90 = 3;
      ppuStack_98 = &ppuStack_190;
      func_0x00010b8e5754(&puStack_a0);
      func_0x00010b8e5728(auStack_c0,lVar6,6);
      func_0x00010b8e57d8();
      lVar6 = 0x40;
      do {
        func_0x0001080e0bc0((long)&ppuStack_190 + lVar6);
        lVar6 = lVar6 + -0x20;
        uVar3 = lVar6 == -0x20;
      } while (!(bool)uVar3);
      func_0x0001080e0bc0(&uStack_130);
    }
    else {
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      puStack_a0 = &uStack_130;
      ppuStack_98 = (undefined8 ***)0x0;
      uStack_90 = CONCAT71(uStack_90._1_7_,2);
      uStack_80 = 0;
      uStack_78 = 1;
      uStack_188 = 0;
      uStack_180 = CONCAT71(uStack_180._1_7_,4);
      uStack_178 = 0;
      lStack_170 = 2;
      uStack_168 = 0;
      ppuStack_190 = &puStack_a0;
      plStack_88 = plVar9 + 1;
      FUN_10b9a3a64(&puStack_1a8,&ppuStack_190);
      lVar7 = *(long *)(plVar9[2] + 0x10);
      plVar1 = (long *)*param_1;
      lVar5 = param_1[1];
      (**(code **)(*plVar1 + 0x88))(&uStack_130,plVar1,lVar7,lVar5);
      uVar3 = *(char *)(lVar5 + 8) == '\x01';
      if ((bool)uVar3) {
        lVar10 = 0x18;
        for (lVar8 = 0; uVar3 = lVar7 == lVar8, !(bool)uVar3; lVar8 = lVar8 + 1) {
          ppuStack_98 = &puStack_1a8;
          puStack_a0 = (undefined8 *)0x0;
          uStack_90 = uStack_90 & 0xffffffffffffff00;
          plStack_88 = (long *)0x0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_188 = 0;
          uStack_180 = CONCAT71(uStack_180._1_7_,5);
          uStack_178 = 0;
          uStack_168 = 0;
          ppuStack_190 = &puStack_a0;
          lStack_170 = lVar8;
          FUN_10b900bd0(auStack_c0,*param_1,plVar9[2] + lVar10,&ppuStack_190,param_1[1]);
          uVar3 = *(char *)(lVar5 + 8) == '\x01';
          if (!(bool)uVar3) {
LAB_10b8e536c:
            func_0x00010b8e575c();
            func_0x00010b8e57d8();
            goto LAB_10b8e537c;
          }
          (**(code **)(*plVar1 + 0x108))(plVar1,&uStack_128,lVar8,auStack_b8,lVar5);
          uVar3 = *(char *)(lVar5 + 8) == '\x01';
          if (!(bool)uVar3) goto LAB_10b8e536c;
          func_0x00010b8e57d8();
          lVar10 = lVar10 + 0x10;
        }
        func_0x00010b8e5804();
      }
      else {
        func_0x00010b8e575c();
      }
LAB_10b8e537c:
      func_0x0001080e0bc0(&uStack_130);
      func_0x00010b8e57f8();
      func_0x0001080e0bc0(&ppuStack_190);
      bVar2 = *(byte *)(param_1[1] + 8);
      FUN_10b9a3d64(auStack_1a0);
      if ((bVar2 & 1) != 0) goto LAB_10b8e53a8;
    }
    func_0x0001080e0bc0(auStack_100);
  }
  ppuVar4 = apuStack_e0;
  func_0x0001080e0bc0();
  in_ZR = uVar3;
LAB_10b8e5434:
  func_0x00010b8e55ac(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (ppuVar4[1] != (undefined8 *)0x0) {
    FUN_10b8e3f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e5464; end: 10b8e5483;  */

void FUN_10b8e5464(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b8e3f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b8e5484; end: 10b8e5487;  */

void FUN_10b8e5484(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b8e5488; end: 10b8e5503;  */

void FUN_10b8e5488(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar2;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 8);
  *param_1 = &PTR_FUN_110d72ec8;
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  uVar2 = 0;
  if (*plVar3 != 0) {
    do {
      func_0x00010b8e5744();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *puVar1 = uVar2;
  uVar2 = 0;
  if (plVar3[1] != 0) {
    do {
      func_0x00010b8e5708();
      uVar2 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  puVar1[1] = uVar2;
  uVar2 = 0;
  if (plVar3[2] != 0) {
    do {
      func_0x00010b8e5744();
      uVar2 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  puVar1[2] = uVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b8e5504; end: 10b8e552b;  */

long * FUN_10b8e5504(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    if (param_1[2] != 0) {
      func_0x000107c27b90();
    }
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 10b8e552c; end: 10b8e5553;  */

long FUN_10b8e552c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 10b8e5554; end: 10b8e586f;  */

/* WARNING: Possible PIC construction at 0x00010b8e0d9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b8e0da0) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0db8) */
/* WARNING: Removing unreachable block (ram,0x00010b8e0da4) */

void FUN_10b8e5554(long *param_1)

{
  long lVar1;
  long *plVar2;
  long alStack_40 [2];
  
  plVar2 = param_1 + 1;
  param_1 = (long *)*param_1;
  lVar1 = 8;
  func_0x00010b8e0dd0();
  if (param_1 != (long *)0x0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      alStack_40[0] = *plVar2;
      (**(code **)(*param_1 + 0x1d0))(param_1,alStack_40);
      plVar2 = plVar2 + 1;
    }
  }
  return;
}



/* Entry: 10b8e5870; end: 10b8e58fb;  */

long FUN_10b8e5870(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00010b8c3d48();
  ppuVar1 = &PTR___tlv_bootstrap_11340e110;
  (*(code *)PTR___tlv_bootstrap_11340e110)();
  *(undefined8 *)(param_1 + 8) = *ppuVar1;
  *(long *)(param_1 + 0x10) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x20) = 8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *ppuVar1 = (undefined *)(param_1 + 8);
  return param_1;
}



/* Entry: 10b8e58fc; end: 10b8e59ff;  */

undefined8 *
FUN_10b8e58fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  *param_1 = &PTR_FUN_110d72ef8;
  param_1[1] = 1;
  if ((bRam0000000113846798 & 1) == 0) {
    iVar1 = 0x13846798;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113846790,&UNK_10f7cbb6a);
      ___cxa_guard_release(0x113846798);
    }
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_70 = &uStack_a0;
  uStack_68 = 0;
  uStack_60 = 1;
  uStack_58 = 0x113846790;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b9a3a64(auStack_b8,&puStack_70);
  FUN_10b8e0de0(param_1 + 2,param_2,param_3,auStack_b8,param_4,0);
  FUN_10b9a3d64(auStack_b0);
  param_1[0xb] = 0;
  return param_1;
}



/* Entry: 10b8e5a00; end: 10b8e5a3f;  */

undefined8 * FUN_10b8e5a00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72ef8;
  func_0x000107c278f4(param_1 + 0xb);
  FUN_10b8e0f58(param_1 + 2);
  return param_1;
}



/* Entry: 10b8e5a40; end: 10b8e5a43;  */

undefined8 * FUN_10b8e5a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d72ef8;
  func_0x000107c278f4(param_1 + 0xb);
  FUN_10b8e0f58(param_1 + 2);
  return param_1;
}



/* Entry: 10b8e5a44; end: 10b8e5a57;  */

void FUN_10b8e5a44(void)

{
  FUN_10b8e5a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e5a58; end: 10b8e5b37;  */

void FUN_10b8e5a58(long *param_1,long *param_2,undefined1 *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_80;
  long alStack_78 [2];
  code *pcStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined8 uStack_38;
  
  puVar8 = &uStack_80;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2[0xb];
  if ((lVar10 == 0) || (plVar6 = param_2, *(int *)(lVar10 + 0xc) == 0)) {
    func_0x00010b8e1148(alStack_78,param_2 + 4);
    if (alStack_78[0] != 0) {
      uStack_80 = 0;
      pcStack_68 = FUN_10b8e5b38;
      ppuStack_60 = &PTR_FUN_110d72f50;
      plStack_58 = param_2;
      FUN_10b8e3408(alStack_78[0],&uStack_80,&pcStack_68);
      (*(code *)*ppuStack_60)(&ppuStack_60);
      func_0x000105276914(uStack_80);
      param_3 = (undefined1 *)puVar8;
    }
    plVar6 = alStack_78;
    func_0x00010b8e0a68();
    lVar10 = param_2[0xb];
    if (lVar10 != 0) goto LAB_10b8e5afc;
  }
  else {
LAB_10b8e5afc:
    piVar1 = (int *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar10;
  func_0x00010b8e5cd0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(param_3 + 0x10);
  lVar9 = *plVar6;
  lVar2 = plVar6[1];
  lVar10 = lVar12 + 0x10;
  FUN_10b8e129c(lVar10,lVar9,lVar2);
  uVar5 = *(char *)(lVar2 + 8) == '\x01';
  lStack_d8 = lVar10;
  lStack_d0 = lVar9;
  if (!(bool)uVar5) {
    func_0x00010b8e5cc0();
    *(undefined1 *)(lVar2 + 8) = 1;
    goto LAB_10b8e5c78;
  }
  func_0x0001080e07a8(auStack_f8,*plVar6,&lStack_d8);
  plVar7 = (long *)*plVar6;
  plVar11 = (long *)plVar7[4];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x10))(auStack_118,plVar11,auStack_f8);
    func_0x0001080df8d0(auStack_f8,auStack_118);
    func_0x0001080e0bc0(auStack_118);
    plVar7 = (long *)*plVar6;
  }
  puStack_128 = &DAT_10f3b067d;
  uStack_120 = 5;
  (**(code **)(*plVar7 + 0xd0))(auStack_118,plVar7,auStack_f0,&puStack_128,lVar2);
  uVar5 = *(char *)(lVar2 + 8) == '\x01';
  if ((bool)uVar5) {
    (**(code **)(*(long *)*plVar6 + 0x130))(&puStack_128,(long *)*plVar6,auStack_110,lVar2);
    func_0x000107c31060(lVar12 + 0x58,&puStack_128);
    func_0x000107c278f8(puStack_128);
    if ((*(byte *)(lVar2 + 8) & 1) == 0) goto LAB_10b8e5c4c;
  }
  else {
LAB_10b8e5c4c:
    func_0x00010b8e5cc0();
    *(undefined1 *)(lVar2 + 8) = 1;
  }
  func_0x0001080e0bc0(auStack_118);
  func_0x0001080e0bc0(auStack_f8);
LAB_10b8e5c78:
  func_0x00010b8e5cd0(uStack_c8);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8e5b38; end: 10b8e5c9f;  */

void FUN_10b8e5b38(long *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_2 + 0x10);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  lVar3 = lVar7 + 0x10;
  FUN_10b8e129c(lVar3,lVar5,lVar1);
  uVar2 = *(char *)(lVar1 + 8) == '\x01';
  lStack_58 = lVar3;
  lStack_50 = lVar5;
  if (!(bool)uVar2) {
    func_0x00010b8e5cc0();
    *(undefined1 *)(lVar1 + 8) = 1;
    goto LAB_10b8e5c78;
  }
  func_0x0001080e07a8(auStack_78,*param_1,&lStack_58);
  plVar4 = (long *)*param_1;
  plVar6 = (long *)plVar4[4];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x10))(auStack_98,plVar6,auStack_78);
    func_0x0001080df8d0(auStack_78,auStack_98);
    func_0x0001080e0bc0(auStack_98);
    plVar4 = (long *)*param_1;
  }
  puStack_a8 = &DAT_10f3b067d;
  uStack_a0 = 5;
  (**(code **)(*plVar4 + 0xd0))(auStack_98,plVar4,auStack_70,&puStack_a8,lVar1);
  uVar2 = *(char *)(lVar1 + 8) == '\x01';
  if ((bool)uVar2) {
    (**(code **)(*(long *)*param_1 + 0x130))(&puStack_a8,(long *)*param_1,auStack_90,lVar1);
    func_0x000107c31060(lVar7 + 0x58,&puStack_a8);
    func_0x000107c278f8(puStack_a8);
    if ((*(byte *)(lVar1 + 8) & 1) == 0) goto LAB_10b8e5c4c;
  }
  else {
LAB_10b8e5c4c:
    func_0x00010b8e5cc0();
    *(undefined1 *)(lVar1 + 8) = 1;
  }
  func_0x0001080e0bc0(auStack_98);
  func_0x0001080e0bc0(auStack_78);
LAB_10b8e5c78:
  func_0x00010b8e5cd0(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b8e5ca0; end: 10b8e5ce3;  */

void FUN_10b8e5ca0(void)

{
  return;
}



/* Entry: 10b8e5ce4; end: 10b8e61db;  */

undefined1  [16] FUN_10b8e5ce4(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b8e6108();
  uVar1 = param_2 == param_1[2];
  uStack_28 = extraout_x8;
  if (param_2 < (ulong)param_1[2]) {
    lVar2 = param_1[1] + param_2 * 0x20;
    uVar4 = *(undefined8 *)(lVar2 + 8);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *param_1;
    lStack_48 = *(long *)(lVar2 + 0x140);
    uVar5 = *(undefined8 *)(lVar2 + 0x150);
    uVar4 = *(undefined8 *)(lVar2 + 0x148);
    uStack_30 = 0;
    param_1 = &lStack_48;
    uStack_40 = uVar4;
    uStack_38 = uVar5;
    func_0x0001080e0bc0();
  }
  func_0x00010b8e60c0(uStack_28);
  if ((bool)uVar1) {
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
  ___stack_chk_fail();
  lVar2 = param_1[3];
  FUN_10b99ff08(lVar2);
  lVar3 = *param_1;
  *extraout_x8_00 = *(undefined8 *)(lVar3 + 0x140);
  uVar4 = *(undefined8 *)(lVar3 + 0x148);
  extraout_x8_00[2] = *(undefined8 *)(lVar3 + 0x150);
  extraout_x8_00[1] = uVar4;
  *(undefined1 *)(extraout_x8_00 + 3) = 0;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = lVar2;
  return auVar7;
}



/* Entry: 10b8e61dc; end: 10b8e62c3;  */

void FUN_10b8e61dc(long param_1)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  func_0x00010b8e9e84();
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  if (unaff_x20 == 0) {
    lVar1 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 8) == 0) {
      lVar1 = *(long *)(unaff_x20 + 0x10);
      if (lVar1 == 0) goto LAB_10b8e6284;
      do {
        func_0x00010b8e9c0c();
      } while (extraout_w10_00 != 0);
    }
    else {
      func_0x000107c278f0(&lStack_40);
      if (lStack_40 == 0) {
        unaff_x20 = 0;
        lVar1 = 0;
      }
      else {
        lVar1 = lStack_38;
        if (lStack_38 != 0) {
          do {
            func_0x00010b8e9c0c();
          } while (extraout_w10 != 0);
        }
      }
      func_0x000107c284e8(&lStack_40);
      if (lVar1 == 0) goto LAB_10b8e6284;
    }
    do {
      func_0x00010b8e9c0c();
    } while (extraout_w10_01 != 0);
  }
LAB_10b8e6284:
  FUN_10b8e8bdc(&stack0xffffffffffffffb0);
  lStack_38 = *(undefined8 *)(unaff_x19 + 0x68);
  lStack_40 = *(long *)(unaff_x19 + 0x60);
  *(long *)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x68) = lVar1;
  FUN_10b8e8a24(&lStack_40);
  FUN_10b8e8a24(&stack0xffffffffffffffb0);
  func_0x00010b8e9d9c();
  return;
}



/* Entry: 10b8e62c4; end: 10b8e635f;  */

void FUN_10b8e62c4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b8e6360; end: 10b8e6397;  */

void FUN_10b8e6360(void)

{
  func_0x00010b8e9d24();
  func_0x00010b8e8abc();
  return;
}



/* Entry: 10b8e6398; end: 10b8e6447;  */

void FUN_10b8e6398(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b8e6448; end: 10b8e6573;  */

void FUN_10b8e6448(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  code *pcVar1;
  code *pcVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  ulong uVar4;
  int extraout_w10;
  code *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  func_0x00010b8e9bb4();
  pcVar1 = param_1;
  uStack_38 = extraout_x8;
  if ((((((byte)param_1[0xe1] & 1) == 0) && (in_ZR = param_1[0xe0] == (code)0x1, (bool)in_ZR)) &&
      (*(long *)(param_1 + 0xc0) != 0)) &&
     (((*(long *)(param_1 + 0x88) != 0 &&
       (in_ZR = *(long *)(*(long *)(param_1 + 0x88) + 8) == -1, !(bool)in_ZR)) &&
      (((byte)param_1[0xd0] & 1) == 0)))) {
    FUN_10b8e62c4(&pcStack_68,param_1 + 0x70);
    pcVar1 = pcStack_68;
    pcStack_68 = (code *)0x0;
    ppuStack_60 = (undefined **)0x0;
    func_0x0001080d3308(&pcStack_68);
    if (pcVar1 != (code *)0x0) {
      uVar6 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 200) = uVar6;
      param_1[0xd0] = (code)0x1;
      FUN_10b8e8c30(param_1);
      func_0x0001080ea3b0(param_2);
      uStack_70 = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        do {
          func_0x00010b8e9c0c();
        } while (extraout_w10 != 0);
      }
      pcStack_68 = FUN_10b8e838c;
      ppuStack_60 = &PTR_FUN_110d73030;
      pcStack_58 = param_1;
      uStack_50 = uVar6;
      func_0x00010b8e9f08(pcVar1,&uStack_70,param_3,param_4,&pcStack_68);
      (*(code *)*ppuStack_60)(&ppuStack_60);
      func_0x000105276914(uStack_70);
      FUN_10b8e8a18(param_1);
    }
    func_0x00010b8e8bd0();
  }
  func_0x00010b8e9b84(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar7 = (long *)(*(long *)(pcVar1 + 8) + (*(ulong *)(pcVar1 + 0x20) >> 9) * 8);
    if (*(long *)(pcVar1 + 0x10) == *(long *)(pcVar1 + 8)) {
      pcVar5 = (code *)0x0;
    }
    else {
      pcVar5 = (code *)(*plVar7 + (*(ulong *)(pcVar1 + 0x20) & 0x1ff) * 8);
    }
    pcVar2 = pcVar1;
    FUN_10b8e8c00();
    do {
      pcVar8 = pcVar5 + -0x1000;
      do {
        if (pcVar5 == pcVar2) {
          *(undefined8 *)(pcVar1 + 0x28) = 0;
          puVar3 = *(undefined8 **)(pcVar1 + 8);
          while (uVar4 = *(long *)(pcVar1 + 0x10) - (long)puVar3 >> 3, 2 < uVar4) {
            __ZdlPv(*puVar3);
            puVar3 = (undefined8 *)(*(long *)(pcVar1 + 8) + 8);
            *(undefined8 **)(pcVar1 + 8) = puVar3;
          }
          if (uVar4 == 1) {
            uVar6 = 0x100;
          }
          else {
            if (uVar4 != 2) {
              return;
            }
            uVar6 = 0x200;
          }
          *(undefined8 *)(pcVar1 + 0x20) = uVar6;
          return;
        }
        func_0x00010b8e8dc8(pcVar5);
        pcVar5 = pcVar5 + 8;
        pcVar8 = pcVar8 + 8;
      } while ((code *)*plVar7 != pcVar8);
      plVar7 = plVar7 + 1;
      pcVar5 = (code *)*plVar7;
    } while( true );
  }
  return;
}



/* Entry: 10b8e6574; end: 10b8e665b;  */

void FUN_10b8e6574(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 9) * 8);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar6 + (*(ulong *)(param_1 + 0x20) & 0x1ff) * 8;
  }
  lVar1 = param_1;
  FUN_10b8e8c00();
  do {
    lVar7 = lVar5 + -0x1000;
    do {
      if (lVar5 == lVar1) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        puVar2 = *(undefined8 **)(param_1 + 8);
        while (uVar4 = *(long *)(param_1 + 0x10) - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          *(undefined8 **)(param_1 + 8) = puVar2;
        }
        if (uVar4 == 1) {
          uVar3 = 0x100;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          uVar3 = 0x200;
        }
        *(undefined8 *)(param_1 + 0x20) = uVar3;
        return;
      }
      func_0x00010b8e8dc8(lVar5);
      lVar5 = lVar5 + 8;
      lVar7 = lVar7 + 8;
    } while (*plVar6 != lVar7);
    plVar6 = plVar6 + 1;
    lVar5 = *plVar6;
  } while( true );
}



/* Entry: 10b8e665c; end: 10b8e699b;  */

undefined8 * FUN_10b8e665c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x00010b8e8bd0(uVar1);
  }
  return param_1;
}



/* Entry: 10b8e699c; end: 10b8e699f;  */

long FUN_10b8e699c(long param_1)

{
  func_0x00010b8e6730();
  FUN_10b8e552c(param_1 + 0x68);
  FUN_10b9a1f08(param_1 + 0x20);
  FUN_10b8e89f4(param_1 + 0x18);
  func_0x00010b8e9e90();
  return param_1;
}



/* Entry: 10b8e69a0; end: 10b8e69b3;  */

void FUN_10b8e69a0(void)

{
  func_0x00010b8e66f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b8e69b4; end: 10b8e69e3;  */

undefined1 FUN_10b8e69b4(long param_1)

{
  undefined1 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x20);
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  func_0x00010b8e9dd4();
  return uVar1;
}



/* Entry: 10b8e69e4; end: 10b8e69ff;  */

void FUN_10b8e69e4(void)

{
  func_0x00010b8e9d24();
  FUN_10b8e552c();
  return;
}



/* Entry: 10b8e6a00; end: 10b8e6bb7;  */

void FUN_10b8e6a00(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long extraout_x8;
  long lVar6;
  int extraout_w10;
  int extraout_w11;
  long *unaff_x19;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010b8e9e84();
  lVar7 = *param_2;
  lStack_68 = 0;
  if (lVar7 != 0) {
    func_0x00010b8c292c(&lStack_68,lVar7 + 8);
  }
  __ZNSt3__15mutex4lockEv(unaff_x19 + 4);
  if ((char)unaff_x19[0xf] == '\x01') {
    FUN_10b8e6bb8(unaff_x19 + 0xd);
    func_0x00010b8e9dd4();
    lVar8 = unaff_x19[3];
    lStack_48 = 0;
    __ZNSt3__15mutex4lockEv(lVar8 + 0x18);
    func_0x00010b8e6324(&plStack_58,lVar8 + 0x80);
    plVar4 = plStack_58;
    plStack_58 = (long *)0x0;
    uStack_50 = 0;
    func_0x00010b8e8ae0(&plStack_58);
    if ((((*(byte *)(lVar8 + 0xe1) & 1) == 0) && (plVar4 == unaff_x19)) &&
       (func_0x000107c27d74(&lStack_48,lVar8 + 0x90), lStack_68 != 0)) {
      lStack_60 = lStack_68;
      if (*(long *)(lStack_68 + 0x10) != 0) {
        do {
          func_0x00010b8e9da4();
          lStack_60 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      plVar5 = (long *)0x28;
      __Znwm();
      if (plVar4[2] != 0) {
        do {
          func_0x00010b8e9c0c();
        } while (extraout_w10 != 0);
      }
      func_0x00010b8c3ae8(plVar5,&lStack_60,&plStack_58);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      *plVar5 = (long)&PTR_FUN_110d730d0;
      plVar5[2] = (long)&PTR_FUN_110d73108;
      plVar1 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_58 = plVar5;
      func_0x000107c27d74(lVar8 + 0x90,&plStack_58);
      if (plStack_58 != (long *)0x0) {
        func_0x00010b8e9c00();
      }
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      func_0x000105276914(lStack_60);
    }
    FUN_10b8e8b28(plVar4);
    __ZNSt3__15mutex6unlockEv(lVar8 + 0x18);
    if (lStack_48 != 0) {
      func_0x00010b8e9c00();
    }
    if (lVar7 != 0) {
      func_0x00010b8e63d4(unaff_x19[3]);
    }
  }
  else {
    func_0x00010b8e9dd4();
  }
  func_0x000105276914(lStack_68);
  return;
}



/* Entry: 10b8e6bb8; end: 10b8e6c23;  */

void FUN_10b8e6bb8(void)

{
  func_0x00010b8e9db4();
  FUN_10b8e552c();
  return;
}



/* Entry: 10b8e6c24; end: 10b8e7a0b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b8e6c24(undefined8 param_1,char *****param_2,long *param_3,undefined ******param_4)

{
  char ***pppcVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  char *****pppppcVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  char *****pppppcVar8;
  long lVar9;
  undefined ******ppppppuVar10;
  char *****pppppcVar11;
  undefined ******ppppppuVar12;
  undefined *puVar13;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  char ****extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 *extraout_x8_04;
  ulong extraout_x8_05;
  undefined8 *extraout_x8_06;
  char *pcVar14;
  undefined ******ppppppuVar15;
  ulong extraout_x8_07;
  undefined8 *extraout_x8_08;
  long extraout_x9;
  long extraout_x9_00;
  long *plVar16;
  long extraout_x9_01;
  int extraout_w10;
  undefined ******ppppppuVar17;
  long *plVar18;
  int extraout_w11;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long *plVar19;
  char *****unaff_x19;
  char ****ppppcVar20;
  char *****pppppcVar21;
  char *unaff_x22;
  char *****pppppcVar22;
  undefined ******unaff_x24;
  undefined1 *unaff_x25;
  char *****pppppcVar23;
  char *****unaff_x26;
  char *****pppppcVar24;
  char *****unaff_x27;
  ulong unaff_x28;
  long alStack_360 [5];
  undefined1 auStack_338 [40];
  char *****pppppcStack_310;
  char *****pppppcStack_308;
  undefined ******ppppppuStack_300;
  char *****pppppcStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined ******ppppppuStack_2d8;
  undefined ******ppppppuStack_2d0;
  undefined8 *puStack_2c8;
  char *****pppppcStack_2c0;
  char *****pppppcStack_2b8;
  char *****pppppcStack_2b0;
  char *****pppppcStack_2a8;
  char *****pppppcStack_2a0;
  char *****pppppcStack_298;
  char *****pppppcStack_290;
  char *****pppppcStack_288;
  char *****pppppcStack_280;
  undefined8 *puStack_278;
  undefined ******ppppppuStack_268;
  char ****ppppcStack_260;
  undefined2 uStack_258;
  undefined ******ppppppuStack_250;
  char *****pppppcStack_248;
  char *****pppppcStack_240;
  long lStack_230;
  undefined ******ppppppuStack_228;
  long *plStack_220;
  ulong uStack_218;
  float fStack_210;
  undefined8 uStack_200;
  ulong uStack_1f0;
  char *****pppppcStack_1e8;
  char *****pppppcStack_1e0;
  undefined1 *puStack_1d8;
  undefined ******ppppppuStack_1d0;
  undefined ******ppppppuStack_1c8;
  char *****pppppcStack_1c0;
  char *****pppppcStack_1b8;
  long *plStack_1b0;
  char *****pppppcStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  undefined ******ppppppuStack_190;
  char ****ppppcStack_188;
  char ****ppppcStack_180;
  char *****pppppcStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [32];
  undefined *****pppppuStack_130;
  undefined8 uStack_128;
  undefined1 uStack_118;
  char ****ppppcStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined *****pppppuStack_e0;
  char *****pppppcStack_d8;
  undefined8 uStack_d0;
  char *****pppppcStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [8];
  undefined *****apppppuStack_88 [3];
  undefined8 uStack_70;
  
  pppppcVar21 = param_2;
  func_0x00010b8e9bb4();
  ppppppuVar12 = (undefined ******)((long)pppppcVar21[9] - (long)pppppcVar21[8] >> 3);
  ppppppuVar17 = (undefined ******)*param_3;
  pppppcVar21 = (char *****)param_3[1];
  uStack_70 = extraout_x8;
  (*(code *)(*ppppppuVar17)[0x11])(auStack_90);
  if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
    func_0x00010b8e9c38();
    func_0x00010b8e9f60();
    uStack_118 = 0;
    uStack_128 = param_1;
LAB_10b8e6eec:
    func_0x0001080e0bc0(auStack_90);
    func_0x00010b8e9dfc(param_3[1]);
    if ((bool)in_ZR) {
      unaff_x19 = &ppppcStack_110;
      func_0x0001080e08ac(&ppppcStack_110,&pppppuStack_130);
      pppppuStack_e0 = (undefined *****)*param_3;
      pppppcStack_c8 = (char *****)param_3[1];
      uStack_d0 = 1;
      pppppcStack_d8 = unaff_x19;
      func_0x0001080e01a8(&uStack_c0);
      pppppcVar21 = (char *****)&pppppuStack_e0;
      ppppppuVar12 = param_4;
      (**(code **)(*(long *)*param_3 + 0x110))(auStack_150);
      func_0x0001080e0bc0(auStack_150);
      func_0x0001080e0bc0(&ppppcStack_110);
    }
    ppppppuVar17 = &pppppuStack_130;
    func_0x0001080e0bc0();
    func_0x00010b8e9b84(uStack_70);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    unaff_x22 = (char *)param_2[8];
    unaff_x26 = (char *****)param_2[9];
    ppppppuStack_190 = param_4;
    if ((long)unaff_x26 - (long)unaff_x22 == 0) {
LAB_10b8e6cd4:
      unaff_x19 = (char *****)0x0;
      unaff_x25 = auStack_90;
      unaff_x27 = (char *****)&pppppuStack_e0;
      unaff_x24 = &pppppuStack_130;
      do {
        in_ZR = (char *****)unaff_x22 == unaff_x26;
        if ((bool)in_ZR) {
          ppppcStack_180 = (char ****)&PTR_FUN_110d73060;
          puStack_170 = &uStack_168;
          lVar9 = *param_3;
          ppppcStack_110 = (char ****)0x0;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          unaff_x22 = "data";
          unaff_x19 = &ppppcStack_188;
          pppppcStack_178 = param_2;
          func_0x000107c31088(&ppppcStack_188,"data");
          pppppuStack_e0 = &ppppcStack_110;
          pppppcStack_d8 = (char *****)0x0;
          uStack_d0 = CONCAT71(uStack_d0._1_7_,2);
          uStack_c0 = 0;
          uStack_b8 = 0;
          pppppcVar21 = &ppppcStack_180;
          pppppcStack_c8 = unaff_x19;
          FUN_10b900be0(auStack_b0,lVar9,param_2 + 3,pppppcVar21,&pppppuStack_e0,param_3[1]);
          func_0x000107c278f8(ppppcStack_188);
          ppppppuVar12 = (undefined ******)param_3[1];
          if (((ulong)ppppppuVar12[1] & 1) == 0) {
            func_0x00010b8e9c38();
            func_0x00010b8e9f60();
            func_0x00010b8e9f6c();
          }
          else {
            param_2 = (char *****)&pppppuStack_e0;
            (**(code **)(*(long *)*param_3 + 0x68))(&pppppuStack_e0);
            if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
LAB_10b8e6ec8:
              func_0x00010b8e9f78();
LAB_10b8e6ecc:
              func_0x00010b8e9f6c();
            }
            else {
              ppppcStack_110 = (char ****)0x10f284801;
              uStack_108 = 4;
              ppppppuVar12 = &pppppcStack_d8;
              pppppcVar21 = &ppppcStack_110;
              (**(code **)(*(long *)*param_3 + 0xf0))();
              if ((*(byte *)(param_3[1] + 8) & 1) == 0) goto LAB_10b8e6ec8;
              ppppcStack_110 = (char ****)&UNK_10f7cbcd9;
              uStack_108 = 5;
              ppppppuVar12 = &pppppcStack_d8;
              pppppcVar21 = &ppppcStack_110;
              (**(code **)(*(long *)*param_3 + 0xf0))();
              if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
                func_0x00010b8e9c38();
                func_0x00010b8e9f60();
                goto LAB_10b8e6ecc;
              }
              ppppppuVar12 = &pppppuStack_e0;
              func_0x0001080e08ac(&pppppuStack_130);
            }
            func_0x0001080e0bc0(&pppppuStack_e0);
          }
          func_0x0001080e0bc0(auStack_b0);
          break;
        }
        ppppppuVar12 = (undefined ******)*param_3;
        pppppcVar21 = (char *****)param_3[1];
        FUN_10b8e7b54(&pppppuStack_e0,ppppppuVar12,pppppcVar21,unaff_x22);
        if ((*(byte *)(param_3[1] + 8) & 1) == 0) {
          unaff_x28 = 0;
          func_0x00010b8e9f78();
          func_0x00010b8e9f6c();
        }
        else {
          pppppcVar11 = (char *****)((long)unaff_x19 + 1);
          ppppppuVar12 = apppppuStack_88;
          (**(code **)(*(long *)*param_3 + 0x108))();
          bVar2 = (*(byte *)(param_3[1] + 8) & 1) == 0;
          if (bVar2) {
            func_0x00010b8e9c38();
            func_0x00010b8e9f60();
            func_0x00010b8e9f6c();
          }
          else {
            ppppppuVar12 = &pppppuStack_e0;
            func_0x0001080e284c(&uStack_168);
          }
          unaff_x28 = (ulong)!bVar2;
          pppppcVar21 = unaff_x19;
          unaff_x19 = pppppcVar11;
        }
        func_0x0001080e0bc0(&pppppuStack_e0);
        unaff_x22 = (char *)((long)unaff_x22 + 8);
      } while ((int)unaff_x28 != 0);
      func_0x0001080e419c(&uStack_168);
      param_4 = ppppppuStack_190;
      goto LAB_10b8e6eec;
    }
    ppppppuVar12 = (undefined ******)((long)unaff_x26 - (long)unaff_x22 >> 3);
    if ((ulong)ppppppuVar12 >> 0x3b == 0) {
      func_0x0001080e4014(&pppppuStack_e0,ppppppuVar12,0,&uStack_158);
      func_0x0001080e3f94(&uStack_168,&pppppuStack_e0);
      func_0x0001080e4134(&pppppuStack_e0);
      unaff_x22 = (char *)param_2[8];
      unaff_x26 = (char *****)param_2[9];
      goto LAB_10b8e6cd4;
    }
  }
  func_0x0001080e4008();
  uStack_198 = 0x10b8e6fa0;
  puStack_2c8 = extraout_x8_00;
  uStack_1f0 = unaff_x28;
  pppppcStack_1e8 = unaff_x27;
  pppppcStack_1e0 = unaff_x26;
  puStack_1d8 = unaff_x25;
  ppppppuStack_1d0 = unaff_x24;
  ppppppuStack_1c8 = param_4;
  pppppcStack_1c0 = (char *****)unaff_x22;
  pppppcStack_1b8 = param_2;
  plStack_1b0 = param_3;
  pppppcStack_1a8 = unaff_x19;
  puStack_1a0 = &stack0xfffffffffffffff0;
  func_0x00010b8e9bb4();
  pppppcStack_2a8 = (char *****)0x0;
  pppppcStack_2a0 = (char *****)0x0;
  pppppcStack_298 = (char *****)0x0;
  uStack_200 = extraout_x8_01;
  if (*(char *)(ppppppuVar12 + 1) == '\t') {
    unaff_x19 = *ppppppuVar12;
    ppppppuStack_2d0 = &pppppcStack_298;
    if (unaff_x19[2] != (char ****)0x0) {
      pppppcVar11 = unaff_x19;
      if ((ulong)unaff_x19[2] >> 0x3d != 0) goto LAB_10b8e7a04;
      ppppppuStack_268 = ppppppuStack_2d0;
      FUN_10b8e85d4();
      func_0x00010b8e9e20();
      func_0x00010b8e9ee4();
      func_0x00010b8e85fc(&pppppcStack_288);
    }
    ppppppuStack_228 = (undefined ******)0x0;
    lStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    fStack_210 = 1.0;
    unaff_x22 = (char *)(unaff_x19 + 3);
    pppppcVar24 = (char *****)((long)unaff_x22 + (long)unaff_x19[2] * 2 * 8);
    ppppppuStack_2d8 = ppppppuVar17;
    do {
      if ((char *****)unaff_x22 == pppppcVar24) {
        FUN_10b8e8df8(&lStack_230);
        unaff_x22 = (char *)pppppcStack_2a0;
        pppppcVar11 = pppppcStack_2a8;
        func_0x00010b8e9f8c();
        lVar9 = (long)unaff_x22 - (long)pppppcVar11;
        if (lVar9 == 0) goto LAB_10b8e6ffc;
        if ((ulong)(lVar9 >> 3) >> 0x3d != 0) goto LAB_10b8e79f8;
        ppppppuStack_268 = ppppppuVar17;
        FUN_10b8e8684();
        func_0x00010b8e9e20();
        func_0x00010b8e9efc();
        func_0x00010b8e86ac(&pppppcStack_288);
        unaff_x22 = (char *)pppppcStack_2a0;
        pppppcVar11 = pppppcStack_2a8;
        goto LAB_10b8e6ffc;
      }
      uVar7 = *(char *)((long)unaff_x22 + 8) == '\x0f';
      if (!(bool)uVar7) {
        func_0x00010b8e9ea0();
        func_0x00010b8e9c1c();
        goto LAB_10b8e7994;
      }
      FUN_10b9a94ec(&pppppcStack_288,unaff_x22);
      pppppcVar11 = pppppcStack_288;
      if (pppppcStack_288 == (char *****)0x0) {
        pppppcVar23 = (char *****)0x0;
      }
      else {
        pppppcVar23 = pppppcStack_288;
        ___dynamic_cast(pppppcStack_288,&PTR_DAT_110d7ebe8,&PTR_DAT_110d72fe0,0);
        if ((pppppcVar23 != (char *****)0x0) &&
           (pppppcVar8 = pppppcVar23, FUN_10b9a5818(), pppppcVar11 = pppppcStack_288,
           (int)pppppcVar8 == 0)) goto LAB_10b8e7a00;
      }
      func_0x000104bddf04(pppppcVar11);
      if (pppppcVar23 == (char *****)0x0) {
LAB_10b8e7984:
        func_0x00010b8e9ea0();
        func_0x00010b8e9c1c();
        FUN_10b8e8b28(pppppcVar23);
        goto LAB_10b8e7994;
      }
      ppppppuVar12 = &pppppcStack_288;
      pppppcStack_288 = pppppcVar23;
      func_0x000107c2852c(ppppppuVar12,8);
      ppppppuVar10 = ppppppuStack_228;
      if (ppppppuStack_228 != (undefined ******)0x0) {
        pcVar14 = (char *)((long)ppppppuStack_228 + -1);
        if (((ulong)ppppppuStack_228 & (ulong)pcVar14) == 0) {
          unaff_x24 = (undefined ******)((ulong)pcVar14 & (ulong)ppppppuVar12);
        }
        else {
          unaff_x24 = ppppppuVar12;
          if (ppppppuStack_228 <= ppppppuVar12) {
            uVar5 = 0;
            if (ppppppuStack_228 != (undefined ******)0x0) {
              uVar5 = (ulong)ppppppuVar12 / (ulong)ppppppuStack_228;
            }
            unaff_x24 = (undefined ******)((long)ppppppuVar12 - uVar5 * (long)ppppppuStack_228);
          }
        }
        plVar16 = *(long **)(lStack_230 + (long)unaff_x24 * 8);
        if (plVar16 != (long *)0x0) {
          do {
            while( true ) {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_10b8e73f4;
              ppppppuVar17 = (undefined ******)plVar16[1];
              if (ppppppuVar17 != ppppppuVar12) break;
              if ((char *****)plVar16[2] == pppppcVar23) {
                uVar7 = 1;
                ppppppuVar17 = ppppppuStack_228;
                goto LAB_10b8e7984;
              }
            }
            if (((ulong)ppppppuStack_228 & (ulong)pcVar14) == 0) {
              ppppppuVar17 = (undefined ******)((ulong)ppppppuVar17 & (ulong)pcVar14);
            }
            else if (ppppppuStack_228 <= ppppppuVar17) {
              uVar5 = 0;
              if (ppppppuStack_228 != (undefined ******)0x0) {
                uVar5 = (ulong)ppppppuVar17 / (ulong)ppppppuStack_228;
              }
              ppppppuVar17 = (undefined ******)((long)ppppppuVar17 - uVar5 * (long)ppppppuStack_228)
              ;
            }
          } while (ppppppuVar17 == unaff_x24);
        }
      }
LAB_10b8e73f4:
      plVar16 = (long *)0x18;
      __Znwm();
      *plVar16 = 0;
      plVar16[1] = (long)ppppppuVar12;
      plVar16[2] = (long)pppppcVar23;
      if ((ppppppuVar10 == (undefined ******)0x0) ||
         (fStack_210 * (float)ppppppuVar10 < (float)(uStack_218 + 1))) {
        uVar5 = 1;
        if ((undefined ******)0x2 < ppppppuVar10) {
          uVar5 = (ulong)(((ulong)ppppppuVar10 & (ulong)((long)ppppppuVar10 + -1)) != 0);
        }
        ppppppuVar15 = (undefined ******)(uVar5 | (long)ppppppuVar10 << 1);
        ppppppuVar17 = (undefined ******)(long)((float)(uStack_218 + 1) / fStack_210);
        if (ppppppuVar15 <= ppppppuVar17) {
          ppppppuVar15 = ppppppuVar17;
        }
        ppppppuVar17 = ppppppuVar10;
        if ((char *)((long)ppppppuVar15 + -1) == (char *)0x0) {
          ppppppuVar15 = (undefined ******)0x2;
        }
        else if (((ulong)ppppppuVar15 & (ulong)((long)ppppppuVar15 + -1)) != 0) {
          __ZNSt3__112__next_primeEm();
          ppppppuVar17 = ppppppuStack_228;
        }
        ppppppuVar10 = ppppppuVar15;
        if (ppppppuVar17 < ppppppuVar15) {
LAB_10b8e748c:
          if ((ulong)ppppppuVar10 >> 0x3d != 0) goto LAB_10b8e7a08;
          lVar9 = (long)ppppppuVar10 << 3;
          __Znwm(lVar9);
          FUN_10b8e8e3c(&lStack_230,lVar9);
          for (ppppppuVar17 = (undefined ******)0x0; ppppppuVar10 != ppppppuVar17;
              ppppppuVar17 = (undefined ******)((long)ppppppuVar17 + 1)) {
            *(undefined8 *)(lStack_230 + (long)ppppppuVar17 * 8) = 0;
          }
          ppppppuStack_228 = ppppppuVar10;
          if (plStack_220 != (long *)0x0) {
            ppppppuVar17 = (undefined ******)plStack_220[1];
            pcVar14 = (char *)((long)ppppppuVar10 + -1);
            uVar5 = 0;
            if (ppppppuVar10 != (undefined ******)0x0) {
              uVar5 = (ulong)ppppppuVar17 / (ulong)ppppppuVar10;
            }
            ppppppuVar15 = ppppppuVar17;
            if (ppppppuVar10 <= ppppppuVar17) {
              ppppppuVar15 = (undefined ******)((long)ppppppuVar17 - uVar5 * (long)ppppppuVar10);
            }
            if (((ulong)ppppppuVar10 & (ulong)pcVar14) == 0) {
              ppppppuVar15 = (undefined ******)((ulong)ppppppuVar17 & (ulong)pcVar14);
            }
            *(long ***)(lStack_230 + (long)ppppppuVar15 * 8) = &plStack_220;
            plVar19 = plStack_220;
            while (plVar18 = plVar19, plVar19 = (long *)*plVar18, plVar19 != (long *)0x0) {
              ppppppuVar17 = (undefined ******)plVar19[1];
              if (((ulong)ppppppuVar10 & (ulong)pcVar14) == 0) {
                ppppppuVar17 = (undefined ******)((ulong)ppppppuVar17 & (ulong)pcVar14);
              }
              else if (ppppppuVar10 <= ppppppuVar17) {
                uVar5 = 0;
                if (ppppppuVar10 != (undefined ******)0x0) {
                  uVar5 = (ulong)ppppppuVar17 / (ulong)ppppppuVar10;
                }
                ppppppuVar17 = (undefined ******)((long)ppppppuVar17 - uVar5 * (long)ppppppuVar10);
              }
              if (ppppppuVar17 != ppppppuVar15) {
                if (*(long *)(lStack_230 + (long)ppppppuVar17 * 8) == 0) {
                  *(long **)(lStack_230 + (long)ppppppuVar17 * 8) = plVar18;
                  ppppppuVar15 = ppppppuVar17;
                }
                else {
                  *plVar18 = *plVar19;
                  *plVar19 = **(long **)(lStack_230 + (long)ppppppuVar17 * 8);
                  **(undefined8 **)(lStack_230 + (long)ppppppuVar17 * 8) = plVar19;
                  plVar19 = plVar18;
                }
              }
            }
          }
        }
        else {
          ppppppuVar10 = ppppppuVar17;
          if (ppppppuVar15 < ppppppuVar17) {
            ppppppuVar10 = (undefined ******)(long)((float)uStack_218 / fStack_210);
            if ((ppppppuVar17 < (undefined ******)0x3) ||
               (((ulong)ppppppuVar17 & (ulong)((long)ppppppuVar17 + -1)) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else if ((undefined ******)0x1 < ppppppuVar10) {
              ppppppuVar10 = (undefined ******)
                             (1L << (-LZCOUNT((char *)((long)ppppppuVar10 + -1)) & 0x3fU));
            }
            if (ppppppuVar15 <= ppppppuVar10) {
              ppppppuVar15 = ppppppuVar10;
            }
            ppppppuVar10 = ppppppuStack_228;
            if (ppppppuVar15 < ppppppuVar17) {
              ppppppuVar10 = ppppppuVar15;
              if (ppppppuVar15 != (undefined ******)0x0) goto LAB_10b8e748c;
              FUN_10b8e8e3c(&lStack_230,0);
              ppppppuStack_228 = (undefined ******)0x0;
              ppppppuVar10 = (undefined ******)0x0;
            }
          }
        }
        if (((ulong)ppppppuVar10 & (ulong)((long)ppppppuVar10 + -1)) == 0) {
          unaff_x24 = (undefined ******)((ulong)((long)ppppppuVar10 + -1) & (ulong)ppppppuVar12);
        }
        else {
          unaff_x24 = ppppppuVar12;
          if (ppppppuVar10 <= ppppppuVar12) {
            uVar5 = 0;
            if (ppppppuVar10 != (undefined ******)0x0) {
              uVar5 = (ulong)ppppppuVar12 / (ulong)ppppppuVar10;
            }
            unaff_x24 = (undefined ******)((long)ppppppuVar12 - uVar5 * (long)ppppppuVar10);
          }
        }
      }
      plVar19 = *(long **)(lStack_230 + (long)unaff_x24 * 8);
      if (plVar19 == (long *)0x0) {
        *plVar16 = (long)plStack_220;
        *(long ***)(lStack_230 + (long)unaff_x24 * 8) = &plStack_220;
        plStack_220 = plVar16;
        if (*plVar16 != 0) {
          ppppppuVar12 = *(undefined *******)(*plVar16 + 8);
          if (((ulong)ppppppuVar10 & (ulong)((long)ppppppuVar10 + -1)) == 0) {
            ppppppuVar12 = (undefined ******)
                           ((ulong)ppppppuVar12 & (ulong)((long)ppppppuVar10 + -1));
          }
          else if (ppppppuVar10 <= ppppppuVar12) {
            uVar5 = 0;
            if (ppppppuVar10 != (undefined ******)0x0) {
              uVar5 = (ulong)ppppppuVar12 / (ulong)ppppppuVar10;
            }
            ppppppuVar12 = (undefined ******)((long)ppppppuVar12 - uVar5 * (long)ppppppuVar10);
          }
          *(long **)(lStack_230 + (long)ppppppuVar12 * 8) = plVar16;
        }
      }
      else {
        *plVar16 = *plVar19;
        *plVar19 = (long)plVar16;
      }
      uStack_218 = uStack_218 + 1;
      pppppcVar11 = pppppcVar23 + 4;
      __ZNSt3__15mutex4lockEv(pppppcVar11);
      if (((ulong)pppppcVar23[0xf] & 1) == 0) {
        puVar13 = &UNK_10f7cbb70;
LAB_10b8e76f8:
        FUN_10b99f5f8(&pppppcStack_288,puVar13);
        ppppppuStack_250 = (undefined ******)0x2;
        pppppcStack_248 = pppppcStack_288;
      }
      else {
        if (pppppcVar21 == pppppcVar23) {
          puVar13 = &UNK_10f7cbbb7;
          goto LAB_10b8e76f8;
        }
        __ZNSt3__15mutex6unlockEv(pppppcVar11);
        unaff_x19 = (char *****)pppppcVar23[3];
        pppppcVar11 = unaff_x19 + 3;
        __ZNSt3__15mutex4lockEv(pppppcVar11);
        func_0x00010b8e9ddc(&pppppcStack_288);
        if (((*(byte *)((long)unaff_x19 + 0xe1) & 1) == 0) && (pppppcStack_288 == pppppcVar23)) {
          ppppppuStack_250 = (undefined ******)0x1;
        }
        else {
          func_0x00010b8e9d18(&pppppcStack_2c0);
          pppppcStack_248 = pppppcStack_2c0;
          ppppppuStack_250 = (undefined ******)0x2;
        }
        func_0x00010b8e9ea8();
      }
      __ZNSt3__15mutex6unlockEv(pppppcVar11);
      ppppppuVar17 = ppppppuStack_250;
      pppppcVar11 = pppppcStack_2a0;
      if (ppppppuStack_250 == (undefined ******)0x1) {
        if (pppppcStack_2a0 < pppppcStack_298) {
          unaff_x19 = pppppcStack_2a0 + 1;
          *pppppcStack_2a0 = (char ****)pppppcVar23;
        }
        else {
          func_0x00010b8e9d68();
          if (extraout_x11_01 != 0) goto LAB_10b8e7a04;
          func_0x00010b8e9d40();
          lVar9 = extraout_x9_01;
          if (0x7ffffffffffffff7 < extraout_x8_07) {
            lVar9 = 0x1fffffffffffffff;
          }
          ppppppuStack_268 = ppppppuStack_2d0;
          if (lVar9 != 0) {
            FUN_10b8e85d4();
          }
          func_0x00010b8e9d54();
          puStack_278 = extraout_x8_08 + 1;
          *extraout_x8_08 = pppppcVar23;
          func_0x00010b8e9ee4();
          unaff_x19 = pppppcStack_2a0;
          func_0x00010b8e85fc(&pppppcStack_288);
        }
        pppppcVar23 = (char *****)0x0;
        pppppcStack_2a0 = unaff_x19;
      }
      else {
        *puStack_2c8 = 2;
        puStack_2c8[1] = pppppcStack_248;
        pppppcStack_248 = (char *****)0x0;
      }
      func_0x0001080c6234(&ppppppuStack_250);
      FUN_10b8e8b28(pppppcVar23);
      unaff_x22 = (char *)((long)unaff_x22 + 0x10);
    } while (ppppppuVar17 == (undefined ******)0x1);
    uVar7 = 0;
LAB_10b8e7994:
    FUN_10b8e8df8(&lStack_230);
LAB_10b8e799c:
    unaff_x19 = pppppcStack_2a8;
    pppppcVar11 = pppppcStack_2a0;
    if (pppppcStack_2a8 != (char *****)0x0) {
      while (uVar7 = pppppcVar11 == unaff_x19, !(bool)uVar7) {
        pppppcVar11 = pppppcVar11 + -1;
        func_0x00010b8e8b04();
      }
      pppppcStack_2a0 = unaff_x19;
      __ZdlPv(pppppcStack_2a8);
    }
    func_0x00010b8e9b84(uStack_200);
    if ((bool)uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(char *)(ppppppuVar12 + 1) == '\x01';
    pppppcVar21 = param_2;
    if (!(bool)uVar7) {
      func_0x00010b8e9ea0();
      func_0x00010b8e9c1c();
      goto LAB_10b8e799c;
    }
    ppppppuStack_2d8 = ppppppuVar17;
    func_0x00010b8e9f8c();
    unaff_x22 = (char *)(char *****)0x0;
    pppppcVar11 = (char *****)0x0;
LAB_10b8e6ffc:
    pppppcStack_2c0 = (char *****)0x0;
    pppppcStack_2b8 = (char *****)0x0;
    pppppcStack_2b0 = (char *****)0x0;
    if ((long)unaff_x22 - (long)pppppcVar11 == 0) {
LAB_10b8e7044:
      for (; uVar7 = pppppcVar11 == (char *****)unaff_x22, !(bool)uVar7;
          pppppcVar11 = pppppcVar11 + 1) {
        pppppcVar24 = (char *****)*pppppcVar11;
        __ZNSt3__15mutex4lockEv(pppppcVar24 + 4);
        bVar3 = *(byte *)(pppppcVar24 + 0xf);
        if ((bVar3 & 1) == 0) {
          func_0x00010b8e9d18(&pppppcStack_288);
          pppppcVar21 = (char *****)0x2;
          pppppcVar23 = pppppcStack_288;
        }
        else {
          *(char *)(pppppcVar24 + 0xf) = '\0';
          FUN_10b8e69e4(pppppcVar24 + 0xd);
          pppppcVar21 = (char *****)0x1;
          pppppcVar23 = (char *****)0x0;
        }
        __ZNSt3__15mutex6unlockEv(pppppcVar24 + 4);
        if (bVar3 != 0) {
          ppppcVar20 = pppppcVar24[3];
          ppppcStack_260 = (char ****)0x0;
          __ZNSt3__15mutex4lockEv(ppppcVar20 + 3);
          func_0x00010b8e9ddc(&pppppcStack_288);
          if (((*(byte *)((long)ppppcVar20 + 0xe1) & 1) == 0) && (pppppcStack_288 == pppppcVar24)) {
            ppppcVar20[0x1b] = (char ***)((long)ppppcVar20[0x1b] + 1);
            if (*(char *)(ppppcVar20 + 0x1a) == '\x01') {
              *(undefined1 *)(ppppcVar20 + 0x1a) = 0;
            }
            *(undefined1 *)(ppppcVar20 + 0x1c) = 0;
            FUN_10b8e6360(ppppcVar20 + 0x10);
            func_0x000107c27d74(&ppppcStack_260,ppppcVar20 + 0x12);
            func_0x00010b8e637c(ppppcVar20 + 0xe);
            func_0x00010b8e9ea8();
            func_0x00010b8e9d9c();
            lStack_230 = 1;
            if (ppppcStack_260 != (char ****)0x0) {
              func_0x00010b8e9c00();
            }
            pppppcVar23 = (char *****)pppppcVar24[3];
            if ((pppppcVar23 != (char *****)0x0) && (pppppcVar23[2] != (char ****)0x0)) {
              do {
                func_0x00010b8e9c0c();
              } while (extraout_w10 != 0);
            }
            pppppcVar21 = (char *****)0x1;
          }
          else {
            func_0x00010b8e9d18(&pppppcStack_290);
            pppppcVar23 = pppppcStack_290;
            lStack_230 = 2;
            func_0x00010b8e9ea8();
            func_0x00010b8e9d9c();
            ppppppuStack_228 = (undefined ******)0x0;
            pppppcVar21 = (char *****)0x2;
          }
          func_0x0001080c6234(&lStack_230);
        }
        unaff_x19 = pppppcStack_248;
        uVar7 = pppppcVar21 == (char *****)0x1;
        if (!(bool)uVar7) {
          *puStack_2c8 = 2;
          puStack_2c8[1] = pppppcVar23;
          func_0x000104bda960(0);
          goto LAB_10b8e7904;
        }
        if (pppppcStack_248 < pppppcStack_240) {
          ppppcVar20 = *pppppcVar11;
          if ((ppppcVar20 != (char ****)0x0) && (ppppcVar20[2] != (char ***)0x0)) {
            do {
              func_0x00010b8e9da4();
              ppppcVar20 = extraout_x8_02;
            } while (extraout_w11 != 0);
          }
          pppppcVar24 = unaff_x19 + 1;
          *unaff_x19 = ppppcVar20;
        }
        else {
          func_0x00010b8e9d68();
          if (extraout_x11 != 0) goto LAB_10b8e79f8;
          func_0x00010b8e9d40();
          lVar9 = extraout_x9;
          if (0x7ffffffffffffff7 < extraout_x8_03) {
            lVar9 = 0x1fffffffffffffff;
          }
          ppppppuStack_268 = ppppppuVar17;
          if (lVar9 != 0) {
            FUN_10b8e8684();
          }
          func_0x00010b8e9d54();
          ppppcVar20 = *pppppcVar11;
          if ((ppppcVar20 != (char ****)0x0) && (ppppcVar20[2] != (char ***)0x0)) {
            pppcVar1 = ppppcVar20[2] + 1;
            do {
              cVar4 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppcVar1,0x10);
              if (bVar2) {
                *pppcVar1 = (char **)((long)*pppcVar1 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puStack_278 = extraout_x8_04 + 1;
          *extraout_x8_04 = ppppcVar20;
          func_0x00010b8e9efc();
          pppppcVar24 = pppppcStack_248;
          func_0x00010b8e86ac(&pppppcStack_288);
        }
        unaff_x19 = pppppcStack_2b8;
        pppppcStack_248 = pppppcVar24;
        if (pppppcStack_2b8 < pppppcStack_2b0) {
          pppppcVar21 = pppppcStack_2b8 + 1;
          *pppppcStack_2b8 = (char ****)pppppcVar23;
        }
        else {
          func_0x00010b8e9d68();
          if (extraout_x11_00 != 0) goto LAB_10b8e79f4;
          func_0x00010b8e9d40();
          lVar9 = extraout_x9_00;
          if (0x7ffffffffffffff7 < extraout_x8_05) {
            lVar9 = 0x1fffffffffffffff;
          }
          ppppppuStack_268 = &pppppcStack_2b0;
          if (lVar9 != 0) {
            FUN_10b8e8734();
          }
          func_0x00010b8e9d54();
          puStack_278 = extraout_x8_06 + 1;
          *extraout_x8_06 = pppppcVar23;
          func_0x00010b8e9ef0();
          pppppcVar21 = pppppcStack_2b8;
          func_0x00010b8e875c(&pppppcStack_288);
        }
        pppppcStack_2b8 = pppppcVar21;
        FUN_10b8e8a18(0);
      }
      pppppcVar21 = (char *****)0x70;
      __Znwm();
      pppppcVar22 = pppppcVar21 + 1;
      *pppppcVar22 = (char ****)0x0;
      pppppcVar21[2] = (char ****)0x0;
      *pppppcVar21 = (char ****)&PTR_DAT_110d73148;
      FUN_10b9a8f04(&ppppcStack_260,ppppppuStack_2d8);
      pppppcVar6 = pppppcStack_240;
      pppppcVar8 = pppppcStack_248;
      ppppppuVar12 = ppppppuStack_250;
      pppppcVar23 = pppppcStack_2b0;
      pppppcVar24 = pppppcStack_2b8;
      pppppcVar11 = pppppcStack_2c0;
      unaff_x22 = (char *)(pppppcVar21 + 3);
      *(undefined ***)unaff_x22 = &PTR_FUN_110d72f80;
      ppppppuVar17 = (undefined ******)(pppppcVar21 + 4);
      *ppppppuVar17 = (undefined *****)0x0;
      pppppcStack_248 = (char *****)0x0;
      pppppcStack_240 = (char *****)0x0;
      ppppppuStack_250 = (undefined ******)0x0;
      pppppcStack_2b8 = (char *****)0x0;
      pppppcStack_2b0 = (char *****)0x0;
      pppppcStack_2c0 = (char *****)0x0;
      pppppcVar21[5] = (char ****)0x0;
      pppppcVar21[6] = ppppcStack_260;
      *(undefined2 *)(pppppcVar21 + 7) = uStack_258;
      ppppcStack_260 = (char ****)0x0;
      uStack_258 = 0;
      pppppcVar21[9] = (char ****)pppppcVar8;
      pppppcVar21[8] = (char ****)ppppppuVar12;
      pppppcVar21[10] = (char ****)pppppcVar6;
      pppppcStack_288 = (undefined *****)0x0;
      pppppcStack_280 = (char *****)0x0;
      puStack_278 = (undefined8 *)0x0;
      pppppcVar21[0xc] = (char ****)pppppcVar24;
      pppppcVar21[0xb] = (char ****)pppppcVar11;
      pppppcVar21[0xd] = (char ****)pppppcVar23;
      lStack_230 = 0;
      ppppppuStack_228 = (undefined ******)0x0;
      plStack_220 = (long *)0x0;
      func_0x00010b8e87a4(&lStack_230);
      func_0x00010b8e87e4(&pppppcStack_288);
      FUN_10b9a8d98(&ppppcStack_260);
      do {
        cVar4 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppppcVar22,0x10);
        if (bVar2) {
          *pppppcVar22 = (char ****)((long)*pppppcVar22 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      pppppcStack_288 = (char *****)unaff_x22;
      pppppcStack_280 = pppppcVar21;
      func_0x000107c278e4(ppppppuVar17,&pppppcStack_288);
      func_0x000107c284e8(&pppppcStack_288);
      *puStack_2c8 = 1;
      puStack_2c8[1] = unaff_x22;
      FUN_10b8e8dec(0);
LAB_10b8e7904:
      func_0x00010b8e87a4(&pppppcStack_2c0);
      func_0x00010b8e87e4(&ppppppuStack_250);
      goto LAB_10b8e799c;
    }
    if ((ulong)((long)unaff_x22 - (long)pppppcVar11 >> 3) >> 0x3d == 0) {
      ppppppuStack_268 = &pppppcStack_2b0;
      FUN_10b8e8734();
      func_0x00010b8e9e20();
      func_0x00010b8e9ef0();
      func_0x00010b8e875c(&pppppcStack_288);
      pppppcVar11 = pppppcStack_2a8;
      unaff_x22 = (char *)pppppcStack_2a0;
      goto LAB_10b8e7044;
    }
LAB_10b8e79f4:
    func_0x00010bdb3f24();
LAB_10b8e79f8:
    func_0x00010bdb3f18();
  }
  ___stack_chk_fail();
LAB_10b8e7a00:
  FUN_10b9a5890();
  pppppcVar11 = unaff_x19;
LAB_10b8e7a04:
  func_0x00010bdb3f0c();
  unaff_x19 = pppppcVar11;
LAB_10b8e7a08:
  func_0x000104bfe188();
  plVar16 = alStack_360;
  pcStack_2e8 = FUN_10b8e7a0c;
  pppppcStack_310 = (char *****)unaff_x22;
  pppppcStack_308 = pppppcVar21;
  ppppppuStack_300 = ppppppuVar17;
  pppppcStack_2f8 = unaff_x19;
  ppuStack_2f0 = &puStack_1a0;
  FUN_10b8e8e84(alStack_360,&UNK_10f7cbc90);
  FUN_10b8e7aac(alStack_360,&UNK_10f7cbc9c);
  func_0x00010b8e7abc();
  func_0x00010b8e7acc();
  FUN_10b8e7adc();
  FUN_10b8e97dc(auStack_338,plVar16);
  FUN_10b8de32c(alStack_360);
  func_0x00010b8e9ce0();
  if (alStack_360[0] != 0) {
    func_0x00010b8e9c00();
  }
  FUN_10b8de32c(auStack_338);
  return;
}



/* Entry: 10b8e7a0c; end: 10b8e7aab;  */

void FUN_10b8e7a0c(void)

{
  long *plVar1;
  long alStack_80 [5];
  undefined1 auStack_58 [40];
  
  plVar1 = alStack_80;
  FUN_10b8e8e84(alStack_80,&UNK_10f7cbc90);
  FUN_10b8e7aac(alStack_80,&UNK_10f7cbc9c);
  func_0x00010b8e7abc();
  func_0x00010b8e7acc();
  FUN_10b8e7adc();
  FUN_10b8e97dc(auStack_58,plVar1);
  FUN_10b8de32c(alStack_80);
  func_0x00010b8e9ce0();
  if (alStack_80[0] != 0) {
    func_0x00010b8e9c00();
  }
  FUN_10b8de32c(auStack_58);
  return;
}



/* Entry: 10b8e7aac; end: 10b8e7adb;  */

undefined8 * FUN_10b8e7aac(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long extraout_x8_01;
  long lVar15;
  undefined8 *puVar16;
  int extraout_w11;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uStack_288;
  undefined8 uStack_238;
  undefined2 uStack_230;
  undefined8 uStack_228;
  undefined2 uStack_220;
  undefined8 uStack_218;
  undefined2 uStack_210;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined8 *puStack_1f8;
  undefined1 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined1 auStack_108 [80];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_38;
  
  puVar11 = (undefined8 *)0x1;
  puVar12 = (undefined8 *)0x1;
  func_0x00010b8e9b98();
  func_0x00010b8e9c7c();
  func_0x00010b8e9d7c();
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_38);
  if ((bool)in_ZR) {
    return (undefined8 *)0x1;
  }
  ___stack_chk_fail();
  uStack_b0 = 0;
  uStack_a8 = 1;
  pcStack_98 = FUN_10b8e8f24;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b8e9bb4();
  uStack_b8 = extraout_x8;
  FUN_10b8de54c(auStack_108);
  puVar8 = auStack_108;
  func_0x00010b8de354(param_1,puVar8);
  func_0x00010b8de270(auStack_108);
  func_0x00010b8e9b84(uStack_b8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  func_0x00010b8e9bb4();
  uStack_230 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  uStack_228 = 0;
  uStack_188 = extraout_x8_00;
  func_0x00010b8e5e04(&puStack_1b0,puVar8,0);
  FUN_10b9a9020(&uStack_238,&puStack_1b0);
  FUN_10b9a8d98(&puStack_1b0);
  func_0x00010b8e9dfc(CONCAT71(uRam0000000000000019,uRam0000000000000018));
  if ((bool)in_ZR) {
    func_0x00010b8e5e04(&puStack_1b0,0,1);
    FUN_10b9a9020(&uStack_228,&puStack_1b0);
    FUN_10b9a8d98(&puStack_1b0);
    if ((*(byte *)(CONCAT71(uRam0000000000000019,uRam0000000000000018) + 8) & 1) != 0) {
      uStack_208 = uStack_238;
      uStack_200 = uStack_230;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_218 = uStack_228;
      uStack_210 = uStack_220;
      uStack_228 = 0;
      uStack_220 = 0;
      uVar5 = 1;
      FUN_10b8e69b4();
      if ((uVar5 & 1) != 0) {
        puVar11 = (undefined8 *)0x1;
        func_0x00010b8e6fa0(&lStack_1c0,&uStack_208,&uStack_218);
        in_ZR = lStack_1c0 == 1;
        if ((bool)in_ZR) {
          lVar10 = CONCAT17(uRam0000000000000020,uRam0000000000000019);
          __ZNSt3__15mutex4lockEv(lVar10 + 0x18);
          lVar15 = lVar10 + 0x60;
          FUN_10b8e6398(&puStack_1b0);
          puVar7 = puStack_1b0;
          puStack_1b0 = (undefined8 *)0x0;
          puStack_1a8 = (undefined8 *)0x0;
          FUN_10b8e8bdc(&puStack_1b0);
          __ZNSt3__15mutex6unlockEv(lVar10 + 0x18);
          if (puVar7 != (undefined8 *)0x0) {
            puVar19 = *(undefined8 **)(lStack_1b8 + 0x40);
LAB_10b8e90c0:
            in_ZR = puVar19 == *(undefined8 **)(lStack_1b8 + 0x48);
            if (!(bool)in_ZR) goto code_r0x00010b8e90c8;
            puStack_1f8 = puVar7 + 3;
            uStack_1f0 = 1;
            __ZNSt3__15mutex4lockEv();
            if ((*(byte *)((long)puVar7 + 0xe1) & 1) == 0) {
              puVar19 = (undefined8 *)puVar7[0x14];
              puVar16 = (undefined8 *)puVar7[0x15];
              uVar5 = (long)puVar16 - (long)puVar19;
              lVar10 = 0;
              if (uVar5 != 0) {
                lVar10 = ((long)puVar16 - (long)puVar19) * 0x40 + -1;
              }
              uVar2 = puVar7[0x17];
              in_ZR = 0;
              if (lVar10 == puVar7[0x18] + uVar2) {
                in_ZR = uVar2 - 0x200 == 0;
                if (uVar2 < 0x200) {
                  puVar20 = puVar7 + 0x16;
                  puVar18 = (undefined8 *)*puVar20;
                  puVar17 = (undefined8 *)puVar7[0x13];
                  if (uVar5 < (ulong)((long)puVar18 - (long)puVar17)) {
                    uVar9 = 0x1000;
                    __Znwm();
                    if (puVar18 == puVar16) {
                      in_ZR = 0;
                      if (puVar19 == puVar17) {
                        lVar15 = (long)puVar18 - (long)puVar19 >> 2;
                        in_ZR = puVar16 == puVar19;
                        if ((bool)in_ZR) {
                          lVar15 = 1;
                        }
                        puStack_190 = puVar20;
                        FUN_10b8e8d60();
                        func_0x00010b8e9e60(lVar15 * 2 + 6);
                        puVar11 = (undefined8 *)puVar7[0x15];
                        FUN_10b8e8d38(&puStack_1b0,puVar7[0x14]);
                        puVar16 = (undefined8 *)puVar7[0x14];
                        puVar19 = (undefined8 *)puVar7[0x13];
                        puVar7[0x14] = puStack_1a8;
                        puVar7[0x13] = puStack_1b0;
                        puVar17 = (undefined8 *)puVar7[0x16];
                        puVar20 = (undefined8 *)puVar7[0x15];
                        puVar7[0x16] = puStack_198;
                        puVar7[0x15] = puStack_1a0;
                        puStack_1b0 = puVar19;
                        puStack_1a8 = puVar16;
                        puStack_1a0 = puVar20;
                        puStack_198 = puVar17;
                        func_0x00010b8e9f30();
                        puVar19 = (undefined8 *)puVar7[0x14];
                      }
                      puVar19[-1] = uVar9;
                      puVar7[0x14] = puVar19;
                      goto LAB_10b8e9160;
                    }
                    *puVar16 = uVar9;
                    puVar7[0x15] = puVar16 + 1;
                    in_ZR = 0;
                  }
                  else {
                    puVar13 = (undefined8 *)((long)puVar18 - (long)puVar17 >> 2);
                    if (puVar18 == puVar17) {
                      puVar13 = (undefined8 *)0x1;
                    }
                    puStack_1c8 = puVar20;
                    FUN_10b8e8d60();
                    puVar17 = (undefined8 *)((long)puVar13 + uVar5);
                    puVar18 = puVar13 + lVar15;
                    uVar9 = 0x1000;
                    lVar10 = lVar15;
                    puStack_1e8 = puVar13;
                    puStack_1e0 = puVar17;
                    puStack_1d0 = puVar18;
                    __Znwm();
                    puVar14 = puVar17;
                    if (uVar5 == lVar15 * 8) {
                      if (puVar16 == puVar19) {
                        puVar19 = (undefined8 *)0x1;
                        puStack_190 = puVar20;
                        FUN_10b8e8d60();
                        puStack_198 = puVar19 + lVar10;
                        puVar11 = puVar17;
                        puStack_1b0 = puVar19;
                        puStack_1a8 = puVar19;
                        puStack_1a0 = puVar19;
                        FUN_10b8e8d38(&puStack_1b0,puVar17);
                        puVar1 = puStack_198;
                        puVar14 = puStack_1a0;
                        puVar16 = puStack_1a8;
                        puVar19 = puStack_1b0;
                        puStack_1e8 = puStack_1b0;
                        puStack_1e0 = puStack_1a8;
                        puStack_1d0 = puStack_198;
                        puStack_1b0 = puVar13;
                        puStack_1a8 = puVar17;
                        puStack_1a0 = puVar17;
                        puStack_198 = puVar18;
                        func_0x00010b8e9f30();
                        puVar18 = puVar1;
                        puVar13 = puVar19;
                        puVar17 = puVar16;
                      }
                      else {
                        puVar17 = puVar17 + (((long)puVar17 - (long)puVar13 >> 3) + 1) / -2;
                        puVar14 = puVar17;
                        puStack_1e0 = puVar17;
                      }
                    }
                    puVar19 = puVar14 + 1;
                    *puVar14 = uVar9;
                    puVar16 = (undefined8 *)puVar7[0x15];
                    puStack_1d8 = puVar19;
                    while( true ) {
                      puVar14 = (undefined8 *)puVar7[0x14];
                      in_ZR = puVar16 == puVar14;
                      if ((bool)in_ZR) break;
                      puVar14 = puVar17;
                      if (puVar17 == puVar13) {
                        if (puVar19 < puVar18) {
                          puVar11 = (undefined8 *)((long)puVar19 - (long)puVar13);
                          puVar1 = puVar19 + (((long)puVar18 - (long)puVar19 >> 3) + 1) / 2;
                          puVar14 = (undefined8 *)((long)puVar1 - ((long)puVar19 - (long)puVar13));
                          puVar19 = puVar1;
                          if (puVar11 != (undefined8 *)0x0) {
                            _memmove(puVar14,puVar17);
                          }
                        }
                        else {
                          lVar15 = (long)puVar18 - (long)puVar13 >> 2;
                          if ((long)puVar18 - (long)puVar13 == 0) {
                            lVar15 = 1;
                          }
                          puStack_190 = puVar20;
                          FUN_10b8e8d60();
                          func_0x00010b8e9e60(lVar15 * 2 + 6);
                          puVar11 = puVar19;
                          FUN_10b8e8d38(&puStack_1b0,puVar13);
                          puVar4 = puStack_198;
                          puVar3 = puStack_1a0;
                          puVar14 = puStack_1a8;
                          puVar1 = puStack_1b0;
                          puStack_1b0 = puVar13;
                          puStack_1a8 = puVar17;
                          puStack_1a0 = puVar19;
                          puStack_198 = puVar18;
                          func_0x00010b8e9f30();
                          puVar18 = puVar4;
                          puVar13 = puVar1;
                          puVar19 = puVar3;
                        }
                      }
                      puVar16 = puVar16 + -1;
                      puVar17 = puVar14 + -1;
                      *puVar17 = *puVar16;
                    }
                    puStack_1e8 = (undefined8 *)puVar7[0x13];
                    puVar7[0x13] = puVar13;
                    puVar7[0x14] = puVar17;
                    puStack_1d0 = (undefined8 *)puVar7[0x16];
                    puStack_1d8 = (undefined8 *)puVar7[0x15];
                    puVar7[0x15] = puVar19;
                    puVar7[0x16] = puVar18;
                    puStack_1e0 = puVar14;
                    func_0x00010b8e8d88(&puStack_1e8);
                  }
                }
                else {
                  puVar7[0x17] = uVar2 - 0x200;
                  uVar9 = *puVar19;
                  puVar7[0x14] = puVar19 + 1;
LAB_10b8e9160:
                  FUN_10b8e8c5c(puVar7 + 0x13,uVar9);
                }
              }
              plVar6 = puVar7 + 0x13;
              FUN_10b8e8c00();
              if ((lStack_1b8 != 0) && (*(long *)(lStack_1b8 + 0x10) != 0)) {
                do {
                  func_0x00010b8e9da4();
                  lStack_1b8 = extraout_x8_01;
                } while (extraout_w11 != 0);
              }
              *plVar6 = lStack_1b8;
              puVar7[0x18] = puVar7[0x18] + 1;
              FUN_10b8e6448(puVar7,&puStack_1f8);
            }
            func_0x0001080eb338(&puStack_1f8);
          }
          goto LAB_10b8e9358;
        }
        func_0x00010b8e5d68(&puStack_1b0,0,&lStack_1b8);
        goto LAB_10b8e9368;
      }
      func_0x00010b8e9c38();
      func_0x00010b8e9f38();
      goto LAB_10b8e9370;
    }
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
LAB_10b8e9394:
  FUN_10b9a8d98(&uStack_228);
  puVar7 = &uStack_238;
  FUN_10b9a8d98();
  func_0x00010b8e9b84(uStack_188);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  func_0x00010b8e9b98();
  func_0x00010b8e9c7c();
  func_0x00010b8e9d7c();
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_288);
  if ((bool)in_ZR) {
    return puVar12;
  }
  ___stack_chk_fail();
  func_0x00010b8e9e50();
  FUN_10b8e69b4();
  if ((int)puVar7 != 0) {
    puVar7 = (undefined8 *)puVar11[3];
    func_0x00010b8e63d4(puVar7,puVar11);
  }
  func_0x00010b8e9c38();
  func_0x00010b8e9d04();
  return puVar7;
code_r0x00010b8e90c8:
  puVar16 = (undefined8 *)*puVar19;
  puVar19 = puVar19 + 1;
  if (puVar16 == puVar7) goto code_r0x00010b8e90d4;
  goto LAB_10b8e90c0;
code_r0x00010b8e90d4:
  in_ZR = 1;
LAB_10b8e9358:
  FUN_10b8e8a18(puVar7);
  func_0x00010b8e9c38();
  func_0x00010b8e9f38();
LAB_10b8e9368:
  FUN_10b8e99c8(&lStack_1c0);
LAB_10b8e9370:
  FUN_10b9a8d98(&uStack_218);
  FUN_10b9a8d98(&uStack_208);
  func_0x0001080e08ac(param_1,&puStack_1b0);
  func_0x0001080e0bc0(&puStack_1b0);
  goto LAB_10b8e9394;
}



/* Entry: 10b8e7adc; end: 10b8e7b53;  */

long * FUN_10b8e7adc(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long alStack_1c0 [5];
  long lStack_198;
  code *pcStack_190;
  long *plStack_170;
  code *pcStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [16];
  long *plStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 *apuStack_118 [4];
  undefined8 uStack_f8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [80];
  undefined8 uStack_38;
  
  func_0x00010b8e9b98();
  pcVar5 = FUN_10b8e96a4;
  plVar3 = param_3;
  func_0x00010b8de2e0(auStack_88,auStack_90,0x10b8e95d4,FUN_10b8e96a4,param_3,param_4);
  puVar4 = auStack_88;
  FUN_10b8e8f24(param_1);
  func_0x00010b8e9cd4();
  func_0x00010b8e9e08();
  func_0x00010b8e9b84(uStack_38);
  if ((bool)in_ZR) {
    return param_4;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10b8e7b54;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b8e9e84();
  func_0x00010b8e9bb4();
  lVar1 = *(long *)(puVar4 + 0x18);
  uStack_f8 = extraout_x8;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110d732b8,&PTR_DAT_110d74048,0);
  }
  lVar9 = *plVar3;
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110d73198;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
    do {
      func_0x00010b8e9da4();
    } while (extraout_w11 != 0);
  }
  plVar6 = puVar2 + 3;
  *plVar6 = (long)&PTR_FUN_110d72fb0;
  plVar8 = puVar2 + 4;
  *plVar8 = 0;
  puVar2[5] = 0;
  puVar2[6] = lVar9;
  puVar2[7] = 0x32aaaba7;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  *(undefined1 *)(puVar2 + 0x12) = 1;
  plStack_120 = plVar6;
  apuStack_118[0] = puVar2;
  do {
    func_0x00010b8e9c0c();
  } while (extraout_w10 != 0);
  func_0x000107c278e4(plVar8,&plStack_120);
  func_0x000107c284e8(&plStack_120);
  lVar9 = *plVar3;
  FUN_10b8e999c(lVar1);
  __ZNSt3__15mutex4lockEv(lVar9 + 0x18);
  FUN_10b8e62c4(auStack_140,lVar9 + 0x70);
  FUN_10b8e8a50(&plStack_120,lVar1);
  func_0x00010b8e6300(lVar9 + 0x70,&plStack_120);
  func_0x00010b8e8a98(&plStack_120);
  plVar3 = plVar6;
  plStack_130 = plVar6;
  if (*plVar8 == 0) {
    puVar7 = (undefined8 *)puVar2[5];
    puStack_128 = puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_10b8e7d18;
    do {
      func_0x00010b8e9c0c();
    } while (extraout_w10_01 != 0);
  }
  else {
    func_0x000107c278f0(&plStack_120,plVar8);
    puVar7 = apuStack_118[0];
    if (plStack_120 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
      plStack_130 = (long *)0x0;
      puStack_128 = (undefined8 *)0x0;
      plVar3 = (long *)0x0;
    }
    else {
      puStack_128 = apuStack_118[0];
      if (apuStack_118[0] != (undefined8 *)0x0) {
        do {
          func_0x00010b8e9c0c();
        } while (extraout_w10_00 != 0);
      }
    }
    func_0x000107c284e8(&plStack_120);
    if (puVar7 == (undefined8 *)0x0) goto LAB_10b8e7d18;
  }
  do {
    func_0x00010b8e9c0c();
  } while (extraout_w10_02 != 0);
LAB_10b8e7d18:
  func_0x00010b8e8ae0(&plStack_130);
  plStack_130 = (long *)0x0;
  puStack_128 = (undefined8 *)0x0;
  apuStack_118[0] = *(undefined8 **)(lVar9 + 0x88);
  plStack_120 = *(long **)(lVar9 + 0x80);
  *(long **)(lVar9 + 0x80) = plVar3;
  *(undefined8 **)(lVar9 + 0x88) = puVar7;
  func_0x00010b8e8abc(&plStack_120);
  func_0x00010b8e8abc(&plStack_130);
  func_0x0001080d3308(auStack_140);
  __ZNSt3__15mutex6unlockEv(lVar9 + 0x18);
  func_0x00010b8e8bd0(lVar1);
  func_0x000107c31088(&plStack_130,&UNK_10f7cbc90);
  func_0x00010b8dbf98(&plStack_120,param_3,&plStack_130,pcVar5);
  func_0x000107c278f8(plStack_130);
  if (((byte)pcVar5[8] & 1) == 0) {
    *param_4 = param_3[0x28];
    lVar1 = param_3[0x29];
    param_4[2] = param_3[0x2a];
    param_4[1] = lVar1;
    *(undefined1 *)(param_4 + 3) = 0;
  }
  else {
    if (puVar2[5] != 0) {
      do {
        func_0x00010b8e9c0c();
      } while (extraout_w10_03 != 0);
    }
    plStack_130 = plVar6;
    (**(code **)(*param_3 + 0xc0))(param_4,param_3,&plStack_130,apuStack_118,pcVar5);
    if (plStack_130 != (long *)0x0) {
      func_0x00010b8e9c00();
    }
  }
  func_0x0001080e0bc0(&plStack_120);
  plVar3 = plVar6;
  FUN_10b8e8b28(plVar6);
  func_0x00010b8e9b84(uStack_f8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_148 = FUN_10b8e7e38;
    plStack_170 = plVar6;
    pcStack_168 = pcVar5;
    plStack_160 = param_3;
    plStack_158 = param_4;
    ppuStack_150 = &puStack_a0;
    FUN_10b8e99f0(alStack_1c0,&UNK_10f7cbcbe);
    FUN_10b8e97dc(&lStack_198,alStack_1c0);
    FUN_10b8de32c(alStack_1c0);
    pcStack_190 = FUN_10b8e7ea8;
    func_0x00010b8e9ce0();
    if (alStack_1c0[0] != 0) {
      func_0x00010b8e9c00();
    }
    plVar3 = &lStack_198;
    FUN_10b8de32c(plVar3);
    return plVar3;
  }
  return plVar3;
}



/* Entry: 10b8e7b54; end: 10b8e7e37;  */

void FUN_10b8e7b54(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long alStack_130 [5];
  undefined1 auStack_108 [8];
  code *pcStack_100;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 auStack_b0 [16];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010b8e9e84();
  func_0x00010b8e9bb4();
  lVar1 = *(long *)(param_2 + 0x18);
  uStack_68 = extraout_x8;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110d732b8,&PTR_DAT_110d74048,0);
  }
  lVar7 = *param_4;
  puVar2 = (undefined8 *)0x98;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110d73198;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
    do {
      func_0x00010b8e9da4();
    } while (extraout_w11 != 0);
  }
  puVar3 = puVar2 + 3;
  *puVar3 = &PTR_FUN_110d72fb0;
  plVar5 = puVar2 + 4;
  *plVar5 = 0;
  puVar2[5] = 0;
  puVar2[6] = lVar7;
  puVar2[7] = 0x32aaaba7;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  *(undefined1 *)(puVar2 + 0x12) = 1;
  puStack_90 = puVar3;
  puStack_88 = puVar2;
  do {
    func_0x00010b8e9c0c();
  } while (extraout_w10 != 0);
  func_0x000107c278e4(plVar5,&puStack_90);
  func_0x000107c284e8(&puStack_90);
  lVar7 = *param_4;
  FUN_10b8e999c(lVar1);
  __ZNSt3__15mutex4lockEv(lVar7 + 0x18);
  FUN_10b8e62c4(auStack_b0,lVar7 + 0x70);
  FUN_10b8e8a50(&puStack_90,lVar1);
  func_0x00010b8e6300(lVar7 + 0x70,&puStack_90);
  func_0x00010b8e8a98(&puStack_90);
  puVar6 = puVar3;
  puStack_a0 = puVar3;
  if (*plVar5 == 0) {
    puVar4 = (undefined8 *)puVar2[5];
    puStack_98 = puVar4;
    if (puVar4 == (undefined8 *)0x0) goto LAB_10b8e7d18;
    do {
      func_0x00010b8e9c0c();
    } while (extraout_w10_01 != 0);
  }
  else {
    func_0x000107c278f0(&puStack_90,plVar5);
    puVar4 = puStack_88;
    if (puStack_90 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      puStack_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puStack_98 = puStack_88;
      if (puStack_88 != (undefined8 *)0x0) {
        do {
          func_0x00010b8e9c0c();
        } while (extraout_w10_00 != 0);
      }
    }
    func_0x000107c284e8(&puStack_90);
    if (puVar4 == (undefined8 *)0x0) goto LAB_10b8e7d18;
  }
  do {
    func_0x00010b8e9c0c();
  } while (extraout_w10_02 != 0);
LAB_10b8e7d18:
  func_0x00010b8e8ae0(&puStack_a0);
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puStack_88 = *(undefined8 **)(lVar7 + 0x88);
  puStack_90 = *(undefined8 **)(lVar7 + 0x80);
  *(undefined8 **)(lVar7 + 0x80) = puVar6;
  *(undefined8 **)(lVar7 + 0x88) = puVar4;
  func_0x00010b8e8abc(&puStack_90);
  func_0x00010b8e8abc(&puStack_a0);
  func_0x0001080d3308(auStack_b0);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x18);
  func_0x00010b8e8bd0(lVar1);
  func_0x000107c31088(&puStack_a0,&UNK_10f7cbc90);
  func_0x00010b8dbf98(&puStack_90);
  func_0x000107c278f8(puStack_a0);
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
    *unaff_x19 = unaff_x20[0x28];
    lVar1 = unaff_x20[0x29];
    unaff_x19[2] = unaff_x20[0x2a];
    unaff_x19[1] = lVar1;
    *(undefined1 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (puVar2[5] != 0) {
      do {
        func_0x00010b8e9c0c();
      } while (extraout_w10_03 != 0);
    }
    puStack_a0 = puVar3;
    (**(code **)(*unaff_x20 + 0xc0))();
    if (puStack_a0 != (undefined8 *)0x0) {
      func_0x00010b8e9c00();
    }
  }
  func_0x0001080e0bc0(&puStack_90);
  FUN_10b8e8b28(puVar3);
  func_0x00010b8e9b84(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puStack_e0 = puVar3;
    lStack_d8 = param_3;
    FUN_10b8e99f0(alStack_130,&UNK_10f7cbcbe);
    FUN_10b8e97dc(auStack_108,alStack_130);
    FUN_10b8de32c(alStack_130);
    pcStack_100 = FUN_10b8e7ea8;
    func_0x00010b8e9ce0();
    if (alStack_130[0] != 0) {
      func_0x00010b8e9c00();
    }
    FUN_10b8de32c(auStack_108);
    return;
  }
  return;
}


