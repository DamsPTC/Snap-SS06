/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10815bb44; end: 10815bb73;  */

undefined8 * FUN_10815bb44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a28438;
  FUN_10815bbd0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10815bb74; end: 10815bb77;  */

undefined8 * FUN_10815bb74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a28438;
  FUN_10815bbd0(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 10815bb78; end: 10815bbc7;  */

void FUN_10815bb78(void)

{
  FUN_10815bb44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10815bbc8; end: 10815bbcf;  */

void FUN_10815bbc8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10815bbcc);
  (*pcVar1)();
}



/* Entry: 10815bbd0; end: 10815bc13;  */

void FUN_10815bbd0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x00010815c59c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
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
      func_0x00010815c604();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 10815bc14; end: 10815bc33;  */

void FUN_10815bc14(long param_1,float *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(float *)(param_1 + 0x38) != *param_2) {
    *(float *)(param_1 + 0x38) = *param_2;
    uStack_21 = 1;
    func_0x00010818add8(auStack_38);
    if ((bStack_2c & 1) == 0) {
      uVar2 = *(ushort *)(param_1 + 0x28);
      uVar4 = (uint)uVar2;
      if (((uVar2 >> 2 & 1) == 0) || ((uVar2 >> 3 & 1) == 0)) {
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2 | 8;
          *(short *)(param_1 + 0x28) = (short)uVar4;
          uStack_21 = 0;
        }
        *(ushort *)(param_1 + 0x28) = (ushort)uVar4 | 4;
        puStack_40 = &uStack_21;
        puVar3 = *(undefined8 **)(param_1 + 0x10);
        if ((uVar4 >> 4 & 1) == 0) {
          if (puVar3 != (undefined8 *)0x0) {
            func_0x00010818ad34(&puStack_40);
          }
        }
        else {
          puVar1 = (undefined8 *)puVar3[1];
          for (puVar3 = (undefined8 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 1) {
            func_0x00010818ad34(&puStack_40,*puVar3);
          }
        }
      }
    }
    func_0x00010818a9f8(auStack_38);
    return;
  }
  return;
}



/* Entry: 10815bc34; end: 10815bc77;  */

void FUN_10815bc34(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x00010815c59c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
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
      func_0x00010815c604();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 10815bc78; end: 10815bce3;  */

void FUN_10815bc78(long param_1)

{
  func_0x00010815c59c();
  if (param_1 != 0) {
    func_0x00010815bc9c();
  }
  return;
}



/* Entry: 10815bce4; end: 10815bd07;  */

void FUN_10815bce4(void)

{
  func_0x00010815c59c();
  FUN_10815bd08();
  return;
}



/* Entry: 10815bd08; end: 10815bd2b;  */

void FUN_10815bd08(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010815c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10815bd2c; end: 10815bd4f;  */

void FUN_10815bd2c(void)

{
  func_0x00010815c59c();
  FUN_10815bd50();
  return;
}



/* Entry: 10815bd50; end: 10815bd73;  */

void FUN_10815bd50(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010815c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10815bd74; end: 10815bd97;  */

void FUN_10815bd74(void)

{
  func_0x00010815c59c();
  FUN_10815bd98();
  return;
}



/* Entry: 10815bd98; end: 10815bdbb;  */

void FUN_10815bd98(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010815c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10815bdbc; end: 10815bddf;  */

void FUN_10815bdbc(void)

{
  func_0x00010815c59c();
  FUN_10815bde0();
  return;
}



/* Entry: 10815bde0; end: 10815be03;  */

void FUN_10815bde0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010815c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10815be04; end: 10815be27;  */

void FUN_10815be04(void)

{
  func_0x00010815c59c();
  FUN_10815be28();
  return;
}



/* Entry: 10815be28; end: 10815be4b;  */

void FUN_10815be28(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010815c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10815be4c; end: 10815be6f;  */

void FUN_10815be4c(void)

{
  func_0x00010815c59c();
  FUN_10815be70();
  return;
}



/* Entry: 10815be70; end: 10815be93;  */

void FUN_10815be70(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010815c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10815be94; end: 10815bf73;  */

uint * FUN_10815be94(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  puVar6 = param_2;
  FUN_108156594();
  uVar4 = param_1[1];
  uVar5 = (uint)puVar6;
  uVar1 = uVar4 - 1 & uVar5;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  puVar7 = puVar6;
  while( true ) {
    if (uVar2 == 0) {
      return puVar7;
    }
    puVar8 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x20);
    if (*puVar8 == 0) break;
    if ((uVar5 == *puVar8) &&
       (puVar7 = param_2, FUN_1083a3440(param_2,puVar8 + 2), (int)puVar7 != 0)) {
      FUN_10815b6c8();
      FUN_1083a33c4(puVar8 + 2,param_2);
      uVar9 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(puVar8 + 4) = uVar9;
      *puVar8 = uVar5;
      return puVar8;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  FUN_10815bf74(puVar8,param_2,puVar6);
  *param_1 = *param_1 + 1;
  return puVar8;
}



/* Entry: 10815bf74; end: 10815bfbf;  */

undefined4 * FUN_10815bf74(undefined4 *param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_10815b6c8();
  FUN_1083a33c4(param_1 + 2,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *param_1 = param_3;
  return param_1;
}



/* Entry: 10815bfc0; end: 10815bfc7;  */

void FUN_10815bfc0(void)

{
  return;
}



/* Entry: 10815bfc8; end: 10815bfeb;  */

void FUN_10815bfc8(void)

{
  func_0x00010815c590();
  func_0x00010815c4d8(&PTR_FUN_110a28470);
  return;
}



/* Entry: 10815bfec; end: 10815c007;  */

void FUN_10815bfec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a28470;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10815c008; end: 10815c053;  */

void FUN_10815c008(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  func_0x00010815c460();
  if (unaff_x20 != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x21 + 0x40) != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010815c498();
  FUN_108158f04(auStack_38);
  return;
}



/* Entry: 10815c054; end: 10815c07b;  */

void FUN_10815c054(undefined8 param_1)

{
  func_0x00010815c688();
  func_0x00010815c610(param_1,&PTR_DAT_110a284e0);
  func_0x00010815c5d0();
  return;
}



/* Entry: 10815c07c; end: 10815c087;  */

undefined ** FUN_10815c07c(void)

{
  return &PTR_DAT_110a284e0;
}



/* Entry: 10815c088; end: 10815c0bb;  */

void FUN_10815c088(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010815c5e0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010815c574(uVar1);
  return;
}



/* Entry: 10815c0bc; end: 10815c0c3;  */

void FUN_10815c0bc(void)

{
  return;
}



/* Entry: 10815c0c4; end: 10815c0e7;  */

void FUN_10815c0c4(void)

{
  func_0x00010815c590();
  func_0x00010815c4d8(&PTR_FUN_110a28500);
  return;
}



/* Entry: 10815c0e8; end: 10815c103;  */

void FUN_10815c0e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a28500;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10815c104; end: 10815c14f;  */

void FUN_10815c104(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  func_0x00010815c460();
  if (unaff_x20 != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x21 + 0x40) != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010815c498();
  FUN_10815bbd0(auStack_38);
  return;
}



/* Entry: 10815c150; end: 10815c177;  */

void FUN_10815c150(undefined8 param_1)

{
  func_0x00010815c688();
  func_0x00010815c610(param_1,&PTR_DAT_110a28570);
  func_0x00010815c5d0();
  return;
}



/* Entry: 10815c178; end: 10815c183;  */

undefined ** FUN_10815c178(void)

{
  return &PTR_DAT_110a28570;
}



/* Entry: 10815c184; end: 10815c1b7;  */

void FUN_10815c184(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010815c5e0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010815c574(uVar1);
  return;
}



/* Entry: 10815c1b8; end: 10815c1fb;  */

void FUN_10815c1b8(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x00010815c59c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
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
      func_0x00010815c604();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 10815c1fc; end: 10815c203;  */

void FUN_10815c1fc(void)

{
  return;
}



/* Entry: 10815c204; end: 10815c227;  */

void FUN_10815c204(void)

{
  func_0x00010815c590();
  func_0x00010815c4d8(&PTR_FUN_110a28590);
  return;
}



/* Entry: 10815c228; end: 10815c243;  */

void FUN_10815c228(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a28590;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10815c244; end: 10815c28f;  */

void FUN_10815c244(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  func_0x00010815c460();
  if (unaff_x20 != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x21 + 0x40) != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010815c498();
  FUN_10815c1b8(auStack_38);
  return;
}



/* Entry: 10815c290; end: 10815c2b7;  */

void FUN_10815c290(undefined8 param_1)

{
  func_0x00010815c688();
  func_0x00010815c610(param_1,&PTR_DAT_110a28600);
  func_0x00010815c5d0();
  return;
}



/* Entry: 10815c2b8; end: 10815c2c3;  */

undefined ** FUN_10815c2b8(void)

{
  return &PTR_DAT_110a28600;
}



/* Entry: 10815c2c4; end: 10815c2f7;  */

void FUN_10815c2c4(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010815c5e0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010815c574(uVar1);
  return;
}



/* Entry: 10815c2f8; end: 10815c2ff;  */

void FUN_10815c2f8(void)

{
  return;
}



/* Entry: 10815c300; end: 10815c323;  */

void FUN_10815c300(void)

{
  func_0x00010815c590();
  func_0x00010815c4d8(&PTR_FUN_110a28620);
  return;
}



/* Entry: 10815c324; end: 10815c33f;  */

void FUN_10815c324(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a28620;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10815c340; end: 10815c38b;  */

void FUN_10815c340(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_38 [8];
  
  func_0x00010815c460();
  if (unaff_x20 != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10 != 0);
  }
  if (*(long *)(unaff_x21 + 0x40) != 0) {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010815c498();
  FUN_10815c3c0(auStack_38);
  return;
}



/* Entry: 10815c38c; end: 10815c3b3;  */

void FUN_10815c38c(undefined8 param_1)

{
  func_0x00010815c688();
  func_0x00010815c610(param_1,&PTR_DAT_110a28690);
  func_0x00010815c5d0();
  return;
}



/* Entry: 10815c3b4; end: 10815c3bf;  */

undefined ** FUN_10815c3b4(void)

{
  return &PTR_DAT_110a28690;
}



/* Entry: 10815c3c0; end: 10815c403;  */

void FUN_10815c3c0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *extraout_x8;
  
  func_0x00010815c59c();
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 8);
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
      func_0x00010815c604();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 10815c404; end: 10815c437;  */

void FUN_10815c404(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010815c5e0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010815c574(uVar1);
  return;
}



/* Entry: 10815c438; end: 10815c693;  */

void FUN_10815c438(long *param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00010815c4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 10815c694; end: 10815c87f;  */

bool FUN_10815c694(ulong *param_1,float *param_2)

{
  undefined1 in_ZR;
  ulong *puVar1;
  ulong *puVar2;
  float fVar3;
  
  do {
    puVar2 = param_1;
    puVar1 = puVar2;
    FUN_108155f00();
    if (puVar1 == (ulong *)0x0) break;
    param_1 = (ulong *)((long *)(*puVar1 & 0xfffffffffffffff8) + 1);
  } while (*(long *)(*puVar1 & 0xfffffffffffffff8) != 0);
  func_0x00010815c6f8();
  if (puVar2 != (ulong *)0x0) {
    func_0x00010815caa4();
    if ((bool)in_ZR) {
      fVar3 = (float)*(int *)((long)puVar2 + 4);
    }
    else {
      fVar3 = *(float *)((long)puVar2 + 4);
    }
    *param_2 = fVar3;
  }
  return puVar2 != (ulong *)0x0;
}



/* Entry: 10815c880; end: 10815c8ef;  */

bool FUN_10815c880(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  
  FUN_108158a5c();
  if (param_1 != (ulong *)0x0) {
    if ((*param_1 & 7) == 0) {
      pbVar2 = (byte *)((long)param_1 + 1);
    }
    else {
      pbVar2 = (byte *)((*param_1 & 0xfffffffffffffff8) + 8);
    }
    puVar1 = param_1;
    FUN_108158a80(param_1);
    FUN_1083a36b8(param_2,pbVar2,puVar1);
  }
  return param_1 != (ulong *)0x0;
}



/* Entry: 10815c8f0; end: 10815c9b3;  */

bool FUN_10815c8f0(int param_1)

{
  ulong *puVar1;
  undefined1 uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long unaff_x19;
  ulong *unaff_x20;
  float fVar7;
  
  func_0x00010815cab4();
  if (param_1 != 0) {
    uVar6 = *(ulong *)(*unaff_x20 & 0xfffffffffffffff8);
    uVar2 = uVar6 == 2;
    if (1 < uVar6) {
      iVar3 = (int)(ulong *)(*unaff_x20 & 0xfffffffffffffff8) + 8;
      FUN_10815c694();
      if (iVar3 != 0) {
        puVar1 = (ulong *)((*unaff_x20 & 0xfffffffffffffff8) + 0x10);
        do {
          puVar5 = puVar1;
          puVar4 = puVar5;
          FUN_108155f00();
          if (puVar4 == (ulong *)0x0) break;
          puVar1 = (ulong *)((long *)(*puVar4 & 0xfffffffffffffff8) + 1);
        } while (*(long *)(*puVar4 & 0xfffffffffffffff8) != 0);
        func_0x00010815c6f8();
        if (puVar5 != (ulong *)0x0) {
          func_0x00010815caa4();
          if ((bool)uVar2) {
            fVar7 = (float)*(int *)((long)puVar5 + 4);
          }
          else {
            fVar7 = *(float *)((long)puVar5 + 4);
          }
          *(float *)(unaff_x19 + 4) = fVar7;
        }
        return puVar5 != (ulong *)0x0;
      }
    }
  }
  return false;
}



/* Entry: 10815c9b4; end: 10815ca4f;  */

undefined1 FUN_10815c9b4(int param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong uVar4;
  
  func_0x00010815cab4();
  if (param_1 != 0) {
    func_0x00010742a308();
    uVar4 = 0xffffffffffffffff;
    lVar2 = 0;
    lVar3 = 8;
    do {
      uVar4 = uVar4 + 1;
      if (*(ulong *)(*unaff_x20 & 0xfffffffffffffff8) <= uVar4) {
        return 1;
      }
      uVar1 = (long)(*unaff_x20 & 0xfffffffffffffff8) + lVar3;
      FUN_10815c694(uVar1,*unaff_x19 + lVar2);
      lVar2 = lVar2 + 4;
      lVar3 = lVar3 + 8;
    } while ((uVar1 & 1) != 0);
  }
  return 0;
}



/* Entry: 10815ca50; end: 10815ca9b;  */

long FUN_10815ca50(long param_1)

{
  if (param_1 != 0) {
    FUN_108154b58(param_1,&UNK_10f47d1b8);
    FUN_108158a5c();
    if (param_1 != 0) {
      return param_1;
    }
  }
  return 0;
}



/* Entry: 10815ca9c; end: 10815cabf;  */

void FUN_10815ca9c(void)

{
  return;
}



/* Entry: 10815cac0; end: 10815cc67;  */

bool FUN_10815cac0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  if (*param_1 == *param_2) {
    plVar1 = param_1 + 1;
    FUN_1083a3440(plVar1,param_2 + 1);
    if (((((((int)plVar1 != 0) && (*(float *)(param_1 + 2) == *(float *)(param_2 + 2))) &&
          (*(float *)((long)param_1 + 0x1c) == *(float *)((long)param_2 + 0x1c))) &&
         ((*(float *)(param_1 + 4) == *(float *)(param_2 + 4) &&
          (*(float *)((long)param_1 + 0x24) == *(float *)((long)param_2 + 0x24))))) &&
        ((*(float *)(param_1 + 5) == *(float *)(param_2 + 5) &&
         ((param_1[6] == param_2[6] && ((int)param_1[7] == (int)param_2[7])))))) &&
       ((*(char *)((long)param_1 + 0x3c) == *(char *)((long)param_2 + 0x3c) &&
        ((((*(char *)((long)param_1 + 0x3d) == *(char *)((long)param_2 + 0x3d) &&
           (*(char *)((long)param_1 + 0x3e) == *(char *)((long)param_2 + 0x3e))) &&
          (*(char *)((long)param_1 + 0x3f) == *(char *)((long)param_2 + 0x3f))) &&
         ((int)param_1[8] == (int)param_2[8])))))) {
      lVar2 = (long)param_1 + 0x44;
      FUN_10815cc68(lVar2,(long)param_2 + 0x44);
      if ((((((int)lVar2 != 0) && (*(int *)((long)param_1 + 0x54) == *(int *)((long)param_2 + 0x54))
            ) && (((int)param_1[0xb] == (int)param_2[0xb] &&
                  ((*(char *)((long)param_1 + 0x5c) == *(char *)((long)param_2 + 0x5c) &&
                   (*(char *)((long)param_1 + 0x5d) == *(char *)((long)param_2 + 0x5d))))))) &&
          (*(char *)((long)param_1 + 0x5e) == *(char *)((long)param_2 + 0x5e))) &&
         ((*(char *)((long)param_1 + 0x5f) == *(char *)((long)param_2 + 0x5f) &&
          (param_1[0xc] == param_2[0xc])))) {
        plVar1 = param_1 + 0xd;
        FUN_1083a3440(plVar1,param_2 + 0xd);
        if ((int)plVar1 != 0) {
          piVar3 = (int *)param_2[0xe];
          if ((int *)param_1[0xe] == piVar3) {
            return true;
          }
          piVar4 = (int *)param_1[0xe];
          if (*piVar3 == *piVar4) {
            if (*piVar3 != 0) {
              piVar4 = piVar4 + 2;
              _memcmp(piVar4,piVar3 + 2);
              return (int)piVar4 == 0;
            }
            return true;
          }
          return false;
        }
      }
    }
  }
  return false;
}



/* Entry: 10815cc68; end: 10815ccb3;  */

bool FUN_10815cc68(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Entry: 10815ccb4; end: 10815cccb;  */

uint FUN_10815ccb4(uint param_1)

{
  FUN_10815cac0();
  return param_1 ^ 1;
}



/* Entry: 10815cccc; end: 10815cd9f;  */

undefined8 * FUN_10815cccc(undefined8 *param_1,long *param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar2;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  
  uVar2 = 0;
  if (*param_2 != 0) {
    do {
      FUN_10815cdf0();
      uVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = uVar2;
  lVar1 = param_2[1];
  if (lVar1 != 0 && lVar1 != 0x1138270b0) {
    do {
      FUN_10815cdf0();
      lVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  param_1[1] = lVar1;
  _memcpy(param_1 + 2,param_2 + 2,0x50);
  uVar2 = 0;
  if (param_2[0xc] != 0) {
    do {
      FUN_10815cdf0();
      uVar2 = extraout_x8_01;
    } while (extraout_w11_01 != 0);
  }
  param_1[0xc] = uVar2;
  lVar1 = param_2[0xd];
  if (lVar1 != 0 && lVar1 != 0x1138270b0) {
    do {
      FUN_10815cdf0();
      lVar1 = extraout_x8_02;
    } while (extraout_w11_02 != 0);
  }
  param_1[0xd] = lVar1;
  lVar1 = param_2[0xe];
  if (lVar1 != 0 && lVar1 != 0x1138270b0) {
    do {
      FUN_10815cdf0();
      lVar1 = extraout_x8_03;
    } while (extraout_w11_03 != 0);
  }
  param_1[0xe] = lVar1;
  return param_1;
}



/* Entry: 10815cda0; end: 10815cdef;  */

long * FUN_10815cda0(long *param_1)

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



/* Entry: 10815cdf0; end: 10815cdff;  */

void FUN_10815cdf0(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10815ce00; end: 10815ce4b;  */

long FUN_10815ce00(long param_1)

{
  FUN_10815bc78(param_1 + 0x60);
  FUN_10815d504(param_1 + 0x58);
  func_0x00010815d614(param_1 + 0x48);
  func_0x00010815d724(param_1 + 0x38);
  func_0x00010815d834(param_1 + 0x28);
  func_0x00010815d944(param_1 + 0x18);
  return param_1;
}



/* Entry: 10815ce4c; end: 10815ce4f;  */

long FUN_10815ce4c(long param_1)

{
  FUN_10815bc78(param_1 + 0x60);
  FUN_10815d504(param_1 + 0x58);
  func_0x00010815d614(param_1 + 0x48);
  func_0x00010815d724(param_1 + 0x38);
  func_0x00010815d834(param_1 + 0x28);
  func_0x00010815d944(param_1 + 0x18);
  return param_1;
}



/* Entry: 10815ce50; end: 10815cedb;  */

void FUN_10815ce50(void)

{
  FUN_10815ce00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10815cedc; end: 10815cf1f;  */

void FUN_10815cedc(long param_1)

{
  FUN_10815cf20(param_1 + 0x10);
  func_0x00010815f1b8();
  FUN_10815cfa4();
  func_0x00010815f1b0();
  return;
}



/* Entry: 10815cf20; end: 10815cfa3;  */

long FUN_10815cf20(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010815f138();
  func_0x00010815ce64();
  if (param_1 == 0) {
    func_0x00010815f248();
    if (!(bool)in_ZR && extraout_x8 != 0x1138270b0) {
      do {
        func_0x00010815f024();
      } while (extraout_w11 != 0);
    }
    func_0x00010815f23c();
    func_0x00010815f0b8();
    FUN_10815deb4();
    func_0x00010815f260();
    FUN_10815d9ec();
    func_0x00010815f0b0();
  }
  return param_1;
}



/* Entry: 10815cfa4; end: 10815cfe3;  */

void FUN_10815cfa4(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010815f040();
  if (in_NG == in_OV) {
    func_0x00010815f078();
    FUN_10815e10c();
    func_0x00010815eee8();
    FUN_10815e130();
  }
  else {
    func_0x00010815f008();
  }
  func_0x00010815f1a0();
  return;
}



/* Entry: 10815cfe4; end: 10815d04b;  */

void FUN_10815cfe4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_10815d04c(&uStack_38,param_4);
  FUN_10815d0ac(param_2 + 0x40,param_3);
  FUN_10815d130();
  uVar1 = uStack_38;
  uStack_38 = 0;
  *param_1 = uVar1;
  FUN_10815e1f8(&uStack_38);
  return;
}



/* Entry: 10815d04c; end: 10815d0ab;  */

void FUN_10815d04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  uVar2 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  *puVar1 = &PTR_FUN_110a28758;
  uStack_28 = 0;
  puVar1[2] = uVar2;
  *param_1 = puVar1;
  FUN_10815b8bc(&uStack_28);
  return;
}



/* Entry: 10815d0ac; end: 10815d12f;  */

long FUN_10815d0ac(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010815f138();
  func_0x00010815ce7c();
  if (param_1 == 0) {
    func_0x00010815f248();
    if (!(bool)in_ZR && extraout_x8 != 0x1138270b0) {
      do {
        func_0x00010815f024();
      } while (extraout_w11 != 0);
    }
    func_0x00010815f23c();
    func_0x00010815f0b8();
    FUN_10815e244();
    func_0x00010815f260();
    FUN_10815d6bc();
    func_0x00010815f0b0();
  }
  return param_1;
}



/* Entry: 10815d130; end: 10815d1d3;  */

long * FUN_10815d130(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long lVar4;
  int extraout_w11;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x21;
  
  func_0x00010815f138();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    plVar5 = (long *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 8);
    lVar4 = 0;
    if (*unaff_x21 != 0) {
      do {
        func_0x00010815f024();
        lVar4 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *plVar5 = lVar4;
  }
  else {
    func_0x00010815f078();
    FUN_10815e468();
    plVar5 = (long *)(param_1 + (long)(int)unaff_x19[1] * 8);
    lVar4 = *unaff_x21;
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
    *plVar5 = lVar4;
    FUN_10815e48c();
  }
  *(int *)(unaff_x19 + 1) = (int)unaff_x19[1] + 1;
  return plVar5;
}



/* Entry: 10815d1d4; end: 10815d217;  */

void FUN_10815d1d4(long param_1)

{
  FUN_10815d218(param_1 + 0x20);
  func_0x00010815f1b8();
  FUN_10815d29c();
  func_0x00010815f1b0();
  return;
}



/* Entry: 10815d218; end: 10815d29b;  */

long FUN_10815d218(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010815f138();
  func_0x00010815ce94();
  if (param_1 == 0) {
    func_0x00010815f248();
    if (!(bool)in_ZR && extraout_x8 != 0x1138270b0) {
      do {
        func_0x00010815f024();
      } while (extraout_w11 != 0);
    }
    func_0x00010815f23c();
    func_0x00010815f0b8();
    FUN_10815e4c8();
    func_0x00010815f260();
    FUN_10815d8dc();
    func_0x00010815f0b0();
  }
  return param_1;
}



/* Entry: 10815d29c; end: 10815d2db;  */

void FUN_10815d29c(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010815f040();
  if (in_NG == in_OV) {
    func_0x00010815f078();
    FUN_10815e720();
    func_0x00010815eee8();
    FUN_10815e744();
  }
  else {
    func_0x00010815f008();
  }
  func_0x00010815f1a0();
  return;
}



/* Entry: 10815d2dc; end: 10815d31f;  */

void FUN_10815d2dc(long param_1)

{
  FUN_10815d320(param_1 + 0x30);
  func_0x00010815f1b8();
  FUN_10815d3a4();
  func_0x00010815f1b0();
  return;
}



/* Entry: 10815d320; end: 10815d3a3;  */

long FUN_10815d320(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010815f138();
  func_0x00010815ceac();
  if (param_1 == 0) {
    func_0x00010815f248();
    if (!(bool)in_ZR && extraout_x8 != 0x1138270b0) {
      do {
        func_0x00010815f024();
      } while (extraout_w11 != 0);
    }
    func_0x00010815f23c();
    func_0x00010815f0b8();
    FUN_10815e778();
    func_0x00010815f260();
    FUN_10815d7cc();
    func_0x00010815f0b0();
  }
  return param_1;
}



/* Entry: 10815d3a4; end: 10815d3e3;  */

void FUN_10815d3a4(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010815f040();
  if (in_NG == in_OV) {
    func_0x00010815f078();
    FUN_10815e9d0();
    func_0x00010815eee8();
    FUN_10815e9f4();
  }
  else {
    func_0x00010815f008();
  }
  func_0x00010815f1a0();
  return;
}



/* Entry: 10815d3e4; end: 10815d40b;  */

void FUN_10815d3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  param_1 = param_1 + 0x50;
  FUN_10815d40c();
  func_0x00010815f040();
  if (in_NG == in_OV) {
    func_0x00010815f078();
    FUN_10815ec4c();
    lVar1 = unaff_x19[1];
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(param_1 + (long)(int)lVar1 * 8) = uVar2;
    FUN_10815ec70(unaff_x19,param_1,param_3);
  }
  else {
    lVar1 = *unaff_x19;
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(lVar1 + (long)extraout_w8 * 8) = uVar2;
  }
  func_0x00010815f1a0();
  return;
}



/* Entry: 10815d40c; end: 10815d48f;  */

long FUN_10815d40c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  int extraout_w11;
  
  func_0x00010815f138();
  func_0x00010815cec4();
  if (param_1 == 0) {
    func_0x00010815f248();
    if (!(bool)in_ZR && extraout_x8 != 0x1138270b0) {
      do {
        func_0x00010815f024();
      } while (extraout_w11 != 0);
    }
    func_0x00010815f23c();
    func_0x00010815f0b8();
    FUN_10815ea28();
    func_0x00010815f260();
    FUN_10815d5ac();
    func_0x00010815f0b0();
  }
  return param_1;
}



/* Entry: 10815d490; end: 10815d503;  */

void FUN_10815d490(long param_1)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010815f040();
  if (in_NG == in_OV) {
    func_0x00010815f078();
    FUN_10815ec4c();
    lVar1 = unaff_x19[1];
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(param_1 + (long)(int)lVar1 * 8) = uVar2;
    FUN_10815ec70();
  }
  else {
    lVar1 = *unaff_x19;
    uVar2 = *unaff_x20;
    *unaff_x20 = 0;
    *(undefined8 *)(lVar1 + (long)extraout_w8 * 8) = uVar2;
  }
  func_0x00010815f1a0();
  return;
}



/* Entry: 10815d504; end: 10815d527;  */

void FUN_10815d504(long param_1)

{
  func_0x00010815f0d8();
  if (param_1 != 0) {
    FUN_10815d528();
  }
  return;
}



/* Entry: 10815d528; end: 10815d55f;  */

void FUN_10815d528(void)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010815f26c();
  if (extraout_x8 != 0) {
    func_0x00010815f098();
    do {
      FUN_10815d560();
      func_0x00010815f1f4();
    } while (unaff_x21 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(unaff_x19 + -0x10);
  return;
}



/* Entry: 10815d560; end: 10815d5ab;  */

void FUN_10815d560(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815f144();
    func_0x00010815d58c();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815d5ac; end: 10815d5db;  */

long FUN_10815d5ac(long param_1)

{
  FUN_10815d5dc();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  return param_1;
}



/* Entry: 10815d5dc; end: 10815d637;  */

void FUN_10815d5dc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_10815c1b8();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10815d638; end: 10815d66f;  */

void FUN_10815d638(void)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010815f26c();
  if (extraout_x8 != 0) {
    func_0x00010815f098();
    do {
      FUN_10815d670();
      func_0x00010815f1f4();
    } while (unaff_x21 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(unaff_x19 + -0x10);
  return;
}



/* Entry: 10815d670; end: 10815d6bb;  */

void FUN_10815d670(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815f144();
    func_0x00010815d69c();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815d6bc; end: 10815d6eb;  */

long FUN_10815d6bc(long param_1)

{
  FUN_10815d6ec();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  return param_1;
}



/* Entry: 10815d6ec; end: 10815d747;  */

void FUN_10815d6ec(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_10815e1f8();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10815d748; end: 10815d77f;  */

void FUN_10815d748(void)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010815f26c();
  if (extraout_x8 != 0) {
    func_0x00010815f098();
    do {
      FUN_10815d780();
      func_0x00010815f1f4();
    } while (unaff_x21 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(unaff_x19 + -0x10);
  return;
}



/* Entry: 10815d780; end: 10815d7cb;  */

void FUN_10815d780(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815f144();
    func_0x00010815d7ac();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815d7cc; end: 10815d7fb;  */

long FUN_10815d7cc(long param_1)

{
  FUN_10815d7fc();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  return param_1;
}



/* Entry: 10815d7fc; end: 10815d857;  */

void FUN_10815d7fc(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      func_0x00010815f2a8();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10815d858; end: 10815d88f;  */

void FUN_10815d858(void)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010815f26c();
  if (extraout_x8 != 0) {
    func_0x00010815f098();
    do {
      FUN_10815d890();
      func_0x00010815f1f4();
    } while (unaff_x21 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(unaff_x19 + -0x10);
  return;
}



/* Entry: 10815d890; end: 10815d8db;  */

void FUN_10815d890(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815f144();
    func_0x00010815d8bc();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815d8dc; end: 10815d90b;  */

long FUN_10815d8dc(long param_1)

{
  FUN_10815d90c();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x00010815f060();
  }
  return param_1;
}


