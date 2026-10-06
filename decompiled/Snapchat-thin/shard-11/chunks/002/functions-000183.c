/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10837dfc8; end: 10837e03f;  */

void FUN_10837dfc8(long param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (0 < param_3) {
    FUN_10837ed2c(param_1 + 0x28,*(int *)(param_1 + 0x30) + param_3);
  }
  if (0 < param_2) {
    func_0x00010837ed44(param_1 + 0x40,*(int *)(param_1 + 0x48) + param_2);
  }
  if (param_4 < 1) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x58);
  param_4 = *(int *)(param_1 + 0x60) + param_4;
  uVar2 = param_4 - *(int *)(param_1 + 0x60);
  uVar4 = (ulong)uVar2;
  if (uVar2 == 0 || param_4 < *(int *)(param_1 + 0x60)) {
    return;
  }
  if ((int)((*(uint *)(param_1 + 100) >> 1) - *(int *)(param_1 + 0x60)) < (int)uVar2) {
    plVar3 = plVar1;
    FUN_108184cb0(0x3ff8000000000000);
    if (*(int *)(param_1 + 0x60) != 0) {
      _memcpy(plVar3,*plVar1,(long)*(int *)(param_1 + 0x60) << 2);
    }
    if ((*(byte *)(param_1 + 100) & 1) != 0) {
      func_0x000108185818();
    }
    uVar4 = uVar4 >> 2;
    if (0x7ffffffe < uVar4) {
      uVar4 = 0x7fffffff;
    }
    *plVar1 = (long)plVar3;
    *(uint *)(param_1 + 100) = (int)uVar4 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 10837e040; end: 10837e0e7;  */

void FUN_10837e040(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_10837e5c4(param_1,*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x30),
                *(undefined4 *)(param_2 + 0x60),param_3,param_4,param_5);
  FUN_10837ee14(param_1 + 0x40,param_2 + 0x40);
  FUN_10837ef08(param_1 + 0x28,param_2 + 0x28);
  func_0x00010837ee58(param_1 + 0x58,param_2 + 0x58);
  cVar1 = *(char *)(param_2 + 0xc1);
  *(char *)(param_1 + 0xc1) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined1 *)(param_1 + 0xc5) = *(undefined1 *)(param_2 + 0xc5);
  }
  *(undefined2 *)(param_1 + 0xc2) = *(undefined2 *)(param_2 + 0xc2);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc6) = *(undefined1 *)(param_2 + 0xc6);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  return;
}



/* Entry: 10837e0e8; end: 10837e113;  */

long FUN_10837e0e8(long param_1)

{
  return ((ulong)*(uint *)(param_1 + 0x34) & 0xfffffffe) * 4 +
         (ulong)(*(uint *)(param_1 + 0x4c) >> 1) +
         ((ulong)*(uint *)(param_1 + 100) & 0xfffffffe) * 2 + 200;
}



/* Entry: 10837e114; end: 10837e14f;  */

long FUN_10837e114(long param_1)

{
  FUN_108355184(param_1 + 0x90);
  FUN_1081842d4(param_1 + 0x58);
  FUN_1082f398c(param_1 + 0x40);
  FUN_1082e7088(param_1 + 0x28);
  return param_1;
}



/* Entry: 10837e150; end: 10837e1fb;  */

void FUN_10837e150(void)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char cStack_31;
  
  cStack_31 = cRam0000000113827058;
  if (cRam0000000113827058 == '\0') {
    piVar3 = (int *)0x113827058;
    FUN_10825bc50(0x113827058,&cStack_31,1,0,0);
    if ((int)piVar3 != 0) {
      func_0x00010837efa0();
      func_0x00010837ef50();
      piRam0000000113827060 = piVar3;
      func_0x0001082d8764(piVar3);
      cRam0000000113827058 = '\x02';
      piVar3 = piRam0000000113827060;
      goto LAB_10837e1e4;
    }
  }
  do {
    piVar3 = piRam0000000113827060;
  } while (cRam0000000113827058 != '\x02');
LAB_10837e1e4:
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar2) {
      *piVar3 = *piVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 10837e1fc; end: 10837e513;  */

void FUN_10837e1fc(long *param_1,int *param_2,float *param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  pfVar5 = param_3;
  func_0x0001081420b8();
  if ((int)pfVar5 != 0) {
    if ((int *)*param_1 == param_2) {
      return;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = *param_2 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    piVar7 = (int *)*param_1;
    *param_1 = (long)param_2;
    if (piVar7 == (int *)0x0) {
      return;
    }
    goto LAB_10837ca70;
  }
  if (*(int *)*param_1 == 1) {
    piVar7 = (int *)0x0;
  }
  else {
    if ((int *)*param_1 == param_2) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
        if (bVar3) {
          *param_2 = *param_2 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        piVar7 = param_2;
      } while (cVar2 != '\0');
    }
    else {
      piVar7 = (int *)0x0;
    }
    func_0x00010837efa0();
    func_0x00010837ef50();
    FUN_108376bdc(param_1,pfVar5);
  }
  piVar8 = (int *)*param_1;
  if (piVar8 != param_2) {
    FUN_10837ee14(piVar8 + 0x10,param_2 + 0x10);
    func_0x00010837ee58(*param_1 + 0x58,param_2 + 0x16);
    func_0x00010837ef98(*param_1);
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x88) = 0;
    func_0x0001083190bc(lVar9 + 0x28,param_2[0xc]);
    piVar8 = (int *)*param_1;
  }
  FUN_1083645e0(param_3,*(undefined8 *)(piVar8 + 10),*(undefined8 *)(param_2 + 10),param_2[0xc]);
  if (*(char *)((long)param_2 + 0xc1) == '\0') {
    pfVar5 = param_3;
    FUN_10827a0d8();
    iVar4 = 0;
    if (1 < param_2[0xc]) {
      iVar4 = (int)pfVar5;
    }
    if (iVar4 != 1) goto LAB_10837e378;
    lVar9 = *param_1;
    *(undefined1 *)(lVar9 + 0xc1) = 0;
    if (*(char *)((long)param_2 + 0xc5) == '\x01') {
      FUN_108364f90(param_3,lVar9 + 0x68,param_2 + 0x1a,1);
      uVar6 = *param_1 + 0x68;
      FUN_1082ffd68();
      lVar9 = *param_1;
      *(char *)(lVar9 + 0xc5) = (char)uVar6;
      if ((uVar6 & 1) == 0) goto LAB_10837e4dc;
    }
    else {
      *(undefined1 *)(lVar9 + 0xc5) = 0;
LAB_10837e4dc:
      *(undefined8 *)(lVar9 + 0x68) = 0;
      *(undefined8 *)(lVar9 + 0x70) = 0;
    }
  }
  else {
LAB_10837e378:
    *(undefined1 *)(*param_1 + 0xc1) = 1;
  }
  *(undefined1 *)(*param_1 + 0xc3) = *(undefined1 *)((long)param_2 + 0xc3);
  pfVar5 = param_3;
  FUN_10827a0d8();
  cVar2 = '\0';
  if ((char)param_2[0x30] != '\x03') {
    cVar2 = (char)param_2[0x30];
  }
  if ((int)pfVar5 == 0) {
    cVar2 = '\0';
  }
  piVar8 = (int *)*param_1;
  *(char *)(piVar8 + 0x30) = cVar2;
  if ((byte)(cVar2 - 1U) < 2) {
    bVar1 = *(byte *)((long)param_2 + 0xc2);
    bVar10 = bVar1 >> 1;
    if (cVar2 != '\x02') {
      bVar10 = bVar1;
    }
    fVar14 = *param_3;
    bVar3 = fVar14 == 0.0;
    if (bVar3) {
      fVar14 = param_3[1];
      fVar15 = param_3[3];
    }
    else {
      fVar15 = param_3[4];
    }
    uVar12 = (uint)bVar3;
    uVar13 = 2;
    bVar3 = fVar15 <= 0.0;
    if (0.0 < fVar14) {
      uVar13 = 0;
      bVar3 = 0.0 < fVar15;
    }
    bVar11 = *(byte *)((long)param_2 + 0xc6);
    if (uVar12 == bVar3) {
      bVar11 = bVar11 ^ 1;
      iVar4 = (uVar12 - bVar10) + uVar13 + 6;
      bVar10 = (char)iVar4 + (char)(iVar4 / 4) * -4;
      if (cVar2 == '\x02') {
        bVar10 = (bVar1 & 1 | bVar10 * '\x02') ^ 1;
      }
    }
    else {
      uVar13 = (uint)bVar10 - (uVar12 | uVar13) & 3;
      bVar10 = (byte)uVar13;
      if (cVar2 == '\x02') {
        bVar10 = bVar1 & 1 | (byte)(uVar13 << 1);
      }
    }
    *(byte *)((long)piVar8 + 0xc6) = bVar11;
    *(byte *)((long)piVar8 + 0xc2) = bVar10;
  }
  if (piVar8 == param_2) {
    func_0x00010837ef98();
    *(undefined4 *)(*param_1 + 0x88) = 0;
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
LAB_10837ca70:
  do {
    iVar4 = *piVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar3) {
      *piVar7 = iVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 + -1 != 0) {
    return;
  }
  if (piVar7 != (int *)0x0) {
    FUN_10837e114();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10837e514; end: 10837e5c3;  */

long * FUN_10837e514(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  
  if (*(int *)*param_1 == 1) {
    plVar8 = param_1;
    func_0x00010837ef98();
    lVar10 = *param_1;
    *(undefined4 *)(lVar10 + 0x88) = 0;
    *(undefined4 *)(lVar10 + 0x30) = 0;
    *(undefined4 *)(lVar10 + 0x48) = 0;
    *(undefined4 *)(lVar10 + 0x60) = 0;
    *(undefined1 *)(lVar10 + 0xc3) = 0;
    *(undefined2 *)(lVar10 + 0xc0) = 0x100;
    return plVar8;
  }
  uVar3 = *(undefined4 *)(*param_1 + 0x48);
  uVar4 = *(undefined4 *)(*param_1 + 0x30);
  plVar8 = param_1;
  func_0x00010837efa0();
  func_0x00010837ef50();
  FUN_108376bdc(param_1,plVar8);
  lVar10 = *param_1;
  func_0x00010837ecfc();
  FUN_10837c5b4(lVar10 + 0x28,uVar4);
  func_0x0001083190bc(lVar10 + 0x28,0);
  func_0x00010837c5cc(lVar10 + 0x40,uVar3);
  FUN_10837ed74(lVar10 + 0x40,0);
  FUN_1081a0f10(lVar10 + 0x58,0);
  plVar8 = (long *)(lVar10 + 0x58);
  iVar9 = *(int *)(lVar10 + 0x60);
  if (iVar9 < 0) {
    if (iVar9 == 0) {
      func_0x000108184bc8(0x3ff0000000000000,plVar8,0);
      iVar9 = *(int *)(lVar10 + 0x60);
    }
    func_0x000108184bc8(0x3ff8000000000000);
    iVar5 = *(int *)(lVar10 + 0x60);
    *(int *)(lVar10 + 0x60) = iVar5 - iVar9;
    return (long *)(*plVar8 + (long)iVar5 * 4);
  }
  if (iVar9 < 1) {
    return plVar8;
  }
  uVar2 = *(uint *)(lVar10 + 0x60);
  uVar6 = uVar2 - iVar9;
  uVar1 = uVar2;
  if ((int)uVar6 <= (int)uVar2) {
    uVar1 = uVar6;
  }
  if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
    *(uint *)(lVar10 + 0x60) = uVar6;
    return plVar8;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x108184c40);
  (*pcVar7)();
}



/* Entry: 10837e5c4; end: 10837e657;  */

long * FUN_10837e5c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    int param_5,int param_6,int param_7)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  
  func_0x00010837ecfc();
  FUN_10837c5b4(param_1 + 0x28,param_6 + (int)param_3);
  func_0x0001083190bc(param_1 + 0x28,param_3);
  func_0x00010837c5cc(param_1 + 0x40,param_5 + (int)param_2);
  FUN_10837ed74(param_1 + 0x40,param_2);
  iVar8 = (int)param_4;
  FUN_1081a0f10(param_1 + 0x58,param_7 + iVar8);
  plVar1 = (long *)(param_1 + 0x58);
  iVar7 = *(int *)(param_1 + 0x60);
  if (iVar7 < iVar8) {
    if (iVar7 == 0) {
      func_0x000108184bc8(0x3ff0000000000000,plVar1,param_4);
      iVar7 = *(int *)(param_1 + 0x60);
    }
    func_0x000108184bc8(0x3ff8000000000000);
    iVar4 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar4 + (iVar8 - iVar7);
    return (long *)(*plVar1 + (long)iVar4 * 4);
  }
  if (iVar7 - iVar8 != 0 && iVar8 <= iVar7) {
    uVar3 = *(uint *)(param_1 + 0x60);
    uVar5 = uVar3 - (iVar7 - iVar8);
    uVar2 = uVar3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar2 = uVar5;
    }
    if (uVar3 - uVar2 <= (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) {
      *(uint *)(param_1 + 0x60) = uVar5;
      return plVar1;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x108184c40);
    (*pcVar6)();
  }
  return plVar1;
}



/* Entry: 10837e658; end: 10837e6e3;  */

uint FUN_10837e658(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0xc3) != *(char *)(param_2 + 0xc3)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x88) == 0 || *(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88)) {
    uVar2 = param_1 + 0x28;
    FUN_10837e6e4(uVar2,param_2 + 0x28);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1 + 0x58;
      func_0x00010837e6fc(uVar2,param_2 + 0x58);
      if ((uVar2 & 1) == 0) {
        param_1 = param_1 + 0x40;
        func_0x00010837e714(param_1,param_2 + 0x40);
        return (uint)param_1 ^ 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10837e6e4; end: 10837e72b;  */

uint FUN_10837e6e4(uint param_1)

{
  FUN_10837eea0();
  return param_1 ^ 1;
}



/* Entry: 10837e72c; end: 10837e7c7;  */

undefined1  [16] FUN_10837e72c(long param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc3) | *(byte *)(param_2 + 0xc3);
  *(undefined2 *)(param_1 + 0xc0) = 0x100;
  if (*(int *)(param_2 + 0x48) != 0) {
    func_0x00010837db54(param_1 + 0x40,(long)*(int *)(param_2 + 0x48));
    _memcpy();
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x28;
    FUN_1082d3644(lVar1);
  }
  if (*(int *)(param_2 + 0x60) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x58;
    FUN_108184cd4(param_1);
  }
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10837e7c8; end: 10837e8b3;  */

long FUN_10837e7c8(long param_1,int param_2,ulong param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  
  uVar4 = param_3;
  switch(param_2) {
  case 0:
    break;
  case 1:
    *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc3) | 1;
    break;
  case 2:
    bVar3 = *(byte *)(param_1 + 0xc3) | 2;
    goto code_r0x00010837e850;
  case 3:
    bVar3 = *(byte *)(param_1 + 0xc3) | 4;
code_r0x00010837e850:
    *(byte *)(param_1 + 0xc3) = bVar3;
    uVar4 = (ulong)(uint)((int)param_3 << 1);
    break;
  case 4:
    *(byte *)(param_1 + 0xc3) = *(byte *)(param_1 + 0xc3) | 8;
    uVar4 = (ulong)(uint)((int)param_3 * 3);
    break;
  default:
    uVar4 = 0;
  }
  *(undefined2 *)(param_1 + 0xc0) = 0x100;
  func_0x00010837db54(param_1 + 0x40,param_3);
  _memset();
  if (param_2 == 3) {
    lVar2 = param_1 + 0x58;
    FUN_108184cd4(lVar2,param_3);
    *param_4 = lVar2;
  }
  func_0x0001082d3680(0x3ff8000000000000);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + (int)uVar4;
  return *(long *)(param_1 + 0x28) + (long)iVar1 * 8;
}



/* Entry: 10837e8b4; end: 10837e953;  */

void FUN_10837e8b4(undefined4 param_1,long param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uStack_35;
  undefined4 uStack_34;
  
  if (param_3 < 5) {
    bVar1 = (byte)(0x804020100 >> ((ulong)(param_3 << 3) & 0x3f));
    uVar2 = *(undefined4 *)(&UNK_10df1df88 + (ulong)param_3 * 4);
  }
  else {
    bVar1 = 0;
    uVar2 = 0;
  }
  *(byte *)(param_2 + 0xc3) = *(byte *)(param_2 + 0xc3) | bVar1;
  *(undefined2 *)(param_2 + 0xc0) = 0x100;
  uStack_35 = (undefined1)param_3;
  uStack_34 = param_1;
  func_0x00010837d328(param_2 + 0x40,&uStack_35);
  if (param_3 == 3) {
    func_0x00010819b270(param_2 + 0x58,&uStack_34);
  }
  FUN_1082d3644(param_2 + 0x28,uVar2);
  return;
}



/* Entry: 10837e954; end: 10837e99f;  */

uint FUN_10837e954(long param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x88);
  if (uVar3 == 0) {
    if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
      uVar3 = 1;
    }
    else {
      do {
        uVar3 = uRam0000000113255ee8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x113255ee8,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          uRam0000000113255ee8 = uRam0000000113255ee8 + 1;
        }
      } while (cVar1 != '\0' || uVar3 < 2);
    }
    *(uint *)(param_1 + 0x88) = uVar3;
  }
  return uVar3;
}



/* Entry: 10837e9a0; end: 10837e9ff;  */

void FUN_10837e9a0(long param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  if (param_1 != lRam0000000113827060) {
    uStack_28 = *param_2;
    *param_2 = 0;
    FUN_1083551f8(param_1 + 0x90,&uStack_28);
    FUN_1082b91e4(&uStack_28);
  }
  return;
}



/* Entry: 10837ea00; end: 10837eb2b;  */

long * FUN_10837ea00(long *param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_c0 [32];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_80 [10];
  long lStack_58;
  
  puVar7 = auStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar6 = param_2;
  FUN_1082d8734();
  afStack_80[2] = 0.0;
  afStack_80[3] = 0.0;
  afStack_80[0] = 0.0;
  afStack_80[1] = 0.0;
  afStack_80[6] = 0.0;
  afStack_80[7] = 0.0;
  afStack_80[4] = 0.0;
  afStack_80[5] = 0.0;
  FUN_10837ec80(auStack_c0,param_2);
  func_0x00010837efb8();
  fVar12 = *pfVar6;
  fVar13 = pfVar6[1];
  do {
    while( true ) {
      func_0x00010837efb8();
      if ((int)puVar7 != 3) break;
      fVar11 = fStack_94 - fStack_9c;
      if (fStack_94 - fStack_9c == 0.0) {
        fVar11 = fStack_8c - fStack_94;
      }
      fVar4 = fStack_98 - fStack_a0;
      fVar5 = fStack_8c - fStack_94;
      if (fStack_98 - fStack_a0 == 0.0) {
        fVar4 = fStack_90 - fStack_98;
        fVar5 = fVar11;
      }
      lVar1 = 0;
      if (fStack_94 != fVar13) {
        lVar1 = 3;
      }
      lVar2 = 2;
      if (fStack_94 == fVar13) {
        lVar2 = 1;
      }
      if (fStack_98 != fVar12) {
        lVar1 = lVar2;
      }
      afStack_80[lVar1 * 2] = ABS(fVar4);
      afStack_80[lVar1 * 2 + 1] = ABS(fVar5);
    }
  } while ((int)puVar7 != 6);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_108384f00(param_1,pfVar6,afStack_80);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pbVar3 = (byte *)param_1[1];
    if (pbVar3 == (byte *)param_1[2]) {
      plVar8 = (long *)0x6;
    }
    else {
      param_1[1] = (long)(pbVar3 + 1);
      plVar8 = (long *)(ulong)*pbVar3;
      puVar9 = (undefined8 *)*param_1;
      puVar10 = puVar9;
      switch(plVar8) {
      case (long *)0x0:
        puVar10 = puVar9 + 1;
        *(undefined8 *)pfVar6 = *puVar9;
        break;
      case (long *)0x1:
        *(undefined8 *)pfVar6 = puVar9[-1];
        puVar10 = puVar9 + 1;
        *(undefined8 *)(pfVar6 + 2) = *puVar9;
        break;
      case (long *)0x3:
        param_1[3] = param_1[3] + 4;
      case (long *)0x2:
        *(undefined8 *)pfVar6 = puVar9[-1];
        *(undefined8 *)(pfVar6 + 2) = *puVar9;
        *(undefined8 *)(pfVar6 + 4) = puVar9[1];
        puVar10 = puVar9 + 2;
        break;
      case (long *)0x4:
        *(undefined8 *)pfVar6 = puVar9[-1];
        *(undefined8 *)(pfVar6 + 2) = *puVar9;
        *(undefined8 *)(pfVar6 + 4) = puVar9[1];
        *(undefined8 *)(pfVar6 + 6) = puVar9[2];
        puVar10 = puVar9 + 3;
      }
      *param_1 = (long)puVar10;
    }
    return plVar8;
  }
  return param_1;
}



/* Entry: 10837eb2c; end: 10837ebeb;  */

undefined1 FUN_10837eb2c(long *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 == (undefined1 *)param_1[2]) {
    uVar2 = 6;
  }
  else {
    param_1[1] = (long)(puVar1 + 1);
    uVar2 = *puVar1;
    puVar3 = (undefined8 *)*param_1;
    puVar4 = puVar3;
    switch(uVar2) {
    case 0:
      puVar4 = puVar3 + 1;
      *param_2 = *puVar3;
      break;
    case 1:
      *param_2 = puVar3[-1];
      puVar4 = puVar3 + 1;
      param_2[1] = *puVar3;
      break;
    case 3:
      param_1[3] = param_1[3] + 4;
    case 2:
      *param_2 = puVar3[-1];
      param_2[1] = *puVar3;
      param_2[2] = puVar3[1];
      puVar4 = puVar3 + 2;
      break;
    case 4:
      *param_2 = puVar3[-1];
      param_2[1] = *puVar3;
      param_2[2] = puVar3[1];
      param_2[3] = puVar3[2];
      puVar4 = puVar3 + 3;
    }
    *param_1 = (long)puVar4;
  }
  return uVar2;
}



/* Entry: 10837ebec; end: 10837ec7f;  */

bool FUN_10837ebec(long param_1,undefined8 *param_2,undefined1 *param_3,uint *param_4)

{
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  if (*(char *)(param_1 + 0xc0) == '\x02') {
    if (param_2 != (undefined8 *)0x0) {
      FUN_10837ea00(&uStack_64,param_1);
      param_2[1] = uStack_5c;
      *param_2 = uStack_64;
      param_2[3] = uStack_4c;
      param_2[2] = uStack_54;
      param_2[5] = uStack_3c;
      param_2[4] = uStack_44;
      *(undefined4 *)(param_2 + 6) = uStack_34;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *(undefined1 *)(param_1 + 0xc6);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(byte *)(param_1 + 0xc2);
    }
  }
  return *(char *)(param_1 + 0xc0) == '\x02';
}



/* Entry: 10837ec80; end: 10837ed2b;  */

void FUN_10837ec80(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x40);
  *param_1 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = lVar2;
  lVar1 = 0;
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar1 = *(long *)(param_2 + 0x58) + -4;
  }
  param_1[2] = lVar2 + *(int *)(param_2 + 0x48);
  param_1[3] = lVar1;
  FUN_1083773a0();
  if ((param_2 & 1) == 0) {
    param_1[2] = param_1[1];
  }
  return;
}



/* Entry: 10837ed2c; end: 10837ed73;  */

void FUN_10837ed2c(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar1 = param_2 - (int)param_1[1];
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0 || param_2 < (int)param_1[1]) {
    return;
  }
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - (int)param_1[1]) < (int)uVar1) {
    plVar2 = param_1;
    FUN_1082d3740(0x3ff8000000000000);
    if ((int)param_1[1] != 0) {
      _memcpy(plVar2,*param_1,(long)(int)param_1[1] << 3);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    uVar3 = uVar3 >> 3;
    if (0x7ffffffe < uVar3) {
      uVar3 = 0x7fffffff;
    }
    *param_1 = (long)plVar2;
    *(uint *)((long)param_1 + 0xc) = (int)uVar3 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 10837ed74; end: 10837eddb;  */

long * FUN_10837ed74(long *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  iVar6 = (int)param_2;
  if (iVar7 < iVar6) {
    if (iVar7 == 0) {
      FUN_1082f3898(0x3ff0000000000000,param_1,param_2);
      iVar7 = (int)param_1[1];
    }
    FUN_1082f3898(0x3ff8000000000000);
    lVar4 = param_1[1];
    *(int *)(param_1 + 1) = (int)lVar4 + (iVar6 - iVar7);
    return (long *)(*param_1 + (long)(int)lVar4);
  }
  if (iVar7 - iVar6 != 0 && iVar6 <= iVar7) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar3 = uVar2 - (iVar7 - iVar6);
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
      *(uint *)(param_1 + 1) = uVar3;
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10837ee08);
    (*pcVar5)();
  }
  return param_1;
}



/* Entry: 10837eddc; end: 10837ee13;  */

void FUN_10837eddc(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = uVar2 - param_2;
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  if (uVar2 - uVar1 <= (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
    *(uint *)(param_1 + 8) = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10837ee08);
  (*pcVar4)();
}



/* Entry: 10837ee14; end: 10837ee9f;  */

long FUN_10837ee14(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  
  if (param_1 != param_2) {
    func_0x00010837ef60();
    FUN_1082f3898();
    lVar1 = unaff_x20[1];
    *(int *)(param_1 + 8) = (int)lVar1;
    if (((int)lVar1 != 0) && (*unaff_x20 != 0)) {
      func_0x00010837efb0();
    }
  }
  return param_1;
}



/* Entry: 10837eea0; end: 10837ef07;  */

undefined1 FUN_10837eea0(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == *(uint *)(param_2 + 1)) {
    lVar3 = 0;
    do {
      if ((ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 8 + 8 == lVar3 + 8) {
        return 1;
      }
      fVar4 = ((float *)(*param_1 + lVar3))[1];
      fVar5 = ((float *)(*param_2 + lVar3))[1];
      bVar2 = false;
      if ((*(float *)(*param_1 + lVar3) == *(float *)(*param_2 + lVar3)) &&
         (bVar2 = false, !NAN(fVar4) && !NAN(fVar5))) {
        bVar2 = fVar4 == fVar5;
      }
      lVar3 = lVar3 + 8;
    } while (bVar2);
  }
  return 0;
}



/* Entry: 10837ef08; end: 10837ef4f;  */

long FUN_10837ef08(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  
  if (param_1 != param_2) {
    func_0x00010837ef60();
    func_0x0001082d3680();
    lVar1 = unaff_x20[1];
    *(int *)(param_1 + 8) = (int)lVar1;
    if (((int)lVar1 != 0) && (*unaff_x20 != 0)) {
      func_0x00010837efb0();
    }
  }
  return param_1;
}



/* Entry: 10837ef50; end: 10837efdb;  */

/* WARNING: Removing unreachable block (ram,0x00010837c55c) */
/* WARNING: Removing unreachable block (ram,0x00010837c54c) */
/* WARNING: Removing unreachable block (ram,0x00010837c570) */

undefined4 * FUN_10837ef50(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined4 **)(param_1 + 10) = param_1 + 2;
  *(undefined8 *)(param_1 + 0xc) = 0x800000000;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 0xe;
  *(undefined8 *)(param_1 + 0x12) = 0x1000000000;
  *(undefined4 **)(param_1 + 0x16) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x18) = 0x400000000;
  param_1[0x24] = 1;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined4 **)(param_1 + 0x2a) = param_1 + 0x28;
  *(undefined8 *)(param_1 + 0x2c) = 0x200000000;
  param_1[0x22] = 1;
  *(undefined1 *)((long)param_1 + 0xc6) = 0;
  param_1[0x30] = 0xac0100;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  return param_1;
}



/* Entry: 10837efdc; end: 10837f037;  */

void FUN_10837efdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [40];
  
  func_0x00010815f6c0(auStack_58,param_1,param_1);
  FUN_10837f038(param_2,param_3,param_4,param_5,auStack_58);
  return;
}



/* Entry: 10837f038; end: 10837f15f;  */

uint FUN_10837f038(undefined1 *param_1,long *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  
  puVar1 = param_1;
  func_0x000108377398();
  if (((ulong)puVar1 & 1) == 0) {
    FUN_108376d4c(param_3);
    uVar4 = 0;
  }
  else {
    FUN_108365bb4(param_5);
    FUN_1083a6264(auStack_50,param_2);
    FUN_108376ad8(auStack_60);
    lVar2 = *param_2;
    puVar5 = (undefined8 *)param_1;
    if ((lVar2 != 0) &&
       (FUN_10837dcb4(lVar2,auStack_60,param_1,auStack_50,param_4,param_5), puVar5 = auStack_60,
       (int)lVar2 == 0)) {
      puVar5 = (undefined8 *)param_1;
    }
    puVar1 = auStack_50;
    FUN_1083a6340(puVar1,param_3,puVar5);
    if (((ulong)puVar1 & 1) == 0) {
      if (puVar5 == auStack_60) {
        func_0x000108376c1c(param_3,auStack_60);
      }
      else {
        FUN_108376b90(param_3,puVar5);
      }
    }
    uVar3 = param_3;
    func_0x000108377398();
    if ((uVar3 & 1) == 0) {
      FUN_108376d4c(param_3);
      uVar4 = 0;
    }
    else {
      puVar1 = auStack_50;
      FUN_10828782c(puVar1);
      uVar4 = (uint)puVar1 ^ 1;
    }
    FUN_10837ca5c(auStack_60[0]);
  }
  return uVar4;
}



/* Entry: 10837f160; end: 10837f253;  */

long FUN_10837f160(undefined8 *param_1,uint *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  uint uStack_78;
  byte bStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar2 = *param_1;
  FUN_1082d86c0(uVar2,&uStack_30,&bStack_71,&uStack_78);
  if ((int)uVar2 == 0) {
    uVar2 = *param_1;
    FUN_10837ebec(uVar2,&uStack_70,&bStack_71,&uStack_78);
    if ((int)uVar2 == 0) {
      return 0;
    }
  }
  else {
    FUN_108384c90(&uStack_70,&uStack_30);
    uStack_78 = uStack_78 << 1;
  }
  if (param_2 == (uint *)0x0) {
    lVar3 = 0x38;
  }
  else {
    bVar1 = *(byte *)((long)param_1 + 0xe);
    *(undefined8 *)(param_2 + 3) = uStack_68;
    *(undefined8 *)(param_2 + 1) = uStack_70;
    *param_2 = (uint)bStack_71 << 0x1a | (bVar1 & 3) << 8 | 0x10000005;
    *(undefined8 *)(param_2 + 7) = uStack_58;
    *(undefined8 *)(param_2 + 5) = uStack_60;
    *(undefined8 *)(param_2 + 0xb) = uStack_48;
    *(undefined8 *)(param_2 + 9) = uStack_50;
    param_2[0xd] = uStack_78;
    puStack_88 = param_2 + 0xe;
    uStack_80 = 0;
    puStack_90 = param_2;
    FUN_10840e2f4(&puStack_90);
    lVar3 = (long)puStack_88 - (long)puStack_90;
  }
  return lVar3;
}



/* Entry: 10837f254; end: 10837f3cb;  */

long * FUN_10837f254(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  uint *puStack_80;
  uint *puStack_78;
  undefined8 uStack_70;
  char cStack_61;
  
  plVar9 = param_1;
  FUN_10837f160();
  if (plVar9 == (long *)0x0) {
    bVar4 = *(byte *)((long)param_1 + 0xe);
    lVar8 = *param_1;
    uVar1 = *(uint *)(lVar8 + 0x30);
    uVar2 = *(uint *)(lVar8 + 0x60);
    uVar3 = *(uint *)(lVar8 + 0x48);
    cStack_61 = '\x01';
    pcVar6 = &cStack_61;
    func_0x000108154764(pcVar6,(long)(int)uVar1,8);
    cVar5 = '\0';
    if (pcVar6 < (char *)0xfffffffffffffff0) {
      cVar5 = cStack_61;
    }
    cStack_61 = cVar5;
    pcVar7 = &cStack_61;
    func_0x000108154764(pcVar7,(long)(int)uVar2,4);
    pcVar7 = pcVar7 + (long)(pcVar6 + 0x10);
    cVar5 = '\0';
    if (pcVar6 + 0x10 <= pcVar7) {
      cVar5 = cStack_61;
    }
    cStack_61 = cVar5;
    pcVar6 = &cStack_61;
    func_0x000108154764(pcVar6,(long)(int)uVar3,1);
    pcVar6 = pcVar6 + (long)pcVar7;
    cVar5 = '\0';
    if (pcVar7 <= pcVar6) {
      cVar5 = cStack_61;
    }
    cStack_61 = '\0';
    if (pcVar6 < (char *)0xfffffffffffffffd) {
      cStack_61 = cVar5;
    }
    if (cStack_61 == '\x01') {
      plVar9 = (long *)((ulong)(pcVar6 + 3) & 0xfffffffffffffffc);
      if (param_2 != (uint *)0x0) {
        *param_2 = (bVar4 & 3) << 8 | 5;
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        param_2[3] = uVar3;
        puStack_78 = param_2 + 4;
        uStack_70 = 0;
        puStack_80 = param_2;
        FUN_10837f3cc(&puStack_80,*(undefined8 *)(*param_1 + 0x28),(long)(int)uVar1 << 3);
        FUN_10837f3cc(&puStack_80,*(undefined8 *)(*param_1 + 0x58),(long)(int)uVar2 << 2);
        FUN_10837f3cc(&puStack_80,*(undefined8 *)(*param_1 + 0x40),(long)(int)uVar3);
        FUN_10840e2f4(&puStack_80);
      }
    }
    else {
      plVar9 = (long *)0x0;
    }
  }
  return plVar9;
}



/* Entry: 10837f3cc; end: 10837f3d7;  */

void FUN_10837f3cc(long *param_1,long param_2,long param_3)

{
  if (param_3 != 0) {
    if (((param_3 != 0) && (param_2 != 0)) && (*param_1 != 0)) {
      _memcpy(param_1[1],param_2,param_3);
    }
    param_1[1] = param_1[1] + param_3;
    return;
  }
  return;
}



/* Entry: 10837f3d8; end: 10837f42b;  */

void FUN_10837f3d8(long *param_1,undefined8 param_2)

{
  FUN_10837f254(param_2,0);
  FUN_1083464d4(param_1);
  FUN_10837f254(param_2,*(undefined8 *)(*param_1 + 0x18));
  return;
}



/* Entry: 10837f42c; end: 10837f43b;  */

bool FUN_10837f42c(long param_1,undefined8 param_2)

{
  func_0x00010840e220(param_1,4);
  if (param_1 != 0) {
    _memcpy(param_2,param_1,4);
  }
  return param_1 != 0;
}



/* Entry: 10837f43c; end: 10837f79b;  */

long FUN_10837f43c(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 **ppuVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uStack_100;
  undefined4 uStack_fc;
  uint uStack_f0;
  int iStack_ec;
  int iStack_e8;
  uint uStack_e4;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  char cStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  byte bStack_70;
  
  cStack_c8 = '\x01';
  ppuVar3 = &puStack_e0;
  puStack_e0 = param_2;
  puStack_d8 = param_2;
  lStack_d0 = (long)param_2 + param_3;
  FUN_10837f42c(ppuVar3,&uStack_e4);
  if (((int)ppuVar3 != 0) && (0xfffffffd < (uStack_e4 & 0xff) - 6)) {
    if (uStack_e4 >> 0x1c == 0) {
      ppuVar3 = &puStack_e0;
      FUN_10840e258(ppuVar3,&uStack_f0,0xc);
      if ((int)ppuVar3 != 0) {
        uVar4 = (ulong)(int)uStack_f0;
        func_0x000108410038(uVar4,8);
        if ((cStack_c8 == '\x01') && (uVar4 <= (ulong)(lStack_d0 - (long)puStack_d8))) {
          puVar5 = (undefined8 *)((long)puStack_d8 + uVar4);
          bVar2 = true;
          puVar7 = puStack_d8;
        }
        else {
          bVar2 = false;
          cStack_c8 = '\0';
          puVar7 = (undefined8 *)0x0;
          puVar5 = puStack_d8;
        }
        uVar4 = (ulong)iStack_ec;
        func_0x000108410038(uVar4,4);
        if ((bVar2) && (uVar4 <= (ulong)(lStack_d0 - (long)puVar5))) {
          puVar6 = (undefined8 *)((long)puVar5 + uVar4);
          bVar2 = true;
          puVar8 = puVar5;
        }
        else {
          bVar2 = false;
          cStack_c8 = '\0';
          puVar8 = (undefined8 *)0x0;
          puVar6 = puVar5;
        }
        uVar9 = (ulong)iStack_e8;
        uVar4 = uVar9;
        func_0x000108410038(uVar9,1);
        if ((bVar2) && (uVar4 <= (ulong)(lStack_d0 - (long)puVar6))) {
          lVar10 = (long)puVar6 + uVar4;
          uVar11 = lVar10 + 3U & 0xfffffffffffffffc;
          uVar4 = uVar11 - lVar10;
          if (uVar4 <= (ulong)(lStack_d0 - lVar10)) {
            puStack_d8 = (undefined8 *)(lVar10 + uVar4);
            if (iStack_e8 != 0) {
              uStack_c0 = 0;
              uStack_b8 = 0;
              puVar5 = puVar6;
              if ((uStack_e4 & 0xff) != 5) {
                puVar5 = &uStack_c0;
                FUN_1082b5c24(puVar5,uVar9,0);
                for (uVar4 = 0; iStack_e8 = iStack_e8 + -1,
                    (uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU)) != uVar4;
                    uVar4 = uVar4 + 1) {
                  *(undefined1 *)((long)puVar5 + uVar4) =
                       *(undefined1 *)((long)puVar6 + (long)iStack_e8);
                }
              }
              puVar6 = puVar5;
              uVar4 = uVar9;
              FUN_10837ba2c();
              lVar10 = 0;
              puStack_88 = puVar6;
              puStack_80 = (undefined8 *)uVar4;
              if (((uVar4 >> 0x20 & 1) != 0) &&
                 (uStack_f0 == (uint)puVar6 && iStack_ec == (int)((ulong)puVar6 >> 0x20))) {
                FUN_10837bb2c(&uStack_100,&puStack_88,puVar7,puVar5,uVar9,puVar8,uStack_e4 >> 8 & 3,
                              0);
                FUN_108376b90(param_1,&uStack_100);
                FUN_10837ca5c(CONCAT44(uStack_fc,uStack_100));
                lVar10 = (long)puStack_d8 - (long)puStack_e0;
              }
              func_0x000108262b94(&uStack_c0);
              return lVar10;
            }
            if (iStack_ec == 0 && uStack_f0 == 0) {
              FUN_108376d4c(param_1);
              *(byte *)(param_1 + 0xe) =
                   *(byte *)(param_1 + 0xe) & 0xfc | (byte)(uStack_e4 >> 8) & 3;
              return uVar11 - (long)puStack_e0;
            }
          }
        }
      }
    }
    else if (uStack_e4 >> 0x1c == 1) {
      bStack_70 = (byte)(uStack_e4 >> 0x1c);
      ppuVar3 = &puStack_88;
      puStack_88 = param_2;
      puStack_80 = param_2;
      lStack_78 = (long)param_2 + param_3;
      FUN_10837f42c(ppuVar3,&uStack_100);
      if ((int)ppuVar3 != 0) {
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        if ((uStack_100 >> 0x1a & 3) < 2) {
          ppuVar3 = &puStack_88;
          FUN_108385b2c(ppuVar3,&uStack_c0);
          if ((int)ppuVar3 != 0) {
            ppuVar3 = &puStack_88;
            func_0x00010837f434(ppuVar3,&uStack_f0);
            if ((int)ppuVar3 != 0) {
              uVar1 = uStack_f0 & ((int)uStack_f0 >> 0x1f ^ 0xffffffffU);
              if (6 < (int)uVar1) {
                uVar1 = 7;
              }
              if (uStack_f0 == uVar1) {
                FUN_108376d4c(param_1);
                FUN_10837817c();
                *(byte *)(param_1 + 0xe) =
                     *(byte *)(param_1 + 0xe) & 0xfc | (byte)(uStack_100 >> 8) & 3;
                puVar7 = (undefined8 *)((long)puStack_80 + 3U & 0xfffffffffffffffc);
                puVar5 = puStack_80;
                if ((ulong)((long)puVar7 - (long)puStack_80) <=
                    (ulong)(lStack_78 - (long)puStack_80)) {
                  puVar5 = puVar7;
                }
                if (bStack_70 == 0) {
                  puVar5 = puStack_80;
                }
                return (long)puVar5 - (long)puStack_88;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 10837f79c; end: 10837f7d7;  */

void FUN_10837f79c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_DAT_110a3f060;
  *(undefined1 *)(param_1 + 2) = 0;
  do {
    iVar3 = iRam0000000113255eec;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113255eec,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113255eec = iRam0000000113255eec + 1;
    }
  } while ((cVar1 != '\0') || (iVar3 == 0));
  *(int *)((long)param_1 + 0xc) = iVar3;
  return;
}



/* Entry: 10837f7d8; end: 10837f827;  */

undefined8 * FUN_10837f7d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3f060;
  if (*(char *)(param_1 + 2) == '\x01') {
    FUN_108392418((ulong)*(uint *)((long)param_1 + 0xc) | 0x7069637400000000);
  }
  return param_1;
}



/* Entry: 10837f828; end: 10837f92f;  */

undefined8 *
FUN_10837f828(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long *param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *extraout_x8;
  long lStack_e18;
  undefined8 *puStack_e10;
  undefined8 *puStack_e08;
  undefined1 *puStack_e00;
  code *pcStack_df8;
  undefined4 *puStack_df0;
  undefined8 uStack_de8;
  undefined8 auStack_de0 [392];
  long lStack_1a0;
  int iStack_180;
  int iStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  func_0x0001083801c4();
  func_0x0001083801f0();
  uStack_50 = 0x6c;
  func_0x000108380240();
  puVar2 = &uStack_4c;
  uStack_4c = param_1;
  uStack_48 = param_2;
  uStack_44 = param_3;
  uStack_40 = param_4;
  func_0x00010812f180();
  puStack_df0 = puVar2;
  uStack_de8 = param_6;
  FUN_1083813b4(auStack_de0,&puStack_df0,0);
  *(int *)(lStack_1a0 + 0x58) = *(int *)(lStack_1a0 + 0x58) + 1;
  iStack_5c = iStack_180;
  iStack_180 = iStack_180 + 1;
  (**(code **)(*param_5 + 0x18))(param_5,auStack_de0,0);
  FUN_108381a40(auStack_de0);
  puVar3 = (undefined8 *)0x108;
  __Znwm();
  puVar6 = auStack_de0;
  FUN_108380264();
  puVar4 = auStack_de0;
  FUN_10837fb0c();
  func_0x0001083801a4();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  __ZdlPv(puVar3);
  FUN_10837fb0c(auStack_de0);
  puVar5 = puVar4;
  __Unwind_Resume(puVar4);
  pcStack_df8 = FUN_10837f930;
  if ((code *)*puVar6 != (code *)0x0) {
    puStack_e10 = puVar4;
    puStack_e08 = puVar3;
    puStack_e00 = &stack0xfffffffffffffff0;
    (*(code *)*puVar6)(&lStack_e18);
    lVar1 = lStack_e18;
    if (lStack_e18 != 0) {
      if (*(long *)(lStack_e18 + 0x20) - 2U < 0x7ffffffe) {
        lStack_e18 = 0;
        *extraout_x8 = lVar1;
      }
      else {
        func_0x0001083463dc(extraout_x8);
      }
      func_0x0001083801d8();
      return puVar5;
    }
    func_0x0001083801d8();
  }
  *extraout_x8 = 0;
  return puVar5;
}



/* Entry: 10837f930; end: 10837f9b3;  */

void FUN_10837f930(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lStack_28;
  
  if ((code *)*param_3 != (code *)0x0) {
    (*(code *)*param_3)(&lStack_28,param_2,param_3[1]);
    lVar1 = lStack_28;
    if (lStack_28 != 0) {
      if (*(long *)(lStack_28 + 0x20) - 2U < 0x7ffffffe) {
        lStack_28 = 0;
        *param_1 = lVar1;
      }
      else {
        func_0x0001083463dc(param_1);
      }
      func_0x0001083801d8();
      return;
    }
    func_0x0001083801d8();
  }
  *param_1 = 0;
  return;
}



/* Entry: 10837f9b4; end: 10837fb03;  */

long * FUN_10837f9b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    long *param_5,long *param_6)

{
  undefined1 in_ZR;
  long *plVar1;
  code *extraout_x8;
  long lStack_68;
  long *plStack_60;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  plVar1 = param_5;
  func_0x0001083801c4();
  func_0x0001083801f0(*plVar1);
  uStack_50 = 0x6c;
  func_0x000108380240();
  plVar1 = (long *)*param_5;
  uStack_4c = param_1;
  uStack_48 = param_2;
  uStack_44 = param_3;
  uStack_40 = param_4;
  FUN_10837f828();
  plStack_60 = plVar1;
  (**(code **)(*param_6 + 0x18))(param_6,auStack_58,8);
  (**(code **)(*param_6 + 0x48))(param_6,uStack_50);
  (**(code **)(*param_6 + 0xb0))(param_6,&uStack_4c);
  FUN_10837f930(&lStack_68,*param_5,param_6 + 1);
  if (lStack_68 == 0) {
    func_0x0001083801d8();
    if (plStack_60 == (long *)0x0) {
      (**(code **)(*param_6 + 0x38))(param_6,0);
    }
    else {
      (**(code **)(*param_6 + 0x38))(param_6,1);
      plVar1 = plStack_60;
      FUN_1083809d4(plStack_60,param_6);
      param_6 = plVar1;
    }
  }
  else {
    (**(code **)(*param_6 + 0x38))(param_6,-(int)*(undefined8 *)(lStack_68 + 0x20));
    func_0x000108380204();
    (*extraout_x8)(param_6);
    func_0x0001083801d8();
  }
  func_0x000108380228();
  func_0x0001083801a4();
  if ((bool)in_ZR) {
    return param_6;
  }
  ___stack_chk_fail();
  func_0x000108380228();
  func_0x0001083801e0();
  return (long *)0x0;
}



/* Entry: 10837fb04; end: 10837fb0b;  */

undefined8 FUN_10837fb04(void)

{
  return 0;
}



/* Entry: 10837fb0c; end: 10837fb93;  */

long FUN_10837fb0c(undefined8 *param_1)

{
  long *plVar1;
  long unaff_x19;
  long alStack_38 [3];
  
  *param_1 = &PTR_FUN_110a3f0c8;
  FUN_10837fb94(param_1 + 0x1ae);
  FUN_10837fc3c(param_1 + 0x1ac);
  FUN_10837fcc0(param_1 + 0x1aa);
  FUN_10837fd44(param_1 + 0x1a8);
  FUN_10837fda4(param_1 + 0x1a6);
  FUN_10837fe4c(param_1 + 0x1a4);
  func_0x00010815277c(param_1 + 0x1a3);
  func_0x00010837feac(param_1 + 0x19e);
  FUN_10837ff68(param_1 + 0x19b);
  FUN_10840f118(param_1 + 0x198);
  FUN_10840f118(param_1 + 0x195);
  func_0x000108341ffc(param_1);
  FUN_10840ed0c(alStack_38,unaff_x19 + 0xc08,0);
  while( true ) {
    plVar1 = alStack_38;
    func_0x00010840ed64();
    if (plVar1 == (long *)0x0) break;
    if (*plVar1 != 0) {
      *(undefined1 *)(*plVar1 + 0x71) = 1;
    }
  }
  FUN_10833baf4(unaff_x19,1);
  FUN_10833c008(unaff_x19);
  func_0x000108342358();
  func_0x0001083422ac();
  FUN_10830c294(unaff_x19 + 0xc48);
  FUN_10840eaf0(unaff_x19 + 0xc08);
  return unaff_x19;
}



/* Entry: 10837fb94; end: 10837fbc3;  */

long FUN_10837fb94(long param_1)

{
  FUN_10837fbc4();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 10837fbc4; end: 10837fbf3;  */

void FUN_10837fbc4(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108380210();
    do {
      FUN_10837fbf4();
      func_0x00010838021c();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 10837fbf4; end: 10837fc3b;  */

void FUN_10837fbf4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010838024c();
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



/* Entry: 10837fc3c; end: 10837fc6b;  */

long FUN_10837fc3c(long param_1)

{
  FUN_10837fc6c();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 10837fc6c; end: 10837fcbf;  */

void FUN_10837fc6c(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108380210();
    do {
      func_0x00010837fc9c();
      func_0x00010838021c();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 10837fcc0; end: 10837fcef;  */

long FUN_10837fcc0(long param_1)

{
  FUN_10837fcf0();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 10837fcf0; end: 10837fd43;  */

void FUN_10837fcf0(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108380210();
    do {
      func_0x00010837fd20();
      func_0x00010838021c();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 10837fd44; end: 10837fd73;  */

long FUN_10837fd44(long param_1)

{
  FUN_10837fd74();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 10837fd74; end: 10837fda3;  */

void FUN_10837fd74(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108380210();
    do {
      FUN_10815b554();
      func_0x00010838021c();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 10837fda4; end: 10837fdd3;  */

long FUN_10837fda4(long param_1)

{
  FUN_10837fdd4();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 10837fdd4; end: 10837fe03;  */

void FUN_10837fdd4(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108380210();
    do {
      FUN_10837fe04();
      func_0x00010838021c();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 10837fe04; end: 10837fe4b;  */

void FUN_10837fe04(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  func_0x00010838024c();
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



/* Entry: 10837fe4c; end: 10837fe7b;  */

long FUN_10837fe4c(long param_1)

{
  FUN_10837fe7c();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 10837fe7c; end: 10837fecb;  */

void FUN_10837fe7c(long param_1)

{
  undefined1 in_CY;
  
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108380210();
    do {
      FUN_10829bb10();
      func_0x00010838021c();
    } while (!(bool)in_CY);
  }
  return;
}



/* Entry: 10837fecc; end: 10837fedf;  */

void FUN_10837fecc(long *param_1)

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
        FUN_10837ff38(lVar2);
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



/* Entry: 10837fee0; end: 10837ff37;  */

void FUN_10837fee0(undefined8 param_1,long param_2)

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
        FUN_10837ff38(lVar1);
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



/* Entry: 10837ff38; end: 10837ff67;  */

void FUN_10837ff38(int *param_1)

{
  if (*param_1 != 0) {
    FUN_10837ca38(param_1 + 2);
    *param_1 = 0;
  }
  return;
}



/* Entry: 10837ff68; end: 10837ff97;  */

long FUN_10837ff68(long param_1)

{
  FUN_10837ff98();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 10837ff98; end: 10837fff3;  */

void FUN_10837ff98(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar1 = *param_1;
    uVar2 = uVar1 + (long)(int)param_1[1] * 0x50;
    do {
      FUN_108375e94();
      uVar1 = uVar1 + 0x50;
    } while (uVar1 < uVar2);
  }
  return;
}



/* Entry: 10837fff4; end: 10838000b;  */

void FUN_10837fff4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_108380028(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10838000c; end: 108380027;  */

void FUN_10838000c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_108380028(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108380028; end: 1083800c7;  */

long FUN_108380028(long param_1)

{
  func_0x0001083800a8(param_1 + 0xe0);
  func_0x000108380124(param_1 + 0xd8);
  FUN_10837fb94(param_1 + 0xc0);
  FUN_10837fe4c(param_1 + 0xb0);
  FUN_10837fc3c(param_1 + 0xa0);
  FUN_10837fcc0(param_1 + 0x90);
  FUN_10837fd44(param_1 + 0x80);
  FUN_10837fda4(param_1 + 0x70);
  FUN_108330548(param_1 + 0x38);
  FUN_10837ca38(param_1 + 0x28);
  func_0x0001078bddf8(param_1 + 0x20);
  FUN_10818a480(param_1 + 0x10);
  FUN_10837ff98();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083801e8();
  }
  return param_1;
}



/* Entry: 1083800c8; end: 1083800df;  */

void FUN_1083800c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083800fc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083800e0; end: 1083800fb;  */

void FUN_1083800e0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083800fc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083800fc; end: 108380143;  */

long FUN_1083800fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 108380144; end: 108380157;  */

void FUN_108380144(long *param_1)

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
      lVar3 = lVar2 * -8;
      lVar2 = lVar1 + lVar2 * 8;
      do {
        lVar2 = lVar2 + -8;
        func_0x0001081298a0(lVar2);
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108380158; end: 1083801a3;  */

void FUN_108380158(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = lVar1 * -8;
      lVar1 = param_2 + lVar1 * 8;
      do {
        lVar1 = lVar1 + -8;
        func_0x0001081298a0(lVar1);
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083801a4; end: 108380263;  */

void FUN_1083801a4(void)

{
  return;
}



/* Entry: 108380264; end: 1083807af;  */

long * FUN_108380264(long *param_1,long param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_w9_01;
  undefined4 extraout_w9_02;
  undefined4 extraout_w9_03;
  undefined4 extraout_w9_04;
  int *piVar7;
  int extraout_w13;
  int extraout_w13_00;
  int extraout_w13_01;
  int extraout_w13_02;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0x100000000;
  plVar8 = param_1 + 2;
  *plVar8 = 0;
  param_1[3] = 0x100000000;
  param_1[4] = 0;
  plVar5 = param_1 + 5;
  FUN_108376ad8();
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  lVar10 = *(long *)(param_2 + 0xd30);
  param_1[0xe] = 0;
  iVar9 = *(int *)(param_2 + 0xd38);
  *(undefined4 *)(param_1 + 0xf) = 0;
  func_0x0001083811fc();
  FUN_108380b50();
  func_0x000108381120();
  param_1[0xe] = (long)plVar5;
  func_0x0001083811f0();
  *(int *)(param_1 + 0xf) = iVar9;
  *(undefined4 *)((long)param_1 + 0x7c) = extraout_w9;
  lVar13 = extraout_x8;
  while (lVar13 < iVar9) {
    if (*(long *)(lVar10 + lVar13 * 8) != 0) {
      do {
        func_0x0001083811c4();
      } while (extraout_w13 != 0);
      iVar9 = (int)param_1[0xf];
    }
    func_0x0001083811e4();
    lVar13 = extraout_x8_00;
  }
  lVar10 = *(long *)(param_2 + 0xd40);
  param_1[0x10] = 0;
  iVar9 = *(int *)(param_2 + 0xd48);
  *(undefined4 *)(param_1 + 0x11) = 0;
  func_0x0001083811fc();
  func_0x000108380b74();
  func_0x000108381120();
  param_1[0x10] = (long)plVar5;
  func_0x0001083811f0();
  *(int *)(param_1 + 0x11) = iVar9;
  *(undefined4 *)((long)param_1 + 0x8c) = extraout_w9_00;
  lVar13 = extraout_x8_01;
  while (lVar13 < iVar9) {
    if (*(long *)(lVar10 + lVar13 * 8) != 0) {
      do {
        func_0x0001083811c4();
      } while (extraout_w13_00 != 0);
      iVar9 = (int)param_1[0x11];
    }
    func_0x0001083811e4();
    lVar13 = extraout_x8_02;
  }
  lVar10 = *(long *)(param_2 + 0xd50);
  param_1[0x12] = 0;
  iVar9 = *(int *)(param_2 + 0xd58);
  *(undefined4 *)(param_1 + 0x13) = 0;
  func_0x0001083811fc();
  func_0x000108380b98();
  func_0x000108381120();
  param_1[0x12] = (long)plVar5;
  func_0x0001083811f0();
  *(int *)(param_1 + 0x13) = iVar9;
  *(undefined4 *)((long)param_1 + 0x9c) = extraout_w9_01;
  lVar13 = extraout_x8_03;
  while (lVar13 < iVar9) {
    piVar7 = *(int **)(lVar10 + lVar13 * 8);
    if (piVar7 != (int *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar9 = (int)param_1[0x13];
    }
    func_0x0001083811e4();
    lVar13 = extraout_x8_04;
  }
  lVar10 = *(long *)(param_2 + 0xd60);
  param_1[0x14] = 0;
  iVar9 = *(int *)(param_2 + 0xd68);
  *(undefined4 *)(param_1 + 0x15) = 0;
  func_0x0001083811fc();
  func_0x000108380bbc();
  func_0x000108381120();
  param_1[0x14] = (long)plVar5;
  func_0x0001083811f0();
  *(int *)(param_1 + 0x15) = iVar9;
  *(undefined4 *)((long)param_1 + 0xac) = extraout_w9_02;
  lVar13 = extraout_x8_05;
  while (lVar13 < iVar9) {
    piVar7 = *(int **)(lVar10 + lVar13 * 8);
    if (piVar7 != (int *)0x0) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      iVar9 = (int)param_1[0x15];
    }
    func_0x0001083811e4();
    lVar13 = extraout_x8_06;
  }
  lVar10 = *(long *)(param_2 + 0xd20);
  param_1[0x16] = 0;
  iVar9 = *(int *)(param_2 + 0xd28);
  *(undefined4 *)(param_1 + 0x17) = 0;
  func_0x0001083811fc();
  func_0x000108380be0();
  func_0x000108381120();
  param_1[0x16] = (long)plVar5;
  func_0x0001083811f0();
  *(int *)(param_1 + 0x17) = iVar9;
  *(undefined4 *)((long)param_1 + 0xbc) = extraout_w9_03;
  lVar13 = extraout_x8_07;
  while (lVar13 < iVar9) {
    if (*(long *)(lVar10 + lVar13 * 8) != 0) {
      do {
        func_0x0001083811c4();
      } while (extraout_w13_01 != 0);
      iVar9 = (int)param_1[0x17];
    }
    func_0x0001083811e4();
    lVar13 = extraout_x8_08;
  }
  lVar10 = *(long *)(param_2 + 0xd70);
  param_1[0x18] = 0;
  uVar1 = *(uint *)(param_2 + 0xd78);
  uVar11 = (ulong)uVar1;
  *(undefined4 *)(param_1 + 0x19) = 0;
  uVar6 = uVar11;
  func_0x000108380c04(0x3ff0000000000000);
  func_0x000108381120();
  param_1[0x18] = uVar6;
  func_0x0001083811f0();
  *(uint *)(param_1 + 0x19) = uVar1;
  *(undefined4 *)((long)param_1 + 0xcc) = extraout_w9_04;
  lVar13 = extraout_x8_09;
  while (lVar13 < (int)uVar11) {
    if (*(long *)(lVar10 + lVar13 * 8) != 0) {
      do {
        func_0x0001083811c4();
      } while (extraout_w13_02 != 0);
      uVar11 = (ulong)*(uint *)(param_1 + 0x19);
    }
    func_0x0001083811e4();
    lVar13 = extraout_x8_10;
  }
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar10 = param_3[1];
  lVar13 = *param_3;
  uVar14 = *(undefined8 *)((long)param_3 + 0xc);
  *(undefined8 *)((long)param_1 + 0xfc) = *(undefined8 *)((long)param_3 + 0x14);
  *(undefined8 *)((long)param_1 + 0xf4) = uVar14;
  param_1[0x1e] = lVar10;
  param_1[0x1d] = lVar13;
  if (*(long *)(param_2 + 0xd08) == 0) {
    func_0x0001083463dc(&uStack_68);
  }
  else {
    FUN_1083aa8a4(&uStack_68,param_2 + 0xcf8);
  }
  uVar14 = uStack_68;
  uStack_68 = 0;
  FUN_108166048(param_1 + 4,uVar14);
  FUN_108380b44(uStack_68);
  if (param_1 != (long *)(param_2 + 0xcd8)) {
    FUN_10837ff98(param_1);
    *(undefined4 *)(param_1 + 1) = 0;
    uVar6 = (ulong)*(uint *)(param_2 + 0xce0);
    if ((int)(*(uint *)((long)param_1 + 0xc) >> 1) < (int)*(uint *)(param_2 + 0xce0)) {
      plVar5 = param_1;
      FUN_108380c74(0x3ff0000000000000,param_1);
      FUN_108380c28(param_1,plVar5,uVar6);
      uVar6 = (ulong)*(uint *)(param_2 + 0xce0);
    }
    lVar12 = 0;
    *(int *)(param_1 + 1) = (int)uVar6;
    lVar10 = *(long *)(param_2 + 0xcd8);
    for (lVar13 = 0; lVar13 < (int)uVar6; lVar13 = lVar13 + 1) {
      FUN_108375f34(*param_1 + lVar12,lVar10);
      uVar6 = (ulong)*(uint *)(param_1 + 1);
      lVar10 = lVar10 + 0x50;
      lVar12 = lVar12 + 0x50;
    }
  }
  iVar9 = *(int *)(param_2 + 0xce8);
  func_0x0001081e4550(plVar8);
  func_0x0001081e4d38(0x3ff0000000000000,plVar8,iVar9);
  lVar10 = 0;
  *(int *)(param_1 + 3) = iVar9;
  for (lVar13 = 0; lVar13 < iVar9; lVar13 = lVar13 + 1) {
    FUN_108376ad8(*plVar8 + lVar10);
    iVar9 = (int)param_1[3];
    lVar10 = lVar10 + 0x10;
  }
  lVar10 = 0;
  lVar13 = 0;
  do {
    if (*(int *)(param_2 + 0xcec) <= lVar13) {
      lVar10 = 0;
      for (lVar13 = 0; lVar13 < (int)param_1[3]; lVar13 = lVar13 + 1) {
        func_0x0001083773e0(*plVar8 + lVar10);
        lVar10 = lVar10 + 0x10;
      }
      return param_1;
    }
    if (*(int *)(*(long *)(param_2 + 0xcf0) + lVar10) != 0) {
      lVar12 = *(long *)(param_2 + 0xcf0) + lVar10;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if ((int)uVar1 < 1 || (int)param_1[3] < (int)uVar1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1083806e4);
        (*pcVar4)();
      }
      FUN_108376b90(*plVar8 + (ulong)uVar1 * 0x10 + -0x10,lVar12 + 8);
    }
    lVar13 = lVar13 + 1;
    lVar10 = lVar10 + 0x20;
  } while( true );
}



/* Entry: 1083807b0; end: 108380997;  */

void FUN_1083807b0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_48;
  
  uVar2 = param_3;
  func_0x000108381208();
  if ((uVar2 & 1) == 0) {
    if (0 < *(int *)(unaff_x20 + 8)) {
      FUN_108380998();
      for (lVar3 = (long)*(int *)(unaff_x20 + 8) * 0x50; lVar3 != 0; lVar3 = lVar3 + -0x50) {
        func_0x00010838122c(*(undefined8 *)(*unaff_x19 + 0xe8));
      }
    }
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_108380998();
      (**(code **)(*unaff_x19 + 0x38))();
      for (lVar3 = (long)*(int *)(unaff_x20 + 0x18) << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
        func_0x00010838122c(*(undefined8 *)(*unaff_x19 + 200));
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    FUN_108380998();
    puVar1 = *(undefined8 **)(unaff_x20 + 0x90);
    for (lVar3 = (long)*(int *)(unaff_x20 + 0x98) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      FUN_1083a8324(*puVar1);
      puVar1 = puVar1 + 1;
    }
  }
  if ((param_3 & 1) == 0) {
    FUN_108380998();
    puVar1 = *(undefined8 **)(unaff_x20 + 0xc0);
    for (lVar3 = (long)*(int *)(unaff_x20 + 200) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      (**(code **)(*(long *)*puVar1 + 0x28))();
      puVar1 = puVar1 + 1;
    }
    if (*(int *)(unaff_x20 + 0xa8) != 0) {
      FUN_108380998();
      puVar1 = *(undefined8 **)(unaff_x20 + 0xa0);
      for (lVar3 = (long)*(int *)(unaff_x20 + 0xa8) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
        uStack_48 = *puVar1;
        FUN_1083a9794(&uStack_48);
        puVar1 = puVar1 + 1;
      }
    }
    if (*(int *)(unaff_x20 + 0xb8) != 0) {
      FUN_108380998();
      for (lVar3 = (long)*(int *)(unaff_x20 + 0xb8) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
        (**(code **)(*unaff_x19 + 0xd8))();
      }
    }
  }
  return;
}



/* Entry: 108380998; end: 1083809d3;  */

void FUN_108380998(long *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0001083809d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_3);
  return;
}



/* Entry: 1083809d4; end: 108380b03;  */

void FUN_1083809d4(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long lVar6;
  long lStack_38;
  
  func_0x000108381208();
  func_0x000108381214();
  FUN_108380998();
  (**(code **)(*unaff_x19 + 0x18))();
  if (*(int *)(unaff_x20 + 0x78) != 0) {
    FUN_108380998();
    plVar5 = *(long **)(unaff_x20 + 0x70);
    plVar2 = plVar5 + *(int *)(unaff_x20 + 0x78);
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      lStack_38 = *plVar5;
      if (lStack_38 != 0) {
        piVar1 = (int *)(lStack_38 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      FUN_10837f9b4(&lStack_38);
      FUN_10837fe04(&lStack_38);
    }
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    FUN_108380998();
    for (lVar6 = (long)*(int *)(unaff_x20 + 0x88) << 3; lVar6 != 0; lVar6 = lVar6 + -8) {
      (**(code **)(*unaff_x19 + 0x58))();
    }
  }
  FUN_1083807b0();
  (**(code **)(*unaff_x19 + 0x38))();
  return;
}



/* Entry: 108380b04; end: 108380b43;  */

void FUN_108380b04(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010838115c();
  if (in_NG == in_OV) {
    func_0x0001083811a4();
    FUN_108380d8c();
    func_0x0001083810bc();
    FUN_108380d54();
  }
  else {
    func_0x000108381104();
  }
  func_0x000108381194();
  return;
}



/* Entry: 108380b44; end: 108380b4f;  */

void FUN_108380b44(int *param_1)

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



/* Entry: 108380b50; end: 108380c27;  */

void FUN_108380b50(undefined8 param_1,undefined8 param_2)

{
  func_0x00010838117c(param_1,8,param_2,param_2);
  return;
}



/* Entry: 108380c28; end: 108380c73;  */

void FUN_108380c28(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000108381148();
  if (extraout_w8 != 0) {
    _memcpy();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 / 0x50);
  return;
}



/* Entry: 108380c74; end: 108380cbb;  */

void FUN_108380c74(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_2 + 8) ^ 0x7fffffff) < param_3) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x108380c98;
    func_0x00010bdb1a68();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010838117c(param_1,0x50);
  return;
}



/* Entry: 108380cbc; end: 108380d07;  */

long * FUN_108380cbc(long *param_1)

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



/* Entry: 108380d08; end: 108380d53;  */

long * FUN_108380d08(long *param_1)

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



/* Entry: 108380d54; end: 108380d8b;  */

void FUN_108380d54(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380d8c; end: 108380daf;  */

void FUN_108380d8c(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  
  uVar1 = *(uint *)(param_2 + 8) ^ 0x7fffffff;
  cVar2 = SBORROW4(param_3,uVar1);
  cVar3 = (int)(param_3 - uVar1) < 0;
  if (param_3 <= (int)uVar1) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010838117c(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x00010838115c();
  if (cVar3 == cVar2) {
    func_0x0001083811a4();
    FUN_108380df0();
    func_0x0001083810bc();
    FUN_108380e14();
  }
  else {
    func_0x000108381104();
  }
  func_0x000108381194();
  return;
}



/* Entry: 108380db0; end: 108380def;  */

void FUN_108380db0(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010838115c();
  if (in_NG == in_OV) {
    func_0x0001083811a4();
    FUN_108380df0();
    func_0x0001083810bc();
    FUN_108380e14();
  }
  else {
    func_0x000108381104();
  }
  func_0x000108381194();
  return;
}



/* Entry: 108380df0; end: 108380e13;  */

void FUN_108380df0(undefined8 param_1,long param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010838117c(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380e14; end: 108380e8b;  */

void FUN_108380e14(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380e8c; end: 108380eaf;  */

void FUN_108380e8c(undefined8 param_1,long param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010838117c(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380eb0; end: 108380f27;  */

void FUN_108380eb0(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380f28; end: 108380f4b;  */

void FUN_108380f28(undefined8 param_1,long param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010838117c(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380f4c; end: 108380fc3;  */

void FUN_108380f4c(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380fc4; end: 108380fe7;  */

void FUN_108380fc4(undefined8 param_1,long param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010838117c(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108380fe8; end: 10838105f;  */

void FUN_108380fe8(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108381060; end: 108381083;  */

void FUN_108381060(undefined8 param_1,long param_2,int param_3)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  if (param_3 <= (int)(*(uint *)(param_2 + 8) ^ 0x7fffffff)) {
    param_3 = *(uint *)(param_2 + 8) + param_3;
    func_0x00010838117c(param_1,8,param_3,param_3);
    return;
  }
  func_0x00010bdb1a68();
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 108381084; end: 1083810bb;  */

void FUN_108381084(void)

{
  int extraout_w8;
  long unaff_x19;
  ulong unaff_x21;
  
  func_0x000108381148();
  if (extraout_w8 != 0) {
    func_0x000108381138();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x0001083811b4();
  }
  func_0x0001083810e4(unaff_x21 >> 3);
  return;
}



/* Entry: 1083810bc; end: 10838123f;  */

void FUN_1083810bc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  iVar1 = *(int *)(unaff_x19 + 8);
  uVar2 = *unaff_x20;
  *unaff_x20 = 0;
  *(undefined8 *)(param_1 + (long)iVar1 * 8) = uVar2;
  return;
}



/* Entry: 108381240; end: 108381263;  */

undefined8 FUN_108381240(undefined8 param_1)

{
  FUN_108381264(param_1,0);
  return param_1;
}



/* Entry: 108381264; end: 108381277;  */

void FUN_108381264(long *param_1)

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
      lVar3 = lVar1 + lVar2 * 0x38;
      lVar2 = lVar2 * -0x38;
      do {
        lVar3 = lVar3 + -0x38;
        FUN_10829bb10(lVar3);
        lVar2 = lVar2 + 0x38;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 108381278; end: 1083812cb;  */

void FUN_108381278(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + -8);
    if (lVar1 != 0) {
      lVar2 = param_2 + lVar1 * 0x38;
      lVar1 = lVar1 * -0x38;
      do {
        lVar2 = lVar2 + -0x38;
        FUN_10829bb10(lVar2);
        lVar1 = lVar1 + 0x38;
      } while (lVar1 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083812cc; end: 108381393;  */

undefined8 * FUN_1083812cc(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (0x492492492492492 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108381380);
    (*pcVar1)();
  }
  param_1[1] = param_2;
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar5 = param_2 * 0x38;
    puVar2 = (undefined8 *)(uVar5 + 0x10);
    if (0xffffffffffffffef < uVar5) {
      puVar2 = (undefined8 *)0xffffffffffffffff;
    }
    __Znam();
    *puVar2 = 0x38;
    puVar2[1] = param_2;
    puVar3 = puVar2 + 2;
    puVar4 = (undefined1 *)((long)puVar2 + 0x44);
    do {
      *(undefined8 *)(puVar4 + -0x14) = 0;
      *(undefined8 *)(puVar4 + -0x1c) = 0;
      *(undefined8 *)(puVar4 + -0x24) = 0;
      *(undefined8 *)(puVar4 + -0x2c) = 0;
      *(undefined8 *)(puVar4 + -0x34) = 0;
      *(undefined8 *)(puVar4 + -0xc) = 0x3f800000ffffffff;
      *(undefined4 *)(puVar4 + -4) = 0;
      *puVar4 = 0;
      uVar5 = uVar5 - 0x38;
      puVar4 = puVar4 + 0x38;
    } while (uVar5 != 0);
  }
  FUN_108381394(param_1,puVar3);
  return param_1;
}



/* Entry: 108381394; end: 1083813b3;  */

void FUN_108381394(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + -8);
    if (lVar2 != 0) {
      lVar3 = lVar1 + lVar2 * 0x38;
      lVar2 = lVar2 * -0x38;
      do {
        lVar3 = lVar3 + -0x38;
        FUN_10829bb10(lVar3);
        lVar2 = lVar2 + 0x38;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083813b4; end: 10838149b;  */

void FUN_1083813b4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1083411c8();
  *param_1 = &PTR_FUN_110a3f0c8;
  *(undefined4 *)(param_1 + 0x195) = 4;
  param_1[0x197] = 0;
  param_1[0x196] = 0;
  *(undefined4 *)(param_1 + 0x198) = 4;
  param_1[0x199] = 0;
  param_1[0x19b] = 0;
  param_1[0x19a] = 0;
  param_1[0x19c] = 0x100000000;
  param_1[0x19e] = 0;
  param_1[0x19d] = 0;
  param_1[0x1a0] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a5] = 0x100000000;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0x100000000;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0x100000000;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 0x100000000;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0x100000000;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0x100000000;
  *(undefined4 *)(param_1 + 0x1b0) = param_3;
  *(undefined4 *)((long)param_1 + 0xd84) = 0xffffffff;
  return;
}


