/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a289e74; end: 10a28a00b;  */

void FUN_10a289e74(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  code **ppcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  plVar5 = &lStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x2c8590b21642c859);
  lVar3 = lStack_a8 - lStack_b0;
  if (lVar3 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x2c8590b21642c859;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
LAB_10a289fc8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a289fcc);
        (*pcVar1)();
      }
      param_4 = *(long *)(param_1 + 8) + lVar7;
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4a7b05,0x24,param_4,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar8) goto LAB_10a289fc8;
      *(int *)(lStack_b0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xb8;
    } while (lVar3 >> 2 != uVar8);
  }
  pcStack_98 = FUN_10a28a33c;
  appuStack_90[0] = &PTR_DAT_110bba058;
  ppcVar4 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar4,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar3 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (param_4 != 0) {
    FUN_10a28a090();
    lVar7 = lVar3;
    FUN_10a28a138(lVar3,ppcVar4,plVar5,*(undefined8 *)(lVar3 + 8));
    *(long *)(lVar3 + 8) = lVar7;
  }
  return;
}



/* Entry: 10a28a00c; end: 10a28a08f;  */

void FUN_10a28a00c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a28a090(param_1,param_4);
    lVar1 = param_1;
    FUN_10a28a138(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a28a090; end: 10a28a0db;  */

undefined1  [16] FUN_10a28a090(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x1642c8590b21643) {
    plVar1 = param_1;
    FUN_10a28a0f0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x17);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a28a0dc();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x1642c8590b21643) {
    lVar2 = param_2 * 0xb8;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
    uVar3 = param_2;
    FUN_10a28a1bc(param_4,param_2);
    param_4 = param_4 + 0xb8;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a28a0dc; end: 10a28a0ef;  */

undefined1  [16] FUN_10a28a0dc(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x1642c8590b21643) {
    lVar1 = param_2 * 0xb8;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
    uVar2 = param_2;
    FUN_10a28a1bc(param_4,param_2);
    param_4 = param_4 + 0xb8;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a28a0f0; end: 10a28a137;  */

undefined1  [16] FUN_10a28a0f0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x1642c8590b21643) {
    lVar1 = param_2 * 0xb8;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
    uVar2 = param_2;
    FUN_10a28a1bc(param_4,param_2);
    param_4 = param_4 + 0xb8;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a28a138; end: 10a28a1bb;  */

long FUN_10a28a138(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0xb8) {
    FUN_10a28a1bc(param_4,param_2);
    param_4 = param_4 + 0xb8;
  }
  return param_4;
}



/* Entry: 10a28a1bc; end: 10a28a273;  */

undefined8 * FUN_10a28a1bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar3;
  *param_1 = uVar2;
  FUN_10a22cb80(param_1 + 3,param_2 + 3);
  FUN_10a22cd3c(param_1 + 7,param_2 + 7);
  uVar1 = *(undefined1 *)(param_2 + 0x13);
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_10a22ce94();
  return param_1;
}



/* Entry: 10a28a274; end: 10a28a2cb;  */

void FUN_10a28a274(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0xa0;
  FUN_10a22d224(&lStack_28);
  FUN_10a22ce48(param_1 + 0x38);
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  return;
}



/* Entry: 10a28a2cc; end: 10a28a33b;  */

void FUN_10a28a2cc(long *param_1)

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
        lVar2 = lVar2 + -0xb8;
        FUN_10a28a274(lVar2);
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



/* Entry: 10a28a33c; end: 10a28a353;  */

void FUN_10a28a33c(void)

{
  return;
}



/* Entry: 10a28a354; end: 10a28a487;  */

long * FUN_10a28a354(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x2c8590b21642c859 + 1;
  if (0x1642c8590b21642 < uVar4) {
    FUN_10a28a0dc();
    FUN_10a28a4f0(&plStack_58);
    __Unwind_Resume(param_1);
    plVar2 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a230bf4(param_4,plVar2);
        plVar2 = plVar2 + 0x17;
        param_4 = param_4 + 0xb8;
      } while (plVar2 != param_3);
      do {
        param_1 = param_2;
        FUN_10a28a274(param_2);
        param_2 = param_2 + 0x17;
      } while (param_2 != param_3);
    }
    return param_1;
  }
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar3 * -0x590b21642c8590b2;
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar5 = uVar4;
  }
  if (0xb21642c8590b20 < (ulong)(lVar3 * -0x2c8590b21642c859)) {
    uVar5 = 0x1642c8590b21642;
  }
  plStack_38 = param_1;
  if (uVar5 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = param_1;
    FUN_10a28a0f0();
  }
  lVar6 = (long)plVar2 + lVar6;
  plStack_58 = plVar2;
  plStack_50 = (long *)lVar6;
  plStack_40 = plVar2 + uVar5 * 0x17;
  FUN_10a230bf4(lVar6,param_2);
  plVar1 = (long *)(lVar6 + 0xb8);
  lVar6 = lVar6 + (*param_1 - param_1[1]);
  plStack_48 = plVar1;
  FUN_10a28a488(param_1,*param_1,param_1[1],lVar6);
  plStack_58 = (long *)*param_1;
  *param_1 = lVar6;
  param_1[1] = (long)plVar1;
  plStack_40 = (long *)param_1[2];
  param_1[2] = (long)(plVar2 + uVar5 * 0x17);
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  FUN_10a28a4f0(&plStack_58);
  return plVar1;
}



/* Entry: 10a28a488; end: 10a28a4ef;  */

void FUN_10a28a488(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a230bf4(param_4,lVar1);
      lVar1 = lVar1 + 0xb8;
      param_4 = param_4 + 0xb8;
    } while (lVar1 != param_3);
    do {
      FUN_10a28a274(param_2);
      param_2 = param_2 + 0xb8;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a28a4f0; end: 10a28a53b;  */

long * FUN_10a28a4f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0xb8;
    FUN_10a28a274();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a28a53c; end: 10a28a63b;  */

void FUN_10a28a53c(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  uVar3 = (lVar4 - lVar2 >> 3) * -0x2c8590b21642c859;
  if (param_2 + 1 != uVar3) {
    if ((lVar2 == lVar4) || (uVar3 < param_2 || uVar3 - param_2 == 0)) goto LAB_10a28a630;
    uVar7 = *(undefined8 *)(lVar4 + -0xb0);
    uVar6 = *(undefined8 *)(lVar4 + -0xb8);
    puVar5 = (undefined8 *)(lVar2 + param_2 * 0xb8);
    *(undefined8 *)((long)puVar5 + 0xf) = *(undefined8 *)(lVar4 + -0xa9);
    puVar5[1] = uVar7;
    *puVar5 = uVar6;
    func_0x00010a230998(puVar5 + 3,lVar4 + -0xa0);
    func_0x00010a230a6c(puVar5 + 7,lVar4 + -0x80);
    *(undefined1 *)(puVar5 + 0x13) = *(undefined1 *)(lVar4 + -0x20);
    FUN_10a230b90(puVar5 + 0x14);
    uVar6 = *(undefined8 *)(lVar4 + -0x18);
    puVar5[0x15] = *(undefined8 *)(lVar4 + -0x10);
    puVar5[0x14] = uVar6;
    puVar5[0x16] = *(undefined8 *)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -0x18) = 0;
    *(undefined8 *)(lVar4 + -0x10) = 0;
    *(undefined8 *)(lVar4 + -8) = 0;
    lVar2 = *param_1;
    lVar4 = param_1[1];
    uVar3 = (lVar4 - lVar2 >> 3) * -0x2c8590b21642c859;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) goto LAB_10a28a630;
  }
  if (lVar2 != lVar4) {
    FUN_10a28a274(lVar4 + -0xb8);
    param_1[1] = lVar4 + -0xb8;
    return;
  }
LAB_10a28a630:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28a634);
  (*pcVar1)();
}



/* Entry: 10a28a63c; end: 10a28a68f;  */

void FUN_10a28a63c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bba590;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
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
  return;
}



/* Entry: 10a28a690; end: 10a28a713;  */

void FUN_10a28a690(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a28a748(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a28a714; end: 10a28a747;  */

void FUN_10a28a714(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bba590;
  param_1[1] = &UNK_110bba560;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a28a748; end: 10a28a85f;  */

undefined1 * FUN_10a28a748(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_f0;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  byte bStack_c0;
  undefined1 auStack_b8 [96];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  puVar1 = &uStack_f0;
  uStack_f0 = *param_2;
  uStack_e8 = (undefined7)param_2[1];
  uStack_e1 = (undefined1)*(undefined8 *)((long)param_2 + 0xf);
  uStack_e0 = (undefined7)((ulong)*(undefined8 *)((long)param_2 + 0xf) >> 8);
  FUN_10a22cb80(&lStack_d8,param_2 + 3);
  FUN_10a22cd3c(auStack_b8,param_2 + 7);
  uStack_58 = *(undefined1 *)(param_2 + 0x13);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  FUN_10a22ce94(&uStack_50,param_2[0x14],param_2[0x15],
                ((long)(param_2[0x15] - param_2[0x14]) >> 3) * 0x2e8ba2e8ba2e8ba3);
  FUN_10aab73e4(&uStack_f0,param_1);
  FUN_10a28a860(&uStack_f0,param_2);
  puStack_38 = &uStack_50;
  FUN_10a22d224(&puStack_38);
  FUN_10a22ce48(auStack_b8);
  if (((bStack_c0 & 1) != 0) && (lStack_d8 != 0)) {
    lStack_d0 = lStack_d8;
    __ZdlPv();
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10a28a860; end: 10a28a93f;  */

void FUN_10a28a860(int *param_1,int *param_2)

{
  if (((((*param_1 == *param_2) &&
        (param_1[3] == param_2[3] && (char)param_1[4] == (char)param_2[4])) &&
       ((char)param_1[5] == (char)param_2[5])) &&
      ((*(char *)((long)param_1 + 0x15) == *(char *)((long)param_2 + 0x15) &&
       (*(char *)((long)param_1 + 0x16) == *(char *)((long)param_2 + 0x16))))) &&
     ((param_1[1] == param_2[1] &&
      (((float)param_1[2] == (float)param_2[2] &&
       ((*(byte *)(param_2 + 0x24) & *(byte *)(param_1 + 0x24)) != 0)))))) {
    FUN_10a28a940(param_1 + 0xe,param_2 + 0xe);
  }
  return;
}



/* Entry: 10a28a940; end: 10a28a9e7;  */

bool FUN_10a28a940(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  
  bVar4 = *(byte *)((long)param_1 + 0x17);
  uVar1 = param_1[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_2 + 0x17);
  uVar2 = param_2[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*param_1;
    if (-1 < (char)bVar4) {
      plVar7 = param_1;
    }
    plVar3 = (long *)*param_2;
    if (-1 < (char)bVar5) {
      plVar3 = param_2;
    }
    _memcmp(plVar7,plVar3);
    if ((((int)plVar7 == 0) && ((int)param_1[5] == (int)param_2[5])) &&
       (*(int *)((long)param_1 + 0x2c) == *(int *)((long)param_2 + 0x2c))) {
      if (param_1[9] == param_2[9]) {
        param_1 = param_1 + 8;
        do {
          param_1 = (long *)*param_1;
          bVar6 = param_1 == (long *)0x0;
          if (param_1 == (long *)0x0) {
            return true;
          }
          plVar7 = param_2 + 6;
          func_0x00010925b970(param_2 + 6,param_1 + 2);
          if (plVar7 == (long *)0x0) {
            return bVar6;
          }
        } while ((int)param_1[2] == (int)plVar7[2]);
      }
      else {
        bVar6 = false;
      }
      return bVar6;
    }
  }
  return false;
}



/* Entry: 10a28a9e8; end: 10a28aa5b;  */

bool FUN_10a28a9e8(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    plVar3 = (long *)(param_1 + 0x10);
    do {
      plVar3 = (long *)*plVar3;
      bVar1 = plVar3 == (long *)0x0;
      if (plVar3 == (long *)0x0) {
        return true;
      }
      lVar2 = param_2;
      func_0x00010925b970(param_2,plVar3 + 2);
      if (lVar2 == 0) {
        return bVar1;
      }
    } while (*(int *)(plVar3 + 2) == *(int *)(lVar2 + 0x10));
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10a28aa5c; end: 10a28aac3;  */

void FUN_10a28aa5c(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a28aa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a28aac4; end: 10a28ab7b;  */

void FUN_10a28aac4(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113300e80;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a28ab7c);
  (*pcVar2)();
}



/* Entry: 10a28ab7c; end: 10a28ab9f;  */

void FUN_10a28ab7c(void)

{
  return;
}



/* Entry: 10a28aba0; end: 10a28ac17;  */

undefined1  [16] FUN_10a28aba0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  plVar3 = (long *)(param_1 + 0x10);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = 0x220;
    __Znwm(0x220);
    FUN_10aac68ac();
    func_0x00010a26dc64(plVar3,uVar2);
    lVar1 = *plVar3;
  }
  FUN_10aab71cc(lVar1);
  auVar4._0_8_ = *plVar3;
  auVar4._8_8_ = param_2;
  return auVar4;
}



/* Entry: 10a28ac18; end: 10a28ace3;  */

void FUN_10a28ac18(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  uVar4 = 0xb8;
  __Znwm(0xb8);
  lVar5 = *(long *)(*param_2 + 0x108);
  FUN_10a28ace4(uVar4,lVar5,(*(long *)(*param_2 + 0x110) - lVar5 >> 3) * -0x2c8590b21642c859);
  FUN_10a28add8(auStack_40,uVar4);
  FUN_10a286fec(param_1,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a28ace4; end: 10a28add7;  */

void FUN_10a28ace4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar4;
  *param_1 = uVar3;
  FUN_10a22cb80(param_1 + 3,param_2 + 3);
  FUN_10a22cd3c(param_1 + 7,param_2 + 7);
  uVar1 = *(undefined1 *)(param_2 + 0x13);
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_10a22ce94();
  if (param_3 != 1) {
    lVar2 = param_3 * 0xb8 + -0xb8;
    do {
      param_2 = param_2 + 0x17;
      FUN_10aab73e4(param_1,param_2);
      lVar2 = lVar2 + -0xb8;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 10a28add8; end: 10a28ae4f;  */

undefined8 * FUN_10a28add8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba600;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a28ae50; end: 10a28aeb3;  */

void FUN_10a28ae50(undefined8 param_1,long param_2)

{
  long lStack_28;
  
  if (param_2 != 0) {
    lStack_28 = param_2 + 0xa0;
    FUN_10a22d224(&lStack_28);
    FUN_10a22ce48(param_2 + 0x38);
    if ((*(char *)(param_2 + 0x30) == '\x01') && (*(long *)(param_2 + 0x18) != 0)) {
      *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x18);
      __ZdlPv();
    }
    __ZdlPv(param_2);
  }
  return;
}



/* Entry: 10a28aeb4; end: 10a28aeb7;  */

void FUN_10a28aeb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a28aeb8; end: 10a28aecb;  */

void FUN_10a28aeb8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28aecc; end: 10a28aed3;  */

void FUN_10a28aecc(long param_1)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    lStack_28 = lVar1 + 0xa0;
    FUN_10a22d224(&lStack_28);
    FUN_10a22ce48(lVar1 + 0x38);
    if ((*(char *)(lVar1 + 0x30) == '\x01') && (*(long *)(lVar1 + 0x18) != 0)) {
      *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x18);
      __ZdlPv();
    }
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a28aed4; end: 10a28af0b;  */

undefined8 FUN_10a28aed4(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bba640);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a28af0c; end: 10a28af0f;  */

void FUN_10a28af0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28af10; end: 10a28b087;  */

/* WARNING: Removing unreachable block (ram,0x00010a28b000) */
/* WARNING: Removing unreachable block (ram,0x00010a28b004) */
/* WARNING: Removing unreachable block (ram,0x00010a28b00c) */
/* WARNING: Removing unreachable block (ram,0x00010a28b014) */
/* WARNING: Removing unreachable block (ram,0x00010a28b020) */
/* WARNING: Removing unreachable block (ram,0x00010a28b028) */
/* WARNING: Removing unreachable block (ram,0x00010a28b030) */
/* WARNING: Removing unreachable block (ram,0x00010a28b034) */

void FUN_10a28af10(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar7 = puVar5 + 3;
  *(undefined2 *)puVar7 = 4;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar7;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_38 = puVar5;
  if ((*(byte *)(*param_2 + 400) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a28b058);
    (*pcVar4)();
  }
  FUN_10aab7914(*param_2 + 0x180,*(undefined8 *)param_2[1],param_2[2] + 0x10,param_2[3]);
  plVar1 = puVar5 + 2;
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar7);
        goto LAB_10a28afe0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a28afe0:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_38,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a28b088; end: 10a28b12f;  */

undefined8 * FUN_10a28b088(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb77e8;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a28b130; end: 10a28b3cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a28b32c) */
/* WARNING: Removing unreachable block (ram,0x00010a28b330) */
/* WARNING: Removing unreachable block (ram,0x00010a28b338) */
/* WARNING: Removing unreachable block (ram,0x00010a28b340) */
/* WARNING: Removing unreachable block (ram,0x00010a28b344) */

void FUN_10a28b130(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar5 = (undefined8 *)0x2f0;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_DAT_110bba7a0;
  func_0x0001098bae4c(puVar5,&UNK_10e4a7341,0x23,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x54,in_x7,0,0
                      ,&uStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *puVar5 = &PTR_DAT_110bba7a0;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x19] = &PTR_FUN_110bb9f18;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bba810;
  puVar5[0x25] = &UNK_110bba7e0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bba810;
  puVar5[0x2b] = &UNK_110bba7e0;
  *(undefined1 *)(puVar5 + 0x53) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x55) = 0;
  puVar5[0x58] = 0x10a28c0ec;
  puVar5[0x59] = &UNK_110bb9fa0;
  puVar5[0x5b] = 0;
  puVar5[0x5a] = 0;
  puVar5[0x5d] = 0;
  puVar5[0x5c] = 0;
  puVar5[0x54] = &PTR_FUN_110bba850;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x5d] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10a28c208(puVar5 + 0x30);
    FUN_10a28c534(puVar5 + 0x30,param_3);
    *(undefined1 *)(puVar5 + 0x53) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a28b3cc; end: 10a28b53f;  */

void FUN_10a28b3cc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 8;
  *param_1 = &PTR_FUN_110bb9f18;
  FUN_10a28ba84(&puStack_28);
  func_0x0001098bba44(param_1);
  return;
}



/* Entry: 10a28b540; end: 10a28b5b7;  */

uint FUN_10a28b540(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x150;
  if (lVar4 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  func_0x00010a286b48(lVar1 + 0x20);
  lStack_38 = param_1;
  FUN_10a28c774(lVar1 + 0x20,&lStack_38);
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    FUN_10a28beec(uVar3,*(undefined8 *)(lVar1 + 0x20));
    uVar2 = (uint)uVar3 ^ 1;
  }
  return uVar2;
}



/* Entry: 10a28b5b8; end: 10a28b5ef;  */

void FUN_10a28b5b8(long param_1)

{
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x70);
  uStack_20 = *(undefined8 *)(lStack_28 + 0x20);
  plStack_30 = &lStack_18;
  lStack_38 = param_1;
  lStack_18 = param_1;
  FUN_10a28c998(&lStack_38);
  return;
}



/* Entry: 10a28b5f0; end: 10a28b66b;  */

void FUN_10a28b5f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bb9f58;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a28b8e0();
  *param_1 = puVar1;
  return;
}



/* Entry: 10a28b66c; end: 10a28b6af;  */

void FUN_10a28b66c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (uVar1 < *(ulong *)(param_1 + 0x50)) {
    FUN_10a2311c0();
    lVar2 = uVar1 + 0x28;
  }
  else {
    lVar2 = param_1 + 0x40;
    FUN_10a28bb0c();
  }
  *(long *)(param_1 + 0x48) = lVar2;
  return;
}



/* Entry: 10a28b6b0; end: 10a28b6bb;  */

void FUN_10a28b6b0(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = (ulong)param_2;
  lVar4 = *(long *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x48);
  uVar5 = (lVar2 - lVar4 >> 3) * -0x3333333333333333;
  if (uVar3 + 1 != uVar5) {
    if ((lVar4 == lVar2) || (uVar5 < uVar3 || uVar5 - uVar3 == 0)) goto LAB_10a28bd70;
    FUN_10a2310cc(lVar4 + uVar3 * 0x28,lVar2 + -0x28);
    lVar4 = *(long *)(param_1 + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
    uVar5 = (lVar2 - lVar4 >> 3) * -0x3333333333333333;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) goto LAB_10a28bd70;
  }
  if (lVar4 != lVar2) {
    lVar2 = lVar2 + -0x28;
    func_0x00010a22fc28();
    *(long *)(param_1 + 0x48) = lVar2;
    return;
  }
LAB_10a28bd70:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28bd74);
  (*pcVar1)();
}



/* Entry: 10a28b6bc; end: 10a28b747;  */

undefined8 * FUN_10a28b6bc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_110bb9f58;
  FUN_10a28ba84(&puStack_28);
  return param_1;
}



/* Entry: 10a28b748; end: 10a28b8df;  */

void FUN_10a28b748(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  code **ppcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  plVar5 = &lStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x3333333333333333);
  lVar3 = lStack_a8 - lStack_b0;
  if (lVar3 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x3333333333333333;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
LAB_10a28b89c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28b8a0);
        (*pcVar1)();
      }
      param_4 = *(long *)(param_1 + 8) + lVar7;
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4a698d,0x1d,param_4,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar8) goto LAB_10a28b89c;
      *(int *)(lStack_b0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lVar3 >> 2 != uVar8);
  }
  pcStack_98 = FUN_10a28baf4;
  appuStack_90[0] = &PTR_DAT_110bb9f88;
  ppcVar4 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar4,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar3 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (param_4 != 0) {
    FUN_10a28b964();
    lVar7 = lVar3;
    FUN_10a28ba04(lVar3,ppcVar4,plVar5,*(undefined8 *)(lVar3 + 8));
    *(long *)(lVar3 + 8) = lVar7;
  }
  return;
}



/* Entry: 10a28b8e0; end: 10a28b963;  */

void FUN_10a28b8e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a28b964(param_1,param_4);
    lVar1 = param_1;
    FUN_10a28ba04(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a28b964; end: 10a28b9ab;  */

undefined1  [16] FUN_10a28b964(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x666666666666667) {
    plVar1 = param_1;
    FUN_10a28b9c0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 5);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a28b9ac();
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x666666666666667) {
    lVar2 = param_2 * 0x28;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar3 = param_2;
    FUN_10a22ec14(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a28b9ac; end: 10a28b9bf;  */

undefined1  [16] FUN_10a28b9ac(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar2 = param_2;
    FUN_10a22ec14(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a28b9c0; end: 10a28ba03;  */

undefined1  [16] FUN_10a28b9c0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    uVar2 = param_2;
    FUN_10a22ec14(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a28ba04; end: 10a28ba83;  */

long FUN_10a28ba04(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    FUN_10a22ec14(param_4,param_2);
    param_4 = param_4 + 0x28;
  }
  return param_4;
}



/* Entry: 10a28ba84; end: 10a28baf3;  */

void FUN_10a28ba84(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a22fc28();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a28baf4; end: 10a28bb0b;  */

void FUN_10a28baf4(void)

{
  return;
}



/* Entry: 10a28bb0c; end: 10a28bc27;  */

long * FUN_10a28bb0c(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar4) {
    FUN_10a28b9ac();
    FUN_10a28bc8c(&plStack_58);
    __Unwind_Resume(param_1);
    plVar2 = param_2;
    if (param_2 != param_3) {
      do {
        FUN_10a2311c0(param_4,plVar2);
        plVar2 = plVar2 + 5;
        param_4 = param_4 + 0x28;
      } while (plVar2 != param_3);
      do {
        param_1 = param_2;
        func_0x00010a22fc28(param_2);
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    return param_1;
  }
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar3 * -0x6666666666666666;
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
    uVar5 = uVar4;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar5 = 0x666666666666666;
  }
  plStack_38 = param_1;
  if (uVar5 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = param_1;
    FUN_10a28b9c0();
  }
  lVar6 = (long)plVar2 + lVar6;
  plStack_58 = plVar2;
  plStack_50 = (long *)lVar6;
  plStack_40 = plVar2 + uVar5 * 5;
  FUN_10a2311c0(lVar6,param_2);
  plVar1 = (long *)(lVar6 + 0x28);
  lVar6 = lVar6 + (*param_1 - param_1[1]);
  plStack_48 = plVar1;
  FUN_10a28bc28(param_1,*param_1,param_1[1],lVar6);
  plStack_58 = (long *)*param_1;
  *param_1 = lVar6;
  param_1[1] = (long)plVar1;
  plStack_40 = (long *)param_1[2];
  param_1[2] = (long)(plVar2 + uVar5 * 5);
  plStack_50 = plStack_58;
  plStack_48 = plStack_58;
  FUN_10a28bc8c(&plStack_58);
  return plVar1;
}



/* Entry: 10a28bc28; end: 10a28bc8b;  */

void FUN_10a28bc28(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      FUN_10a2311c0(param_4,lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + 0x28;
    } while (lVar1 != param_3);
    do {
      func_0x00010a22fc28(param_2);
      param_2 = param_2 + 0x28;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a28bc8c; end: 10a28bd73;  */

long * FUN_10a28bc8c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    func_0x00010a22fc28();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a28bd74; end: 10a28bdc7;  */

void FUN_10a28bd74(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bba810;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
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
  return;
}



/* Entry: 10a28bdc8; end: 10a28be4b;  */

void FUN_10a28bdc8(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a28be80(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}



/* Entry: 10a28be4c; end: 10a28be7f;  */

void FUN_10a28be4c(undefined8 *param_1)

{
  param_1[2] = 0x4000000040000000;
  *(undefined4 *)(param_1 + 3) = 0x40000000;
  *param_1 = &PTR_FUN_110bba810;
  param_1[1] = &UNK_110bba7e0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Entry: 10a28be80; end: 10a28beeb;  */

undefined1 * FUN_10a28be80(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [40];
  
  FUN_10a22ec14(auStack_48);
  FUN_10a4d470c(auStack_48,param_1);
  puVar1 = auStack_48;
  FUN_10a28beec(puVar1,param_2);
  func_0x00010a22fc28(auStack_48);
  return puVar1;
}



/* Entry: 10a28beec; end: 10a28bfeb;  */

bool FUN_10a28beec(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    plVar5 = (long *)(param_1 + 0x10);
    do {
      plVar5 = (long *)*plVar5;
      bVar1 = plVar5 == (long *)0x0;
      if (plVar5 == (long *)0x0) {
        return true;
      }
      lVar2 = param_2;
      FUN_10a26e2a0(param_2,plVar5 + 2);
      if (lVar2 == 0) {
        return bVar1;
      }
      lVar3 = (long)(plVar5 + 2);
      FUN_10a22f138(lVar3,lVar2 + 0x10);
      if ((int)lVar3 == 0) {
        return bVar1;
      }
      uVar4 = (ulong)(plVar5 + 0x10);
      func_0x00010a28bf74(uVar4,lVar2 + 0x80);
    } while ((uVar4 & 1) != 0);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10a28bfec; end: 10a28c0c3;  */

long FUN_10a28bfec(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10a22f7e8();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar1 == plVar4) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10a22f8c4(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10a28c0c4; end: 10a28c12b;  */

void FUN_10a28c0c4(long param_1,undefined8 param_2,long param_3)

{
  if (*(undefined8 **)(param_1 + 0x48) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a28c0e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(param_1 + 0x48))
              (param_2,*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x20));
    return;
  }
  return;
}



/* Entry: 10a28c12c; end: 10a28c1e3;  */

void FUN_10a28c12c(ulong *param_1,long param_2,long *param_3,undefined4 param_4,undefined4 *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lStack_50;
  long *plStack_48;
  
  plVar3 = &lStack_50;
  if (param_6 != 0) {
    lStack_50 = param_2;
    plStack_48 = param_3;
    func_0x0001098af634(&lStack_50,*param_5);
    if ((char)plVar3[3] != '\x01') {
      return;
    }
    FUN_10a26d738(param_3,param_4);
    puVar1 = (undefined8 *)0x113300e78;
    if (*param_3 != -1) {
      puVar1 = (undefined8 *)(param_2 + *param_3);
    }
    if ((*(byte *)(plVar3 + 3) & 1) != 0) {
      if (*param_1 < (ulong)(plVar3[1] - *plVar3 >> 3)) {
        puVar4 = *(undefined8 **)(*plVar3 + *param_1 * 8);
        uVar5 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          uVar5 = *puVar4;
        }
        *puVar1 = uVar5;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a28c1e4);
  (*pcVar2)();
}



/* Entry: 10a28c1e4; end: 10a28c207;  */

void FUN_10a28c1e4(void)

{
  return;
}



/* Entry: 10a28c208; end: 10a28c533;  */

void FUN_10a28c208(long param_1)

{
  if (*(char *)(param_1 + 0x118) == '\x01') {
    func_0x00010a28c264(param_1 + 0xe8);
    func_0x0001092ba41c(param_1 + 0xa0);
    func_0x00010a28c31c(param_1 + 0x90);
    __ZNSt3__15mutexD1Ev(param_1 + 0x50);
    func_0x00010a28c374(param_1 + 0x28);
    func_0x00010a28c474(param_1);
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



/* Entry: 10a28c534; end: 10a28c633;  */

long * FUN_10a28c534(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined **ppuStack_70;
  long lStack_38;
  
  plVar7 = &lStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  plVar4 = param_1;
  FUN_109d1a80c();
  lStack_80 = *plVar4;
  puStack_78 = &UNK_1053a6a3c;
  ppuStack_70 = &PTR_DAT_110ae9180;
  plVar4 = &lStack_80;
  FUN_10a28c634(param_1);
  plVar5 = &lStack_80;
  func_0x0001092ba41c();
  plVar6 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar1 = plStack_88 + 1;
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
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar5 = plVar6;
    }
  }
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x22] = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a28c31c(&lStack_90);
  __Unwind_Resume();
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5[3] = 0;
  plVar5[2] = 0;
  *(undefined4 *)(plVar5 + 4) = 0x3f800000;
  plVar5[6] = 0;
  plVar5[5] = 0;
  plVar5[8] = 0;
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 9) = 0x3f800000;
  plVar5[10] = 0x32aaaba7;
  plVar5[0xc] = 0;
  plVar5[0xb] = 0;
  plVar5[0xe] = 0;
  plVar5[0xd] = 0;
  plVar5[0x10] = 0;
  plVar5[0xf] = 0;
  plVar5[0x11] = 0;
  lVar8 = plVar7[1];
  lVar9 = *plVar7;
  plVar5[0x13] = plVar7[1];
  plVar5[0x12] = lVar9;
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5[0x14] = *plVar4;
  plVar5[0x15] = (long)&UNK_1053a6a3c;
  plVar5[0x16] = (long)&PTR_DAT_110ae9180;
  plVar5[0x15] = plVar4[1];
  plVar6 = plVar4 + 2;
  (**(code **)(*plVar6 + 0x10))(plVar5 + 0x16,plVar6);
  plVar4[1] = (long)&UNK_1053a6a3c;
  (**(code **)*plVar6)(plVar6);
  *plVar6 = (long)&PTR_DAT_110ae9180;
  return plVar5;
}



/* Entry: 10a28c634; end: 10a28c717;  */

undefined8 * FUN_10a28c634(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[10] = 0x32aaaba7;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  lVar3 = param_2[1];
  uVar5 = *param_2;
  param_1[0x13] = param_2[1];
  param_1[0x12] = uVar5;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x14] = *param_3;
  param_1[0x15] = &UNK_1053a6a3c;
  param_1[0x16] = &PTR_DAT_110ae9180;
  param_1[0x15] = param_3[1];
  plVar4 = param_3 + 2;
  (**(code **)(*plVar4 + 0x10))(param_1 + 0x16,plVar4);
  param_3[1] = &UNK_1053a6a3c;
  (**(code **)*plVar4)(plVar4);
  *plVar4 = (long)&PTR_DAT_110ae9180;
  return param_1;
}



/* Entry: 10a28c718; end: 10a28c773;  */

long FUN_10a28c718(long param_1)

{
  if (*(char *)(param_1 + 0x118) == '\x01') {
    func_0x00010a28c264(param_1 + 0xe8);
    func_0x0001092ba41c(param_1 + 0xa0);
    func_0x00010a28c31c(param_1 + 0x90);
    __ZNSt3__15mutexD1Ev(param_1 + 0x50);
    func_0x00010a28c374(param_1 + 0x28);
    func_0x00010a28c474(param_1);
  }
  return param_1;
}



/* Entry: 10a28c774; end: 10a28c837;  */

void FUN_10a28c774(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  uVar4 = 0x28;
  __Znwm(0x28);
  lVar5 = *(long *)(*param_2 + 0x108);
  FUN_10a28c838(uVar4,lVar5,(*(long *)(*param_2 + 0x110) - lVar5 >> 3) * -0x3333333333333333);
  FUN_10a28c8b0(auStack_40,uVar4);
  FUN_10a286fec(param_1,auStack_40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a28c838; end: 10a28c8af;  */

void FUN_10a28c838(undefined8 param_1,long param_2,long param_3)

{
  FUN_10a22ec14(param_1,param_2);
  param_3 = param_3 * 0x28;
  while( true ) {
    param_3 = param_3 + -0x28;
    param_2 = param_2 + 0x28;
    if (param_3 == 0) break;
    FUN_10a4d470c(param_1,param_2);
  }
  return;
}



/* Entry: 10a28c8b0; end: 10a28c923;  */

undefined8 * FUN_10a28c8b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba880;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 10a28c924; end: 10a28c927;  */

void FUN_10a28c924(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a28c928; end: 10a28c95b;  */

void FUN_10a28c928(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28c95c; end: 10a28c993;  */

undefined8 FUN_10a28c95c(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bba8c0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a28c994; end: 10a28c997;  */

void FUN_10a28c994(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a28c998; end: 10a28cb0f;  */

/* WARNING: Removing unreachable block (ram,0x00010a28ca88) */
/* WARNING: Removing unreachable block (ram,0x00010a28ca8c) */
/* WARNING: Removing unreachable block (ram,0x00010a28ca94) */
/* WARNING: Removing unreachable block (ram,0x00010a28ca9c) */
/* WARNING: Removing unreachable block (ram,0x00010a28caa8) */
/* WARNING: Removing unreachable block (ram,0x00010a28cab0) */
/* WARNING: Removing unreachable block (ram,0x00010a28cab8) */
/* WARNING: Removing unreachable block (ram,0x00010a28cabc) */

void FUN_10a28c998(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puStack_38;
  
  puVar5 = (undefined8 *)0xa0;
  __Znwm();
  puVar5[2] = 0;
  puVar5[1] = 0x200000006;
  puVar7 = puVar5 + 3;
  *(undefined2 *)puVar7 = 4;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar7;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_DAT_110ae91c0;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  puStack_38 = puVar5;
  if ((*(byte *)(*param_2 + 0x298) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a28cae0);
    (*pcVar4)();
  }
  FUN_10a4d41d8(*param_2 + 0x180,*(undefined8 *)param_2[1],param_2[2] + 0x10,param_2[3]);
  plVar1 = puVar5 + 2;
  do {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_109d1b4dc(puVar7);
        goto LAB_10a28ca68;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar6 >> 1 & 1) != 0) {
LAB_10a28ca68:
      *param_1 = puVar5;
      func_0x0001092b4274(&puStack_38,puVar5);
      return;
    }
  } while( true );
}



/* Entry: 10a28cb10; end: 10a28cbb7;  */

undefined8 * FUN_10a28cb10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb7828;
  (**(code **)param_1[0xf])();
  (**(code **)param_1[7])();
  FUN_10a26cc38(param_1 + 3);
  return param_1;
}



/* Entry: 10a28cbb8; end: 10a28ce53;  */

/* WARNING: Removing unreachable block (ram,0x00010a28cda8) */
/* WARNING: Removing unreachable block (ram,0x00010a28cdac) */
/* WARNING: Removing unreachable block (ram,0x00010a28cdb4) */
/* WARNING: Removing unreachable block (ram,0x00010a28cdbc) */
/* WARNING: Removing unreachable block (ram,0x00010a28cdc0) */

void FUN_10a28cbb8(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar5 = (undefined8 *)0x208;
  __Znwm();
  lVar7 = param_3;
  if (*(long *)(param_2 + 8) != 0) {
    lVar7 = *(long *)(param_2 + 8);
  }
  plStack_58 = *(long **)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x20) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *puVar5 = &PTR_DAT_110bba660;
  func_0x0001098bae4c(puVar5,&UNK_10e4a714f,0x1e,param_3,lVar7,puVar5 + 0x19,puVar5 + 0x37,in_x7,0,0
                      ,&uStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar5[0x1c] = 0;
  puVar5[0x1b] = 0;
  puVar5[0x1e] = 0;
  puVar5[0x1d] = 0;
  puVar5[0x20] = 0;
  puVar5[0x1f] = 0;
  *puVar5 = &PTR_DAT_110bba660;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  puVar5[0x19] = &PTR_FUN_110bba340;
  puVar5[0x21] = 0;
  puVar5[0x23] = 0;
  puVar5[0x22] = 0;
  puVar5[0x26] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x27) = 0x40000000;
  puVar5[0x24] = &PTR_FUN_110bba6d0;
  puVar5[0x25] = &UNK_110bba6a0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2c] = 0x4000000040000000;
  *(undefined4 *)(puVar5 + 0x2d) = 0x40000000;
  puVar5[0x2a] = &PTR_FUN_110bba6d0;
  puVar5[0x2b] = &UNK_110bba6a0;
  *(undefined1 *)(puVar5 + 0x36) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  *(undefined1 *)(puVar5 + 0x30) = 0;
  lVar7 = puVar5[0xc];
  if (lVar7 == 0) {
    bVar4 = false;
    lVar6 = param_2 + 0x28;
  }
  else {
    bVar4 = lVar7 != puVar5[0xb];
    lVar6 = 0;
    if (!bVar4) {
      lVar6 = param_2 + 0x28;
    }
  }
  *(undefined2 *)(puVar5 + 0x38) = 0;
  puVar5[0x3b] = 0x10a28dbcc;
  puVar5[0x3c] = &UNK_110bba3c8;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  puVar5[0x37] = &PTR_FUN_110bba710;
  if ((!bVar4) && (*(char *)(*(long *)(lVar6 + 0x10) + 8) == '\x01')) {
    puVar5[0x40] = lVar6 + 8;
  }
  if ((lVar7 == 0) || (lVar7 == puVar5[0xb])) {
    FUN_10aaccd54(puVar5 + 0x30);
    puVar5[0x34] = param_3;
    *(undefined1 *)(puVar5 + 0x35) = 0;
    *(undefined1 *)(puVar5 + 0x36) = 1;
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10a28ce54; end: 10a28d00f;  */

void FUN_10a28ce54(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 8;
  *param_1 = &PTR_FUN_110bba340;
  FUN_10a28d628(&puStack_28);
  func_0x0001098bba44(param_1);
  return;
}



/* Entry: 10a28d010; end: 10a28d087;  */

uint FUN_10a28d010(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x70);
  lVar1 = param_1 + 0x150;
  if (lVar4 != param_1 + 0x120) {
    lVar1 = param_1 + 0x120;
  }
  *(long *)(param_1 + 0x78) = lVar1;
  func_0x00010a286b48(lVar1 + 0x20);
  lStack_38 = param_1;
  FUN_10a28dce8(lVar1 + 0x20,&lStack_38);
  if (lVar4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    func_0x00010aacffc4(uVar3,*(undefined8 *)(lVar1 + 0x20));
    uVar2 = (uint)uVar3 ^ 1;
  }
  return uVar2;
}



/* Entry: 10a28d088; end: 10a28d0bf;  */

void FUN_10a28d088(long param_1)

{
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_28 = *(long *)(param_1 + 0x70);
  uStack_20 = *(undefined8 *)(lStack_28 + 0x20);
  plStack_30 = &lStack_18;
  lStack_38 = param_1;
  lStack_18 = param_1;
  FUN_10a28df84(&lStack_38);
  return;
}



/* Entry: 10a28d0c0; end: 10a28d13b;  */

void FUN_10a28d0c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_110bba380;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[1] = 0;
  FUN_10a28d3c8();
  *param_1 = puVar1;
  return;
}



/* Entry: 10a28d13c; end: 10a28d197;  */

void FUN_10a28d13c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (puVar1 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puVar1 = puVar1 + 3;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    FUN_10a28d6b0();
  }
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  return;
}



/* Entry: 10a28d198; end: 10a28d1a3;  */

void FUN_10a28d198(long param_1,int param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_38;
  
  uVar2 = (ulong)param_2;
  lVar3 = *(long *)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x48);
  uVar4 = (lVar6 - lVar3 >> 3) * -0x5555555555555555;
  if (uVar2 + 1 != uVar4) {
    if ((lVar3 == lVar6) || (uVar4 < uVar2 || uVar4 - uVar2 == 0)) goto LAB_10a28d9cc;
    puVar5 = (undefined8 *)(lVar3 + uVar2 * 0x18);
    FUN_10a23141c(puVar5);
    uVar7 = *(undefined8 *)(lVar6 + -0x18);
    puVar5[1] = *(undefined8 *)(lVar6 + -0x10);
    *puVar5 = uVar7;
    puVar5[2] = *(undefined8 *)(lVar6 + -8);
    *(undefined8 *)(lVar6 + -0x18) = 0;
    *(undefined8 *)(lVar6 + -0x10) = 0;
    *(undefined8 *)(lVar6 + -8) = 0;
    lVar3 = *(long *)(param_1 + 0x40);
    lVar6 = *(long *)(param_1 + 0x48);
    uVar4 = (lVar6 - lVar3 >> 3) * -0x5555555555555555;
    if (uVar4 < uVar2 || uVar4 - uVar2 == 0) goto LAB_10a28d9cc;
  }
  if (lVar3 != lVar6) {
    lStack_38 = lVar6 + -0x18;
    FUN_10a22ff44(&lStack_38);
    *(long *)(param_1 + 0x48) = lVar6 + -0x18;
    return;
  }
LAB_10a28d9cc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28d9d0);
  (*pcVar1)();
}



/* Entry: 10a28d1a4; end: 10a28d22f;  */

undefined8 * FUN_10a28d1a4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 1;
  *param_1 = &PTR_FUN_110bba380;
  FUN_10a28d628(&puStack_28);
  return param_1;
}



/* Entry: 10a28d230; end: 10a28d3c7;  */

void FUN_10a28d230(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  code **ppcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **appuStack_90 [7];
  long lStack_58;
  
  plVar5 = &lStack_b0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a26d314(&lStack_b0,
                (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555);
  lVar3 = lStack_a8 - lStack_b0;
  if (lVar3 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      uVar6 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * -0x5555555555555555;
      if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
LAB_10a28d384:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28d388);
        (*pcVar1)();
      }
      param_4 = *(long *)(param_1 + 8) + lVar7;
      plVar2 = param_2;
      func_0x0001098ac018(param_2,&UNK_10e4a7ae5,0x1f,param_4,2,1);
      if ((ulong)(lStack_a8 - lStack_b0 >> 2) <= uVar8) goto LAB_10a28d384;
      *(int *)(lStack_b0 + uVar8 * 4) = (int)plVar2;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar3 >> 2 != uVar8);
  }
  pcStack_98 = FUN_10a28d698;
  appuStack_90[0] = &PTR_DAT_110bba3b0;
  ppcVar4 = &pcStack_98;
  func_0x0001098bb6d0(*param_2 + 0x18,ppcVar4,&lStack_b0);
  (*(code *)*appuStack_90[0])(appuStack_90);
  lVar3 = lStack_b0;
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*appuStack_90[0])(appuStack_90);
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  __Unwind_Resume();
  if (param_4 != 0) {
    FUN_10a28d44c();
    lVar7 = lVar3;
    FUN_10a28d4ec(lVar3,ppcVar4,plVar5,*(undefined8 *)(lVar3 + 8));
    *(long *)(lVar3 + 8) = lVar7;
  }
  return;
}



/* Entry: 10a28d3c8; end: 10a28d44b;  */

void FUN_10a28d3c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10a28d44c(param_1,param_4);
    lVar1 = param_1;
    FUN_10a28d4ec(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10a28d44c; end: 10a28d493;  */

undefined1  [16] FUN_10a28d44c(long *param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    plVar1 = param_1;
    FUN_10a28d4a8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 3);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_10a28d494();
  puVar2 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar3 = (long)param_2 * 0x18;
    __Znwm(lVar3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar3;
    return auVar5;
  }
  func_0x000109ffded8();
  ppuStack_a8 = &puStack_90;
  ppuStack_a0 = &puStack_88;
  uStack_98 = 0;
  puStack_b0 = puVar2;
  plVar1 = param_2;
  puStack_90 = param_4;
  for (; puStack_88 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar1 = (long *)*param_2;
    FUN_10a22fc9c(param_4,plVar1,param_2[1],(param_2[1] - (long)plVar1 >> 3) * 0x2e8ba2e8ba2e8ba3);
    param_4 = puStack_88 + 3;
  }
  uStack_98 = 1;
  FUN_10a28d5ac(&puStack_b0);
  auVar6._8_8_ = plVar1;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 10a28d494; end: 10a28d4a7;  */

undefined1  [16] FUN_10a28d494(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar2 = (long)param_2 * 0x18;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_90 = puVar1;
  plVar3 = param_2;
  puStack_70 = param_4;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar3 = (long *)*param_2;
    FUN_10a22fc9c(param_4,plVar3,param_2[1],(param_2[1] - (long)plVar3 >> 3) * 0x2e8ba2e8ba2e8ba3);
    param_4 = puStack_68 + 3;
  }
  uStack_78 = 1;
  FUN_10a28d5ac(&puStack_90);
  auVar5._8_8_ = plVar3;
  auVar5._0_8_ = param_4;
  return auVar5;
}



/* Entry: 10a28d4a8; end: 10a28d4eb;  */

undefined1  [16] FUN_10a28d4a8(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    lVar1 = (long)param_2 * 0x18;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  uStack_68 = 0;
  uStack_80 = param_1;
  plVar2 = param_2;
  puStack_60 = param_4;
  for (; puStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    plVar2 = (long *)*param_2;
    FUN_10a22fc9c(param_4,plVar2,param_2[1],(param_2[1] - (long)plVar2 >> 3) * 0x2e8ba2e8ba2e8ba3);
    param_4 = puStack_58 + 3;
  }
  uStack_68 = 1;
  FUN_10a28d5ac(&uStack_80);
  auVar4._8_8_ = plVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 10a28d4ec; end: 10a28d5ab;  */

undefined8 * FUN_10a28d4ec(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    FUN_10a22fc9c(param_4,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_10a28d5ac(&uStack_60);
  return param_4;
}



/* Entry: 10a28d5ac; end: 10a28d5df;  */

long FUN_10a28d5ac(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a28d5e0(param_1);
  }
  return param_1;
}



/* Entry: 10a28d5e0; end: 10a28d627;  */

void FUN_10a28d5e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    lStack_28 = lVar1;
    FUN_10a22ff44(&lStack_28);
  }
  return;
}



/* Entry: 10a28d628; end: 10a28d697;  */

void FUN_10a28d628(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_38;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar4 = plVar2[1];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x18;
        lStack_38 = lVar4;
        FUN_10a22ff44(&lStack_38);
      } while (lVar4 != lVar3);
      lVar1 = *(long *)*param_1;
    }
    plVar2[1] = lVar3;
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 10a28d698; end: 10a28d6af;  */

void FUN_10a28d698(void)

{
  return;
}



/* Entry: 10a28d6b0; end: 10a28d7cf;  */

long ** FUN_10a28d6b0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long **pplVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  long *plStack_58;
  long *plStack_50;
  long **pplStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar5 = (lVar7 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar5) {
    FUN_10a28d494();
    func_0x00010a28d884(&plStack_58);
    __Unwind_Resume();
    ppuStack_b0 = &puStack_98;
    ppuStack_a8 = &puStack_90;
    puStack_90 = param_4;
    puVar3 = param_2;
    plStack_b8 = param_1;
    puStack_98 = param_4;
    if (param_2 == param_3) {
      uStack_a0 = 1;
    }
    else {
      do {
        *puStack_90 = 0;
        puStack_90[1] = 0;
        puStack_90[2] = 0;
        uVar8 = *puVar3;
        puStack_90[1] = puVar3[1];
        *puStack_90 = uVar8;
        puStack_90[2] = puVar3[2];
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3 = puVar3 + 3;
        puStack_90 = puStack_90 + 3;
      } while (puVar3 != param_3);
      uStack_a0 = 1;
      do {
        puStack_88 = param_2;
        FUN_10a22ff44(&puStack_88);
        param_2 = param_2 + 3;
      } while (param_2 != param_3);
    }
    pplVar2 = &plStack_b8;
    FUN_10a28d5ac(pplVar2);
    return pplVar2;
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar4 * 0x5555555555555556;
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar6 = uVar5;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar6 = 0xaaaaaaaaaaaaaaa;
  }
  plVar1 = param_1;
  plStack_38 = param_1;
  FUN_10a28d4a8();
  plStack_50 = (long *)((long)plVar1 + lVar7);
  plStack_50[1] = 0;
  plStack_50[2] = 0;
  *plStack_50 = 0;
  uVar8 = *param_2;
  plStack_50[1] = param_2[1];
  *plStack_50 = uVar8;
  plStack_50[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pplVar2 = (long **)(plStack_50 + 3);
  lVar7 = (long)plStack_50 + (*param_1 - param_1[1]);
  plStack_58 = plVar1;
  pplStack_48 = pplVar2;
  plStack_40 = plVar1 + uVar6 * 3;
  FUN_10a28d7d0(param_1,*param_1,param_1[1],lVar7);
  plStack_58 = (long *)*param_1;
  *param_1 = lVar7;
  param_1[1] = (long)pplVar2;
  plStack_40 = (long *)param_1[2];
  param_1[2] = (long)(plVar1 + uVar6 * 3);
  plStack_50 = plStack_58;
  pplStack_48 = (long **)plStack_58;
  func_0x00010a28d884(&plStack_58);
  return pplVar2;
}



/* Entry: 10a28d7d0; end: 10a28d903;  */

void FUN_10a28d7d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined1 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_50 = &puStack_38;
  ppuStack_48 = &puStack_30;
  puStack_30 = param_4;
  puVar1 = param_2;
  uStack_58 = param_1;
  puStack_38 = param_4;
  if (param_2 == param_3) {
    uStack_40 = 1;
  }
  else {
    do {
      *puStack_30 = 0;
      puStack_30[1] = 0;
      puStack_30[2] = 0;
      uVar2 = *puVar1;
      puStack_30[1] = puVar1[1];
      *puStack_30 = uVar2;
      puStack_30[2] = puVar1[2];
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 3;
      puStack_30 = puStack_30 + 3;
    } while (puVar1 != param_3);
    uStack_40 = 1;
    do {
      puStack_28 = param_2;
      FUN_10a22ff44(&puStack_28);
      param_2 = param_2 + 3;
    } while (param_2 != param_3);
  }
  FUN_10a28d5ac(&uStack_58);
  return;
}



/* Entry: 10a28d904; end: 10a28d9cf;  */

void FUN_10a28d904(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_38;
  
  lVar2 = *param_1;
  lVar5 = param_1[1];
  uVar3 = (lVar5 - lVar2 >> 3) * -0x5555555555555555;
  if (param_2 + 1 != uVar3) {
    if ((lVar2 == lVar5) || (uVar3 < param_2 || uVar3 - param_2 == 0)) goto LAB_10a28d9cc;
    puVar4 = (undefined8 *)(lVar2 + param_2 * 0x18);
    FUN_10a23141c(puVar4);
    uVar6 = *(undefined8 *)(lVar5 + -0x18);
    puVar4[1] = *(undefined8 *)(lVar5 + -0x10);
    *puVar4 = uVar6;
    puVar4[2] = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -0x18) = 0;
    *(undefined8 *)(lVar5 + -0x10) = 0;
    *(undefined8 *)(lVar5 + -8) = 0;
    lVar2 = *param_1;
    lVar5 = param_1[1];
    uVar3 = (lVar5 - lVar2 >> 3) * -0x5555555555555555;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) goto LAB_10a28d9cc;
  }
  if (lVar2 != lVar5) {
    lStack_38 = lVar5 + -0x18;
    FUN_10a22ff44(&lStack_38);
    param_1[1] = lVar5 + -0x18;
    return;
  }
LAB_10a28d9cc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a28d9d0);
  (*pcVar1)();
}



/* Entry: 10a28d9d0; end: 10a28da23;  */

void FUN_10a28d9d0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR____cxa_pure_virtual_110b17f40;
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x18);
  param_2[2] = uVar4;
  *param_2 = &PTR_FUN_110bba6d0;
  lVar5 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  param_2[4] = uVar4;
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
  return;
}



/* Entry: 10a28da24; end: 10a28daa7;  */

void FUN_10a28da24(undefined8 *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uStack_34;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  FUN_10a28dadc(uVar2,*(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == 0) {
    uStack_34 = 0x40000000;
  }
  else {
    lVar1 = 0x10;
    if (param_4 != 0) {
      lVar1 = 0x18;
    }
    uStack_34 = *(undefined4 *)(param_2 + lVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10a26d5a0(param_1,&uStack_34,&stack0xffffffffffffffd0,1);
  return;
}


