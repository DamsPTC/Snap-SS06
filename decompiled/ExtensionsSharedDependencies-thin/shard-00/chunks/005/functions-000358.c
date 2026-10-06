/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0071ebb0; end: 0071ec4b;  */

void FUN_0071ebb0(undefined8 *param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 1);
  if (7 < (uVar2 & 0xff) || (1 << (ulong)(uVar2 & 0x1f) & 0xc1U) == 0) {
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71ec34);
    (*pcVar1)();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  if ((uVar2 & 0xfe) == 6) {
    param_1 = (undefined8 *)*param_1;
    puVar3 = param_1 + 1;
    func_0x0071f614(param_1,*puVar3);
    *param_1 = puVar3;
    param_1[2] = 0;
    *puVar3 = 0;
    return;
  }
  return;
}



/* Entry: 0071ec4c; end: 0071ed47;  */

long FUN_0071ec4c(ulong *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 auStack_138 [264];
  
  if ((char)param_1[1] == '\0') {
    FUN_0071de14(auStack_138,6);
    func_0x0071fc40(auStack_138);
    func_0x0071e360(auStack_138);
  }
  else {
    in_ZR = (char)param_1[1] == '\x06';
    if (!(bool)in_ZR) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71ec94);
      (*pcVar1)();
    }
  }
  uStack_150 = 0;
  uVar2 = *param_1;
  uStack_148 = param_2;
  FUN_0071f6f0(uVar2,&uStack_150);
  uVar3 = uVar2;
  func_0x0071fcd8();
  if (!(bool)in_ZR) {
    func_0x0071fdcc();
    FUN_0071ddac();
    if ((uVar3 & 1) != 0) goto LAB_0071ecf4;
  }
  FUN_0071da58();
  func_0x0071fd88();
  uVar2 = *param_1;
  func_0x0071fd38(uVar2);
  func_0x0071fcb0();
LAB_0071ecf4:
  func_0x0071fc88();
  return uVar2 + 0x30;
}



/* Entry: 0071ed48; end: 0071ed9f;  */

long FUN_0071ed48(ulong *param_1,int param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_150;
  int iStack_148;
  undefined1 auStack_138 [264];
  
  if (param_2 < 0) {
    FUN_0071fb6c();
    func_0x0071fbac();
    func_0x0071fb78();
    func_0x0071fba4();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x71ed88);
    (*pcVar1)();
  }
  if ((char)param_1[1] == '\0') {
    FUN_0071de14(auStack_138,6);
    func_0x0071fc40(auStack_138);
    func_0x0071e360(auStack_138);
  }
  else {
    in_ZR = (char)param_1[1] == '\x06';
    if (!(bool)in_ZR) {
      FUN_0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71ec94);
      (*pcVar1)();
    }
  }
  uStack_150 = 0;
  uVar2 = *param_1;
  iStack_148 = param_2;
  FUN_0071f6f0(uVar2,&uStack_150);
  uVar3 = uVar2;
  func_0x0071fcd8();
  if (!(bool)in_ZR) {
    func_0x0071fdcc();
    FUN_0071ddac();
    if ((uVar3 & 1) != 0) goto LAB_0071ecf4;
  }
  FUN_0071da58();
  func_0x0071fd88();
  uVar2 = *param_1;
  func_0x0071fd38(uVar2);
  func_0x0071fcb0();
LAB_0071ecf4:
  func_0x0071fc88();
  return uVar2 + 0x30;
}



/* Entry: 0071eda0; end: 0071ee53;  */

long FUN_0071eda0(long *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uStack_128;
  undefined4 uStack_120;
  
  if ((char)param_1[1] == '\0') {
    FUN_0071da58();
    lVar3 = 0xb6ce00;
  }
  else {
    uVar2 = (char)param_1[1] == '\x06';
    if (!(bool)uVar2) {
      func_0x0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71ee30);
      (*pcVar1)();
    }
    uStack_128 = 0;
    lVar3 = *param_1;
    uStack_120 = param_2;
    FUN_0071f658(lVar3,&uStack_128);
    func_0x0071fcd8();
    if ((bool)uVar2) {
      FUN_0071da58();
      lVar3 = 0xb6ce00;
    }
    else {
      lVar3 = lVar3 + 0x30;
    }
    func_0x0071fcb8();
  }
  return lVar3;
}



/* Entry: 0071ee54; end: 0071ee9b;  */

undefined8 FUN_0071ee54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_0071f224(&uStack_28,param_2);
  uVar1 = uStack_28;
  uStack_28 = 0;
  FUN_0071f57c(param_1,uVar1);
  func_0x0071fc48();
  return param_1;
}



/* Entry: 0071ee9c; end: 0071ef97;  */

long FUN_0071ee9c(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  undefined1 auStack_138 [264];
  
  func_0x0071fc6c();
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_0071de14(auStack_138,7);
    func_0x0071fc40(auStack_138);
    func_0x0071e360(auStack_138);
  }
  else {
    in_ZR = *(char *)(param_1 + 8) == '\a';
    if (!(bool)in_ZR) {
      func_0x0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71eee4);
      (*pcVar1)();
    }
  }
  uVar2 = *unaff_x19;
  FUN_0071f6f0(uVar2,&stack0xfffffffffffffeb0);
  uVar3 = uVar2;
  func_0x0071fcd8();
  if (!(bool)in_ZR) {
    func_0x0071fdcc();
    FUN_0071ddac();
    if ((uVar3 & 1) != 0) goto LAB_0071ef50;
  }
  FUN_0071da58();
  func_0x0071fd88();
  uVar2 = *unaff_x19;
  func_0x0071fd38(uVar2);
  func_0x0071fcb0();
LAB_0071ef50:
  func_0x0071fc88();
  return uVar2 + 0x30;
}



/* Entry: 0071ef98; end: 0071f043;  */

long FUN_0071ef98(long *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_128;
  int iStack_120;
  
  if ((char)param_1[1] == '\0') {
    lVar3 = 0;
  }
  else {
    if ((char)param_1[1] != '\a') {
      func_0x0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71f020);
      (*pcVar1)();
    }
    iStack_120 = (param_3 - (int)param_2) * 4;
    lVar2 = *param_1;
    uStack_128 = param_2;
    FUN_0071f658(lVar2,&uStack_128);
    lVar3 = 0;
    if (*param_1 + 8 != lVar2) {
      lVar3 = lVar2 + 0x30;
    }
    func_0x0071fcb8();
  }
  return lVar3;
}



/* Entry: 0071f044; end: 0071f07f;  */

void FUN_0071f044(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0071fc14();
  _strlen(param_2);
  FUN_0071ef98();
  if (unaff_x20 == 0) {
    FUN_0071da58();
    func_0x0071fde0();
  }
  return;
}



/* Entry: 0071f080; end: 0071f0ab;  */

void FUN_0071f080(long param_1)

{
  func_0x0071fda8();
  FUN_0071ef98();
  if (param_1 == 0) {
    FUN_0071da58();
    func_0x0071fde0();
  }
  return;
}



/* Entry: 0071f0ac; end: 0071f0db;  */

long FUN_0071f0ac(undefined8 param_1,int param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *unaff_x19;
  long unaff_x20;
  undefined1 auStack_150 [8];
  uint uStack_148;
  undefined1 auStack_138 [264];
  
  func_0x0071fc14();
  _strlen();
  lVar2 = unaff_x20;
  func_0x0071fc6c();
  if (*(char *)(lVar2 + 8) == '\0') {
    FUN_0071de14(auStack_138,7);
    func_0x0071fc40(auStack_138);
    func_0x0071e360(auStack_138);
  }
  else {
    in_ZR = *(char *)(lVar2 + 8) == '\a';
    if (!(bool)in_ZR) {
      func_0x0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71eee4);
      (*pcVar1)();
    }
  }
  uStack_148 = (((int)unaff_x19 + param_2) - (int)unaff_x20) * 4 | 2;
  uVar3 = *unaff_x19;
  FUN_0071f6f0(uVar3,auStack_150);
  uVar4 = uVar3;
  func_0x0071fcd8();
  if (!(bool)in_ZR) {
    func_0x0071fdcc();
    FUN_0071ddac();
    if ((uVar4 & 1) != 0) goto LAB_0071ef50;
  }
  FUN_0071da58();
  func_0x0071fd88();
  uVar3 = *unaff_x19;
  func_0x0071fd38(uVar3);
  func_0x0071fcb0();
LAB_0071ef50:
  func_0x0071fc88();
  return uVar3 + 0x30;
}



/* Entry: 0071f0dc; end: 0071f0f3;  */

long FUN_0071f0dc(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  undefined1 auStack_138 [264];
  
  func_0x0071fda8();
  func_0x0071fc6c();
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_0071de14(auStack_138,7);
    func_0x0071fc40(auStack_138);
    func_0x0071e360(auStack_138);
  }
  else {
    in_ZR = *(char *)(param_1 + 8) == '\a';
    if (!(bool)in_ZR) {
      func_0x0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71eee4);
      (*pcVar1)();
    }
  }
  uVar2 = *unaff_x19;
  FUN_0071f6f0(uVar2,&stack0xfffffffffffffeb0);
  uVar3 = uVar2;
  func_0x0071fcd8();
  if (!(bool)in_ZR) {
    func_0x0071fdcc();
    FUN_0071ddac();
    if ((uVar3 & 1) != 0) goto LAB_0071ef50;
  }
  FUN_0071da58();
  func_0x0071fd88();
  uVar2 = *unaff_x19;
  func_0x0071fd38(uVar2);
  func_0x0071fcb0();
LAB_0071ef50:
  func_0x0071fc88();
  return uVar2 + 0x30;
}



/* Entry: 0071f0f4; end: 0071f10f;  */

bool FUN_0071f0f4(long param_1)

{
  FUN_0071ef98();
  return param_1 != 0;
}



/* Entry: 0071f110; end: 0071f127;  */

bool FUN_0071f110(long param_1)

{
  func_0x0071fda8();
  FUN_0071ef98();
  return param_1 != 0;
}



/* Entry: 0071f128; end: 0071f223;  */

void FUN_0071f128(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [264];
  
  if ((char)param_2[1] == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((char)param_2[1] != '\a') {
      func_0x0071fb6c();
      func_0x0071fbac();
      func_0x0071fb78();
      func_0x0071fba4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x71f1e8);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_00426a0c(param_1,*(undefined8 *)(*param_2 + 0x10));
    puVar3 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)*puVar3;
    while (puVar2 != puVar3 + 1) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                (auStack_138,puVar2[4],*(uint *)(puVar2 + 5) >> 2);
      func_0x0045a4f0(param_1,auStack_138);
      func_0x0071fd94();
      FUN_004668e4();
    }
  }
  return;
}



/* Entry: 0071f224; end: 0071f2a3;  */

void FUN_0071f224(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (*param_2 != 0) {
    uVar1 = 0x48;
    __Znwm(0x48);
    FUN_0071fb08();
    FUN_0071f57c(param_1,uVar1);
    func_0x0071fc48();
  }
  return;
}



/* Entry: 0071f2a4; end: 0071f2cf;  */

undefined8 FUN_0071f2a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  FUN_0071f57c(param_1,uVar1);
  return param_1;
}



/* Entry: 0071f2d0; end: 0071f2eb;  */

void FUN_0071f2d0(undefined8 *param_1,long *param_2,ulong param_3)

{
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00779c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__00998a18)
              (param_1,*param_2 + (param_3 & 0xffffffff) * 0x18);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 0071f2ec; end: 0071f36f;  */

void FUN_0071f2ec(long *param_1,uint param_2,undefined8 param_3)

{
  qword *pqVar1;
  long lVar2;
  
  if ((int)param_2 < 3) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      pqVar1 = &segment_command_00000020.fileoff;
      __Znwm();
      pqVar1[1] = 0;
      *pqVar1 = 0;
      pqVar1[3] = 0;
      pqVar1[2] = 0;
      pqVar1[5] = 0;
      pqVar1[4] = 0;
      pqVar1[7] = 0;
      pqVar1[6] = 0;
      pqVar1[8] = 0;
      FUN_0071f57c(param_1,pqVar1);
      func_0x0071fc48();
      lVar2 = *param_1;
    }
    FUN_004575b8(lVar2 + (ulong)param_2 * 0x18,param_3);
  }
  return;
}



/* Entry: 0071f370; end: 0071f4cf;  */

void FUN_0071f370(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  long unaff_x20;
  char *unaff_x21;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [256];
  
  func_0x0071fdc0();
  bVar2 = *(byte *)(param_2 + 0x17);
  uVar4 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar5 = *(ulong *)(unaff_x21 + 8);
    if (uVar5 != 0) {
      pcVar6 = *(char **)unaff_x21;
      goto LAB_0071f3b4;
    }
  }
  else if (uVar4 != 0) {
    uVar5 = (ulong)bVar2;
    pcVar6 = unaff_x21;
LAB_0071f3b4:
    if (pcVar6[uVar5 - 1] == '\n') {
      FUN_0069e790();
      uVar4 = (uint)(byte)unaff_x21[0x17];
    }
    if (uVar4 >> 7 == 0) {
      if (uVar4 != 0) {
        cVar1 = *unaff_x21;
joined_r0x0071f3f4:
        if ((cVar1 == '\0') || (cVar1 == '/')) {
          uStack_168 = *(undefined8 *)(unaff_x21 + 8);
          uStack_170 = *(undefined8 *)unaff_x21;
          uStack_160 = *(undefined8 *)(unaff_x21 + 0x10);
          unaff_x21[8] = '\0';
          unaff_x21[9] = '\0';
          unaff_x21[10] = '\0';
          unaff_x21[0xb] = '\0';
          unaff_x21[0xc] = '\0';
          unaff_x21[0xd] = '\0';
          unaff_x21[0xe] = '\0';
          unaff_x21[0xf] = '\0';
          unaff_x21[0x10] = '\0';
          unaff_x21[0x11] = '\0';
          unaff_x21[0x12] = '\0';
          unaff_x21[0x13] = '\0';
          unaff_x21[0x14] = '\0';
          unaff_x21[0x15] = '\0';
          unaff_x21[0x16] = '\0';
          unaff_x21[0x17] = '\0';
          unaff_x21[0] = '\0';
          unaff_x21[1] = '\0';
          unaff_x21[2] = '\0';
          unaff_x21[3] = '\0';
          unaff_x21[4] = '\0';
          unaff_x21[5] = '\0';
          unaff_x21[6] = '\0';
          unaff_x21[7] = '\0';
          FUN_0071f2ec(unaff_x20 + 0x10,param_3,&uStack_170);
          func_0x0071fbbc();
          return;
        }
        FUN_004799f4(auStack_138);
        FUN_00461ffc(auStack_138,&UNK_0091d6b5);
        FUN_0046296c(auStack_150,auStack_130);
        FUN_0071dbd4(auStack_150);
        goto LAB_0071f48c;
      }
    }
    else if (*(long *)(unaff_x21 + 8) != 0) {
      cVar1 = **(char **)unaff_x21;
      goto joined_r0x0071f3f4;
    }
  }
  FUN_00425cb4(auStack_138,&UNK_0091d32a);
  FUN_0071dbd4(auStack_138);
LAB_0071f48c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x71f490);
  (*pcVar3)();
}



/* Entry: 0071f4d0; end: 0071f4f7;  */

void FUN_0071f4d0(void)

{
  FUN_0071dafc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071f4f8; end: 0071f52f;  */

long FUN_0071f4f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0071dc14();
  FUN_0071e1bc(lVar1 + 0x10,0xb6ce00);
  return param_1;
}



/* Entry: 0071f530; end: 0071f57b;  */

long * FUN_0071f530(long *param_1)

{
  func_0x0071e360(param_1 + 2);
  if ((*param_1 != 0) && ((*(uint *)(param_1 + 1) & 3) == 1)) {
    _free();
  }
  return param_1;
}



/* Entry: 0071f57c; end: 0071f593;  */

void FUN_0071f57c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_0071f5b0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0071f594; end: 0071f5af;  */

void FUN_0071f594(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_0071f5b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071f5b0; end: 0071f657;  */

long FUN_0071f5b0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return param_1;
}



/* Entry: 0071f658; end: 0071f6ef;  */

long FUN_0071f658(long param_1)

{
  long unaff_x19;
  int unaff_w20;
  
  func_0x0071fc6c();
  func_0x0071f6a4();
  if ((unaff_x19 + 8 == param_1) || (FUN_0071dd20(), unaff_w20 != 0)) {
    param_1 = unaff_x19 + 8;
  }
  return param_1;
}



/* Entry: 0071f6f0; end: 0071f6fb;  */

long * FUN_0071f6f0(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 8);
  for (plVar3 = (long *)*plVar4; plVar3 != (long *)0x0; plVar3 = *(long **)((long)plVar3 + lVar1)) {
    iVar2 = (int)plVar3 + 0x20;
    func_0x0071fcd0();
    lVar1 = 8;
    if (iVar2 == 0) {
      lVar1 = 0;
      plVar4 = plVar3;
    }
  }
  return plVar4;
}



/* Entry: 0071f6fc; end: 0071f77f;  */

long * FUN_0071f6fc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  FUN_0071f780(param_1,param_2,auStack_48,auStack_50,param_3);
  plVar1 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    func_0x0071fc90();
    func_0x0071fd9c();
    func_0x0071fc58();
    func_0x0071fca0();
    plVar1 = param_1;
  }
  return plVar1;
}



/* Entry: 0071f780; end: 0071f893;  */

long * FUN_0071f780(long *param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 param_5
                   )

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  if ((param_2 == param_1 + 1) ||
     (plVar2 = param_1, func_0x0071fce8(param_1,param_2 + 4), (int)plVar2 != 0)) {
    plVar2 = param_2;
    if (param_2 != (long *)*param_1) {
      FUN_00466844();
      iVar1 = (int)plVar2 + 0x20;
      func_0x0071fcd0();
      if (iVar1 == 0) goto FUN_0071f8e0;
    }
    if (*param_2 == 0) {
      *param_3 = param_2;
      param_4 = param_2;
    }
    else {
      *param_3 = plVar2;
      param_4 = plVar2 + 1;
    }
  }
  else {
    iVar1 = (int)param_2 + 0x20;
    func_0x0071fcd0();
    if (iVar1 == 0) {
      *param_3 = param_2;
      *param_4 = (long)param_2;
    }
    else {
      param_4 = param_2;
      FUN_004668e4();
      if ((param_1 + 1 != param_4) && (plVar2 = param_4, func_0x0071fce8(), (int)plVar2 == 0)) {
FUN_0071f8e0:
        func_0x0071fc14(param_1,param_3,param_5);
        plVar3 = *(long **)(unaff_x20 + 8);
        plVar2 = (long *)(unaff_x20 + 8);
        while (plVar4 = plVar2, plVar3 != (long *)0x0) {
          while (plVar4 = plVar3, func_0x0071fce8(), (int)param_1 == 0) {
            param_1 = plVar4 + 4;
            func_0x0071fcd0();
            if ((int)param_1 == 0) goto LAB_0071f940;
            plVar2 = plVar4 + 1;
            plVar3 = (long *)*plVar2;
            if ((long *)*plVar2 == (long *)0x0) goto LAB_0071f940;
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
LAB_0071f940:
        *unaff_x19 = plVar4;
        return plVar2;
      }
      if (param_2[1] == 0) {
        *param_3 = param_2;
        param_4 = param_2 + 1;
      }
      else {
        *param_3 = param_4;
      }
    }
  }
  return param_4;
}



/* Entry: 0071f894; end: 0071f8df;  */

void FUN_0071f894(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  FUN_0046691c(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 0071f8e0; end: 0071f94f;  */

long * FUN_0071f8e0(long *param_1)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long *plVar3;
  
  func_0x0071fc14();
  plVar1 = *(long **)(unaff_x20 + 8);
  plVar2 = (long *)(unaff_x20 + 8);
  while (plVar3 = plVar2, plVar1 != (long *)0x0) {
    while (plVar3 = plVar1, func_0x0071fce8(), (int)param_1 == 0) {
      param_1 = plVar3 + 4;
      func_0x0071fcd0();
      if ((int)param_1 == 0) goto LAB_0071f940;
      plVar2 = plVar3 + 1;
      plVar1 = (long *)*plVar2;
      if ((long *)*plVar2 == (long *)0x0) goto LAB_0071f940;
    }
    plVar2 = plVar3;
    plVar1 = (long *)*plVar3;
  }
LAB_0071f940:
  *unaff_x19 = plVar3;
  return plVar2;
}



/* Entry: 0071f950; end: 0071f983;  */

void FUN_0071f950(long param_1)

{
  long unaff_x20;
  
  func_0x0071fc6c();
  FUN_0071dc14();
  FUN_0071e1bc(param_1 + 0x10,unaff_x20 + 0x10);
  return;
}



/* Entry: 0071f984; end: 0071f9c7;  */

long * FUN_0071f984(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_0071f530(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 0071f9c8; end: 0071fa03;  */

undefined8 FUN_0071f9c8(undefined8 param_1)

{
  func_0x0071fdec();
  FUN_0071fa04();
  return param_1;
}



/* Entry: 0071fa04; end: 0071fa4b;  */

void FUN_0071fa04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  func_0x0071fdc0();
  while (unaff_x21 != param_3) {
    FUN_0071fa4c();
    FUN_004668e4();
  }
  return;
}



/* Entry: 0071fa4c; end: 0071fa53;  */

undefined1  [16] FUN_0071fa4c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  FUN_0071f780(param_1,param_2,auStack_48,auStack_50,param_3);
  plVar2 = (long *)*param_1;
  bVar1 = plVar2 == (long *)0x0;
  if (bVar1) {
    func_0x0071fc90();
    func_0x0071fd9c();
    func_0x0071fc58();
    func_0x0071fca0();
    plVar2 = param_1;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = plVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 0071fa54; end: 0071fae3;  */

undefined1  [16] FUN_0071fa54(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  FUN_0071f780(param_1,param_2,auStack_48,auStack_50,param_3);
  plVar2 = (long *)*param_1;
  bVar1 = plVar2 == (long *)0x0;
  if (bVar1) {
    func_0x0071fc90();
    func_0x0071fd9c();
    func_0x0071fc58();
    func_0x0071fca0();
    plVar2 = param_1;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = plVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 0071fae4; end: 0071fb07;  */

long FUN_0071fae4(long param_1)

{
  func_0x0071f614(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 0071fb08; end: 0071fb6b;  */

void FUN_0071fb08(void)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0071fc6c();
  lVar1 = 0;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (unaff_x19 + lVar1,unaff_x20 + lVar1);
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x48);
  return;
}



/* Entry: 0071fb6c; end: 0071fe1b;  */

undefined1 * FUN_0071fb6c(void)

{
  undefined **ppuStack0000000000000018;
  undefined **ppuStack0000000000000088;
  undefined8 uStack00000000000000b8;
  
  ppuStack0000000000000088 = &PTR_FUN_009e7e18;
  uStack00000000000000b8 = 0;
  ppuStack0000000000000018 = &PTR_FUN_009e7df0;
  FUN_00479c40(&stack0x00000018,&PTR_PTR_009e7e30,&stack0x00000020);
  ppuStack0000000000000018 = &PTR_FUN_009e7df0;
  ppuStack0000000000000088 = &PTR_FUN_009e7e18;
  FUN_0046218c(&stack0x00000020,0x10);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 0071fe1c; end: 0071fe8f;  */

void FUN_0071fe1c(long param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  ulong unaff_x19;
  long *aplStack_50 [6];
  
  func_0x007215b8();
  uVar2 = param_1 == -0x8000000000000000;
  if ((bool)uVar2) {
    param_1 = -0x8000000000000000;
  }
  else {
    if (-1 < param_1) {
      FUN_0071fe90();
      plVar3 = aplStack_50[0];
      goto LAB_0071fe74;
    }
    param_1 = -param_1;
  }
  FUN_0071fe90(param_1,aplStack_50);
  *(undefined1 *)((long)aplStack_50[0] + -1) = 0x2d;
  plVar3 = (long *)((long)aplStack_50[0] + -1);
LAB_0071fe74:
  FUN_00425cb4();
  func_0x00721634();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    lVar4 = *plVar3;
    *plVar3 = lVar4 + -1;
    *(undefined1 *)(lVar4 + -1) = 0;
    do {
      lVar4 = *plVar3;
      *plVar3 = lVar4 + -1;
      *(byte *)(lVar4 + -1) = (char)unaff_x19 + (char)(unaff_x19 / 10) * -10 | 0x30;
      bVar1 = 9 < unaff_x19;
      unaff_x19 = unaff_x19 / 10;
    } while (bVar1);
    return;
  }
  return;
}



/* Entry: 0071fe90; end: 0071fecf;  */

void FUN_0071fe90(ulong param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = lVar2 + -1;
  *(undefined1 *)(lVar2 + -1) = 0;
  do {
    lVar2 = *param_2;
    *param_2 = lVar2 + -1;
    *(byte *)(lVar2 + -1) = (char)param_1 + (char)(param_1 / 10) * -10 | 0x30;
    bVar1 = 9 < param_1;
    param_1 = param_1 / 10;
  } while (bVar1);
  return;
}



/* Entry: 0071fed0; end: 0071ff0b;  */

ulong * FUN_0071fed0(double param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  dword *pdVar6;
  undefined1 in_ZR;
  char cVar7;
  char cVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *extraout_x8;
  char *extraout_x8_00;
  char *extraout_x8_01;
  long lVar13;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x11;
  long lVar14;
  long extraout_x11_00;
  char *pcVar15;
  ulong *unaff_x19;
  long *plVar16;
  int iStack_50;
  
  func_0x007215b8();
  FUN_0071fe90();
  FUN_00425cb4();
  func_0x00721634();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(extraout_x8,0x24,0);
    puVar3 = &DAT_0091d8de;
    if (iStack_50 != 0) {
      puVar3 = &UNK_0091d8e3;
    }
    while( true ) {
      puVar11 = (ulong *)*extraout_x8;
      uVar4 = extraout_x8[1];
      if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
        puVar11 = extraout_x8;
      }
      _snprintf(puVar11,uVar4,puVar3);
      iVar9 = (int)puVar11;
      uVar4 = extraout_x8[1];
      if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
      }
      uVar1 = (ulong)iVar9;
      cVar7 = SBORROW8(uVar4,uVar1);
      cVar8 = (long)(uVar4 - uVar1) < 0;
      if (uVar1 < uVar4) break;
      FUN_004625e8(extraout_x8,(long)iVar9 + 1);
    }
    FUN_004625e8(extraout_x8,(long)iVar9);
    func_0x0072161c();
    lVar14 = extraout_x11;
    pcVar15 = extraout_x8_00;
    lVar13 = extraout_x11;
    if (cVar8 == cVar7) {
      lVar14 = extraout_x9;
      lVar13 = extraout_x9;
    }
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      if (*pcVar15 == ',') {
        *pcVar15 = '.';
      }
      pcVar15 = pcVar15 + 1;
    }
    puVar11 = (ulong *)*extraout_x8;
    uVar4 = extraout_x8[1];
    if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
      puVar11 = extraout_x8;
    }
    FUN_0052fbdc(extraout_x8,extraout_x8_00 + lVar13,(long)puVar11 + uVar4);
    puVar11 = extraout_x8;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(extraout_x8,0x2e,0);
    if ((puVar11 == (ulong *)0xffffffffffffffff) &&
       (puVar11 = extraout_x8,
       __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(extraout_x8,0x65,0)
       , puVar11 == (ulong *)0xffffffffffffffff)) {
      func_0x007215ec();
    }
    cVar7 = SBORROW4(iStack_50,1);
    cVar8 = iStack_50 + -1 < 0;
    if (iStack_50 == 1) {
      func_0x0072161c();
      lVar14 = extraout_x11_00;
      lVar13 = extraout_x11_00;
      if (cVar8 == cVar7) {
        lVar14 = extraout_x9_00;
        lVar13 = extraout_x9_00;
      }
      for (; pcVar15 = extraout_x8_01, lVar14 != 0; lVar14 = lVar14 + -1) {
        pcVar15 = extraout_x8_01 + lVar14;
        if (pcVar15[-1] != '0') break;
        if (((extraout_x8_01 != pcVar15 + -1) &&
            (pcVar15 = extraout_x8_01 + lVar14 + -2, extraout_x8_01 != pcVar15)) &&
           (*pcVar15 == '.')) {
          if ((int)unaff_x19 != 0) {
            pcVar15 = extraout_x8_01 + lVar14;
          }
          break;
        }
      }
      puVar11 = extraout_x8;
      FUN_0052fbdc(extraout_x8,pcVar15,extraout_x8_01 + lVar13);
    }
    return puVar11;
  }
  lVar13 = 2;
  if (param_1 < 0.0) {
    lVar13 = 1;
  }
  lVar14 = 0;
  if (!NAN(param_1)) {
    lVar14 = lVar13;
  }
  puVar12 = (ulong *)(&PTR_DAT_00a1f5e8)[lVar14];
  puVar11 = puVar12;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar11) {
    FUN_0040d740();
    plVar16 = (long *)puVar11[1];
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        lVar13 = *plVar2;
        cVar8 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar13 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return puVar11;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar11) {
    pdVar6 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar11 | 7) != (dword *)0x17) {
      pdVar6 = (dword *)((ulong)puVar11 | 7);
    }
    puVar10 = (ulong *)((long)pdVar6 + 1);
    __Znwm();
    extraout_x8[1] = (ulong)puVar11;
    extraout_x8[2] = (ulong)((long)pdVar6 + 1) | 0x8000000000000000;
    *extraout_x8 = (ulong)puVar10;
  }
  else {
    *(char *)((long)extraout_x8 + 0x17) = (char)puVar11;
    puVar10 = extraout_x8;
    if (puVar11 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar10,puVar12,puVar11);
LAB_00425d3c:
  *(undefined1 *)((long)puVar10 + (long)puVar11) = 0;
  return extraout_x8;
}



/* Entry: 0071ff0c; end: 0071ff1b;  */

ulong * FUN_0071ff0c(ulong *param_1,double param_2,int param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  dword *pdVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  char *extraout_x8;
  char *extraout_x8_00;
  long lVar13;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x11;
  long lVar14;
  long extraout_x11_00;
  char *pcVar15;
  long *plVar16;
  
  if ((ulong)ABS(param_2) < 0x7ff0000000000000) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(param_1,0x24,0);
    puVar3 = &DAT_0091d8de;
    if (param_4 != 0) {
      puVar3 = &UNK_0091d8e3;
    }
    while( true ) {
      uVar4 = param_1[1];
      puVar11 = (ulong *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
        puVar11 = param_1;
      }
      _snprintf(puVar11,uVar4,puVar3);
      iVar9 = (int)puVar11;
      uVar4 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      uVar1 = (ulong)iVar9;
      cVar7 = SBORROW8(uVar4,uVar1);
      cVar8 = (long)(uVar4 - uVar1) < 0;
      if (uVar1 < uVar4) break;
      FUN_004625e8(param_1,(long)iVar9 + 1);
    }
    FUN_004625e8(param_1,(long)iVar9);
    func_0x0072161c();
    lVar14 = extraout_x11;
    pcVar15 = extraout_x8;
    lVar13 = extraout_x11;
    if (cVar8 == cVar7) {
      lVar14 = extraout_x9;
      lVar13 = extraout_x9;
    }
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      if (*pcVar15 == ',') {
        *pcVar15 = '.';
      }
      pcVar15 = pcVar15 + 1;
    }
    uVar4 = param_1[1];
    puVar11 = (ulong *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar11 = param_1;
    }
    FUN_0052fbdc(param_1,extraout_x8 + lVar13,(long)puVar11 + uVar4);
    puVar11 = param_1;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x2e,0);
    if ((puVar11 == (ulong *)0xffffffffffffffff) &&
       (puVar11 = param_1,
       __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x65,0),
       puVar11 == (ulong *)0xffffffffffffffff)) {
      func_0x007215ec();
    }
    cVar7 = SBORROW4(param_4,1);
    cVar8 = param_4 + -1 < 0;
    if (param_4 == 1) {
      func_0x0072161c();
      lVar14 = extraout_x11_00;
      lVar13 = extraout_x11_00;
      if (cVar8 == cVar7) {
        lVar14 = extraout_x9_00;
        lVar13 = extraout_x9_00;
      }
      for (; pcVar15 = extraout_x8_00, lVar14 != 0; lVar14 = lVar14 + -1) {
        pcVar15 = extraout_x8_00 + lVar14;
        if (pcVar15[-1] != '0') break;
        if (((extraout_x8_00 != pcVar15 + -1) &&
            (pcVar15 = extraout_x8_00 + lVar14 + -2, extraout_x8_00 != pcVar15)) &&
           (*pcVar15 == '.')) {
          if (param_3 != 0) {
            pcVar15 = extraout_x8_00 + lVar14;
          }
          break;
        }
      }
      FUN_0052fbdc(param_1,pcVar15,extraout_x8_00 + lVar13);
      puVar11 = param_1;
    }
    return puVar11;
  }
  lVar13 = 2;
  if (param_2 < 0.0) {
    lVar13 = 1;
  }
  lVar14 = 0;
  if (!NAN(param_2)) {
    lVar14 = lVar13;
  }
  puVar12 = (ulong *)(&PTR_DAT_00a1f5e8)[lVar14];
  puVar11 = puVar12;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar11) {
    FUN_0040d740();
    plVar16 = (long *)puVar11[1];
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        lVar13 = *plVar2;
        cVar8 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar13 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return puVar11;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar11) {
    pdVar6 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar11 | 7) != (dword *)0x17) {
      pdVar6 = (dword *)((ulong)puVar11 | 7);
    }
    puVar10 = (ulong *)((long)pdVar6 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar11;
    param_1[2] = (ulong)((long)pdVar6 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar10;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar11;
    puVar10 = param_1;
    if (puVar11 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar10,puVar12,puVar11);
LAB_00425d3c:
  *(undefined1 *)((long)puVar10 + (long)puVar11) = 0;
  return param_1;
}



/* Entry: 0071ff1c; end: 0072016f;  */

ulong * FUN_0071ff1c(ulong *param_1,double param_2,uint param_3,int param_4,int param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  dword *pdVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  char *extraout_x8;
  char *extraout_x8_00;
  long lVar13;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x11;
  long lVar14;
  long extraout_x11_00;
  char *pcVar15;
  long *plVar16;
  
  if ((ulong)ABS(param_2) < 0x7ff0000000000000) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc(param_1,0x24,0);
    puVar3 = &DAT_0091d8de;
    if (param_5 != 0) {
      puVar3 = &UNK_0091d8e3;
    }
    while( true ) {
      uVar4 = param_1[1];
      puVar11 = (ulong *)*param_1;
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
        puVar11 = param_1;
      }
      _snprintf(puVar11,uVar4,puVar3);
      iVar9 = (int)puVar11;
      uVar4 = param_1[1];
      if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
        uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      }
      uVar1 = (ulong)iVar9;
      cVar7 = SBORROW8(uVar4,uVar1);
      cVar8 = (long)(uVar4 - uVar1) < 0;
      if (uVar1 < uVar4) break;
      FUN_004625e8(param_1,(long)iVar9 + 1);
    }
    FUN_004625e8(param_1,(long)iVar9);
    func_0x0072161c();
    lVar14 = extraout_x11;
    pcVar15 = extraout_x8;
    lVar13 = extraout_x11;
    if (cVar8 == cVar7) {
      lVar14 = extraout_x9;
      lVar13 = extraout_x9;
    }
    for (; lVar14 != 0; lVar14 = lVar14 + -1) {
      if (*pcVar15 == ',') {
        *pcVar15 = '.';
      }
      pcVar15 = pcVar15 + 1;
    }
    uVar4 = param_1[1];
    puVar11 = (ulong *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar11 = param_1;
    }
    FUN_0052fbdc(param_1,extraout_x8 + lVar13,(long)puVar11 + uVar4);
    puVar11 = param_1;
    __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x2e,0);
    if ((puVar11 == (ulong *)0xffffffffffffffff) &&
       (puVar11 = param_1,
       __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4findEcm(param_1,0x65,0),
       puVar11 == (ulong *)0xffffffffffffffff)) {
      func_0x007215ec();
    }
    cVar7 = SBORROW4(param_5,1);
    cVar8 = param_5 + -1 < 0;
    if (param_5 == 1) {
      func_0x0072161c();
      lVar14 = extraout_x11_00;
      lVar13 = extraout_x11_00;
      if (cVar8 == cVar7) {
        lVar14 = extraout_x9_00;
        lVar13 = extraout_x9_00;
      }
      for (; pcVar15 = extraout_x8_00, lVar14 != 0; lVar14 = lVar14 + -1) {
        pcVar15 = extraout_x8_00 + lVar14;
        if (pcVar15[-1] != '0') break;
        if (((extraout_x8_00 != pcVar15 + -1) &&
            (pcVar15 = extraout_x8_00 + lVar14 + -2, extraout_x8_00 != pcVar15)) &&
           (*pcVar15 == '.')) {
          if (param_4 != 0) {
            pcVar15 = extraout_x8_00 + lVar14;
          }
          break;
        }
      }
      FUN_0052fbdc(param_1,pcVar15,extraout_x8_00 + lVar13);
      puVar11 = param_1;
    }
    return puVar11;
  }
  lVar13 = 2;
  if (param_2 < 0.0) {
    lVar13 = 1;
  }
  lVar14 = 0;
  if (!NAN(param_2)) {
    lVar14 = lVar13;
  }
  puVar12 = (ulong *)(&PTR_DAT_00a1f5d0)[(ulong)(param_3 ^ 1) * 3 + lVar14];
  puVar11 = puVar12;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar11) {
    FUN_0040d740();
    plVar16 = (long *)puVar11[1];
    if (plVar16 != (long *)0x0) {
      plVar2 = plVar16 + 1;
      do {
        lVar13 = *plVar2;
        cVar8 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar13 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    return puVar11;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar11) {
    pdVar6 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar11 | 7) != (dword *)0x17) {
      pdVar6 = (dword *)((ulong)puVar11 | 7);
    }
    puVar10 = (ulong *)((long)pdVar6 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar11;
    param_1[2] = (ulong)((long)pdVar6 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar10;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar11;
    puVar10 = param_1;
    if (puVar11 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar10,puVar12,puVar11);
LAB_00425d3c:
  *(undefined1 *)((long)puVar10 + (long)puVar11) = 0;
  return param_1;
}



/* Entry: 00720170; end: 0072018b;  */

ulong * FUN_00720170(ulong *param_1,int param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  dword *pdVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  
  puVar2 = (ulong *)"true";
  if (param_2 == 0) {
    puVar2 = (ulong *)"false";
  }
  puVar6 = puVar2;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar6) {
    FUN_0040d740();
    plVar9 = (long *)puVar6[1];
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return puVar6;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar6) {
    pdVar5 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar6 | 7) != (dword *)0x17) {
      pdVar5 = (dword *)((ulong)puVar6 | 7);
    }
    puVar7 = (ulong *)((long)pdVar5 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)((long)pdVar5 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar7;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar6;
    puVar7 = param_1;
    if (puVar6 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar7,puVar2,puVar6);
LAB_00425d3c:
  *(char *)((long)puVar7 + (long)puVar6) = '\0';
  return param_1;
}



/* Entry: 0072018c; end: 007204db;  */

char * FUN_0072018c(char *param_1,byte *param_2,long param_3,int param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  dword *pdVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_90 [24];
  char acStack_78 [24];
  
  if (param_2 != (byte *)0x0) {
    lVar10 = 0;
    pbVar2 = param_2 + param_3;
    do {
      if (param_3 == lVar10) {
        func_0x00721688();
        FUN_00425cb4(auStack_90);
        FUN_0052fce8(acStack_78,auStack_90,param_2);
        func_0x00721688();
        pcVar7 = acStack_78;
        FUN_0052fce8(param_1,pcVar7);
        func_0x00721580();
        func_0x0072165c();
        return pcVar7;
      }
      bVar3 = param_2[lVar10];
    } while ((((0x1f < bVar3) && (bVar3 != 0x22)) && (bVar3 != 0x5c)) &&
            (lVar10 = lVar10 + 1, -1 < (char)bVar3));
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
    pcVar7 = param_1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
              (param_1,param_3 * 2 + 3);
    func_0x00721688();
    func_0x007215ec();
    do {
      if (param_2 == pbVar2) {
        func_0x00721688();
        func_0x007215ec();
        return pcVar7;
      }
      bVar3 = *param_2;
      uVar9 = bVar3 - 8;
      uVar13 = (uint)bVar3;
      pbVar12 = param_2;
      switch(uVar9) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
LAB_00720288:
        uVar14 = (uint)bVar3;
        if (param_4 == 0) {
          uVar15 = (uint)bVar3;
          if ((char)bVar3 < '\0') {
            lVar10 = (long)pbVar2 - (long)param_2;
            if (uVar14 < 0xe0) {
              if (1 < lVar10) {
                pbVar12 = param_2 + 1;
                if (0x7f < (uVar14 & 0x1f) << 6) {
                  uVar9 = *pbVar12 & 0x3f | (uVar14 & 0x1f) << 6;
                  uVar15 = uVar9;
                  goto LAB_007202d4;
                }
              }
LAB_00720380:
              uVar15 = 0xfffd;
            }
            else {
              if (uVar14 < 0xf0) {
                if (2 < lVar10) {
                  uVar13 = (uVar13 & 0xf) << 0xc;
                  uVar9 = uVar13 | (param_2[1] & 0x3f) << 6;
                  pbVar12 = param_2 + 2;
                  if (((uVar9 >> 0xb < 0x1b) || (0xdfff < uVar13)) && (0x7ff < uVar9)) {
                    uVar15 = uVar9 | *pbVar12 & 0x3f;
                    goto LAB_007202d4;
                  }
                }
                goto LAB_00720380;
              }
              uVar15 = 0xfffd;
              if ((3 < lVar10) && (uVar14 < 0xf8)) {
                pbVar12 = param_2 + 3;
                uVar9 = (uVar13 & 7) << 0x12 | (param_2[1] & 0x3f) << 0xc;
                if (0xffff < uVar9) {
                  uVar15 = *pbVar12 & 0x3f | (param_2[2] & 0x3f) << 6 | uVar9;
                  goto LAB_007202d4;
                }
              }
            }
LAB_007203c4:
            pcVar7 = param_1;
            FUN_007213f8(param_1,uVar15);
          }
          else {
LAB_007202d4:
            if (0x1f < uVar15) {
              if (uVar15 < 0x80) {
                pcVar7 = param_1;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_1,uVar15);
                goto LAB_007202c8;
              }
              if (uVar15 >> 0x10 == 0) goto LAB_007203c4;
              pcVar7 = param_1;
              FUN_007213f8(param_1,uVar15 + 0xf0000 >> 10 & 0x3ff | 0xd800);
              uVar9 = uVar15 & 0x3ff | 0xdc00;
            }
            func_0x00721664(uVar9);
          }
        }
        else if (uVar14 < 0x20) {
          func_0x00721664();
        }
        else {
          pcVar7 = param_1;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(int)(char)bVar3);
        }
        goto LAB_007202c8;
      case 4:
        break;
      case 5:
        break;
      default:
        if ((bVar3 != 0x5c) && (uVar13 != 0x22)) goto LAB_00720288;
      }
      func_0x007215ec();
LAB_007202c8:
      param_2 = pbVar12 + 1;
    } while( true );
  }
  pcVar7 = "";
  _strlen();
  if ((char *)0x7ffffffffffffff6 < pcVar7) {
    FUN_0040d740();
    plVar11 = *(long **)(pcVar7 + 8);
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return pcVar7;
  }
  if ((char *)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar7) {
    pdVar6 = &MACH_HEADER.flags;
    if ((dword *)((ulong)pcVar7 | 7) != (dword *)0x17) {
      pdVar6 = (dword *)((ulong)pcVar7 | 7);
    }
    pcVar8 = (char *)((long)pdVar6 + 1);
    __Znwm();
    *(char **)(param_1 + 8) = pcVar7;
    *(ulong *)(param_1 + 0x10) = (ulong)((long)pdVar6 + 1) | 0x8000000000000000;
    *(char **)param_1 = pcVar8;
  }
  else {
    param_1[0x17] = (char)pcVar7;
    pcVar8 = param_1;
    if (pcVar7 == (char *)0x0) goto LAB_00425d3c;
  }
  _memmove(pcVar8,"",pcVar7);
LAB_00425d3c:
  pcVar8[(long)pcVar7] = '\0';
  return param_1;
}



/* Entry: 007204dc; end: 00720567;  */

undefined8 FUN_007204dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfc | 2;
  func_0x0048d000(param_1 + 0x28);
  FUN_00720568(param_1,param_2);
  bVar1 = *(byte *)(param_1 + 0xb0);
  if ((bVar1 >> 1 & 1) == 0) {
    func_0x007215e4();
    bVar1 = *(byte *)(param_1 + 0xb0);
  }
  *(byte *)(param_1 + 0xb0) = bVar1 | 2;
  FUN_007206e4(param_1,param_2);
  FUN_00720c90(param_1,param_2);
  FUN_00461fe0(*(undefined8 *)(param_1 + 8),param_1 + 0x98);
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}



/* Entry: 00720568; end: 00720697;  */

void FUN_00720568(long param_1,long param_2)

{
  ulong uVar1;
  char ******ppppppcVar2;
  ulong uVar3;
  long lVar4;
  char ******ppppppcVar5;
  char ******ppppppcVar6;
  char *****pppppcStack_48;
  ulong uStack_40;
  byte bStack_31;
  
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
        func_0x007215e4();
      }
      FUN_0071f2d0(&pppppcStack_48,(long *)(param_2 + 0x10),0);
      uVar3 = (ulong)bStack_31;
      ppppppcVar5 = (char ******)pppppcStack_48;
      ppppppcVar6 = (char ******)pppppcStack_48;
      if (-1 < (char)bStack_31) {
        ppppppcVar5 = &pppppcStack_48;
        ppppppcVar6 = &pppppcStack_48;
      }
      while( true ) {
        ppppppcVar6 = (char ******)((long)ppppppcVar6 + 1);
        uVar1 = uStack_40;
        ppppppcVar2 = (char ******)pppppcStack_48;
        if (-1 < (char)uVar3) {
          uVar1 = uVar3;
          ppppppcVar2 = &pppppcStack_48;
        }
        if (ppppppcVar5 == (char ******)((long)ppppppcVar2 + uVar1)) break;
        FUN_00479e78(*(undefined8 *)(param_1 + 8),(long)*(char *)ppppppcVar5);
        uVar3 = (ulong)bStack_31;
        if (*(char *)ppppppcVar5 == '\n') {
          uVar1 = uStack_40;
          ppppppcVar2 = (char ******)pppppcStack_48;
          if (-1 < (char)bStack_31) {
            uVar1 = uVar3;
            ppppppcVar2 = &pppppcStack_48;
          }
          if (((char ******)((long)ppppppcVar2 + uVar1) != ppppppcVar6) &&
             (*(char *)ppppppcVar6 == '/')) {
            FUN_00461fe0(*(undefined8 *)(param_1 + 8),param_1 + 0x28);
            uVar3 = (ulong)bStack_31;
          }
        }
        ppppppcVar5 = (char ******)((long)ppppppcVar5 + 1);
      }
      func_0x0072160c();
      func_0x00721568();
    }
  }
  return;
}



/* Entry: 00720698; end: 007206e3;  */

long * FUN_00720698(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char acStack_50 [16];
  
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    if (param_1[10] == 0) {
      return param_1;
    }
  }
  else if (*(char *)((long)param_1 + 0x5f) == '\0') {
    return param_1;
  }
  plVar7 = (long *)param_1[1];
  FUN_00479e78(plVar7,10);
  uVar2 = param_1[6];
  plVar5 = (long *)param_1[5];
  if (-1 < (char)*(byte *)((long)param_1 + 0x3f)) {
    uVar2 = (ulong)*(byte *)((long)param_1 + 0x3f);
    plVar5 = param_1 + 5;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_50,plVar7);
  if (acStack_50[0] == '\x01') {
    lVar1 = (long)plVar7 + *(long *)(*plVar7 + -0x18);
    lVar8 = *(long *)(lVar1 + 0x28);
    uVar4 = *(uint *)(lVar1 + 8);
    lVar6 = lVar1;
    FUN_004628b4(lVar1);
    plVar3 = (long *)((long)plVar5 + uVar2);
    if ((uVar4 & 0xb0) != 0x20) {
      plVar3 = plVar5;
    }
    FUN_00462790(lVar8,plVar5,plVar3,(long *)((long)plVar5 + uVar2),lVar1,lVar6);
    if (lVar8 == 0) {
      func_0x00462960((long)plVar7 + *(long *)(*plVar7 + -0x18),5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_50);
  return plVar7;
}



/* Entry: 007206e4; end: 00720c8f;  */

long * FUN_007206e4(long param_1,ulong param_2)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x21;
  undefined8 *puVar15;
  uint uVar16;
  char *unaff_x22;
  ulong uVar17;
  char *unaff_x23;
  uint uVar18;
  ulong unaff_x24;
  long lVar19;
  long *unaff_x30;
  char acStack_f0 [16];
  ulong uStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long alStack_98 [3];
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  
  lStack_b8 = param_1;
  switch(*(undefined1 *)(param_2 + 8)) {
  case 0:
    plVar7 = (long *)(param_1 + 0x80);
    func_0x00721694();
    uStack_c0 = param_2;
    if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
      lVar10 = param_1 + 0x10;
      uVar14 = *(ulong *)(param_1 + 0x18);
      if (uVar14 < *(ulong *)(param_1 + 0x20)) {
        FUN_0047955c();
        lVar10 = uVar14 + 0x18;
      }
      else {
        FUN_00479590();
      }
      *(long *)(param_1 + 0x18) = lVar10;
      return (long *)(lVar10 + -0x18);
    }
    pcVar5 = *(char **)(param_1 + 8);
    plVar6 = (long *)*plVar7;
    plVar9 = (long *)plVar7[1];
    if (-1 < (char)*(byte *)((long)plVar7 + 0x17)) {
      plVar6 = plVar7;
      plVar9 = (long *)(ulong)*(byte *)((long)plVar7 + 0x17);
    }
FUN_00462690:
    uStack_e0 = unaff_x24;
    pcStack_d8 = unaff_x23;
    pcStack_d0 = unaff_x22;
    lStack_c8 = unaff_x21;
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_f0,pcVar5);
    if (acStack_f0[0] == '\x01') {
      pcVar1 = (char *)((long)pcVar5 + *(long *)(*(long *)pcVar5 + -0x18));
      lVar10 = *(long *)(pcVar1 + 0x28);
      uVar16 = *(uint *)(pcVar1 + 8);
      pcVar4 = pcVar1;
      FUN_004628b4(pcVar1);
      plVar7 = (long *)((long)plVar6 + (long)plVar9);
      if ((uVar16 & 0xb0) != 0x20) {
        plVar7 = plVar6;
      }
      FUN_00462790(lVar10,plVar6,plVar7,(long *)((long)plVar6 + (long)plVar9),pcVar1,pcVar4);
      if (lVar10 == 0) {
        func_0x00462960((char *)((long)pcVar5 + *(long *)(*(long *)pcVar5 + -0x18)),5);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_f0);
    return (long *)pcVar5;
  case 1:
    FUN_0071e77c(param_2);
    FUN_0071fe1c(&puStack_78);
    func_0x00721530();
    break;
  case 2:
    FUN_0071e874(param_2);
    FUN_0071fed0(&puStack_78);
    func_0x00721530();
    break;
  case 3:
    FUN_0071e96c(param_2);
    FUN_0071ff1c(&puStack_78,*(byte *)(param_1 + 0xb0) >> 2 & 1,*(undefined4 *)(param_1 + 0xb4),
                 *(undefined4 *)(param_1 + 0xb8));
    func_0x00721530();
    break;
  case 4:
    FUN_0071e410(param_2,alStack_98,&lStack_80);
    if ((int)param_2 == 0) {
      func_0x007215f4();
      func_0x00721530();
    }
    else {
      FUN_0072018c(&puStack_78,alStack_98[0],lStack_80 - alStack_98[0],
                   *(byte *)(param_1 + 0xb0) >> 3 & 1);
      func_0x00721530();
    }
    break;
  case 5:
    FUN_0071ea2c(param_2);
    FUN_00720170(&puStack_78,param_2);
    func_0x00721530();
    break;
  case 6:
    uVar14 = param_2;
    FUN_0071eb20();
    if ((int)uVar14 == 0) {
      func_0x007215f4();
      func_0x00721530();
    }
    else {
      if (*(int *)(param_1 + 0x60) != 2) {
        FUN_0071eb20();
        uVar3 = (uint)param_2;
        uVar18 = (uint)(*(uint *)(param_1 + 0x40) <= uVar3 * 3);
        lVar10 = param_1 + 0x10;
        FUN_00427b78();
        uVar16 = 0;
        while ((uVar16 < uVar3 && ((uVar18 & 1) == 0))) {
          func_0x00721548();
          if ((*(ushort *)(lVar10 + 8) & 0xfe) == 6) {
            func_0x0071eb70();
            uVar18 = (uint)lVar10 ^ 1;
          }
          else {
            uVar18 = 0;
          }
          uVar16 = uVar16 + 1;
        }
        if ((uVar18 & 1) == 0) {
          lVar10 = param_1 + 0x10;
          FUN_00426a0c(lVar10,param_2 & 0xffffffff);
          bVar2 = false;
          *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 1;
          uVar16 = uVar3 * 2 + 2;
          for (lVar19 = 0; unaff_x24 = (ulong)uVar16,
              ((param_2 & 0xffffffff) * 2 + (param_2 & 0xffffffff)) * 8 - lVar19 != 0;
              lVar19 = lVar19 + 0x18) {
            func_0x00721548();
            lVar12 = *(long *)(lVar10 + 0x10);
            if (lVar12 != 0) {
              if (*(char *)(lVar12 + 0x17) < '\0') {
                if (*(long *)(lVar12 + 8) == 0) goto code_r0x00720a10;
              }
              else if (*(char *)(lVar12 + 0x17) == '\0') {
code_r0x00720a10:
                lVar13 = (long)*(char *)(lVar12 + 0x2f);
                if (lVar13 < 0) {
                  lVar13 = *(long *)(lVar12 + 0x20);
                }
                if (lVar13 == 0) {
                  lVar13 = (long)*(char *)(lVar12 + 0x47);
                  if (lVar13 < 0) {
                    lVar13 = *(long *)(lVar12 + 0x38);
                  }
                  bVar2 = (bool)(lVar13 != 0 | bVar2);
                  goto code_r0x00720a24;
                }
              }
              bVar2 = true;
            }
code_r0x00720a24:
            func_0x00721548();
            lVar12 = param_1;
            FUN_007206e4(param_1,lVar10);
            lVar10 = *(long *)(param_1 + 0x10) + lVar19;
            lVar13 = (long)*(char *)(lVar10 + 0x17);
            if (lVar13 < 0) {
              lVar13 = *(long *)(lVar10 + 8);
            }
            uVar16 = uVar16 + (int)lVar13;
            lVar10 = lVar12;
          }
          *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfe;
          if ((!bVar2) && (uVar16 < *(uint *)(param_1 + 0x40))) {
            FUN_00461ffc(*(undefined8 *)(param_1 + 8),&UNK_00914d83);
            lVar10 = (long)*(char *)(param_1 + 0x5f);
            if (lVar10 < 0) {
              lVar10 = *(long *)(param_1 + 0x50);
            }
            if (lVar10 != 0) {
              func_0x007215fc();
            }
            unaff_x21 = (uVar14 & 0xffffffff) * 0x18;
            unaff_x22 = ", ";
            unaff_x23 = ",";
            for (uVar14 = 0; unaff_x21 - uVar14 != 0; uVar14 = uVar14 + 0x18) {
              if (uVar14 != 0) {
                lVar10 = (long)*(char *)(param_1 + 0x5f);
                if (lVar10 < 0) {
                  lVar10 = *(long *)(param_1 + 0x50);
                }
                pcVar5 = unaff_x23;
                if (lVar10 != 0) {
                  pcVar5 = unaff_x22;
                }
                FUN_00461ffc(*(undefined8 *)(param_1 + 8),pcVar5);
              }
              FUN_00461fe0(*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x10) + uVar14);
            }
            lVar10 = (long)*(char *)(param_1 + 0x5f);
            if (lVar10 < 0) {
              lVar10 = *(long *)(param_1 + 0x50);
            }
            if (lVar10 != 0) {
              func_0x007215fc();
            }
            pcVar5 = "]";
            func_0x00721694(*(undefined8 *)(param_1 + 8));
            uStack_c0 = uVar14;
            func_0x00462a8c();
            plVar6 = (long *)pcVar5;
            _strlen();
            plVar9 = (long *)pcVar5;
            func_0x00462b58();
            goto FUN_00462690;
          }
        }
      }
      func_0x007215f4();
      func_0x0072159c();
      func_0x00721678();
      FUN_00720dec(param_1);
      uVar17 = 0;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(param_1 + 0x18);
      while( true ) {
        func_0x00721548();
        func_0x007215ac();
        FUN_00720568();
        if (lVar10 == lVar19) {
          bVar11 = *(byte *)(param_1 + 0xb0);
          if ((bVar11 >> 1 & 1) == 0) {
            func_0x007215e4();
            bVar11 = *(byte *)(param_1 + 0xb0);
          }
          *(byte *)(param_1 + 0xb0) = bVar11 | 2;
          func_0x007215ac();
          FUN_007206e4();
          func_0x0072160c();
        }
        else {
          func_0x0072159c();
        }
        if ((int)uVar14 - 1 == uVar17) break;
        uVar17 = uVar17 + 1;
        FUN_00461ffc(*(undefined8 *)(param_1 + 8),",");
        func_0x00721554();
      }
      func_0x00721554();
      func_0x00720dfc(param_1);
      func_0x007215f4();
      func_0x0072159c();
    }
    break;
  case 7:
    FUN_0071f128(&puStack_78,param_2);
    if (puStack_78 == puStack_70) {
      func_0x00721654();
      FUN_00720d98(param_1,alStack_98);
    }
    else {
      func_0x00721654();
      func_0x0072159c();
      func_0x00721568();
      FUN_00720dec(param_1);
      puVar15 = puStack_78;
      while( true ) {
        FUN_0071f080(param_2,puVar15);
        func_0x007215ac();
        FUN_00720568();
        lVar10 = (long)*(char *)((long)puVar15 + 0x17);
        puVar8 = puVar15;
        if (lVar10 < 0) {
          lVar10 = puVar15[1];
          puVar8 = (undefined8 *)*puVar15;
        }
        FUN_0072018c(alStack_98,puVar8,lVar10,*(byte *)(param_1 + 0xb0) >> 3 & 1);
        func_0x0072159c();
        func_0x00721568();
        FUN_00461fe0(*(undefined8 *)(param_1 + 8),param_1 + 0x68);
        func_0x007215ac();
        FUN_007206e4();
        puVar15 = puVar15 + 3;
        if (puVar15 == puStack_70) break;
        FUN_00461ffc(*(undefined8 *)(param_1 + 8),",");
        func_0x00721554();
      }
      func_0x00721554();
      func_0x00720dfc(param_1);
      func_0x00721654();
      func_0x0072159c();
    }
    func_0x00721568();
    func_0x00459128(&puStack_78);
  default:
    goto LAB_00720bd8;
  }
  func_0x00721678();
LAB_00720bd8:
  func_0x00721694(unaff_x30);
  return unaff_x30;
}



/* Entry: 00720c90; end: 00720d97;  */

void FUN_00720c90(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*(int *)(param_1 + 0x60) == 0) {
    return;
  }
  plVar2 = (long *)(param_2 + 0x10);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x2f) < '\0') {
    if (*(long *)(lVar1 + 0x20) == 0) goto LAB_00720d18;
  }
  else if (*(char *)(lVar1 + 0x2f) == '\0') goto LAB_00720d18;
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_0071f2d0(auStack_60,plVar2,1);
  FUN_00461b38(auStack_48," ",auStack_60);
  FUN_00461fe0(uVar3,auStack_48);
  func_0x00721580();
  func_0x0072165c();
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    return;
  }
LAB_00720d18:
  if (*(char *)(lVar1 + 0x47) < '\0') {
    if (*(long *)(lVar1 + 0x38) == 0) {
      return;
    }
  }
  else if (*(char *)(lVar1 + 0x47) == '\0') {
    return;
  }
  FUN_00720698(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_0071f2d0(auStack_48,plVar2,2);
  FUN_00461fe0(uVar3,auStack_48);
  func_0x00721580();
  return;
}



/* Entry: 00720d98; end: 00720daf;  */

long * FUN_00720d98(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char acStack_50 [16];
  
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    plVar7 = *(long **)(param_1 + 8);
    uVar2 = param_2[1];
    puVar4 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar4 = param_2;
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_50,plVar7);
    if (acStack_50[0] == '\x01') {
      lVar6 = (long)plVar7 + *(long *)(*plVar7 + -0x18);
      lVar8 = *(long *)(lVar6 + 0x28);
      uVar3 = *(uint *)(lVar6 + 8);
      lVar5 = lVar6;
      FUN_004628b4(lVar6);
      puVar1 = (undefined8 *)((long)puVar4 + uVar2);
      if ((uVar3 & 0xb0) != 0x20) {
        puVar1 = puVar4;
      }
      FUN_00462790(lVar8,puVar4,puVar1,(undefined8 *)((long)puVar4 + uVar2),lVar6,lVar5);
      if (lVar8 == 0) {
        func_0x00462960((long)plVar7 + *(long *)(*plVar7 + -0x18),5);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_50);
    return plVar7;
  }
  lVar6 = param_1 + 0x10;
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (uVar2 < *(ulong *)(param_1 + 0x20)) {
    FUN_0047955c();
    lVar6 = uVar2 + 0x18;
  }
  else {
    FUN_00479590();
  }
  *(long *)(param_1 + 0x18) = lVar6;
  return (long *)(lVar6 + -0x18);
}



/* Entry: 00720db0; end: 00720deb;  */

void FUN_00720db0(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0xb0) >> 1 & 1) == 0) {
    func_0x007215e4();
  }
  FUN_00461fe0(*(undefined8 *)(param_1 + 8),param_2);
  func_0x0072160c();
  return;
}



/* Entry: 00720dec; end: 00720e1f;  */

void FUN_00720dec(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  plVar2 = (long *)*(long *)(param_1 + 0x48);
  if (-1 < (char)*(byte *)(param_1 + 0x5f)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x5f);
    plVar2 = (long *)(param_1 + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)
            (param_1 + 0x28,plVar2,uVar1);
  return;
}



/* Entry: 00720e20; end: 00720e6b;  */

undefined8 * FUN_00720e20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f568;
  FUN_0071de14(param_1 + 1,0);
  FUN_00720e6c();
  return param_1;
}



/* Entry: 00720e6c; end: 00720faf;  */

void FUN_00720e6c(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  func_0x0072164c(param_1,&UNK_0091d846);
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  func_0x0072164c();
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  func_0x0072153c();
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  func_0x0072153c();
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  func_0x0072153c();
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  func_0x0072153c();
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  func_0x0071def4(auStack_48,0x11);
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  func_0x0072164c();
  func_0x00721578();
  func_0x00721570();
  func_0x00721560();
  return;
}



/* Entry: 00720fb0; end: 00720fdb;  */

undefined8 * FUN_00720fb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f568;
  func_0x0071e360(param_1 + 1);
  return param_1;
}



/* Entry: 00720fdc; end: 00720fdf;  */

undefined8 * FUN_00720fdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f568;
  func_0x0071e360(param_1 + 1);
  return param_1;
}



/* Entry: 00720fe0; end: 00720ff3;  */

void FUN_00720fe0(void)

{
  FUN_00720fb0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00720ff4; end: 007213df;  */

char * FUN_00720ff4(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char *pcVar8;
  byte bVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  char cStack_b1;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  
  uVar6 = param_1 + 8;
  FUN_0071f044(uVar6,"indentation");
  FUN_0071e480(auStack_68);
  func_0x00721588();
  FUN_0071e480(auStack_80);
  func_0x00721588();
  FUN_0071e480(auStack_98);
  func_0x00721588();
  FUN_0071ea2c();
  uVar2 = (uint)uVar6;
  func_0x00721588();
  FUN_0071ea2c();
  uVar3 = uVar2;
  func_0x00721588();
  FUN_0071ea2c();
  uVar4 = uVar3;
  func_0x00721588();
  FUN_0071ea2c();
  uVar5 = uVar4;
  func_0x00721588();
  FUN_0071e5cc();
  puVar7 = auStack_80;
  FUN_004636dc(puVar7,&UNK_0091d846);
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = auStack_80;
    FUN_004636dc(puVar7,"None");
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00721670();
      FUN_0071dac0(auStack_b0);
      goto LAB_00721320;
    }
    uVar12 = 0;
  }
  else {
    uVar12 = 2;
  }
  puVar7 = auStack_98;
  FUN_004636dc(puVar7,&UNK_0091d86f);
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = auStack_98;
    FUN_004636dc(puVar7,&UNK_0091d87b);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x00721670();
      FUN_0071dac0(auStack_b0);
LAB_00721320:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x721324);
      (*pcVar1)();
    }
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  func_0x00721670();
  if ((uVar6 & 1) == 0) {
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
    }
    if (uStack_60 != 0) goto LAB_00721164;
    pcVar8 = ":";
  }
  else {
    pcVar8 = ": ";
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(auStack_b0,pcVar8);
LAB_00721164:
  FUN_00425cb4(&uStack_c8,&DAT_00911f55);
  if (uVar2 != 0) {
    if (cStack_b1 < '\0') {
      *(undefined1 *)CONCAT71(uStack_c7,uStack_c8) = 0;
      uStack_c0 = 0;
    }
    else {
      uStack_c8 = 0;
      cStack_b1 = '\0';
    }
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  pcVar8 = section_000000b8.sectname + 8;
  __Znwm();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_f8,auStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_110,auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_128,&uStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_140,&uStack_e0);
  *(undefined ***)pcVar8 = &PTR_FUN_00a1f540;
  pcVar8[8] = '\0';
  pcVar8[9] = '\0';
  pcVar8[10] = '\0';
  pcVar8[0xb] = '\0';
  pcVar8[0xc] = '\0';
  pcVar8[0xd] = '\0';
  pcVar8[0xe] = '\0';
  pcVar8[0xf] = '\0';
  if (0x10 < uVar5) {
    uVar5 = 0x11;
  }
  *(qword *)(pcVar8 + 0x18) = 0;
  pcVar8[0x10] = '\0';
  pcVar8[0x11] = '\0';
  pcVar8[0x12] = '\0';
  pcVar8[0x13] = '\0';
  pcVar8[0x14] = '\0';
  pcVar8[0x15] = '\0';
  pcVar8[0x16] = '\0';
  pcVar8[0x17] = '\0';
  *(undefined8 *)(pcVar8 + 0x28) = 0;
  *(qword *)(pcVar8 + 0x20) = 0;
  *(undefined8 *)(pcVar8 + 0x38) = 0;
  *(undefined8 *)(pcVar8 + 0x30) = 0;
  *(dword *)(pcVar8 + 0x40) = 0x4a;
  *(undefined8 *)(pcVar8 + 0x50) = uStack_f0;
  *(undefined8 *)(pcVar8 + 0x48) = uStack_f8;
  *(undefined8 *)(pcVar8 + 0x58) = uStack_e8;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined4 *)(pcVar8 + 0x60) = uVar12;
  *(undefined8 *)(pcVar8 + 0x78) = uStack_100;
  *(undefined8 *)(pcVar8 + 0x70) = uStack_108;
  *(undefined8 *)(pcVar8 + 0x68) = uStack_110;
  uStack_108 = 0;
  uStack_100 = 0;
  *(undefined8 *)(pcVar8 + 0x88) = uStack_120;
  *(undefined8 *)(pcVar8 + 0x80) = uStack_128;
  *(undefined8 *)(pcVar8 + 0x90) = uStack_118;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  *(undefined8 *)(pcVar8 + 0xa0) = uStack_138;
  *(undefined8 *)(pcVar8 + 0x98) = uStack_140;
  *(undefined8 *)(pcVar8 + 0xa8) = uStack_130;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  bVar9 = 4;
  if (uVar3 == 0) {
    bVar9 = 0;
  }
  bVar10 = 8;
  if (uVar4 == 0) {
    bVar10 = 0;
  }
  pcVar8[0xb0] = bVar10 | bVar9;
  *(uint *)(pcVar8 + 0xb4) = uVar5;
  *(undefined4 *)(pcVar8 + 0xb8) = uVar11;
  func_0x0072165c();
  func_0x00721580();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return pcVar8;
}



/* Entry: 007213e0; end: 007213e3;  */

undefined8 * FUN_007213e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f540;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  func_0x00459128(param_1 + 2);
  return param_1;
}



/* Entry: 007213e4; end: 007213f7;  */

void FUN_007213e4(void)

{
  FUN_007214d4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 007213f8; end: 007214d3;  */

void FUN_007213f8(undefined8 param_1,ulong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined4 uStack_38;
  uint uStack_34;
  char cStack_21;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,&UNK_0091d8f1)
  ;
  cStack_21 = '\x04';
  for (lVar4 = 0; uVar2 = uStack_34, lVar4 != 4; lVar4 = lVar4 + 1) {
    *(undefined1 *)((long)&uStack_38 + lVar4) = 0x20;
  }
  uStack_34 = uStack_34 & 0xffffff00;
  bVar3 = -1 < cStack_21;
  puVar1 = (undefined4 *)(CONCAT44(uVar2,uStack_38) & 0xffffff00ffffffff);
  if (bVar3) {
    puVar1 = &uStack_38;
  }
  *(undefined *)puVar1 = (&UNK_0091d8f4)[param_2 >> 7 & 0x1fe];
  puVar1 = (undefined4 *)CONCAT44(uStack_34,uStack_38);
  if (bVar3) {
    puVar1 = &uStack_38;
  }
  *(undefined *)((long)puVar1 + 1) = (&UNK_0091d8f4)[param_2 >> 7 & 0x1ffffff | 1];
  lVar4 = (param_2 & 0xff) * 2;
  puVar1 = (undefined4 *)CONCAT44(uStack_34,uStack_38);
  if (bVar3) {
    puVar1 = &uStack_38;
  }
  *(undefined *)((long)puVar1 + 2) = (&UNK_0091d8f4)[lVar4];
  puVar1 = (undefined4 *)CONCAT44(uStack_34,uStack_38);
  if (bVar3) {
    puVar1 = &uStack_38;
  }
  *(undefined *)((long)puVar1 + 3) = (&UNK_0091d8f5)[lVar4];
  FUN_004bab3c(param_1,&uStack_38);
  func_0x00721568();
  return;
}



/* Entry: 007214d4; end: 0072152f;  */

undefined8 * FUN_007214d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a1f540;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x13);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  func_0x00459128(param_1 + 2);
  return param_1;
}



/* Entry: 00721530; end: 007216af;  */

long * FUN_00721530(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  long lVar8;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  int in_stack_0000003c;
  char acStack_50 [16];
  
  if ((*(byte *)(unaff_x19 + 0xb0) & 1) == 0) {
    plVar7 = *(long **)(unaff_x19 + 8);
    uVar2 = in_stack_00000030;
    puVar4 = in_stack_00000028;
    if (-1 < in_stack_0000003c) {
      uVar2 = (ulong)in_stack_0000003c._3_1_;
      puVar4 = &stack0x00000028;
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_50,plVar7);
    if (acStack_50[0] == '\x01') {
      lVar6 = (long)plVar7 + *(long *)(*plVar7 + -0x18);
      lVar8 = *(long *)(lVar6 + 0x28);
      uVar3 = *(uint *)(lVar6 + 8);
      lVar5 = lVar6;
      FUN_004628b4(lVar6);
      puVar1 = (undefined8 *)((long)puVar4 + uVar2);
      if ((uVar3 & 0xb0) != 0x20) {
        puVar1 = puVar4;
      }
      FUN_00462790(lVar8,puVar4,puVar1,(undefined8 *)((long)puVar4 + uVar2),lVar6,lVar5);
      if (lVar8 == 0) {
        func_0x00462960((long)plVar7 + *(long *)(*plVar7 + -0x18),5);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_50);
    return plVar7;
  }
  lVar6 = unaff_x19 + 0x10;
  uVar2 = *(ulong *)(unaff_x19 + 0x18);
  if (uVar2 < *(ulong *)(unaff_x19 + 0x20)) {
    FUN_0047955c();
    lVar6 = uVar2 + 0x18;
  }
  else {
    FUN_00479590();
  }
  *(long *)(unaff_x19 + 0x18) = lVar6;
  return (long *)(lVar6 + -0x18);
}



/* Entry: 007216b0; end: 0072172f;  */

void FUN_007216b0(undefined8 param_1,long param_2)

{
  undefined1 auStack_98 [56];
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_00721730(auStack_98,param_2 / 1000);
  pcStack_58 = FUN_0072180c;
  lStack_50 = param_2 % 1000;
  uStack_48 = 0;
  puStack_60 = auStack_98;
  func_0x00461914(&UNK_0091daf5);
  FUN_00721c60(param_1);
  return;
}



/* Entry: 00721730; end: 007217c3;  */

undefined8 * FUN_00721730(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  FUN_007217c4();
  if (((ulong)puVar1 & 1) != 0) {
    param_1[1] = uStack_50;
    *param_1 = uStack_58;
    param_1[3] = uStack_40;
    param_1[2] = uStack_48;
    param_1[5] = uStack_30;
    param_1[4] = uStack_38;
    param_1[6] = uStack_28;
    return puVar1;
  }
  lVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_007217e4();
  lVar3 = lVar2;
  ___cxa_throw(lVar2,&PTR_DAT_00a1f600,0x721c1c);
  ___cxa_free_exception(lVar2);
  __Unwind_Resume(lVar3);
  _localtime_r();
  return (undefined8 *)(ulong)(lVar3 != 0);
}



/* Entry: 007217c4; end: 007217e3;  */

bool FUN_007217c4(long param_1)

{
  _localtime_r(param_1,param_1 + 8);
  return param_1 != 0;
}



/* Entry: 007217e4; end: 007217e7;  */

void FUN_007217e4(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_DAT_00a1f628;
  return;
}



/* Entry: 007217e8; end: 0072180b;  */

void FUN_007217e8(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2EPKc();
  *param_1 = &PTR_DAT_00a1f628;
  return;
}



/* Entry: 0072180c; end: 00721a0f;  */

void FUN_0072180c(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  undefined **ppuStack_488;
  undefined1 *puStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined1 auStack_468 [504];
  undefined **ppuStack_270;
  undefined1 *puStack_268;
  long lStack_260;
  ulong uStack_258;
  undefined1 auStack_250 [504];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puStack_480 = auStack_468;
  ppuStack_488 = &PTR_FUN_00a0c670;
  uStack_470 = 500;
  lStack_478 = 0;
  pcVar2 = (char *)*param_2;
  pcVar8 = pcVar2;
  pcVar13 = pcVar2;
  if ((param_2[1] != 0) && (*pcVar2 == ':')) {
    pcVar8 = pcVar2 + 1;
    pcVar13 = pcVar2 + 1;
  }
  for (; (pcVar11 = pcVar2 + param_2[1], pcVar8 != pcVar2 + param_2[1] &&
         (pcVar11 = pcVar8, *pcVar8 != '}')); pcVar8 = pcVar8 + 1) {
  }
  if ("" < pcVar11 + (1 - (long)pcVar13)) {
    FUN_0064203c(&ppuStack_488);
  }
  FUN_00721a10(&ppuStack_488,pcVar13,pcVar11);
  ppuStack_270 = (undefined **)((ulong)ppuStack_270 & 0xffffffffffffff00);
  FUN_00721aa0(&ppuStack_488,&ppuStack_270);
  lVar3 = *param_2;
  *param_2 = (long)pcVar11;
  param_2[1] = param_2[1] + (lVar3 - (long)pcVar11);
  puStack_268 = auStack_250;
  ppuStack_270 = &PTR_FUN_00a0c670;
  uStack_258 = 500;
  lStack_260 = 0;
  while (uVar12 = uStack_258, puVar4 = puStack_268,
        _strftime(puStack_268,uStack_258,puStack_480,param_1), puVar4 == (undefined1 *)0x0) {
    if ((ulong)(lStack_478 << 8) <= uVar12) goto LAB_0072197c;
    if (uVar12 < 0xb) {
      uVar12 = 10;
    }
    if (uStack_258 < uStack_258 + uVar12) {
      (*(code *)*ppuStack_270)(&ppuStack_270);
    }
  }
  FUN_00721b24(&ppuStack_270);
LAB_0072197c:
  puVar7 = (undefined1 *)*param_3;
  puVar4 = puStack_268 + lStack_260;
  FUN_00721b74();
  puVar6 = puVar4;
  func_0x006420e4(&ppuStack_270);
  *param_3 = (long)puVar4;
  pppuVar5 = &ppuStack_488;
  func_0x006420e4();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    func_0x006420e4(&ppuStack_270);
    func_0x006420e4(&ppuStack_488);
    __Unwind_Resume();
    ppuVar9 = pppuVar5[2];
    do {
      uVar12 = (long)puVar7 - (long)puVar6;
      ppuVar10 = pppuVar5[3];
      if (ppuVar10 < (undefined **)(uVar12 + (long)ppuVar9)) {
        (*(code *)**pppuVar5)(pppuVar5);
        ppuVar9 = pppuVar5[2];
        ppuVar10 = pppuVar5[3];
      }
      uVar1 = (long)ppuVar10 - (long)ppuVar9;
      if (uVar12 <= (ulong)((long)ppuVar10 - (long)ppuVar9)) {
        uVar1 = uVar12;
      }
      FUN_00721af8(puVar6,uVar1,(long)pppuVar5[1] + (long)ppuVar9);
      ppuVar9 = (undefined **)((long)pppuVar5[2] + uVar1);
      pppuVar5[2] = ppuVar9;
      puVar6 = puVar6 + uVar1;
    } while (puVar6 != puVar7);
    return;
  }
  return;
}



/* Entry: 00721a10; end: 00721a9f;  */

void FUN_00721a10(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = param_1[2];
  do {
    uVar4 = param_3 - param_2;
    uVar3 = param_1[3];
    if (uVar3 < uVar4 + lVar2) {
      (**(code **)*param_1)(param_1);
      lVar2 = param_1[2];
      uVar3 = param_1[3];
    }
    uVar1 = uVar3 - lVar2;
    if (uVar4 <= uVar3 - lVar2) {
      uVar1 = uVar4;
    }
    FUN_00721af8(param_2,uVar1,param_1[1] + lVar2);
    lVar2 = param_1[2] + uVar1;
    param_1[2] = lVar2;
    param_2 = param_2 + uVar1;
  } while (param_2 != param_3);
  return;
}



/* Entry: 00721aa0; end: 00721af7;  */

void FUN_00721aa0(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  uVar2 = lVar3 + 1;
  if ((ulong)param_1[3] < uVar2) {
    (**(code **)*param_1)(param_1);
    lVar3 = param_1[2];
    uVar2 = lVar3 + 1;
  }
  uVar1 = *param_2;
  param_1[2] = uVar2;
  *(undefined1 *)(param_1[1] + lVar3) = uVar1;
  return;
}



/* Entry: 00721af8; end: 00721b23;  */

undefined1  [16] FUN_00721af8(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_1;
  puVar2 = param_3;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar2 = *puVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 00721b24; end: 00721b73;  */

void FUN_00721b24(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[3];
  if (uVar1 < param_2) {
    (**(code **)*param_1)(param_1,param_2);
    uVar1 = param_1[3];
  }
  if (uVar1 <= param_2) {
    param_2 = uVar1;
  }
  param_1[2] = param_2;
  return;
}



/* Entry: 00721b74; end: 00721b9f;  */

void FUN_00721b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_00721ba0(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 00721ba0; end: 00721bef;  */

undefined1  [16] FUN_00721ba0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    FUN_00721aa0(param_4,param_2);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 00721bf0; end: 00721c1f;  */

int FUN_00721bf0(uint param_1)

{
  return (uint)*(ushort *)(&UNK_0083cdaa + (ulong)((uint)LZCOUNT(param_1 | 1) ^ 0x1f) * 2) -
         (uint)(param_1 <
               *(uint *)(&UNK_0083c168 +
                        (ulong)*(ushort *)
                                (&UNK_0083cdaa + (ulong)((uint)LZCOUNT(param_1 | 1) ^ 0x1f) * 2) * 4
                        ));
}



/* Entry: 00721c20; end: 00721c33;  */

void FUN_00721c20(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00721c34; end: 00721c5f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00721c34(undefined8 *param_1,undefined8 param_2,ulong param_3,float *param_4)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  uint uVar22;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined1 *puVar23;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long unaff_x21;
  long lVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  undefined1 auStack_290 [8];
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_78;
  
  puVar12 = param_1;
  func_0x00729b24();
  puVar17 = puVar12;
  puVar16 = param_1;
  FUN_007217e4();
  func_0x007297dc();
  func_0x007299e4();
  func_0x00729e00();
  puVar20 = puVar16;
  uVar27 = param_3;
  func_0x00729854();
  iVar25 = (int)uVar27;
  uVar10 = puVar20 == (undefined8 *)((long)&MACH_HEADER.magic + 2);
  uStack_78 = extraout_x8_00;
  if ((!(bool)uVar10) || (puVar13 = puVar17, FUN_00722310(), (int)puVar13 == 0)) {
    func_0x0072a438();
    puStack_288 = (undefined8 *)(extraout_x9 + 0x20);
    uStack_278 = 500;
    uStack_280 = 0;
    auStack_290 = (undefined1  [8])extraout_x8_01;
    FUN_00722388(auStack_290,puVar17,puVar16,param_3,param_4,0);
    func_0x0072a2dc();
code_r0x00721cf4:
    puVar17 = (undefined8 *)auStack_290;
    func_0x006420e4(puVar17);
    goto LAB_00721cfc;
  }
  if ((long)param_3 < 0) {
    if ((0 < (int)(uint)param_3) && (fVar3 = param_4[4], fVar3 != 0.0)) goto LAB_00721d34;
    goto LAB_0072228c;
  }
  fVar3 = (float)((uint)param_3 & 0xf);
  if ((param_3 & 0xf) == 0) goto LAB_0072228c;
LAB_00721d34:
  uVar7 = (int)fVar3 - 1;
  uVar10 = uVar7 == 0xe;
  if (0xe < uVar7) {
    func_0x00729ee4();
    puVar17 = puVar13;
    goto LAB_00721cfc;
  }
  pcVar9 = *(code **)(param_4 + 2);
  fVar3 = *param_4;
  lVar2 = *(long *)param_4;
  puVar18 = *(undefined2 **)param_4;
  uVar8 = *(undefined8 *)param_4;
  uVar15 = *(undefined8 *)param_4;
  puVar17 = *(undefined8 **)param_4;
  switch(uVar7) {
  case 0:
    puVar17 = (undefined8 *)auStack_290;
    if ((int)fVar3 < 0) {
      puVar17 = (undefined8 *)((long)auStack_290 + 1);
      auStack_290[0] = 0x2d;
    }
    uVar10 = fVar3 == 0.0;
    fVar4 = (float)-(int)fVar3;
    if (-1 < (int)fVar3) {
      fVar4 = fVar3;
    }
    func_0x0072a294();
    func_0x00723bf8(puVar17,fVar4,puVar13);
    func_0x00729950();
    break;
  case 1:
    func_0x0072a294();
    puVar17 = (undefined8 *)auStack_290;
    func_0x00723bf8(puVar17,fVar3,puVar13);
    func_0x00729950();
    break;
  case 2:
    puVar17 = (undefined8 *)auStack_290;
    if ((int)param_4[1] < 0) {
      puVar17 = (undefined8 *)((long)auStack_290 + 1);
      auStack_290[0] = 0x2d;
    }
    uVar10 = lVar2 == 0;
    lVar14 = -lVar2;
    if (-1 < lVar2) {
      lVar14 = lVar2;
    }
    func_0x00729fe0();
    func_0x00723c7c(puVar17,lVar14,puVar13);
    func_0x00729950();
    break;
  case 3:
    func_0x00729fe0();
    puVar17 = (undefined8 *)auStack_290;
    func_0x00723c7c(puVar17,uVar15,puVar13);
    func_0x00729950();
    break;
  case 4:
    puVar17 = (undefined8 *)auStack_290;
    if ((long)pcVar9 < 0) {
      puVar17 = (undefined8 *)((long)auStack_290 + 1);
      auStack_290[0] = 0x2d;
    }
    uVar27 = (long)pcVar9 >> 0x3f;
    lVar2 = (*(ulong *)param_4 ^ uVar27) - uVar27;
    uVar10 = lVar2 == 0;
    lVar24 = ((ulong)pcVar9 ^ uVar27) - (uVar27 + ((*(ulong *)param_4 ^ uVar27) < uVar27));
    lVar14 = lVar2;
    FUN_00723cd4(lVar2,lVar24);
    FUN_00723d5c(puVar17,lVar2,lVar24,lVar14);
    func_0x00729950();
    break;
  case 5:
    uVar15 = uVar8;
    FUN_00723cd4(uVar8,pcVar9);
    puVar17 = (undefined8 *)auStack_290;
    FUN_00723d5c(puVar17,uVar8,pcVar9,uVar15);
    func_0x00729950();
    break;
  case 6:
    uVar10 = ((uint)fVar3 & 1) == 0;
    lVar2 = 4;
    if ((bool)uVar10) {
      lVar2 = 5;
    }
    pcVar5 = "true";
    if ((bool)uVar10) {
      pcVar5 = "false";
    }
    _memcpy(auStack_290,pcVar5,lVar2);
    puVar17 = extraout_x8;
    FUN_0052fd1c(extraout_x8,auStack_290,(long)auStack_290 + lVar2);
    break;
  case 7:
    auStack_290[0] = SUB41(fVar3,0);
    puVar17 = extraout_x8;
    FUN_0052fd1c(extraout_x8,auStack_290,(long)auStack_290 + 1);
    break;
  case 8:
    func_0x00729ee4();
    if ((((uint)fVar3 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar10 = ABS(fVar3) == INFINITY;
      puVar17 = extraout_x8;
      FUN_00723df0(extraout_x8,uVar10,&UNK_0083ce4c,(uint)fVar3 >> 0x17 & 0x100);
      break;
    }
    FUN_00722620(ABS(fVar3));
    uVar27 = (ulong)puVar13 >> 0x20;
    puVar16 = puVar13;
    FUN_00721bf0();
    iVar11 = (int)puVar16;
    iVar25 = iVar11 + (int)((ulong)puVar13 >> 0x20);
    if (iVar25 - 0x11U < 0xffffffec) {
      uVar7 = iVar25 - 1;
      uVar10 = iVar11 == 1;
      func_0x00729b74();
      puVar17 = puVar16;
      if ((int)fVar3 < 0) {
        func_0x007298e0();
        puVar17 = (undefined8 *)((long)puVar16 + 1);
        *(undefined1 *)puVar16 = extraout_w8;
      }
      func_0x00723f54();
      puVar23 = (undefined1 *)((long)puVar17 + 1);
      *(undefined1 *)puVar17 = 0x65;
      func_0x0072975c(uStack_78);
      if ((bool)uVar10) {
        uVar10 = 0x2d;
        if (-1 < (int)uVar7) {
          uVar10 = 0x2b;
        }
        uVar22 = -uVar7;
        if (-1 < (int)uVar7) {
          uVar22 = uVar7;
        }
        puVar18 = (undefined2 *)(puVar23 + 1);
        *puVar23 = uVar10;
        if (99 < uVar22) {
          lVar2 = (ulong)(uVar22 / 100) * 2;
          puVar19 = puVar18;
          if (999 < uVar22) {
            puVar19 = (undefined2 *)(puVar23 + 2);
            puVar23[1] = (&UNK_0083ccd4)[lVar2];
          }
          puVar18 = (undefined2 *)((long)puVar19 + 1);
          *(undefined *)puVar19 = (&UNK_0083ccd5)[lVar2];
          uVar22 = uVar22 % 100;
        }
        *puVar18 = *(undefined2 *)(&UNK_0083ccd4 + (ulong)uVar22 * 2);
        return (undefined8 *)(puVar18 + 1);
      }
    }
    else {
      if ((long)puVar13 < 0) {
        uVar10 = iVar25 == 1;
        if (0 < iVar25) {
          func_0x00729b74();
          func_0x00729b0c();
          puVar17 = puVar16;
          if ((int)fVar3 < 0) {
            func_0x007298e0();
            puVar17 = (undefined8 *)((long)puVar16 + 1);
            *(undefined1 *)puVar16 = extraout_w8_01;
          }
          func_0x00723f54();
          func_0x0072975c(uStack_78);
          if ((bool)uVar10) goto code_r0x00722268;
          goto LAB_00722288;
        }
        uVar10 = iVar11 == 0;
        iVar26 = 0;
        if (!(bool)uVar10) {
          iVar26 = -iVar25;
        }
        func_0x00729b74();
        func_0x00729b0c();
        puVar17 = puVar16;
        if ((int)fVar3 < 0) {
          func_0x007298e0();
          puVar17 = (undefined8 *)((long)puVar16 + 1);
          *(undefined1 *)puVar16 = extraout_w8_02;
        }
        puVar23 = (undefined1 *)((long)puVar17 + 1);
        *(undefined1 *)puVar17 = 0x30;
        if (iVar26 != 0 || iVar11 != 0) {
          *(undefined1 *)((long)puVar17 + 1) = 0x2e;
          puVar17 = (undefined8 *)((long)puVar17 + 2);
          while( true ) {
            uVar10 = iVar26 + -1 == 0;
            if (iVar26 < 1) break;
            *(undefined1 *)puVar17 = 0x30;
            puVar17 = (undefined8 *)((long)puVar17 + 1);
            iVar26 = iVar26 + -1;
          }
          func_0x0072a34c(puVar17,puVar23);
        }
      }
      else {
        puVar23 = (undefined1 *)(uVar27 + (uint)(iVar11 - ((int)fVar3 >> 0x1f)));
        func_0x00729b74();
        func_0x00729b0c();
        puVar17 = puVar16;
        if ((int)fVar3 < 0) {
          func_0x007298e0();
          puVar17 = (undefined8 *)((long)puVar16 + 1);
          *(undefined1 *)puVar16 = extraout_w8_00;
        }
        func_0x0072a34c();
        while( true ) {
          iVar25 = (int)uVar27;
          uVar7 = iVar25 - 1;
          uVar10 = uVar7 == 0;
          uVar27 = (ulong)uVar7;
          if (iVar25 < 1) break;
          *puVar23 = 0x30;
          puVar23 = puVar23 + 1;
        }
      }
      func_0x0072975c(uStack_78);
      if ((bool)uVar10) {
code_r0x00722268:
        puVar21 = &UNK_0083ce56;
        func_0x00729d0c();
        bVar6 = puVar21[4];
        if (bVar6 == 1) {
          for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
            *(undefined1 *)puVar12 = *(undefined1 *)param_1;
            puVar12 = (undefined8 *)((long)puVar12 + 1);
          }
        }
        else {
          for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
            if (bVar6 != 0) {
              func_0x0072a134();
              _memmove();
            }
            puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar6);
          }
        }
        return puVar12;
      }
    }
    goto LAB_00722288;
  case 9:
    func_0x00729ec4();
    uVar10 = (extraout_x9_01 & 0x7ff00000) == 0;
    if ((bool)uVar10) {
      func_0x0072a3bc();
      func_0x0072a310();
      puVar17 = puVar13;
    }
    else {
      func_0x00729f54(fVar3);
      auStack_290 = (undefined1  [8])puVar13;
      puStack_288 = puVar20;
      func_0x0072a27c();
      puVar17 = puVar13;
    }
    break;
  case 10:
    func_0x00729ec4();
    uVar10 = (extraout_x9_02 & 0x7ff00000) == 0;
    if ((bool)uVar10) {
      func_0x0072a3bc();
      func_0x0072a310();
      puVar17 = puVar13;
    }
    else {
      func_0x00729f54(fVar3);
      auStack_290 = (undefined1  [8])puVar13;
      puStack_288 = puVar20;
      func_0x0072a27c();
      puVar17 = puVar13;
    }
    break;
  case 0xb:
    func_0x00729ee4();
    if (puVar17 == (undefined8 *)0x0) goto code_r0x00722290;
    _strlen(puVar17);
    func_0x0072a134();
    func_0x0072442c();
    break;
  case 0xc:
    func_0x00729ee4();
    puVar17 = extraout_x8;
    func_0x0072442c(extraout_x8);
    break;
  case 0xd:
    func_0x00729ee4();
    FUN_00724460();
    uVar27 = ((ulong)puVar18 & 0xffffffff) + 2;
    func_0x00729b74();
    puVar17 = (undefined8 *)(puVar18 + 1);
    *puVar18 = 0x7830;
    func_0x0072975c(uStack_78);
    if ((bool)uVar10) {
      func_0x00729e1c();
      puVar23 = (undefined1 *)((long)puVar17 + (long)iVar25);
      do {
        puVar23 = puVar23 + -1;
        *puVar23 = (&UNK_0091db3e)[uVar27 & 0xf];
        bVar1 = 0xf < uVar27;
        uVar27 = uVar27 >> 4;
      } while (bVar1);
      return puVar17;
    }
    goto LAB_00722288;
  case 0xe:
    func_0x0072a438(*(undefined8 *)param_4);
    puStack_288 = (undefined8 *)(extraout_x9_00 + 0x20);
    uStack_278 = 500;
    uStack_280 = 0;
    auStack_290 = (undefined1  [8])extraout_x8_02;
    (*pcVar9)();
    func_0x0072a2dc();
    goto code_r0x00721cf4;
  }
LAB_00721cfc:
  func_0x0072975c(uStack_78);
  if ((bool)uVar10) {
    return puVar17;
  }
LAB_00722288:
  ___stack_chk_fail();
  puVar13 = puVar17;
LAB_0072228c:
  func_0x007299d8();
code_r0x00722290:
  func_0x00729b24();
  FUN_007217e8();
  ___cxa_throw(puVar13,&PTR_DAT_00a1f600,0x721c1c);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x7222c0);
  (*pcVar9)();
}



/* Entry: 00721c60; end: 0072230f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_00721c60(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  uint uVar19;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined1 *puVar20;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  undefined8 *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  undefined1 auStack_270 [8];
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_58;
  
  lVar17 = param_3;
  uVar24 = param_4;
  func_0x00729854();
  iVar22 = (int)uVar24;
  uVar9 = lVar17 == 2;
  uStack_58 = extraout_x8;
  if ((!(bool)uVar9) || (puVar11 = param_2, FUN_00722310(), (int)puVar11 == 0)) {
    func_0x0072a438();
    lStack_268 = extraout_x9 + 0x20;
    uStack_258 = 500;
    uStack_260 = 0;
    auStack_270 = (undefined1  [8])extraout_x8_00;
    FUN_00722388(auStack_270,param_2,param_3,param_4,param_5,0);
    func_0x0072a2dc();
code_r0x00721cf4:
    param_1 = (undefined8 *)auStack_270;
    func_0x006420e4(param_1);
    goto LAB_00721cfc;
  }
  if ((long)param_4 < 0) {
    if ((0 < (int)(uint)param_4) && (fVar2 = param_5[4], fVar2 != 0.0)) goto LAB_00721d34;
    goto LAB_0072228c;
  }
  fVar2 = (float)((uint)param_4 & 0xf);
  if ((param_4 & 0xf) == 0) goto LAB_0072228c;
LAB_00721d34:
  uVar6 = (int)fVar2 - 1;
  uVar9 = uVar6 == 0xe;
  if (0xe < uVar6) {
    func_0x00729ee4();
    param_1 = puVar11;
    goto LAB_00721cfc;
  }
  pcVar8 = *(code **)(param_5 + 2);
  fVar2 = *param_5;
  lVar13 = *(long *)param_5;
  puVar15 = *(undefined2 **)param_5;
  uVar7 = *(undefined8 *)param_5;
  uVar14 = *(undefined8 *)param_5;
  puVar12 = *(undefined8 **)param_5;
  switch(uVar6) {
  case 0:
    param_1 = (undefined8 *)auStack_270;
    if ((int)fVar2 < 0) {
      param_1 = (undefined8 *)((long)auStack_270 + 1);
      auStack_270[0] = 0x2d;
    }
    uVar9 = fVar2 == 0.0;
    fVar3 = (float)-(int)fVar2;
    if (-1 < (int)fVar2) {
      fVar3 = fVar2;
    }
    func_0x0072a294();
    func_0x00723bf8(param_1,fVar3,puVar11);
    func_0x00729950();
    break;
  case 1:
    func_0x0072a294();
    param_1 = (undefined8 *)auStack_270;
    func_0x00723bf8(param_1,fVar2,puVar11);
    func_0x00729950();
    break;
  case 2:
    param_1 = (undefined8 *)auStack_270;
    if ((int)param_5[1] < 0) {
      param_1 = (undefined8 *)((long)auStack_270 + 1);
      auStack_270[0] = 0x2d;
    }
    uVar9 = lVar13 == 0;
    lVar17 = -lVar13;
    if (-1 < lVar13) {
      lVar17 = lVar13;
    }
    func_0x00729fe0();
    func_0x00723c7c(param_1,lVar17,puVar11);
    func_0x00729950();
    break;
  case 3:
    func_0x00729fe0();
    param_1 = (undefined8 *)auStack_270;
    func_0x00723c7c(param_1,uVar14,puVar11);
    func_0x00729950();
    break;
  case 4:
    param_1 = (undefined8 *)auStack_270;
    if ((long)pcVar8 < 0) {
      param_1 = (undefined8 *)((long)auStack_270 + 1);
      auStack_270[0] = 0x2d;
    }
    uVar24 = (long)pcVar8 >> 0x3f;
    lVar17 = (*(ulong *)param_5 ^ uVar24) - uVar24;
    uVar9 = lVar17 == 0;
    lVar21 = ((ulong)pcVar8 ^ uVar24) - (uVar24 + ((*(ulong *)param_5 ^ uVar24) < uVar24));
    lVar13 = lVar17;
    FUN_00723cd4(lVar17,lVar21);
    FUN_00723d5c(param_1,lVar17,lVar21,lVar13);
    func_0x00729950();
    break;
  case 5:
    uVar14 = uVar7;
    FUN_00723cd4(uVar7,pcVar8);
    param_1 = (undefined8 *)auStack_270;
    FUN_00723d5c(param_1,uVar7,pcVar8,uVar14);
    func_0x00729950();
    break;
  case 6:
    uVar9 = ((uint)fVar2 & 1) == 0;
    lVar17 = 4;
    if ((bool)uVar9) {
      lVar17 = 5;
    }
    pcVar4 = "true";
    if ((bool)uVar9) {
      pcVar4 = "false";
    }
    _memcpy(auStack_270,pcVar4,lVar17);
    FUN_0052fd1c(param_1,auStack_270,(long)auStack_270 + lVar17);
    break;
  case 7:
    auStack_270[0] = SUB41(fVar2,0);
    FUN_0052fd1c(param_1,auStack_270,(long)auStack_270 + 1);
    break;
  case 8:
    func_0x00729ee4();
    if ((((uint)fVar2 ^ 0xffffffff) & 0x7f800000) == 0) {
      uVar9 = ABS(fVar2) == INFINITY;
      FUN_00723df0(param_1,uVar9,&UNK_0083ce4c,(uint)fVar2 >> 0x17 & 0x100);
      break;
    }
    FUN_00722620(ABS(fVar2));
    uVar24 = (ulong)puVar11 >> 0x20;
    puVar12 = puVar11;
    FUN_00721bf0();
    iVar10 = (int)puVar12;
    iVar22 = iVar10 + (int)((ulong)puVar11 >> 0x20);
    if (iVar22 - 0x11U < 0xffffffec) {
      uVar6 = iVar22 - 1;
      uVar9 = iVar10 == 1;
      func_0x00729b74();
      param_1 = puVar12;
      if ((int)fVar2 < 0) {
        func_0x007298e0();
        param_1 = (undefined8 *)((long)puVar12 + 1);
        *(undefined1 *)puVar12 = extraout_w8;
      }
      func_0x00723f54();
      puVar20 = (undefined1 *)((long)param_1 + 1);
      *(undefined1 *)param_1 = 0x65;
      func_0x0072975c(uStack_58);
      if ((bool)uVar9) {
        uVar9 = 0x2d;
        if (-1 < (int)uVar6) {
          uVar9 = 0x2b;
        }
        uVar19 = -uVar6;
        if (-1 < (int)uVar6) {
          uVar19 = uVar6;
        }
        puVar15 = (undefined2 *)(puVar20 + 1);
        *puVar20 = uVar9;
        if (99 < uVar19) {
          lVar17 = (ulong)(uVar19 / 100) * 2;
          puVar16 = puVar15;
          if (999 < uVar19) {
            puVar16 = (undefined2 *)(puVar20 + 2);
            puVar20[1] = (&UNK_0083ccd4)[lVar17];
          }
          puVar15 = (undefined2 *)((long)puVar16 + 1);
          *(undefined *)puVar16 = (&UNK_0083ccd5)[lVar17];
          uVar19 = uVar19 % 100;
        }
        *puVar15 = *(undefined2 *)(&UNK_0083ccd4 + (ulong)uVar19 * 2);
        return (undefined8 *)(puVar15 + 1);
      }
    }
    else {
      if ((long)puVar11 < 0) {
        uVar9 = iVar22 == 1;
        if (0 < iVar22) {
          func_0x00729b74();
          func_0x00729b0c();
          param_1 = puVar12;
          if ((int)fVar2 < 0) {
            func_0x007298e0();
            param_1 = (undefined8 *)((long)puVar12 + 1);
            *(undefined1 *)puVar12 = extraout_w8_01;
          }
          func_0x00723f54();
          func_0x0072975c(uStack_58);
          if ((bool)uVar9) goto code_r0x00722268;
          goto LAB_00722288;
        }
        uVar9 = iVar10 == 0;
        iVar23 = 0;
        if (!(bool)uVar9) {
          iVar23 = -iVar22;
        }
        func_0x00729b74();
        func_0x00729b0c();
        param_1 = puVar12;
        if ((int)fVar2 < 0) {
          func_0x007298e0();
          param_1 = (undefined8 *)((long)puVar12 + 1);
          *(undefined1 *)puVar12 = extraout_w8_02;
        }
        puVar20 = (undefined1 *)((long)param_1 + 1);
        *(undefined1 *)param_1 = 0x30;
        if (iVar23 != 0 || iVar10 != 0) {
          *(undefined1 *)((long)param_1 + 1) = 0x2e;
          param_1 = (undefined8 *)((long)param_1 + 2);
          while( true ) {
            uVar9 = iVar23 + -1 == 0;
            if (iVar23 < 1) break;
            *(undefined1 *)param_1 = 0x30;
            param_1 = (undefined8 *)((long)param_1 + 1);
            iVar23 = iVar23 + -1;
          }
          func_0x0072a34c(param_1,puVar20);
        }
      }
      else {
        puVar20 = (undefined1 *)(uVar24 + (uint)(iVar10 - ((int)fVar2 >> 0x1f)));
        func_0x00729b74();
        func_0x00729b0c();
        param_1 = puVar12;
        if ((int)fVar2 < 0) {
          func_0x007298e0();
          param_1 = (undefined8 *)((long)puVar12 + 1);
          *(undefined1 *)puVar12 = extraout_w8_00;
        }
        func_0x0072a34c();
        while( true ) {
          iVar22 = (int)uVar24;
          uVar6 = iVar22 - 1;
          uVar9 = uVar6 == 0;
          uVar24 = (ulong)uVar6;
          if (iVar22 < 1) break;
          *puVar20 = 0x30;
          puVar20 = puVar20 + 1;
        }
      }
      func_0x0072975c(uStack_58);
      if ((bool)uVar9) {
code_r0x00722268:
        puVar18 = &UNK_0083ce56;
        func_0x00729d0c();
        bVar5 = puVar18[4];
        if (bVar5 == 1) {
          for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
            *(undefined1 *)unaff_x19 = *unaff_x20;
            unaff_x19 = (undefined8 *)((long)unaff_x19 + 1);
          }
        }
        else {
          for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -1) {
            if (bVar5 != 0) {
              func_0x0072a134();
              _memmove();
            }
            unaff_x19 = (undefined8 *)((long)unaff_x19 + (ulong)bVar5);
          }
        }
        return unaff_x19;
      }
    }
    goto LAB_00722288;
  case 9:
    func_0x00729ec4();
    uVar9 = (extraout_x9_01 & 0x7ff00000) == 0;
    if ((bool)uVar9) {
      func_0x0072a3bc();
      func_0x0072a310();
      param_1 = puVar11;
    }
    else {
      func_0x00729f54(fVar2);
      auStack_270 = (undefined1  [8])puVar11;
      lStack_268 = lVar17;
      func_0x0072a27c();
      param_1 = puVar11;
    }
    break;
  case 10:
    func_0x00729ec4();
    uVar9 = (extraout_x9_02 & 0x7ff00000) == 0;
    if ((bool)uVar9) {
      func_0x0072a3bc();
      func_0x0072a310();
      param_1 = puVar11;
    }
    else {
      func_0x00729f54(fVar2);
      auStack_270 = (undefined1  [8])puVar11;
      lStack_268 = lVar17;
      func_0x0072a27c();
      param_1 = puVar11;
    }
    break;
  case 0xb:
    func_0x00729ee4();
    if (puVar12 == (undefined8 *)0x0) goto code_r0x00722290;
    _strlen(puVar12);
    func_0x0072a134();
    func_0x0072442c();
    param_1 = puVar12;
    break;
  case 0xc:
    func_0x00729ee4();
    func_0x0072442c(param_1);
    break;
  case 0xd:
    func_0x00729ee4();
    FUN_00724460();
    uVar24 = ((ulong)puVar15 & 0xffffffff) + 2;
    func_0x00729b74();
    param_1 = (undefined8 *)(puVar15 + 1);
    *puVar15 = 0x7830;
    func_0x0072975c(uStack_58);
    if ((bool)uVar9) {
      func_0x00729e1c();
      puVar20 = (undefined1 *)((long)param_1 + (long)iVar22);
      do {
        puVar20 = puVar20 + -1;
        *puVar20 = (&UNK_0091db3e)[uVar24 & 0xf];
        bVar1 = 0xf < uVar24;
        uVar24 = uVar24 >> 4;
      } while (bVar1);
      return param_1;
    }
    goto LAB_00722288;
  case 0xe:
    func_0x0072a438(*(undefined8 *)param_5);
    lStack_268 = extraout_x9_00 + 0x20;
    uStack_258 = 500;
    uStack_260 = 0;
    auStack_270 = (undefined1  [8])extraout_x8_01;
    (*pcVar8)();
    func_0x0072a2dc();
    goto code_r0x00721cf4;
  }
LAB_00721cfc:
  func_0x0072975c(uStack_58);
  if ((bool)uVar9) {
    return param_1;
  }
LAB_00722288:
  ___stack_chk_fail();
  puVar11 = param_1;
LAB_0072228c:
  func_0x007299d8();
code_r0x00722290:
  func_0x00729b24();
  FUN_007217e8();
  ___cxa_throw(puVar11,&PTR_DAT_00a1f600,0x721c1c);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x7222c0);
  (*pcVar8)();
}



/* Entry: 00722310; end: 00722387;  */

bool FUN_00722310(short *param_1)

{
  return *param_1 == 0x7d7b;
}



/* Entry: 00722388; end: 0072261f;  */

void FUN_00722388(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  code *pcVar9;
  int extraout_w8;
  uint uVar10;
  uint uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  uint uVar13;
  int extraout_w9;
  uint uVar14;
  char *unaff_x20;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  char *pcStack_98;
  undefined1 *puStack_90;
  
  lVar15 = param_4;
  func_0x00729efc();
  func_0x00729854();
  if (lVar15 == 2) {
    pcVar7 = unaff_x20;
    FUN_00722310();
    uVar19 = (uint)param_1;
    if ((int)pcVar7 == 0) goto LAB_007223e0;
    if ((long)param_5 < 0) {
      if (((int)(uint)param_5 < 1) || (uVar10 = param_6[4], uVar10 == 0)) goto LAB_0072261c;
LAB_0072250c:
      uVar5 = uVar10 - 1 == 0xe;
      switch(uVar10 - 1) {
      case 0:
        FUN_00724868();
        break;
      case 1:
        func_0x00723aa4();
        break;
      case 2:
        func_0x00729ef0();
        FUN_007249a0();
        break;
      case 3:
        func_0x00729ef0();
        func_0x00723b04();
        break;
      case 4:
        func_0x00729ef0();
        FUN_00724a68();
        break;
      case 5:
        func_0x00729ef0();
        FUN_00724b60();
        break;
      case 6:
        FUN_00724bd0();
        break;
      case 7:
        func_0x00724c18();
        break;
      case 8:
        uVar19 = *param_6;
        FUN_00724c4c();
        break;
      case 9:
        uVar19 = (uint)*(undefined8 *)param_6;
        FUN_0072515c();
        break;
      case 10:
        uVar19 = (uint)*(undefined8 *)param_6;
        func_0x00725560();
        break;
      case 0xb:
        func_0x00729ef0();
        FUN_007255c0();
        break;
      case 0xc:
        func_0x00729ef0();
        FUN_00724bf4();
        break;
      case 0xd:
        func_0x00729ef0();
        FUN_0072560c();
        break;
      case 0xe:
        func_0x00724818(&stack0xffffffffffffff78,*(undefined8 *)param_6,*(undefined8 *)(param_6 + 2)
                       );
      }
      goto LAB_007224d8;
    }
    uVar10 = (uint)param_5 & 0xf;
    if ((param_5 & 0xf) != 0) goto LAB_0072250c;
  }
  else {
LAB_007223e0:
    pcVar7 = unaff_x20 + param_4;
    if (param_4 < 0x20) {
LAB_007223fc:
      do {
        uVar19 = (uint)param_1;
        pcVar8 = unaff_x20;
        do {
          unaff_x20 = pcVar8;
          uVar5 = unaff_x20 == pcVar7;
          if ((bool)uVar5) {
            func_0x0072a31c(&stack0xffffffffffffff78);
            goto LAB_007224d8;
          }
          if (*unaff_x20 == '}') {
            bVar4 = unaff_x20 + 1 == pcVar7;
            if (bVar4) goto LAB_00722618;
            func_0x0072a104();
            uVar19 = (uint)param_1;
            if (!bVar4) goto LAB_00722618;
            func_0x00729fb4();
            unaff_x20 = unaff_x20 + 2;
            goto LAB_007223fc;
          }
          pcVar8 = unaff_x20 + 1;
        } while (*unaff_x20 != '{');
        func_0x00729fb4();
        FUN_007257c0(unaff_x20,pcVar7,&stack0xffffffffffffff78);
      } while( true );
    }
    puStack_90 = &stack0xffffffffffffff78;
    while( true ) {
      uVar19 = (uint)param_1;
      uVar5 = 1;
      if (unaff_x20 == pcVar7) break;
      uVar5 = *unaff_x20 == '{';
      pcStack_98 = unaff_x20;
      if (!(bool)uVar5) {
        pcVar8 = unaff_x20 + 1;
        FUN_007244a8(pcVar8,pcVar7,0x7b,&pcStack_98);
        uVar19 = (uint)param_1;
        if ((int)pcVar8 == 0) {
          FUN_007271d4(&puStack_90,unaff_x20,pcVar7);
          break;
        }
      }
      FUN_007271d4(&puStack_90,unaff_x20,pcStack_98);
      FUN_007257c0(pcStack_98,pcVar7,&stack0xffffffffffffff78);
      unaff_x20 = pcStack_98;
    }
LAB_007224d8:
    func_0x0072975c(extraout_x8);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
LAB_00722618:
    func_0x0072a1f4();
  }
LAB_0072261c:
  func_0x007299d8();
  pcVar9 = FUN_00722620;
  func_0x0072a4fc();
  uVar10 = uVar19 & 0x7fffff;
  if ((uVar19 & 0x7f800000) == 0) {
    if (uVar10 == 0) {
      uVar19 = 0;
      uVar12 = 0;
      goto LAB_0072293c;
    }
    uVar11 = 0xffffff6b;
LAB_00722660:
    uVar19 = (int)(uVar11 * 0x134413) >> 0x16;
    lVar15 = ((long)((ulong)(uVar11 * 0x134413) << 0x20) >> 0x36) + -1;
    uVar17 = *(ulong *)(&UNK_0083c780 + (ulong)(0x20 - uVar19) * 8);
    uVar14 = uVar11 + ((int)(uVar19 * -0x1a934f + 0x1a934f) >> 0x13);
    uVar2 = uVar10 * 2;
    uVar6 = uVar10 << 1 | 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    uVar13 = SUB164(ZEXT416(uVar6 << (ulong)(uVar14 & 0x1f)) * auVar3,8);
    uVar16 = uVar13 / 100;
    uVar13 = uVar13 % 100;
    uVar18 = (uint)(uVar17 >> ((ulong)~uVar14 & 0x3f));
    if (uVar18 > uVar13 || uVar13 == uVar18) {
      if (uVar18 <= uVar13) {
        if ((((uVar10 & 1) == 0) &&
            (uVar12 = (ulong)(uVar2 - 1), func_0x0072a180(), (uVar12 & 1) != 0)) ||
           ((uVar17 * (uVar2 - 1) >> ((ulong)-uVar14 & 0x3f) & 1) != 0)) goto LAB_00722824;
      }
      else {
        if ((((uVar10 & 1) == 0) || (uVar13 != 0)) || (func_0x0072a180(), uVar6 == 0)) {
LAB_00722824:
          uVar10 = 0;
          uVar11 = (uVar16 & 0xaaaaaaaa | 0x80) >> 1 | (uVar16 & 0x55555555) << 1;
          uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
          while ((uVar14 = uVar11 & 6, (int)uVar10 < (int)(uVar11 - 1) &&
                 (uVar14 = uVar10, uVar16 * -0x3d70a3d7 < 0xa3d70a4))) {
            uVar10 = uVar10 + 2;
            uVar16 = uVar16 * -0x3d70a3d7;
          }
          uVar10 = uVar14;
          uVar6 = uVar16;
          if (uVar16 * -0x33333333 < 0x33333334) {
            uVar10 = uVar14 + 1;
            uVar6 = uVar16 * -0x33333333;
          }
          if (uVar14 < uVar11) {
            uVar16 = uVar6;
            uVar14 = uVar10;
          }
          goto LAB_00722934;
        }
        uVar16 = uVar16 - 1;
        uVar13 = 100;
      }
    }
    uVar10 = (uVar13 - (uVar18 >> 1)) + 5;
    if ((uVar10 & 1) == 0) {
      uVar6 = (uVar10 >> 1) * 0xcccd;
      uVar10 = uVar16 * 10 + (uVar6 >> 0x12);
      uVar12 = (ulong)uVar10;
      if ((uVar6 >> 2 & 0x3fff) < 0xccd) {
        if ((uVar17 * uVar2 >> ((ulong)-uVar14 & 0x3f) & 1) == 0) {
          uVar12 = (ulong)(uVar10 - 1);
        }
        else if ((int)uVar11 < 0x28) {
          if ((int)uVar11 < 7) {
            if (((int)uVar11 < -2) &&
               (uVar14 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1,
               uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2,
               uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4,
               uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8,
               (int)LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10) <= (int)((int)lVar15 - uVar11)))
            goto LAB_0072293c;
          }
          else {
            lVar15 = lVar15 * 8;
            if (*(uint *)(&UNK_0083c5ac + lVar15) < *(int *)(&UNK_0083c5a8 + lVar15) * uVar2)
            goto LAB_0072293c;
          }
          uVar12 = (ulong)(uVar10 & 0xfffffffe);
        }
      }
    }
    else {
      uVar12 = (ulong)(uVar16 * 10 + (uVar10 * 0xcccd >> 0x13));
    }
  }
  else {
    uVar11 = ((uVar19 & 0x7f800000) >> 0x17) - 0x96;
    if (uVar10 != 0) {
      uVar10 = uVar10 | 0x800000;
      goto LAB_00722660;
    }
    func_0x0072a358();
    uVar19 = (int)(extraout_w9 + uVar11 * extraout_w8) >> 0x16;
    iVar1 = uVar11 + ((int)(uVar19 * -0x1a934f) >> 0x13);
    uVar12 = *(ulong *)(&UNK_0083c780 + (ulong)(0x1f - uVar19) * 8);
    uVar17 = (ulong)(0x28 - iVar1);
    uVar10 = (uint)(uVar12 - (uVar12 >> 0x19) >> (uVar17 & 0x3f));
    if ((uVar11 & 0xfffffffe) != 2) {
      uVar10 = uVar10 + 1;
    }
    uVar16 = (uint)(uVar12 + (uVar12 >> 0x18) >> (uVar17 & 0x3f)) / 10;
    if (uVar16 * 10 < uVar10) {
      uVar14 = (int)(uVar12 >> ((ulong)(0x27 - iVar1) & 0x3f)) + 1U >> 1;
      if (uVar11 == 0xffffffdd) {
        uVar12 = (ulong)(uVar14 & 0x7ffffffe);
      }
      else {
        if (uVar14 < uVar10) {
          uVar14 = uVar14 + 1;
        }
        uVar12 = (ulong)uVar14;
      }
      goto LAB_0072293c;
    }
    uVar10 = 0;
    uVar11 = (uVar16 & 0xaaaaaaaa | 0x80) >> 1 | (uVar16 & 0x55555555) << 1;
    uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10);
    while ((uVar14 = uVar11 & 6, (int)uVar10 < (int)(uVar11 - 1) &&
           (uVar14 = uVar10, uVar16 * -0x3d70a3d7 < 0xa3d70a4))) {
      uVar10 = uVar10 + 2;
      uVar16 = uVar16 * -0x3d70a3d7;
    }
    uVar10 = uVar14;
    uVar6 = uVar16;
    if (uVar16 * -0x33333333 < 0x33333334) {
      uVar10 = uVar14 + 1;
      uVar6 = uVar16 * -0x33333333;
    }
    if (uVar14 < uVar11) {
      uVar16 = uVar6;
      uVar14 = uVar10;
    }
LAB_00722934:
    uVar12 = (ulong)(uVar16 >> (ulong)(uVar14 & 0x1f));
    uVar19 = uVar19 + 1 + uVar14;
  }
LAB_0072293c:
  func_0x00729fe8(uVar12 | (ulong)uVar19 << 0x20,pcVar9);
  return;
}



/* Entry: 00722620; end: 00722983;  */

void FUN_00722620(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int extraout_w8;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int extraout_w9;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 unaff_x30;
  
  func_0x0072a4fc();
  uVar5 = param_1 & 0x7fffff;
  if ((param_1 & 0x7f800000) == 0) {
    if (uVar5 == 0) {
      uVar11 = 0;
      uVar7 = 0;
      goto LAB_0072293c;
    }
    uVar6 = 0xffffff6b;
LAB_00722660:
    uVar11 = (int)(uVar6 * 0x134413) >> 0x16;
    lVar10 = ((long)((ulong)(uVar6 * 0x134413) << 0x20) >> 0x36) + -1;
    uVar13 = *(ulong *)(&UNK_0083c780 + (ulong)(0x20 - uVar11) * 8);
    uVar9 = uVar6 + ((int)(uVar11 * -0x1a934f + 0x1a934f) >> 0x13);
    uVar2 = uVar5 * 2;
    uVar4 = uVar5 << 1 | 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar13;
    uVar8 = SUB164(ZEXT416(uVar4 << (ulong)(uVar9 & 0x1f)) * auVar3,8);
    uVar12 = uVar8 / 100;
    uVar8 = uVar8 % 100;
    uVar14 = (uint)(uVar13 >> ((ulong)~uVar9 & 0x3f));
    if (uVar14 > uVar8 || uVar8 == uVar14) {
      if (uVar14 <= uVar8) {
        if ((((uVar5 & 1) == 0) && (uVar7 = (ulong)(uVar2 - 1), func_0x0072a180(), (uVar7 & 1) != 0)
            ) || ((uVar13 * (uVar2 - 1) >> ((ulong)-uVar9 & 0x3f) & 1) != 0)) goto LAB_00722824;
      }
      else {
        if ((((uVar5 & 1) == 0) || (uVar8 != 0)) || (func_0x0072a180(), uVar4 == 0)) {
LAB_00722824:
          uVar5 = 0;
          uVar6 = (uVar12 & 0xaaaaaaaa | 0x80) >> 1 | (uVar12 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          while ((uVar9 = uVar6 & 6, (int)uVar5 < (int)(uVar6 - 1) &&
                 (uVar9 = uVar5, uVar12 * -0x3d70a3d7 < 0xa3d70a4))) {
            uVar5 = uVar5 + 2;
            uVar12 = uVar12 * -0x3d70a3d7;
          }
          uVar5 = uVar9;
          uVar4 = uVar12;
          if (uVar12 * -0x33333333 < 0x33333334) {
            uVar5 = uVar9 + 1;
            uVar4 = uVar12 * -0x33333333;
          }
          if (uVar9 < uVar6) {
            uVar12 = uVar4;
            uVar9 = uVar5;
          }
          goto LAB_00722934;
        }
        uVar12 = uVar12 - 1;
        uVar8 = 100;
      }
    }
    uVar5 = (uVar8 - (uVar14 >> 1)) + 5;
    if ((uVar5 & 1) == 0) {
      uVar4 = (uVar5 >> 1) * 0xcccd;
      uVar5 = uVar12 * 10 + (uVar4 >> 0x12);
      uVar7 = (ulong)uVar5;
      if ((uVar4 >> 2 & 0x3fff) < 0xccd) {
        if ((uVar13 * uVar2 >> ((ulong)-uVar9 & 0x3f) & 1) == 0) {
          uVar7 = (ulong)(uVar5 - 1);
        }
        else if ((int)uVar6 < 0x28) {
          if ((int)uVar6 < 7) {
            if (((int)uVar6 < -2) &&
               (uVar9 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1,
               uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2,
               uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4,
               uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8,
               (int)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10) <= (int)((int)lVar10 - uVar6)))
            goto LAB_0072293c;
          }
          else {
            lVar10 = lVar10 * 8;
            if (*(uint *)(&UNK_0083c5ac + lVar10) < *(int *)(&UNK_0083c5a8 + lVar10) * uVar2)
            goto LAB_0072293c;
          }
          uVar7 = (ulong)(uVar5 & 0xfffffffe);
        }
      }
    }
    else {
      uVar7 = (ulong)(uVar12 * 10 + (uVar5 * 0xcccd >> 0x13));
    }
  }
  else {
    uVar6 = ((param_1 & 0x7f800000) >> 0x17) - 0x96;
    if (uVar5 != 0) {
      uVar5 = uVar5 | 0x800000;
      goto LAB_00722660;
    }
    func_0x0072a358();
    uVar11 = (int)(extraout_w9 + uVar6 * extraout_w8) >> 0x16;
    iVar1 = uVar6 + ((int)(uVar11 * -0x1a934f) >> 0x13);
    uVar7 = *(ulong *)(&UNK_0083c780 + (ulong)(0x1f - uVar11) * 8);
    uVar13 = (ulong)(0x28 - iVar1);
    uVar5 = (uint)(uVar7 - (uVar7 >> 0x19) >> (uVar13 & 0x3f));
    if ((uVar6 & 0xfffffffe) != 2) {
      uVar5 = uVar5 + 1;
    }
    uVar12 = (uint)(uVar7 + (uVar7 >> 0x18) >> (uVar13 & 0x3f)) / 10;
    if (uVar12 * 10 < uVar5) {
      uVar9 = (int)(uVar7 >> ((ulong)(0x27 - iVar1) & 0x3f)) + 1U >> 1;
      if (uVar6 == 0xffffffdd) {
        uVar7 = (ulong)(uVar9 & 0x7ffffffe);
      }
      else {
        if (uVar9 < uVar5) {
          uVar9 = uVar9 + 1;
        }
        uVar7 = (ulong)uVar9;
      }
      goto LAB_0072293c;
    }
    uVar5 = 0;
    uVar6 = (uVar12 & 0xaaaaaaaa | 0x80) >> 1 | (uVar12 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    while ((uVar9 = uVar6 & 6, (int)uVar5 < (int)(uVar6 - 1) &&
           (uVar9 = uVar5, uVar12 * -0x3d70a3d7 < 0xa3d70a4))) {
      uVar5 = uVar5 + 2;
      uVar12 = uVar12 * -0x3d70a3d7;
    }
    uVar5 = uVar9;
    uVar4 = uVar12;
    if (uVar12 * -0x33333333 < 0x33333334) {
      uVar5 = uVar9 + 1;
      uVar4 = uVar12 * -0x33333333;
    }
    if (uVar9 < uVar6) {
      uVar12 = uVar4;
      uVar9 = uVar5;
    }
LAB_00722934:
    uVar7 = (ulong)(uVar12 >> (ulong)(uVar9 & 0x1f));
    uVar11 = uVar11 + 1 + uVar9;
  }
LAB_0072293c:
  func_0x00729fe8(uVar7 | (ulong)uVar11 << 0x20,unaff_x30);
  return;
}



/* Entry: 00722984; end: 007229c3;  */

bool FUN_00722984(int param_1,uint param_2,int param_3)

{
  if (-2 < (int)param_2) {
    if ((int)param_2 < 7) {
      return true;
    }
    if (param_2 < 0x28) {
      return (uint)(*(int *)(&UNK_0083c5a8 + (long)param_3 * 8) * param_1) <=
             *(uint *)(&UNK_0083c5ac + (long)param_3 * 8);
    }
  }
  return false;
}



/* Entry: 007229c4; end: 00722e87;  */

undefined1  [16] FUN_007229c4(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int extraout_w8_03;
  int extraout_w8_04;
  int extraout_w8_05;
  ulong uVar8;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int iVar9;
  ulong uVar10;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar11;
  uint extraout_w12;
  uint extraout_w12_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  int iVar12;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  
  uVar15 = param_1 & 0xfffffffffffff;
  if ((param_1 & 0x7ff0000000000000) == 0) {
    if (uVar15 == 0) {
      iVar20 = 0;
      uVar8 = 0;
      goto LAB_00722d14;
    }
    uVar14 = 0xfffffbce;
LAB_00722a10:
    iVar20 = (int)(uVar14 * 0x134413) >> 0x16;
    lVar18 = ((long)((ulong)(uVar14 * 0x134413) << 0x20) >> 0x36) + -2;
    uVar13 = (ulong)(2U - iVar20);
    FUN_00722e88();
    uVar21 = uVar14 + ((int)((2U - iVar20) * 0x1a934f) >> 0x13);
    uVar17 = (ulong)uVar21;
    uVar11 = uVar15 * 2;
    uVar19 = uVar15 << 1 | 1;
    uVar8 = uVar19 << (uVar17 & 0x3f);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    uVar10 = SUB168(auVar1 * auVar4,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar8;
    if (CARRY8(SUB168(auVar2 * auVar5,8),param_3 * uVar8)) {
      uVar10 = uVar10 + 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    uVar8 = SUB168(auVar3 * ZEXT816(0x83126e978d4fdf3c),8) >> 9;
    uVar16 = (int)uVar10 + (int)uVar8 * -1000;
    uVar21 = (uint)(param_3 >> ((ulong)~uVar21 & 0x3f));
    if (uVar16 <= uVar21) {
      if (uVar21 == uVar16) {
        uVar19 = uVar11 - 1;
        if ((((uVar15 & 1) == 0) && (uVar15 = uVar19, func_0x0072a288(), (uVar15 & 1) != 0)) ||
           (func_0x00722f98(uVar19,uVar13,param_3,uVar17), (int)uVar19 != 0)) goto LAB_00722b74;
      }
      else {
        if (((uVar16 != 0) || ((uVar15 & 1) == 0)) || (func_0x0072a288(), (int)uVar19 == 0)) {
LAB_00722b74:
          func_0x0072a0e0();
          bVar6 = 7 < extraout_x10;
          bVar7 = extraout_x10 == 8;
          if (bVar6) {
            func_0x00729c78();
            uVar15 = extraout_x10_00;
            iVar20 = extraout_w8_01;
            if (!bVar6 || bVar7) {
              func_0x0072a11c();
              uVar15 = extraout_x10_01;
              uVar8 = extraout_x13;
              while( true ) {
                uVar14 = (uint)uVar15;
                iVar12 = (int)uVar8;
                iVar9 = extraout_w9_00;
                iVar20 = extraout_w8_02;
                if ((extraout_w9_00 == iVar12) ||
                   (uVar15 = (ulong)(uVar14 * extraout_w11), iVar9 = iVar12,
                   extraout_w12 < uVar14 * extraout_w11)) break;
                uVar8 = (ulong)(iVar12 + 1);
              }
              goto LAB_00722d08;
            }
          }
          else {
            uVar15 = extraout_x10;
            iVar20 = extraout_w8_00;
            if (extraout_x10 == 0) goto LAB_00722ccc;
          }
          uVar14 = (uint)(uVar8 / 100000000);
LAB_00722cac:
          iVar9 = (int)uVar8 + uVar14 * -100000000;
          if (0x33333333 < (uint)(iVar9 * -0x33333333)) goto LAB_00722ccc;
          if (uVar15 == 1 || 0x33333333 < (uint)(iVar9 * -0x3d70a3d7)) {
            uVar8 = (ulong)((uint)(iVar9 * -0x33333333) >> 1) + (ulong)uVar14 * 10000000;
            iVar9 = 1;
          }
          else if (uVar15 == 2 || 0x33333333 < (uint)(iVar9 * 0x26e978d5)) {
            uVar8 = (ulong)((uint)(iVar9 * -0x3d70a3d7) >> 2) + (ulong)uVar14 * 1000000;
            iVar9 = 2;
          }
          else if (uVar15 == 3 || 0x33333333 < (uint)(iVar9 * 0x3afb7e91)) {
            uVar8 = (ulong)((uint)(iVar9 * 0x26e978d5) >> 3) + (ulong)uVar14 * 100000;
            iVar9 = 3;
          }
          else if (uVar15 == 4 || 0x33333333 < (uint)(iVar9 * 0xbcbe61d)) {
            uVar8 = (ulong)((uint)(iVar9 * 0x3afb7e91) >> 4) + (ulong)uVar14 * 10000;
            iVar9 = 4;
          }
          else if (uVar15 == 5 || 0x33333333 < (uint)(iVar9 * 0x68c26139)) {
            uVar8 = (ulong)((uint)(iVar9 * 0xbcbe61d) >> 5) + (ulong)uVar14 * 1000;
            iVar9 = 5;
          }
          else if (uVar15 == 6 || 0x33333333 < (uint)(iVar9 * -0x5172b95b)) {
            uVar8 = (ulong)((uint)(iVar9 * 0x68c26139) >> 6) + (ulong)uVar14 * 100;
            iVar9 = 6;
          }
          else {
            uVar8 = (ulong)((uint)(iVar9 * -0x5172b95b) >> 7) + (ulong)uVar14 * 10;
            iVar9 = 7;
          }
          goto LAB_00722d10;
        }
        uVar8 = uVar8 - 1;
        uVar16 = 1000;
      }
    }
    uVar16 = uVar16 - (uVar21 >> 1);
    uVar21 = uVar16 + 0x32;
    if ((uVar21 & 3) == 0) {
      uVar21 = (uVar21 >> 2) * 0xa429;
      uVar8 = uVar8 * 10 + (ulong)(uVar21 >> 0x14);
      if ((uVar21 & 0xff) < 0xb) {
        uVar15 = uVar11;
        func_0x00722f98(uVar11,uVar13,param_3,uVar17);
        if ((uint)uVar15 == (uVar16 & 1)) {
          if ((int)uVar14 < 0x57) {
            if ((int)uVar14 < 10) {
              if (((int)uVar14 < -4) &&
                 (uVar15 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1,
                 uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2,
                 uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4,
                 uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8,
                 uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10,
                 (int)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) <= (int)((int)lVar18 - uVar14)))
              goto LAB_00722d14;
            }
            else {
              lVar18 = lVar18 * 0x10;
              if (*(ulong *)(&UNK_0083c608 + lVar18) <= *(long *)(&UNK_0083c600 + lVar18) * uVar11
                  && *(long *)(&UNK_0083c600 + lVar18) * uVar11 - *(ulong *)(&UNK_0083c608 + lVar18)
                     != 0) goto LAB_00722d14;
            }
            uVar8 = uVar8 & 0xfffffffffffffffe;
          }
        }
        else {
          uVar8 = uVar8 - 1;
        }
      }
    }
    else {
      uVar8 = uVar8 * 10 + (ulong)(uVar21 * 0xa3d8 >> 0x16);
    }
  }
  else {
    uVar14 = (uint)((param_1 & 0x7ff0000000000000) >> 0x34) - 0x433;
    if (uVar15 != 0) {
      uVar15 = uVar15 | 0x10000000000000;
      goto LAB_00722a10;
    }
    func_0x0072a358();
    iVar20 = (int)(extraout_w9 + uVar14 * extraout_w8) >> 0x16;
    iVar9 = uVar14 + (iVar20 * -0x1a934f >> 0x13);
    FUN_00722e88(-iVar20);
    uVar8 = (ulong)(0xb - iVar9);
    uVar15 = param_3 - (param_3 >> 0x36) >> (uVar8 & 0x3f);
    if ((uVar14 & 0xfffffffe) != 2) {
      uVar15 = uVar15 + 1;
    }
    uVar8 = (param_3 + (param_3 >> 0x35) >> (uVar8 & 0x3f)) / 10;
    if (uVar8 * 10 < uVar15) {
      uVar8 = (param_3 >> ((ulong)(10 - iVar9) & 0x3f)) + 1 >> 1;
      if (uVar14 == 0xffffffb3) {
        uVar8 = uVar8 & 0x7ffffffffffffffe;
      }
      else if (uVar8 < uVar15) {
        uVar8 = uVar8 + 1;
      }
      goto LAB_00722d14;
    }
    func_0x0072a0e0();
    bVar6 = 7 < extraout_x10_02;
    bVar7 = extraout_x10_02 == 8;
    if (bVar6) {
      func_0x00729c78();
      uVar15 = extraout_x10_03;
      uVar19 = extraout_x12_00;
      iVar20 = extraout_w8_04;
      if (bVar6 && !bVar7) goto LAB_00722c9c;
      func_0x0072a11c();
      uVar15 = extraout_x10_04;
      uVar8 = extraout_x13_00;
      while( true ) {
        uVar14 = (uint)uVar15;
        iVar12 = (int)uVar8;
        iVar9 = extraout_w9_01;
        iVar20 = extraout_w8_05;
        if ((extraout_w9_01 == iVar12) ||
           (uVar15 = (ulong)(uVar14 * extraout_w11_00), iVar9 = iVar12,
           extraout_w12_00 < uVar14 * extraout_w11_00)) break;
        uVar8 = (ulong)(iVar12 + 1);
      }
LAB_00722d08:
      uVar8 = (ulong)(uVar14 >> (ulong)(iVar9 - 8U & 0x1f));
    }
    else {
      uVar15 = extraout_x10_02;
      uVar19 = extraout_x12;
      iVar20 = extraout_w8_03;
      if (extraout_x10_02 != 0) {
LAB_00722c9c:
        uVar14 = (uint)(uVar19 / 1000000000);
        goto LAB_00722cac;
      }
LAB_00722ccc:
      iVar9 = 0;
    }
LAB_00722d10:
    iVar20 = iVar20 + iVar9;
  }
LAB_00722d14:
  auVar22._8_4_ = iVar20;
  auVar22._0_8_ = uVar8;
  auVar22._12_4_ = 0;
  return auVar22;
}



/* Entry: 00722e88; end: 00722fbb;  */

undefined1  [16] FUN_00722e88(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  uVar1 = param_1 + 0x124;
  uVar4 = (uVar1 & 0xffff) / 0x1b;
  iVar2 = uVar4 * 0x1b + -0x124;
  lVar14 = (ulong)uVar4 * 0x10;
  lVar9 = *(long *)(&UNK_0083c9f0 + lVar14);
  uVar15 = *(ulong *)(&UNK_0083c9f8 + lVar14);
  iVar3 = param_1 - iVar2;
  if (iVar3 != 0) {
    uVar12 = *(ulong *)(&UNK_0083cb60 + (long)iVar3 * 8);
    uVar4 = (param_1 * 0x1a934f >> 0x13) - (iVar3 + (iVar2 * 0x1a934f >> 0x13));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar12;
    lVar14 = SUB168(auVar5 * auVar7,8);
    uVar10 = (ulong)(param_1 < 5);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = lVar9 - uVar10;
    uVar13 = SUB168(auVar6 * auVar8,8);
    uVar11 = uVar13 + uVar15 * uVar12;
    if (CARRY8(uVar13,uVar15 * uVar12)) {
      lVar14 = lVar14 + 1;
    }
    uVar15 = (lVar14 << 1) << ((ulong)~uVar4 & 0x3f) | uVar11 >> ((ulong)uVar4 & 0x3f);
    uVar11 = uVar11 * 2 << ((ulong)~uVar4 & 0x3f) |
             uVar12 * (lVar9 - uVar10) >> ((ulong)uVar4 & 0x3f);
    if (CARRY8(uVar11,uVar10)) {
      uVar15 = uVar15 + 1;
    }
    lVar9 = uVar11 + uVar10 +
            (ulong)(*(uint *)(&UNK_0083cc38 + (ulong)(uVar1 >> 4) * 4) >>
                    (ulong)((uVar1 & 0xf) << 1) & 3);
  }
  auVar16._8_8_ = uVar15;
  auVar16._0_8_ = lVar9;
  return auVar16;
}



/* Entry: 00722fbc; end: 00723007;  */

void FUN_00722fbc(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x0072a21c();
  func_0x0072a214();
  (**(code **)(*plVar1 + 0x28))(param_1);
  func_0x00729d30();
  return;
}



/* Entry: 00723008; end: 00723013;  */

void FUN_00723008(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_009988b8)
            (param_1,PTR___ZNSt3__18numpunctIcE2idE_00998ca0);
  return;
}



/* Entry: 00723014; end: 0072305b;  */

long * FUN_00723014(long *param_1)

{
  func_0x0072a21c(param_1,param_1);
  func_0x0072a214();
  (**(code **)(*param_1 + 0x20))();
  func_0x00729d30();
  return param_1;
}



/* Entry: 0072305c; end: 007230a3;  */

long * FUN_0072305c(long *param_1)

{
  func_0x0072a21c(param_1,param_1);
  func_0x0072a214();
  (**(code **)(*param_1 + 0x18))();
  func_0x00729d30();
  return param_1;
}



/* Entry: 007230a4; end: 007232ef;  */

int FUN_007230a4(uint param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined1 uVar14;
  char *pcVar15;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 uStack_77;
  undefined1 auStack_76 [6];
  byte *pbVar7;
  char *pcVar16;
  
  uVar4 = (uint)(param_2 >> 0x20);
  uVar5 = uVar4 & 0xff;
  uVar3 = param_1 - 1;
  if (0x7fffffff < param_1) {
    uVar3 = 5;
  }
  if ((param_2 >> 0x20 & 0xfe) != 0) {
    uVar3 = param_1;
  }
  puVar11 = (undefined2 *)auStack_76;
  uStack_77 = 0x25;
  if ((uVar5 == 3) && ((uVar4 >> 0x14 & 1) != 0)) {
    puVar11 = (undefined2 *)(auStack_76 + 1);
    auStack_76[0] = 0x23;
  }
  puVar12 = puVar11;
  if (-1 < (int)uVar3) {
    puVar12 = puVar11 + 1;
    *puVar11 = 0x2a2e;
  }
  uVar9 = 0x61;
  if ((param_2 >> 0x20 & 0x10000) != 0) {
    uVar9 = 0x41;
  }
  uVar14 = 0x65;
  if (uVar5 == 2) {
    uVar14 = 0x66;
  }
  if (uVar5 != 3) {
    uVar9 = uVar14;
  }
  *(undefined1 *)puVar12 = uVar9;
  *(undefined1 *)((long)puVar12 + 1) = 0;
  lVar20 = *(long *)(param_3 + 0x10);
LAB_00723160:
  do {
    lVar21 = *(long *)(param_3 + 8);
    uVar1 = lVar21 + lVar20;
    uVar19 = *(long *)(param_3 + 0x18) - lVar20;
    uVar18 = uVar1;
    _snprintf(uVar1,uVar19,&uStack_77);
    if ((int)uVar18 < 0) goto LAB_007231bc;
    uVar8 = uVar18 & 0xffffffff;
    if ((uVar18 & 0xffffffff) < uVar19) {
      if (uVar5 == 2) {
        if (param_1 != 0) {
          iVar17 = -1;
          pbVar6 = (byte *)(uVar1 + uVar8);
          do {
            pbVar7 = pbVar6;
            pbVar6 = pbVar7 + -1;
            iVar17 = iVar17 + 1;
          } while (*pbVar6 - 0x30 < 10);
          _memmove(pbVar6,pbVar7,iVar17);
          func_0x00729c04();
          return -iVar17;
        }
      }
      else if (uVar5 != 3) {
        lVar10 = 1 - (uVar18 & 0xffffffff);
        lVar13 = -2;
        pcVar15 = (char *)(lVar21 + lVar20 + (uVar18 & 0xffffffff));
        do {
          pcVar16 = pcVar15;
          pcVar15 = pcVar16 + -1;
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + 1;
        } while (*pcVar15 != 'e');
        iVar17 = 0;
        lVar13 = -lVar13;
        uVar18 = -lVar10;
        do {
          iVar17 = (int)*(char *)(uVar1 + uVar8 + lVar13) + iVar17 * 10 + -0x30;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0);
        iVar2 = -iVar17;
        if (*pcVar16 != '-') {
          iVar2 = iVar17;
        }
        if (lVar10 == 0) {
          uVar18 = 0;
        }
        else {
          do {
            pcVar15 = (char *)(lVar21 + lVar20 + uVar18);
            uVar18 = uVar18 - 1;
          } while (*pcVar15 == '0');
          _memmove(uVar1 + 1,uVar1 + 2,uVar18 & 0xffffffff);
        }
        func_0x00729c04();
        return iVar2 - (int)uVar18;
      }
      func_0x00729c04();
      return 0;
    }
  } while (lVar20 + 1 + uVar8 <= *(ulong *)(param_3 + 0x18));
  goto LAB_007231cc;
LAB_007231bc:
  if (*(long *)(param_3 + 0x18) != -1) {
LAB_007231cc:
    func_0x00729f44();
  }
  goto LAB_00723160;
}



/* Entry: 007232f0; end: 00723aa3;  */

/* WARNING: Possible PIC construction at 0x00723600: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00723604) */
/* WARNING: Type propagation algorithm not settling */

undefined ********
FUN_007232f0(double param_1,undefined ********param_2,undefined ********param_3,
            undefined ********param_4)

{
  bool bVar1;
  uint uVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  byte *pbVar8;
  undefined ********ppppppppuVar10;
  undefined ***pppuVar11;
  int iVar12;
  ulong uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined ********ppppppppuVar16;
  uint uVar17;
  uint uVar18;
  undefined *******pppppppuVar19;
  long lVar20;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined2 *puVar21;
  undefined2 *puVar22;
  long lVar23;
  undefined8 extraout_x9;
  undefined1 uVar24;
  char *pcVar25;
  ulong uVar27;
  undefined ********unaff_x21;
  int iVar28;
  undefined ********unaff_x22;
  ulong uVar29;
  undefined ***pppuVar30;
  undefined *******pppppppuVar31;
  ulong uVar32;
  ulong uVar33;
  undefined *******pppppppuVar34;
  ulong uVar35;
  undefined8 unaff_x30;
  undefined8 uVar36;
  undefined1 auStack_3b2 [10];
  undefined ********ppppppppuStack_3a8;
  undefined ********ppppppppuStack_3a0;
  undefined ********ppppppppuStack_398;
  undefined1 *puStack_390;
  undefined8 uStack_388;
  uint uStack_37c;
  ulong uStack_378;
  undefined *******pppppppuStack_370;
  uint uStack_368;
  uint uStack_364;
  int iStack_360;
  undefined1 uStack_35c;
  uint uStack_354;
  long lStack_350;
  int iStack_348;
  undefined **ppuStack_340;
  undefined1 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [136];
  undefined4 uStack_298;
  undefined **ppuStack_290;
  undefined1 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [136];
  undefined4 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [136];
  undefined4 uStack_138;
  undefined ********ppppppppuStack_130;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  double dStack_100;
  double dStack_f8;
  undefined1 uStack_e7;
  undefined1 auStack_e6 [6];
  byte *pbVar9;
  char *pcVar26;
  
  ppppppppuVar10 = param_2;
  func_0x00729854();
  uVar33 = (ulong)param_3 & 0xff00000000;
  uVar5 = param_1 == 0.0;
  uVar18 = (uint)param_2;
  if (param_1 <= 0.0) {
    uVar5 = 0 < (int)uVar18 && uVar33 == 0x200000000;
    if ((bool)uVar5) {
      ppppppppuVar16 = (undefined ********)((ulong)param_2 & 0xffffffff);
      func_0x00729c04();
      pppppppuVar31 = param_4[1];
      while( true ) {
        iVar12 = (int)param_2;
        uVar17 = iVar12 - 1;
        uVar5 = uVar17 == 0;
        param_2 = (undefined ********)(ulong)uVar17;
        if (iVar12 < 1) break;
        *(undefined1 *)pppppppuVar31 = 0x30;
        pppppppuVar31 = (undefined *******)((long)pppppppuVar31 + 1);
      }
      param_3 = (undefined ********)(ulong)-uVar18;
    }
    else {
      ppppppppuStack_130 = (undefined ********)CONCAT71(ppppppppuStack_130._1_7_,0x30);
      ppppppppuVar16 = (undefined ********)&ppppppppuStack_130;
      func_0x00729a8c();
      param_3 = (undefined ********)0x0;
    }
LAB_007239c8:
    func_0x0072975c(extraout_x8);
    param_2 = param_3;
    if ((bool)uVar5) {
      func_0x0072a4e0(param_3,unaff_x30);
      return param_3;
    }
  }
  else {
    uVar17 = (uint)((ulong)param_3 >> 0x20);
    if ((uVar17 >> 0x13 & 1) != 0) {
      if ((int)uVar18 < 0) {
        if ((uVar17 >> 0x12 & 1) != 0) {
          FUN_00722620((float)param_1);
          param_2 = (undefined ********)((ulong)ppppppppuVar10 >> 0x20);
          uVar36 = 0x723604;
          ppppppppuVar16 = ppppppppuVar10;
          ppppppppuStack_398 = param_4;
          goto FUN_00723aa4;
        }
        FUN_007229c4(param_1);
        ppppppppuVar16 = ppppppppuVar10;
        func_0x00723b04();
        ppppppppuVar10 = param_4;
      }
      else {
        uStack_378 = (ulong)param_3 >> 0x20;
        FUN_00728c24(param_1,&ppppppppuStack_130);
        unaff_x21 = ppppppppuStack_130;
        puVar14 = puStack_128;
        func_0x00723b60();
        iVar12 = (int)puVar14;
        uVar27 = (ulong)(-iVar12 - 0x7c);
        puVar15 = &uStack_354;
        func_0x00723b88(uVar27,puVar15);
        func_0x00723be0(unaff_x21,(ulong)puVar14 & 0xffffffff,uVar27,(ulong)puVar15 & 0xffffffff);
        if (0x2fe < uVar18) {
          uVar18 = 0x2ff;
        }
        pppppppuStack_370 = param_4[1];
        uStack_368 = 0;
        iStack_360 = -uStack_354;
        uVar32 = (ulong)(uint)-iVar12;
        uVar13 = (ulong)unaff_x21 >> (uVar32 & 0x3f);
        uVar27 = uVar13;
        uStack_364 = uVar18;
        uStack_35c = uVar33 == 0x200000000;
        FUN_00721bf0();
        ppppppppuVar10 = &pppppppuStack_370;
        FUN_00728c5c(ppppppppuVar10,
                     *(long *)(&UNK_0083c0c0 + (long)(int)uVar27 * 8) << (uVar32 & 0x3f),
                     (ulong)unaff_x21 / 10,uVar27);
        if ((int)ppppppppuVar10 == 0) {
          uStack_37c = uStack_354;
          lVar20 = 1L << (uVar32 & 0x3f);
          uVar35 = lVar20 - 1;
          unaff_x21 = (undefined ********)(uVar35 & (ulong)unaff_x21);
          uVar29 = (long)(int)uVar27;
          do {
            uVar18 = (uint)uVar13;
            switch((int)uVar29) {
            case 1:
              uVar13 = 0;
              goto LAB_00723564;
            case 2:
              uVar13 = (ulong)(uVar18 % 10);
              uVar18 = uVar18 / 10;
              goto LAB_00723564;
            case 3:
              uVar17 = 100;
              break;
            case 4:
              uVar17 = 1000;
              break;
            case 5:
              uVar17 = 10000;
              break;
            case 6:
              uVar17 = 100000;
              break;
            case 7:
              uVar17 = 1000000;
              break;
            case 8:
              uVar17 = 10000000;
              break;
            case 9:
              uVar17 = 100000000;
              break;
            case 10:
              uVar17 = 1000000000;
              break;
            default:
              uVar18 = 0;
              goto LAB_00723564;
            }
            uVar2 = 0;
            if (uVar17 != 0) {
              uVar2 = uVar18 / uVar17;
            }
            uVar13 = (ulong)(uVar18 - uVar2 * uVar17);
            uVar18 = uVar2;
LAB_00723564:
            ppppppppuVar10 = &pppppppuStack_370;
            func_0x0072a23c(ppppppppuVar10,(int)(char)((char)uVar18 + '0'),
                            *(long *)(&UNK_0083c0c0 + uVar29 * 8) << (uVar32 & 0x3f),
                            (undefined1 *)
                            (((uVar13 & 0xffffffff) << (uVar32 & 0x3f)) + (long)unaff_x21));
            uVar4 = uStack_378;
            if ((int)ppppppppuVar10 != 0) {
              uVar27 = (ulong)((int)uVar29 - 1);
              goto LAB_00723610;
            }
            uVar27 = uVar29 - 1;
            bVar1 = 1 < (long)uVar29;
            uVar29 = uVar27;
          } while (bVar1);
          lVar23 = 1;
          do {
            uVar13 = (long)unaff_x21 * 10;
            lVar23 = lVar23 * 10;
            unaff_x21 = (undefined ********)(uVar35 & (long)unaff_x21 * 10);
            uVar27 = (ulong)((int)uVar27 - 1);
            ppppppppuVar10 = &pppppppuStack_370;
            func_0x00728ce4(ppppppppuVar10,(int)(char)((char)(uVar13 >> (uVar32 & 0x3f)) + '0'),
                            lVar20,unaff_x21,lVar23,0);
          } while ((int)ppppppppuVar10 == 0);
LAB_00723610:
          uVar18 = (uint)uVar4;
          uStack_354 = uStack_37c;
        }
        else {
          uVar18 = (uint)uStack_378;
        }
        uVar17 = uStack_364;
        if ((int)ppppppppuVar10 == 2) {
          unaff_x21 = (undefined ********)(ulong)uStack_364;
          uVar2 = (int)uVar27 + ~uStack_354 + uStack_368;
          puStack_128 = auStack_110;
          ppppppppuStack_130 = (undefined ********)&PTR_FUN_00a1f650;
          uStack_118 = 0x20;
          uStack_120 = 0;
          puStack_1d8 = auStack_1c0;
          ppuStack_1e0 = &PTR_FUN_00a1f650;
          uStack_1c8 = 0x20;
          uStack_1d0 = 0;
          uStack_138 = 0;
          puStack_288 = auStack_270;
          ppuStack_290 = &PTR_FUN_00a1f650;
          uStack_278 = 0x20;
          uStack_280 = 0;
          uStack_1e8 = 0;
          puStack_338 = auStack_320;
          ppuStack_340 = &PTR_FUN_00a1f650;
          uStack_328 = 0x20;
          uStack_330 = 0;
          uStack_298 = 0;
          lStack_350 = 0;
          iStack_348 = 0;
          if ((uVar18 >> 0x12 & 1) == 0) {
            iVar12 = (int)&lStack_350;
            FUN_00728c24(param_1);
          }
          else {
            iVar12 = (int)&lStack_350;
            func_0x00728e54((float)param_1);
          }
          iVar28 = iStack_348;
          lVar20 = lStack_350;
          uVar7 = 1;
          if (iVar12 != 0) {
            uVar7 = 2;
          }
          lVar23 = lStack_350 << (ulong)uVar7;
          if (iStack_348 < 0) {
            if ((int)uVar2 < 0) {
              FUN_00728f4c(&ppppppppuStack_130,-uVar2);
              FUN_007291b0(&ppuStack_290,&ppppppppuStack_130);
              if (iVar12 == 0) {
                pppuVar30 = (undefined ***)0x0;
              }
              else {
                FUN_007291b0(&ppuStack_340,&ppppppppuStack_130);
                pppuVar30 = &ppuStack_340;
                func_0x00728ed0(&ppuStack_340,1);
              }
              FUN_0072961c(&ppppppppuStack_130,lVar23);
              func_0x00729bd8(&ppuStack_1e0);
              pppuVar11 = &ppuStack_1e0;
              func_0x00728ed0(pppuVar11,uVar7 - iVar28);
            }
            else {
              func_0x00729f6c(&ppppppppuStack_130);
              func_0x0072a1b0();
              func_0x00728ed0(&ppuStack_1e0,uVar7 - iVar28);
              pppuVar11 = &ppuStack_290;
              func_0x00729bd8();
              if (iVar12 == 0) {
                pppuVar30 = (undefined ***)0x0;
              }
              else {
                pppuVar30 = &ppuStack_340;
                pppuVar11 = &ppuStack_340;
                func_0x00728e90(pppuVar11,2);
              }
            }
          }
          else {
            func_0x00729f6c(&ppppppppuStack_130);
            func_0x00728ed0(&ppppppppuStack_130,iVar28);
            func_0x00729bd8(&ppuStack_290);
            func_0x00728ed0(&ppuStack_290,iVar28);
            if (iVar12 == 0) {
              pppuVar30 = (undefined ***)0x0;
            }
            else {
              func_0x00729bd8(&ppuStack_340);
              pppuVar30 = &ppuStack_340;
              func_0x00728ed0(&ppuStack_340,iVar28 + 1);
            }
            func_0x0072a1b0();
            pppuVar11 = &ppuStack_1e0;
            func_0x00728ed0(pppuVar11,(ulong)uVar7);
          }
          if ((int)uVar17 < 0) {
            lVar23 = 0;
            pppuVar3 = &ppuStack_290;
            if (pppuVar30 != (undefined ***)0x0) {
              pppuVar3 = pppuVar30;
            }
            pppppppuVar31 = param_4[1];
            uVar18 = (uint)lVar20 & 1;
            uStack_37c = uVar2;
            while( true ) {
              func_0x00729df4();
              ppppppppuVar10 = (undefined ********)&ppppppppuStack_130;
              FUN_00729308(ppppppppuVar10,&ppuStack_290);
              ppppppppuVar16 = (undefined ********)&ppppppppuStack_130;
              FUN_00729398(ppppppppuVar16,pppuVar3,&ppuStack_1e0);
              *(char *)((long)pppppppuVar31 + lVar23) = (char)pppuVar11 + '0';
              iVar12 = (int)ppppppppuVar16;
              if ((int)ppppppppuVar10 < (int)(uVar18 ^ 1) || (int)uVar18 <= iVar12) break;
              func_0x00729b2c(&ppppppppuStack_130);
              pppuVar11 = &ppuStack_290;
              func_0x00729b2c();
              if (pppuVar30 != (undefined ***)0x0) {
                pppuVar11 = pppuVar30;
                func_0x00729b2c();
              }
              lVar23 = lVar23 + 1;
            }
            unaff_x21 = (undefined ********)(lVar23 + 1);
            if (((int)(uVar18 ^ 1) <= (int)ppppppppuVar10) ||
               (((int)uVar18 <= iVar12 &&
                ((func_0x00729afc(), 0 < iVar12 || ((iVar12 == 0 && (((ulong)pppuVar11 & 1) != 0))))
                )))) {
              *(char *)((long)pppppppuVar31 + lVar23) = (char)pppuVar11 + '1';
            }
            ppppppppuVar16 = (undefined ********)((ulong)unaff_x21 & 0xffffffff);
            func_0x00729c04();
            param_3 = (undefined ********)(ulong)(uStack_37c - (int)lVar23);
            uVar18 = (uint)uStack_378;
          }
          else {
            uVar27 = (long)(int)uVar17 - 1;
            uVar2 = uVar2 - (int)uVar27;
            param_3 = (undefined ********)(ulong)uVar2;
            if (uVar17 == 0) {
              ppppppppuVar16 = (undefined ********)((long)&MACH_HEADER.magic + 1);
              FUN_00721b24(param_4);
              iVar12 = (int)&ppuStack_1e0;
              func_0x00729b2c();
              func_0x00729afc();
              uVar5 = 0x30;
              if (0 < iVar12) {
                uVar5 = 0x31;
              }
              *(undefined1 *)param_4[1] = uVar5;
            }
            else {
              ppppppppuVar10 = param_4;
              ppppppppuVar16 = unaff_x21;
              FUN_00721b24();
              for (uVar13 = 0; cVar6 = (char)ppppppppuVar10, (uVar27 & 0xffffffff) != uVar13;
                  uVar13 = uVar13 + 1) {
                func_0x00729df4();
                *(char *)((long)param_4[1] + uVar13) = cVar6 + '0';
                ppppppppuVar10 = (undefined ********)&ppppppppuStack_130;
                func_0x00729b2c();
              }
              func_0x00729df4();
              iVar12 = (int)ppppppppuVar10;
              iVar28 = iVar12;
              func_0x00729afc();
              if ((0 < iVar28) || ((iVar28 == 0 && (((ulong)ppppppppuVar10 & 1) != 0)))) {
                if (iVar12 == 9) {
                  *(undefined1 *)((long)param_4[1] + uVar27) = 0x3a;
                  uVar27 = (ulong)(uVar17 - 2);
                  uVar36 = 0x30;
                  while( true ) {
                    uVar17 = (int)uVar27 + 1;
                    pppppppuVar31 = param_4[1];
                    if (((int)uVar17 < 1) || (*(char *)((long)pppppppuVar31 + (ulong)uVar17) != ':')
                       ) break;
                    *(char *)((long)pppppppuVar31 + (ulong)uVar17) = (char)uVar36;
                    func_0x0072a36c();
                    uVar27 = extraout_x8_00;
                    uVar36 = extraout_x9;
                  }
                  if (*(char *)pppppppuVar31 == ':') {
                    *(char *)pppppppuVar31 = '1';
                    param_3 = (undefined ********)(ulong)(uVar2 + 1);
                  }
                  goto LAB_0072395c;
                }
                iVar12 = iVar12 + 1;
              }
              *(char *)((long)param_4[1] + uVar27) = (char)iVar12 + '0';
            }
          }
LAB_0072395c:
          func_0x00729600(&ppuStack_340);
          func_0x00729600(&ppuStack_290);
          func_0x00729600(&ppuStack_1e0);
          ppppppppuVar10 = (undefined ********)&ppppppppuStack_130;
          func_0x00729600();
        }
        else {
          ppppppppuVar16 = (undefined ********)(ulong)uStack_368;
          param_3 = (undefined ********)(ulong)(uint)(iStack_360 + (int)uVar27);
          func_0x00729c04();
        }
        uVar5 = uVar33 == 0x200000000;
        unaff_x22 = param_3;
        if ((!(bool)uVar5) && ((uVar18 >> 0x14 & 1) == 0)) {
          ppppppppuVar16 = (undefined ********)param_4[2];
          iVar12 = (int)ppppppppuVar16;
          iVar28 = (int)param_3;
          for (; (param_3 = (undefined ********)(ulong)(uint)(iVar28 + iVar12),
                 ppppppppuVar16 != (undefined ********)0x0 &&
                 (uVar5 = *(char *)((long)param_4[1] + -1 + (long)ppppppppuVar16) == '0',
                 param_3 = unaff_x22, (bool)uVar5));
              ppppppppuVar16 = (undefined ********)((long)ppppppppuVar16 - 1)) {
            unaff_x22 = (undefined ********)(ulong)((int)unaff_x22 + 1);
          }
          func_0x00729c04();
        }
      }
      goto LAB_007239c8;
    }
    func_0x0072975c(extraout_x8);
    ppppppppuVar16 = param_3;
    if ((bool)uVar5) {
      func_0x0072a4e0();
      uVar17 = (uint)((ulong)param_3 >> 0x20);
      uVar2 = uVar17 & 0xff;
      uVar7 = (uint)param_2;
      uVar18 = uVar7 - 1;
      if (0x7fffffff < uVar7) {
        uVar18 = 5;
      }
      if (((ulong)param_3 >> 0x20 & 0xfe) != 0) {
        uVar18 = uVar7;
      }
      puVar21 = (undefined2 *)auStack_e6;
      uStack_e7 = 0x25;
      if ((uVar2 == 3) && ((uVar17 >> 0x14 & 1) != 0)) {
        puVar21 = (undefined2 *)(auStack_e6 + 1);
        auStack_e6[0] = 0x23;
      }
      puVar22 = puVar21;
      if (-1 < (int)uVar18) {
        puVar22 = puVar21 + 1;
        *puVar21 = 0x2a2e;
      }
      uVar5 = 0x61;
      if (((ulong)param_3 >> 0x20 & 0x10000) != 0) {
        uVar5 = 0x41;
      }
      uVar24 = 0x65;
      if (uVar2 == 2) {
        uVar24 = 0x66;
      }
      if (uVar2 != 3) {
        uVar5 = uVar24;
      }
      *(undefined1 *)puVar22 = uVar5;
      *(undefined1 *)((long)puVar22 + 1) = 0;
      pppppppuVar31 = param_4[2];
LAB_00723160:
      do {
        pppppppuVar34 = param_4[1];
        uVar33 = (long)pppppppuVar34 + (long)pppppppuVar31;
        pppppppuVar19 = param_4[3];
        dStack_100 = param_1;
        if (-1 < (int)uVar18) {
          dStack_100 = (double)(ulong)uVar18;
          dStack_f8 = param_1;
        }
        uVar27 = uVar33;
        _snprintf(uVar33,(long)pppppppuVar19 - (long)pppppppuVar31,&uStack_e7);
        if ((int)uVar27 < 0) goto LAB_007231bc;
        uVar13 = uVar27 & 0xffffffff;
        if ((uVar27 & 0xffffffff) < (ulong)((long)pppppppuVar19 - (long)pppppppuVar31)) {
          if (uVar2 == 2) {
            if (uVar7 != 0) {
              iVar12 = -1;
              pbVar8 = (byte *)(uVar33 + uVar13);
              do {
                pbVar9 = pbVar8;
                pbVar8 = pbVar9 + -1;
                iVar12 = iVar12 + 1;
              } while (*pbVar8 - 0x30 < 10);
              _memmove(pbVar8,pbVar9,iVar12);
              func_0x00729c04();
              return (undefined ********)(ulong)(uint)-iVar12;
            }
          }
          else if (uVar2 != 3) {
            lVar20 = 1 - (uVar27 & 0xffffffff);
            lVar23 = -2;
            pcVar25 = (char *)((long)pppppppuVar34 + (long)pppppppuVar31 + (uVar27 & 0xffffffff));
            do {
              pcVar26 = pcVar25;
              pcVar25 = pcVar26 + -1;
              lVar23 = lVar23 + 1;
              lVar20 = lVar20 + 1;
            } while (*pcVar25 != 'e');
            iVar12 = 0;
            lVar23 = -lVar23;
            uVar27 = -lVar20;
            do {
              iVar12 = (int)*(char *)(uVar33 + uVar13 + lVar23) + iVar12 * 10 + -0x30;
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0);
            iVar28 = -iVar12;
            if (*pcVar26 != '-') {
              iVar28 = iVar12;
            }
            if (lVar20 == 0) {
              uVar27 = 0;
            }
            else {
              do {
                pcVar25 = (char *)((long)pppppppuVar34 + (long)pppppppuVar31 + uVar27);
                uVar27 = uVar27 - 1;
              } while (*pcVar25 == '0');
              _memmove(uVar33 + 1,uVar33 + 2,uVar27 & 0xffffffff);
            }
            func_0x00729c04();
            return (undefined ********)(ulong)(uint)(iVar28 - (int)uVar27);
          }
          func_0x00729c04();
          return (undefined ********)0x0;
        }
      } while ((undefined *******)((long)pppppppuVar31 + uVar13 + 1) <= param_4[3]);
      goto LAB_007231cc;
    }
  }
  uVar5 = 0;
  ___stack_chk_fail();
  func_0x00729600(&ppuStack_340);
  func_0x00729600(&ppuStack_290);
  func_0x00729600(&ppuStack_1e0);
  param_4 = (undefined ********)&ppppppppuStack_130;
  func_0x00729600(param_4);
  uVar36 = 0x723aa4;
  func_0x00729bc8();
  ppppppppuStack_398 = ppppppppuVar10;
FUN_00723aa4:
  auStack_3b2._2_8_ = unaff_x22;
  ppppppppuStack_3a8 = unaff_x21;
  ppppppppuStack_3a0 = param_2;
  puStack_390 = &stack0xfffffffffffffff0;
  uStack_388 = uVar36;
  FUN_00721bf0();
  func_0x00729eb0();
  func_0x0072491c();
  if (ppppppppuVar16 != (undefined ********)0x0) {
    func_0x00723bf8();
    return param_4;
  }
  func_0x0072a474();
  func_0x00729854();
  ppppppppuStack_3a8 = (undefined ********)extraout_x8_01;
  func_0x00723bf8(auStack_3b2);
  ppppppppuVar10 = (undefined ********)auStack_3b2;
  func_0x00729d78();
  func_0x0072975c(ppppppppuStack_3a8);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    ppppppppuVar16 = ppppppppuVar10;
    func_0x00729fe0();
    func_0x00729e10((ulong)unaff_x22 >> 0x3f);
    func_0x0072a2d4();
    if (ppppppppuVar16 == (undefined ********)0x0) {
      if ((long)unaff_x22 < 0) {
        func_0x007298b4();
      }
      func_0x00729e1c(ppppppppuVar10);
      FUN_00724a20();
    }
    else {
      if ((long)unaff_x22 < 0) {
        *(undefined1 *)ppppppppuVar16 = 0x2d;
      }
      func_0x00729e1c();
      func_0x00723c7c();
    }
    return ppppppppuVar10;
  }
  return unaff_x22;
LAB_007231bc:
  if (param_4[3] != (undefined *******)0xffffffffffffffff) {
LAB_007231cc:
    func_0x00729f44();
  }
  goto LAB_00723160;
}



/* Entry: 00723aa4; end: 00723b5f;  */

undefined1 * FUN_00723aa4(undefined1 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 *unaff_x22;
  undefined1 auStack_32 [2];
  
  FUN_00721bf0();
  func_0x00729eb0();
  func_0x0072491c();
  if (param_2 != 0) {
    func_0x00723bf8();
    return param_1;
  }
  func_0x0072a474();
  func_0x00729854();
  func_0x00723bf8(auStack_32);
  puVar1 = auStack_32;
  func_0x00729d78();
  func_0x0072975c(extraout_x8);
  if ((bool)in_ZR) {
    return unaff_x22;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00729fe0();
  func_0x00729e10((ulong)unaff_x22 >> 0x3f);
  func_0x0072a2d4();
  if (puVar2 == (undefined1 *)0x0) {
    if ((long)unaff_x22 < 0) {
      func_0x007298b4();
    }
    func_0x00729e1c(puVar1);
    FUN_00724a20();
  }
  else {
    if ((long)unaff_x22 < 0) {
      *puVar2 = 0x2d;
    }
    func_0x00729e1c();
    func_0x00723c7c();
  }
  return puVar1;
}



/* Entry: 00723b60; end: 00723cd3;  */

undefined1  [16] FUN_00723b60(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  while( true ) {
    if ((param_1 >> 0x34 & 1) != 0) break;
    param_1 = param_1 << 1;
    param_2 = (ulong)((int)param_2 - 1) | param_2 & 0xffffffff00000000;
  }
  auVar1._0_8_ = param_1 << 0xb;
  auVar1._8_8_ = (ulong)((int)param_2 - 0xb) | param_2 & 0xffffffff00000000;
  return auVar1;
}



/* Entry: 00723cd4; end: 00723d5b;  */

int FUN_00723cd4(ulong param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = 4;
  while( true ) {
    if (param_2 == 0 && !CARRY8(param_2 - 1,(ulong)(9 < param_1))) {
      return iVar1 + -3;
    }
    if (CARRY8(~(param_2 + (param_1 >= 100)),(ulong)(param_1 < 100))) {
      return iVar1 + -2;
    }
    if (CARRY8(~(param_2 + (param_1 >= 1000)),(ulong)(param_1 < 1000))) {
      return iVar1 + -1;
    }
    if (param_2 >> 4 == 0 &&
        !CARRY8((param_2 >> 4) - 1,(ulong)(0x270 < (param_1 >> 4 | param_2 << 0x3c)))) break;
    ___udivti3();
    iVar1 = iVar1 + 4;
  }
  return iVar1;
}



/* Entry: 00723d5c; end: 00723def;  */

undefined2 * FUN_00723d5c(long param_1,ulong param_2,long param_3,int param_4)

{
  undefined2 *puVar1;
  ulong uVar2;
  undefined2 *puVar3;
  
  puVar1 = (undefined2 *)(param_1 + param_4);
  while (puVar3 = puVar1 + -1, param_3 != 0 || CARRY8(param_3 - 1,(ulong)(99 < param_2))) {
    uVar2 = param_2;
    ___udivti3(param_2,param_3,100,0);
    *puVar3 = *(undefined2 *)(&UNK_0083ccd4 + (param_2 + uVar2 * -100) * 2);
    param_2 = uVar2;
    puVar1 = puVar3;
  }
  if (CARRY8(~(param_3 + (ulong)(param_2 >= 10)),(ulong)(param_2 < 10))) {
    *(byte *)((long)puVar1 + -1) = (byte)param_2 | 0x30;
  }
  else {
    *puVar3 = *(undefined2 *)(&UNK_0083ccd4 + param_2 * 2);
  }
  return (undefined2 *)(param_1 + param_4);
}



/* Entry: 00723df0; end: 00723eaf;  */

undefined2 * FUN_00723df0(undefined2 *param_1,int param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 extraout_w8;
  char *extraout_x8;
  ulong extraout_x9;
  char *extraout_x9_00;
  ulong unaff_x24;
  
  uVar1 = 3;
  if ((param_4 >> 8 & 0xff) != 0) {
    uVar1 = 4;
  }
  puVar5 = param_1;
  func_0x00729e68(uVar1);
  FUN_00723eb0();
  func_0x00729ce8();
  puVar6 = puVar5;
  if ((param_4 >> 8 & 0xff) != 0) {
    func_0x007298e0();
    puVar6 = (undefined2 *)((long)puVar5 + 1);
    *(undefined1 *)puVar5 = extraout_w8;
  }
  func_0x0072a3a8();
  bVar4 = (param_4 & 0x10000) != 0;
  pcVar3 = extraout_x9_00;
  if (bVar4) {
    pcVar3 = extraout_x8;
  }
  pcVar2 = "nan";
  if (bVar4) {
    pcVar2 = "NAN";
  }
  if (param_2 == 0) {
    pcVar3 = pcVar2;
  }
  *puVar6 = *(undefined2 *)pcVar3;
  *(char *)(puVar6 + 1) = pcVar3[2];
  FUN_00723ef4((long)puVar6 + 3,unaff_x24 - (unaff_x24 >> (extraout_x9 & 0x3f)),param_3 + 10);
  return param_1;
}



/* Entry: 00723eb0; end: 00723ef3;  */

long FUN_00723eb0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
  }
  FUN_004625e8(param_1,lVar2 + param_2);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  return (long)plVar1 + lVar2;
}


