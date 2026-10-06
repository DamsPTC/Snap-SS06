/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10828c11c; end: 10828c197;  */

long FUN_10828c11c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010828c178();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x0001078bddd4(param_1 + 0x10,param_2 + 0x10);
  FUN_1082833e8(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x9e) = *(undefined8 *)(param_2 + 0x9e);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return param_1;
}



/* Entry: 10828c198; end: 10828c1d3;  */

void FUN_10828c198(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010828c1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10828c1d4; end: 10828c21b;  */

long * FUN_10828c1d4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if ((char)param_1[0x10] == '\x01') {
    (**(code **)param_1[6])();
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_10810a400(param_1 + 2);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  return param_1;
}



/* Entry: 10828c21c; end: 10828c23f;  */

void FUN_10828c21c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010828c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10828c240; end: 10828c263;  */

undefined8 FUN_10828c240(undefined8 param_1)

{
  FUN_10828c264(param_1,0);
  return param_1;
}



/* Entry: 10828c264; end: 10828c27b;  */

void FUN_10828c264(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10828c298(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10828c27c; end: 10828c297;  */

void FUN_10828c27c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10828c298(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828c298; end: 10828c2c3;  */

long FUN_10828c298(long param_1)

{
  FUN_10828c2c4(param_1 + 0x40);
  func_0x00010828c378(param_1 + 0x20);
  return param_1;
}



/* Entry: 10828c2c4; end: 10828c34b;  */

void FUN_10828c2c4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_28;
  
  lVar1 = param_1;
  FUN_10831a2d4();
  lStack_28 = lVar1 + 0x18;
  func_0x0001081efc58();
  uVar2 = 0;
  do {
    if ((*(uint *)(lVar1 + 0x14) & ((int)*(uint *)(lVar1 + 0x14) >> 0x1f ^ 0xffffffffU)) == uVar2) {
LAB_10828c320:
      FUN_1081efc78(&lStack_28);
      FUN_108410074(param_1 + 0x10);
      FUN_10828c34c(param_1);
      return;
    }
    if (param_1 == *(long *)(*(long *)(lVar1 + 8) + uVar2 * 8)) {
      FUN_10840f328(lVar1);
      goto LAB_10828c320;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Entry: 10828c34c; end: 10828c39b;  */

undefined8 * FUN_10828c34c(undefined8 *param_1)

{
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10828c39c; end: 10828c3af;  */

void FUN_10828c39c(long *param_1)

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
      lVar3 = lVar2 * -0x30;
      lVar2 = lVar1 + lVar2 * 0x30;
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10828c410(lVar2);
        lVar3 = lVar3 + 0x30;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10828c3b0; end: 10828c40f;  */

void FUN_10828c3b0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x30;
      lVar1 = param_2 + lVar1 * 0x30;
      do {
        lVar1 = lVar1 + -0x30;
        FUN_10828c410(lVar1);
        lVar2 = lVar2 + 0x30;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10828c410; end: 10828c43f;  */

void FUN_10828c410(int *param_1)

{
  if (*param_1 != 0) {
    FUN_10828c440(param_1 + 8);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10828c440; end: 10828c473;  */

undefined8 * FUN_10828c440(undefined8 *param_1)

{
  FUN_10828c474();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10828c474; end: 10828c4ab;  */

void FUN_10828c474(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_10828c4ac();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10828c4ac; end: 10828c4f7;  */

long * FUN_10828c4ac(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10828c4f8; end: 10828c51b;  */

undefined8 FUN_10828c4f8(undefined8 param_1)

{
  FUN_10828c51c(param_1,0);
  return param_1;
}



/* Entry: 10828c51c; end: 10828c533;  */

void FUN_10828c51c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1082b4644(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10828c534; end: 10828c54f;  */

void FUN_10828c534(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1082b4644(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828c550; end: 10828c577;  */

undefined8 * FUN_10828c550(undefined8 *param_1)

{
  FUN_10828c578(*param_1);
  return param_1;
}



/* Entry: 10828c578; end: 10828c643;  */

void FUN_10828c578(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010828c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10828c644; end: 10828c673;  */

undefined8 * FUN_10828c644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35160;
  FUN_108267a54(param_1 + 2);
  return param_1;
}



/* Entry: 10828c674; end: 10828c677;  */

undefined8 * FUN_10828c674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35160;
  FUN_108267a54(param_1 + 2);
  return param_1;
}



/* Entry: 10828c678; end: 10828c68b;  */

void FUN_10828c678(void)

{
  FUN_10828c644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828c68c; end: 10828c6b7;  */

undefined8 FUN_10828c68c(void)

{
  return 1;
}



/* Entry: 10828c6b8; end: 10828c79b;  */

void FUN_10828c6b8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = 0xb8;
  __Znwm();
  uStack_68 = *param_3;
  *param_3 = 0;
  uStack_70 = *param_6;
  *param_6 = 0;
  FUN_10828c79c();
  *param_1 = uVar1;
  FUN_1082764bc(&uStack_70);
  FUN_1082764bc(&uStack_68);
  return;
}



/* Entry: 10828c79c; end: 10828c873;  */

undefined8 *
FUN_10828c79c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  
  puVar1 = param_1;
  FUN_1082a8654();
  *puVar1 = &PTR_FUN_110a351c0;
  uVar2 = *param_6;
  *param_6 = 0;
  puVar1[0x11] = uVar2;
  puVar1[0x12] = param_7;
  puVar1[0x13] = param_8;
  puVar1[0x14] = param_4;
  puVar1[0x15] = param_5;
  *(undefined4 *)(puVar1 + 0x16) = param_9;
  *(undefined4 *)((long)puVar1 + 0xb4) = param_10;
  uStack_68 = *param_3;
  *param_3 = 0;
  FUN_1082a8d24();
  FUN_1082764bc(&uStack_68);
  return param_1;
}



/* Entry: 10828c874; end: 10828c91f;  */

void FUN_10828c874(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x70);
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_10828ca30();
    if (*(int *)(param_1 + 0x30) < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10828c8d0);
      (*pcVar1)();
    }
    FUN_10828ca30();
    iVar2 = *(int *)(param_2 + 0x70);
  }
  *(int *)(param_2 + 0x70) = iVar2 + 1;
  return;
}



/* Entry: 10828c920; end: 10828c9d3;  */

void FUN_10828c920(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    if (*(int *)(param_1 + 0x30) < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10828c9d4);
      (*pcVar1)();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
    if ((lVar6 != 0) && (lVar7 = *(long *)(**(long **)(param_1 + 0x28) + 0x10), lVar7 != 0)) {
      uVar2 = (ulong)*(uint *)(param_1 + 0xb4);
      uVar4 = (ulong)*(uint *)(lVar6 + 0xb4);
      FUN_10826c7b0(uVar2,uVar4,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98));
      uVar3 = (ulong)*(uint *)(param_1 + 0xb4);
      uVar5 = (ulong)*(uint *)(lVar7 + 0xb4);
      uStack_40 = uVar2;
      uStack_38 = uVar4;
      FUN_10826c7b0(uVar3,uVar5,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8));
      uStack_50 = uVar3;
      uStack_48 = uVar5;
      FUN_10829f8e4(*(undefined8 *)(param_2 + 0x160),lVar7,&uStack_50,lVar6,&uStack_40,
                    *(undefined4 *)(param_1 + 0xb0));
    }
  }
  return;
}



/* Entry: 10828c9d4; end: 10828c9d7;  */

undefined8 * FUN_10828c9d4(undefined8 *param_1)

{
  FUN_1082764bc(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 10828c9d8; end: 10828c9eb;  */

void FUN_10828c9d8(void)

{
  FUN_10828ca08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828c9ec; end: 10828ca07;  */

bool FUN_10828c9ec(long param_1,long param_2)

{
  return param_2 == *(long *)(param_1 + 0x88);
}



/* Entry: 10828ca08; end: 10828ca2f;  */

undefined8 * FUN_10828ca08(undefined8 *param_1)

{
  FUN_1082764bc(param_1 + 0x11);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 10828ca30; end: 10828ca77;  */

/* WARNING: Removing unreachable block (ram,0x0001082a9774) */
/* WARNING: Removing unreachable block (ram,0x0001082a97f4) */

void FUN_10828ca30(undefined8 param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  long *unaff_x19;
  ulong uStack_58;
  uint uStack_50;
  uint uStack_4c;
  ulong uStack_48;
  
  uVar1 = param_2;
  uStack_50 = param_3;
  uStack_4c = param_3;
  uStack_48 = param_2;
  FUN_1082b1c64();
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
      uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_2 + 0xa4));
      plVar2 = unaff_x19 + 4;
      FUN_1082a982c(plVar2,&uStack_58);
      if (plVar2 == (long *)0x0) {
        plVar2 = unaff_x19 + 0x30f;
        func_0x0001082a984c(plVar2,&uStack_48,&uStack_4c,&uStack_50);
        *(int *)(plVar2 + 3) = (int)plVar2[3] + 1;
        FUN_1082a9870(unaff_x19 + 6,plVar2);
        FUN_1082a98c0(unaff_x19 + 4,uStack_58 & 0xffffffff,plVar2);
      }
      else {
        lVar4 = *plVar2;
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        if (*(uint *)(lVar4 + 0xc) < param_3) {
          *(uint *)(lVar4 + 0xc) = param_3;
        }
      }
    }
    else if ((*(long *)(param_2 + 0x10) == 0) && (*(long *)(param_2 + 0xc0) != 0)) {
      puVar3 = &uStack_58;
      uStack_58 = param_2;
      FUN_1082b239c(puVar3,*(undefined8 *)(*unaff_x19 + 0x80));
      if (((ulong)puVar3 & 1) == 0) {
        *(undefined1 *)(unaff_x19 + 0x315) = 1;
      }
    }
  }
  return;
}



/* Entry: 10828ca78; end: 10828cb73;  */

void FUN_10828ca78(ulong param_1,ulong param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uStack_68;
  
  uStack_68 = 0;
  FUN_10828cb74(param_3,&uStack_68);
  uVar6 = (ulong)(int)param_2;
  uStack_68 = ((long)param_2 >> 0x20) * param_1 * uVar6;
  param_2 = param_2 >> 0x20;
  uVar1 = param_1;
  if (param_1 < 5) {
    uVar1 = 4;
  }
  uVar2 = 0xc;
  if (param_1 != 3) {
    uVar2 = (long)(int)uVar1;
  }
  for (iVar5 = 1; iVar5 < param_4; iVar5 = iVar5 + 1) {
    uVar3 = (int)uVar6 / 2;
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
    uVar6 = (ulong)uVar3;
    uVar3 = (int)param_2 / 2;
    if ((int)uVar3 < 2) {
      uVar3 = 1;
    }
    param_2 = (ulong)uVar3;
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = uStack_68 / uVar2;
    }
    lVar4 = uStack_68 - uVar1 * uVar2;
    if (lVar4 != 0) {
      uStack_68 = (uStack_68 + uVar2) - lVar4;
    }
    FUN_10826852c(param_3,&uStack_68);
    uStack_68 = uStack_68 + param_1 * uVar6 * param_2;
  }
  return;
}



/* Entry: 10828cb74; end: 10828cc03;  */

long * FUN_10828cb74(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    plVar4 = (long *)(*param_1 + (long)iVar3 * 8);
    *plVar4 = *param_2;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_10826b79c(0x3ff8000000000000,param_1,1);
    plVar4 = plVar1 + (int)param_1[1];
    *plVar4 = *param_2;
    FUN_10826b758(param_1,plVar1,uVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  return plVar4;
}



/* Entry: 10828cc04; end: 10828d3a3;  */

long * FUN_10828cc04(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lStack_2a8;
  undefined4 uStack_2a0;
  long lStack_298;
  undefined4 uStack_290;
  undefined2 uStack_282;
  undefined1 auStack_280 [100];
  byte bStack_21c;
  undefined2 uStack_218;
  byte bStack_216;
  undefined1 uStack_215;
  int iStack_214;
  undefined4 uStack_210;
  undefined2 uStack_20a;
  undefined1 auStack_208 [32];
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  long lStack_1e0;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_2[5];
  iVar11 = (int)uVar12;
  bVar7 = true;
  uVar8 = false;
  bVar9 = false;
  if (0 < iVar11) {
    iVar13 = (int)(uVar12 >> 0x20);
    bVar9 = SBORROW4(iVar13,1);
    bVar7 = iVar13 + -1 < 0;
    uVar8 = iVar13 == 1;
  }
  if (bVar7 != bVar9) {
LAB_10828cc94:
    plVar23 = (long *)0x0;
    goto LAB_10828cc98;
  }
  uVar16 = param_1[5];
  iVar13 = (int)uVar16;
  bVar7 = true;
  uVar8 = false;
  bVar9 = false;
  if (0 < iVar13) {
    iVar18 = (int)(uVar16 >> 0x20);
    bVar9 = SBORROW4(iVar18,1);
    bVar7 = iVar18 + -1 < 0;
    uVar8 = iVar18 == 1;
  }
  if ((bVar7 != bVar9) || ((int)param_2[4] == 0)) goto LAB_10828cc94;
  plVar23 = (long *)0x0;
  if (((int)param_1[4] == 0) || ((*param_2 == 0 || (*param_1 == 0)))) goto LAB_10828cc98;
  bVar7 = uVar16 >> 0x20 == uVar12 >> 0x20;
  uVar8 = iVar13 == iVar11 && bVar7;
  if (iVar13 != iVar11 || !bVar7) goto LAB_10828cc94;
  uVar8 = (int)param_1[4] == 0x1d;
  if ((bool)uVar8) {
    func_0x0001082a0bd8(auStack_280,param_1 + 2,7);
    func_0x00010828dd28();
    func_0x00010828dd20();
    plVar23 = (long *)&uStack_1e8;
    FUN_10828cc04(plVar23,param_2,param_3);
    if (((ulong)plVar23 & 1) != 0) {
      puVar14 = (undefined2 *)CONCAT62(uStack_1e6,uStack_1e8);
      puVar15 = (undefined2 *)*param_1;
      for (iVar11 = 0; uVar8 = iVar11 == *(int *)((long)param_1 + 0x2c),
          iVar11 < *(int *)((long)param_1 + 0x2c); iVar11 = iVar11 + 1) {
        puVar19 = puVar15;
        puVar20 = puVar14;
        for (lVar17 = 0; lVar17 < (int)param_1[5]; lVar17 = lVar17 + 1) {
          uVar4 = *puVar20;
          *(undefined1 *)(puVar19 + 1) = *(undefined1 *)(puVar20 + 1);
          *puVar19 = uVar4;
          puVar20 = puVar20 + 2;
          puVar19 = (undefined2 *)((long)puVar19 + 3);
        }
        puVar14 = (undefined2 *)((long)puVar14 + lStack_1e0);
        puVar15 = (undefined2 *)((long)puVar15 + param_1[1]);
      }
    }
LAB_10828ce60:
    func_0x00010827ec18(&uStack_1e8);
    goto LAB_10828cc98;
  }
  if ((int)param_2[4] == 0x1d) {
    func_0x0001082a0bd8(auStack_280,param_2 + 2,7);
    func_0x00010828dd28();
    func_0x00010828dd20();
    puVar14 = (undefined2 *)*param_2;
    puVar15 = (undefined2 *)CONCAT62(uStack_1e6,uStack_1e8);
    for (iVar11 = 0; uVar8 = iVar11 == *(int *)((long)param_2 + 0x2c),
        iVar11 < *(int *)((long)param_2 + 0x2c); iVar11 = iVar11 + 1) {
      puVar19 = puVar15;
      puVar20 = puVar14;
      for (lVar17 = 0; lVar17 < (int)param_2[5]; lVar17 = lVar17 + 1) {
        uVar4 = *puVar20;
        *(undefined1 *)(puVar19 + 1) = *(undefined1 *)(puVar20 + 1);
        *puVar19 = uVar4;
        *(undefined1 *)((long)puVar19 + 3) = 0xff;
        puVar20 = (undefined2 *)((long)puVar20 + 3);
        puVar19 = puVar19 + 2;
      }
      puVar14 = (undefined2 *)((long)puVar14 + param_2[1]);
      puVar15 = (undefined2 *)((long)puVar15 + lStack_1e0);
    }
    FUN_10828d990(auStack_280,&uStack_1e8);
    FUN_10828cc04(param_1,auStack_280,param_3);
    func_0x00010827ed24(auStack_280);
    plVar23 = param_1;
    goto LAB_10828ce60;
  }
  plVar23 = param_2 + 2;
  FUN_10826b4a8();
  plVar10 = param_1 + 2;
  FUN_10826b4a8();
  if (*(int *)((long)param_2 + 0x24) == 3) {
    if (*(int *)((long)param_1 + 0x24) == 2) goto LAB_10828ce30;
LAB_10828ce78:
    lVar17 = param_2[2];
    FUN_108343f98(lVar17,param_1[2]);
    uVar26 = (uint)lVar17 ^ 1;
  }
  else {
    if ((*(int *)((long)param_2 + 0x24) != 2) || (*(int *)((long)param_1 + 0x24) != 3))
    goto LAB_10828ce78;
LAB_10828ce30:
    uVar26 = 1;
  }
  lVar17 = param_2[4];
  if (((int)lVar17 == (int)param_1[4]) && ((uVar26 & 1) == 0)) {
    lVar17 = (long)plVar10 * (long)(int)param_1[5];
    if ((int)param_3 == 0) {
      lVar21 = *param_1;
      lVar1 = param_1[1];
      lVar24 = *param_2;
      lVar2 = param_2[1];
      uVar26 = *(uint *)((long)param_2 + 0x2c);
      uVar8 = lVar17 - lVar1 == 0 && lVar17 - lVar2 == 0;
      if ((bool)uVar8) {
        _memcpy(lVar21,lVar24,lVar17 * (int)uVar26);
      }
      else {
        for (uVar26 = uVar26 & ((int)uVar26 >> 0x1f ^ 0xffffffffU); uVar26 != 0; uVar26 = uVar26 - 1
            ) {
          _memcpy(lVar21,lVar24,lVar17);
          lVar21 = lVar21 + lVar1;
          lVar24 = lVar24 + lVar2;
        }
      }
    }
    else {
      lVar21 = *param_2;
      uVar12 = (ulong)*(int *)((long)param_1 + 0x2c);
      lVar24 = *param_1 + param_1[1] * (uVar12 - 1);
      for (iVar11 = 0; uVar8 = iVar11 == (int)uVar12, iVar11 < (int)uVar12; iVar11 = iVar11 + 1) {
        _memcpy(lVar24,lVar21,lVar17);
        lVar24 = lVar24 - param_1[1];
        lVar21 = lVar21 + param_2[1];
        uVar12 = (ulong)*(uint *)((long)param_1 + 0x2c);
      }
    }
    goto LAB_10828d31c;
  }
  FUN_108266014(&uStack_1e8,&UNK_10f434344);
  uVar27 = 0;
  uVar25 = 0x12;
  switch((int)lVar17) {
  case 0:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
    func_0x00010828dcd8(&UNK_10f481d6b);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10828d344);
    (*pcVar6)();
  case 2:
    goto code_r0x00010828d070;
  case 3:
    func_0x00010828dc30();
    func_0x00010828dc20();
code_r0x00010828d070:
    uVar27 = 0;
    uVar25 = 0x16;
    break;
  case 4:
    goto code_r0x00010828d094;
  case 5:
    uVar27 = 0;
    goto code_r0x00010828d0e8;
  case 6:
    uVar27 = 1;
    goto code_r0x00010828d0e8;
  case 7:
    func_0x00010828dccc();
    func_0x00010828dc30();
    goto code_r0x00010828d0e4;
  case 8:
    goto code_r0x00010828d048;
  case 9:
    func_0x00010828dce8();
    func_0x00010828dc30();
    goto code_r0x00010828d0e4;
  case 10:
    goto code_r0x00010828d0d0;
  case 0xb:
    func_0x00010828dce8();
    func_0x00010828dc30();
    goto code_r0x00010828d0cc;
  case 0xc:
    func_0x00010828dccc();
    func_0x00010828dc30();
code_r0x00010828d0cc:
    func_0x00010828dc20();
code_r0x00010828d0d0:
    uVar27 = 0;
    uVar25 = 0x91;
    break;
  case 0xd:
    uVar27 = 0;
    uVar25 = 0x99;
    break;
  case 0xe:
    func_0x00010828dc30();
    goto code_r0x00010828cff0;
  case 0xf:
    func_0x00010828dc30();
    func_0x00010828dc20();
code_r0x00010828d048:
    uVar27 = 0;
    uVar25 = 0x22;
    break;
  case 0x10:
    uVar27 = 0;
    uVar25 = 0x85;
    break;
  case 0x11:
  case 0x13:
    goto code_r0x00010828d0bc;
  case 0x12:
    func_0x00010828dccc();
    func_0x00010828dc30();
    func_0x00010828dc20();
code_r0x00010828d0bc:
    uVar27 = 0;
    uVar25 = 0x81;
    break;
  case 0x14:
    goto code_r0x00010828d100;
  case 0x15:
    uVar27 = 0;
    uVar25 = 0x79;
    break;
  case 0x16:
    uVar27 = 0;
    uVar25 = 0x7d;
    break;
  case 0x17:
    uVar27 = 0;
    uVar25 = 0x89;
    break;
  case 0x18:
    uVar27 = 0;
    uVar25 = 0x75;
    break;
  case 0x19:
    func_0x00010828dc30();
    goto code_r0x00010828d0e4;
  case 0x1a:
    func_0x00010828dc30();
    func_0x00010828dc20();
code_r0x00010828d100:
    uVar27 = 0;
    uVar25 = 0x8d;
    break;
  case 0x1b:
    func_0x00010828dc30();
    goto code_r0x00010828d0e4;
  case 0x1c:
    func_0x00010828dc30();
code_r0x00010828d0e4:
    func_0x00010828dc20();
    uVar27 = 0;
code_r0x00010828d0e8:
    uVar25 = 0x1e;
    break;
  case 0x1e:
    func_0x00010828dc30();
code_r0x00010828cff0:
    func_0x00010828dc20();
    break;
  case 0x22:
    func_0x00010828dc30();
    goto code_r0x00010828d090;
  case 0x23:
    func_0x00010828dce8();
    func_0x00010828dc30();
code_r0x00010828d090:
    func_0x00010828dc20();
code_r0x00010828d094:
    uVar27 = 0;
    uVar25 = 0x1a;
  }
  uStack_20a = uStack_1e8;
  uVar12 = (ulong)*(uint *)(param_1 + 4);
  FUN_10828d438(uVar12,&uStack_210,&iStack_214,&uStack_215,&bStack_216);
  uStack_218 = (undefined2)uVar12;
  auStack_280[0] = 0;
  bStack_21c = 0;
  uStack_282 = 0x3210;
  if (uVar26 == 0) {
    puVar14 = &uStack_20a;
    FUN_1082819b0(puVar14,&uStack_218);
    uStack_282 = SUB82(puVar14,0);
  }
  else {
    FUN_108344004(auStack_280,param_2[2],*(undefined4 *)((long)param_2 + 0x24),param_1[2],
                  *(undefined4 *)((long)param_1 + 0x24));
    bStack_21c = 1;
  }
  uVar3 = *(uint *)((long)param_2 + 0x2c);
  lStack_298 = *param_2;
  uStack_290 = 0;
  if (plVar23 != (long *)0x0) {
    uStack_290 = (undefined4)((ulong)param_2[1] / (ulong)plVar23);
  }
  lStack_2a8 = *param_1;
  uStack_2a0 = 0;
  if (plVar10 != (long *)0x0) {
    uStack_2a0 = (undefined4)((ulong)param_1[1] / (ulong)plVar10);
  }
  if ((int)param_3 == 0) {
    uVar22 = 1;
    uVar28 = uVar3;
  }
  else {
    lStack_298 = lStack_298 + param_2[1] * ((long)(int)uVar3 + -1);
    uVar28 = 1;
    uVar22 = uVar3;
  }
  uVar8 = iStack_214 == 0;
  uVar3 = uVar26;
  if (!(bool)uVar8) {
    uVar3 = 1;
  }
  FUN_10821a8e4(&uStack_1e8);
  FUN_108387820(&uStack_1e8,uVar25,&lStack_298);
  uVar5 = uVar3 | uVar27 & bStack_216 ^ 1;
  uVar27 = uVar27 & uVar5;
  uVar5 = uVar5 & bStack_216;
  if (((uVar3 & 1) == 0 && uVar27 == 0) && (uVar5 == 0)) {
    puVar14 = &uStack_282;
  }
  else {
    FUN_1083211f4(&uStack_20a,&uStack_1e8);
    if (uVar27 != 0) {
      func_0x000108388124(&uStack_1e8,&UNK_10df2c52c);
    }
    if (uVar26 != 0) {
      if ((bStack_21c & 1) == 0) goto LAB_10828d328;
      func_0x0001083442d0(auStack_280,&uStack_1e8);
    }
    if (iStack_214 == 1) {
      uVar25 = 0x2c;
      uVar8 = true;
LAB_10828d278:
      FUN_108387820(&uStack_1e8,uVar25,0);
    }
    else {
      uVar8 = iStack_214 == 2;
      if ((bool)uVar8) {
        uVar25 = 0x2b;
        goto LAB_10828d278;
      }
    }
    if (uVar5 != 0) {
      func_0x000108388124(&uStack_1e8,&UNK_10df2ccb0);
    }
    puVar14 = &uStack_218;
  }
  FUN_1083211f4(puVar14,&uStack_1e8);
  FUN_108387820(&uStack_1e8,uStack_210,&lStack_2a8);
  FUN_108388788(auStack_208,&uStack_1e8);
  for (uVar22 = uVar22 & ((int)uVar22 >> 0x1f ^ 0xffffffffU); uVar22 != 0; uVar22 = uVar22 - 1) {
    FUN_10828d664(auStack_208,0,0,(long)(int)param_2[5],(long)(int)uVar28);
    lStack_298 = lStack_298 - param_2[1];
    lStack_2a8 = lStack_2a8 + param_1[1];
  }
  FUN_10828dbb8(auStack_208);
  func_0x00010821a970(&uStack_1e8);
LAB_10828d31c:
  plVar23 = (long *)0x1;
LAB_10828cc98:
  func_0x00010828dd40(uStack_70);
  if ((bool)uVar8) {
    return plVar23;
  }
  ___stack_chk_fail();
LAB_10828d328:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10828d330);
  (*pcVar6)();
}



/* Entry: 10828d3a4; end: 10828d437;  */

void FUN_10828d3a4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  lVar1 = param_2;
  FUN_108269618();
  lVar1 = lVar1 * *(int *)(param_2 + 0x1c);
  if (lVar1 == 0) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    FUN_1082a0b6c(auStack_50,param_2);
    FUN_1083464d4(auStack_58,lVar1);
    func_0x00010828dca4();
    FUN_10828d8d0();
    func_0x00010828dc9c();
    func_0x00010828dc6c();
  }
  return;
}



/* Entry: 10828d438; end: 10828d663;  */

undefined2
FUN_10828d438(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined2 uStack_42;
  
  FUN_108266014(&uStack_42,&UNK_10f434344);
  *param_4 = 1;
  *param_5 = 0;
  *param_3 = 0;
  switch(param_1) {
  case 0:
  case 0x1d:
    func_0x00010828dcd8(&UNK_10f481d6b);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10828d664);
    (*pcVar1)();
  case 1:
    goto code_r0x00010828d62c;
  case 3:
    func_0x00010828dc58();
    func_0x00010828dc60();
  case 2:
    uVar2 = 0x18;
    break;
  case 4:
    goto code_r0x00010828d60c;
  case 5:
    goto code_r0x00010828d5f4;
  case 6:
    *param_2 = 0x20;
    *param_5 = 1;
    return uStack_42;
  case 7:
    func_0x00010828dccc();
    goto code_r0x00010828d5ec;
  case 9:
    func_0x00010828dce8();
    goto code_r0x00010828d5ec;
  case 10:
    goto code_r0x00010828d564;
  case 0xb:
    func_0x00010828dce8();
    goto code_r0x00010828d55c;
  case 0xc:
    func_0x00010828dccc();
code_r0x00010828d55c:
    func_0x00010828dc58();
    func_0x00010828dc60();
code_r0x00010828d564:
    uVar2 = 0x93;
    break;
  case 0xd:
    uVar2 = 0x9b;
    break;
  case 0xe:
    *param_3 = 2;
    goto code_r0x00010828d62c;
  case 0xf:
    *param_3 = 1;
    func_0x00010828dc58();
    func_0x00010828dc60();
  case 8:
    uVar2 = 0x24;
    break;
  case 0x10:
    uVar2 = 0x87;
    goto code_r0x00010828d618;
  case 0x12:
    func_0x00010828dccc();
    func_0x00010828dc58();
    func_0x00010828dc60();
  case 0x11:
    uVar2 = 0x83;
    goto code_r0x00010828d618;
  case 0x13:
    uVar2 = 0x83;
    break;
  case 0x14:
    uVar2 = 0x8f;
    goto code_r0x00010828d618;
  case 0x16:
    uVar2 = 0x7f;
    break;
  case 0x17:
    uVar2 = 0x8b;
code_r0x00010828d618:
    *param_2 = uVar2;
    *param_4 = 0;
    return uStack_42;
  case 0x18:
    uVar2 = 0x77;
    break;
  case 0x19:
    uVar2 = 0x20;
    goto code_r0x00010828d5cc;
  case 0x1a:
    uVar2 = 0x8f;
code_r0x00010828d5cc:
    *param_2 = uVar2;
code_r0x00010828d5d8:
    func_0x00010828dc58();
    func_0x00010828dc60();
    return uStack_42;
  case 0x1b:
    *param_3 = 1;
    *param_2 = 0x20;
    goto code_r0x00010828d5d8;
  case 0x1c:
code_r0x00010828d5ec:
    func_0x00010828dc58();
    func_0x00010828dc60();
code_r0x00010828d5f4:
    uVar2 = 0x20;
    break;
  case 0x1e:
    func_0x00010828dc38();
    func_0x00010828dc60();
code_r0x00010828d62c:
    uVar2 = 0x14;
    break;
  case 0x1f:
    func_0x00010828dc38();
    func_0x00010828dc60();
  case 0x15:
    uVar2 = 0x7b;
    break;
  case 0x20:
    func_0x00010828dc38();
    func_0x00010828dc60();
    goto code_r0x00010828d53c;
  case 0x21:
    *param_3 = 2;
code_r0x00010828d53c:
    uVar2 = 0x87;
    break;
  case 0x22:
    goto code_r0x00010828d604;
  case 0x23:
    func_0x00010828dce8();
code_r0x00010828d604:
    func_0x00010828dc58();
    func_0x00010828dc60();
code_r0x00010828d60c:
    uVar2 = 0x1c;
    break;
  default:
    goto LAB_10828d634;
  }
  *param_2 = uVar2;
LAB_10828d634:
  return uStack_42;
}



/* Entry: 10828d664; end: 10828d69b;  */

void FUN_10828d664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_30 = param_5;
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_10828dc00(param_1,&uStack_18,&uStack_20,&uStack_28,&uStack_30);
  return;
}



/* Entry: 10828d69c; end: 10828d8cf;  */

undefined8
FUN_10828d69c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             ulong param_5,undefined8 *param_6,ulong param_7)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x21;
  undefined8 *puStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [34];
  undefined2 uStack_22e;
  undefined4 uStack_22c;
  char cStack_226;
  undefined1 uStack_225;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_98 [64];
  undefined8 uStack_58;
  
  uVar2 = 0;
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_220 = param_1;
  uStack_21c = param_2;
  uStack_218 = param_3;
  uStack_214 = param_4;
  if ((((*(int *)(param_5 + 0x10) == 0) ||
       (bVar1 = *(int *)(param_5 + 0x14) == 0, in_ZR = !bVar1 && *(int *)(param_5 + 0x18) == 1,
       bVar1 || *(int *)(param_5 + 0x18) < 1)) ||
      (uVar2 = 0, unaff_x21 = param_6, param_6 == (undefined8 *)0x0)) ||
     (in_ZR = *(int *)(param_5 + 0x1c) == 1, *(int *)(param_5 + 0x1c) < 1)) goto LAB_10828d878;
  uVar3 = param_5;
  FUN_108269618();
  in_ZR = param_7 == uVar3;
  if (param_7 < uVar3) {
    uVar2 = 0;
    goto LAB_10828d878;
  }
  uVar3 = (ulong)*(uint *)(param_5 + 0x10);
  if (*(uint *)(param_5 + 0x10) == 0x1d) {
    puVar4 = &uStack_210;
    uStack_210 = param_1;
    uStack_20c = param_2;
    uStack_208 = param_3;
    uStack_204 = param_4;
    FUN_108343610();
    for (lVar5 = 0; in_ZR = lVar5 == *(int *)(param_5 + 0x1c), lVar5 < *(int *)(param_5 + 0x1c);
        lVar5 = lVar5 + 1) {
      puVar7 = (undefined8 *)((long)param_6 + lVar5 * param_7);
      for (iVar6 = 0; iVar6 < *(int *)(param_5 + 0x18); iVar6 = iVar6 + 1) {
        *(short *)puVar7 = (short)puVar4;
        *(char *)((long)puVar7 + 2) = (char)((ulong)puVar4 >> 0x10);
        puVar7 = (undefined8 *)((long)puVar7 + 3);
      }
    }
  }
  else {
    FUN_10828d438(uVar3,&uStack_22c,&iStack_224,&uStack_225,&cStack_226);
    uStack_22e = (undefined2)uVar3;
    FUN_10840f6d0(auStack_250,auStack_98,0x40,0x400);
    FUN_10821a8e4(&uStack_210);
    func_0x000108387d70(&uStack_210,auStack_250,&uStack_220);
    if (iStack_224 == 1) {
      uVar2 = 0x2c;
LAB_10828d7f8:
      FUN_108387820(&uStack_210,uVar2,0);
    }
    else if (iStack_224 == 2) {
      uVar2 = 0x2b;
      goto LAB_10828d7f8;
    }
    in_ZR = cStack_226 == '\x01';
    if ((bool)in_ZR) {
      func_0x000108388124(&uStack_210,&UNK_10df2ccb0);
    }
    FUN_1083211f4(&uStack_22e,&uStack_210);
    uVar3 = param_5;
    puStack_260 = param_6;
    FUN_10826b4a8();
    uStack_258 = 0;
    if (uVar3 != 0) {
      uStack_258 = (undefined4)(param_7 / uVar3);
    }
    FUN_108387820(&uStack_210,uStack_22c,&puStack_260);
    FUN_108388618(&uStack_210,0,0,(long)*(int *)(param_5 + 0x18),(long)*(int *)(param_5 + 0x1c));
    func_0x00010821a970(&uStack_210);
    FUN_10840f740(auStack_250);
  }
  uVar2 = 1;
LAB_10828d878:
  func_0x00010828dd40(uStack_58);
  if ((bool)in_ZR) {
    return uVar2;
  }
  ___stack_chk_fail();
  FUN_10840f740(auStack_250);
  func_0x00010828dc7c();
  func_0x00010828dcb8();
  *unaff_x21 = 0;
  func_0x00010828dca4();
  FUN_10828d91c();
  func_0x00010828dc9c();
  func_0x00010828dc6c();
  return uVar2;
}



/* Entry: 10828d8d0; end: 10828d91b;  */

void FUN_10828d8d0(void)

{
  undefined8 *unaff_x21;
  
  func_0x00010828dcb8();
  *unaff_x21 = 0;
  func_0x00010828dca4();
  FUN_10828d91c();
  func_0x00010828dc9c();
  func_0x00010828dc6c();
  return;
}



/* Entry: 10828d91c; end: 10828d983;  */

void FUN_10828d91c(void)

{
  func_0x00010828dc84();
  FUN_10827eb7c();
  func_0x00010828dc74();
  func_0x00010828dd14();
  return;
}



/* Entry: 10828d984; end: 10828d98f;  */

void FUN_10828d984(int *param_1)

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
  if ((param_1 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_1 + 2) != (code *)0x0) {
      (**(code **)(param_1 + 2))(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10828d990; end: 10828dab3;  */

undefined8 * FUN_10828d990(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 auStack_b0 [32];
  int *piStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [56];
  
  puVar3 = auStack_b0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  piVar4 = (int *)param_2[6];
  if (piVar4 == (int *)0x0) {
    FUN_1082a0b6c(auStack_b0,param_2 + 2);
    FUN_10828db68(auStack_68,auStack_b0,*param_2,param_2[1]);
    func_0x00010828dd34();
    func_0x00010828dd04();
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    FUN_1082a0b6c(auStack_88,param_2 + 2);
    piStack_90 = piVar4;
    FUN_10828dab4(auStack_68,auStack_88,&piStack_90,param_2[1]);
    func_0x00010828dd34();
    func_0x00010828dd04();
    FUN_10828d984(piStack_90);
    puVar3 = auStack_88;
  }
  func_0x00010828afb8(puVar3);
  return param_1;
}



/* Entry: 10828dab4; end: 10828daff;  */

void FUN_10828dab4(void)

{
  undefined8 *unaff_x21;
  
  func_0x00010828dcb8();
  *unaff_x21 = 0;
  func_0x00010828dca4();
  FUN_10828db00();
  func_0x00010828dc9c();
  func_0x00010828dc6c();
  return;
}



/* Entry: 10828db00; end: 10828db67;  */

void FUN_10828db00(void)

{
  func_0x00010828dc84();
  FUN_10827ec88();
  func_0x00010828dc74();
  func_0x00010828dd14();
  return;
}



/* Entry: 10828db68; end: 10828dbb7;  */

void FUN_10828db68(void)

{
  func_0x00010828dc84();
  FUN_10827ec88();
  func_0x00010828dc74();
  return;
}



/* Entry: 10828dbb8; end: 10828dbff;  */

long * FUN_10828dbb8(long *param_1)

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



/* Entry: 10828dc00; end: 10828dc1f;  */

void FUN_10828dc00(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010828dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 10828dc20; end: 10828dddf;  */

void FUN_10828dc20(void)

{
  return;
}



/* Entry: 10828dde0; end: 10828de23;  */

void FUN_10828dde0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  undefined1 *puStack_20;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined4 uStack_14;
  
  puStack_48 = &uStack_14;
  puStack_28 = &uStack_16;
  puStack_20 = &uStack_15;
  uStack_40 = param_3;
  uStack_38 = param_4;
  uStack_30 = param_5;
  uStack_16 = param_7;
  uStack_15 = param_6;
  uStack_14 = param_2;
  FUN_10828dee8(param_1,&puStack_48);
  return;
}



/* Entry: 10828de24; end: 10828dee7;  */

void FUN_10828de24(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined4 auStack_80 [2];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = uRam0000000113254e28;
  uStack_70 = uRam0000000113254e20;
  uStack_58 = uRam0000000113254e38;
  uStack_60 = uRam0000000113254e30;
  uStack_50 = uRam0000000113254e40;
  if (*param_4 != 0) {
    uVar1 = param_5;
    func_0x0001081420b8();
    if (((uVar1 & 1) == 0) && (FUN_10818cfd0(param_5,&uStack_70), (int)param_5 == 0)) {
      return;
    }
    if (*(long *)(param_4 + 2) != 0) {
      FUN_108363f68(&uStack_70);
    }
  }
  auStack_80[0] = 1;
  puStack_78 = &uStack_70;
  func_0x00010828dd54(param_1,param_2,param_3,auStack_80,0x113254e20);
  return;
}



/* Entry: 10828dee8; end: 10828df53;  */

long * FUN_10828dee8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  plVar7 = param_1;
  FUN_10840f8d0(param_1,0x121,8);
  lVar11 = param_1[1];
  param_1[1] = (long)(plVar7 + 0x23);
  plVar7[0x23] = (long)FUN_10828df78;
  lVar9 = param_1[1];
  param_1[1] = lVar9 + 8;
  *(char *)(lVar9 + 8) = (char)plVar7 - (char)(int)lVar11;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  plVar2 = (long *)param_2[1];
  uVar4 = *(uint *)*param_2;
  plVar1 = (long *)param_2[2];
  plVar3 = (long *)param_2[3];
  uVar5 = *(undefined1 *)param_2[4];
  uVar6 = *(undefined1 *)param_2[5];
  *(undefined4 *)(plVar7 + 1) = 0xe;
  plVar7[3] = 0;
  plVar7[2] = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  *(undefined4 *)(plVar7 + 8) = 0;
  *plVar7 = (long)&PTR_FUN_110a35258;
  plVar8 = plVar7 + 9;
  *plVar8 = 0;
  *(undefined4 *)(plVar7 + 10) = 0;
  *(undefined1 *)((long)plVar7 + 0x54) = 0;
  *(undefined4 *)(plVar7 + 0xb) = 1;
  plVar7[0xc] = 0;
  *(undefined4 *)(plVar7 + 0xd) = 0;
  *(undefined1 *)((long)plVar7 + 0x6c) = 0;
  *(undefined4 *)(plVar7 + 0xe) = 1;
  plVar7[0xf] = 0;
  *(undefined4 *)(plVar7 + 0x10) = 0;
  *(undefined1 *)((long)plVar7 + 0x84) = 0;
  *(undefined4 *)(plVar7 + 0x11) = 1;
  plVar7[0x12] = 0;
  *(undefined4 *)(plVar7 + 0x13) = 0;
  *(undefined1 *)((long)plVar7 + 0x9c) = 0;
  *(undefined4 *)(plVar7 + 0x14) = 1;
  lVar11 = *plVar2;
  plVar7[0x16] = plVar2[1];
  plVar7[0x15] = lVar11;
  lVar9 = plVar1[1];
  lVar11 = *plVar1;
  lVar13 = plVar1[3];
  lVar12 = plVar1[2];
  plVar7[0x1b] = plVar1[4];
  plVar7[0x1a] = lVar13;
  plVar7[0x19] = lVar12;
  plVar7[0x18] = lVar9;
  plVar7[0x17] = lVar11;
  lVar9 = plVar3[1];
  lVar11 = *plVar3;
  lVar13 = plVar3[3];
  lVar12 = plVar3[2];
  plVar7[0x20] = plVar3[4];
  plVar7[0x1d] = lVar9;
  plVar7[0x1c] = lVar11;
  plVar7[0x1f] = lVar13;
  plVar7[0x1e] = lVar12;
  *(undefined1 *)(plVar7 + 0x21) = uVar5;
  *(uint *)((long)plVar7 + 0x10c) = uVar4;
  *(undefined1 *)(plVar7 + 0x22) = uVar6;
  *plVar8 = (long)&UNK_10f481dd5;
  *(undefined4 *)(plVar7 + 10) = 1;
  *(undefined1 *)((long)plVar7 + 0x54) = 0xe;
  *(undefined4 *)(plVar7 + 0xb) = 1;
  if ((uVar4 & 1) != 0) {
    uVar10 = 0x11;
    if ((uVar4 & 2) != 0) {
      uVar10 = 3;
    }
    plVar7[0xc] = (long)&UNK_10f481de0;
    *(undefined4 *)(plVar7 + 0xd) = uVar10;
    *(undefined1 *)((long)plVar7 + 0x6c) = 0x17;
    *(undefined4 *)(plVar7 + 0xe) = 1;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    plVar7[0xf] = (long)&UNK_10f481de8;
    *(undefined4 *)(plVar7 + 0x10) = 1;
    *(undefined1 *)((long)plVar7 + 0x84) = 0xe;
    *(undefined4 *)(plVar7 + 0x11) = 1;
  }
  if ((uVar4 >> 3 & 1) != 0) {
    plVar7[0x12] = (long)&UNK_10f481df5;
    *(undefined4 *)(plVar7 + 0x13) = 0;
    *(undefined1 *)((long)plVar7 + 0x9c) = 0x14;
    *(undefined4 *)(plVar7 + 0x14) = 1;
  }
  FUN_10829e324(plVar7 + 2,plVar8,4);
  return plVar7;
}



/* Entry: 10828df54; end: 10828df77;  */

undefined8 * FUN_10828df54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar2 = (undefined8 *)param_1[1];
  uVar4 = *(uint *)*param_1;
  puVar1 = (undefined8 *)param_1[2];
  puVar3 = (undefined8 *)param_1[3];
  uVar5 = *(undefined1 *)param_1[4];
  uVar6 = *(undefined1 *)param_1[5];
  *(undefined4 *)(param_2 + 1) = 0xe;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *param_2 = &PTR_FUN_110a35258;
  puVar7 = param_2 + 9;
  *puVar7 = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined1 *)((long)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 1;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined1 *)((long)param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0xe) = 1;
  param_2[0xf] = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined1 *)((long)param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x11) = 1;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined1 *)((long)param_2 + 0x9c) = 0;
  *(undefined4 *)(param_2 + 0x14) = 1;
  uVar9 = *puVar2;
  param_2[0x16] = puVar2[1];
  param_2[0x15] = uVar9;
  uVar10 = puVar1[1];
  uVar9 = *puVar1;
  uVar12 = puVar1[3];
  uVar11 = puVar1[2];
  param_2[0x1b] = puVar1[4];
  param_2[0x1a] = uVar12;
  param_2[0x19] = uVar11;
  param_2[0x18] = uVar10;
  param_2[0x17] = uVar9;
  uVar10 = puVar3[1];
  uVar9 = *puVar3;
  uVar12 = puVar3[3];
  uVar11 = puVar3[2];
  param_2[0x20] = puVar3[4];
  param_2[0x1d] = uVar10;
  param_2[0x1c] = uVar9;
  param_2[0x1f] = uVar12;
  param_2[0x1e] = uVar11;
  *(undefined1 *)(param_2 + 0x21) = uVar5;
  *(uint *)((long)param_2 + 0x10c) = uVar4;
  *(undefined1 *)(param_2 + 0x22) = uVar6;
  *puVar7 = &UNK_10f481dd5;
  *(undefined4 *)(param_2 + 10) = 1;
  *(undefined1 *)((long)param_2 + 0x54) = 0xe;
  *(undefined4 *)(param_2 + 0xb) = 1;
  if ((uVar4 & 1) != 0) {
    uVar8 = 0x11;
    if ((uVar4 & 2) != 0) {
      uVar8 = 3;
    }
    param_2[0xc] = &UNK_10f481de0;
    *(undefined4 *)(param_2 + 0xd) = uVar8;
    *(undefined1 *)((long)param_2 + 0x6c) = 0x17;
    *(undefined4 *)(param_2 + 0xe) = 1;
  }
  if ((uVar4 >> 2 & 1) != 0) {
    param_2[0xf] = &UNK_10f481de8;
    *(undefined4 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((long)param_2 + 0x84) = 0xe;
    *(undefined4 *)(param_2 + 0x11) = 1;
  }
  if ((uVar4 >> 3 & 1) != 0) {
    param_2[0x12] = &UNK_10f481df5;
    *(undefined4 *)(param_2 + 0x13) = 0;
    *(undefined1 *)((long)param_2 + 0x9c) = 0x14;
    *(undefined4 *)(param_2 + 0x14) = 1;
  }
  FUN_10829e324(param_2 + 2,puVar7,4);
  return param_2;
}



/* Entry: 10828df78; end: 10828e10b;  */

undefined8 * FUN_10828df78(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x121);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 10828e10c; end: 10828e11f;  */

void FUN_10828e10c(void)

{
  return;
}



/* Entry: 10828e120; end: 10828e247;  */

void FUN_10828e120(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = 0x113254e20;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    lVar1 = param_1 + 0xe0;
    if (*(char *)(param_1 + 0x84) != '\0') {
      lVar1 = lVar2;
    }
    uVar4 = 0x100;
    lVar2 = lVar1;
  }
  else {
    uVar4 = 0;
  }
  uVar3 = 0x80;
  if (*(char *)(param_1 + 0x108) != -1) {
    uVar3 = 0;
  }
  FUN_10828e274(param_2,uVar3 | *(uint *)(param_1 + 0x10c) | uVar4,param_1 + 0xb8,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010828e1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,param_2,"unknown",7);
  return;
}



/* Entry: 10828e248; end: 10828e273;  */

void FUN_10828e248(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f481ee7);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10828e274);
  (*pcVar1)();
}



/* Entry: 10828e274; end: 10828e29b;  */

uint FUN_10828e274(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10828e29c(param_1,param_3,param_4);
  return (uint)param_1 | param_2 << 4;
}



/* Entry: 10828e29c; end: 10828e2db;  */

uint FUN_10828e29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10828e2dc();
  FUN_10828e2dc(param_1,param_3);
  return (uint)param_1 | (int)uVar1 << 2;
}



/* Entry: 10828e2dc; end: 10828e337;  */

undefined4 FUN_10828e2dc(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)param_2;
  if ((*(byte *)(param_1 + 99) & 1) == 0) {
    uVar1 = param_2;
    func_0x0001081420b8();
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    FUN_1082878d0();
    if ((param_2 & 1) != 0) {
      return 1;
    }
  }
  FUN_10828e338();
  uVar3 = 2;
  if (iVar2 != 0) {
    uVar3 = 3;
  }
  return uVar3;
}



/* Entry: 10828e338; end: 10828e34f;  */

uint FUN_10828e338(uint param_1)

{
  FUN_10828e350();
  return param_1 >> 3 & 1;
}



/* Entry: 10828e350; end: 10828e3b7;  */

uint FUN_10828e350(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((uVar1 & 0xc0) == 0x80) {
    lVar2 = param_1;
    func_0x000108363ad0();
    uVar1 = (uint)lVar2;
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  return uVar1 & 0xf;
}



/* Entry: 10828e3b8; end: 10828e3bb;  */

undefined8 * FUN_10828e3b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35308;
  FUN_10828e7ac(param_1 + 1);
  return param_1;
}



/* Entry: 10828e3bc; end: 10828e3cf;  */

void FUN_10828e3bc(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828e3d0; end: 10828e4af;  */

void FUN_10828e3d0(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_10829dcd4(param_2,param_3,param_1 + 0x94,param_4 + 0xb8,param_1 + 0x30);
  FUN_10829dcd4(param_2,param_3,param_1 + 0x98,param_4 + 0xe0,param_1 + 0x58);
  if (*(char *)(param_4 + 0x6c) == '\0') {
    lVar1 = param_4 + 0xa8;
    FUN_10828e84c(lVar1,param_1 + 0x80);
    if ((int)lVar1 != 0) {
      (**(code **)(*param_2 + 0x88))(param_2,*(undefined4 *)(param_1 + 0x9c),1,param_4 + 0xa8);
      uVar2 = *(undefined8 *)(param_4 + 0xa8);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
  }
  if ((*(byte *)(param_4 + 0x108) != *(byte *)(param_1 + 0x90)) &&
     (*(char *)(param_4 + 0x9c) == '\0')) {
    (**(code **)(*param_2 + 0x20))
              ((float)*(byte *)(param_4 + 0x108) * 0.003921569,param_2,
               *(undefined4 *)(param_1 + 0xa0));
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_4 + 0x108);
  }
  return;
}



/* Entry: 10828e4b0; end: 10828e7a3;  */

void FUN_10828e4b0(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 in_x7;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_68 [8];
  
  lVar8 = param_2[5];
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  FUN_1082dd9a4(uVar2,lVar8);
  uVar3 = *(uint *)(lVar8 + 0x10c);
  func_0x00010828e97c();
  uVar7 = param_2[6];
  func_0x00010828e974();
  if ((*(char *)(lVar8 + 0x6c) == '\0') && ((uVar3 >> 4 & 1) == 0)) {
    FUN_10829dc20(param_1,uVar6,uVar5,param_2[6],param_1 + 0x9c);
  }
  else {
    auStack_90[0] = 0x17;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_7c = 0;
    FUN_1082dd868(uVar2,&DAT_10f68f0f0,auStack_90,0);
    if (*(char *)(lVar8 + 0x6c) == '\0') {
      uVar6 = uVar5;
      func_0x00010828bb5c(uVar5,0,1,0x17,&DAT_10f3c54b0,auStack_68);
      *(int *)(param_1 + 0x9c) = (int)uVar6;
    }
    func_0x00010828e988();
    if ((uVar3 >> 4 & 1) != 0) {
      func_0x00010828e988();
    }
    func_0x00010828e988();
    func_0x00010828e97c();
    uVar7 = param_2[6];
    func_0x00010828e974();
  }
  FUN_10829df60(uVar1,uVar5,param_2[4],param_3,*(undefined8 *)(lVar8 + 0x48),lVar8 + 0xb8,
                param_1 + 0x94,in_x7,uVar7);
  if (*(char *)(lVar8 + 0x84) == '\0') {
    if (*(char *)(lVar8 + 0x110) != '\x01') goto LAB_10828e688;
    uVar6 = param_2[4];
    func_0x00010828e8b0(auStack_b8,(undefined8 *)(lVar8 + 0x48));
    FUN_10829e1b8(uVar1,uVar5,uVar6,param_3,auStack_b8,lVar8 + 0xe0,param_1 + 0x98);
    puVar4 = auStack_b8;
  }
  else {
    func_0x00010828e8b0(auStack_90,lVar8 + 0x78);
    FUN_10827535c(param_3 + 0x28,auStack_90);
    puVar4 = auStack_90;
  }
  func_0x00010827024c(puVar4);
LAB_10828e688:
  if ((*(char *)(lVar8 + 0x9c) == '\0') || ((uVar3 >> 4 & 1) != 0)) {
    if (*(char *)(lVar8 + 0x108) == -1) {
      func_0x00010828e97c();
    }
    else {
      func_0x00010828bb5c(uVar5,0,2,0x14,&UNK_10f481ec8,auStack_90);
      *(int *)(param_1 + 0xa0) = (int)uVar5;
      func_0x00010828e97c();
    }
  }
  else {
    func_0x00010828e97c();
    func_0x00010828e974();
    func_0x00010828e8b0(auStack_90,lVar8 + 0x90);
    FUN_1082dd7c8(uVar2,auStack_90,&DAT_10f3c3399,0);
    func_0x00010827024c(auStack_90);
    func_0x00010828e97c();
  }
  func_0x00010828e974();
  return;
}



/* Entry: 10828e7a4; end: 10828e7ab;  */

void FUN_10828e7a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10828e7a8);
  (*pcVar1)();
}



/* Entry: 10828e7ac; end: 10828e833;  */

long FUN_10828e7ac(long param_1)

{
  func_0x00010828e7d4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10828e834(param_1,0);
  return param_1;
}



/* Entry: 10828e834; end: 10828e84b;  */

void FUN_10828e834(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10828e84c; end: 10828e863;  */

uint FUN_10828e84c(uint param_1)

{
  FUN_10828e864();
  return param_1 ^ 1;
}



/* Entry: 10828e864; end: 10828e8c3;  */

bool FUN_10828e864(float *param_1,float *param_2)

{
  if (((param_1[3] == param_2[3]) && (*param_1 == *param_2)) && (param_1[1] == param_2[1])) {
    return param_1[2] == param_2[2];
  }
  return false;
}



/* Entry: 10828e8c4; end: 10828e933;  */

undefined8
FUN_10828e8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_38;
  
  FUN_1083a3348(&uStack_38);
  FUN_10828e934(param_1,&uStack_38,param_3,param_4);
  FUN_1083a3ca0(uStack_38);
  return param_1;
}



/* Entry: 10828e934; end: 10828e96b;  */

undefined1 *
FUN_10828e934(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1083a33c4(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0x1138270b0;
  *(undefined8 *)(param_1 + 0x20) = 0x1138270b0;
  return param_1;
}



/* Entry: 10828e96c; end: 10828e997;  */

void FUN_10828e96c(void)

{
  return;
}



/* Entry: 10828e998; end: 10828e9cb;  */

undefined8 * FUN_10828e998(undefined8 *param_1)

{
  FUN_10828e9cc();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10828e9cc; end: 10828ea03;  */

void FUN_10828e9cc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_10828ea04();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10828ea04; end: 10828ea4f;  */

long * FUN_10828ea04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 10828ea50; end: 10828ea77;  */

void FUN_10828ea50(void)

{
  return;
}



/* Entry: 10828ea78; end: 10828eb1f;  */

undefined8 * FUN_10828ea78(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = *param_4;
  *param_4 = 0;
  FUN_1082a6bb0(param_1,&uStack_28,0);
  FUN_108267a54(&uStack_28);
  *param_1 = &PTR_FUN_110a35350;
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar1[1] = *(undefined8 *)(param_3 + 0x18);
  *puVar1 = uVar2;
  param_1[10] = puVar1;
  func_0x00010828ea58();
  *(int *)(param_1 + 0xb) = (int)puVar1;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



/* Entry: 10828eb20; end: 10828ec3f;  */

undefined8 * FUN_10828eb20(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110a35350;
  if (param_1[0xe] != 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    puVar2 = param_1;
    func_0x00010828ee20();
    if (((ulong)puVar2 & 1) == 0) {
      FUN_108292848(param_1[8],0,0,0,&uStack_60,0);
    }
    FUN_10828f41c(param_1,0);
  }
  FUN_10828ec40(param_1,0);
  FUN_1082a6e30(param_1);
  if (param_1[0xf] != 0) {
    FUN_1082ab1c4();
  }
  FUN_10828ec9c(param_1 + 0x13,0);
  lVar1 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar1 != 0) {
    func_0x00010828fcf8();
  }
  FUN_10828f738(param_1 + 0x13);
  FUN_10828f6a4(param_1 + 0x10);
  FUN_10828f65c(param_1 + 0xf);
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    func_0x00010828fcf8();
  }
  FUN_10828f614(param_1 + 0xd);
  FUN_10828f5bc(param_1 + 0xc);
  puVar2 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((code *)puVar2[1] != (code *)0x0) {
      (*(code *)puVar2[1])(*puVar2);
    }
    __ZdlPv(puVar2);
  }
  *param_1 = &PTR_FUN_110a36328;
  FUN_1082edbac();
  func_0x0001082a7144(param_1 + 9);
  func_0x0001082a7124(param_1 + 8);
  FUN_1082a6e3c(param_1 + 5);
  FUN_1082a7090(param_1 + 4);
  *param_1 = &PTR_FUN_110a35160;
  FUN_108267a54(param_1 + 2);
  return param_1;
}



/* Entry: 10828ec40; end: 10828ec9b;  */

void FUN_10828ec40(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x70) != 0) &&
     ((lVar1 = param_1, func_0x00010828fccc(), (param_2 & 1) != 0 || ((int)lVar1 == 0)))) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x88))();
    if (*(long **)(param_1 + 0x70) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010828ec90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x70) + 0x80))();
      return;
    }
  }
  return;
}



/* Entry: 10828ec9c; end: 10828ed67;  */

void FUN_10828ec9c(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  *param_1 = param_2;
  if (lVar3 == 0) {
    return;
  }
  FUN_10828f2a4(lVar3);
  if ((*(byte *)(lVar3 + 0x30) & 1) == 0) {
    plVar4 = (long *)(lVar3 + 0x28);
    while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
      func_0x0001082a0268(plVar4[1]);
    }
  }
  lVar1 = lVar3 + 0x28;
  FUN_10828f758();
  FUN_10828ad10();
  func_0x0001081efc58();
  uVar2 = 0;
  do {
    if ((*(uint *)(lVar1 + 0x14) & ((int)*(uint *)(lVar1 + 0x14) >> 0x1f ^ 0xffffffffU)) == uVar2) {
LAB_10828ed38:
      func_0x00010828fd50();
      FUN_108410074(lVar3 + 0x10);
      FUN_10828f7c8(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
    if (lVar3 == *(long *)(*(long *)(lVar1 + 8) + uVar2 * 8)) {
      FUN_10840f328(lVar1);
      goto LAB_10828ed38;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Entry: 10828ed68; end: 10828ed6b;  */

undefined8 * FUN_10828ed68(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110a35350;
  if (param_1[0xe] != 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    puVar2 = param_1;
    func_0x00010828ee20();
    if (((ulong)puVar2 & 1) == 0) {
      FUN_108292848(param_1[8],0,0,0,&uStack_60,0);
    }
    FUN_10828f41c(param_1,0);
  }
  FUN_10828ec40(param_1,0);
  FUN_1082a6e30(param_1);
  if (param_1[0xf] != 0) {
    FUN_1082ab1c4();
  }
  FUN_10828ec9c(param_1 + 0x13,0);
  lVar1 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar1 != 0) {
    func_0x00010828fcf8();
  }
  FUN_10828f738(param_1 + 0x13);
  FUN_10828f6a4(param_1 + 0x10);
  FUN_10828f65c(param_1 + 0xf);
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    func_0x00010828fcf8();
  }
  FUN_10828f614(param_1 + 0xd);
  FUN_10828f5bc(param_1 + 0xc);
  puVar2 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((code *)puVar2[1] != (code *)0x0) {
      (*(code *)puVar2[1])(*puVar2);
    }
    __ZdlPv(puVar2);
  }
  *param_1 = &PTR_FUN_110a36328;
  FUN_1082edbac();
  func_0x0001082a7144(param_1 + 9);
  func_0x0001082a7124(param_1 + 8);
  FUN_1082a6e3c(param_1 + 5);
  FUN_1082a7090(param_1 + 4);
  *param_1 = &PTR_FUN_110a35160;
  FUN_108267a54(param_1 + 2);
  return param_1;
}



/* Entry: 10828ed6c; end: 10828ed7f;  */

void FUN_10828ed6c(void)

{
  FUN_10828eb20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10828ed80; end: 10828ee73;  */

void FUN_10828ed80(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (((*(byte *)(*(long *)(param_1 + 0x10) + 0xd8) & 1) == 0) && (*(int *)(param_1 + 0x88) == 0)) {
    FUN_1082a6e0c(param_1);
    FUN_10828ec40(param_1,*(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0xb8) + 0x18) >> 0x25 & 1
                 );
    FUN_108315690(*(undefined8 *)(param_1 + 0x68));
    lVar1 = *(long *)(param_1 + 0x98);
    *(undefined1 *)(lVar1 + 0x30) = 1;
    FUN_10828f758(lVar1 + 0x28);
    puVar2 = *(undefined8 **)(param_1 + 0x80);
    *puVar2 = 0;
    puVar2[1] = 0;
    FUN_1082ab8ec(*(undefined8 *)(param_1 + 0x78));
    (**(code **)(**(long **)(param_1 + 0x70) + 0x20))(*(long **)(param_1 + 0x70),0);
    lVar1 = *(long *)(param_1 + 0xa0) + 0x18;
    lVar3 = 3;
    do {
      FUN_108291e64(lVar1,0);
      lVar1 = lVar1 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
  }
  return;
}



/* Entry: 10828ee74; end: 10828ee7f;  */

void FUN_10828ee74(undefined8 param_1,int param_2)

{
  code *pcVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 uStack_40;
  int iStack_34;
  
  func_0x0001082ade30(param_1,0);
  if (param_2 == 0) {
    if (unaff_x19 == (long *)0x0) {
      FUN_1082b4710(*(undefined8 *)(unaff_x20 + 8),0);
    }
    else {
      FUN_1082b47e4(*(undefined8 *)(unaff_x20 + 8),*unaff_x19);
    }
    while (*(int *)(unaff_x20 + 0x2c) != 0) {
      if (*(int *)(unaff_x20 + 0x2c) < 1) goto LAB_1082ac014;
      if ((unaff_x19 != (long *)0x0) &&
         (*unaff_x19 <= *(long *)(**(long **)(unaff_x20 + 0x20) + 0x18))) {
        return;
      }
      func_0x0001082ade90();
    }
  }
  else {
    if ((unaff_x19 != (long *)0x0) && (*(int *)(unaff_x20 + 0x2c) != 0)) {
      if (*(int *)(unaff_x20 + 0x2c) < 1) {
LAB_1082ac014:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ac018);
        (*pcVar1)();
      }
      if (*unaff_x19 <= *(long *)(**(long **)(unaff_x20 + 0x20) + 0x18)) {
        return;
      }
    }
    plVar2 = (long *)(unaff_x20 + 0x18);
    FUN_1082ac024();
    lVar3 = 0;
    func_0x0001082adfb0();
    while ((lVar3 < *(int *)(unaff_x20 + 0x2c) &&
           ((lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + lVar3 * 8), unaff_x19 == (long *)0x0 ||
            (*(long *)(lVar4 + 0x18) < *unaff_x19))))) {
      if (*(short *)(*(long *)(lVar4 + 0x48) + 4) == 0) {
        func_0x0001082ae08c();
        *plVar2 = lVar4;
      }
      lVar3 = lVar3 + 1;
    }
    for (lVar3 = 0; lVar3 < iStack_34; lVar3 = lVar3 + 1) {
      func_0x0001082ae068();
    }
    _free(uStack_40);
  }
  return;
}



/* Entry: 10828ee80; end: 10828f1b3;  */

undefined8 FUN_10828ee80(ulong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 *puStack_48;
  
  plVar6 = *(long **)(param_1 + 0x70);
  uVar9 = 0;
  if (plVar6 != (long *)0x0) {
    puStack_48 = *(undefined8 **)(param_1 + 0x10);
    lStack_50 = plVar6[2];
    if (lStack_50 != 0) {
      piVar1 = (int *)(lStack_50 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = *(long **)(param_1 + 0x70);
    }
    (**(code **)(*plVar6 + 0x30))(auStack_58);
    FUN_10828c0b8(&puStack_48,&lStack_50,auStack_58);
    FUN_10828c550(auStack_58);
    FUN_10826b6c8(&lStack_50);
    uVar7 = param_1;
    FUN_1082a6d54();
    if ((uVar7 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      puVar8 = (undefined8 *)0x38;
      __Znwm();
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0x200000;
      puVar8[6] = 0x800;
      puStack_48 = (undefined8 *)0x0;
      FUN_10828f634(param_1 + 0x68,puVar8);
      FUN_10828f614(&puStack_48);
      uVar9 = 0xf8;
      __Znwm(0xf8);
      func_0x0001082ab168();
      puStack_48 = (undefined8 *)0x0;
      FUN_10828f67c(param_1 + 0x78,uVar9);
      FUN_10828f65c(&puStack_48);
      puVar8 = *(undefined8 **)(param_1 + 0x78);
      *puVar8 = *(undefined8 *)(param_1 + 0x48);
      puVar8[1] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 200);
      uVar9 = 0x28;
      __Znwm(0x28);
      FUN_1082ae0e0();
      puStack_48 = (undefined8 *)0x0;
      func_0x00010828f6c4(param_1 + 0x80,uVar9);
      func_0x00010828f6a4(&puStack_48);
      uVar2 = *(undefined4 *)(param_1 + 0x58);
      puVar10 = (undefined8 *)0x38;
      __Znwm();
      *puVar10 = 0;
      puVar10[1] = 0x100000000;
      *(undefined4 *)(puVar10 + 2) = 1;
      *(undefined1 *)((long)puVar10 + 0x14) = 0;
      puVar10[3] = 0;
      *(undefined4 *)(puVar10 + 4) = uVar2;
      puVar8 = puVar10;
      FUN_10828ad10();
      puStack_48 = puVar8 + 3;
      func_0x0001081efc58();
      func_0x00010840f37c(puVar8);
      if (*(int *)((long)puVar8 + 0x14) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10828f150);
        (*pcVar5)();
      }
      *(undefined8 **)(puVar8[1] + (long)*(int *)((long)puVar8 + 0x14) * 8 + -8) = puVar10;
      FUN_1081efc78(&puStack_48);
      puVar10[5] = 0;
      *(undefined1 *)(puVar10 + 6) = 0;
      puStack_48 = (undefined8 *)0x0;
      FUN_10828ec9c(param_1 + 0x98,puVar10);
      FUN_10828f738(&puStack_48);
      *(undefined1 *)(param_1 + 0x8c) = 0;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar13 = *(long *)(lVar12 + 0x30);
      if (lVar13 != 0) {
        puVar11 = (undefined4 *)0x10;
        __Znwm();
        *puVar11 = 0;
        *(long *)(puVar11 + 2) = lVar13;
        puStack_48 = (undefined8 *)0x0;
        FUN_10828f5dc(param_1 + 0x60,puVar11);
        FUN_10828f5bc(&puStack_48);
        lVar12 = *(long *)(param_1 + 0x10);
      }
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar12 + 0x38);
      uVar9 = 0x58;
      __Znwm();
      FUN_10831372c();
      lVar12 = *(long *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xa0) = uVar9;
      if (lVar12 != 0) {
        func_0x00010828fcf8();
        uVar9 = *(undefined8 *)(param_1 + 0xa0);
      }
      FUN_1082a6f8c(param_1,uVar9);
      uVar9 = 1;
    }
  }
  return uVar9;
}



/* Entry: 10828f1b4; end: 10828f1bf;  */

void FUN_10828f1b4(long param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  int iStack_38;
  uint uStack_34;
  
  puVar6 = *(undefined8 **)(param_1 + 0x78);
  puVar6[0xe] = param_2;
  uStack_58 = 0;
  uStack_50 = 0x100000000;
  func_0x0001082ad138(&uStack_58);
  puStack_48 = puVar6 + 0x15;
  func_0x0001081efc58();
  puVar1 = puVar6 + 0x13;
  if (puVar1 != &uStack_58) {
    uVar2 = *(uint *)((long)puVar6 + 0xa4);
    iVar4 = (int)uStack_50;
    if (((uVar2 & 1) == 0) || ((uStack_50 & 0x100000000) == 0)) {
      if ((uStack_50 & 0x100000000) == 0) {
        uVar7 = uStack_50 & 0xffffffff;
        FUN_1082ad234(0x3ff0000000000000);
        param_2 = param_2 >> 6;
        if (0x7ffffffe < param_2) {
          param_2 = 0x7fffffff;
        }
        uStack_34 = (int)param_2 << 1 | 1;
        uStack_40 = uVar7;
        FUN_1082ad1d8(&uStack_58,uVar7);
        iVar4 = (int)uStack_50;
      }
      else {
        uStack_40 = uStack_58;
        uStack_34 = (int)uStack_50 << 1 | 1;
        uStack_58 = 0;
        uStack_50 = 0x100000000;
      }
      uStack_50 = uStack_50 & 0xffffffff00000000;
      iStack_38 = iVar4;
      func_0x0001082ad158(&uStack_58,puVar1);
      func_0x0001082ad158(puVar1,&uStack_40);
      FUN_1082ad0d0(&uStack_40);
    }
    else {
      uVar7 = puVar6[0x13];
      puVar6[0x13] = uStack_58;
      uVar3 = *(undefined4 *)(puVar6 + 0x14);
      *(int *)(puVar6 + 0x14) = (int)uStack_50;
      *(undefined4 *)((long)puVar6 + 0xa4) = uStack_50._4_4_;
      uStack_50 = CONCAT44(uVar2,uVar3);
      uStack_58 = uVar7;
    }
  }
  FUN_1081efc78(&puStack_48);
  if ((int)uStack_50 != 0) {
    lVar8 = 0;
    for (lVar9 = 0; lVar9 < (int)uStack_50; lVar9 = lVar9 + 1) {
      if (*(char *)(uStack_58 + lVar8 + 0x3c) == '\x01') {
        FUN_1082b4d3c(puVar6[1]);
      }
      else {
        FUN_1082a4ad0(*puVar6,uStack_58 + lVar8,0,1);
      }
      lVar8 = lVar8 + 0x40;
    }
  }
  FUN_1082ab99c(puVar6);
  while ((ulong)puVar6[0xe] < (ulong)puVar6[0x11]) {
    if (*(int *)((long)puVar6 + 0x2c) == 0) {
      FUN_1082b4710(puVar6[1],puVar6);
      goto LAB_1082ab3ec;
    }
    if (*(int *)((long)puVar6 + 0x2c) < 1) goto LAB_1082ab43c;
    func_0x0001082ae0d4();
    uStack_40 = extraout_x8;
    FUN_1082ab9e0(&uStack_40);
  }
LAB_1082ab420:
  FUN_1082ad0d0(&uStack_58);
  return;
LAB_1082ab3ec:
  if ((ulong)puVar6[0x11] <= (ulong)puVar6[0xe]) goto LAB_1082ab420;
  if (*(int *)((long)puVar6 + 0x2c) == 0) goto LAB_1082ab420;
  if (*(int *)((long)puVar6 + 0x2c) < 1) {
LAB_1082ab43c:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1082ab440);
    (*pcVar5)();
  }
  func_0x0001082ae0d4();
  uStack_40 = extraout_x8_00;
  FUN_1082ab9e0(&uStack_40);
  goto LAB_1082ab3ec;
}



/* Entry: 10828f1c0; end: 10828f21b;  */

void FUN_10828f1c0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010828fccc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10828ee74(*(undefined8 *)(param_1 + 0x78),param_2);
  FUN_1082ab230(*(undefined8 *)(param_1 + 0x78));
  FUN_10831ac18(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010828f218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0xa0))();
  return;
}



/* Entry: 10828f21c; end: 10828f2a3;  */

void FUN_10828f21c(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *unaff_x19;
  
  uVar1 = param_1;
  func_0x00010828fccc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long **)(param_1 + 0x70) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x80))();
  }
  lVar2 = *(long *)(param_1 + 0x98);
  FUN_10828f2a4(lVar2);
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_1082ab230(*(undefined8 *)(param_1 + 0x78));
  FUN_10828f36c(*(undefined8 *)(param_1 + 0x78),lVar2 + param_2 * -1000000,param_3);
  func_0x00010831b89c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xc0));
  FUN_10831ac44(unaff_x19);
  *unaff_x19 = 0;
  return;
}



/* Entry: 10828f2a4; end: 10828f36b;  */

void FUN_10828f2a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 auStack_88 [8];
  undefined8 *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_48 = auStack_88;
  uStack_40 = 0x800000000;
  FUN_10828f830();
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    puVar1 = puStack_48;
    for (lVar2 = (long)(int)uStack_40 << 4; lVar2 != 0; lVar2 = lVar2 + -0x10) {
      FUN_10828f880(param_1);
      func_0x0001082a0268(*puVar1);
      puVar1 = puVar1 + 2;
    }
  }
  FUN_10828f7c8(&puStack_48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10828f7c8(&puStack_48);
  func_0x00010828fd1c();
  FUN_1082abee8();
  return;
}



/* Entry: 10828f36c; end: 10828f38f;  */

void FUN_10828f36c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1082abee8(param_1,&uStack_18);
  return;
}



/* Entry: 10828f390; end: 10828f41b;  */

long * FUN_10828f390(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = param_1;
  func_0x00010828fccc();
  if (((uVar1 & 1) == 0) && (plVar2 = *(long **)(param_1 + 0x70), plVar2 != (long *)0x0)) {
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x10))();
    if (plVar3 != (long *)0x0) {
      FUN_1082b0a84();
    }
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x18))();
    if (plVar3 != (long *)0x0) {
      FUN_1082aff70();
    }
    plVar3 = plVar2;
    (**(code **)(*plVar2 + 0x1c0))(plVar2,param_2);
    FUN_10829efb0(plVar2,plVar3);
    (**(code **)(*plVar2 + 0x1c8))(plVar2);
    *(undefined4 *)((long)plVar2 + 0x7c) = 0;
    return plVar3;
  }
  return (long *)0x0;
}



/* Entry: 10828f41c; end: 10828f447;  */

void FUN_10828f41c(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined8 uStack_18;
  
  uStack_1f = 0;
  uStack_18 = 0;
  uStack_20 = param_2;
  FUN_10828f390(param_1,&uStack_20);
  return;
}



/* Entry: 10828f448; end: 10828f4c3;  */

undefined1 * FUN_10828f448(int param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x22;
  
  if (param_2 != 0) {
    func_0x00010828fd04();
    if (param_1 == 1) {
      plVar1 = *(long **)(unaff_x22 + 0x38);
      FUN_10827e094();
      if (plVar1 == (long *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = (long)plVar1 + *(long *)(*plVar1 + -0x18);
      }
      puVar2 = &stack0xffffffffffffffc8;
      FUN_10828f4c4(puVar2,lVar3,param_3,param_4,0);
    }
    else {
      puVar2 = (undefined1 *)0x0;
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10828f4c4; end: 10828f4fb;  */

void FUN_10828f4c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_18;
  
  lStack_18 = param_2;
  FUN_10828fd84(param_1,&lStack_18,param_2 != 0,param_3,param_4,param_5);
  return;
}



/* Entry: 10828f4fc; end: 10828f547;  */

void FUN_10828f4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_10828f448(param_1,param_2,0,&uStack_60);
  FUN_10828f41c(param_1,param_3);
  return;
}



/* Entry: 10828f548; end: 10828f55f;  */

void FUN_10828f548(void)

{
  return;
}


