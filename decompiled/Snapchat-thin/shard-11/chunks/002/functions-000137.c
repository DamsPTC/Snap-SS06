/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108295a34; end: 108295b57;  */

long FUN_108295a34(long param_1)

{
  return param_1 + -0xa1;
}



/* Entry: 108295b58; end: 108295bcb;  */

long * FUN_108295b58(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (plVar1 == (long *)0x0) {
    lVar2 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = 0;
    if (lVar2 != 0) {
      func_0x000108295c84();
    }
    **(undefined4 **)(param_1 + 0x18) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
  }
  return plVar1;
}



/* Entry: 108295bcc; end: 108295c2b;  */

void FUN_108295bcc(long param_1,int param_2)

{
  long lVar1;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x50))
            (*(long **)(param_1 + 8),*(int *)(param_1 + 0x28) - param_2,
             *(undefined8 *)(param_1 + 0x20));
  if (param_2 == 0) {
    lVar1 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = 0;
    if (lVar1 != 0) {
      func_0x000108295c84();
    }
    **(undefined4 **)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 108295c2c; end: 108295c3f;  */

void FUN_108295c2c(void)

{
  return;
}



/* Entry: 108295c40; end: 108295c73;  */

void FUN_108295c40(int *param_1)

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
      FUN_1082b4584();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108295c74; end: 108295c9b;  */

void FUN_108295c74(undefined8 *param_1,undefined8 param_2)

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
    FUN_1082b4584();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108295c9c; end: 108295d6b;  */

void FUN_108295c9c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1082771d4(param_3,param_4,0);
  uVar2 = param_2 + 0x10;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_10821a044(uVar2,&uStack_30);
  if ((uVar2 & 1) == 0) {
    uVar4 = 2;
  }
  else {
    if (((*(byte *)(param_2 + 0x20) & 1) != 0) || (*(int *)(param_2 + 0x28) != 0)) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      return;
    }
    iVar1 = (int)param_2 + 8;
    FUN_108295d6c();
    if (iVar1 != 0) {
      lVar3 = param_2 + 0x10;
      func_0x000108219544(lVar3,&uStack_30);
      if ((int)lVar3 == 0) {
        FUN_10817500c(param_2 + 0x10);
        FUN_108278538(param_1,0);
        return;
      }
    }
    uVar4 = 1;
  }
  *(undefined4 *)param_1 = uVar4;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  return;
}



/* Entry: 108295d6c; end: 108295daf;  */

bool FUN_108295d6c(int *param_1)

{
  if (((param_1[2] < 1) && (param_1[3] < 1)) && (*param_1 <= param_1[4])) {
    return param_1[5] < param_1[1];
  }
  return true;
}



/* Entry: 108295db0; end: 108295e53;  */

undefined8 FUN_108295db0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x10;
  FUN_10821a044(lVar2,param_3);
  if ((int)lVar2 == 0) {
    return 2;
  }
  iVar1 = (int)param_1 + 8;
  FUN_108295d6c();
  if (iVar1 != 0) {
    uVar3 = param_1 + 0x10;
    func_0x000108219544(uVar3,param_3);
    if ((uVar3 & 1) == 0) {
      func_0x00010821b838(param_3,param_1 + 0x10);
      FUN_108287e44(param_2,param_3);
      uVar4 = 0;
      goto LAB_108295e24;
    }
  }
  uVar4 = 1;
LAB_108295e24:
  if (((*(byte *)(param_1 + 0x20) & 1) != 0) || (*(int *)(param_1 + 0x28) != 0)) {
    FUN_108295f1c(param_2 + 0x18);
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 108295e54; end: 108295e93;  */

void FUN_108295e54(void)

{
  FUN_108295f48();
  return;
}



/* Entry: 108295e94; end: 108295f1b;  */

long * FUN_108295e94(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  int in_w4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  ulong uStack_38;
  
  uVar2 = (ulong)(in_w4 != 0);
  uVar1 = in_x6;
  FUN_1082771d4(in_x6,uVar2,0);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  (**(code **)(*param_5 + 0x28))(param_5,in_x5,&uStack_40);
  FUN_10817500c(&uStack_40);
  uStack_50 = param_1;
  uStack_4c = param_2;
  uStack_48 = param_3;
  uStack_44 = param_4;
  FUN_10838ed10(in_x6,&uStack_50);
  return param_5;
}



/* Entry: 108295f1c; end: 108295f47;  */

undefined1 * FUN_108295f1c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  func_0x00010827a458(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 108295f48; end: 108295f53;  */

int * FUN_108295f48(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x28) < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10827a4c0(uVar1);
  return (int *)(param_1 + 0x28);
}



/* Entry: 108295f54; end: 108296037;  */

bool FUN_108295f54(long param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long unaff_x19;
  long *unaff_x20;
  bool bVar5;
  long lVar6;
  
  if ((((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
       (func_0x000108298c90(), *(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) &&
      ((char)unaff_x20[7] == *(char *)(unaff_x19 + 0x38))) &&
     ((plVar2 = unaff_x20, (**(code **)(*unaff_x20 + 0x38))(), (int)plVar2 != 0 &&
      (iVar4 = (int)unaff_x20[4], iVar4 == *(int *)(unaff_x19 + 0x20))))) {
    for (lVar6 = 0; bVar5 = iVar4 <= lVar6, lVar6 < iVar4; lVar6 = lVar6 + 1) {
      if (*(int *)(unaff_x19 + 0x20) <= lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108296038);
        (*pcVar1)();
      }
      lVar3 = *(long *)(unaff_x20[3] + lVar6 * 8);
      if ((lVar3 != 0) != (*(long *)(*(long *)(unaff_x19 + 0x18) + lVar6 * 8) != 0)) {
        return bVar5;
      }
      if (lVar3 != 0) {
        FUN_108295f54();
        if ((int)lVar3 == 0) {
          return bVar5;
        }
        iVar4 = (int)unaff_x20[4];
      }
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



/* Entry: 108296038; end: 1082960a7;  */

void FUN_108296038(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long unaff_x20;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a35a10;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_2;
  FUN_1082960a8(param_1,&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_10826e20c();
  func_0x000108298c3c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar2 != (undefined ***)0x0) && (*(int *)(unaff_x20 + 8) == 0x2d)) {
      func_0x0001082987ac(pppuVar1);
    }
    plVar4 = *(long **)(unaff_x20 + 0x18);
    for (lVar3 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      if (*plVar4 != 0) {
        FUN_1082960a8(*plVar4,pppuVar1);
      }
      plVar4 = plVar4 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1082960a8; end: 10829617f;  */

void FUN_1082960a8(long param_1)

{
  long unaff_x20;
  long lVar1;
  long *plVar2;
  
  func_0x000108298c90();
  if ((param_1 != 0) && (*(int *)(unaff_x20 + 8) == 0x2d)) {
    func_0x0001082987ac();
  }
  plVar2 = *(long **)(unaff_x20 + 0x18);
  for (lVar1 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar1 != 0; lVar1 = lVar1 + -8) {
    if (*plVar2 != 0) {
      FUN_1082960a8();
    }
    plVar2 = plVar2 + 1;
  }
  return;
}



/* Entry: 108296180; end: 108296243;  */

void FUN_108296180(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long *unaff_x19;
  long lVar5;
  undefined8 uStack_38;
  
  func_0x000108298c08();
  (**(code **)(extraout_x8 + 0x28))();
  FUN_108296244(*unaff_x19 + 0x10,*(undefined4 *)(param_1 + 0x20));
  lVar5 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x20) <= lVar5) {
      return;
    }
    if (*(long *)(*(long *)(param_1 + 0x18) + lVar5 * 8) == 0) {
      uStack_38 = 0;
    }
    else {
      FUN_108296180(&uStack_38);
    }
    uVar1 = uStack_38;
    if (*(int *)(*unaff_x19 + 0x18) <= lVar5) break;
    lVar4 = *(long *)(*unaff_x19 + 0x10);
    uStack_38 = 0;
    lVar3 = *(long *)(lVar4 + lVar5 * 8);
    *(undefined8 *)(lVar4 + lVar5 * 8) = uVar1;
    if (lVar3 != 0) {
      func_0x000108298984();
    }
    func_0x000108298a14();
    if (lVar3 != 0) {
      func_0x000108298984();
    }
    lVar5 = lVar5 + 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108296230);
  (*pcVar2)();
}



/* Entry: 108296244; end: 10829627f;  */

void FUN_108296244(long param_1,uint param_2)

{
  long lVar1;
  
  FUN_1082987e4();
  for (lVar1 = 0; (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)) << 3 != lVar1;
      lVar1 = lVar1 + 8) {
    *(undefined8 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 108296280; end: 108296327;  */

long * FUN_108296280(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x34) = (int)param_3;
    *(char *)(lVar5 + 0x38) = (char)((ulong)param_3 >> 0x20);
    if ((*(byte *)(lVar5 + 0x30) >> 6 & 1) != 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
    }
    if (((int)param_3 - 1U < 2) && ((*(byte *)(lVar5 + 0x30) & 0x18) != 0)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
    }
    *(long *)(lVar5 + 0x28) = param_1;
    param_1 = param_1 + 0x18;
    func_0x00010827fd08();
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
      lVar5 = *unaff_x20;
      plVar2 = (long *)(*unaff_x19 + (long)iVar4 * 8);
      *unaff_x20 = 0;
      *plVar2 = lVar5;
    }
    else {
      uVar3 = 1;
      plVar1 = unaff_x19;
      FUN_10827f408(0x3ff8000000000000,unaff_x19,1);
      lVar5 = *unaff_x20;
      plVar2 = plVar1 + (int)unaff_x19[1];
      *unaff_x20 = 0;
      *plVar2 = lVar5;
      FUN_10827f42c(unaff_x19,plVar1,uVar3);
      iVar4 = (int)unaff_x19[1];
    }
    *(int *)(unaff_x19 + 1) = iVar4 + 1;
    return plVar2;
  }
  plVar2 = (long *)(param_1 + 0x18);
  FUN_10827f37c(plVar2,&stack0xffffffffffffffd8);
  func_0x000108298a14();
  if (plVar2 != (long *)0x0) {
    func_0x000108298984();
  }
  return plVar2;
}



/* Entry: 108296328; end: 1082963db;  */

void FUN_108296328(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  func_0x000108298c90();
  for (lVar3 = 0; lVar3 < *(int *)(unaff_x19 + 0x20); lVar3 = lVar3 + 1) {
    plVar2 = *(long **)(*(long *)(unaff_x19 + 0x18) + lVar3 * 8);
    lVar1 = unaff_x20;
    if (plVar2 == (long *)0x0) {
      FUN_108296280();
      func_0x000108298ab0();
    }
    else {
      (**(code **)(*plVar2 + 0x18))(auStack_38,plVar2);
      FUN_108296280();
      func_0x000108298a14();
    }
    if (lVar1 != 0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 1082963dc; end: 1082964c7;  */

void FUN_1082963dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  fStack_24 = param_4;
  if ((bRam0000000113826b10 & 1) == 0) {
    lVar1 = 0x113826b10;
    ___cxa_guard_acquire();
    if ((int)lVar1 != 0) {
      func_0x000108298a20();
      func_0x000108298b28();
      func_0x000108298acc();
      lRam0000000113826b08 = lVar1;
      ___cxa_guard_release(0x113826b10);
    }
  }
  uStack_68 = 0;
  uVar2 = 2;
  if (fStack_24 != 1.0) {
    uVar2 = 0;
  }
  lVar1 = lRam0000000113826b08;
  FUN_1082964c8(auStack_60,lRam0000000113826b08,&UNK_10f4821ac,&uStack_68,uVar2,&UNK_10f4821b5,
                &uStack_30);
  func_0x000108298a80();
  if (lVar1 != 0) {
    func_0x000108298984();
  }
  return;
}



/* Entry: 1082964c8; end: 108296587;  */

void FUN_1082964c8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  int extraout_w10;
  long *unaff_x19;
  undefined8 uVar2;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000108298bb0();
  func_0x0001082989e4();
  if (param_1 != 0) {
    do {
      func_0x0001082989f0();
    } while (extraout_w10 != 0);
  }
  lStack_58 = param_1;
  FUN_1082cc5c8(lVar1,&lStack_58,param_2,param_4);
  *unaff_x19 = lVar1;
  func_0x000108298ae0();
  uVar2 = *param_6;
  *(undefined8 *)(lVar1 + 0x70) = param_6[1];
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  lVar1 = *param_3;
  if (lVar1 != 0) {
    *param_3 = 0;
    func_0x000108298be4();
    if (lVar1 != 0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 108296588; end: 1082965f7;  */

void FUN_108296588(undefined8 *param_1,long *param_2)

{
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    *param_2 = 0;
    func_0x000108298c50();
    FUN_1082965f8();
    func_0x000108298ab0();
    if (param_2 != (long *)0x0) {
      func_0x000108298984();
    }
    func_0x000108298a14();
    if (param_2 != (long *)0x0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 1082965f8; end: 108296677;  */

void FUN_1082965f8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  lVar1 = *param_2;
  *param_2 = 0;
  func_0x000108298c50();
  FUN_1082c7180();
  if (lVar1 != 0) {
    func_0x000108298984();
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108298bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 108296678; end: 108296753;  */

void FUN_108296678(undefined8 param_1)

{
  long lVar1;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  if ((bRam0000000113826b20 & 1) == 0) {
    lVar1 = 0x113826b20;
    ___cxa_guard_acquire();
    if ((int)lVar1 != 0) {
      func_0x000108298a20();
      func_0x000108298b28();
      func_0x000108298acc();
      lRam0000000113826b18 = lVar1;
      ___cxa_guard_release(0x113826b20);
    }
  }
  uStack_58 = 0;
  lVar1 = lRam0000000113826b18;
  FUN_108296754(auStack_50,lRam0000000113826b18,&UNK_10f482218,&uStack_58,3,&UNK_10f482228,param_1);
  func_0x000108298a80();
  if (lVar1 != 0) {
    func_0x000108298984();
  }
  return;
}



/* Entry: 108296754; end: 10829683b;  */

void FUN_108296754(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  int extraout_w10;
  long *unaff_x19;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000108298bb0();
  func_0x0001082989e4();
  if (param_1 != 0) {
    do {
      func_0x0001082989f0();
    } while (extraout_w10 != 0);
  }
  lStack_58 = param_1;
  FUN_1082cc5c8(lVar1,&lStack_58,param_2,param_4);
  *unaff_x19 = lVar1;
  func_0x000108298ae0();
  FUN_108288188(lVar1,lVar1 + 0x68,lVar1 + 0x68 + (ulong)*(uint *)(lVar1 + 0x50),param_5,param_6);
  lStack_60 = *param_3;
  if (lStack_60 != 0) {
    *param_3 = 0;
    FUN_1082cc550(lVar1,&lStack_60);
    if (lStack_60 != 0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 10829683c; end: 1082968bb;  */

void FUN_10829683c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_28 [8];
  
  puVar1 = param_2;
  FUN_1082963dc(auStack_28,*param_3,param_3[1],param_3[2],param_3[3]);
  *param_2 = 0;
  func_0x000108298c50();
  FUN_108287a24(param_1);
  func_0x000108298ab0();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  func_0x000108298a14();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  return;
}



/* Entry: 1082968bc; end: 108296987;  */

void FUN_1082968bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puStack_60;
  
  if ((bRam0000000113826b30 & 1) == 0) {
    func_0x000108298bb8(0x113826b30);
    iVar2 = (int)param_1;
    param_1 = puStack_60;
    if (iVar2 != 0) {
      puVar1 = puStack_60;
      func_0x000108298a20();
      func_0x000108298b28();
      func_0x000108298acc();
      puRam0000000113826b28 = puVar1;
      ___cxa_guard_release(0x113826b30);
    }
  }
  *param_1 = 0;
  func_0x000108298b14(param_1,&UNK_10f482261);
  func_0x000108298a80();
  if (param_1 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  return;
}



/* Entry: 108296988; end: 108296a23;  */

void FUN_108296988(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined8 *unaff_x19;
  long *plStack_38;
  
  func_0x000108298c08();
  if (extraout_x8 == 0) {
    *unaff_x19 = 0;
  }
  else {
    puVar2 = param_1;
    FUN_10828aa20();
    uVar1 = *param_2;
    plStack_38 = (long *)*param_1;
    *param_1 = 0;
    if ((uint)uVar1 == ((uint)puVar2 & 0xffff)) {
      *unaff_x19 = plStack_38;
    }
    else {
      FUN_108296a24(&plStack_38,param_2);
      if (plStack_38 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108296a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plStack_38 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 108296a24; end: 108296ad7;  */

void FUN_108296a24(undefined8 *param_1,undefined8 *param_2,undefined2 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_2;
  func_0x000108298aa8();
  *param_2 = 0;
  *(undefined4 *)(puVar1 + 1) = 0x3a;
  puVar1[3] = puVar1 + 2;
  puVar2 = puVar1;
  func_0x000108298c7c(0x200000000);
  *puVar1 = &PTR_FUN_110a35690;
  *(undefined2 *)((long)puVar1 + 0x3c) = *param_3;
  func_0x000108298ad4();
  func_0x000108298a14();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 108296ad8; end: 108296bfb;  */

void FUN_108296ad8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long extraout_x8;
  undefined8 *unaff_x19;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000108298c08();
  if (extraout_x8 == 0) {
    *unaff_x19 = 0;
  }
  else {
    if ((bRam0000000113826b40 & 1) == 0) {
      uVar2 = 0x113826b40;
      ___cxa_guard_acquire();
      if ((int)uVar2 != 0) {
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        func_0x000108298b28();
        FUN_108287980();
        uRam0000000113826b38 = uVar2;
        ___cxa_guard_release(0x113826b40);
      }
    }
    lStack_58 = 0;
    uVar3 = 2;
    if (*(float *)(param_2 + 0xc) != 1.0) {
      uVar3 = 0;
    }
    FUN_108296bfc(&uStack_50,uRam0000000113826b38,&UNK_10f4822c5,&lStack_58,uVar3,&UNK_10f482228,
                  param_1,&UNK_10f4821b5);
    lVar1 = lStack_58;
    *unaff_x19 = uStack_50;
    lStack_58 = 0;
    uStack_50 = 0;
    if (lVar1 != 0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 108296bfc; end: 108296d03;  */

void FUN_108296bfc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int extraout_w10;
  long *unaff_x19;
  long lStack_68;
  
  lVar1 = param_1;
  func_0x000108298bb0();
  func_0x0001082989e4();
  if (param_1 != 0) {
    do {
      func_0x0001082989f0();
    } while (extraout_w10 != 0);
  }
  lStack_68 = param_1;
  FUN_1082cc5c8(lVar1,&lStack_68,param_2,param_4);
  *unaff_x19 = lVar1;
  func_0x000108298ae0();
  FUN_108298928(lVar1,lVar1 + 0x68,lVar1 + 0x68 + (ulong)*(uint *)(lVar1 + 0x50),param_5,param_6,
                param_7,param_8);
  lVar1 = *param_3;
  if (lVar1 != 0) {
    *param_3 = 0;
    func_0x000108298be4();
    if (lVar1 != 0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 108296d04; end: 108296de7;  */

void FUN_108296d04(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long extraout_x8;
  long *unaff_x19;
  undefined8 uStack_60;
  
  func_0x000108298c08();
  if ((extraout_x8 == 0) || ((*(byte *)(extraout_x8 + 0x30) & 1) == 0)) {
    *param_1 = 0;
    *unaff_x19 = extraout_x8;
  }
  else {
    if ((bRam0000000113826b50 & 1) == 0) {
      func_0x000108298bb8(0x113826b50);
      iVar2 = (int)param_1;
      param_1 = uStack_60;
      if (iVar2 != 0) {
        puVar1 = uStack_60;
        func_0x000108298a20();
        func_0x000108298b28();
        func_0x000108298acc();
        puRam0000000113826b48 = puVar1;
        ___cxa_guard_release(0x113826b50);
      }
    }
    *param_1 = 0;
    func_0x000108298b14();
    func_0x000108298a80();
    if (param_1 != (undefined8 *)0x0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 108296de8; end: 108296eaf;  */

void FUN_108296de8(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  if ((bRam0000000113826b60 & 1) == 0) {
    iVar1 = 0x13826b60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000108298a20();
      pcVar2 = FUN_1083942b8;
      func_0x000108298acc(FUN_1083942b8,&UNK_10f482318);
      pcRam0000000113826b58 = pcVar2;
      ___cxa_guard_release(0x113826b60);
    }
  }
  uStack_58 = 0;
  pcVar2 = pcRam0000000113826b58;
  FUN_10829091c(auStack_50,pcRam0000000113826b58,&UNK_10f482347,&uStack_58,0);
  func_0x000108298a80();
  if (pcVar2 != (code *)0x0) {
    func_0x000108298984();
  }
  return;
}



/* Entry: 108296eb0; end: 108297087;  */

void FUN_108296eb0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_ZR;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined1 auStack_84 [8];
  int iStack_7c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_50;
  long *plStack_48;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_2;
  lVar6 = *param_3;
  if (lVar7 == 0) {
    *param_3 = 0;
    *param_1 = lVar6;
    goto LAB_108296ff4;
  }
  if (lVar6 == 0) {
    *param_2 = 0;
    *param_1 = lVar7;
    goto LAB_108296ff4;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  *param_3 = 0;
  plStack_48 = (long *)*param_2;
  *param_2 = 0;
  param_4 = &lStack_50;
  lStack_50 = lVar6;
  FUN_1082a398c(auStack_84,&uStack_68,param_4,2);
  plVar3 = plStack_48;
  if (iStack_7c == 1) {
    plStack_48 = (long *)0x0;
    plStack_a0 = plVar3;
    FUN_1082963dc(&lStack_a8);
    param_4 = &lStack_a8;
    FUN_108297088(param_1,&plStack_a0);
    func_0x000108298a14();
    if (param_1 != (long *)0x0) {
      func_0x000108298984();
    }
    func_0x000108298c70();
joined_r0x000108296f94:
    if (param_1 != (long *)0x0) {
      func_0x000108298984();
    }
  }
  else {
    if (iStack_7c != 2) {
      lStack_98 = lStack_50;
      plStack_90 = plStack_48;
      lStack_50 = 0;
      plStack_48 = (long *)0x0;
      param_4 = &lStack_98;
      FUN_108297088(param_1,&plStack_90);
      lVar6 = lStack_98;
      lStack_98 = 0;
      if (lVar6 != 0) {
        func_0x000108298984();
      }
      param_1 = plStack_90;
      plStack_90 = (long *)0x0;
      goto joined_r0x000108296f94;
    }
    FUN_1082963dc(param_1);
  }
  lVar6 = 8;
  do {
    param_2 = (long *)((long)&lStack_50 + lVar6);
    func_0x00010827f53c();
    lVar6 = lVar6 + -8;
    in_ZR = lVar6 == -8;
  } while (!(bool)in_ZR);
LAB_108296ff4:
  func_0x000108298c3c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082989ac();
  if (param_2 != (long *)0x0) {
    func_0x000108298984();
  }
  func_0x000108298c70();
  if (param_2 != (long *)0x0) {
    func_0x000108298984();
  }
  lVar6 = 8;
  do {
    plVar3 = (long *)((long)&lStack_50 + lVar6);
    func_0x00010827f53c();
    lVar6 = lVar6 + -8;
  } while (lVar6 != -8);
  func_0x000108298a0c();
  plVar4 = plVar3;
  func_0x000108298aa8();
  plVar5 = plVar4;
  func_0x000108298b7c();
  lVar6 = *param_4;
  *param_4 = 0;
  uVar1 = *(uint *)(extraout_x8 + 0x30);
  uVar2 = *(uint *)(lVar6 + 0x30);
  *(undefined4 *)(plVar5 + 1) = 0x37;
  plVar5[3] = (long)(plVar5 + 2);
  plVar5[4] = 0x200000000;
  plVar5[5] = 0;
  *(uint *)(plVar5 + 6) = uVar1 & uVar2 & 7;
  *(undefined4 *)((long)plVar5 + 0x34) = 0;
  *(undefined1 *)(plVar5 + 7) = 0;
  *plVar5 = (long)&PTR_FUN_110a35740;
  FUN_108296280();
  func_0x000108298a14();
  if (plVar5 != (long *)0x0) {
    func_0x000108298984();
  }
  func_0x000108298ad4();
  func_0x000108298ab0();
  if (plVar5 != (long *)0x0) {
    func_0x000108298984();
  }
  *plVar3 = (long)plVar4;
  return;
}



/* Entry: 108297088; end: 10829718b;  */

void FUN_108297088(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long lVar5;
  
  puVar3 = param_1;
  func_0x000108298aa8();
  puVar4 = puVar3;
  func_0x000108298b7c();
  lVar5 = *param_3;
  *param_3 = 0;
  uVar1 = *(uint *)(extraout_x8 + 0x30);
  uVar2 = *(uint *)(lVar5 + 0x30);
  *(undefined4 *)(puVar4 + 1) = 0x37;
  puVar4[3] = puVar4 + 2;
  puVar4[4] = 0x200000000;
  puVar4[5] = 0;
  *(uint *)(puVar4 + 6) = uVar1 & uVar2 & 7;
  *(undefined4 *)((long)puVar4 + 0x34) = 0;
  *(undefined1 *)(puVar4 + 7) = 0;
  *puVar4 = &PTR_FUN_110a35740;
  FUN_108296280();
  func_0x000108298a14();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  func_0x000108298ad4();
  func_0x000108298ab0();
  if (puVar4 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 10829718c; end: 1082973ef;  */

void FUN_10829718c(long *param_1,long *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  int extraout_w10;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long alStack_c0 [6];
  
  if ((bRam000000011372a550 & 1) == 0) {
    iVar8 = 0x1372a550;
    ___cxa_guard_acquire();
    if (iVar8 != 0) {
      alStack_c0[4] = 0;
      alStack_c0[1] = 0;
      alStack_c0[0] = 0;
      alStack_c0[3] = 0;
      alStack_c0[2] = 0;
      func_0x000108298b28();
      FUN_108287980();
      func_0x000108298a40(0x11372a548);
    }
  }
  lVar7 = lRam000000011372a548;
  uVar13 = *param_3;
  uVar16 = param_3[1];
  uVar18 = param_3[2];
  uVar2 = param_3[3];
  uVar17 = param_3[6];
  uVar19 = param_3[7];
  uVar27 = param_3[10];
  uVar3 = param_3[0xb];
  uVar14 = param_3[0xc];
  uVar4 = param_3[0xd];
  uVar20 = param_3[0x10];
  uVar5 = param_3[0x11];
  uVar15 = param_3[4];
  uVar22 = param_3[5];
  uVar26 = param_3[8];
  uVar6 = param_3[9];
  uVar24 = param_3[0xe];
  uVar23 = param_3[0xf];
  uVar21 = param_3[0x12];
  uVar25 = param_3[0x13];
  lVar12 = *param_2;
  *param_2 = 0;
  lVar9 = lVar7;
  FUN_108287aa8(lVar7);
  lVar10 = 0x68;
  FUN_1082a387c(0x68,lVar9);
  if (lVar7 != 0) {
    do {
      func_0x0001082989f0();
    } while (extraout_w10 != 0);
  }
  alStack_c0[0] = lVar7;
  FUN_1082cc5c8(lVar10,alStack_c0,&UNK_10f4824b9,0);
  FUN_108154c00(alStack_c0);
  puVar11 = (undefined4 *)(lVar10 + 0x68);
  *puVar11 = uVar13;
  uVar1 = *(uint *)(lVar10 + 0x50);
  *(undefined4 *)(lVar10 + 0x6c) = uVar22;
  *(undefined4 *)(lVar10 + 0x70) = uVar27;
  *(undefined4 *)(lVar10 + 0x74) = uVar23;
  *(undefined4 *)(lVar10 + 0x78) = uVar16;
  *(undefined4 *)(lVar10 + 0x7c) = uVar17;
  *(undefined4 *)(lVar10 + 0x80) = uVar3;
  *(undefined4 *)(lVar10 + 0x84) = uVar20;
  *(undefined4 *)(lVar10 + 0x88) = uVar18;
  *(undefined4 *)(lVar10 + 0x8c) = uVar19;
  *(undefined4 *)(lVar10 + 0x90) = uVar14;
  *(undefined4 *)(lVar10 + 0x94) = uVar5;
  *(undefined4 *)(lVar10 + 0x98) = uVar2;
  *(undefined4 *)(lVar10 + 0x9c) = uVar26;
  *(undefined4 *)(lVar10 + 0xa0) = uVar4;
  *(undefined4 *)(lVar10 + 0xa4) = uVar21;
  *(undefined4 *)(lVar10 + 0xa8) = uVar15;
  *(undefined4 *)(lVar10 + 0xac) = uVar6;
  *(undefined4 *)(lVar10 + 0xb0) = uVar24;
  *(undefined4 *)(lVar10 + 0xb4) = uVar25;
  *(undefined1 *)((long)puVar11 + (ulong)uVar1 + 2) = 1;
  *(undefined4 *)(lVar10 + 0xb8) = param_4;
  *(undefined1 *)((long)puVar11 + (ulong)uVar1 + 3) = 1;
  *(undefined4 *)(lVar10 + 0xbc) = param_5;
  *(undefined1 *)((long)puVar11 + (ulong)uVar1 + 4) = 1;
  *(undefined4 *)(lVar10 + 0xc0) = param_6;
  if ((lVar12 != 0) &&
     (alStack_c0[5] = lVar12, FUN_1082cc550(lVar10,alStack_c0 + 5), alStack_c0[5] != 0)) {
    func_0x000108298984();
  }
  *param_1 = lVar10;
  return;
}



/* Entry: 1082973f0; end: 108297447;  */

void FUN_1082973f0(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000108298aa8();
  *(undefined4 *)(param_2 + 1) = 0x39;
  param_2[3] = param_2 + 2;
  param_2[4] = 0x200000000;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *param_2 = &PTR_DAT_110a357f0;
  *(undefined4 *)(param_2 + 6) = 0x40;
  *param_1 = param_2;
  return;
}



/* Entry: 108297448; end: 1082974d3;  */

void FUN_108297448(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    *param_2 = 0;
    func_0x000108298aa8();
    FUN_108298330();
    *param_1 = param_2;
    if (lVar1 != 0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 1082974d4; end: 108297683;  */

void FUN_1082974d4(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  code *param_6,ulong param_7)

{
  long lVar1;
  long *plVar2;
  int extraout_w10;
  long alStack_90 [6];
  
  if ((bRam000000011372a560 & 1) == 0) {
    param_6 = (code *)0x11372a560;
    ___cxa_guard_acquire();
    if ((int)param_6 != 0) {
      func_0x000108298a20();
      param_6 = FUN_108394278;
      func_0x000108298acc(FUN_108394278,&UNK_10f4824c5);
      func_0x000108298a40(0x11372a558);
    }
  }
  lVar1 = lRam000000011372a558;
  if ((param_7 & 0xfffffffd) != 0) {
    param_5 = param_5 + 0.5;
    param_4 = param_4 + 0.5;
    param_3 = param_3 + -0.5;
    param_2 = param_2 + -0.5;
  }
  func_0x000108298bdc();
  func_0x0001082989e4();
  if (lVar1 != 0) {
    do {
      func_0x0001082989f0();
    } while (extraout_w10 != 0);
  }
  alStack_90[0] = lVar1;
  func_0x000108298b08();
  plVar2 = alStack_90;
  FUN_108154c00();
  func_0x000108298c14();
  *(float *)(param_6 + 0x6c) = param_2;
  *(float *)(param_6 + 0x70) = param_3;
  *(float *)(param_6 + 0x74) = param_4;
  *(float *)(param_6 + 0x78) = param_5;
  func_0x000108298b7c();
  func_0x000108298c50();
  FUN_108287a24(param_1);
  func_0x000108298ab0();
  if (plVar2 != (long *)0x0) {
    func_0x000108298984();
  }
  func_0x000108298a14();
  if (plVar2 != (long *)0x0) {
    func_0x000108298984();
  }
  return;
}



/* Entry: 108297684; end: 10829785b;  */

void FUN_108297684(undefined1 *param_1,undefined4 param_2,float param_3,code *param_4,uint param_5)

{
  long lVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 in_b0;
  undefined1 uVar4;
  undefined1 in_register_00005001;
  undefined1 uVar5;
  undefined1 in_register_00005002;
  undefined1 uVar6;
  undefined1 in_register_00005003;
  undefined1 uVar7;
  float fVar8;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  long alStack_90 [6];
  
  bVar2 = false;
  if (((param_5 & 0xfffffffe) == 2) && (bVar2 = false, !NAN(param_3))) {
    bVar2 = param_3 < 0.5;
  }
  if (bVar2) {
    func_0x000108298b7c();
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = extraout_x8;
  }
  else {
    if ((bRam000000011372a570 & 1) == 0) {
      param_4 = (code *)0x11372a570;
      ___cxa_guard_acquire();
      if ((int)param_4 != 0) {
        alStack_90[4] = 0;
        alStack_90[1] = 0;
        alStack_90[0] = 0;
        alStack_90[3] = 0;
        alStack_90[2] = 0;
        param_4 = FUN_108394278;
        FUN_108287980(FUN_108394278,&UNK_10f482749,alStack_90);
        func_0x000108298a40(0x11372a568);
      }
    }
    lVar1 = lRam000000011372a568;
    fVar8 = param_3 + -0.5;
    uVar4 = SUB41(fVar8,0);
    uVar5 = (undefined1)((uint)fVar8 >> 8);
    uVar6 = (undefined1)((uint)fVar8 >> 0x10);
    uVar7 = (undefined1)((uint)fVar8 >> 0x18);
    if (fVar8 <= 0.001) {
      uVar4 = 0x6f;
      uVar5 = 0x12;
      uVar6 = 0x83;
      uVar7 = 0x3a;
    }
    fVar8 = (float)CONCAT13(uVar7,CONCAT12(uVar6,CONCAT11(uVar5,uVar4)));
    if ((param_5 & 0xfffffffe) != 2) {
      fVar8 = param_3 + 0.5;
    }
    func_0x000108298bdc();
    func_0x0001082989e4();
    if (lVar1 != 0) {
      do {
        func_0x0001082989f0();
      } while (extraout_w10 != 0);
    }
    alStack_90[0] = lVar1;
    func_0x000108298b08();
    FUN_108154c00(alStack_90);
    func_0x000108298c14();
    *(uint *)(param_4 + 0x6c) =
         CONCAT13(in_register_00005003,
                  CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
    *(undefined4 *)(param_4 + 0x70) = param_2;
    *(float *)(param_4 + 0x74) = fVar8;
    *(float *)(param_4 + 0x78) = 1.0 / fVar8;
    func_0x000108298b7c();
    puVar3 = auStack_a0;
    pcStack_a8 = param_4;
    FUN_108287a24(&uStack_98,puVar3,&pcStack_a8);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = uStack_98;
    uStack_98 = 0;
    func_0x000108298a14();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x000108298984();
    }
    func_0x000108298c70();
    if (puVar3 != (undefined1 *)0x0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 10829785c; end: 108297af3;  */

void FUN_10829785c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  float param_5,code *param_6,undefined4 param_7,long param_8)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_d0;
  long lStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  long alStack_90 [6];
  
  bVar2 = *(byte *)(param_8 + 0x11);
  if ((bVar2 & 1) == 0) {
    bVar5 = true;
    if ((0.5 <= param_4) && (bVar5 = false, !NAN(param_5))) {
      bVar5 = param_5 < 0.5;
    }
    if (!bVar5) {
      fVar10 = param_4 * 255.0;
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      if (param_4 <= param_5 * 255.0) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = true;
        if (!NAN(param_5) && !NAN(fVar10)) {
          bVar5 = param_5 < fVar10;
          bVar6 = param_5 == fVar10;
          bVar7 = false;
        }
      }
      if (bVar6 || bVar5 != bVar7) {
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        if (param_4 <= 16384.0) {
          bVar5 = false;
          bVar6 = false;
          bVar7 = true;
          if (!NAN(param_5)) {
            bVar5 = param_5 < 16384.0;
            bVar6 = param_5 == 16384.0;
            bVar7 = false;
          }
        }
        if (bVar6 || bVar5 != bVar7) goto LAB_108297898;
      }
    }
    func_0x000108298b7c();
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = extraout_x8;
  }
  else {
LAB_108297898:
    if ((bRam000000011372a580 & 1) == 0) {
      param_6 = (code *)0x11372a580;
      ___cxa_guard_acquire();
      if ((int)param_6 != 0) {
        alStack_90[4] = 0;
        alStack_90[1] = 0;
        alStack_90[0] = 0;
        alStack_90[3] = 0;
        alStack_90[2] = 0;
        param_6 = FUN_108394278;
        FUN_108287980(FUN_108394278,&UNK_10f482947,alStack_90);
        func_0x000108298a40(0x11372a578);
      }
    }
    lVar3 = lRam000000011372a578;
    if ((bVar2 & 1) == 0) {
      if (param_4 <= param_5) {
        fVar10 = 1.0 / param_5;
        uVar9 = NEON_fmov(0x3f800000,4);
        uStack_d0 = CONCAT44((int)((ulong)uVar9 >> 0x20),(param_5 * param_5) / (param_4 * param_4));
        uVar8 = 1;
      }
      else {
        fVar10 = 1.0 / param_4;
        uVar9 = NEON_fmov(0x3f800000,4);
        uStack_d0 = CONCAT44((param_4 * param_4) / (param_5 * param_5),(int)uVar9);
        uVar8 = 1;
        param_5 = param_4;
      }
    }
    else {
      uVar8 = 0;
      uVar9 = NEON_fmov(0x3f800000,4);
      uStack_d0 = CONCAT44((float)((ulong)uVar9 >> 0x20) / (param_5 * param_5),
                           (float)uVar9 / (param_4 * param_4));
      fVar10 = 1.0;
      param_5 = 1.0;
    }
    func_0x000108298bdc();
    func_0x0001082989e4();
    if (lVar3 != 0) {
      do {
        func_0x0001082989f0();
      } while (extraout_w10 != 0);
    }
    alStack_90[0] = lVar3;
    func_0x000108298b08();
    FUN_108154c00(alStack_90);
    uVar1 = *(uint *)(param_6 + 0x50);
    param_6[(ulong)uVar1 + 0x68] = (code)0x1;
    *(undefined4 *)(param_6 + 0x68) = param_7;
    (param_6 + (ulong)uVar1 + 0x68)[1] = (code)0x1;
    *(undefined4 *)(param_6 + 0x6c) = uVar8;
    *(undefined4 *)(param_6 + 0x70) = param_2;
    *(undefined4 *)(param_6 + 0x74) = param_3;
    *(undefined8 *)(param_6 + 0x78) = uStack_d0;
    *(float *)(param_6 + 0x80) = param_5;
    *(float *)(param_6 + 0x84) = fVar10;
    func_0x000108298b7c();
    lStack_a8 = extraout_x8_00;
    pcStack_a0 = param_6;
    FUN_108287a24(&uStack_98,&pcStack_a0,&lStack_a8);
    lVar3 = lStack_a8;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = uStack_98;
    uStack_98 = 0;
    lStack_a8 = 0;
    if (lVar3 != 0) {
      func_0x000108298984();
    }
    pcVar4 = pcStack_a0;
    pcStack_a0 = (code *)0x0;
    if (pcVar4 != (code *)0x0) {
      func_0x000108298984();
    }
  }
  return;
}



/* Entry: 108297af4; end: 108297b47;  */

void FUN_108297af4(undefined8 *param_1)

{
  long *plStack_28;
  
  plStack_28 = (long *)*param_1;
  *param_1 = 0;
  FUN_108297b48(&plStack_28);
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108298bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 108297b48; end: 108297bef;  */

void FUN_108297b48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_2;
  func_0x000108298aa8();
  *param_2 = 0;
  *(undefined4 *)(puVar1 + 1) = 0x30;
  puVar1[3] = puVar1 + 2;
  puVar2 = puVar1;
  func_0x000108298c7c(0x200000000);
  *puVar1 = &PTR_FUN_110a35960;
  func_0x000108298ad4();
  func_0x000108298a14();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 108297bf0; end: 108297d0f;  */

long FUN_108297bf0(long param_1,long param_2,uint param_3,long param_4,long param_5,
                  undefined8 *param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  
  lVar1 = param_6[4];
  if (param_4 != 0) {
    lVar1 = param_4;
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_6[3] + 0x20))) {
    lVar3 = *(long *)(*(long *)(param_6[3] + 0x18) + (ulong)param_3 * 8);
    if (lVar3 == 0) {
      lVar3 = lVar1;
      func_0x0001083a3dfc(param_1);
      if (lVar3 != 0) {
        _strlen(lVar1);
      }
      FUN_1083a322c(&stack0xffffffffffffffd8,lVar1);
      func_0x0001083a3cec();
      return unaff_x19;
    }
    if ((int)param_3 < *(int *)(param_2 + 0x18)) {
      func_0x000108298b5c();
      if ((*(byte *)(lVar3 + 0x30) >> 5 & 1) != 0) {
        if (param_5 == 0) {
          func_0x000108298c5c(param_6[3]);
        }
        func_0x000108298a30();
      }
      func_0x000108298c28(*param_6);
      FUN_1082db500();
      if ((int)param_2 != 0) {
        if (param_8 == 0) {
          func_0x000108298a30();
        }
        else {
          FUN_1083a3a90(param_1,&UNK_10f482cdf);
          param_2 = param_1;
        }
      }
      func_0x000108298b3c();
      return param_2;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108297d08);
  (*pcVar2)();
}



/* Entry: 108297d10; end: 108297ec7;  */

undefined1 *
FUN_108297d10(undefined8 param_1,long param_2,uint param_3,long param_4,long param_5,
             undefined8 *param_6)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *unaff_x19;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_6[4];
  if (param_4 != 0) {
    lVar1 = param_4;
  }
  if ((-1 < (int)param_3) && (lVar7 = param_6[3], (int)param_3 < *(int *)(lVar7 + 0x20))) {
    lVar6 = *(long *)(*(long *)(lVar7 + 0x18) + (ulong)param_3 * 8);
    if (lVar6 == 0) {
      lVar7 = lVar1;
      func_0x0001083a3dfc(param_1);
      if (lVar7 != 0) {
        _strlen(lVar1);
      }
      FUN_1083a322c(&stack0xffffffffffffffd8,lVar1);
      func_0x0001083a3cec();
      return unaff_x19;
    }
    uVar8 = param_6[1];
    FUN_1083a3348(auStack_90,&DAT_10f638b90);
    FUN_1082dd688(auStack_88,uVar8,lVar7,auStack_90);
    iVar3 = (int)uVar8;
    func_0x000108298b74();
    if ((int)param_3 < *(int *)(param_2 + 0x18)) {
      func_0x000108298b5c();
      if ((*(byte *)(lVar6 + 0x30) >> 5 & 1) != 0) {
        if (param_5 == 0) {
          func_0x000108298c5c(param_6[3]);
        }
        func_0x000108298a30();
      }
      func_0x000108298c28(*param_6);
      FUN_1082db500();
      if (iVar3 != 0) {
        if (*(char *)(lVar6 + 0x38) == '\x01') {
          puVar5 = &UNK_10f482ce8;
        }
        else {
          puVar5 = &UNK_10f482cfe;
          if (*(char *)(param_6[2] + 8) == '\0') {
            puVar5 = &UNK_10f482d16;
          }
        }
        FUN_1083a3a90(param_1,puVar5);
      }
      func_0x000108298b3c();
      puVar4 = auStack_88;
      func_0x00010827024c(puVar4);
      return puVar4;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108297ea4);
  (*pcVar2)();
}



/* Entry: 108297ec8; end: 108297ecb;  */

undefined8 * FUN_108297ec8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 108297ecc; end: 108297edf;  */

void FUN_108297ecc(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 108297ee0; end: 108297eeb;  */

undefined * FUN_108297ee0(void)

{
  return &UNK_10f482d2b;
}



/* Entry: 108297eec; end: 108297f43;  */

void FUN_108297eec(long param_1)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  
  func_0x000108298b88();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0001082989cc();
    puVar2 = auStack_28;
    FUN_108296a24(puVar2,param_1 + 0x3c);
    func_0x000108298a14();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000108298984();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108297f34);
  (*pcVar1)();
}



/* Entry: 108297f44; end: 108297fb3;  */

undefined8 FUN_108297f44(undefined8 param_1,long param_2)

{
  ushort uVar1;
  code *pcVar2;
  
  if (0 < *(int *)(param_2 + 0x20)) {
    FUN_10828b624(**(undefined8 **)(param_2 + 0x18));
    uVar1 = *(ushort *)(param_2 + 0x3c);
    FUN_10826dd74(uVar1 & 0xf);
    FUN_10826e248(uVar1 >> 4 & 0xf);
    FUN_10826e248(uVar1 >> 8 & 0xf);
    FUN_10826e248(uVar1 >> 0xc);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108297f80);
  (*pcVar2)();
}



/* Entry: 108297fb4; end: 108297ff3;  */

void FUN_108297fb4(long param_1,undefined8 param_2,long *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000108297fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))(param_3,0x20,*(undefined2 *)(param_1 + 0x3c),"unknown",7);
  return;
}



/* Entry: 108297ff4; end: 108298007;  */

void FUN_108297ff4(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108298008; end: 10829809b;  */

void FUN_108298008(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000108298a4c(auStack_38,param_1,0);
  plVar1 = (long *)*param_2;
  lVar2 = *(long *)(*plVar1 + -0x18);
  FUN_1083212bc(auStack_40,param_2[3] + 0x3c);
  FUN_10828bae8((long)plVar1 + lVar2,&UNK_10f482d33);
  func_0x000108298b74();
  func_0x000108298b54();
  return;
}



/* Entry: 10829809c; end: 10829809f;  */

undefined8 * FUN_10829809c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082980a0; end: 1082980b3;  */

void FUN_1082980a0(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082980b4; end: 1082980bf;  */

undefined * FUN_1082980b4(void)

{
  return &UNK_10f482d41;
}



/* Entry: 1082980c0; end: 10829810f;  */

void FUN_1082980c0(undefined8 *param_1,undefined8 *param_2)

{
  func_0x000108298aa8();
  FUN_10828b420();
  *param_2 = &PTR_FUN_110a35740;
  *param_1 = param_2;
  return;
}



/* Entry: 108298110; end: 1082981b3;  */

void FUN_108298110(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 *param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_6[1];
  uVar2 = *param_6;
  uStack_30 = uVar2;
  if (1 < *(int *)(param_5 + 0x20)) {
    FUN_10828b624(*(undefined8 *)(*(long *)(param_5 + 0x18) + 8),&uStack_30);
    uStack_30 = CONCAT44(param_2,(int)uVar2);
    uStack_28 = CONCAT44(param_4,param_3);
    if (0 < *(int *)(param_5 + 0x20)) {
      FUN_10828b624(**(undefined8 **)(param_5 + 0x18),&uStack_30);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108298180);
  (*pcVar1)();
}



/* Entry: 1082981b4; end: 1082981bf;  */

void FUN_1082981b4(void)

{
  return;
}



/* Entry: 1082981c0; end: 1082981d3;  */

void FUN_1082981c0(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082981d4; end: 108298267;  */

void FUN_1082981d4(void)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000108298c90();
  func_0x000108298a4c(&lStack_28);
  FUN_108298268(&lStack_30);
  lVar1 = lStack_30;
  if (lStack_28 != lStack_30) {
    lStack_30 = lStack_28;
    lStack_28 = lVar1;
  }
  FUN_1083a3ca0(lStack_30);
  func_0x000108298abc();
  func_0x0001082989bc();
  func_0x000108298b54();
  return;
}



/* Entry: 108298268; end: 10829827f;  */

long FUN_108298268(long param_1,long param_2,uint param_3,long param_4,undefined8 *param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  long unaff_x19;
  long lVar3;
  
  lVar1 = param_5[4];
  if (param_4 != 0) {
    lVar1 = param_4;
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_5[3] + 0x20))) {
    lVar3 = *(long *)(*(long *)(param_5[3] + 0x18) + (ulong)param_3 * 8);
    if (lVar3 == 0) {
      lVar3 = lVar1;
      func_0x0001083a3dfc(param_1);
      if (lVar3 != 0) {
        _strlen(lVar1);
      }
      FUN_1083a322c(&stack0xffffffffffffffd8,lVar1);
      func_0x0001083a3cec();
      return unaff_x19;
    }
    if ((int)param_3 < *(int *)(param_2 + 0x18)) {
      func_0x000108298b5c();
      if ((*(byte *)(lVar3 + 0x30) >> 5 & 1) != 0) {
        func_0x000108298c5c(param_5[3]);
        func_0x000108298a30();
      }
      func_0x000108298c28(*param_5);
      FUN_1082db500();
      if ((int)param_2 != 0) {
        if (param_7 == 0) {
          func_0x000108298a30();
        }
        else {
          FUN_1083a3a90(param_1,&UNK_10f482cdf);
          param_2 = param_1;
        }
      }
      func_0x000108298b3c();
      return param_2;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108297d08);
  (*pcVar2)();
}



/* Entry: 108298280; end: 108298293;  */

void FUN_108298280(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 108298294; end: 1082982a3;  */

undefined * FUN_108298294(void)

{
  return &UNK_10f482d49;
}



/* Entry: 1082982a4; end: 1082982d7;  */

void FUN_1082982a4(long param_1)

{
  func_0x000108298a00();
  func_0x000108298a90();
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  func_0x000108298b98();
  return;
}



/* Entry: 1082982d8; end: 1082982e3;  */

void FUN_1082982d8(void)

{
  return;
}



/* Entry: 1082982e4; end: 1082982f7;  */

void FUN_1082982e4(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082982f8; end: 10829832f;  */

void FUN_1082982f8(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(long *)*param_2 + 8))();
  func_0x000108298abc();
  func_0x0001082989bc();
  return;
}



/* Entry: 108298330; end: 1082983d3;  */

undefined8 * FUN_108298330(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lStack_28;
  
  uVar1 = *(uint *)(*param_2 + 0x30);
  *(undefined4 *)(param_1 + 1) = 0xf;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = uVar1 & 7;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110a358a0;
  lStack_28 = *param_2;
  *param_2 = 0;
  puVar2 = param_1;
  FUN_108296280(param_1,&lStack_28,3);
  func_0x000108298a14();
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000108298984();
  }
  return param_1;
}



/* Entry: 1082983d4; end: 1082983d7;  */

undefined8 * FUN_1082983d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082983d8; end: 1082983eb;  */

void FUN_1082983d8(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082983ec; end: 1082983f7;  */

undefined * FUN_1082983ec(void)

{
  return &UNK_10f482d56;
}



/* Entry: 1082983f8; end: 108298483;  */

void FUN_1082983f8(undefined8 param_1)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *unaff_x19;
  undefined8 uStack_28;
  
  func_0x000108298b88();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0001082989cc();
    func_0x000108298aa8();
    FUN_108298330();
    *unaff_x19 = param_1;
    if (uStack_28 != 0) {
      func_0x000108298984();
    }
    func_0x000108298a14();
    if (uStack_28 != 0) {
      func_0x000108298984();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108298454);
  (*pcVar1)();
}



/* Entry: 108298484; end: 1082984a7;  */

void FUN_108298484(long param_1)

{
  code *pcVar1;
  
  if (0 < *(int *)(param_1 + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x0001082984a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x18) + 0x20))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082984a8);
  (*pcVar1)();
}



/* Entry: 1082984a8; end: 1082984db;  */

void FUN_1082984a8(long param_1)

{
  func_0x000108298a00();
  func_0x000108298a90();
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  func_0x000108298b98();
  return;
}



/* Entry: 1082984dc; end: 1082984e7;  */

void FUN_1082984dc(void)

{
  return;
}



/* Entry: 1082984e8; end: 1082984fb;  */

void FUN_1082984e8(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082984fc; end: 10829855f;  */

void FUN_1082984fc(undefined8 param_1,long param_2)

{
  undefined8 uStack_28;
  
  FUN_108298268(&uStack_28,param_1,0,*(undefined8 *)(param_2 + 0x20),param_2,&UNK_10f482d62,0xf);
  func_0x000108298abc();
  func_0x0001082989bc();
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 108298560; end: 108298563;  */

undefined8 * FUN_108298560(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 108298564; end: 108298577;  */

void FUN_108298564(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 108298578; end: 108298583;  */

undefined * FUN_108298578(void)

{
  return &UNK_10f482d72;
}



/* Entry: 108298584; end: 1082985d3;  */

void FUN_108298584(void)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 *puVar2;
  undefined1 auStack_28 [8];
  
  func_0x000108298b88();
  if (!(bool)in_ZR && in_NG == in_OV) {
    func_0x0001082989cc();
    puVar2 = auStack_28;
    FUN_108297b48();
    func_0x000108298a14();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000108298984();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082985c4);
  (*pcVar1)();
}



/* Entry: 1082985d4; end: 1082985ef;  */

ulong FUN_1082985d4(undefined8 param_1,long param_2,uint *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  if (*(int *)(param_2 + 0x20) < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082985f0);
    (*pcVar1)();
  }
  if ((long *)**(long **)(param_2 + 0x18) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(param_2 + 0x18) + 0x20))();
    return CONCAT44(uVar3,uVar2);
  }
  return (ulong)*param_3;
}



/* Entry: 1082985f0; end: 108298623;  */

void FUN_1082985f0(long param_1)

{
  func_0x000108298a00();
  func_0x000108298a90();
  *(undefined8 *)(param_1 + 0x18) = 0x100000000;
  func_0x000108298b98();
  return;
}



/* Entry: 108298624; end: 10829862f;  */

void FUN_108298624(void)

{
  return;
}



/* Entry: 108298630; end: 108298643;  */

void FUN_108298630(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108298644; end: 1082986a3;  */

void FUN_108298644(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  func_0x000108298a4c(&uStack_28,param_1,0);
  (*(code *)**(undefined8 **)*param_2)();
  func_0x000108298abc();
  func_0x0001082989bc();
  FUN_1083a3ca0(uStack_28);
  return;
}



/* Entry: 1082986a4; end: 1082986ab;  */

void FUN_1082986a4(void)

{
  return;
}



/* Entry: 1082986ac; end: 1082986db;  */

void FUN_1082986ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a35a10;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1082986dc; end: 108298723;  */

void FUN_1082986dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a35a10;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108298724; end: 10829875b;  */

long FUN_108298724(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a35a70);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10829875c; end: 108298767;  */

undefined ** FUN_10829875c(void)

{
  return &PTR_DAT_110a35a70;
}



/* Entry: 108298768; end: 1082987e3;  */

void FUN_108298768(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_19 = param_3;
  uStack_18 = param_2;
  func_0x000108298794(param_1,&uStack_18,&uStack_19);
  return;
}



/* Entry: 1082987e4; end: 108298867;  */

long FUN_1082987e4(long *param_1,int param_2)

{
  long lVar1;
  
  func_0x00010829881c(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 8;
}



/* Entry: 108298868; end: 1082988d3;  */

void FUN_108298868(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082988d4; end: 108298927;  */

void FUN_1082988d4(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_1 + 8) ^ 0x7fffffff) < param_2) {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1082988f8;
    func_0x00010bdb1a68();
  }
  else {
    param_1 = (ulong)(*(uint *)(param_1 + 8) + param_2);
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x18) = 0x7fffffff;
  *(undefined8 *)(puVar1 + -0x20) = 8;
  FUN_10840fe24(puVar1 + -0x20,param_1);
  return;
}



/* Entry: 108298928; end: 108298983;  */

void FUN_108298928(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  long lStack_28;
  
  lStack_28 = *param_5;
  *param_5 = 0;
  FUN_1082cc4bc(param_1,&lStack_28,1);
  if (lStack_28 != 0) {
    FUN_108298984();
  }
  uVar1 = *param_7;
  param_2[1] = param_7[1];
  *param_2 = uVar1;
  return;
}



/* Entry: 108298984; end: 108298c9b;  */

void FUN_108298984(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010829898c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 108298c9c; end: 108298d8f;  */

void FUN_108298c9c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  int extraout_w10;
  long lStack_40;
  long lStack_38;
  
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x00010829c2f8();
    uVar2 = (uint)lVar3;
    if (2 < uVar2 && uVar2 != 4) {
      if (uVar2 != 3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108298d5c);
        (*pcVar1)();
      }
      lVar3 = *(long *)(param_2 + 0x10);
      if (lVar3 != 0) {
        do {
          func_0x00010829c1d8();
        } while (extraout_w10 != 0);
      }
      lStack_40 = lVar3;
      FUN_10829b838(&lStack_38);
      func_0x000106f47224(&lStack_40);
      lStack_40 = lStack_38;
      lStack_38 = 0;
      FUN_108296588(param_1,&lStack_40);
      if (lStack_40 != 0) {
        func_0x00010829c1cc();
      }
      lVar3 = lStack_38;
      lStack_38 = 0;
      if (lVar3 == 0) {
        return;
      }
      func_0x00010829c1cc();
      return;
    }
  }
  *param_1 = 0;
  return;
}


