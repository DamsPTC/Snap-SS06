/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082a02a8; end: 1082a032f;  */

long * FUN_1082a02a8(long *param_1)

{
  if ((param_1[0x10] != 0) && (*(int *)((long)param_1 + 0xcc) != 4)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a02cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x80))();
    return param_1;
  }
  return (long *)0x0;
}



/* Entry: 1082a0330; end: 1082a03e7;  */

void FUN_1082a0330(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plStack_38;
  
  if ((bRam0000000113826b70 & 1) == 0) {
    iVar1 = 0x13826b70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108320d08();
      iRam0000000113826b68 = iVar1;
      ___cxa_guard_release(0x113826b70);
    }
  }
  FUN_10827a280(&plStack_38,param_3,iRam0000000113826b68,3);
  lVar2 = *plStack_38;
  *(undefined4 *)(lVar2 + 8) = param_2;
  *(int *)(lVar2 + 0xc) = (int)param_1;
  *(int *)(lVar2 + 0x10) = (int)((ulong)param_1 >> 0x20);
  FUN_10827a320(&plStack_38);
  return;
}



/* Entry: 1082a03e8; end: 1082a0423;  */

void FUN_1082a03e8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plStack_38;
  
  if (*(int *)(param_1 + 200) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  uVar1 = *(undefined4 *)(param_1 + 0xcc);
  if ((bRam0000000113826b70 & 1) == 0) {
    iVar2 = 0x13826b70;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_108320d08();
      iRam0000000113826b68 = iVar2;
      ___cxa_guard_release(0x113826b70);
    }
  }
  FUN_10827a280(&plStack_38,param_2,iRam0000000113826b68,3);
  lVar3 = *plStack_38;
  *(undefined4 *)(lVar3 + 8) = uVar1;
  *(int *)(lVar3 + 0xc) = (int)uVar4;
  *(int *)(lVar3 + 0x10) = (int)((ulong)uVar4 >> 0x20);
  FUN_10827a320(&plStack_38);
  return;
}



/* Entry: 1082a0424; end: 1082a04c7;  */

undefined8 *
FUN_1082a0424(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[1] = 1;
  *param_1 = &PTR_FUN_110a35d98;
  param_1[3] = 0;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_10827a214(param_1 + 4);
  iVar1 = (int)param_1 + 0x48;
  FUN_10827a1fc();
  param_1[0x10] = param_2;
  param_1[0x11] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x12) = 1;
  FUN_1082a04c8();
  *(int *)((long)param_1 + 0x94) = iVar1;
  func_0x000107c27958(param_1 + 0x13,&uStack_30);
  return param_1;
}



/* Entry: 1082a04c8; end: 1082a04e7;  */

void FUN_1082a04c8(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  do {
    iVar3 = iRam0000000113254d28;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113254d28,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113254d28 = iRam0000000113254d28 + 1;
    }
  } while ((cVar1 != '\0') || (iVar3 == 0));
  return;
}



/* Entry: 1082a04e8; end: 1082a051f;  */

void FUN_1082a04e8(long *param_1,byte param_2)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar7;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long lVar8;
  long lVar9;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  int iStack_38;
  uint uStack_34;
  
  *(byte *)(param_1 + 0x12) = param_2 ^ 1;
  (**(code **)(*param_1 + 0x38))(param_1,param_1 + 4);
  uVar5 = SUB84(param_1,0);
  func_0x0001082a09a4();
  func_0x0001082ade44();
  FUN_1082ab4d8();
  *(undefined4 *)(unaff_x20 + 0x14) = uVar5;
  uVar7 = unaff_x20;
  FUN_1082ab6d0(unaff_x19);
  uVar6 = unaff_x20;
  FUN_1082a07f8();
  unaff_x19[0xf] = unaff_x19[0xf] + uVar6;
  if (*(char *)(unaff_x20 + 0x90) == '\0') {
    func_0x0001082ae038(*(undefined4 *)(unaff_x19 + 0x10));
  }
  uStack_58 = 0;
  uStack_50 = 0x100000000;
  func_0x0001082ad138(&uStack_58);
  puStack_48 = unaff_x19 + 0x15;
  func_0x0001081efc58();
  puVar1 = unaff_x19 + 0x13;
  if (puVar1 != &uStack_58) {
    uVar2 = *(uint *)((long)unaff_x19 + 0xa4);
    iVar3 = (int)uStack_50;
    if (((uVar2 & 1) == 0) || ((uStack_50 & 0x100000000) == 0)) {
      if ((uStack_50 & 0x100000000) == 0) {
        uVar6 = uStack_50 & 0xffffffff;
        FUN_1082ad234(0x3ff0000000000000);
        uVar7 = uVar7 >> 6;
        if (0x7ffffffe < uVar7) {
          uVar7 = 0x7fffffff;
        }
        uStack_34 = (int)uVar7 << 1 | 1;
        uStack_40 = uVar6;
        FUN_1082ad1d8(&uStack_58,uVar6);
        iVar3 = (int)uStack_50;
      }
      else {
        uStack_40 = uStack_58;
        uStack_34 = (int)uStack_50 << 1 | 1;
        uStack_58 = 0;
        uStack_50 = 0x100000000;
      }
      uStack_50 = uStack_50 & 0xffffffff00000000;
      iStack_38 = iVar3;
      func_0x0001082ad158(&uStack_58,puVar1);
      func_0x0001082ad158(puVar1,&uStack_40);
      FUN_1082ad0d0(&uStack_40);
    }
    else {
      uVar7 = unaff_x19[0x13];
      unaff_x19[0x13] = uStack_58;
      uVar5 = *(undefined4 *)(unaff_x19 + 0x14);
      *(int *)(unaff_x19 + 0x14) = (int)uStack_50;
      *(undefined4 *)((long)unaff_x19 + 0xa4) = uStack_50._4_4_;
      uStack_50 = CONCAT44(uVar2,uVar5);
      uStack_58 = uVar7;
    }
  }
  FUN_1081efc78(&puStack_48);
  if ((int)uStack_50 != 0) {
    lVar8 = 0;
    for (lVar9 = 0; lVar9 < (int)uStack_50; lVar9 = lVar9 + 1) {
      if (*(char *)(uStack_58 + lVar8 + 0x3c) == '\x01') {
        FUN_1082b4d3c(unaff_x19[1]);
      }
      else {
        FUN_1082a4ad0(*unaff_x19,uStack_58 + lVar8,0,1);
      }
      lVar8 = lVar8 + 0x40;
    }
  }
  FUN_1082ab99c(unaff_x19);
  while ((ulong)unaff_x19[0xe] < (ulong)unaff_x19[0x11]) {
    if (*(int *)((long)unaff_x19 + 0x2c) == 0) {
      FUN_1082b4710(unaff_x19[1],unaff_x19);
      goto LAB_1082ab3ec;
    }
    if (*(int *)((long)unaff_x19 + 0x2c) < 1) goto LAB_1082ab43c;
    func_0x0001082ae0d4();
    uStack_40 = extraout_x8;
    FUN_1082ab9e0(&uStack_40);
  }
LAB_1082ab420:
  FUN_1082ad0d0(&uStack_58);
  return;
LAB_1082ab3ec:
  if ((ulong)unaff_x19[0x11] <= (ulong)unaff_x19[0xe]) goto LAB_1082ab420;
  if (*(int *)((long)unaff_x19 + 0x2c) == 0) goto LAB_1082ab420;
  if (*(int *)((long)unaff_x19 + 0x2c) < 1) {
LAB_1082ab43c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ab440);
    (*pcVar4)();
  }
  func_0x0001082ae0d4();
  uStack_40 = extraout_x8_00;
  FUN_1082ab9e0(&uStack_40);
  goto LAB_1082ab3ec;
}



/* Entry: 1082a0520; end: 1082a054b;  */

void FUN_1082a0520(long param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined1 uVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long lVar10;
  long lVar11;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  int iStack_38;
  uint uStack_34;
  
  uVar8 = 1;
  if (param_2 != 0) {
    uVar8 = 2;
  }
  *(undefined1 *)(param_1 + 0x90) = uVar8;
  *(undefined1 *)(param_1 + 0x91) = 1;
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x20) + 0x78);
  func_0x0001082ade44(uVar6,param_1);
  uVar5 = (undefined4)uVar6;
  FUN_1082ab4d8();
  *(undefined4 *)(unaff_x20 + 0x14) = uVar5;
  uVar9 = unaff_x20;
  FUN_1082ab6d0();
  uVar7 = unaff_x20;
  FUN_1082a07f8();
  unaff_x19[0xf] = unaff_x19[0xf] + uVar7;
  if (*(char *)(unaff_x20 + 0x90) == '\0') {
    func_0x0001082ae038(*(undefined4 *)(unaff_x19 + 0x10));
  }
  uStack_58 = 0;
  uStack_50 = 0x100000000;
  func_0x0001082ad138(&uStack_58);
  puStack_48 = unaff_x19 + 0x15;
  func_0x0001081efc58();
  puVar1 = unaff_x19 + 0x13;
  if (puVar1 != &uStack_58) {
    uVar2 = *(uint *)((long)unaff_x19 + 0xa4);
    iVar3 = (int)uStack_50;
    if (((uVar2 & 1) == 0) || ((uStack_50 & 0x100000000) == 0)) {
      if ((uStack_50 & 0x100000000) == 0) {
        uVar7 = uStack_50 & 0xffffffff;
        FUN_1082ad234(0x3ff0000000000000);
        uVar9 = uVar9 >> 6;
        if (0x7ffffffe < uVar9) {
          uVar9 = 0x7fffffff;
        }
        uStack_34 = (int)uVar9 << 1 | 1;
        uStack_40 = uVar7;
        FUN_1082ad1d8(&uStack_58,uVar7);
        iVar3 = (int)uStack_50;
      }
      else {
        uStack_40 = uStack_58;
        uStack_34 = (int)uStack_50 << 1 | 1;
        uStack_58 = 0;
        uStack_50 = 0x100000000;
      }
      uStack_50 = uStack_50 & 0xffffffff00000000;
      iStack_38 = iVar3;
      func_0x0001082ad158(&uStack_58,puVar1);
      func_0x0001082ad158(puVar1,&uStack_40);
      FUN_1082ad0d0(&uStack_40);
    }
    else {
      uVar9 = unaff_x19[0x13];
      unaff_x19[0x13] = uStack_58;
      uVar5 = *(undefined4 *)(unaff_x19 + 0x14);
      *(int *)(unaff_x19 + 0x14) = (int)uStack_50;
      *(undefined4 *)((long)unaff_x19 + 0xa4) = uStack_50._4_4_;
      uStack_50 = CONCAT44(uVar2,uVar5);
      uStack_58 = uVar9;
    }
  }
  FUN_1081efc78(&puStack_48);
  if ((int)uStack_50 != 0) {
    lVar10 = 0;
    for (lVar11 = 0; lVar11 < (int)uStack_50; lVar11 = lVar11 + 1) {
      if (*(char *)(uStack_58 + lVar10 + 0x3c) == '\x01') {
        FUN_1082b4d3c(unaff_x19[1]);
      }
      else {
        FUN_1082a4ad0(*unaff_x19,uStack_58 + lVar10,0,1);
      }
      lVar10 = lVar10 + 0x40;
    }
  }
  FUN_1082ab99c();
  while ((ulong)unaff_x19[0xe] < (ulong)unaff_x19[0x11]) {
    if (*(int *)((long)unaff_x19 + 0x2c) == 0) {
      FUN_1082b4710(unaff_x19[1]);
      goto LAB_1082ab3ec;
    }
    if (*(int *)((long)unaff_x19 + 0x2c) < 1) goto LAB_1082ab43c;
    func_0x0001082ae0d4();
    uStack_40 = extraout_x8;
    FUN_1082ab9e0(&uStack_40);
  }
LAB_1082ab420:
  FUN_1082ad0d0(&uStack_58);
  return;
LAB_1082ab3ec:
  if ((ulong)unaff_x19[0x11] <= (ulong)unaff_x19[0xe]) goto LAB_1082ab420;
  if (*(int *)((long)unaff_x19 + 0x2c) == 0) goto LAB_1082ab420;
  if (*(int *)((long)unaff_x19 + 0x2c) < 1) {
LAB_1082ab43c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ab440);
    (*pcVar4)();
  }
  func_0x0001082ae0d4();
  uStack_40 = extraout_x8_00;
  FUN_1082ab9e0(&uStack_40);
  goto LAB_1082ab3ec;
}



/* Entry: 1082a054c; end: 1082a05ff;  */

undefined8 * FUN_1082a054c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35d98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  func_0x00010827a384(param_1 + 9);
  FUN_10827a250(param_1 + 4);
  return param_1;
}



/* Entry: 1082a0600; end: 1082a07f7;  */

void FUN_1082a0600(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined *puVar3;
  long lStack_60;
  undefined8 **appuStack_58 [2];
  char cStack_41;
  
  if ((*(char *)((long)param_1 + 0x91) != '\x01') ||
     (plVar2 = param_2, (**(code **)(*param_2 + 0x28))(), (int)plVar2 != 0)) {
    FUN_1083a3348(&lStack_60,&UNK_10f483944);
    FUN_1083a38fc(&lStack_60,0xffffffffffffffff,*(undefined4 *)((long)param_1 + 0x94));
    plVar2 = param_1;
    (**(code **)(*param_1 + 8))(param_1);
    FUN_1082a07f8(param_1);
    if (*(short *)(param_1[9] + 4) == 0) {
      puVar3 = &UNK_10f48392d;
    }
    else {
      puVar3 = &DAT_10f301d2d;
      if ((undefined *)param_1[0xf] != (undefined *)0x0) {
        puVar3 = (undefined *)param_1[0xf];
      }
    }
    func_0x0001082a09f0();
    func_0x0001082a09b8();
    func_0x0001082a09f0();
    (**(code **)(extraout_x9 + 8))(param_2,extraout_x8 + 8,&DAT_10f6389e8,plVar2);
    lVar1 = lStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (appuStack_58,param_1 + 0x13);
    if (-1 < cStack_41) {
      appuStack_58[0] = appuStack_58;
    }
    (**(code **)(*param_2 + 8))(param_2,lVar1 + 8,"label",appuStack_58[0]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_58);
    func_0x0001082a09f0();
    (**(code **)(extraout_x9_00 + 8))(param_2,extraout_x8_00 + 8,"category",puVar3);
    plVar2 = param_1;
    FUN_1082a0834();
    if ((int)plVar2 != 0) {
      func_0x0001082a09f0();
      func_0x0001082a09b8();
    }
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x28))();
    if ((int)plVar2 != 0) {
      (**(code **)(*param_2 + 0x30))(param_2,lStack_60 + 8,*(undefined1 *)((long)param_1 + 0x91));
    }
    (**(code **)(*param_1 + 0x30))(param_1,param_2,&lStack_60);
    FUN_1083a3ca0(lStack_60);
  }
  return;
}



/* Entry: 1082a07f8; end: 1082a0833;  */

void FUN_1082a07f8(long *param_1)

{
  long *plVar1;
  
  if (param_1[0x11] == -1) {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x40))();
    param_1[0x11] = (long)plVar1;
  }
  return;
}



/* Entry: 1082a0834; end: 1082a0903;  */

bool FUN_1082a0834(long param_1)

{
  if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0xc) == 0)) {
    if (*(char *)(param_1 + 0x90) == '\x02') {
      return *(short *)(*(long *)(param_1 + 0x48) + 4) == 0;
    }
    return true;
  }
  return false;
}



/* Entry: 1082a0904; end: 1082a094f;  */

void FUN_1082a0904(long param_1)

{
  long *plVar1;
  
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (plVar1 = (long *)(param_1 + 0x20), *(short *)(*plVar1 + 4) != 0)) {
    FUN_1082abb08(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x20) + 0x78),param_1);
    func_0x00010827a2cc(plVar1,2);
    *(undefined8 *)*plVar1 = 0;
    return;
  }
  return;
}



/* Entry: 1082a0950; end: 1082a09fb;  */

void FUN_1082a0950(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  if ((*(long *)(param_1 + 0x80) == 0) || (*(char *)(param_1 + 0x90) != '\x01')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  func_0x0001082ade44(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x20) + 0x78));
  FUN_1082a07f8();
  if (*(char *)(unaff_x20 + 0x90) == '\0') {
    func_0x0001082ae038();
    iVar2 = (int)&stack0xffffffffffffffd8;
    FUN_1082ab854();
    if (iVar2 != 0) {
      func_0x0001082abb88(unaff_x19 + 0x48,unaff_x20 + 0x20);
    }
    FUN_1082ab230();
  }
  else {
    *(int *)(unaff_x19 + 0x80) = *(int *)(unaff_x19 + 0x80) + -1;
    *(long *)(unaff_x19 + 0x88) = *(long *)(unaff_x19 + 0x88) - param_1;
    if (((*(int *)(unaff_x20 + 8) == 0) && (*(short *)(*(long *)(unaff_x20 + 0x48) + 4) == 0)) &&
       (*(short *)(*(long *)(unaff_x20 + 0x20) + 4) != 0)) {
      plVar3 = (long *)(unaff_x19 + 0x48);
      FUN_1082aca0c();
      plVar1 = (long *)0x0;
      while( true ) {
        if (plVar3 == (long *)0x0) {
          return;
        }
        if (*plVar3 == unaff_x20) break;
        plVar1 = plVar3;
        plVar3 = (long *)plVar3[1];
      }
      plVar4 = (long *)plVar3[1];
      if (plVar4 == (long *)0x0) {
        if (plVar1 == (long *)0x0) {
          func_0x0001082acab8((long *)(unaff_x19 + 0x48),(long *)(unaff_x20 + 0x20));
        }
        else {
          plVar1[1] = 0;
        }
      }
      else {
        lVar5 = *plVar4;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar5;
        plVar3 = plVar4;
      }
      __ZdlPv(plVar3);
      *(int *)(unaff_x19 + 0x58) = *(int *)(unaff_x19 + 0x58) + -1;
      return;
    }
  }
  return;
}



/* Entry: 1082a09fc; end: 1082a0a5f;  */

undefined8 * FUN_1082a09fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_110a35160;
  uStack_28 = 0;
  param_1[2] = uVar1;
  FUN_108267a54(&uStack_28);
  *param_1 = &PTR_FUN_110a35e38;
  return param_1;
}



/* Entry: 1082a0a60; end: 1082a0a63;  */

undefined8 * FUN_1082a0a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a35160;
  FUN_108267a54(param_1 + 2);
  return param_1;
}



/* Entry: 1082a0a64; end: 1082a0a77;  */

void FUN_1082a0a64(void)

{
  FUN_10828c644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a0a78; end: 1082a0a8f;  */

void FUN_1082a0a78(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 *unaff_x19;
  
  lVar5 = *(long *)(param_1 + 0x10);
  pbVar1 = (byte *)(lVar5 + 0xd8);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((bVar2 & 1) != 0) {
    return;
  }
  func_0x00010831b89c(*(undefined8 *)(lVar5 + 0xc0));
  FUN_10831b54c(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x19 + 8) = 0;
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082a0a90; end: 1082a0ab3;  */

void FUN_1082a0a90(long param_1,long param_2)

{
  FUN_10828ae78();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  return;
}



/* Entry: 1082a0ab4; end: 1082a0b13;  */

long FUN_1082a0ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  *param_4 = 0;
  FUN_10828adb8();
  func_0x0001082a0c9c();
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return param_1;
}



/* Entry: 1082a0b14; end: 1082a0b6b;  */

long FUN_1082a0b14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  *param_4 = 0;
  FUN_10828adb8();
  func_0x0001082a0c9c();
  *(undefined8 *)(param_1 + 0x18) = *param_5;
  return param_1;
}



/* Entry: 1082a0b6c; end: 1082a0c23;  */

void FUN_1082a0b6c(long param_1,long param_2)

{
  FUN_10828aef0();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1082a0c24; end: 1082a0c93;  */

void FUN_1082a0c24(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int *piStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((long)param_2 + 0x14);
  piStack_30 = (int *)*param_2;
  if (piStack_30 != (int *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piStack_30,0x10);
      if (bVar4) {
        *piStack_30 = *piStack_30 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_28 = param_3;
  FUN_1082a0b14(param_1,uVar1,uVar2,&piStack_30,&uStack_28);
  FUN_10810a400(&piStack_30);
  return;
}



/* Entry: 1082a0c94; end: 1082a0cab;  */

void FUN_1082a0c94(void)

{
  return;
}



/* Entry: 1082a0cac; end: 1082a0d23;  */

void FUN_1082a0cac(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = *(long **)*param_1;
  (**(code **)(*plVar1 + 0x18))();
  if (plVar1 != (long *)0x0) {
    if ((param_2[2] != 0) || (param_2[0x18] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2,plVar1[0x10]);
      return;
    }
    plStack_28 = param_2;
    FUN_1082b239c(&plStack_28);
  }
  return;
}



/* Entry: 1082a0d24; end: 1082a0e67;  */

undefined8 *
FUN_1082a0d24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uStack_58;
  int *piStack_50;
  int *piStack_48;
  
  *param_1 = &PTR_DAT_110a35ea8;
  param_1[1] = &PTR_DAT_110a35fb8;
  FUN_1081fdfac(param_1 + 2,0x3520);
  piStack_48 = (int *)*param_5;
  if (piStack_48 != (int *)0x0) {
    *piStack_48 = *piStack_48 + 1;
  }
  FUN_108289b74(param_1 + 8,param_2,&piStack_48);
  FUN_108289ea0(&piStack_48);
  piStack_50 = (int *)*param_5;
  if (piStack_50 != (int *)0x0) {
    *piStack_50 = *piStack_50 + 1;
  }
  FUN_108289cc4(param_1 + 0x11,param_2,&piStack_50);
  FUN_108289ea0(&piStack_50);
  uStack_58 = *param_5;
  *param_5 = 0;
  FUN_1082a1888(param_1 + 0x1a,param_2,&uStack_58);
  func_0x0001082a20dc();
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = param_2;
  param_1[0x2d] = param_3;
  param_1[0x2e] = param_4;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return param_1;
}



/* Entry: 1082a0e68; end: 1082a0e8b;  */

undefined8 * FUN_1082a0e68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a34e00;
  FUN_1082892dc();
  FUN_108289e68(param_1 + 5);
  FUN_108289ea0(param_1 + 4);
  FUN_10828a0d0(param_1 + 2);
  return param_1;
}



/* Entry: 1082a0e8c; end: 1082a1037;  */

long FUN_1082a0e8c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_118 [96];
  char cStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  lVar1 = param_1;
  func_0x0001082a20a0();
  uStack_68 = extraout_x8;
  while ((*(long *)(param_1 + 0x180) != 0 &&
         (in_ZR = 0, *(long *)(*(long *)(param_1 + 0x180) + 0x18) == param_2))) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 8);
    lVar1 = *(long *)(param_1 + 0x188);
    while ((lVar1 != 0 && (*(long *)(lVar1 + 0x20) == lVar2 + 1))) {
      (**(code **)(**(long **)(param_1 + 0x178) + 0x10))(*(long **)(param_1 + 0x178),param_1);
      lVar1 = *(long *)(*(long *)(param_1 + 0x188) + 0x28);
      *(long *)(param_1 + 0x188) = lVar1;
    }
    lVar1 = *(long *)(param_1 + 0x150);
    FUN_1082a47e4(auStack_118,*(undefined8 *)(*(long *)(param_1 + 0x160) + 0x10),
                  *(undefined8 *)(lVar1 + 8),*(undefined1 *)(lVar1 + 0x18),param_4,param_5,
                  **(undefined8 **)(param_1 + 0x180),
                  *(undefined1 *)((long)*(undefined8 **)(param_1 + 0x180) + 0x24),
                  *(undefined4 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x4c));
    FUN_1082a1068(param_1,auStack_118,param_3);
    lVar1 = param_1;
    FUN_1082a10b4(param_1,uStack_80,*(undefined8 *)(*(long *)(param_1 + 0x180) + 8),uStack_90);
    lVar4 = 0;
    for (lVar2 = 0; lVar3 = *(long *)(param_1 + 0x180), lVar2 < *(int *)(lVar3 + 0x20);
        lVar2 = lVar2 + 1) {
      lVar1 = param_1;
      FUN_1082a10bc(param_1,*(long *)(lVar3 + 0x10) + lVar4);
      lVar4 = lVar4 + 0x30;
    }
    *(long *)(*(long *)(param_1 + 0x170) + 8) = *(long *)(*(long *)(param_1 + 0x170) + 8) + 1;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(lVar3 + 0x28);
    in_ZR = cStack_b8 == '\x01';
    if ((bool)in_ZR) {
      func_0x0001082a20ec();
    }
  }
  func_0x0001082a208c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (cStack_b8 == '\x01') {
      func_0x0001082a20ec();
    }
    func_0x0001082a20b8();
    return *(long *)(*(long *)(lVar1 + 0x150) + 8);
  }
  return lVar1;
}



/* Entry: 1082a1038; end: 1082a1067;  */

undefined8 FUN_1082a1038(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x150) + 8);
}



/* Entry: 1082a1068; end: 1082a10b3;  */

void FUN_1082a1068(long param_1,long param_2)

{
  long *plVar1;
  
  FUN_1082a18f8();
  if ((*(byte *)(*(long *)(param_2 + 0x88) + 0x40) >> 5 & 1) == 0) {
    return;
  }
  plVar1 = *(long **)(param_1 + 0x178);
  if ((int)plVar1[6] != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001082a1918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,*(long *)(*(long *)(param_1 + 0x150) + 0x20) + 8);
  return;
}



/* Entry: 1082a10b4; end: 1082a10bb;  */

void FUN_1082a10b4(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x178);
  if ((int)plVar1[6] != 0) {
    return;
  }
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x40))();
  if (((ulong)plVar2 & 1) == 0) {
    *(undefined4 *)(plVar1 + 6) = 2;
  }
  return;
}



/* Entry: 1082a10bc; end: 1082a1217;  */

void FUN_1082a10bc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    uStack_40 = 0;
    uStack_38 = 0;
    plVar1 = (long *)param_2[4];
    if (plVar1 != (long *)0x0) {
      func_0x0001082a2158(*(undefined8 *)(*plVar1 + 0x10));
    }
    plStack_48 = plVar1;
    FUN_1082a16e0(param_1,&uStack_38,&uStack_40,&plStack_48,0);
    func_0x0001082a20e4();
    FUN_1082647e4(&uStack_40);
    FUN_1082647e4(&uStack_38);
    func_0x0001082a1754(param_1,*(undefined4 *)(param_2 + 5),*(undefined4 *)((long)param_2 + 0x2c));
  }
  else {
    func_0x0001082a2158(*(undefined8 *)(*plVar1 + 0x10));
    uStack_58 = 0;
    plStack_60 = (long *)param_2[4];
    plStack_50 = plVar1;
    if (plStack_60 != (long *)0x0) {
      func_0x0001082a2158(*(undefined8 *)(*plStack_60 + 0x10));
    }
    FUN_1082a16e0(param_1,&plStack_50,&uStack_58,&plStack_60,*(undefined1 *)((long)param_2 + 0x1c));
    FUN_1082647e4(&plStack_60);
    func_0x0001082a2114();
    func_0x0001082a2124();
    if (*(int *)((long)param_2 + 0xc) == 0) {
      func_0x0001082a175c(param_1,*(undefined4 *)(param_2 + 1),*(undefined4 *)((long)param_2 + 0x14)
                          ,*(undefined2 *)(param_2 + 3),*(undefined2 *)((long)param_2 + 0x1a),
                          *(undefined4 *)((long)param_2 + 0x2c));
    }
    else {
      func_0x0001082a1764(param_1,*(undefined4 *)(param_2 + 1),*(int *)((long)param_2 + 0xc),
                          *(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 5),
                          *(undefined4 *)((long)param_2 + 0x2c));
    }
  }
  return;
}



/* Entry: 1082a1218; end: 1082a1287;  */

void FUN_1082a1218(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_108289488(param_1 + 0x40);
  FUN_108289488(param_1 + 0x88);
  FUN_108289488(param_1 + 0xd0);
  plVar1 = (long *)(param_1 + 0x118);
  while (lVar2 = *plVar1, lVar2 != 0) {
    FUN_1082a1288(param_1,lVar2,0);
    plVar1 = (long *)(lVar2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x0001082a1284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x160) + 0x40))();
  return;
}



/* Entry: 1082a1288; end: 1082a1307;  */

void FUN_1082a1288(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)param_3;
  ppuStack_48 = &PTR_FUN_110a36150;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_1;
  FUN_1082a1ef4(param_2,&ppuStack_48);
  FUN_1082a1eb0();
  FUN_1082a208c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar1 = &ppuStack_48;
  FUN_1082a1eb0();
  func_0x0001082a20b8();
  FUN_1082893c4(pppuVar1 + 8);
  FUN_1082893c4(pppuVar1 + 0x11);
  FUN_1082893c4(pppuVar1 + 0x1a);
  func_0x00010840f9b4(pppuVar1 + 2);
  pppuVar1[0x29] = (undefined **)0x0;
  pppuVar1[0x26] = (undefined **)0x0;
  pppuVar1[0x25] = (undefined **)0x0;
  pppuVar1[0x28] = (undefined **)0x0;
  pppuVar1[0x27] = (undefined **)0x0;
  pppuVar1[0x24] = (undefined **)0x0;
  pppuVar1[0x23] = (undefined **)0x0;
  return;
}



/* Entry: 1082a1308; end: 1082a1357;  */

void FUN_1082a1308(long param_1)

{
  FUN_1082893c4(param_1 + 0x40);
  FUN_1082893c4(param_1 + 0x88);
  FUN_1082893c4(param_1 + 0xd0);
  func_0x00010840f9b4(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}



/* Entry: 1082a1358; end: 1082a1447;  */

undefined1 * FUN_1082a1358(long param_1)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x0001082a20a0();
  uStack_38 = extraout_x8;
  func_0x0001082a211c();
  lVar8 = **(long **)(param_1 + 0x170);
  lVar2 = param_1 + 0x10;
  func_0x0001082a212c(lVar2,0x39);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar2 + 0x30;
  *(code **)(lVar2 + 0x30) = FUN_1082a1f14;
  lVar6 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar6 + 8;
  *(char *)(lVar6 + 8) = (char)lVar2 - (char)uVar1;
  lVar6 = *(long *)(param_1 + 0x18) + 1;
  *(long *)(param_1 + 0x10) = lVar6;
  *(long *)(param_1 + 0x18) = lVar6;
  FUN_1082a1a10(auStack_58,auStack_78);
  FUN_1082a1a10(lVar2,auStack_58);
  *(long *)(lVar2 + 0x20) = lVar8 + 1;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  puVar3 = auStack_58;
  FUN_108292200();
  if (*(long *)(param_1 + 0x130) == 0) {
    *(long *)(param_1 + 0x128) = lVar2;
  }
  else {
    *(long *)(*(long *)(param_1 + 0x130) + 0x28) = lVar2;
  }
  *(long *)(param_1 + 0x130) = lVar2;
  puVar7 = *(undefined1 **)(lVar2 + 0x20);
  func_0x0001082a20d4();
  func_0x0001082a208c(uStack_38);
  if ((bool)in_ZR) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  func_0x0001082a20d4();
  func_0x0001082a20b8();
  pcStack_88 = FUN_1082a1448;
  lStack_a0 = lVar2;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001082a20a0();
  lStack_a8 = extraout_x8_00;
  func_0x0001082a211c();
  plVar5 = (long *)(puVar4 + 0x118);
  puVar3 = puVar4 + 0x10;
  puVar7 = auStack_c8;
  FUN_1082a14b8(plVar5,puVar3,puVar7);
  func_0x0001082a20d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return (undefined1 *)(*(long *)(*(long *)(puVar4 + 0x170) + 8) + 1);
  }
  ___stack_chk_fail();
  func_0x0001082a20d4();
  func_0x0001082a20b8();
  FUN_1082a1f1c(puVar3,puVar7);
  if (plVar5[1] == 0) {
    *plVar5 = (long)puVar3;
  }
  else {
    *(undefined1 **)(plVar5[1] + 0x20) = puVar3;
  }
  plVar5[1] = (long)puVar3;
  return puVar3;
}



/* Entry: 1082a1448; end: 1082a14b7;  */

long FUN_1082a1448(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  func_0x0001082a20a0();
  lStack_28 = extraout_x8;
  func_0x0001082a211c();
  plVar1 = (long *)(param_1 + 0x118);
  lVar2 = param_1 + 0x10;
  puVar3 = auStack_48;
  FUN_1082a14b8(plVar1,lVar2,puVar3);
  func_0x0001082a20d4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return *(long *)(*(long *)(param_1 + 0x170) + 8) + 1;
  }
  ___stack_chk_fail();
  func_0x0001082a20d4();
  func_0x0001082a20b8();
  FUN_1082a1f1c(lVar2,puVar3);
  if (plVar1[1] == 0) {
    *plVar1 = lVar2;
  }
  else {
    *(long *)(plVar1[1] + 0x20) = lVar2;
  }
  plVar1[1] = lVar2;
  return lVar2;
}



/* Entry: 1082a14b8; end: 1082a14f3;  */

void FUN_1082a14b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1082a1f1c(param_2,param_3);
  if (param_1[1] == 0) {
    *param_1 = param_2;
  }
  else {
    *(undefined8 *)(param_1[1] + 0x20) = param_2;
  }
  param_1[1] = param_2;
  return;
}



/* Entry: 1082a14f4; end: 1082a1607;  */

void FUN_1082a14f4(long param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                  undefined1 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x138);
  plVar5 = (long *)(param_1 + 0x10);
  func_0x0001082a212c(plVar5,0x39);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar5 + 6;
  plVar5[6] = (long)FUN_1082a2018;
  lVar6 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar6 + 8;
  *(char *)(lVar6 + 8) = (char)plVar5 - (char)uVar2;
  lVar6 = *(long *)(param_1 + 0x18) + 1;
  *(long *)(param_1 + 0x10) = lVar6;
  *(long *)(param_1 + 0x18) = lVar6;
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5[3] = 0;
  plVar5[2] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  if (*(long *)(param_1 + 0x140) == 0) {
    *(long **)(param_1 + 0x138) = plVar5;
  }
  else {
    *(long **)(*(long *)(param_1 + 0x140) + 0x28) = plVar5;
  }
  *(long **)(param_1 + 0x140) = plVar5;
  lVar6 = **(long **)(param_1 + 0x170) + 1;
  **(long **)(param_1 + 0x170) = lVar6;
  for (lVar7 = 0; lVar7 < *(int *)(param_2 + 0x40); lVar7 = lVar7 + 1) {
    piVar1 = (int *)(*(long *)(param_5 + lVar7 * 8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *plVar5 = param_2;
  plVar5[1] = param_5;
  *(undefined4 *)(plVar5 + 4) = param_4;
  lVar7 = **(long **)(param_1 + 0x150);
  plVar5[2] = param_3;
  plVar5[3] = lVar7;
  *(undefined1 *)((long)plVar5 + 0x24) = param_6;
  if (lVar8 == 0) {
    *(long *)(param_1 + 0x148) = lVar6;
  }
  return;
}



/* Entry: 1082a1608; end: 1082a16df;  */

void FUN_1082a1608(long param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                  undefined1 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x130);
  plVar5 = (long *)(param_1 + 8);
  func_0x0001082a212c(plVar5,0x39);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar5 + 6;
  plVar5[6] = (long)FUN_1082a2018;
  lVar6 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar6 + 8;
  *(char *)(lVar6 + 8) = (char)plVar5 - (char)uVar2;
  lVar6 = *(long *)(param_1 + 0x10) + 1;
  *(long *)(param_1 + 8) = lVar6;
  *(long *)(param_1 + 0x10) = lVar6;
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5[3] = 0;
  plVar5[2] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  if (*(long *)(param_1 + 0x138) == 0) {
    *(long **)(param_1 + 0x130) = plVar5;
  }
  else {
    *(long **)(*(long *)(param_1 + 0x138) + 0x28) = plVar5;
  }
  *(long **)(param_1 + 0x138) = plVar5;
  lVar6 = **(long **)(param_1 + 0x168) + 1;
  **(long **)(param_1 + 0x168) = lVar6;
  for (lVar7 = 0; lVar7 < *(int *)(param_2 + 0x40); lVar7 = lVar7 + 1) {
    piVar1 = (int *)(*(long *)(param_5 + lVar7 * 8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *plVar5 = param_2;
  plVar5[1] = param_5;
  *(undefined4 *)(plVar5 + 4) = param_4;
  lVar7 = **(long **)(param_1 + 0x148);
  plVar5[2] = param_3;
  plVar5[3] = lVar7;
  *(undefined1 *)((long)plVar5 + 0x24) = param_6;
  if (lVar8 == 0) {
    *(long *)(param_1 + 0x140) = lVar6;
  }
  return;
}



/* Entry: 1082a16e0; end: 1082a1753;  */

void FUN_1082a16e0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  uStack_28 = *param_2;
  *param_2 = 0;
  uStack_30 = *param_3;
  *param_3 = 0;
  uStack_38 = *param_4;
  *param_4 = 0;
  FUN_1082a2320(uVar1,&uStack_28,&uStack_30,&uStack_38);
  func_0x0001082a2114();
  func_0x0001082a2124();
  func_0x0001082a20e4();
  return;
}



/* Entry: 1082a1754; end: 1082a176f;  */

void FUN_1082a1754(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x178);
  plVar2 = plVar1;
  FUN_1082a23bc();
  if ((int)plVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a2454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1082a1770; end: 1082a1783;  */

void FUN_1082a1770(void)

{
  FUN_108294210();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a1784; end: 1082a1887;  */

undefined8 FUN_1082a1784(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 1082a1888; end: 1082a18e3;  */

undefined8 * FUN_1082a1888(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_3;
  *param_3 = 0;
  FUN_108289238(param_1,param_2,2,&uStack_28);
  func_0x0001082a20dc();
  *param_1 = &PTR_FUN_110a36108;
  return param_1;
}



/* Entry: 1082a18e4; end: 1082a18f7;  */

void FUN_1082a18e4(void)

{
  FUN_108289364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082a18f8; end: 1082a191b;  */

void FUN_1082a18f8(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x178);
  plVar3 = plVar2;
  func_0x0001082a218c();
  iVar1 = *(int *)(*(long *)(param_2 + 0x98) + 0x1c);
  FUN_1082a25bc();
  if ((*(int *)(plVar3[2] + 0x38) < iVar1) ||
     (plVar3 = plVar2, (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3),
     ((ulong)plVar3 & 1) == 0)) {
    *(undefined4 *)(plVar2 + 6) = 2;
  }
  else {
    *(undefined4 *)(plVar2 + 6) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x88);
    FUN_1082a25bc();
    FUN_1082a32c0(uVar4,plVar3[2]);
    *(int *)((long)plVar2 + 0x34) = (int)uVar4;
  }
  return;
}



/* Entry: 1082a191c; end: 1082a19cf;  */

void FUN_1082a191c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001082a1944();
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



/* Entry: 1082a19d0; end: 1082a1a0f;  */

long FUN_1082a19d0(long param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = -(param_2 >> 0x1f & 1) & 0xfffffff000000000 | (param_2 & 0xffffffff) << 4;
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_1082896c8;
    lVar4 = *(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18) * 0x10;
    lVar3 = *(long *)(lVar4 + -8);
    func_0x00010828a180();
    uVar7 = lVar3 - *(ulong *)(lVar4 + -0x10);
    uVar6 = (((uVar7 / 4) * 4 - uVar7) + 4) % 4;
    uVar1 = uVar6 + uVar5;
    if (CARRY8(uVar6,uVar5)) {
      return 0;
    }
    if (uVar1 <= *(ulong *)(lVar4 + -0x10)) {
      _bzero(uVar7 + *(long *)(param_1 + 0x40),uVar6);
      *param_4 = uVar6 + uVar7;
      FUN_1082896cc(param_3,(long *)(lVar4 + -8));
      *(ulong *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) - uVar1;
      *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar1;
      return uVar6 + uVar7 + *(long *)(param_1 + 0x40);
    }
  }
  lVar4 = param_1;
  FUN_108289718(param_1,uVar5);
  if ((int)lVar4 == 0) {
    return 0;
  }
  *param_4 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar4 = *(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18) * 0x10;
    FUN_1082896cc(param_3,lVar4 + -8);
    *(ulong *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) - uVar5;
    *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar5;
    return *(long *)(param_1 + 0x40);
  }
LAB_1082896c8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082896cc);
  (*pcVar2)();
}



/* Entry: 1082a1a10; end: 1082a1a6b;  */

long FUN_1082a1a10(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1082a1a6c; end: 1082a1a73;  */

void FUN_1082a1a6c(void)

{
  return;
}



/* Entry: 1082a1a74; end: 1082a1aa7;  */

void FUN_1082a1a74(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_FUN_110a36150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1082a1aa8; end: 1082a1ad7;  */

void FUN_1082a1aa8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a36150;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082a1ad8; end: 1082a1e2b;  */

long FUN_1082a1ad8(long param_1,long *param_2,undefined8 *param_3,int *param_4,undefined8 *param_5,
                  long *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 in_ZR;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [56];
  undefined1 auStack_158 [32];
  undefined8 uStack_138;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  char cStack_88;
  undefined8 uStack_70;
  
  lVar15 = param_1;
  func_0x0001082a20a0();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  iVar3 = *param_4;
  uVar13 = *param_5;
  lVar10 = *param_6;
  lVar15 = *(long *)(lVar15 + 8);
  plVar11 = *(long **)(*param_2 + *(long *)(*(long *)*param_2 + -0x18) + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(lVar15 + 0x160) + 0x10);
  uStack_70 = extraout_x8;
  FUN_10828a5c8(uVar6,plVar11);
  if ((int)uVar6 == 0) {
    lVar8 = 0;
    goto LAB_1082a1d40;
  }
  plVar12 = *(long **)(*(long *)(lVar15 + 0x160) + 0x10);
  (**(code **)(*plVar11 + 0x50))(&uStack_e0,plVar11);
  (**(code **)(*plVar12 + 0x58))(plVar12,iVar3,&uStack_e0,iVar3);
  if (cStack_88 == '\x01') {
    func_0x0001082a20c0();
  }
  iVar4 = (int)uVar2 - (int)uVar1;
  plVar7 = plVar12;
  func_0x0001082a1e70();
  lVar14 = (long)(int)plVar7 * (long)iVar4;
  uStack_e8 = 0;
  in_ZR = iVar3 == (int)plVar12;
  if (((bool)in_ZR) &&
     ((lVar8 = *(long *)(lVar15 + 0x160), (*(byte *)(*(long *)(lVar8 + 0x10) + 0x1c) >> 1 & 1) != 0
      || (in_ZR = lVar10 == lVar14, (bool)in_ZR)))) {
LAB_1082a1cfc:
    uStack_d0 = 0;
    uStack_e0 = uVar13;
    lStack_d8 = lVar10;
    FUN_10829f560(lVar8,plVar11,uVar1,uVar2,iVar3,plVar12,&uStack_e0,1,
                  *(undefined1 *)(param_1 + 0x10));
    func_0x0001082a1ea4(uStack_d0);
  }
  else {
    iVar5 = (int)((ulong)uVar2 >> 0x20) - (int)((ulong)uVar1 >> 0x20);
    lVar8 = lVar14 * iVar5;
    __Znam(lVar8);
    func_0x0001082a1e8c(&uStack_e8,lVar8);
    uStack_110 = 0;
    uVar6 = CONCAT44(iVar5,iVar4);
    uStack_e0 = uVar6;
    FUN_1082a0b14(auStack_108,iVar3,0,&uStack_110,&uStack_e0);
    FUN_10810a400(&uStack_110);
    uStack_138 = 0;
    uStack_e0 = uVar6;
    FUN_1082a0b14(auStack_130,plVar12,0,&uStack_138,&uStack_e0);
    FUN_10810a400(&uStack_138);
    FUN_1082a0b6c(auStack_158,auStack_130);
    FUN_10829082c(&uStack_e0,auStack_158,uStack_e8,lVar14);
    FUN_1082a0b6c(auStack_1b0,auStack_108);
    FUN_10828db68(auStack_190,auStack_1b0,uVar13,lVar10);
    puVar9 = &uStack_e0;
    FUN_10828cc04(puVar9,auStack_190,0);
    func_0x00010827ed24(auStack_190);
    func_0x00010828afb8(auStack_1b0);
    func_0x00010827ec18(&uStack_e0);
    func_0x00010828afb8(auStack_158);
    uVar13 = uStack_e8;
    func_0x00010828afb8(auStack_130);
    func_0x00010828afb8(auStack_108);
    if ((int)puVar9 != 0) {
      lVar8 = *(long *)(lVar15 + 0x160);
      lVar10 = lVar14;
      goto LAB_1082a1cfc;
    }
    lVar8 = 0;
  }
  func_0x0001078ae540(&uStack_e8);
LAB_1082a1d40:
  func_0x0001082a208c(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001082a1ea4(uStack_d0);
    do {
      func_0x0001078ae540(&uStack_e8);
      func_0x0001082a20b8();
      FUN_10810a400(&uStack_138);
      func_0x00010828afb8(auStack_108);
    } while( true );
  }
  return lVar8;
}



/* Entry: 1082a1e2c; end: 1082a1e63;  */

long FUN_1082a1e2c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a361c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082a1e64; end: 1082a1eaf;  */

undefined ** FUN_1082a1e64(void)

{
  return &PTR_DAT_110a361c0;
}



/* Entry: 1082a1eb0; end: 1082a1ef3;  */

long * FUN_1082a1eb0(long *param_1)

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



/* Entry: 1082a1ef4; end: 1082a1f13;  */

long * FUN_1082a1ef4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a1f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48();
  plVar2 = (long *)((long)plVar1 + -0x39);
  plVar1 = *(long **)((long)plVar1 + -0x21);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return plVar2;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar1 + lVar3))();
  return plVar2;
}



/* Entry: 1082a1f14; end: 1082a1f1b;  */

long * FUN_1082a1f14(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + -0x39);
  plVar1 = *(long **)(param_1 + -0x21);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return plVar2;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar1 + lVar3))();
  return plVar2;
}



/* Entry: 1082a1f1c; end: 1082a1f3f;  */

void FUN_1082a1f1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1082a1f40(param_1,&uStack_18);
  return;
}



/* Entry: 1082a1f40; end: 1082a1ff7;  */

long * FUN_1082a1f40(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  plVar1 = param_1;
  func_0x0001082a212c(param_1,0x31);
  lVar4 = param_1[1];
  param_1[1] = (long)(plVar1 + 5);
  plVar1[5] = (long)FUN_1082a1ff8;
  lVar5 = param_1[1];
  param_1[1] = lVar5 + 8;
  *(char *)(lVar5 + 8) = (char)plVar1 - (char)(int)lVar4;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  func_0x0001082a20a0();
  uStack_28 = extraout_x8;
  func_0x0001082a211c();
  plVar2 = plVar1;
  FUN_1082a2000(plVar1,auStack_48);
  func_0x0001082a20d4();
  func_0x0001082a208c(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  plVar3 = (long *)((long)plVar2 + -0x31);
  plVar1 = *(long **)((long)plVar2 + -0x19);
  if (plVar1 == plVar3) {
    lVar4 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return plVar3;
    }
    lVar4 = 0x28;
  }
  (**(code **)(*plVar1 + lVar4))();
  return plVar3;
}



/* Entry: 1082a1ff8; end: 1082a1fff;  */

long * FUN_1082a1ff8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + -0x31);
  plVar1 = *(long **)(param_1 + -0x19);
  if (plVar1 == plVar2) {
    lVar3 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return plVar2;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar1 + lVar3))();
  return plVar2;
}



/* Entry: 1082a2000; end: 1082a2017;  */

void FUN_1082a2000(long param_1)

{
  FUN_1082a1a10();
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1082a2018; end: 1082a208b;  */

long * FUN_1082a2018(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  for (lVar6 = 0; lVar6 < *(int *)(*(long *)(param_1 + -0x39) + 0x40); lVar6 = lVar6 + 1) {
    plVar5 = *(long **)(*(long *)(param_1 + -0x31) + lVar6 * 8);
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
  return (long *)(param_1 + -0x39);
}



/* Entry: 1082a208c; end: 1082a215f;  */

void FUN_1082a208c(void)

{
  return;
}



/* Entry: 1082a2160; end: 1082a21e7;  */

void FUN_1082a2160(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  (**(code **)(*param_1 + 0x28))();
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 != 0) {
    func_0x0001082a2624();
  }
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    func_0x0001082a2624();
  }
  plVar2 = (long *)param_1[4];
  param_1[4] = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a21d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return;
  }
  return;
}



/* Entry: 1082a21e8; end: 1082a2257;  */

void FUN_1082a21e8(long *param_1,long *param_2)

{
  long lVar1;
  long lStack_28;
  
  *(undefined4 *)(param_1 + 6) = 1;
  lStack_28 = *param_2;
  *param_2 = 0;
  (**(code **)(*param_1 + 0x90))(param_1,&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001082a2630();
  }
  return;
}



/* Entry: 1082a2258; end: 1082a22df;  */

void FUN_1082a2258(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = param_1;
  func_0x0001082a218c();
  iVar1 = *(int *)(*(long *)(param_2 + 0x98) + 0x1c);
  FUN_1082a25bc();
  if ((*(int *)(plVar2[2] + 0x38) < iVar1) ||
     (plVar2 = param_1, (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3),
     ((ulong)plVar2 & 1) == 0)) {
    *(undefined4 *)(param_1 + 6) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 6) = 0;
    uVar3 = *(undefined8 *)(param_2 + 0x88);
    FUN_1082a25bc();
    FUN_1082a32c0(uVar3,plVar2[2]);
    *(int *)((long)param_1 + 0x34) = (int)uVar3;
  }
  return;
}



/* Entry: 1082a22e0; end: 1082a231f;  */

void FUN_1082a22e0(long *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  if ((int)param_1[6] != 0) {
    return;
  }
  (**(code **)(*param_1 + 0x40))();
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 6) = 2;
  }
  return;
}



/* Entry: 1082a2320; end: 1082a23bb;  */

void FUN_1082a2320(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((int)param_1[6] == 0) {
    uStack_28 = *param_2;
    *param_2 = 0;
    uStack_30 = *param_3;
    *param_3 = 0;
    uStack_38 = *param_4;
    *param_4 = 0;
    (**(code **)(*param_1 + 0x48))(param_1,&uStack_28,&uStack_30,&uStack_38);
    FUN_1082647e4(&uStack_38);
    FUN_1082647e4(&uStack_30);
    FUN_1082647e4(&uStack_28);
  }
  return;
}



/* Entry: 1082a23bc; end: 1082a240f;  */

bool FUN_1082a23bc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[6];
  if ((int)lVar1 == 0) {
    if (*(int *)((long)param_1 + 0x34) != 0) {
      FUN_1082a25bc();
      (**(code **)(*param_1 + 0xf0))();
    }
  }
  else {
    FUN_1082a25bc();
  }
  return (int)lVar1 == 0;
}



/* Entry: 1082a2410; end: 1082a245f;  */

void FUN_1082a2410(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_1082a23bc();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001082a2454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1082a2460; end: 1082a253f;  */

void FUN_1082a2460(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x24;
  
  func_0x0001082a25cc();
  FUN_1082a23bc();
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x24 + 0x58);
    func_0x0001082a2608();
                    /* WARNING: Could not recover jumptable at 0x0001082a2604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 1082a2540; end: 1082a25bb;  */

void FUN_1082a2540(void)

{
  int iVar1;
  int iVar2;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  
  func_0x0001082a25cc();
  for (iVar3 = 0; iVar2 = unaff_w22 - iVar3, iVar2 != 0 && iVar3 <= unaff_w22; iVar3 = iVar1 + iVar3
      ) {
    iVar1 = unaff_w21;
    if (iVar2 <= unaff_w21) {
      iVar1 = iVar2;
    }
    FUN_1082a2460();
  }
  return;
}



/* Entry: 1082a25bc; end: 1082a2647;  */

void FUN_1082a25bc(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x0001082a25c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x18))();
  return;
}



/* Entry: 1082a2648; end: 1082a2743;  */

undefined8 * FUN_1082a2648(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lStack_38;
  
  uVar3 = *param_2;
  plVar4 = param_1 + 1;
  *plVar4 = 0;
  plVar5 = param_1 + 2;
  *plVar5 = 0;
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar3;
  if ((long *)param_2[1] != (long *)0x0) {
    (**(code **)(*(long *)param_2[1] + 0x18))(&lStack_38);
    lVar1 = lStack_38;
    lStack_38 = 0;
    lVar2 = *plVar4;
    *plVar4 = lVar1;
    if (lVar2 != 0) {
      FUN_1082a2860();
      lVar1 = lStack_38;
      lStack_38 = 0;
      if (lVar1 != 0) {
        FUN_1082a2860();
      }
    }
  }
  if ((long *)param_2[2] != (long *)0x0) {
    (**(code **)(*(long *)param_2[2] + 0x18))(&lStack_38);
    lVar1 = lStack_38;
    lStack_38 = 0;
    lVar2 = *plVar5;
    *plVar5 = lVar1;
    if (lVar2 != 0) {
      FUN_1082a2860();
      lVar1 = lStack_38;
      lStack_38 = 0;
      if (lVar1 != 0) {
        FUN_1082a2860();
      }
    }
  }
  return param_1;
}



/* Entry: 1082a2744; end: 1082a285f;  */

undefined8 FUN_1082a2744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puStack_20;
  undefined8 *puStack_18;
  
  if (((bRam0000000113826b80 & 1) == 0) &&
     (func_0x0001082a286c(0x113826b80), iVar2 = (int)param_1, param_1 = puStack_18,
     param_2 = puStack_20, iVar2 != 0)) {
    ppuRam0000000113826b78 = &PTR_PTR_110a38218;
    ___cxa_guard_release(0x113826b80);
  }
  puVar1 = param_1;
  if (((bRam0000000113826b90 & 1) == 0) &&
     (func_0x0001082a286c(0x113826b90), puVar1 = puStack_18, param_2 = puStack_20, (int)param_1 != 0
     )) {
    ppuRam0000000113826b88 = &PTR_PTR_110a381e8;
    ___cxa_guard_release(0x113826b90);
  }
  ppuVar3 = (undefined **)*puVar1;
  if (ppuRam0000000113826b88 == ppuVar3) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if ((puVar1[1] != 0) ||
       ((ppuRam0000000113826b78 != ppuVar3 &&
        ((ppuVar3 != (undefined **)0x0 || (*(float *)(puVar1 + 5) != 1.0)))))) {
      return 0;
    }
    uVar4 = *(undefined8 *)((long)puVar1 + 0x1c);
    param_2[1] = *(undefined8 *)((long)puVar1 + 0x24);
    *param_2 = uVar4;
  }
  return 1;
}



/* Entry: 1082a2860; end: 1082a2877;  */

void FUN_1082a2860(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082a2868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082a2878; end: 1082a2a5f;  */

void FUN_1082a2878(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  ,long *param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined **ppuStack_d0;
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
  
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  ppuStack_d0 = &PTR_FUN_110a408d8;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  FUN_10834261c(&uStack_88,0xc);
  FUN_10834261c(&uStack_88,param_2);
  for (lVar5 = 0; lVar5 != 2; lVar5 = lVar5 + 1) {
    func_0x0001082a2fbc();
    puVar4 = &uStack_88;
    FUN_1082a2c38(puVar4,3);
    uVar2 = param_5 - 1U;
    if ((int)(uint)lVar5 <= (int)(param_5 - 1U)) {
      uVar2 = (uint)lVar5;
    }
    puVar1 = (undefined2 *)
             (param_4 +
             (-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) + (long)(int)uVar2);
    uVar3 = *puVar1;
    *(undefined1 *)((long)puVar4 + 2) = *(undefined1 *)(puVar1 + 1);
    *(undefined2 *)puVar4 = uVar3;
  }
  func_0x0001082a2f90();
  if (param_6 != (long *)0x0) {
    func_0x0001082a2f90();
    if (*param_6 != 0) {
      func_0x0001082a2f90();
      func_0x0001082a2f90();
      func_0x0001082a2f90();
      func_0x0001082a2f90();
    }
    FUN_10834261c(&uStack_88,(int)param_6[2]);
    for (lVar5 = (long)(int)param_6[2] * 0x18; lVar5 != 0; lVar5 = lVar5 + -0x18) {
      func_0x0001082a2fbc();
    }
    func_0x0001082a2f90();
    if (param_6[4] != 0) {
      func_0x0001082a2fbc();
    }
  }
  FUN_1083aa8a4(param_1,&uStack_88);
  FUN_1083a99f0(&ppuStack_d0);
  return;
}



/* Entry: 1082a2a60; end: 1082a2abb;  */

undefined4 FUN_1082a2a60(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  FUN_10838a560();
  puVar3 = param_1;
  FUN_10838a560(param_1);
  if ((int)puVar2 == 0xc) {
    uVar1 = SUB84(puVar3,0);
    if ((*(byte *)((long)param_1 + 0xa1) & 1) != 0) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    if ((*(byte *)((long)param_1 + 0xa1) & 1) == 0) {
      *param_1 = param_1[1];
      *(undefined1 *)((long)param_1 + 0xa1) = 1;
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 1082a2abc; end: 1082a2c37;  */

byte FUN_1082a2abc(ulong param_1,long param_2,long param_3,int param_4,long *param_5)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_58;
  
  uVar3 = param_1;
  lVar8 = param_2;
  for (lVar9 = 0; lVar9 != 2; lVar9 = lVar9 + 1) {
    func_0x0001082a2fa4();
    if (uVar3 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (lVar8,uVar3,uStack_58);
    }
    if (lVar9 < param_4) {
      uVar3 = param_1;
      FUN_10838a620(param_1,param_3,3);
    }
    else {
      uVar3 = param_1;
      func_0x00010838a49c(param_1,3);
    }
    param_3 = param_3 + 3;
    lVar8 = lVar8 + 0x18;
  }
  func_0x0001082a2f88();
  iVar2 = (int)uVar3;
  if ((param_5 != (long *)0x0) && ((uVar3 & 1) != 0)) {
    func_0x0001082a2f88();
    if (iVar2 != 0) {
      func_0x0001082a2f88();
      uVar1 = (undefined1)iVar2;
      *(undefined1 *)(*param_5 + 3) = uVar1;
      func_0x0001082a2f88();
      *(undefined1 *)*param_5 = uVar1;
      func_0x0001082a2f88();
      *(undefined1 *)(*param_5 + 1) = uVar1;
      func_0x0001082a2f88();
      *(undefined1 *)(*param_5 + 0x23) = uVar1;
    }
    uVar3 = param_1;
    FUN_10838a560(param_1);
    plVar4 = param_5 + 1;
    FUN_1082a2cbc(plVar4,uVar3);
    plVar7 = (long *)param_5[1];
    for (lVar9 = (long)(int)param_5[2] * 0x18; lVar9 != 0; lVar9 = lVar9 + -0x18) {
      func_0x0001082a2fa4();
      plVar5 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar7;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                  (plVar7,plVar4,uStack_58);
      }
      plVar7 = plVar7 + 3;
      plVar4 = plVar5;
    }
    uVar1 = SUB81(plVar4,0);
    func_0x0001082a2f88();
    *(undefined1 *)(param_5 + 3) = uVar1;
  }
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    lVar9 = 2;
    do {
      func_0x000107c27fa8(param_2);
      param_2 = param_2 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    bVar6 = *(byte *)(param_1 + 0xa1) ^ 1;
  }
  else {
    bVar6 = 1;
  }
  return bVar6 & 1;
}



/* Entry: 1082a2c38; end: 1082a2c6f;  */

void FUN_1082a2c38(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 + 3 & 0xfffffffffffffffc;
  FUN_1082a2c70(param_1,uVar1);
  if (uVar1 != param_2) {
    *(undefined4 *)(param_1 + uVar1 + -4) = 0;
  }
  return;
}



/* Entry: 1082a2c70; end: 1082a2cbb;  */

long FUN_1082a2c70(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1[2];
  uVar1 = lVar2 + param_2;
  if ((ulong)param_1[1] < uVar1) {
    FUN_1083aa834(param_1,uVar1);
  }
  param_1[2] = uVar1;
  return *param_1 + lVar2;
}



/* Entry: 1082a2cbc; end: 1082a2dbb;  */

void FUN_1082a2cbc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  iVar5 = (int)param_1[1];
  iVar4 = (int)param_2;
  if (iVar5 < iVar4) {
    if (iVar5 == 0) {
      func_0x0001082a2d28(0x3ff0000000000000,param_1,param_2);
      iVar5 = (int)param_1[1];
    }
    FUN_1082a2f4c();
    for (lVar7 = 0;
        (ulong)(iVar4 - iVar5 & (iVar4 - iVar5 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar7 != 0;
        lVar7 = lVar7 + 0x18) {
      puVar1 = (undefined8 *)((long)param_1 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    return;
  }
  if (iVar5 - iVar4 != 0 && iVar4 <= iVar5) {
    uVar8 = *(uint *)(param_1 + 1);
    lVar7 = (ulong)uVar8 * 0x18;
    uVar6 = uVar8;
    while( true ) {
      lVar7 = lVar7 + -0x18;
      iVar2 = uVar8 - (iVar5 - iVar4);
      if ((int)uVar6 <= iVar2) {
        *(int *)(param_1 + 1) = iVar2;
        return;
      }
      if ((int)uVar6 < 1 || (int)uVar8 < (int)uVar6) break;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(*param_1 + lVar7);
      uVar8 = *(uint *)(param_1 + 1);
      uVar6 = uVar6 - 1;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082a2e2c);
    (*pcVar3)();
  }
  return;
}



/* Entry: 1082a2dbc; end: 1082a2e87;  */

void FUN_1082a2dbc(long *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(param_1 + 1);
  lVar4 = (ulong)uVar3 * 0x18;
  uVar2 = uVar3;
  while( true ) {
    lVar4 = lVar4 + -0x18;
    if ((int)uVar2 <= (int)(uVar3 - param_2)) {
      *(uint *)(param_1 + 1) = uVar3 - param_2;
      return;
    }
    if ((int)uVar2 < 1 || (int)uVar3 < (int)uVar2) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(*param_1 + lVar4);
    uVar3 = *(uint *)(param_1 + 1);
    uVar2 = uVar2 - 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082a2e2c);
  (*pcVar1)();
}



/* Entry: 1082a2e88; end: 1082a2eab;  */

void FUN_1082a2e88(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x18;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_1082a2eac;
  lVar3 = 0;
  puStack_20 = &stack0xfffffffffffffff0;
  for (lVar4 = 0; lVar4 < (int)param_1[1]; lVar4 = lVar4 + 1) {
    puVar1 = (undefined8 *)(param_2 + lVar3);
    puVar2 = (undefined8 *)(*param_1 + lVar3);
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(*param_1 + lVar3);
    lVar3 = lVar3 + 0x18;
  }
  return;
}



/* Entry: 1082a2eac; end: 1082a2f1b;  */

void FUN_1082a2eac(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  for (lVar4 = 0; lVar4 < (int)param_1[1]; lVar4 = lVar4 + 1) {
    puVar1 = (undefined8 *)(param_2 + lVar3);
    puVar2 = (undefined8 *)(*param_1 + lVar3);
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(*param_1 + lVar3);
    lVar3 = lVar3 + 0x18;
  }
  return;
}



/* Entry: 1082a2f1c; end: 1082a2f4b;  */

void FUN_1082a2f1c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x18;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082a2f4c; end: 1082a2f87;  */

long FUN_1082a2f4c(long *param_1,int param_2)

{
  long lVar1;
  
  func_0x0001082a2d28(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 0x18;
}



/* Entry: 1082a2f88; end: 1082a2fc3;  */

bool FUN_1082a2f88(void)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  
  lVar2 = unaff_x19;
  func_0x00010838a744();
  uVar1 = (uint)lVar2;
  if ((1 < uVar1) && ((*(byte *)(unaff_x19 + 0xa1) & 1) == 0)) {
    func_0x00010838a704();
  }
  return uVar1 != 0;
}



/* Entry: 1082a2fc4; end: 1082a305f;  */

long FUN_1082a2fc4(long param_1,byte *param_2,undefined8 *param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  FUN_1082a3560(param_1,param_2 + 0x10);
  func_0x0001082a3648(lVar2 + 0x20,param_4 + 0x18);
  uVar3 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(param_2 + 0x30);
  bVar1 = *param_2;
  *(byte *)(param_1 + 0x40) = bVar1;
  if (*(int *)(param_4 + 0x38) != 0) {
    *(byte *)(param_1 + 0x40) = bVar1 | 0x10;
  }
  FUN_108295d6c();
  if ((int)param_4 != 0) {
    *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) | 0x20;
  }
  return param_1;
}



/* Entry: 1082a3060; end: 1082a309b;  */

void FUN_1082a3060(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
  }
  uStack_18 = 0;
  *param_1 = lVar1;
  FUN_1082a3670(&uStack_18);
  return;
}



/* Entry: 1082a309c; end: 1082a313f;  */

void FUN_1082a309c(ulong *param_1,uint param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar2 = uVar4 + (long)(int)param_1[5] * 8;
  while (uVar4 < uVar2) {
    uVar2 = uVar2 - 8;
    FUN_1082a3718();
  }
  if ((uint)param_1[5] == param_2) {
    puVar3 = (ulong *)*param_1;
  }
  else {
    if (4 < (int)(uint)param_1[5]) {
      _free(*param_1);
    }
    if ((int)param_2 < 5) {
      puVar3 = param_1 + 1;
      if ((int)param_2 < 1) {
        puVar3 = (ulong *)0x0;
      }
    }
    else {
      puVar3 = (ulong *)(ulong)param_2;
      FUN_10840ffdc(puVar3,8);
    }
    *param_1 = (ulong)puVar3;
    *(uint *)(param_1 + 5) = param_2;
  }
  puVar1 = puVar3 + (int)param_2;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  return;
}



/* Entry: 1082a3140; end: 1082a3177;  */

undefined8 FUN_1082a3140(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  undefined8 unaff_x19;
  
  FUN_1082a36f0(param_1 + 0x50);
  FUN_1082a36c0(param_1 + 0x48);
  FUN_10827a4f4(param_1 + 0x28);
  func_0x000108276964();
  if (param_1 != 0) {
    do {
      func_0x000108276970();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x000108276958();
    }
  }
  return unaff_x19;
}



/* Entry: 1082a3178; end: 1082a32bf;  */

long FUN_1082a3178(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined1 auStack_38 [8];
  
  FUN_1082a3060(auStack_38,param_3);
  FUN_1082a2fc4(param_1,param_2,auStack_38,param_4);
  FUN_1082a36c0(auStack_38);
  lVar5 = *param_3;
  lVar3 = param_3[1];
  uVar4 = (uint)(lVar5 != 0);
  *(uint *)(param_1 + 0x80) = uVar4;
  if (lVar3 != 0) {
    uVar4 = (lVar5 != 0) + 1;
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar4 = uVar4 + 1;
  }
  FUN_1082a309c(param_1 + 0x50,uVar4);
  lVar5 = *param_3;
  uVar4 = 0;
  if (lVar5 != 0) {
    *param_3 = 0;
    if (*(int *)(param_1 + 0x78) < 1) goto LAB_1082a329c;
    lVar3 = **(long **)(param_1 + 0x50);
    **(long **)(param_1 + 0x50) = lVar5;
    if (lVar3 != 0) {
      func_0x0001082a3760();
    }
    uVar4 = 1;
  }
  lVar5 = param_3[1];
  if (lVar5 != 0) {
    param_3[1] = 0;
    if (*(int *)(param_1 + 0x78) <= (int)uVar4) goto LAB_1082a329c;
    uVar1 = uVar4 + 1;
    lVar3 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar4 * 8);
    *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar4 * 8) = lVar5;
    uVar4 = uVar1;
    if (lVar3 != 0) {
      func_0x0001082a3760();
    }
  }
  lVar5 = *(long *)(param_4 + 0x40);
  if (lVar5 != 0) {
    *(undefined8 *)(param_4 + 0x40) = 0;
    if (*(int *)(param_1 + 0x78) <= (int)uVar4) {
LAB_1082a329c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1082a32a0);
      (*pcVar2)();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar4 * 8);
    *(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar4 * 8) = lVar5;
    if (lVar3 != 0) {
      func_0x0001082a3760();
    }
  }
  return param_1;
}



/* Entry: 1082a32c0; end: 1082a33bf;  */

long * FUN_1082a32c0(long *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    FUN_10826c364();
                    /* WARNING: Could not recover jumptable at 0x0001082a32f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))();
    return param_1;
  }
  return (long *)0x1;
}



/* Entry: 1082a33c0; end: 1082a3503;  */

void FUN_1082a33c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  for (lVar2 = (long)*(int *)(param_1 + 0x78) << 3; lVar2 != 0; lVar2 = lVar2 + -8) {
    FUN_1082960a8(*puVar1,param_2);
    puVar1 = puVar1 + 1;
  }
  return;
}



/* Entry: 1082a3504; end: 1082a355f;  */

long * FUN_1082a3504(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if ((((plVar1 != (long *)0x0) && ((*(byte *)(param_1 + 3) >> 1 & 1) == 0)) &&
      ((**(code **)(*plVar1 + 0x18))(), plVar1 != (long *)0x0)) &&
     (plVar1 = *(long **)((long)plVar1 + *(long *)(*plVar1 + -0x18) + 0x10), plVar1 != (long *)0x0))
  {
                    /* WARNING: Could not recover jumptable at 0x0001082a3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))();
    return plVar1;
  }
  return (long *)0x0;
}



/* Entry: 1082a3560; end: 1082a359f;  */

undefined8 * FUN_1082a3560(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 0xc) = 0x3210;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1082a35a0();
  return param_1;
}



/* Entry: 1082a35a0; end: 1082a366f;  */

void FUN_1082a35a0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001082a3784();
  func_0x0001082a35d0();
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x20 + 0x18) = *(undefined4 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1082a3670; end: 1082a369f;  */

long * FUN_1082a3670(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1082a36a0(*param_1 + 0xc);
  }
  return param_1;
}


