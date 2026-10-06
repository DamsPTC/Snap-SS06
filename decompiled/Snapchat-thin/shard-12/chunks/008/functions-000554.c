/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1098f37f0; end: 1098f3887;  */

bool FUN_1098f37f0(double *param_1)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  undefined1 auStack_18 [8];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x03') {
    bVar2 = false;
    dVar3 = *param_1;
    if ((-2147483648.0 <= dVar3) && (dVar3 <= 2147483647.0)) {
      _modf(auStack_18);
      bVar2 = dVar3 == 0.0;
    }
    return bVar2;
  }
  if (cVar1 == '\x02') {
    bVar2 = (ulong)*param_1 >> 0x1f == 0;
  }
  else {
    if (cVar1 != '\x01') {
      return false;
    }
    bVar2 = *param_1 == (double)(long)SUB84(*param_1,0);
  }
  return bVar2;
}



/* Entry: 1098f3888; end: 1098f3a0f;  */

double FUN_1098f3888(double *param_1)

{
  byte bVar1;
  code *pcVar2;
  double *pdVar3;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [263];
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return 0.0;
    }
    if (bVar1 == 1) {
LAB_1098f391c:
      return *param_1;
    }
  }
  else {
    if (bVar1 == 2) {
      pdVar3 = param_1;
      FUN_1098f3a10();
      if (((ulong)pdVar3 & 1) != 0) goto LAB_1098f391c;
      FUN_10926db08(auStack_130);
      FUN_1092b4db8(auStack_130,&UNK_10f587e19,0x1e);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
      goto LAB_1098f39c4;
    }
    if (bVar1 == 3) {
      if (ABS(*param_1) <= 9.223372036854776e+18) {
        return (double)(long)*param_1;
      }
      FUN_10926db08(auStack_130);
      FUN_1092b4db8(auStack_130,&UNK_10f587e38,0x19);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
      goto LAB_1098f39c4;
    }
    if (bVar1 == 5) {
      return (double)(ulong)*(byte *)param_1;
    }
  }
  FUN_10926db08(auStack_130);
  FUN_1092b4db8(auStack_130,&UNK_10f587e52,0x22);
  FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
  FUN_1098f3054(auStack_148);
LAB_1098f39c4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f39c8);
  (*pcVar2)();
}



/* Entry: 1098f3a10; end: 1098f3a93;  */

uint FUN_1098f3a10(double *param_1)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  undefined1 auStack_18 [8];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    return 1;
  }
  if (cVar1 == '\x03') {
    dVar3 = *param_1;
    bVar2 = false;
    if ((-9.223372036854776e+18 <= dVar3) && (bVar2 = false, !NAN(dVar3))) {
      bVar2 = dVar3 < 9.223372036854776e+18;
    }
    if (bVar2) {
      _modf(auStack_18);
      return (uint)(dVar3 == 0.0);
    }
  }
  else if (cVar1 == '\x02') {
    return (uint)((ulong)*param_1 >> 0x3f) ^ 1;
  }
  return 0;
}



/* Entry: 1098f3a94; end: 1098f3c17;  */

double FUN_1098f3a94(double *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [263];
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      return 0.0;
    }
    if (bVar1 == 1) {
      if (-1 < (long)*param_1) {
        return *param_1;
      }
      FUN_10926db08(auStack_130);
      FUN_1092b4db8(auStack_130,&UNK_10f587e75,0x1e);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
      goto LAB_1098f3bcc;
    }
  }
  else {
    if (bVar1 == 2) {
      return *param_1;
    }
    if (bVar1 == 3) {
      dVar5 = *param_1;
      bVar3 = false;
      bVar4 = true;
      if (0.0 <= dVar5) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar5)) {
          bVar3 = dVar5 == 1.8446744073709552e+19;
          bVar4 = 1.8446744073709552e+19 <= dVar5;
        }
      }
      if (!bVar4 || bVar3) {
        return (double)(long)dVar5;
      }
      FUN_10926db08(auStack_130);
      FUN_1092b4db8(auStack_130,&UNK_10f587e94,0x1a);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
      goto LAB_1098f3bcc;
    }
    if (bVar1 == 5) {
      return (double)(ulong)*(byte *)param_1;
    }
  }
  FUN_10926db08(auStack_130);
  FUN_1092b4db8(auStack_130,&UNK_10f587eaf,0x23);
  FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
  FUN_1098f3054(auStack_148);
LAB_1098f3bcc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f3bd0);
  (*pcVar2)();
}



/* Entry: 1098f3c18; end: 1098f3d1f;  */

double FUN_1098f3c18(double param_1,double *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [263];
  undefined1 uStack_21;
  
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 2) {
    param_1 = 0.0;
    if (bVar1 != 0) {
      if (bVar1 != 1) {
LAB_1098f3cb4:
        FUN_10926db08(param_1,auStack_130);
        FUN_1092b4db8(auStack_130,&UNK_10f587ed3,0x23);
        FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
        FUN_1098f3054(auStack_148);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f3cf0);
        (*pcVar2)();
      }
      param_1 = (double)(long)*param_2;
    }
  }
  else if (bVar1 == 2) {
    param_1 = (double)((ulong)*param_2 & 1) + (double)((ulong)*param_2 >> 1) * 2.0;
  }
  else if (bVar1 == 3) {
    param_1 = *param_2;
  }
  else {
    if (bVar1 != 5) goto LAB_1098f3cb4;
    param_1 = 1.0;
    if (*(char *)param_2 == '\0') {
      param_1 = 0.0;
    }
  }
  return param_1;
}



/* Entry: 1098f3d20; end: 1098f3d8b;  */

int FUN_1098f3d20(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if ((char)param_1[1] == '\a') {
    return *(int *)(*param_1 + 0x10);
  }
  if (((char)param_1[1] == '\x06') && (*(long *)(*param_1 + 0x10) != 0)) {
    plVar2 = (long *)(*param_1 + 8);
    plVar4 = (long *)*plVar2;
    if (plVar4 == (long *)0x0) {
      do {
        plVar3 = (long *)plVar2[2];
        bVar1 = (long *)*plVar3 == plVar2;
        plVar2 = plVar3;
      } while (bVar1);
    }
    else {
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    return (int)plVar3[5] + 1;
  }
  return 0;
}



/* Entry: 1098f3d8c; end: 1098f3e5f;  */

void FUN_1098f3d8c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [263];
  undefined1 uStack_31;
  
  if (*(byte *)(param_1 + 1) - 6 < 2) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1 = (undefined8 *)*param_1;
    puVar2 = param_1 + 1;
    func_0x000107c2ada8(param_1,*puVar2);
    *param_1 = puVar2;
    param_1[2] = 0;
    *puVar2 = 0;
  }
  else {
    if (*(byte *)(param_1 + 1) != 0) {
      FUN_10926db08(auStack_140);
      FUN_1092b4db8(auStack_140,&UNK_10f587f19,0x2f);
      FUN_10926dc5c(auStack_158,auStack_138,&uStack_31);
      FUN_1098f3054(auStack_158);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1098f3e30);
      (*pcVar1)();
    }
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}



/* Entry: 1098f3e60; end: 1098f402b;  */

long * FUN_1098f3e60(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 *puStack_150;
  uint auStack_148 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_41;
  
  if ((char)param_1[1] == '\0') {
    auStack_148[0] = CONCAT22(auStack_148[0]._2_2_,6);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
    puStack_150 = puVar2;
    func_0x000107c2ad6c(&puStack_150,param_1);
    func_0x000107c2ad70(&puStack_150);
  }
  else if ((char)param_1[1] != '\x06') {
    FUN_10926db08(&puStack_150);
    FUN_1092b4db8(&puStack_150,&UNK_10f587f49,0x3b);
    FUN_10926dc5c(&uStack_168,auStack_148,&uStack_41);
    FUN_1098f3054(&uStack_168);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1098f3ecc);
    (*pcVar1)();
  }
  uStack_168 = 0;
  uStack_160 = (undefined4)param_2;
  lVar5 = *param_1;
  plVar6 = (long *)(lVar5 + 8);
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      plVar3 = plVar7 + 4;
      func_0x000107c2ad5c(plVar3,&uStack_168);
      lVar5 = 8;
      if ((int)plVar3 == 0) {
        lVar5 = 0;
        plVar6 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar5);
    } while (plVar7 != (long *)0x0);
    lVar5 = *param_1;
  }
  if (plVar6 != (long *)(lVar5 + 8)) {
    uVar4 = plVar6[4];
    func_0x000107c2ad60(uVar4,(int)plVar6[5],0,param_2);
    plVar7 = plVar6;
    if ((uVar4 & 1) != 0) goto LAB_1098f3fc0;
  }
  func_0x000107c2ad50();
  func_0x000107c2ada0(&puStack_150,&uStack_168);
  plVar7 = (long *)*param_1;
  func_0x000107c2adb0(plVar7,plVar6,&puStack_150,&puStack_150);
  func_0x000107c2ad70(&uStack_140);
  if ((puStack_150 != (undefined8 *)0x0) && ((auStack_148[0] & 3) == 1)) {
    _free();
  }
LAB_1098f3fc0:
  return plVar7 + 6;
}



/* Entry: 1098f402c; end: 1098f406f;  */

long * FUN_1098f402c(long *param_1)

{
  func_0x000107c2ad70(param_1 + 2);
  if ((*param_1 != 0) && ((*(uint *)(param_1 + 1) & 3) == 1)) {
    _free();
  }
  return param_1;
}



/* Entry: 1098f4070; end: 1098f40ff;  */

long * FUN_1098f4070(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uStack_168;
  int iStack_160;
  undefined8 *puStack_150;
  uint auStack_148 [2];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [231];
  undefined1 uStack_41;
  
  iVar5 = (int)param_2;
  if (iVar5 < 0) {
    FUN_10926db08(&uStack_130);
    FUN_1092b4db8(&uStack_130,&UNK_10f587f85,0x3f);
    FUN_10926dc5c(auStack_148,auStack_128,&stack0xffffffffffffffdf);
    FUN_1098f3054(auStack_148);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1098f40d0);
    (*pcVar1)();
  }
  if ((char)param_1[1] == '\0') {
    auStack_148[0] = CONCAT22(auStack_148[0]._2_2_,6);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    puVar2[2] = 0;
    puVar2[1] = 0;
    *puVar2 = puVar2 + 1;
    puStack_150 = puVar2;
    func_0x000107c2ad6c(&puStack_150,param_1);
    func_0x000107c2ad70(&puStack_150);
  }
  else if ((char)param_1[1] != '\x06') {
    FUN_10926db08(&puStack_150);
    FUN_1092b4db8(&puStack_150,&UNK_10f587f49,0x3b);
    FUN_10926dc5c(&uStack_168,auStack_148,&uStack_41);
    FUN_1098f3054(&uStack_168);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1098f3ecc);
    (*pcVar1)();
  }
  uStack_168 = 0;
  lVar6 = *param_1;
  plVar7 = (long *)(lVar6 + 8);
  plVar8 = (long *)*plVar7;
  iStack_160 = iVar5;
  if (plVar8 != (long *)0x0) {
    do {
      plVar3 = plVar8 + 4;
      func_0x000107c2ad5c(plVar3,&uStack_168);
      lVar6 = 8;
      if ((int)plVar3 == 0) {
        lVar6 = 0;
        plVar7 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + lVar6);
    } while (plVar8 != (long *)0x0);
    lVar6 = *param_1;
  }
  if (plVar7 != (long *)(lVar6 + 8)) {
    uVar4 = plVar7[4];
    func_0x000107c2ad60(uVar4,(int)plVar7[5],0,param_2);
    plVar8 = plVar7;
    if ((uVar4 & 1) != 0) goto LAB_1098f3fc0;
  }
  func_0x000107c2ad50();
  func_0x000107c2ada0(&puStack_150,&uStack_168);
  plVar8 = (long *)*param_1;
  func_0x000107c2adb0(plVar8,plVar7,&puStack_150,&puStack_150);
  func_0x000107c2ad70(&uStack_140);
  if ((puStack_150 != (undefined8 *)0x0) && ((auStack_148[0] & 3) == 1)) {
    _free();
  }
LAB_1098f3fc0:
  return plVar8 + 6;
}



/* Entry: 1098f4100; end: 1098f422b;  */

long FUN_1098f4100(long *param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_148 [24];
  long lStack_130;
  uint auStack_128 [65];
  undefined1 uStack_21;
  
  if ((char)param_1[1] == '\0') {
    func_0x000107c2ad50();
    lVar2 = 0x11382b988;
  }
  else {
    if ((char)param_1[1] != '\x06') {
      FUN_10926db08(&lStack_130);
      FUN_1092b4db8(&lStack_130,&UNK_10f587fc5,0x40);
      FUN_10926dc5c(auStack_148,auStack_128,&uStack_21);
      FUN_1098f3054(auStack_148);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1098f41d8);
      (*pcVar1)();
    }
    lStack_130 = 0;
    lVar2 = *param_1;
    auStack_128[0] = param_2;
    func_0x000107c2adac(lVar2,&lStack_130);
    if (*param_1 + 8 == lVar2) {
      func_0x000107c2ad50();
      lVar2 = 0x11382b988;
    }
    else {
      lVar2 = lVar2 + 0x30;
    }
    if ((lStack_130 != 0) && ((auStack_128[0] & 3) == 1)) {
      _free();
    }
  }
  return lVar2;
}



/* Entry: 1098f422c; end: 1098f426b;  */

void FUN_1098f422c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  func_0x000107c2ad90(param_1,puVar2,(long)puVar2 + uVar1);
  if (param_1 == 0) {
    func_0x000107c2ad50();
  }
  return;
}



/* Entry: 1098f426c; end: 1098f428b;  */

long * FUN_1098f426c(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puStack_178;
  uint uStack_170;
  undefined8 *puStack_160;
  uint auStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_51;
  
  puVar2 = (undefined8 *)*param_2;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar2 = param_2;
    uVar1 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  if ((char)param_1[1] == '\0') {
    auStack_158[0] = CONCAT22(auStack_158[0]._2_2_,7);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    puVar4 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar4[2] = 0;
    puVar4[1] = 0;
    *puVar4 = puVar4 + 1;
    puStack_160 = puVar4;
    func_0x0001001150b4(&puStack_160,param_1);
    func_0x0001001151c0(&puStack_160);
  }
  else if ((char)param_1[1] != '\a') {
    func_0x000107c2ac5c(&puStack_160);
    func_0x000107c2ac6c(&puStack_160,&UNK_10f588006,0x40);
    func_0x000107c2ac60(&puStack_178,auStack_158,&uStack_51);
    func_0x000107c2ad58(&puStack_178);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100114b60);
    (*pcVar3)();
  }
  uVar1 = uVar1 * 4 | 2;
  lVar7 = *param_1;
  plVar8 = (long *)(lVar7 + 8);
  plVar9 = (long *)*plVar8;
  puStack_178 = puVar2;
  uStack_170 = uVar1;
  if (plVar9 != (long *)0x0) {
    do {
      plVar5 = plVar9 + 4;
      func_0x0001001158d4(plVar5,&puStack_178);
      lVar7 = 8;
      if ((int)plVar5 == 0) {
        lVar7 = 0;
        plVar8 = plVar9;
      }
      plVar9 = *(long **)((long)plVar9 + lVar7);
    } while (plVar9 != (long *)0x0);
    lVar7 = *param_1;
  }
  if (plVar8 != (long *)(lVar7 + 8)) {
    uVar6 = plVar8[4];
    func_0x000100115988(uVar6,(int)plVar8[5],puVar2,uVar1);
    plVar9 = plVar8;
    if ((uVar6 & 1) != 0) goto code_r0x000100114c60;
  }
  func_0x0001001151fc();
  func_0x00010011538c(&puStack_160,&puStack_178);
  plVar9 = (long *)*param_1;
  func_0x000100115690(plVar9,plVar8,&puStack_160,&puStack_160);
  func_0x0001001151c0(&uStack_150);
  if ((puStack_160 != (undefined8 *)0x0) && ((auStack_158[0] & 3) == 1)) {
    func_0x000107c60fd0();
  }
code_r0x000100114c60:
  return plVar9 + 6;
}



/* Entry: 1098f428c; end: 1098f4403;  */

void FUN_1098f428c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined1 auStack_138 [15];
  char cStack_129;
  undefined1 uStack_31;
  
  if ((char)param_2[1] == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((char)param_2[1] != '\a') {
      FUN_10926db08(&uStack_140);
      FUN_1092b4db8(&uStack_140,&UNK_10f58808b,0x3b);
      FUN_10926dc5c(auStack_158,auStack_138,&uStack_31);
      FUN_1098f3054(auStack_158);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f43a4);
      (*pcVar2)();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x000107c31930(param_1,*(undefined8 *)(*param_2 + 0x10));
    param_2 = (long *)*param_2;
    plVar4 = (long *)*param_2;
    while (plVar4 != param_2 + 1) {
      func_0x000104c54c8c(&uStack_140,plVar4[4],*(uint *)(plVar4 + 5) >> 2);
      FUN_1094d24d0(param_1,&uStack_140);
      if (cStack_129 < '\0') {
        __ZdlPv(uStack_140);
      }
      plVar1 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar3 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar3);
      }
      else {
        do {
          plVar4 = plVar1;
          plVar1 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
  }
  return;
}



/* Entry: 1098f4404; end: 1098f4447;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_1098f4404(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  plVar2 = (long *)(*param_2 + (param_3 & 0xffffffff) * 0x18);
  if (*(char *)((long)plVar2 + 0x17) < '\0') {
    lVar3 = *plVar2;
    uVar1 = plVar2[1];
    if (0x16 < uVar1) {
      if (uVar1 < 0x7ffffffffffffff7) {
        lVar3 = 0x19;
        if ((uVar1 | 7) != 0x17) {
          lVar3 = (uVar1 | 7) + 1;
        }
      }
      else {
        func_0x000104bd47d4();
      }
      func_0x000107c60e20(lVar3);
      return;
    }
    *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)(param_1,lVar3,uVar1 + 1);
    return;
  }
  lVar4 = plVar2[1];
  lVar3 = *plVar2;
  param_1[2] = plVar2[2];
  param_1[1] = lVar4;
  *param_1 = lVar3;
  return;
}



/* Entry: 1098f4448; end: 1098f46a7;  */

void FUN_1098f4448(long param_1,char *param_2,uint param_3)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [263];
  undefined1 uStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  bVar3 = param_2[0x17];
  uVar8 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    lVar7 = *(long *)(param_2 + 8);
    if (lVar7 != 0) {
      pcVar6 = *(char **)param_2;
      if (pcVar6[lVar7 + -1] == '\n') {
        lVar7 = lVar7 + -1;
        *(long *)(param_2 + 8) = lVar7;
        goto LAB_1098f44d0;
      }
LAB_1098f44f8:
      cVar2 = **(char **)param_2;
      if (cVar2 == '\0') {
LAB_1098f450c:
        uVar1 = *(undefined8 *)param_2;
        uStack_58 = (undefined7)*(undefined8 *)(param_2 + 8);
        uStack_51 = (undefined1)*(undefined8 *)(param_2 + 0xf);
        uStack_50 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0xf) >> 8);
        param_2[0] = '\0';
        param_2[1] = '\0';
        param_2[2] = '\0';
        param_2[3] = '\0';
        param_2[4] = '\0';
        param_2[5] = '\0';
        param_2[6] = '\0';
        param_2[7] = '\0';
        param_2[8] = '\0';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[0xd] = '\0';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\0';
        param_2[0x11] = '\0';
        param_2[0x12] = '\0';
        param_2[0x13] = '\0';
        param_2[0x14] = '\0';
        param_2[0x15] = '\0';
        param_2[0x16] = '\0';
        param_2[0x17] = '\0';
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x48;
          __Znwm();
          puVar5[8] = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[7] = 0;
          puVar5[6] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
          puVar5[3] = 0;
          puVar5[2] = 0;
          *(undefined8 **)(param_1 + 0x10) = puVar5;
        }
        if ((int)param_3 < 3) {
          puVar5 = puVar5 + (ulong)param_3 * 3;
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            __ZdlPv(*puVar5);
          }
          *puVar5 = uVar1;
          puVar5[1] = CONCAT17(uStack_51,uStack_58);
          *(ulong *)((long)puVar5 + 0xf) = CONCAT71(uStack_50,uStack_51);
          *(char *)((long)puVar5 + 0x17) = (char)uVar8;
LAB_1098f4588:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
            return;
          }
        }
        else {
          if (uVar8 >> 7 == 0) goto LAB_1098f4588;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(uVar1);
            return;
          }
        }
        ___stack_chk_fail();
      }
      else {
LAB_1098f4504:
        if (cVar2 == '/') goto LAB_1098f450c;
      }
      FUN_10926db08(auStack_168);
      FUN_1092b4db8(auStack_168,&UNK_10f5880c7,0x38);
      FUN_10926dc5c(auStack_180,auStack_160,&uStack_59);
      FUN_1098f3054(auStack_180);
      goto LAB_1098f4644;
    }
  }
  else if (uVar8 != 0) {
    if (param_2[(ulong)bVar3 - 1] != '\n') {
LAB_1098f44e4:
      cVar2 = *param_2;
      if (cVar2 != '\0') goto LAB_1098f4504;
      goto LAB_1098f450c;
    }
    lVar7 = (ulong)bVar3 - 1;
    param_2[0x17] = (char)lVar7;
    pcVar6 = param_2;
LAB_1098f44d0:
    pcVar6[lVar7] = '\0';
    uVar8 = (uint)(byte)param_2[0x17];
    if (param_2[0x17] < '\0') {
      if (*(long *)(param_2 + 8) != 0) goto LAB_1098f44f8;
    }
    else if (uVar8 != 0) goto LAB_1098f44e4;
  }
  func_0x000107c31940(auStack_168,&UNK_10f587c98);
  FUN_1098f3054(auStack_168);
LAB_1098f4644:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1098f4648);
  (*pcVar4)();
}



/* Entry: 1098f46a8; end: 1098f470b;  */

undefined1  [16] FUN_1098f46a8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  if (((*(ushort *)(param_1 + 1) & 0xfe) == 6) && ((ulong *)*param_1 != (ulong *)0x0)) {
    auVar1._0_8_ = *(ulong *)*param_1;
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}



/* Entry: 1098f470c; end: 1098f4733;  */

void FUN_1098f470c(void)

{
  FUN_1098f2ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1098f4734; end: 1098f47c7;  */

void FUN_1098f4734(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(char *)(param_2 + lVar1 + 0x47) < '\0') {
        __ZdlPv(*(undefined8 *)(param_2 + lVar1 + 0x30));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1098f47c8; end: 1098f484b;  */

long * FUN_1098f47c8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar3 = (long *)(param_1 + 8);
  while (plVar4 = plVar3, plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2ad5c(param_3,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar2 = plVar4 + 4;
      func_0x000107c2ad5c(plVar2,param_3);
      if ((int)plVar2 == 0) goto LAB_1098f4834;
      plVar3 = plVar4 + 1;
      plVar2 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) goto LAB_1098f4834;
    }
    plVar3 = plVar4;
    plVar2 = (long *)*plVar4;
  }
LAB_1098f4834:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 1098f484c; end: 1098f4893;  */

void FUN_1098f484c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001098f4780(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1098f4894; end: 1098f48e7;  */

undefined8 * FUN_1098f4894(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_1098f48e8(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 1098f48e8; end: 1098f4967;  */

void FUN_1098f48e8(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x000107c2adb0(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1098f4968; end: 1098f4a8f;  */

/* WARNING: Possible PIC construction at 0x0001098f4a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098f4a68) */
/* WARNING: Removing unreachable block (ram,0x0001098f4a8c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b0c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b40) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b50) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b60) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b64) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b8c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4bac) */
/* WARNING: Removing unreachable block (ram,0x0001098f4bc8) */
/* WARNING: Removing unreachable block (ram,0x0001098f4bcc) */
/* WARNING: Removing unreachable block (ram,0x0001098f4bd4) */
/* WARNING: Removing unreachable block (ram,0x0001098f4bdc) */
/* WARNING: Removing unreachable block (ram,0x0001098f4be8) */
/* WARNING: Removing unreachable block (ram,0x0001098f4bec) */
/* WARNING: Removing unreachable block (ram,0x0001098f4bf8) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c08) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c18) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c38) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c48) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c4c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c58) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c68) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c70) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c94) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c80) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c8c) */
/* WARNING: Removing unreachable block (ram,0x0001098f4c98) */
/* WARNING: Removing unreachable block (ram,0x0001098f4ca8) */
/* WARNING: Removing unreachable block (ram,0x0001098f4cbc) */
/* WARNING: Removing unreachable block (ram,0x0001098f4cd4) */
/* WARNING: Removing unreachable block (ram,0x0001098f4cec) */
/* WARNING: Removing unreachable block (ram,0x0001098f4d00) */
/* WARNING: Removing unreachable block (ram,0x0001098f4b98) */
/* WARNING: Removing unreachable block (ram,0x0001098f4ac4) */
/* WARNING: Removing unreachable block (ram,0x0001098f4ac8) */
/* WARNING: Removing unreachable block (ram,0x0001098f4acc) */
/* WARNING: Removing unreachable block (ram,0x0001098f4ad0) */
/* WARNING: Removing unreachable block (ram,0x0001098f4ad4) */
/* WARNING: Removing unreachable block (ram,0x0001098f4ad8) */
/* WARNING: Removing unreachable block (ram,0x0001098f4a80) */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

ulong * FUN_1098f4968(ulong *param_1,ulong param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 auStack_40 [37];
  byte abStack_1b [2];
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  puVar10 = &stack0xfffffffffffffff0;
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 0x8000000000000000) {
    puVar7 = &uStack_18;
    uVar9 = 0x8000000000000000;
    do {
      *(byte *)((long)puVar7 + -2) = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      puVar7 = (undefined8 *)((long)puVar7 + -1);
      bVar3 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar3);
LAB_1098f4a5c:
    uStack_19 = 0;
    puVar8 = (ulong *)((long)puVar7 + -2);
    *(byte *)puVar8 = 0x2d;
  }
  else {
    if ((long)param_2 < 0) {
      puVar7 = &uStack_18;
      uVar9 = -param_2;
      do {
        *(byte *)((long)puVar7 + -2) = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
        puVar7 = (undefined8 *)((long)puVar7 + -1);
        bVar3 = 9 < uVar9;
        uVar9 = uVar9 / 10;
      } while (bVar3);
      goto LAB_1098f4a5c;
    }
    puVar8 = (ulong *)(abStack_1b + 2);
    uStack_19 = 0;
    do {
      puVar8 = (ulong *)((long)puVar8 + -1);
      *(byte *)puVar8 = (char)param_2 + (char)(param_2 / 10) * -10 | 0x30;
      bVar3 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar3);
  }
  puVar11 = (undefined *)0x1098f4a68;
  puVar2 = auStack_40;
  while( true ) {
    puVar6 = puVar8;
    puVar4 = param_1;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(ulong **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(ulong **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar10;
    *(undefined **)(puVar2 + -8) = puVar11;
    puVar8 = puVar6;
    func_0x000107c613d0();
    if (puVar8 < (ulong *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)(puVar2 + -0x60) = unaff_x20;
    *(ulong **)(puVar2 + -0x58) = puVar4;
    *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x48) = &UNK_10002d57c;
    puVar10 = puVar2 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return puVar8;
    }
    puVar8 = (ulong *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)puVar8 == 0) {
      return puVar8;
    }
    puVar11 = &UNK_10002d5bc;
    puVar2 = puVar2 + -0x60;
    param_1 = (ulong *)0x1132dfae8;
    puVar8 = (ulong *)&UNK_10f5738ce;
    unaff_x19 = puVar4;
    unaff_x21 = puVar6;
  }
  if (puVar8 < (ulong *)0x17) {
    *(char *)((long)puVar4 + 0x17) = (char)puVar8;
    puVar5 = puVar4;
    if (puVar8 == (ulong *)0x0) goto code_r0x00010002d55c;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar8 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar8 | 7) + 1);
    }
    puVar5 = puVar1;
    func_0x000107c60e20();
    puVar4[1] = (ulong)puVar8;
    puVar4[2] = (ulong)puVar1 | 0x8000000000000000;
    *puVar4 = (ulong)puVar5;
  }
  func_0x000107c610b8(puVar5,puVar6,puVar8);
code_r0x00010002d55c:
  *(byte *)((long)puVar5 + (long)puVar8) = 0;
  return puVar4;
}



/* Entry: 1098f4a90; end: 1098f4d43;  */

/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

char * FUN_1098f4a90(char *param_1,double param_2,uint param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  byte bVar15;
  char *unaff_x19;
  undefined8 unaff_x20;
  char *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  
  if ((ulong)ABS(param_2) < 0x7ff0000000000000) {
    puVar8 = (undefined8 *)0x28;
    __Znwm();
    *(undefined8 **)param_1 = puVar8;
    param_1[0x10] = '(';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = -0x80;
    param_1[8] = '$';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    puVar2 = &DAT_10f5882e8;
    if (param_5 != 0) {
      puVar2 = &UNK_10f51b447;
    }
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    *(undefined8 *)((long)puVar8 + 0x1d) = 0;
    while( true ) {
      uVar14 = *(ulong *)(param_1 + 8);
      pcVar9 = *(char **)param_1;
      if (-1 < param_1[0x17]) {
        uVar14 = (ulong)(byte)param_1[0x17];
        pcVar9 = param_1;
      }
      _snprintf(pcVar9,uVar14,puVar2);
      iVar6 = (int)pcVar9;
      uVar14 = *(ulong *)(param_1 + 8);
      if (-1 < param_1[0x17]) {
        uVar14 = (ulong)(byte)param_1[0x17];
      }
      if ((ulong)(long)iVar6 < uVar14) break;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
                (param_1,(long)iVar6 + 1,0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (param_1,(long)iVar6,0);
    bVar15 = param_1[0x17];
    uVar11 = (ulong)bVar15;
    pcVar13 = *(char **)param_1;
    uVar12 = *(ulong *)(param_1 + 8);
    uVar14 = uVar12;
    pcVar9 = pcVar13;
    if (-1 < (char)bVar15) {
      uVar14 = uVar11;
      pcVar9 = param_1;
    }
    pcVar10 = pcVar9;
    if (uVar14 != 0) {
      pcVar10 = pcVar9 + uVar14;
      do {
        if (*pcVar9 == ',') {
          *pcVar9 = '.';
        }
        pcVar9 = pcVar9 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      bVar15 = param_1[0x17];
      uVar11 = (ulong)bVar15;
      pcVar13 = *(char **)param_1;
      uVar12 = *(ulong *)(param_1 + 8);
    }
    pcVar9 = pcVar13 + uVar12;
    if (-1 < (char)bVar15) {
      pcVar13 = param_1;
      pcVar9 = param_1 + uVar11;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
              (param_1,(long)pcVar10 - (long)pcVar13,(long)pcVar9 - (long)pcVar10);
    if (param_5 == 1) {
      bVar15 = param_1[0x17];
      uVar14 = *(ulong *)(param_1 + 8);
      pcVar9 = *(char **)param_1;
      if (-1 < (char)bVar15) {
        uVar14 = (ulong)bVar15;
        pcVar9 = param_1;
      }
      pcVar13 = pcVar9 + uVar14;
      pcVar10 = pcVar13;
      for (; ((uVar14 != 0 && (pcVar10 = pcVar13, pcVar9[uVar14 - 1] == '0')) &&
             ((uVar14 == 1 || (pcVar10 = pcVar9 + uVar14, pcVar10[-2] != '.'))));
          uVar14 = uVar14 - 1) {
        pcVar13 = pcVar13 + -1;
        pcVar10 = pcVar9;
      }
      pcVar13 = *(char **)param_1 + *(ulong *)(param_1 + 8);
      if (-1 < (char)bVar15) {
        pcVar13 = param_1 + bVar15;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
                (param_1,(long)pcVar10 - (long)pcVar9,(long)pcVar13 - (long)pcVar10);
    }
    pcVar9 = param_1;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x2e,0);
    if ((pcVar9 == (char *)0xffffffffffffffff) &&
       (pcVar9 = param_1,
       __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x65,0),
       pcVar9 == (char *)0xffffffffffffffff)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&DAT_10f36c659,2);
      pcVar9 = param_1;
    }
    return pcVar9;
  }
  lVar4 = 2;
  if (param_2 < 0.0) {
    lVar4 = 1;
  }
  lVar1 = 0;
  if (!NAN(param_2)) {
    lVar1 = lVar4;
  }
  puVar5 = (undefined1 *)register0x00000008;
  pcVar9 = (&PTR_DAT_110b1cb28)[(ulong)(param_3 ^ 1) * 3 + lVar1];
  while( true ) {
    pcVar10 = pcVar9;
    pcVar13 = param_1;
    *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
    *(char **)(puVar5 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar5 + -0x20) = unaff_x20;
    *(char **)(puVar5 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
    *(undefined **)(puVar5 + -8) = unaff_x30;
    pcVar9 = pcVar10;
    func_0x000107c613d0();
    if (pcVar9 < (char *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(undefined8 *)(puVar5 + -0x60) = unaff_x20;
    *(char **)(puVar5 + -0x58) = pcVar13;
    *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x48) = &UNK_10002d57c;
    unaff_x29 = puVar5 + -0x50;
    if ((bRam00000001132dfb00 & 1) != 0) {
      return pcVar9;
    }
    pcVar9 = (char *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)pcVar9 == 0) {
      return pcVar9;
    }
    unaff_x30 = &UNK_10002d5bc;
    puVar5 = puVar5 + -0x60;
    param_1 = (char *)0x1132dfae8;
    pcVar9 = 
    "varying vec2 v_texCoord; uniform samplerExternalOES s_texture; void main() { gl_FragColor = texture2D(s_texture, v_texCoord); }"
    ;
    unaff_x19 = pcVar13;
    unaff_x21 = pcVar10;
  }
  if (pcVar9 < (char *)0x17) {
    pcVar13[0x17] = (char)pcVar9;
    pcVar7 = pcVar13;
    if (pcVar9 == (char *)0x0) goto code_r0x00010002d55c;
  }
  else {
    pcVar3 = (char *)0x19;
    if (((ulong)pcVar9 | 7) != 0x17) {
      pcVar3 = (char *)(((ulong)pcVar9 | 7) + 1);
    }
    pcVar7 = pcVar3;
    func_0x000107c60e20();
    *(char **)(pcVar13 + 8) = pcVar9;
    *(ulong *)(pcVar13 + 0x10) = (ulong)pcVar3 | 0x8000000000000000;
    *(char **)pcVar13 = pcVar7;
  }
  func_0x000107c610b8(pcVar7,pcVar10,pcVar9);
code_r0x00010002d55c:
  pcVar7[(long)pcVar9] = '\0';
  return pcVar13;
}



/* Entry: 1098f4d44; end: 1098f522b;  */

/* WARNING: Possible PIC construction at 0x0001098f5118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010002d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001098f511c) */
/* WARNING: Removing unreachable block (ram,0x0001098f5180) */
/* WARNING: Removing unreachable block (ram,0x0001098f5188) */
/* WARNING: Removing unreachable block (ram,0x0001098f5190) */
/* WARNING: Removing unreachable block (ram,0x00010002d5bc) */
/* WARNING: Removing unreachable block (ram,0x000107c60e4c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd8c0) */

char * FUN_1098f4d44(char *param_1,byte *param_2,ulong param_3,int param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  uint uVar11;
  char *unaff_x19;
  byte *unaff_x20;
  byte *pbVar12;
  char *unaff_x21;
  ulong unaff_x22;
  uint uVar13;
  undefined8 unaff_x23;
  ulong uVar14;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_a0 [8];
  char acStack_98 [24];
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined2 uStack_7e;
  uint uStack_7c;
  char cStack_69;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (param_2 == (byte *)0x0) {
    pcVar7 = param_1;
    pcVar3 = "";
  }
  else {
    if ((int)param_3 != 0) {
      param_1[0] = '\0';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
                (param_1,(int)param_3 * 2 + 3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,&DAT_10f3b3c06,1);
      pbVar2 = param_2 + (param_3 & 0xffffffff);
      do {
        bVar4 = *param_2;
        uVar14 = (ulong)bVar4;
        uVar13 = (uint)bVar4;
        pbVar12 = param_2;
        if (bVar4 < 0xc) {
          if (uVar13 == 8) {
            puVar10 = &UNK_10f580d67;
          }
          else if (uVar13 == 9) {
            puVar10 = &DAT_10f47f586;
          }
          else {
            if (bVar4 != 10) goto LAB_1098f4e48;
            puVar10 = &DAT_10f47f589;
          }
LAB_1098f4e70:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,puVar10,2);
        }
        else {
          if (uVar13 != 0x21 && 0x20 < bVar4) {
            puVar10 = &DAT_10f47f5f4;
            if (uVar13 != 0x5c) {
              if (bVar4 != 0x22) goto LAB_1098f4e48;
              puVar10 = &DAT_10f47f5ef;
            }
            goto LAB_1098f4e70;
          }
          if (bVar4 == 0xc) {
            puVar10 = &UNK_10f580d6a;
            goto LAB_1098f4e70;
          }
          puVar10 = &DAT_10f47f594;
          if (uVar13 == 0xd) goto LAB_1098f4e70;
LAB_1098f4e48:
          if (param_4 == 0) {
            if ((char)bVar4 < '\0') {
              if (uVar13 < 0xe0) {
                if (1 < (long)pbVar2 - (long)param_2) {
                  pbVar12 = param_2 + 1;
                  uVar13 = 0xfffd;
                  if ((bVar4 & 0x1e) != 0) {
                    uVar13 = *pbVar12 & 0x3f | (bVar4 & 0x1f) << 6;
                  }
                  uVar14 = (ulong)uVar13;
                  goto LAB_1098f4e90;
                }
LAB_1098f4ffc:
                uVar14 = 0xfffd;
              }
              else {
                if (uVar13 < 0xf0) {
                  if (2 < (long)pbVar2 - (long)param_2) {
                    uVar13 = (bVar4 & 0xf) << 0xc | (param_2[1] & 0x3f) << 6;
                    pbVar12 = param_2 + 2;
                    if ((6 < (bVar4 >> 1 & 7)) || (uVar13 >> 0xb < 0x1b)) {
                      uVar11 = uVar13 | *pbVar12 & 0x3f;
                      bVar5 = 0x7ff < uVar13;
                      goto LAB_1098f50bc;
                    }
                  }
                  goto LAB_1098f4ffc;
                }
                uVar14 = 0xfffd;
                if ((bVar4 < 0xf8) && (3 < (long)pbVar2 - (long)param_2)) {
                  pbVar12 = param_2 + 3;
                  uVar13 = (uVar13 & 7) << 0x12 | (param_2[1] & 0x3f) << 0xc;
                  uVar11 = *pbVar12 & 0x3f | (param_2[2] & 0x3f) << 6 | uVar13;
                  bVar5 = 0xffff < uVar13;
LAB_1098f50bc:
                  uVar13 = 0xfffd;
                  if (bVar5) {
                    uVar13 = uVar11;
                  }
                  uVar14 = (ulong)uVar13;
                  goto LAB_1098f4e90;
                }
              }
LAB_1098f5000:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&UNK_10f580d6d,2);
              cStack_69 = '\x04';
              uStack_7c = uStack_7c & 0xffffff00;
              uStack_80 = (&UNK_10f5882ed)[uVar14 >> 7 & 0x1fe];
              uStack_7f = (&UNK_10f5882ed)[uVar14 >> 7 | 1];
              uStack_7e = *(undefined2 *)(&UNK_10f5882ed + (uVar14 & 0xff) * 2);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&uStack_80,4);
            }
            else {
LAB_1098f4e90:
              uVar13 = (uint)uVar14;
              if (uVar13 - 0x20 < 0x60) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_1,uVar14);
                goto LAB_1098f4e7c;
              }
              if (uVar13 >> 0x10 == 0) goto LAB_1098f5000;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&UNK_10f580d6d,2);
              uVar11 = (uVar13 - 0x10000 >> 10) + 0xd800;
              cStack_69 = '\x04';
              uStack_7c = uStack_7c & 0xffffff00;
              uStack_80 = (undefined1)
                          *(undefined2 *)(&UNK_10f5882ed + ((ulong)(uVar11 >> 7) & 0x1fe));
              uStack_7f = (undefined1)
                          ((ushort)*(undefined2 *)(&UNK_10f5882ed + ((ulong)(uVar11 >> 7) & 0x1fe))
                          >> 8);
              uStack_7e = *(undefined2 *)(&UNK_10f5882ed + ((ulong)uVar11 & 0xff) * 2);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&uStack_80,4);
              if (cStack_69 < '\0') {
                __ZdlPv(CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(uStack_7f,uStack_80))));
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&UNK_10f580d6d,2);
              cStack_69 = '\x04';
              uStack_7c = uStack_7c & 0xffffff00;
              uStack_80 = (&UNK_10f5884a5)[uVar13 >> 7 & 6];
              uStack_7f = (&UNK_10f5882ed)[(ulong)(uVar13 >> 7 & 7) | 0x1b9];
              uStack_7e = *(undefined2 *)(&UNK_10f5882ed + (uVar14 & 0xff) * 2);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (param_1,&uStack_80,4);
            }
            if (cStack_69 < '\0') {
              __ZdlPv(CONCAT44(uStack_7c,CONCAT22(uStack_7e,CONCAT11(uStack_7f,uStack_80))));
            }
          }
          else {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_1,(int)(char)bVar4);
          }
        }
LAB_1098f4e7c:
        param_2 = pbVar12 + 1;
        if (param_2 == pbVar2) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,&DAT_10f3b3c06,1);
          return param_1;
        }
      } while( true );
    }
    pcVar7 = acStack_98;
    unaff_x30 = (undefined *)0x1098f511c;
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    pcVar3 = "\"";
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
    unaff_x22 = param_3;
    unaff_x20 = param_2;
  }
  while( true ) {
    pcVar9 = pcVar3;
    pcVar6 = pcVar7;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(char **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    pcVar7 = pcVar9;
    func_0x000107c613d0();
    if (pcVar7 < (char *)0x7ffffffffffffff8) break;
    func_0x000104c4f6b8();
    *(byte **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(char **)((long)register0x00000008 + -0x58) = pcVar6;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_10002d57c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam00000001132dfb00 & 1) != 0) {
      return pcVar7;
    }
    pcVar7 = (char *)0x1132dfb00;
    func_0x000107c60e48();
    if ((int)pcVar7 == 0) {
      return pcVar7;
    }
    unaff_x30 = &UNK_10002d5bc;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    pcVar7 = (char *)0x1132dfae8;
    pcVar3 = 
    "varying vec2 v_texCoord; uniform samplerExternalOES s_texture; void main() { gl_FragColor = texture2D(s_texture, v_texCoord); }"
    ;
    unaff_x19 = pcVar6;
    unaff_x21 = pcVar9;
  }
  if (pcVar7 < (char *)0x17) {
    pcVar6[0x17] = (char)pcVar7;
    pcVar8 = pcVar6;
    if (pcVar7 == (char *)0x0) goto code_r0x00010002d55c;
  }
  else {
    pcVar3 = (char *)0x19;
    if (((ulong)pcVar7 | 7) != 0x17) {
      pcVar3 = (char *)(((ulong)pcVar7 | 7) + 1);
    }
    pcVar8 = pcVar3;
    func_0x000107c60e20();
    *(char **)(pcVar6 + 8) = pcVar7;
    *(ulong *)(pcVar6 + 0x10) = (ulong)pcVar3 | 0x8000000000000000;
    *(char **)pcVar6 = pcVar8;
  }
  func_0x000107c610b8(pcVar8,pcVar9,pcVar7);
code_r0x00010002d55c:
  pcVar8[(long)pcVar7] = '\0';
  return pcVar6;
}



/* Entry: 1098f522c; end: 1098f52eb;  */

undefined8 FUN_1098f522c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfc | 2;
  if (*(char *)(param_1 + 0x3f) < '\0') {
    **(undefined1 **)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x3f) = 0;
  }
  FUN_1098f52ec(param_1,param_2);
  bVar3 = *(byte *)(param_1 + 0xb0);
  if ((bVar3 >> 1 & 1) == 0) {
    FUN_1098f5474(param_1);
    bVar3 = *(byte *)(param_1 + 0xb0);
  }
  *(byte *)(param_1 + 0xb0) = bVar3 | 2;
  FUN_1098f54e0(param_1,param_2);
  FUN_1098f5dac(param_1,param_2);
  uVar1 = *(ulong *)(param_1 + 0xa0);
  puVar2 = *(undefined8 **)(param_1 + 0x98);
  if (-1 < (char)*(byte *)(param_1 + 0xaf)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0xaf);
    puVar2 = (undefined8 *)(param_1 + 0x98);
  }
  FUN_1092b4db8(*(undefined8 *)(param_1 + 8),puVar2,uVar1);
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}



/* Entry: 1098f52ec; end: 1098f5473;  */

void FUN_1098f52ec(long param_1,long param_2)

{
  ulong uVar1;
  char **ppcVar2;
  ulong uVar3;
  long lVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcStack_60;
  ulong uStack_58;
  byte bStack_49;
  char cStack_41;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x17) < '\0') {
        if (*(long *)(lVar4 + 8) == 0) {
          return;
        }
      }
      else if (*(char *)(lVar4 + 0x17) == '\0') {
        return;
      }
      if ((*(byte *)(param_1 + 0xb0) >> 1 & 1) == 0) {
        FUN_1098f5474(param_1);
      }
      FUN_1098f4404(&pcStack_60,(long *)(param_2 + 0x10),0);
      uVar3 = (ulong)bStack_49;
      ppcVar5 = (char **)pcStack_60;
      if (-1 < (char)bStack_49) {
        ppcVar5 = &pcStack_60;
      }
      pcVar6 = (char *)((long)ppcVar5 + 1);
      if ((char)bStack_49 < '\0') goto LAB_1098f5388;
      while (ppcVar5 != (char **)((long)&pcStack_60 + uVar3)) {
        while( true ) {
          cStack_41 = *(char *)ppcVar5;
          FUN_1092b4db8(*(undefined8 *)(param_1 + 8),&cStack_41,1);
          uVar3 = (ulong)bStack_49;
          if (*(char *)ppcVar5 == '\n') {
            uVar1 = uStack_58;
            ppcVar2 = (char **)pcStack_60;
            if (-1 < (char)bStack_49) {
              uVar1 = uVar3;
              ppcVar2 = &pcStack_60;
            }
            if (((char *)((long)ppcVar2 + uVar1) != pcVar6) && (*pcVar6 == '/')) {
              uVar3 = *(ulong *)(param_1 + 0x30);
              lVar4 = *(long *)(param_1 + 0x28);
              if (-1 < (char)*(byte *)(param_1 + 0x3f)) {
                uVar3 = (ulong)*(byte *)(param_1 + 0x3f);
                lVar4 = param_1 + 0x28;
              }
              FUN_1092b4db8(*(undefined8 *)(param_1 + 8),lVar4,uVar3);
              uVar3 = (ulong)bStack_49;
            }
          }
          ppcVar5 = (char **)((long)ppcVar5 + 1);
          pcVar6 = pcVar6 + 1;
          if ((uint)uVar3 >> 7 == 0) break;
LAB_1098f5388:
          if (ppcVar5 == (char **)(pcStack_60 + uStack_58)) {
            *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
            __ZdlPv();
            return;
          }
        }
      }
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
    }
  }
  return;
}



/* Entry: 1098f5474; end: 1098f54df;  */

void FUN_1098f5474(long param_1)

{
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = (long)*(char *)(param_1 + 0x5f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0x50);
  }
  if (lVar1 != 0) {
    uStack_21 = 10;
    FUN_1092b4db8(*(undefined8 *)(param_1 + 8),&uStack_21,1);
    FUN_1092b4db8();
  }
  return;
}



/* Entry: 1098f54e0; end: 1098f5dab;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_1098f54e0(long *******param_1,char *param_2)

{
  bool bVar1;
  ushort uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long ******pppppplVar5;
  ushort uVar6;
  uint uVar7;
  long *plVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  long ******pppppplVar15;
  long *****ppppplVar16;
  long *******ppppppplVar17;
  long *******unaff_x21;
  long *******ppppppplVar18;
  undefined *unaff_x22;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  long lVar24;
  long *******appppppplStack_108 [2];
  char cStack_f1;
  long *******ppppppplStack_f0;
  long ******pppppplStack_e8;
  long ******pppppplStack_e0;
  undefined *puStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long *******appppppplStack_a0 [2];
  char cStack_89;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  byte abStack_71 [9];
  long lStack_68;
  
  ppppppplVar11 = (long *******)appppppplStack_a0;
  ppppppplVar18 = (long *******)appppppplStack_a0;
  ppppppplVar9 = (long *******)appppppplStack_a0;
  ppppppplVar10 = (long *******)appppppplStack_a0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(ushort *)((long)param_2 + 8);
  uVar2 = uVar6 & 0xff;
  ppppppplVar17 = (long *******)param_2;
  if (3 < uVar2) {
    if (uVar2 < 6) {
      if (uVar2 == 4) {
        if (((uVar6 & 0xff) == 4) &&
           (ppppppplVar11 = *(long ********)param_2, param_2 = (char *)ppppppplVar11,
           ppppppplVar11 != (long *******)0x0)) {
          if ((uVar6 >> 8 & 1) == 0) {
            _strlen(ppppppplVar11);
          }
          else {
            param_2 = (char *)((long)ppppppplVar11 + 4);
            ppppppplVar11 = (long *******)(ulong)*(uint *)ppppppplVar11;
          }
          FUN_1098f4d44(&ppppppplStack_88,param_2,ppppppplVar11,*(byte *)(param_1 + 0x16) >> 3 & 1);
          ppppppplVar11 = (long *******)&ppppppplStack_88;
          FUN_1098f5f44();
        }
        else {
          func_0x000107c31940(&ppppppplStack_88,"");
          ppppppplVar11 = (long *******)&ppppppplStack_88;
          FUN_1098f5f44();
        }
      }
      else {
        ppppppplVar11 = (long *******)param_2;
        if (uVar2 != 5) goto LAB_1098f5cc4;
        func_0x000107c2ad80();
        pcVar4 = "true";
        if ((int)ppppppplVar11 == 0) {
          pcVar4 = "false";
        }
        func_0x000107c31940(&ppppppplStack_88,pcVar4);
        ppppppplVar11 = (long *******)&ppppppplStack_88;
        FUN_1098f5f44();
      }
    }
    else {
      if (uVar2 != 6) {
        ppppppplVar11 = (long *******)param_2;
        if (uVar2 == 7) {
          FUN_1098f428c(&ppppppplStack_88,param_2);
          if (ppppppplStack_88 == ppppppplStack_80) {
            func_0x000107c31940(appppppplStack_a0,&DAT_10f2fb62f);
            FUN_1098f5f44(param_1);
          }
          else {
            func_0x000107c31940(appppppplStack_a0,&DAT_10f2da0fd);
            FUN_1098f5f74(param_1,appppppplStack_a0);
            if (cStack_89 < '\0') {
              __ZdlPv(appppppplStack_a0[0]);
            }
            pppppplVar15 = param_1[10];
            ppppppplVar11 = (long *******)param_1[9];
            if (-1 < (char)*(byte *)((long)param_1 + 0x5f)) {
              pppppplVar15 = (long ******)(ulong)*(byte *)((long)param_1 + 0x5f);
              ppppppplVar11 = param_1 + 9;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (param_1 + 5,ppppppplVar11,pppppplVar15);
            unaff_x22 = &DAT_10f68e8ee;
            unaff_x21 = ppppppplStack_88;
            while( true ) {
              ppppppplVar11 = (long *******)param_2;
              FUN_1098f422c(param_2,unaff_x21);
              FUN_1098f52ec(param_1,ppppppplVar11);
              pppppplVar15 = (long ******)(long)*(char *)((long)unaff_x21 + 0x17);
              ppppppplVar9 = unaff_x21;
              if ((long)pppppplVar15 < 0) {
                pppppplVar15 = unaff_x21[1];
                ppppppplVar9 = (long *******)*unaff_x21;
              }
              FUN_1098f4d44(appppppplStack_a0,ppppppplVar9,pppppplVar15,
                            *(byte *)(param_1 + 0x16) >> 3 & 1);
              FUN_1098f5f74(param_1,appppppplStack_a0);
              if (cStack_89 < '\0') {
                __ZdlPv(appppppplStack_a0[0]);
              }
              pppppplVar15 = param_1[0xe];
              ppppppplVar9 = (long *******)param_1[0xd];
              if (-1 < (char)*(byte *)((long)param_1 + 0x7f)) {
                pppppplVar15 = (long ******)(ulong)*(byte *)((long)param_1 + 0x7f);
                ppppppplVar9 = param_1 + 0xd;
              }
              FUN_1092b4db8(param_1[1],ppppppplVar9,pppppplVar15);
              FUN_1098f54e0(param_1,ppppppplVar11);
              unaff_x21 = unaff_x21 + 3;
              if (unaff_x21 == ppppppplStack_80) break;
              FUN_1092b4db8(param_1[1],&DAT_10f68e8ee,1);
              FUN_1098f5dac(param_1,ppppppplVar11);
            }
            FUN_1098f5dac(param_1,ppppppplVar11);
            FUN_1098f5fd0(param_1);
            func_0x000107c31940(appppppplStack_a0,&DAT_10f2da10d);
            FUN_1098f5f74(param_1);
            ppppppplVar9 = ppppppplVar18;
          }
          if (cStack_89 < '\0') {
            __ZdlPv(appppppplStack_a0[0]);
          }
          appppppplStack_a0[0] = (long *******)&ppppppplStack_88;
          func_0x000104c607c8();
          param_1 = ppppppplVar10;
          ppppppplVar11 = ppppppplVar9;
        }
        goto LAB_1098f5cc4;
      }
      ppppppplVar11 = (long *******)param_2;
      FUN_1098f3d20();
      uVar7 = (uint)ppppppplVar11;
      if (uVar7 != 0) {
        if ((*(int *)(param_1 + 0xc) != 2) &&
           (uVar23 = *(uint *)(param_1 + 8), func_0x000104c60808(param_1 + 2), uVar7 * 3 < uVar23))
        {
          uVar23 = 1;
          do {
            ppppppplVar17 = (long *******)param_2;
            FUN_1098f4100(param_2,uVar23 - 1);
            uVar14 = (uint)*(ushort *)(ppppppplVar17 + 1);
            if ((uVar14 & 0xfe) == 6) {
              if (7 < (uVar14 & 0xff) || (1 << (ulong)(uVar14 & 0x1f) & 0xc1U) == 0) break;
              FUN_1098f3d20();
              if ((uVar7 <= uVar23) || ((int)ppppppplVar17 != 0)) goto LAB_1098f5974;
            }
            else if (uVar7 <= uVar23) goto LAB_1098f5978;
            uVar23 = uVar23 + 1;
          } while( true );
        }
        goto LAB_1098f5b74;
      }
      func_0x000107c31940(&ppppppplStack_88,&DAT_10f56e05e);
      ppppppplVar11 = (long *******)&ppppppplStack_88;
      FUN_1098f5f44();
    }
    goto LAB_1098f5cb4;
  }
  if (1 < uVar2) {
    if (uVar2 != 2) {
      ppppppplVar11 = (long *******)param_2;
      if (uVar2 == 3) {
        FUN_1098f3c18(param_2);
        FUN_1098f4a90(&ppppppplStack_88,*(byte *)(param_1 + 0x16) >> 2 & 1,
                      *(undefined4 *)((long)param_1 + 0xb4),*(undefined4 *)(param_1 + 0x17));
        ppppppplVar11 = (long *******)&ppppppplStack_88;
        FUN_1098f5f44();
        goto LAB_1098f5cb4;
      }
      goto LAB_1098f5cc4;
    }
    ppppppplVar9 = (long *******)param_2;
    FUN_1098f3a94();
    pbVar12 = abStack_71 + 1;
    abStack_71[1] = 0;
    do {
      pbVar12 = pbVar12 + -1;
      *pbVar12 = (char)ppppppplVar9 + (char)(long *******)((ulong)ppppppplVar9 / 10) * -10 | 0x30;
      bVar1 = (long *******)0x9 < ppppppplVar9;
      ppppppplVar9 = (long *******)((ulong)ppppppplVar9 / 10);
    } while (bVar1);
    func_0x000107c31940(appppppplStack_a0);
    FUN_1098f5f44();
    ppppppplVar9 = appppppplStack_a0[0];
    if (-1 < cStack_89) goto LAB_1098f5cc4;
    goto LAB_1098f5cc0;
  }
  if ((uVar6 & 0xff) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      if (((ulong)param_1[0x16] & 1) != 0) {
        ppppppplVar11 = param_1 + 2;
        pppppplVar15 = param_1[3];
        if (pppppplVar15 < param_1[4]) {
          func_0x000107c2ac74();
          ppppppplVar11 = (long *******)(pppppplVar15 + 3);
        }
        else {
          func_0x0001000480f4();
        }
        param_1[3] = (long ******)ppppppplVar11;
        return ppppppplVar11;
      }
      ppppppplVar11 = (long *******)param_1[1];
      ppppppplVar17 = (long *******)param_1[0x10];
      pppppplVar15 = param_1[0x11];
      if (-1 < (char)*(byte *)((long)param_1 + 0x97)) {
        ppppppplVar17 = param_1 + 0x10;
        pppppplVar15 = (long ******)(ulong)*(byte *)((long)param_1 + 0x97);
      }
      goto code_r0x0001092b4db8;
    }
    goto LAB_1098f5cfc;
  }
  ppppppplVar11 = (long *******)param_2;
  if (uVar2 == 1) {
    FUN_1098f3888(param_2);
    FUN_1098f4968(&ppppppplStack_88);
    ppppppplVar11 = (long *******)&ppppppplStack_88;
    FUN_1098f5f44();
    goto LAB_1098f5cb4;
  }
LAB_1098f5cc4:
  param_2 = (char *)ppppppplVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  goto LAB_1098f5cfc;
LAB_1098f5974:
  if ((int)ppppppplVar17 != 0) {
LAB_1098f5b74:
    func_0x000107c31940(&ppppppplStack_88,&DAT_10f62a9e8);
    FUN_1098f5f74(param_1,&ppppppplStack_88);
    if ((char)abStack_71[0] < '\0') {
      __ZdlPv(ppppppplStack_88);
    }
    pppppplVar15 = param_1[10];
    ppppppplVar11 = (long *******)param_1[9];
    if (-1 < (char)*(byte *)((long)param_1 + 0x5f)) {
      pppppplVar15 = (long ******)(ulong)*(byte *)((long)param_1 + 0x5f);
      ppppppplVar11 = param_1 + 9;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1 + 5,ppppppplVar11,pppppplVar15);
    lVar24 = 0;
    unaff_x22 = (undefined *)0x0;
    pppppplVar15 = param_1[2];
    pppppplVar5 = param_1[3];
    unaff_x21 = (long *******)&DAT_10f68e8ee;
    while( true ) {
      ppppppplVar11 = (long *******)param_2;
      FUN_1098f4100(param_2,unaff_x22);
      FUN_1098f52ec(param_1,ppppppplVar11);
      if (pppppplVar15 == pppppplVar5) {
        bVar13 = *(byte *)(param_1 + 0x16);
        if ((bVar13 >> 1 & 1) == 0) {
          FUN_1098f5474(param_1);
          bVar13 = *(byte *)(param_1 + 0x16);
        }
        ppppppplVar17 = param_1 + 0x16;
        *(byte *)ppppppplVar17 = bVar13 | 2;
        FUN_1098f54e0(param_1,ppppppplVar11);
        *(byte *)ppppppplVar17 = *(byte *)ppppppplVar17 & 0xfd;
      }
      else {
        FUN_1098f5f74(param_1,(long)param_1[2] + lVar24);
      }
      if ((undefined *)(ulong)(uVar7 - 1) == unaff_x22) break;
      FUN_1092b4db8(param_1[1],&DAT_10f68e8ee,1);
      FUN_1098f5dac(param_1,ppppppplVar11);
      unaff_x22 = unaff_x22 + 1;
      lVar24 = lVar24 + 0x18;
    }
    FUN_1098f5dac(param_1,ppppppplVar11);
    FUN_1098f5fd0(param_1);
    func_0x000107c31940(&ppppppplStack_88,&DAT_10f62a9ea);
    ppppppplVar11 = (long *******)&ppppppplStack_88;
    FUN_1098f5f74();
LAB_1098f5cb4:
    ppppppplVar9 = ppppppplStack_88;
    ppppppplVar17 = (long *******)param_2;
    if ((char)abStack_71[0] < '\0') {
LAB_1098f5cc0:
      __ZdlPv();
      param_1 = ppppppplVar9;
      ppppppplVar17 = (long *******)param_2;
    }
    goto LAB_1098f5cc4;
  }
LAB_1098f5978:
  uVar19 = (ulong)ppppppplVar11 & 0xffffffff;
  func_0x000107c31930(param_1 + 2,uVar19);
  lVar24 = 0;
  uVar21 = 0;
  bVar1 = false;
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 1;
  uVar23 = uVar7 * 2 + 2;
  do {
    ppppppplVar11 = (long *******)param_2;
    FUN_1098f4100(param_2,uVar21);
    pppppplVar15 = ppppppplVar11[2];
    if (pppppplVar15 != (long ******)0x0) {
      if (*(char *)((long)pppppplVar15 + 0x17) < '\0') {
        if (pppppplVar15[1] == (long *****)0x0) goto LAB_1098f59d4;
      }
      else if (*(char *)((long)pppppplVar15 + 0x17) == '\0') {
LAB_1098f59d4:
        ppppplVar16 = (long *****)(long)*(char *)((long)pppppplVar15 + 0x2f);
        if ((long)ppppplVar16 < 0) {
          ppppplVar16 = pppppplVar15[4];
        }
        if (ppppplVar16 == (long *****)0x0) {
          ppppplVar16 = (long *****)(long)*(char *)((long)pppppplVar15 + 0x47);
          if ((long)ppppplVar16 < 0) {
            ppppplVar16 = pppppplVar15[7];
          }
          bVar1 = (bool)(ppppplVar16 != (long *****)0x0 | bVar1);
          goto LAB_1098f59e8;
        }
      }
      bVar1 = true;
    }
LAB_1098f59e8:
    ppppppplVar11 = (long *******)param_2;
    FUN_1098f4100(param_2,uVar21);
    FUN_1098f54e0(param_1,ppppppplVar11);
    lVar20 = (long)*(char *)((long)param_1[2] + lVar24 + 0x17);
    if (lVar20 < 0) {
      lVar20 = *(long *)((long)param_1[2] + lVar24 + 8);
    }
    uVar23 = uVar23 + (int)lVar20;
    uVar21 = uVar21 + 1;
    lVar24 = lVar24 + 0x18;
  } while (uVar19 != uVar21);
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xfe;
  if ((bVar1) || (*(uint *)(param_1 + 8) <= uVar23)) goto LAB_1098f5b74;
  FUN_1092b4db8(param_1[1],&DAT_10f62a9e8,1);
  pppppplVar15 = (long ******)(long)*(char *)((long)param_1 + 0x5f);
  if ((long)pppppplVar15 < 0) {
    pppppplVar15 = param_1[10];
  }
  if (pppppplVar15 != (long ******)0x0) {
    FUN_1092b4db8(param_1[1]," ",1);
  }
  ppppppplVar17 = (long *******)0x0;
  unaff_x21 = (long *******)&DAT_10f68f19e;
  do {
    if (ppppppplVar17 != (long *******)0x0) {
      pppppplVar15 = (long ******)(long)*(char *)((long)param_1 + 0x5f);
      if ((long)pppppplVar15 < 0) {
        pppppplVar15 = param_1[10];
      }
      ppppppplVar11 = (long *******)&DAT_10f68e8ee;
      if (pppppplVar15 != (long ******)0x0) {
        ppppppplVar11 = unaff_x21;
      }
      uVar3 = 1;
      if (pppppplVar15 != (long ******)0x0) {
        uVar3 = 2;
      }
      FUN_1092b4db8(param_1[1],ppppppplVar11,uVar3);
    }
    ppppppplVar11 = (long *******)((long)param_1[2] + (long)ppppppplVar17);
    pppppplVar15 = ppppppplVar11[1];
    param_2 = (char *)*ppppppplVar11;
    if (-1 < (char)*(byte *)((long)ppppppplVar11 + 0x17)) {
      pppppplVar15 = (long ******)(ulong)*(byte *)((long)ppppppplVar11 + 0x17);
      param_2 = (char *)ppppppplVar11;
    }
    FUN_1092b4db8(param_1[1],param_2,pppppplVar15);
    ppppppplVar17 = ppppppplVar17 + 3;
    uVar19 = uVar19 - 1;
  } while (uVar19 != 0);
  pppppplVar15 = (long ******)(long)*(char *)((long)param_1 + 0x5f);
  if ((long)pppppplVar15 < 0) {
    pppppplVar15 = param_1[10];
  }
  if (pppppplVar15 != (long ******)0x0) {
    param_2 = " ";
    FUN_1092b4db8(param_1[1]," ",1);
  }
  param_1 = (long *******)param_1[1];
  unaff_x22 = (undefined *)0x0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    ppppppplVar11 = param_1;
    ppppppplVar17 = (long *******)&DAT_10f62a9ea;
    pppppplVar15 = (long ******)0x1;
code_r0x0001092b4db8:
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(&lStack_68,ppppppplVar11);
    if ((char)lStack_68 == '\x01') {
      lVar24 = (long)ppppppplVar11 + (long)(*ppppppplVar11)[-3];
      lVar20 = *(long *)(lVar24 + 0x28);
      uVar7 = *(uint *)(lVar24 + 8);
      iVar22 = *(int *)(lVar24 + 0x90);
      if (iVar22 == -1) {
        __ZNKSt3__18ios_base6getlocEv(&stack0xffffffffffffffa8,lVar24);
        plVar8 = (long *)&stack0xffffffffffffffa8;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar8 + 0x38))();
        __ZNSt3__16localeD1Ev(&stack0xffffffffffffffa8);
        iVar22 = (int)plVar8;
        *(int *)(lVar24 + 0x90) = iVar22;
      }
      ppppppplVar9 = (long *******)((long)ppppppplVar17 + (long)pppppplVar15);
      if ((uVar7 & 0xb0) != 0x20) {
        ppppppplVar9 = ppppppplVar17;
      }
      FUN_1092b4f20(lVar20,ppppppplVar17,ppppppplVar9,
                    (long *******)((long)ppppppplVar17 + (long)pppppplVar15),lVar24,
                    (int)(char)iVar22);
      if (lVar20 == 0) {
        __ZNSt3__18ios_base5clearEj
                  ((long)ppppppplVar11 + (long)(*ppppppplVar11)[-3],
                   *(uint *)((long)ppppppplVar11 + (long)(*ppppppplVar11)[-3] + 0x20) | 5);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(&lStack_68);
    return ppppppplVar11;
  }
LAB_1098f5cfc:
  ___stack_chk_fail();
  if ((char)abStack_71[0] < '\0') {
    __ZdlPv(ppppppplStack_88);
  }
  ppppppplVar11 = param_1;
  __Unwind_Resume();
  pcStack_a8 = FUN_1098f5dac;
  if (*(int *)(ppppppplVar11 + 0xc) == 0) {
    return ppppppplVar11;
  }
  ppppppplVar9 = (long *******)((long)param_2 + 0x10);
  pppppplVar15 = *ppppppplVar9;
  if (pppppplVar15 == (long ******)0x0) {
    return ppppppplVar11;
  }
  ppppppplVar18 = ppppppplVar11;
  puStack_d0 = unaff_x22;
  ppppppplStack_c8 = unaff_x21;
  ppppppplStack_c0 = ppppppplVar17;
  ppppppplStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)pppppplVar15 + 0x2f) < '\0') {
    if (pppppplVar15[4] == (long *****)0x0) goto LAB_1098f5e80;
  }
  else if (*(char *)((long)pppppplVar15 + 0x2f) == '\0') goto LAB_1098f5e80;
  ppppppplVar18 = (long *******)ppppppplVar11[1];
  FUN_1098f4404(appppppplStack_108,ppppppplVar9,1);
  ppppppplVar17 = (long *******)appppppplStack_108;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (ppppppplVar17,0," ",1);
  pppppplStack_e8 = ppppppplVar17[1];
  ppppppplStack_f0 = (long *******)*ppppppplVar17;
  pppppplStack_e0 = ppppppplVar17[2];
  ppppppplVar17[1] = (long ******)0x0;
  ppppppplVar17[2] = (long ******)0x0;
  *ppppppplVar17 = (long ******)0x0;
  pppppplVar15 = pppppplStack_e8;
  ppppppplVar17 = ppppppplStack_f0;
  if (-1 < (long)pppppplStack_e0) {
    pppppplVar15 = (long ******)((ulong)pppppplStack_e0 >> 0x38);
    ppppppplVar17 = (long *******)&ppppppplStack_f0;
  }
  FUN_1092b4db8(ppppppplVar18,ppppppplVar17,pppppplVar15);
  if ((long)pppppplStack_e0 < 0) {
    ppppppplVar18 = ppppppplStack_f0;
    __ZdlPv(ppppppplStack_f0);
  }
  if (cStack_f1 < '\0') {
    __ZdlPv(appppppplStack_108[0]);
    ppppppplVar18 = appppppplStack_108[0];
  }
  pppppplVar15 = *ppppppplVar9;
  if (pppppplVar15 == (long ******)0x0) {
    return ppppppplVar18;
  }
LAB_1098f5e80:
  if (*(char *)((long)pppppplVar15 + 0x47) < '\0') {
    if (pppppplVar15[7] == (long *****)0x0) {
      return ppppppplVar18;
    }
  }
  else if (*(char *)((long)pppppplVar15 + 0x47) == '\0') {
    return ppppppplVar18;
  }
  FUN_1098f5474(ppppppplVar11);
  ppppppplVar17 = (long *******)ppppppplVar11[1];
  FUN_1098f4404(&ppppppplStack_f0,ppppppplVar9,2);
  pppppplVar15 = pppppplStack_e8;
  ppppppplVar11 = ppppppplStack_f0;
  if (-1 < (long)pppppplStack_e0) {
    pppppplVar15 = (long ******)((ulong)pppppplStack_e0 >> 0x38);
    ppppppplVar11 = (long *******)&ppppppplStack_f0;
  }
  FUN_1092b4db8(ppppppplVar17,ppppppplVar11,pppppplVar15);
  if ((long)pppppplStack_e0 < 0) {
    __ZdlPv(ppppppplStack_f0);
    ppppppplVar17 = ppppppplStack_f0;
  }
  return ppppppplVar17;
}



/* Entry: 1098f5dac; end: 1098f5f43;  */

void FUN_1098f5dac(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long alStack_68 [2];
  char cStack_51;
  undefined8 *****pppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
  plVar5 = (long *)(param_2 + 0x10);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(lVar4 + 0x2f) < '\0') {
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_1098f5e80;
  }
  else if (*(char *)(lVar4 + 0x2f) == '\0') goto LAB_1098f5e80;
  uVar6 = *(undefined8 *)(param_1 + 8);
  FUN_1098f4404(alStack_68,plVar5,1);
  plVar3 = alStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar3,0," ",1);
  uStack_48 = plVar3[1];
  pppppuStack_50 = (undefined8 *****)*plVar3;
  uStack_40 = plVar3[2];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = 0;
  uVar1 = uStack_48;
  ppppppuVar2 = (undefined8 ******)pppppuStack_50;
  if (-1 < (long)uStack_40) {
    uVar1 = uStack_40 >> 0x38;
    ppppppuVar2 = &pppppuStack_50;
  }
  FUN_1092b4db8(uVar6,ppppppuVar2,uVar1);
  if ((long)uStack_40 < 0) {
    __ZdlPv(pppppuStack_50);
  }
  if (cStack_51 < '\0') {
    __ZdlPv(alStack_68[0]);
  }
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    return;
  }
LAB_1098f5e80:
  if (*(char *)(lVar4 + 0x47) < '\0') {
    if (*(long *)(lVar4 + 0x38) == 0) {
      return;
    }
  }
  else if (*(char *)(lVar4 + 0x47) == '\0') {
    return;
  }
  FUN_1098f5474(param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  FUN_1098f4404(&pppppuStack_50,plVar5,2);
  uVar1 = uStack_48;
  ppppppuVar2 = (undefined8 ******)pppppuStack_50;
  if (-1 < (long)uStack_40) {
    uVar1 = uStack_40 >> 0x38;
    ppppppuVar2 = &pppppuStack_50;
  }
  FUN_1092b4db8(uVar6,ppppppuVar2,uVar1);
  if ((long)uStack_40 < 0) {
    __ZdlPv(pppppuStack_50);
  }
  return;
}



/* Entry: 1098f5f44; end: 1098f5f73;  */

long * FUN_1098f5f44(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  char acStack_68 [16];
  long lStack_58;
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    plVar7 = *(long **)(param_1 + 8);
    uVar3 = param_2[1];
    puVar5 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar5 = param_2;
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,plVar7);
    if (acStack_68[0] == '\x01') {
      lVar1 = (long)plVar7 + *(long *)(*plVar7 + -0x18);
      lVar8 = *(long *)(lVar1 + 0x28);
      uVar4 = *(uint *)(lVar1 + 8);
      iVar9 = *(int *)(lVar1 + 0x90);
      if (iVar9 == -1) {
        __ZNKSt3__18ios_base6getlocEv(&lStack_58,lVar1);
        plVar6 = &lStack_58;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar6,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar6 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_58);
        iVar9 = (int)plVar6;
        *(int *)(lVar1 + 0x90) = iVar9;
      }
      puVar2 = (undefined8 *)((long)puVar5 + uVar3);
      if ((uVar4 & 0xb0) != 0x20) {
        puVar2 = puVar5;
      }
      FUN_1092b4f20(lVar8,puVar5,puVar2,(undefined8 *)((long)puVar5 + uVar3),lVar1,(int)(char)iVar9)
      ;
      if (lVar8 == 0) {
        lVar1 = (long)plVar7 + *(long *)(*plVar7 + -0x18);
        __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 5);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
    return plVar7;
  }
  plVar7 = (long *)(param_1 + 0x10);
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 < *(ulong *)(param_1 + 0x20)) {
    func_0x000107c2ac74();
    plVar7 = (long *)(uVar3 + 0x18);
  }
  else {
    func_0x0001000480f4();
  }
  *(long **)(param_1 + 0x18) = plVar7;
  return plVar7;
}



/* Entry: 1098f5f74; end: 1098f5fcf;  */

void FUN_1098f5f74(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0xb0) >> 1 & 1) == 0) {
    FUN_1098f5474(param_1);
  }
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_1092b4db8(*(undefined8 *)(param_1 + 8),puVar2,uVar1);
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
  return;
}



/* Entry: 1098f5fd0; end: 1098f5ff7;  */

void FUN_1098f5fd0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)*(char *)(param_1 + 0x3f);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0x30);
  }
  lVar2 = (long)*(char *)(param_1 + 0x5f);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_1103462e8
  )(param_1 + 0x28,lVar1 - lVar2,0);
  return;
}



/* Entry: 1098f5ff8; end: 1098f6053;  */

undefined8 * FUN_1098f5ff8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1cac0;
  *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfe00;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  FUN_1098f6054(param_1 + 1);
  return param_1;
}



/* Entry: 1098f6054; end: 1098f6273;  */

void FUN_1098f6054(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1098f3160(&uStack_48,&DAT_10f2f9bc2);
  uVar1 = param_1;
  func_0x000107c2ad8c(param_1,&UNK_10f3172c4,&UNK_10f3172d0);
  func_0x000107c2ad6c(&uStack_48,uVar1);
  func_0x000107c2ad70(&uStack_48);
  FUN_1098f3160(&uStack_48,&DAT_10f45d6c6);
  uVar1 = param_1;
  func_0x000107c2ad8c(param_1,&UNK_10f3172b8,&UNK_10f3172c3);
  func_0x000107c2ad6c(&uStack_48,uVar1);
  func_0x000107c2ad70(&uStack_48);
  uStack_40 = 5;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_48 = uStack_48 & 0xffffffffffffff00;
  uVar1 = param_1;
  func_0x000107c2ad8c(param_1,&UNK_10f588209,&UNK_10f588220);
  func_0x000107c2ad6c(&uStack_48,uVar1);
  func_0x000107c2ad70(&uStack_48);
  uStack_40 = 5;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_48 = uStack_48 & 0xffffffffffffff00;
  uVar1 = param_1;
  func_0x000107c2ad8c(param_1,&UNK_10f588221,&UNK_10f588235);
  func_0x000107c2ad6c(&uStack_48,uVar1);
  func_0x000107c2ad70(&uStack_48);
  uStack_40 = 5;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_48 = uStack_48 & 0xffffffffffffff00;
  uVar1 = param_1;
  func_0x000107c2ad8c(param_1,&UNK_10f588236,&UNK_10f588246);
  func_0x000107c2ad6c(&uStack_48,uVar1);
  func_0x000107c2ad70(&uStack_48);
  uStack_40 = 5;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_48 = uStack_48 & 0xffffffffffffff00;
  uVar1 = param_1;
  func_0x000107c2ad8c(param_1,&UNK_10f588247,&UNK_10f58824f);
  func_0x000107c2ad6c(&uStack_48,uVar1);
  func_0x000107c2ad70(&uStack_48);
  uStack_40 = 1;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  uStack_48 = 0x11;
  uVar1 = param_1;
  func_0x000107c2ad8c(param_1,&UNK_10f588250,&UNK_10f588259);
  func_0x000107c2ad6c(&uStack_48,uVar1);
  func_0x000107c2ad70(&uStack_48);
  FUN_1098f3160(&uStack_48,&UNK_10f58827f);
  func_0x000107c2ad8c(param_1,&UNK_10f5881fb,&UNK_10f588208);
  func_0x000107c2ad6c(&uStack_48,param_1);
  func_0x000107c2ad70(&uStack_48);
  return;
}



/* Entry: 1098f6274; end: 1098f62d3;  */

undefined8 * FUN_1098f6274(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1cac0;
  func_0x000107c2ad70(param_1 + 1);
  return param_1;
}



/* Entry: 1098f62d4; end: 1098f68ab;  */

/* WARNING: Removing unreachable block (ram,0x0001098f6774) */
/* WARNING: Removing unreachable block (ram,0x0001098f63dc) */
/* WARNING: Removing unreachable block (ram,0x0001098f64e4) */
/* WARNING: Removing unreachable block (ram,0x0001098f64fc) */
/* WARNING: Removing unreachable block (ram,0x0001098f6500) */
/* WARNING: Removing unreachable block (ram,0x0001098f63e8) */
/* WARNING: Removing unreachable block (ram,0x0001098f63f0) */
/* WARNING: Removing unreachable block (ram,0x0001098f6640) */
/* WARNING: Removing unreachable block (ram,0x0001098f6784) */
/* WARNING: Removing unreachable block (ram,0x0001098f63d4) */
/* WARNING: Removing unreachable block (ram,0x0001098f6408) */
/* WARNING: Removing unreachable block (ram,0x0001098f6410) */
/* WARNING: Removing unreachable block (ram,0x0001098f6424) */
/* WARNING: Removing unreachable block (ram,0x0001098f6428) */
/* WARNING: Removing unreachable block (ram,0x0001098f642c) */
/* WARNING: Removing unreachable block (ram,0x0001098f6430) */
/* WARNING: Removing unreachable block (ram,0x0001098f6488) */
/* WARNING: Removing unreachable block (ram,0x0001098f6494) */
/* WARNING: Removing unreachable block (ram,0x0001098f649c) */
/* WARNING: Removing unreachable block (ram,0x0001098f64cc) */
/* WARNING: Removing unreachable block (ram,0x0001098f64d0) */
/* WARNING: Removing unreachable block (ram,0x0001098f6520) */
/* WARNING: Removing unreachable block (ram,0x0001098f643c) */
/* WARNING: Removing unreachable block (ram,0x0001098f64dc) */
/* WARNING: Removing unreachable block (ram,0x0001098f6524) */
/* WARNING: Removing unreachable block (ram,0x0001098f6540) */
/* WARNING: Removing unreachable block (ram,0x0001098f6544) */
/* WARNING: Removing unreachable block (ram,0x0001098f6548) */
/* WARNING: Removing unreachable block (ram,0x0001098f6448) */
/* WARNING: Removing unreachable block (ram,0x0001098f6450) */
/* WARNING: Removing unreachable block (ram,0x0001098f647c) */
/* WARNING: Removing unreachable block (ram,0x0001098f6480) */
/* WARNING: Removing unreachable block (ram,0x0001098f6484) */
/* WARNING: Removing unreachable block (ram,0x0001098f64d4) */
/* WARNING: Removing unreachable block (ram,0x0001098f654c) */
/* WARNING: Removing unreachable block (ram,0x0001098f6578) */
/* WARNING: Removing unreachable block (ram,0x0001098f6588) */
/* WARNING: Removing unreachable block (ram,0x0001098f6590) */
/* WARNING: Removing unreachable block (ram,0x0001098f65c0) */
/* WARNING: Removing unreachable block (ram,0x0001098f6598) */
/* WARNING: Removing unreachable block (ram,0x0001098f65cc) */
/* WARNING: Removing unreachable block (ram,0x0001098f6560) */
/* WARNING: Removing unreachable block (ram,0x0001098f65a8) */
/* WARNING: Removing unreachable block (ram,0x0001098f6568) */
/* WARNING: Removing unreachable block (ram,0x0001098f65b4) */
/* WARNING: Removing unreachable block (ram,0x0001098f65d4) */
/* WARNING: Removing unreachable block (ram,0x0001098f65d8) */
/* WARNING: Removing unreachable block (ram,0x0001098f65ec) */
/* WARNING: Removing unreachable block (ram,0x0001098f6600) */
/* WARNING: Removing unreachable block (ram,0x0001098f65f4) */
/* WARNING: Removing unreachable block (ram,0x0001098f660c) */
/* WARNING: Removing unreachable block (ram,0x0001098f6614) */
/* WARNING: Removing unreachable block (ram,0x0001098f6668) */
/* WARNING: Removing unreachable block (ram,0x0001098f6654) */
/* WARNING: Removing unreachable block (ram,0x0001098f6674) */
/* WARNING: Removing unreachable block (ram,0x0001098f6694) */
/* WARNING: Removing unreachable block (ram,0x0001098f667c) */
/* WARNING: Removing unreachable block (ram,0x0001098f66ac) */
/* WARNING: Removing unreachable block (ram,0x0001098f6724) */
/* WARNING: Removing unreachable block (ram,0x0001098f6730) */
/* WARNING: Removing unreachable block (ram,0x0001098f6744) */
/* WARNING: Removing unreachable block (ram,0x0001098f674c) */
/* WARNING: Removing unreachable block (ram,0x0001098f6754) */
/* WARNING: Removing unreachable block (ram,0x0001098f675c) */
/* WARNING: Removing unreachable block (ram,0x0001098f6764) */
/* WARNING: Removing unreachable block (ram,0x0001098f676c) */
/* WARNING: Removing unreachable block (ram,0x0001098f67b0) */

void FUN_1098f62d4(long param_1)

{
  code *pcVar1;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c2ad94(param_1 + 8,&UNK_10f3172b8);
  FUN_1098f3384(auStack_78);
  func_0x000107c2ad94(param_1 + 8,&UNK_10f3172c4);
  FUN_1098f3384(auStack_90);
  func_0x000107c2ad94(param_1 + 8,&UNK_10f5881fb);
  FUN_1098f3384(auStack_a8);
  func_0x000107c2ad94(param_1 + 8,&UNK_10f588209);
  func_0x000107c2ad80();
  func_0x000107c2ad94(param_1 + 8,&UNK_10f588221);
  func_0x000107c2ad80();
  func_0x000107c2ad94(param_1 + 8,&UNK_10f588236);
  func_0x000107c2ad80();
  func_0x000107c2ad94(param_1 + 8,&UNK_10f588247);
  func_0x000107c2ad80();
  func_0x000107c2ad94(param_1 + 8,&UNK_10f588250);
  func_0x000107c2ad7c();
  func_0x000107c31940(auStack_c0,&UNK_10f58825a);
  FUN_1098f2ea8(auStack_c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1098f67cc);
  (*pcVar1)();
}



/* Entry: 1098f68ac; end: 1098f68cf;  */

long * FUN_1098f68ac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puStack_178;
  uint uStack_170;
  undefined8 *puStack_160;
  uint auStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_51;
  
  puVar3 = (undefined8 *)*param_2;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar3 = param_2;
    uVar2 = (uint)*(byte *)((long)param_2 + 0x17);
  }
  plVar1 = (long *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) == '\0') {
    auStack_158[0] = CONCAT22(auStack_158[0]._2_2_,7);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    puVar5 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = puVar5 + 1;
    puStack_160 = puVar5;
    func_0x0001001150b4(&puStack_160,plVar1);
    func_0x0001001151c0(&puStack_160);
  }
  else if (*(char *)(param_1 + 0x10) != '\a') {
    func_0x000107c2ac5c(&puStack_160);
    func_0x000107c2ac6c(&puStack_160,&UNK_10f588006,0x40);
    func_0x000107c2ac60(&puStack_178,auStack_158,&uStack_51);
    func_0x000107c2ad58(&puStack_178);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100114b60);
    (*pcVar4)();
  }
  uVar2 = uVar2 * 4 | 2;
  lVar8 = *plVar1;
  plVar9 = (long *)(lVar8 + 8);
  plVar10 = (long *)*plVar9;
  puStack_178 = puVar3;
  uStack_170 = uVar2;
  if (plVar10 != (long *)0x0) {
    do {
      plVar6 = plVar10 + 4;
      func_0x0001001158d4(plVar6,&puStack_178);
      lVar8 = 8;
      if ((int)plVar6 == 0) {
        lVar8 = 0;
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar8);
    } while (plVar10 != (long *)0x0);
    lVar8 = *plVar1;
  }
  if (plVar9 != (long *)(lVar8 + 8)) {
    uVar7 = plVar9[4];
    func_0x000100115988(uVar7,(int)plVar9[5],puVar3,uVar2);
    plVar10 = plVar9;
    if ((uVar7 & 1) != 0) goto code_r0x000100114c60;
  }
  func_0x0001001151fc();
  func_0x00010011538c(&puStack_160,&puStack_178);
  plVar10 = (long *)*plVar1;
  func_0x000100115690(plVar10,plVar9,&puStack_160,&puStack_160);
  func_0x0001001151c0(&uStack_150);
  if ((puStack_160 != (undefined8 *)0x0) && ((auStack_158[0] & 3) == 1)) {
    func_0x000107c60fd0();
  }
code_r0x000100114c60:
  return plVar10 + 6;
}



/* Entry: 1098f68d0; end: 1098f69f7;  */

void FUN_1098f68d0(undefined8 param_1,long *param_2)

{
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  FUN_10926db08(&ppuStack_150);
  (**(code **)(*param_2 + 0x10))();
  (**(code **)(*param_2 + 0x10))();
  FUN_10926dc5c(param_1,&ppuStack_148,&uStack_41);
  (**(code **)(*param_2 + 8))(param_2);
  appuStack_e0[0] = &PTR_DAT_11088d708;
  ppuStack_150 = &PTR_SUB_11088d6e0;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 1098f69f8; end: 1098f6b23;  */

undefined8 * FUN_1098f69f8(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110b1ca98;
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  puStack_28 = param_1 + 2;
  func_0x000104c607c8(&puStack_28);
  return param_1;
}



/* Entry: 1098f6b24; end: 1098f6b2b;  */

long * FUN_1098f6b24(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098f6b2c; end: 1098f6b73;  */

void FUN_1098f6b2c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2add0(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1098f6b74; end: 1098f6bcf;  */

long * FUN_1098f6b74(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c2add0(plVar1 + 3);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098f6bd0; end: 1098f6beb;  */

long * FUN_1098f6bd0(long *param_1)

{
  long lVar1;
  
  func_0x0001098f6cc4(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1098f6bec; end: 1098f7163;  */

void FUN_1098f6bec(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_2 + 0x2f) < '\0') {
      __ZdlPv(*(undefined8 *)(param_2 + 0x18));
    }
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1098f7164; end: 1098f7417;  */

long * FUN_1098f7164(long *param_1,ulong param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint auStack_88 [15];
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (uint *)&lStack_48;
  uVar3 = *param_4;
  uVar10 = uVar3 & 7;
  puVar12 = puVar7;
  if (uVar10 < 6) {
    if (uVar10 == 4) {
      puVar2 = &UNK_10f416238;
      if ((uVar3 & 0x1000) != 0) {
        puVar2 = &DAT_10f3ddedc;
      }
      do {
        puVar12 = (uint *)((long)puVar12 + -1);
        *(undefined *)puVar12 = puVar2[param_2 & 0xf];
        bVar5 = 0xf < param_2;
        param_2 = param_2 >> 4;
      } while (bVar5);
      uVar8 = 0x5830;
      uVar10 = 0x7830;
LAB_1098f72dc:
      if ((uVar3 & 0x1000) != 0) {
        uVar10 = uVar8;
      }
      if (param_3 != 0) {
        uVar10 = uVar10 << 8;
      }
      if ((uVar3 & 0x2000) != 0) {
        param_3 = (uVar10 | param_3) + 0x2000000;
      }
    }
    else {
      if (uVar10 != 5) goto LAB_1098f725c;
      lVar9 = 0;
      uVar11 = param_2;
      do {
        puVar12 = (uint *)((long)puVar12 + -1);
        *(byte *)puVar12 = (byte)uVar11 & 7 | 0x30;
        lVar9 = lVar9 + 1;
        bVar5 = 7 < uVar11;
        uVar11 = uVar11 >> 3;
      } while (bVar5);
      if ((uVar3 >> 0xd & 1) != 0) {
        uVar10 = 0x30;
        if (param_3 != 0) {
          uVar10 = 0x3000;
        }
        if ((int)param_4[3] <= lVar9 && param_2 != 0) {
          param_3 = (uVar10 | param_3) + 0x1000000;
        }
      }
    }
  }
  else {
    if (uVar10 == 6) {
      do {
        puVar12 = (uint *)((long)puVar12 + -1);
        *(byte *)puVar12 = (byte)param_2 & 1 | 0x30;
        bVar5 = 1 < param_2;
        param_2 = param_2 >> 1;
      } while (bVar5);
      uVar8 = 0x4230;
      uVar10 = 0x6230;
      goto LAB_1098f72dc;
    }
    if (uVar10 == 7) {
      puVar7 = (uint *)0x1;
      FUN_1098e319c();
      plVar6 = param_1;
      goto LAB_1098f73e0;
    }
LAB_1098f725c:
    puVar12 = auStack_88;
    FUN_1098f7418(puVar12,param_2,0x40);
  }
  iVar4 = (int)puVar7 - (int)puVar12;
  uVar3 = param_4[2];
  uVar8 = param_4[3];
  uVar10 = iVar4 + (param_3 >> 0x18);
  if (uVar8 == 0xffffffff && uVar3 == 0) {
    if ((ulong)param_1[2] < param_1[1] + (ulong)uVar10) {
      (*(code *)param_1[3])(param_1);
    }
    param_3 = param_3 & 0xffffff;
    if (param_3 != 0) {
      do {
        lVar9 = param_1[1];
        uVar11 = lVar9 + 1;
        if ((ulong)param_1[2] < uVar11) {
          (*(code *)param_1[3])(param_1);
          lVar9 = param_1[1];
          uVar11 = lVar9 + 1;
        }
        param_1[1] = uVar11;
        *(char *)(*param_1 + lVar9) = (char)param_3;
        bVar5 = 0xff < param_3;
        param_3 = param_3 >> 8;
      } while (bVar5);
    }
    plVar6 = param_1;
    FUN_109446adc();
    param_4 = puVar12;
  }
  else {
    uVar1 = uVar10;
    if (iVar4 < (int)uVar8) {
      uVar1 = uVar8 + (param_3 >> 0x18);
    }
    if (uVar3 <= uVar10) {
      uVar3 = uVar10;
    }
    if ((*param_4 & 0x38) == 0x20) {
      uVar1 = uVar3;
    }
    puVar7 = (uint *)(ulong)uVar1;
    FUN_1098f749c();
    plVar6 = param_1;
  }
LAB_1098f73e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar10 = (uint)puVar7;
  puVar12 = param_4;
  if ((uint *)0x63 < param_4) {
    do {
      puVar12 = (uint *)((ulong)param_4 / 100);
      uVar10 = (int)puVar7 - 2;
      puVar7 = (uint *)(ulong)uVar10;
      *(undefined2 *)((long)plVar6 + (long)puVar7) =
           *(undefined2 *)(&UNK_10e00b0ea + ((ulong)param_4 % 100) * 2);
      uVar11 = (ulong)param_4 >> 4;
      param_4 = puVar12;
    } while (0x270 < uVar11);
  }
  if (puVar12 < (uint *)0xa) {
    uVar11 = (ulong)(uVar10 - 1);
    *(byte *)((long)plVar6 + uVar11) = (byte)puVar12 | 0x30;
  }
  else {
    uVar11 = (ulong)(uVar10 - 2);
    *(undefined2 *)((long)plVar6 + uVar11) = *(undefined2 *)(&UNK_10e00b0ea + (long)puVar12 * 2);
  }
  return (long *)((long)plVar6 + uVar11);
}



/* Entry: 1098f7418; end: 1098f749b;  */

long FUN_1098f7418(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  if (99 < param_2) {
    do {
      uVar1 = param_2 / 100;
      param_3 = param_3 - 2;
      *(undefined2 *)(param_1 + (ulong)param_3) =
           *(undefined2 *)(&UNK_10e00b0ea + (param_2 % 100) * 2);
      uVar2 = param_2 >> 4;
      param_2 = uVar1;
    } while (0x270 < uVar2);
  }
  if (uVar1 < 10) {
    uVar2 = (ulong)(param_3 - 1);
    *(byte *)(param_1 + uVar2) = (byte)uVar1 | 0x30;
  }
  else {
    uVar2 = (ulong)(param_3 - 2);
    *(undefined2 *)(param_1 + uVar2) = *(undefined2 *)(&UNK_10e00b0ea + uVar1 * 2);
  }
  return param_1 + uVar2;
}



/* Entry: 1098f749c; end: 1098f75c3;  */

long * FUN_1098f749c(long *param_1,uint *param_2,long param_3,ulong param_4,uint *param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 uStack_41;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar5 = uVar2 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar5 != 0) {
    FUN_1094471fc(param_1,uVar5,param_2);
  }
  uVar6 = *param_5 & 0xffffff;
  if ((*param_5 & 0xffffff) != 0) {
    do {
      lVar4 = param_1[1];
      uVar3 = lVar4 + 1;
      if ((ulong)param_1[2] < uVar3) {
        (*(code *)param_1[3])(param_1);
        lVar4 = param_1[1];
        uVar3 = lVar4 + 1;
      }
      param_1[1] = uVar3;
      *(char *)(*param_1 + lVar4) = (char)uVar6;
      bVar1 = 0xff < uVar6;
      uVar6 = uVar6 >> 8;
    } while (bVar1);
  }
  uStack_41 = 0x30;
  FUN_1098e350c(param_1,param_5[1],&uStack_41);
  FUN_109446adc();
  if (uVar2 != uVar5) {
    FUN_1094471fc(param_1,uVar2 - uVar5,param_2);
  }
  return param_1;
}



/* Entry: 1098f75c4; end: 1098f75ef;  */

/* WARNING: Removing unreachable block (ram,0x000109445aa8) */
/* WARNING: Removing unreachable block (ram,0x000109445ac0) */
/* WARNING: Removing unreachable block (ram,0x000109445b3c) */
/* WARNING: Removing unreachable block (ram,0x000109445b24) */
/* WARNING: Removing unreachable block (ram,0x000109445b74) */
/* WARNING: Removing unreachable block (ram,0x000109445b50) */

uint * FUN_1098f75c4(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (uint *)*param_2;
  if ((param_2[1] == 0) || ((byte)*puVar2 == 0x7d)) {
    return puVar2;
  }
  puVar6 = (uint *)((long)puVar2 + param_2[1]);
  if ((long)puVar6 - (long)puVar2 < 2) {
    if (puVar2 == puVar6) {
LAB_109445bc8:
      return puVar2;
    }
  }
  else {
    uVar9 = *(byte *)((long)puVar2 + 1) - 0x3c;
    if (uVar9 < 0x23 && (1L << ((ulong)uVar9 & 0x3f) & 0x400000005U) != 0) {
      bVar7 = 0;
      goto LAB_109445820;
    }
  }
  bVar7 = (byte)*puVar2;
LAB_109445820:
  uVar9 = 0;
  puVar4 = puVar6;
  puVar5 = param_1;
  do {
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      uVar8 = 0xc00;
      if (bVar7 != 0x20) {
        uVar8 = 0x800;
      }
      *param_1 = *param_1 & 0xfffff3ff | uVar8;
    case 0x2d:
      if (1 < uVar9) goto LAB_109445bf8;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 2;
      break;
    default:
      bVar7 = (byte)*puVar2;
      if (bVar7 == 0x7d) {
        return puVar2;
      }
      puVar5 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar7 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar2 + (long)puVar5);
      if ((long)puVar6 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar7 == 0x7b) goto LAB_109445c10;
      bVar7 = *pbVar1;
      if (bVar7 == 0x3c) {
        uVar8 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar8 = 0x18;
      }
      else {
        if (bVar7 != 0x3e) goto LAB_109445bf8;
        uVar8 = 0x10;
      }
      if (uVar9 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_1);
      *param_1 = *param_1 & 0xffffffc7 | uVar8;
      uVar9 = 1;
      puVar4 = puVar2;
      puVar2 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if (2 < uVar9) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x2000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 3;
      break;
    case 0x2e:
      if (5 < uVar9) goto LAB_109445bf8;
      puVar4 = puVar6;
      puVar5 = param_1;
      FUN_109445c1c();
      uVar9 = 6;
      break;
    case 0x30:
      if (3 < uVar9) goto LAB_109445bf8;
      if ((*param_1 & 0x38) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        *param_1 = *param_1 & 0xfffc7fc7 | 0x8020;
      }
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar9) goto LAB_109445bf8;
      puVar5 = param_1 + 2;
      puVar4 = puVar6;
      FUN_109445cb8();
      *param_1 = *param_1 & 0xffffff3f | (int)puVar4 << 6;
      uVar9 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar9 != 0) goto LAB_109445bf8;
      uVar9 = 0;
      if (bVar7 == 0x3e) {
        uVar9 = 0x10;
      }
      uVar8 = 0x18;
      if (bVar7 != 0x5e) {
        uVar8 = uVar9;
      }
      uVar9 = 8;
      if (bVar7 != 0x3c) {
        uVar9 = uVar8;
      }
      *param_1 = *param_1 & 0xffffffc7 | uVar9;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 1;
      break;
    case 0x3f:
LAB_109445bf8:
      FUN_1099a5aa4(&UNK_10f56d78b);
      FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
      puVar3 = &UNK_10f3dbec2;
      FUN_1099a5aa4();
      puVar2 = (uint *)(puVar3 + 1);
      if (puVar2 != puVar4) {
        FUN_109445cb8();
        *puVar5 = *puVar5 & 0xfffffcff | (int)puVar4 << 8;
        return puVar2;
      }
      puVar2 = (uint *)&UNK_10f56d7a4;
      FUN_1099a5aa4();
      *puVar2 = *puVar2 & 0xfffc7fff | (int)puVar5 << 0xf;
      if (puVar5 != (uint *)0x0) {
        if (puVar5 == (uint *)0x1) {
          *(byte *)(puVar2 + 1) = (byte)*puVar4;
          *(undefined2 *)((long)puVar2 + 5) = 0;
          return puVar2;
        }
        puVar6 = (uint *)0x0;
        do {
          *(byte *)((long)puVar2 + ((ulong)puVar6 & 3) + 4) = *(byte *)((long)puVar4 + (long)puVar6)
          ;
          puVar6 = (uint *)((long)puVar6 + 1);
        } while (puVar5 != puVar6);
      }
      return puVar2;
    case 0x41:
      *param_1 = *param_1 | 0x1000;
    case 0x61:
      uVar9 = *param_1 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *param_1 = uVar9;
      return (uint *)((long)puVar2 + 1);
    case 0x42:
      *param_1 = *param_1 | 0x1000;
    case 0x62:
      goto LAB_109445bf8;
    case 0x45:
      *param_1 = *param_1 | 0x1000;
    case 0x65:
      uVar9 = *param_1 & 0xfffffff8 | 1;
      goto code_r0x000109445bc0;
    case 0x46:
      *param_1 = *param_1 | 0x1000;
    case 0x66:
      uVar9 = *param_1 & 0xfffffff8 | 2;
      goto code_r0x000109445bc0;
    case 0x47:
      *param_1 = *param_1 | 0x1000;
    case 0x67:
      uVar9 = *param_1 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x4c:
      if (6 < uVar9) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x4000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar9 = 7;
      break;
    case 0x58:
      *param_1 = *param_1 | 0x1000;
    case 0x78:
      goto LAB_109445bf8;
    case 99:
      goto LAB_109445bf8;
    case 100:
      goto LAB_109445bf8;
    case 0x6f:
      goto LAB_109445bf8;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar2 == puVar6) {
      return puVar2;
    }
    bVar7 = (byte)*puVar2;
  } while( true );
}



/* Entry: 1098f75f0; end: 1098f7693;  */

long * FUN_1098f75f0(ushort *param_1,double *param_2,undefined8 *param_3)

{
  uint uVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  double *pdVar9;
  double *pdVar10;
  double **ppdVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 unaff_x22;
  undefined1 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  double *pdStack_2f8;
  long *plStack_2f0;
  double *pdStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [504];
  long lStack_d8;
  uint uStack_a0;
  undefined4 uStack_9c;
  char *pcStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  double *pdStack_70;
  undefined1 *puStack_68;
  double adStack_60 [2];
  undefined4 uStack_50;
  
  if ((*param_1 & 0x3c0) == 0) {
    plVar7 = (long *)*param_3;
    dVar20 = *param_2;
    pdVar9 = *(double **)param_1;
    puVar17 = *(undefined1 **)(param_1 + 4);
    uVar12 = param_3[3];
  }
  else {
    pdVar9 = *(double **)param_1;
    puVar17 = *(undefined1 **)(param_1 + 4);
    uVar15 = (uint)pdVar9 >> 6 & 3;
    uVar6 = (ulong)uVar15;
    if (uVar15 != 0) {
      FUN_1094472f0(uVar6,param_1 + 8,param_3);
      puVar17 = (undefined1 *)((ulong)puVar17 & 0xffffffff00000000 | uVar6 & 0xffffffff);
    }
    uVar15 = (uint)pdVar9 >> 8 & 3;
    uVar6 = (ulong)uVar15;
    if (uVar15 != 0) {
      FUN_1094472f0(uVar6,param_1 + 0x10,param_3);
      puVar17 = (undefined1 *)((ulong)puVar17 & 0xffffffff | uVar6 << 0x20);
    }
    plVar7 = (long *)*param_3;
    dVar20 = *param_2;
    uVar12 = param_3[3];
  }
  ppdVar11 = &pdStack_70;
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdStack_70 = pdVar9;
  puStack_68 = puVar17;
  if (((uint)pdVar9 >> 0xe & 1) == 0) {
LAB_1098f77a4:
    pdVar9 = pdStack_70;
    ppdVar11 = (double **)puStack_68;
    uVar13 = uVar12;
    FUN_1098f77ec();
    plVar8 = plVar7;
    dVar21 = dVar20;
  }
  else {
    uStack_50 = 10;
    pdVar9 = adStack_60;
    plVar8 = plVar7;
    uVar13 = uVar12;
    dVar21 = dVar20;
    adStack_60[0] = dVar20;
    FUN_1099a58c4();
    if (((ulong)plVar8 & 1) == 0) goto LAB_1098f77a4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return plVar7;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1098f77ec;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = (uint)pdVar9;
  uVar15 = uVar16 >> 10 & 3;
  if ((long)dVar21 < 0) {
    uVar15 = 1;
  }
  uStack_310 = pdVar9;
  uStack_308 = (undefined1 *)ppdVar11;
  uStack_90 = (double *)uVar12;
  plStack_88 = plVar7;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
    plVar7 = plVar8;
    pdVar10 = pdVar9;
    if (((uVar16 & 0x38) == 0x20) && (uVar15 != 0)) {
      lVar14 = plVar8[1];
      pdVar10 = (double *)(lVar14 + 1);
      if ((double *)plVar8[2] < pdVar10) {
        (*(code *)plVar8[3])();
        lVar14 = plVar8[1];
        pdVar10 = (double *)(lVar14 + 1);
      }
      plVar8[1] = (long)pdVar10;
      *(char *)(*plVar8 + lVar14) = (char)(0x202b2d00 >> (ulong)(uVar15 << 3));
      uVar15 = 0;
      if ((int)ppdVar11 != 0) {
        uStack_308 = (undefined1 *)CONCAT44(uStack_308._4_4_,(int)ppdVar11 + -1);
      }
    }
    uVar6 = (ulong)ppdVar11 >> 0x20;
    if ((long)ppdVar11 < 0) {
      if (((ulong)pdVar9 & 7) != 0) {
        uVar6 = 6;
        goto LAB_1098f791c;
      }
      FUN_1099a7bc4(dVar21);
      plStack_2f0 = plVar7;
      pdStack_2e8 = pdVar10;
      FUN_1098f7adc(plVar8,&plStack_2f0,&uStack_310,uVar15,0x10,uVar13);
    }
    else {
LAB_1098f791c:
      uStack_2d8 = 0x1098e8c88;
      uStack_2e0 = 500;
      pdStack_2e8 = (double *)0x0;
      uVar1 = uVar16 & 7;
      uVar18 = (uint)uVar6;
      plStack_2f0 = (long *)auStack_2d0;
      if (uVar1 == 1) {
        if (uVar18 == 0x7fffffff) goto LAB_1098f7aa0;
        uVar6 = (ulong)(uVar18 + 1);
LAB_1098f79c0:
        if ((ulong)ppdVar11 >> 0x20 != 0) {
          uStack_310 = (double *)(CONCAT44(uStack_310._4_4_,uVar16) | 0x2000);
        }
LAB_1098f79d8:
        uVar5 = uVar19;
        FUN_1098e6d30(dVar21,uVar6,&uStack_310,0,&plStack_2f0);
        uVar19 = (undefined4)uVar6;
        uStack_308 = (undefined1 *)CONCAT44(uVar19,(undefined4)uStack_308);
        plStack_300 = plStack_2f0;
        pdStack_2f8 = (double *)CONCAT44(uVar5,(int)pdStack_2e8);
        FUN_1098ea190(plVar8,&plStack_300,&uStack_310,uVar15,0x10,uVar13);
      }
      else {
        if (uVar1 == 2) goto LAB_1098f79c0;
        if (uVar1 != 4) {
          if (uVar18 < 2) {
            uVar18 = 1;
          }
          uVar6 = (ulong)uVar18;
          goto LAB_1098f79d8;
        }
        if (uVar15 != 0) {
          auStack_2d0[0] = (undefined1)(0x202b2d00 >> (ulong)(uVar15 << 3));
        }
        pdStack_2e8 = (double *)(ulong)(uVar15 != 0);
        FUN_1098e69b4(dVar21,pdVar9,uStack_308,&plStack_2f0);
        plStack_300 = plStack_2f0;
        pdStack_2f8 = pdStack_2e8;
        FUN_1098e8d3c(plVar8,&uStack_310,pdStack_2e8,pdStack_2e8,&plStack_300);
      }
      if (plStack_2f0 != (long *)auStack_2d0) {
        _free();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return plVar8;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    uStack_90 = pdVar9;
    if ((((ulong)pdVar9 & 0xff00000000) == 0x3000000000) && ((uVar16 & 0x38000) == 0x8000)) {
      uStack_90 = (double *)CONCAT35((int3)((ulong)pdVar9 >> 0x28),0x2000000000);
      uStack_90 = (double *)CONCAT44(uStack_90._4_4_,uVar16);
    }
    bVar4 = ((ulong)pdVar9 & 0x1000) != 0;
    pcStack_98 = "nan";
    if (bVar4) {
      pcStack_98 = "NAN";
    }
    pcVar2 = "inf";
    if (bVar4) {
      pcVar2 = "INF";
    }
    if (!NAN(dVar21)) {
      pcStack_98 = pcVar2;
    }
    uVar12 = 3;
    if (uVar15 != 0) {
      uVar12 = 4;
    }
    _uStack_a0 = CONCAT44((int)((ulong)unaff_x22 >> 0x20),uVar15);
    plStack_88 = (long *)ppdVar11;
    FUN_1098e7440(plVar8,&uStack_90,uVar12,uVar12,&uStack_a0);
    return plVar8;
  }
  ___stack_chk_fail();
LAB_1098f7aa0:
  FUN_1099a5aa4(&UNK_10f3dbf55);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1098f7ab0);
  (*pcVar3)();
}



/* Entry: 1098f7694; end: 1098f7743;  */

long * FUN_1098f7694(long *param_1,long *param_2,undefined1 *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  double *pdVar7;
  double *pdVar8;
  double **ppdVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  double *pdStack_368;
  long *plStack_360;
  double *pdStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [504];
  long lStack_148;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  double *pdStack_e0;
  undefined1 *puStack_d8;
  double adStack_d0 [2];
  undefined4 uStack_c0;
  long lStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [9];
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = auStack_70;
  plVar5 = (long *)auStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  dVar17 = 0.0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  auStack_70._0_4_ = 0x8000;
  auStack_70[4] = 0x20;
  auStack_70._5_4_ = 0;
  uStack_67 = 0xffffffff000000;
  FUN_1098f75c4();
  lVar11 = *param_2;
  *param_2 = (long)puVar4;
  param_2[1] = param_2[1] + (lVar11 - (long)puVar4);
  pdVar7 = (double *)*param_1;
  FUN_1098f75f0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar5;
  }
  ___stack_chk_fail();
  ppdVar9 = &pdStack_e0;
  pcStack_78 = FUN_1098f7744;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdStack_e0 = pdVar7;
  puStack_d8 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  if (((uint)pdVar7 >> 0xe & 1) == 0) {
LAB_1098f77a4:
    pdVar7 = pdStack_e0;
    ppdVar9 = (double **)puStack_d8;
    uVar10 = param_4;
    FUN_1098f77ec();
    plVar6 = plVar5;
    dVar18 = dVar17;
  }
  else {
    uStack_c0 = 10;
    pdVar7 = adStack_d0;
    plVar6 = plVar5;
    uVar10 = param_4;
    dVar18 = dVar17;
    adStack_d0[0] = dVar17;
    FUN_1099a58c4();
    if (((ulong)plVar6 & 1) == 0) goto LAB_1098f77a4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return plVar5;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_1098f77ec;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (uint)pdVar7;
  uVar12 = uVar13 >> 10 & 3;
  if ((long)dVar18 < 0) {
    uVar12 = 1;
  }
  uStack_380 = pdVar7;
  uStack_378 = (undefined1 *)ppdVar9;
  uStack_100 = (double *)param_4;
  plStack_f8 = plVar5;
  ppuStack_f0 = &puStack_80;
  if ((ulong)ABS(dVar18) < 0x7ff0000000000000) {
    plVar5 = plVar6;
    pdVar8 = pdVar7;
    if (((uVar13 & 0x38) == 0x20) && (uVar12 != 0)) {
      lVar11 = plVar6[1];
      pdVar8 = (double *)(lVar11 + 1);
      if ((double *)plVar6[2] < pdVar8) {
        (*(code *)plVar6[3])();
        lVar11 = plVar6[1];
        pdVar8 = (double *)(lVar11 + 1);
      }
      plVar6[1] = (long)pdVar8;
      *(char *)(*plVar6 + lVar11) = (char)(0x202b2d00 >> (ulong)(uVar12 << 3));
      uVar12 = 0;
      if ((int)ppdVar9 != 0) {
        uStack_378 = (undefined1 *)CONCAT44(uStack_378._4_4_,(int)ppdVar9 + -1);
      }
    }
    uVar16 = (ulong)ppdVar9 >> 0x20;
    if ((long)ppdVar9 < 0) {
      if (((ulong)pdVar7 & 7) != 0) {
        uVar16 = 6;
        goto LAB_1098f791c;
      }
      FUN_1099a7bc4(dVar18);
      plStack_360 = plVar5;
      pdStack_358 = pdVar8;
      FUN_1098f7adc(plVar6,&plStack_360,&uStack_380,uVar12,0x10,uVar10);
    }
    else {
LAB_1098f791c:
      uStack_348 = 0x1098e8c88;
      uStack_350 = 500;
      pdStack_358 = (double *)0x0;
      uVar1 = uVar13 & 7;
      uVar14 = (uint)uVar16;
      plStack_360 = (long *)auStack_340;
      if (uVar1 == 1) {
        if (uVar14 == 0x7fffffff) goto LAB_1098f7aa0;
        uVar16 = (ulong)(uVar14 + 1);
LAB_1098f79c0:
        if ((ulong)ppdVar9 >> 0x20 != 0) {
          uStack_380 = (double *)(CONCAT44(uStack_380._4_4_,uVar13) | 0x2000);
        }
LAB_1098f79d8:
        uVar3 = uVar15;
        FUN_1098e6d30(dVar18,uVar16,&uStack_380,0,&plStack_360);
        uVar15 = (undefined4)uVar16;
        uStack_378 = (undefined1 *)CONCAT44(uVar15,(undefined4)uStack_378);
        plStack_370 = plStack_360;
        pdStack_368 = (double *)CONCAT44(uVar3,(int)pdStack_358);
        FUN_1098ea190(plVar6,&plStack_370,&uStack_380,uVar12,0x10,uVar10);
      }
      else {
        if (uVar1 == 2) goto LAB_1098f79c0;
        if (uVar1 != 4) {
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          uVar16 = (ulong)uVar14;
          goto LAB_1098f79d8;
        }
        if (uVar12 != 0) {
          auStack_340[0] = (undefined1)(0x202b2d00 >> (ulong)(uVar12 << 3));
        }
        pdStack_358 = (double *)(ulong)(uVar12 != 0);
        FUN_1098e69b4(dVar18,pdVar7,uStack_378,&plStack_360);
        plStack_370 = plStack_360;
        pdStack_368 = pdStack_358;
        FUN_1098e8d3c(plVar6,&uStack_380,pdStack_358,pdStack_358,&plStack_370);
      }
      if (plStack_360 != (long *)auStack_340) {
        _free();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
      return plVar6;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    uStack_100 = pdVar7;
    if ((((ulong)pdVar7 & 0xff00000000) == 0x3000000000) && ((uVar13 & 0x38000) == 0x8000)) {
      uStack_100 = (double *)CONCAT35((int3)((ulong)pdVar7 >> 0x28),0x2000000000);
      uStack_100 = (double *)CONCAT44(uStack_100._4_4_,uVar13);
    }
    uVar10 = 3;
    if (uVar12 != 0) {
      uVar10 = 4;
    }
    plStack_f8 = (long *)ppdVar9;
    FUN_1098e7440(plVar6,&uStack_100,uVar10,uVar10,&stack0xfffffffffffffef0);
    return plVar6;
  }
  ___stack_chk_fail();
LAB_1098f7aa0:
  FUN_1099a5aa4(&UNK_10f3dbf55);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f7ab0);
  (*pcVar2)();
}



/* Entry: 1098f7744; end: 1098f77eb;  */

long * FUN_1098f7744(double param_1,long *param_2,double *param_3,undefined1 *param_4,
                    undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  double *pdVar6;
  double *pdVar7;
  double **ppdVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  double dVar16;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  double *pdStack_2f8;
  long *plStack_2f0;
  double *pdStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [504];
  long lStack_d8;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  double *pdStack_70;
  undefined1 *puStack_68;
  double adStack_60 [2];
  undefined4 uStack_50;
  long lStack_38;
  
  ppdVar8 = &pdStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pdStack_70 = param_3;
  puStack_68 = param_4;
  if (((uint)param_3 >> 0xe & 1) == 0) {
LAB_1098f77a4:
    pdVar6 = pdStack_70;
    ppdVar8 = (double **)puStack_68;
    uVar9 = param_5;
    FUN_1098f77ec();
    plVar4 = param_2;
    dVar16 = param_1;
  }
  else {
    uStack_50 = 10;
    pdVar6 = adStack_60;
    plVar4 = param_2;
    uVar9 = param_5;
    dVar16 = param_1;
    adStack_60[0] = param_1;
    FUN_1099a58c4();
    if (((ulong)plVar4 & 1) == 0) goto LAB_1098f77a4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1098f77ec;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = (uint)pdVar6;
  uVar11 = uVar12 >> 10 & 3;
  if ((long)dVar16 < 0) {
    uVar11 = 1;
  }
  uStack_310 = pdVar6;
  uStack_308 = (undefined1 *)ppdVar8;
  uStack_90 = (double *)param_5;
  plStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((ulong)ABS(dVar16) < 0x7ff0000000000000) {
    plVar5 = plVar4;
    pdVar7 = pdVar6;
    if (((uVar12 & 0x38) == 0x20) && (uVar11 != 0)) {
      lVar10 = plVar4[1];
      pdVar7 = (double *)(lVar10 + 1);
      if ((double *)plVar4[2] < pdVar7) {
        (*(code *)plVar4[3])();
        lVar10 = plVar4[1];
        pdVar7 = (double *)(lVar10 + 1);
      }
      plVar4[1] = (long)pdVar7;
      *(char *)(*plVar4 + lVar10) = (char)(0x202b2d00 >> (ulong)(uVar11 << 3));
      uVar11 = 0;
      if ((int)ppdVar8 != 0) {
        uStack_308 = (undefined1 *)CONCAT44(uStack_308._4_4_,(int)ppdVar8 + -1);
      }
    }
    uVar15 = (ulong)ppdVar8 >> 0x20;
    if ((long)ppdVar8 < 0) {
      if (((ulong)pdVar6 & 7) != 0) {
        uVar15 = 6;
        goto LAB_1098f791c;
      }
      FUN_1099a7bc4(dVar16);
      plStack_2f0 = plVar5;
      pdStack_2e8 = pdVar7;
      FUN_1098f7adc(plVar4,&plStack_2f0,&uStack_310,uVar11,0x10,uVar9);
    }
    else {
LAB_1098f791c:
      uStack_2d8 = 0x1098e8c88;
      uStack_2e0 = 500;
      pdStack_2e8 = (double *)0x0;
      uVar1 = uVar12 & 7;
      uVar13 = (uint)uVar15;
      plStack_2f0 = (long *)auStack_2d0;
      if (uVar1 == 1) {
        if (uVar13 == 0x7fffffff) goto LAB_1098f7aa0;
        uVar15 = (ulong)(uVar13 + 1);
LAB_1098f79c0:
        if ((ulong)ppdVar8 >> 0x20 != 0) {
          uStack_310 = (double *)(CONCAT44(uStack_310._4_4_,uVar12) | 0x2000);
        }
LAB_1098f79d8:
        uVar3 = uVar14;
        FUN_1098e6d30(dVar16,uVar15,&uStack_310,0,&plStack_2f0);
        uVar14 = (undefined4)uVar15;
        uStack_308 = (undefined1 *)CONCAT44(uVar14,(undefined4)uStack_308);
        plStack_300 = plStack_2f0;
        pdStack_2f8 = (double *)CONCAT44(uVar3,(int)pdStack_2e8);
        FUN_1098ea190(plVar4,&plStack_300,&uStack_310,uVar11,0x10,uVar9);
      }
      else {
        if (uVar1 == 2) goto LAB_1098f79c0;
        if (uVar1 != 4) {
          if (uVar13 < 2) {
            uVar13 = 1;
          }
          uVar15 = (ulong)uVar13;
          goto LAB_1098f79d8;
        }
        if (uVar11 != 0) {
          auStack_2d0[0] = (undefined1)(0x202b2d00 >> (ulong)(uVar11 << 3));
        }
        pdStack_2e8 = (double *)(ulong)(uVar11 != 0);
        FUN_1098e69b4(dVar16,pdVar6,uStack_308,&plStack_2f0);
        plStack_300 = plStack_2f0;
        pdStack_2f8 = pdStack_2e8;
        FUN_1098e8d3c(plVar4,&uStack_310,pdStack_2e8,pdStack_2e8,&plStack_300);
      }
      if (plStack_2f0 != (long *)auStack_2d0) {
        _free();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
      return plVar4;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    uStack_90 = pdVar6;
    if ((((ulong)pdVar6 & 0xff00000000) == 0x3000000000) && ((uVar12 & 0x38000) == 0x8000)) {
      uStack_90 = (double *)CONCAT35((int3)((ulong)pdVar6 >> 0x28),0x2000000000);
      uStack_90 = (double *)CONCAT44(uStack_90._4_4_,uVar12);
    }
    uVar9 = 3;
    if (uVar11 != 0) {
      uVar9 = 4;
    }
    plStack_88 = (long *)ppdVar8;
    FUN_1098e7440(plVar4,&uStack_90,uVar9,uVar9,&stack0xffffffffffffff60);
    return plVar4;
  }
  ___stack_chk_fail();
LAB_1098f7aa0:
  FUN_1099a5aa4(&UNK_10f3dbf55);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1098f7ab0);
  (*pcVar2)();
}



/* Entry: 1098f77ec; end: 1098f7adb;  */

long * FUN_1098f77ec(ulong param_1,long *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  ulong uStack_288;
  long *plStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [504];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (uint)param_3;
  uVar8 = uVar9 >> 10 & 3;
  if ((long)param_1 < 0) {
    uVar8 = 1;
  }
  uStack_2a0 = param_3;
  uStack_298 = param_4;
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    plVar5 = param_2;
    uVar6 = param_3;
    if (((uVar9 & 0x38) == 0x20) && (uVar8 != 0)) {
      lVar7 = param_2[1];
      uVar6 = lVar7 + 1;
      if ((ulong)param_2[2] < uVar6) {
        (*(code *)param_2[3])();
        lVar7 = param_2[1];
        uVar6 = lVar7 + 1;
      }
      param_2[1] = uVar6;
      *(char *)(*param_2 + lVar7) = (char)(0x202b2d00 >> (ulong)(uVar8 << 3));
      uVar8 = 0;
      if ((int)param_4 != 0) {
        uStack_298 = CONCAT44(uStack_298._4_4_,(int)param_4 + -1);
      }
    }
    uVar12 = param_4 >> 0x20;
    if ((long)param_4 < 0) {
      if ((param_3 & 7) != 0) {
        uVar12 = 6;
        goto LAB_1098f791c;
      }
      FUN_1099a7bc4(param_1);
      plStack_280 = plVar5;
      uStack_278 = uVar6;
      FUN_1098f7adc(param_2,&plStack_280,&uStack_2a0,uVar8,0x10,param_5);
    }
    else {
LAB_1098f791c:
      uStack_268 = 0x1098e8c88;
      uStack_270 = 500;
      uStack_278 = 0;
      uVar1 = uVar9 & 7;
      uVar10 = (uint)uVar12;
      plStack_280 = (long *)auStack_260;
      if (uVar1 == 1) {
        if (uVar10 == 0x7fffffff) goto LAB_1098f7aa0;
        uVar12 = (ulong)(uVar10 + 1);
LAB_1098f79c0:
        if (param_4 >> 0x20 != 0) {
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar9) | 0x2000;
        }
LAB_1098f79d8:
        uVar4 = uVar11;
        FUN_1098e6d30(param_1,uVar12,&uStack_2a0,0,&plStack_280);
        uVar11 = (undefined4)uVar12;
        uStack_298 = CONCAT44(uVar11,(undefined4)uStack_298);
        plStack_290 = plStack_280;
        uStack_288 = CONCAT44(uVar4,(int)uStack_278);
        FUN_1098ea190(param_2,&plStack_290,&uStack_2a0,uVar8,0x10,param_5);
      }
      else {
        if (uVar1 == 2) goto LAB_1098f79c0;
        if (uVar1 != 4) {
          if (uVar10 < 2) {
            uVar10 = 1;
          }
          uVar12 = (ulong)uVar10;
          goto LAB_1098f79d8;
        }
        if (uVar8 != 0) {
          auStack_260[0] = (undefined1)(0x202b2d00 >> (ulong)(uVar8 << 3));
        }
        uStack_278 = (ulong)(uVar8 != 0);
        FUN_1098e69b4(param_1,param_3,uStack_298,&plStack_280);
        plStack_290 = plStack_280;
        uStack_288 = uStack_278;
        FUN_1098e8d3c(param_2,&uStack_2a0,uStack_278,uStack_278,&plStack_290);
      }
      if (plStack_280 != (long *)auStack_260) {
        _free();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return param_2;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    uVar2 = 3;
    if (uVar8 != 0) {
      uVar2 = 4;
    }
    FUN_1098e7440(param_2,&stack0xffffffffffffffe0,uVar2,uVar2,&stack0xffffffffffffffd0);
    return param_2;
  }
  ___stack_chk_fail();
LAB_1098f7aa0:
  FUN_1099a5aa4(&UNK_10f3dbf55);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1098f7ab0);
  (*pcVar3)();
}



/* Entry: 1098f7adc; end: 1098f7edb;  */

undefined1 *
FUN_1098f7adc(undefined1 *param_1,ulong *param_2,uint *param_3,int param_4,uint param_5,
             ulong param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  int **ppiVar10;
  int iVar11;
  uint uVar12;
  undefined1 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int *piStack_100;
  ulong *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  ulong *puStack_d8;
  uint *puStack_d0;
  uint *puStack_c8;
  undefined1 *puStack_c0;
  uint uStack_b8;
  undefined4 uStack_b4;
  char cStack_a1;
  undefined8 uStack_a0;
  char cStack_89;
  uint uStack_88;
  int iStack_84;
  undefined1 auStack_7e [2];
  uint uStack_7c;
  ulong uStack_78;
  int aiStack_6c [3];
  
  ppiVar10 = &piStack_100;
  uVar16 = *param_2;
  uVar7 = (uint)(byte)(&UNK_10e00b8f6)[LZCOUNT(uVar16 | 1) ^ 0x3f] -
          (uint)(uVar16 < *(ulong *)(&UNK_10e00b938 +
                                    (ulong)(byte)(&UNK_10e00b8f6)[LZCOUNT(uVar16 | 1) ^ 0x3f] * 8));
  auStack_7e[1] = 0x30;
  uVar2 = uVar7;
  if (param_4 != 0) {
    uVar2 = uVar7 + 1;
  }
  uVar15 = (ulong)uVar2;
  uVar2 = *param_3;
  uStack_7c = uVar7;
  uStack_78 = uVar16;
  aiStack_6c[0] = param_4;
  if ((uVar2 >> 0xe & 1) == 0) {
    uVar8 = 0x2e;
  }
  else {
    uVar8 = param_6;
    FUN_1099a8090();
    uVar2 = *param_3;
  }
  auStack_7e[0] = (undefined1)uVar8;
  uVar5 = (uint)param_2[1];
  iVar11 = uVar5 + uVar7;
  uVar6 = param_3[3];
  uVar12 = uVar2 & 7;
  if (uVar12 == 1) goto LAB_1098f7bf4;
  if (uVar12 != 2) {
    if (iVar11 < -3) {
LAB_1098f7bf4:
      if ((uVar2 >> 0xd & 1) == 0) {
        if (uVar7 == 1) {
          uVar8 = 0;
          uVar12 = 0;
          auStack_7e[0] = 0;
        }
        else {
          uVar12 = 0;
        }
      }
      else {
        uVar12 = uVar6 - uVar7 & ((int)(uVar6 - uVar7) >> 0x1f ^ 0xffffffffU);
        uVar15 = uVar12 + uVar15;
      }
      iVar4 = 1 - iVar11;
      if (1 - iVar11 == 0 || 1 < iVar11) {
        iVar4 = iVar11 + -1;
      }
      lVar14 = 3;
      if (999 < iVar4) {
        lVar14 = 4;
      }
      if (iVar4 < 100) {
        lVar14 = 2;
      }
      lVar1 = 2;
      if ((uVar8 & 0xff) != 0) {
        lVar1 = 3;
      }
      lVar1 = uVar15 + lVar14 + lVar1;
      uVar13 = 0x65;
      if ((uVar2 & 0x1000) != 0) {
        uVar13 = 0x45;
      }
      piStack_100 = (int *)CONCAT44(piStack_100._4_4_,param_4);
      uStack_f0._0_5_ = CONCAT14((char)uVar8,uVar7);
      uStack_e8._0_6_ = CONCAT15(uVar13,CONCAT14(0x30,uVar12));
      puStack_e0 = (uint *)CONCAT44(puStack_e0._4_4_,iVar11 + -1);
      puStack_f8 = (ulong *)uVar16;
      if ((int)param_3[2] < 1) {
        if (*(ulong *)(param_1 + 0x10) < (ulong)(*(long *)(param_1 + 8) + lVar1)) {
          (**(code **)(param_1 + 0x18))(param_1);
        }
        FUN_1098f7edc(&piStack_100,param_1);
      }
      else {
        func_0x0001098f80cc(param_1,param_3,lVar1,lVar1,&piStack_100);
        ppiVar10 = (int **)param_1;
      }
      return (undefined1 *)ppiVar10;
    }
    uVar3 = uVar6;
    if ((int)uVar6 < 1) {
      uVar3 = param_5;
    }
    if ((int)uVar3 < iVar11) goto LAB_1098f7bf4;
  }
  iStack_84 = iVar11;
  if (-1 < (int)uVar5) {
    lVar1 = uVar5 + uVar15;
    uStack_88 = uVar6 - iVar11;
    lVar14 = lVar1;
    if ((uVar2 >> 0xd & 1) != 0) {
      lVar14 = lVar1 + 1;
      if ((uVar12 == 2) || (0 < (int)uStack_88)) {
        lVar14 = lVar14 + (ulong)uStack_88;
        if ((int)uStack_88 < 1) {
          lVar14 = lVar1 + 1;
        }
      }
      else {
        uStack_88 = 0;
      }
    }
    FUN_1098e7eac(&uStack_b8,param_6,uVar2 >> 0xe & 1);
    puVar9 = &uStack_b8;
    func_0x0001098e7b24(puVar9,iVar11);
    piStack_100 = aiStack_6c;
    puStack_f8 = &uStack_78;
    lVar14 = lVar14 + ((ulong)puVar9 & 0xffffffff);
    uStack_f0 = &uStack_7c;
    puStack_d0 = (uint *)auStack_7e;
    puStack_c8 = &uStack_88;
    puStack_c0 = auStack_7e + 1;
    uStack_e8 = param_2;
    puStack_e0 = &uStack_b8;
    puStack_d8 = (ulong *)param_3;
    func_0x0001098f8190(param_1,param_3,lVar14,lVar14,&piStack_100);
LAB_1098f7ddc:
    if (cStack_89 < '\0') {
      __ZdlPv(uStack_a0);
    }
    if (-1 < cStack_a1) {
      return param_1;
    }
    __ZdlPv(CONCAT44(uStack_b4,uStack_b8));
    return param_1;
  }
  if (0 < iVar11) {
    uVar7 = uVar6 - uVar7 & (int)(uVar2 << 0x12) >> 0x1f;
    uStack_88 = uVar7;
    FUN_1098e7eac(&uStack_b8,param_6,uVar2 >> 0xe & 1);
    puVar9 = &uStack_b8;
    func_0x0001098e7b24(puVar9,iVar11);
    piStack_100 = aiStack_6c;
    puStack_f8 = &uStack_78;
    uStack_f0 = &uStack_7c;
    uStack_e8 = (ulong *)&iStack_84;
    lVar14 = ((uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) + 1) + uVar15 +
             ((ulong)puVar9 & 0xffffffff);
    puStack_e0 = (uint *)auStack_7e;
    puStack_d0 = &uStack_88;
    puStack_c8 = (uint *)(auStack_7e + 1);
    puStack_d8 = (ulong *)&uStack_b8;
    FUN_1098f856c(param_1,param_3,lVar14,lVar14,&piStack_100);
    goto LAB_1098f7ddc;
  }
  uStack_b8 = -iVar11;
  if (uVar7 == 0) {
    if ((-1 < (int)uVar6) && ((int)uVar6 < (int)uStack_b8)) {
      uStack_b8 = uVar6;
    }
    if (uStack_b8 == 0) {
      uStack_88 = CONCAT31(uStack_88._1_3_,(char)((uVar2 & 0x2000) >> 0xd));
      iVar11 = 1;
      if ((uVar2 & 0x2000) != 0) {
        iVar11 = 2;
      }
      goto LAB_1098f7e34;
    }
  }
  uStack_88 = CONCAT31(uStack_88._1_3_,1);
  iVar11 = 2;
LAB_1098f7e34:
  piStack_100 = aiStack_6c;
  puStack_f8 = (ulong *)&uStack_88;
  uStack_f0 = (uint *)auStack_7e;
  uStack_e8 = (ulong *)&uStack_b8;
  puStack_e0 = (uint *)(auStack_7e + 1);
  puStack_d8 = &uStack_78;
  puStack_d0 = &uStack_7c;
  FUN_1098f8988(param_1,param_3,(iVar11 + uStack_b8) + uVar15,(iVar11 + uStack_b8) + uVar15,
                &piStack_100);
  return param_1;
}



/* Entry: 1098f7edc; end: 1098f80cb;  */

ulong FUN_1098f7edc(uint *param_1,uint *param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined4 uStack_4d;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_1;
  if (uVar1 != 0) {
    lVar5 = *(long *)(param_2 + 2);
    uVar6 = lVar5 + 1;
    if (*(ulong *)(param_2 + 4) < uVar6) {
      (**(code **)(param_2 + 6))(param_2);
      lVar5 = *(long *)(param_2 + 2);
      uVar6 = lVar5 + 1;
    }
    *(ulong *)(param_2 + 2) = uVar6;
    *(char *)(*(long *)param_2 + lVar5) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  uVar6 = *(ulong *)(param_1 + 2);
  uVar1 = param_1[4];
  lVar5 = (long)(int)uVar1;
  uVar3 = param_1[5];
  if ((byte)uVar3 == 0) {
    FUN_1098f7418(&uStack_4d,uVar6,lVar5);
    pbVar10 = (byte *)((long)&uStack_4d + lVar5);
  }
  else {
    pbVar10 = (byte *)((long)&uStack_4d + lVar5 + 1);
    pbVar8 = pbVar10;
    if (2 < (int)uVar1) {
      uVar9 = (uVar1 - 1 >> 1) + 1;
      uVar7 = uVar6;
      do {
        uVar6 = uVar7 / 100;
        pbVar8 = pbVar8 + -2;
        *(undefined2 *)pbVar8 = *(undefined2 *)(&UNK_10e00b0ea + (uVar7 % 100) * 2);
        uVar9 = uVar9 - 1;
        uVar7 = uVar6;
      } while (1 < uVar9);
    }
    uVar7 = uVar6;
    if ((uVar1 - 1 & 1) != 0) {
      uVar7 = uVar6 / 10;
      pbVar8 = pbVar8 + -1;
      *pbVar8 = (char)uVar6 + (char)uVar7 * -10 | 0x30;
    }
    pbVar8[-1] = (byte)uVar3;
    FUN_1098f7418(pbVar8 + -2,uVar7,1);
  }
  puVar4 = &uStack_4d;
  FUN_1098c2be4(puVar4,pbVar10);
  if (0 < (int)param_1[6]) {
    param_2 = param_1 + 7;
    FUN_1098e7c90();
  }
  uVar2 = *(undefined1 *)((long)param_1 + 0x1d);
  lVar5 = *(long *)(puVar4 + 2);
  uVar6 = lVar5 + 1;
  if (*(ulong *)(puVar4 + 4) < uVar6) {
    (**(code **)(puVar4 + 6))(puVar4);
    lVar5 = *(long *)(puVar4 + 2);
    uVar6 = lVar5 + 1;
  }
  *(ulong *)(puVar4 + 2) = uVar6;
  *(undefined1 *)(*(long *)puVar4 + lVar5) = uVar2;
  uVar6 = (ulong)param_1[8];
  FUN_1098e7d04();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar6;
  }
  ___stack_chk_fail();
  uVar7 = 0;
  if (param_4 <= puVar4[2]) {
    uVar7 = puVar4[2] - param_4;
  }
  uVar11 = uVar7 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*puVar4 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(uVar6 + 0x10) <
      (long)param_2 + uVar7 * ((ulong)(*puVar4 >> 0xf) & 7) + *(long *)(uVar6 + 8)) {
    (**(code **)(uVar6 + 0x18))(uVar6);
  }
  if (uVar11 != 0) {
    FUN_1094471fc(uVar6,uVar11,puVar4);
  }
  FUN_1098f7edc(param_5,uVar6);
  if (uVar7 != uVar11) {
    lVar5 = uVar7 - uVar11;
    uVar6 = (ulong)(*puVar4 >> 0xf) & 7;
    if ((int)uVar6 == 1) {
      func_0x000109447280(param_5,lVar5,&stack0xffffffffffffff7f);
    }
    else if (lVar5 != 0) {
      do {
        FUN_109446adc(param_5,puVar4 + 1,(long)(puVar4 + 1) + uVar6);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    return param_5;
  }
  return param_5;
}



/* Entry: 1098f80cc; end: 1098f8253;  */

undefined8 FUN_1098f80cc(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_1098f7edc(param_5,param_1);
  if (uVar2 == uVar3) {
    return param_5;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_5,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_5;
}



/* Entry: 1098f8254; end: 1098f8357;  */

long * FUN_1098f8254(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = *(uint *)*param_1;
  if (uVar1 != 0) {
    lVar5 = param_2[1];
    uVar3 = lVar5 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar5 = param_2[1];
      uVar3 = lVar5 + 1;
    }
    param_2[1] = uVar3;
    *(char *)(*param_2 + lVar5) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098f8358(param_2,*(undefined8 *)param_1[1],*(undefined4 *)param_1[2],
                *(undefined4 *)(param_1[3] + 8),param_1[4]);
  if ((*(byte *)(param_1[5] + 1) >> 5 & 1) != 0) {
    uVar2 = *(undefined1 *)param_1[6];
    lVar5 = param_2[1];
    uVar3 = lVar5 + 1;
    if ((ulong)param_2[2] < uVar3) {
      (*(code *)param_2[3])(param_2);
      lVar5 = param_2[1];
      uVar3 = lVar5 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)(*param_2 + lVar5) = uVar2;
    iVar6 = *(int *)param_1[7];
    if (0 < iVar6) {
      puVar4 = (undefined1 *)param_1[8];
      if (0 < iVar6) {
        do {
          uVar2 = *puVar4;
          lVar5 = param_2[1];
          uVar3 = lVar5 + 1;
          if ((ulong)param_2[2] < uVar3) {
            (*(code *)param_2[3])(param_2);
            lVar5 = param_2[1];
            uVar3 = lVar5 + 1;
          }
          param_2[1] = uVar3;
          *(undefined1 *)(*param_2 + lVar5) = uVar2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      return param_2;
    }
  }
  return param_2;
}



/* Entry: 1098f8358; end: 1098f848f;  */

uint **** FUN_1098f8358(uint ****param_1,undefined8 param_2,undefined8 param_3,uint ****param_4,
                       uint ****param_5)

{
  uint uVar1;
  uint ****ppppuVar2;
  uint ****ppppuVar3;
  uint ***pppuVar4;
  long lVar5;
  uint ****ppppuVar6;
  uint ****ppppuVar7;
  uint ****ppppuVar8;
  uint ***pppuVar9;
  uint ***pppuVar10;
  uint ****unaff_x20;
  ulong uVar11;
  ulong uVar12;
  uint ****unaff_x22;
  uint **appuStack_2bc [2];
  long lStack_2a8;
  uint ***pppuStack_2a0;
  uint ***pppuStack_298;
  uint ***pppuStack_290;
  uint ***pppuStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined1 uStack_261;
  uint ***pppuStack_260;
  uint ***pppuStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  uint **appuStack_240 [63];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = param_5[4];
  if (-1 < (char)*(byte *)((long)param_5 + 0x2f)) {
    pppuVar4 = (uint ***)(ulong)*(byte *)((long)param_5 + 0x2f);
  }
  if (pppuVar4 == (uint ***)0x0) {
    ppppuVar3 = param_1;
    ppppuVar7 = param_4;
    FUN_1098f8490();
    pppuStack_260 = (uint ***)CONCAT71(pppuStack_260._1_7_,0x30);
    ppppuVar6 = &pppuStack_260;
    FUN_1098e7c90();
    ppppuVar8 = param_5;
    ppppuVar2 = ppppuVar3;
  }
  else {
    uStack_248 = 0x1098e8c88;
    unaff_x22 = (uint ****)appuStack_240;
    uStack_250 = 500;
    pppuStack_258 = (uint ***)0x0;
    ppppuVar8 = param_5;
    pppuStack_260 = (uint ***)unaff_x22;
    FUN_1098f8490(&pppuStack_260);
    uStack_261 = 0x30;
    FUN_1098e7c90(&pppuStack_260,param_4,&uStack_261);
    ppppuVar2 = param_5;
    param_4 = param_1;
    ppppuVar6 = (uint ****)pppuStack_260;
    ppppuVar7 = (uint ****)pppuStack_258;
    FUN_1098e834c(param_5);
    ppppuVar3 = (uint ****)pppuStack_260;
    unaff_x20 = param_5;
    if ((uint ****)pppuStack_260 != unaff_x22) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar2;
  }
  ___stack_chk_fail();
  ppppuVar2 = ppppuVar3;
  __Unwind_Resume();
  pcStack_278 = FUN_1098f8490;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar9 = ppppuVar2[1];
  pppuVar10 = ppppuVar2[2];
  pppuVar4 = (uint ***)((long)pppuVar9 + ((ulong)ppppuVar6 & 0xffffffff));
  pppuStack_2a0 = (uint ***)unaff_x22;
  pppuStack_298 = (uint ***)param_1;
  pppuStack_290 = (uint ***)unaff_x20;
  pppuStack_288 = (uint ***)ppppuVar3;
  puStack_280 = &stack0xfffffffffffffff0;
  if (pppuVar10 < pppuVar4) {
    (*(code *)ppppuVar2[3])(ppppuVar2);
    pppuVar9 = ppppuVar2[1];
    pppuVar10 = ppppuVar2[2];
    pppuVar4 = (uint ***)((long)pppuVar9 + ((ulong)ppppuVar6 & 0xffffffff));
  }
  if (pppuVar4 <= pppuVar10) {
    ppppuVar2[1] = pppuVar4;
    if (*ppppuVar2 != (uint ***)0x0) {
      ppppuVar3 = (uint ****)((long)*ppppuVar2 + (long)pppuVar9);
      FUN_1098f7418();
      goto LAB_1098f8538;
    }
  }
  FUN_1098f7418(appuStack_2bc,param_4,ppppuVar6);
  param_4 = (uint ****)((long)appuStack_2bc + (long)(int)ppppuVar6);
  ppppuVar3 = (uint ****)appuStack_2bc;
  FUN_1098c2be4();
  ppppuVar6 = ppppuVar2;
  ppppuVar2 = ppppuVar3;
LAB_1098f8538:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return ppppuVar2;
  }
  ___stack_chk_fail();
  uVar12 = 0;
  if (ppppuVar7 <= (uint ****)(ulong)*(uint *)(param_4 + 1)) {
    uVar12 = (long)(ulong)*(uint *)(param_4 + 1) - (long)ppppuVar7;
  }
  uVar11 = uVar12 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*(uint *)param_4 >> 3) & 7] & 0x3fU);
  if (ppppuVar3[2] <
      (uint ***)
      ((long)ppppuVar6 +
      (long)(uVar12 * ((ulong)(*(uint *)param_4 >> 0xf) & 7) + (long)ppppuVar3[1]))) {
    (*(code *)ppppuVar3[3])(ppppuVar3);
  }
  if (uVar11 != 0) {
    FUN_1094471fc(ppppuVar3,uVar11,param_4);
  }
  uVar1 = *(uint *)*ppppuVar8;
  if (uVar1 != 0) {
    pppuVar9 = ppppuVar3[1];
    pppuVar4 = (uint ***)((long)pppuVar9 + 1);
    if (ppppuVar3[2] < pppuVar4) {
      (*(code *)ppppuVar3[3])(ppppuVar3);
      pppuVar9 = ppppuVar3[1];
      pppuVar4 = (uint ***)((long)pppuVar9 + 1);
    }
    ppppuVar3[1] = pppuVar4;
    *(char *)((long)*ppppuVar3 + (long)pppuVar9) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098f86ac(ppppuVar3,*ppppuVar8[1],*(undefined4 *)ppppuVar8[2],*(undefined4 *)ppppuVar8[3],
                (long)*(char *)ppppuVar8[4],ppppuVar8[5]);
  if (0 < *(int *)ppppuVar8[6]) {
    FUN_1098e7c90();
  }
  if (uVar12 == uVar11) {
    return ppppuVar3;
  }
  lVar5 = uVar12 - uVar11;
  uVar12 = (ulong)(*(uint *)param_4 >> 0xf) & 7;
  if ((int)uVar12 == 1) {
    func_0x000109447280(ppppuVar3,lVar5,&stack0xfffffffffffffd0f);
  }
  else if (lVar5 != 0) {
    do {
      FUN_109446adc(ppppuVar3,(uint *)((long)param_4 + 4),(long)param_4 + 4 + uVar12);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return ppppuVar3;
}



/* Entry: 1098f8490; end: 1098f856b;  */

uint * FUN_1098f8490(uint *param_1,uint *param_2,uint *param_3,ulong param_4,undefined8 *param_5)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint auStack_4c [5];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 2);
  uVar5 = *(ulong *)(param_1 + 4);
  uVar6 = lVar4 + ((ulong)param_3 & 0xffffffff);
  if (uVar5 < uVar6) {
    (**(code **)(param_1 + 6))(param_1);
    lVar4 = *(long *)(param_1 + 2);
    uVar5 = *(ulong *)(param_1 + 4);
    uVar6 = lVar4 + ((ulong)param_3 & 0xffffffff);
  }
  if (uVar6 <= uVar5) {
    *(ulong *)(param_1 + 2) = uVar6;
    if (*(long *)param_1 != 0) {
      puVar2 = (uint *)(*(long *)param_1 + lVar4);
      FUN_1098f7418();
      goto LAB_1098f8538;
    }
  }
  FUN_1098f7418(auStack_4c,param_2,param_3);
  param_2 = (uint *)((long)auStack_4c + (long)(int)param_3);
  puVar2 = auStack_4c;
  FUN_1098c2be4();
  param_3 = param_1;
  param_1 = puVar2;
LAB_1098f8538:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar6 = 0;
  if (param_4 <= param_2[2]) {
    uVar6 = param_2[2] - param_4;
  }
  uVar5 = uVar6 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(puVar2 + 4) <
      (long)param_3 + uVar6 * ((ulong)(*param_2 >> 0xf) & 7) + *(long *)(puVar2 + 2)) {
    (**(code **)(puVar2 + 6))(puVar2);
  }
  if (uVar5 != 0) {
    FUN_1094471fc(puVar2,uVar5,param_2);
  }
  uVar1 = *(uint *)*param_5;
  if (uVar1 != 0) {
    lVar4 = *(long *)(puVar2 + 2);
    uVar3 = lVar4 + 1;
    if (*(ulong *)(puVar2 + 4) < uVar3) {
      (**(code **)(puVar2 + 6))(puVar2);
      lVar4 = *(long *)(puVar2 + 2);
      uVar3 = lVar4 + 1;
    }
    *(ulong *)(puVar2 + 2) = uVar3;
    *(char *)(*(long *)puVar2 + lVar4) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098f86ac(puVar2,*(undefined8 *)param_5[1],*(undefined4 *)param_5[2],*(undefined4 *)param_5[3]
                ,(long)*(char *)param_5[4],param_5[5]);
  if (0 < *(int *)param_5[6]) {
    FUN_1098e7c90();
  }
  if (uVar6 == uVar5) {
    return puVar2;
  }
  lVar4 = uVar6 - uVar5;
  uVar6 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar6 == 1) {
    func_0x000109447280(puVar2,lVar4,&stack0xffffffffffffff7f);
  }
  else if (lVar4 != 0) {
    do {
      FUN_109446adc(puVar2,param_2 + 1,(long)(param_2 + 1) + uVar6);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar2;
}



/* Entry: 1098f856c; end: 1098f86ab;  */

long * FUN_1098f856c(long *param_1,uint *param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = 0;
  if (param_4 <= param_2[2]) {
    uVar5 = param_2[2] - param_4;
  }
  uVar4 = uVar5 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if ((ulong)param_1[2] < param_1[1] + param_3 + uVar5 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (*(code *)param_1[3])(param_1);
  }
  if (uVar4 != 0) {
    FUN_1094471fc(param_1,uVar4,param_2);
  }
  uVar1 = *(uint *)*param_5;
  if (uVar1 != 0) {
    lVar3 = param_1[1];
    uVar2 = lVar3 + 1;
    if ((ulong)param_1[2] < uVar2) {
      (*(code *)param_1[3])(param_1);
      lVar3 = param_1[1];
      uVar2 = lVar3 + 1;
    }
    param_1[1] = uVar2;
    *(char *)(*param_1 + lVar3) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098f86ac(param_1,*(undefined8 *)param_5[1],*(undefined4 *)param_5[2],
                *(undefined4 *)param_5[3],(long)*(char *)param_5[4],param_5[5]);
  if (0 < *(int *)param_5[6]) {
    FUN_1098e7c90();
  }
  if (uVar5 == uVar4) {
    return param_1;
  }
  lVar3 = uVar5 - uVar4;
  uVar5 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar5 == 1) {
    func_0x000109447280(param_1,lVar3,&stack0xffffffffffffffcf);
  }
  else if (lVar3 != 0) {
    do {
      FUN_109446adc(param_1,param_2 + 1,(long)(param_2 + 1) + uVar5);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Entry: 1098f86ac; end: 1098f8987;  */

undefined8 *
FUN_1098f86ac(long param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,undefined8 param_5,
             uint *param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  byte *unaff_x22;
  ulong uVar14;
  int iVar15;
  undefined8 uStack_2c8;
  byte *pbStack_2c0;
  uint *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined1 *puStack_2a0;
  code *pcStack_298;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 auStack_268 [63];
  byte abStack_6d [21];
  long lStack_58;
  
  uVar7 = (undefined4)((ulong)param_5 >> 0x20);
  iVar6 = (int)param_5;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(ulong *)(param_6 + 8);
  if (-1 < (char)*(byte *)((long)param_6 + 0x2f)) {
    uVar10 = (ulong)*(byte *)((long)param_6 + 0x2f);
  }
  iVar15 = (int)param_3;
  iVar12 = (int)param_4;
  puVar13 = param_4;
  if (uVar10 == 0) {
    if (iVar6 == 0) {
      puVar13 = &uStack_288;
      FUN_1098f7418(&uStack_288,param_2,param_3);
      param_6 = (uint *)((long)puVar13 + (long)iVar15);
    }
    else {
      param_6 = (uint *)((long)&uStack_288 + (long)iVar15 + 1);
      uVar1 = iVar15 - iVar12;
      puVar9 = param_6;
      if (1 < (int)uVar1) {
        uVar11 = (uVar1 >> 1) + 1;
        uVar10 = param_2;
        do {
          param_2 = uVar10 / 100;
          puVar9 = (uint *)((long)puVar9 + -2);
          *(undefined2 *)puVar9 = *(undefined2 *)(&UNK_10e00b0ea + (uVar10 % 100) * 2);
          uVar11 = uVar11 - 1;
          uVar10 = param_2;
        } while (1 < uVar11);
      }
      uVar10 = param_2;
      if ((uVar1 & 1) != 0) {
        uVar10 = param_2 / 10;
        puVar9 = (uint *)((long)puVar9 + -1);
        *(byte *)puVar9 = (char)param_2 + (char)uVar10 * -10 | 0x30;
      }
      *(byte *)((long)puVar9 + -1) = (byte)param_5;
      FUN_1098f7418(((long)puVar9 + -1) - (long)iVar12,uVar10,param_4);
    }
    puVar3 = &uStack_288;
    puVar9 = param_6;
    FUN_1098c2be4();
    puVar2 = puVar3;
  }
  else {
    uStack_270 = 0x1098e8c88;
    uStack_278 = 500;
    lStack_280 = 0;
    uStack_288 = auStack_268;
    if (iVar6 == 0) {
      FUN_1098f7418(abStack_6d,param_2,param_3);
      unaff_x22 = abStack_6d + iVar15;
    }
    else {
      unaff_x22 = abStack_6d + (long)iVar15 + 1;
      uVar1 = iVar15 - iVar12;
      pbVar8 = unaff_x22;
      if (1 < (int)uVar1) {
        uVar11 = (uVar1 >> 1) + 1;
        uVar10 = param_2;
        do {
          param_2 = uVar10 / 100;
          pbVar8 = pbVar8 + -2;
          *(undefined2 *)pbVar8 = *(undefined2 *)(&UNK_10e00b0ea + (uVar10 % 100) * 2);
          uVar11 = uVar11 - 1;
          uVar10 = param_2;
        } while (1 < uVar11);
      }
      uVar10 = param_2;
      if ((uVar1 & 1) != 0) {
        uVar10 = param_2 / 10;
        pbVar8 = pbVar8 + -1;
        *pbVar8 = (char)param_2 + (char)uVar10 * -10 | 0x30;
      }
      pbVar8[-1] = (byte)param_5;
      FUN_1098f7418((long)(pbVar8 + -1) - (long)iVar12,uVar10,param_4);
    }
    FUN_1098c2be4(abStack_6d,unaff_x22,&uStack_288);
    param_4 = (undefined8 *)((ulong)param_4 & 0xffffffff);
    FUN_1098e834c(param_6,param_1,uStack_288);
    puVar2 = (undefined8 *)((long)uStack_288 + (long)iVar12);
    puVar9 = (uint *)((long)uStack_288 + lStack_280);
    FUN_1098c2be4(puVar2);
    puVar3 = uStack_288;
    if (uStack_288 != auStack_268) {
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_298 = FUN_1098f8988;
  puVar2 = (undefined8 *)CONCAT44(uVar7,iVar6);
  uVar10 = 0;
  if (param_4 <= (undefined8 *)(ulong)puVar9[2]) {
    uVar10 = (long)(ulong)puVar9[2] - (long)param_4;
  }
  uVar14 = uVar10 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*puVar9 >> 3) & 7] & 0x3fU);
  uStack_2c8 = param_3;
  pbStack_2c0 = unaff_x22;
  puStack_2b8 = param_6;
  puStack_2b0 = puVar13;
  puStack_2a8 = puVar3;
  puStack_2a0 = &stack0xfffffffffffffff0;
  if ((ulong)puVar4[2] < puVar4[1] + param_1 + uVar10 * ((ulong)(*puVar9 >> 0xf) & 7)) {
    (*(code *)puVar4[3])(puVar4);
  }
  if (uVar14 != 0) {
    FUN_1094471fc(puVar4,uVar14,puVar9);
  }
  FUN_1098f8a4c(puVar2,puVar4);
  if (uVar10 != uVar14) {
    lVar5 = uVar10 - uVar14;
    uVar10 = (ulong)(*puVar9 >> 0xf) & 7;
    if ((int)uVar10 == 1) {
      uStack_2c8 = CONCAT17((char)puVar9[1],(undefined7)uStack_2c8);
      func_0x000109447280(puVar2,lVar5,(long)&uStack_2c8 + 7);
    }
    else if (lVar5 != 0) {
      do {
        FUN_109446adc(puVar2,puVar9 + 1,(long)(puVar9 + 1) + uVar10);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 1098f8988; end: 1098f8a4b;  */

undefined8 FUN_1098f8988(long param_1,uint *param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if (param_4 <= param_2[2]) {
    uVar2 = param_2[2] - param_4;
  }
  uVar3 = uVar2 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*param_2 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(param_1 + 0x10) <
      *(long *)(param_1 + 8) + param_3 + uVar2 * ((ulong)(*param_2 >> 0xf) & 7)) {
    (**(code **)(param_1 + 0x18))(param_1);
  }
  if (uVar3 != 0) {
    FUN_1094471fc(param_1,uVar3,param_2);
  }
  FUN_1098f8a4c(param_5,param_1);
  if (uVar2 == uVar3) {
    return param_5;
  }
  lVar1 = uVar2 - uVar3;
  uVar2 = (ulong)(*param_2 >> 0xf) & 7;
  if ((int)uVar2 == 1) {
    func_0x000109447280(param_5,lVar1,&stack0xffffffffffffffcf);
  }
  else if (lVar1 != 0) {
    do {
      FUN_109446adc(param_5,param_2 + 1,(long)(param_2 + 1) + uVar2);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return param_5;
}



/* Entry: 1098f8a4c; end: 1098f8b6b;  */

uint * FUN_1098f8a4c(undefined8 *param_1,uint *param_2,undefined8 param_3,ulong param_4,
                    undefined8 *param_5)

{
  uint uVar1;
  undefined1 uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint auStack_4c [5];
  long lStack_38;
  
  uVar1 = *(uint *)*param_1;
  if (uVar1 != 0) {
    lVar7 = *(long *)(param_2 + 2);
    uVar9 = lVar7 + 1;
    if (*(ulong *)(param_2 + 4) < uVar9) {
      (**(code **)(param_2 + 6))(param_2);
      lVar7 = *(long *)(param_2 + 2);
      uVar9 = lVar7 + 1;
    }
    *(ulong *)(param_2 + 2) = uVar9;
    *(char *)(*(long *)param_2 + lVar7) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  lVar7 = *(long *)(param_2 + 2);
  uVar9 = lVar7 + 1;
  if (*(ulong *)(param_2 + 4) < uVar9) {
    (**(code **)(param_2 + 6))(param_2);
    lVar7 = *(long *)(param_2 + 2);
    uVar9 = lVar7 + 1;
  }
  *(ulong *)(param_2 + 2) = uVar9;
  *(undefined1 *)(*(long *)param_2 + lVar7) = 0x30;
  if (*(char *)param_1[1] != '\x01') {
    return param_2;
  }
  uVar2 = *(undefined1 *)param_1[2];
  lVar7 = *(long *)(param_2 + 2);
  uVar9 = lVar7 + 1;
  if (*(ulong *)(param_2 + 4) < uVar9) {
    (**(code **)(param_2 + 6))(param_2);
    lVar7 = *(long *)(param_2 + 2);
    uVar9 = lVar7 + 1;
  }
  *(ulong *)(param_2 + 2) = uVar9;
  *(undefined1 *)(*(long *)param_2 + lVar7) = uVar2;
  FUN_1098e7c90(param_2,*(undefined4 *)param_1[3],param_1[4]);
  puVar5 = *(uint **)param_1[5];
  uVar1 = *(uint *)param_1[6];
  puVar6 = (uint *)(ulong)uVar1;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_2 + 2);
  uVar8 = *(ulong *)(param_2 + 4);
  uVar9 = lVar7 + (long)puVar6;
  if (uVar8 < uVar9) {
    (**(code **)(param_2 + 6))(param_2);
    lVar7 = *(long *)(param_2 + 2);
    uVar8 = *(ulong *)(param_2 + 4);
    uVar9 = lVar7 + (long)puVar6;
  }
  if (uVar9 <= uVar8) {
    *(ulong *)(param_2 + 2) = uVar9;
    if (*(long *)param_2 != 0) {
      puVar3 = (uint *)(*(long *)param_2 + lVar7);
      FUN_1098f7418();
      goto LAB_1098f8538;
    }
  }
  FUN_1098f7418(auStack_4c,puVar5,puVar6);
  puVar5 = (uint *)((long)auStack_4c + (long)(int)uVar1);
  puVar3 = auStack_4c;
  FUN_1098c2be4();
  puVar6 = param_2;
  param_2 = puVar3;
LAB_1098f8538:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_2;
  }
  ___stack_chk_fail();
  uVar9 = 0;
  if (param_4 <= puVar5[2]) {
    uVar9 = puVar5[2] - param_4;
  }
  uVar8 = uVar9 >> ((long)(char)(&UNK_10e00b8ee)[(ulong)(*puVar5 >> 3) & 7] & 0x3fU);
  if (*(ulong *)(puVar3 + 4) <
      (long)puVar6 + uVar9 * ((ulong)(*puVar5 >> 0xf) & 7) + *(long *)(puVar3 + 2)) {
    (**(code **)(puVar3 + 6))(puVar3);
  }
  if (uVar8 != 0) {
    FUN_1094471fc(puVar3,uVar8,puVar5);
  }
  uVar1 = *(uint *)*param_5;
  if (uVar1 != 0) {
    lVar7 = *(long *)(puVar3 + 2);
    uVar4 = lVar7 + 1;
    if (*(ulong *)(puVar3 + 4) < uVar4) {
      (**(code **)(puVar3 + 6))(puVar3);
      lVar7 = *(long *)(puVar3 + 2);
      uVar4 = lVar7 + 1;
    }
    *(ulong *)(puVar3 + 2) = uVar4;
    *(char *)(*(long *)puVar3 + lVar7) = (char)(0x202b2d00 >> (ulong)((uVar1 & 3) << 3));
  }
  FUN_1098f86ac(puVar3,*(undefined8 *)param_5[1],*(undefined4 *)param_5[2],*(undefined4 *)param_5[3]
                ,(long)*(char *)param_5[4],param_5[5]);
  if (0 < *(int *)param_5[6]) {
    FUN_1098e7c90();
  }
  if (uVar9 == uVar8) {
    return puVar3;
  }
  lVar7 = uVar9 - uVar8;
  uVar9 = (ulong)(*puVar5 >> 0xf) & 7;
  if ((int)uVar9 == 1) {
    func_0x000109447280(puVar3,lVar7,&stack0xffffffffffffff7f);
  }
  else if (lVar7 != 0) {
    do {
      FUN_109446adc(puVar3,puVar5 + 1,(long)(puVar5 + 1) + uVar9);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar3;
}



/* Entry: 1098f8b6c; end: 1098f8baf;  */

void FUN_1098f8b6c(void)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = -0x78;
  pcVar2 = (char *)0x11373c587;
  do {
    if (*pcVar2 < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar2 + -0x17));
    }
    lVar1 = lVar1 + 0x18;
    pcVar2 = pcVar2 + -0x18;
  } while (lVar1 != 0);
  return;
}



/* Entry: 1098f8bb0; end: 1098f9adb;  */

/* WARNING: Removing unreachable block (ram,0x0001098f906c) */
/* WARNING: Removing unreachable block (ram,0x0001098f9a38) */
/* WARNING: Removing unreachable block (ram,0x0001098f93e8) */
/* WARNING: Removing unreachable block (ram,0x0001098f9a3c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1098f8bb0(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *****ppppplVar7;
  undefined8 uVar8;
  long *******ppppppplVar9;
  bool bVar10;
  undefined8 *puVar11;
  long *plVar12;
  long ******pppppplVar13;
  long lVar14;
  long *******ppppppplVar15;
  long lVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long ******pppppplStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_110;
  long *******ppppppplStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *******ppppppplStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  long *******ppppppplStack_98;
  undefined4 uStack_8c;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  code *pcStack_78;
  long *******ppppppplStack_70;
  code *pcStack_68;
  long *******ppppppplStack_60;
  code *pcStack_58;
  
  auVar17._0_8_ = (long)(int)*param_1;
  auVar17._8_8_ = (long)(int)((ulong)*param_1 >> 0x20);
  auVar17 = NEON_scvtf(auVar17,8);
  uStack_b8 = auVar17._8_8_;
  uStack_c0 = auVar17._0_8_;
  FUN_1093f56e8(param_2,&uStack_c0,param_1 + 1,param_1 + 3);
  ppppppplVar9 = (long *******)(param_1 + 5);
  bVar2 = *(byte *)((long)param_1 + 0x3f);
  if ((char)bVar2 < '\0') {
    lVar14 = param_1[6];
    if (lVar14 < 6) {
      if (lVar14 == 3) {
        if (*(short *)*ppppppplVar9 == 0x424b && *(char *)((long)*ppppppplVar9 + 2) == '5')
        goto LAB_1098f9200;
      }
      else if (lVar14 == 4) {
        if (*(int *)*ppppppplVar9 == 0x656e6f4e) {
          return 1;
        }
        if (*(int *)*ppppppplVar9 == 0x454e4f4e) {
          return 1;
        }
      }
    }
    else if (lVar14 == 6) {
      if (*(int *)*ppppppplVar9 == 0x6c74614d && *(short *)((long)*ppppppplVar9 + 4) == 0x6261) {
LAB_1098f8e74:
        puVar11 = (undefined8 *)param_1[8];
        lVar14 = param_1[9] - (long)puVar11;
        lVar16 = lVar14 >> 3;
        if (lVar16 == 2) {
          if (lVar14 != 0x10) {
            pppppplStack_1e0 = (long ******)0x0;
            uStack_188 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            uStack_1a8 = 0;
            uStack_1b0 = 0;
            uStack_198 = 0;
            uStack_1a0 = 0;
            uStack_190 = 0;
            FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x28,2,FUN_1099aa768,0);
            ppppppplStack_b0 = (long *******)((long)(param_1[9] - param_1[8]) >> 3);
            ppppppplStack_98 = (long *******)CONCAT44(ppppppplStack_98._4_4_,2);
            ppppppplStack_80 = (long *******)&ppppppplStack_b0;
            ppppppplStack_70 = (long *******)&ppppppplStack_98;
            pcStack_78 = FUN_1098f9c60;
            ppppppplStack_60 = (long *******)&ppppppplStack_88;
            pcStack_68 = (code *)0x1098e2bc8;
            pcStack_58 = FUN_1094456ac;
            ppppppplStack_88 = ppppppplVar9;
            FUN_1099ade68(&ppppppplStack_f0,&UNK_10f589512,0x3d,0xfff,&ppppppplStack_80);
            pcVar1 = pcStack_e8;
            ppppppplVar9 = ppppppplStack_f0;
            if (-1 < (char)uStack_e0._7_1_) {
              pcVar1 = (code *)(ulong)uStack_e0._7_1_;
              ppppppplVar9 = (long *******)&ppppppplStack_f0;
            }
            FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,pcVar1);
            goto LAB_1098f9a40;
          }
          uVar5 = *puVar11;
          uVar6 = puVar11[1];
          puVar11 = (undefined8 *)0x20;
          __Znwm();
          puVar11[3] = 0;
          *puVar11 = &PTR_DAT_110b1cdc8;
          puVar11[2] = uVar6;
          puVar11[1] = uVar5;
          *(undefined4 *)(puVar11 + 3) = 10;
          goto LAB_1098f96d0;
        }
        if (lVar16 == 3) {
          if (lVar14 == 0x18) {
            uVar5 = *puVar11;
            uVar6 = puVar11[1];
            uVar25 = puVar11[2];
            puVar11 = (undefined8 *)0x28;
            __Znwm();
            puVar11[4] = 10;
            *puVar11 = &PTR_DAT_110b1cc98;
            puVar11[2] = uVar6;
            puVar11[1] = uVar5;
            puVar11[3] = uVar25;
            goto LAB_1098f96d0;
          }
          pppppplStack_1e0 = (long ******)0x0;
          uStack_188 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_190 = 0;
          FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x28,2,FUN_1099aa768,0);
          ppppppplStack_b0 = (long *******)((long)(param_1[9] - param_1[8]) >> 3);
          ppppppplStack_98 = (long *******)CONCAT44(ppppppplStack_98._4_4_,3);
          ppppppplStack_80 = (long *******)&ppppppplStack_b0;
          ppppppplStack_70 = (long *******)&ppppppplStack_98;
          pcStack_78 = FUN_1098f9c60;
          ppppppplStack_60 = (long *******)&ppppppplStack_88;
          pcStack_68 = (code *)0x1098e2bc8;
          pcStack_58 = FUN_1094456ac;
          ppppppplStack_88 = ppppppplVar9;
          FUN_1099ade68(&ppppppplStack_f0,&UNK_10f589512,0x3d,0xfff,&ppppppplStack_80);
          pcVar1 = pcStack_e8;
          ppppppplVar9 = ppppppplStack_f0;
          if (-1 < (char)uStack_e0._7_1_) {
            pcVar1 = (code *)(ulong)uStack_e0._7_1_;
            ppppppplVar9 = (long *******)&ppppppplStack_f0;
          }
          FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,pcVar1);
        }
        else if (lVar16 == 5) {
          if (lVar14 == 0x28) {
            uVar21 = puVar11[1];
            uVar25 = *puVar11;
            uVar5 = puVar11[2];
            uVar6 = puVar11[3];
            uVar24 = puVar11[4];
            puVar11 = (undefined8 *)0x38;
            __Znwm();
            *puVar11 = &PTR_FUN_110b1cb68;
            puVar11[1] = 0;
            *(undefined4 *)(puVar11 + 1) = 10;
            puVar11[3] = uVar21;
            puVar11[2] = uVar25;
            puVar11[5] = uVar6;
            puVar11[4] = uVar5;
            puVar11[6] = uVar24;
            goto LAB_1098f96d0;
          }
          pppppplStack_1e0 = (long ******)0x0;
          uStack_188 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_190 = 0;
          FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x28,2,FUN_1099aa768,0);
          ppppppplStack_b0 = (long *******)((long)(param_1[9] - param_1[8]) >> 3);
          ppppppplStack_98 = (long *******)CONCAT44(ppppppplStack_98._4_4_,5);
          ppppppplStack_80 = (long *******)&ppppppplStack_b0;
          ppppppplStack_70 = (long *******)&ppppppplStack_98;
          pcStack_78 = FUN_1098f9c60;
          ppppppplStack_60 = (long *******)&ppppppplStack_88;
          pcStack_68 = (code *)0x1098e2bc8;
          pcStack_58 = FUN_1094456ac;
          ppppppplStack_88 = ppppppplVar9;
          FUN_1099ade68(&ppppppplStack_f0,&UNK_10f589512,0x3d,0xfff,&ppppppplStack_80);
          pcVar1 = pcStack_e8;
          ppppppplVar9 = ppppppplStack_f0;
          if (-1 < (char)uStack_e0._7_1_) {
            pcVar1 = (code *)(ulong)uStack_e0._7_1_;
            ppppppplVar9 = (long *******)&ppppppplStack_f0;
          }
          FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,pcVar1);
        }
        else {
          pppppplStack_1e0 = (long ******)0x0;
          uStack_188 = 0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          uStack_198 = 0;
          uStack_1a0 = 0;
          uStack_190 = 0;
          FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x14e,2,FUN_1099aa768,0);
          ppppppplStack_b0 = (long *******)((long)(param_1[9] - param_1[8]) >> 3);
          ppppppplStack_80 = (long *******)&ppppppplStack_b0;
          ppppppplStack_70 = (long *******)&ppppppplStack_88;
          pcStack_78 = FUN_1098f9c60;
          pcStack_68 = FUN_1094456ac;
          ppppppplStack_88 = ppppppplVar9;
          FUN_1099ade68(&ppppppplStack_f0,&UNK_10f5894a3,0x45,0xff,&ppppppplStack_80);
          pcVar1 = pcStack_e8;
          ppppppplVar9 = ppppppplStack_f0;
          if (-1 < (char)uStack_e0._7_1_) {
            pcVar1 = (code *)(ulong)uStack_e0._7_1_;
            ppppppplVar9 = (long *******)&ppppppplStack_f0;
          }
          FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,pcVar1);
        }
        goto LAB_1098f9a40;
      }
    }
    else if (lVar14 == 0x10) {
      if (**ppppppplVar9 == (long *****)0x2d616c616e6e614b &&
          (*ppppppplVar9)[1] == (long *****)0x352d74646e617242) goto LAB_1098f9200;
    }
    else if ((lVar14 == 0x16) &&
            (pppppplVar13 = *ppppppplVar9,
            (*pppppplVar13 == (long *****)0x4445494649444f4d &&
            pppppplVar13[1] == (long *****)0x435f4e574f52425f) &&
            *(long *)((long)pppppplVar13 + 0xe) == 0x594441524e4f435f)) goto LAB_1098f8e74;
    if ((param_1[6] == 3) &&
       (*(short *)*ppppppplVar9 == 0x424b && *(char *)((long)*ppppppplVar9 + 2) == '8')) {
LAB_1098f9074:
      puVar11 = (undefined8 *)param_1[8];
      if (param_1[9] - (long)puVar11 == 0x40) {
        lVar14 = 0;
        ppppplVar7 = (long *****)*puVar11;
        lVar16 = puVar11[1];
        lStack_1d8 = lVar16;
        pppppplStack_1e0 = (long ******)ppppplVar7;
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        uStack_1c8 = uVar6;
        uStack_1d0 = uVar5;
        uVar25 = puVar11[4];
        uVar21 = puVar11[5];
        uStack_1b8 = uVar21;
        uStack_1c0 = uVar25;
        uVar24 = puVar11[6];
        uVar8 = puVar11[7];
        uStack_1a8 = uVar8;
        uStack_1b0 = uVar24;
        do {
          dVar18 = *(double *)((long)&pppppplStack_1e0 + lVar14);
          if (2.220446049250313e-16 < ABS(dVar18)) break;
          bVar10 = lVar14 != 0x38;
          lVar14 = lVar14 + 8;
        } while (bVar10);
        puVar11 = (undefined8 *)0x50;
        __Znwm();
        puVar11[9] = 0;
        *puVar11 = &PTR_DAT_110af5ab0;
        puVar11[2] = lVar16;
        puVar11[1] = ppppplVar7;
        puVar11[4] = uVar6;
        puVar11[3] = uVar5;
        puVar11[6] = uVar21;
        puVar11[5] = uVar25;
        puVar11[8] = uVar8;
        puVar11[7] = uVar24;
        *(undefined4 *)(puVar11 + 9) = 10;
        *(bool *)((long)puVar11 + 0x4c) = ABS(dVar18) <= 2.220446049250313e-16;
LAB_1098f96d0:
        plVar12 = (long *)*param_2;
        *param_2 = (long)puVar11;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
          return 1;
        }
        return 1;
      }
      pppppplStack_1e0 = (long ******)0x0;
      uStack_188 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_190 = 0;
      FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x28,2,FUN_1099aa768,0);
      ppppppplStack_b0 = (long *******)((long)(param_1[9] - param_1[8]) >> 3);
      ppppppplStack_98 = (long *******)CONCAT44(ppppppplStack_98._4_4_,8);
      ppppppplStack_80 = (long *******)&ppppppplStack_b0;
      ppppppplStack_70 = (long *******)&ppppppplStack_98;
      pcStack_78 = FUN_1098f9c60;
      ppppppplStack_60 = (long *******)&ppppppplStack_88;
      pcStack_68 = (code *)0x1098e2bc8;
      pcStack_58 = FUN_1094456ac;
      ppppppplStack_88 = ppppppplVar9;
      FUN_1099ade68(&ppppppplStack_f0,&UNK_10f589512,0x3d,0xfff,&ppppppplStack_80);
      pcVar1 = pcStack_e8;
      ppppppplVar9 = ppppppplStack_f0;
      if (-1 < (char)uStack_e0._7_1_) {
        pcVar1 = (code *)(ulong)uStack_e0._7_1_;
        ppppppplVar9 = (long *******)&ppppppplStack_f0;
      }
      FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,pcVar1);
      goto LAB_1098f9a40;
    }
    if ((param_1[6] == 6) &&
       (*(int *)*ppppppplVar9 == 0x5438424b && *(short *)((long)*ppppppplVar9 + 4) == 0x6e61)) {
LAB_1098f9290:
      puVar11 = (undefined8 *)param_1[8];
      if (param_1[9] - (long)puVar11 == 0x50) {
        uVar22 = puVar11[1];
        uVar19 = *puVar11;
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        uVar23 = puVar11[5];
        uVar20 = puVar11[4];
        uVar25 = puVar11[6];
        uVar21 = puVar11[7];
        uVar24 = puVar11[8];
        uVar8 = puVar11[9];
        puVar11 = (undefined8 *)0x68;
        __Znwm();
        *puVar11 = &PTR_FUN_110af5be0;
        *(undefined4 *)(puVar11 + 1) = 0xf;
        puVar11[2] = 0x3ddb7cdfd9d7bdbb;
        puVar11[4] = uVar22;
        puVar11[3] = uVar19;
        puVar11[6] = uVar6;
        puVar11[5] = uVar5;
        puVar11[8] = uVar23;
        puVar11[7] = uVar20;
        puVar11[10] = uVar21;
        puVar11[9] = uVar25;
        puVar11[0xc] = uVar8;
        puVar11[0xb] = uVar24;
        goto LAB_1098f96d0;
      }
      pppppplStack_1e0 = (long ******)0x0;
      uStack_188 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_190 = 0;
      FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x28,2,FUN_1099aa768,0);
      ppppppplStack_b0 = (long *******)((long)(param_1[9] - param_1[8]) >> 3);
      ppppppplStack_98 = (long *******)CONCAT44(ppppppplStack_98._4_4_,10);
      ppppppplStack_80 = (long *******)&ppppppplStack_b0;
      ppppppplStack_70 = (long *******)&ppppppplStack_98;
      pcStack_78 = FUN_1098f9c60;
      ppppppplStack_60 = (long *******)&ppppppplStack_88;
      pcStack_68 = (code *)0x1098e2bc8;
      pcStack_58 = FUN_1094456ac;
      ppppppplStack_88 = ppppppplVar9;
      FUN_1099ade68(&ppppppplStack_f0,&UNK_10f589512,0x3d,0xfff,&ppppppplStack_80);
      pcVar1 = pcStack_e8;
      ppppppplVar9 = ppppppplStack_f0;
      if (-1 < (char)uStack_e0._7_1_) {
        pcVar1 = (code *)(ulong)uStack_e0._7_1_;
        ppppppplVar9 = (long *******)&ppppppplStack_f0;
      }
      FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,pcVar1);
      goto LAB_1098f9a40;
    }
    if ((param_1[6] == 0xc) &&
       (**ppppppplVar9 == (long *****)0x564e495f44495247 &&
        *(int *)(*ppppppplVar9 + 1) == 0x45535245)) {
LAB_1098f9134:
      FUN_1098fc25c(&pppppplStack_1e0,0x11373c5b0);
      FUN_1098fc5f4(param_1,&pppppplStack_1e0,1);
      if (((ulong)param_1 & 1) == 0) {
        if (plStack_110 != (long *)0x0) {
          plVar12 = plStack_110 + 1;
          do {
            lVar14 = *plVar12;
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *plVar12 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_110 + 0x10))(plStack_110);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
          }
        }
        if (plStack_180 != (long *)0x0) {
          plVar12 = plStack_180 + 1;
          do {
            lVar14 = *plVar12;
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *plVar12 = lVar14 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*plStack_180 + 0x10))(plStack_180);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
          }
        }
        _free(pppppplStack_1e0);
        return 0;
      }
      FUN_1098f9adc(param_2,&pppppplStack_1e0);
      if (plStack_110 != (long *)0x0) {
        plVar12 = plStack_110 + 1;
        do {
          lVar14 = *plVar12;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar10) {
            *plVar12 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_110 + 0x10))(plStack_110);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_110);
        }
      }
      if (plStack_180 != (long *)0x0) {
        plVar12 = plStack_180 + 1;
        do {
          lVar14 = *plVar12;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar10) {
            *plVar12 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_180 + 0x10))(plStack_180);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_180);
        }
      }
      _free(pppppplStack_1e0);
      return 1;
    }
    if (param_1[6] == 4) {
      ppppppplVar15 = (long *******)*ppppppplVar9;
      goto LAB_1098f8fb8;
    }
  }
  else if (bVar2 < 0xc) {
    if (bVar2 == 3) {
      if (*(short *)ppppppplVar9 == 0x424b && *(char *)((long)param_1 + 0x2a) == '5') {
LAB_1098f9200:
        uStack_c8 = 10;
        puVar11 = (undefined8 *)param_1[8];
        if (param_1[9] - (long)puVar11 == 0x28) {
          lVar14 = 0;
          lStack_1d8 = puVar11[1];
          pppppplStack_1e0 = (long ******)*puVar11;
          uStack_1c8 = puVar11[3];
          uStack_1d0 = puVar11[2];
          uStack_1c0 = puVar11[4];
          pcStack_e8 = (code *)puVar11[1];
          ppppppplStack_f0 = (long *******)*puVar11;
          uStack_d8 = puVar11[3];
          uStack_e0 = puVar11[2];
          uStack_d0 = puVar11[4];
          do {
            pdVar4 = (double *)((long)&pppppplStack_1e0 + lVar14);
            if (2.220446049250313e-16 < ABS(*pdVar4)) break;
            bVar10 = lVar14 != 0x20;
            lVar14 = lVar14 + 8;
          } while (bVar10);
          uStack_c4 = ABS(*pdVar4) <= 2.220446049250313e-16;
          FUN_1093f57c4(param_2,&ppppppplStack_f0);
          return 1;
        }
        pppppplStack_1e0 = (long ******)0x0;
        uStack_188 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        uStack_190 = 0;
        FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x28,2,FUN_1099aa768,0);
        ppppppplStack_88 = (long *******)((long)(param_1[9] - param_1[8]) >> 3);
        uStack_8c = 5;
        ppppppplStack_80 = (long *******)&ppppppplStack_88;
        ppppppplStack_70 = (long *******)&uStack_8c;
        pcStack_78 = FUN_1098f9c60;
        ppppppplStack_60 = (long *******)&ppppppplStack_98;
        pcStack_68 = (code *)0x1098e2bc8;
        pcStack_58 = FUN_1094456ac;
        ppppppplStack_98 = ppppppplVar9;
        FUN_1099ade68(&ppppppplStack_b0,&UNK_10f589512,0x3d,0xfff,&ppppppplStack_80);
        ppppppplVar9 = ppppppplStack_b0;
        if (-1 < (char)bStack_99) {
          uStack_a8 = (ulong)bStack_99;
          ppppppplVar9 = (long *******)&ppppppplStack_b0;
        }
        FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,uStack_a8);
        goto LAB_1098f9a40;
      }
      if (*(short *)ppppppplVar9 == 0x424b && *(char *)((long)param_1 + 0x2a) == '8')
      goto LAB_1098f9074;
    }
    else if (bVar2 == 4) {
      if (*(int *)ppppppplVar9 == 0x454e4f4e) {
        return 1;
      }
      ppppppplVar15 = ppppppplVar9;
      if (*(int *)ppppppplVar9 == 0x656e6f4e) {
        return 1;
      }
LAB_1098f8fb8:
      if (*(int *)ppppppplVar15 == 0x44495247) {
        FUN_1098fc25c(&pppppplStack_1e0,0x11373c5b0);
        FUN_1098fc5f4(param_1,&pppppplStack_1e0,0);
        if (((ulong)param_1 & 1) != 0) {
          FUN_1098f9adc(param_2,&pppppplStack_1e0);
          FUN_1098f9ba0(&pppppplStack_1e0);
          return 1;
        }
        FUN_1098f9ba0(&pppppplStack_1e0);
        return 0;
      }
    }
    else if (bVar2 == 6) {
      if (*(int *)ppppppplVar9 == 0x6c74614d && *(short *)((long)param_1 + 0x2c) == 0x6261)
      goto LAB_1098f8e74;
      if (*(int *)ppppppplVar9 == 0x5438424b && *(short *)((long)param_1 + 0x2c) == 0x6e61)
      goto LAB_1098f9290;
    }
  }
  else if (bVar2 == 0xc) {
    if (*ppppppplVar9 == (long ******)0x564e495f44495247 && *(int *)(param_1 + 6) == 0x45535245)
    goto LAB_1098f9134;
  }
  else if (bVar2 == 0x10) {
    if (*ppppppplVar9 == (long ******)0x2d616c616e6e614b && param_1[6] == 0x352d74646e617242)
    goto LAB_1098f9200;
  }
  else if ((bVar2 == 0x16) &&
          ((*ppppppplVar9 == (long ******)0x4445494649444f4d && param_1[6] == 0x435f4e574f52425f) &&
           *(long *)((long)param_1 + 0x36) == 0x594441524e4f435f)) goto LAB_1098f8e74;
  pppppplStack_1e0 = (long ******)0x0;
  uStack_188 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_190 = 0;
  FUN_1099a9f0c(&pppppplStack_1e0,&UNK_10f5893fe,0x177,2,FUN_1099aa768,0);
  ppppppplStack_f0 = (long *******)&ppppppplStack_b0;
  pcStack_e8 = FUN_1094456ac;
  ppppppplStack_b0 = ppppppplVar9;
  FUN_1099ade68(&ppppppplStack_80,&UNK_10f5894f4,0x1d,0xf,&ppppppplStack_f0);
  pcVar1 = pcStack_78;
  ppppppplVar9 = ppppppplStack_80;
  if (-1 < (long)ppppppplStack_70) {
    pcVar1 = (code *)((ulong)ppppppplStack_70 >> 0x38);
    ppppppplVar9 = (long *******)&ppppppplStack_80;
  }
  FUN_1092b4db8(lStack_1d8 + 0x7540,ppppppplVar9,pcVar1);
LAB_1098f9a40:
  FUN_1099ab3b0(&pppppplStack_1e0);
  return 0;
}



/* Entry: 1098f9adc; end: 1098f9b9f;  */

void FUN_1098f9adc(long *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)0xf8;
  __Znwm();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1e] = 0;
  *puVar2 = &PTR_FUN_110b1cef8;
  FUN_1098fc25c(puVar2 + 1,0x11373c5b0);
  FUN_1098fc2d8(puVar2 + 1,*param_2,param_2[1]);
  uVar1 = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)(puVar2 + 0x10) = uVar1;
  *(undefined1 *)(puVar2 + 0x1e) = uVar1;
  plVar3 = (long *)*param_1;
  *param_1 = (long)puVar2;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001098f9b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))();
    return;
  }
  return;
}



/* Entry: 1098f9ba0; end: 1098f9c5f;  */

undefined8 * FUN_1098f9ba0(undefined8 *param_1)

{
  FUN_10939cea4(param_1 + 0x19);
  FUN_10939cea4(param_1 + 0xb);
  _free(*param_1);
  return param_1;
}



/* Entry: 1098f9c60; end: 1098f9d17;  */

/* WARNING: Removing unreachable block (ram,0x000109445b90) */
/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */

uint * FUN_1098f9c60(long *param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  long lStack_78;
  uint uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_6b;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_70 = 0x8000;
  uStack_6c = 0x20;
  uStack_6b = 0;
  uStack_67 = 0xffffffff000000;
  puVar5 = &uStack_70;
  FUN_1098f9d18();
  lVar3 = *param_2;
  *param_2 = (long)puVar5;
  param_2[1] = param_2[1] + (lVar3 - (long)puVar5);
  lStack_78 = *param_1;
  puVar5 = &uStack_70;
  plVar7 = &lStack_78;
  FUN_1098f9d44(puVar5,plVar7,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar9 = (uint *)*plVar7;
  if ((plVar7[1] == 0) || ((byte)*puVar9 == 0x7d)) {
    return puVar9;
  }
  puVar2 = (uint *)((long)puVar9 + plVar7[1]);
  if ((long)puVar2 - (long)puVar9 < 2) {
    if (puVar9 == puVar2) {
LAB_109445bc8:
      return puVar9;
    }
  }
  else {
    uVar11 = *(byte *)((long)puVar9 + 1) - 0x3c;
    if (uVar11 < 0x23 && (1L << ((ulong)uVar11 & 0x3f) & 0x400000005U) != 0) {
      bVar10 = 0;
      goto LAB_109445820;
    }
  }
  bVar10 = (byte)*puVar9;
LAB_109445820:
  uVar11 = 0;
  puVar6 = puVar2;
  puVar8 = puVar5;
  do {
    switch(bVar10) {
    case 0x20:
    case 0x2b:
      uVar11 = 0xc00;
      if (bVar10 != 0x20) {
        uVar11 = 0x800;
      }
      *puVar5 = *puVar5 & 0xfffff3ff | uVar11;
      goto code_r0x000109445908;
    default:
      bVar10 = (byte)*puVar9;
      if (bVar10 == 0x7d) {
        return puVar9;
      }
      puVar8 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar10 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar9 + (long)puVar8);
      if ((long)puVar2 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar10 == 0x7b) goto LAB_109445c10;
      bVar10 = *pbVar1;
      if (bVar10 == 0x3c) {
        uVar12 = 8;
      }
      else if (bVar10 == 0x5e) {
        uVar12 = 0x18;
      }
      else {
        if (bVar10 != 0x3e) goto LAB_109445bf8;
        uVar12 = 0x10;
      }
      if (uVar11 != 0) goto LAB_109445bf8;
      FUN_109445c68(puVar5);
      *puVar5 = *puVar5 & 0xffffffc7 | uVar12;
      uVar11 = 1;
      puVar6 = puVar9;
      puVar9 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if (2 < uVar11) goto LAB_109445bf8;
      *puVar5 = *puVar5 | 0x2000;
      puVar9 = (uint *)((long)puVar9 + 1);
      uVar11 = 3;
      break;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      goto LAB_109445bf8;
    case 0x30:
      if (3 < uVar11) goto LAB_109445bf8;
      if ((*puVar5 & 0x38) == 0) {
        *(undefined1 *)(puVar5 + 1) = 0x30;
        *puVar5 = *puVar5 & 0xfffc7fc7 | 0x8020;
      }
      puVar9 = (uint *)((long)puVar9 + 1);
      uVar11 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar11) goto LAB_109445bf8;
      puVar8 = puVar5 + 2;
      puVar6 = puVar2;
      FUN_109445cb8();
      *puVar5 = *puVar5 & 0xffffff3f | (int)puVar6 << 6;
      uVar11 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar11 != 0) goto LAB_109445bf8;
      uVar11 = 0;
      if (bVar10 == 0x3e) {
        uVar11 = 0x10;
      }
      uVar12 = 0x18;
      if (bVar10 != 0x5e) {
        uVar12 = uVar11;
      }
      uVar11 = 8;
      if (bVar10 != 0x3c) {
        uVar11 = uVar12;
      }
      *puVar5 = *puVar5 & 0xffffffc7 | uVar11;
      puVar9 = (uint *)((long)puVar9 + 1);
      uVar11 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *puVar5 = *puVar5 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *puVar5 = *puVar5 | 0x1000;
    case 0x62:
      uVar11 = *puVar5 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *puVar5 = *puVar5 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *puVar5 = *puVar5 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *puVar5 = *puVar5 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar11) goto LAB_109445bf8;
      *puVar5 = *puVar5 | 0x4000;
      puVar9 = (uint *)((long)puVar9 + 1);
      uVar11 = 7;
      break;
    case 0x58:
      *puVar5 = *puVar5 | 0x1000;
    case 0x78:
      uVar11 = *puVar5 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *puVar5 = uVar11;
      return (uint *)((long)puVar9 + 1);
    case 99:
      uVar11 = *puVar5 | 7;
      goto code_r0x000109445bc0;
    case 100:
      uVar11 = *puVar5 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar11 = *puVar5 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar9 == puVar2) {
      return puVar9;
    }
    bVar10 = (byte)*puVar9;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar4 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar5 = (uint *)(puVar4 + 1);
  if (puVar5 != puVar6) {
    FUN_109445cb8();
    *puVar8 = *puVar8 & 0xfffffcff | (int)puVar6 << 8;
    return puVar5;
  }
  puVar5 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar5 = *puVar5 & 0xfffc7fff | (int)puVar8 << 0xf;
  if (puVar8 != (uint *)0x0) {
    if (puVar8 == (uint *)0x1) {
      *(byte *)(puVar5 + 1) = (byte)*puVar6;
      *(undefined2 *)((long)puVar5 + 5) = 0;
      return puVar5;
    }
    puVar9 = (uint *)0x0;
    do {
      *(byte *)((long)puVar5 + ((ulong)puVar9 & 3) + 4) = *(byte *)((long)puVar6 + (long)puVar9);
      puVar9 = (uint *)((long)puVar9 + 1);
    } while (puVar8 != puVar9);
  }
  return puVar5;
}



/* Entry: 1098f9d18; end: 1098f9d43;  */

/* WARNING: Removing unreachable block (ram,0x000109445b90) */
/* WARNING: Removing unreachable block (ram,0x000109445bb4) */
/* WARNING: Removing unreachable block (ram,0x00010944590c) */
/* WARNING: Removing unreachable block (ram,0x000109445914) */
/* WARNING: Removing unreachable block (ram,0x000109445974) */
/* WARNING: Removing unreachable block (ram,0x00010944597c) */
/* WARNING: Removing unreachable block (ram,0x000109445af0) */

uint * FUN_1098f9d18(uint *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  puVar2 = (uint *)*param_2;
  if ((param_2[1] == 0) || ((byte)*puVar2 == 0x7d)) {
    return puVar2;
  }
  puVar6 = (uint *)((long)puVar2 + param_2[1]);
  if ((long)puVar6 - (long)puVar2 < 2) {
    if (puVar2 == puVar6) {
LAB_109445bc8:
      return puVar2;
    }
  }
  else {
    uVar8 = *(byte *)((long)puVar2 + 1) - 0x3c;
    if (uVar8 < 0x23 && (1L << ((ulong)uVar8 & 0x3f) & 0x400000005U) != 0) {
      bVar7 = 0;
      goto LAB_109445820;
    }
  }
  bVar7 = (byte)*puVar2;
LAB_109445820:
  uVar8 = 0;
  puVar4 = puVar6;
  puVar5 = param_1;
  do {
    switch(bVar7) {
    case 0x20:
    case 0x2b:
      uVar8 = 0xc00;
      if (bVar7 != 0x20) {
        uVar8 = 0x800;
      }
      *param_1 = *param_1 & 0xfffff3ff | uVar8;
      goto code_r0x000109445908;
    default:
      bVar7 = (byte)*puVar2;
      if (bVar7 == 0x7d) {
        return puVar2;
      }
      puVar5 = (uint *)((0x3a55000000000000U >> ((ulong)(bVar7 >> 2) & 0x3e) & 3) + 1);
      pbVar1 = (byte *)((long)puVar2 + (long)puVar5);
      if ((long)puVar6 - (long)pbVar1 < 1) goto LAB_109445bf8;
      if (bVar7 == 0x7b) goto LAB_109445c10;
      bVar7 = *pbVar1;
      if (bVar7 == 0x3c) {
        uVar9 = 8;
      }
      else if (bVar7 == 0x5e) {
        uVar9 = 0x18;
      }
      else {
        if (bVar7 != 0x3e) goto LAB_109445bf8;
        uVar9 = 0x10;
      }
      if (uVar8 != 0) goto LAB_109445bf8;
      FUN_109445c68(param_1);
      *param_1 = *param_1 & 0xffffffc7 | uVar9;
      uVar8 = 1;
      puVar4 = puVar2;
      puVar2 = (uint *)(pbVar1 + 1);
      break;
    case 0x23:
      if (2 < uVar8) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x2000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 3;
      break;
    case 0x2d:
      goto code_r0x000109445908;
    case 0x2e:
      goto LAB_109445bf8;
    case 0x30:
      if (3 < uVar8) goto LAB_109445bf8;
      if ((*param_1 & 0x38) == 0) {
        *(undefined1 *)(param_1 + 1) = 0x30;
        *param_1 = *param_1 & 0xfffc7fc7 | 0x8020;
      }
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 4;
      break;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x7b:
      if (4 < uVar8) goto LAB_109445bf8;
      puVar5 = param_1 + 2;
      puVar4 = puVar6;
      FUN_109445cb8();
      *param_1 = *param_1 & 0xffffff3f | (int)puVar4 << 6;
      uVar8 = 5;
      break;
    case 0x3c:
    case 0x3e:
    case 0x5e:
      if (uVar8 != 0) goto LAB_109445bf8;
      uVar8 = 0;
      if (bVar7 == 0x3e) {
        uVar8 = 0x10;
      }
      uVar9 = 0x18;
      if (bVar7 != 0x5e) {
        uVar9 = uVar8;
      }
      uVar8 = 8;
      if (bVar7 != 0x3c) {
        uVar8 = uVar9;
      }
      *param_1 = *param_1 & 0xffffffc7 | uVar8;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 1;
      break;
    case 0x3f:
      goto LAB_109445bf8;
    case 0x41:
      *param_1 = *param_1 | 0x1000;
    case 0x61:
      goto LAB_109445bf8;
    case 0x42:
      *param_1 = *param_1 | 0x1000;
    case 0x62:
      uVar8 = *param_1 & 0xfffffff8 | 6;
      goto code_r0x000109445bc0;
    case 0x45:
      *param_1 = *param_1 | 0x1000;
    case 0x65:
      goto LAB_109445bf8;
    case 0x46:
      *param_1 = *param_1 | 0x1000;
    case 0x66:
      goto LAB_109445bf8;
    case 0x47:
      *param_1 = *param_1 | 0x1000;
    case 0x67:
      goto LAB_109445bf8;
    case 0x4c:
      if (6 < uVar8) goto LAB_109445bf8;
      *param_1 = *param_1 | 0x4000;
      puVar2 = (uint *)((long)puVar2 + 1);
      uVar8 = 7;
      break;
    case 0x58:
      *param_1 = *param_1 | 0x1000;
    case 0x78:
      uVar8 = *param_1 & 0xfffffff8 | 4;
code_r0x000109445bc0:
      *param_1 = uVar8;
      return (uint *)((long)puVar2 + 1);
    case 99:
      uVar8 = *param_1 | 7;
      goto code_r0x000109445bc0;
    case 100:
      uVar8 = *param_1 & 0xfffffff8 | 3;
      goto code_r0x000109445bc0;
    case 0x6f:
      uVar8 = *param_1 & 0xfffffff8 | 5;
      goto code_r0x000109445bc0;
    case 0x70:
      goto LAB_109445bf8;
    case 0x73:
      goto LAB_109445bf8;
    case 0x7d:
      goto LAB_109445bc8;
    }
    if (puVar2 == puVar6) {
      return puVar2;
    }
    bVar7 = (byte)*puVar2;
  } while( true );
code_r0x000109445908:
LAB_109445bf8:
  FUN_1099a5aa4(&UNK_10f56d78b);
  FUN_1099a5aa4(&UNK_10f3dbeea);
LAB_109445c10:
  puVar3 = &UNK_10f3dbec2;
  FUN_1099a5aa4();
  puVar2 = (uint *)(puVar3 + 1);
  if (puVar2 != puVar4) {
    FUN_109445cb8();
    *puVar5 = *puVar5 & 0xfffffcff | (int)puVar4 << 8;
    return puVar2;
  }
  puVar2 = (uint *)&UNK_10f56d7a4;
  FUN_1099a5aa4();
  *puVar2 = *puVar2 & 0xfffc7fff | (int)puVar5 << 0xf;
  if (puVar5 != (uint *)0x0) {
    if (puVar5 == (uint *)0x1) {
      *(byte *)(puVar2 + 1) = (byte)*puVar4;
      *(undefined2 *)((long)puVar2 + 5) = 0;
      return puVar2;
    }
    puVar6 = (uint *)0x0;
    do {
      *(byte *)((long)puVar2 + ((ulong)puVar6 & 3) + 4) = *(byte *)((long)puVar4 + (long)puVar6);
      puVar6 = (uint *)((long)puVar6 + 1);
    } while (puVar5 != puVar6);
  }
  return puVar2;
}



/* Entry: 1098f9d44; end: 1098f9ecf;  */

uint * FUN_1098f9d44(uint *param_1,ulong *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  uint auStack_88 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  undefined4 uStack_60;
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = *param_1;
  if ((uVar14 & 0x3c0) == 0) {
    puVar12 = (uint *)*param_3;
    uVar13 = *param_2;
    puVar7 = param_1;
    if ((uVar14 >> 0xe & 1) != 0) {
      uStack_60 = 4;
      puVar7 = puVar12;
      auStack_70[0] = uVar13;
      FUN_1099a58c4(puVar12,auStack_70,param_1,param_3[3]);
      if (((ulong)puVar7 & 1) != 0) goto LAB_1098f9e18;
      uVar14 = *param_1;
    }
    uVar14 = *(uint *)(&UNK_10e00b0d0 + (ulong)(uVar14 >> 10 & 3) * 4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) goto LAB_1098f9ecc;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = (uint *)&lStack_48;
    uVar3 = *param_1;
    uVar10 = uVar3 & 7;
    puVar15 = puVar7;
    if (uVar10 < 6) {
      if (uVar10 == 4) {
        puVar2 = &UNK_10f416238;
        if ((uVar3 & 0x1000) != 0) {
          puVar2 = &DAT_10f3ddedc;
        }
        do {
          puVar15 = (uint *)((long)puVar15 + -1);
          *(undefined *)puVar15 = puVar2[uVar13 & 0xf];
          bVar5 = 0xf < uVar13;
          uVar13 = uVar13 >> 4;
        } while (bVar5);
        uVar8 = 0x5830;
        uVar10 = 0x7830;
LAB_1098f72dc:
        if ((uVar3 & 0x1000) != 0) {
          uVar10 = uVar8;
        }
        if (uVar14 != 0) {
          uVar10 = uVar10 << 8;
        }
        if ((uVar3 & 0x2000) != 0) {
          uVar14 = (uVar10 | uVar14) + 0x2000000;
        }
      }
      else {
        if (uVar10 != 5) goto LAB_1098f725c;
        lVar9 = 0;
        uVar11 = uVar13;
        do {
          puVar15 = (uint *)((long)puVar15 + -1);
          *(byte *)puVar15 = (byte)uVar11 & 7 | 0x30;
          lVar9 = lVar9 + 1;
          bVar5 = 7 < uVar11;
          uVar11 = uVar11 >> 3;
        } while (bVar5);
        if ((uVar3 >> 0xd & 1) != 0) {
          uVar10 = 0x30;
          if (uVar14 != 0) {
            uVar10 = 0x3000;
          }
          if ((int)param_1[3] <= lVar9 && uVar13 != 0) {
            uVar14 = (uVar10 | uVar14) + 0x1000000;
          }
        }
      }
    }
    else {
      if (uVar10 == 6) {
        do {
          puVar15 = (uint *)((long)puVar15 + -1);
          *(byte *)puVar15 = (byte)uVar13 & 1 | 0x30;
          bVar5 = 1 < uVar13;
          uVar13 = uVar13 >> 1;
        } while (bVar5);
        uVar8 = 0x4230;
        uVar10 = 0x6230;
        goto LAB_1098f72dc;
      }
      if (uVar10 == 7) {
        puVar7 = (uint *)0x1;
        FUN_1098e319c();
        puVar6 = puVar12;
        goto LAB_1098f73e0;
      }
LAB_1098f725c:
      puVar15 = auStack_88;
      FUN_1098f7418(puVar15,uVar13,0x40);
    }
    iVar4 = (int)puVar7 - (int)puVar15;
    uVar3 = param_1[2];
    uVar8 = param_1[3];
    uVar10 = iVar4 + (uVar14 >> 0x18);
    if (uVar8 == 0xffffffff && uVar3 == 0) {
      if (*(ulong *)(puVar12 + 4) < *(long *)(puVar12 + 2) + (ulong)uVar10) {
        (**(code **)(puVar12 + 6))(puVar12);
      }
      uVar14 = uVar14 & 0xffffff;
      if (uVar14 != 0) {
        do {
          lVar9 = *(long *)(puVar12 + 2);
          uVar13 = lVar9 + 1;
          if (*(ulong *)(puVar12 + 4) < uVar13) {
            (**(code **)(puVar12 + 6))(puVar12);
            lVar9 = *(long *)(puVar12 + 2);
            uVar13 = lVar9 + 1;
          }
          *(ulong *)(puVar12 + 2) = uVar13;
          *(char *)(*(long *)puVar12 + lVar9) = (char)uVar14;
          bVar5 = 0xff < uVar14;
          uVar14 = uVar14 >> 8;
        } while (bVar5);
      }
      puVar6 = puVar12;
      FUN_109446adc();
      param_1 = puVar15;
    }
    else {
      uVar1 = uVar10;
      if (iVar4 < (int)uVar8) {
        uVar1 = uVar8 + (uVar14 >> 0x18);
      }
      if (uVar3 <= uVar10) {
        uVar3 = uVar10;
      }
      if ((*param_1 & 0x38) == 0x20) {
        uVar1 = uVar3;
      }
      puVar7 = (uint *)(ulong)uVar1;
      FUN_1098f749c();
      puVar6 = puVar12;
    }
LAB_1098f73e0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar12;
    }
    ___stack_chk_fail();
    uVar14 = (uint)puVar7;
    puVar12 = param_1;
    if ((uint *)0x63 < param_1) {
      do {
        puVar12 = (uint *)((ulong)param_1 / 100);
        uVar14 = (int)puVar7 - 2;
        puVar7 = (uint *)(ulong)uVar14;
        *(undefined2 *)((long)puVar6 + (long)puVar7) =
             *(undefined2 *)(&UNK_10e00b0ea + ((ulong)param_1 % 100) * 2);
        uVar13 = (ulong)param_1 >> 4;
        param_1 = puVar12;
      } while (0x270 < uVar13);
    }
    if (puVar12 < (uint *)0xa) {
      uVar13 = (ulong)(uVar14 - 1);
      *(byte *)((long)puVar6 + uVar13) = (byte)puVar12 | 0x30;
    }
    else {
      uVar13 = (ulong)(uVar14 - 2);
      *(undefined2 *)((long)puVar6 + uVar13) = *(undefined2 *)(&UNK_10e00b0ea + (long)puVar12 * 2);
    }
    return (uint *)((long)puVar6 + uVar13);
  }
  uStack_78 = *(undefined8 *)(param_1 + 2);
  uStack_80 = *(undefined8 *)param_1;
  uVar10 = (uint)uStack_80;
  uVar14 = (uint)uStack_80 >> 6 & 3;
  if (uVar14 != 0) {
    FUN_1094472f0(uVar14,param_1 + 4,param_3);
    uStack_78 = CONCAT44(uStack_78._4_4_,uVar14);
  }
  uVar14 = uVar10 >> 8 & 3;
  if (uVar14 != 0) {
    FUN_1094472f0(uVar14,param_1 + 8,param_3);
    uStack_78 = CONCAT44(uVar14,(undefined4)uStack_78);
  }
  puVar12 = (uint *)*param_3;
  uVar13 = *param_2;
  if ((uVar10 >> 0xe & 1) == 0) {
LAB_1098f9df4:
    FUN_1098f7164(puVar12,uVar13,*(undefined4 *)(&UNK_10e00b0d0 + (ulong)(uVar10 >> 10 & 3) * 4),
                  &uStack_80);
    puVar7 = puVar12;
  }
  else {
    uStack_60 = 4;
    puVar7 = puVar12;
    auStack_70[0] = uVar13;
    FUN_1099a58c4(puVar12,auStack_70,&uStack_80,param_3[3]);
    if (((ulong)puVar7 & 1) == 0) {
      uVar10 = (uint)uStack_80;
      goto LAB_1098f9df4;
    }
  }
LAB_1098f9e18:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar12;
  }
LAB_1098f9ecc:
  ___stack_chk_fail();
  return puVar7;
}



/* Entry: 1098f9ed0; end: 1098f9edf;  */

void FUN_1098f9ed0(void)

{
  return;
}



/* Entry: 1098f9ee0; end: 1098f9f2b;  */

void FUN_1098f9ee0(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1093f71ac(param_1,param_2 + 0x10,&uStack_21);
  return;
}



/* Entry: 1098f9f2c; end: 1098f9fbf;  */

void FUN_1098f9f2c(double *param_1,long param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar2 = *(double *)(param_2 + 0x10);
  dVar3 = *(double *)(param_2 + 0x18);
  dVar5 = *(double *)(param_2 + 0x28);
  dVar4 = *(double *)(param_2 + 0x20);
  dVar7 = *(double *)(param_2 + 0x28);
  dVar6 = *(double *)(param_2 + 0x30);
  dVar8 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = dVar8;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    dVar9 = param_1[1];
    dVar8 = *param_1;
    do {
      dVar10 = dVar8 * dVar8 + dVar9 * dVar9;
      dVar11 = dVar10 * dVar2 + 1.0 + dVar10 * dVar10 * dVar3 + dVar10 * dVar6 * dVar10 * dVar10;
      dVar12 = (dVar7 + dVar7) * dVar8;
      dVar8 = (*param_3 -
              (dVar5 * (dVar10 + dVar8 * (dVar8 + dVar8)) + dVar9 * (dVar4 + dVar4) * dVar8)) /
              dVar11;
      dVar9 = (param_3[1] - (dVar9 * dVar12 + (dVar10 + (dVar9 + dVar9) * dVar9) * dVar4)) / dVar11;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[1] = dVar9;
    *param_1 = dVar8;
  }
  return;
}



/* Entry: 1098f9fc0; end: 1098fa0fb;  */

void FUN_1098f9fc0(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  if (ABS(SQRT(*param_3 * *param_3 + param_3[1] * param_3[1])) <= 2.220446049250313e-16) {
    dVar1 = 1.0;
  }
  else {
    FUN_1098fa3c8(auStack_90,param_2 + 8,param_3);
    func_0x0001098fa470(auStack_90[0],&dStack_b0,param_2 + 8);
    dVar1 = -(dStack_a8 * dStack_a0) + dStack_98 * dStack_b0;
    if (1.1920928955078125e-07 < ABS(dVar1)) {
      param_1[1] = -dStack_a8 / dVar1;
      *param_1 = dStack_98 / dVar1;
      param_1[3] = dStack_b0 / dVar1;
      param_1[2] = -dStack_a0 / dVar1;
      return;
    }
    uStack_80 = 0;
    uStack_28 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_30 = 0;
    FUN_1099a9f0c(&uStack_80,&UNK_10f589550,0x10b,1,FUN_1099aa768,0);
    FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f56ca4e,0x46);
    FUN_1099ab3b0(&uStack_80);
    dVar1 = 1.1920928955078125e-07;
  }
  *param_1 = dVar1;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = dVar1;
  return;
}



/* Entry: 1098fa0fc; end: 1098fa233;  */

double FUN_1098fa0fc(long param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
  if (1e-05 < dVar1) {
    dVar1 = dVar1 * dVar1;
    return dVar1 * *(double *)(param_1 + 0x10) + 1.0 + dVar1 * dVar1 * *(double *)(param_1 + 0x18) +
           dVar1 * dVar1 * dVar1 * *(double *)(param_1 + 0x30);
  }
  return 1.0;
}



/* Entry: 1098fa234; end: 1098fa2cf;  */

undefined8 * FUN_1098fa234(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fa2d0; end: 1098fa2d7;  */

undefined8 FUN_1098fa2d0(void)

{
  return 0;
}



/* Entry: 1098fa2d8; end: 1098fa3c7;  */

void FUN_1098fa2d8(long param_1,long *param_2)

{
  double dVar1;
  double dVar2;
  undefined8 *puVar3;
  long *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  *puVar3 = &PTR_DAT_110b1cc00;
  dVar5 = *(double *)(param_1 + 0x18);
  dVar1 = *(double *)(param_1 + 0x10);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar2 = *(double *)(param_1 + 0x20);
  dVar7 = *(double *)(param_1 + 0x30);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 8);
  *(ulong *)((long)puVar3 + 0xc) = CONCAT44((float)dVar5,(float)dVar1);
  *(ulong *)((long)puVar3 + 0x14) = CONCAT44((float)dVar6,(float)dVar2);
  *(float *)((long)puVar3 + 0x1c) = (float)dVar7;
  plVar4 = (long *)*param_2;
  *param_2 = (long)puVar3;
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001098fa348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}



/* Entry: 1098fa3c8; end: 1098fa53f;  */

void FUN_1098fa3c8(double *param_1,int *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar2 = *(double *)(param_2 + 2);
  dVar3 = *(double *)(param_2 + 4);
  dVar5 = *(double *)(param_2 + 8);
  dVar4 = *(double *)(param_2 + 6);
  dVar7 = *(double *)(param_2 + 8);
  dVar6 = *(double *)(param_2 + 10);
  dVar8 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = dVar8;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    dVar9 = param_1[1];
    dVar8 = *param_1;
    do {
      dVar10 = dVar8 * dVar8 + dVar9 * dVar9;
      dVar11 = dVar10 * dVar2 + 1.0 + dVar10 * dVar10 * dVar3 + dVar10 * dVar6 * dVar10 * dVar10;
      dVar12 = (dVar7 + dVar7) * dVar8;
      dVar8 = (*param_3 -
              (dVar5 * (dVar10 + dVar8 * (dVar8 + dVar8)) + dVar9 * (dVar4 + dVar4) * dVar8)) /
              dVar11;
      dVar9 = (param_3[1] - (dVar9 * dVar12 + (dVar10 + (dVar9 + dVar9) * dVar9) * dVar4)) / dVar11;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[1] = dVar9;
    *param_1 = dVar8;
  }
  return;
}



/* Entry: 1098fa540; end: 1098fa58b;  */

void FUN_1098fa540(undefined8 *param_1,long param_2)

{
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1093f7bec(param_1,param_2 + 0xc,&uStack_21);
  return;
}



/* Entry: 1098fa58c; end: 1098fa61f;  */

void FUN_1098fa58c(float *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *param_3;
  fVar4 = *(float *)(param_2 + 0xc);
  fVar5 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x1c);
  fVar7 = *(float *)(param_2 + 0x14);
  *(undefined8 *)param_1 = uVar1;
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    do {
      fVar9 = (float)*(undefined8 *)param_1;
      fVar10 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      fVar3 = fVar9 * fVar9 + fVar10 * fVar10;
      fVar11 = fVar3 * fVar4 + 1.0 + fVar3 * fVar3 * fVar5 + fVar3 * fVar6 * fVar3 * fVar3;
      *param_1 = ((float)uVar1 -
                 (fVar8 * (fVar3 + fVar9 * (fVar9 + fVar9)) + (fVar7 + fVar7) * fVar9 * fVar10)) /
                 fVar11;
      param_1[1] = ((float)((ulong)uVar1 >> 0x20) -
                   ((fVar8 + fVar8) * fVar9 * fVar10 + (fVar3 + (fVar10 + fVar10) * fVar10) * fVar7)
                   ) / fVar11;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



/* Entry: 1098fa620; end: 1098fa753;  */

void FUN_1098fa620(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *param_3;
  fVar3 = (float)((ulong)uVar1 >> 0x20);
  if (ABS(SQRT((float)uVar1 * (float)uVar1 + fVar3 * fVar3)) <= 1.1920929e-07) {
    uVar2 = 0x3f80000000000000;
    uVar1 = 0x3f800000;
  }
  else {
    FUN_1098faa2c(&uStack_88,param_2 + 8,uVar1);
    func_0x0001098faac8(uStack_88,&fStack_98,param_2 + 8);
    fVar3 = -(fStack_94 * fStack_90) + fStack_8c * fStack_98;
    if (ABS(fVar3) <= 1.1920929e-07) {
      uStack_80 = 0;
      uStack_28 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      FUN_1099a9f0c(&uStack_80,&UNK_10f589550,0x10b,1,FUN_1099aa768,0);
      FUN_1092b4db8(lStack_78 + 0x7540,&UNK_10f56ca4e,0x46);
      FUN_1099ab3b0(&uStack_80);
      uVar2 = 0x3400000000000000;
      uVar1 = 0x34000000;
    }
    else {
      uVar1 = CONCAT44(-fStack_94 / fVar3,fStack_8c / fVar3);
      uVar2 = CONCAT44(fStack_98 / fVar3,-fStack_90 / fVar3);
    }
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 1098fa754; end: 1098fa88f;  */

float FUN_1098fa754(long param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*param_2;
  fVar2 = (float)((ulong)*param_2 >> 0x20);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (1e-05 < fVar1) {
    fVar1 = fVar1 * fVar1;
    return fVar1 * *(float *)(param_1 + 0xc) + 1.0 + fVar1 * fVar1 * *(float *)(param_1 + 0x10) +
           fVar1 * fVar1 * fVar1 * *(float *)(param_1 + 0x1c);
  }
  return 1.0;
}



/* Entry: 1098fa890; end: 1098fa92b;  */

undefined8 * FUN_1098fa890(undefined4 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined4 uStack_24;
  
  uStack_24 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6abc(puVar1,auStack_48,&uStack_24);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fa92c; end: 1098fa933;  */

undefined8 FUN_1098fa92c(void)

{
  return 0;
}



/* Entry: 1098fa934; end: 1098faa2b;  */

void FUN_1098fa934(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_110b1cc00;
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)((long)puVar1 + 0xc) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x14) = uVar4;
  *(undefined4 *)((long)puVar1 + 0x1c) = uVar5;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001098fa99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1098faa2c; end: 1098fab93;  */

void FUN_1098faa2c(float *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = (float)param_2[1];
  fVar4 = (float)param_2[2];
  fVar7 = (float)param_2[4];
  fVar5 = (float)param_2[5];
  fVar6 = (float)param_2[3];
  *(undefined8 *)param_1 = param_3;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    do {
      fVar8 = (float)*(undefined8 *)param_1;
      fVar9 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      fVar2 = fVar8 * fVar8 + fVar9 * fVar9;
      fVar10 = fVar2 * fVar3 + 1.0 + fVar2 * fVar2 * fVar4 + fVar2 * fVar5 * fVar2 * fVar2;
      *param_1 = ((float)param_3 -
                 (fVar7 * (fVar2 + fVar8 * (fVar8 + fVar8)) + (fVar6 + fVar6) * fVar8 * fVar9)) /
                 fVar10;
      param_1[1] = ((float)((ulong)param_3 >> 0x20) -
                   ((fVar7 + fVar7) * fVar8 * fVar9 + (fVar2 + (fVar9 + fVar9) * fVar9) * fVar6)) /
                   fVar10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* Entry: 1098fab94; end: 1098fac73;  */

void FUN_1098fab94(ulong *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  double *pdVar3;
  double *extraout_x8;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar2 = 0x18;
  _malloc();
  if (uVar2 == 0) {
    lVar6 = 8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    pdVar3 = (double *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    dVar9 = *(double *)(lVar6 + 8);
    dVar10 = *(double *)(lVar6 + 0x10);
    dVar11 = *(double *)(lVar6 + 0x18);
    dVar12 = *pdVar3;
    extraout_x8[1] = pdVar3[1];
    *extraout_x8 = dVar12;
    iVar4 = *(int *)(lVar6 + 0x20);
    if (iVar4 != 0) {
      dVar13 = extraout_x8[1];
      dVar12 = *extraout_x8;
      do {
        dVar12 = dVar12 * dVar12 + dVar13 * dVar13;
        dVar13 = dVar12 * dVar9 + 1.0 + dVar12 * dVar12 * dVar10 + dVar12 * dVar11 * dVar12 * dVar12
        ;
        dVar12 = *pdVar3 / dVar13;
        dVar13 = pdVar3[1] / dVar13;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      extraout_x8[1] = dVar13;
      *extraout_x8 = dVar12;
    }
    return;
  }
  *param_1 = uVar2;
  param_1[1] = 3;
  uVar5 = uVar2 >> 3 & 1;
  if ((uVar2 & 7) != 0) {
    uVar5 = 3;
  }
  uVar7 = uVar5 ^ 3;
  uVar1 = (uVar7 & 2) + uVar5;
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = uVar5 << 3;
    _memcpy(uVar2,param_2 + 8,lVar6);
    if (uVar7 < 2) goto LAB_1098fac14;
  }
  uVar8 = *(undefined8 *)(param_2 + lVar6 + 8);
  ((undefined8 *)(uVar2 + lVar6))[1] = *(undefined8 *)(param_2 + lVar6 + 0x10);
  *(undefined8 *)(uVar2 + lVar6) = uVar8;
LAB_1098fac14:
  if (2 < uVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(uVar2 + uVar1 * 8,param_2 + uVar1 * 8 + 8,(uVar7 & 1) << 3);
  return;
}



/* Entry: 1098fac74; end: 1098fad97;  */

void FUN_1098fac74(double *param_1,long param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar3 = *(double *)(param_2 + 0x10);
  dVar4 = *(double *)(param_2 + 0x18);
  dVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = dVar5;
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 != 0) {
    dVar6 = param_1[1];
    dVar5 = *param_1;
    do {
      dVar5 = dVar5 * dVar5 + dVar6 * dVar6;
      dVar6 = dVar5 * dVar2 + 1.0 + dVar5 * dVar5 * dVar3 + dVar5 * dVar4 * dVar5 * dVar5;
      dVar5 = *param_3 / dVar6;
      dVar6 = param_3[1] / dVar6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    param_1[1] = dVar6;
    *param_1 = dVar5;
  }
  return;
}



/* Entry: 1098fad98; end: 1098fae9f;  */

void FUN_1098fad98(double *param_1,long param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_38;
  
  dVar4 = param_3[1];
  dVar3 = *param_3;
  dVar5 = SQRT(dVar3 * dVar3 + dVar4 * dVar4);
  if (ABS(dVar5) <= 2.220446049250313e-16) {
    *param_1 = 1.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
  }
  else {
    dStack_38 = 0.0;
    dVar1 = dVar5;
    FUN_1098fb0b4(param_2 + 8,&dStack_38);
    dStack_38 = dStack_38 * dStack_38;
    dVar2 = (1.0 / (dVar5 * dVar5)) *
            (1.0 / (dStack_38 * *(double *)(param_2 + 8) * 3.0 + 1.0 +
                    dStack_38 * dStack_38 * *(double *)(param_2 + 0x10) * 5.0 +
                   dStack_38 * dStack_38 * dStack_38 * *(double *)(param_2 + 0x18) * 7.0) - dVar1);
    *param_1 = dVar1;
    param_1[1] = dVar1 * 0.0;
    param_1[2] = dVar1 * 0.0;
    param_1[3] = dVar1;
    dVar5 = dVar2 * dVar3;
    dVar2 = dVar2 * dVar4;
    param_1[1] = param_1[1] + dVar4 * dVar5;
    *param_1 = *param_1 + dVar3 * dVar5;
    param_1[3] = param_1[3] + dVar4 * dVar2;
    param_1[2] = param_1[2] + dVar3 * dVar2;
  }
  return;
}



/* Entry: 1098faea0; end: 1098faeef;  */

double FUN_1098faea0(long param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
  if (1e-05 < dVar1) {
    dVar1 = dVar1 * dVar1;
    return dVar1 * *(double *)(param_1 + 8) + 1.0 + dVar1 * dVar1 * *(double *)(param_1 + 0x10) +
           dVar1 * dVar1 * dVar1 * *(double *)(param_1 + 0x18);
  }
  return 1.0;
}



/* Entry: 1098faef0; end: 1098faf23;  */

void FUN_1098faef0(long param_1,double *param_2)

{
  undefined1 auStack_18 [8];
  
  FUN_1098fb0b4(SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]),param_1 + 8,auStack_18);
  return;
}



/* Entry: 1098faf24; end: 1098fafbf;  */

undefined8 * FUN_1098faf24(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 auStack_48 [2];
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(*param_3 + 0x18))(auStack_38,param_3);
  (**(code **)(*param_2 + 0x18))(auStack_48,param_2);
  puVar1 = auStack_38;
  FUN_1093f6610(puVar1,auStack_48,&uStack_28);
  _free(auStack_48[0]);
  _free(auStack_38[0]);
  return puVar1;
}



/* Entry: 1098fafc0; end: 1098fafc7;  */

undefined8 FUN_1098fafc0(void)

{
  return 1;
}



/* Entry: 1098fafc8; end: 1098fb0b3;  */

void FUN_1098fafc8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  double dVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_110b1cd30;
  dVar3 = *(double *)(param_1 + 0x18);
  puVar1[1] = CONCAT44((float)*(double *)(param_1 + 0x10),(float)*(double *)(param_1 + 8));
  *(float *)(puVar1 + 2) = (float)dVar3;
  *(undefined4 *)((long)puVar1 + 0x14) = 10;
  plVar2 = (long *)*param_2;
  *param_2 = (long)puVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001098fb030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}



/* Entry: 1098fb0b4; end: 1098fb19f;  */

double FUN_1098fb0b4(double param_1,double *param_2,double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = 1.0;
  if ((1e-05 < param_1) &&
     (2.220446049250313e-16 <
      SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]))) {
    *param_3 = param_1;
    iVar1 = *(int *)(param_2 + 3);
    dVar2 = param_1;
    if (iVar1 != 0) {
      do {
        iVar1 = iVar1 + -1;
        dVar3 = dVar2 * dVar2;
        dVar4 = dVar3 * dVar3;
        dVar3 = (dVar2 * (dVar3 * *param_2 + 1.0 + dVar4 * param_2[1] + dVar4 * dVar3 * param_2[2])
                - param_1) /
                (dVar3 * *param_2 * 3.0 + 1.0 + dVar4 * param_2[1] * 5.0 +
                dVar4 * dVar3 * param_2[2] * 7.0);
        dVar2 = dVar2 - dVar3;
        *param_3 = dVar2;
      } while (1e-10 <= ABS(dVar3) && iVar1 != 0);
    }
    dVar2 = dVar2 / param_1;
  }
  return dVar2;
}



/* Entry: 1098fb1a0; end: 1098fb26b;  */

void FUN_1098fb1a0(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  float *extraout_x8;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar4 = (undefined8 *)0xc;
  _malloc();
  if (puVar4 == (undefined8 *)0x0) {
    lVar7 = 8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar4 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
    fVar9 = *(float *)(lVar7 + 8);
    fVar10 = *(float *)(lVar7 + 0xc);
    fVar11 = *(float *)(lVar7 + 0x10);
    uVar6 = *puVar4;
    *(undefined8 *)extraout_x8 = uVar6;
    iVar5 = *(int *)(lVar7 + 0x14);
    if (iVar5 != 0) {
      do {
        fVar8 = (float)*(undefined8 *)extraout_x8;
        fVar12 = (float)((ulong)*(undefined8 *)extraout_x8 >> 0x20);
        fVar8 = fVar8 * fVar8 + fVar12 * fVar12;
        fVar8 = fVar8 * fVar9 + 1.0 + fVar8 * fVar8 * fVar10 + fVar8 * fVar11 * fVar8 * fVar8;
        *extraout_x8 = (float)uVar6 / fVar8;
        extraout_x8[1] = (float)((ulong)uVar6 >> 0x20) / fVar8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    return;
  }
  puVar1 = (undefined8 *)(param_2 + 8);
  *param_1 = (ulong)puVar4;
  param_1[1] = 3;
  if (((ulong)puVar4 & 3) != 0) {
    *puVar4 = *puVar1;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 0x10);
    return;
  }
  uVar3 = -((uint)puVar4 >> 2);
  uVar2 = (ulong)uVar3 & 3;
  if ((uVar3 & 3) == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = uVar2 << 2;
    _memcpy(puVar4,puVar1,lVar7);
    if (uVar2 == 3) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)((long)puVar4 + lVar7,(long)puVar1 + lVar7,0xc - lVar7);
  return;
}



/* Entry: 1098fb26c; end: 1098fb38f;  */

void FUN_1098fb26c(float *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0xc);
  fVar6 = *(float *)(param_2 + 0x10);
  uVar2 = *param_3;
  *(undefined8 *)param_1 = uVar2;
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    do {
      fVar3 = (float)*(undefined8 *)param_1;
      fVar7 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      fVar3 = fVar3 * fVar3 + fVar7 * fVar7;
      fVar3 = fVar3 * fVar4 + 1.0 + fVar3 * fVar3 * fVar5 + fVar3 * fVar6 * fVar3 * fVar3;
      *param_1 = (float)uVar2 / fVar3;
      param_1[1] = (float)((ulong)uVar2 >> 0x20) / fVar3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* Entry: 1098fb390; end: 1098fb493;  */

void FUN_1098fb390(float *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_34;
  
  fVar3 = (float)*param_3;
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  if (ABS(fVar5) <= 1.1920929e-07) {
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[0] = 1.0;
    param_1[1] = 0.0;
  }
  else {
    fStack_34 = 0.0;
    fVar1 = fVar5;
    FUN_1098fb6a4(param_2 + 8,&fStack_34);
    fStack_34 = fStack_34 * fStack_34;
    fVar2 = (1.0 / (fVar5 * fVar5)) *
            (1.0 / (fStack_34 * *(float *)(param_2 + 8) * 3.0 + 1.0 +
                    fStack_34 * fStack_34 * *(float *)(param_2 + 0xc) * 5.0 +
                   fStack_34 * fStack_34 * fStack_34 * *(float *)(param_2 + 0x10) * 7.0) - fVar1);
    *param_1 = fVar1;
    param_1[1] = fVar1 * 0.0;
    param_1[2] = fVar1 * 0.0;
    param_1[3] = fVar1;
    fVar5 = fVar2 * fVar3;
    fVar2 = fVar2 * fVar4;
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + fVar4 * fVar5,
                  (float)*(undefined8 *)param_1 + fVar3 * fVar5);
    *(ulong *)(param_1 + 2) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + fVar4 * fVar2,
                  (float)*(undefined8 *)(param_1 + 2) + fVar3 * fVar2);
  }
  return;
}


