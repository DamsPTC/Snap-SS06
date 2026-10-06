/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106aeffec; end: 106af0007;  */

bool FUN_106aeffec(ulong param_1)

{
  int extraout_w8;
  
  if ((long)param_1 < 0) {
    func_0x000106af07c4(param_1 >> 0x3c & 7);
    return extraout_w8 != 0;
  }
  return false;
}



/* Entry: 106af0008; end: 106af0053;  */

void FUN_106af0008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_106af0150(param_2,param_3,&UNK_10f3b3b01);
  return;
}



/* Entry: 106af0054; end: 106af00a7;  */

bool FUN_106af0054(ulong param_1)

{
  int extraout_w8;
  
  if (((long)param_1 < 0) && (func_0x000106af07c4(param_1 >> 0x3c & 7), extraout_w8 != 0)) {
    return (param_1 & 0x7000000000000000) == 0x2000000000000000;
  }
  return false;
}



/* Entry: 106af00a8; end: 106af00eb;  */

int FUN_106af00a8(int param_1)

{
  int unaff_w21;
  
  FUN_106af0008();
  func_0x000106af0838();
  FUN_106af0150();
  return param_1 + unaff_w21;
}



/* Entry: 106af00ec; end: 106af0113;  */

bool FUN_106af00ec(ulong param_1)

{
  int extraout_w8;
  
  if (((long)param_1 < 0) && (func_0x000106af07c4(param_1 >> 0x3c & 7), extraout_w8 != 0)) {
    return (param_1 & 0x7000000000000000) == 0x6000000000000000;
  }
  return false;
}



/* Entry: 106af0114; end: 106af014f;  */

int FUN_106af0114(int param_1)

{
  int unaff_w21;
  
  FUN_106af0008();
  func_0x000106af0838();
  func_0x000106af0878();
  return param_1 + unaff_w21;
}



/* Entry: 106af0150; end: 106af037b;  */

int FUN_106af0150(undefined1 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar2 = param_1;
  _vsnprintf(param_1,(long)param_2,param_3,&stack0x00000000);
  iVar1 = (int)puVar2;
  if (iVar1 < 0) {
    *param_1 = 0;
    iVar1 = 0;
  }
  else if (param_2 < iVar1) {
    iVar1 = param_2 + -1;
  }
  return iVar1;
}



/* Entry: 106af037c; end: 106af03c7;  */

int FUN_106af037c(int param_1)

{
  int iVar1;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  
  func_0x000106af07b4();
  FUN_106af0758();
  func_0x000106af07dc();
  FUN_106aefa7c();
  iVar1 = param_1 + unaff_w22 + unaff_w21;
  func_0x000106af0814(unaff_x20 + param_1 + (long)unaff_w21);
  return iVar1 + unaff_w21;
}



/* Entry: 106af03c8; end: 106af043b;  */

void FUN_106af03c8(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [48];
  
  lVar1 = param_1;
  FUN_106aefe5c();
  if ((int)lVar1 == 0) {
    FUN_106aef4bc(param_1,auStack_50,0x18);
  }
  else {
    lVar1 = param_1;
    FUN_106aef4bc(param_1,auStack_50,0x30);
    if ((((int)lVar1 != 0) && ((*(byte *)(param_1 + 8) & 3) == 2)) &&
       (*(long *)(param_1 + 0x28) != 0)) {
      func_0x000106af0828(*(long *)(param_1 + 0x28),auStack_60);
    }
  }
  return;
}



/* Entry: 106af043c; end: 106af053f;  */

int FUN_106af043c(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_58;
  
  lVar2 = param_1;
  FUN_106af0758();
  iVar1 = (int)lVar2;
  lVar2 = param_2 + iVar1;
  lVar3 = lVar2;
  FUN_106af0150(lVar2,param_3 - iVar1,&UNK_10f3b3c08);
  uVar5 = lVar2 + (int)lVar3;
  if (uVar5 < (param_2 + param_3) - 1U) {
    lVar4 = param_1;
    FUN_106aefe5c();
    lVar2 = 0x10;
    if ((int)lVar4 == 0) {
      lVar2 = 8;
    }
    if (0 < (int)((uint)*(undefined8 *)(param_1 + lVar2) &
                 ((uint)((long)*(undefined8 *)(param_1 + lVar2) >> 0x3f) ^ 0xffffffff))) {
      lStack_58 = 0;
      FUN_106aefe7c(param_1,&lStack_58,1);
      lVar2 = lStack_58;
      if ((int)param_1 == 1) {
        lVar4 = lStack_58;
        func_0x000106aeff54();
        (**(code **)(lVar4 + 0x20))(lVar2,uVar5,(param_3 - iVar1) - (int)lVar3);
        uVar5 = uVar5 + (long)(int)lVar2;
      }
    }
  }
  iVar1 = (int)uVar5;
  FUN_106af0150(uVar5,(int)(param_2 + param_3) - iVar1,&DAT_10f62a9ea);
  return (iVar1 + (int)uVar5) - (int)param_2;
}



/* Entry: 106af0540; end: 106af055f;  */

void FUN_106af0540(undefined8 param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x000106af0828(param_1,auStack_20);
  return;
}



/* Entry: 106af0560; end: 106af05bb;  */

int FUN_106af0560(void)

{
  int iVar1;
  int unaff_w21;
  
  func_0x000106af07b4();
  func_0x000106aefd88();
  iVar1 = unaff_w21;
  FUN_106af0758();
  func_0x000106af0838();
  func_0x000106af0878();
  return iVar1 + unaff_w21;
}



/* Entry: 106af05bc; end: 106af05df;  */

void FUN_106af05bc(undefined8 param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_106aef4bc(param_1,auStack_28,0x18);
  return;
}



/* Entry: 106af05e0; end: 106af06d7;  */

int FUN_106af05e0(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  int extraout_w8;
  
  uVar2 = param_1;
  FUN_106af0758();
  iVar1 = (int)uVar2;
  param_2 = param_2 + iVar1;
  uVar2 = param_1;
  _CFNumberIsFloatType();
  if ((int)uVar2 == 0) {
    if ((-1 < (long)param_1) || (func_0x000106af07c4(param_1 >> 0x3c & 7), extraout_w8 == 0)) {
      _CFNumberGetType();
      switch(param_1) {
      case 1:
      case 7:
        break;
      case 2:
      case 8:
        break;
      case 3:
      case 9:
        break;
      case 4:
      case 10:
      case 0xb:
      case 0xe:
      case 0xf:
        break;
      case 5:
      case 0xc:
        break;
      case 6:
      case 0xd:
      case 0x10:
      }
    }
    puVar3 = &UNK_10f3b3b0f;
  }
  else {
    FUN_106aefdb4(param_1);
    puVar3 = &UNK_10f3b3c0c;
  }
  FUN_106af0150(param_2,param_3 - iVar1,puVar3);
  return (int)param_2 + iVar1;
}



/* Entry: 106af06d8; end: 106af0703;  */

void FUN_106af06d8(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  
  FUN_106aef4bc(param_1,auStack_58,0x48);
  if ((int)param_1 != 0) {
    func_0x000106af0280(uStack_40);
  }
  return;
}



/* Entry: 106af0704; end: 106af074f;  */

int FUN_106af0704(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  func_0x000106af07b4();
  FUN_106af0758();
  func_0x000106af07dc();
  uVar3 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_106aefa7c(uVar3,unaff_x20 + param_1,unaff_w19 - (param_1 + unaff_w22));
  iVar2 = (int)uVar3;
  iVar1 = iVar2 + param_1 + unaff_w22;
  func_0x000106af0814(unaff_x20 + param_1 + (long)iVar2);
  return iVar1 + iVar2;
}



/* Entry: 106af0750; end: 106af0757;  */

undefined8 FUN_106af0750(void)

{
  return 1;
}



/* Entry: 106af0758; end: 106af0797;  */

void FUN_106af0758(void)

{
  func_0x000106af07b4();
  func_0x000106aef564();
  func_0x000106aef5a4();
  FUN_106af0150();
  return;
}



/* Entry: 106af0798; end: 106af095b;  */

void FUN_106af0798(void)

{
  return;
}



/* Entry: 106af095c; end: 106af09b7;  */

void FUN_106af095c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(code **)(param_1 + 0x40) = FUN_106af0d88;
  *(undefined **)(param_1 + 0x30) = &SUB_1001d3478;
  *(code **)(param_1 + 0x38) = FUN_106af09b8;
  func_0x0001001d3478();
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined8 *)(param_1 + 0x50) = param_3;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}



/* Entry: 106af09b8; end: 106af0a5f;  */

undefined8 FUN_106af09b8(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = (int)param_1[5];
  if (((ulong)(long)iVar1 < param_1[10] - (long)(int)param_1[9]) &&
     (uVar2 = *(ulong *)(param_1[0xb] + (long)(iVar1 + (int)param_1[9]) * 8), 1 < uVar2)) {
    *param_1 = uVar2 & 0xfffffffff;
    *(int *)(param_1 + 5) = iVar1 + 1;
    return 1;
  }
  return 0;
}



/* Entry: 106af0a60; end: 106af0b8b;  */

void FUN_106af0a60(ulong *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int aiStack_38 [2];
  
  iVar2 = (int)param_1[5];
  if ((int)param_1[10] <= iVar2) {
    *(undefined1 *)((long)param_1 + 0x2c) = 1;
    return;
  }
  if ((iVar2 == 0) && (param_1[0xd] == 0)) {
    iVar2 = 0;
    uVar4 = *(ulong *)(param_1[9] + 0x2b0);
    param_1[0xd] = uVar4;
  }
  else {
    if ((param_1[0xe] == 0) && ((param_1[0xf] & 1) == 0)) {
      uVar4 = *(ulong *)(param_1[9] + 0x2a0);
      param_1[0xe] = uVar4;
      if (uVar4 != 0) goto LAB_106af0aa4;
    }
    uVar4 = param_1[0xb];
    if (uVar4 == 0) {
      if ((param_1[0xf] & 1) != 0) {
        return;
      }
      uVar4 = *(ulong *)(param_1[9] + 0x298);
      param_1[0xb] = uVar4;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    uVar3 = uVar4;
    FUN_106af0b8c();
    if ((int)uVar3 == 0) {
      return;
    }
    uVar3 = param_1[0xb];
    if ((uVar3 >> 0x3c & 1) != 0) {
      lVar1 = uVar4 - 8;
      FUN_106aef4bc(lVar1,aiStack_38,8);
      if ((int)lVar1 == 0) {
        return;
      }
      FUN_106af0b8c();
      if (aiStack_38[0] == 0) {
        return;
      }
      *(undefined1 *)((long)param_1 + 0x79) = 1;
      uVar3 = param_1[0xb];
    }
    if (uVar3 == 0) {
      return;
    }
    if (param_1[0xc] == 0) {
      return;
    }
    uVar4 = param_1[0xc] + (ulong)*(byte *)((long)param_1 + 0x79) * 4;
    iVar2 = (int)param_1[5];
  }
LAB_106af0aa4:
  *param_1 = uVar4 & 0xfffffffff;
  *(int *)(param_1 + 5) = iVar2 + 1;
  return;
}



/* Entry: 106af0b8c; end: 106af0b97;  */

bool FUN_106af0b8c(int param_1)

{
  func_0x000106aef4d8();
  return param_1 != 0;
}



/* Entry: 106af0b98; end: 106af0bd7;  */

void FUN_106af0b98(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x60;
  _backtrace_async(lVar1,0x60,0);
  *(code **)(param_1 + 0x40) = FUN_106af0d88;
  *(undefined **)(param_1 + 0x30) = &SUB_1001d3478;
  *(code **)(param_1 + 0x38) = FUN_106af09b8;
  func_0x0001001d3478();
  *(int *)(param_1 + 0x48) = param_2 + 1;
  *(long *)(param_1 + 0x50) = lVar1;
  *(long *)(param_1 + 0x58) = param_1 + 0x60;
  return;
}



/* Entry: 106af0bd8; end: 106af0c93;  */

bool FUN_106af0bd8(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = param_1;
  do {
    if (param_1 + param_3 <= pbVar5) {
      return false;
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      return (long)param_2 <= (long)pbVar5 - (long)param_1;
    }
    if ((char)bVar1 < '\0') {
      if (((bVar1 ^ 0xff) & 0xc0) != 0) {
        return false;
      }
      if (((bVar1 ^ 0xff) & 0x3e) == 0) {
        return false;
      }
      uVar2 = *(uint *)(&UNK_10dde4c58 + ((ulong)bVar1 & 0x3f) * 4);
      if (param_1 + param_3 <= pbVar5 + (int)uVar2) {
        return false;
      }
      uVar3 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      pbVar4 = pbVar5 + uVar3;
      while( true ) {
        pbVar5 = pbVar5 + 1;
        if ((int)uVar3 == 0) break;
        uVar3 = (ulong)((int)uVar3 - 1);
        if (-0x41 < (char)*pbVar5) {
          return false;
        }
      }
    }
    else {
      pbVar4 = pbVar5;
      if ((bVar1 < 0x20) && (*(int *)(&UNK_10dde5158 + (ulong)bVar1 * 4) == 0)) {
        return false;
      }
    }
    pbVar5 = pbVar4 + 1;
  } while( true );
}



/* Entry: 106af0c94; end: 106af0d27;  */

undefined8 FUN_106af0c94(byte *param_1,uint param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  pbVar1 = param_1 + param_2;
  do {
    _strnstr(param_1,&UNK_10f3b3d74,(int)pbVar1 - (int)param_1);
    if (param_1 == (byte *)0x0) {
      return 0;
    }
    param_1 = param_1 + 2;
  } while (*(int *)(&UNK_10dde4d58 + (ulong)*param_1 * 4) == 0xff);
  lVar2 = 0;
  while (param_1 < pbVar1) {
    if (*(uint *)(&UNK_10dde4d58 + (ulong)*param_1 * 4) == 0xff) break;
    lVar2 = (ulong)*(uint *)(&UNK_10dde4d58 + (ulong)*param_1 * 4) + lVar2 * 0x10;
    param_1 = param_1 + 1;
  }
  *param_3 = lVar2;
  return 1;
}



/* Entry: 106af0d28; end: 106af0d87;  */

void FUN_106af0d28(ulong *param_1)

{
  long lVar1;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  lVar1 = (*param_1 & 0xfffffffffffffffc) - 1;
  FUN_106aec1d4(lVar1,&uStack_40);
  if ((int)lVar1 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  param_1[1] = uStack_40;
  param_1[2] = uStack_38;
  param_1[3] = uStack_30;
  param_1[4] = uStack_28;
  return;
}



/* Entry: 106af0d88; end: 106af0d8b;  */

void FUN_106af0d88(ulong *param_1)

{
  long lVar1;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  lVar1 = (*param_1 & 0xfffffffffffffffc) - 1;
  FUN_106aec1d4(lVar1,&uStack_40);
  if ((int)lVar1 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  param_1[1] = uStack_40;
  param_1[2] = uStack_38;
  param_1[3] = uStack_30;
  param_1[4] = uStack_28;
  return;
}



/* Entry: 106af0d8c; end: 106af0f03;  */

/* WARNING: Possible PIC construction at 0x000106af0df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106af0e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106af0e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106af0e98) */
/* WARNING: Removing unreachable block (ram,0x000106af0dfc) */
/* WARNING: Removing unreachable block (ram,0x000106af0e14) */
/* WARNING: Type propagation algorithm not settling */

void FUN_106af0d8c(int param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long alStack_58 [3];
  undefined4 uStack_40;
  int iStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_58[2] = 0x1200000000;
  alStack_58[1] = 0x1100000004;
  uStack_40 = 3;
  iStack_3c = param_1;
  _if_nametoindex();
  if (iStack_3c == 0) {
    ___error();
    func_0x000106af0f18();
  }
  else {
    plVar2 = alStack_58 + 1;
    func_0x000106af0f50(plVar2,6,0,alStack_58);
    if ((int)plVar2 == 0) {
      lVar4 = alStack_58[0];
      _malloc();
      if (lVar4 == 0) {
        func_0x000106aee914(&UNK_10f3b3d77,&UNK_10f3b3d7d,0x109,&UNK_10f3b3f39,&UNK_10f3b3fc7);
        uVar3 = 0;
      }
      else {
        plVar2 = alStack_58 + 1;
        func_0x000106af0f50(plVar2,6,lVar4,alStack_58);
        if ((int)plVar2 != 0) {
          ___error();
          func_0x000106af0f18();
          return;
        }
        lVar1 = lVar4 + (ulong)*(byte *)(lVar4 + 0x75);
        *param_2 = *(undefined4 *)(lVar1 + 0x78);
        *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar1 + 0x7c);
        _free(lVar4);
        uVar3 = 1;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      ___stack_chk_fail(uVar3);
    }
    else {
      ___error();
      func_0x000106af0f18();
    }
  }
  return;
}



/* Entry: 106af0f04; end: 106af0f5b;  */

void FUN_106af0f04(void)

{
  return;
}



/* Entry: 106af0f5c; end: 106af1087;  */

undefined8 FUN_106af0f5c(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  ulong *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long lStack_48;
  ulong *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = 0;
  lStack_48 = 0;
  puStack_40 = (ulong *)0x0;
  uStack_54 = 6;
  uVar8 = 4;
  _thread_info(param_2,4,&uStack_50,&uStack_54);
  if ((int)param_2 == 0) {
    puVar4 = &uStack_50;
    uVar8 = 0x18;
    func_0x000106aef390();
    puVar2 = puStack_40;
    if ((int)puVar4 == 0) goto LAB_106af1058;
    uVar8 = 8;
    puVar5 = puStack_40;
    func_0x000106aef390();
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (ulong *)0x0) || ((int)puVar5 == 0)) goto LAB_106af1058;
    if (lStack_48 != 0) {
      uVar6 = *puVar2;
      puVar4 = (undefined8 *)0x0;
      if ((uVar6 == 0) || (_dispatch_queue_get_label(), puVar4 = (undefined8 *)0x0, uVar6 == 0))
      goto LAB_106af1058;
      uVar7 = uVar6;
      _strlen();
      lVar9 = 0;
      iVar3 = (int)uVar7;
      while ((lVar9 <= iVar3 && (0xffffffa0 < *(byte *)(uVar6 + lVar9) - 0x7f))) {
        lVar9 = lVar9 + 1;
      }
      if (*(char *)(uVar6 + lVar9) == '\0') {
        iVar1 = param_4 + -1;
        if (iVar3 <= param_4 + -1) {
          iVar1 = iVar3;
        }
        _strncpy(param_3,uVar6,(long)iVar1);
        *(undefined1 *)(param_3 + iVar1) = 0;
        puVar4 = (undefined8 *)0x1;
        uVar8 = uVar6;
        goto LAB_106af1058;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_106af1058:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar9 = 0;
  do {
    lVar10 = lVar9;
    if (lVar10 == 400) {
      return 0;
    }
    lVar9 = lVar10 + 1;
  } while (uVar8 != *(uint *)((long)puVar4 + lVar10 * 4));
  return puVar4[lVar10 + 0x32];
}



/* Entry: 106af1088; end: 106af10b7;  */

undefined8 FUN_106af1088(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (lVar2 == 400) {
      return 0;
    }
    lVar1 = lVar2 * 4;
    lVar2 = lVar2 + 1;
  } while (param_2 != *(uint *)(param_1 + lVar1));
  return *(undefined8 *)(param_1 + lVar2 * 8 + 0x188);
}



/* Entry: 106af10b8; end: 106af111f;  */

int * FUN_106af10b8(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar1 = (int *)(param_1 + 0x20);
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  do {
    if (uVar3 == 0) {
      return (int *)0x0;
    }
    if (*piVar1 == 0x19) {
      piVar2 = piVar1 + 2;
      _strncmp(piVar2,param_2,0x10);
      if ((int)piVar2 == 0) {
        return piVar1;
      }
    }
    piVar1 = (int *)((long)piVar1 + (ulong)(uint)piVar1[1]);
    uVar3 = uVar3 - 1;
  } while( true );
}



/* Entry: 106af1120; end: 106af12e3;  */

void FUN_106af1120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013d00();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000106af12f4();
  func_0x00010bf72040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240(puVar2,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106af12e4; end: 106af130b;  */

undefined8 FUN_106af12e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}



/* Entry: 106af130c; end: 106af133b; +[KSCrashReportFilterAppleFmt constructPreambleWithTraceNum:objName:pc:] */

void FUN_106af130c(undefined8 param_1,undefined8 param_2)

{
  func_0x000106af427c();
  func_0x00010c25d9e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e70818);
  return;
}



/* Entry: 106af133c; end: 106af1367; +[KSCrashReportFilterAppleFmt constructUnSymbolicatedFrameWithObjAddr:pc:] */

void FUN_106af133c(undefined8 param_1,undefined8 param_2)

{
  func_0x000106af427c();
  func_0x00010c25d9e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e70838);
  return;
}



/* Entry: 106af1368; end: 106af1413; -[KSCrashReportFilterAppleFmt majorVersion:] */

ulong FUN_106af1368(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010bfede20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000106af42d0();
  func_0x000106af42ec();
  if ((uVar1 & 1) != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001001f73dc();
  }
  uVar1 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_intValue_1125f79c0);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c067ec0(param_1);
  }
  func_0x0001001f73dc();
  func_0x000100214ff8();
  return param_1;
}



/* Entry: 106af1414; end: 106af14c3; -[KSCrashReportFilterAppleFmt CPUType:] */

undefined ** FUN_106af1414(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  func_0x000100214fcc();
  uVar1 = param_3;
  func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110dce538);
  if (uVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e70878;
  }
  else {
    uVar1 = param_3;
    func_0x00010c11f420(param_3,param_2,&PTR____CFConstantStringClassReference_110dce4f8);
    if (uVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e70898;
    }
    else {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e707b8);
      if ((uVar1 & 1) == 0) {
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dce578);
        ppuVar2 = &PTR____CFConstantStringClassReference_110e708d8;
        if ((int)param_3 == 0) {
          ppuVar2 = &PTR____CFConstantStringClassReference_110db54d8;
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e708b8;
      }
    }
  }
  func_0x000100214ff8();
  return ppuVar2;
}



/* Entry: 106af14c4; end: 106af1583; -[KSCrashReportFilterAppleFmt CPUArchForMajor:minor:] */

void FUN_106af14c4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if ((((param_3 != 7) && (param_3 != 0x100000c)) && (param_3 != 0x1000007)) && (param_3 != 0xc)) {
    func_0x000106af427c();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106af1584; end: 106af18db; -[KSCrashReportFilterAppleFmt backtraceString:reportStyle:mainExecutableName:] */

void FUN_106af1584(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,
                  undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  func_0x000106af4160();
  puVar1 = param_5;
  _objc_retain();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar2 = param_3;
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dbf198);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_130;
  uStack_138 = uVar2;
  func_0x000100214ff0();
  if (uStack_138 != 0) {
    iVar12 = 0;
    lVar9 = *plStack_120;
    do {
      uVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(uVar2);
        }
        uVar10 = *(undefined8 *)(lStack_128 + uVar11 * 8);
        uVar3 = uVar10;
        func_0x00010c0dff20(uVar10,param_2,&PTR____CFConstantStringClassReference_110dce298);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x0001001f72a4();
        func_0x00010c0dff20(uVar10,param_2,&PTR____CFConstantStringClassReference_110dce238);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x000106af41f0();
        uVar4 = uVar10;
        func_0x00010c0dff20(uVar10,param_2,&PTR____CFConstantStringClassReference_110dce218);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af41f0();
        func_0x00010c0dff20(uVar10,param_2,&PTR____CFConstantStringClassReference_110dce278);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x000106af41e8();
        func_0x00010c0dff20(uVar10,param_2,&PTR____CFConstantStringClassReference_110dce258);
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == (undefined8 *)0x0) {
          iVar8 = 3;
        }
        else {
          uVar5 = uVar4;
          func_0x00010c0720c0(uVar4,param_2,param_5);
          iVar8 = 0;
          if ((int)uVar5 == 0) {
            iVar8 = 3;
          }
        }
        if (param_4 != 1) {
          iVar8 = param_4;
        }
        uVar5 = param_1;
        _objc_opt_class();
        _objc_retainAutorelease(uVar4);
        func_0x00010bdc3520();
        func_0x00010bf497a0(uVar5,param_2,iVar12,uVar4,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class();
        func_0x00010bf49800();
        _objc_retainAutoreleasedReturnValue();
        if (iVar8 == 0) {
LAB_106af1820:
          func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfd398);
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_opt_class();
          func_0x000106af41c4();
          if (((ulong)puVar6 & 1) == 0) goto LAB_106af1820;
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e708f8);
          _objc_retainAutoreleasedReturnValue();
          if (iVar8 == 1) goto LAB_106af1820;
          if (iVar8 == 2) {
            func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e70918);
          }
          else if (iVar8 == 3) {
            func_0x00010c0720c0(uVar10,param_2,&PTR____CFConstantStringClassReference_110e63a78);
            goto LAB_106af1820;
          }
        }
        iVar12 = iVar12 + 1;
        func_0x000106af41d0();
        func_0x0001001f72a4();
        func_0x000106af41e8();
        func_0x000100214ff8();
        func_0x000106af4218();
        uVar11 = uVar11 + 1;
        in_ZR = uVar11 == uStack_138;
      } while (uVar11 < uStack_138);
      puVar7 = &uStack_130;
      uStack_138 = uVar2;
      func_0x000100214ff0(uVar2,param_2,puVar7,auStack_f0);
    } while (uStack_138 != 0);
  }
  func_0x000106af42c8();
  func_0x00010021648c();
  _objc_release(param_3);
  func_0x000100216494(uStack_70);
  if (!(bool)in_ZR) {
    puVar1 = puVar7;
    ___stack_chk_fail();
    func_0x00010c0b5ac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100214ff8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106af18dc; end: 106af192b; -[KSCrashReportFilterAppleFmt toCompactUUID:] */

void FUN_106af18dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106af192c; end: 106af1987; -[KSCrashReportFilterAppleFmt stringFromDate:] */

void FUN_106af192c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000100214fcc();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class();
  func_0x000106af41c4();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uRam00000001136c6328;
    func_0x00010c25d400(uRam00000001136c6328,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106af1988; end: 106af1997; -[KSCrashReportFilterAppleFmt recrashReport:] */

void FUN_106af1988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e6f8f8)
  ;
  return;
}



/* Entry: 106af1998; end: 106af19a7; -[KSCrashReportFilterAppleFmt systemReport:] */

void FUN_106af1998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110dd3418)
  ;
  return;
}



/* Entry: 106af19a8; end: 106af19b7; -[KSCrashReportFilterAppleFmt infoReport:] */

void FUN_106af19a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110db4078)
  ;
  return;
}



/* Entry: 106af19b8; end: 106af19c7; -[KSCrashReportFilterAppleFmt processReport:] */

void FUN_106af19b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e70938)
  ;
  return;
}



/* Entry: 106af19c8; end: 106af19d7; -[KSCrashReportFilterAppleFmt crashReport:] */

void FUN_106af19c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e6f8b8)
  ;
  return;
}



/* Entry: 106af19d8; end: 106af19e7; -[KSCrashReportFilterAppleFmt binaryImagesReport:] */

void FUN_106af19d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_objectForKey__1126159e0,&PTR____CFConstantStringClassReference_110e70958)
  ;
  return;
}



/* Entry: 106af19e8; end: 106af1b43; -[KSCrashReportFilterAppleFmt crashedThread:] */

void FUN_106af19e8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  ulong uVar6;
  
  func_0x000100214e4c();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x000100214fe4();
  uVar3 = uVar2;
  func_0x000100214ff0();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar3 == 0) {
      func_0x0001001f73dc();
      func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e6fc98);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
LAB_106af1b08:
      func_0x0001001f73dc();
      func_0x000100214ff8();
      func_0x000100216494(extraout_x8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010bfede20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000100214ff8();
        uVar5 = param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
      return;
    }
    uVar6 = 0;
    do {
      in_ZR = lRam0000000000000000 == lVar1;
      if (!(bool)in_ZR) {
        _objc_enumerationMutation(uVar2);
      }
      uVar5 = *(ulong *)(uVar6 * 8);
      uVar4 = uVar5;
      func_0x00010c0dff20(uVar5,param_2,&PTR____CFConstantStringClassReference_110e6fcd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x000106af41d0();
      if ((uVar4 & 1) != 0) {
        param_1 = uVar5;
        _objc_retain(uVar5);
        func_0x0001001f73dc();
        goto LAB_106af1b08;
      }
      uVar6 = uVar6 + 1;
      in_ZR = uVar6 == uVar3;
    } while (uVar6 < uVar3);
    func_0x000100214fe4();
    uVar3 = uVar2;
    func_0x000100214ff0();
  } while( true );
}



/* Entry: 106af1b44; end: 106af1b87; -[KSCrashReportFilterAppleFmt mainExecutableNameForReport:] */

void FUN_106af1b44(undefined8 param_1)

{
  func_0x00010bfede20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af1b88; end: 106af1c27; -[KSCrashReportFilterAppleFmt cpuArchForReport:] */

void FUN_106af1b88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c267200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x0001001f72a4();
  func_0x00010c0dff20(uVar1,param_2,&PTR____CFConstantStringClassReference_110e70998);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x0001001f72a4();
  func_0x00010bdc11e0(param_1,param_2,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001f73dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af1c28; end: 106af1dcb; -[KSCrashReportFilterAppleFmt headerStringForReport:] */

void FUN_106af1c28(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_6d [21];
  undefined8 uStack_58;
  
  func_0x000100214e4c();
  uStack_58 = extraout_x8;
  func_0x000100214fcc();
  puVar1 = param_1;
  func_0x00010c267200();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bfede20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010021648c();
  puVar3 = puVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x000106af42f8();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class();
    func_0x000106af42f8();
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new();
    }
    else {
      func_0x00010c067ec0(puVar2);
      func_0x0001001d5b6c((long)(int)puVar2,auStack_6d);
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puRam00000001136c6330;
      func_0x00010bf65160();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af41e0();
    }
  }
  else {
    puVar2 = puRam00000001136c6330;
    func_0x00010bf65160();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfdff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41d0();
  func_0x000106af41d8();
  func_0x00010021648c();
  func_0x0001001f73dc();
  func_0x000100214ff8();
  func_0x000100216494(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    param_1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    _objc_retain(puVar1);
    func_0x00010c25cd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1200();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41f8();
    func_0x000106af41f0();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41f8();
    func_0x000106af41f0();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41f8();
    func_0x000106af41e8();
    func_0x000106af41f0();
    func_0x000106af41f8();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41f8();
    func_0x000106af41f0();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41f8();
    func_0x000106af41e8();
    func_0x000106af41f0();
    func_0x000106af41f8();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41f8();
    func_0x000106af41f0();
    func_0x000106af41f8();
    func_0x00010c25d400();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41d0();
    func_0x000106af41f8();
    func_0x000106af41e0();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010021648c();
    func_0x000106af41f8();
    func_0x000106af41f0();
    func_0x000106af41e0();
    func_0x000106af41d0();
    func_0x000106af41f8();
    func_0x000106af41d8();
    func_0x0001001f72a4();
    func_0x0001001f73dc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af1dcc; end: 106af20d3; -[KSCrashReportFilterAppleFmt headerStringForSystemInfo:reportID:crashTime:] */

void FUN_106af1dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c25cd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e709b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6fa98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1200(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41f8();
  func_0x000106af41f0();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6f4f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41f8();
  func_0x000106af41f0();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6fc78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e70a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41f8();
  func_0x000106af41e8();
  func_0x000106af41f0();
  func_0x000106af41f8();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6adb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41f8();
  func_0x000106af41f0();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dceb18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dd29f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41f8();
  func_0x000106af41e8();
  func_0x000106af41f0();
  func_0x000106af41f8();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e70af8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41f8();
  func_0x000106af41f0();
  func_0x000106af41f8();
  func_0x00010c25d400(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41d0();
  func_0x000106af41f8();
  func_0x000106af41e0();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e70b58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e70b78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110dd5c18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010021648c();
  func_0x000106af41f8();
  func_0x000106af41f0();
  func_0x000106af41e0();
  func_0x000106af41d0();
  func_0x000106af41f8();
  func_0x000106af41d8();
  func_0x0001001f72a4();
  func_0x0001001f73dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106af20d4; end: 106af2433; -[KSCrashReportFilterAppleFmt binaryImagesStringForReport:] */

long FUN_106af20d4(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  lVar8 = param_1;
  func_0x000106af4160();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf19fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c267200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110e70bb8;
  func_0x00010bf070e0(lVar8);
  if (lVar9 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246ba0();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x000100214fdc();
    ppuVar5 = &puStack_130;
    puVar2 = puVar1;
    func_0x000100214ff0();
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar1);
          }
          lVar6 = *(long *)(lStack_128 + (long)puVar7 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          _objc_opt_class();
          func_0x000106af41c4();
          if (((ulong)puVar3 & 1) != 0) {
            func_0x00010c0dff20(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x0001001f73dc();
            func_0x00010c0dff20(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c067ec0();
            func_0x0001001f73dc();
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            func_0x000106af42dc();
            func_0x0001001f73dc();
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0b4ca0();
            func_0x000106af41d0();
            lVar4 = lVar6;
            func_0x000106af4270();
            func_0x00010c0dff20();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0899c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0dff20(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c271b80();
            _objc_retainAutoreleasedReturnValue();
            func_0x000106af41e0();
            if (lVar4 == 0) {
              ppuVar5 = &PTR____CFConstantStringClassReference_110db2d98;
            }
            else {
              lVar6 = param_1;
              func_0x00010c0720c0();
              ppuVar5 = &PTR____CFConstantStringClassReference_110dae918;
              if ((int)lVar6 == 0) {
                ppuVar5 = &PTR____CFConstantStringClassReference_110db2d98;
              }
            }
            _objc_retain(ppuVar5);
            func_0x00010bdc11e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ba0(lVar8);
            func_0x000106af41e0();
            func_0x0001001f73dc();
            func_0x000100214ff8();
            func_0x000106af41d0();
            func_0x000106af41f0();
          }
          puVar7 = puVar7 + 1;
          in_ZR = puVar7 == puVar2;
        } while (puVar7 < puVar2);
        ppuVar5 = &puStack_130;
        puVar2 = puVar1;
        func_0x000100214ff0();
      } while (puVar2 != (undefined *)0x0);
    }
    func_0x000100214ff8();
    func_0x000100214ff8();
  }
  _objc_release(param_1);
  func_0x000106af42e4();
  func_0x0001001f72a4();
  func_0x000100214ff8();
  func_0x000100216494(uStack_70);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return lVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x000100214fd4();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  func_0x000106af41c4();
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class();
    func_0x000106af42ec();
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = 0;
      if ((param_2 != 0) && (ppuVar5 != (undefined **)0x0)) {
        func_0x00010bf433a0(param_2);
        lVar8 = param_2;
      }
      func_0x000106af41d8();
      func_0x00010021648c();
      goto LAB_106af24e4;
    }
  }
  lVar8 = 0;
LAB_106af24e4:
  func_0x0001001f73dc();
  func_0x000100214ff8();
  return lVar8;
}



/* Entry: 106af2434; end: 106af2503;  */

long FUN_106af2434(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x000100214fd4();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class();
  func_0x000106af41c4();
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class();
    func_0x000106af42ec();
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = 0;
      if ((param_2 != 0) && (param_3 != 0)) {
        func_0x00010bf433a0(param_2);
        lVar2 = param_2;
      }
      func_0x000106af41d8();
      func_0x00010021648c();
      goto LAB_106af24e4;
    }
  }
  lVar2 = 0;
LAB_106af24e4:
  func_0x0001001f73dc();
  func_0x000100214ff8();
  return lVar2;
}



/* Entry: 106af2504; end: 106af273f; -[KSCrashReportFilterAppleFmt crashedThreadCPUStateStringForReport:cpuArch:] */

void FUN_106af2504(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  func_0x000106af41b4();
  func_0x000100214fd4();
  func_0x000106af4264();
  func_0x00010bf54180();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar2 = param_1;
    func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110de1e58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x000106af41d8();
    func_0x000106af424c();
    func_0x00010bdc1200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000106af4258();
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0();
    func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e6fcf8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41d8();
    ppuVar4 = ppuRam00000001136c6338;
    func_0x00010c0dff20(ppuRam00000001136c6338,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = param_1;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c246d00();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af41d8();
    }
    ppuVar5 = ppuVar4;
    func_0x00010bf529e0();
    ppuVar7 = (undefined **)0x0;
    while (ppuVar7 < ppuVar5) {
      ppuVar1 = (undefined **)((long)ppuVar7 + 4U);
      if (ppuVar5 <= (undefined **)((long)ppuVar7 + 4U)) {
        ppuVar1 = ppuVar5;
      }
      for (; ppuVar7 < ppuVar1; ppuVar7 = (undefined **)((long)ppuVar7 + 1)) {
        ppuVar6 = ppuVar4;
        func_0x00010c0dfd20(ppuVar4,param_2,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dff20(param_1,param_2,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af42dc();
        func_0x0001001f73dc();
        _objc_retainAutorelease();
        func_0x00010bf260e0();
        func_0x00010bf06ba0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e70bf8);
        func_0x000100214ff8();
      }
      func_0x00010bf070e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110db2db8);
    }
    func_0x000106af41e0();
    func_0x000106af41d0();
    _objc_release(ppuVar2);
  }
  func_0x0001001f72a4();
  func_0x0001001f73dc();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106af2740; end: 106af2baf; -[KSCrashReportFilterAppleFmt extraInfoStringForReport:mainExecutableName:] */

void FUN_106af2740(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x000100214fcc();
  lVar1 = param_4;
  _objc_retain();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf070e0();
  func_0x000106af4320();
  func_0x00010c267200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000106af4320();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42b4();
  lVar4 = lVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = param_1;
    func_0x00010bdc18e0(param_1,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4210();
    func_0x000106af41d8();
  }
  func_0x000106af4320();
  func_0x00010bf54180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    lVar6 = lVar7;
    func_0x00010c0dff20(lVar7,param_2,&PTR____CFConstantStringClassReference_110e6ed38);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      lVar8 = lVar6;
      func_0x00010c0dff20(lVar6,param_2,&PTR____CFConstantStringClassReference_110e70c98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c0dff20(lVar6,param_2,&PTR____CFConstantStringClassReference_110e70cb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c0dff20(lVar6,param_2,&PTR____CFConstantStringClassReference_110dbf198);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af4210();
      _objc_release(lVar6);
      func_0x000106af4218();
      _objc_release(lVar8);
    }
    func_0x00010c0dff20(lVar7,param_2,&PTR____CFConstantStringClassReference_110e6fdd8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x000106af42a8();
      func_0x00010bdc18e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af4210();
      func_0x0001001f73dc();
    }
    func_0x000106af41d0();
    func_0x000106af41d8();
  }
  func_0x000106af4320();
  func_0x00010c115240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001f73dc();
  if (lVar7 != 0) {
    func_0x00010c0dff20(lVar7,param_2,&PTR____CFConstantStringClassReference_110e700b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af42dc();
    func_0x0001001f73dc();
    func_0x000106af4270();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar7,param_2,&PTR____CFConstantStringClassReference_110daf558);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c0dff20(lVar7,param_2,&PTR____CFConstantStringClassReference_110e70c38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010021648c();
    func_0x000106af4210();
    if (lVar6 != 0) {
      func_0x00010bdc18e0(param_1,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af4210();
      func_0x0001001f73dc();
    }
    func_0x00010c0dff20(lVar7,param_2,&PTR____CFConstantStringClassReference_110dedb98);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c133dc0(param_1);
    func_0x00010bf14940(param_1,param_2,lVar7,lVar6,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4220(lVar1);
    func_0x00010021648c();
    func_0x0001001f73dc();
    func_0x000106af41e0();
    func_0x000106af41d0();
  }
  func_0x00010c0dff20(lVar2,param_2,&PTR____CFConstantStringClassReference_110e70d58);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010bdc18e0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4210();
    func_0x0001001f73dc();
  }
  func_0x00010c0dff20(param_3,param_2,&PTR____CFConstantStringClassReference_110e6f8b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x000106af4210();
  }
  func_0x000106af41e0();
  func_0x000106af41d0();
  func_0x00010021648c();
  func_0x000106af4218();
  func_0x000106af42c8();
  func_0x000106af41d8();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x000106af42e4();
  func_0x000106af41e8();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106af2bb0; end: 106af2c47; -[KSCrashReportFilterAppleFmt JSONForObject:] */

void FUN_106af2bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lStack_38;
  
  lStack_38 = 0;
  puVar2 = PTR_PTR_1126d05c0;
  func_0x00010bf92d20(PTR_PTR_1126d05c0,param_2,param_3,3,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  func_0x000100214fdc();
  func_0x000106af427c();
  if (lVar1 == 0) {
    _objc_alloc();
    func_0x00010c008340();
  }
  else {
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001001f73dc();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106af2c48; end: 106af2eeb; -[KSCrashReportFilterAppleFmt isZombieNSException:] */

undefined ** FUN_106af2c48(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  func_0x000106af4160();
  ppuVar2 = param_1;
  func_0x00010bf54080(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42b4();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar2;
  func_0x00010c0dff20(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110e70dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e6fd58);
  if (((int)ppuVar3 == 0) ||
     (func_0x00010c0720c0(ppuVar14,param_2,&PTR____CFConstantStringClassReference_110e70df8),
     ppuVar3 = ppuVar14, (int)ppuVar14 == 0)) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar4 = param_1;
    func_0x00010c115240(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x000106af41e0();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
    }
    else {
      func_0x00010c0dff20(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e700b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf54180(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af41e0();
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(ppuVar3);
      ppuVar5 = ppuVar3;
      func_0x000100214ff0(ppuVar3,param_2,&uStack_130,auStack_f0);
      ppuVar14 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        lVar15 = *plStack_120;
        do {
          ppuVar14 = (undefined **)0x0;
          do {
            in_ZR = *plStack_120 == lVar15;
            if (!(bool)in_ZR) {
              _objc_enumerationMutation(ppuVar3);
            }
            ppuVar6 = ppuVar3;
            func_0x00010c0dff20(ppuVar3,param_2,*(undefined8 *)(lStack_128 + (long)ppuVar14 * 8));
            _objc_retainAutoreleasedReturnValue();
            if ((ppuVar4 != (undefined **)0x0) &&
               (func_0x00010c071f40(ppuVar6,param_2,ppuVar4), ((ulong)ppuVar6 & 1) != 0)) {
              func_0x000106af41e0();
              ppuVar14 = (undefined **)0x1;
              goto LAB_106af2e84;
            }
            func_0x000106af41e0();
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            in_ZR = ppuVar14 == ppuVar5;
          } while (ppuVar14 < ppuVar5);
          ppuVar5 = ppuVar3;
          func_0x000100214ff0(ppuVar3,param_2,&uStack_130,auStack_f0);
        } while (ppuVar5 != (undefined **)0x0);
        ppuVar14 = (undefined **)0x0;
      }
LAB_106af2e84:
      func_0x000106af4218();
      func_0x000106af4218();
      _objc_release();
      func_0x000106af41f0();
      ppuVar3 = param_1;
    }
    func_0x000106af41f0();
  }
  func_0x000106af41d0();
  func_0x000106af41d8();
  func_0x00010021648c();
  func_0x0001001f72a4();
  func_0x0001001f73dc();
  func_0x000100214ff8();
  func_0x000100216494(uStack_70);
  if ((bool)in_ZR) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  func_0x000106af41b4();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000106af4264();
  func_0x00010bf54180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x000106af4264();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42b4();
  ppuVar6 = ppuVar5;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e6def8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e6deb8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x000106af4264();
  func_0x00010c115240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001f72a4();
  ppuVar10 = ppuVar6;
  func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e70e18);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar6;
  func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e6ded8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar6;
  func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e6df18);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar11;
  func_0x00010c0dff20(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110e6fd38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR____CFConstantStringClassReference_110db1158;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar14 = ppuVar13;
  }
  func_0x000106af4270();
  ppuVar13 = ppuVar12;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar13 = ppuVar12;
    func_0x00010c0dff20(ppuVar12,param_2,&PTR____CFConstantStringClassReference_110e6df18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
  }
  func_0x00010c0dff20(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110e70dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4228();
  func_0x000106af4228();
  func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e700b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x000106af4228();
  func_0x000106af41e8();
  func_0x00010c0dff20(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110de1e58);
  iVar1 = (int)ppuVar4;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x000106af4228();
  func_0x000106af41e8();
  if (ppuVar7 == (undefined **)0x0) {
    func_0x000106af4264();
    func_0x00010c083e20();
    if (iVar1 == 0) {
      if (ppuVar10 == (undefined **)0x0) {
        func_0x000106af42c0();
        if (iVar1 == 0) {
          func_0x000106af42c0();
          ppuVar4 = ppuVar12;
          if ((iVar1 != 0) || (func_0x000106af42c0(), ppuVar4 = ppuVar11, iVar1 != 0)) {
            func_0x00010c0dff20(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e510d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d8a0(ppuVar2,param_2,ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x000106af41d0();
            func_0x00010c08fa60();
            if (ppuVar2 != (undefined **)0x0) {
              func_0x000106af4220(ppuVar3);
            }
            func_0x00010021648c();
          }
        }
        else {
          func_0x000106af4270();
          ppuVar4 = ppuVar8;
          func_0x00010c0dff20(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar4;
          func_0x000106af4298();
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25daa0(ppuVar2,param_2,ppuVar4,ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x000106af41a4();
          func_0x00010021648c();
          func_0x000106af41e0();
          _objc_release(ppuVar4);
        }
      }
      else {
        func_0x000106af4270();
        ppuVar4 = ppuVar10;
        func_0x00010c0dff20(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af4298();
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af430c();
        func_0x00010c25da20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(ppuVar3,param_2,ppuVar4);
        func_0x000106af41d0();
        func_0x000106af41e8();
        func_0x000106af41e0();
        func_0x00010c292020(ppuVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        if (ppuVar2 != (undefined **)0x0) {
          func_0x000106af4228();
        }
        ppuVar2 = ppuVar6;
        func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e70ef8);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar2 = ppuVar6;
          func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e70f18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar6;
          func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110e70f38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e6fcb8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0(ppuVar2);
          func_0x00010bf529e0();
          func_0x00010bf885a0(ppuVar4);
          func_0x000106af4228();
          func_0x000106af41e8();
          func_0x000106af41e0();
          func_0x000106af42c8();
        }
        func_0x00010021648c();
        func_0x000106af41f0();
      }
    }
    else {
      func_0x000106af4270();
      func_0x00010c0dff20(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(ppuVar9,param_2,&PTR____CFConstantStringClassReference_110daf558);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af430c();
      func_0x00010c25daa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af41a4();
      func_0x00010021648c();
      func_0x000106af41e8();
      func_0x000106af41e0();
      func_0x00010bf070e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e70eb8);
    }
  }
  else {
    func_0x000106af4270();
    ppuVar4 = ppuVar7;
    func_0x00010c0dff20(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar4;
    func_0x000106af4298();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25daa0(ppuVar2,param_2,ppuVar4,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41a4();
    func_0x00010021648c();
    func_0x000106af41e0();
    func_0x000106af41e8();
  }
  func_0x00010c0dff20(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110dad058);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar6 != (undefined **)0x0) {
    iVar1 = 0x10e6ff98;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e6ff98,param_2,ppuVar6);
    if (iVar1 != 0) {
      func_0x000106af4228();
    }
  }
  func_0x00010021648c();
  func_0x0001001f72a4();
  func_0x000106af4218();
  _objc_release(ppuVar14);
  _objc_release(ppuVar12);
  func_0x000106af42e4();
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  func_0x000106af41e8();
  func_0x000106af41d8();
  _objc_release(ppuVar5);
  func_0x000106af41d0();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return ppuVar3;
}



/* Entry: 106af2eec; end: 106af3577; -[KSCrashReportFilterAppleFmt errorInfoStringForReport:] */

void FUN_106af2eec(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x22;
  
  func_0x000106af41b4();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x000106af4264();
  func_0x00010bf54180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x000106af4264();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42b4();
  ppuVar5 = ppuVar4;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e6def8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e6deb8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x000106af4264();
  func_0x00010c115240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001f72a4();
  ppuVar9 = ppuVar5;
  func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e70e18);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar5;
  func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e6ded8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar5;
  func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e6df18);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar10;
  func_0x00010c0dff20(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110e6fd38);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1158;
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar1 = ppuVar12;
  }
  func_0x000106af4270();
  ppuVar12 = ppuVar11;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar12 = ppuVar11;
    func_0x00010c0dff20(ppuVar11,param_2,&PTR____CFConstantStringClassReference_110e6df18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
  }
  func_0x00010c0dff20(ppuVar10,param_2,&PTR____CFConstantStringClassReference_110e70dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4228();
  func_0x000106af4228();
  func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e700b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x000106af4228();
  func_0x000106af41e8();
  func_0x00010c0dff20(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110de1e58);
  iVar2 = (int)ppuVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x000106af4228();
  func_0x000106af41e8();
  if (ppuVar6 == (undefined **)0x0) {
    func_0x000106af4264();
    func_0x00010c083e20();
    if (iVar2 == 0) {
      if (ppuVar9 == (undefined **)0x0) {
        func_0x000106af42c0();
        if (iVar2 == 0) {
          func_0x000106af42c0();
          ppuVar3 = ppuVar11;
          if ((iVar2 != 0) || (func_0x000106af42c0(), ppuVar3 = ppuVar10, iVar2 != 0)) {
            func_0x00010c0dff20(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110e510d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25d8a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x000106af41d0();
            func_0x00010c08fa60();
            if (unaff_x22 != 0) {
              func_0x000106af4220(param_1);
            }
            func_0x00010021648c();
          }
        }
        else {
          func_0x000106af4270();
          ppuVar3 = ppuVar7;
          func_0x00010c0dff20(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x000106af4298();
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25daa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x000106af41a4();
          func_0x00010021648c();
          func_0x000106af41e0();
          _objc_release(ppuVar3);
        }
      }
      else {
        func_0x000106af4270();
        ppuVar3 = ppuVar9;
        func_0x00010c0dff20(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af4298();
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af430c();
        func_0x00010c25da20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(param_1,param_2,ppuVar3);
        func_0x000106af41d0();
        func_0x000106af41e8();
        func_0x000106af41e0();
        func_0x00010c292020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fa60();
        if (unaff_x22 != 0) {
          func_0x000106af4228();
        }
        ppuVar3 = ppuVar5;
        func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e70ef8);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar3 = ppuVar5;
          func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e70f18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar5;
          func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110e70f38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110e6fcb8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0(ppuVar3);
          func_0x00010bf529e0();
          func_0x00010bf885a0(ppuVar10);
          func_0x000106af4228();
          func_0x000106af41e8();
          func_0x000106af41e0();
          func_0x000106af42c8();
        }
        func_0x00010021648c();
        func_0x000106af41f0();
      }
    }
    else {
      func_0x000106af4270();
      func_0x00010c0dff20(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110daf558);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af430c();
      func_0x00010c25daa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af41a4();
      func_0x00010021648c();
      func_0x000106af41e8();
      func_0x000106af41e0();
      func_0x00010bf070e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e70eb8);
    }
  }
  else {
    func_0x000106af4270();
    func_0x00010c0dff20(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4298();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25daa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af41a4();
    func_0x00010021648c();
    func_0x000106af41e0();
    func_0x000106af41e8();
  }
  func_0x00010c0dff20(ppuVar5,param_2,&PTR____CFConstantStringClassReference_110dad058);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 != (undefined **)0x0) {
    iVar2 = 0x10e6ff98;
    func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110e6ff98,param_2,ppuVar5);
    if (iVar2 != 0) {
      func_0x000106af4228();
    }
  }
  func_0x00010021648c();
  func_0x0001001f72a4();
  func_0x000106af4218();
  _objc_release(ppuVar1);
  _objc_release(ppuVar11);
  func_0x000106af42e4();
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  func_0x000106af41e8();
  func_0x000106af41d8();
  _objc_release(ppuVar4);
  func_0x000106af41d0();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af3578; end: 106af359f; -[KSCrashReportFilterAppleFmt stringWithUncaughtExceptionName:reason:] */

void FUN_106af3578(undefined8 param_1,undefined8 param_2)

{
  func_0x000106af427c();
  func_0x00010c25d9e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e70f98);
  return;
}



/* Entry: 106af35a0; end: 106af35c7; -[KSCrashReportFilterAppleFmt stringWithHandledExceptionName:reason:] */

void FUN_106af35a0(undefined8 param_1,undefined8 param_2)

{
  func_0x000106af427c();
  func_0x00010c25d9e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e70fb8);
  return;
}



/* Entry: 106af35c8; end: 106af363f; -[KSCrashReportFilterAppleFmt stringWithApplicationSpecificInformationUserInfo:] */

void FUN_106af35c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000100214fcc();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x000106af41c4();
  if ((((ulong)puVar1 & 1) == 0) || (func_0x00010c08fa60(), param_3 == 0)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e70fd8);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106af3640; end: 106af37b7; -[KSCrashReportFilterAppleFmt userExceptionTrace:] */

void FUN_106af3640(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  
  func_0x000100214e4c();
  func_0x000100214fcc();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    func_0x000106af4228();
  }
  uVar3 = param_3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100214ff0();
  lVar1 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar3);
      }
      func_0x00010bf06ba0(param_1);
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar2;
    } while (uVar7 < uVar2);
    uVar2 = uVar3;
    func_0x000100214ff0();
  }
  func_0x00010c08fa60();
  if (param_1 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
    ppuVar4 = (undefined **)0x0;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e71038;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
  }
  func_0x00010021648c();
  func_0x0001001f72a4();
  func_0x0001001f73dc();
  func_0x000100214ff8();
  func_0x000100216494(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000106af432c();
    func_0x000106af41b4();
    func_0x000100214fd4();
    func_0x000106af4258();
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf06ba0();
    func_0x000106af42d0();
    func_0x000106af41c4();
    if ((((ulong)ppuVar5 & 1) == 0) ||
       (uVar2 = param_3, _objc_opt_respondsToSelector(param_3,PTR_s_objectForKey__1126159e0),
       (uVar2 & 1) == 0)) {
      func_0x000106af4210();
    }
    else {
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x000106af41d0();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x000106af41d0();
      func_0x000106af4270();
      uVar2 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 != 0) || (uVar7 != 0)) {
        func_0x000106af4210();
      }
      func_0x000106af4210();
      if (uVar6 != 0) {
        func_0x00010bf885a0(uVar6);
        func_0x000106af4210();
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        func_0x000106af41e8();
        func_0x000106af4210();
      }
      func_0x00010c0dff20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c133dc0(uVar3);
      func_0x00010bf14940(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af4220(ppuVar4);
      func_0x00010021648c();
      func_0x000106af41d8();
      func_0x000106af41f0();
      func_0x000106af41e0();
      func_0x000106af41d0();
    }
    func_0x0001001f73dc();
    func_0x000100214ff8();
    ppuVar5 = ppuVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106af37b8; end: 106af39e3; -[KSCrashReportFilterAppleFmt threadStringForThread:mainExecutableName:] */

void FUN_106af37b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  func_0x000106af432c();
  func_0x000106af41b4();
  func_0x000100214fd4();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf06ba0();
  func_0x000106af42d0();
  func_0x000106af41c4();
  if (((uVar1 & 1) == 0) || (uVar1 = unaff_x19, _objc_opt_respondsToSelector(), (uVar1 & 1) == 0)) {
    func_0x000106af4210();
  }
  else {
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x000106af41d0();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x000106af41d0();
    func_0x000106af4270();
    uVar1 = unaff_x19;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x19;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 != 0) || (uVar2 != 0)) {
      func_0x000106af4210();
    }
    func_0x000106af4210();
    if (unaff_x19 != 0) {
      func_0x00010bf885a0(unaff_x19);
      func_0x000106af4210();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x000106af41e8();
      func_0x000106af4210();
    }
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133dc0();
    func_0x00010bf14940();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4220(param_1);
    func_0x00010021648c();
    func_0x000106af41d8();
    func_0x000106af41f0();
    func_0x000106af41e0();
    func_0x000106af41d0();
  }
  func_0x0001001f73dc();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af39e4; end: 106af3bc7; -[KSCrashReportFilterAppleFmt threadListStringForReport:mainExecutableName:] */

undefined8 * FUN_106af39e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  puVar1 = param_1;
  func_0x000106af4160();
  func_0x000100214fd4();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x000106af4264();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42b4();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c071ae0();
  if ((int)puVar4 != 0) {
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined8 *)0x0) {
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af41d0();
    }
    func_0x000106af41e8();
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar6 = &uStack_130;
  puVar4 = puVar2;
  func_0x000100214ff0();
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = *plStack_120;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010c26d480(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf070e0(puVar1);
        func_0x000106af4218();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar4;
      } while (puVar6 < puVar4);
      puVar6 = &uStack_130;
      puVar4 = puVar2;
      func_0x000100214ff0();
    } while (puVar4 != (undefined8 *)0x0);
  }
  func_0x000106af41d0();
  _objc_release(puVar3);
  func_0x000106af41e0();
  func_0x000106af41d0();
  func_0x000106af41d8();
  func_0x0001001f73dc();
  _objc_release(param_3);
  func_0x000100216494(uStack_70);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000100214fcc();
  func_0x00010c0dff20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100214ff8();
  func_0x00010bf433a0(puVar6);
  func_0x0001001f72a4();
  func_0x0001001f73dc();
  return puVar6;
}



/* Entry: 106af3bc8; end: 106af3c4b;  */

undefined8 FUN_106af3bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100214fcc();
  func_0x00010c0dff20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100214ff8();
  func_0x00010bf433a0(param_3);
  func_0x0001001f72a4();
  func_0x0001001f73dc();
  return param_3;
}



/* Entry: 106af3c4c; end: 106af3d8f; -[KSCrashReportFilterAppleFmt crashReportString:] */

void FUN_106af3c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x000100214fcc();
  func_0x00010c25cd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x000106af424c();
  func_0x00010c0b6960();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af424c();
  func_0x00010bfdff40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4178();
  func_0x000106af41d8();
  func_0x000106af424c();
  func_0x00010bf98c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4178();
  func_0x000106af41d8();
  func_0x000106af424c();
  func_0x00010c26d420();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4178();
  func_0x000106af41d8();
  func_0x000106af424c();
  func_0x00010bf53aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af424c();
  func_0x00010bf541a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1,param_2,puVar2);
  func_0x000106af41d0();
  func_0x000106af41d8();
  func_0x000106af424c();
  func_0x00010bf45180();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4178();
  func_0x000106af41d8();
  func_0x000106af424c();
  func_0x00010bf19fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4178();
  func_0x000106af41d8();
  func_0x000106af424c();
  func_0x00010bf9e900();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001f73dc();
  func_0x000106af4220(puVar1);
  func_0x00010021648c();
  func_0x0001001f72a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106af3d90; end: 106af3eff; -[KSCrashReportFilterAppleFmt composerThreadsString:] */

void FUN_106af3d90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  func_0x000106af432c();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42b4();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000106af427c();
    _objc_opt_class();
    _objc_opt_isKindOfClass(puVar2,puVar3);
    func_0x000106af41f0();
    if (((ulong)puVar2 & 1) == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      func_0x00010c0e00e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e711b8;
      func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e711b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106af41e8();
    }
    func_0x000106af41e0();
    func_0x000106af41d0();
  }
  func_0x000106af41d8();
  func_0x00010021648c();
  func_0x0001001f72a4();
  func_0x0001001f73dc();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106af3f00; end: 106af40a3; -[KSCrashReportFilterAppleFmt recrashReportString:] */

void FUN_106af3f00(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000106af432c();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x000100214fcc();
  func_0x00010c25cd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42a8();
  func_0x00010c1243a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c267200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42a8();
  func_0x00010bf54080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  func_0x000106af42a8();
  func_0x00010bf98c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4288();
  func_0x000106af4218();
  func_0x00010c26d480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4288();
  func_0x000106af4218();
  func_0x00010bf53aa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af42a8();
  func_0x00010bf541a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af41d0();
  func_0x00010bf070e0(puVar1);
  func_0x000106af41f0();
  func_0x000106af4218();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x000106af41f8();
  }
  func_0x000106af41d0();
  func_0x000106af41e8();
  func_0x000106af41e0();
  func_0x000106af41d8();
  func_0x00010021648c();
  func_0x0001001f72a4();
  func_0x0001001f73dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106af40a4; end: 106af4157; -[KSCrashReportFilterAppleFmt toAppleFormat:] */

void FUN_106af40a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined8 unaff_x22;
  
  func_0x000106af41b4();
  func_0x000106af4258();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x19 == 0) {
    func_0x000106af4264();
    func_0x00010bf540a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf540a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(param_1,param_2,unaff_x22);
    func_0x000106af41d8();
    func_0x000106af4264();
    func_0x00010c1243c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000106af41a4();
  func_0x00010021648c();
  func_0x0001001f72a4();
  func_0x000100214ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106af4158; end: 106af4347; -[KSCrashReportFilterAppleFmt reportStyle] */

undefined4 FUN_106af4158(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106af4348; end: 106af4417; -[KSCrashReportFilterCombine initWithFiltersAndKeys:] */

undefined8 FUN_106af4348(void)

{
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x25;
  
  func_0x0001001b0f10();
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x00010bf09c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001b2730();
  while (unaff_x19 != 0) {
    func_0x0001001f7be4();
    func_0x0001001f7d68();
    func_0x0001001f7d80();
    unaff_x19 = unaff_x25;
  }
  func_0x0001001f7798();
  func_0x0001001f7dbc();
  func_0x0001001b2298();
  func_0x0001001b27d0();
  func_0x0001001b274c();
  return unaff_x21;
}



/* Entry: 106af4418; end: 106af44b3; -[KSCrashReportFilterPipeline initWithFilters:] */

undefined8 FUN_106af4418(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x24;
  
  func_0x0001001b2760();
  func_0x0001001b0fc0();
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001b0fcc();
  func_0x0001001b0fdc(FUN_106af44b4);
  func_0x0001001b0fec();
  func_0x0001001b2284();
  while (unaff_x19 != 0) {
    func_0x0001001f7760();
    func_0x0001001f7780();
    func_0x0001001f7798();
    unaff_x19 = unaff_x24;
  }
  func_0x0001001b2298();
  func_0x0001001b22a0();
  func_0x0001001b2754();
  func_0x00010c0132e0();
  func_0x0001001b2798();
  func_0x0001001b274c();
  return param_1;
}



/* Entry: 106af44b4; end: 106af44b7;  */

void FUN_106af44b4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106af44b8; end: 106af44f7; -[KSCrashReportFilterPipeline addFilter:] */

void FUN_106af44b8(void)

{
  undefined8 unaff_x20;
  
  func_0x0001001b2760();
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066b00();
  func_0x0001001b274c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 106af44f8; end: 106af4593; -[KSCrashReportFilterSubset initWithKeys:] */

undefined8 FUN_106af44f8(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x24;
  
  func_0x0001001b2760();
  func_0x0001001b0fc0();
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001b0fcc();
  func_0x0001001b0fdc(FUN_106af4594);
  func_0x0001001b0fec();
  func_0x0001001b2284();
  while (unaff_x19 != 0) {
    func_0x0001001f7760();
    func_0x0001001f7780();
    func_0x0001001f7798();
    unaff_x19 = unaff_x24;
  }
  func_0x0001001b2298();
  func_0x0001001b22a0();
  func_0x0001001b2754();
  func_0x00010c0210a0();
  func_0x0001001b2798();
  func_0x0001001b274c();
  return param_1;
}



/* Entry: 106af4594; end: 106af4597;  */

void FUN_106af4594(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 106af4598; end: 106af463b; -[KSCrashReportFilterSubset findObjFromReport:byKeyPath:] */

void FUN_106af4598(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001001f7abc();
  func_0x0001001b2714();
  func_0x0001001f7b98();
  lVar1 = unaff_x19;
  func_0x00010c0e00c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db2d78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001001b2298();
    lVar1 = unaff_x19;
  }
  func_0x0001001b27d0();
  func_0x0001001b274c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106af463c; end: 106af46df; -[KSCrashReportFilterSubset keyPaths] */

undefined8 FUN_106af463c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106af46e0; end: 106af4913;  */

void FUN_106af46e0(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_1;
  _objc_retain();
  func_0x000106af4f10();
  func_0x000106af4f10();
  func_0x000106af4ef4();
  lVar4 = lRam0000000000000000;
  puVar1 = PTR_s_intValue_1125f79c0;
  puVar2 = PTR_s_objectAtIndex__112615960;
  puVar3 = PTR_s_objectForKey__1126159e0;
  do {
    uVar6 = unaff_x20;
    PTR_s_intValue_1125f79c0 = puVar1;
    PTR_s_objectAtIndex__112615960 = puVar2;
    PTR_s_objectForKey__1126159e0 = puVar3;
    if (uVar5 == 0) {
LAB_106af48b0:
      func_0x000106af4ee4();
      _objc_retain(param_1);
      uVar5 = uVar6;
LAB_106af48cc:
      func_0x000106af4ee4();
      func_0x000106af4eec();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        func_0x000106af4f28();
        _objc_retain(uVar5);
        while ((uVar6 = uVar5, func_0x00010c08fa60(), uVar6 != 0 &&
               (uVar6 = uVar5, func_0x00010bf35920(), (int)uVar6 == 0x2f))) {
          func_0x00010c260c00();
          _objc_retainAutoreleasedReturnValue();
          func_0x000106af4f08();
        }
        func_0x00010bf44740(uVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_106af46e0(param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af4eec();
        func_0x000106af4f08();
        func_0x000106af4ee4();
        param_1 = param_2;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return;
    }
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_2);
      }
      uVar9 = *(ulong *)(uVar10 * 8);
      uVar6 = param_1;
      _objc_opt_respondsToSelector(param_1,puVar3);
      if ((uVar6 & 1) == 0) {
        uVar6 = param_1;
        _objc_opt_respondsToSelector(param_1,puVar2);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = uVar9, _objc_opt_respondsToSelector(uVar9,puVar1), (uVar6 & 1) == 0)) {
LAB_106af48c4:
          func_0x000106af4ee4();
          param_1 = 0;
          goto LAB_106af48cc;
        }
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar6 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar7);
        if ((uVar6 & 1) != 0) {
          _objc_retain(uVar9);
          uVar6 = uVar9;
          func_0x00010c08fa60();
          if (uVar6 == 0) {
            _objc_release(uVar9);
          }
          else {
            uVar6 = uVar9;
            func_0x00010bf35920();
            _objc_release(uVar9);
            if (9 < (int)uVar6 - 0x30U) goto LAB_106af48c4;
          }
        }
        func_0x00010c067ec0(uVar9);
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
      }
      unaff_x20 = param_1;
      func_0x000106af4eec();
      uVar6 = uVar5;
      if (param_1 == 0) goto LAB_106af48b0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
    func_0x000106af4ef4();
    uVar5 = unaff_x20;
    puVar1 = PTR_s_intValue_1125f79c0;
    puVar2 = PTR_s_objectAtIndex__112615960;
    puVar3 = PTR_s_objectForKey__1126159e0;
  } while( true );
}



/* Entry: 106af4914; end: 106af491b;  */

void FUN_106af4914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000106af4f28(param_1,param_3);
  _objc_retain();
  while ((lVar1 = unaff_x20, func_0x00010c08fa60(), lVar1 != 0 &&
         (lVar1 = unaff_x20, func_0x00010bf35920(), (int)lVar1 == 0x2f))) {
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4f08();
  }
  func_0x00010bf44740(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af46e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4eec();
  func_0x000106af4f08();
  func_0x000106af4ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106af491c; end: 106af49cf;  */

void FUN_106af491c(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x000106af4f28();
  _objc_retain();
  while ((lVar1 = unaff_x20, func_0x00010c08fa60(), lVar1 != 0 &&
         (lVar1 = unaff_x20, func_0x00010bf35920(), (int)lVar1 == 0x2f))) {
    func_0x00010c260c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4f08();
  }
  func_0x00010bf44740(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af46e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4eec();
  func_0x000106af4f08();
  func_0x000106af4ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 106af49d0; end: 106af49d3;  */

void FUN_106af49d0(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *unaff_x20;
  
  func_0x000106af4f20();
  _objc_retain();
  func_0x000106af4f10();
  func_0x000106af4f18();
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  if (param_3 == 0) {
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9aa60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    func_0x000106af4ee4();
    _objc_exception_throw(puVar3);
LAB_106af4b3c:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e714b8;
  }
  else {
    func_0x000106af4f18();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    FUN_106af4df8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector();
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c1d0560(unaff_x20);
LAB_106af4aa4:
      func_0x000106af4f34();
      _objc_release(param_4);
      func_0x000106af4ee4();
      func_0x000106af4eec();
      goto code_r0x00010bdbf3e4;
    }
    puVar3 = param_4;
    _objc_opt_respondsToSelector(param_4,PTR_s_intValue_1125f79c0);
    if (((ulong)puVar3 & 1) == 0) goto LAB_106af4b3c;
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector(unaff_x20,PTR_s_replaceObjectAtIndex_withObject__112629df0);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c067ec0(param_4);
      func_0x00010c130f40(unaff_x20);
      goto LAB_106af4aa4;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e71498;
  }
  func_0x000106af4f18();
  puVar3 = puVar3 + -1;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4ec4();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  _objc_retain(ppuVar2);
  _objc_retain(puVar1);
  func_0x00010bf44740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af49d4(puVar1,ppuVar2,puVar3);
  func_0x000106af4f08();
  func_0x000106af4eec();
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af49d4; end: 106af4baf;  */

void FUN_106af49d4(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *unaff_x20;
  
  func_0x000106af4f20();
  _objc_retain();
  func_0x000106af4f10();
  func_0x000106af4f18();
  puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
  if (param_2 == 0) {
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9aa60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    func_0x000106af4ee4();
    _objc_exception_throw(puVar3);
LAB_106af4b3c:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e714b8;
  }
  else {
    func_0x000106af4f18();
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    FUN_106af4df8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector();
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c1d0560(unaff_x20);
LAB_106af4aa4:
      func_0x000106af4f34();
      _objc_release(param_3);
      func_0x000106af4ee4();
      func_0x000106af4eec();
      goto code_r0x00010bdbf3e4;
    }
    puVar3 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_intValue_1125f79c0);
    if (((ulong)puVar3 & 1) == 0) goto LAB_106af4b3c;
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector(unaff_x20,PTR_s_replaceObjectAtIndex_withObject__112629df0);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c067ec0(param_3);
      func_0x00010c130f40(unaff_x20);
      goto LAB_106af4aa4;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110e71498;
  }
  func_0x000106af4f18();
  puVar3 = puVar3 + -1;
  func_0x00010c25e980();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106af4ec4();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  _objc_retain(ppuVar2);
  _objc_retain(puVar1);
  func_0x00010bf44740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af49d4(puVar1,ppuVar2,puVar3);
  func_0x000106af4f08();
  func_0x000106af4eec();
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af4bb0; end: 106af4bb3;  */

void FUN_106af4bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010bf44740(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af49d4(param_1,param_3,param_4);
  func_0x000106af4f08();
  func_0x000106af4eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106af4bb4; end: 106af4c27;  */

void FUN_106af4bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf44740(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af49d4(param_1,param_2,param_3);
  func_0x000106af4f08();
  func_0x000106af4eec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106af4c28; end: 106af4c2f;  */

void FUN_106af4c28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong unaff_x20;
  undefined **ppuVar4;
  
  func_0x000106af4f20();
  func_0x000106af4f10();
  func_0x000106af4f18();
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  FUN_106af4df8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = unaff_x20;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_intValue_1125f79c0);
    if ((uVar2 & 1) == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e71518;
    }
    else {
      uVar2 = unaff_x20;
      _objc_opt_respondsToSelector(unaff_x20,PTR_s_removeObjectAtIndex__112628f10);
      if ((uVar2 & 1) != 0) {
        func_0x00010c067ec0(param_3);
        func_0x00010c12d3c0(unaff_x20);
        goto LAB_106af4ce0;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110e714f8;
    }
    func_0x000106af4f18();
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    ppuVar3 = ppuVar4;
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4ec4();
    func_0x00010bf9aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    func_0x000106af4f20();
    func_0x00010bf44740(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106af4c30(ppuVar4,ppuVar3);
    func_0x000106af4f08();
  }
  else {
    func_0x00010c12d3e0(unaff_x20);
LAB_106af4ce0:
    func_0x000106af4eec();
    func_0x000106af4f34();
    func_0x000106af4ee4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af4c30; end: 106af4d77;  */

void FUN_106af4c30(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong unaff_x20;
  undefined **ppuVar4;
  
  func_0x000106af4f20();
  func_0x000106af4f10();
  func_0x000106af4f18();
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  FUN_106af4df8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = unaff_x20;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    _objc_opt_respondsToSelector(param_2,PTR_s_intValue_1125f79c0);
    if ((uVar2 & 1) == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e71518;
    }
    else {
      uVar2 = unaff_x20;
      _objc_opt_respondsToSelector(unaff_x20,PTR_s_removeObjectAtIndex__112628f10);
      if ((uVar2 & 1) != 0) {
        func_0x00010c067ec0(param_2);
        func_0x00010c12d3c0(unaff_x20);
        goto LAB_106af4ce0;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_110e714f8;
    }
    func_0x000106af4f18();
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class();
    ppuVar3 = ppuVar4;
    func_0x00010c25d9e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106af4ec4();
    func_0x00010bf9aa60();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    func_0x000106af4f20();
    func_0x00010bf44740(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106af4c30(ppuVar4,ppuVar3);
    func_0x000106af4f08();
  }
  else {
    func_0x00010c12d3e0(unaff_x20);
LAB_106af4ce0:
    func_0x000106af4eec();
    func_0x000106af4f34();
    func_0x000106af4ee4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af4d78; end: 106af4d7f;  */

void FUN_106af4d78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000106af4f20();
  func_0x00010bf44740(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af4c30();
  func_0x000106af4f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106af4d80; end: 106af4dcf;  */

void FUN_106af4d80(undefined8 param_1,undefined8 param_2)

{
  func_0x000106af4f20();
  func_0x00010bf44740(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_106af4c30();
  func_0x000106af4f08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106af4dd0; end: 106af4df7;  */

void FUN_106af4dd0(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_1;
  _objc_retain();
  func_0x000106af4f10();
  func_0x000106af4f10();
  func_0x000106af4ef4();
  lVar4 = lRam0000000000000000;
  puVar1 = PTR_s_intValue_1125f79c0;
  puVar2 = PTR_s_objectAtIndex__112615960;
  puVar3 = PTR_s_objectForKey__1126159e0;
  do {
    uVar6 = unaff_x20;
    PTR_s_intValue_1125f79c0 = puVar1;
    PTR_s_objectAtIndex__112615960 = puVar2;
    PTR_s_objectForKey__1126159e0 = puVar3;
    if (uVar5 == 0) {
LAB_106af48b0:
      func_0x000106af4ee4();
      _objc_retain(param_1);
      uVar5 = uVar6;
LAB_106af48cc:
      func_0x000106af4ee4();
      func_0x000106af4eec();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
        ___stack_chk_fail();
        func_0x000106af4f28();
        _objc_retain(uVar5);
        while ((uVar6 = uVar5, func_0x00010c08fa60(), uVar6 != 0 &&
               (uVar6 = uVar5, func_0x00010bf35920(), (int)uVar6 == 0x2f))) {
          func_0x00010c260c00();
          _objc_retainAutoreleasedReturnValue();
          func_0x000106af4f08();
        }
        func_0x00010bf44740(uVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_106af46e0(param_3,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x000106af4eec();
        func_0x000106af4f08();
        func_0x000106af4ee4();
        param_1 = param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
      return;
    }
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_3);
      }
      uVar9 = *(ulong *)(uVar10 * 8);
      uVar6 = param_1;
      _objc_opt_respondsToSelector(param_1,puVar3);
      if ((uVar6 & 1) == 0) {
        uVar6 = param_1;
        _objc_opt_respondsToSelector(param_1,puVar2);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = uVar9, _objc_opt_respondsToSelector(uVar9,puVar1), (uVar6 & 1) == 0)) {
LAB_106af48c4:
          func_0x000106af4ee4();
          param_1 = 0;
          goto LAB_106af48cc;
        }
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        uVar6 = uVar9;
        _objc_opt_isKindOfClass(uVar9,puVar7);
        if ((uVar6 & 1) != 0) {
          _objc_retain(uVar9);
          uVar6 = uVar9;
          func_0x00010c08fa60();
          if (uVar6 == 0) {
            _objc_release(uVar9);
          }
          else {
            uVar6 = uVar9;
            func_0x00010bf35920();
            _objc_release(uVar9);
            if (9 < (int)uVar6 - 0x30U) goto LAB_106af48c4;
          }
        }
        func_0x00010c067ec0(uVar9);
        func_0x00010c0dfd20();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
      }
      unaff_x20 = param_1;
      func_0x000106af4eec();
      uVar6 = uVar5;
      if (param_1 == 0) goto LAB_106af48b0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
    func_0x000106af4ef4();
    uVar5 = unaff_x20;
    puVar1 = PTR_s_intValue_1125f79c0;
    puVar2 = PTR_s_objectAtIndex__112615960;
    puVar3 = PTR_s_objectForKey__1126159e0;
  } while( true );
}



/* Entry: 106af4df8; end: 106af4ec3;  */

/* WARNING: Possible PIC construction at 0x000106af4eac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106af4eb0) */

undefined * FUN_106af4df8(void)

{
  undefined *unaff_x19;
  long unaff_x20;
  
  func_0x000106af4f28();
  _objc_retain();
  func_0x00010bf529e0();
  if (unaff_x20 == 1) {
    func_0x000106af4f10();
  }
  else {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    FUN_106af46e0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x19 == (undefined *)0x0) {
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      return PTR__OBJC_CLASS___NSException_1126af520;
    }
    func_0x000106af4f34();
  }
  func_0x000106af4f08();
  func_0x000106af4ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return unaff_x19;
}



/* Entry: 106af4ec4; end: 106af4f53;  */

undefined * FUN_106af4ec4(void)

{
  return PTR__OBJC_CLASS___NSException_1126af520;
}



/* Entry: 106af4f54; end: 106af4fb3; -[KSCrashReportSinkSnapAir filterReports:onCompletion:] */

void FUN_106af4f54(void)

{
  long unaff_x20;
  
  func_0x0001001b5fb0();
  func_0x0001001b6048();
  func_0x00010c115260();
  if (unaff_x20 != 0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  func_0x0001001b6058();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 106af4fb4; end: 106af4fbb;  */

long * FUN_106af4fb4(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  uint uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long alStack_43c [62];
  undefined8 uStack_248;
  
  func_0x0001001c8ec4();
  FUN_106aea5a8();
  func_0x000106aea7d8();
  func_0x0001001c97d0(extraout_x8);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x0001001c8ec4();
  plVar1 = alStack_43c;
  uStack_248 = extraout_x8_00;
  FUN_106aea6b0();
  func_0x000106aea7d8();
  func_0x0001001c97d0(uStack_248);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar2 = (uint)(*plVar1 < *param_2);
  if (*param_2 < *plVar1) {
    uVar2 = 0xffffffff;
  }
  return (long *)(ulong)uVar2;
}



/* Entry: 106af4fbc; end: 106af4fff;  */

void FUN_106af4fbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c278040(*(undefined8 *)(lVar1 + 0x10));
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106af5000; end: 106af500b;  */

void FUN_106af5000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(&stack0x00000038);
  return;
}



/* Entry: 106af500c; end: 106af506b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_106af500c(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 extraout_x8;
  long alStack_21c [61];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112757dd8);
  func_0x00010bdc3520(uVar1);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112757dd4);
  func_0x00010bdc3520(uVar2);
  func_0x0001001c8ec4(param_2,uVar1,uVar1,uVar2);
  plVar3 = alStack_21c;
  FUN_106aea6b0();
  func_0x000106aea7d8();
  func_0x0001001c97d0(extraout_x8);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar4 = (uint)(*plVar3 < *param_2);
  if (*param_2 < *plVar3) {
    uVar4 = 0xffffffff;
  }
  return (long *)(ulong)uVar4;
}


