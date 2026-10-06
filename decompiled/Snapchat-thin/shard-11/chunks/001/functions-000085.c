/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108158ab4; end: 108158aef;  */

undefined1 FUN_108158ab4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  func_0x00010815c720(param_1,&uStack_21);
  puVar1 = &uStack_21;
  if ((int)param_1 == 0) {
    puVar1 = param_2;
  }
  return *puVar1;
}



/* Entry: 108158af0; end: 108158b2f;  */

void FUN_108158af0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108158b30; end: 108158b57;  */

undefined8 FUN_108158b30(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  undefined8 unaff_x19;
  
  FUN_108158af0(param_1 + 8);
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return unaff_x19;
}



/* Entry: 108158b58; end: 108158bbf;  */

void FUN_108158b58(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined1 auStack_48 [40];
  
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_108159088();
      func_0x000108159a54();
      func_0x000108159980();
      uVar1 = 0x58;
      __Znwm();
      FUN_10818a0ec();
      *extraout_x8 = uVar1;
      return;
    }
    FUN_108159110(auStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x000108159ad8();
    func_0x000108159a54();
  }
  return;
}



/* Entry: 108158bc0; end: 108158c03;  */

void FUN_108158bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm();
  FUN_10818a0ec();
  *param_1 = uVar1;
  return;
}



/* Entry: 108158c04; end: 108158d87;  */

void FUN_108158c04(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *param_3;
  *param_3 = 0;
  uStack_48 = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      FUN_108159954();
      uStack_48 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_108159540(&uStack_38,&uStack_40,&uStack_48);
  uVar1 = uStack_38;
  uStack_38 = 0;
  FUN_1081595c0(&uStack_38);
  FUN_108158f90(&uStack_48);
  FUN_108159714(&uStack_40);
  *param_1 = 0;
  uStack_50 = uVar1;
  uStack_58 = 0;
  if (*(long *)(param_2 + 0x40) != 0) {
    do {
      FUN_108159954();
      uStack_58 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  FUN_10818bb98(&uStack_38,&uStack_50,&uStack_58);
  uVar1 = uStack_38;
  uStack_38 = 0;
  FUN_108154d4c(param_1,uVar1);
  FUN_108154cb4(&uStack_38);
  FUN_108159600(&uStack_58);
  func_0x000108159a84();
  if (*(int *)(param_2 + 0x38) == 5) {
    uStack_60 = *param_1;
    *param_1 = 0;
    FUN_10818c3b8(&uStack_38,&uStack_60,5);
    uVar1 = uStack_38;
    uStack_38 = 0;
    FUN_108154d4c(param_1,uVar1);
    FUN_108159668(&uStack_38);
    FUN_108154cb4(&uStack_60);
  }
  return;
}



/* Entry: 108158d88; end: 108158dd7;  */

long FUN_108158d88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x60);
    uVar2 = uVar1 + (long)*(int *)(param_1 + 0x68) * 0x18;
    do {
      FUN_108158b30();
      uVar1 = uVar1 + 0x18;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x60));
  }
  return param_1;
}



/* Entry: 108158dd8; end: 108158df3;  */

bool FUN_108158dd8(int param_1)

{
  FUN_108155444();
  return param_1 == 3;
}



/* Entry: 108158df4; end: 108158e2b;  */

void FUN_108158df4(long param_1,char *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(char *)(param_1 + 0x38) != *param_2) {
    *(char *)(param_1 + 0x38) = *param_2;
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



/* Entry: 108158e2c; end: 108158e8b;  */

undefined8 * FUN_108158e2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108158e8c; end: 108158e9f;  */

void FUN_108158e8c(void)

{
  func_0x000108158e5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108158ea0; end: 108158f03;  */

void FUN_108158ea0(long param_1)

{
  undefined8 uStack_30;
  float fStack_24;
  
  fStack_24 = *(float *)(param_1 + 0x50) * 0.01;
  FUN_108158fd0(*(undefined8 *)(param_1 + 0x30),&fStack_24);
  if (*(long *)(param_1 + 0x40) != 0) {
    uStack_30 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) * 0.38,
                         (float)*(undefined8 *)(param_1 + 0x48) * 0.38);
    func_0x000108158fec(*(long *)(param_1 + 0x40),&uStack_30);
  }
  return;
}



/* Entry: 108158f04; end: 108158f43;  */

void FUN_108158f04(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108158f44; end: 108158f6b;  */

void FUN_108158f44(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001081599e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108158f6c; end: 108158f8f;  */

void FUN_108158f6c(void)

{
  func_0x000108159988();
  FUN_108158f44();
  return;
}



/* Entry: 108158f90; end: 108158fcf;  */

void FUN_108158f90(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108158fd0; end: 10815900f;  */

void FUN_108158fd0(long param_1,float *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puStack_40;
  undefined1 auStack_38 [12];
  byte bStack_2c;
  undefined1 uStack_21;
  
  if (*(float *)(param_1 + 0x2c) != *param_2) {
    *(float *)(param_1 + 0x2c) = *param_2;
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



/* Entry: 108159010; end: 10815904f;  */

void FUN_108159010(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108159050; end: 108159087;  */

void FUN_108159050(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  plVar3 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar3 != (long *)0x0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001081599e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108159088; end: 10815909b;  */

void FUN_108159088(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  plVar2 = (long *)&UNK_10f47d0b1;
  func_0x000104bd47e8();
  func_0x000108159af8();
  lVar1 = *(long *)(param_2 + 8) + (*plVar2 - plVar2[1]);
  FUN_108159198(plVar2 + 2,*plVar2,plVar2[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar3 = *unaff_x20;
  unaff_x20[1] = uVar3;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar3;
  uVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar3;
  uVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10815909c; end: 10815910f;  */

void FUN_10815909c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000108159af8();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_108159198(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108159110; end: 10815917b;  */

long * FUN_108159110(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108159158();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10815917c; end: 108159197;  */

void FUN_10815917c(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  int extraout_w12;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104bd35f4();
    ppuStack_58 = &puStack_40;
    ppuStack_50 = &puStack_38;
    uStack_60 = param_1;
    puStack_40 = param_4;
    for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 2) {
      uVar1 = 0;
      if (*param_2 != 0) {
        do {
          func_0x000108159a5c();
          param_2 = extraout_x8;
          uVar1 = extraout_x9;
        } while (extraout_w12 != 0);
      }
      *param_4 = uVar1;
      *(int *)(param_4 + 1) = (int)param_2[1];
      param_4 = param_4 + 2;
    }
    uStack_48 = 1;
    FUN_108159224();
    FUN_108159254(&uStack_60);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
  return;
}



/* Entry: 108159198; end: 108159223;  */

void FUN_108159198(undefined8 param_1,long *param_2,long *param_3,undefined8 *param_4)

{
  long *extraout_x8;
  undefined8 extraout_x9;
  undefined8 uVar1;
  int extraout_w12;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; puStack_28 = param_4, param_2 != param_3; param_2 = param_2 + 2) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x000108159a5c();
        param_2 = extraout_x8;
        uVar1 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    *param_4 = uVar1;
    *(int *)(param_4 + 1) = (int)param_2[1];
    param_4 = param_4 + 2;
  }
  uStack_38 = 1;
  FUN_108159224();
  FUN_108159254(&uStack_50);
  return;
}



/* Entry: 108159224; end: 108159253;  */

void FUN_108159224(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_108159714();
  }
  return;
}



/* Entry: 108159254; end: 108159283;  */

long FUN_108159254(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108159284(param_1);
  }
  return param_1;
}



/* Entry: 108159284; end: 1081592a3;  */

void FUN_108159284(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    FUN_108159714();
  }
  return;
}



/* Entry: 1081592a4; end: 1081592ff;  */

void FUN_1081592a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    FUN_108159714();
  }
  return;
}



/* Entry: 108159300; end: 108159307;  */

void FUN_108159300(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108159af8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_108159714();
  }
  return;
}



/* Entry: 108159308; end: 10815938b;  */

void FUN_108159308(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108159af8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_108159714();
  }
  return;
}



/* Entry: 10815938c; end: 10815941f;  */

long FUN_10815938c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_108159420(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_108159110(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar2 = *param_2;
  *param_2 = 0;
  *puStack_38 = uVar2;
  *(undefined4 *)(puStack_38 + 1) = *(undefined4 *)(param_2 + 1);
  puStack_38 = puStack_38 + 2;
  func_0x000108159ad8();
  lVar3 = param_1[1];
  func_0x000108159a54();
  return lVar3;
}



/* Entry: 108159420; end: 10815945f;  */

ulong FUN_108159420(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  ulong uVar3;
  ulong unaff_x19;
  
  if (param_2 >> 0x3c != 0) {
    FUN_108159088();
    func_0x000108159988();
    if (param_1 != (long *)0x0) {
      do {
        func_0x000108159a6c();
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
        if (bVar2) {
          *extraout_x8 = extraout_w9;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((bool)in_ZR) {
        func_0x00010815999c();
        (*extraout_x8_00)();
      }
    }
    return unaff_x19;
  }
  uVar3 = param_1[2] - *param_1 >> 3;
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
    uVar3 = 0xfffffffffffffff;
  }
  return uVar3;
}



/* Entry: 108159460; end: 10815949f;  */

void FUN_108159460(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1081594a0; end: 108159503;  */

undefined8 FUN_1081594a0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001081594cc(&uStack_28);
  return param_1;
}



/* Entry: 108159504; end: 10815950b;  */

void FUN_108159504(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108159af8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_108159714();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10815950c; end: 10815953f;  */

void FUN_10815950c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108159af8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_108159714();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108159540; end: 1081595bf;  */

void FUN_108159540(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((*param_2 == 0) || (*param_3 == 0)) {
    *param_1 = 0;
  }
  else {
    func_0x000108159a4c();
    func_0x000108159b38();
    func_0x000108159b58();
    FUN_108188020();
    *param_1 = unaff_x20;
    FUN_108158f90(auStack_50);
    FUN_108159714(auStack_48);
  }
  return;
}



/* Entry: 1081595c0; end: 1081595ff;  */

void FUN_1081595c0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108159600; end: 10815963f;  */

void FUN_108159600(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108159640; end: 108159667;  */

void FUN_108159640(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined4 extraout_w9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001081599e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108159668; end: 1081596a7;  */

void FUN_108159668(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1081596a8; end: 1081596e7;  */

void FUN_1081596a8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1081596e8; end: 108159713;  */

undefined8 FUN_1081596e8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x0001081569f0(&uStack_28);
  return param_1;
}



/* Entry: 108159714; end: 108159737;  */

void FUN_108159714(void)

{
  func_0x000108159988();
  func_0x000108159060();
  return;
}



/* Entry: 108159738; end: 108159777;  */

void FUN_108159738(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 108159778; end: 1081597b7;  */

void FUN_108159778(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1081597b8; end: 1081597f7;  */

void FUN_1081597b8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  code *extraout_x8_00;
  undefined4 extraout_w9;
  
  func_0x000108159988();
  if (param_1 != 0) {
    do {
      func_0x000108159a6c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_w9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x00010815999c();
      (*extraout_x8_00)();
    }
  }
  return;
}



/* Entry: 1081597f8; end: 108159873;  */

void FUN_1081597f8(long *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x000108159af8();
  if (*param_1 != 0) {
    FUN_108156a20();
    __ZdlPv(*unaff_x20);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 108159874; end: 108159887;  */

void FUN_108159874(void)

{
  func_0x000108159848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108159888; end: 108159953;  */

uint FUN_108159888(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_2 + 0x3c);
  fVar8 = (float)param_1;
  bVar1 = false;
  if ((*(float *)(param_2 + 0x38) <= fVar8) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar7))) {
    bVar1 = fVar8 < fVar7;
  }
  if (bVar1) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if (fVar7 < fVar8) {
      uVar4 = (uint)(fVar8 <= *(float *)(param_2 + 0x38));
    }
  }
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4 ^ (*(ushort *)(lVar2 + 0x28) & 0x40) == 0;
    FUN_10818c8b4(lVar2,uVar4);
  }
  if (uVar4 == 0) {
    lVar2 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar2 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3;
  }
  for (lVar6 = 0; lVar2 != lVar6; lVar6 = lVar6 + 1) {
    plVar3 = *(long **)(*(long *)(param_2 + 0x10) + lVar6 * 8);
    (**(code **)(*plVar3 + 0x18))(param_1);
    uVar5 = uVar5 | (uint)plVar3;
  }
  return uVar5 & 1;
}



/* Entry: 108159954; end: 108159b77;  */

void FUN_108159954(void)

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



/* Entry: 108159b78; end: 108159d23;  */

void FUN_108159b78(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  *param_1 = 0;
  plVar1 = (long *)0x50;
  __Znwm();
  FUN_108159dc0(&plStack_58);
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 1) = 1;
  plVar1[3] = 0;
  plVar1[4] = 0;
  *(undefined2 *)(plVar1 + 5) = 0;
  *plVar1 = (long)&PTR_DAT_110a28398;
  plVar1[6] = (long)plStack_58;
  plStack_58 = (long *)0x0;
  FUN_108159010(&plStack_58);
  *plVar1 = (long)&PTR_SUB_110a28330;
  plVar1[7] = 0;
  plVar1[8] = 0;
  plVar1[9] = 0;
  FUN_108154e4c(param_3);
  FUN_108161998(plVar1,param_2,param_3,plVar1 + 7);
  plStack_60 = plVar1;
  FUN_10816040c(plVar1 + 2);
  FUN_108159d24(param_1,plVar1 + 6);
  plStack_60 = (long *)0x0;
  if ((plVar1[2] == plVar1[3]) && ((*(byte *)((long)plVar1 + 0x29) & 1) == 0)) {
    plStack_68 = plVar1;
    (**(code **)(*plVar1 + 0x18))(0,plVar1);
  }
  else {
    plStack_68 = (long *)0x0;
    plStack_58 = plVar1;
    FUN_108155570(*(undefined8 *)(param_2 + 0x70),&plStack_58);
    FUN_108155920(&plStack_58);
  }
  FUN_108159d70(&plStack_68);
  FUN_108159d70(&plStack_60);
  return;
}



/* Entry: 108159d24; end: 108159d6f;  */

long * FUN_108159d24(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_108159f2c(param_1);
  }
  return param_1;
}



/* Entry: 108159d70; end: 108159dbf;  */

long * FUN_108159d70(long *param_1)

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



/* Entry: 108159dc0; end: 108159e23;  */

void FUN_108159dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  uVar1 = 0x40;
  __Znwm();
  FUN_108376ad8(auStack_30);
  FUN_10818b41c(uVar1,auStack_30);
  *param_1 = uVar1;
  func_0x000108159f68();
  return;
}



/* Entry: 108159e24; end: 108159e7b;  */

undefined8 * FUN_108159e24(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a28398;
  FUN_108159010(param_1 + 6);
  *param_1 = &PTR_FUN_110a28970;
  FUN_1081596e8(param_1 + 2);
  return param_1;
}



/* Entry: 108159e7c; end: 108159e8f;  */

void FUN_108159e7c(void)

{
  func_0x000108159e54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108159e90; end: 108159f2b;  */

void FUN_108159e90(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined1 auStack_30 [14];
  byte bStack_22;
  
  FUN_1081617f8(auStack_30,param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    bVar2 = *(char *)(param_1 + 0x29) << 2;
  }
  else {
    bVar2 = 4;
  }
  bStack_22 = bStack_22 & 0xf8 | *(byte *)(lVar3 + 0x3e) & 3 | bVar2;
  uVar1 = lVar3 + 0x30;
  func_0x000108376bec(uVar1,auStack_30);
  if ((uVar1 & 1) == 0) {
    FUN_108376b90(lVar3 + 0x30,auStack_30);
    FUN_10818a7f4(lVar3,1);
  }
  func_0x000108159f68();
  return;
}



/* Entry: 108159f2c; end: 108159f7b;  */

void FUN_108159f2c(long *param_1,long param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000108159f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108159f7c; end: 108159f9b;  */

void FUN_108159f7c(void)

{
  func_0x00010815c5f0();
  FUN_108154d4c();
  return;
}



/* Entry: 108159f9c; end: 108159fb7;  */

/* WARNING: Removing unreachable block (ram,0x00010818a8f0) */
/* WARNING: Removing unreachable block (ram,0x00010818a8fc) */
/* WARNING: Removing unreachable block (ram,0x00010818a908) */
/* WARNING: Removing unreachable block (ram,0x00010818a940) */

long * FUN_108159f9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long param_5)

{
  long *plVar1;
  undefined1 auStack_40 [12];
  byte bStack_34;
  
  plVar1 = *(long **)(param_5 + 8);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  func_0x00010818add8(auStack_40);
  if (((bStack_34 & 1) == 0) && ((*(ushort *)(plVar1 + 5) >> 2 & 1) != 0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,0,0x113254e20);
    *(undefined4 *)(plVar1 + 3) = param_1;
    *(undefined4 *)((long)plVar1 + 0x1c) = param_2;
    *(undefined4 *)(plVar1 + 4) = param_3;
    *(undefined4 *)((long)plVar1 + 0x24) = param_4;
    *(ushort *)(plVar1 + 5) = *(ushort *)(plVar1 + 5) & 0xfff3;
  }
  func_0x00010818a9f8(auStack_40);
  return plVar1 + 3;
}



/* Entry: 108159fb8; end: 10815a0b7;  */

void FUN_108159fb8(undefined *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long extraout_x8;
  long *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_490 [8];
  long lStack_488;
  undefined *puStack_448;
  long alStack_438 [127];
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  func_0x00010815c63c();
  uVar2 = param_2;
  uStack_38 = extraout_x9;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = alStack_438;
    uVar2 = 0x400;
    _vsnprintf(plVar1,0x400,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      param_1 = &UNK_10f47d0be;
      FUN_10841076c();
      param_3 = param_4;
    }
    else {
      if (0x3ff < (uint)plVar1) {
        uStack_3c = 0x2e2e2e;
      }
      if (param_3 == (long *)0x0) {
        puStack_448 = (undefined *)0x1138270b0;
      }
      else {
        FUN_1081858c0(&puStack_448,param_3);
      }
      param_3 = alStack_438;
      (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                (*(long **)(param_1 + 0x18),param_2,param_3,puStack_448 + 8);
      param_1 = puStack_448;
      FUN_1083a3ca0();
      uVar2 = param_2;
    }
  }
  func_0x00010815c63c(uStack_38);
  if (extraout_x9_00 == extraout_x8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010815c5c8();
  if (*param_3 == 0) {
    *extraout_x8_00 = 0;
    return;
  }
  FUN_10815a1e0(&lStack_488,uVar2,param_3,param_1);
  if ((*(long *)(lStack_488 + 0x10) == *(long *)(lStack_488 + 0x18)) &&
     ((*(byte *)(lStack_488 + 0x29) & 1) == 0)) {
    func_0x00010815c64c();
    (*extraout_x8_01)(0);
  }
  FUN_10815a280(param_1,lStack_488 + 0x30);
  if ((*(long *)(lStack_488 + 0x10) == *(long *)(lStack_488 + 0x18)) &&
     ((*(byte *)(lStack_488 + 0x29) & 1) == 0)) {
    if ((((ulong)param_1 & 1) == 0) && (1.0 <= *(float *)(*(long *)(lStack_488 + 0x30) + 0x38))) {
      lVar3 = *param_3;
      *param_3 = 0;
      goto LAB_10815a17c;
    }
  }
  else {
    do {
      func_0x00010815c4f0();
    } while (extraout_w11 != 0);
    FUN_108155570();
    FUN_108155920(auStack_490);
  }
  lVar3 = 0;
  if (*(long *)(lStack_488 + 0x30) != 0) {
    do {
      func_0x00010815c4f0();
      lVar3 = extraout_x8_02;
    } while (extraout_w11_00 != 0);
  }
LAB_10815a17c:
  *extraout_x8_00 = lVar3;
  FUN_10815bc34(&lStack_488);
  return;
}



/* Entry: 10815a0b8; end: 10815a1df;  */

void FUN_10815a0b8(long *param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  code *extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  if (*param_4 == 0) {
    *param_1 = 0;
    return;
  }
  FUN_10815a1e0(&lStack_38,param_3,param_4,param_2);
  if ((*(long *)(lStack_38 + 0x10) == *(long *)(lStack_38 + 0x18)) &&
     ((*(byte *)(lStack_38 + 0x29) & 1) == 0)) {
    func_0x00010815c64c();
    (*extraout_x8)(0);
  }
  FUN_10815a280(param_2,lStack_38 + 0x30);
  if ((*(long *)(lStack_38 + 0x10) == *(long *)(lStack_38 + 0x18)) &&
     ((*(byte *)(lStack_38 + 0x29) & 1) == 0)) {
    if (((param_2 & 1) == 0) && (1.0 <= *(float *)(*(long *)(lStack_38 + 0x30) + 0x38))) {
      lVar1 = *param_4;
      *param_4 = 0;
      goto LAB_10815a17c;
    }
  }
  else {
    do {
      func_0x00010815c4f0();
    } while (extraout_w11 != 0);
    FUN_108155570();
    FUN_108155920(auStack_40);
  }
  lVar1 = 0;
  if (*(long *)(lStack_38 + 0x30) != 0) {
    do {
      func_0x00010815c4f0();
      lVar1 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
LAB_10815a17c:
  *param_1 = lVar1;
  FUN_10815bc34(&lStack_38);
  return;
}



/* Entry: 10815a1e0; end: 10815a27f;  */

void FUN_10815a1e0(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 uStack_48;
  
  lVar1 = 0x40;
  __Znwm();
  uStack_48 = 0;
  if (*param_3 != 0) {
    do {
      func_0x00010815c4f0();
      uStack_48 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10815b9c8(lVar1,param_2,&uStack_48,param_4);
  *param_1 = lVar1;
  func_0x00010815c618();
  FUN_10816040c(lVar1 + 0x10);
  return;
}



/* Entry: 10815a280; end: 10815a2ef;  */

undefined1 * FUN_10815a280(undefined1 *param_1)

{
  undefined1 in_ZR;
  uint extraout_w8;
  long extraout_x8;
  long unaff_x19;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_59;
  undefined1 auStack_58 [40];
  
  func_0x00010815c51c();
  if (unaff_x19 == 0) {
    uStack_59 = 0;
  }
  else {
    func_0x00010815c508();
    func_0x00010815c5b0(&PTR_FUN_110a28500);
    func_0x00010815c580(*(undefined8 *)(extraout_x8 + 0x20));
    param_1 = auStack_58;
    FUN_10815c184(param_1);
  }
  func_0x00010815c538(uStack_59);
  if ((bool)in_ZR) {
    return (undefined1 *)(ulong)(extraout_w8 & 1);
  }
  ___stack_chk_fail();
  func_0x00010815c658();
  FUN_10815c184();
  func_0x00010815c5c8();
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_10815b6f4();
  FUN_1081596e8(&uStack_98);
  return param_1;
}



/* Entry: 10815a2f0; end: 10815a32f;  */

undefined8 FUN_10815a2f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10815b6f4(param_1,param_2,&uStack_38);
  FUN_1081596e8(&uStack_38);
  return param_1;
}



/* Entry: 10815a330; end: 10815a39f;  */

long ** FUN_10815a330(undefined1 *param_1,long *param_2,long **param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long **pplVar2;
  undefined1 uVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint uVar4;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x8_01;
  byte *pbVar5;
  int extraout_w11;
  long unaff_x19;
  undefined8 uVar6;
  long *plVar7;
  undefined8 unaff_x22;
  undefined1 uStack_129;
  long alStack_128 [5];
  undefined8 uStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined1 *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  long *plStack_c8;
  undefined1 uStack_b9;
  long *aplStack_b8 [3];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 uStack_59;
  undefined1 auStack_58 [40];
  
  func_0x00010815c51c();
  if (unaff_x19 == 0) {
    uStack_59 = 0;
  }
  else {
    func_0x00010815c508();
    func_0x00010815c5b0(&PTR_FUN_110a28470);
    func_0x00010815c580(*(undefined8 *)(extraout_x8 + 0x18));
    param_1 = auStack_58;
    FUN_10815c088();
  }
  func_0x00010815c538(uStack_59);
  uVar4 = extraout_w8;
  if ((bool)in_ZR) goto LAB_10815c564;
  ___stack_chk_fail();
  func_0x00010815c658();
  FUN_10815c088();
  func_0x00010815c5c8();
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = FUN_10815a3a0;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_b9 = 0;
  pplVar2 = param_3;
  if (param_3 == (long **)0x0) {
LAB_10815a408:
    uVar3 = 0;
  }
  else {
    FUN_108154b58(param_3,&UNK_10f47d11b);
    FUN_108158a5c();
    if (param_3 == (long **)0x0) goto LAB_10815a408;
    in_ZR = ((ulong)*param_3 & 7) == 0;
    if ((bool)in_ZR) {
      pbVar5 = (byte *)((long)param_3 + 1);
    }
    else {
      pbVar5 = (byte *)(((ulong)*param_3 & 0xfffffffffffffff8) + 8);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    FUN_1083a3348(aplStack_b8,pbVar5);
    plStack_c8 = (long *)0x0;
    if (*param_2 != 0) {
      do {
        func_0x00010815c4f0();
        plStack_c8 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    pplVar2 = &plStack_c8;
    FUN_10815d3e4(uVar6,aplStack_b8);
    FUN_10815c1b8(&plStack_c8);
    FUN_1083a3ca0(aplStack_b8[0]);
    uVar3 = 1;
    uStack_b9 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    unaff_x22 = *(undefined8 *)(param_1 + 0x78);
    puVar1 = (undefined8 *)0x20;
    __Znwm(uVar3);
    *puVar1 = &PTR_FUN_110a28590;
    puVar1[1] = &uStack_b9;
    puVar1[2] = param_2;
    puVar1[3] = param_1;
    pplVar2 = aplStack_b8;
    puStack_a0 = puVar1;
    (**(code **)(*plVar7 + 0x28))(plVar7,unaff_x22);
    FUN_10815c2c4(aplStack_b8);
    uVar3 = uStack_b9;
  }
  func_0x00010815c538(uVar3);
  if ((bool)in_ZR) {
    return (long **)(ulong)(extraout_w8_00 & 1);
  }
  ___stack_chk_fail();
  func_0x00010815c658();
  FUN_10815c1b8();
  FUN_1083a3ca0();
  func_0x00010815c5c8();
  pcStack_d8 = FUN_10815a508;
  uStack_100 = unaff_x22;
  plStack_f8 = plVar7;
  plStack_f0 = param_2;
  puStack_e8 = param_1;
  ppuStack_e0 = &puStack_70;
  func_0x00010815c51c();
  if (param_1 == (undefined1 *)0x0) {
    uStack_129 = 0;
    plVar7 = aplStack_b8[0];
  }
  else {
    func_0x00010815c508();
    func_0x00010815c5b0(&PTR_FUN_110a28620);
    func_0x00010815c580(*(undefined8 *)(extraout_x8_01 + 0x30));
    plVar7 = alStack_128;
    FUN_10815c404();
  }
  func_0x00010815c538(uStack_129);
  uVar4 = extraout_w8_01;
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010815c658();
    FUN_10815c404();
    func_0x00010815c5c8();
    FUN_108154b58(pplVar2,&UNK_10f47d11f);
    FUN_108158a5c();
    if (pplVar2 == (long **)0x0) {
      pbVar5 = (byte *)plVar7[1];
    }
    else if (((ulong)*pplVar2 & 7) == 0) {
      pbVar5 = (byte *)((long)pplVar2 + 1);
    }
    else {
      pbVar5 = (byte *)(((ulong)*pplVar2 & 0xfffffffffffffff8) + 8);
    }
    *(byte **)(*plVar7 + 0x78) = pbVar5;
    return pplVar2;
  }
LAB_10815c564:
  return (long **)(ulong)(uVar4 & 1);
}



/* Entry: 10815a3a0; end: 10815a507;  */

long ** FUN_10815a3a0(long param_1,long *param_2,long **param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long **pplVar2;
  undefined1 uVar3;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long extraout_x8_00;
  byte *pbVar4;
  int extraout_w11;
  undefined8 uVar5;
  long *plVar6;
  undefined8 unaff_x22;
  undefined1 uStack_c9;
  long alStack_c8 [5];
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long *plStack_68;
  undefined1 uStack_59;
  long *aplStack_58 [3];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_59 = 0;
  pplVar2 = param_3;
  if (param_3 != (long **)0x0) {
    FUN_108154b58(param_3,&UNK_10f47d11b);
    FUN_108158a5c();
    if (param_3 != (long **)0x0) {
      in_ZR = ((ulong)*param_3 & 7) == 0;
      if ((bool)in_ZR) {
        pbVar4 = (byte *)((long)param_3 + 1);
      }
      else {
        pbVar4 = (byte *)(((ulong)*param_3 & 0xfffffffffffffff8) + 8);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_1083a3348(aplStack_58,pbVar4);
      plStack_68 = (long *)0x0;
      if (*param_2 != 0) {
        do {
          func_0x00010815c4f0();
          plStack_68 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      pplVar2 = &plStack_68;
      FUN_10815d3e4(uVar5,aplStack_58);
      FUN_10815c1b8(&plStack_68);
      FUN_1083a3ca0(aplStack_58[0]);
      uVar3 = 1;
      uStack_59 = 1;
      goto LAB_10815a460;
    }
  }
  uVar3 = 0;
LAB_10815a460:
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    unaff_x22 = *(undefined8 *)(param_1 + 0x78);
    puVar1 = (undefined8 *)0x20;
    __Znwm(uVar3);
    *puVar1 = &PTR_FUN_110a28590;
    puVar1[1] = &uStack_59;
    puVar1[2] = param_2;
    puVar1[3] = param_1;
    pplVar2 = aplStack_58;
    puStack_40 = puVar1;
    (**(code **)(*plVar6 + 0x28))(plVar6,unaff_x22);
    FUN_10815c2c4(aplStack_58);
    uVar3 = uStack_59;
  }
  func_0x00010815c538(uVar3);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010815c658();
    FUN_10815c1b8();
    FUN_1083a3ca0();
    func_0x00010815c5c8();
    pcStack_78 = FUN_10815a508;
    uStack_a0 = unaff_x22;
    plStack_98 = plVar6;
    plStack_90 = param_2;
    lStack_88 = param_1;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010815c51c();
    if (param_1 == 0) {
      uStack_c9 = 0;
      plVar6 = aplStack_58[0];
    }
    else {
      func_0x00010815c508();
      func_0x00010815c5b0(&PTR_FUN_110a28620);
      func_0x00010815c580(*(undefined8 *)(extraout_x8_00 + 0x30));
      plVar6 = alStack_c8;
      FUN_10815c404();
    }
    func_0x00010815c538(uStack_c9);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010815c658();
      FUN_10815c404();
      func_0x00010815c5c8();
      FUN_108154b58(pplVar2,&UNK_10f47d11f);
      FUN_108158a5c();
      if (pplVar2 == (long **)0x0) {
        pbVar4 = (byte *)plVar6[1];
      }
      else if (((ulong)*pplVar2 & 7) == 0) {
        pbVar4 = (byte *)((long)pplVar2 + 1);
      }
      else {
        pbVar4 = (byte *)(((ulong)*pplVar2 & 0xfffffffffffffff8) + 8);
      }
      *(byte **)(*plVar6 + 0x78) = pbVar4;
      return pplVar2;
    }
    return (long **)(ulong)(extraout_w8_00 & 1);
  }
  return (long **)(ulong)(extraout_w8 & 1);
}



/* Entry: 10815a508; end: 10815a577;  */

ulong * FUN_10815a508(long *param_1,undefined8 param_2,ulong *param_3)

{
  undefined1 in_ZR;
  uint extraout_w8;
  long extraout_x8;
  byte *pbVar1;
  long unaff_x19;
  undefined1 uStack_59;
  long alStack_58 [5];
  
  func_0x00010815c51c();
  if (unaff_x19 == 0) {
    uStack_59 = 0;
  }
  else {
    func_0x00010815c508();
    func_0x00010815c5b0(&PTR_FUN_110a28620);
    func_0x00010815c580(*(undefined8 *)(extraout_x8 + 0x30));
    param_1 = alStack_58;
    FUN_10815c404();
  }
  func_0x00010815c538(uStack_59);
  if ((bool)in_ZR) {
    return (ulong *)(ulong)(extraout_w8 & 1);
  }
  ___stack_chk_fail();
  func_0x00010815c658();
  FUN_10815c404();
  func_0x00010815c5c8();
  FUN_108154b58(param_3,&UNK_10f47d11f);
  FUN_108158a5c();
  if (param_3 == (ulong *)0x0) {
    pbVar1 = (byte *)param_1[1];
  }
  else if ((*param_3 & 7) == 0) {
    pbVar1 = (byte *)((long)param_3 + 1);
  }
  else {
    pbVar1 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
  }
  *(byte **)(*param_1 + 0x78) = pbVar1;
  return param_3;
}



/* Entry: 10815a578; end: 10815a63b;  */

void FUN_10815a578(long *param_1,undefined8 param_2,ulong *param_3)

{
  byte *pbVar1;
  
  FUN_108154b58(param_3,&UNK_10f47d11f);
  FUN_108158a5c();
  if (param_3 == (ulong *)0x0) {
    pbVar1 = (byte *)param_1[1];
  }
  else if ((*param_3 & 7) == 0) {
    pbVar1 = (byte *)((long)param_3 + 1);
  }
  else {
    pbVar1 = (byte *)((*param_3 & 0xfffffffffffffff8) + 8);
  }
  *(byte **)(*param_1 + 0x78) = pbVar1;
  return;
}



/* Entry: 10815a63c; end: 10815b163;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 ** FUN_10815a63c(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  long *plVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  int *extraout_x8_01;
  undefined8 **extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  int extraout_w10;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  ulong uVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  long alStack_2c8 [2];
  undefined8 *puStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 *puStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  int *piStack_210;
  undefined8 *puStack_208;
  uint *puStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  undefined8 uStack_1d8;
  byte bStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 **ppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  ulong uStack_160;
  ulong auStack_138 [3];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = *(undefined8 **)(param_2 + 2);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x10;
    __Znwm();
    *puVar8 = &PTR_DAT_110a286b0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 1) = 1;
  }
  else {
    do {
      func_0x00010815c4c8();
    } while (extraout_w10 != 0);
  }
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  puStack_178 = puVar8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  FUN_108185db0(auStack_e0,param_3,param_4);
  puVar9 = auStack_c0;
  FUN_10815545c();
  if (((ulong)puVar9 & 1) == 0) {
    if (*(long *)(param_2 + 8) != 0) {
      func_0x00010815c64c();
      func_0x00010815c664();
    }
    *param_1 = 0;
    goto LAB_10815af30;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  fVar24 = (float)((long)puVar9 - (long)puVar8) / 1e+06;
  param_2[0x15] = (uint)fVar24;
  func_0x00010815c5a8();
  puStack_250 = (undefined8 *)0x1138270b0;
  FUN_108155ab0(&lStack_180);
  func_0x00010815c680();
  func_0x00010815c5a8();
  puStack_250 = (undefined8 *)((ulong)puStack_250 & 0xffffffff00000000);
  func_0x00010815c634();
  fVar25 = fVar24;
  func_0x00010815c5a8();
  uStack_170 = (ulong)uStack_170._4_4_ << 0x20;
  func_0x00010815c670();
  fVar26 = fVar25;
  func_0x00010815c5a8();
  puStack_250._0_4_ = 0xbf800000;
  func_0x00010815c634();
  fVar27 = fVar26;
  func_0x00010815c5a8();
  puStack_250._0_4_ = 0;
  func_0x00010815c634();
  fVar30 = fVar27;
  func_0x00010815c5a8();
  puStack_250 = (undefined8 *)CONCAT44(puStack_250._4_4_,0x7f7fffff);
  func_0x00010815c634();
  fVar31 = fVar27;
  if (fVar27 <= fVar30) {
    fVar31 = fVar30;
  }
  if ((fVar24 <= 0.0) || (fVar25 <= 0.0)) {
LAB_10815a83c:
    if (*(long *)(param_2 + 8) != 0) {
      FUN_1083a3c34(&puStack_250,&UNK_10f47d13f);
      (**(code **)(**(long **)(param_2 + 8) + 0x18))(*(long **)(param_2 + 8),1,puStack_250 + 1,0);
      func_0x00010815c680();
    }
    *param_1 = 0;
  }
  else {
    fVar30 = (fVar31 - fVar27) / fVar26;
    bVar7 = true;
    if ((0.0 < fVar26) && (bVar7 = true, !NAN((fVar27 - fVar27) * fVar31 * fVar30))) {
      bVar7 = false;
    }
    if (bVar7) goto LAB_10815a83c;
    if (*(long *)(param_2 + 0x10) == 0) {
      FUN_1081fd994(&uStack_188);
    }
    else {
      do {
        func_0x00010815c4f0();
        uStack_188 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puStack_250 = puStack_178;
    uStack_218 = uStack_188;
    puStack_178 = (undefined8 *)0x0;
    lStack_248 = *(long *)(param_2 + 4);
    if (lStack_248 != 0) {
      piVar10 = (int *)(lStack_248 + 8);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uStack_238 = *(undefined8 *)(param_2 + 8);
    uStack_240 = *(undefined8 *)(param_2 + 6);
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    uStack_228 = *(undefined8 *)(param_2 + 0xc);
    lStack_230 = *(long *)(param_2 + 10);
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    uStack_220 = *(undefined8 *)(param_2 + 0xe);
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    uStack_188 = 0;
    uVar2 = *param_2;
    uVar20 = (ulong)uVar2;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    piVar10 = (int *)0x10;
    __Znwm();
    piVar10[0] = 0;
    piVar10[1] = 0;
    piVar10[2] = 0;
    piVar10[3] = 0;
    *piVar10 = 1;
    puVar11 = (undefined8 *)0x68;
    piStack_210 = piVar10;
    __Znwm();
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar7) {
        *piVar10 = *piVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *(undefined4 *)(puVar11 + 1) = 1;
    *puVar11 = &PTR_FUN_110a28718;
    puVar11[3] = 0;
    puVar11[2] = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[7] = 0;
    puVar11[6] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    uStack_170 = 0;
    puVar11[0xc] = piVar10;
    puStack_208 = puVar11;
    FUN_10815bc78(&uStack_170);
    uStack_1d8 = 0;
    bStack_1d0 = bStack_1d0 & 0xfe;
    puStack_1c0 = (undefined8 *)0x0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    puStack_200 = param_2 + 0x14;
    fStack_1f8 = fVar24;
    fStack_1f4 = fVar25;
    fStack_1f0 = fVar30;
    fStack_1ec = fVar26;
    uStack_1e8 = uVar2;
    func_0x000108143710(&uStack_290);
    FUN_10815be4c(&uStack_288);
    FUN_10815be04(&uStack_280);
    FUN_10815bdbc(&uStack_278);
    FUN_10815bd74(&uStack_270);
    FUN_10815bd2c(&uStack_268);
    FUN_10812cc0c(&uStack_260);
    puVar22 = &uStack_258;
    func_0x0001081419f4();
    func_0x00010815c5a8();
    FUN_108155f00();
    if ((puVar22 != (ulong *)0x0) && (lStack_230 != 0)) {
      puVar22 = (ulong *)(*puVar22 & 0xfffffffffffffff8);
      fVar32 = 1.0 / (fStack_1ec * fStack_1f0);
      uVar23 = (ulong)(uint)(fStack_1ec * fStack_1f0);
      for (lVar21 = *puVar22 << 3; uVar20 = 0, lVar21 != 0; lVar21 = lVar21 + -8) {
        puVar22 = puVar22 + 1;
        puVar12 = puVar22;
        FUN_108154e4c();
        uVar20 = uVar23;
        if (puVar12 != (ulong *)0x0) {
          puVar13 = puVar12;
          FUN_108154b58(puVar12,&DAT_10f47d0f6);
          FUN_108158a5c();
          FUN_108154b58(puVar12,&DAT_10f47d0f9);
          uStack_170._0_4_ = 0xbf800000;
          func_0x00010815c670();
          uVar20 = uVar23;
          FUN_108154b58(puVar12,&UNK_10f47d0fc);
          uStack_170 = CONCAT44(uStack_170._4_4_,0xbf800000);
          func_0x00010815c670();
          if (((puVar13 == (ulong *)0x0) || (fVar29 = (float)uVar23, fVar29 < 0.0)) ||
             (fVar28 = (float)uVar20, fVar28 < 0.0)) {
            FUN_108159fb8(&puStack_250,0,puVar12,&UNK_10f47d0ff);
          }
          else {
            if ((*puVar13 & 7) == 0) {
              pbVar19 = (byte *)((long)puVar13 + 1);
            }
            else {
              pbVar19 = (byte *)((*puVar13 & 0xfffffffffffffff8) + 8);
            }
            uVar20 = (ulong)(uint)(fVar32 * fVar29);
            fVar29 = fVar29 + fVar28;
            func_0x00010815c64c(fVar29,fVar32 * fVar29,lStack_230,pbVar19);
            (*extraout_x8_00)();
          }
        }
        uVar23 = uVar20;
      }
    }
    FUN_10815a2f0(&lStack_120,&puStack_250);
    puVar22 = auStack_138;
    FUN_1081589bc(puVar22,&puStack_250,auStack_c0,0);
    func_0x00010815c5a8();
    FUN_108155f00();
    if (puVar22 != (ulong *)0x0) {
      plVar17 = (long *)(*puVar22 & 0xfffffffffffffff8) + 1;
      plVar1 = plVar17 + *(long *)(*puVar22 & 0xfffffffffffffff8);
      for (; plVar17 != plVar1; plVar17 = plVar17 + 1) {
        plVar14 = plVar17;
        FUN_108154e4c();
        puVar22 = (ulong *)0x0;
        if (plVar14 != (long *)0x0) {
          FUN_108154b58(plVar14,"id");
          puStack_f8 = (ulong *)0x1138270b0;
          FUN_108155ab0(&uStack_f0);
          uVar20 = uVar20 & 0xffffffffffffff00;
          FUN_1083a33c4(&uStack_170,&uStack_f0);
          puVar11 = puStack_1c0;
          uVar2 = uStack_1c8._4_4_;
          plStack_168 = plVar14;
          uStack_160 = uVar20;
          if ((int)(uStack_1c8._4_4_ * 3) <= (int)uStack_1c8 * 4) {
            uVar3 = uStack_1c8._4_4_ << 1;
            if ((int)uStack_1c8._4_4_ < 1) {
              uVar3 = 4;
            }
            uStack_1c8 = (ulong)uVar3 << 0x20;
            puStack_1c0 = (undefined8 *)0x0;
            puStack_e8 = puVar11;
            puVar15 = (undefined8 *)(((ulong)(uVar3 >> 1) & 0x3fffffff) << 6 | 0x10);
            __Znam();
            *puVar15 = 0x20;
            puVar15[1] = (ulong)uVar3;
            puStack_1c0 = puVar15 + 2;
            if (uVar3 != 0) {
              lVar21 = (ulong)uVar3 << 5;
              puVar15 = puStack_1c0;
              do {
                *(undefined4 *)puVar15 = 0;
                lVar21 = lVar21 + -0x20;
                puVar15 = puVar15 + 4;
              } while (lVar21 != 0);
            }
            puVar11 = puVar11 + 1;
            for (uVar23 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)); uVar23 != 0;
                uVar23 = uVar23 - 1) {
              if (*(int *)(puVar11 + -1) != 0) {
                FUN_10815be94(&uStack_1c8,puVar11);
              }
              puVar11 = puVar11 + 4;
            }
            func_0x00010815b658(&puStack_e8);
          }
          FUN_10815be94(&uStack_1c8,&uStack_170);
          FUN_1083a3ca0(uStack_170);
          FUN_1083a3ca0(uStack_f0);
          puVar22 = puStack_f8;
          FUN_1083a3ca0();
        }
      }
    }
    func_0x00010815c5a8();
    FUN_108154e4c();
    puVar12 = puVar22;
    func_0x00010815c5a8();
    FUN_108155f00();
    ppuVar16 = &puStack_250;
    FUN_1081760c0(ppuVar16,puVar22,puVar12);
    func_0x00010815c5a8();
    FUN_108154e4c();
    ppuStack_190 = ppuVar16;
    FUN_108155b2c(&uStack_170,&puStack_250,&fStack_1f8,auStack_c0);
    FUN_10815605c(&puStack_e8,&uStack_170,&puStack_250);
    func_0x000108155f60(&uStack_170);
    lVar6 = lStack_110;
    lVar21 = lStack_118;
    *(undefined8 *)(lStack_120 + 0x70) = uStack_100;
    uStack_170 = lStack_118;
    uStack_160 = uStack_108;
    plStack_168 = (long *)lStack_110;
    uStack_108 = 0;
    lStack_118 = 0;
    lStack_110 = 0;
    *(long *)(puStack_200 + 6) = lVar6 - lVar21 >> 3;
    piVar10 = piStack_210;
    if (puStack_e8 != (undefined8 *)0x0) {
      do {
        func_0x00010815c4f0();
        piVar10 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    uStack_f0 = 0;
    FUN_108154d4c(piVar10 + 2);
    FUN_108154cb4(&uStack_f0);
    FUN_108159f9c(piStack_210);
    puStack_2b8 = puStack_e8;
    uStack_2a0 = uStack_160;
    puVar11 = puStack_208;
    puStack_e8 = (undefined8 *)0x0;
    lStack_2a8 = (long)plStack_168;
    lStack_2b0 = uStack_170;
    uStack_170 = 0;
    plStack_168 = (long *)0x0;
    uStack_160 = 0;
    puStack_208 = (undefined8 *)0x0;
    puStack_298 = puVar11;
    FUN_1081596e8(&uStack_170);
    FUN_108154cb4(&puStack_e8);
    FUN_108158a14(auStack_138);
    plVar17 = &lStack_118;
    FUN_1081596e8();
    ppuVar16 = (undefined8 **)(param_2 + 0x12);
    if (ppuVar16 != &puStack_298) {
      if (puVar11 != (undefined8 *)0x0) {
        do {
          func_0x00010815c4f0();
          ppuVar16 = extraout_x8_02;
        } while (extraout_w11_01 != 0);
      }
      plVar17 = *ppuVar16;
      *ppuVar16 = puVar11;
      FUN_10815bd08();
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    param_2[0x16] = (uint)((float)((long)plVar17 - (long)puVar9) / 1e+06);
    param_2[0x14] = (uint)((float)((long)plVar17 - (long)puVar8) / 1e+06);
    if ((puStack_2b8 == (undefined8 *)0x0) && (*(long *)(param_2 + 8) != 0)) {
      func_0x00010815c64c();
      func_0x00010815c664();
    }
    bVar5 = bStack_1d0;
    puVar18 = (undefined4 *)0x60;
    __Znwm();
    puVar8 = puStack_2b8;
    puStack_2b8 = (undefined8 *)0x0;
    if ((lStack_180 != 0) && (lStack_180 != 0x1138270b0)) {
      piVar10 = (int *)(lStack_180 + 4);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar7) {
          *piVar10 = *piVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    alStack_2c8[0] = lStack_180;
    alStack_2c8[1] = 0;
    *puVar18 = 1;
    *(undefined8 **)(puVar18 + 2) = puVar8;
    *(long *)(puVar18 + 6) = lStack_2a8;
    *(long *)(puVar18 + 4) = lStack_2b0;
    *(ulong *)(puVar18 + 8) = uStack_2a0;
    lStack_2a8 = 0;
    uStack_2a0 = 0;
    lStack_2b0 = 0;
    FUN_1083a33c4(puVar18 + 10,alStack_2c8);
    puVar18[0xc] = fVar24;
    puVar18[0xd] = fVar25;
    *(double *)(puVar18 + 0xe) = (double)fVar27;
    *(double *)(puVar18 + 0x10) = (double)fVar31;
    *(double *)(puVar18 + 0x12) = (double)fVar30;
    *(double *)(puVar18 + 0x14) = (double)fVar26;
    puVar18[0x16] = bVar5 & 1;
    *param_1 = puVar18;
    FUN_1083a3ca0(alStack_2c8[0]);
    FUN_108154cb4(alStack_2c8 + 1);
    FUN_10815b730(&puStack_2b8);
    func_0x00010815b760(&puStack_250);
    func_0x000108143710(&uStack_188);
  }
  FUN_1083a3ca0(lStack_180);
LAB_10815af30:
  FUN_10840f740(auStack_e0);
  ppuVar16 = &puStack_178;
  func_0x0001081419f4();
  func_0x00010815c63c(uStack_b8);
  if (extraout_x9 != extraout_x8_03) {
    ___stack_chk_fail();
    FUN_10815b730(&puStack_2b8);
    func_0x00010815b760(&puStack_250);
    func_0x000108143710(&uStack_188);
    FUN_1083a3ca0(lStack_180);
    FUN_10840f740(auStack_e0);
    ppuVar16 = &puStack_178;
    func_0x0001081419f4(ppuVar16);
    func_0x00010815c5c8();
    FUN_1083a3c7c(ppuVar16 + 5);
    FUN_1081596e8(ppuVar16 + 2);
    FUN_108154cb4(ppuVar16 + 1);
    return ppuVar16;
  }
  return ppuVar16;
}



/* Entry: 10815b164; end: 10815b197;  */

long FUN_10815b164(long param_1)

{
  FUN_1083a3c7c(param_1 + 0x28);
  FUN_1081596e8(param_1 + 0x10);
  FUN_108154cb4(param_1 + 8);
  return param_1;
}



/* Entry: 10815b198; end: 10815b28b;  */

void FUN_10815b198(long param_1,long param_2,long param_3,uint param_4)

{
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  int iStack_38;
  
  if (*(long *)(param_1 + 8) != 0) {
    iStack_38 = 0;
    if (param_2 != 0) {
      iStack_38 = *(int *)(param_2 + 0xc60);
      *(int *)(param_2 + 0xc60) = iStack_38 + 1;
      *(int *)(*(long *)(param_2 + 0xc40) + 0x58) = *(int *)(*(long *)(param_2 + 0xc40) + 0x58) + 1;
    }
    uStack_50 = 0;
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    lStack_40 = param_2;
    if (param_3 != 0) {
      FUN_10814c9e0(auStack_78,&uStack_50,param_3,2);
      FUN_10833e2b0(param_2,auStack_78);
    }
    if ((param_4 >> 1 & 1) == 0) {
      FUN_10810f48c(param_2,&uStack_50,0);
    }
    if (((param_4 & 1) == 0) && ((*(uint *)(param_1 + 0x58) & 1) != 0)) {
      FUN_10833c3b4(param_2,&uStack_50,0);
    }
    FUN_10818c910(*(undefined8 *)(param_1 + 8),param_2,0);
    FUN_10815b978(&lStack_40);
  }
  return;
}



/* Entry: 10815b28c; end: 10815b32f;  */

long * FUN_10815b28c(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long param_6)

{
  undefined8 *puVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  code *extraout_x8;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  ulong unaff_d8;
  float fVar12;
  double dVar13;
  ulong uVar11;
  
  if (param_5[1] != 0) {
    dVar13 = (double)param_5[7];
    fVar6 = (float)(double)param_5[8];
    fVar12 = (float)dVar13;
    _nextafterf(fVar6,fVar12);
    fVar9 = (float)(param_1 + dVar13);
    uVar11 = (ulong)(uint)fVar9;
    if (fVar9 <= fVar6) {
      fVar6 = fVar9;
    }
    uVar8 = (ulong)(uint)fVar6;
    if (fVar6 <= fVar12) {
      fVar6 = fVar12;
    }
    puVar1 = (undefined8 *)param_5[3];
    puVar5 = (undefined8 *)param_5[2];
    while( true ) {
      uVar7 = (undefined4)uVar8;
      uVar10 = (undefined4)uVar11;
      if (puVar5 == puVar1) break;
      func_0x00010815c64c(*puVar5);
      uVar8 = (ulong)(uint)fVar6;
      (*extraout_x8)();
      puVar5 = puVar5 + 1;
    }
    plVar3 = (long *)param_5[1];
    func_0x00010818add8(&stack0xffffffffffffffc0);
    if (((unaff_d8 & 0x100000000) == 0) && (uVar2 = *(ushort *)(plVar3 + 5), (uVar2 >> 2 & 1) != 0))
    {
      if ((param_6 == 0) || ((uVar2 & 10) == 0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_6,0x113254e20);
        *(undefined4 *)(plVar3 + 3) = uVar7;
        *(undefined4 *)((long)plVar3 + 0x1c) = uVar10;
        *(undefined4 *)(plVar3 + 4) = param_3;
        *(undefined4 *)((long)plVar3 + 0x24) = param_4;
      }
      else {
        uVar7 = (undefined4)plVar3[3];
        if ((uVar2 & 2) != 0) {
          param_6 = 0;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3,param_6,0x113254e20);
        *(undefined4 *)(plVar3 + 3) = uVar7;
        *(undefined4 *)((long)plVar3 + 0x1c) = uVar10;
        *(undefined4 *)(plVar3 + 4) = param_3;
        *(undefined4 *)((long)plVar3 + 0x24) = param_4;
        func_0x00010818adcc();
        plVar4 = plVar3 + 3;
        FUN_10818a9b0(plVar4,&stack0xffffffffffffffb0);
        if ((int)plVar4 != 0) {
          func_0x00010818adcc();
        }
      }
      *(ushort *)(plVar3 + 5) = *(ushort *)(plVar3 + 5) & 0xfff3;
    }
    func_0x00010818a9f8(&stack0xffffffffffffffc0);
    return plVar3 + 3;
  }
  return param_5;
}



/* Entry: 10815b330; end: 10815b33b;  */

long * FUN_10815b330(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long param_6)

{
  undefined8 *puVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  code *extraout_x8;
  undefined8 *puVar5;
  float fVar6;
  undefined4 uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar12;
  ulong unaff_d8;
  float fVar13;
  double dVar14;
  ulong uVar11;
  
  dVar12 = (double)param_5[10];
  if (param_5[1] != 0) {
    dVar14 = (double)param_5[7];
    fVar6 = (float)(double)param_5[8];
    fVar13 = (float)dVar14;
    _nextafterf(fVar6,fVar13);
    fVar9 = (float)(param_1 * dVar12 + dVar14);
    uVar11 = (ulong)(uint)fVar9;
    if (fVar9 <= fVar6) {
      fVar6 = fVar9;
    }
    uVar8 = (ulong)(uint)fVar6;
    if (fVar6 <= fVar13) {
      fVar6 = fVar13;
    }
    puVar1 = (undefined8 *)param_5[3];
    puVar5 = (undefined8 *)param_5[2];
    while( true ) {
      uVar7 = (undefined4)uVar8;
      uVar10 = (undefined4)uVar11;
      if (puVar5 == puVar1) break;
      func_0x00010815c64c(*puVar5);
      uVar8 = (ulong)(uint)fVar6;
      (*extraout_x8)();
      puVar5 = puVar5 + 1;
    }
    plVar3 = (long *)param_5[1];
    func_0x00010818add8(&stack0xffffffffffffffc0);
    if (((unaff_d8 & 0x100000000) == 0) && (uVar2 = *(ushort *)(plVar3 + 5), (uVar2 >> 2 & 1) != 0))
    {
      if ((param_6 == 0) || ((uVar2 & 10) == 0)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_6,0x113254e20);
        *(undefined4 *)(plVar3 + 3) = uVar7;
        *(undefined4 *)((long)plVar3 + 0x1c) = uVar10;
        *(undefined4 *)(plVar3 + 4) = param_3;
        *(undefined4 *)((long)plVar3 + 0x24) = param_4;
      }
      else {
        uVar7 = (undefined4)plVar3[3];
        if ((uVar2 & 2) != 0) {
          param_6 = 0;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3,param_6,0x113254e20);
        *(undefined4 *)(plVar3 + 3) = uVar7;
        *(undefined4 *)((long)plVar3 + 0x1c) = uVar10;
        *(undefined4 *)(plVar3 + 4) = param_3;
        *(undefined4 *)((long)plVar3 + 0x24) = param_4;
        func_0x00010818adcc();
        plVar4 = plVar3 + 3;
        FUN_10818a9b0(plVar4,&stack0xffffffffffffffb0);
        if ((int)plVar4 != 0) {
          func_0x00010818adcc();
        }
      }
      *(ushort *)(plVar3 + 5) = *(ushort *)(plVar3 + 5) & 0xfff3;
    }
    func_0x00010818a9f8(&stack0xffffffffffffffc0);
    return plVar3 + 3;
  }
  return param_5;
}



/* Entry: 10815b33c; end: 10815b35f;  */

undefined8 FUN_10815b33c(undefined8 param_1)

{
  FUN_10815b360(param_1,0);
  return param_1;
}



/* Entry: 10815b360; end: 10815b373;  */

void FUN_10815b360(long *param_1)

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
      lVar3 = lVar2 * -0xa8;
      lVar2 = lVar1 + lVar2 * 0xa8;
      do {
        lVar2 = lVar2 + -0xa8;
        FUN_10815b3cc(lVar2);
        lVar3 = lVar3 + 0xa8;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10815b374; end: 10815b3cb;  */

void FUN_10815b374(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0xa8;
      lVar1 = param_2 + lVar1 * 0xa8;
      do {
        lVar1 = lVar1 + -0xa8;
        FUN_10815b3cc(lVar1);
        lVar2 = lVar2 + 0xa8;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10815b3cc; end: 10815b4eb;  */

void FUN_10815b3cc(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815c628();
    func_0x00010815b3f8();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815b4ec; end: 10815b4f3;  */

void FUN_10815b4ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010815b52c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10815b4f4; end: 10815b553;  */

void FUN_10815b4f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    func_0x00010815b52c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10815b554; end: 10815b597;  */

void FUN_10815b554(long param_1)

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



/* Entry: 10815b598; end: 10815b5bb;  */

undefined8 FUN_10815b598(undefined8 param_1)

{
  FUN_10815b5bc(param_1,0);
  return param_1;
}



/* Entry: 10815b5bc; end: 10815b5cf;  */

void FUN_10815b5bc(long *param_1)

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
      lVar3 = lVar2 * -0x18;
      lVar2 = lVar1 + lVar2 * 0x18;
      do {
        lVar2 = lVar2 + -0x18;
        FUN_10815b628(lVar2);
        lVar3 = lVar3 + 0x18;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10815b5d0; end: 10815b627;  */

void FUN_10815b5d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x18;
      lVar1 = param_2 + lVar1 * 0x18;
      do {
        lVar1 = lVar1 + -0x18;
        FUN_10815b628(lVar1);
        lVar2 = lVar2 + 0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10815b628; end: 10815b67f;  */

void FUN_10815b628(int *param_1)

{
  if (*param_1 != 0) {
    FUN_108154cb4(param_1 + 4);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10815b680; end: 10815b6c7;  */

void FUN_10815b680(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + -8);
  if (lVar1 != 0) {
    lVar2 = lVar1 * -0x20;
    lVar1 = param_1 + lVar1 * 0x20;
    do {
      lVar1 = lVar1 + -0x20;
      FUN_10815b6c8(lVar1);
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 10815b6c8; end: 10815b6f3;  */

void FUN_10815b6c8(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815c628();
    FUN_1083a3c7c();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815b6f4; end: 10815b72f;  */

void FUN_10815b6f4(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 1;
  *plVar1 = 0;
  lVar2 = *param_3;
  param_1[2] = param_3[1];
  *plVar1 = lVar2;
  param_1[3] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_1[4] = *(long *)(*param_1 + 0x70);
  *(long **)(*param_1 + 0x70) = plVar1;
  return;
}



/* Entry: 10815b730; end: 10815b80b;  */

undefined8 FUN_10815b730(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10815bce4(param_1 + 0x20);
  FUN_1081596e8(param_1 + 8);
  func_0x000108154d64(param_1);
  FUN_108154cd8();
  return unaff_x19;
}



/* Entry: 10815b80c; end: 10815b81f;  */

void FUN_10815b80c(long *param_1)

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
      lVar3 = lVar2 * -0x20;
      lVar2 = lVar1 + lVar2 * 0x20;
      do {
        lVar2 = lVar2 + -0x20;
        FUN_10815b870(lVar2);
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 10815b820; end: 10815b86f;  */

void FUN_10815b820(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -0x20;
      lVar1 = param_2 + lVar1 * 0x20;
      do {
        lVar1 = lVar1 + -0x20;
        FUN_10815b870(lVar1);
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 10815b870; end: 10815b8bb;  */

void FUN_10815b870(int *param_1)

{
  undefined4 *unaff_x19;
  
  if (*param_1 != 0) {
    func_0x00010815c628();
    func_0x00010815b89c();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 10815b8bc; end: 10815b8ff;  */

void FUN_10815b8bc(long param_1)

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



/* Entry: 10815b900; end: 10815b943;  */

void FUN_10815b900(long param_1)

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



/* Entry: 10815b944; end: 10815b977;  */

void FUN_10815b944(long *param_1,long param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc60);
    *(int *)(param_1 + 1) = iVar1;
    if (param_3 != 0) {
      *(int *)(param_2 + 0xc60) = iVar1 + 1;
      *(int *)(*(long *)(param_2 + 0xc40) + 0x58) = *(int *)(*(long *)(param_2 + 0xc40) + 0x58) + 1;
    }
  }
  return;
}



/* Entry: 10815b978; end: 10815b9a3;  */

void FUN_10815b978(long param_1)

{
  func_0x00010815c59c();
  if (param_1 != 0) {
    FUN_10833baf4();
  }
  return;
}



/* Entry: 10815b9a4; end: 10815b9c7;  */

void FUN_10815b9a4(long *param_1)

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



/* Entry: 10815b9c8; end: 10815babb;  */

undefined8 *
FUN_10815b9c8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = *param_3;
  *param_3 = 0;
  FUN_10815babc(&uStack_38,0x3f800000,&uStack_40);
  uVar1 = uStack_38;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_110a28438;
  uStack_38 = 0;
  param_1[6] = uVar1;
  FUN_10815bbd0(&uStack_38);
  FUN_108154cb4(&uStack_40);
  *param_1 = &PTR_FUN_110a283d0;
  *(undefined4 *)(param_1 + 7) = 0x42c80000;
  FUN_108154b58(param_2,&UNK_10f47d1b2);
  FUN_108154e4c();
  FUN_108161330(param_1,param_4,param_2,param_1 + 7);
  return param_1;
}



/* Entry: 10815babc; end: 10815bb43;  */

void FUN_10815babc(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  
  if (*param_3 == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = 0x40;
    __Znwm();
    *param_3 = 0;
    FUN_10818adf8(param_2);
    *param_1 = uVar1;
    func_0x00010815c618();
  }
  return;
}


