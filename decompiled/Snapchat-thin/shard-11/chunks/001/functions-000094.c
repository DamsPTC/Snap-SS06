/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081795b4; end: 1081795f3;  */

long * FUN_1081795b4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x1fffffffffffffff;
    }
    return plVar2;
  }
  FUN_108179674();
  plVar2 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1081796c8(plVar2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 1081795f4; end: 108179673;  */

void FUN_1081795f4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1081796c8(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108179674; end: 108179687;  */

void FUN_108179674(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_1081796ac();
  return;
}



/* Entry: 108179688; end: 1081796ab;  */

void FUN_108179688(void)

{
  FUN_1081796ac();
  return;
}



/* Entry: 1081796ac; end: 1081796c7;  */

void FUN_1081796ac(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_60;
  long **pplStack_58;
  long **pplStack_50;
  undefined1 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  if ((ulong)param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  pplStack_58 = &plStack_40;
  pplStack_50 = &plStack_38;
  plStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_38 = lVar4;
    plStack_38 = plStack_38 + 1;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  plStack_40 = param_4;
  FUN_10817975c();
  FUN_10817978c(&uStack_60);
  return;
}



/* Entry: 1081796c8; end: 10817975b;  */

void FUN_1081796c8(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_50;
  long **pplStack_48;
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  pplStack_48 = &plStack_30;
  pplStack_40 = &plStack_28;
  plStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      piVar1 = (int *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plStack_28 = lVar4;
    plStack_28 = plStack_28 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  plStack_30 = param_4;
  FUN_10817975c();
  FUN_10817978c(&uStack_50);
  return;
}



/* Entry: 10817975c; end: 10817978b;  */

void FUN_10817975c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    FUN_108159714();
  }
  return;
}



/* Entry: 10817978c; end: 1081797bb;  */

long FUN_10817978c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1081797bc(param_1);
  }
  return param_1;
}



/* Entry: 1081797bc; end: 1081797db;  */

void FUN_1081797bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_108159714();
  }
  return;
}



/* Entry: 1081797dc; end: 108179837;  */

void FUN_1081797dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    FUN_108159714();
  }
  return;
}



/* Entry: 108179838; end: 10817983f;  */

void FUN_108179838(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_108159714();
  }
  return;
}



/* Entry: 108179840; end: 108179877;  */

void FUN_108179840(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    FUN_108159714();
  }
  return;
}



/* Entry: 108179878; end: 108179897;  */

void FUN_108179878(void)

{
  return;
}



/* Entry: 108179898; end: 108179c17;  */

void FUN_108179898(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar9;
  long *plVar10;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108179c18(param_1,param_4[1] - *param_4 >> 3);
  plVar2 = (long *)param_4[1];
  for (param_4 = (long *)*param_4; param_4 != plVar2; param_4 = param_4 + 1) {
    lStack_a8 = 0;
    plVar6 = (long *)0x40;
    __Znwm();
    plVar10 = (long *)*param_4;
    *param_4 = 0;
    uStack_90 = 0;
    if (plVar10 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
      plStack_88 = (long *)0x0;
    }
    else {
      puVar7 = (undefined8 *)0x58;
      plStack_88 = plVar10;
      __Znwm();
      plStack_88 = (long *)0x0;
      plStack_80 = (long *)0x0;
      plStack_78 = plVar10;
      FUN_10818860c();
      FUN_108159714(&plStack_78);
      *puVar7 = &PTR_FUN_110a2b868;
      puVar7[9] = 0x4080000000000000;
      *(undefined1 *)(puVar7 + 10) = 0;
      FUN_108159714(&plStack_80);
    }
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    *(undefined2 *)(plVar6 + 5) = 0;
    *plVar6 = (long)&PTR_DAT_110a2aa40;
    plStack_78 = (long *)0x0;
    plVar6[6] = (long)puVar7;
    FUN_108179ca4(&plStack_78);
    FUN_108159714(&plStack_88);
    *plVar6 = (long)&PTR_FUN_110a2a9d8;
    *(undefined4 *)(plVar6 + 7) = 0;
    *(undefined4 *)((long)plVar6 + 0x3c) = 0;
    uVar8 = param_2;
    FUN_108154b58(param_2,&DAT_10f3dc18d);
    iVar5 = (int)uVar8;
    plStack_80 = (long *)CONCAT44(plStack_80._4_4_,1);
    func_0x000108155f24();
    lVar9 = plVar6[6];
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    if (2 < iVar5) {
      iVar5 = 3;
    }
    if (*(char *)(lVar9 + 0x50) != (&UNK_10df065dc)[iVar5 - 1]) {
      *(undefined *)(lVar9 + 0x50) = (&UNK_10df065dc)[iVar5 - 1];
      FUN_10818a7f4(lVar9,1);
    }
    uVar8 = param_2;
    FUN_108154b58(param_2,&DAT_10f3dc16b);
    FUN_108154e4c();
    FUN_108161330(plVar6,param_3,uVar8,plVar6 + 7);
    uVar8 = param_2;
    FUN_108154b58(param_2,&DAT_10f466383);
    FUN_108154e4c();
    FUN_108161330(plVar6,param_3,uVar8,(undefined4 *)((long)plVar6 + 0x3c));
    plStack_98 = plVar6;
    FUN_108159714(&uStack_90);
    FUN_10816040c(plVar6 + 2);
    lVar9 = plVar6[6];
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_a8 = lVar9;
    FUN_108179cd0(0);
    plStack_98 = (long *)0x0;
    if ((plVar6[2] == plVar6[3]) && ((*(byte *)((long)plVar6 + 0x29) & 1) == 0)) {
      plStack_80 = plVar6;
      (**(code **)(*plVar6 + 0x18))(0,plVar6);
    }
    else {
      plStack_80 = (long *)0x0;
      plStack_78 = plVar6;
      FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_78);
      FUN_108155920(&plStack_78);
    }
    FUN_108179cfc(&plStack_80);
    FUN_108179cfc(&plStack_98);
    lStack_a8 = 0;
    lStack_a0 = lVar9;
    func_0x0001081794bc(param_1,&lStack_a0);
    FUN_108159714(&lStack_a0);
    FUN_108179ca4(&lStack_a8);
  }
  return;
}



/* Entry: 108179c18; end: 108179ca3;  */

long *** FUN_108179c18(long *param_1,ulong param_2)

{
  long ***ppplVar1;
  long lVar2;
  long lVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = (long ***)(param_1 + 2);
  lVar2 = *param_1;
  if ((ulong)((long)*ppplVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      FUN_108179674();
      func_0x00010817980c(&pplStack_48);
      __Unwind_Resume();
      FUN_108179cd0(*ppplVar1);
      return ppplVar1;
    }
    lVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    FUN_108179688();
    lStack_40 = (long)ppplVar1 + (lVar3 - lVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    FUN_1081795f4(param_1,&pplStack_48);
    ppplVar1 = &pplStack_48;
    func_0x00010817980c(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 108179ca4; end: 108179ccf;  */

undefined8 * FUN_108179ca4(undefined8 *param_1)

{
  FUN_108179cd0(*param_1);
  return param_1;
}



/* Entry: 108179cd0; end: 108179cfb;  */

void FUN_108179cd0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000108179cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108179cfc; end: 108179d4b;  */

long * FUN_108179cfc(long *param_1)

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



/* Entry: 108179d4c; end: 108179d7b;  */

undefined8 * FUN_108179d4c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2aa40;
  FUN_108179ca4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108179d7c; end: 108179d7f;  */

undefined8 * FUN_108179d7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2aa40;
  FUN_108179ca4(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108179d80; end: 108179d93;  */

void FUN_108179d80(void)

{
  FUN_108179d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108179d94; end: 108179df7;  */

void FUN_108179d94(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(float *)(lVar3 + 0x48) != *(float *)(param_1 + 0x38)) {
    *(float *)(lVar3 + 0x48) = *(float *)(param_1 + 0x38);
    FUN_10818a7f4(lVar3,1);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar3 + 0x4c) != *(float *)(param_1 + 0x3c)) {
    *(float *)(lVar3 + 0x4c) = *(float *)(param_1 + 0x3c);
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(lVar3 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(lVar3 + 0x28) = (short)uVar5;
          uStack_21 = 0;
        }
        *(ushort *)(lVar3 + 0x28) = (ushort)uVar5 | 4;
        puStack_40 = &uStack_21;
        puVar4 = *(undefined8 **)(lVar3 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 108179df8; end: 10817a0b3;  */

void FUN_108179df8(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar3 = param_2;
  FUN_108154b58(param_2,&UNK_10f47d03a);
  plStack_58 = (long *)0x0;
  FUN_108154b1c();
  if (lVar3 - 1U < 2) {
    uStack_70 = 0;
    plVar4 = (long *)0x60;
    __Znwm();
    uVar1 = *(undefined4 *)(&UNK_10df06680 + (lVar3 - 1U) * 4);
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    *(undefined2 *)(plVar4 + 5) = 0;
    *plVar4 = (long)&PTR_DAT_110a2aae0;
    plVar5 = plVar4;
    FUN_108159dc0(plVar4 + 6);
    *plVar4 = (long)&PTR_FUN_110a2aa78;
    *(undefined4 *)(plVar4 + 7) = uVar1;
    *(undefined8 *)((long)plVar4 + 0x44) = 0;
    *(undefined8 *)((long)plVar4 + 0x3c) = 0;
    *(undefined8 *)((long)plVar4 + 0x54) = 0;
    *(undefined8 *)((long)plVar4 + 0x4c) = 0;
    func_0x00010817a354();
    FUN_108154e4c();
    func_0x00010817a348();
    func_0x00010817a354();
    FUN_108154e4c();
    plVar6 = plVar4;
    FUN_108162b98(plVar4,param_3,plVar5,(undefined8 *)((long)plVar4 + 0x3c));
    func_0x00010817a354();
    FUN_108154e4c();
    func_0x00010817a348();
    func_0x00010817a354();
    FUN_108154e4c();
    FUN_108161330(plVar4,param_3,plVar6,(undefined8 *)((long)plVar4 + 0x4c));
    func_0x00010817a354();
    FUN_108154e4c();
    func_0x00010817a348();
    func_0x00010817a354();
    FUN_108154e4c();
    func_0x00010817a348();
    func_0x00010817a354();
    FUN_108154e4c();
    func_0x00010817a348();
    plStack_60 = plVar4;
    FUN_10816040c(plVar4 + 2);
    FUN_108159d24(&uStack_70,plVar4 + 6);
    plStack_60 = (long *)0x0;
    if ((plVar4[2] == plVar4[3]) && ((*(byte *)((long)plVar4 + 0x29) & 1) == 0)) {
      plStack_68 = plVar4;
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    else {
      plStack_68 = (long *)0x0;
      plStack_58 = plVar4;
      FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_58);
      FUN_108155920(&plStack_58);
    }
    FUN_10817a0b4(&plStack_68);
    FUN_10817a0b4(&plStack_60);
    uVar2 = uStack_70;
    uStack_70 = 0;
    *param_1 = uVar2;
    FUN_108159010(&uStack_70);
  }
  else {
    FUN_108159fb8(param_3,1,param_2,&UNK_10f47d947);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10817a0b4; end: 10817a103;  */

long * FUN_10817a0b4(long *param_1)

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



/* Entry: 10817a104; end: 10817a133;  */

undefined8 * FUN_10817a104(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2aae0;
  FUN_108159010(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817a134; end: 10817a137;  */

undefined8 * FUN_10817a134(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2aae0;
  FUN_108159010(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817a138; end: 10817a14b;  */

void FUN_10817a138(void)

{
  FUN_10817a104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817a14c; end: 10817a347;  */

undefined1 * FUN_10817a14c(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *unaff_x21;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_140;
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [136];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar10 = (float)NEON_fminnm((float)(double)(long)(*(float *)(param_1 + 0x44) + 0.5),0x4effffff);
  if (fVar10 <= -2.1474835e+09) {
    fVar10 = -2.1474835e+09;
  }
  uVar2 = (int)fVar10 & ((int)fVar10 >> 0x1f ^ 0xffffffffU);
  if (99999 < (int)uVar2) {
    uVar2 = 100000;
  }
  func_0x00010837cf98(auStack_e0);
  fVar12 = 0.017453292;
  fVar10 = (*(float *)(param_1 + 0x48) + -90.0) * 0.017453292;
  fVar13 = *(float *)(param_1 + 0x50);
  fVar14 = *(float *)(param_1 + 0x3c);
  fVar11 = fVar10;
  ___sincosf_stret(fVar10);
  func_0x00010837d040(fVar14 + fVar12 * fVar13,*(float *)(param_1 + 0x40) + fVar11 * fVar13,
                      auStack_e0);
  FUN_10816192c(auStack_e0,uVar2 << (ulong)(*(int *)(param_1 + 0x38) == 0));
  uVar6 = (ulong)uVar2;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (*(int *)(param_1 + 0x38) == 0) {
      ___sincosf_stret(fVar10 + (6.2831855 / (float)uVar6) * 0.5);
      func_0x00010817a35c();
    }
    fVar10 = 6.2831855 / (float)uVar6 + fVar10;
    ___sincosf_stret();
    func_0x00010817a35c();
  }
  FUN_10837d20c(auStack_e0);
  lVar9 = *(long *)(param_1 + 0x30);
  FUN_10837d48c(auStack_f0,auStack_e0);
  uVar6 = lVar9 + 0x30;
  func_0x000108376bec(uVar6,auStack_f0);
  if ((uVar6 & 1) == 0) {
    FUN_108376b90(lVar9 + 0x30,auStack_f0);
    FUN_10818a7f4(lVar9,1);
  }
  FUN_10837ca5c(auStack_f0[0]);
  puVar7 = auStack_e0;
  func_0x00010837d00c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010837d00c(auStack_e0);
    __Unwind_Resume(puVar7);
    FUN_10815ca50();
    if (param_3 != (ulong *)0x0) {
      unaff_x21[0x29] = 1;
      uVar5 = uRam0000000000000048;
      if ((*param_3 & 7) == 0) {
        pbVar8 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar8 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
      }
      FUN_1083a3348(&ppuStack_190,pbVar8);
      piVar1 = (int *)(unaff_x21 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_10815d1d4(uVar5,&ppuStack_190,param_4,&stack0xfffffffffffffec8);
      FUN_10815db6c(&stack0xfffffffffffffec8);
      FUN_1083a3ca0(ppuStack_190);
    }
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_188 = 0;
    uStack_158 = 1;
    uStack_14c = 0;
    uStack_154 = 0;
    ppuStack_190 = &PTR_FUN_110a28a48;
    uStack_140 = param_4;
    FUN_1081604c8();
    FUN_108160a4c(&ppuStack_190);
    return unaff_x21;
  }
  return puVar7;
}



/* Entry: 10817a348; end: 10817a367;  */

long FUN_10817a348(undefined8 param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  
  FUN_10815ca50();
  if (param_3 != (ulong *)0x0) {
    *(undefined1 *)(unaff_x21 + 0x29) = 1;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    if ((*param_3 & 7) == 0) {
      pbVar4 = (byte *)((long)param_3 + 1);
    }
    else {
      pbVar4 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
    }
    FUN_1083a3348(&ppuStack_a0,pbVar4);
    piVar1 = (int *)(unaff_x21 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_10815d1d4(uVar5,&ppuStack_a0,param_4,&stack0xffffffffffffffb8);
    FUN_10815db6c(&stack0xffffffffffffffb8);
    FUN_1083a3ca0(ppuStack_a0);
  }
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_68 = 1;
  uStack_5c = 0;
  uStack_64 = 0;
  ppuStack_a0 = &PTR_FUN_110a28a48;
  uStack_50 = param_4;
  FUN_1081604c8();
  FUN_108160a4c(&ppuStack_a0);
  return unaff_x21;
}



/* Entry: 10817a368; end: 10817a603;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10817a368(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lStack_90;
  long alStack_88 [2];
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108179c18(param_1,param_4[1] - *param_4 >> 3);
  puVar2 = (undefined8 *)param_4[1];
  for (puVar10 = (undefined8 *)*param_4; puVar10 != puVar2; puVar10 = puVar10 + 1) {
    lStack_90 = 0;
    plVar5 = (long *)0x40;
    __Znwm();
    plVar9 = (long *)*puVar10;
    *puVar10 = 0;
    puVar6 = (undefined8 *)0x50;
    plStack_78 = plVar9;
    __Znwm();
    plStack_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    plStack_68 = plVar9;
    FUN_10818860c();
    FUN_108159714(&plStack_68);
    *puVar6 = &PTR_DAT_110a2ab80;
    *(undefined4 *)(puVar6 + 9) = 0;
    FUN_108159714(&plStack_70);
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    *(undefined2 *)(plVar5 + 5) = 0;
    *plVar5 = (long)&PTR_DAT_110a2abf0;
    plStack_68 = (long *)0x0;
    plVar5[6] = (long)puVar6;
    FUN_10817a604(&plStack_68);
    *plVar5 = (long)&PTR_FUN_110a2ab18;
    *(undefined4 *)(plVar5 + 7) = 0;
    uVar7 = param_2;
    FUN_108154b58(param_2,&DAT_10f3dc16b);
    FUN_108154e4c();
    FUN_108161330(plVar5,param_3,uVar7,plVar5 + 7);
    FUN_108159714(&plStack_78);
    FUN_10816040c(plVar5 + 2);
    lVar8 = plVar5[6];
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    alStack_88[1] = 0;
    lStack_90 = lVar8;
    if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
      plStack_70 = plVar5;
      (**(code **)(*plVar5 + 0x18))(0,plVar5);
    }
    else {
      plStack_70 = (long *)0x0;
      plStack_68 = plVar5;
      FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_68);
      FUN_108155920(&plStack_68);
    }
    FUN_10817a64c(&plStack_70);
    FUN_10817a64c(alStack_88 + 1);
    lStack_90 = 0;
    alStack_88[0] = lVar8;
    func_0x0001081794bc(param_1,alStack_88);
    FUN_108159714(alStack_88);
    FUN_10817a604(&lStack_90);
  }
  return;
}



/* Entry: 10817a604; end: 10817a64b;  */

void FUN_10817a604(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010817abfc();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 10817a64c; end: 10817a693;  */

void FUN_10817a64c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010817abfc();
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
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}



/* Entry: 10817a694; end: 10817a6c3;  */

undefined8 * FUN_10817a694(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2abf0;
  FUN_10817a604(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817a6c4; end: 10817a6c7;  */

undefined8 * FUN_10817a6c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2abf0;
  FUN_10817a604(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817a6c8; end: 10817a6db;  */

void FUN_10817a6c8(void)

{
  FUN_10817a694();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817a6dc; end: 10817a713;  */

void FUN_10817a6dc(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  float fVar6;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar3 = *(long *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x38) / 100.0;
  if (*(float *)(lVar3 + 0x48) != fVar6) {
    *(float *)(lVar3 + 0x48) = fVar6;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(lVar3 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(lVar3 + 0x28) = (short)uVar5;
          uStack_21 = 0;
        }
        *(ushort *)(lVar3 + 0x28) = (ushort)uVar5 | 4;
        puStack_40 = &uStack_21;
        puVar4 = *(undefined8 **)(lVar3 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10817a714; end: 10817a727;  */

void FUN_10817a714(void)

{
  FUN_1081886b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817a728; end: 10817a9b7;  */

void FUN_10817a728(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,long param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  long lVar5;
  float fVar6;
  float extraout_s1;
  undefined1 auVar7 [16];
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long alStack_a0 [5];
  long alStack_78 [2];
  undefined8 auStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(*(long *)*param_7 + 0x38))(alStack_78);
  fVar6 = ABS(*(float *)(param_6 + 0x48));
  if (0.00024414062 < fVar6) {
    FUN_10837b718(alStack_78);
    auVar7 = NEON_fmov(0x3fe0000000000000,8);
    dVar2 = ((double)fVar6 + (double)param_4) * auVar7._0_8_;
    dVar3 = ((double)extraout_s1 + (double)param_5) * auVar7._8_8_;
    auVar7._8_4_ = SUB84(dVar3,0);
    auVar7._0_8_ = dVar2;
    auVar7._12_4_ = (int)((ulong)dVar3 >> 0x20);
    alStack_a0[4] = CONCAT44((float)auVar7._8_8_,(float)dVar2);
    FUN_108376ad8(param_1);
    alStack_a0[2] = 0;
    alStack_a0[3] = 0;
    alStack_a0[0] = 0;
    alStack_a0[1] = 0;
    plStack_c0 = alStack_a0 + 3;
    plStack_b8 = alStack_a0 + 4;
    plStack_a8 = alStack_a0;
    uStack_100 = *(undefined8 *)(alStack_78[0] + 0x28);
    lStack_f8 = *(long *)(alStack_78[0] + 0x40);
    lStack_f0 = lStack_f8 + *(int *)(alStack_78[0] + 0x48);
    lStack_e8 = 0;
    if (*(long *)(alStack_78[0] + 0x58) != 0) {
      lStack_e8 = *(long *)(alStack_78[0] + 0x58) + -4;
    }
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 1;
    puStack_c8 = param_1;
    lStack_b0 = param_6;
    do {
      puVar4 = &uStack_100;
      FUN_108379cc8(puVar4,auStack_68);
      switch((ulong)puVar4 & 0xffffffff) {
      case 0:
        FUN_10817a9b8(&puStack_c8);
        alStack_a0[3] = auStack_68[0];
        break;
      case 1:
        func_0x00010817abe8();
        break;
      case 2:
        FUN_108351874(auStack_68,auStack_68);
        func_0x00010817ac1c();
        func_0x00010817abe8();
        break;
      case 3:
        func_0x00010817abe8();
        break;
      case 4:
        func_0x00010817ac1c();
        func_0x00010817abe8();
        break;
      case 5:
        FUN_10817a9b8(&puStack_c8);
        break;
      case 6:
        goto code_r0x00010817a92c;
      }
    } while( true );
  }
  func_0x000108376b14(param_1,alStack_78);
LAB_10817a934:
  lVar5 = alStack_78[0];
  FUN_10837ca5c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10837ca5c(alStack_78[0]);
    __Unwind_Resume(lVar5);
    func_0x00010817abfc();
    lVar5 = param_1[3];
    FUN_10817abbc();
    puVar1 = (undefined8 *)((long *)param_1[4])[1];
    for (puVar4 = *(undefined8 **)param_1[4]; puVar4 != puVar1; puVar4 = puVar4 + 3) {
      func_0x00010817ac08(param_1[2],*(undefined4 *)(lVar5 + 0x48),*puVar4);
      func_0x00010817ac08();
      func_0x00010817abc4();
    }
    FUN_108377ec8(*param_1);
    ((undefined8 *)param_1[4])[1] = *(undefined8 *)param_1[4];
    return;
  }
  return;
code_r0x00010817a92c:
  FUN_10817ab94(alStack_a0);
  goto LAB_10817a934;
}



/* Entry: 10817a9b8; end: 10817aa83;  */

void FUN_10817a9b8(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long lVar2;
  
  func_0x00010817abfc();
  FUN_10817abbc();
  lVar1 = ((long *)unaff_x19[4])[1];
  for (lVar2 = *(long *)unaff_x19[4]; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00010817ac08(unaff_x19[2]);
    func_0x00010817ac08();
    func_0x00010817abc4();
  }
  FUN_108377ec8(*unaff_x19);
  ((undefined8 *)unaff_x19[4])[1] = *(undefined8 *)unaff_x19[4];
  return;
}



/* Entry: 10817aa84; end: 10817ab93;  */

long * FUN_10817aa84(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar12 = param_2[1];
    uVar11 = *param_2;
    puVar10[2] = param_2[2];
    puVar10[1] = uVar12;
    *puVar10 = uVar11;
    puVar10 = puVar10 + 3;
    plVar5 = param_1;
LAB_10817ab74:
    param_1[1] = (long)puVar10;
    return plVar5;
  }
  plVar7 = (long *)*param_1;
  lVar9 = (long)puVar10 - (long)plVar7;
  uVar1 = lVar9 / 0x18 + 1;
  plVar5 = param_1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    uVar3 = (param_1[2] - (long)plVar7) / 0x18;
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x555555555555554 < uVar3) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar6 < 0xaaaaaaaaaaaaaab) {
      lVar4 = uVar6 * 0x18;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar9);
      uVar11 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar11;
      puVar2[2] = param_2[2];
      puVar10 = puVar2 + 3;
      plVar8 = puVar2 + (lVar9 / -0x18) * 3;
      plVar5 = plVar8;
      _memcpy(plVar8,plVar7,lVar9);
      *param_1 = (long)plVar8;
      param_1[1] = (long)puVar10;
      param_1[2] = lVar4 + uVar6 * 0x18;
      if (plVar7 != (long *)0x0) {
        __ZdlPv(plVar7);
        plVar5 = plVar7;
      }
      goto LAB_10817ab74;
    }
  }
  else {
    FUN_10817abd4();
  }
  func_0x000104bd35f4();
  func_0x00010817abfc();
  if (plVar5 != (long *)0x0) {
    param_1[1] = (long)plVar5;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10817ab94; end: 10817abbb;  */

void FUN_10817ab94(long param_1)

{
  long unaff_x19;
  
  func_0x00010817abfc();
  if (param_1 != 0) {
    *(long *)(unaff_x19 + 8) = param_1;
    __ZdlPv();
  }
  return;
}



/* Entry: 10817abbc; end: 10817abd3;  */

undefined8 FUN_10817abbc(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  func_0x00010837cf24(*param_2,param_2[1]);
  puVar1 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cd20();
  func_0x00010837cee4();
  func_0x00010837cd94();
  *puVar1 = unaff_s9;
  puVar1[1] = unaff_s8;
  func_0x00010837cb1c();
  return param_1;
}



/* Entry: 10817abd4; end: 10817abe7;  */

undefined8 **** FUN_10817abd4(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 *puStack_90;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  func_0x000104bd47e8(&DAT_10f62a4d8);
  pppuVar4 = pppuStack_a0;
  uStack_18 = 0x10817abe8;
  if (pppuStack_98 < puStack_90) {
    pppuStack_98[2] = (undefined8 **)in_stack_00000020;
    pppuStack_98[1] = (undefined8 **)in_stack_00000018;
    *pppuStack_98 = (undefined8 **)in_stack_00000010;
    return &pppuStack_a0;
  }
  lVar9 = (long)pppuStack_98 - (long)pppuStack_a0;
  uVar1 = lVar9 / 0x18 + 1;
  ppppuVar6 = &pppuStack_a0;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    uVar3 = ((long)puStack_90 - (long)pppuStack_a0) / 0x18;
    uVar7 = uVar3 * 2;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x555555555555554 < uVar3) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_20 = &stack0xfffffffffffffff0;
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar5 = uVar7 * 0x18;
      puStack_20 = &stack0xfffffffffffffff0;
      __Znwm();
      puVar2 = (undefined8 *)(lVar5 + lVar9);
      puVar2[1] = in_stack_00000018;
      *puVar2 = in_stack_00000010;
      puVar2[2] = in_stack_00000020;
      ppppuVar8 = (undefined8 ****)(puVar2 + (lVar9 / -0x18) * 3);
      ppppuVar6 = ppppuVar8;
      _memcpy(ppppuVar8,pppuStack_a0,lVar9);
      if ((undefined8 ****)pppuStack_a0 == (undefined8 ****)0x0) {
        return ppppuVar6;
      }
      pppuStack_a0 = ppppuVar8;
      pppuStack_98 = (undefined8 ***)(puVar2 + 3);
      puStack_90 = (undefined8 *)(lVar5 + uVar7 * 0x18);
      __ZdlPv(pppuVar4);
      return (undefined8 ****)pppuStack_a0;
    }
  }
  else {
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_10817abd4();
  }
  func_0x000104bd35f4();
  pppuStack_70 = pppuStack_a0;
  pcStack_58 = FUN_10817ab94;
  pppuStack_68 = &pppuStack_a0;
  ppuStack_60 = &puStack_20;
  func_0x00010817abfc();
  if (ppppuVar6 != (undefined8 ****)0x0) {
    pppuStack_98 = ppppuVar6;
    __ZdlPv();
  }
  return &pppuStack_a0;
}



/* Entry: 10817abe8; end: 10817ac2f;  */

long * FUN_10817abe8(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  plVar6 = (long *)(unaff_x29 + -0x90);
  puVar11 = *(undefined8 **)(unaff_x29 + -0x88);
  if (puVar11 < *(undefined8 **)(unaff_x29 + -0x80)) {
    puVar11[2] = in_stack_00000030;
    puVar11[1] = in_stack_00000028;
    *puVar11 = in_stack_00000020;
    puVar11 = puVar11 + 3;
LAB_10817ab74:
    *(undefined8 **)(unaff_x29 + -0x88) = puVar11;
    return plVar6;
  }
  plVar8 = (long *)*plVar6;
  lVar10 = (long)puVar11 - (long)plVar8;
  uVar1 = lVar10 / 0x18 + 1;
  plVar5 = plVar6;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    uVar3 = ((long)*(undefined8 **)(unaff_x29 + -0x80) - (long)plVar8) / 0x18;
    uVar7 = uVar3 * 2;
    if (uVar7 < uVar1 || uVar7 - uVar1 == 0) {
      uVar7 = uVar1;
    }
    if (0x555555555555554 < uVar3) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 < 0xaaaaaaaaaaaaaab) {
      lVar4 = uVar7 * 0x18;
      __Znwm();
      puVar2 = (undefined8 *)(lVar4 + lVar10);
      puVar2[1] = in_stack_00000028;
      *puVar2 = in_stack_00000020;
      puVar2[2] = in_stack_00000030;
      puVar11 = puVar2 + 3;
      plVar9 = puVar2 + (lVar10 / -0x18) * 3;
      plVar5 = plVar9;
      _memcpy(plVar9,plVar8,lVar10);
      *plVar6 = (long)plVar9;
      *(undefined8 **)(unaff_x29 + -0x88) = puVar11;
      *(ulong *)(unaff_x29 + -0x80) = lVar4 + uVar7 * 0x18;
      plVar6 = plVar5;
      if (plVar8 != (long *)0x0) {
        __ZdlPv(plVar8);
        plVar6 = plVar8;
      }
      goto LAB_10817ab74;
    }
  }
  else {
    FUN_10817abd4();
  }
  func_0x000104bd35f4();
  func_0x00010817abfc();
  if (plVar5 != (long *)0x0) {
    *(long **)(unaff_x29 + -0x88) = plVar5;
    __ZdlPv();
  }
  return plVar6;
}



/* Entry: 10817ac30; end: 10817ae7b;  */

void FUN_10817ac30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  uStack_80 = 0;
  plVar3 = (long *)0x50;
  __Znwm();
  *(undefined4 *)(plVar3 + 1) = 1;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  *(undefined2 *)(plVar3 + 5) = 0;
  *plVar3 = (long)&PTR_DAT_110a2ac90;
  plVar4 = plVar3;
  FUN_1081778ec(plVar3 + 6);
  iVar2 = (int)plVar4;
  *plVar3 = (long)&PTR_FUN_110a2ac28;
  plVar3[7] = 0;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 9) = 0;
  lVar5 = plVar3[6];
  func_0x00010817af90();
  plStack_78 = (long *)CONCAT44(plStack_78._4_4_,0xffffffff);
  func_0x000108155f24();
  plStack_68 = (long *)CONCAT44(plStack_68._4_4_,(uint)(iVar2 == 3));
  FUN_108177804(lVar5,&plStack_68);
  plStack_68 = (long *)CONCAT71(plStack_68._1_7_,2);
  func_0x000108177824(plVar3[6],&plStack_68);
  func_0x00010817af90();
  FUN_108154e4c();
  func_0x00010817af98();
  FUN_108162b98();
  func_0x00010817af90();
  FUN_108154e4c();
  func_0x00010817af98();
  FUN_108162b98();
  func_0x00010817af90();
  FUN_108154e4c();
  func_0x00010817af98();
  FUN_108161330();
  plStack_70 = plVar3;
  FUN_10816040c(plVar3 + 2);
  FUN_108177770(&uStack_80,plVar3 + 6);
  plStack_70 = (long *)0x0;
  if ((plVar3[2] == plVar3[3]) && ((*(byte *)((long)plVar3 + 0x29) & 1) == 0)) {
    plStack_78 = plVar3;
    (**(code **)(*plVar3 + 0x18))(0,plVar3);
  }
  else {
    plStack_78 = (long *)0x0;
    plStack_68 = plVar3;
    FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_68);
    FUN_108155920(&plStack_68);
  }
  FUN_10817ae7c(&plStack_78);
  FUN_10817ae7c(&plStack_70);
  uVar1 = uStack_80;
  uStack_80 = 0;
  *param_1 = uVar1;
  FUN_10817771c(&uStack_80);
  return;
}



/* Entry: 10817ae7c; end: 10817aecb;  */

long * FUN_10817ae7c(long *param_1)

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



/* Entry: 10817aecc; end: 10817aefb;  */

undefined8 * FUN_10817aecc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2ac90;
  FUN_10817771c(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817aefc; end: 10817aeff;  */

undefined8 * FUN_10817aefc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2ac90;
  FUN_10817771c(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817af00; end: 10817af13;  */

void FUN_10817af00(void)

{
  FUN_10817aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817af14; end: 10817af73;  */

void FUN_10817af14(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_64 [52];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  fVar4 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x40) + fVar4 * -0.5;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) + fVar5 * -0.5;
  uStack_30 = CONCAT44(fVar3,fVar2);
  uStack_28 = CONCAT44(fVar5 + fVar3,fVar4 + fVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_10817af74(auStack_64,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x48),
                &uStack_30);
  FUN_10817794c(uVar1,auStack_64);
  return;
}



/* Entry: 10817af74; end: 10817afa7;  */

void FUN_10817af74(float *param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  long lVar5;
  undefined1 in_b0;
  undefined1 uVar6;
  undefined1 in_register_00005001;
  undefined1 uVar7;
  undefined1 in_register_00005002;
  undefined1 uVar8;
  undefined1 in_register_00005003;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  param_1[0xc] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[10] = 0.0;
  param_1[0xb] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  fVar10 = (float)CONCAT13(in_register_00005003,
                           CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  pfVar4 = param_1;
  FUN_108384d0c(param_1,param_3);
  if ((int)pfVar4 != 0) {
    uVar9 = (undefined1)((uint)param_2 >> 0x18);
    uVar8 = (undefined1)((uint)param_2 >> 0x10);
    uVar7 = (undefined1)((uint)param_2 >> 8);
    uVar6 = SUB41(param_2,0);
    if (NAN((fVar10 - fVar10) * param_2)) {
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      fVar10 = 0.0;
    }
    fVar1 = param_1[2] - *param_1;
    fVar11 = param_1[3] - param_1[1];
    fVar14 = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) +
             (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
    bVar2 = true;
    if ((fVar10 + fVar10 <= fVar1) && (bVar2 = false, !NAN(fVar11) && !NAN(fVar14))) {
      bVar2 = fVar11 < fVar14;
    }
    if (bVar2) {
      fVar12 = fVar1 / (fVar10 + fVar10);
      fVar13 = fVar11 / fVar14;
      if (fVar12 <= fVar11 / fVar14) {
        fVar13 = fVar12;
      }
      fVar10 = fVar10 * fVar13;
      fVar13 = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) * fVar13;
      uVar6 = SUB41(fVar13,0);
      uVar7 = (undefined1)((uint)fVar13 >> 8);
      uVar8 = (undefined1)((uint)fVar13 >> 0x10);
      uVar9 = (undefined1)((uint)fVar13 >> 0x18);
    }
    if ((fVar10 <= 0.0) ||
       (!NAN((float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)))) &&
        ((float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) < 0.0 ||
        (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6))) == 0.0))) {
      pfVar4 = param_1;
      FUN_108384d0c(param_1,param_3);
      if ((int)pfVar4 != 0) {
        param_1[6] = 0.0;
        param_1[7] = 0.0;
        param_1[4] = 0.0;
        param_1[5] = 0.0;
        param_1[10] = 0.0;
        param_1[0xb] = 0.0;
        param_1[8] = 0.0;
        param_1[9] = 0.0;
        param_1[0xc] = 1.4013e-45;
      }
      return;
    }
    pfVar4 = param_1 + 5;
    lVar5 = 4;
    do {
      pfVar4[-1] = fVar10;
      *pfVar4 = (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
      pfVar4 = pfVar4 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    bVar2 = true;
    bVar3 = false;
    if (fVar11 * 0.5 <= (float)CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)))) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar10) && !NAN(fVar1 * 0.5)) {
        bVar2 = fVar10 < fVar1 * 0.5;
        bVar3 = false;
      }
    }
    fVar10 = 2.8026e-45;
    if (bVar2 != bVar3) {
      fVar10 = 4.2039e-45;
    }
    param_1[0xc] = fVar10;
  }
  return;
}



/* Entry: 10817afa8; end: 10817b353;  */

void FUN_10817afa8(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108154b58(param_2,&DAT_10f2f5af7);
  FUN_108154e4c();
  if (param_2 != 0) {
    FUN_108156fc0(*param_4,param_4[1]);
    FUN_1081561e8(param_1,1);
    lStack_88 = 0;
    plVar5 = (long *)0x68;
    __Znwm();
    plVar6 = plVar5;
    func_0x00010817ba40();
    iVar4 = (int)plVar6;
    plStack_78 = (long *)CONCAT44(plStack_78._4_4_,1);
    func_0x000108155f24();
    puVar7 = (undefined8 *)0x90;
    __Znwm();
    FUN_10818d360();
    *puVar7 = &PTR_FUN_110a2ad30;
    *(uint *)(puVar7 + 9) = (uint)(iVar4 != 1);
    *(undefined8 *)((long)puVar7 + 0x54) = 0;
    *(undefined8 *)((long)puVar7 + 0x4c) = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    uVar9 = NEON_fmov(0x3f800000,4);
    puVar7[0xe] = uVar9;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = uVar9;
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    *(undefined2 *)(plVar5 + 5) = 0;
    *plVar5 = (long)&PTR_DAT_110a2ad88;
    plStack_68 = (long *)0x0;
    plVar5[6] = (long)puVar7;
    FUN_10817b354(&plStack_68);
    *plVar5 = (long)&PTR_FUN_110a2acc8;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[0xb] = 0x42c8000000000000;
    plVar5[10] = 0x42c8000042c80000;
    *(undefined4 *)(plVar5 + 0xc) = 0x42c80000;
    func_0x00010817ba40();
    FUN_108154e4c();
    func_0x00010817ba14();
    FUN_108161330();
    func_0x00010817ba40();
    FUN_108154e4c();
    func_0x00010817ba34();
    func_0x00010817ba2c();
    FUN_108154e4c();
    func_0x00010817ba14();
    FUN_108162b98();
    func_0x00010817ba2c();
    FUN_108154e4c();
    func_0x00010817ba14();
    FUN_108162b98();
    func_0x00010817ba2c();
    FUN_108154e4c();
    func_0x00010817ba14();
    FUN_108162b98();
    func_0x00010817ba2c();
    FUN_108154e4c();
    func_0x00010817ba34();
    func_0x00010817ba2c();
    FUN_108154e4c();
    func_0x00010817ba34();
    func_0x00010817ba2c();
    FUN_108154e4c();
    func_0x00010817ba14();
    FUN_108161330();
    FUN_10816040c(plVar5 + 2);
    lVar8 = plVar5[6];
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_70 = 0;
    lStack_88 = lVar8;
    if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
      plStack_78 = plVar5;
      (**(code **)(*plVar5 + 0x18))(0,plVar5);
    }
    else {
      plStack_78 = (long *)0x0;
      plStack_68 = plVar5;
      FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_68);
      FUN_108155920(&plStack_68);
    }
    FUN_10817b3a4(&plStack_78);
    FUN_10817b3a4(&uStack_70);
    lStack_88 = 0;
    lStack_80 = lVar8;
    func_0x000108156e9c(param_1,&lStack_80);
    FUN_108154cb4(&lStack_80);
    FUN_10817b354(&lStack_88);
    return;
  }
  func_0x00010817b9dc();
  uVar9 = *param_4;
  param_1[1] = param_4[1];
  *param_1 = uVar9;
  param_1[2] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}



/* Entry: 10817b354; end: 10817b3a3;  */

long * FUN_10817b354(long *param_1)

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



/* Entry: 10817b3a4; end: 10817b3f3;  */

long * FUN_10817b3a4(long *param_1)

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



/* Entry: 10817b3f4; end: 10817b423;  */

undefined8 * FUN_10817b3f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2ad88;
  FUN_10817b354(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817b424; end: 10817b427;  */

undefined8 * FUN_10817b424(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2ad88;
  FUN_10817b354(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817b428; end: 10817b43b;  */

void FUN_10817b428(void)

{
  FUN_10817b3f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817b43c; end: 10817b61f;  */

void FUN_10817b43c(long param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  ulong unaff_d9;
  
  fVar8 = *(float *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((1024.0 < fVar8) || (0.0 < fVar8)) {
    pfVar1 = (float *)&UNK_10df069b4;
    if (fVar8 <= 1024.0) {
      pfVar1 = (float *)(param_1 + 0x38);
    }
    lVar7 = (long)(*pfVar1 + 0.5);
  }
  else {
    lVar7 = 0;
  }
  if (*(long *)(lVar4 + 0x60) != lVar7) {
    *(long *)(lVar4 + 0x60) = lVar7;
    func_0x00010817ba24();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x68) != *(float *)(param_1 + 0x3c)) {
    *(float *)(lVar4 + 0x68) = *(float *)(param_1 + 0x3c);
    func_0x00010817ba24();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if ((*(float *)(lVar4 + 0x78) != *(float *)(param_1 + 0x40)) ||
     (*(float *)(lVar4 + 0x7c) != *(float *)(param_1 + 0x44))) {
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(param_1 + 0x40);
    func_0x00010817ba24();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if ((*(float *)(lVar4 + 0x80) != *(float *)(param_1 + 0x48)) ||
     (*(float *)(lVar4 + 0x84) != *(float *)(param_1 + 0x4c))) {
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(param_1 + 0x48);
    func_0x00010817ba24();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  fVar8 = (float)*(undefined8 *)(param_1 + 0x50) * 0.01;
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * 0.01;
  if ((*(float *)(lVar4 + 0x88) != fVar8) || (*(float *)(lVar4 + 0x8c) != fVar9)) {
    *(ulong *)(lVar4 + 0x88) = CONCAT44(fVar9,fVar8);
    func_0x00010817ba24();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar4 + 0x6c) != *(float *)(param_1 + 0x58)) {
    *(float *)(lVar4 + 0x6c) = *(float *)(param_1 + 0x58);
    func_0x00010817ba24();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  fVar9 = *(float *)(param_1 + 0x5c) * 0.01;
  fVar8 = 1.0;
  if (fVar9 <= 1.0) {
    fVar8 = fVar9;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (*(float *)(lVar4 + 0x70) != fVar8) {
    *(float *)(lVar4 + 0x70) = fVar8;
    func_0x00010817ba24();
    lVar4 = *(long *)(param_1 + 0x30);
  }
  fVar9 = *(float *)(param_1 + 0x60) * 0.01;
  fVar8 = 1.0;
  if (fVar9 <= 1.0) {
    fVar8 = fVar9;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (*(float *)(lVar4 + 0x74) != fVar8) {
    *(float *)(lVar4 + 0x74) = fVar8;
    func_0x00010818add8(&stack0xffffffffffffffc8);
    if ((unaff_d9 & 0x100000000) == 0) {
      uVar3 = *(ushort *)(lVar4 + 0x28);
      uVar6 = (uint)uVar3;
      if (((uVar3 >> 2 & 1) == 0) || ((uVar3 >> 3 & 1) == 0)) {
        if ((uVar3 & 1) == 0) {
          uVar6 = uVar3 | 8;
          *(short *)(lVar4 + 0x28) = (short)uVar6;
        }
        *(ushort *)(lVar4 + 0x28) = (ushort)uVar6 | 4;
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        if ((uVar6 >> 4 & 1) == 0) {
          if (puVar5 != (undefined8 *)0x0) {
            func_0x00010818ad34(&stack0xffffffffffffffc0);
          }
        }
        else {
          puVar2 = (undefined8 *)puVar5[1];
          for (puVar5 = (undefined8 *)*puVar5; puVar5 != puVar2; puVar5 = puVar5 + 1) {
            func_0x00010818ad34(&stack0xffffffffffffffc0,*puVar5);
          }
        }
      }
    }
    func_0x00010818a9f8(&stack0xffffffffffffffc8);
    return;
  }
  return;
}



/* Entry: 10817b620; end: 10817b623;  */

void FUN_10817b620(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  *param_1 = &PTR_DAT_110a2c208;
  plVar3 = (long *)param_1[7];
  for (plVar2 = (long *)param_1[6]; plVar2 != plVar3; plVar2 = plVar2 + 1) {
    uVar1 = 0;
    if (*plVar2 != 0) {
      do {
        func_0x00010818d5e8();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    uStack_38 = uVar1;
    FUN_10818a6d4(param_1,&uStack_38);
    func_0x00010818d620();
  }
  FUN_10815640c(param_1 + 6);
  FUN_10818a578(param_1);
  return;
}



/* Entry: 10817b624; end: 10817b637;  */

void FUN_10817b624(void)

{
  FUN_10818d420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817b638; end: 10817b707;  */

ulong FUN_10817b638(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [40];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulong auStack_50 [2];
  
  puVar2 = (undefined8 *)(param_5 + 0x4c);
  *puVar2 = 0;
  *(undefined8 *)(param_5 + 0x54) = 0;
  puVar5 = *(undefined8 **)(param_5 + 0x38);
  for (puVar4 = *(undefined8 **)(param_5 + 0x30); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    uVar1 = *puVar4;
    FUN_10818a8b4(uVar1,param_6,param_7);
    func_0x00010838ed50(puVar2,uVar1);
  }
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  for (uVar3 = 0; uVar3 < *(ulong *)(param_5 + 0x60); uVar3 = uVar3 + 1) {
    FUN_10817b8c4(auStack_88,param_5,uVar3);
    func_0x000108142084(auStack_88,puVar2,1);
    uStack_60 = param_1;
    uStack_5c = param_2;
    uStack_58 = param_3;
    uStack_54 = param_4;
    func_0x00010838ed50(auStack_50,&uStack_60);
  }
  return auStack_50[0] & 0xffffffff;
}



/* Entry: 10817b708; end: 10817b8bb;  */

void FUN_10817b708(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_1b8 [40];
  undefined1 auStack_190 [120];
  float fStack_118;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [136];
  long lStack_70;
  int iStack_68;
  
  uVar3 = *(ulong *)(param_1 + 0x60);
  fVar6 = 0.0;
  if (1 < uVar3) {
    fVar6 = (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x70)) / (float)uVar3;
  }
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    uVar1 = uVar4;
    if (*(int *)(param_1 + 0x48) != 1) {
      uVar1 = uVar3 + ~uVar4;
    }
    fVar7 = *(float *)(param_1 + 0x70) + (float)uVar1 * fVar6;
    if (0.0 < fVar7) {
      iStack_68 = 0;
      if (param_2 != 0) {
        iStack_68 = *(int *)(param_2 + 0xc60);
        *(int *)(param_2 + 0xc60) = iStack_68 + 1;
        *(int *)(*(long *)(param_2 + 0xc40) + 0x58) =
             *(int *)(*(long *)(param_2 + 0xc40) + 0x58) + 1;
      }
      lStack_70 = param_2;
      FUN_10817b8c4(auStack_100,param_1);
      FUN_10833e2b0(param_2,auStack_100);
      FUN_10818ccbc(auStack_190,param_2,param_3);
      fStack_118 = fVar7 * fStack_118;
      func_0x00010833b800(auStack_1b8,param_2);
      FUN_10818d01c(auStack_190,param_1 + 0x4c,auStack_1b8,
                    8 < (ulong)(*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)));
      FUN_1081660c4(auStack_100,auStack_190);
      FUN_10818cd40(auStack_190);
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      for (puVar5 = *(undefined8 **)(param_1 + 0x30); puVar5 != puVar2; puVar5 = puVar5 + 1) {
        FUN_10818c910(*puVar5,param_2,auStack_f8);
      }
      FUN_10818cd40(auStack_100);
      FUN_10815b978(&lStack_70);
      uVar3 = *(ulong *)(param_1 + 0x60);
    }
  }
  return;
}



/* Entry: 10817b8bc; end: 10817b8c3;  */

undefined8 FUN_10817b8bc(void)

{
  return 0;
}



/* Entry: 10817b8c4; end: 10817b99f;  */

void FUN_10817b8c4(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auStack_130 [40];
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [40];
  
  fVar3 = *(float *)(param_2 + 0x68) + (float)param_3;
  FUN_10814bdfc(auStack_b8,*(float *)(param_2 + 0x78) + *(float *)(param_2 + 0x80) * fVar3,
                *(float *)(param_2 + 0x7c) + *(float *)(param_2 + 0x84) * fVar3);
  FUN_10815f69c(auStack_e0,fVar3 * *(float *)(param_2 + 0x6c));
  FUN_1081600e0(auStack_90,auStack_b8,auStack_e0);
  uVar1 = (ulong)*(uint *)(param_2 + 0x88);
  _powf(uVar1,fVar3);
  uVar2 = (ulong)*(uint *)(param_2 + 0x8c);
  _powf(uVar2,fVar3);
  func_0x00010815f6c0(auStack_108,uVar1,uVar2);
  FUN_1081600e0(auStack_68,auStack_90,auStack_108);
  FUN_10814bdfc(auStack_130,-*(float *)(param_2 + 0x78),-*(float *)(param_2 + 0x7c));
  FUN_1081600e0(param_1,auStack_68,auStack_130);
  return;
}



/* Entry: 10817b9a0; end: 10817ba13;  */

void FUN_10817b9a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010817b9dc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10817ba14; end: 10817ba47;  */

void FUN_10817ba14(void)

{
  return;
}



/* Entry: 10817ba48; end: 10817bd17;  */

void FUN_10817ba48(undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108179c18(param_1,param_4[1] - *param_4 >> 3);
  plVar2 = (long *)param_4[1];
  for (param_4 = (long *)*param_4; param_4 != plVar2; param_4 = param_4 + 1) {
    lStack_98 = 0;
    plVar5 = (long *)0x40;
    __Znwm();
    plVar9 = (long *)*param_4;
    *param_4 = 0;
    uStack_80 = 0;
    if (plVar9 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
      plStack_78 = (long *)0x0;
    }
    else {
      puVar6 = (undefined8 *)0x50;
      plStack_78 = plVar9;
      __Znwm();
      plStack_78 = (long *)0x0;
      plStack_70 = (long *)0x0;
      plStack_68 = plVar9;
      FUN_10818860c();
      FUN_108159714(&plStack_68);
      *puVar6 = &PTR_FUN_110a2b7f8;
      *(undefined4 *)(puVar6 + 9) = 0;
      FUN_108159714(&plStack_70);
    }
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    *(undefined2 *)(plVar5 + 5) = 0;
    *plVar5 = (long)&PTR_DAT_110a2ae28;
    plStack_68 = (long *)0x0;
    plVar5[6] = (long)puVar6;
    FUN_10817bd18(&plStack_68);
    FUN_108159714(&plStack_78);
    *plVar5 = (long)&PTR_FUN_110a2adc0;
    *(undefined4 *)(plVar5 + 7) = 0;
    uVar7 = param_2;
    FUN_108154b58(param_2,"r");
    FUN_108154e4c();
    FUN_108161330(plVar5,param_3,uVar7,plVar5 + 7);
    plStack_88 = plVar5;
    FUN_108159714(&uStack_80);
    FUN_10816040c(plVar5 + 2);
    lVar8 = plVar5[6];
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_98 = lVar8;
    FUN_10817bd44(0);
    plStack_88 = (long *)0x0;
    if ((plVar5[2] == plVar5[3]) && ((*(byte *)((long)plVar5 + 0x29) & 1) == 0)) {
      plStack_70 = plVar5;
      (**(code **)(*plVar5 + 0x18))(0,plVar5);
    }
    else {
      plStack_70 = (long *)0x0;
      plStack_68 = plVar5;
      FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_68);
      FUN_108155920(&plStack_68);
    }
    FUN_10817bd70(&plStack_70);
    FUN_10817bd70(&plStack_88);
    lStack_98 = 0;
    lStack_90 = lVar8;
    func_0x0001081794bc(param_1,&lStack_90);
    FUN_108159714(&lStack_90);
    FUN_10817bd18(&lStack_98);
  }
  return;
}



/* Entry: 10817bd18; end: 10817bd43;  */

undefined8 * FUN_10817bd18(undefined8 *param_1)

{
  FUN_10817bd44(*param_1);
  return param_1;
}



/* Entry: 10817bd44; end: 10817bd6f;  */

void FUN_10817bd44(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010817bd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10817bd70; end: 10817bdbf;  */

long * FUN_10817bd70(long *param_1)

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



/* Entry: 10817bdc0; end: 10817bdef;  */

undefined8 * FUN_10817bdc0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2ae28;
  FUN_10817bd18(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817bdf0; end: 10817bdf3;  */

undefined8 * FUN_10817bdf0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2ae28;
  FUN_10817bd18(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817bdf4; end: 10817be07;  */

void FUN_10817bdf4(void)

{
  FUN_10817bdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817be08; end: 10817be2f;  */

void FUN_10817be08(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(float *)(lVar3 + 0x48) != *(float *)(param_1 + 0x38)) {
    *(float *)(lVar3 + 0x48) = *(float *)(param_1 + 0x38);
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(lVar3 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(lVar3 + 0x28) = (short)uVar5;
          uStack_21 = 0;
        }
        *(ushort *)(lVar3 + 0x28) = (ushort)uVar5 | 4;
        puStack_40 = &uStack_21;
        puVar4 = *(undefined8 **)(lVar3 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10817be30; end: 10817be7f;  */

void FUN_10817be30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_108154b58(param_2,&DAT_10f47d024);
  FUN_108159b78(&uStack_28,param_3,param_2);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  FUN_108159010(&uStack_28);
  return;
}



/* Entry: 10817be80; end: 10817cc43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10817be80(undefined8 *param_1,long param_2,ulong *param_3,undefined8 *param_4,
                  ushort param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  long *******ppppppplVar10;
  ulong uVar11;
  long ******extraout_x8;
  undefined8 extraout_x8_00;
  long *******extraout_x8_01;
  long *******ppppppplVar12;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long *******ppppppplVar13;
  ulong uVar14;
  long ******pppppplVar15;
  ulong uVar16;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *******ppppppplVar23;
  long *plVar24;
  ulong uVar25;
  long *******ppppppplVar26;
  undefined *puVar27;
  long *******ppppppplVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  ulong *puStack_1d8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  long ******pppppplStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long ******pppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******appppppplStack_70 [2];
  
  if (param_3 == (ulong *)0x0) {
    *param_1 = 0;
    return;
  }
  lVar17 = 0;
  puVar29 = (undefined8 *)0x0;
  puVar20 = (undefined8 *)0x0;
  uVar25 = 0;
  puStack_1d8 = (ulong *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  puStack_a8 = (undefined8 *)0x0;
LAB_10817bed8:
  uVar14 = *(ulong *)(*param_3 & 0xfffffffffffffff8);
  if (uVar14 <= uVar25) goto LAB_10817c178;
  puVar5 = (ulong *)((long)(*param_3 & 0xfffffffffffffff8) + lVar17 + uVar14 * 8);
  FUN_108154e4c();
  if (puVar5 != (ulong *)0x0) {
    puVar6 = puVar5;
    func_0x00010817d164();
    FUN_108158a5c();
    if (puVar6 != (ulong *)0x0) {
      if ((*puVar6 & 7) == 0) {
        pbVar7 = (byte *)((long)puVar6 + 1);
      }
      else {
        pbVar7 = (byte *)((*puVar6 & 0xfffffffffffffff8) + 8);
      }
      _bsearch(pbVar7,&PTR_DAT_110a2aed8,0x10,0x10,0x10817cee4);
      if (pbVar7 != (byte *)0x0) {
        puVar6 = puVar5;
        FUN_108154b58(puVar5,&DAT_10f47d0b8);
        ppppppplStack_a0 = (long *******)((ulong)ppppppplStack_a0 & 0xffffffffffffff00);
        FUN_108158ab4();
        if (((ulong)puVar6 & 1) != 0) goto LAB_10817bfac;
        bVar1 = (byte)param_5 & 1;
        if (puVar29 < puStack_a8) {
          *puVar29 = puVar5;
          puVar29[1] = pbVar7;
          *(byte *)(puVar29 + 2) = bVar1;
          puVar29 = puVar29 + 3;
          puVar22 = puVar20;
        }
        else {
          lVar30 = (long)puVar29 - (long)puVar20;
          uVar14 = lVar30 / 0x18 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar14) {
            puStack_b8 = puVar20;
            func_0x00010817cf80();
            goto LAB_10817ca18;
          }
          uVar11 = ((long)puStack_a8 - (long)puVar20) / 0x18;
          uVar16 = uVar11 * 2;
          if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
            uVar16 = uVar14;
          }
          if (0x555555555555554 < uVar11) {
            uVar16 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar16) {
            puStack_b8 = puVar20;
            func_0x000104bd35f4();
            goto LAB_10817ca18;
          }
          lVar31 = uVar16 * 0x18;
          __Znwm();
          puVar22 = (undefined8 *)(lVar31 + lVar30);
          puVar21 = (undefined8 *)(lVar31 + uVar16 * 0x18);
          *puVar22 = puVar5;
          puVar22[1] = pbVar7;
          *(byte *)(puVar22 + 2) = bVar1;
          puVar29 = puVar22 + 3;
          puVar22 = puVar22 + (lVar30 / -0x18) * 3;
          _memcpy(puVar22,puVar20,lVar30);
          puStack_a8 = puVar21;
          if (puVar20 != (undefined8 *)0x0) {
            puStack_b0 = puVar29;
            __ZdlPv(puVar20);
          }
        }
        param_5 = (*(ushort *)(pbVar7 + 0xe) | param_5) & 1;
        puVar20 = puVar22;
        puStack_b0 = puVar29;
        if (*(int *)(pbVar7 + 8) == 1) {
          plVar24 = (long *)param_4[1];
          puVar27 = (&PTR_FUN_110a2ae50)[*(ushort *)(pbVar7 + 0xc)];
          puVar21 = (undefined8 *)plVar24[1];
          if (puVar21 < (undefined8 *)plVar24[2]) {
            *puVar21 = puVar5;
            puVar21[1] = puVar27;
            puVar21 = puVar21 + 2;
          }
          else {
            lVar30 = *plVar24;
            lVar31 = (long)puVar21 - lVar30;
            uVar14 = (lVar31 >> 4) + 1;
            if (uVar14 >> 0x3c != 0) {
              puStack_b8 = puVar22;
              func_0x00010817cf8c();
              goto LAB_10817ca18;
            }
            uVar11 = plVar24[2] - lVar30;
            uVar16 = (long)uVar11 >> 3;
            if (uVar16 <= uVar14) {
              uVar16 = uVar14;
            }
            if (0x7fffffffffffffef < uVar11) {
              uVar16 = 0xfffffffffffffff;
            }
            if (uVar16 >> 0x3c != 0) {
              puStack_b8 = puVar22;
              func_0x000104bd35f4();
              goto LAB_10817ca18;
            }
            lVar8 = uVar16 << 4;
            __Znwm();
            puVar22 = (undefined8 *)(lVar8 + lVar31);
            *puVar22 = puVar5;
            puVar22[1] = puVar27;
            puVar21 = puVar22 + 2;
            _memcpy(puVar22 + (lVar31 >> 4) * -2,lVar30,lVar31);
            *plVar24 = (long)(puVar22 + (lVar31 >> 4) * -2);
            plVar24[1] = (long)puVar21;
            plVar24[2] = lVar8 + uVar16 * 0x10;
            if (lVar30 != 0) {
              __ZdlPv(lVar30);
            }
          }
          plVar24[1] = (long)puVar21;
        }
        else if (*(int *)(pbVar7 + 8) == 4) {
          puStack_1d8 = puVar5;
        }
        goto LAB_10817bfac;
      }
    }
    uVar19 = 0;
    func_0x00010817d164();
    FUN_108159fb8(param_2,1,uVar19,&UNK_10f47d964);
  }
LAB_10817bfac:
  uVar25 = uVar25 + 1;
  lVar17 = lVar17 + -8;
  goto LAB_10817bed8;
LAB_10817c178:
  uStack_c0 = 0;
  ppppppplStack_d0 = (long *******)0x0;
  ppppppplStack_c8 = (long *******)0x0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  puStack_b8 = puVar20;
  while (puVar29 != puVar20) {
    puVar22 = puVar29 + -3;
    FUN_1081589bc(&ppppppplStack_178,param_2,*puVar22,3);
    lVar17 = puVar29[-2];
    switch(*(undefined4 *)(lVar17 + 8)) {
    case 0:
      (*(code *)(&PTR_FUN_110a2ae78)[*(ushort *)(lVar17 + 0xc)])(&ppppppplStack_a0,*puVar22,param_2)
      ;
      if (ppppppplStack_a0 != (long *******)0x0) {
        func_0x0001081794bc(&ppppppplStack_d0,&ppppppplStack_a0);
      }
      func_0x00010817d124();
      break;
    case 1:
      if (ppppppplStack_d0 != ppppppplStack_c8) {
        (*(code *)(&PTR_FUN_110a2ae50)[*(ushort *)(lVar17 + 0xc)])
                  (&ppppppplStack_a0,*puVar22,param_2,&ppppppplStack_d0);
        func_0x00010817cf98(&ppppppplStack_d0,&ppppppplStack_a0);
        func_0x00010817d184();
      }
      *(long *)(param_4[1] + 8) = *(long *)(param_4[1] + 8) + -0x10;
      break;
    case 2:
      (*(code *)(&PTR_FUN_110a2ae98)[*(ushort *)(lVar17 + 0xc)])
                (&ppppppplStack_100,*puVar22,param_2);
      ppppppplVar23 = ppppppplStack_c8;
      ppppppplVar12 = ppppppplStack_d0;
      if (((ppppppplStack_100 != (long *******)0x0) && (ppppppplStack_d0 != ppppppplStack_c8)) &&
         ((*(byte *)(puVar29 + -1) & 1) == 0)) {
        ppppppplStack_118 = (long *******)0x0;
        ppppppplStack_110 = (long *******)0x0;
        ppppppplStack_108 = (long *******)0x0;
        uVar25 = (long)ppppppplStack_c8 - (long)ppppppplStack_d0 >> 3;
        ppppppplStack_1b0 = (long *******)&ppppppplStack_118;
        puStack_1a8 = (undefined8 *)((ulong)puStack_1a8 & 0xffffffffffffff00);
        if (uVar25 >> 0x3d != 0) {
          FUN_108179674();
LAB_10817ca18:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10817ca1c);
          (*pcVar4)();
        }
        ppppppplVar26 = (long *******)&ppppppplStack_108;
        FUN_108179688();
        ppppppplStack_108 = ppppppplVar26 + uVar25;
        ppppppplStack_98 = (long *******)&ppppppplStack_78;
        ppppppplStack_90 = (long *******)appppppplStack_70;
        ppppppplStack_118 = ppppppplVar26;
        ppppppplStack_110 = ppppppplVar26;
        ppppppplStack_a0 = (long *******)&ppppppplStack_108;
        ppppppplStack_78 = ppppppplVar26;
        for (; appppppplStack_70[0] = ppppppplVar26, ppppppplVar12 != ppppppplVar23;
            ppppppplVar12 = ppppppplVar12 + 1) {
          pppppplVar15 = (long ******)0x0;
          if (*ppppppplVar12 != (long ******)0x0) {
            do {
              func_0x00010817d174();
              pppppplVar15 = extraout_x8;
            } while (extraout_w11 != 0);
          }
          *ppppppplVar26 = pppppplVar15;
          ppppppplVar26 = ppppppplVar26 + 1;
        }
        ppppppplStack_88 = (long *******)CONCAT71(ppppppplStack_88._1_7_,1);
        FUN_10817978c(&ppppppplStack_a0);
        puStack_1a8 = (undefined8 *)CONCAT71(puStack_1a8._1_7_,1);
        ppppppplStack_110 = ppppppplVar26;
        func_0x00010817d00c(&ppppppplStack_1b0);
        puVar21 = (undefined8 *)param_4[1];
        puVar18 = (undefined8 *)puVar21[1];
        while (puVar18 != (undefined8 *)*puVar21) {
          puVar18 = puVar18 + -2;
          func_0x00010817d148(*puVar18);
          func_0x00010817d18c();
          func_0x00010817d184();
          puVar21 = (undefined8 *)param_4[1];
        }
        if ((*(ushort *)(puVar29[-2] + 0xc) & 0xfffd) != 0) {
          func_0x00010817d148(*puVar22);
          func_0x00010817d18c();
          func_0x00010817d184();
        }
        if ((ulong)((long)ppppppplStack_110 - (long)ppppppplStack_118) < 9) {
          ppppppplVar12 = (long *******)0x0;
          if (*ppppppplStack_118 != (long ******)0x0) {
            do {
              func_0x00010817d174();
              ppppppplVar12 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
        }
        else {
          FUN_108179294(&ppppppplStack_1b0,&ppppppplStack_118,0);
          ppppppplStack_a0 = ppppppplStack_1b0;
          ppppppplStack_1b0 = (long *******)0x0;
          FUN_108159460(&ppppppplStack_1b0);
          ppppppplVar12 = ppppppplStack_a0;
        }
        pppppplStack_130 = (long ******)ppppppplStack_100;
        ppppppplStack_a0 = (long *******)0x0;
        ppppppplStack_100 = (long *******)0x0;
        ppppppplStack_128 = ppppppplVar12;
        FUN_108159540(&ppppppplStack_1b0,&ppppppplStack_128,&pppppplStack_130);
        ppppppplStack_120 = ppppppplStack_1b0;
        ppppppplStack_1b0 = (long *******)0x0;
        FUN_10817cc44(param_2,&lStack_f0,&ppppppplStack_120,*puVar22);
        FUN_108154cb4(&ppppppplStack_120);
        FUN_1081595c0(&ppppppplStack_1b0);
        FUN_108158f90(&pppppplStack_130);
        FUN_108159714(&ppppppplStack_128);
        func_0x00010817d1c4();
        param_4[2] = extraout_x8_02;
        func_0x00010817d124();
        FUN_10817940c(&ppppppplStack_118);
      }
      FUN_108158f90(&ppppppplStack_100);
      break;
    case 3:
      ppppppplStack_98 = (long *******)param_4[1];
      ppppppplStack_90 = (long *******)param_4[2];
      uVar19 = *puVar22;
      ppppppplStack_a0 = (long *******)&ppppppplStack_d0;
      FUN_108154b58(uVar19,&DAT_10f2f5ad9);
      FUN_108155f00();
      FUN_10817be80(&ppppppplStack_118,param_2,uVar19,&ppppppplStack_a0,
                    *(undefined1 *)(puVar29 + -1));
      ppppppplVar12 = ppppppplStack_118;
      if (ppppppplStack_118 != (long *******)0x0) {
        ppppppplStack_118 = (long *******)0x0;
        ppppppplStack_f8 = ppppppplVar12;
        FUN_10817cc44(param_2,&lStack_f0,&ppppppplStack_f8,*puVar22);
        FUN_108154cb4(&ppppppplStack_f8);
        param_4[2] = ppppppplStack_90;
      }
      FUN_108154cb4(&ppppppplStack_118);
      break;
    case 5:
      if (lStack_f0 != lStack_e8) {
        FUN_10817afa8(&ppppppplStack_a0,*puVar22,param_2,&lStack_f0);
        FUN_10817b9a0(&lStack_f0,&ppppppplStack_a0);
        FUN_10815640c(&ppppppplStack_a0);
        func_0x00010817d1c4();
        param_4[2] = extraout_x8_00;
      }
    }
    FUN_108158a14(&ppppppplStack_178);
    puVar29 = puVar22;
  }
  *param_1 = 0;
  if (lStack_e8 - lStack_f0 == 8) {
    FUN_108159f7c(param_1);
  }
  else if (lStack_f0 != lStack_e8) {
    FUN_108156fc0(lStack_f0,lStack_e8);
    FUN_108156254(&lStack_f0);
    lStack_148 = lStack_e8;
    lStack_150 = lStack_f0;
    uStack_140 = uStack_e0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    uStack_e0 = 0;
    FUN_1081562f4(&ppppppplStack_a0,&lStack_150);
    ppppppplStack_a0 = (long *******)0x0;
    func_0x00010817d1b0();
    FUN_1081564a4(&ppppppplStack_a0);
    FUN_10815640c(&lStack_150);
  }
  ppppppplStack_100 = (long *******)0x0;
  ppppppplVar23 = ppppppplStack_d0;
  ppppppplVar12 = ppppppplStack_c8;
  if (puStack_1d8 == (ulong *)0x0) goto LAB_10817c8d0;
  FUN_1081589bc(&ppppppplStack_118,param_2,puStack_1d8,3);
  FUN_10815a2f0(&ppppppplStack_178,param_2);
  uStack_180 = 0;
  FUN_10815f6f8(&ppppppplStack_a0,param_2,puStack_1d8,&uStack_180,0);
  ppppppplVar23 = ppppppplStack_a0;
  ppppppplVar12 = ppppppplStack_100;
  ppppppplStack_a0 = (long *******)0x0;
  ppppppplStack_100 = ppppppplVar23;
  func_0x00010817ceec(ppppppplVar12);
  ppppppplVar12 = ppppppplStack_100;
  FUN_108155404(&ppppppplStack_a0);
  FUN_108155404(&uStack_180);
  if (ppppppplVar12 != (long *******)0x0) {
    uStack_188 = *param_1;
    *param_1 = 0;
    uStack_190 = 0;
    if (ppppppplStack_100 != (long *******)0x0) {
      do {
        func_0x00010817d174();
        uStack_190 = extraout_x8_03;
      } while (extraout_w11_01 != 0);
    }
    FUN_108158594(&ppppppplStack_a0,&uStack_188,&uStack_190);
    ppppppplStack_a0 = (long *******)0x0;
    func_0x00010817d1b0();
    FUN_1081596a8(&ppppppplStack_a0);
    FUN_108155404(&uStack_190);
    FUN_108154cb4(&uStack_188);
  }
  uStack_198 = *param_1;
  *param_1 = 0;
  FUN_10815a0b8(&ppppppplStack_a0,param_2,puStack_1d8,&uStack_198);
  ppppppplStack_a0 = (long *******)0x0;
  func_0x00010817d1b0();
  FUN_108154cb4(&ppppppplStack_a0);
  FUN_108154cb4(&uStack_198);
  puVar29 = puStack_168;
  ppppppplVar12 = ppppppplStack_170;
  ppppppplStack_178[0xe] = pppppplStack_158;
  ppppppplStack_1b0 = ppppppplStack_170;
  uStack_1a0 = uStack_160;
  puStack_1a8 = puStack_168;
  ppppppplStack_170 = (long *******)0x0;
  puStack_168 = (undefined8 *)0x0;
  uStack_160 = 0;
  lVar17 = (long)puVar29 - (long)ppppppplVar12;
  lVar30 = lVar17 >> 3;
  if (0 < lVar30) {
    plVar24 = *(long **)(param_2 + 0x70);
    lVar31 = *plVar24 + param_4[2] * 8;
    ppppppplVar23 = (long *******)(plVar24 + 2);
    ppppppplVar26 = (long *******)plVar24[1];
    if ((long)*ppppppplVar23 - (long)ppppppplVar26 < lVar17) {
      plVar9 = plVar24;
      FUN_108155668(plVar24,lVar30 + ((long)ppppppplVar26 - *plVar24 >> 3));
      lVar8 = *plVar24;
      ppppppplStack_80 = ppppppplVar23;
      if (plVar9 == (long *)0x0) {
        ppppppplVar26 = (long *******)0x0;
      }
      else {
        ppppppplVar26 = ppppppplVar23;
        FUN_108155734();
      }
      puVar29 = (undefined8 *)((long)ppppppplVar26 + (lVar31 - lVar8));
      ppppppplStack_88 = ppppppplVar26 + (long)plVar9;
      lVar8 = (long)puVar29 + lVar17;
      puVar20 = puVar29;
      for (; lVar17 != 0; lVar17 = lVar17 + -8) {
        pppppplVar15 = *ppppppplVar12;
        *ppppppplVar12 = (long ******)0x0;
        *puVar20 = pppppplVar15;
        puVar20 = puVar20 + 1;
        ppppppplVar12 = ppppppplVar12 + 1;
      }
      ppppppplStack_a0 = ppppppplVar26;
      ppppppplStack_98 = (long *******)puVar29;
      ppppppplStack_90 = (long *******)lVar8;
      FUN_108155774(ppppppplVar23,lVar31,plVar24[1],lVar8);
      ppppppplStack_90 = (long *******)(lVar8 + (plVar24[1] - lVar31));
      plVar24[1] = lVar31;
      lVar17 = (long)puVar29 + (*plVar24 - lVar31);
      FUN_108155774(ppppppplVar23,*plVar24,lVar31,lVar17);
      ppppppplStack_a0 = (long *******)*plVar24;
      *plVar24 = lVar17;
      plVar24[1] = (long)ppppppplStack_90;
      lVar17 = plVar24[2];
      plVar24[2] = (long)ppppppplStack_88;
      ppppppplStack_98 = ppppppplStack_a0;
      ppppppplStack_90 = ppppppplStack_a0;
      ppppppplStack_88 = (long *******)lVar17;
      func_0x0001081558b4(&ppppppplStack_a0);
    }
    else {
      lVar17 = (long)ppppppplVar26 - lVar31 >> 3;
      if (lVar17 < lVar30) {
        ppppppplStack_98 = (long *******)&ppppppplStack_78;
        ppppppplStack_90 = (long *******)appppppplStack_70;
        ppppppplVar13 = ppppppplVar26;
        for (puVar20 = (undefined8 *)((long)ppppppplVar12 + ((long)ppppppplVar26 - lVar31));
            puVar20 != puVar29; puVar20 = puVar20 + 1) {
          pppppplVar15 = (long ******)*puVar20;
          *puVar20 = 0;
          *ppppppplVar13 = pppppplVar15;
          ppppppplVar13 = ppppppplVar13 + 1;
        }
        ppppppplStack_88 = (long *******)CONCAT71(ppppppplStack_88._1_7_,1);
        ppppppplStack_a0 = ppppppplVar23;
        ppppppplStack_78 = ppppppplVar26;
        appppppplStack_70[0] = ppppppplVar13;
        FUN_108155834(&ppppppplStack_a0);
        plVar24[1] = (long)ppppppplVar13;
        if (lVar17 < 1) goto LAB_10817c8a4;
        func_0x00010817d134();
      }
      else {
        func_0x00010817d134();
        lVar17 = lVar30;
      }
      FUN_10817d0d8(ppppppplVar12,lVar17,lVar31);
    }
  }
LAB_10817c8a4:
  param_4[2] = param_4[2] + lVar30;
  FUN_1081596e8(&ppppppplStack_1b0);
  FUN_1081596e8(&ppppppplStack_170);
  FUN_108158a14(&ppppppplStack_118);
  ppppppplVar23 = ppppppplStack_d0;
  ppppppplVar12 = ppppppplStack_c8;
LAB_10817c8d0:
  for (; ppppppplVar26 = ppppppplStack_100, ppppppplVar23 != ppppppplVar12;
      ppppppplVar23 = ppppppplVar23 + 1) {
    uVar19 = *param_4;
    if (ppppppplStack_100 == (long *******)0x0) {
      ppppppplVar10 = (long *******)*ppppppplVar23;
      ppppppplVar13 = ppppppplVar23;
    }
    else {
      ppppppplVar28 = (long *******)*ppppppplVar23;
      *ppppppplVar23 = (long ******)0x0;
      ppppppplVar13 = ppppppplStack_100 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppplVar13,0x10);
        if (bVar3) {
          *(int *)ppppppplVar13 = *(int *)ppppppplVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      ppppppplStack_1c0 = ppppppplStack_100;
      if (ppppppplVar28 == (long *******)0x0) {
        ppppppplVar10 = (long *******)0x0;
        ppppppplStack_1b0 = (long *******)0x0;
        ppppppplStack_1b8 = (long *******)0x0;
      }
      else {
        ppppppplVar10 = (long *******)0x50;
        ppppppplStack_1b8 = ppppppplVar28;
        __Znwm();
        ppppppplStack_1c0 = (long *******)0x0;
        ppppppplStack_1b8 = (long *******)0x0;
        ppppppplStack_178 = ppppppplVar26;
        ppppppplStack_a0 = ppppppplVar28;
        FUN_10818885c();
        ppppppplStack_1b0 = ppppppplVar10;
        FUN_108155404(&ppppppplStack_178);
        func_0x00010817d124();
      }
      ppppppplVar13 = (long *******)&ppppppplStack_1b0;
    }
    *ppppppplVar13 = (long ******)0x0;
    ppppppplStack_118 = ppppppplVar10;
    func_0x0001081794bc(uVar19,&ppppppplStack_118);
    FUN_108159714(&ppppppplStack_118);
    if (ppppppplVar26 != (long *******)0x0) {
      FUN_10817cf34(&ppppppplStack_1b0);
      FUN_108155404(&ppppppplStack_1c0);
      FUN_108159714(&ppppppplStack_1b8);
    }
  }
  FUN_108155404(&ppppppplStack_100);
  FUN_10815640c(&lStack_f0);
  FUN_10817940c(&ppppppplStack_d0);
  FUN_10817ccbc(&puStack_b8);
  return;
}



/* Entry: 10817cc44; end: 10817ccbb;  */

void FUN_10817cc44(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  uStack_30 = *param_3;
  *param_3 = 0;
  FUN_108154898(auStack_28,param_1,param_4,&uStack_30);
  func_0x000108156e9c(param_2,auStack_28);
  FUN_108154cb4(auStack_28);
  FUN_108154cb4(&uStack_30);
  return;
}



/* Entry: 10817ccbc; end: 10817cce7;  */

long * FUN_10817ccbc(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10817cce8; end: 10817ceb7;  */

void FUN_10817cce8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
  long *plStack_58;
  
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = (*(long **)(param_2 + 0x70))[1] - **(long **)(param_2 + 0x70) >> 3;
  puStack_c0 = &uStack_90;
  puStack_b8 = &uStack_a8;
  FUN_108154b58(param_3,&UNK_10f47d973);
  FUN_108155f00();
  FUN_10817be80(param_1,param_2,param_3,&puStack_c0,0);
  uVar4 = uStack_b0;
  plVar8 = *(long **)(param_2 + 0x70);
  puVar1 = (undefined8 *)plVar8[1];
  uVar9 = (long)puVar1 - *plVar8 >> 3;
  if (uVar9 < uStack_b0) {
    uVar10 = uStack_b0 - uVar9;
    plVar6 = plVar8 + 2;
    if ((ulong)(*plVar6 - (long)puVar1 >> 3) < uVar10) {
      plVar5 = plVar8;
      FUN_108155668(plVar8,uStack_b0);
      lVar7 = *plVar8;
      lVar2 = plVar8[1];
      plStack_58 = plVar6;
      if (plVar5 == (long *)0x0) {
        plStack_78 = (long *)0x0;
      }
      else {
        FUN_108155734();
        plStack_78 = plVar6;
      }
      puStack_70 = (undefined8 *)((long)plStack_78 + (lVar2 - lVar7));
      plStack_60 = plStack_78 + (long)plVar5;
      puStack_68 = puStack_70 + uVar10;
      puVar1 = puStack_70;
      for (lVar7 = uVar4 * 8 + uVar9 * -8; lVar7 != 0; lVar7 = lVar7 + -8) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      FUN_1081556a8(plVar8,&plStack_78);
      func_0x0001081558b4(&plStack_78);
    }
    else {
      puVar3 = puVar1;
      for (lVar7 = uStack_b0 * 8 + uVar9 * -8; lVar7 != 0; lVar7 = lVar7 + -8) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      plVar8[1] = (long)(puVar1 + uVar10);
    }
  }
  else if (uStack_b0 < uVar9) {
    FUN_108156a28(plVar8,*plVar8 + uStack_b0 * 8);
  }
  FUN_10817ceb8(&uStack_a8);
  FUN_10817940c(&uStack_90);
  return;
}



/* Entry: 10817ceb8; end: 10817cee3;  */

long * FUN_10817ceb8(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10817cee4; end: 10817cf33;  */

void FUN_10817cee4(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(param_1,*param_2);
  return;
}



/* Entry: 10817cf34; end: 10817cf7f;  */

long * FUN_10817cf34(long *param_1)

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



/* Entry: 10817cf80; end: 10817cf97;  */

void FUN_10817cf80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010817d1b8();
  func_0x00010817d1b8();
  func_0x00010817cfd4();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10817cf98; end: 10817d0d7;  */

void FUN_10817cf98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x00010817cfd4();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10817d0d8; end: 10817d123;  */

void FUN_10817d0d8(long param_1,long param_2,long param_3)

{
  for (param_2 = param_2 << 3; param_2 != 0; param_2 = param_2 + -8) {
    func_0x00010817d0a8(param_3,param_1);
    param_1 = param_1 + 8;
    param_3 = param_3 + 8;
  }
  return;
}



/* Entry: 10817d124; end: 10817d1d7;  */

void FUN_10817d124(void)

{
  long unaff_x29;
  
  func_0x000108159988(unaff_x29 + -0x90);
  func_0x000108159060();
  return;
}



/* Entry: 10817d1d8; end: 10817d5bb;  */

void FUN_10817d1d8(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  
  lVar10 = param_2;
  FUN_108154b58(param_2,&DAT_10f321b20);
  puStack_b8 = (undefined8 *)0x1;
  FUN_108154b1c();
  puStack_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  if (lVar10 == 1) {
    FUN_10817cf98(&puStack_b8,param_4);
  }
  else {
    FUN_108179294(&plStack_80,param_4,0);
    plStack_78 = plStack_80;
    plStack_80 = (long *)0x0;
    func_0x0001081794bc(&puStack_b8,&plStack_78);
    FUN_10817d7b8();
    FUN_108159460(&plStack_80);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_108179c18(param_1,(long)puStack_b0 - (long)puStack_b8 >> 3);
  puVar5 = puStack_b0;
  for (puVar8 = puStack_b8; puVar8 != puVar5; puVar8 = puVar8 + 1) {
    lStack_c8 = 0;
    plVar6 = (long *)0x48;
    __Znwm();
    plVar9 = (long *)*puVar8;
    if (plVar9 == (long *)0x0) {
      puVar7 = (undefined8 *)0x0;
      uStack_98 = 0;
      plStack_90 = (long *)0x0;
    }
    else {
      plVar1 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uStack_98 = 0;
      puVar7 = (undefined8 *)0x58;
      plStack_90 = plVar9;
      __Znwm();
      plStack_90 = (long *)0x0;
      plStack_80 = (long *)0x0;
      plStack_78 = plVar9;
      FUN_10818860c();
      FUN_10817d7b8();
      *puVar7 = &PTR_FUN_110a2b700;
      puVar7[9] = 0x3f80000000000000;
      *(undefined4 *)(puVar7 + 10) = 0;
      FUN_108159714(&plStack_80);
    }
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    *(undefined2 *)(plVar6 + 5) = 0;
    *plVar6 = (long)&PTR_DAT_110a2b050;
    uStack_88 = 0;
    plVar6[6] = (long)puVar7;
    FUN_10817d5bc(&uStack_88);
    FUN_108159714(&plStack_90);
    *plVar6 = (long)&PTR_FUN_110a2afe8;
    plVar6[7] = 0x42c8000000000000;
    *(undefined4 *)(plVar6 + 8) = 0;
    lVar10 = param_2;
    FUN_108154b58(param_2,"s");
    FUN_108154e4c();
    FUN_108161330(plVar6,param_3,lVar10,plVar6 + 7);
    lVar10 = param_2;
    FUN_108154b58(param_2,&DAT_10f3dc182);
    FUN_108154e4c();
    FUN_108161330(plVar6,param_3,lVar10,(long)plVar6 + 0x3c);
    lVar10 = param_2;
    FUN_108154b58(param_2,&DAT_10f3dc193);
    FUN_108154e4c();
    FUN_108161330(plVar6,param_3,lVar10,plVar6 + 8);
    plStack_a0 = plVar6;
    FUN_108159714(&uStack_98);
    FUN_10816040c(plVar6 + 2);
    lVar10 = plVar6[6];
    if (lVar10 != 0) {
      piVar2 = (int *)(lVar10 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_c8 = lVar10;
    FUN_10817d5e8(0);
    plStack_a0 = (long *)0x0;
    if ((plVar6[2] == plVar6[3]) && ((*(byte *)((long)plVar6 + 0x29) & 1) == 0)) {
      plStack_80 = plVar6;
      (**(code **)(*plVar6 + 0x18))(0,plVar6);
    }
    else {
      plStack_80 = (long *)0x0;
      plStack_78 = plVar6;
      FUN_108155570(*(undefined8 *)(param_3 + 0x70),&plStack_78);
      FUN_108155920(&plStack_78);
    }
    FUN_10817d614(&plStack_80);
    FUN_10817d614(&plStack_a0);
    lStack_c8 = 0;
    lStack_c0 = lVar10;
    func_0x0001081794bc(param_1,&lStack_c0);
    FUN_108159714(&lStack_c0);
    FUN_10817d5bc(&lStack_c8);
  }
  FUN_10817940c(&puStack_b8);
  return;
}



/* Entry: 10817d5bc; end: 10817d5e7;  */

undefined8 * FUN_10817d5bc(undefined8 *param_1)

{
  FUN_10817d5e8(*param_1);
  return param_1;
}



/* Entry: 10817d5e8; end: 10817d613;  */

void FUN_10817d5e8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010817d60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10817d614; end: 10817d663;  */

long * FUN_10817d614(long *param_1)

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



/* Entry: 10817d664; end: 10817d693;  */

undefined8 * FUN_10817d664(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2b050;
  FUN_10817d5bc(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817d694; end: 10817d697;  */

undefined8 * FUN_10817d694(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a2b050;
  FUN_10817d5bc(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10817d698; end: 10817d6ab;  */

void FUN_10817d698(void)

{
  FUN_10817d664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10817d6ac; end: 10817d7b7;  */

void FUN_10817d6ac(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong unaff_d9;
  undefined1 *puStack_40;
  undefined1 auStack_38 [8];
  
  fVar8 = (float)*(undefined8 *)(param_1 + 0x38) / 100.0;
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) / 100.0;
  fVar10 = *(float *)(param_1 + 0x40) / 360.0;
  fVar7 = fVar9;
  if (fVar8 <= fVar9) {
    fVar7 = fVar8;
  }
  fVar7 = fVar10 + fVar7;
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar10 = fVar10 + fVar9;
  fVar9 = 1.0;
  if (1.0 <= fVar10 - fVar7) {
    iVar6 = 0;
    fVar7 = 0.0;
  }
  else {
    fVar7 = fVar7 - (float)(int)fVar7;
    fVar10 = fVar10 - (float)(int)fVar10;
    if (fVar7 <= fVar10) {
      iVar6 = 0;
      fVar9 = fVar10;
    }
    else {
      iVar6 = 1;
      fVar9 = fVar7;
      fVar7 = fVar10;
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(float *)(lVar3 + 0x48) != fVar7) {
    *(float *)(lVar3 + 0x48) = fVar7;
    FUN_10818a7f4(lVar3,1);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  if (*(float *)(lVar3 + 0x4c) != fVar9) {
    *(float *)(lVar3 + 0x4c) = fVar9;
    FUN_10818a7f4(lVar3,1);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  if (*(int *)(lVar3 + 0x50) != iVar6) {
    *(int *)(lVar3 + 0x50) = iVar6;
    func_0x00010818add8(auStack_38);
    if ((unaff_d9 & 0x100000000) == 0) {
      uVar2 = *(ushort *)(lVar3 + 0x28);
      uVar5 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 | 8;
          *(short *)(lVar3 + 0x28) = (short)uVar5;
        }
        *(ushort *)(lVar3 + 0x28) = (ushort)uVar5 | 4;
        puStack_40 = &stack0xffffffffffffffdf;
        puVar4 = *(undefined8 **)(lVar3 + 0x10);
        if ((uVar5 >> 4 & 1) == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar4[1];
          for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar4);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10817d7b8; end: 10817d7bf;  */

void FUN_10817d7b8(void)

{
  func_0x000108159988(&stack0x00000058);
  func_0x000108159060();
  return;
}



/* Entry: 10817d7c0; end: 10817dd83;  */

undefined8 FUN_10817d7c0(float param_1,int *param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  byte *pbVar8;
  byte **ppbVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long *plVar12;
  byte *pbVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  undefined8 uStack_118;
  undefined8 uStack_108;
  long lStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  puVar6 = param_4;
  FUN_108154b58(param_4,&UNK_10f47d5e5);
  FUN_108158a5c();
  puVar7 = param_4;
  FUN_108154b58(param_4,"data");
  FUN_108154e4c();
  if ((puVar6 != (ulong *)0x0) && (puVar7 != (ulong *)0x0)) {
    if ((*puVar6 & 7) == 0) {
      pbVar13 = (byte *)((long)puVar6 + 1);
    }
    else {
      pbVar13 = (byte *)((*puVar6 & 0xfffffffffffffff8) + 8);
    }
    pbStack_f8 = pbVar13;
    FUN_108158a80(puVar6);
    pbVar8 = pbVar13;
    FUN_1084103a4(pbVar13,puVar6);
    if ((int)pbVar8 == 1) {
      ppbVar9 = &pbStack_f8;
      FUN_10841051c(ppbVar9,pbVar13 + (long)puVar6);
      if (((ulong)ppbVar9 & 0xffff0000) == 0) {
        FUN_108154b58(param_4,&DAT_10f30a8bb);
        func_0x00010817e114();
        uStack_d0 = 0;
        func_0x00010817e0b8();
        func_0x00010817e114();
        uStack_c8 = CONCAT44(uStack_c8._4_4_,param_1);
        fVar17 = param_1;
        func_0x00010817e0b8();
        uStack_118 = (ulong)uStack_118._4_4_ << 0x20;
        FUN_1081572c0();
        uStack_c8 = CONCAT44(fVar17,(undefined4)uStack_c8);
        if ((param_1 == 0.0) && (fVar17 == 0.0)) {
          lStack_100 = 0;
        }
        else {
          func_0x00010817e0d0(&uStack_118);
          fVar17 = (float)uStack_d0;
          fVar3 = uStack_d0._4_4_;
          func_0x00010817e0c0();
          FUN_10815f414(&lStack_d8,&lStack_b0);
          lStack_b8 = lStack_d8;
          lStack_d8 = 0;
          plVar16 = &lStack_d8;
          FUN_108160198();
          func_0x00010817e0b8();
          FUN_108154e4c();
          lVar15 = lStack_b8;
          if (plVar16 != (long *)0x0) {
            lStack_b8 = 0;
            lStack_e0 = lVar15;
            FUN_10815f6f8(&lStack_b0,param_3,plVar16,&lStack_e0,0);
            lVar15 = lStack_b8;
            lStack_b8 = lStack_b0;
            lStack_b0 = 0;
            FUN_10817dedc(lVar15);
            FUN_108155404(&lStack_b0);
            FUN_108155404(&lStack_e0);
          }
          func_0x00010817e0d0(auStack_e8);
          lStack_f0 = lStack_b8;
          lStack_b8 = 0;
          FUN_108158594(&lStack_b0,auStack_e8,&lStack_f0);
          lStack_100 = lStack_b0;
          lStack_b0 = 0;
          FUN_1081596a8(&lStack_b0);
          FUN_108155404(&lStack_f0);
          FUN_108154cb4(auStack_e8);
          FUN_108155404(&lStack_b8);
          FUN_108154cb4(&uStack_118);
          if (lStack_100 != 0) {
            uStack_d0 = (ulong)(uint)(fVar3 * -0.01) << 0x20;
            uStack_c8 = (ulong)(uint)(fVar17 * 0.01);
            FUN_10837bbf0(&lStack_b0,&uStack_d0,0,0);
            func_0x00010817e100(param_2 + 4);
            FUN_10837ca5c(lStack_b0);
            lStack_a8 = lStack_100;
            uStack_108 = 0;
            lStack_100 = 0;
            lStack_b0 = CONCAT62(lStack_b0._2_6_,(short)ppbVar9);
            uVar1 = param_2[1];
            if ((int)(uVar1 * 3) <= *param_2 * 4) {
              uVar2 = uVar1 << 1;
              if ((int)uVar1 < 1) {
                uVar2 = 4;
              }
              *param_2 = 0;
              param_2[1] = uVar2;
              puVar6 = (ulong *)(param_2 + 2);
              uStack_118 = *puVar6;
              *puVar6 = 0;
              puVar10 = (undefined8 *)((ulong)uVar2 * 0x18 + 0x10);
              __Znam();
              *puVar10 = 0x18;
              puVar10[1] = (ulong)uVar2;
              if (uVar2 != 0) {
                lVar15 = (ulong)uVar2 * 0x18;
                puVar10 = puVar10 + 2;
                do {
                  *(undefined4 *)puVar10 = 0;
                  lVar15 = lVar15 + -0x18;
                  puVar10 = puVar10 + 3;
                } while (lVar15 != 0);
              }
              FUN_108177070(puVar6);
              for (lVar15 = 0;
                  (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar15 != 0;
                  lVar15 = lVar15 + 0x18) {
                if (*(int *)(uStack_118 + lVar15) != 0) {
                  FUN_10817df08(param_2,uStack_118 + lVar15 + 8);
                }
              }
              FUN_10815b598(&uStack_118);
            }
            FUN_10817df08(param_2,&lStack_b0);
            FUN_108154cb4(&lStack_a8);
            FUN_108154cb4(&uStack_108);
            FUN_108154cb4(&lStack_100);
            return 1;
          }
        }
        FUN_108154cb4(&lStack_100);
        puVar6 = &uStack_118;
        FUN_108376ad8();
        func_0x00010817e0b8();
        FUN_108155f00();
        if (puVar6 != (ulong *)0x0) {
          puVar7 = (ulong *)((long *)(*puVar6 & 0xfffffffffffffff8) + 1);
          puVar6 = puVar7 + *(long *)(*puVar6 & 0xfffffffffffffff8);
          for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
            puVar11 = puVar7;
            FUN_108154e4c();
            if (puVar11 == (ulong *)0x0) {
LAB_10817dc60:
              uVar14 = 0;
              goto LAB_10817dc64;
            }
            FUN_108154b58();
            FUN_108155f00();
            if (puVar11 == (ulong *)0x0) goto LAB_10817dc60;
            plVar16 = (long *)(*puVar11 & 0xfffffffffffffff8);
            for (lVar15 = *plVar16 << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
              plVar16 = plVar16 + 1;
              plVar12 = plVar16;
              FUN_108154e4c();
              if (plVar12 == (long *)0x0) goto LAB_10817dc60;
              FUN_10815a2f0(&lStack_b0,param_3);
              FUN_108154b58(plVar12,&DAT_10f47d024);
              FUN_108159b78(&lStack_b8,param_3,plVar12);
              lVar5 = lStack_a0;
              lVar4 = lStack_a8;
              *(undefined8 *)(lStack_b0 + 0x70) = uStack_90;
              uStack_d0 = lStack_a8;
              uStack_c0 = uStack_98;
              uStack_c8 = lStack_a0;
              lStack_a0 = 0;
              uStack_98 = 0;
              lStack_a8 = 0;
              if ((lStack_b8 == 0) || (lVar4 != lVar5)) {
                func_0x00010817e120();
                func_0x00010817e0f8();
                func_0x00010817e10c();
                goto LAB_10817dc60;
              }
              func_0x000108142250(&uStack_118,lStack_b8 + 0x30,0);
              func_0x00010817e120();
              func_0x00010817e0f8();
              func_0x00010817e10c();
            }
          }
        }
        func_0x00010817e0c0();
        func_0x000108142294(&uStack_118,&lStack_b0,1);
        func_0x00010817e100(param_2 + 4);
        uVar14 = 1;
LAB_10817dc64:
        FUN_10837ca5c(uStack_118);
        return uVar14;
      }
    }
  }
  return 0;
}



/* Entry: 10817dd84; end: 10817de13;  */

void FUN_10817dd84(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  lVar2 = 0x18;
  __Znwm();
  FUN_108404f0c(&uStack_38,param_2 + 0x10);
  FUN_108176fe4(lVar2,param_2);
  uVar1 = uStack_38;
  uStack_38 = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *param_1 = lVar2;
  func_0x0001081298a0(&uStack_38);
  return;
}



/* Entry: 10817de14; end: 10817debb;  */

long FUN_10817de14(long param_1)

{
  func_0x0001081298a0(param_1 + 0x10);
  FUN_10815b598(param_1 + 8);
  return param_1;
}



/* Entry: 10817debc; end: 10817dedb;  */

long FUN_10817debc(long param_1)

{
  long lVar1;
  
  FUN_10817e030();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
  }
  return lVar1;
}



/* Entry: 10817dedc; end: 10817df07;  */

void FUN_10817dedc(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010817df00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}


