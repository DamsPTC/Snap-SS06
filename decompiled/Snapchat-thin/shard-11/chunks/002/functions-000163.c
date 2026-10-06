/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108314710; end: 10831475b;  */

long FUN_108314710(long param_1,long param_2)

{
  *(long *)(param_1 + 0x20) = param_1;
  *(undefined8 *)(param_1 + 0x28) = 0x800000000;
  FUN_10831475c(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 10831475c; end: 108314883;  */

long * FUN_10831475c(long *param_1,long *param_2)

{
  int iVar1;
  
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    func_0x0001083147b8(0x3ff0000000000000,param_1,(int)param_2[1]);
    iVar1 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 != 0) && (*param_2 != 0)) {
      _memcpy(*param_1,*param_2,(long)iVar1 << 3);
    }
  }
  return param_1;
}



/* Entry: 108314884; end: 10831488f;  */

void FUN_108314884(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    FUN_1083148c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108314890; end: 1083148c3;  */

void FUN_108314890(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_1083148c4();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083148c4; end: 10831491b;  */

long FUN_1083148c4(long param_1)

{
  FUN_10840f740(param_1 + 0xc0);
  func_0x0001083148f8(param_1 + 0xb8);
  func_0x0001083a261c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10831491c; end: 10831495f;  */

void FUN_10831491c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 4;
      do {
        if (*(int *)(lVar1 + -0x10 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x10 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)();
    return;
  }
  return;
}



/* Entry: 108314960; end: 1083149b7;  */

void FUN_108314960(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined1 uStack_21;
  
  if (0xffffdfe < param_2) {
    FUN_1083149b8(&uStack_21);
  }
  iVar1 = param_2 << 3;
  if (param_2 == 0) {
    iVar1 = 1;
  }
  FUN_1083149f0(param_1,iVar1,8);
  return;
}



/* Entry: 1083149b8; end: 1083149ef;  */

void FUN_1083149b8(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f48cd4c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083149f0);
  (*pcVar1)();
}



/* Entry: 1083149f0; end: 108314a43;  */

long FUN_1083149f0(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1) & -param_3;
  *(uint *)(param_1 + 1) = uVar1;
  if ((int)uVar1 < (int)param_2) {
    FUN_1083163bc(param_1,param_2);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - (int)param_2;
  return *param_1 - (long)(int)uVar1;
}



/* Entry: 108314a44; end: 108314ad7;  */

void FUN_108314a44(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  *param_1 = param_2;
  if (piVar4 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (piVar4 != (int *)0x0) {
    FUN_1083148c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108314ad8; end: 108314b33;  */

void FUN_108314ad8(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar2;
  long *plVar3;
  
  (**(code **)(*param_2 + 0xb0))(param_2,param_1 + 0x28);
  (**(code **)(*param_2 + 0x80))(param_2,param_1 + 0x38);
  FUN_108316658(*(undefined8 *)(param_1 + 0x20),param_2);
  func_0x00010831975c(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*param_2 + 0xa0))(param_2,unaff_x20);
  plVar3 = (long *)(unaff_x20 + 0x28);
  for (plVar1 = plVar3; *plVar1 != 0; plVar1 = (long *)(*plVar1 + 8)) {
  }
  func_0x000108319560();
  while (lVar2 = *plVar3, lVar2 != 0) {
    func_0x000108316618(lVar2,unaff_x19);
    plVar3 = (long *)(lVar2 + 8);
  }
  return;
}



/* Entry: 108314b34; end: 108314be3;  */

void FUN_108314b34(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if ((int)param_2 < 0) {
    FUN_108314eec(&lStack_40);
  }
  FUN_108314f10(param_2,8);
  iVar2 = (int)param_2;
  if (0x7fffffbe < iVar2) {
    FUN_108314f1c(&lStack_40);
  }
  lVar3 = (long)(iVar2 + 0x40);
  __Znwm();
  FUN_10831648c(&lStack_40,lVar3 + 0x40,param_2,iVar2 / 2);
  lVar1 = lStack_40;
  *param_1 = lVar3;
  *(int *)(param_1 + 1) = iVar2 + 0x40;
  lStack_40 = 0;
  param_1[2] = lVar1;
  param_1[3] = lStack_38;
  FUN_108316384(&lStack_40);
  return;
}



/* Entry: 108314be4; end: 108314c2f;  */

void FUN_108314be4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  FUN_108363df0(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 108314c30; end: 108314d67;  */

void FUN_108314c30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 param_10)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  func_0x00010831675c(param_7);
  FUN_108314b34(auStack_70);
  FUN_108314be4(auStack_98,*(undefined4 *)(param_7 + 0x28),*(undefined4 *)(param_7 + 0x2c),param_6);
  uStack_b8 = param_9[1];
  uVar4 = *param_9;
  uStack_a8 = param_9[3];
  uVar6 = param_9[2];
  uStack_c0 = uVar4;
  uStack_b0 = uVar6;
  FUN_1083168b4(auStack_a0,param_7,auStack_98,param_8,&uStack_c0,param_10,auStack_60,0,
                &UNK_10f48cdd6);
  uVar5 = (undefined4)uVar6;
  uVar3 = (undefined4)uVar4;
  FUN_108314dc0(param_7);
  uStack_c0 = CONCAT44(uVar5,uVar3);
  uStack_b8 = CONCAT44(param_5,param_4);
  uStack_d0 = *(undefined8 *)(param_7 + 0x28);
  puVar1 = auStack_70;
  FUN_108314d68(puVar1,auStack_60,auStack_a0,&uStack_c0,&uStack_d0);
  if (*(long *)(*(long *)(puVar1 + 0x20) + 0x28) == 0) {
    puVar2 = (undefined1 *)0x0;
    puStack_c8 = puVar1;
  }
  else {
    puStack_c8 = (undefined1 *)0x0;
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  FUN_10827f928(&puStack_c8);
  func_0x000108314e7c(auStack_a0);
  func_0x000108314e04(auStack_70);
  return;
}



/* Entry: 108314d68; end: 108314dbf;  */

undefined8
FUN_108314d68(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_1;
  *param_1 = 0;
  uStack_28 = *param_3;
  *param_3 = 0;
  func_0x000108314a64(*param_4,param_4[1],param_4[2],param_4[3],*param_5,param_5[1],uVar1,param_2,
                      &uStack_28);
  func_0x000108314e7c(&uStack_28);
  return uVar1;
}



/* Entry: 108314dc0; end: 108314dcf;  */

undefined4 FUN_108314dc0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108314dd0; end: 108314de3;  */

void FUN_108314dd0(void)

{
  func_0x000108314e50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108314de4; end: 108314e03;  */

undefined4 FUN_108314de4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Entry: 108314e04; end: 108314e9f;  */

undefined8 * FUN_108314e04(undefined8 *param_1)

{
  FUN_108316384(param_1 + 2);
  __ZdlPv(*param_1);
  return param_1;
}



/* Entry: 108314ea0; end: 108314eb7;  */

long * FUN_108314ea0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_1 = param_2;
  if (lVar3 != 0) {
    plVar1 = (long *)(lVar3 + 0x28);
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)();
    }
    return plVar1;
  }
  return param_1;
}



/* Entry: 108314eb8; end: 108314eeb;  */

long * FUN_108314eb8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 108314eec; end: 108314f0f;  */

void FUN_108314eec(void)

{
  code *pcVar1;
  
  func_0x000108315058(&UNK_10f48c000);
  func_0x00010831503c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108314f10);
  (*pcVar1)();
}



/* Entry: 108314f10; end: 108314f1b;  */

uint FUN_108314f10(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (0x7fffeffe < param_1) {
    FUN_108314ff4(&uStack_41);
  }
  if ((param_2 & param_2 - 1) != 0) {
    func_0x000108315018(&uStack_42);
  }
  if (0xf < (int)param_2) {
    param_2 = 0x10;
  }
  uVar1 = (0x20 - param_2) + ((param_1 + param_2) - 1 & -param_2);
  uVar2 = uVar1 + 0xfff & 0xfffff000;
  if (0x7fff6ffe < uVar1 - 0x8000) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108314f1c; end: 108314f3f;  */

void FUN_108314f1c(void)

{
  code *pcVar1;
  
  func_0x000108315058(&UNK_10f48c000);
  func_0x00010831503c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108314f40);
  (*pcVar1)();
}



/* Entry: 108314f40; end: 108314ff3;  */

uint FUN_108314f40(uint param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (0x7fffeffe < param_1) {
    FUN_108314ff4(&uStack_41);
  }
  if ((param_2 & param_2 - 1) != 0 || (param_4 & param_4 - 1) != 0) {
    func_0x000108315018(&uStack_42);
  }
  if ((int)param_4 <= (int)param_2) {
    param_2 = param_4;
  }
  uVar1 = ((param_4 + param_3) - param_2) + ((param_1 + param_2) - 1 & -param_2);
  uVar2 = uVar1 + 0xfff & 0xfffff000;
  if (0x7fff6ffe < uVar1 - 0x8000) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 108314ff4; end: 10831503b;  */

void FUN_108314ff4(void)

{
  code *pcVar1;
  
  func_0x000108315058(&UNK_10f48c000);
  func_0x00010831503c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108315018);
  (*pcVar1)();
}



/* Entry: 10831503c; end: 108315063;  */

void FUN_10831503c(undefined8 param_1)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  _vfprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f48cde0,&stack0x00000000);
  return;
}



/* Entry: 108315064; end: 1083150a3;  */

void FUN_108315064(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  auVar1 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x11),*(undefined1 (*) [16])(param_1 + 0x11),8,
                    1);
  uStack_18 = auVar1._8_8_;
  uStack_20 = auVar1._0_8_;
  (**(code **)(*(long *)param_1[0x13] + 0x38))((long *)param_1[0x13],&uStack_20,*param_1);
  return;
}



/* Entry: 1083150a4; end: 1083150cf;  */

uint FUN_1083150a4(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = (*param_2 ^ *param_2 >> 0x10) * -0x7a143595;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
  return uVar1 ^ uVar1 >> 0x10;
}



/* Entry: 1083150d0; end: 1083150f3;  */

undefined8 FUN_1083150d0(undefined8 param_1)

{
  FUN_1083150f4(param_1,0);
  return param_1;
}



/* Entry: 1083150f4; end: 10831519f;  */

void FUN_1083150f4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083151a0; end: 1083151ef;  */

void FUN_1083151a0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_30 = param_2;
  uStack_28 = param_3;
  if (iVar1 <= *param_1 * 2) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_1083151f0(param_1,iVar2);
  }
  FUN_1083152fc(param_1,&uStack_30);
  return;
}



/* Entry: 1083151f0; end: 1083152fb;  */

void FUN_1083151f0(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lStack_48;
  
  uVar1 = param_1[1];
  iVar4 = (int)param_2;
  *param_1 = 0;
  param_1[1] = iVar4;
  plVar7 = (long *)(param_1 + 2);
  lStack_48 = *plVar7;
  *plVar7 = 0;
  uVar8 = (ulong)iVar4;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar6 = ((-(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1) + (long)iVar4
          ) * 8;
  puVar3 = (undefined8 *)(uVar6 + 0x10);
  if (0xffffffffffffffef < uVar6 || SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    puVar3 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar3 = 0x18;
  puVar3[1] = uVar8;
  if (iVar4 != 0) {
    lVar5 = uVar8 * 0x18;
    puVar3 = puVar3 + 2;
    do {
      *(undefined4 *)puVar3 = 0;
      lVar5 = lVar5 + -0x18;
      puVar3 = puVar3 + 3;
    } while (lVar5 != 0);
  }
  func_0x000108315398(plVar7);
  for (lVar5 = 0; (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar5 != 0;
      lVar5 = lVar5 + 0x18) {
    if (*(int *)(lStack_48 + lVar5) != 0) {
      func_0x0001083152fc(param_1,lStack_48 + lVar5 + 8);
    }
  }
  FUN_1083150d0(&lStack_48);
  return;
}



/* Entry: 1083152fc; end: 1083153af;  */

int * FUN_1083152fc(int *param_1,uint *param_2)

{
  int iVar1;
  uint extraout_w8;
  int extraout_w9;
  int extraout_w10;
  int iVar2;
  ulong extraout_x11;
  ulong uVar3;
  uint uVar4;
  ulong extraout_x12;
  ulong uVar5;
  int extraout_w13;
  int *piVar6;
  undefined8 uVar7;
  
  func_0x000108315610(*param_2 & 0xfffff);
  uVar4 = (uint)extraout_x12;
  uVar3 = extraout_x11;
  uVar5 = extraout_x12;
  while( true ) {
    if (uVar4 == 0) {
      return (int *)0x0;
    }
    iVar2 = (int)uVar3;
    piVar6 = (int *)(*(long *)(param_1 + 2) + (long)iVar2 * (long)extraout_w13);
    if (*piVar6 == 0) break;
    if ((extraout_w9 == *piVar6) && (extraout_w8 == (piVar6[2] & 0xfffffU))) {
      *piVar6 = 0;
      uVar7 = *(undefined8 *)param_2;
      *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(piVar6 + 2) = uVar7;
      *piVar6 = extraout_w9;
      return piVar6 + 2;
    }
    iVar1 = 0;
    if (iVar2 < 1) {
      iVar1 = extraout_w10;
    }
    uVar3 = (ulong)((iVar2 + iVar1) - 1);
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar4;
  }
  uVar7 = *(undefined8 *)param_2;
  *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(piVar6 + 2) = uVar7;
  *piVar6 = extraout_w9;
  *param_1 = *param_1 + 1;
  return piVar6 + 2;
}



/* Entry: 1083153b0; end: 1083153e3;  */

long * FUN_1083153b0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1083153e4; end: 108315423;  */

undefined1  [16] FUN_1083153e4(long param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 400) != 0) {
    return *(undefined1 (*) [16])
            (*(long *)(param_1 + 0x188) + (long)*(int *)(param_1 + 400) * 0x18 + -0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108315404);
  (*pcVar1)();
}



/* Entry: 108315424; end: 108315493;  */

void FUN_108315424(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x000108315644();
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_10821a6d8(&uStack_20);
  return;
}



/* Entry: 108315494; end: 108315547;  */

bool FUN_108315494(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  iVar4 = (int)param_2;
  if ((int)param_1[0x32] != 0) {
    if (((*(char *)(param_1[0x31] + (long)(int)param_1[0x32] * 0x18 + -3) == '\x01') &&
        (plVar3 = param_1, (**(code **)(*param_1 + 0x20))(), (int)plVar3 == 0)) &&
       (plVar3 == (long *)0x0 && iVar4 == (int)param_1[4])) {
      bVar2 = (CONCAT44(uVar5,iVar4) ^ param_1[4]) >> 0x20 == 0;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108315510);
  (*pcVar1)();
}



/* Entry: 108315548; end: 10831559b;  */

undefined8 FUN_108315548(void)

{
  return 0;
}



/* Entry: 10831559c; end: 1083155ff;  */

undefined8 * FUN_10831559c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3e320;
  func_0x0001083155d4(param_1 + 0x31);
  *param_1 = &PTR_FUN_110a3e108;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 108315600; end: 108315663;  */

undefined8 FUN_108315600(void)

{
  return 0;
}



/* Entry: 108315664; end: 10831568f;  */

long FUN_108315664(long param_1)

{
  FUN_108315690();
  func_0x000108315bd4(param_1 + 0x18);
  return param_1;
}



/* Entry: 108315690; end: 108315697;  */

ulong FUN_108315690(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x34);
  iVar5 = iVar7 - *(int *)(param_1 + 0x30);
  if (iVar5 <= iVar7 >> 2) {
    iVar5 = iVar7 >> 2;
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (iVar7 <= *(int *)(param_1 + 0x30)) {
    iVar5 = 0;
  }
  uVar6 = 0;
  if (*(ulong *)(param_1 + 0x20) <= uVar3) {
    uVar6 = uVar3 - *(ulong *)(param_1 + 0x20);
  }
  if (uVar6 <= *(ulong *)(param_1 + 0x28)) {
    uVar6 = *(ulong *)(param_1 + 0x28);
  }
  uVar1 = uVar6;
  if (uVar6 <= uVar3 >> 2) {
    uVar1 = uVar3 >> 2;
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = uVar1;
  }
  if ((iVar5 != 0) || (uVar6 = 0, uVar3 != 0)) {
    iVar7 = 0;
    uVar6 = 0;
    lVar4 = *(long *)(param_1 + 8);
    while ((lVar4 != 0 && (uVar6 < uVar3 || iVar7 < iVar5))) {
      lVar2 = *(long *)(lVar4 + 0xe8);
      lVar4 = *(long *)(lVar4 + 0xf0);
      iVar7 = iVar7 + 1;
      FUN_1083159b4(param_1);
      uVar6 = lVar4 + uVar6;
      lVar4 = lVar2;
    }
  }
  return uVar6;
}



/* Entry: 108315698; end: 108315753;  */

ulong FUN_108315698(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x34);
  iVar5 = iVar7 - *(int *)(param_1 + 0x30);
  if (iVar5 <= iVar7 >> 2) {
    iVar5 = iVar7 >> 2;
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (iVar7 <= *(int *)(param_1 + 0x30)) {
    iVar5 = 0;
  }
  uVar6 = 0;
  if (*(ulong *)(param_1 + 0x20) <= uVar3) {
    uVar6 = uVar3 - *(ulong *)(param_1 + 0x20);
  }
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  uVar1 = uVar6;
  if (uVar6 <= uVar3 >> 2) {
    uVar1 = uVar3 >> 2;
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = uVar1;
  }
  if ((iVar5 != 0) || (uVar6 = 0, uVar3 != 0)) {
    iVar7 = 0;
    uVar6 = 0;
    lVar4 = *(long *)(param_1 + 8);
    while ((lVar4 != 0 && (uVar6 < uVar3 || iVar7 < iVar5))) {
      lVar2 = *(long *)(lVar4 + 0xe8);
      lVar4 = *(long *)(lVar4 + 0xf0);
      iVar7 = iVar7 + 1;
      FUN_1083159b4(param_1);
      uVar6 = lVar4 + uVar6;
      lVar4 = lVar2;
    }
  }
  return uVar6;
}



/* Entry: 108315754; end: 1083157d3;  */

void FUN_108315754(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined8 *)(param_2 + 0x10);
  FUN_1083157d4(puVar3,*param_3);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_108315868(param_1,param_2,param_3);
    FUN_108315698(param_2,0);
  }
  else {
    piVar4 = (int *)*puVar3;
    if (piVar4 != (int *)0x0) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *param_1 = piVar4;
  }
  return;
}



/* Entry: 1083157d4; end: 108315867;  */

uint * FUN_1083157d4(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x000108316270();
  uVar4 = *param_2;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = uVar5 - 1 & uVar4;
  uVar3 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 8) + (long)(int)uVar2 * 0x10);
    uVar6 = *puVar1;
    if (uVar6 == 0) break;
    if ((uVar4 == uVar6) && (uVar7 = unaff_x19, func_0x000108346878(), (uVar7 & 1) != 0)) {
      return puVar1 + 2;
    }
    uVar6 = 0;
    if ((int)uVar2 < 1) {
      uVar6 = uVar5;
    }
    uVar2 = (uVar2 + uVar6) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 108315868; end: 1083158db;  */

void FUN_108315868(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int *piStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_1083158dc(&uStack_28);
  piStack_30 = (int *)*param_1;
  if (piStack_30 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_30,0x10);
      if (bVar2) {
        *piStack_30 = *piStack_30 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10831592c(param_2,&piStack_30);
  FUN_108315c94(piStack_30);
  return;
}



/* Entry: 1083158dc; end: 10831592b;  */

void FUN_1083158dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x100;
  __Znwm();
  FUN_108315a5c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10831592c; end: 1083159b3;  */

void FUN_10831592c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lStack_28;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lStack_28 = lVar2;
  FUN_108315a10(param_1 + 2,&lStack_28);
  FUN_108315c94(lStack_28);
  *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
  param_1[5] = param_1[5] + *(long *)(lVar2 + 0xf0);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0xe8) = lVar2;
    *(long *)(lVar2 + 0xe0) = lVar1;
  }
  if (param_1[1] == 0) {
    param_1[1] = lVar2;
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1083159b4; end: 108315a0f;  */

undefined4 FUN_1083159b4(long *param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  lVar13 = *(long *)(param_2 + 0xe0);
  *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
  lVar17 = *(long *)(param_2 + 0xe8);
  param_1[5] = param_1[5] - *(long *)(param_2 + 0xf0);
  if (lVar17 == 0) {
    *param_1 = lVar13;
  }
  else {
    *(long *)(lVar17 + 0xe0) = lVar13;
  }
  if (lVar13 == 0) {
    param_1[1] = lVar17;
  }
  else {
    *(long *)(lVar13 + 0xe8) = lVar17;
  }
  *(long *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined1 *)(param_2 + 0xf8) = 1;
  puVar8 = *(uint **)(param_2 + 0x10);
  plVar2 = param_1 + 2;
  uVar14 = 0;
  uVar5 = *puVar8;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar6 = *(uint *)((long)param_1 + 0x14);
  uVar10 = uVar6 - 1 & uVar5;
  for (; uVar15 = (ulong)uVar10, (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) != uVar14;
      uVar14 = uVar14 + 1) {
    lVar17 = param_1[3];
    puVar1 = (uint *)(lVar17 + (long)(int)uVar10 * 0x10);
    uVar12 = *puVar1;
    if (uVar12 == 0) break;
    if ((uVar5 == uVar12) &&
       (puVar7 = puVar8, func_0x000108346878(puVar8,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x10)),
       (int)puVar7 != 0)) {
      *(int *)plVar2 = (int)*plVar2 + -1;
      uVar16 = uVar15;
      while( true ) {
        uVar5 = (int)uVar15 - 1;
        if ((int)uVar15 < 1) {
          uVar5 = *(int *)((long)param_1 + 0x14) + uVar5;
        }
        uVar15 = (ulong)uVar5;
        uVar10 = *(uint *)(lVar17 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4));
        uVar12 = (uint)uVar16;
        puVar8 = (uint *)(lVar17 + (long)(int)uVar12 * 0x10);
        if (uVar10 == 0) break;
        uVar3 = *(int *)((long)param_1 + 0x14) - 1U & uVar10;
        if ((int)uVar3 < (int)uVar5 || (int)uVar12 <= (int)uVar3) {
          if ((((int)uVar5 <= (int)uVar12) || ((int)uVar12 <= (int)uVar3 && (int)uVar3 < (int)uVar5)
              ) && (uVar16 = uVar15, uVar12 != uVar5)) {
            puVar1 = (uint *)(lVar17 + (long)(int)uVar5 * 0x10);
            if (*puVar8 == 0) {
              uVar9 = *(undefined8 *)(puVar1 + 2);
              puVar1[2] = 0;
              puVar1[3] = 0;
              *(undefined8 *)(puVar8 + 2) = uVar9;
            }
            else {
              uVar9 = *(undefined8 *)(puVar1 + 2);
              puVar1[2] = 0;
              puVar1[3] = 0;
              FUN_108314a44(puVar8 + 2,uVar9);
              uVar10 = *puVar1;
              lVar17 = param_1[3];
            }
            *puVar8 = uVar10;
          }
        }
      }
      FUN_108315c64(puVar8);
      uVar5 = *(uint *)((long)param_1 + 0x14);
      if ((4 < (int)uVar5) && ((int)*plVar2 * 4 <= (int)uVar5)) {
        FUN_108315ca0(plVar2,uVar5 >> 1);
      }
      uVar11 = 1;
      goto LAB_108315ec4;
    }
    uVar12 = 0;
    if ((int)uVar10 < 1) {
      uVar12 = uVar6;
    }
    uVar10 = (uVar10 + uVar12) - 1;
  }
  uVar11 = 0;
LAB_108315ec4:
  uVar4 = 0;
  if ((int)uVar14 < (int)uVar6) {
    uVar4 = uVar11;
  }
  return uVar4;
}



/* Entry: 108315a10; end: 108315a5b;  */

uint * FUN_108315a10(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  long *unaff_x19;
  int *unaff_x20;
  uint *puVar9;
  
  func_0x000108316270();
  if (param_1[1] * 3 <= *param_1 * 4) {
    FUN_108315ca0();
  }
  piVar7 = unaff_x20;
  func_0x000108316270();
  puVar9 = *(uint **)(*unaff_x19 + 0x10);
  uVar5 = *puVar9;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar6 = piVar7[1];
  uVar2 = uVar6 - 1 & uVar5;
  uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar5 == *puVar1) &&
       (puVar8 = puVar9, func_0x000108346878(puVar9,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x10)),
       (int)puVar8 != 0)) {
      func_0x00010831621c();
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar6;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  func_0x00010831621c();
  *unaff_x20 = *unaff_x20 + 1;
  return puVar1 + 2;
}



/* Entry: 108315a5c; end: 108315ac7;  */

undefined4 * FUN_108315a5c(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_2;
  FUN_1083a2584(param_1 + 4,param_3);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_108186568(param_1 + 0x30,0x200);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0x100;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return param_1;
}



/* Entry: 108315ac8; end: 108315b3f;  */

long FUN_108315ac8(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = param_1 + 0xb0;
  uStack_24 = param_2;
  FUN_108315b40(lVar1,&uStack_24);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0xc0;
    func_0x000108315b5c(lVar1,&uStack_24);
    FUN_108315b80(param_1 + 0xb0,lVar1);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 0x18;
    if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
      *(long *)(*(long *)(param_1 + 8) + 0x28) = *(long *)(*(long *)(param_1 + 8) + 0x28) + 0x18;
    }
  }
  return lVar1;
}



/* Entry: 108315b40; end: 108315b7f;  */

void FUN_108315b40(void)

{
  FUN_108315fc8();
  return;
}



/* Entry: 108315b80; end: 108315bf7;  */

void FUN_108315b80(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_28;
  
  iVar1 = param_1[1];
  uStack_28 = param_2;
  if (iVar1 * 3 <= *param_1 * 4) {
    iVar2 = iVar1 << 1;
    if (iVar1 < 1) {
      iVar2 = 4;
    }
    FUN_108316088(param_1,iVar2);
  }
  FUN_10831611c(param_1,&uStack_28);
  return;
}



/* Entry: 108315bf8; end: 108315c0b;  */

void FUN_108315bf8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar2 * -0x10;
      lVar2 = lVar1 + lVar2 * 0x10;
      do {
        lVar2 = lVar2 + -0x10;
        FUN_108315c64(lVar2);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108315c0c; end: 108315c63;  */

void FUN_108315c0c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x10;
      lVar1 = param_2 + lVar1 * 0x10;
      do {
        lVar1 = lVar1 + -0x10;
        FUN_108315c64(lVar1);
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 108315c64; end: 108315c93;  */

void FUN_108315c64(int *param_1)

{
  if (*param_1 != 0) {
    func_0x000108314860(param_1 + 2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 108315c94; end: 108315c9f;  */

void FUN_108315c94(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 != 0) {
    return;
  }
  if (param_1 != (int *)0x0) {
    FUN_1083148c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108315ca0; end: 108315d33;  */

void FUN_108315ca0(void)

{
  undefined8 uVar1;
  int extraout_w8;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  func_0x0001083161cc();
  uVar1 = extraout_x9;
  if (extraout_w8 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  __Znam(uVar1);
  func_0x000108316290();
  if ((int)unaff_x20 != 0) {
    lVar2 = extraout_x9_00 << 4;
    puVar3 = extraout_x8;
    do {
      *puVar3 = 0;
      lVar2 = lVar2 + -0x10;
      puVar3 = puVar3 + 4;
    } while (lVar2 != 0);
  }
  func_0x00010831627c();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 0x10) {
    if (*(int *)(lStack_38 + unaff_x20) != 0) {
      FUN_108315d34();
    }
  }
  func_0x000108315bd4(&lStack_38);
  return;
}



/* Entry: 108315d34; end: 108315def;  */

uint * FUN_108315d34(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int *unaff_x20;
  uint *puVar8;
  
  func_0x000108316270();
  puVar8 = *(uint **)(*param_2 + 0x10);
  uVar5 = *puVar8;
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  uVar6 = *(uint *)(param_1 + 4);
  uVar2 = uVar6 - 1 & uVar5;
  uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(unaff_x20 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar5 == *puVar1) &&
       (puVar7 = puVar8, func_0x000108346878(puVar8,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x10)),
       (int)puVar7 != 0)) {
      func_0x00010831621c();
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar6;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  func_0x00010831621c();
  *unaff_x20 = *unaff_x20 + 1;
  return puVar1 + 2;
}



/* Entry: 108315df0; end: 108315e33;  */

undefined4 * FUN_108315df0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_108315c64();
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 108315e34; end: 108315fc7;  */

undefined4 FUN_108315e34(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar11 = 0;
  uVar4 = *param_2;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  uVar5 = param_1[1];
  uVar8 = uVar5 - 1 & uVar4;
  for (; uVar12 = (ulong)uVar8, (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) != uVar11;
      uVar11 = uVar11 + 1) {
    lVar14 = *(long *)(param_1 + 2);
    puVar1 = (uint *)(lVar14 + (long)(int)uVar8 * 0x10);
    uVar10 = *puVar1;
    if (uVar10 == 0) break;
    if ((uVar4 == uVar10) &&
       (puVar6 = param_2, func_0x000108346878(param_2,*(undefined8 *)(*(long *)(puVar1 + 2) + 0x10))
       , (int)puVar6 != 0)) {
      *param_1 = *param_1 + -1;
      uVar13 = uVar12;
      while( true ) {
        uVar4 = (int)uVar12 - 1;
        if ((int)uVar12 < 1) {
          uVar4 = param_1[1] + uVar4;
        }
        uVar12 = (ulong)uVar4;
        uVar8 = *(uint *)(lVar14 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4));
        uVar10 = (uint)uVar13;
        puVar1 = (uint *)(lVar14 + (long)(int)uVar10 * 0x10);
        if (uVar8 == 0) break;
        uVar2 = param_1[1] - 1U & uVar8;
        if ((int)uVar2 < (int)uVar4 || (int)uVar10 <= (int)uVar2) {
          if ((((int)uVar4 <= (int)uVar10) || ((int)uVar10 <= (int)uVar2 && (int)uVar2 < (int)uVar4)
              ) && (uVar13 = uVar12, uVar10 != uVar4)) {
            puVar6 = (uint *)(lVar14 + (long)(int)uVar4 * 0x10);
            if (*puVar1 == 0) {
              uVar7 = *(undefined8 *)(puVar6 + 2);
              puVar6[2] = 0;
              puVar6[3] = 0;
              *(undefined8 *)(puVar1 + 2) = uVar7;
            }
            else {
              uVar7 = *(undefined8 *)(puVar6 + 2);
              puVar6[2] = 0;
              puVar6[3] = 0;
              FUN_108314a44(puVar1 + 2,uVar7);
              uVar8 = *puVar6;
              lVar14 = *(long *)(param_1 + 2);
            }
            *puVar1 = uVar8;
          }
        }
      }
      FUN_108315c64(puVar1);
      uVar4 = param_1[1];
      if ((4 < (int)uVar4) && (*param_1 * 4 <= (int)uVar4)) {
        FUN_108315ca0(param_1,uVar4 >> 1);
      }
      uVar9 = 1;
      goto LAB_108315ec4;
    }
    uVar10 = 0;
    if ((int)uVar8 < 1) {
      uVar10 = uVar5;
    }
    uVar8 = (uVar8 + uVar10) - 1;
  }
  uVar9 = 0;
LAB_108315ec4:
  uVar3 = 0;
  if ((int)uVar11 < (int)uVar5) {
    uVar3 = uVar9;
  }
  return uVar3;
}



/* Entry: 108315fc8; end: 10831604b;  */

uint * FUN_108315fc8(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *param_2;
  uVar7 = (uVar5 ^ uVar5 >> 0x10) * -0x7a143595;
  uVar7 = uVar7 ^ uVar7 >> 0x10;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar6 = *(uint *)(param_1 + 4);
  uVar2 = uVar7 & uVar6 - 1;
  uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 8) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar7 == *puVar1) && (uVar5 == **(uint **)(puVar1 + 2))) {
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar6;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  return (uint *)0x0;
}



/* Entry: 10831604c; end: 108316087;  */

void FUN_10831604c(undefined4 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x000108316270();
  func_0x0001081865e0();
  *(undefined4 **)(unaff_x20 + 8) = param_1 + 6;
  *param_1 = *(undefined4 *)*unaff_x19;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 108316088; end: 10831611b;  */

void FUN_108316088(void)

{
  undefined8 uVar1;
  int extraout_w8;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long lVar2;
  undefined4 *puVar3;
  long unaff_x20;
  long unaff_x21;
  long lStack_38;
  
  func_0x0001083161cc();
  uVar1 = extraout_x9;
  if (extraout_w8 != 0) {
    uVar1 = 0xffffffffffffffff;
  }
  __Znam(uVar1);
  func_0x000108316290();
  if ((int)unaff_x20 != 0) {
    lVar2 = extraout_x9_00 << 4;
    puVar3 = extraout_x8;
    do {
      *puVar3 = 0;
      lVar2 = lVar2 + -0x10;
      puVar3 = puVar3 + 4;
    } while (lVar2 != 0);
  }
  func_0x00010831627c();
  for (; unaff_x21 != unaff_x20; unaff_x20 = unaff_x20 + 0x10) {
    if (*(int *)(lStack_38 + unaff_x20) != 0) {
      func_0x00010831611c();
    }
  }
  func_0x0001083148f8(&lStack_38);
  return;
}



/* Entry: 10831611c; end: 1083162a3;  */

uint * FUN_10831611c(int *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = (uint *)*param_2;
  uVar5 = *puVar8;
  uVar7 = (uVar5 ^ uVar5 >> 0x10) * -0x7a143595;
  uVar7 = uVar7 ^ uVar7 >> 0x10;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar6 = param_1[1];
  uVar2 = uVar7 & uVar6 - 1;
  uVar3 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar2 * 0x10);
    if (*puVar1 == 0) break;
    if ((uVar7 == *puVar1) && (uVar5 == **(uint **)(puVar1 + 2))) {
      *(uint **)(puVar1 + 2) = puVar8;
      *puVar1 = uVar7;
      return puVar1 + 2;
    }
    uVar4 = 0;
    if ((int)uVar2 < 1) {
      uVar4 = uVar6;
    }
    uVar2 = (uVar2 + uVar4) - 1;
    uVar3 = uVar3 - 1;
  }
  *(uint **)(puVar1 + 2) = puVar8;
  *puVar1 = uVar7;
  *param_1 = *param_1 + 1;
  return puVar1 + 2;
}



/* Entry: 1083162a4; end: 108316383;  */

undefined8 * FUN_1083162a4(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lStack_50;
  ulong uStack_48;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_108316508((long)param_1 + 0xc,param_3,param_4);
  if (param_3 < 0x7fffefff) {
    if (param_4 < 0x7fffefff) {
      if (param_2 != 0) {
        lVar2 = 0x10;
        lStack_50 = param_2;
        uStack_48 = param_3;
        __ZNSt3__15alignEmmRPvRm(0x10,0x10,&lStack_50,&uStack_48);
        if (lVar2 != 0) {
          puVar3 = (undefined8 *)((param_2 + param_3) - 0x10 & 0xfffffffffffffff0);
          *param_1 = puVar3;
          *(int *)(param_1 + 1) = (int)puVar3 - (int)param_2;
          *puVar3 = 0;
          puVar3[1] = 0;
        }
      }
      return param_1;
    }
    func_0x0001083165dc(&UNK_10f48cf8a);
  }
  else {
    func_0x0001083165dc(&UNK_10f48cf76);
  }
  func_0x0001083165d0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108316384);
  (*pcVar1)();
}



/* Entry: 108316384; end: 1083163bb;  */

undefined8 * FUN_108316384(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    plVar2 = (long *)plVar2[1];
    if (lVar1 != 0) {
      __ZdaPv();
    }
  }
  return param_1;
}



/* Entry: 1083163bc; end: 108316433;  */

void FUN_1083163bc(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = (int)param_1 + 0xc;
  FUN_108316434();
  if (param_2 <= iVar1) {
    param_2 = iVar1;
  }
  FUN_108314f10(param_2,8);
  lVar2 = (long)param_2;
  __Znam();
  lVar3 = *param_1;
  plVar4 = (long *)((lVar2 + param_2) - 0x10U & 0xfffffffffffffff0);
  *param_1 = (long)plVar4;
  *plVar4 = lVar2;
  plVar4[1] = lVar3;
  *(int *)(param_1 + 1) = (int)plVar4 - (int)lVar2 & -param_3;
  return;
}



/* Entry: 108316434; end: 10831648b;  */

int FUN_108316434(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  iVar2 = *(int *)(((ulong)uVar1 & 0x3f) * 4 + 0x113256134);
  uVar4 = (uint)((ulong)uVar1 & 0x3f);
  if (uVar4 < 0x2e) {
    uVar3 = 0;
    if (uVar1 >> 6 != 0) {
      uVar3 = 0x7fffefff / (uVar1 >> 6);
    }
    if (*(uint *)((ulong)(uVar4 + 1) * 4 + 0x113256134) < uVar3) {
      *param_1 = uVar1 & 0xffffffc0 | uVar1 + 1 & 0x3f;
    }
  }
  return (uVar1 >> 6) * iVar2;
}



/* Entry: 10831648c; end: 1083164f7;  */

void FUN_10831648c(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  code *pcVar1;
  
  FUN_1083162a4(param_1,param_2,(long)param_3,(long)param_4);
  if (param_3 < 0) {
    func_0x0001083165dc(&UNK_10f48cfad);
  }
  else {
    if (-1 < param_4) {
      return;
    }
    func_0x0001083165dc(&UNK_10f48cfc5);
  }
  func_0x0001083165d0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083164f8);
  (*pcVar1)();
}



/* Entry: 1083164f8; end: 108316507;  */

/* WARNING: Removing unreachable block (ram,0x0001083164c8) */

void FUN_1083164f8(undefined8 param_1,int param_2)

{
  code *pcVar1;
  
  FUN_1083162a4(param_1,0,0,(long)param_2);
  if (param_2 < 0) {
    func_0x0001083165dc(&UNK_10f48cfc5);
    func_0x0001083165d0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083164f8);
    (*pcVar1)();
  }
  return;
}



/* Entry: 108316508; end: 10831656f;  */

uint * FUN_108316508(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  uVar1 = 0x400;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  uVar2 = uVar1 << 6;
  *param_1 = uVar2;
  if ((uVar1 & 0x3ffffff) == 0) {
    FUN_108316570(&uStack_21);
    uVar2 = *param_1;
  }
  if (0xffffffbf < uVar2) {
    func_0x0001083165a0(&uStack_22);
  }
  return param_1;
}



/* Entry: 108316570; end: 1083165cf;  */

void FUN_108316570(void)

{
  code *pcVar1;
  
  FUN_1083165d0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083165a0);
  (*pcVar1)();
}



/* Entry: 1083165d0; end: 1083165eb;  */

void FUN_1083165d0(void)

{
  _vfprintf(*(undefined8 *)PTR____stderrp_11034bdc8,&UNK_10f48cefd,&stack0x00000000);
  return;
}



/* Entry: 1083165ec; end: 108316657;  */

undefined8 * FUN_1083165ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3bad0;
  FUN_108314eb8(param_1 + 1);
  return param_1;
}



/* Entry: 108316658; end: 1083166b3;  */

void FUN_108316658(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = 0;
  for (plVar1 = (long *)(param_1 + 0x28); plVar1 = (long *)*plVar1, plVar1 != (long *)0x0;
      plVar1 = plVar1 + 1) {
    plVar2 = plVar1;
    (**(code **)(*plVar1 + 0x18))();
    iVar3 = (int)plVar2 + iVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001083166b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,iVar3);
  return;
}



/* Entry: 1083166b4; end: 10831678b;  */

void FUN_1083166b4(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *plVar3;
  
  func_0x00010831975c();
  (**(code **)(*param_2 + 0xa0))(param_2);
  plVar3 = (long *)(unaff_x20 + 0x28);
  for (plVar1 = plVar3; *plVar1 != 0; plVar1 = (long *)(*plVar1 + 8)) {
  }
  func_0x000108319560();
  while (lVar2 = *plVar3, lVar2 != 0) {
    func_0x000108316618(lVar2);
    plVar3 = (long *)(lVar2 + 8);
  }
  return;
}



/* Entry: 10831678c; end: 108316897;  */

long FUN_10831678c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar1 = *param_1;
  for (lVar3 = param_1[1] * 0x60; lVar3 != 0; lVar3 = lVar3 + -0x60) {
    lVar2 = *(long *)(lVar1 + 0x10) + lVar2;
    lVar1 = lVar1 + 0x60;
  }
  return lVar2;
}



/* Entry: 108316898; end: 1083168b3;  */

undefined1  [16] FUN_108316898(undefined2 *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)*param_2;
  auVar1._2_2_ = uStack_e;
  auVar1._0_2_ = *param_1;
  auVar1._4_4_ = uStack_c;
  auVar1._8_8_ = *param_2 >> 0x20;
  return auVar1;
}



/* Entry: 1083168b4; end: 10831775b;  */

/* WARNING: Removing unreachable block (ram,0x000108316f24) */
/* WARNING: Removing unreachable block (ram,0x000108316f28) */
/* WARNING: Removing unreachable block (ram,0x000108316f3c) */
/* WARNING: Removing unreachable block (ram,0x000108316f94) */
/* WARNING: Removing unreachable block (ram,0x000108316f98) */
/* WARNING: Removing unreachable block (ram,0x000108316fac) */
/* WARNING: Removing unreachable block (ram,0x000108317004) */
/* WARNING: Removing unreachable block (ram,0x000108317008) */
/* WARNING: Removing unreachable block (ram,0x0001083170b4) */
/* WARNING: Removing unreachable block (ram,0x0001083170b8) */
/* WARNING: Removing unreachable block (ram,0x0001083170cc) */
/* WARNING: Removing unreachable block (ram,0x0001083170e0) */
/* WARNING: Removing unreachable block (ram,0x0001083170d8) */
/* WARNING: Removing unreachable block (ram,0x0001083170f0) */
/* WARNING: Removing unreachable block (ram,0x000108317130) */
/* WARNING: Removing unreachable block (ram,0x000108317134) */
/* WARNING: Removing unreachable block (ram,0x000108317148) */
/* WARNING: Removing unreachable block (ram,0x0001083171c4) */
/* WARNING: Removing unreachable block (ram,0x0001083171c8) */

void FUN_1083168b4(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong *param_5,
                  ulong *param_6,ulong *param_7,int param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  byte *pbVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 in_ZR;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  ulong *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 extraout_x8;
  undefined8 *puVar19;
  ulong *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  ulong *extraout_x8_05;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  int iVar25;
  float *pfVar26;
  uint *puVar27;
  uint *unaff_x26;
  int iVar28;
  float *unaff_x27;
  float fVar29;
  float fVar30;
  ulong uVar31;
  ulong uVar32;
  undefined4 uVar33;
  float fVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  uint in_s4;
  uint in_s5;
  float fVar40;
  byte *pbStack_948;
  ulong uStack_930;
  undefined8 uStack_918;
  undefined1 *puStack_910;
  ulong *puStack_908;
  uint **ppuStack_900;
  uint *puStack_8f8;
  ulong **ppuStack_8f0;
  uint *puStack_8e8;
  uint *puStack_8e0;
  long lStack_8d8;
  uint uStack_8d0;
  uint uStack_8cc;
  uint uStack_8c8;
  undefined4 uStack_8c4;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  ulong uStack_880;
  ulong uStack_878;
  ulong *puStack_870;
  ulong *puStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  ulong *puStack_850;
  uint **ppuStack_848;
  ulong **ppuStack_840;
  uint **ppuStack_838;
  uint uStack_820;
  uint uStack_81c;
  uint uStack_818;
  undefined4 uStack_814;
  long lStack_810;
  uint *puStack_808;
  ulong uStack_800;
  undefined8 uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  float fStack_760;
  float afStack_758 [128];
  float *pfStack_558;
  undefined8 uStack_550;
  uint auStack_548 [32];
  uint *puStack_4c8;
  undefined8 uStack_4c0;
  byte abStack_4b8 [64];
  byte *pbStack_478;
  undefined8 uStack_470;
  undefined1 auStack_468 [512];
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [128];
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  uint auStack_1c8 [64];
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  func_0x0001083195b0();
  puStack_870 = param_7;
  puStack_868 = param_6;
  uStack_b8 = extraout_x8;
  FUN_108318e84();
  uVar21 = param_3[1];
  uVar31 = *param_3;
  uVar39 = param_3[3];
  uVar35 = param_3[2];
  param_7[4] = param_3[4];
  param_7[1] = uVar21;
  *param_7 = uVar31;
  param_7[3] = uVar39;
  param_7[2] = uVar35;
  param_7[5] = 0;
  param_7[6] = (ulong)(param_7 + 5);
  *param_1 = (ulong)param_7;
  if (param_5[3] == 0) goto LAB_108317594;
  uStack_878 = param_5[1];
  uVar31 = *param_5;
  uStack_884 = (undefined4)param_5[2];
  puVar24 = param_2;
  uStack_880 = uVar31;
  FUN_10831775c();
  uVar33 = (undefined4)uVar35;
  unaff_x26 = auStack_1c8;
  uStack_c0 = 0x8000000000;
  puStack_1d8 = auStack_258;
  uStack_1d0 = 0x8000000000;
  puStack_268 = auStack_468;
  uStack_260 = 0x8000000000;
  pbStack_478 = abStack_4b8;
  uStack_470 = 0x8000000000;
  iVar25 = (int)puVar24;
  puStack_c8 = unaff_x26;
  if (iVar25 < 1) {
    if (iVar25 < 0) goto LAB_1083175d0;
  }
  else {
    FUN_108318ebc(0x3ff0000000000000,&puStack_c8,puVar24);
    uVar17 = iVar25 - (int)uStack_c0;
    uVar31 = 0;
    FUN_108318ebc(&puStack_c8,uVar17);
    lVar20 = (long)(int)uStack_c0;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)uStack_c0 + uVar17);
    puVar4 = puStack_c8 + lVar20;
    for (uVar21 = (ulong)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU)); uVar21 != 0;
        uVar21 = uVar21 - 1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  func_0x0001083198e8(auStack_258);
  func_0x0001083190bc(&puStack_268,puVar24);
  if ((int)(uint)uStack_470 < iVar25) {
    if ((uint)uStack_470 == 0) {
      FUN_108319144(0x3ff0000000000000,&pbStack_478,puVar24);
    }
    iVar25 = iVar25 - (uint)uStack_470;
    uVar31 = 0;
    FUN_108319144(&pbStack_478,iVar25);
    iVar25 = (uint)uStack_470 + iVar25;
LAB_108316a78:
    uStack_470 = CONCAT44(uStack_470._4_4_,iVar25);
  }
  else if (iVar25 < (int)(uint)uStack_470) {
    if (((uint)uStack_470 & ((int)(uint)uStack_470 >> 0x1f ^ 0xffffffffU)) <
        (uint)uStack_470 - iVar25) {
LAB_1083175d0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1083175d4);
      (*pcVar7)();
    }
    goto LAB_108316a78;
  }
  puStack_4c8 = auStack_548;
  uStack_4c0 = 0x8000000000;
  unaff_x27 = afStack_758;
  uStack_550 = 0x8000000000;
  pfStack_558 = unaff_x27;
  func_0x0001083198e8();
  func_0x0001083190bc(&pfStack_558,puVar24);
  puVar4 = puStack_4c8;
  pfVar5 = pfStack_558;
  FUN_108314dc0(param_2);
  func_0x000108319938();
  func_0x000108317790(&uStack_800);
  puVar22 = (undefined8 *)*param_2;
  puVar19 = puVar22 + param_2[1] * 0xc;
  uStack_88c = (undefined4)uVar31;
  puVar24 = param_2;
  uStack_888 = uVar33;
  while( true ) {
    fVar30 = (float)uVar31;
    in_ZR = puVar22 == puVar19;
    if ((bool)in_ZR) break;
    puVar27 = (uint *)*puVar22;
    pfVar26 = (float *)puVar22[1];
    puVar1 = puVar22 + 9;
    lVar20 = puVar22[2];
    FUN_108350ae8(puVar1,param_3,&uStack_88c);
    if ((*(uint *)(param_4 + 0x48) & 0xc0) == 0x40) {
      bVar8 = false;
      uVar9 = false;
      uVar10 = false;
      uVar11 = false;
      if (*(float *)(param_4 + 0x40) != 0.0) {
        bVar8 = false;
        uVar9 = false;
        uVar10 = true;
        uVar11 = true;
        if (!NAN(fVar30)) {
          bVar8 = fVar30 < 256.0;
          uVar9 = fVar30 == 256.0;
          uVar10 = 256.0 <= fVar30;
          uVar11 = false;
        }
      }
      if (bVar8) goto LAB_108316b60;
LAB_108316b48:
      uVar31 = 0x43800000;
joined_r0x000108316e94:
      if (lVar20 != 0) {
LAB_108316e98:
        func_0x000108319734();
        uVar31 = (ulong)(uint)ABS(fStack_760);
        func_0x000108319834();
        if ((bool)uVar10 && !(bool)uVar9) {
          func_0x000108319604();
          func_0x00010831978c(&uStack_820);
          func_0x0001083197d8();
          (*extraout_x8_01)(puVar24);
          while (lVar20 != 0) {
            func_0x0001083196d4();
            if (!(bool)uVar11) {
              func_0x000108319960();
              puVar12 = puVar24;
              (*extraout_x8_02)(puVar24,10);
              uVar17 = (uint)((ulong)puVar12 >> 0x36) & 3;
              uVar11 = SBORROW4(uVar17,1);
              if (uVar17 == 1) {
                func_0x000108319590();
                func_0x0001083196f4();
              }
              else {
                uVar11 = SBORROW4(uVar17,2);
                if (uVar17 == 2) {
                  func_0x000108319590();
                  func_0x000108319668();
                }
              }
            }
            func_0x000108319614();
          }
          uVar9 = 1;
          uVar10 = 1;
          uVar11 = 0;
          pfVar26 = (float *)0x0;
          puVar27 = (uint *)0x0;
          func_0x0001083197b8();
          lVar20 = 0;
          func_0x000108319794();
          func_0x0001083196e8();
        }
        func_0x000108319654();
        if (lVar20 != 0) {
          func_0x000108319734();
          uVar31 = (ulong)(uint)ABS(fStack_760);
          func_0x000108319834();
          if ((bool)uVar10 && !(bool)uVar9) {
            func_0x000108319604();
            func_0x00010831978c(&uStack_820);
            func_0x0001083197d8();
            (*extraout_x8_03)(puVar24);
            while (lVar20 != 0) {
              func_0x0001083196d4();
              if (!(bool)uVar11) {
                func_0x000108319960();
                puVar12 = puVar24;
                (*extraout_x8_04)(puVar24,8);
                uVar17 = (uint)((ulong)puVar12 >> 0x34) & 3;
                uVar11 = SBORROW4(uVar17,1);
                if (uVar17 == 1) {
                  func_0x000108319590();
                  func_0x0001083196f4();
                }
                else {
                  uVar11 = SBORROW4(uVar17,2);
                  if (uVar17 == 2) {
                    func_0x000108319590();
                    func_0x000108319668();
                  }
                }
              }
              func_0x000108319614();
            }
            uVar9 = 1;
            uVar10 = 1;
            pfVar26 = (float *)0x0;
            puVar27 = (uint *)0x0;
            func_0x0001083197b8();
            lVar20 = 0;
            func_0x000108319794();
            func_0x0001083196e8();
          }
          func_0x000108319654();
          if (lVar20 != 0) {
            uVar31 = (ulong)(uint)ABS(fVar30);
            func_0x000108319834();
            if ((bool)uVar10 && !(bool)uVar9) {
              uVar31 = *param_3;
              uStack_8b8 = param_3[3];
              uVar21 = param_3[2];
              uStack_8c8 = (uint)param_3[1];
              uStack_8c4 = (undefined4)(param_3[1] >> 0x20);
              uStack_8d0 = (uint)uVar31;
              uStack_8cc = (uint)(uVar31 >> 0x20);
              uStack_8b0 = param_3[4];
              iVar25 = (int)&uStack_8d0;
              uStack_8c0 = uVar21;
              FUN_10828e338();
              fVar30 = (float)uVar31;
              uVar33 = (undefined4)uVar21;
              if (iVar25 != 0) {
                FUN_108314dc0(param_2);
                func_0x000108319938();
                func_0x000108317790(&uStack_800);
                uStack_860 = (undefined8 *)CONCAT44(uVar33,fVar30);
                FUN_108365a88(&uStack_8d0,&uStack_860);
                bVar8 = true;
                if ((0.00024414062 < ABS(fVar30)) && (bVar8 = true, !NAN(fVar30 - fVar30))) {
                  bVar8 = false;
                }
                fVar29 = 1.0;
                if (!bVar8) {
                  fVar29 = SQRT(fVar30);
                }
                func_0x0001083198f4(&uStack_800,fVar29);
                uStack_8c8 = (uint)uStack_7f8;
                uStack_8c4 = (undefined4)((ulong)uStack_7f8 >> 0x20);
                uStack_8d0 = (uint)uStack_800;
                uStack_8cc = (uint)(uStack_800 >> 0x20);
                uStack_8b8 = uStack_7e8;
                uStack_8c0 = uStack_7f0;
                uStack_8b0 = uStack_7e0;
                uVar31 = uStack_800;
              }
              puStack_850 = &uStack_880;
              ppuStack_848 = (uint **)&uStack_884;
              ppuStack_840 = &puStack_868;
              ppuStack_838 = &puStack_8e0;
              puStack_8e0 = puVar27;
              lStack_8d8 = lVar20;
              uStack_860 = puVar1;
              uStack_858 = param_4;
              func_0x000108319884();
              while( true ) {
                fVar30 = (float)uVar31;
                uVar11 = NAN(fVar30);
                if (fVar30 <= 254.0) break;
                uVar31 = (ulong)(uint)(254.0 / fVar30);
                FUN_108364068(uVar31,uVar31,&uStack_8d0);
                func_0x000108319884();
              }
              puVar12 = &uStack_880;
              FUN_1083a2658(&uStack_800,puVar1,param_4,puVar12,uStack_884,&uStack_8d0);
              func_0x000108319604();
              func_0x00010831978c(&puStack_8e8);
              puVar3 = puStack_c8;
              puVar2 = puStack_268;
              pbVar6 = pbStack_478;
              unaff_x26 = puStack_8e8;
              pbStack_948 = pbStack_478;
              puStack_808 = puStack_8e8;
              (**(code **)(*(long *)puStack_8e8 + 0x18))(puStack_8e8);
              unaff_x27 = (float *)0x0;
              iVar25 = 0;
              uVar21 = 0xff7fffff;
              fVar30 = -3.4028235e+38;
              uVar35 = uVar21;
              uVar39 = uVar21;
              uVar38 = uVar21;
              fVar29 = fVar30;
              fVar34 = fVar30;
              while (lVar20 != 0) {
                func_0x0001083196d4();
                uVar17 = in_s4;
                uVar16 = in_s5;
                if (!(bool)uVar11) {
                  puVar24 = (ulong *)((ulong)(ushort)*puVar27 << 2);
                  puVar15 = (undefined1 *)0x4;
                  puVar14 = unaff_x26;
                  puVar12 = puVar24;
                  (**(code **)(*(long *)unaff_x26 + 0x28))();
                  uVar18 = (ushort)((ulong)puVar14 >> 0x30) & 3;
                  uVar11 = SBORROW4(uVar18,1);
                  uStack_918 = puVar14;
                  puStack_910 = puVar15;
                  if (uVar18 == 1) {
                    uVar32 = (ulong)(uint)*pfVar26;
                    uVar37 = (ulong)(uint)pfVar26[1];
                    FUN_1081790bc(uVar32,uVar37,&uStack_8d0);
                    uVar31 = uVar32;
                    uVar36 = uVar37;
                    func_0x0001083167bc(&uStack_918);
                    func_0x0001083167f0(CONCAT44((int)uVar36,(int)uVar31),uVar32,uVar37);
                    func_0x00010831994c();
                    uVar17 = in_s4;
                    uVar16 = in_s5;
                    func_0x000108316818();
                    uStack_81c = in_s4 ^ 0x80000000;
                    uStack_818 = in_s5 ^ 0x80000000;
                    uStack_930 = uStack_930 & 0xffffff0000000000 | (ulong)puVar14 >> 9 & 0x700000000
                    ;
                    uStack_820 = (uint)puVar24;
                    uStack_814 = (undefined4)(uStack_930 >> 0x20);
                    puVar3[iVar25] = uStack_820;
                    *(ulong *)(puVar2 + (long)iVar25 * 8) =
                         CONCAT44(in_s5,in_s4) ^ 0x8000000080000000;
                    pbVar6[iVar25] = (byte)(uint)((ulong)puVar14 >> 0x29) & 7;
                    iVar25 = iVar25 + 1;
                    uVar31 = uVar21;
                  }
                  else {
                    uVar11 = SBORROW4(uVar18,2);
                    uVar17 = in_s4;
                    uVar16 = in_s5;
                    if (uVar18 == 2) {
                      func_0x000108319590();
                      uStack_820 = (uint)puVar14;
                      uStack_81c = (uint)((ulong)puVar14 >> 0x20);
                      uStack_818 = (uint)puVar15;
                      iVar28 = (int)unaff_x27;
                      *(ushort *)((long)puVar4 + (long)iVar28 * 2) = (ushort)puVar14;
                      *(ulong *)(pfVar5 + (long)iVar28 * 2) = CONCAT44(uStack_818,uStack_81c);
                      unaff_x27 = (float *)(ulong)(iVar28 + 1);
                      uVar17 = in_s4;
                      uVar16 = in_s5;
                    }
                  }
                }
                fVar34 = (float)uVar39;
                fVar29 = (float)uVar21;
                fVar30 = (float)uVar38;
                func_0x000108319614();
                in_s4 = uVar17;
                in_s5 = uVar16;
              }
              puVar27 = (uint *)0x0;
              if (iVar25 != 0) {
                puVar27 = puVar3;
              }
              puVar15 = (undefined1 *)0x0;
              if (iVar25 != 0) {
                puVar15 = puVar2;
              }
              FUN_108404bf0(&puStack_808);
              func_0x0001083196e8();
              if ((param_8 == 0) && (iVar25 != 0)) {
                uVar31 = (ulong)(uint)-fVar30;
                uStack_918 = (uint *)CONCAT44(-fVar30,-fVar29);
                puStack_910 = (undefined1 *)CONCAT44(fVar34,(int)uVar35);
                ppuStack_900 = &puStack_8e8;
                puStack_8f8 = &uStack_8d0;
                ppuStack_8f0 = &puStack_870;
                puStack_908 = param_1;
                if (5 < *pbVar6) goto LAB_1083175d0;
                func_0x0001083198fc(0);
                puVar23 = extraout_x8_05;
                while( true ) {
                  if ((ulong *)(long)iVar25 <= puVar24) break;
                  if (5 < (ulong)pbVar6[(long)puVar24]) goto LAB_1083175d0;
                  uVar17 = *(uint *)(&UNK_10df1990c + (ulong)pbVar6[(long)puVar24] * 4);
                  if ((uint)puVar12 != uVar17) {
                    lStack_810 = (long)puVar24 - (long)puVar23;
                    puVar2 = (undefined1 *)0x0;
                    if (lStack_810 != 0) {
                      puVar2 = puVar15 + (long)puVar23 * 8;
                    }
                    puVar3 = (uint *)0x0;
                    if (lStack_810 != 0) {
                      puVar3 = puVar27 + (long)puVar23;
                    }
                    uStack_820 = (uint)puVar3;
                    uStack_81c = (uint)((ulong)puVar3 >> 0x20);
                    uStack_818 = (uint)puVar2;
                    uStack_814 = (undefined4)((ulong)puVar2 >> 0x20);
                    func_0x0001083198b4();
                    puVar12 = (ulong *)(ulong)uVar17;
                    puVar23 = puVar24;
                  }
                  puVar24 = (ulong *)((long)puVar24 + 1);
                }
                lStack_810 = (long)iVar25 - (long)puVar23;
                puVar2 = (undefined1 *)0x0;
                if (lStack_810 != 0) {
                  puVar2 = puVar15 + (long)puVar23 * 8;
                }
                puVar3 = (uint *)0x0;
                if (lStack_810 != 0) {
                  puVar3 = puVar27 + (long)puVar23;
                }
                uStack_820 = (uint)puVar3;
                uStack_81c = (uint)((ulong)puVar3 >> 0x20);
                uStack_818 = (uint)puVar2;
                uStack_814 = (undefined4)((ulong)puVar2 >> 0x20);
                func_0x0001083198b4();
              }
              FUN_1083191b8(&puStack_8e8);
              func_0x000108319654();
            }
          }
        }
      }
    }
    else {
      uVar11 = NAN(fVar30);
      uVar10 = 256.0 <= fVar30;
      uVar9 = fVar30 == 256.0;
      if (256.0 <= fVar30) goto LAB_108316b48;
LAB_108316b60:
      uVar31 = 0x43800000;
      if (lVar20 != 0) {
        puVar12 = param_3;
        FUN_10828e338();
        if (((ulong)puVar12 & 1) != 0) goto LAB_108316e98;
        uVar21 = param_4;
        FUN_1083a2b0c(&uStack_800,puVar1,param_4,&uStack_880,uStack_884,param_3);
        func_0x000108319604();
        func_0x00010831978c(&puStack_8e0);
        puVar14 = puStack_c8;
        puVar2 = puStack_268;
        pbVar6 = pbStack_478;
        puVar3 = puStack_8e0;
        puVar13 = puStack_8e0;
        (**(code **)(*(long *)puStack_8e0 + 0x50))();
        uStack_930 = *(ulong *)(puVar13 + 4);
        puVar13 = puVar3;
        (**(code **)(*(long *)puVar3 + 0x50))();
        uVar31 = (ulong)*puVar13;
        uStack_858 = param_3[1];
        uStack_860 = (undefined8 *)*param_3;
        ppuStack_848 = (uint **)param_3[3];
        puStack_850 = (ulong *)param_3[2];
        ppuStack_840 = (ulong **)param_3[4];
        FUN_108363ef4(uVar31,puVar13[1],&uStack_860);
        uStack_820 = (uint)puVar3;
        uStack_81c = (uint)((ulong)puVar3 >> 0x20);
        (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
        iVar25 = 0;
        iVar28 = 0;
        uVar35 = 0xff7fffff;
        fVar29 = -3.4028235e+38;
        uVar39 = uVar35;
        uVar38 = uVar35;
        uVar36 = uVar35;
        fVar34 = fVar29;
        fVar40 = fVar29;
        while (lVar20 != 0) {
          fVar29 = *pfVar26;
          uVar31 = (ulong)(uint)fVar29;
          fVar34 = pfVar26[1];
          if (!NAN((fVar29 - fVar29) * fVar34)) {
            FUN_1081790bc(&uStack_860);
            puVar24 = (ulong *)(ulong)(ushort)*puVar27;
            uVar32 = uVar31;
            fVar29 = fVar34;
            FUN_108318d84(puVar24,uStack_930);
            uVar21 = (ulong)puVar24 & 0xffffffff;
            puVar15 = (undefined1 *)0x0;
            puVar13 = puVar3;
            (**(code **)(*(long *)puVar3 + 0x28))();
            uVar33 = (undefined4)uVar32;
            uVar17 = (uint)((ulong)puVar13 >> 0x20);
            uVar16 = uVar17 >> 0xc & 3;
            uStack_918 = puVar13;
            puStack_910 = puVar15;
            if (uVar16 == 1) {
              func_0x0001083167bc(&uStack_918);
              uVar16 = (uint)fVar34;
              uVar18 = (uint)(float)uVar31;
              func_0x0001083167f0(CONCAT44(fVar29,uVar33),uVar18,uVar16);
              func_0x00010831994c();
              in_s4 = uVar16;
              in_s5 = uVar18;
              func_0x000108316818();
              uStack_8cc = uVar16 ^ 0x80000000;
              uStack_8c8 = uVar18 ^ 0x80000000;
              pbStack_948 = (byte *)((ulong)pbStack_948 & 0xffffff0000000000 |
                                    (ulong)puVar13 >> 9 & 0x700000000);
              uStack_8d0 = (uint)puVar24;
              uStack_8c4 = (undefined4)((ulong)pbStack_948 >> 0x20);
              puVar14[iVar28] = uStack_8d0;
              *(ulong *)(puVar2 + (long)iVar28 * 8) = CONCAT44(uVar18,uVar16) ^ 0x8000000080000000;
              pbVar6[iVar28] = (byte)(uVar17 >> 9) & 7;
              iVar28 = iVar28 + 1;
              uVar31 = uVar35;
            }
            else {
              uVar31 = uVar32;
              if (uVar16 == 2) {
                func_0x000108319590();
                uStack_8d0 = (uint)puVar13;
                uStack_8cc = (uint)((ulong)puVar13 >> 0x20);
                uStack_8c8 = (uint)puVar15;
                *(ushort *)((long)puVar4 + (long)iVar25 * 2) = (ushort)puVar13;
                *(ulong *)(pfVar5 + (long)iVar25 * 2) = CONCAT44(uStack_8c8,uStack_8cc);
                iVar25 = iVar25 + 1;
                uVar31 = uVar32;
              }
            }
          }
          fVar40 = (float)uVar38;
          fVar34 = (float)uVar39;
          fVar29 = (float)uVar36;
          func_0x000108319614();
        }
        puVar3 = (uint *)0x0;
        if (iVar28 != 0) {
          puVar3 = puVar14;
        }
        puVar15 = (undefined1 *)0x0;
        if (iVar28 != 0) {
          puVar15 = puVar2;
        }
        uVar9 = iVar25 == 0;
        uVar10 = 1;
        uVar11 = 0;
        pfVar26 = (float *)0x0;
        if (!(bool)uVar9) {
          pfVar26 = pfVar5;
        }
        puVar27 = (uint *)0x0;
        if (!(bool)uVar9) {
          puVar27 = puVar4;
        }
        FUN_108404bf0(&uStack_820);
        unaff_x27 = afStack_758;
        if ((param_8 == 0) && (iVar28 != 0)) {
          uVar31 = (ulong)(uint)-fVar29;
          uStack_860 = (undefined8 *)CONCAT44(-fVar29,-(float)uVar35);
          uStack_858 = CONCAT44(fVar40,fVar34);
          ppuStack_848 = &puStack_8e0;
          ppuStack_840 = &puStack_870;
          puStack_850 = param_1;
          if (5 < *pbVar6) goto LAB_1083175d0;
          puVar23 = (ulong *)(long)iVar28;
          func_0x0001083198fc(0);
          puVar12 = extraout_x8_00;
          while( true ) {
            if (puVar23 <= puVar24) break;
            if (5 < (ulong)pbVar6[(long)puVar24]) goto LAB_1083175d0;
            uVar17 = *(uint *)(&UNK_10df1990c + (ulong)pbVar6[(long)puVar24] * 4);
            if ((uint)uVar21 != uVar17) {
              puStack_908 = (ulong *)((long)puVar24 - (long)puVar12);
              puStack_910 = (undefined1 *)0x0;
              if (puStack_908 != (ulong *)0x0) {
                puStack_910 = puVar15 + (long)puVar12 * 8;
              }
              uStack_918 = (uint *)0x0;
              if (puStack_908 != (ulong *)0x0) {
                uStack_918 = puVar3 + (long)puVar12;
              }
              func_0x000108319890();
              uVar21 = (ulong)uVar17;
              puVar12 = puVar24;
            }
            puVar24 = (ulong *)((long)puVar24 + 1);
          }
          uVar10 = puVar12 <= puVar23;
          uVar11 = SBORROW8((long)puVar23,(long)puVar12);
          puStack_908 = (ulong *)((long)puVar23 - (long)puVar12);
          uVar9 = puStack_908 == (ulong *)0x0;
          puStack_910 = (undefined1 *)0x0;
          if (!(bool)uVar9) {
            puStack_910 = puVar15 + (long)puVar12 * 8;
          }
          uStack_918 = (uint *)0x0;
          if (!(bool)uVar9) {
            uStack_918 = puVar3 + (long)puVar12;
          }
          func_0x000108319890();
        }
        lVar20 = (long)iVar25;
        FUN_1083191b8(&puStack_8e0);
        func_0x000108319654();
        unaff_x26 = auStack_1c8;
        goto joined_r0x000108316e94;
      }
    }
    puVar22 = puVar22 + 0xc;
  }
  FUN_1082e7088(unaff_x27 + 0x80);
  func_0x00010831981c(auStack_548);
  func_0x000108319878();
  func_0x00010831989c();
  func_0x00010831981c(auStack_258);
  func_0x000108318e5c(unaff_x26 + 0x40);
LAB_108317594:
  func_0x000108319570(uStack_b8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1082e7088(unaff_x27 + 0x80);
    func_0x00010831981c(auStack_548);
    func_0x000108319878();
    func_0x00010831989c();
    func_0x00010831981c(auStack_258);
    func_0x000108318e5c(unaff_x26 + 0x40);
    func_0x000108314e7c();
    func_0x0001083198c0();
    uVar31 = *param_1;
    uVar21 = 0;
    for (lVar20 = param_1[1] * 0x60; lVar20 != 0; lVar20 = lVar20 + -0x60) {
      uVar35 = *(ulong *)(uVar31 + 0x10);
      if (*(ulong *)(uVar31 + 0x10) <= uVar21) {
        uVar35 = uVar21;
      }
      uVar31 = uVar31 + 0x60;
      uVar21 = uVar35;
    }
    return;
  }
  return;
}



/* Entry: 10831775c; end: 1083177b3;  */

void FUN_10831775c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *param_1;
  uVar3 = 0;
  for (lVar4 = param_1[1] * 0x60; lVar4 != 0; lVar4 = lVar4 + -0x60) {
    uVar1 = *(ulong *)(lVar2 + 0x10);
    if (*(ulong *)(lVar2 + 0x10) <= uVar3) {
      uVar1 = uVar3;
    }
    lVar2 = lVar2 + 0x60;
    uVar3 = uVar1;
  }
  return;
}



/* Entry: 1083177b4; end: 1083178f7;  */

ulong FUN_1083177b4(ulong param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  uint uVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  long *plStack_f8;
  long *plStack_f0;
  undefined1 auStack_e8 [160];
  undefined8 uStack_48;
  
  puVar6 = param_2;
  func_0x0001083195b0();
  uVar9 = (ulong)*(uint *)param_2[3];
  uStack_48 = extraout_x8;
  FUN_1083a2658(auStack_e8,*puVar6,param_2[1],param_2[2]);
  puVar8 = auStack_e8;
  (**(code **)(**(long **)param_2[4] + 0x10))(&plStack_f8,*(long **)param_2[4],puVar8);
  puVar2 = *(ushort **)param_2[5];
  lVar12 = ((undefined8 *)param_2[5])[1];
  plStack_f0 = plStack_f8;
  (**(code **)(*plStack_f8 + 0x18))(plStack_f8);
  uVar10 = 0;
  for (lVar12 = lVar12 << 1; lVar12 != 0; lVar12 = lVar12 + -2) {
    puVar8 = (undefined1 *)0x4;
    (**(code **)(*plStack_f8 + 0x28))(plStack_f8,4,(ulong)*puVar2 << 2);
    uVar11 = (uint)((ulong)puVar8 >> 0x20) & 0xffff;
    uVar5 = (ushort)((ulong)puVar8 >> 0x30);
    if (uVar11 <= uVar5) {
      uVar11 = (uint)uVar5;
    }
    fVar14 = (float)uVar11;
    param_1 = (ulong)(uint)fVar14;
    in_ZR = (float)uVar10 == fVar14;
    if ((float)uVar10 <= fVar14) {
      uVar10 = (ulong)(uint)fVar14;
    }
    puVar2 = puVar2 + 1;
  }
  FUN_108404bf0(&plStack_f0);
  FUN_1083191b8(&plStack_f8);
  func_0x0001083a261c();
  func_0x000108319570(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1083191b8(&plStack_f8);
    puVar7 = auStack_e8;
    func_0x0001083a261c();
    func_0x0001083195a8();
    uVar10 = uVar9;
    func_0x000108319854();
    piVar1 = (int *)(uVar10 + 8);
    for (plVar13 = (long *)(puVar7 + 0x28); plVar13 = (long *)*plVar13, plVar13 != (long *)0x0;
        plVar13 = plVar13 + 1) {
      if (uVar9 != 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      func_0x0001083197ac(*(undefined8 *)(*plVar13 + 0x10),plVar13,puVar8);
      (*extraout_x8_00)();
      func_0x000108319690();
    }
    return param_1;
  }
  return uVar10;
}



/* Entry: 1083178f8; end: 1083179a7;  */

void FUN_1083178f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  code *extraout_x8;
  long *plVar5;
  
  lVar4 = param_4;
  func_0x000108319854();
  piVar1 = (int *)(lVar4 + 8);
  for (plVar5 = (long *)(param_1 + 0x28); plVar5 = (long *)*plVar5, plVar5 != (long *)0x0;
      plVar5 = plVar5 + 1) {
    if (param_4 != 0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001083197ac(*(undefined8 *)(*plVar5 + 0x10),plVar5,param_2);
    (*extraout_x8)();
    func_0x000108319690();
  }
  return;
}



/* Entry: 1083179a8; end: 108317a03;  */

bool FUN_1083179a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)(param_1 + 0x28);
  do {
    plVar2 = (long *)*puVar3;
    if (plVar2 == (long *)0x0) break;
    puVar3 = (ulong *)(plVar2 + 1);
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
  } while (((ulong)plVar1 & 1) != 0);
  return plVar2 == (long *)0x0;
}



/* Entry: 108317a04; end: 108317a77;  */

void FUN_108317a04(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1083149f0(param_2,0xd8,8);
  *param_2 = &PTR_SUB_110a3bb30;
  param_2[1] = 0;
  param_2[2] = &PTR_DAT_110a3bbd8;
  _memcpy(param_2 + 3,param_3,0x50);
  FUN_10831467c(param_2 + 0xd,param_4);
  *param_1 = param_2;
  return;
}



/* Entry: 108317a78; end: 108317abf;  */

void FUN_108317a78(long param_1)

{
  func_0x000108319844();
  if (param_1 != 0) {
    func_0x000108317a9c();
  }
  return;
}



/* Entry: 108317ac0; end: 108317ad3;  */

void FUN_108317ac0(void)

{
  func_0x000108317a9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108317ad4; end: 108317b23;  */

void FUN_108317ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  
  *param_4 = 0;
  uVar1 = 0x100;
  if (*(uint *)(param_1 + 0x18) != 1) {
    uVar1 = 0;
  }
  func_0x000108319748(uVar1 | (ulong)*(uint *)(param_1 + 0x18) << 0x20);
  func_0x000108319690();
  return;
}



/* Entry: 108317b24; end: 108317b3b;  */

int FUN_108317b24(long param_1)

{
  return (*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x80)) * 8 + 0xd8;
}



/* Entry: 108317b3c; end: 108317b67;  */

undefined1 FUN_108317b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_24 [20];
  
  FUN_10831baa4(auStack_24,param_1 + 0x18,param_3);
  return auStack_24[0];
}



/* Entry: 108317b68; end: 108317b6f;  */

long FUN_108317b68(long param_1)

{
  return param_1 + 0x10;
}



/* Entry: 108317b70; end: 108317b9b;  */

void FUN_108317b70(long param_1)

{
  long *unaff_x19;
  long lVar1;
  long unaff_x20;
  
  func_0x00010831975c();
  FUN_10831b8e0(param_1 + 0x18);
  FUN_108404bbc();
  (**(code **)(*unaff_x19 + 0x38))();
  for (lVar1 = *(long *)(unaff_x20 + 0x80) << 3; lVar1 != 0; lVar1 = lVar1 + -8) {
    (**(code **)(*unaff_x19 + 0x48))();
  }
  return;
}



/* Entry: 108317b9c; end: 108317bd3;  */

undefined4 FUN_108317b9c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



/* Entry: 108317bd4; end: 108317eb7;  */

void FUN_108317bd4(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *extraout_x8;
  undefined4 uVar5;
  float fVar6;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  byte abStack_13c [4];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [40];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  int aiStack_e0 [6];
  undefined1 uStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  int iStack_ac;
  char cStack_a8;
  char cStack_a7;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  
  func_0x000108319854();
  FUN_108317fd0(auStack_128,param_3);
  FUN_10831baa4(abStack_13c,param_1 + 0x18,auStack_128);
  if ((fStack_130 <= fStack_138) || (fStack_12c <= fStack_134)) {
LAB_108317c58:
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return;
  }
  uStack_150 = 0;
  uStack_148 = 0;
  fVar6 = fStack_138;
  if (abStack_13c[0] != 1) goto LAB_108317d14;
  fStack_88 = (float)*(int *)(*(long *)(param_6 + 0x10) + 0x90);
  fStack_84 = (float)*(int *)(*(long *)(param_6 + 0x10) + 0x94);
  uStack_90 = 0;
  fStack_a0 = fStack_138;
  fStack_9c = fStack_134;
  fStack_98 = fStack_130;
  fStack_94 = fStack_12c;
  if (param_2 == (long *)0x0) {
    puVar2 = &uStack_90;
    func_0x00010814000c(puVar2,&fStack_a0);
    fVar6 = fStack_138;
    if (((ulong)puVar2 & 1) == 0) goto LAB_108317c58;
LAB_108317d00:
    uStack_160 = 0;
    uStack_158 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x20))(aiStack_e0,param_2,&fStack_a0,0);
    fVar6 = fStack_138;
    if (aiStack_e0[0] != 0) {
      if (aiStack_e0[0] == 1) {
        param_2 = (long *)0x0;
      }
      else if (aiStack_e0[0] == 2) goto LAB_108317c58;
      goto LAB_108317d00;
    }
    if (cStack_a7 != '\x01' || iStack_ac != 1) goto LAB_108317d00;
    if (cStack_a8 == '\x01') {
      iVar1 = (int)auStack_f0;
      FUN_1082772bc();
      fVar6 = fStack_138;
      if (iVar1 == 0) goto LAB_108317d00;
    }
    uStack_100 = 0;
    uStack_f8 = 0;
    func_0x00010827a188(auStack_f0,&uStack_100);
    fVar6 = fStack_98;
    if ((fStack_98 <= fStack_a0) || (fVar6 = fStack_94, fStack_94 <= fStack_9c)) {
LAB_108317e88:
      uStack_158 = uStack_f8;
      uStack_160 = uStack_100;
    }
    else {
      uVar4 = 0;
      fVar6 = fStack_94;
      FUN_10821a6d8();
      if ((((uVar4 & 1) != 0) ||
          (((fVar6 = fStack_a0, fStack_a0 < (float)(int)uStack_100 ||
            (fVar6 = fStack_9c, fStack_9c < (float)uStack_100._4_4_)) ||
           (fVar6 = fStack_98, (float)(int)uStack_f8 < fStack_98)))) ||
         (fVar6 = fStack_94, (float)uStack_f8._4_4_ < fStack_94)) goto LAB_108317e88;
      uStack_160 = 0;
      uStack_158 = 0;
    }
    param_2 = (long *)0x0;
  }
  uStack_148 = uStack_158;
  uStack_150 = uStack_160;
  FUN_10821a6d8(&uStack_150);
LAB_108317d14:
  aiStack_e0[0] = 0;
  aiStack_e0[1] = 0;
  aiStack_e0[2] = 0;
  aiStack_e0[3] = 0;
  aiStack_e0[4] = 0;
  aiStack_e0[5] = 0;
  uStack_c8 = 1;
  uVar5 = 0x3f800000;
  uStack_bc = 0x3f8000003f800000;
  uStack_c4 = 0x3f8000003f800000;
  FUN_10831801c(param_6,param_4,param_3,*(undefined4 *)(param_1 + 0x18),aiStack_e0);
  uStack_90 = CONCAT44(fVar6,uVar5);
  FUN_1082c225c(param_6);
  lVar3 = param_1 + 0x10;
  func_0x0001083197ac(lVar3,param_3);
  FUN_1082eddd4();
  FUN_10831809c(&fStack_a0,*(undefined4 *)(param_1 + 0x18),abStack_13c[0] ^ 1,
                *(undefined4 *)(param_1 + 0x80),&fStack_138,lVar3,param_6 + 0x20,aiStack_e0);
  *extraout_x8 = (long)param_2;
  extraout_x8[1] = CONCAT44(fStack_9c,fStack_a0);
  func_0x00010827ee54(aiStack_e0);
  return;
}



/* Entry: 108317eb8; end: 108317eef;  */

void FUN_108317eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x25;
  
  func_0x0001083195c8();
  func_0x00010831963c(unaff_x25 + 0x18,param_2,param_3,*(undefined8 *)(unaff_x25 + 0x78),
                      *(undefined8 *)(unaff_x25 + 0x80));
  return;
}



/* Entry: 108317ef0; end: 108317f83;  */

void FUN_108317ef0(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  long lStack_18;
  
  uStack_24 = *(undefined4 *)(param_1 + 0x18);
  plVar1 = *(long **)(param_4 + 0x18);
  lStack_18 = param_1 + 0x68;
  uStack_28 = 0;
  uStack_20 = param_3;
  uStack_1c = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&lStack_18,&uStack_1c,&uStack_20,&uStack_24,&uStack_28);
    return;
  }
  func_0x000104bfeb48();
  func_0x000108319844();
  if (plVar1 != (long *)0x0) {
    FUN_108318218();
  }
  return;
}



/* Entry: 108317f84; end: 108317fcf;  */

void FUN_108317f84(undefined4 param_1,undefined4 param_2,long *param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  plStack_28 = param_4;
  uStack_20 = param_7;
  uStack_18 = param_1;
  uStack_14 = param_2;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x30))(param_3,&plStack_28,&uStack_18,param_5,param_6,&uStack_20);
    return;
  }
  func_0x000104bfeb48();
  lStack_78 = param_4[1];
  lStack_80 = *param_4;
  lStack_68 = param_4[3];
  lStack_70 = param_4[2];
  lStack_60 = param_4[4];
  FUN_108363df0(&lStack_80);
  param_3[1] = lStack_78;
  *param_3 = lStack_80;
  param_3[3] = lStack_68;
  param_3[2] = lStack_70;
  param_3[4] = lStack_60;
  return;
}



/* Entry: 108317fd0; end: 10831801b;  */

void FUN_108317fd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  FUN_108363df0(&uStack_50);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = uStack_30;
  return;
}


