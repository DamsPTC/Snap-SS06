/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083f704c; end: 1083f716f;  */

void FUN_1083f704c(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  
  plVar2 = param_1;
  func_0x0001083f7558(*param_2);
  iVar1 = (int)plVar2;
  func_0x0001083f7558(*param_3);
  if (((ulong)plVar2 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x0001083f75fc();
      *param_2 = extraout_x9;
      *param_3 = extraout_x8;
      func_0x0001083f7558(*param_2);
      if (iVar1 != 0) {
        lVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = lVar3;
      }
    }
  }
  else {
    lVar3 = *param_1;
    if (iVar1 == 0) {
      *param_1 = *param_2;
      *param_2 = lVar3;
      iVar1 = (int)*(undefined8 *)(*param_3 + 0x10);
      func_0x0001083f757c();
      if (iVar1 == 0) {
        return;
      }
      func_0x0001083f75fc();
      *param_2 = extraout_x9_00;
      lVar3 = extraout_x8_00;
    }
    else {
      *param_1 = *param_3;
    }
    *param_3 = lVar3;
  }
  return;
}



/* Entry: 1083f7170; end: 1083f7213;  */

void FUN_1083f7170(int param_1)

{
  undefined8 *in_x4;
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  func_0x0001083f75e8();
  func_0x0001083f7100();
  func_0x0001083f7558(*in_x4);
  if (param_1 != 0) {
    uVar1 = *unaff_x22;
    *unaff_x22 = *in_x4;
    *in_x4 = uVar1;
    func_0x0001083f7558(*unaff_x22);
    if (param_1 != 0) {
      uVar1 = *unaff_x21;
      *unaff_x21 = *unaff_x22;
      *unaff_x22 = uVar1;
      func_0x0001083f7558(*unaff_x21);
      if (param_1 != 0) {
        uVar1 = *unaff_x19;
        *unaff_x19 = *unaff_x21;
        *unaff_x21 = uVar1;
        func_0x0001083f75fc();
        func_0x0001083f7558();
        if (param_1 != 0) {
          func_0x0001083f75d4();
        }
      }
    }
  }
  return;
}



/* Entry: 1083f7214; end: 1083f738b;  */

bool FUN_1083f7214(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  iVar7 = 1;
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001083f7558(param_2[-1]);
    if (iVar7 != 0) {
      lVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = lVar6;
    }
    break;
  case 3:
    func_0x0001083f704c(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    func_0x0001083f7100(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_1083f7170(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    plVar2 = param_1;
    func_0x0001083f75c0(param_1,param_1 + 1);
    lVar6 = 0;
    iVar7 = 0;
    for (plVar3 = param_1 + 3; plVar3 != param_2; plVar3 = plVar3 + 1) {
      func_0x0001083f7558(*plVar3);
      if ((int)plVar2 != 0) {
        lVar5 = *plVar3;
        lVar1 = lVar6;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          plVar4 = param_1;
          if (lVar8 == -0x10) goto LAB_1083f732c;
          plVar2 = *(long **)(lVar5 + 0x10);
          func_0x0001083f757c(*(undefined8 *)((long)param_1 + lVar8 + 8));
          lVar1 = lVar8 + -8;
        } while (((ulong)plVar2 & 1) != 0);
        plVar4 = (long *)((long)param_1 + lVar8 + 0x10);
LAB_1083f732c:
        *plVar4 = lVar5;
        iVar7 = iVar7 + 1;
        if (iVar7 == 8) {
          return plVar3 + 1 == param_2;
        }
      }
      lVar6 = lVar6 + 8;
    }
  }
  return true;
}



/* Entry: 1083f738c; end: 1083f73cb;  */

void FUN_1083f738c(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined8 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 1083f73cc; end: 1083f740b;  */

undefined8 * FUN_1083f73cc(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar2 <= param_2) {
      puVar2 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar2 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar2;
  }
  FUN_1083f74b8();
  puVar2 = (undefined8 *)param_2[1];
  _memcpy(param_2[2],param_3,param_1[1] - param_3);
  lVar1 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 - (param_3 - lVar1);
  _memcpy(lVar3);
  param_2[1] = lVar3;
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
  return puVar2;
}



/* Entry: 1083f740c; end: 1083f74b7;  */

undefined8 FUN_1083f740c(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  _memcpy(param_2[2],param_3,param_1[1] - param_3);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 - (param_3 - lVar2);
  _memcpy(lVar3);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 1083f74b8; end: 1083f74c3;  */

void FUN_1083f74b8(void)

{
  func_0x0001083f75b4();
  FUN_1083f74e8();
  return;
}



/* Entry: 1083f74c4; end: 1083f74e7;  */

void FUN_1083f74c4(void)

{
  FUN_1083f74e8();
  return;
}



/* Entry: 1083f74e8; end: 1083f7503;  */

long * FUN_1083f74e8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1083f7534();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1083f7504; end: 1083f7533;  */

long * FUN_1083f7504(long *param_1)

{
  FUN_1083f7534();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1083f7534; end: 1083f7607;  */

void FUN_1083f7534(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1083f7608; end: 1083f76f3;  */

void FUN_1083f7608(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x20);
  puVar2 = puVar4;
  FUN_1083c2f04();
  puStack_40 = (undefined8 *)CONCAT44(puStack_40._4_4_,(int)param_2);
  iVar1 = *(int *)((long)puVar4 + 4);
  puStack_48 = puVar2;
  while( true ) {
    if ((int)param_2 == iVar1) {
      return;
    }
    plVar3 = *(long **)(puStack_48[1] + (long)(int)param_2 * 0x18 + 8);
    (**(code **)(*plVar3 + 0x18))();
    if (((ulong)plVar3 & 1) != 0) break;
    FUN_1083c2f1c(&puStack_48);
    param_2 = (ulong)puStack_40 & 0xffffffff;
  }
  puStack_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_1083f76f4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),&puStack_48);
  FUN_1083f779c((undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x50),puStack_48,puStack_40
               );
  puVar2 = puStack_40;
  for (puVar4 = puStack_48; puVar4 != puVar2; puVar4 = puVar4 + 1) {
    FUN_1083d737c(*(undefined8 *)(param_1 + 0x20),*puVar4);
  }
  func_0x0001083ea668(&puStack_48);
  return;
}



/* Entry: 1083f76f4; end: 1083f779b;  */

void FUN_1083f76f4(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long lStack_48;
  
  if (*param_2 != 0) {
    FUN_1083f76f4(param_1,*param_2,param_3);
  }
  plVar1 = (long *)param_2[3];
  for (plVar3 = (long *)param_2[2]; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    if (*(int *)(lVar4 + 0xc) == 6) {
      piVar2 = *(int **)(param_1 + 0x20);
      lStack_48 = *(long *)(lVar4 + 0x10);
      func_0x0001083d71cc(piVar2,&lStack_48);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        lStack_48 = lVar4;
        FUN_1083f77a8(param_3,&lStack_48);
      }
    }
  }
  return;
}



/* Entry: 1083f779c; end: 1083f77a7;  */

long * FUN_1083f779c(long *param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar3 = param_4 - (long)param_3 >> 3;
  if (0 < lVar3) {
    plVar2 = param_1 + 2;
    lVar4 = param_1[1];
    if (*plVar2 - lVar4 >> 3 < lVar3) {
      plVar1 = param_1;
      FUN_1083f73cc(param_1,lVar3 + (lVar4 - *param_1 >> 3));
      lVar4 = *param_1;
      plStack_78 = (long *)0x0;
      plStack_58 = plVar2;
      if (plVar1 != (long *)0x0) {
        FUN_1083f74c4();
        plStack_78 = plVar2;
      }
      plStack_70 = (long *)((long)plStack_78 + ((long)param_2 - lVar4));
      plStack_60 = plStack_78 + (long)plVar1;
      plStack_68 = plStack_70 + lVar3;
      plVar2 = plStack_70;
      for (lVar3 = lVar3 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
        *plVar2 = *param_3;
        plVar2 = plVar2 + 1;
        param_3 = param_3 + 1;
      }
      FUN_1083f740c(param_1,&plStack_78,param_2);
      func_0x0001083f7a8c();
      param_2 = param_1;
    }
    else {
      lVar5 = lVar4 - (long)param_2;
      if (lVar5 >> 3 < lVar3) {
        param_4 = param_4 - ((long)param_3 + lVar5);
        if (param_4 != 0) {
          _memmove(lVar4,(long)param_3 + lVar5,param_4);
        }
        param_1[1] = lVar4 + param_4;
        if (0 < lVar5 >> 3) {
          func_0x0001083f7a78();
          plVar2 = param_2;
          for (; lVar5 != 0; lVar5 = lVar5 + -8) {
            *plVar2 = *param_3;
            param_3 = param_3 + 1;
            plVar2 = plVar2 + 1;
          }
        }
      }
      else {
        func_0x0001083f7a78();
        plVar2 = param_2;
        for (lVar3 = lVar3 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
          *plVar2 = *param_3;
          param_3 = param_3 + 1;
          plVar2 = plVar2 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 1083f77a8; end: 1083f77ef;  */

undefined8 * FUN_1083f77a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_1083f77f0();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1083f77f0; end: 1083f7897;  */

long FUN_1083f77f0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_1083f73cc(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_1083f74c4();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  FUN_1083f7898(param_1,&plStack_58);
  lVar3 = param_1[1];
  func_0x0001083f7a8c();
  return lVar3;
}



/* Entry: 1083f7898; end: 1083f7917;  */

void FUN_1083f7898(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  _memcpy(lVar1);
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



/* Entry: 1083f7918; end: 1083f7a77;  */

long * FUN_1083f7918(long *param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (0 < param_5) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if (*plVar2 - lVar3 >> 3 < param_5) {
      plVar1 = param_1;
      FUN_1083f73cc(param_1,param_5 + (lVar3 - *param_1 >> 3));
      lVar3 = *param_1;
      plStack_78 = (long *)0x0;
      plStack_58 = plVar2;
      if (plVar1 != (long *)0x0) {
        FUN_1083f74c4();
        plStack_78 = plVar2;
      }
      plStack_70 = (long *)((long)plStack_78 + ((long)param_2 - lVar3));
      plStack_60 = plStack_78 + (long)plVar1;
      plStack_68 = plStack_70 + param_5;
      plVar2 = plStack_70;
      for (param_5 = param_5 << 3; param_5 != 0; param_5 = param_5 + -8) {
        *plVar2 = *param_3;
        plVar2 = plVar2 + 1;
        param_3 = param_3 + 1;
      }
      FUN_1083f740c(param_1,&plStack_78,param_2);
      func_0x0001083f7a8c();
      param_2 = param_1;
    }
    else {
      lVar4 = lVar3 - (long)param_2;
      if (lVar4 >> 3 < param_5) {
        param_4 = param_4 - ((long)param_3 + lVar4);
        if (param_4 != 0) {
          _memmove(lVar3,(long)param_3 + lVar4,param_4);
        }
        param_1[1] = lVar3 + param_4;
        if (0 < lVar4 >> 3) {
          func_0x0001083f7a78();
          plVar2 = param_2;
          for (; lVar4 != 0; lVar4 = lVar4 + -8) {
            *plVar2 = *param_3;
            plVar2 = plVar2 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        func_0x0001083f7a78();
        plVar2 = param_2;
        for (param_5 = param_5 << 3; param_5 != 0; param_5 = param_5 + -8) {
          *plVar2 = *param_3;
          plVar2 = plVar2 + 1;
          param_3 = param_3 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 1083f7a78; end: 1083f7a93;  */

void FUN_1083f7a78(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  puVar1 = (undefined8 *)(unaff_x19 + unaff_x22 * 8);
  puVar3 = *(undefined8 **)(unaff_x21 + 8);
  lVar2 = (long)puVar3 - (long)puVar1;
  puVar5 = puVar3;
  for (puVar4 = (undefined8 *)(unaff_x19 + lVar2); puVar4 < unaff_x23; puVar4 = puVar4 + 1) {
    *puVar5 = *puVar4;
    puVar5 = puVar5 + 1;
  }
  *(undefined8 **)(unaff_x21 + 8) = puVar5;
  if (puVar3 != puVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar3 - lVar2);
    return;
  }
  return;
}



/* Entry: 1083f7a94; end: 1083f7cdb;  */

void FUN_1083f7a94(long param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_88;
  int iStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  plVar1 = *(long **)(param_1 + 0x10);
  puStack_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  puStack_68 = (undefined8 *)0x0;
  bVar4 = *(byte *)(*(long *)(param_1 + 8) + 1);
  plStack_78 = plVar1;
  if (bVar4 < 6 && (1 << (ulong)(bVar4 & 0x1f) & 0x29U) != 0) {
    for (plVar6 = *(long **)(param_1 + 0x38); plVar6 != *(long **)(param_1 + 0x40);
        plVar6 = plVar6 + 1) {
      if ((*(int *)(*plVar6 + 0xc) == 1) &&
         (lVar8 = *(long *)(*plVar6 + 0x10), *(char *)(lVar8 + 0x56) == '\x01')) {
        plVar6 = *(long **)(lVar8 + 0x48);
        param_2 = (int)*(undefined8 *)(*plVar1 + 0x38);
        (**(code **)(*plVar6 + 0x38))();
        if ((int)plVar6 != 0) {
          uVar7 = uStack_70;
          func_0x0001083edd44(uStack_70,&UNK_10df25ecc,0xc);
          param_2 = (int)uVar7;
          FUN_1083f7cdc(&plStack_78);
        }
        break;
      }
    }
  }
  lVar10 = *(long *)(param_1 + 0x20);
  lVar8 = lVar10 + 0x20;
  FUN_1083c2d7c();
  iVar2 = *(int *)(lVar10 + 0x24);
  lStack_88 = lVar8;
  iStack_80 = param_2;
  do {
    if (iStack_80 == iVar2) {
      if (puStack_68 != puStack_60) {
        FUN_1083f7dfc(puStack_68,puStack_60,
                      LZCOUNT((long)puStack_60 - (long)puStack_68 >> 3) << 1 ^ 0x7e,1);
      }
      FUN_1083f779c((undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x50),puStack_68,
                    puStack_60);
      puVar5 = puStack_60;
      for (puVar9 = puStack_68; puVar9 != puVar5; puVar9 = puVar9 + 1) {
        FUN_1083d737c(*(undefined8 *)(param_1 + 0x20),*puVar9);
      }
      func_0x0001083ea668(&puStack_68);
      return;
    }
    plVar6 = (long *)(*(long *)(lStack_88 + 8) + (long)iStack_80 * 0x20 + 8);
    if (*(char *)(*plVar6 + 0x39) == '\x01') {
      FUN_1083f7cdc(&plStack_78);
      plVar6 = (long *)*plVar6;
      (**(code **)(*plVar6 + 0x18))();
      iVar3 = (int)plVar6[4];
      if (iVar3 == 0xf) {
        if ((*(byte *)(plVar1[1] + 7) & 1) == 0) {
          bVar4 = *(byte *)(param_1 + 0x68) | 1;
LAB_1083f7c20:
          *(byte *)(param_1 + 0x68) = bVar4;
        }
      }
      else if (iVar3 == 0x11) {
        if ((*(byte *)(plVar1[1] + 7) & 1) == 0) {
          bVar4 = *(byte *)(param_1 + 0x68) | 2;
          goto LAB_1083f7c20;
        }
      }
      else if (iVar3 == 0x2718) {
        *(undefined1 *)(param_1 + 0x69) = 1;
      }
      else if (iVar3 == 0x271c) {
        *(undefined1 *)(param_1 + 0x6a) = 1;
      }
    }
    FUN_1083c2d94(&lStack_88);
  } while( true );
}



/* Entry: 1083f7cdc; end: 1083f7dfb;  */

void FUN_1083f7cdc(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (((param_2 != (long *)0x0) && (*(int *)((long)param_2 + 0xc) == 0xb)) &&
     (((plVar6 = (long *)param_2[5], plVar6 != (long *)0x0 && (*(int *)((long)plVar6 + 0xc) == 3))
      || ((**(code **)(*param_2 + 0x20))(), plVar6 = param_2, param_2 != (long *)0x0)))) {
    puVar7 = (ulong *)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    puVar8 = (undefined8 *)*puVar7;
    do {
      if (puVar8 == puVar2) {
        puVar8 = (undefined8 *)(param_1 + 0x20);
        if (puVar2 < (undefined8 *)*puVar8) {
          puVar8 = puVar2 + 1;
          *puVar2 = plVar6;
        }
        else {
          puVar4 = puVar7;
          FUN_1083f73cc(puVar7,((long)puVar2 - (long)*puVar7 >> 3) + 1);
          lVar1 = *(long *)(param_1 + 0x10);
          lVar3 = *(long *)(param_1 + 0x18);
          puStack_68 = (undefined8 *)0x0;
          puStack_48 = puVar8;
          if (puVar4 != (ulong *)0x0) {
            FUN_1083f74c4();
            puStack_68 = puVar8;
          }
          puStack_60 = (undefined8 *)((long)puStack_68 + (lVar3 - lVar1));
          puStack_50 = puStack_68 + (long)puVar4;
          puStack_58 = puStack_60 + 1;
          *puStack_60 = plVar6;
          FUN_1083f7898(puVar7,&puStack_68);
          puVar8 = *(undefined8 **)(param_1 + 0x18);
          FUN_1083f7504(&puStack_68);
        }
        *(undefined8 **)(param_1 + 0x18) = puVar8;
        return;
      }
      plVar5 = (long *)*puVar8;
      puVar8 = puVar8 + 1;
    } while (plVar5 != plVar6);
  }
  return;
}



/* Entry: 1083f7dfc; end: 1083f83fb;  */

/* WARNING: Possible PIC construction at 0x0001083f854c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001083f8550) */
/* WARNING: Removing unreachable block (ram,0x0001083f8560) */
/* WARNING: Removing unreachable block (ram,0x0001083f857c) */
/* WARNING: Removing unreachable block (ram,0x0001083f8584) */
/* WARNING: Removing unreachable block (ram,0x0001083f858c) */
/* WARNING: Removing unreachable block (ram,0x0001083f8590) */

void FUN_1083f7dfc(ulong *param_1,ulong *param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *unaff_x19;
  ulong *puVar16;
  ulong *unaff_x23;
  long lVar17;
  long unaff_x24;
  ulong uVar18;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_c0;
  ulong *puStack_b8;
  undefined8 *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  plVar3 = (long *)auStack_80;
LAB_1083f7e28:
  puVar16 = param_2 + -1;
  puStack_70 = param_2 + -2;
  puStack_78 = param_2 + -3;
  puVar12 = param_1;
  puStack_68 = param_2;
LAB_1083f7e40:
  param_1 = puVar12;
  puVar7 = puStack_68;
  uVar18 = (long)puStack_68 - (long)param_1 >> 3;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_1083f83e8;
  case 2:
    uVar18 = puStack_68[-1];
    FUN_1083f83fc(uVar18,*param_1);
    if ((int)uVar18 != 0) {
      uVar18 = *param_1;
      *param_1 = puVar7[-1];
      puVar7[-1] = uVar18;
    }
    goto LAB_1083f83e8;
  case 3:
    puVar12 = param_1 + 1;
    puVar7 = param_1;
    puVar6 = puVar16;
    func_0x0001083f879c();
    uVar18 = *puVar12;
    puStack_b0 = param_3;
    puStack_a8 = puVar16;
    puStack_a0 = param_1;
    puStack_98 = unaff_x19;
    func_0x0001083f878c();
    iVar4 = (int)*puVar6;
    func_0x0001083f8794();
    if ((uVar18 & 1) == 0) {
      if (iVar4 == 0) {
        return;
      }
      func_0x0001083f87cc();
      iVar4 = (int)*puVar12;
      func_0x0001083f878c();
      if (iVar4 == 0) {
        return;
      }
      uVar18 = *puVar7;
      *puVar7 = *puVar12;
      *puVar12 = uVar18;
      return;
    }
    uVar18 = *puVar7;
    if (iVar4 != 0) {
      *puVar7 = *puVar6;
      *puVar6 = uVar18;
      return;
    }
    *puVar7 = *puVar12;
    *puVar12 = uVar18;
    iVar4 = (int)*puVar6;
    FUN_1083f83fc();
    if (iVar4 == 0) {
      return;
    }
    func_0x0001083f87cc();
    return;
  case 4:
    func_0x0001083f879c(param_1,param_1 + 1,param_1 + 2,puVar16);
    break;
  case 5:
    func_0x0001083f879c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar16);
    plVar3 = &lStack_c0;
    unaff_x29 = auStack_90;
    lStack_c0 = unaff_x24;
    puStack_b8 = unaff_x23;
    puStack_b0 = param_3;
    puStack_a8 = puVar16;
    puStack_a0 = param_1;
    puStack_98 = unaff_x19;
    func_0x0001083f87f4();
    unaff_x30 = 0x1083f8550;
    break;
  default:
    goto code_r0x0001083f7e58;
  }
  *(undefined8 **)((long)plVar3 + -0x30) = param_3;
  *(ulong **)((long)plVar3 + -0x28) = puVar16;
  *(ulong **)((long)plVar3 + -0x20) = param_1;
  *(ulong **)((long)plVar3 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar3 + -0x10) = unaff_x29;
  *(undefined8 *)((long)plVar3 + -8) = unaff_x30;
  func_0x0001083f87f4();
  FUN_1083f8458();
  iVar4 = (int)*param_3;
  func_0x0001083f878c();
  if (((iVar4 != 0) && (func_0x0001083f8760(), iVar4 != 0)) && (func_0x0001083f8744(), iVar4 != 0))
  {
    func_0x0001083f87e0();
  }
  return;
code_r0x0001083f7e58:
  if ((long)uVar18 < 0x18) {
    if ((param_4 & 1) == 0) {
      puVar12 = param_1;
      if (param_1 != puStack_68) {
        while( true ) {
          param_1 = param_1 + 1;
          puVar16 = puVar12 + 1;
          if (puVar16 == puVar7) break;
          uVar18 = puVar12[1];
          FUN_1083f83fc(uVar18,*puVar12);
          puVar12 = puVar16;
          if ((int)uVar18 != 0) {
            uVar18 = *puVar16;
            puVar16 = param_1;
            do {
              puVar6 = puVar16 + -1;
              *puVar16 = *puVar6;
              uVar5 = uVar18;
              FUN_1083f83fc(uVar18,puVar16[-2]);
              puVar16 = puVar6;
            } while ((uVar5 & 1) != 0);
            *puVar6 = uVar18;
          }
        }
      }
      goto LAB_1083f83e8;
    }
    if (param_1 == puStack_68) goto LAB_1083f83e8;
    lVar15 = 0;
    puVar12 = param_1;
    goto LAB_1083f8154;
  }
  if (param_3 == (undefined8 *)0x0) {
    if (param_1 == puStack_68) goto LAB_1083f83e8;
    uVar13 = uVar18 - 2 >> 1;
    uVar5 = uVar13;
    puVar12 = puStack_68;
    goto LAB_1083f81d0;
  }
  puVar12 = param_1 + (uVar18 >> 1);
  if (uVar18 < 0x81) {
    func_0x0001083f87c4(puVar12,param_1);
  }
  else {
    func_0x0001083f87c4(param_1,puVar12);
    FUN_1083f8458(param_1 + 1,puVar12 + -1,puStack_70);
    FUN_1083f8458(param_1 + 2,puVar12 + 1,puStack_78);
    FUN_1083f8458(puVar12 + -1,puVar12,puVar12 + 1);
    uVar18 = *param_1;
    *param_1 = *puVar12;
    *puVar12 = uVar18;
  }
  param_3 = (undefined8 *)((long)param_3 + -1);
  if ((param_4 & 1) == 0) {
    uVar18 = param_1[-1];
    FUN_1083f83fc(uVar18,*param_1);
    if ((uVar18 & 1) == 0) {
      uVar5 = *param_1;
      func_0x0001083f877c();
      puVar12 = param_1;
      if ((uVar18 & 1) == 0) {
        do {
          puVar12 = puVar12 + 1;
          if (puVar7 <= puVar12) break;
          func_0x0001083f877c();
        } while ((int)uVar18 == 0);
      }
      else {
        do {
          puVar12 = puVar12 + 1;
          func_0x0001083f877c();
        } while ((uVar18 & 1) == 0);
      }
      if (puVar12 < puVar7) {
        do {
          puVar7 = puVar7 + -1;
          func_0x0001083f877c();
        } while ((uVar18 & 1) != 0);
      }
      while (puVar12 < puVar7) {
        uVar13 = *puVar12;
        *puVar12 = *puVar7;
        *puVar7 = uVar13;
        do {
          puVar12 = puVar12 + 1;
          func_0x0001083f877c();
        } while ((int)uVar18 == 0);
        do {
          puVar7 = puVar7 + -1;
          func_0x0001083f877c();
        } while ((uVar18 & 1) != 0);
      }
      puVar6 = puVar12 + -1;
      if (param_1 != puVar6) {
        *param_1 = *puVar6;
      }
      param_4 = 0;
      *puVar6 = uVar5;
      unaff_x19 = puVar7;
      goto LAB_1083f7e40;
    }
  }
  unaff_x24 = 0;
  uVar18 = *param_1;
  do {
    uVar5 = *(ulong *)((long)param_1 + unaff_x24 + 8);
    func_0x0001083f8784();
    unaff_x24 = unaff_x24 + 8;
  } while ((uVar5 & 1) != 0);
  unaff_x23 = (ulong *)((long)param_1 + unaff_x24);
  puVar12 = unaff_x23;
  if (unaff_x24 == 8) {
    do {
      unaff_x19 = puVar7;
      if (puVar7 <= unaff_x23) break;
      puVar7 = puVar7 + -1;
      uVar5 = *puVar7;
      func_0x0001083f8784();
      unaff_x19 = puVar7;
    } while ((uVar5 & 1) == 0);
  }
  else {
    do {
      puVar7 = puVar7 + -1;
      iVar4 = (int)*puVar7;
      func_0x0001083f8784();
      unaff_x19 = puVar7;
    } while (iVar4 == 0);
  }
  while (puVar12 < puVar7) {
    uVar5 = *puVar12;
    *puVar12 = *puVar7;
    *puVar7 = uVar5;
    do {
      puVar12 = puVar12 + 1;
      uVar5 = *puVar12;
      func_0x0001083f8784();
    } while ((uVar5 & 1) != 0);
    do {
      puVar7 = puVar7 + -1;
      uVar5 = *puVar7;
      func_0x0001083f8784();
    } while ((uVar5 & 1) == 0);
  }
  param_2 = puVar12 + -1;
  if (param_1 != param_2) {
    *param_1 = *param_2;
  }
  *param_2 = uVar18;
  if (unaff_x23 < unaff_x19) goto LAB_1083f7fbc;
  puVar7 = param_1;
  FUN_1083f85a4(param_1,param_2);
  puVar6 = puVar12;
  FUN_1083f85a4(puVar12,puStack_68);
  if ((int)puVar6 == 0) goto code_r0x0001083f7fb8;
  if (((ulong)puVar7 & 1) != 0) goto LAB_1083f83e8;
  goto LAB_1083f7e28;
LAB_1083f8154:
  puVar16 = puVar12 + 1;
  if (puVar16 == puVar7) goto LAB_1083f83e8;
  uVar18 = puVar12[1];
  FUN_1083f83fc(uVar18,*puVar12);
  if ((int)uVar18 != 0) {
    uVar18 = *puVar16;
    lVar2 = lVar15;
    do {
      lVar17 = lVar2;
      puVar1 = (undefined8 *)((long)param_1 + lVar17);
      puVar1[1] = *puVar1;
      puVar12 = param_1;
      if (lVar17 == 0) goto LAB_1083f81a8;
      uVar5 = uVar18;
      FUN_1083f83fc(uVar18,puVar1[-1]);
      lVar2 = lVar17 + -8;
    } while ((uVar5 & 1) != 0);
    puVar12 = (ulong *)((long)param_1 + lVar17);
LAB_1083f81a8:
    *puVar12 = uVar18;
  }
  lVar15 = lVar15 + 8;
  puVar12 = puVar16;
  goto LAB_1083f8154;
code_r0x0001083f7fb8:
  if (((ulong)puVar7 & 1) == 0) {
LAB_1083f7fbc:
    FUN_1083f7dfc(param_1,param_2,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_1083f7e40;
LAB_1083f81d0:
  do {
    if ((long)uVar5 <= (long)uVar13) {
      uVar11 = (uVar5 & 0x3fffffffffffffff) << 1 | 1;
      puVar16 = param_1 + uVar11;
      uVar9 = uVar5 * 2 + 2;
      puVar7 = puVar16;
      uVar14 = uVar11;
      if ((long)uVar9 < (long)uVar18) {
        uVar8 = *puVar16;
        FUN_1083f83fc(uVar8,puVar16[1]);
        puVar7 = puVar16 + 1;
        uVar14 = uVar9;
        if ((int)uVar8 == 0) {
          puVar7 = puVar16;
          uVar14 = uVar11;
        }
      }
      puVar16 = param_1 + uVar5;
      uVar9 = *puVar7;
      FUN_1083f83fc(uVar9,*puVar16);
      if ((uVar9 & 1) == 0) {
        uVar9 = *puVar16;
        do {
          puVar12 = puVar7;
          *puVar16 = *puVar12;
          if ((long)uVar13 < (long)uVar14) break;
          uVar8 = uVar14 << 1 | 1;
          puVar16 = param_1 + uVar8;
          uVar11 = uVar14 * 2 + 2;
          puVar7 = puVar16;
          uVar14 = uVar8;
          if ((long)uVar11 < (long)uVar18) {
            uVar10 = *puVar16;
            FUN_1083f83fc(uVar10,puVar16[1]);
            puVar7 = puVar16 + 1;
            uVar14 = uVar11;
            if ((int)uVar10 == 0) {
              puVar7 = puVar16;
              uVar14 = uVar8;
            }
          }
          uVar11 = *puVar7;
          FUN_1083f83fc(uVar11,uVar9);
          puVar16 = puVar12;
        } while ((int)uVar11 == 0);
        *puVar12 = uVar9;
        puVar12 = puStack_68;
      }
    }
    uVar5 = uVar5 - 1;
  } while (-1 < (long)uVar5);
  for (; 1 < (long)uVar18; uVar18 = uVar18 - 1) {
    uVar13 = *param_1;
    uVar5 = 0;
    puVar16 = param_1;
    do {
      uVar11 = uVar5 << 1 | 1;
      uVar9 = uVar5 * 2 + 2;
      uVar14 = uVar11;
      puVar7 = puVar16 + uVar5 + 1;
      if ((long)uVar9 < (long)uVar18) {
        uVar8 = puVar16[uVar5 + 1];
        FUN_1083f83fc(uVar8,puVar16[uVar5 + 2]);
        uVar14 = uVar9;
        puVar7 = puVar16 + uVar5 + 2;
        if ((int)uVar8 == 0) {
          uVar14 = uVar11;
          puVar7 = puVar16 + uVar5 + 1;
        }
      }
      *puVar16 = *puVar7;
      uVar5 = uVar14;
      puVar16 = puVar7;
    } while ((long)uVar14 <= (long)(uVar18 - 2 >> 1));
    puVar12 = puVar12 + -1;
    if (puVar7 == puVar12) {
      *puVar7 = uVar13;
    }
    else {
      *puVar7 = *puVar12;
      *puVar12 = uVar13;
      lVar15 = (long)puVar7 + (8 - (long)param_1) >> 3;
      if (1 < lVar15) {
        uVar5 = lVar15 - 2U >> 1;
        iVar4 = (int)param_1[uVar5];
        func_0x0001083f8794();
        if (iVar4 != 0) {
          uVar13 = *puVar7;
          puVar16 = param_1 + uVar5;
          do {
            puVar6 = puVar16;
            *puVar7 = *puVar6;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1 >> 1;
            uVar9 = param_1[uVar5];
            FUN_1083f83fc(uVar9,uVar13);
            puVar7 = puVar6;
            puVar16 = param_1 + uVar5;
          } while ((uVar9 & 1) != 0);
          *puVar6 = uVar13;
        }
      }
    }
  }
LAB_1083f83e8:
  func_0x0001083f879c(unaff_x30);
  return;
}



/* Entry: 1083f83fc; end: 1083f8457;  */

ulong FUN_1083f83fc(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != *(int *)(param_2 + 0xc)) {
    return (ulong)(iVar1 < *(int *)(param_2 + 0xc));
  }
  if (iVar1 == 4) {
    uStack_20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    uStack_18 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    lVar4 = *(long *)(param_2 + 0x10);
  }
  else {
    if (iVar1 != 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083f8458);
      (*pcVar2)();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    uStack_20 = *(undefined8 *)(lVar4 + 0x10);
    uStack_18 = *(undefined8 *)(lVar4 + 0x18);
    lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  }
  puVar3 = &uStack_20;
  func_0x000107c27978(&uStack_20,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18));
  return (ulong)puVar3 >> 0x1f & 1;
}



/* Entry: 1083f8458; end: 1083f852f;  */

void FUN_1083f8458(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x0001083f878c();
  iVar1 = (int)*param_3;
  func_0x0001083f8794();
  if ((uVar2 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x0001083f87cc();
      iVar1 = (int)*param_2;
      func_0x0001083f878c();
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
    }
  }
  else {
    uVar2 = *param_1;
    if (iVar1 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar2;
      iVar1 = (int)*param_3;
      FUN_1083f83fc();
      if (iVar1 != 0) {
        func_0x0001083f87cc();
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar2;
    }
  }
  return;
}



/* Entry: 1083f8530; end: 1083f85a3;  */

void FUN_1083f8530(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *in_x4;
  undefined8 *unaff_x22;
  
  func_0x0001083f87f4();
  func_0x0001083f84f0();
  uVar2 = *in_x4;
  FUN_1083f83fc(uVar2,*unaff_x22);
  if ((int)uVar2 != 0) {
    uVar2 = *unaff_x22;
    *unaff_x22 = *in_x4;
    *in_x4 = uVar2;
    iVar1 = (int)*unaff_x22;
    func_0x0001083f878c();
    if (((iVar1 != 0) && (func_0x0001083f8760(), iVar1 != 0)) && (func_0x0001083f8744(), iVar1 != 0)
       ) {
      func_0x0001083f87e0();
    }
  }
  return;
}



/* Entry: 1083f85a4; end: 1083f8713;  */

bool FUN_1083f85a4(ulong *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar8 = (int)param_2[-1];
    func_0x0001083f8794();
    if (iVar8 != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    func_0x0001083f8458(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    func_0x0001083f84f0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_1083f8530(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    func_0x0001083f87c4(param_1,param_1 + 1);
    lVar7 = 0;
    iVar8 = 0;
    for (puVar4 = param_1 + 3; puVar4 != param_2; puVar4 = puVar4 + 1) {
      iVar2 = (int)*puVar4;
      func_0x0001083f878c();
      if (iVar2 != 0) {
        uVar6 = *puVar4;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_1083f86b4;
          uVar3 = uVar6;
          FUN_1083f83fc(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (ulong *)((long)param_1 + lVar9 + 0x10);
LAB_1083f86b4:
        *puVar5 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar4 + 1 == param_2;
        }
      }
      lVar7 = lVar7 + 8;
    }
  }
  return true;
}



/* Entry: 1083f8714; end: 1083f8743;  */

ulong FUN_1083f8714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107c27978(&uStack_20,param_3,param_4);
  return (ulong)puVar1 >> 0x1f & 1;
}



/* Entry: 1083f8744; end: 1083f8807;  */

ulong FUN_1083f8744(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar5 = *unaff_x19;
  *unaff_x19 = *unaff_x21;
  *unaff_x21 = lVar5;
  lVar5 = *unaff_x19;
  lVar4 = *unaff_x20;
  iVar1 = *(int *)(lVar5 + 0xc);
  if (iVar1 != *(int *)(lVar4 + 0xc)) {
    return (ulong)(iVar1 < *(int *)(lVar4 + 0xc));
  }
  if (iVar1 == 4) {
    uStack_20 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
    uStack_18 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18);
    lVar5 = *(long *)(lVar4 + 0x10);
  }
  else {
    if (iVar1 != 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083f8458);
      (*pcVar2)();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
    uStack_20 = *(undefined8 *)(lVar5 + 0x10);
    uStack_18 = *(undefined8 *)(lVar5 + 0x18);
    lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
  }
  puVar3 = &uStack_20;
  func_0x000107c27978(&uStack_20,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18));
  return (ulong)puVar3 >> 0x1f & 1;
}



/* Entry: 1083f8808; end: 1083f8acf;  */

undefined ***
FUN_1083f8808(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *unaff_x26;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined ***pppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long alStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR_FUN_110a473f8;
  puStack_d0 = (undefined8 *)0x0;
  uStack_c8 = 0x100000000;
  plVar8 = (long *)param_3[2];
  uStack_d8 = param_2;
  for (lVar10 = (long)(int)param_3[3] << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
    param_3 = plVar8;
    FUN_1083f8ad0(&ppuStack_e0);
    plVar8 = plVar8 + 1;
  }
  if ((int)uStack_c8 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1083edc84(&uStack_e8,param_4);
    unaff_x26 = auStack_90;
    uStack_78 = 0x400000000;
    puStack_80 = unaff_x26;
    FUN_1083da520(&puStack_80,(int)uStack_c8 + 1);
    puVar1 = puStack_d0;
    for (lVar10 = (long)(int)uStack_c8 << 3; lVar10 != 0; lVar10 = lVar10 + -8) {
      plVar8 = (long *)*puVar1;
      lVar11 = *plVar8;
      lVar9 = *(long *)(lVar11 + 0x10);
      if ((*(long *)(lVar11 + 0x28) == 0) || ((*(uint *)(lVar9 + 0x30) >> 2 & 1) != 0)) {
        FUN_1083cfa70(&lStack_b8);
        lVar11 = lStack_b8;
      }
      else {
        uStack_f0 = param_2;
        FUN_1083e61f4(&lStack_b8,&uStack_f0,lVar9);
        lStack_c0 = *(long *)(lVar11 + 0x28);
        *(undefined8 *)(lVar11 + 0x28) = 0;
        FUN_1083e5e94(&lStack_f8,&uStack_f0,&lStack_b8,&lStack_c0);
        lVar11 = lStack_c0;
        lStack_c0 = 0;
        if (lVar11 != 0) {
          func_0x0001083f8c50();
        }
        lVar2 = lStack_b8;
        lStack_b8 = 0;
        lVar11 = lStack_f8;
        if (lVar2 != 0) {
          func_0x0001083f8c50();
          lVar11 = lStack_f8;
        }
      }
      FUN_1083d09d4(&puStack_80,plVar8);
      lVar2 = *plVar8;
      *plVar8 = lVar11;
      if (lVar2 != 0) {
        func_0x0001083f8c50();
      }
      FUN_1083edf18(param_4,uStack_e8,lVar9,param_2);
      puVar1 = puVar1 + 1;
    }
    FUN_1083d0a60(alStack_b0,auStack_90);
    uStack_100 = uStack_e8;
    uStack_e8 = 0;
    uVar3 = (ulong)param_5 & 0xffffffff;
    param_5 = alStack_b0;
    param_3 = alStack_b0;
    FUN_1083da37c(param_1,uVar3,param_3,1,&uStack_100);
    func_0x0001083c5f0c(&uStack_100);
    FUN_1082da480(auStack_a0);
    FUN_1082da480(&puStack_80);
    func_0x0001083c5f0c(&uStack_e8);
  }
  pppuVar4 = &ppuStack_e0;
  FUN_1083f8bf8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x0001083c5f0c(&uStack_100);
  FUN_1082da480(param_5 + 2);
  FUN_1082da480(unaff_x26 + 0x10);
  func_0x0001083c5f0c(&uStack_e8);
  FUN_1083f8bf8(&ppuStack_e0);
  pppuVar5 = pppuVar4;
  __Unwind_Resume();
  ppuVar6 = &puStack_140;
  pcStack_108 = FUN_1083f8ad0;
  iVar7 = *(int *)(*param_3 + 0xc);
  uStack_130 = param_2;
  uStack_128 = param_4;
  plStack_120 = param_5;
  pppuStack_118 = pppuVar4;
  puStack_110 = &stack0xfffffffffffffff0;
  if (iVar7 == 0xc) {
    if (*(int *)(*param_3 + 0x38) != 1) {
LAB_1083f8b34:
                    /* WARNING: Could not recover jumptable at 0x0001083f8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*pppuVar5)[3])(pppuVar5);
      return pppuVar5;
    }
  }
  else if (iVar7 == 0x18) {
    iVar7 = *(int *)(pppuVar5 + 3);
    if (iVar7 < (int)(*(uint *)((long)pppuVar5 + 0x1c) >> 1)) {
      pppuVar5[2][iVar7] = (undefined *)param_3;
    }
    else {
      if (iVar7 == 0x7fffffff) {
        func_0x00010bdb1a68();
        *pppuVar5 = &PTR_FUN_110a473f8;
        if ((*(byte *)((long)pppuVar5 + 0x1c) & 1) != 0) {
          _free(pppuVar5[2]);
        }
        return pppuVar5;
      }
      uStack_138 = 0x7fffffff;
      puStack_140 = (undefined *)0x8;
      uVar3 = (ulong)(iVar7 + 1);
      FUN_10840fe24(0x3ff8000000000000);
      iVar7 = *(int *)(pppuVar5 + 3);
      ppuVar6[iVar7] = (undefined *)param_3;
      if (iVar7 != 0) {
        _memcpy(ppuVar6,pppuVar5[2],(long)iVar7 << 3);
      }
      if ((*(byte *)((long)pppuVar5 + 0x1c) & 1) != 0) {
        _free(pppuVar5[2]);
      }
      uVar3 = uVar3 >> 3;
      if (0x7ffffffe < uVar3) {
        uVar3 = 0x7fffffff;
      }
      pppuVar5[2] = ppuVar6;
      *(uint *)((long)pppuVar5 + 0x1c) = (int)uVar3 << 1 | 1;
      iVar7 = *(int *)(pppuVar5 + 3);
    }
    *(int *)(pppuVar5 + 3) = iVar7 + 1;
  }
  else if (iVar7 == 0x17) goto LAB_1083f8b34;
  return (undefined ***)0x0;
}



/* Entry: 1083f8ad0; end: 1083f8bf7;  */

long * FUN_1083f8ad0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  iVar3 = *(int *)(*param_2 + 0xc);
  if (iVar3 == 0xc) {
    if (*(int *)(*param_2 + 0x38) != 1) {
LAB_1083f8b34:
                    /* WARNING: Could not recover jumptable at 0x0001083f8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))(param_1);
      return param_1;
    }
  }
  else if (iVar3 == 0x18) {
    iVar3 = (int)param_1[3];
    if (iVar3 < (int)(*(uint *)((long)param_1 + 0x1c) >> 1)) {
      *(long **)(param_1[2] + (long)iVar3 * 8) = param_2;
    }
    else {
      if (iVar3 == 0x7fffffff) {
        func_0x00010bdb1a68();
        *param_1 = (long)&PTR_FUN_110a473f8;
        if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
          _free(param_1[2]);
        }
        return param_1;
      }
      uStack_38 = 0x7fffffff;
      uStack_40 = 8;
      uVar2 = (ulong)(iVar3 + 1);
      FUN_10840fe24(0x3ff8000000000000);
      iVar3 = (int)param_1[3];
      *(long **)((long)puVar1 + (long)iVar3 * 8) = param_2;
      if (iVar3 != 0) {
        _memcpy(puVar1,param_1[2],(long)iVar3 << 3);
      }
      if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
        _free(param_1[2]);
      }
      uVar2 = uVar2 >> 3;
      if (0x7ffffffe < uVar2) {
        uVar2 = 0x7fffffff;
      }
      param_1[2] = (long)puVar1;
      *(uint *)((long)param_1 + 0x1c) = (int)uVar2 << 1 | 1;
      iVar3 = (int)param_1[3];
    }
    *(int *)(param_1 + 3) = iVar3 + 1;
  }
  else if (iVar3 == 0x17) goto LAB_1083f8b34;
  return (long *)0x0;
}



/* Entry: 1083f8bf8; end: 1083f8c33;  */

undefined8 * FUN_1083f8bf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a473f8;
  if ((*(byte *)((long)param_1 + 0x1c) & 1) != 0) {
    _free(param_1[2]);
  }
  return param_1;
}



/* Entry: 1083f8c34; end: 1083f8c47;  */

void FUN_1083f8c34(void)

{
  FUN_1083f8bf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083f8c48; end: 1083f8c5b;  */

undefined8 FUN_1083f8c48(void)

{
  return 0;
}



/* Entry: 1083f8c5c; end: 1083f8e9f;  */

void FUN_1083f8c5c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  double adStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_3 + 0x18);
  if (*(int *)(lVar7 + 0xc) == 0x2f) {
    bVar2 = *(byte *)(lVar7 + 0x24);
    for (uVar6 = 0; bVar2 != uVar6; uVar6 = uVar6 + 1) {
      adStack_68[uVar6] = (double)(int)*(char *)(lVar7 + 0x20 + uVar6);
    }
    uVar4 = *(undefined8 *)(*param_2 + 0x40);
    FUN_1083f0d08(uVar4,param_2,(ulong)bVar2,1);
    FUN_1083dcad4(&plStack_70,param_2,*(undefined4 *)(param_3 + 8),uVar4,adStack_68);
    plStack_80 = plStack_70;
    uVar1 = *(undefined4 *)(param_3 + 8);
    plStack_70 = (long *)0x0;
    plVar5 = *(long **)(param_3 + 0x20);
    (**(code **)(*plVar5 + 0x30))(&lStack_88,plVar5,(int)plVar5[1]);
    FUN_1083e6f50(&lStack_78,param_2,uVar1,&plStack_80,&lStack_88);
    lVar3 = lStack_88;
    lStack_88 = 0;
    if (lVar3 != 0) {
      FUN_1083f8ea0();
    }
    plVar5 = plStack_80;
    plStack_80 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_1083f8ea0();
    }
    uVar1 = *(undefined4 *)(param_3 + 8);
    plVar5 = *(long **)(lVar7 + 0x18);
    (**(code **)(*plVar5 + 0x30))(&lStack_90,plVar5,(int)plVar5[1]);
    lStack_98 = lStack_78;
    lStack_78 = 0;
    FUN_1083e6f50(param_1,param_2,uVar1,&lStack_90,&lStack_98);
    lVar7 = lStack_98;
    lStack_98 = 0;
    if (lVar7 != 0) {
      FUN_1083f8ea0();
    }
    lVar7 = lStack_90;
    lStack_90 = 0;
    if (lVar7 != 0) {
      FUN_1083f8ea0();
    }
    lVar7 = lStack_78;
    lStack_78 = 0;
    if (lVar7 != 0) {
      FUN_1083f8ea0();
    }
    param_2 = plStack_70;
    plStack_70 = (long *)0x0;
    if (param_2 != (long *)0x0) {
      FUN_1083f8ea0();
    }
  }
  else {
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    lVar7 = lStack_98;
    lStack_98 = 0;
    if (lVar7 != 0) {
      FUN_1083f8ea0();
    }
    lVar7 = lStack_90;
    lStack_90 = 0;
    if (lVar7 != 0) {
      FUN_1083f8ea0();
    }
    lVar7 = lStack_78;
    lStack_78 = 0;
    if (lVar7 != 0) {
      FUN_1083f8ea0();
    }
    plVar5 = plStack_70;
    plStack_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_1083f8ea0();
    }
    __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0001083f8ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))();
    return;
  }
  return;
}



/* Entry: 1083f8ea0; end: 1083f8eab;  */

void FUN_1083f8ea0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001083f8ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1083f8eac; end: 1083f8edf;  */

void FUN_1083f8eac(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_24 = param_4;
  uStack_20 = param_5;
  uStack_1c = param_6;
  uStack_18 = param_7;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083f8ee0; end: 1083f8f4f;  */

undefined8 * FUN_1083f8ee0(long param_1)

{
  long extraout_x9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001083fcc7c();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    puVar1 = (undefined8 *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 0x20);
    uVar2 = *unaff_x20;
    uVar4 = unaff_x20[3];
    uVar3 = unaff_x20[2];
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
  }
  else {
    func_0x0001083fcc30(0x3ff8000000000000);
    FUN_1083fc6f8();
    func_0x0001083fcd40();
    puVar1 = (undefined8 *)(param_1 + extraout_x9 * 0x20);
    uVar4 = *unaff_x20;
    uVar3 = unaff_x20[3];
    uVar2 = unaff_x20[2];
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar4;
    puVar1[3] = uVar3;
    puVar1[2] = uVar2;
    FUN_1083fc71c();
  }
  func_0x0001083fcd30();
  return puVar1;
}



/* Entry: 1083f8f50; end: 1083f8f8f;  */

long FUN_1083f8f50(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 < *(int *)(param_1 + 8)) {
    lVar1 = param_1;
    FUN_1083f8f90();
    if (*(int *)(lVar1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 1083f8f90; end: 1083f9007;  */

long FUN_1083f8f90(long *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = (int)param_1[1] + ~param_2;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)param_1[1])) {
    return *param_1 + (ulong)uVar1 * 0x20;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083f8fb8);
  (*pcVar2)();
}



/* Entry: 1083f9008; end: 1083f9177;  */

void FUN_1083f9008(long param_1,uint param_2,int param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  ulong uVar2;
  
  func_0x0001083fcb94();
  if (((param_1 != 0) && (func_0x0001083fce24(), (bool)in_ZR)) &&
     (param_3 <= *(int *)(param_1 + 0xc))) {
    uVar1 = param_2 - 1;
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0xfa) {
LAB_1083f9054:
      if (uVar1 != param_2) {
LAB_1083f9074:
        func_0x0001083fcdac();
        func_0x0001083fcc3c();
        goto LAB_1083f9158;
      }
    }
    else if (param_3 < 3) {
      FUN_1083f9384();
      if ((uVar2 & 1) == 0) {
        if (param_2 == 0x170) {
          uVar1 = 0x164;
        }
        else {
          if (param_2 != 0x175) goto LAB_1083f90a8;
          uVar1 = 0x16a;
        }
        goto LAB_1083f9054;
      }
      goto LAB_1083f9074;
    }
  }
LAB_1083f90a8:
  if (((((0x3b < param_2 - 0x165) ||
        ((1L << ((ulong)(param_2 - 0x165) & 0x3f) & 0x842084210410841U) == 0)) &&
       ((0x3d < param_2 - 0x1a6 ||
        ((1L << ((ulong)(param_2 - 0x1a6) & 0x3f) & 0x2082082080008421U) == 0)))) &&
      ((0x3b < param_2 - 0xfb ||
       ((1L << ((ulong)(param_2 - 0xfb) & 0x3f) & 0xa00000000000821U) == 0)))) &&
     ((0x12 < param_2 - 0x1e9 || ((1 << (ulong)(param_2 - 0x1e9 & 0x1f) & 0x41041U) == 0)))) {
    return;
  }
  func_0x0001083fcc3c();
LAB_1083f9158:
  func_0x0001083fce3c();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083f9178; end: 1083f9287;  */

void FUN_1083f9178(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uStack_48;
  uint uStack_44;
  
  iVar2 = param_1[6];
code_r0x0001083f942c:
  uVar8 = (uint)param_2;
  if (0 < (int)uVar8) {
    puVar6 = param_1;
    func_0x0001083fcc10();
    if ((puVar6 == (undefined4 *)0x0) || (puVar6[7] != iVar2)) goto LAB_1083f9520;
    switch(*puVar6) {
    case 0x20b:
    case 0x20c:
    case 0x20d:
    case 0x20e:
    case 0x20f:
    case 0x210:
    case 0x211:
    case 0x212:
    case 0x213:
    case 0x214:
    case 0x21d:
      goto code_r0x0001083f9470;
    case 0x216:
      if ((uVar8 == 1) && (puVar7 = param_1, FUN_1083f9288(), ((ulong)puVar7 & 1) != 0)) {
        return;
      }
      if (uVar8 == puVar6[3]) {
        uStack_48 = puVar6[1];
        uStack_44 = uVar8;
        if (param_1[2] == 0) goto code_r0x0001083f954c;
        func_0x0001083fcc70();
        func_0x0001083f9550(param_1,&uStack_48);
        if (uStack_44 == 0) {
          return;
        }
        FUN_1083f9778(param_1,CONCAT44(uStack_44,uStack_48));
        param_2 = (ulong)uStack_44;
        if ((int)uStack_44 < 1) {
          return;
        }
      }
    default:
LAB_1083f9520:
      func_0x0001083fcb48(param_1,0x21c,0xffffffffffffffff,param_2);
      break;
    case 0x21c:
      puVar6[3] = puVar6[3] + uVar8;
      return;
    case 0x21f:
    case 0x221:
    case 0x224:
      iVar4 = param_1[2];
      param_2 = (ulong)(uVar8 - 1);
      goto joined_r0x0001083f94a0;
    }
  }
  return;
code_r0x0001083f9470:
  uVar3 = puVar6[3];
  uVar1 = uVar3;
  if ((int)uVar8 <= (int)uVar3) {
    uVar1 = uVar8;
  }
  puVar6[3] = uVar3 - uVar1;
  param_2 = (ulong)(uVar8 - uVar1);
  if ((int)uVar3 <= (int)uVar8) {
    iVar4 = param_1[2];
joined_r0x0001083f94a0:
    if (iVar4 == 0) {
code_r0x0001083f954c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1083f9550);
      (*pcVar5)();
    }
    func_0x0001083fcc70();
  }
  goto code_r0x0001083f942c;
}



/* Entry: 1083f9288; end: 1083f9383;  */

void FUN_1083f9288(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  long unaff_x19;
  
  if (2 < param_1[2]) {
    func_0x0001083fcb68();
    piVar5 = param_1;
    func_0x0001083fcc30();
    FUN_1083f8f50();
    piVar6 = piVar5;
    func_0x0001083fcdfc();
    if ((((param_1 != (int *)0x0) && (piVar5 != (int *)0x0)) && (piVar6 != (int *)0x0)) &&
       (*param_1 == 0x216)) {
      iVar1 = *piVar5;
      iVar4 = iVar1;
      FUN_1083f9384();
      if (((iVar4 != 0) && (iVar4 = piVar5[3], iVar4 == param_1[3])) &&
         ((iVar1 == 0xfa || iVar4 == 1 && ((*piVar6 == 0x211 || (*piVar6 == 0x20f)))))) {
        iVar1 = piVar6[3];
        if ((iVar4 <= iVar1) && (iVar2 = param_1[1], iVar2 + iVar4 == piVar6[1] + iVar1)) {
          piVar6[3] = iVar1 - iVar4;
          piVar5[1] = (iVar2 + iVar4) - piVar5[3];
          if (*(int *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1083f9384);
            (*pcVar3)();
          }
          func_0x0001083fcc70();
        }
      }
    }
  }
  return;
}



/* Entry: 1083f9384; end: 1083f93ff;  */

bool FUN_1083f9384(int param_1)

{
  if (((0x36 < param_1 - 0x1c4U) ||
      ((1L << ((ulong)(param_1 - 0x1c4U) & 0x3f) & 0x41041041041041U) == 0)) &&
     ((0x3b < param_1 - 0x16aU ||
      ((1L << ((ulong)(param_1 - 0x16aU) & 0x3f) & 0x800080000410001U) == 0)))) {
    return param_1 == 0xfa || (param_1 == 0x105 || param_1 == 0x164);
  }
  return true;
}



/* Entry: 1083f9400; end: 1083f9777;  */

void FUN_1083f9400(undefined4 *param_1,ulong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uStack_48;
  uint uStack_44;
  
code_r0x0001083f942c:
  uVar7 = (uint)param_2;
  if (0 < (int)uVar7) {
    puVar5 = param_1;
    func_0x0001083fcc10();
    if ((puVar5 == (undefined4 *)0x0) || (puVar5[7] != param_3)) goto LAB_1083f9520;
    switch(*puVar5) {
    case 0x20b:
    case 0x20c:
    case 0x20d:
    case 0x20e:
    case 0x20f:
    case 0x210:
    case 0x211:
    case 0x212:
    case 0x213:
    case 0x214:
    case 0x21d:
      goto code_r0x0001083f9470;
    case 0x216:
      if ((uVar7 == 1) && (puVar6 = param_1, FUN_1083f9288(), ((ulong)puVar6 & 1) != 0)) {
        return;
      }
      if (uVar7 == puVar5[3]) {
        uStack_48 = puVar5[1];
        uStack_44 = uVar7;
        if (param_1[2] == 0) goto code_r0x0001083f954c;
        func_0x0001083fcc70();
        func_0x0001083f9550(param_1,&uStack_48);
        if (uStack_44 == 0) {
          return;
        }
        FUN_1083f9778(param_1,CONCAT44(uStack_44,uStack_48));
        param_2 = (ulong)uStack_44;
        if ((int)uStack_44 < 1) {
          return;
        }
      }
    default:
LAB_1083f9520:
      func_0x0001083fcb48(param_1,0x21c,0xffffffffffffffff,param_2);
      break;
    case 0x21c:
      puVar5[3] = puVar5[3] + uVar7;
      return;
    case 0x21f:
    case 0x221:
    case 0x224:
      iVar3 = param_1[2];
      param_2 = (ulong)(uVar7 - 1);
      goto joined_r0x0001083f94a0;
    }
  }
  return;
code_r0x0001083f9470:
  uVar2 = puVar5[3];
  uVar1 = uVar2;
  if ((int)uVar7 <= (int)uVar2) {
    uVar1 = uVar7;
  }
  puVar5[3] = uVar2 - uVar1;
  param_2 = (ulong)(uVar7 - uVar1);
  if ((int)uVar2 <= (int)uVar7) {
    iVar3 = param_1[2];
joined_r0x0001083f94a0:
    if (iVar3 == 0) {
code_r0x0001083f954c:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1083f9550);
      (*pcVar4)();
    }
    func_0x0001083fcc70();
  }
  goto code_r0x0001083f942c;
}



/* Entry: 1083f9778; end: 1083f977f;  */

void FUN_1083f9778(int *param_1,undefined8 param_2)

{
  int extraout_w8;
  int extraout_w9;
  int iVar1;
  
  iVar1 = (int)((ulong)param_2 >> 0x20);
  func_0x0001083fcb94();
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x216)) &&
      (func_0x0001083fcbb4(), extraout_w9 == (int)param_2)) && (param_1[4] - extraout_w8 == iVar1))
  {
    param_1[3] = extraout_w8 + iVar1;
    return;
  }
  func_0x0001083fcd20();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083f9780; end: 1083f994b;  */

void FUN_1083f9780(void)

{
  uint uVar1;
  code *pcVar2;
  int *piVar3;
  int unaff_w19;
  int *unaff_x20;
  
  func_0x0001083fccb8();
  while ((piVar3 = unaff_x20, func_0x0001083fcc10(), piVar3 != (int *)0x0 &&
         (((uVar1 = *piVar3 - 0xf2, uVar1 < 5 && uVar1 != 3 || (*piVar3 == 0x22c)) &&
          (piVar3[3] == unaff_w19))))) {
    if (unaff_x20[2] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1083f97f0);
      (*pcVar2)();
    }
    unaff_x20[2] = unaff_x20[2] + -1;
  }
  func_0x0001083fcaa0();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083f994c; end: 1083f9ac3;  */

void FUN_1083f994c(int *param_1,int param_2)

{
  func_0x0001083fcc10();
  if ((param_1 != (int *)0x0) &&
     ((*param_1 == 0xf6 || ((*param_1 == 0x22c && (param_1[4] == param_2)))))) {
    return;
  }
  func_0x0001083fcd20();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083f9ac4; end: 1083f9ae3;  */

void FUN_1083f9ac4(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined4 param_5)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = (undefined4)((ulong)(param_4 + (param_4 << 0x20)) >> 0x20);
  uStack_2c = (undefined4)param_2;
  uStack_24 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  uStack_30 = param_5;
  uStack_20 = param_3;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083f9ae4; end: 1083f9b5b;  */

void FUN_1083f9ae4(int *param_1,undefined8 param_2)

{
  int extraout_w8;
  int extraout_w9;
  int iVar1;
  
  iVar1 = (int)((ulong)param_2 >> 0x20);
  func_0x0001083fcb94();
  if (((param_1 == (int *)0x0) || (*param_1 != 0x213)) ||
     (func_0x0001083fcbb4(), extraout_w9 != (int)param_2)) {
    if (0 < iVar1) {
      func_0x0001083fce3c();
      FUN_1083f8ee0();
      return;
    }
  }
  else {
    param_1[3] = extraout_w8 + iVar1;
  }
  return;
}



/* Entry: 1083f9b5c; end: 1083f9b9f;  */

void FUN_1083f9b5c(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = (undefined4)((ulong)(param_4 + (param_4 << 0x20)) >> 0x20);
  uStack_2c = (undefined4)param_2;
  uStack_30 = 0x214;
  uStack_24 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  uStack_20 = param_3;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083f9ba0; end: 1083f9cdf;  */

void FUN_1083f9ba0(long param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = param_3 == 1;
  if (0 < param_3) {
    func_0x0001083fcb94();
    if (((param_1 == 0) || (func_0x0001083fce24(), !(bool)uVar1)) ||
       (*(int *)(param_1 + 0x10) != param_2)) {
      func_0x0001083fcc3c();
      func_0x0001083fce3c();
      FUN_1083f8ee0();
      return;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  }
  return;
}



/* Entry: 1083f9ce0; end: 1083f9e47;  */

void FUN_1083f9ce0(undefined8 *param_1,int param_2,int param_3,ulong param_4)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long extraout_x8;
  long extraout_x9;
  ulong uVar6;
  ulong uVar7;
  int unaff_w19;
  undefined8 *unaff_x20;
  char cStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = (undefined4)(param_4 >> 0x20);
  iVar4 = (int)param_4;
  func_0x0001083fccb8();
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (CONCAT44(uVar5,iVar4) != 0) {
    param_1 = &uStack_58;
    param_2 = param_3;
    param_3 = (int)param_4;
    _memmove();
  }
  param_4 = param_4 & 0xffffffff;
  uVar6 = param_4;
  while( true ) {
    uVar6 = uVar6 - 1;
    iVar4 = (int)param_4;
    if ((iVar4 < 1) || ((char)uStack_58 != '\0')) break;
    uVar7 = 1;
    while (pcVar1 = (char *)((ulong)&uStack_58 | 1), uVar2 = uVar6, param_4 != uVar7) {
      pcVar1 = (char *)((long)&uStack_58 + uVar7);
      uVar7 = uVar7 + 1;
      if (*pcVar1 == '\0') goto LAB_1083f9d9c;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      pcVar1[-1] = *pcVar1 + -1;
      pcVar1 = pcVar1 + 1;
    }
    param_4 = param_4 - 1;
    *(undefined1 *)((long)&uStack_58 + param_4) = 0;
    unaff_w19 = unaff_w19 + -1;
  }
LAB_1083f9d9c:
  if (param_4 == 0) {
    func_0x0001083fcdac();
  }
  else if (iVar4 < 5 && unaff_w19 < 5) {
    FUN_1083fa368(&uStack_58,(long)iVar4);
    param_2 = iVar4 + 0x157;
    func_0x0001083fcc3c();
    func_0x0001083fce3c();
    FUN_1083f8eac();
    param_1 = unaff_x20;
  }
  else {
    FUN_1083fa368(&uStack_58,8);
    FUN_1083fa368(&uStack_50,8);
    param_2 = 0x15c;
    func_0x0001083fcc3c();
    FUN_1083f8eac();
    param_1 = unaff_x20;
  }
  func_0x0001083fcba4(uStack_48);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    __Unwind_Resume();
    uVar3 = param_2 == 1;
    if (((((bool)uVar3) && (param_3 == 0)) && (func_0x0001083fcb94(), param_1 != (undefined8 *)0x0))
       && (func_0x0001083fce24(), (bool)uVar3)) {
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
      return;
    }
    func_0x0001083fcc3c();
    func_0x0001083fce3c();
    FUN_1083f8ee0();
    return;
  }
  return;
}



/* Entry: 1083f9e48; end: 1083f9f3b;  */

void FUN_1083f9e48(long param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  uVar1 = param_2 == 1;
  if (((((bool)uVar1) && (param_3 == 0)) && (func_0x0001083fcb94(), param_1 != 0)) &&
     (func_0x0001083fce24(), (bool)uVar1)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return;
  }
  func_0x0001083fcc3c();
  func_0x0001083fce3c();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083f9f3c; end: 1083f9f5b;  */

void FUN_1083f9f3c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,int param_5
                  )

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack_1c = param_5 - (int)param_2;
  uStack_30 = 0x20d;
  uStack_2c = 0xffffffff;
  uStack_24 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_28 = 0xffffffff;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_20 = param_4;
  uStack_18 = param_3;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083f9f5c; end: 1083f9fc7;  */

void FUN_1083f9f5c(undefined4 *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uStack_48;
  uint uStack_44;
  
  func_0x0001083fce30();
  if ((bool)in_ZR || in_NG != in_OV) {
    FUN_1083f9778();
  }
  else {
    FUN_1083f9fc8(param_1);
  }
  param_2 = param_2 >> 0x20;
  iVar2 = param_1[6];
code_r0x0001083f942c:
  uVar8 = (uint)param_2;
  if (0 < (int)uVar8) {
    puVar6 = param_1;
    func_0x0001083fcc10();
    if ((puVar6 == (undefined4 *)0x0) || (puVar6[7] != iVar2)) goto LAB_1083f9520;
    switch(*puVar6) {
    case 0x20b:
    case 0x20c:
    case 0x20d:
    case 0x20e:
    case 0x20f:
    case 0x210:
    case 0x211:
    case 0x212:
    case 0x213:
    case 0x214:
    case 0x21d:
      goto code_r0x0001083f9470;
    case 0x216:
      if ((uVar8 == 1) && (puVar7 = param_1, FUN_1083f9288(), ((ulong)puVar7 & 1) != 0)) {
        return;
      }
      if (uVar8 == puVar6[3]) {
        uStack_48 = puVar6[1];
        uStack_44 = uVar8;
        if (param_1[2] == 0) goto code_r0x0001083f954c;
        func_0x0001083fcc70();
        func_0x0001083f9550(param_1,&uStack_48);
        if (uStack_44 == 0) {
          return;
        }
        FUN_1083f9778(param_1,CONCAT44(uStack_44,uStack_48));
        param_2 = (ulong)uStack_44;
        if ((int)uStack_44 < 1) {
          return;
        }
      }
    default:
LAB_1083f9520:
      func_0x0001083fcb48(param_1,0x21c,0xffffffffffffffff,param_2);
      break;
    case 0x21c:
      puVar6[3] = puVar6[3] + uVar8;
      return;
    case 0x21f:
    case 0x221:
    case 0x224:
      iVar4 = param_1[2];
      param_2 = (ulong)(uVar8 - 1);
      goto joined_r0x0001083f94a0;
    }
  }
  return;
code_r0x0001083f9470:
  uVar3 = puVar6[3];
  uVar1 = uVar3;
  if ((int)uVar8 <= (int)uVar3) {
    uVar1 = uVar8;
  }
  puVar6[3] = uVar3 - uVar1;
  param_2 = (ulong)(uVar8 - uVar1);
  if ((int)uVar3 <= (int)uVar8) {
    iVar4 = param_1[2];
joined_r0x0001083f94a0:
    if (iVar4 == 0) {
code_r0x0001083f954c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1083f9550);
      (*pcVar5)();
    }
    func_0x0001083fcc70();
  }
  goto code_r0x0001083f942c;
}



/* Entry: 1083f9fc8; end: 1083f9fcf;  */

void FUN_1083f9fc8(int *param_1,undefined8 param_2)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w9_00;
  int iVar1;
  
  func_0x0001083fce30();
  iVar1 = (int)((ulong)param_2 >> 0x20);
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001083fcb94();
    if ((((param_1 == (int *)0x0) || (*param_1 != 0x216)) ||
        (func_0x0001083fcbb4(), extraout_w9_00 != (int)param_2)) ||
       (param_1[4] - extraout_w8_00 != iVar1)) {
      func_0x0001083fcd20();
      goto FUN_1083f8eac;
    }
    param_1[3] = extraout_w8_00 + iVar1;
  }
  else {
    func_0x0001083fcb94();
    if (((param_1 == (int *)0x0) || (*param_1 != 0x215)) ||
       ((func_0x0001083fcbb4(), extraout_w9 != (int)param_2 || (param_1[4] - extraout_w8 != iVar1)))
       ) {
      func_0x0001083fcd20();
FUN_1083f8eac:
      FUN_1083f8ee0();
      return;
    }
    param_1[3] = extraout_w8 + iVar1;
  }
  return;
}



/* Entry: 1083f9fd0; end: 1083fa06f;  */

void FUN_1083f9fd0(int *param_1)

{
  code *pcVar1;
  long unaff_x19;
  
  func_0x0001083fcb68();
  if ((param_1 != (int *)0x0) && (*param_1 == 0xe3)) {
    if (*(int *)(unaff_x19 + 8) != 0) {
      func_0x0001083fcc70();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083fa01c);
    (*pcVar1)();
  }
  func_0x0001083fca50();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083fa070; end: 1083fa18f;  */

void FUN_1083fa070(int *param_1,undefined8 param_2,int param_3)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w9;
  int extraout_w9_00;
  int iVar1;
  
  func_0x0001083fce30();
  iVar1 = (int)((ulong)param_2 >> 0x20);
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0001083fcb94();
    if ((((param_1 == (int *)0x0) || (*param_1 != 0x216)) ||
        (func_0x0001083fcbb4(), extraout_w9_00 != (int)param_2)) ||
       (param_1[4] - extraout_w8_00 != param_3)) {
      func_0x0001083fcd20();
      goto FUN_1083f8eac;
    }
    param_1[3] = extraout_w8_00 + iVar1;
  }
  else {
    func_0x0001083fcb94();
    if (((param_1 == (int *)0x0) || (*param_1 != 0x215)) ||
       ((func_0x0001083fcbb4(), extraout_w9 != (int)param_2 || (param_1[4] - extraout_w8 != param_3)
        ))) {
      func_0x0001083fcd20();
FUN_1083f8eac:
      FUN_1083f8ee0();
      return;
    }
    param_1[3] = extraout_w8 + iVar1;
  }
  return;
}



/* Entry: 1083fa190; end: 1083fa1ab;  */

void FUN_1083fa190(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = (undefined4)((ulong)(param_4 + (param_4 << 0x20)) >> 0x20);
  uStack_2c = (undefined4)param_2;
  uStack_30 = 0x217;
  uStack_24 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  uStack_20 = param_3;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083fa1ac; end: 1083fa28b;  */

void FUN_1083fa1ac(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  
  piVar2 = param_1;
  func_0x0001083fcc10();
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0xf1)) {
    if (param_1[2] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1083fa1f4);
      (*pcVar1)();
    }
    func_0x0001083fcc70();
  }
  func_0x0001083fca50();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083fa28c; end: 1083fa367;  */

void FUN_1083fa28c(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((ulong)param_2 >> 0x20);
  func_0x0001083fcb94();
  if (((param_1 != (int *)0x0) && (*param_1 == 0x140)) && (param_1[4] == 0)) {
    iVar2 = (int)param_2;
    if (param_1[3] + param_1[1] != iVar2) {
      if (param_1[1] != iVar1 + iVar2) goto LAB_1083fa2c4;
      param_1[1] = iVar2;
    }
    param_1[3] = param_1[3] + iVar1;
    return;
  }
LAB_1083fa2c4:
  func_0x0001083fce3c();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083fa368; end: 1083fa38b;  */

uint FUN_1083fa368(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = (int)*(char *)(param_1 + -1 + param_2) | uVar1 << 4;
  }
  return uVar1;
}



/* Entry: 1083fa38c; end: 1083fa3eb;  */

void FUN_1083fa38c(undefined8 param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  FUN_1083fa368(in_x4,in_x5);
  FUN_1083f8ee0(param_1,&stack0xffffffffffffffd0);
  return;
}



/* Entry: 1083fa3ec; end: 1083fa4fb;  */

void FUN_1083fa3ec(int param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,
                  uint param_6)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  ulong uVar8;
  long extraout_x8_03;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar5 = 0;
  func_0x0001083fcba4(0);
  uStack_28 = 0;
  uStack_20 = 0;
  uVar9 = extraout_x8;
  uStack_18 = extraout_x9;
  while (uVar6 = (uint)uVar9, uVar3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU),
        uVar6 != (param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU))) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)((long)&uStack_28 + lVar5) = (char)uVar9;
      lVar5 = lVar5 + 1;
      uVar9 = (ulong)((int)uVar9 + param_4);
    }
    uVar9 = (ulong)(uVar6 + 1);
  }
  param_4 = param_4 * param_3;
  uVar3 = (uint)&uStack_28;
  FUN_1083f9ce0();
  func_0x0001083fcba4(uStack_18);
  if (extraout_x9_00 != extraout_x8_00) {
    ___stack_chk_fail();
    uStack_38 = 0x1083fa470;
    lVar5 = 0;
    puStack_40 = &stack0xfffffffffffffff0;
    func_0x0001083fcba4(0);
    uStack_58 = 0;
    uStack_50 = 0;
    uVar9 = extraout_x8_01;
    uStack_48 = extraout_x9_01;
    while (uVar7 = (uint)uVar9, uVar6 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU),
          uVar7 != (param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU))) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(bool *)((long)&uStack_58 + lVar5) = (int)uVar9 == 0;
        lVar5 = lVar5 + 1;
        uVar9 = (ulong)((int)uVar9 - 1);
      }
      uVar9 = (ulong)(uVar7 + 1);
    }
    iVar4 = (int)&uStack_58;
    iVar2 = 2;
    FUN_1083f9ce0();
    uVar3 = (uint)lVar5;
    func_0x0001083fcba4(uStack_48);
    if (extraout_x9_02 != extraout_x8_02) {
      ___stack_chk_fail();
      uVar12 = 0;
      lVar5 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar9 = (ulong)(iVar4 * iVar2);
      uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      for (uVar6 = 0; uVar6 != (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar6 = uVar6 + 1) {
        iVar11 = (int)uVar12;
        for (uVar7 = 0; (param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU)) != uVar7; uVar7 = uVar7 + 1
            ) {
          uVar8 = uVar12;
          uVar10 = uVar9;
          if (iVar2 <= (int)uVar6 || iVar4 <= (int)uVar7) {
            if (uVar6 == uVar7) {
              uVar8 = uVar14;
              if (uVar14 == 0) {
                param_1 = 0x3f800000;
                FUN_1083fa660(param_2);
                uVar8 = uVar9;
                uVar10 = uVar9 + 1;
                uVar14 = uVar9;
              }
            }
            else {
              uVar8 = uVar13;
              if (uVar13 == 0) {
                param_1 = 0;
                FUN_1083fa660(param_2);
                uVar8 = uVar9;
                uVar10 = uVar9 + 1;
                uVar13 = uVar9;
              }
            }
          }
          *(char *)((long)&uStack_d8 + lVar5) = (char)uVar8;
          lVar5 = lVar5 + 1;
          uVar12 = (ulong)((int)uVar12 + 1);
          uVar9 = uVar10;
        }
        uVar12 = (ulong)(uint)(iVar11 + iVar4);
      }
      FUN_1083f9ce0(param_2,uVar9,&uStack_d8);
      func_0x0001083fcba4(uStack_c8);
      if (extraout_x9_03 == extraout_x8_03) {
        return;
      }
      ___stack_chk_fail();
      uVar1 = 1;
      func_0x0001083fcb94();
      if (((param_2 != 0) && (func_0x0001083fce24(), (bool)uVar1)) &&
         (*(int *)(param_2 + 0x10) == param_1)) {
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        return;
      }
      func_0x0001083fcc3c();
      func_0x0001083fce3c();
      FUN_1083f8ee0();
    }
  }
  return;
}



/* Entry: 1083fa4fc; end: 1083fa65f;  */

void FUN_1083fa4fc(int param_1,long param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  undefined1 uVar1;
  ulong uVar2;
  long extraout_x8;
  long extraout_x9;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = 0;
  lVar4 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar5 = (ulong)(param_4 * param_3);
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0;
  uStack_70 = 0;
  for (uVar9 = 0; uVar9 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar9 = uVar9 + 1) {
    iVar7 = (int)uVar8;
    for (uVar3 = 0; (param_6 & ((int)param_6 >> 0x1f ^ 0xffffffffU)) != uVar3; uVar3 = uVar3 + 1) {
      uVar2 = uVar8;
      uVar6 = uVar5;
      if (param_3 <= (int)uVar9 || param_4 <= (int)uVar3) {
        if (uVar9 == uVar3) {
          uVar2 = uVar11;
          if (uVar11 == 0) {
            param_1 = 0x3f800000;
            FUN_1083fa660(param_2);
            uVar2 = uVar5;
            uVar6 = uVar5 + 1;
            uVar11 = uVar5;
          }
        }
        else {
          uVar2 = uVar10;
          if (uVar10 == 0) {
            param_1 = 0;
            FUN_1083fa660(param_2);
            uVar2 = uVar5;
            uVar6 = uVar5 + 1;
            uVar10 = uVar5;
          }
        }
      }
      *(char *)((long)&uStack_78 + lVar4) = (char)uVar2;
      lVar4 = lVar4 + 1;
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar5 = uVar6;
    }
    uVar8 = (ulong)(uint)(iVar7 + param_4);
  }
  FUN_1083f9ce0(param_2,uVar5,&uStack_78);
  func_0x0001083fcba4(uStack_68);
  if (extraout_x9 != extraout_x8) {
    ___stack_chk_fail();
    uVar1 = 1;
    func_0x0001083fcb94();
    if (((param_2 != 0) && (func_0x0001083fce24(), (bool)uVar1)) &&
       (*(int *)(param_2 + 0x10) == param_1)) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      return;
    }
    func_0x0001083fcc3c();
    func_0x0001083fce3c();
    FUN_1083f8ee0();
    return;
  }
  return;
}



/* Entry: 1083fa660; end: 1083fa697;  */

void FUN_1083fa660(int param_1,long param_2)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  func_0x0001083fcb94();
  if (((param_2 != 0) && (func_0x0001083fce24(), (bool)uVar1)) &&
     (*(int *)(param_2 + 0x10) == param_1)) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    return;
  }
  func_0x0001083fcc3c();
  func_0x0001083fce3c();
  FUN_1083f8ee0();
  return;
}



/* Entry: 1083fa698; end: 1083fa6cf;  */

void FUN_1083fa698(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_28 = param_5;
  uStack_1c = param_4;
  uStack_18 = param_3;
  uStack_14 = param_2;
  FUN_1083fa6d0(param_1,&uStack_14,&uStack_18,&uStack_1c,param_1 + 0x10,&uStack_28);
  return;
}



/* Entry: 1083fa6d0; end: 1083fa78b;  */

void FUN_1083fa6d0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  
  uVar1 = 0x48;
  __Znwm();
  FUN_1083fc784(auStack_60,param_2);
  FUN_1083fa958(uVar1,auStack_60,*param_3,*param_4,*param_5,*param_6,*param_7);
  *param_1 = uVar1;
  func_0x0001083fc848(auStack_60);
  return;
}



/* Entry: 1083fa78c; end: 1083fa7bf;  */

void FUN_1083fa78c(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  
  FUN_1082e95f0();
  for (uVar1 = (ulong)(param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU)); uVar1 != 0;
      uVar1 = uVar1 - 1) {
    *param_1 = param_3;
    param_1 = param_1 + 1;
  }
  return;
}



/* Entry: 1083fa7c0; end: 1083fa957;  */

int FUN_1083fa7c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = 1;
  switch(iVar3) {
  case 0x1e3:
  case 0x1e9:
  case 0x1ef:
  case 0x1f5:
  case 0x1fb:
  case 0x21c:
  case 0x21e:
    goto LAB_1083fa8bc;
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f6:
  case 0x1f7:
  case 0x1f8:
  case 0x1f9:
  case 0x1fa:
  case 0x1fc:
  case 0x1fd:
  case 0x1fe:
  case 0x1ff:
  case 0x200:
  case 0x201:
  case 0x202:
  case 0x203:
  case 0x204:
  case 0x205:
  case 0x206:
  case 0x207:
  case 0x208:
  case 0x209:
  case 0x20a:
  case 0x215:
  case 0x216:
  case 0x217:
  case 0x218:
  case 0x219:
  case 0x21a:
  case 0x21b:
code_r0x0001083fa878:
    iVar2 = 0;
    break;
  case 0x20b:
  case 0x20c:
  case 0x20d:
  case 0x20e:
  case 0x20f:
  case 0x210:
  case 0x211:
  case 0x212:
  case 0x213:
  case 0x214:
  case 0x21d:
    iVar2 = param_1[3];
    break;
  case 0x21f:
  case 0x221:
  case 0x224:
    break;
  case 0x220:
  case 0x222:
  case 0x223:
  case 0x225:
    iVar2 = -1;
    break;
  case 0x226:
  case 0x227:
  case 0x228:
    iVar2 = 4;
    break;
  case 0x229:
  case 0x22a:
    iVar2 = -4;
    break;
  default:
    switch(iVar3) {
    case 0x158:
      iVar3 = param_1[3];
      iVar2 = 1;
      break;
    case 0x159:
      iVar3 = param_1[3];
      iVar2 = 2;
      break;
    case 0x15a:
      iVar3 = param_1[3];
      iVar2 = 3;
      break;
    case 0x15b:
      iVar3 = param_1[3];
      iVar2 = 4;
      break;
    case 0x15c:
      iVar3 = param_1[3];
      iVar2 = param_1[4];
      break;
    case 0x15d:
    case 0x15e:
    case 0x15f:
      iVar2 = param_1[6] * param_1[5] + param_1[4] * param_1[3];
      goto code_r0x0001083fa8c0;
    case 0x160:
LAB_1083fa8f0:
      return param_1[3] * -2;
    case 0x161:
      return -3;
    case 0x162:
      goto LAB_1083fa8c4;
    case 0x163:
      return -7;
    case 0x164:
    case 0x166:
    case 0x167:
    case 0x168:
    case 0x169:
    case 0x16a:
    case 0x16c:
    case 0x16d:
    case 0x16e:
    case 0x16f:
    case 0x171:
    case 0x172:
    case 0x173:
    case 0x174:
    case 0x176:
    case 0x177:
    case 0x178:
    case 0x179:
    case 0x17a:
    case 0x17c:
    case 0x17d:
    case 0x17e:
    case 0x17f:
    case 0x180:
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
      goto code_r0x0001083fa878;
    default:
      uVar1 = iVar3 - 0x18b;
      if (uVar1 < 0x3b) {
        if ((1L << ((ulong)uVar1 & 0x3f) & 0x400042108210821U) != 0) goto LAB_1083fa8bc;
        if ((1L << ((ulong)uVar1 & 0x3f) & 0x10800000000000U) != 0) goto LAB_1083fa8f0;
      }
      uVar1 = iVar3 - 0x100;
      if (uVar1 < 0x3c) {
        if ((1L << ((ulong)uVar1 & 0x3f) & 0x50000000000041U) != 0) goto LAB_1083fa8bc;
        if ((ulong)uVar1 == 0x3b) {
LAB_1083fa8c4:
          return -5;
        }
      }
      if (((0x12 < iVar3 - 0x1cbU) || ((1 << (ulong)(iVar3 - 0x1cbU & 0x1f) & 0x41041U) == 0)) &&
         (iVar3 != 0xfb)) goto code_r0x0001083fa878;
    case 0x165:
    case 0x16b:
    case 0x170:
    case 0x175:
    case 0x17b:
    case 0x181:
    case 0x186:
LAB_1083fa8bc:
      iVar2 = param_1[3];
code_r0x0001083fa8c0:
      return -iVar2;
    }
    iVar2 = iVar2 - iVar3;
  }
  return iVar2;
}



/* Entry: 1083fa958; end: 1083fabf7;  */

long * FUN_1083fa958(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,long param_7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_1;
  FUN_1083fc784();
  *(undefined4 *)(plVar7 + 2) = param_3;
  *(undefined4 *)((long)plVar7 + 0x14) = param_4;
  *(undefined4 *)(plVar7 + 3) = param_5;
  *(undefined4 *)((long)plVar7 + 0x1c) = 0;
  plVar13 = plVar7 + 5;
  *plVar13 = 0;
  *(undefined4 *)(plVar7 + 4) = param_6;
  plVar7[6] = 0x100000000;
  plVar7[7] = param_7;
  plVar14 = plVar7 + 8;
  *plVar14 = 0;
  lVar10 = *plVar7;
  iVar15 = 1;
  for (lVar12 = (long)(int)plVar7[1] << 5; lVar12 != 0; lVar12 = lVar12 + -0x20) {
    if (iVar15 <= *(int *)(lVar10 + 0x1c) + 1) {
      iVar15 = *(int *)(lVar10 + 0x1c) + 1;
    }
    lVar10 = lVar10 + 0x20;
  }
  lStack_70 = 0;
  uStack_68 = 0x100000000;
  lStack_60 = 0;
  uStack_58 = 0x100000000;
  func_0x0001083fcdd8(&lStack_70);
  func_0x0001083fcdd8(&lStack_60);
  lVar5 = lStack_60;
  lVar4 = lStack_70;
  lVar10 = *param_1;
  lVar12 = (long)(int)param_1[1] << 5;
  while( true ) {
    if (lVar12 == 0) {
      FUN_1081f8340(&lStack_60);
      if (plVar13 != &lStack_70) {
        *(undefined4 *)(param_1 + 6) = 0;
        if ((uStack_68 & 0x100000000) == 0) {
          FUN_1081f848c(0x3ff0000000000000,plVar13,uStack_68 & 0xffffffff);
          *(int *)(param_1 + 6) = (int)uStack_68;
          if ((int)uStack_68 != 0) {
            _memcpy(*plVar13,lStack_70,(long)(int)uStack_68 << 2);
          }
        }
        else {
          if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
            uVar11 = 1;
            uVar9 = uStack_68._4_4_;
          }
          else {
            _free(*plVar13);
            uVar11 = uStack_68._4_4_ & 1;
            uVar9 = uStack_68._4_4_;
          }
          lVar10 = lStack_70;
          lStack_70 = 0;
          param_1[5] = lVar10;
          uStack_68 = CONCAT44(uVar11,(int)uStack_68);
          *(int *)(param_1 + 6) = (int)uStack_68;
          *(uint *)((long)param_1 + 0x34) = uVar9 | 1;
        }
        uStack_68 = uStack_68 & 0xffffffff00000000;
      }
      FUN_1081f8340(&lStack_70);
      iVar15 = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = 0;
      piVar1 = (int *)param_1[5];
      for (lVar10 = (long)(int)param_1[6] << 2; lVar10 != 0; lVar10 = lVar10 + -4) {
        iVar15 = *piVar1 + iVar15;
        *(int *)((long)param_1 + 0x1c) = iVar15;
        piVar1 = piVar1 + 1;
      }
      if (param_1[7] != 0) {
        FUN_1083f54f0(&lStack_60,param_1[7] + 0x60);
        lVar10 = lStack_60;
        lStack_60 = 0;
        lVar12 = *plVar14;
        *plVar14 = lVar10;
        if (lVar12 != 0) {
          func_0x0001083fcde4();
          lVar10 = lStack_60;
          lStack_60 = 0;
          if (lVar10 != 0) {
            func_0x0001083fcde4();
          }
        }
      }
      return param_1;
    }
    uVar11 = *(uint *)(lVar10 + 0x1c);
    if (((int)uVar11 < 0) || ((int)uStack_58 <= (int)uVar11)) break;
    lVar8 = lVar10;
    FUN_1083fa7c0();
    piVar1 = (int *)(lVar5 + (ulong)uVar11 * 4);
    iVar15 = *piVar1 + (int)lVar8;
    *piVar1 = iVar15;
    if (((int)uStack_58 <= (int)uVar11) || ((int)uStack_68 <= (int)uVar11)) break;
    piVar2 = (int *)(lVar4 + (ulong)uVar11 * 4);
    piVar3 = piVar2;
    if (*piVar2 <= iVar15) {
      piVar3 = piVar1;
    }
    *piVar2 = *piVar3;
    lVar10 = lVar10 + 0x20;
    lVar12 = lVar12 + -0x20;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1083fabb0);
  (*pcVar6)();
}



/* Entry: 1083fabf8; end: 1083fac27;  */

undefined8 FUN_1083fabf8(long param_1)

{
  uint extraout_w8;
  undefined8 unaff_x19;
  
  func_0x000108394b7c(param_1 + 0x40);
  FUN_1081f8340(param_1 + 0x28);
  func_0x0001083fce7c(param_1);
  if ((extraout_w8 & 1) != 0) {
    func_0x0001083fcc18();
  }
  return unaff_x19;
}



/* Entry: 1083fac28; end: 1083fad33;  */

void FUN_1083fac28(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,ulong param_8)

{
  int *piVar1;
  int aiStack_70 [2];
  ulong uStack_68;
  
  param_8 = param_8 & 0xffffffff;
  while( true ) {
    aiStack_70[0] = (int)param_8;
    if (aiStack_70[0] < 5) break;
    FUN_1083fac28(param_1,param_2,param_3,param_4,param_5,param_6,param_7,4);
    param_4 = (ulong)(uint)((int)param_4 + (int)param_5 * 0x10);
    param_6 = (ulong)(uint)((int)param_6 + (int)param_7 * 0x10);
    param_8 = param_8 - 4;
  }
  if (0 < aiStack_70[0]) {
    if (param_2 != 0) {
      piVar1 = (int *)(param_2 + (param_6 & 0xffffffff));
      do {
        param_8 = param_8 - 1;
        piVar1 = piVar1 + 1;
        if (param_8 == 0) {
          aiStack_70[0] = aiStack_70[0] + 0x13f;
          uStack_68 = (ulong)*(uint *)(param_2 + (param_6 & 0xffffffff)) | param_4 << 0x20;
          goto LAB_1083fad00;
        }
      } while (*(int *)(param_2 + (param_6 & 0xffffffff)) == *piVar1);
    }
    aiStack_70[0] = (int)param_3 + aiStack_70[0] + -1;
    uStack_68 = param_4 & 0xffffffff | param_6 << 0x20;
LAB_1083fad00:
    FUN_1083fad34(param_1,aiStack_70);
  }
  return;
}



/* Entry: 1083fad34; end: 1083fad93;  */

void FUN_1083fad34(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x0001083fcc7c();
  lVar2 = (long)*(int *)(param_1 + 8);
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    uVar3 = *unaff_x20;
    puVar1 = (undefined8 *)(*unaff_x19 + lVar2 * 0x10);
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
  }
  else {
    FUN_1083fc86c(0x3ff8000000000000,lVar2,1);
    func_0x0001083fcd40();
    uVar3 = *unaff_x20;
    puVar1 = (undefined8 *)(lVar2 + extraout_x9 * 0x10);
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
    FUN_1083fc8a0();
  }
  func_0x0001083fcd30();
  return;
}



/* Entry: 1083fad94; end: 1083fae07;  */

/* WARNING: Removing unreachable block (ram,0x0001083facbc) */
/* WARNING: Removing unreachable block (ram,0x0001083facc8) */
/* WARNING: Removing unreachable block (ram,0x0001083facf4) */
/* WARNING: Removing unreachable block (ram,0x0001083faccc) */

void FUN_1083fad94(undefined8 param_1,ulong param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_70 [2];
  ulong uStack_68;
  
  iVar3 = iRam0000000113254ea0;
  iVar1 = iRam0000000113254ea0 * 0x10;
  iVar2 = iRam0000000113254ea0 * 0x10;
  while( true ) {
    if (param_4 < 5) break;
    FUN_1083fac28(param_1,0,0x14c,param_2,iVar3,param_3,iVar3,4);
    param_2 = (ulong)(uint)((int)param_2 + iVar1);
    param_3 = (ulong)(uint)((int)param_3 + iVar2);
    param_4 = param_4 + -4;
  }
  if (0 < param_4) {
    aiStack_70[0] = param_4 + 0x14b;
    uStack_68 = param_2 & 0xffffffff | param_3 << 0x20;
    FUN_1083fad34(param_1,aiStack_70);
  }
  return;
}



/* Entry: 1083fae08; end: 1083fae63;  */

void FUN_1083fae08(undefined8 param_1,undefined8 param_2,uint param_3,long param_4,int param_5)

{
  if (0 < param_5) {
    func_0x0001083fccf0((ulong)param_3 | param_4 << 0x20);
  }
  return;
}



/* Entry: 1083fae64; end: 1083fae93;  */

void FUN_1083fae64(long param_1,undefined4 param_2)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_30 = 0x206;
  uStack_2c = 0xffffffff;
  uStack_28 = 0xffffffff;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  uStack_24 = param_2;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083fae94; end: 1083faefb;  */

void FUN_1083fae94(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uStack_48;
  uint uStack_44;
  
  func_0x0001083f926c(param_1,1);
  uVar8 = 0x209;
  func_0x0001083fca50();
  FUN_1083f8eac();
  func_0x0001083fcc30();
  iVar2 = param_1[6];
code_r0x0001083f942c:
  uVar9 = (uint)uVar8;
  if (0 < (int)uVar9) {
    puVar6 = param_1;
    func_0x0001083fcc10();
    if ((puVar6 == (undefined4 *)0x0) || (puVar6[7] != iVar2)) goto LAB_1083f9520;
    switch(*puVar6) {
    case 0x20b:
    case 0x20c:
    case 0x20d:
    case 0x20e:
    case 0x20f:
    case 0x210:
    case 0x211:
    case 0x212:
    case 0x213:
    case 0x214:
    case 0x21d:
      goto code_r0x0001083f9470;
    case 0x216:
      if ((uVar9 == 1) && (puVar7 = param_1, FUN_1083f9288(), ((ulong)puVar7 & 1) != 0)) {
        return;
      }
      if (uVar9 == puVar6[3]) {
        uStack_48 = puVar6[1];
        uStack_44 = uVar9;
        if (param_1[2] == 0) goto code_r0x0001083f954c;
        func_0x0001083fcc70();
        func_0x0001083f9550(param_1,&uStack_48);
        if (uStack_44 == 0) {
          return;
        }
        FUN_1083f9778(param_1,CONCAT44(uStack_44,uStack_48));
        uVar8 = (ulong)uStack_44;
        if ((int)uStack_44 < 1) {
          return;
        }
      }
    default:
LAB_1083f9520:
      func_0x0001083fcb48(param_1,0x21c,0xffffffffffffffff,uVar8);
      break;
    case 0x21c:
      puVar6[3] = puVar6[3] + uVar9;
      return;
    case 0x21f:
    case 0x221:
    case 0x224:
      iVar4 = param_1[2];
      uVar8 = (ulong)(uVar9 - 1);
      goto joined_r0x0001083f94a0;
    }
  }
  return;
code_r0x0001083f9470:
  uVar3 = puVar6[3];
  uVar1 = uVar3;
  if ((int)uVar9 <= (int)uVar3) {
    uVar1 = uVar9;
  }
  puVar6[3] = uVar3 - uVar1;
  uVar8 = (ulong)(uVar9 - uVar1);
  if ((int)uVar3 <= (int)uVar9) {
    iVar4 = param_1[2];
joined_r0x0001083f94a0:
    if (iVar4 == 0) {
code_r0x0001083f954c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1083f9550);
      (*pcVar5)();
    }
    func_0x0001083fcc70();
  }
  goto code_r0x0001083f942c;
}



/* Entry: 1083faefc; end: 1083fc56f;  */

bool FUN_1083faefc(long *param_1,long *param_2,uint *param_3,long *param_4,uint *param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  dword dVar3;
  uint *puVar4;
  mach_header *pmVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint **ppuVar12;
  uint **ppuVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  int extraout_w8;
  uint uVar20;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar21;
  int *piVar22;
  long extraout_x8;
  long extraout_x8_00;
  uint *extraout_x8_01;
  long extraout_x8_02;
  uint *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  ulong uVar23;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint *puVar27;
  ulong *puVar28;
  dword dVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puStack_168;
  long lStack_160;
  uint *puStack_158;
  long lStack_150;
  uint *puStack_148;
  ulong uStack_140;
  undefined1 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  uint **ppuStack_118;
  mach_header *pmStack_110;
  uint *puStack_108;
  uint **ppuStack_100;
  mach_header *pmStack_f8;
  uint *puStack_f0;
  uint *puStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  uint **ppuStack_d0;
  uint *puStack_c8;
  undefined1 auStack_bc [20];
  uint *puStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined1 auStack_94 [4];
  uint *puStack_90;
  uint auStack_88 [2];
  uint *puStack_80;
  
  dVar3 = dRam0000000113254ea0;
  lStack_130 = 0;
  uStack_128 = 0x100000000;
  iVar21 = dRam0000000113254ea0 << 2;
  ppuVar12 = &puStack_e8;
  puVar30 = param_5;
  puStack_e8._0_1_ =
       (ulong)(long)(int)param_1[2] <=
       (ulong)((long)*(int *)((long)param_1 + 0x1c) + (long)(int)param_1[2]);
  func_0x000108154764(ppuVar12,(long)iVar21);
  ppuVar13 = &puStack_e8;
  func_0x000108154764(ppuVar13,4,(long)(int)param_1[3]);
  ppuVar13 = (uint **)((long)ppuVar13 + (long)ppuVar12);
  cVar8 = '\0';
  if (ppuVar12 <= ppuVar13) {
    cVar8 = (char)puStack_e8;
  }
  puStack_e8 = (uint *)CONCAT71(puStack_e8._1_7_,cVar8);
  if (((ulong)ppuVar13 >> 0x1f == 0) && (cVar8 != '\0')) {
    puVar27 = param_3;
    func_0x0001081865ac(param_3,ppuVar13,(long)iVar21);
    if (ppuVar13 != (uint **)0x0) {
      _bzero(puVar27,ppuVar13);
    }
    dVar29 = dRam0000000113254ea0;
    lStack_160 = (long)(int)param_1[2] * (long)(int)dVar3;
    puStack_158 = puVar27 + lStack_160;
    uStack_140 = (ulong)(int)param_1[3];
    lStack_150 = (long)*(int *)((long)param_1 + 0x1c) * (long)(int)dVar3;
    puStack_148 = puStack_158 + lStack_150;
    uStack_138 = 1;
    puStack_90 = (uint *)&lStack_130;
    uStack_98 = 0;
    auStack_94 = (undefined1  [4])dRam0000000113254ea0;
    puStack_a8 = (uint *)0x0;
    uStack_a0 = 0x100000000;
    iVar21 = (int)param_1[6];
    puStack_168 = puVar27;
    if (iVar21 < 1) {
      if (iVar21 < 0) {
LAB_1083fc3a4:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1083fc3a8);
        (*pcVar6)();
      }
      uVar25 = 0;
      uVar20 = 0;
    }
    else {
      FUN_1083fc9b8(0x3ff0000000000000,&puStack_a8,iVar21);
      iVar21 = iVar21 - (dword)uStack_a0;
      FUN_1083fc9b8(0x3ff8000000000000,&puStack_a8,iVar21);
      uVar25 = (dword)uStack_a0 + iVar21;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar25);
      uVar20 = *(uint *)(param_1 + 6);
    }
    iVar21 = 0;
    for (uVar23 = 0; (uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)) != uVar23; uVar23 = uVar23 + 1)
    {
      if ((uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU)) == uVar23) goto LAB_1083fc3a4;
      *(uint **)(puStack_a8 + uVar23 * 2) = puStack_158 + (int)(iVar21 * dVar29);
      iVar21 = *(int *)(param_1[5] + uVar23 * 4) + iVar21;
    }
    auStack_bc._4_8_ = 0;
    auStack_bc._12_4_ = 0;
    auStack_bc._16_4_ = 1;
    puVar27 = (uint *)(auStack_bc + 4);
    puVar31 = (uint *)(auStack_bc + 4);
    FUN_1083fa78c(puVar31,(int)param_1[4],0xffffffff);
    puVar14 = puStack_90;
    puVar4 = puStack_168;
    auStack_bc._0_4_ = 0;
    uStack_e0 = (mach_header *)auStack_bc;
    ppuStack_d0 = &puStack_90;
    puStack_c8 = &uStack_98;
    piVar22 = (int *)*param_1;
    iVar21 = (int)param_1[1];
    lVar19 = (long)iVar21;
    for (lVar24 = lVar19 << 5; puStack_e8 = puVar27, plStack_d8 = param_1, lVar24 != 0;
        lVar24 = lVar24 + -0x20) {
      if (*piVar22 == 0x219) {
        if (uStack_140 <= (ulong)(long)piVar22[1]) goto LAB_1083fc3a4;
        puStack_148[piVar22[1]] = piVar22[3];
      }
      piVar22 = piVar22 + 8;
    }
    if ((0 < iVar21) &&
       (puVar31 = (uint *)(ulong)puStack_90[2],
       (int)(puStack_90[3] >> 1) < (int)(puStack_90[2] + iVar21))) {
      FUN_1083fc86c(0x3ff0000000000000);
      FUN_1083fc8a0(puVar14,puVar31,lVar19);
      puVar31 = puVar14;
    }
    for (lVar24 = 0; puVar14 = puStack_a8, lVar24 < (int)param_1[1]; lVar24 = lVar24 + 1) {
      puVar16 = (uint *)(*param_1 + lVar24 * 0x20);
      ppuStack_118 = &puStack_168;
      pmStack_110 = (mach_header *)auStack_94;
      uVar25 = puVar16[7];
      uVar23 = (ulong)uVar25;
      puStack_108 = puVar16;
      ppuStack_100 = ppuStack_118;
      pmStack_f8 = pmStack_110;
      puStack_f0 = puVar16;
      if (((int)uVar25 < 0) || (dVar3 = (dword)uStack_a0, (int)(dword)uStack_a0 <= (int)uVar25))
      goto LAB_1083fc3a4;
      uVar25 = *puVar16;
      cVar7 = SBORROW4(uVar25 - 0xe1,0x14b);
      cVar8 = (int)(uVar25 - 0x22c) < 0;
      dVar29 = (dword)lVar24;
      iVar21 = (int)puVar4;
      switch(uVar25 - 0xe1) {
      case 0:
        func_0x0001083fcc28(param_3,8);
        func_0x0001083fcc88(puStack_90);
        func_0x0001083fcaec();
        break;
      case 1:
        auStack_88[0] = 0xe2;
        func_0x0001083fcb9c();
        puStack_80 = puVar31;
        func_0x0001083fcaf8();
        break;
      case 2:
        func_0x0001083fcadc();
        func_0x0001083fcbe0(extraout_x8_07 + extraout_x9_01 * -0x10,puStack_90);
        func_0x0001083fcb74();
        break;
      case 3:
      case 4:
      case 7:
      case 8:
      case 0xe:
      case 0xf:
      case 0x14:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x5b:
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x60:
      case 0x61:
      case 0x62:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xdf:
      case 0xe0:
      case 0xe1:
      case 0xe2:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xf1:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf7:
      case 0xf8:
      case 0xf9:
      case 0xfa:
      case 0xfd:
      case 0xfe:
      case 0xff:
      case 0x100:
      case 0x103:
      case 0x104:
      case 0x105:
      case 0x106:
      case 0x109:
      case 0x10a:
      case 0x10b:
      case 0x10c:
      case 0x10f:
      case 0x110:
      case 0x111:
      case 0x112:
      case 0x115:
      case 0x116:
      case 0x117:
      case 0x118:
      case 0x11b:
      case 0x11c:
      case 0x11d:
      case 0x11e:
      case 0x138:
      case 0x13b:
      case 0x13c:
        break;
      case 5:
      case 6:
        func_0x0001083fcadc();
        puStack_80 = (uint *)(extraout_x8_04 + extraout_x9 * -8);
        auStack_88[0] = uVar25;
        func_0x0001083fcb74(puStack_90);
        break;
      case 9:
        auStack_88[0] = 0xea;
        puStack_80 = (uint *)0x0;
        func_0x0001083fcb74(puStack_90);
        break;
      case 10:
        auStack_88[0] = 0xeb;
        func_0x0001083fcb9c();
        puStack_80 = puVar31;
        func_0x0001083fcaf8();
        break;
      case 0xb:
        func_0x0001083fcab8();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0xc:
        func_0x0001083fcbe0(CONCAT44((puStack_a8[uVar23 * 2] + (int)auStack_94 * -8) - iVar21,
                                     puVar16[3]),puStack_90);
        func_0x0001083fcb74();
        break;
      case 0xd:
        auStack_88[0] = 0xee;
        uVar25 = puVar16[3];
        if (((int)uVar25 < 0) || ((int)(dword)uStack_a0 <= (int)uVar25)) goto LAB_1083fc3a4;
        puStack_80 = (uint *)(*(long *)(puStack_a8 + (ulong)uVar25 * 2) + (long)(int)auStack_94 * -4
                             );
        func_0x0001083fcb74(puStack_90);
        break;
      case 0x10:
        auStack_88[0] = 0xf1;
        puStack_80 = (uint *)0x0;
        func_0x0001083fcb74(puStack_90);
        break;
      case 0x11:
        func_0x0001083fce10();
        func_0x0001083fcc9c();
        *(uint **)(puVar27 + 2) = puVar31 + 4;
        puVar31[0] = 0;
        puVar31[1] = 0;
        puVar31[2] = 0;
        puVar31[3] = 0;
        *puVar31 = puVar16[3];
        func_0x0001083fcc88(puStack_90);
        func_0x0001083fcaec();
        break;
      case 0x12:
      case 0x13:
      case 0x15:
        func_0x0001083fce10();
        puVar31 = param_3;
        func_0x0001081865ac(param_3,4,4);
        *puVar31 = puVar16[3];
        func_0x0001083fcc88(puStack_90);
        func_0x0001083fcaec();
        break;
      case 0x19:
      case 0x24:
      case 0x83:
      case 0x89:
      case 0x99:
      case 0x9f:
      case 0xb4:
      case 0xc4:
      case 0xe3:
      case 0xe9:
      case 0xef:
      case 0xf5:
      case 0xfb:
      case 0x101:
      case 0x107:
      case 0x10d:
      case 0x113:
      case 0x119:
        if (puVar16[1] == 0xffffffff) {
          func_0x0001083fcbd4();
          puVar27 = (uint *)(long)(int)puVar16[3];
          iVar10 = extraout_w8 + (int)auStack_94 * puVar16[3] * -4;
        }
        else {
          func_0x0001083fcb9c();
          iVar10 = (int)puVar31;
          puVar27 = (uint *)(ulong)puVar16[3];
        }
        iVar11 = 4;
        if (uVar25 != 0xfa) {
          iVar11 = 1;
        }
        puVar31 = (uint *)CONCAT44(iVar10 - iVar21,puVar16[4]);
        uVar20 = 2;
        if (uVar25 != 0xfa) {
          uVar20 = 0;
        }
        while (iVar21 = (int)puVar27, 0 < iVar21) {
          iVar10 = iVar11;
          if (iVar21 <= iVar11) {
            iVar10 = iVar21;
          }
          auStack_88[0] = (uVar25 + 1) - iVar10;
          puStack_80 = puVar31;
          func_0x0001083fcc64();
          puVar31 = (uint *)((ulong)puVar31 & 0xffffffff |
                            (ulong)((int)((ulong)puVar31 >> 0x20) +
                                   (dRam0000000113254ea0 << (ulong)uVar20) * 4) << 0x20);
          puVar27 = (uint *)(ulong)(uint)(iVar21 - iVar11);
        }
        break;
      case 0x1a:
      case 0x1f:
      case 0x25:
      case 0x84:
      case 0x8a:
      case 0x8f:
      case 0x94:
      case 0x9a:
      case 0xa0:
      case 0xa5:
      case 0xaa:
      case 0xaf:
      case 0xb5:
      case 0xba:
      case 0xbf:
      case 0xc5:
      case 0xca:
      case 0xcf:
      case 0xd4:
      case 0xe4:
      case 0xea:
      case 0xf0:
      case 0xf6:
      case 0xfc:
      case 0x102:
      case 0x108:
      case 0x10e:
      case 0x114:
      case 0x11a:
        func_0x0001083fcbd4();
        puVar30 = (uint *)(ulong)puVar16[3];
        func_0x0001083fcd94();
        if (cVar8 == cVar7) {
          FUN_1083fae08();
        }
        else if (0 < (int)puVar30) {
          func_0x0001083fcd70();
          func_0x0001083fcb74();
        }
        break;
      case 0x2a:
      case 0x2e:
      case 0x32:
      case 0x36:
      case 0x3a:
      case 0x3e:
      case 0x42:
      case 0x46:
        puVar27 = (uint *)(*(long *)(puStack_a8 + uVar23 * 2) +
                          (long)(int)auStack_94 * (long)(int)puVar16[3] * -4);
        uVar20 = puVar16[3];
        while (0 < (int)uVar20) {
          uVar1 = uVar20 - 4;
          if (3 < uVar20) {
            uVar20 = 4;
          }
          auStack_88[0] = (uVar25 - 1) + uVar20;
          puStack_80 = puVar27;
          func_0x0001083fcc64();
          puVar27 = puVar27 + CONCAT44(uRam0000000113254ea4,dRam0000000113254ea0) * 4;
          uVar20 = uVar1;
        }
        break;
      case 0x4a:
      case 0x4b:
      case 0x4c:
        func_0x0001083fcbd4();
        func_0x0001083fcd88(extraout_x8_00 + (long)(int)auStack_94 * (long)(int)puVar16[3] * -4);
        puStack_80 = extraout_x8_01;
        func_0x0001083fcb74();
        break;
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x54:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
        func_0x0001083fcbd4();
        uVar20 = puVar16[3];
        puVar27 = (uint *)(long)(int)uVar20;
        puVar31 = (uint *)(extraout_x8 + (long)(int)auStack_94 * (long)(int)uVar20 * -4);
        while (uVar20 != 0) {
          auStack_88[0] = uVar25;
          puStack_80 = puVar31;
          func_0x0001083fcc64();
          uVar20 = (int)puVar27 - 1;
          puVar27 = (uint *)(ulong)uVar20;
          puVar31 = puVar31 + CONCAT44(uRam0000000113254ea4,dRam0000000113254ea0);
        }
        break;
      case 0x53:
      case 0x55:
        func_0x0001083fce18();
        func_0x0001083fcd50();
        func_0x0001083fce48();
        FUN_1083fae08();
        break;
      case 0x5a:
        func_0x0001083fcadc();
        func_0x0001083fcbe0(extraout_x8_09 + (long)extraout_w9_01 * -0x24,puStack_90);
        func_0x0001083fcb74();
        break;
      case 0x5f:
      case 0x12d:
        if (uVar25 == 0x140) {
          func_0x0001083fcb9c();
        }
        else {
          puVar31 = *(uint **)(puStack_a8 + uVar23 * 2);
        }
        for (uVar25 = puVar16[3]; puVar27 = (uint *)(ulong)uVar25, 0 < (int)uVar25;
            uVar25 = uVar25 - 4) {
          uVar17 = CONCAT44((int)puVar31 - iVar21,puVar16[4]);
          if (uVar25 == 3) {
            func_0x0001083fcbe0(uVar17,puStack_90);
            func_0x0001083fcb74();
          }
          else if (uVar25 == 2) {
            func_0x0001083fcbe0(uVar17,puStack_90);
            func_0x0001083fcb74();
          }
          else if (uVar25 == 1) {
            func_0x0001083fcbe0(uVar17,puStack_90);
            func_0x0001083fcb74();
          }
          else {
            func_0x0001083fcbe0(uVar17,puStack_90);
            func_0x0001083fcb74();
          }
          puVar31 = puVar31 + (long)(int)auStack_94 * 4;
        }
        break;
      case 99:
        func_0x0001083fcb7c();
        iVar11 = (int)puVar31;
        iVar10 = iVar11 - iVar21;
        func_0x0001083fce08();
        func_0x0001083fade0(uVar25,iVar10,iVar11 - iVar21,puVar16[3]);
        puVar27 = puVar4;
        break;
      case 0x6b:
        func_0x0001083fcb7c();
        func_0x0001083fce08();
        func_0x0001083fcdc0();
        puVar27 = puVar4;
        break;
      case 0x6f:
        func_0x0001083fcb7c();
        if (uStack_140 <= (ulong)(long)(int)puVar16[2]) goto LAB_1083fc3a4;
        puVar30 = (uint *)(ulong)puVar16[3];
        func_0x0001083fadbc(uVar25,puVar4,(int)puVar31 - iVar21,
                            ((int)puStack_148 + puVar16[2] * 4) - iVar21);
        break;
      case 0x77:
        if ((int)auStack_94 * puVar16[4] != 0) {
          func_0x0001083fce68(puStack_a8[uVar23 * 2] + puVar16[3] * (int)auStack_94 * -4);
          func_0x0001083fad94();
        }
        break;
      case 0x78:
      case 0x79:
      case 0x7a:
        uVar25 = puVar16[4];
        iStack_120 = (puStack_a8[uVar23 * 2] + puVar16[3] * (int)auStack_94 * -4) - iVar21;
        for (lVar19 = 4; lVar19 != 8; lVar19 = lVar19 + 1) {
          *(byte *)((long)&iStack_120 + lVar19) =
               (char)dRam0000000113254ea0 * ((byte)uVar25 & 0xf) * '\x04';
          uVar25 = uVar25 >> 4;
        }
        func_0x0001083fcd88();
        puStack_80 = (uint *)CONCAT44(uStack_11c,iStack_120);
        func_0x0001083fcb74();
        break;
      case 0x7b:
        uVar25 = puVar16[3];
        uVar20 = puVar16[4];
        puVar27 = param_3;
        func_0x0001083fcc28(param_3,0x30);
        puVar31 = puVar27;
        func_0x0001083fcadc();
        *(long *)puVar31 = extraout_x8_08 + (long)extraout_w9_00 * (long)(int)uVar25 * -4;
        puVar31[2] = uVar20;
        func_0x0001083fc6bc(puVar16[5],puVar27 + 3,8);
        func_0x0001083fc6bc(puVar16[6],puVar27 + 7,8);
        func_0x0001083fce5c(0x15c,puStack_90);
        func_0x0001083fcb74();
        puVar27 = (uint *)(ulong)uVar20;
        break;
      case 0x7c:
      case 0x7d:
      case 0x7e:
        uVar20 = puVar16[5];
        puStack_80 = (uint *)(CONCAT44(puVar16[3],
                                       (puStack_a8[uVar23 * 2] +
                                       (int)auStack_94 *
                                       (puVar16[6] * uVar20 + (puVar16[3] + uVar20) * puVar16[4]) *
                                       -4) - iVar21) & 0xffffffffff |
                              (ulong)(puVar16[4] & 0xff) << 0x28 | (ulong)(uVar20 & 0xff) << 0x30 |
                             (ulong)puVar16[6] << 0x38);
        auStack_88[0] = uVar25;
        func_0x0001083fcb74(puStack_90);
        break;
      case 0x7f:
        func_0x0001083fce18();
        func_0x0001083fcd50();
        func_0x0001083fae34(puStack_90,0x160,(extraout_w8_00 + extraout_w9 * -0xc) - iVar21,
                            (extraout_w8_00 + extraout_w9 * -8) - iVar21);
        break;
      case 0x80:
      case 0x81:
      case 0x82:
        func_0x0001083fcbd4();
        func_0x0001083fcd88(extraout_x8_02 + (long)(int)puVar16[3] * (long)(int)auStack_94 * -8);
        puStack_80 = extraout_x8_03;
        func_0x0001083fcb74();
        break;
      case 0xd9:
      case 0xde:
        func_0x0001083fcbd4();
        func_0x0001083fcd50();
        func_0x0001083fcd94();
        if (cVar8 == cVar7) {
          func_0x0001083fae34();
        }
        else if (0 < (int)puVar30) {
          func_0x0001083fcd70();
          func_0x0001083fcb74();
        }
        break;
      case 0x11f:
        func_0x0001083fcb58();
        if (((int)puVar16[3] < 0) || ((int)dVar3 <= (int)puVar16[3])) goto LAB_1083fc3a4;
        func_0x0001083fcb20();
        func_0x0001083fcc88();
        func_0x0001083fcaec();
        break;
      case 0x120:
      case 0x14a:
        puVar31 = param_3;
        func_0x0001083fcc28(param_3,0x30);
        uVar25 = puVar16[3];
        if (((int)uVar25 < 0) || ((int)dVar3 <= (int)uVar25)) goto LAB_1083fc3a4;
        puVar27 = (uint *)(long)(int)auStack_94;
        *(long *)puVar31 = *(long *)(puVar14 + (ulong)uVar25 * 2) + (long)puVar27 * -4;
        *(long *)(puVar31 + 2) = param_1[8];
        uVar25 = puVar16[1];
        puVar31[4] = uVar25;
        uVar20 = puVar16[4];
        puVar31[5] = uVar20;
        puVar15 = puVar31;
        func_0x0001083fcb9c();
        *(uint **)(puVar31 + 6) = puVar15;
        if (*puVar16 == 0x22b) {
          uVar1 = puVar16[5];
          if (((int)uVar1 < 0) || ((int)dVar3 <= (int)uVar1)) goto LAB_1083fc3a4;
          *(long *)(puVar31 + 8) = *(long *)(puVar14 + (ulong)uVar1 * 2) + (long)puVar27 * -4;
          uVar25 = puVar16[2] - (uVar20 + uVar25);
        }
        else {
          uVar25 = 0;
          puVar31[8] = 0;
          puVar31[9] = 0;
        }
        puVar31[10] = uVar25;
        func_0x0001083fce5c(0x201,puStack_90);
        func_0x0001083fcb74();
        break;
      case 0x121:
      case 0x122:
        func_0x0001083fcb58();
        if (((int)puVar16[3] < 0) || ((int)dVar3 <= (int)puVar16[3])) goto LAB_1083fc3a4;
        func_0x0001083fcb20();
        func_0x0001083fcc88();
        func_0x0001083fcaec();
        break;
      case 0x123:
        func_0x0001083fcb58();
        if (((int)puVar16[3] < 0) || ((int)dVar3 <= (int)puVar16[3])) goto LAB_1083fc3a4;
        func_0x0001083fcb20();
        func_0x0001083fcc88();
        func_0x0001083fcaec();
        break;
      case 0x124:
        uVar25 = puVar16[3];
        if (((int)uVar25 < 0) || ((int)auStack_bc._12_4_ <= (int)uVar25)) goto LAB_1083fc3a4;
        *(dword *)(auStack_bc._4_8_ + (ulong)uVar25 * 4) = dVar29;
        func_0x0001083fcbe0(puStack_90);
        func_0x0001083fcb74();
        break;
      case 0x125:
      case 0x126:
      case 0x127:
        func_0x0001083fcd88();
        puStack_80 = (uint *)(long)(int)puVar16[3];
        func_0x0001083fcb74();
        auStack_bc._0_4_ = dVar29;
        break;
      case 0x128:
      case 0x129:
        func_0x0001083fcd88();
        uVar25 = puVar16[3];
        if (((int)uVar25 < 0) || ((int)dVar3 <= (int)uVar25)) goto LAB_1083fc3a4;
        puStack_80 = (uint *)(*(long *)(puVar14 + (ulong)uVar25 * 2) + (long)(int)auStack_94 * -0x10
                             );
        func_0x0001083fcb74();
        auStack_bc._0_4_ = dVar29;
        break;
      case 0x12a:
        func_0x0001083fcbd4();
        func_0x0001083fad94(puStack_90,extraout_w8_01 - iVar21,
                            (extraout_w8_01 + (int)auStack_94 * puVar16[4] * -4) - iVar21,puVar16[3]
                           );
        break;
      case 299:
        if (((int)puVar16[4] < 0) || ((int)(dword)uStack_a0 <= (int)puVar16[4])) goto LAB_1083fc3a4;
        func_0x0001083fce68(puStack_a8[uVar23 * 2]);
        func_0x0001083fad94();
        break;
      case 300:
        uVar25 = puVar16[4];
        if (((int)uVar25 < 0) || ((int)(dword)uStack_a0 <= (int)uVar25)) goto LAB_1083fc3a4;
        puVar27 = *(uint **)(puStack_a8 + (ulong)uVar25 * 2);
        puVar31 = param_3;
        func_0x0001083fc6ec();
        *(undefined8 *)puVar31 = *(undefined8 *)(puVar14 + uVar23 * 2);
        uVar20 = puVar16[5];
        *(uint **)(puVar31 + 2) = puVar27 + -((long)(int)auStack_94 * (long)(int)uVar20);
        uVar25 = puVar16[6];
        if (((int)uVar25 < 0) || ((int)dVar3 <= (int)uVar25)) goto LAB_1083fc3a4;
        *(long *)(puVar31 + 4) = *(long *)(puVar14 + (ulong)uVar25 * 2) + (long)(int)auStack_94 * -4
        ;
        uVar25 = puVar16[3];
        puVar31[6] = uVar20 - uVar25;
        puVar31[7] = uVar25;
        func_0x0001083fcc88(puStack_90);
        func_0x0001083fcaec();
        break;
      case 0x12e:
        if (uStack_140 <= (ulong)(long)(int)puVar16[1]) goto LAB_1083fc3a4;
        puVar30 = (uint *)(ulong)puVar16[3];
        func_0x0001083fadbc(puStack_90,puVar4,puStack_a8[uVar23 * 2] - iVar21,
                            ((int)puStack_148 + puVar16[1] * 4) - iVar21);
        break;
      case 0x12f:
      case 0x131:
      case 0x133:
      case 0x136:
        puVar27 = param_3;
        func_0x0001083fc6ec();
        uVar25 = puVar16[4];
        if (((int)uVar25 < 0) || ((int)dVar3 <= (int)uVar25)) goto LAB_1083fc3a4;
        *(long *)(puVar27 + 4) = *(long *)(puVar14 + (ulong)uVar25 * 2) + (long)(int)auStack_94 * -4
        ;
        uVar26 = (ulong)(int)puVar16[1];
        uVar25 = puVar16[3];
        puVar27[6] = puVar16[2] - (puVar16[1] + uVar25);
        puVar27[7] = uVar25;
        uVar20 = *puVar16;
        if (uVar20 == 0x210) {
          puVar31 = puStack_148;
          if (uStack_140 <= uVar26) goto LAB_1083fc3a4;
code_r0x0001083fc030:
          *(uint **)(puVar27 + 2) = puVar31 + uVar26;
          puVar31 = *(uint **)(puVar14 + uVar23 * 2);
          uVar17 = 0x149;
        }
        else {
          if (uVar20 == 0x214) {
            puVar31 = param_5;
            if (uVar26 < param_6) goto code_r0x0001083fc030;
            goto LAB_1083fc3a4;
          }
          if (uVar20 == 0x212) {
            puVar31 = puVar27;
            func_0x0001083fcb9c();
            *(uint **)(puVar27 + 2) = puVar31;
            puVar31 = *(uint **)(puVar14 + uVar23 * 2);
            uVar17 = 0x148;
          }
          else {
            *(ulong *)(puVar27 + 2) =
                 *(long *)(puVar14 + uVar23 * 2) + (ulong)(uVar25 * (int)auStack_94) * -4;
            puVar31 = puVar27;
            func_0x0001083fcb9c();
            uVar17 = 0x14a;
          }
        }
        *(uint **)puVar27 = puVar31;
        func_0x0001083fce5c(uVar17,puStack_90);
        func_0x0001083fcb74();
        puVar27 = puVar14;
        break;
      case 0x130:
        func_0x0001083fce18();
        func_0x0001083fcb9c();
        func_0x0001083fcdc0();
        puVar27 = puVar4;
        break;
      case 0x132:
      case 0x137:
        uVar20 = puVar16[1];
        if (param_6 <= (ulong)(long)(int)uVar20) goto LAB_1083fc3a4;
        if (uVar25 == 0x213) {
          puVar31 = *(uint **)(puStack_a8 + uVar23 * 2);
        }
        else {
          func_0x0001083fce08();
        }
        puVar15 = param_5 + (int)uVar20;
        for (uVar25 = puVar16[3]; puVar27 = (uint *)(ulong)uVar25, 0 < (int)uVar25;
            uVar25 = uVar25 - 4) {
          puVar27 = param_3;
          func_0x0001083fcc28(param_3,0x10);
          *(uint **)puVar27 = puVar31;
          *(uint **)(puVar27 + 2) = puVar15;
          if (uVar25 == 1) {
            func_0x0001083fcbe0(puVar27,puStack_90);
            func_0x0001083fcb74();
          }
          else if (uVar25 == 2) {
            func_0x0001083fcbe0(puVar27,puStack_90);
            func_0x0001083fcb74();
          }
          else if (uVar25 == 3) {
            func_0x0001083fcbe0(puVar27,puStack_90);
            func_0x0001083fcb74();
          }
          else {
            func_0x0001083fcbe0(puVar27,puStack_90);
            func_0x0001083fcb74();
          }
          puVar31 = puVar31 + (long)(int)auStack_94 * 4;
          puVar15 = puVar15 + 4;
        }
        break;
      case 0x134:
        uVar20 = puStack_a8[uVar23 * 2];
        func_0x0001083fcb7c();
        func_0x0001083fccd4();
        func_0x0001083fade0(uVar25);
        puVar27 = (uint *)(ulong)uVar20;
        break;
      case 0x135:
        uVar20 = puStack_a8[uVar23 * 2];
        func_0x0001083fcb7c();
        func_0x0001083fccd4();
        func_0x0001083fad94(uVar25);
        puVar27 = (uint *)(ulong)uVar20;
        break;
      case 0x139:
        uVar25 = puVar16[3];
        func_0x0001083fcb58();
        puVar27 = puVar31;
        func_0x0001083fcbd4();
        *(long *)(puVar27 + 2) = extraout_x8_06 + (long)(int)auStack_94 * (long)(int)puVar16[5] * -4
        ;
        func_0x0001083fcb9c();
        *(uint **)puVar31 = puVar27;
        func_0x0001083fc6bc(puVar16[4],puVar31 + 4,4);
        auStack_88[0] = uVar25 + 0x153;
        puStack_80 = puVar31;
        func_0x0001083fcb74(puStack_90);
        puVar27 = (uint *)(ulong)(uVar25 + 0x153);
        break;
      case 0x13a:
        puVar31 = param_3;
        func_0x0001081865e0(param_3,0x28,8);
        *(uint **)(param_3 + 2) = puVar31 + 10;
        puVar31[8] = 0;
        puVar31[9] = 0;
        puVar31[2] = 0;
        puVar31[3] = 0;
        puVar31[0] = 0;
        puVar31[1] = 0;
        puVar31[6] = 0;
        puVar31[7] = 0;
        puVar31[4] = 0;
        puVar31[5] = 0;
        puVar27 = (uint *)(long)(int)auStack_94;
        *(long *)(puVar31 + 2) =
             *(long *)(puVar14 + uVar23 * 2) + (long)(int)auStack_94 * (long)(int)puVar16[5] * -4;
        puVar15 = puVar31;
        func_0x0001083fcb9c();
        *(uint **)puVar31 = puVar15;
        uVar25 = puVar16[6];
        if (((int)uVar25 < 0) || ((int)dVar3 <= (int)uVar25)) goto LAB_1083fc3a4;
        uVar20 = 0;
        *(long *)(puVar31 + 4) = *(long *)(puVar14 + (ulong)uVar25 * 2) + (long)puVar27 * -4;
        uVar25 = puVar16[3];
        uVar1 = puVar16[4];
        uVar2 = uVar1;
        for (lVar19 = (long)(int)uVar25; lVar19 != 0; lVar19 = lVar19 + -1) {
          if (uVar20 <= (uVar2 & 0xf)) {
            uVar20 = uVar2 & 0xf;
          }
          uVar2 = uVar2 >> 4;
        }
        puVar31[6] = (puVar16[2] - puVar16[1]) + ~uVar20;
        puVar31[7] = uVar25;
        func_0x0001083fc6bc(uVar1,puVar31 + 8,4);
        func_0x0001083fce5c(0x14b,puStack_90);
        func_0x0001083fcb74();
        break;
      case 0x13d:
        func_0x0001083fce18();
        func_0x0001083fce48();
        func_0x0001083fade0();
        break;
      case 0x13e:
        func_0x0001083fcbc4();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x13f:
        func_0x0001083fcab8();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x140:
        func_0x0001083fcbc4();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x141:
        func_0x0001083fcab8();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x142:
        func_0x0001083fcab8();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x143:
        func_0x0001083fcbc4();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x144:
        func_0x0001083fcab8();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x145:
        func_0x0001083fcbc4();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x146:
        func_0x0001083fcbc4();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x147:
        func_0x0001083fcbc4();
        func_0x0001083fcbe0();
        func_0x0001083fcb74();
        break;
      case 0x148:
        func_0x0001083fcadc();
        func_0x0001083fcbe0(extraout_x8_11 + extraout_x9_03 * -0x10,puStack_90);
        func_0x0001083fcb74();
        break;
      case 0x149:
        func_0x0001083fcadc();
        func_0x0001083fcbe0(extraout_x8_05 + extraout_x9_00 * -0x10,puStack_90);
        func_0x0001083fcb74();
        break;
      case 0x14b:
        func_0x0001083fce10();
        func_0x0001083fcc9c();
        *(uint **)(puVar27 + 2) = puVar31 + 4;
        puVar31[0] = 0;
        puVar31[1] = 0;
        puVar31[2] = 0;
        puVar31[3] = 0;
        *(undefined8 *)puVar31 = *(undefined8 *)(puVar16 + 3);
        func_0x0001083fcadc();
        *(long *)(puVar31 + 2) = extraout_x8_10 + extraout_x9_02 * -4;
        func_0x0001083fcc88(puStack_90);
        func_0x0001083fcaec();
        break;
      default:
        switch(uVar25) {
        case 0x2e:
          auStack_88[0] = 0x2e;
          func_0x0001083fcb9c();
          puStack_80 = puVar31;
          func_0x0001083fcaf8();
          break;
        case 0x2f:
          auStack_88[0] = 0x2f;
          func_0x0001083fcb9c();
          puStack_80 = puVar31;
          func_0x0001083fcaf8();
          break;
        case 0x30:
          break;
        case 0x31:
          auStack_88[0] = 0x31;
          func_0x0001083fcb9c();
          puStack_80 = puVar31;
          func_0x0001083fcaf8();
          break;
        case 0x32:
          auStack_88[0] = 0x32;
          func_0x0001083fcb9c();
          puStack_80 = puVar31;
          func_0x0001083fcaf8();
          break;
        default:
          if (uVar25 == 0xa1) {
            auStack_88[0] = 0xa1;
            func_0x0001083fcb9c();
            puStack_80 = puVar31;
            func_0x0001083fcaf8();
          }
        }
      }
      FUN_1083fa7c0();
      if ((int)puVar16 != 0) {
        *(long *)(puVar14 + uVar23 * 2) =
             *(long *)(puVar14 + uVar23 * 2) + (long)((int)auStack_94 * (int)puVar16) * 4;
      }
      if (500 < (int)(puStack_90[2] - uStack_98)) {
        uStack_98 = puStack_90[2];
      }
      puVar31 = puVar16;
    }
    FUN_1081f8340(auStack_bc + 4);
    FUN_1083fc994(&puStack_a8);
    puStack_e8 = (uint *)0x0;
    uStack_e0 = &MACH_HEADER;
    uVar23 = (ulong)*(uint *)(param_1 + 4);
    if (0 < (int)*(uint *)(param_1 + 4)) {
      uVar17 = 0;
      FUN_1083fc960(0x3ff0000000000000,0);
      FUN_1083fc924(&puStack_e8,uVar17,uVar23);
      uVar23 = (ulong)*(uint *)(param_1 + 4);
    }
    ppuStack_100 = (uint **)0x0;
    pmStack_f8 = &MACH_HEADER;
    FUN_1083fa78c(&ppuStack_100,uVar23,0xffffffff);
    ppuStack_118 = (uint **)0x0;
    pmStack_110 = &MACH_HEADER;
    FUN_1081f8444(&ppuStack_118,(int)param_1[4]);
    plVar18 = param_2;
    FUN_1083fc570(param_2,puStack_168);
    puVar28 = (ulong *)(lStack_130 + 8);
    lVar24 = (long)(int)uStack_128 << 4;
    while( true ) {
      pmVar5 = uStack_e0;
      iVar21 = (int)plVar18;
      bVar9 = lVar24 == 0;
      if (lVar24 == 0) break;
      iVar10 = (int)puVar28[-1];
      switch(iVar10) {
      case 0x205:
        iVar21 = (int)*puVar28;
        if ((iVar21 < 0) || ((int)pmStack_f8 <= iVar21)) goto LAB_1083fc3a4;
        *(uint *)((long)ppuStack_100 + (*puVar28 & 0x7fffffff) * 4) = *(uint *)(param_2 + 4);
        break;
      case 0x206:
        if (param_4 != (long *)0x0) {
          func_0x0001083fcd60();
          (**(code **)(extraout_x8_14 + 0x10))();
          goto code_r0x0001083fc2c4;
        }
        goto LAB_1083fc35c;
      case 0x207:
        if (param_4 == (long *)0x0) goto LAB_1083fc35c;
        func_0x0001083fcd60();
        (**(code **)(extraout_x8_12 + 0x18))();
code_r0x0001083fc2c4:
        if (((ulong)plVar18 & 1) == 0) goto LAB_1083fc35c;
code_r0x0001083fc2c8:
        plVar18 = param_2;
        FUN_1083fc570(param_2,puStack_168);
        break;
      case 0x208:
        if (param_4 != (long *)0x0) {
          func_0x0001083fcd60();
          (**(code **)(extraout_x8_13 + 0x20))();
          if (iVar21 != 0) goto code_r0x0001083fc2c8;
        }
        goto LAB_1083fc35c;
      case 0x209:
        if (param_4 != (long *)0x0) {
          lVar19 = 0x28;
          goto code_r0x0001083fc2e4;
        }
        goto LAB_1083fc35c;
      case 0x20a:
        if (param_4 == (long *)0x0) goto LAB_1083fc35c;
        lVar19 = 0x30;
code_r0x0001083fc2e4:
        plVar18 = param_4;
        (**(code **)(*param_4 + lVar19))(param_4,*puVar28);
        break;
      default:
        if (iVar10 - 0xf2U < 5) {
          puVar30 = (uint *)*puVar28;
          auStack_88[0] = *puVar30;
          *puVar30 = *(uint *)(param_2 + 4);
          uVar23 = (ulong)uStack_e0 & 0xffffffff;
          if ((int)(uint)uStack_e0 < (int)(uStack_e0._4_4_ >> 1)) {
            *(uint **)(puStack_e8 + (long)(int)(uint)uStack_e0 * 2) = puVar30;
          }
          else {
            uVar17 = 1;
            FUN_1083fc960(0x3ff8000000000000,uVar23,1);
            *(uint **)(uVar23 + ((ulong)pmVar5 & 0xffffffff) * 8) = puVar30;
            FUN_1083fc924(&puStack_e8,uVar23,uVar17);
          }
          uStack_e0 = (mach_header *)CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 + 1);
          FUN_1083fc57c(&ppuStack_118,auStack_88);
          iVar10 = (int)puVar28[-1];
        }
        else if (iVar10 == 0x6f) {
          plVar18 = param_2;
          FUN_1083884e8();
          break;
        }
        plVar18 = param_2;
        FUN_108387820(param_2,iVar10,*puVar28);
      }
      puVar28 = puVar28 + 2;
      lVar24 = lVar24 + -0x10;
    }
    uVar26 = (ulong)((uint)pmStack_110 & ((int)(uint)pmStack_110 >> 0x1f ^ 0xffffffffU));
    ppuVar12 = ppuStack_118;
    puVar30 = puStack_e8;
    for (uVar23 = (ulong)((uint)uStack_e0 & ((int)(uint)uStack_e0 >> 0x1f ^ 0xffffffffU));
        uVar23 != 0; uVar23 = uVar23 - 1) {
      if (uVar26 == 0) goto LAB_1083fc3a4;
      uVar25 = *(uint *)ppuVar12;
      if (((int)uVar25 < 0) || ((int)pmStack_f8 <= (int)uVar25)) goto LAB_1083fc3a4;
      **(int **)puVar30 = *(uint *)((long)ppuStack_100 + (ulong)uVar25 * 4) - **(int **)puVar30;
      uVar26 = uVar26 - 1;
      ppuVar12 = (uint **)((long)ppuVar12 + 4);
      puVar30 = puVar30 + 2;
    }
LAB_1083fc35c:
    FUN_1081f8340(&ppuStack_118);
    FUN_1081f8340(&ppuStack_100);
    func_0x0001083fc900(&puStack_e8);
  }
  else {
    bVar9 = false;
  }
  func_0x0001083fc8dc(&lStack_130);
  return bVar9;
}



/* Entry: 1083fc570; end: 1083fc57b;  */

/* WARNING: Removing unreachable block (ram,0x000108387a24) */
/* WARNING: Removing unreachable block (ram,0x0001083878ac) */
/* WARNING: Removing unreachable block (ram,0x000108387854) */
/* WARNING: Removing unreachable block (ram,0x0001083878b0) */
/* WARNING: Removing unreachable block (ram,0x000108387a80) */
/* WARNING: Removing unreachable block (ram,0x000108387b3c) */
/* WARNING: Removing unreachable block (ram,0x000108387b70) */
/* WARNING: Removing unreachable block (ram,0x000108387b48) */
/* WARNING: Removing unreachable block (ram,0x000108387b54) */
/* WARNING: Removing unreachable block (ram,0x000108387b88) */

void FUN_1083fc570(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = param_1[2];
  plVar1 = plVar2;
  func_0x0001081865e0(plVar2,0x18,8);
  plVar2[1] = (long)(plVar1 + 3);
  *plVar1 = lVar3;
  *(undefined4 *)(plVar1 + 1) = 0xe0;
  plVar1[2] = param_2;
  param_1[2] = (long)plVar1;
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  return;
}



/* Entry: 1083fc57c; end: 1083fc5eb;  */

undefined4 * FUN_1083fc57c(long param_1)

{
  long extraout_x9;
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *puVar1;
  
  func_0x0001083fcc7c();
  if (*(int *)(param_1 + 8) < (int)(*(uint *)(param_1 + 0xc) >> 1)) {
    puVar1 = (undefined4 *)(*unaff_x19 + (long)*(int *)(param_1 + 8) * 4);
    *puVar1 = *unaff_x20;
  }
  else {
    func_0x0001083fcc30(0x3ff8000000000000);
    FUN_1081f851c();
    func_0x0001083fcd40();
    puVar1 = (undefined4 *)(param_1 + extraout_x9 * 4);
    *puVar1 = *unaff_x20;
    FUN_1081f84d8();
  }
  func_0x0001083fcd30();
  return puVar1;
}



/* Entry: 1083fc5ec; end: 1083fc66b;  */

void FUN_1083fc5ec(long *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)((long *)*param_1)[1])) {
    iVar1 = *(int *)(*(long *)*param_1 + (ulong)param_2 * 4);
    if (-1 < iVar1) {
      if (iVar1 < *(int *)param_1[1]) {
        auStack_30[0] = 0x6f;
        uStack_28 = 0;
        FUN_1083fad34(*(undefined8 *)param_1[3],auStack_30);
      }
      *(undefined4 *)param_1[4] = *(undefined4 *)(*(long *)param_1[3] + 8);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1083fc66c);
  (*pcVar2)();
}



/* Entry: 1083fc66c; end: 1083fc6f7;  */

long FUN_1083fc66c(long *param_1)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = (long)*(int *)(param_1[2] + 4) * (long)*(int *)param_1[1];
  if (uVar2 < (ulong)((long *)*param_1)[1]) {
    return *(long *)*param_1 + uVar2 * 4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083fc694);
  (*pcVar1)();
}



/* Entry: 1083fc6f8; end: 1083fc71b;  */

void FUN_1083fc6f8(long param_1,int param_2)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x20;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_1083fc71c;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x0001083fcc48();
  if (extraout_w8 != 0) {
    func_0x0001083fcbfc();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083fcc18();
  }
  func_0x0001083fca80(unaff_x21 >> 5);
  return;
}



/* Entry: 1083fc71c; end: 1083fc757;  */

void FUN_1083fc71c(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x0001083fcc48();
  if ((int)extraout_x8 != 0) {
    func_0x0001083fcbfc(param_1,param_2,extraout_x8 << 5);
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083fcc18();
  }
  func_0x0001083fca80(unaff_x21 >> 5);
  return;
}



/* Entry: 1083fc758; end: 1083fc783;  */

void FUN_1083fc758(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x20;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1083fc784; end: 1083fc86b;  */

void FUN_1083fc784(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001083fcc7c();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    func_0x0001083fc804();
    if (*(int *)(unaff_x20 + 1) != 0) {
      _memcpy(*unaff_x19,*unaff_x20,(long)*(int *)(unaff_x20 + 1) << 5);
    }
  }
  else {
    iVar1 = *(int *)(unaff_x20 + 1);
    *unaff_x19 = *unaff_x20;
    *(uint *)((long)unaff_x19 + 0xc) = iVar1 << 1 | 1;
    *unaff_x20 = 0;
    *(undefined4 *)((long)unaff_x20 + 0xc) = 1;
  }
  *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(unaff_x20 + 1);
  *(undefined4 *)(unaff_x20 + 1) = 0;
  return;
}



/* Entry: 1083fc86c; end: 1083fc89f;  */

void FUN_1083fc86c(undefined8 param_1,undefined8 param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)((uint)param_2 ^ 0x7fffffff)) {
    func_0x0001083fccc4(param_2,param_1,0x10);
    return;
  }
  func_0x00010bdb1a68();
  func_0x0001083fcc48();
  if (extraout_w8 != 0) {
    func_0x0001083fcbfc();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083fcc18();
  }
  func_0x0001083fca80(unaff_x21 >> 4);
  return;
}



/* Entry: 1083fc8a0; end: 1083fc8db;  */

void FUN_1083fc8a0(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x0001083fcc48();
  if ((int)extraout_x8 != 0) {
    func_0x0001083fcbfc(param_1,param_2,extraout_x8 << 4);
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083fcc18();
  }
  func_0x0001083fca80(unaff_x21 >> 4);
  return;
}



/* Entry: 1083fc8dc; end: 1083fc923;  */

void FUN_1083fc8dc(void)

{
  uint extraout_w8;
  
  func_0x0001083fce7c();
  if ((extraout_w8 & 1) != 0) {
    func_0x0001083fcc18();
  }
  return;
}



/* Entry: 1083fc924; end: 1083fc95f;  */

void FUN_1083fc924(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x0001083fcc48();
  if ((int)extraout_x8 != 0) {
    func_0x0001083fcbfc(param_1,param_2,extraout_x8 << 3);
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083fcc18();
  }
  func_0x0001083fca80(unaff_x21 >> 3);
  return;
}



/* Entry: 1083fc960; end: 1083fc993;  */

void FUN_1083fc960(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulong extraout_x8;
  
  if (param_3 <= (int)((uint)param_2 ^ 0x7fffffff)) {
    func_0x0001083fccc4(param_2,param_1,8);
    return;
  }
  func_0x00010bdb1a68();
  func_0x0001083fce7c();
  if ((extraout_x8 & 1) != 0) {
    func_0x0001083fcc18();
  }
  return;
}



/* Entry: 1083fc994; end: 1083fc9b7;  */

void FUN_1083fc994(void)

{
  uint extraout_w8;
  
  func_0x0001083fce7c();
  if ((extraout_w8 & 1) != 0) {
    func_0x0001083fcc18();
  }
  return;
}



/* Entry: 1083fc9b8; end: 1083fca3f;  */

void FUN_1083fc9b8(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - uVar1) < param_2) {
    if ((int)(uVar1 ^ 0x7fffffff) < param_2) {
      func_0x00010bdb1a68();
      FUN_1083f8ee0();
      return;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 8;
    uVar2 = (ulong)(uVar1 + param_2);
    FUN_10840fe24(&uStack_40,uVar2);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001083fcbfc();
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      func_0x0001083fcc18();
    }
    func_0x0001083fca80(uVar2 >> 3);
  }
  return;
}



/* Entry: 1083fca40; end: 1083fce87;  */

void FUN_1083fca40(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = *(undefined4 *)(param_1 + 0x18);
  uStack_18 = 0;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_24 = param_4;
  FUN_1083f8ee0(param_1,&uStack_30);
  return;
}



/* Entry: 1083fce88; end: 1083fceb3;  */

undefined8 * FUN_1083fce88(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_1083fceb4();
  *(int *)(param_1 + 1) = (int)param_2;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 1083fceb4; end: 1083fcee7;  */

int FUN_1083fceb4(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 0x108) + 1;
    *(int *)(param_1 + 0x108) = iVar1;
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x110) + (long)iVar2 * 4 + -4);
    *(int *)(param_1 + 0x118) = iVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1083fcee8; end: 1083fcf13;  */

undefined8 * FUN_1083fcee8(undefined8 *param_1)

{
  FUN_1083fcf14(*param_1,*(undefined4 *)(param_1 + 1));
  return param_1;
}



/* Entry: 1083fcf14; end: 1083fcf3b;  */

void FUN_1083fcf14(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_1083fc57c(param_1 + 0x110,&uStack_14);
  return;
}



/* Entry: 1083fcf3c; end: 1083fcf77;  */

void FUN_1083fcf3c(long *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x104);
  *(int *)((long)param_1 + 0xc) = iVar1;
  if (iVar1 != (int)param_1[1]) {
    func_0x000108403c80();
  }
  return;
}


